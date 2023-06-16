#include <stdio.h>

int ngay, ngaymh, ngaybb, ngayhd, sodien;
float tiendien1ngay, tongtiendien, tiendienmh, tiendienbb, tiendienhd, tienthua;
void tinh_tiendien(){

	tiendien1ngay = tongtiendien / ngay / 3;
	tiendienmh = tiendien1ngay * ngaymh;
	tiendienbb = tiendien1ngay * ngaybb;
	tiendienhd = tiendien1ngay * ngayhd;
	tienthua = tongtiendien - (tiendienmh + tiendienbb + tiendienhd);
	//printf("Tien thua: %.2f\n", tienthua);
	
	if(ngaymh == ngay && ngaybb != ngay && ngayhd != ngay){
		tiendienmh = tiendienmh + tienthua;
	}
	else if(ngaymh == ngay && ngaybb == ngay && ngayhd != ngay){
		tiendienmh = tiendienmh + tienthua/2;
		tiendienbb = tiendienbb + tienthua/2;
	}
	else if(ngaymh == ngay && ngaybb != ngay && ngayhd == ngay){
		tiendienmh = tiendienmh + tienthua/2;
		tiendienhd = tiendienhd + tienthua/2;
	}
	else if(ngaymh != ngay && ngaybb != ngay && ngayhd == ngay){
		tiendienhd = tiendienhd + tienthua;
	}
	else if(ngaymh != ngay && ngaybb == ngay && ngayhd == ngay){
		tiendienbb = tiendienbb + tienthua/2;
		tiendienhd = tiendienhd + tienthua/2;
	}
	else if(ngaymh != ngay && ngaybb == ngay && ngayhd != ngay){
		tiendienbb = tiendienbb + tienthua;
	}
	else if(ngaymh != ngay && ngaybb != ngay && ngayhd != ngay){
		tiendienmh = tiendienmh + (tienthua/(ngay - ngaymh)/3 * (ngay - ngaymh));
		tiendienbb = tiendienbb + (tienthua/(ngay - ngaybb)/3 * (ngay - ngaybb));
		tiendienhd = tiendienhd + (tienthua/(ngay - ngayhd)/3 * (ngay - ngayhd));
	}
	else{
		tiendienmh = tongtiendien/3;
		tiendienbb = tongtiendien/3;
		tiendienhd = tongtiendien/3;
	}

	printf("Tien dien Mai Hung: %.2f\n", tiendienmh);
	printf("Tien dien Baby: %.2f\n", tiendienbb);
	printf("Tien dien Hung den: %.2f\n", tiendienhd);
	printf("\n");
	printf("Tong tien nha Mai Hung: %.2f\n", tiendienmh + 1400000 + 200000);
	printf("Tong tien nha Baby: %.2f\n", tiendienbb + 1400000 + 200000);
	printf("Tong tien nha Hung den: %.2f\n", tiendienhd + 1400000 + 200000);
}

void xuat(){
	printf("Nhap so ngay trong thang: "); scanf("%d", &ngay);
	printf("Nhap so dien: "); scanf("%d", &sodien);
	tongtiendien = sodien * 3500;
	printf("Tong tien dien phai dong: %.2f VND\n", tongtiendien);
	printf("Nhap so ngay o: \n");
	printf("Mai Hung: ", ngaymh); scanf("%d", &ngaymh);
	printf("Baby: ", ngaybb); scanf("%d", &ngaybb);
	printf("Hung den: ", ngayhd); scanf("%d", &ngayhd);
}
main(){

	xuat();
	tinh_tiendien();
	getch();
	}

/*==============================================================*/
/* Table: _KELAS_                                               */
/*==============================================================*/
create table _KELAS_
(
   _ID_PRODI_           int not null  comment '',
   _ID_MATKUL_          varchar(10) not null  comment '',
   _JADWAL_MATKUL_      datetime not null  comment '',
   primary key (_ID_PRODI_, _ID_MATKUL_, _JADWAL_MATKUL_)
);

/*==============================================================*/
/* Table: _MAHASISWA_                                           */
/*==============================================================*/
create table _MAHASISWA_
(
   _NPM_                varchar(10) not null  comment '',
   _NAMA_MHS_           varchar(60) not null  comment '',
   _SEMESTER_           int not null  comment '',
   _KELAS_MHS_          varchar(5) not null  comment '',
   _USERNAME_MHS_       varchar(30) not null  comment '',
   _PASSWORD_           varchar(30) not null  comment '',
   primary key (_NPM_)
);

/*==============================================================*/
/* Table: _MATKUL_                                              */
/*==============================================================*/
create table _MATKUL_
(
   _ID_MATKUL_          varchar(10) not null  comment '',
   _NAMA_MATKUL_        varchar(40) not null  comment '',
   _JADWAL_MATKUL_      datetime not null  comment '',
   primary key (_ID_MATKUL_, _JADWAL_MATKUL_)
);

/*==============================================================*/
/* Table: _PRODI_                                               */
/*==============================================================*/
create table _PRODI_
(
   _ID_PRODI_           int not null  comment '',
   _NPM_                varchar(10)  comment '',
   _NAMA_PRODI_         char(10) not null  comment '',
   primary key (_ID_PRODI_)
);

alter table _KELAS_ add constraint FK__KELAS___KELAS___PRODI_ foreign key (_ID_PRODI_)
      references _PRODI_ (_ID_PRODI_) on delete restrict on update restrict;

alter table _KELAS_ add constraint FK__KELAS___KELAS_2__MATKUL_ foreign key (_ID_MATKUL_, _JADWAL_MATKUL_)
      references _MATKUL_ (_ID_MATKUL_, _JADWAL_MATKUL_) on delete restrict on update restrict;

alter table _PRODI_ add constraint FK__PRODI__RELATIONS__MAHASIS foreign key (_NPM_)
      references _MAHASISWA_ (_NPM_) on delete restrict on update restrict;


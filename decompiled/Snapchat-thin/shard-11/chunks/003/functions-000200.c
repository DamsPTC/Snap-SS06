/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1083c3760; end: 1083c3787;  */

undefined1  [16] FUN_1083c3760(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1083c3788();
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1083c3788; end: 1083c380f;  */

uint FUN_1083c3788(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 4);
  for (lVar4 = 0;
      (uVar2 = uVar1, (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) << 5 != lVar4 &&
      (uVar2 = uVar3, *(int *)(*(long *)(param_1 + 8) + lVar4) == 0)); lVar4 = lVar4 + 0x20) {
    uVar3 = uVar3 + 1;
  }
  return uVar2;
}



/* Entry: 1083c3810; end: 1083c3837;  */

undefined1  [16] FUN_1083c3810(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  FUN_1083c3838();
  auVar2._8_8_ = uVar1 & 0xffffffff;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1083c3838; end: 1083c3a2b;  */

uint FUN_1083c3838(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0;
  uVar1 = *(uint *)(param_1 + 4);
  for (lVar4 = 0;
      (uVar2 = uVar1, (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar4 != 0 &&
      (uVar2 = uVar3, *(int *)(*(long *)(param_1 + 8) + lVar4) == 0)); lVar4 = lVar4 + 0x18) {
    uVar3 = uVar3 + 1;
  }
  return uVar2;
}



/* Entry: 1083c3a2c; end: 1083c4eb3;  */

undefined8 * FUN_1083c3a2c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001083c4f88(param_1,&DAT_10f33a2d8,5,&DAT_10f3dc184,0,10);
  func_0x0001083c4f24(param_1 + 1,&DAT_10f490009,6,&DAT_10f491202,*param_1);
  func_0x0001083c4f1c(param_1 + 2,&DAT_10f490010,6,&DAT_10f491205,*param_1);
  func_0x0001083c4f2c(param_1 + 3,&DAT_10f62adf6,6,&UNK_10f491208,*param_1);
  func_0x0001083c4f98(param_1 + 4,&DAT_10f2c3473,4,&DAT_10f30a8b9,0,9);
  func_0x0001083c4f24(param_1 + 5,&DAT_10f49001d,5,&DAT_10f49120b,param_1[4]);
  func_0x0001083c4f1c(param_1 + 6,&DAT_10f490023,5,&UNK_10f49120e,param_1[4]);
  func_0x0001083c4f2c(param_1 + 7,&DAT_10f490017,5,&UNK_10f491211,param_1[4]);
  func_0x0001083c4f88(param_1 + 8,&DAT_10f62bbce,3,"i",1,7);
  func_0x0001083c4f24(param_1 + 9,&DAT_10f491214,4,&DAT_10f491219,param_1[8]);
  func_0x0001083c4f1c(param_1 + 10,&DAT_10f49121c,4,&UNK_10f491221,param_1[8]);
  func_0x0001083c4f2c(param_1 + 0xb,&DAT_10f491224,4,&UNK_10f491229,param_1[8]);
  func_0x0001083c4f88(param_1 + 0xc,&DAT_10f49122c,4,"I",2,6);
  func_0x0001083c4f24(param_1 + 0xd,&DAT_10f491231,5,&UNK_10f491237,param_1[0xc]);
  func_0x0001083c4f1c(param_1 + 0xe,&DAT_10f49123a,5,&UNK_10f491240,param_1[0xc]);
  func_0x0001083c4f2c(param_1 + 0xf,&DAT_10f491243,5,&UNK_10f491249,param_1[0xc]);
  func_0x0001083c4f98(param_1 + 0x10,&DAT_10f49124c,5,"s",1,4);
  func_0x0001083c4f24(param_1 + 0x11,&UNK_10f491252,6,&UNK_10f491259,param_1[0x10]);
  func_0x0001083c4f1c(param_1 + 0x12,&UNK_10f49125c,6,&DAT_10f491263,param_1[0x10]);
  func_0x0001083c4f2c(param_1 + 0x13,&UNK_10f491266,6,&UNK_10f49126d,param_1[0x10]);
  func_0x0001083c4f98(param_1 + 0x14,&UNK_10f491270,6,&DAT_10f31a213,2,3);
  func_0x0001083c4f24(param_1 + 0x15,&UNK_10f491277,7,&UNK_10f49127f,param_1[0x14]);
  func_0x0001083c4f1c(param_1 + 0x16,&UNK_10f491282,7,&DAT_10f49128a,param_1[0x14]);
  func_0x0001083c4f2c(param_1 + 0x17,&UNK_10f49128d,7,&UNK_10f491295,param_1[0x14]);
  FUN_1083efad4(param_1 + 0x18,"bool",4,"b",3,0,1);
  func_0x0001083c4f24(param_1 + 0x19,&UNK_10f491298,5,&UNK_10f49129e,param_1[0x18]);
  func_0x0001083c4f1c(param_1 + 0x1a,&UNK_10f4912a1,5,&UNK_10f4912a7,param_1[0x18]);
  func_0x0001083c4f2c(param_1 + 0x1b,&UNK_10f4912aa,5,&UNK_10f4912b0,param_1[0x18]);
  func_0x0001083c4f78(param_1 + 0x1c,&UNK_10f4912b3,&DAT_10f31a20d);
  func_0x0001083c4f78(param_1 + 0x1d,&UNK_10df20bcd,&DAT_10f31a20f);
  FUN_1083efa78(param_1 + 0x1e,&DAT_10f4912bd,&DAT_10f2ef733,0xc);
  FUN_1083ef8f8(param_1 + 0x1f,&UNK_10f4912c2,*param_1,8);
  FUN_1083ef8f8(param_1 + 0x20,&UNK_10f4912d0,param_1[8],5);
  func_0x0001083c4f44(param_1 + 0x21,&DAT_10f4912dc,8,&UNK_10f4912e5,*param_1,2);
  func_0x0001083c4f3c(param_1 + 0x22,&UNK_10f4912e9,8,&UNK_10f4912f2,*param_1,2);
  func_0x0001083c4f34(param_1 + 0x23,&UNK_10f4912f6,8,&UNK_10f4912ff,*param_1,2);
  func_0x0001083c4f44(param_1 + 0x24,&UNK_10f491303,8,&UNK_10f62b4a0,*param_1,3);
  func_0x0001083c4f3c(param_1 + 0x25,&DAT_10f49130c,8,&UNK_10f491315,*param_1,3);
  func_0x0001083c4f34(param_1 + 0x26,&UNK_10f491319,8,&UNK_10f491322,*param_1,3);
  func_0x0001083c4f44(param_1 + 0x27,&UNK_10f491326,8,&UNK_10f49132f,*param_1,4);
  func_0x0001083c4f3c(param_1 + 0x28,&UNK_10f491333,8,&UNK_10f49133c,*param_1,4);
  func_0x0001083c4f34(param_1 + 0x29,&DAT_10f491340,8,&UNK_10f491349,*param_1,4);
  func_0x0001083c4f44(param_1 + 0x2a,&UNK_10f49134d,7,&UNK_10f491355,param_1[4],2);
  func_0x0001083c4f3c(param_1 + 0x2b,&UNK_10f491359,7,&UNK_10f491361,param_1[4],2);
  func_0x0001083c4f34(param_1 + 0x2c,&UNK_10f491365,7,&UNK_10f49136d,param_1[4],2);
  func_0x0001083c4f44(param_1 + 0x2d,&UNK_10f491371,7,&UNK_10f491379,param_1[4],3);
  func_0x0001083c4f3c(param_1 + 0x2e,&UNK_10f49137d,7,&UNK_10f491385,param_1[4],3);
  func_0x0001083c4f34(param_1 + 0x2f,&UNK_10f491389,7,&UNK_10f491391,param_1[4],3);
  func_0x0001083c4f44(param_1 + 0x30,&UNK_10f491395,7,&UNK_10f49139d,param_1[4],4);
  func_0x0001083c4f3c(param_1 + 0x31,&UNK_10f4913a1,7,&UNK_10f4913a9,param_1[4],4);
  func_0x0001083c4f34(param_1 + 0x32,&UNK_10f4913ad,7,&UNK_10f4913b5,param_1[4],4);
  func_0x0001083c4f4c(param_1 + 0x33,&DAT_10f4913b9);
  func_0x0001083c4f4c(param_1 + 0x34,&DAT_10f4913be);
  func_0x0001083c4f4c(param_1 + 0x35,&DAT_10f4913c3);
  func_0x0001083c4f14(param_1 + 0x36,&DAT_10f4913c8);
  func_0x0001083c4f14(param_1 + 0x37,&DAT_10f4913ce);
  func_0x0001083c4f14(param_1 + 0x38,&DAT_10f4913d4);
  func_0x0001083c4f14(param_1 + 0x39,&DAT_10f4913da);
  func_0x0001083c4f14(param_1 + 0x3a,&DAT_10f4913e0);
  func_0x0001083c4f14(param_1 + 0x3b,&DAT_10f4913e6);
  func_0x0001083c4f14(param_1 + 0x3c,&UNK_10f4913ec);
  func_0x0001083c4f14(param_1 + 0x3d,&UNK_10f4913f2);
  func_0x0001083c4f14(param_1 + 0x3e,&UNK_10f4913f8);
  func_0x0001083c4f4c(param_1 + 0x3f,&DAT_10f4913fe);
  func_0x0001083c4f4c(param_1 + 0x40,&DAT_10f491403);
  func_0x0001083c4f4c(param_1 + 0x41,&DAT_10f491408);
  func_0x0001083c4f0c(param_1 + 0x42,&UNK_10f49140d);
  func_0x0001083c4f0c(param_1 + 0x43,&UNK_10f491414);
  func_0x0001083c4f0c(param_1 + 0x44,&UNK_10f49141b);
  func_0x0001083c4f0c(param_1 + 0x45,&UNK_10f491422);
  func_0x0001083c4f0c(param_1 + 0x46,&UNK_10f491429);
  func_0x0001083c4f0c(param_1 + 0x47,&UNK_10f491430);
  func_0x0001083c4f0c(param_1 + 0x48,&UNK_10f491437);
  func_0x0001083c4f0c(param_1 + 0x49,&UNK_10f49143e);
  func_0x0001083c4f0c(param_1 + 0x4a,&UNK_10f491445);
  func_0x0001083c4ef8(param_1 + 0x4b,&UNK_10f49144c);
  func_0x0001083c4f80();
  func_0x0001083c4ef8(param_1 + 0x4c,&UNK_10f49145e);
  func_0x0001083c4f80();
  func_0x0001083c4f80(param_1 + 0x4d,&DAT_10f491471,4,0,0,0);
  func_0x0001083c4ef8(param_1 + 0x4e,&DAT_10f49147f);
  FUN_1083f0558();
  func_0x0001083c4ef8(param_1 + 0x4f,&UNK_10f491489);
  func_0x0001083c4f90();
  func_0x0001083c4ef8(param_1 + 0x50,&UNK_10f49149b);
  FUN_1083f0558();
  func_0x0001083c4f54(param_1 + 0x51,&UNK_10f4914ae);
  func_0x0001083c4f54(param_1 + 0x52,&UNK_10f4914bc);
  func_0x0001083c4f54(param_1 + 0x53,&UNK_10f4914cf);
  FUN_1083efa00(param_1 + 0x54,&DAT_10f48d558,param_1[0x4b]);
  FUN_1083efa00(param_1 + 0x55,&DAT_10f4914e2,param_1[0x4c]);
  FUN_1083efa00(param_1 + 0x56,&UNK_10f4914f5,param_1[0x4d]);
  FUN_1083efa78(param_1 + 0x57,&DAT_10f638aa0,&DAT_10f3b4066,7);
  func_0x0001083c4f90(param_1 + 0x58,&UNK_10f491503,6,0,0,0);
  func_0x0001083c4f90(param_1 + 0x59,&UNK_10f491510,6,0,0,1);
  func_0x0001083c4f6c(*param_1,param_1[2]);
  func_0x0001083c4eec(param_1 + 0x5a,&UNK_10f49151f);
  func_0x0001083c4f6c(param_1[4],param_1[6]);
  func_0x0001083c4eec(param_1 + 0x5b,&UNK_10f491528);
  func_0x0001083c4f6c(param_1[8],param_1[10]);
  func_0x0001083c4eec(param_1 + 0x5c,&UNK_10f491532);
  func_0x0001083c4f6c(param_1[0xc],param_1[0xe]);
  func_0x0001083c4eec(param_1 + 0x5d,&UNK_10f49153c);
  func_0x0001083c4f6c(param_1[0x18],param_1[0x1a]);
  func_0x0001083c4eec(param_1 + 0x5e,&UNK_10f491546);
  func_0x0001083c4fa0(param_1 + 0x5f,&UNK_10f491550);
  func_0x0001083c4fa0(param_1 + 0x60,&UNK_10f491555);
  func_0x0001083c4eec(param_1 + 0x61,&UNK_10f49155b);
  func_0x0001083c4eec(param_1 + 0x62,&UNK_10f491566);
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 99,&UNK_10f491572);
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 100,&UNK_10f491577);
  param_1[0x65] = 0;
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 0x66,&UNK_10f49157d);
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 0x67,&UNK_10f491583);
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 0x68,&UNK_10f491589);
  func_0x0001083c4f60();
  func_0x0001083c4eec(param_1 + 0x69,&UNK_10f49158f);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  func_0x0001083c4eec(param_1 + 0x6c,&UNK_10f491596);
  func_0x0001083c4f78(param_1 + 0x6d,&UNK_10f49159c,&DAT_10f31a20d);
  FUN_1083efa78(param_1 + 0x6e,&DAT_10f2db780,&DAT_10f4085f7,0xd);
  FUN_1083efa78(param_1 + 0x6f,&UNK_10f43188c,&DAT_10f388012,0xe);
  FUN_1083efa78(param_1 + 0x70,&UNK_10f490316,"B",0xf);
  FUN_1083efb64(param_1 + 0x71,&UNK_10f4915a5,10,&DAT_10f3dc176);
  puVar1 = &UNK_10f48d5d3;
  FUN_1083ef730(param_1 + 0x72,&UNK_10f48d5d3,0xb,param_1[0x71]);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_1083c4eb4(param_1 + 0x71);
  FUN_1083c4eb4(param_1 + 0x70);
  FUN_1083c4eb4(param_1 + 0x6f);
  FUN_1083c4eb4(param_1 + 0x6e);
  FUN_1083c4eb4(param_1 + 0x6d);
  do {
    FUN_1083c4eb4(param_1 + 0x6c);
    FUN_1083c4eb4(param_1 + 0x6b);
    FUN_1083c4eb4(param_1 + 0x6a);
    FUN_1083c4eb4(param_1 + 0x69);
    FUN_1083c4eb4(param_1 + 0x68);
    FUN_1083c4eb4(param_1 + 0x67);
    FUN_1083c4eb4(param_1 + 0x66);
    FUN_1083c4eb4(param_1 + 0x65);
    FUN_1083c4eb4(param_1 + 100);
    FUN_1083c4eb4(param_1 + 99);
    FUN_1083c4eb4(param_1 + 0x62);
    FUN_1083c4eb4(param_1 + 0x61);
    FUN_1083c4eb4(param_1 + 0x60);
    FUN_1083c4eb4(param_1 + 0x5f);
    FUN_1083c4eb4(param_1 + 0x5e);
    FUN_1083c4eb4(param_1 + 0x5d);
    FUN_1083c4eb4(param_1 + 0x5c);
    FUN_1083c4eb4(param_1 + 0x5b);
    FUN_1083c4eb4(param_1 + 0x5a);
    FUN_1083c4eb4(param_1 + 0x59);
    FUN_1083c4eb4(param_1 + 0x58);
    FUN_1083c4eb4(param_1 + 0x57);
    FUN_1083c4eb4(param_1 + 0x56);
    FUN_1083c4eb4(param_1 + 0x55);
    FUN_1083c4eb4(param_1 + 0x54);
    FUN_1083c4eb4(param_1 + 0x53);
    FUN_1083c4eb4(param_1 + 0x52);
    FUN_1083c4eb4(param_1 + 0x51);
    FUN_1083c4eb4(param_1 + 0x50);
    FUN_1083c4eb4(param_1 + 0x4f);
    FUN_1083c4eb4(param_1 + 0x4e);
    FUN_1083c4eb4(param_1 + 0x4d);
    FUN_1083c4eb4(param_1 + 0x4c);
    FUN_1083c4eb4(param_1 + 0x4b);
    FUN_1083c4eb4(param_1 + 0x4a);
    FUN_1083c4eb4(param_1 + 0x49);
    FUN_1083c4eb4(param_1 + 0x48);
    FUN_1083c4eb4(param_1 + 0x47);
    FUN_1083c4eb4(param_1 + 0x46);
    FUN_1083c4eb4(param_1 + 0x45);
    FUN_1083c4eb4(param_1 + 0x44);
    FUN_1083c4eb4(param_1 + 0x43);
    FUN_1083c4eb4(param_1 + 0x42);
    FUN_1083c4eb4(param_1 + 0x41);
    FUN_1083c4eb4(param_1 + 0x40);
    FUN_1083c4eb4(param_1 + 0x3f);
    FUN_1083c4eb4(param_1 + 0x3e);
    FUN_1083c4eb4(param_1 + 0x3d);
    FUN_1083c4eb4(param_1 + 0x3c);
    FUN_1083c4eb4(param_1 + 0x3b);
    FUN_1083c4eb4(param_1 + 0x3a);
    FUN_1083c4eb4(param_1 + 0x39);
    FUN_1083c4eb4(param_1 + 0x38);
    FUN_1083c4eb4(param_1 + 0x37);
    FUN_1083c4eb4(param_1 + 0x36);
    FUN_1083c4eb4(param_1 + 0x35);
    FUN_1083c4eb4(param_1 + 0x34);
    FUN_1083c4eb4(param_1 + 0x33);
    FUN_1083c4eb4(param_1 + 0x32);
    FUN_1083c4eb4(param_1 + 0x31);
    FUN_1083c4eb4(param_1 + 0x30);
    FUN_1083c4eb4(param_1 + 0x2f);
    FUN_1083c4eb4(param_1 + 0x2e);
    FUN_1083c4eb4(param_1 + 0x2d);
    FUN_1083c4eb4(param_1 + 0x2c);
    FUN_1083c4eb4(param_1 + 0x2b);
    FUN_1083c4eb4(param_1 + 0x2a);
    FUN_1083c4eb4(param_1 + 0x29);
    FUN_1083c4eb4(param_1 + 0x28);
    FUN_1083c4eb4(param_1 + 0x27);
    FUN_1083c4eb4(param_1 + 0x26);
    FUN_1083c4eb4(param_1 + 0x25);
    FUN_1083c4eb4(param_1 + 0x24);
    FUN_1083c4eb4(param_1 + 0x23);
    FUN_1083c4eb4(param_1 + 0x22);
    FUN_1083c4eb4(param_1 + 0x21);
    FUN_1083c4eb4(param_1 + 0x20);
    FUN_1083c4eb4(param_1 + 0x1f);
    FUN_1083c4eb4(param_1 + 0x1e);
    FUN_1083c4eb4(param_1 + 0x1d);
    FUN_1083c4eb4(param_1 + 0x1c);
    FUN_1083c4eb4(param_1 + 0x1b);
    FUN_1083c4eb4(param_1 + 0x1a);
    FUN_1083c4eb4(param_1 + 0x19);
    FUN_1083c4eb4(param_1 + 0x18);
    FUN_1083c4eb4(param_1 + 0x17);
    FUN_1083c4eb4(param_1 + 0x16);
    FUN_1083c4eb4(param_1 + 0x15);
    FUN_1083c4eb4(param_1 + 0x14);
    FUN_1083c4eb4(param_1 + 0x13);
    FUN_1083c4eb4(param_1 + 0x12);
    FUN_1083c4eb4(param_1 + 0x11);
    FUN_1083c4eb4(param_1 + 0x10);
    FUN_1083c4eb4(param_1 + 0xf);
    FUN_1083c4eb4(param_1 + 0xe);
    FUN_1083c4eb4(param_1 + 0xd);
    FUN_1083c4eb4(param_1 + 0xc);
    FUN_1083c4eb4(param_1 + 0xb);
    FUN_1083c4eb4(param_1 + 10);
    FUN_1083c4eb4(param_1 + 9);
    FUN_1083c4eb4(param_1 + 8);
    FUN_1083c4eb4(param_1 + 7);
    FUN_1083c4eb4(param_1 + 6);
    FUN_1083c4eb4(param_1 + 5);
    FUN_1083c4eb4(param_1 + 4);
    FUN_1083c4eb4(param_1 + 3);
    FUN_1083c4eb4(param_1 + 2);
    FUN_1083c4eb4(param_1 + 1);
    FUN_1083c4eb4(param_1);
    __Unwind_Resume(puVar1);
  } while( true );
}



/* Entry: 1083c4eb4; end: 1083c4eeb;  */

long * FUN_1083c4eb4(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}



/* Entry: 1083c4eec; end: 1083c4fab;  */

void FUN_1083c4eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_4;
  uStack_38 = param_1;
  FUN_1083ef8a4(auStack_48,&uStack_38,&stack0xffffffffffffffd0,&uStack_40);
  func_0x0001083f2a04();
  FUN_1083f2218();
  return;
}



/* Entry: 1083c4fac; end: 1083c5087;  */

undefined8 * FUN_1083c4fac(undefined8 *param_1)

{
  undefined1 auStack_48 [16];
  long lStack_38;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_110a442c8;
  param_1[4] = param_1;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  FUN_1083c9c68(&lStack_38);
  FUN_1083c5088(auStack_48,lStack_38 + 0x10,param_1);
  FUN_1083c50b0(param_1 + 5,auStack_48);
  FUN_1083c5ee4(auStack_48);
  FUN_1083c9ce0(&lStack_38);
  return param_1;
}



/* Entry: 1083c5088; end: 1083c50af;  */

void FUN_1083c5088(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_1083c61b4(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1083c50b0; end: 1083c50eb;  */

undefined8 * FUN_1083c50b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_1083c5ee4(&uStack_30);
  return param_1;
}



/* Entry: 1083c50ec; end: 1083c50ef;  */

void FUN_1083c50ec(void)

{
  return;
}



/* Entry: 1083c50f0; end: 1083c5133;  */

long FUN_1083c50f0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x50);
  FUN_1083c6160(param_1 + 0x48);
  func_0x0001083c6128(param_1 + 0x40);
  func_0x0001083c5f0c(param_1 + 0x38);
  func_0x0001083c5ee4(param_1 + 0x28);
  return param_1;
}



/* Entry: 1083c5134; end: 1083c51fb;  */

undefined8 FUN_1083c5134(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  FUN_1083c9c68(auStack_28);
  switch(param_2) {
  case 0:
    func_0x0001083c65a4();
    FUN_1083ca454();
    break;
  case 1:
    func_0x0001083c65a4();
    FUN_1083ca4c8();
    break;
  case 2:
    func_0x0001083c65a4();
    FUN_1083ca53c();
    break;
  case 3:
    func_0x0001083c65a4();
    FUN_1083ca5b0();
    break;
  case 4:
    func_0x0001083c65a4();
    FUN_1083ca680();
    break;
  case 5:
    func_0x0001083c65a4();
    FUN_1083ca618();
    break;
  case 6:
    func_0x0001083c65a4();
    FUN_1083ca6e8();
    break;
  case 7:
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    func_0x0001083c65a4();
    FUN_1083ca130();
    break;
  case 10:
  case 0xb:
  case 0xc:
    func_0x0001083c65a4();
    FUN_1083ca36c();
    break;
  default:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1083c51f4);
    (*pcVar1)();
  }
  func_0x0001083c661c();
  return param_1;
}



/* Entry: 1083c51fc; end: 1083c53a7;  */

void FUN_1083c51fc(long param_1,long param_2,byte param_3,undefined8 *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  FUN_1083c53a8();
  puVar2 = (undefined8 *)0x34;
  __Znwm();
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  func_0x000108394a7c((long)puVar2 + 4);
  *(undefined4 *)(puVar2 + 6) = 0;
  uStack_68 = 0;
  FUN_1083c6148(param_1 + 0x40,puVar2);
  func_0x0001083c6128(&uStack_68);
  puVar3 = *(undefined1 **)(param_1 + 0x40);
  *puVar3 = (char)param_7;
  uVar7 = param_4[1];
  uVar6 = *param_4;
  uVar9 = param_4[3];
  uVar8 = param_4[2];
  uVar10 = *(undefined8 *)((long)param_4 + 0x19);
  *(undefined8 *)(puVar3 + 0x25) = *(undefined8 *)((long)param_4 + 0x21);
  *(undefined8 *)(puVar3 + 0x1d) = uVar10;
  *(undefined8 *)(puVar3 + 0x1c) = uVar9;
  *(undefined8 *)(puVar3 + 0x14) = uVar8;
  *(undefined8 *)(puVar3 + 0xc) = uVar7;
  *(undefined8 *)(puVar3 + 4) = uVar6;
  lVar4 = *(long *)(param_1 + 0x40);
  *(byte *)(lVar4 + 1) = param_3;
  bVar1 = *(byte *)(lVar4 + 0x1c);
  *(uint *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) * (uint)bVar1;
  *(byte *)(lVar4 + 0x1d) = *(byte *)(lVar4 + 0x1d) & bVar1;
  *(byte *)(lVar4 + 0x1e) = *(byte *)(lVar4 + 0x1e) & bVar1;
  if (param_3 - 7 < 8) {
    *(undefined1 *)(lVar4 + 0x25) = 1;
  }
  if (*(char *)(param_4 + 5) == '\x01') {
    FUN_1083d39f4(&uStack_68);
    uVar6 = uStack_68;
    uStack_68 = 0;
    FUN_1083c6180(param_1 + 0x48,uVar6);
    puVar2 = &uStack_68;
    FUN_1083c6160();
    func_0x0001083c65cc(**(undefined8 **)(param_1 + 0x48));
    *puVar2 = extraout_x8;
    lVar4 = *(long *)(param_1 + 0x40);
  }
  lVar5 = *(long *)(param_1 + 0x28);
  *(long *)(lVar5 + 8) = lVar4;
  *(long *)(lVar5 + 0x18) = param_2;
  lVar4 = *(long *)(lVar5 + 0x10);
  *(undefined8 *)(lVar4 + 8) = param_5;
  *(undefined8 *)(lVar4 + 0x10) = param_6;
  uVar6 = *(undefined8 *)(param_2 + 8);
  puVar2 = (undefined8 *)0x40;
  __Znwm();
  *puVar2 = uVar6;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(bool *)(puVar2 + 4) = param_7 != 0;
  *(undefined1 *)((long)puVar2 + 0x21) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[5] = 0;
  uStack_68 = 0;
  FUN_1083c5f2c(param_1 + 0x38,puVar2);
  func_0x0001083c65f8();
  lVar4 = *(long *)(param_1 + 0x38);
  *(undefined1 *)(lVar4 + 0x21) = 1;
  *(long *)(*(long *)(param_1 + 0x28) + 0x20) = lVar4;
  return;
}



/* Entry: 1083c53a8; end: 1083c544b;  */

void FUN_1083c53a8(long param_1)

{
  func_0x000107c27fa8(param_1 + 0x50);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x18) = 0;
  return;
}



/* Entry: 1083c544c; end: 1083c560f;  */

void FUN_1083c544c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w8;
  undefined8 uVar3;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined1 uStack_d7;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined2 uStack_68;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined8 *puStack_48;
  
  func_0x0001073ef420(&puStack_48,param_5);
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0xffffffff00000000;
  uStack_70 = 0;
  uStack_68 = 0x101;
  uStack_66 = 1;
  uStack_64 = 0x32;
  uStack_60 = 0x10000;
  uStack_5c = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  lVar2 = (long)*(char *)((long)puStack_48 + 0x17);
  puVar1 = puStack_48;
  if (lVar2 < 0) {
    puVar1 = (undefined8 *)*puStack_48;
    lVar2 = puStack_48[1];
  }
  FUN_1083c51fc(param_2,param_6,param_3,&uStack_80,puVar1,lVar2,param_4);
  puStack_d0 = puStack_48;
  uStack_f8 = CONCAT13(uStack_65,CONCAT12(uStack_66,uStack_68));
  uStack_108 = uStack_78;
  uStack_110 = uStack_80;
  uStack_100 = uStack_70;
  puStack_48 = (undefined8 *)0x0;
  uStack_120 = 0;
  uStack_ec = CONCAT44(uStack_58,uStack_5c);
  uStack_f4 = uStack_64;
  uStack_f0 = uStack_60;
  uStack_d7 = (undefined1)param_3;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_90 = 0xffffffffffffffff;
  uStack_98 = 0x5d00000000;
  lStack_a8 = (long)*(char *)((long)puStack_d0 + 0x17);
  puStack_b0 = puStack_d0;
  if (lStack_a8 < 0) {
    puStack_b0 = (undefined8 *)*puStack_d0;
    lStack_a8 = puStack_d0[1];
  }
  uStack_a0 = 0;
  lStack_118 = param_2;
  FUN_1083cc4bc(&uStack_88,&lStack_118,param_6);
  FUN_1083cbc44(&lStack_118);
  func_0x0001073f2190(&uStack_120);
  func_0x0001083c53d4(param_2);
  func_0x0001083c65e4(*(undefined8 *)(param_2 + 0x28));
  uVar3 = uStack_88;
  if (extraout_w8 == 0) {
    uStack_88 = 0;
  }
  else {
    FUN_1083c5610(&lStack_118,param_2,1);
    FUN_1083c9c3c();
    FUN_10841076c(&UNK_10f4915b0);
    func_0x0001083c65f0();
    uVar3 = 0;
  }
  *param_1 = uVar3;
  FUN_1083c62dc(&uStack_88);
  func_0x0001083c65bc();
  return;
}



/* Entry: 1083c5610; end: 1083c565f;  */

void FUN_1083c5610(undefined8 param_1,long param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_1083c5b14(param_2);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,param_2 + 0x50);
  FUN_1083c53a8(param_2);
  return;
}



/* Entry: 1083c5660; end: 1083c578f;  */

void FUN_1083c5660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined1 uStack_9f;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_48;
  
  func_0x0001073ef420(&puStack_48,param_4);
  uVar1 = param_2;
  FUN_1083c5134(param_2,param_3);
  uStack_d8 = param_5[1];
  uStack_e0 = *param_5;
  uStack_d0 = param_5[2];
  uStack_c8 = (undefined4)param_5[3];
  uStack_bc = (undefined4)*(undefined8 *)((long)param_5 + 0x24);
  uStack_b8 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x24) >> 0x20);
  uStack_c4 = (undefined4)*(undefined8 *)((long)param_5 + 0x1c);
  uStack_c0 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x1c) >> 0x20);
  lVar3 = (long)*(char *)((long)puStack_48 + 0x17);
  puVar2 = puStack_48;
  if (lVar3 < 0) {
    puVar2 = (undefined8 *)*puStack_48;
    lVar3 = puStack_48[1];
  }
  FUN_1083c51fc(param_2,uVar1,param_3,&uStack_e0,puVar2,lVar3,0);
  puStack_98 = puStack_48;
  uStack_d0 = param_5[1];
  uStack_d8 = *param_5;
  puStack_48 = (undefined8 *)0x0;
  uStack_e8 = 0;
  uStack_c0 = (undefined4)param_5[3];
  uStack_c8 = (undefined4)param_5[2];
  uStack_c4 = (undefined4)((ulong)param_5[2] >> 0x20);
  uStack_b4 = *(undefined8 *)((long)param_5 + 0x24);
  uStack_bc = (undefined4)*(undefined8 *)((long)param_5 + 0x1c);
  uStack_b8 = (undefined4)((ulong)*(undefined8 *)((long)param_5 + 0x1c) >> 0x20);
  uStack_9f = (undefined1)param_3;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_58 = 0xffffffffffffffff;
  uStack_60 = 0x5d00000000;
  lStack_70 = (long)*(char *)((long)puStack_98 + 0x17);
  puStack_78 = puStack_98;
  if (lStack_70 < 0) {
    puStack_78 = (undefined8 *)*puStack_98;
    lStack_70 = puStack_98[1];
  }
  uStack_68 = 0;
  uStack_e0 = param_2;
  FUN_1083cc324(param_1,&uStack_e0,uVar1);
  FUN_1083cbc44(&uStack_e0);
  func_0x0001073f2190(&uStack_e8);
  func_0x0001083c53d4(param_2);
  func_0x0001083c65bc();
  return;
}



/* Entry: 1083c5790; end: 1083c5857;  */

void FUN_1083c5790(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int extraout_w8;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  lVar4 = param_2[9];
  FUN_1083c5858(&uStack_38,param_3,param_2 + 8,param_2 + 5,param_4,param_2 + 7);
  *(undefined8 *)(param_2[5] + 0x20) = 0;
  puVar1 = param_2;
  FUN_1083c59ac(param_2,uStack_38);
  if ((int)puVar1 == 0) {
    param_2 = (undefined8 *)0x0;
  }
  else {
    FUN_1083c5a60(param_2,uStack_38);
    puVar1 = param_2;
  }
  iVar2 = (int)param_2;
  if (lVar4 != 0) {
    func_0x0001083c65cc();
    *puVar1 = 0;
    iVar2 = extraout_w8;
  }
  uVar3 = uStack_38;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uStack_38 = 0;
  }
  *param_1 = uVar3;
  FUN_108321198(&uStack_38);
  return;
}



/* Entry: 1083c5858; end: 1083c59ab;  */

void FUN_1083c5858(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = 0x70;
  __Znwm();
  uStack_58 = *param_2;
  *param_2 = 0;
  uStack_60 = *param_3;
  *param_3 = 0;
  uStack_68 = param_4[1];
  uStack_70 = *param_4;
  if (param_4[1] != 0) {
    plVar1 = (long *)(param_4[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_88 = param_5[1];
  uStack_90 = *param_5;
  uStack_80 = param_5[2];
  param_5[1] = 0;
  param_5[2] = 0;
  *param_5 = 0;
  uStack_98 = *param_6;
  *param_6 = 0;
  uStack_a0 = *param_7;
  *param_7 = 0;
  FUN_1083ea3d0(uVar4,&uStack_58,&uStack_60,&uStack_70,&uStack_90,&uStack_98,&uStack_a0);
  *param_1 = uVar4;
  FUN_1083c6160(&uStack_a0);
  func_0x0001083c65f8();
  func_0x0001083c635c(&uStack_90);
  FUN_1083c5ee4(&uStack_70);
  func_0x0001083c6128(&uStack_60);
  func_0x0001073f2190(&uStack_58);
  return;
}



/* Entry: 1083c59ac; end: 1083c5a5f;  */

bool FUN_1083c59ac(long param_1,long param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  int extraout_w8;
  int extraout_w8_00;
  long lVar4;
  undefined8 *puVar5;
  
  FUN_1083f65a8(param_2);
  FUN_1083f7a94(param_2);
  FUN_1083f7608(param_2);
  FUN_1083d5074(param_2);
  iVar3 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  FUN_1083c5ae8();
  lVar4 = *(long *)(param_1 + 0x28);
  if ((iVar3 != 0) && (*(int *)(*(long *)(lVar4 + 0x10) + 0x18) == 0)) {
    puVar1 = *(undefined8 **)(param_2 + 0x40);
    for (puVar5 = *(undefined8 **)(param_2 + 0x38); puVar5 != puVar1; puVar5 = puVar5 + 1) {
      FUN_1083d6668(*puVar5,*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
    }
    lVar4 = *(long *)(param_1 + 0x28);
  }
  func_0x0001083c65e4(lVar4);
  if (extraout_w8 == 0) {
    FUN_1083d4884(param_2);
    func_0x0001083c65e4(*(undefined8 *)(param_1 + 0x28));
    bVar2 = extraout_w8_00 == 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



/* Entry: 1083c5a60; end: 1083c5ae7;  */

bool FUN_1083c5a60(long param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  int extraout_w8;
  int extraout_w8_00;
  
  if (*(char *)(*(long *)(param_2 + 8) + 0x1c) == '\x01') {
    func_0x0001083c65e4(*(undefined8 *)(param_1 + 0x28));
    if (extraout_w8 == 0) {
      FUN_1083f60d0(param_2);
      do {
        uVar2 = param_2;
        FUN_1083f5748();
      } while ((uVar2 & 1) != 0);
      do {
        uVar2 = param_2;
        FUN_1083f5c64();
      } while ((uVar2 & 1) != 0);
      do {
        uVar2 = param_2;
        FUN_1083f5974();
      } while ((uVar2 & 1) != 0);
      func_0x0001083c65e4(*(undefined8 *)(param_1 + 0x28));
      bVar1 = extraout_w8_00 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 1083c5ae8; end: 1083c5b13;  */

bool FUN_1083c5ae8(long param_1)

{
  if ((*(int *)(param_1 + 0x28) == 0) && (*(int *)(param_1 + 0x30) == 0)) {
    return *(byte *)(param_1 + 1) - 7 < 8;
  }
  return false;
}



/* Entry: 1083c5b14; end: 1083c5bab;  */

void FUN_1083c5b14(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  iVar2 = *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 0x18);
  if (iVar2 != 0) {
    __ZNSt3__19to_stringEi(auStack_50,iVar2);
    puVar1 = &UNK_10f4915e6;
    if (iVar2 != 1) {
      puVar1 = &UNK_10f4915ee;
    }
    func_0x00010048a6c8(auStack_38,auStack_50,puVar1);
    func_0x0001004c3ca0(param_1 + 0x50,auStack_38);
    func_0x0001083c65f0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_50);
  }
  return;
}



/* Entry: 1083c5bac; end: 1083c5baf;  */

void FUN_1083c5bac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c5bb0; end: 1083c5ee3;  */

void FUN_1083c5bb0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar16 = *(long *)(param_1 + 0x20);
  uStack_74 = param_4;
  uStack_70 = param_2;
  uStack_68 = param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
            (lVar16 + 0x50,&UNK_10f4915d5);
  lVar8 = *(long *)(*(long *)(lVar16 + 0x28) + 0x10);
  lVar3 = *(long *)(lVar8 + 8);
  uVar4 = *(undefined8 *)(lVar8 + 0x10);
  bVar7 = ((param_4 ^ 0xffffffff) & 0xffffff) != 0;
  uVar11 = (uint)uVar4;
  if (bVar7) {
    func_0x0001083d3be4(&uStack_74,lVar3,uVar4);
    __ZNSt3__19to_stringEi(&uStack_a8);
    func_0x00010048a6c8(&uStack_90,&uStack_a8,": ");
    func_0x0001083c6628();
    func_0x0001083c65c4();
    func_0x0001083c65dc();
  }
  func_0x000107c27958(&uStack_a8,&uStack_70);
  func_0x00010048a6c8(&uStack_90,&uStack_a8,&DAT_10f68f57e);
  func_0x0001083c6628();
  func_0x0001083c65c4();
  func_0x0001083c65dc();
  if (bVar7 && (int)(param_4 << 8) >> 8 < (int)uVar11) {
    uVar6 = (int)(param_4 << 8) >> 8;
    uVar14 = (ulong)uVar6;
    pcVar9 = (char *)(uVar14 + lVar3);
    do {
      pcVar9 = pcVar9 + -1;
      uVar10 = (uint)uVar14;
      uVar14 = (ulong)(uVar10 - 1);
      uVar15 = uVar6 & (int)(param_4 << 8) >> 0x1f;
      if ((int)uVar10 < 1) break;
      uVar15 = uVar10;
    } while (*pcVar9 != '\n');
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    if (100 < (int)(uVar6 - uVar15)) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_90,&DAT_10f2c0b71);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                (&uStack_a8,&DAT_10f4915dd);
      uVar15 = uVar6 - 100;
    }
    iVar1 = uVar6 + (param_4 >> 0x18) + 100;
    puVar13 = &UNK_10f432cfa;
    if ((int)uVar11 <= iVar1) {
      iVar1 = uVar11 - 1;
      puVar13 = &DAT_10f68f57e;
    }
    for (lVar8 = (long)(int)uVar15; lVar8 < iVar1; lVar8 = lVar8 + 1) {
      cVar5 = *(char *)(lVar3 + lVar8);
      pcVar9 = " ";
      if (cVar5 == '\0') {
LAB_1083c5d6c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_90,pcVar9);
      }
      else {
        if (cVar5 == '\t') {
          pcVar9 = "    ";
          goto LAB_1083c5d6c;
        }
        if (cVar5 == '\n') {
          puVar13 = &DAT_10f68f57e;
          break;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_90,(int)cVar5);
      }
    }
    func_0x000100456794(auStack_c0,&uStack_90,puVar13);
    func_0x0001004c3ca0(lVar16 + 0x50,auStack_c0);
    func_0x0001083c660c();
    uVar10 = uVar6 + (param_4 >> 0x18);
    uVar2 = uVar11;
    if ((int)uVar10 <= (int)uVar11) {
      uVar2 = uVar10;
    }
    for (; (int)uVar15 < (int)uVar2; uVar15 = uVar15 + 1) {
      if (*(char *)(lVar3 + (int)uVar15) == '\n') {
        puVar13 = &DAT_10f2c0b71;
        if ((int)(uVar10 - 1) <= (int)uVar15) {
          puVar13 = &DAT_10f47f5f7;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_a8,puVar13);
        uVar15 = uVar11;
      }
      else if (*(char *)(lVar3 + (int)uVar15) == '\t') {
        puVar13 = &DAT_10f48d515;
        if ((int)uVar6 <= (int)uVar15) {
          puVar13 = &UNK_10f4915e1;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                  (&uStack_a8,puVar13);
      }
      else {
        uVar12 = 0x20;
        if ((int)uVar6 <= (int)uVar15) {
          uVar12 = 0x5e;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_a8,uVar12);
      }
    }
    func_0x00010076de84(auStack_c0,&uStack_a8,10);
    func_0x0001004c3ca0(lVar16 + 0x50,auStack_c0);
    func_0x0001083c660c();
    func_0x0001083c65dc();
    func_0x0001083c65c4();
  }
  return;
}



/* Entry: 1083c5ee4; end: 1083c5f2b;  */

long FUN_1083c5ee4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1083c5f2c; end: 1083c5f43;  */

void FUN_1083c5f2c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083c5f60(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c5f44; end: 1083c5f5f;  */

void FUN_1083c5f44(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083c5f60(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c5f60; end: 1083c5fb3;  */

long FUN_1083c5f60(long param_1)

{
  func_0x0001083c5f94(param_1 + 0x38);
  FUN_1083c6000(param_1 + 0x28);
  func_0x0001083c6060(param_1 + 8);
  return param_1;
}



/* Entry: 1083c5fb4; end: 1083c5fff;  */

void FUN_1083c5fb4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x28;
      do {
        if (*(int *)(lVar1 + -0x28 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x28 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x28;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083c6000; end: 1083c603b;  */

void FUN_1083c6000(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    FUN_1083c603c(param_1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 1083c603c; end: 1083c60bf;  */

void FUN_1083c603c(undefined8 param_1,long param_2)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1083c60c0; end: 1083c60c7;  */

void FUN_1083c60c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001083c6100();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1083c60c8; end: 1083c6147;  */

void FUN_1083c60c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x0001083c6100();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1083c6148; end: 1083c615f;  */

void FUN_1083c6148(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c6160; end: 1083c617f;  */

void FUN_1083c6160(void)

{
  func_0x0001083c65b0();
  FUN_1083c6180();
  return;
}



/* Entry: 1083c6180; end: 1083c6197;  */

void FUN_1083c6180(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083d39c4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c6198; end: 1083c61b3;  */

void FUN_1083c6198(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083d39c4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c61b4; end: 1083c6257;  */

undefined1 * FUN_1083c61b4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [16];
  undefined8 *puStack_40;
  long lStack_38;
  
  puVar2 = auStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = 1;
  FUN_1083c6258(auStack_50);
  puVar1 = puStack_40;
  *puStack_40 = &PTR_FUN_110a44308;
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  puStack_40[3] = param_3;
  puStack_40[4] = 0;
  puStack_40[5] = param_4;
  puStack_40[6] = 0;
  puStack_40[7] = 0;
  puStack_40 = (undefined8 *)0x0;
  *param_1 = (long)(puVar1 + 3);
  param_1[1] = (long)puVar1;
  func_0x0001083c62cc();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar2 + 8) = uVar4;
  puVar3 = puVar2;
  FUN_1083c6280();
  *(undefined1 **)(puVar2 + 0x10) = puVar3;
  return puVar2;
}



/* Entry: 1083c6258; end: 1083c627f;  */

long FUN_1083c6258(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1083c6280();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1083c6280; end: 1083c629b;  */

void FUN_1083c6280(undefined8 *param_1,ulong param_2)

{
  if (param_2 >> 0x3a == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 6);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a44308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1083c629c; end: 1083c629f;  */

void FUN_1083c629c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a44308;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1083c62a0; end: 1083c62b3;  */

void FUN_1083c62a0(void)

{
  func_0x0001083c62bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c62b4; end: 1083c62db;  */

void FUN_1083c62b4(void)

{
  return;
}



/* Entry: 1083c62dc; end: 1083c62fb;  */

void FUN_1083c62dc(void)

{
  func_0x0001083c65b0();
  FUN_1083c62fc();
  return;
}



/* Entry: 1083c62fc; end: 1083c6313;  */

void FUN_1083c62fc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083c6330(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c6314; end: 1083c632f;  */

void FUN_1083c6314(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083c6330(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c6330; end: 1083c63bb;  */

long FUN_1083c6330(long param_1)

{
  func_0x0001083c635c(param_1 + 0x10);
  func_0x0001083c5f0c(param_1 + 8);
  return param_1;
}



/* Entry: 1083c63bc; end: 1083c63c3;  */

void FUN_1083c63bc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    func_0x0001083c63fc();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1083c63c4; end: 1083c6443;  */

void FUN_1083c63c4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    func_0x0001083c63fc();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1083c6444; end: 1083c645b;  */

void FUN_1083c6444(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1083c6478(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1083c645c; end: 1083c6477;  */

void FUN_1083c645c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1083c6478(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1083c6478; end: 1083c64cb;  */

long FUN_1083c6478(long param_1)

{
  func_0x0001083c64ac(param_1 + 0x28);
  FUN_1083c6514(param_1 + 0x18);
  FUN_1083c6514(param_1 + 8);
  return param_1;
}



/* Entry: 1083c64cc; end: 1083c6513;  */

void FUN_1083c64cc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) << 5;
      do {
        if (*(int *)(lVar1 + -0x20 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x20 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083c6514; end: 1083c6533;  */

void FUN_1083c6514(void)

{
  func_0x0001083c65b0();
  func_0x0001083c6534();
  return;
}



/* Entry: 1083c6534; end: 1083c663f;  */

void FUN_1083c6534(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + -8) != 0) {
      lVar2 = *(long *)(lVar1 + -8) * 0x18;
      do {
        if (*(int *)(lVar1 + -0x18 + lVar2) != 0) {
          *(undefined4 *)(lVar1 + -0x18 + lVar2) = 0;
        }
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdaPv_110352250)(lVar1 + -0x10);
    return;
  }
  return;
}



/* Entry: 1083c6640; end: 1083c6697;  */

void FUN_1083c6640(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_1 >> 0x20);
  iVar2 = (int)param_1;
  func_0x0001083c6674();
  lVar1 = CONCAT44(uVar3,iVar2);
  FUN_1083c6698();
  if (iVar2 != 0) {
    *param_2 = (long)*(double *)(lVar1 + 0x18);
  }
  return;
}



/* Entry: 1083c6698; end: 1083c66cb;  */

bool FUN_1083c6698(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0x29) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001083c885c(uVar1);
    return ((int)uVar1 - 1U & 0xfe) == 0;
  }
  return false;
}



/* Entry: 1083c66cc; end: 1083c6703;  */

bool FUN_1083c66cc(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  func_0x0001083c6674();
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0x29) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
  }
  return iVar1 == 0x29;
}



/* Entry: 1083c6704; end: 1083c6783;  */

bool FUN_1083c6704(double param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = (uint)param_2[2];
  func_0x0001083c88e0();
  uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar4 = 0;
  while (uVar5 = (uint)uVar4, uVar6 = uVar1, uVar1 != uVar5) {
    plVar3 = param_2;
    (**(code **)(*param_2 + 0x28))();
    uVar6 = uVar5;
    if (((uVar4 & 1) == 0) || (uVar4 = (ulong)(uVar5 + 1), param_1 != (double)plVar3)) break;
  }
  return (int)uVar2 <= (int)uVar6;
}



/* Entry: 1083c6784; end: 1083c67e3;  */

void FUN_1083c6784(long param_1)

{
  do {
    if (*(int *)(param_1 + 0xc) != 0x32) {
      FUN_1083c2fd8();
      return;
    }
    if (*(char *)(param_1 + 0x20) != '\0') {
      return;
    }
    param_1 = *(long *)(param_1 + 0x18);
    if ((*(byte *)(param_1 + 0x30) >> 2 & 1) == 0) {
      return;
    }
    FUN_1083f446c();
  } while (param_1 != 0);
  return;
}



/* Entry: 1083c67e4; end: 1083c683f;  */

void FUN_1083c67e4(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*param_3;
  FUN_1083c6784();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001083c6828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(param_1);
    return;
  }
  lVar2 = *param_3;
  *param_3 = 0;
  *param_1 = lVar2;
  return;
}



/* Entry: 1083c6840; end: 1083c74d3;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1083c6840(long *******param_1,double param_2,long *******param_3,long *******param_4,
                  long *******param_5,long *******param_6,long *******param_7,long ******param_8)

{
  char cVar1;
  long lVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  long *******ppppppplVar13;
  long *******ppppppplVar14;
  long *******ppppppplVar15;
  long *******ppppppplVar16;
  long *******ppppppplVar17;
  long *******ppppppplVar18;
  long *******ppppppplVar19;
  long *****UNRECOVERED_JUMPTABLE;
  undefined *puVar20;
  long *******ppppppplVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar25;
  long *******ppppppplVar26;
  long *******ppppppplVar27;
  long *******ppppppplVar28;
  long *******ppppppplVar29;
  code *pcVar30;
  uint uVar31;
  long *******ppppppplVar32;
  undefined1 **unaff_x29;
  code *unaff_x30;
  float fVar33;
  double dVar34;
  long ******pppppplVar35;
  double dVar36;
  float fVar37;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  long ******pppppplStack_230;
  long ******apppppplStack_228 [2];
  undefined1 auStack_218 [16];
  long ******apppppplStack_208 [2];
  long *******ppppppplStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *******ppppppplStack_1e0;
  long *******ppppppplStack_1d8;
  long *******ppppppplStack_1d0;
  long *******ppppppplStack_1c8;
  long *******ppppppplStack_1c0;
  long *******ppppppplStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  long ******apppppplStack_1a0 [16];
  undefined8 uStack_120;
  long ******pppppplStack_d8;
  undefined1 auStack_a0 [16];
  undefined4 auStack_90 [2];
  long ******pppppplStack_88;
  undefined1 auStack_80 [8];
  long ******pppppplStack_78;
  long ******pppppplStack_70;
  long ******pppppplStack_68;
  
  puVar3 = auStack_90;
  uVar12 = (uint)param_6;
  ppppppplVar17 = param_4;
  ppppppplVar19 = param_5;
  ppppppplVar15 = param_6;
  func_0x0001083c6674();
  func_0x0001083c6674();
  if (((uVar12 & 0xff) == 0xf) &&
     (ppppppplVar13 = param_7, func_0x0001083c8890(), (int)ppppppplVar13 != 0)) {
    UNRECOVERED_JUMPTABLE = (*param_7)[6];
    func_0x0001083c890c(param_1,param_7,(ulong)param_4 & 0xffffffff,UNRECOVERED_JUMPTABLE,unaff_x30)
    ;
                    /* WARNING: Could not recover jumptable at 0x0001083c68c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    return;
  }
  ppppppplVar13 = param_5;
  FUN_1083c74d4();
  if (((int)ppppppplVar13 != 0) &&
     (ppppppplVar13 = param_7, FUN_1083c74d4(), (int)ppppppplVar13 != 0)) {
    switch(uVar12 & 0xff) {
    case 8:
      break;
    case 9:
      break;
    case 10:
    case 0x11:
      break;
    default:
      goto LAB_1083c7328;
    case 0x10:
    }
    func_0x0001083c89a0();
LAB_1083c6bf8:
    func_0x0001083c7504();
    *param_1 = pppppplStack_68;
    goto LAB_1083c732c;
  }
  ppppppplVar13 = param_5;
  FUN_1083c74d4();
  ppppppplVar29 = param_5;
  ppppppplVar14 = param_7;
  if ((int)ppppppplVar13 != 0) {
LAB_1083c694c:
    param_5 = ppppppplVar14;
    uVar22 = (ulong)param_6 & 0xff;
    func_0x0001083c890c(param_1,(ulong)param_4 & 0xffffffff);
    pppppplVar35 = ppppppplVar29[3];
    if (((double)pppppplVar35 == 0.0 && uVar22 == 8) || ((double)pppppplVar35 != 0.0 && uVar22 == 9)
       ) goto LAB_1083c8944;
LAB_1083c7570:
    bVar4 = (double)pppppplVar35 == 0.0;
    ppppppplVar29 = param_5;
    if ((((bVar4 || uVar22 != 8) && (!bVar4 || uVar22 != 9)) && (!bVar4 || uVar22 != 10)) &&
       ((bVar4 || uVar22 != 0x10 && (!bVar4 || uVar22 != 0x11)))) {
      *param_1 = (long ******)0x0;
      return;
    }
LAB_1083c8944:
                    /* WARNING: Could not recover jumptable at 0x0001083c8954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*ppppppplVar29)[6])(param_1,ppppppplVar29);
    return;
  }
  ppppppplVar13 = param_7;
  FUN_1083c74d4();
  iVar8 = (int)ppppppplVar13;
  if (iVar8 != 0) {
    ppppppplVar15 = param_5;
    FUN_1083d64e8();
    ppppppplVar29 = param_7;
    ppppppplVar14 = param_5;
    if (((ulong)ppppppplVar15 & 1) == 0) goto LAB_1083c694c;
    pppppplVar35 = param_7[3];
    uVar22 = (ulong)param_6 & 0xff;
    func_0x0001083c890c(param_1,(ulong)param_4 & 0xffffffff,param_5,uVar22,unaff_x30);
    goto LAB_1083c7570;
  }
  if ((uVar12 & 0xff) == 0x11) {
    func_0x0001083c8890();
    if (iVar8 == 0) goto LAB_1083c69f4;
    func_0x0001083c89a0();
    goto LAB_1083c6bf8;
  }
  if ((uVar12 & 0xff) != 0x10) {
    if ((0x1a < (uVar12 & 0xff)) || ((1 << (ulong)(uVar12 & 0x1f) & 0x6000018U) == 0))
    goto LAB_1083c69f4;
    uVar9 = (uint)param_7[2];
    func_0x0001083c88e0();
    ppppppplVar13 = (long *******)0x0;
    do {
      ppppppplVar29 = ppppppplVar13;
      uVar31 = (uint)ppppppplVar29;
      if ((uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU)) == uVar31) goto LAB_1083c69f4;
      ppppppplVar14 = param_7;
      (*(code *)(*param_7)[5])();
      ppppppplVar17 = ppppppplVar29;
      ppppppplVar13 = (long *******)(ulong)(uVar31 + 1);
    } while ((((ulong)ppppppplVar29 & 1) == 0) || (((ulong)ppppppplVar14 & 0x7fffffffffffffff) != 0)
            );
    if ((int)uVar9 <= (int)uVar31) goto LAB_1083c69f4;
    pppppplVar35 = param_3[2];
    puVar20 = &DAT_10f4915f7;
    uVar23 = 0x10;
code_r0x0001083c6af8:
    FUN_1083c8a60(pppppplVar35,(ulong)param_4 & 0xffffffff,puVar20,uVar23);
    goto LAB_1083c7328;
  }
  func_0x0001083c8890();
  if (iVar8 != 0) {
    func_0x0001083c89a0();
    goto LAB_1083c6bf8;
  }
LAB_1083c69f4:
  ppppppplVar14 = (long *******)((ulong)param_4 & 0xffffffff);
  ppppppplVar13 = param_5;
  FUN_1083c2fd8();
  ppppppplVar29 = param_7;
  FUN_1083c2fd8();
  uVar9 = (uint)ppppppplVar29;
  if (((uint)ppppppplVar13 == 0) || (uVar9 == 0)) {
    if (*(char *)((long)param_3[1] + 0x1c) != '\x01') goto LAB_1083c7328;
    if ((((uint)ppppppplVar13 | uVar9) & 1) != 0) {
      uVar31 = uVar12 & 0xff;
      switch((ulong)param_6 & 0xff) {
      case 0:
        func_0x0001083c8900();
        if ((((ulong)ppppppplVar29 & 1) == 0) && (func_0x0001083c88a8(), (int)ppppppplVar29 != 0)) {
          func_0x0001083c8760();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        func_0x0001083c89b8();
        iVar8 = (int)ppppppplVar29;
        if ((((ulong)ppppppplVar29 & 1) != 0) || (func_0x0001083c89d0(), iVar8 == 0))
        goto LAB_1083c72cc;
        func_0x0001083c87c4();
        func_0x0001083c89c4();
        goto code_r0x0001083c7094;
      case 1:
        func_0x0001083c8900();
        if ((((ulong)ppppppplVar29 & 1) == 0) && (func_0x0001083c88a8(), (int)ppppppplVar29 != 0)) {
          func_0x0001083c8760();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        func_0x0001083c89b8();
        iVar11 = (int)ppppppplVar29;
        if (((ulong)ppppppplVar29 & 1) != 0) goto LAB_1083c72cc;
        func_0x0001083c89d0();
        break;
      case 2:
        func_0x0001083c8980(0x3ff0000000000000);
        if (uVar9 != 0) {
          func_0x0001083c8760();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        func_0x0001083c89b0(0x3ff0000000000000);
        if (uVar9 != 0) {
          func_0x0001083c87c4();
          func_0x0001083c89c4();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        func_0x0001083c8980(0);
        iVar8 = 0;
        if (uVar9 != 0) {
          ppppppplVar15 = param_5;
          FUN_1083d64e8();
          iVar8 = (int)ppppppplVar15;
          if (((ulong)ppppppplVar15 & 1) != 0) goto code_r0x0001083c6f6c;
code_r0x0001083c724c:
          func_0x0001083c87c4();
          FUN_1083c8458();
          goto LAB_1083c72c0;
        }
code_r0x0001083c6f6c:
        func_0x0001083c89b0(0);
        iVar11 = 0;
        if (iVar8 != 0) {
          ppppppplVar15 = param_7;
          FUN_1083d64e8();
          iVar11 = (int)ppppppplVar15;
          if (((ulong)ppppppplVar15 & 1) == 0) goto code_r0x0001083c724c;
        }
        func_0x0001083c8980(0xbff0000000000000);
        if (iVar11 != 0) {
          func_0x0001083c8778();
          FUN_1083c8594();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        func_0x0001083c89b0(0xbff0000000000000);
        break;
      case 3:
        func_0x0001083c8900();
        iVar8 = (int)ppppppplVar29;
        if ((((ulong)ppppppplVar29 & 1) == 0) && (func_0x0001083c8a0c(), iVar8 != 0)) {
          func_0x0001083c8760();
          if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
          func_0x0001083c8868();
        }
        pppppplVar35 = param_5[2];
        func_0x0001083c8850();
        if ((((ulong)pppppplVar35 & 1) != 0) ||
           (func_0x0001083c8988(), pppppplStack_68 == (long ******)0x0)) goto LAB_1083c72cc;
        func_0x0001083c8870();
        func_0x0001083c893c(&pppppplStack_70);
        pppppplStack_78 = pppppplStack_68;
        pppppplStack_68 = (long ******)0x0;
        func_0x0001083c88d0();
        FUN_1083d9b94();
        pppppplVar35 = pppppplStack_78;
        if (pppppplStack_78 != (long ******)0x0) {
          func_0x0001083c878c();
        }
        func_0x0001083c8a48();
joined_r0x0001083c72a8:
        if (pppppplVar35 != (long ******)0x0) {
          func_0x0001083c878c();
        }
        pppppplVar35 = pppppplStack_68;
        pppppplStack_68 = (long ******)0x0;
        if (pppppplVar35 != (long ******)0x0) {
          func_0x0001083c878c();
        }
LAB_1083c72c0:
        if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
        goto LAB_1083c72d0;
      default:
        if (uVar31 - 0x16 < 2) {
          func_0x0001083c88a8();
          if (uVar9 == 0) goto LAB_1083c72cc;
          func_0x0001083c8760();
          if (*param_1 != (long ******)0x0) {
            func_0x0001083c88c4();
            goto LAB_1083c72c0;
          }
          goto LAB_1083c709c;
        }
        if (uVar31 == 0x18) {
          func_0x0001083c8980(0x3ff0000000000000);
          if (uVar9 != 0) {
            func_0x0001083c8760();
            if (*param_1 != (long ******)0x0) {
              func_0x0001083c88c4();
              goto LAB_1083c72c0;
            }
            goto LAB_1083c709c;
          }
        }
        else if (uVar31 == 0x19) {
          func_0x0001083c8a0c();
          if (uVar9 != 0) {
            func_0x0001083c8760();
            if (*param_1 != (long ******)0x0) {
              func_0x0001083c88c4();
              goto LAB_1083c72c0;
            }
            func_0x0001083c8868();
          }
          func_0x0001083c8988();
          if (pppppplStack_68 != (long ******)0x0) {
            func_0x0001083c8870();
            func_0x0001083c893c(auStack_80);
            pppppplStack_88 = pppppplStack_68;
            pppppplStack_68 = (long ******)0x0;
            func_0x0001083c88d0();
            FUN_1083d9b94();
            pppppplVar35 = pppppplStack_88;
            if (pppppplStack_88 != (long ******)0x0) {
              func_0x0001083c878c();
            }
            func_0x0001083c8974();
            goto joined_r0x0001083c72a8;
          }
        }
        goto LAB_1083c72cc;
      }
      if (iVar11 != 0) {
        func_0x0001083c87c4();
        FUN_1083c8594();
code_r0x0001083c7094:
        if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
LAB_1083c709c:
        func_0x0001083c8868();
      }
LAB_1083c72cc:
      *param_1 = (long ******)0x0;
LAB_1083c72d0:
      func_0x0001083c8868();
    }
    if ((uVar12 & 0xff) == 0x19 || (uVar12 & 0xff) == 3) {
      iVar8 = (int)param_5[2];
      func_0x0001083c8850();
      if (iVar8 == 0) goto LAB_1083c7320;
      iVar8 = (int)param_7[2];
      func_0x0001083c88ec();
      if (iVar8 == 0) goto LAB_1083c7320;
      func_0x0001083c8870();
      func_0x0001083c893c(auStack_80);
      uVar10 = *(undefined4 *)(param_7 + 1);
      FUN_1083c7aa0(&pppppplStack_70,0x3ff0000000000000,uVar10,param_7[2]);
      pppppplStack_68 = pppppplStack_70;
      pppppplStack_70 = (long ******)0x0;
      (*(code *)(*param_7)[6])(&pppppplStack_78,param_7,*(undefined4 *)(param_7 + 1));
      FUN_1083d9b94(&pppppplStack_88,param_3,uVar10,&pppppplStack_68,3,&pppppplStack_78);
      pppppplVar35 = pppppplStack_78;
      pppppplStack_78 = (long ******)0x0;
      if (pppppplVar35 != (long ******)0x0) {
        func_0x0001083c878c();
      }
      pppppplVar35 = pppppplStack_68;
      if (pppppplStack_68 != (long ******)0x0) {
        func_0x0001083c878c();
      }
      func_0x0001083c8a48();
      if (pppppplVar35 != (long ******)0x0) {
        func_0x0001083c878c();
      }
      func_0x0001083c88d0();
      FUN_1083d9b94();
      func_0x0001083c889c();
      if (pppppplVar35 != (long ******)0x0) {
        func_0x0001083c878c();
      }
      func_0x0001083c8974();
      if (pppppplVar35 != (long ******)0x0) {
        func_0x0001083c878c();
      }
      if (*param_1 != (long ******)0x0) goto LAB_1083c732c;
    }
    else {
LAB_1083c7320:
      *param_1 = (long ******)0x0;
    }
    func_0x0001083c8868();
LAB_1083c7328:
    *param_1 = (long ******)0x0;
LAB_1083c732c:
    func_0x0001083c890c();
    return;
  }
  ppppppplVar32 = (long *******)param_5[2];
  ppppppplVar29 = (long *******)param_7[2];
  ppppppplVar13 = param_5;
  FUN_1083c6698();
  if (((int)ppppppplVar13 == 0) ||
     (ppppppplVar13 = param_7, FUN_1083c6698(), (int)ppppppplVar13 == 0)) {
    ppppppplVar13 = param_5;
    FUN_1083c76a8();
    if (((int)ppppppplVar13 == 0) ||
       (ppppppplVar13 = param_7, FUN_1083c76a8(), (int)ppppppplVar13 == 0)) {
      param_6 = (long *******)((ulong)param_6 & 0xff);
      if (param_6 == (long *******)0x2) {
        func_0x0001083c8840();
        if (((int)ppppppplVar13 == 0) || (func_0x0001083c8830(), (int)ppppppplVar13 == 0)) {
          func_0x0001083c8888((*ppppppplVar32)[0x1a]);
          if (((int)ppppppplVar13 == 0) || (func_0x0001083c8830(), (int)ppppppplVar13 == 0)) {
            func_0x0001083c8840();
            if (((int)ppppppplVar13 == 0) ||
               (func_0x0001083c8880((*ppppppplVar29)[0x1a]), (int)ppppppplVar13 == 0))
            goto LAB_1083c6d00;
            func_0x0001083c8820();
            uVar10 = SUB84(ppppppplVar13,0);
            func_0x0001083c87f8();
            func_0x0001083c8928();
            auStack_90[0] = uVar10;
            func_0x0001083c8778();
          }
          else {
            uVar10 = SUB84(param_5[2],0);
            func_0x0001083c89e4();
            func_0x0001083c8820();
            func_0x0001083c87f8();
            auStack_90[0] = uVar10;
            func_0x0001083c8778();
          }
        }
        else {
          pppppplVar35 = param_7[2];
          func_0x0001083c8820();
          func_0x0001083c87f8();
          func_0x0001083c8928();
          (*(code *)(*pppppplVar35)[0xd])();
          auStack_90[0] = SUB84(pppppplVar35,0);
          func_0x0001083c8778();
        }
        FUN_1083c7c74();
        goto LAB_1083c732c;
      }
LAB_1083c6d00:
      cVar1 = *(char *)((long)ppppppplVar32 + 0x2c);
      uVar7 = cVar1 == '\v' || cVar1 == '\x04';
      ppppppplVar28 = ppppppplVar19;
      ppppppplVar26 = ppppppplVar15;
      if ((cVar1 == '\v' || cVar1 == '\x04') &&
         (ppppppplVar13 = ppppppplVar32, ppppppplVar18 = ppppppplVar29,
         (*(code *)(*ppppppplVar32)[7])(), ppppppplVar17 = ppppppplVar18,
         ppppppplVar28 = ppppppplVar19, ppppppplVar26 = ppppppplVar15, (int)ppppppplVar13 != 0)) {
        func_0x0001083c8778();
        func_0x0001083c890c();
        ppppppplVar17 = apppppplStack_1a0;
        param_3 = ppppppplVar13;
        ppppppplVar14 = ppppppplVar18;
        ppppppplVar27 = ppppppplVar19;
        ppppppplVar21 = ppppppplVar15;
        ppppppplVar29 = param_6;
        ppppppplVar32 = param_7;
        pppppplStack_d8 = param_8;
        func_0x0001083c88b4();
        ppppppplVar26 = (long *******)ppppppplVar21[2];
        uStack_120 = extraout_x8;
        FUN_1083c7a10();
        if (*ppppppplVar13 == (long ******)0x0) {
          func_0x0001083c8868();
          uVar7 = param_6 == (long *******)0x4;
          if (param_6 < (long *******)0x4) {
            pcVar30 = (code *)(&PTR_FUN_110a44348)[(long)param_6];
            ppppppplVar28 = ppppppplVar26;
            (*(code *)(*ppppppplVar26)[10])();
            (*(code *)(*ppppppplVar28)[0xe])();
            dVar34 = param_2;
            (*(code *)(*ppppppplVar28)[0xf])(ppppppplVar28);
            param_3 = ppppppplVar26;
            (*(code *)(*ppppppplVar26)[0x10])();
            uVar12 = (uint)param_3;
            for (ppppppplVar28 = (long *******)0x0;
                uVar7 = (long *******)(ulong)(uVar12 & ((int)uVar12 >> 0x1f ^ 0xffffffffU)) ==
                        ppppppplVar28, !(bool)uVar7;
                ppppppplVar28 = (long *******)((long)ppppppplVar28 + 1)) {
              ppppppplVar16 = ppppppplVar15;
              (*(code *)(*ppppppplVar15)[5])(ppppppplVar15,ppppppplVar28);
              param_3 = param_7;
              ppppppplVar14 = ppppppplVar28;
              (*(code *)(*param_7)[5])();
              (*pcVar30)(ppppppplVar16,param_3);
              bVar4 = false;
              uVar7 = false;
              bVar5 = false;
              if (param_2 <= (double)ppppppplVar16) {
                bVar4 = false;
                uVar7 = false;
                bVar5 = true;
                if (!NAN((double)ppppppplVar16) && !NAN(dVar34)) {
                  bVar4 = (double)ppppppplVar16 < dVar34;
                  uVar7 = (double)ppppppplVar16 == dVar34;
                  bVar5 = false;
                }
              }
              if (!(bool)uVar7 && bVar4 == bVar5) goto LAB_1083c77f4;
              apppppplStack_1a0[(long)ppppppplVar28] = (long ******)ppppppplVar16;
            }
            func_0x0001083c88d0();
            ppppppplVar27 = ppppppplVar26;
            FUN_1083dcad4();
            ppppppplVar21 = ppppppplVar17;
          }
          else {
LAB_1083c77f4:
            *ppppppplVar13 = (long ******)0x0;
          }
        }
        func_0x0001083c880c(uStack_120);
        if ((bool)uVar7) {
          return;
        }
        ___stack_chk_fail();
        puVar3 = (undefined4 *)auStack_240;
        pcStack_1a8 = FUN_1083c7844;
        unaff_x29 = &puStack_1b0;
        ppppppplVar17 = ppppppplVar14;
        ppppppplVar28 = ppppppplVar27;
        param_1 = ppppppplVar21;
        ppppppplStack_1e0 = ppppppplVar15;
        ppppppplStack_1d8 = param_7;
        ppppppplStack_1d0 = ppppppplVar26;
        ppppppplStack_1c8 = ppppppplVar18;
        ppppppplStack_1c0 = ppppppplVar19;
        ppppppplStack_1b8 = ppppppplVar13;
        puStack_1b0 = auStack_a0;
        func_0x0001083c88b4();
        uStack_1e8 = extraout_x8_00;
        ppppppplVar26 = param_1;
        (*(code *)(*param_1)[0x1a])();
        if ((int)param_1 == 0) {
          func_0x0001083c8958((*ppppppplVar21)[0x1b]);
          if ((int)param_1 == 0) {
            *param_3 = (long ******)0x0;
            param_5 = param_7;
          }
          else {
            ppppppplVar17 = ppppppplVar21;
            (*(code *)(*ppppppplVar21)[0x10])();
            ppppppplVar15 = apppppplStack_208;
            uStack_1f0 = 0x400000000;
            ppppppplStack_1f8 = ppppppplVar15;
            func_0x0001083c7ec0(&ppppppplStack_1f8,ppppppplVar17);
            for (uVar12 = (uint)ppppppplVar17 & ((int)(uint)ppppppplVar17 >> 0x1f ^ 0xffffffffU);
                uVar12 != 0; uVar12 = uVar12 - 1) {
              (*(code *)(*ppppppplVar27)[6])
                        (auStack_238,ppppppplVar27,*(undefined4 *)(ppppppplVar27 + 1));
              ppppppplVar17 = (long *******)&ppppppplStack_1f8;
              FUN_1083c7ed8(ppppppplVar17,auStack_238);
              func_0x0001083c889c();
              if (ppppppplVar17 != (long *******)0x0) {
                func_0x0001083c878c();
              }
            }
            ppppppplVar27 = (long *******)(ulong)*(uint *)(ppppppplVar27 + 1);
            FUN_1083c8078(apppppplStack_228,apppppplStack_208);
            ppppppplVar26 = apppppplStack_228;
            ppppppplVar17 = ppppppplVar27;
            FUN_1083dc648(param_3,ppppppplVar14,ppppppplVar27,ppppppplVar21);
            FUN_1083c81d4(auStack_218);
            param_1 = (long *******)&ppppppplStack_1f8;
            FUN_1083c81d4();
            ppppppplVar28 = ppppppplVar21;
            param_5 = apppppplStack_228;
          }
        }
        else {
          param_5 = (long *******)(ulong)*(uint *)(ppppppplVar27 + 1);
          (*(code *)(*ppppppplVar27)[6])(&pppppplStack_230,ppppppplVar27,param_5);
          ppppppplVar26 = &pppppplStack_230;
          param_1 = ppppppplVar14;
          ppppppplVar17 = param_5;
          FUN_1083dde68(param_3,ppppppplVar14,param_5,ppppppplVar21);
          func_0x0001083c8974();
          ppppppplVar28 = ppppppplVar21;
          if (param_1 != (long *******)0x0) {
            func_0x0001083c878c();
            ppppppplVar28 = ppppppplVar21;
          }
        }
        func_0x0001083c880c(uStack_1e8);
        if ((bool)uVar7) {
          return;
        }
        ___stack_chk_fail();
        FUN_1083c81d4(param_5 + 2);
        ppppppplVar13 = ppppppplVar15 + 2;
        FUN_1083c81d4();
        unaff_x30 = FUN_1083c7a10;
        func_0x0001083c8998();
        param_7 = ppppppplVar27;
        param_6 = ppppppplVar15;
      }
      else {
        func_0x0001083c8880((*ppppppplVar29)[0x17]);
        if (((int)ppppppplVar13 != 0) &&
           (*(char *)((long)ppppppplVar32 + 0x2c) == '\v' ||
            *(char *)((long)ppppppplVar32 + 0x2c) == '\x04')) {
          ppppppplVar13 = ppppppplVar32;
          (*(code *)(*ppppppplVar32)[10])();
          ppppppplVar17 = ppppppplVar29;
          (*(code *)(*ppppppplVar13)[7])();
          if ((int)ppppppplVar13 == 0) goto LAB_1083c6db4;
          FUN_1083c7844(&pppppplStack_68,param_3,param_7,param_5[2]);
          func_0x0001083c8778();
          FUN_1083c76d8();
LAB_1083c6e20:
          pppppplVar35 = pppppplStack_68;
          pppppplStack_68 = (long ******)0x0;
          if (pppppplVar35 != (long ******)0x0) {
            func_0x0001083c878c();
          }
          goto LAB_1083c732c;
        }
LAB_1083c6db4:
        func_0x0001083c8888((*ppppppplVar32)[0x17]);
        if (((int)ppppppplVar13 != 0) &&
           (*(char *)((long)ppppppplVar29 + 0x2c) == '\v' ||
            *(char *)((long)ppppppplVar29 + 0x2c) == '\x04')) {
          ppppppplVar13 = ppppppplVar29;
          (*(code *)(*ppppppplVar29)[10])();
          ppppppplVar17 = ppppppplVar32;
          (*(code *)(*ppppppplVar13)[7])();
          if ((int)ppppppplVar13 != 0) {
            FUN_1083c7844(&pppppplStack_68,param_3,param_5,param_7[2]);
            func_0x0001083c87c4();
            FUN_1083c76d8();
            goto LAB_1083c6e20;
          }
        }
        func_0x0001083c8840();
        if (((((int)ppppppplVar13 == 0) || (func_0x0001083c8830(), ((ulong)ppppppplVar13 & 1) == 0))
            && ((func_0x0001083c8888((*ppppppplVar32)[0x1c]), (int)ppppppplVar13 == 0 ||
                (func_0x0001083c8880((*ppppppplVar29)[0x1c]), ((ulong)ppppppplVar13 & 1) == 0)))) &&
           ((func_0x0001083c8888((*ppppppplVar32)[0x1e]), (int)ppppppplVar13 == 0 ||
            (func_0x0001083c8880((*ppppppplVar29)[0x1e]), (int)ppppppplVar13 == 0))))
        goto LAB_1083c7328;
        func_0x0001083c8778();
        ppppppplVar29 = param_6;
        ppppppplVar32 = param_7;
        func_0x0001083c890c();
      }
      *(long ********)((long)puVar3 + -0x40) = param_6;
      *(long ********)((long)puVar3 + -0x38) = param_5;
      *(long ********)((long)puVar3 + -0x30) = param_7;
      *(long ********)((long)puVar3 + -0x28) = param_3;
      *(long ********)((long)puVar3 + -0x20) = ppppppplVar14;
      *(long ********)((long)puVar3 + -0x18) = param_1;
      *(undefined1 ***)((long)puVar3 + -0x10) = unaff_x29;
      *(code **)((long)puVar3 + -8) = unaff_x30;
      bVar4 = ppppppplVar29 == (long *******)0x10;
      if (((ulong)ppppppplVar29 & 0xfe) == 0x10) {
        (*(code *)(*ppppppplVar26)[3])(ppppppplVar26,ppppppplVar32);
        if ((int)ppppppplVar26 != 1) {
          if ((int)ppppppplVar26 != 0) goto LAB_1083c7a94;
          bVar4 = ppppppplVar29 != (long *******)0x10;
        }
        func_0x0001083c7504((undefined1 *)((long)puVar3 + -0x48),ppppppplVar17,ppppppplVar28,bVar4);
        *ppppppplVar13 = *(long *******)((long)puVar3 + -0x48);
      }
      else {
LAB_1083c7a94:
        *ppppppplVar13 = (long ******)0x0;
      }
      return;
    }
    if (0x15 < (uVar12 & 0xff)) goto LAB_1083c7328;
    fVar33 = (float)(double)param_5[3];
    fVar37 = (float)(double)param_7[3];
    switch((ulong)param_6 & 0xff) {
    case 0:
      fVar33 = fVar33 + fVar37;
      break;
    case 1:
      fVar33 = fVar33 - fVar37;
      break;
    case 2:
      fVar33 = fVar33 * fVar37;
      break;
    case 3:
      fVar33 = fVar33 / fVar37;
      break;
    default:
      goto LAB_1083c7328;
    case 0x10:
      bVar4 = fVar33 == fVar37;
      goto code_r0x0001083c7120;
    case 0x11:
      bVar4 = fVar33 == fVar37;
      goto code_r0x0001083c7160;
    case 0x12:
      dVar34 = 1.0;
      if (fVar37 <= fVar33) {
        dVar34 = 0.0;
      }
      goto code_r0x0001083c722c;
    case 0x13:
      bVar4 = NAN(fVar33) || NAN(fVar37);
      bVar6 = fVar33 == fVar37;
      bVar5 = fVar33 < fVar37;
      goto code_r0x0001083c710c;
    case 0x14:
      dVar34 = 1.0;
      if (fVar37 < fVar33) {
        dVar34 = 0.0;
      }
      goto code_r0x0001083c722c;
    case 0x15:
      bVar4 = NAN(fVar33) || NAN(fVar37);
      bVar5 = fVar33 < fVar37;
      goto code_r0x0001083c71c0;
    }
    dVar34 = (double)fVar33;
    goto code_r0x0001083c722c;
  }
  if (0x15 < (uVar12 & 0xff)) goto LAB_1083c7328;
  uVar22 = (ulong)(double)param_5[3];
  uVar25 = (ulong)(double)param_7[3];
  switch((ulong)param_6 & 0xff) {
  case 0:
    uVar24 = uVar25 + uVar22;
    break;
  case 1:
    uVar24 = uVar22 - uVar25;
    break;
  case 2:
    uVar24 = uVar25 * uVar22;
    break;
  case 3:
    if (uVar22 == 0x8000000000000000 && uVar25 == 0xffffffffffffffff) {
code_r0x0001083c7204:
      pppppplVar35 = param_3[2];
      puVar20 = &UNK_10f491608;
      uVar23 = 0x13;
      goto code_r0x0001083c6af8;
    }
    uVar24 = 0;
    if (uVar25 != 0) {
      uVar24 = (long)uVar22 / (long)uVar25;
    }
    break;
  case 4:
    if (uVar22 == 0x8000000000000000 && uVar25 == 0xffffffffffffffff) goto code_r0x0001083c7204;
    lVar2 = 0;
    if (uVar25 != 0) {
      lVar2 = (long)uVar22 / (long)uVar25;
    }
    uVar24 = uVar22 - lVar2 * uVar25;
    break;
  case 5:
    if (0x1f < uVar25) {
code_r0x0001083c7188:
      pppppplVar35 = param_3[2];
      puVar20 = &UNK_10f49161c;
      uVar23 = 0x18;
      goto code_r0x0001083c6af8;
    }
    uVar24 = uVar22 << (uVar25 & 0x3f);
    break;
  case 6:
    if (0x1f < uVar25) goto code_r0x0001083c7188;
    uVar24 = (long)uVar22 >> (uVar25 & 0x3f);
    break;
  default:
    goto LAB_1083c7328;
  case 0xc:
    uVar24 = uVar25 & uVar22;
    break;
  case 0xd:
    uVar24 = uVar25 | uVar22;
    break;
  case 0xe:
    uVar24 = uVar25 ^ uVar22;
    break;
  case 0x10:
    bVar4 = uVar22 == uVar25;
code_r0x0001083c7120:
    dVar34 = 1.0;
    if (!bVar4) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  case 0x11:
    bVar4 = uVar22 == uVar25;
code_r0x0001083c7160:
    dVar34 = 1.0;
    if (bVar4) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  case 0x12:
    dVar34 = 1.0;
    if ((long)uVar25 <= (long)uVar22) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  case 0x13:
    bVar4 = SBORROW8(uVar22,uVar25);
    bVar5 = (long)(uVar22 - uVar25) < 0;
    bVar6 = uVar22 == uVar25;
code_r0x0001083c710c:
    dVar34 = 1.0;
    if (bVar6 || bVar5 != bVar4) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  case 0x14:
    dVar34 = 1.0;
    if ((long)uVar25 < (long)uVar22) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  case 0x15:
    bVar4 = SBORROW8(uVar22,uVar25);
    bVar5 = (long)(uVar22 - uVar25) < 0;
code_r0x0001083c71c0:
    dVar34 = 1.0;
    if (bVar5 != bVar4) {
      dVar34 = 0.0;
    }
    goto code_r0x0001083c722c;
  }
  dVar34 = (double)(long)uVar24;
code_r0x0001083c722c:
  func_0x0001083c890c(param_1,ppppppplVar14);
  pppppplVar35 = param_8;
  dVar36 = dVar34;
  (*(code *)(*param_8)[8])();
  if ((2 < (uint)pppppplVar35) ||
     (((*(code *)(*param_8)[0xe])(param_8), dVar36 <= dVar34 &&
      ((*(code *)(*param_8)[0xf])(param_8), dVar34 <= dVar36)))) {
    FUN_1083c7aa0(&pppppplStack_d8,dVar34,ppppppplVar14,param_8);
    *param_1 = pppppplStack_d8;
  }
  else {
    *param_1 = (long ******)0x0;
  }
  return;
}



/* Entry: 1083c74d4; end: 1083c753b;  */

bool FUN_1083c74d4(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0x29) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001083c885c(uVar1);
    return (int)uVar1 == 3;
  }
  return false;
}



/* Entry: 1083c753c; end: 1083c75cf;  */

void FUN_1083c753c(undefined8 *param_1,undefined8 param_2,long *param_3,long param_4,long *param_5)

{
  bool bVar1;
  double dVar2;
  
  dVar2 = (double)param_3[3];
  if ((dVar2 != 0.0 || param_4 != 8) && (dVar2 == 0.0 || param_4 != 9)) {
    bVar1 = dVar2 == 0.0;
    param_3 = param_5;
    if (((bVar1 || param_4 != 8) &&
        (((!bVar1 || param_4 != 9 && (!bVar1 || param_4 != 10)) && (bVar1 || param_4 != 0x10)))) &&
       (!bVar1 || param_4 != 0x11)) {
      *param_1 = 0;
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001083c8954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x30))(param_1,param_3);
  return;
}



/* Entry: 1083c75d0; end: 1083c75fb;  */

void FUN_1083c75d0(void)

{
  byte *unaff_x20;
  undefined4 *unaff_x21;
  undefined8 uVar1;
  
  func_0x0001083c87d4();
  uVar1 = NEON_ucvtf((ulong)*unaff_x20);
  func_0x0001083c8798(*unaff_x21,uVar1);
  return;
}



/* Entry: 1083c75fc; end: 1083c76a7;  */

void FUN_1083c75fc(double param_1,undefined8 *param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  double dVar2;
  undefined8 uStack_48;
  
  plVar1 = param_4;
  dVar2 = param_1;
  (**(code **)(*param_4 + 0x40))();
  if ((2 < (uint)plVar1) ||
     (((**(code **)(*param_4 + 0x70))(param_4), dVar2 <= param_1 &&
      ((**(code **)(*param_4 + 0x78))(param_4), param_1 <= dVar2)))) {
    FUN_1083c7aa0(&uStack_48,param_1,param_3,param_4);
    *param_2 = uStack_48;
  }
  else {
    *param_2 = 0;
  }
  return;
}



/* Entry: 1083c76a8; end: 1083c76d7;  */

bool FUN_1083c76a8(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 0x29) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001083c885c(uVar1);
    return (int)uVar1 == 0;
  }
  return false;
}



/* Entry: 1083c76d8; end: 1083c7843;  */

void FUN_1083c76d8(double param_1,long ****param_2,long ****param_3,long ****param_4,
                  long ****param_5,ulong param_6,long ****param_7)

{
  bool bVar1;
  undefined1 in_ZR;
  bool bVar2;
  uint uVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  long ****pppplVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  code *pcVar15;
  double dVar16;
  long **pplStack_1f8;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  long ***ppplStack_1e0;
  long ***ppplStack_1d8;
  long ***ppplStack_1d0;
  long ***ppplStack_1c8;
  undefined1 **ppuStack_1c0;
  code *pcStack_1b8;
  undefined1 auStack_1a8 [8];
  long **pplStack_1a0;
  long **applStack_198 [2];
  undefined1 auStack_188 [16];
  long **applStack_178 [2];
  long ***ppplStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long ***ppplStack_150;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long ***ppplStack_138;
  long ***ppplStack_130;
  long ***ppplStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  long **applStack_110 [16];
  undefined8 uStack_90;
  
  pppplVar6 = (long ****)applStack_110;
  pppplVar4 = param_2;
  pppplVar8 = param_3;
  pppplVar13 = param_4;
  pppplVar7 = param_5;
  uVar10 = param_6;
  pppplVar11 = param_7;
  func_0x0001083c88b4();
  pppplVar12 = (long ****)pppplVar7[2];
  uStack_90 = extraout_x8;
  FUN_1083c7a10();
  if (*param_2 == (long ***)0x0) {
    func_0x0001083c8868();
    in_ZR = param_6 == 4;
    if (param_6 < 4) {
      pcVar15 = (code *)(&PTR_FUN_110a44348)[param_6];
      pppplVar4 = pppplVar12;
      (*(code *)(*pppplVar12)[10])();
      (*(code *)(*pppplVar4)[0xe])();
      dVar16 = param_1;
      (*(code *)(*pppplVar4)[0xf])(pppplVar4);
      pppplVar4 = pppplVar12;
      (*(code *)(*pppplVar12)[0x10])();
      uVar3 = (uint)pppplVar4;
      for (pppplVar14 = (long ****)0x0;
          in_ZR = (long ****)(ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) == pppplVar14,
          !(bool)in_ZR; pppplVar14 = (long ****)((long)pppplVar14 + 1)) {
        pppplVar5 = param_5;
        (*(code *)(*param_5)[5])(param_5,pppplVar14);
        pppplVar4 = param_7;
        pppplVar8 = pppplVar14;
        (*(code *)(*param_7)[5])();
        (*pcVar15)(pppplVar5,pppplVar4);
        bVar1 = false;
        in_ZR = false;
        bVar2 = false;
        if (param_1 <= (double)pppplVar5) {
          bVar1 = false;
          in_ZR = false;
          bVar2 = true;
          if (!NAN((double)pppplVar5) && !NAN(dVar16)) {
            bVar1 = (double)pppplVar5 < dVar16;
            in_ZR = (double)pppplVar5 == dVar16;
            bVar2 = false;
          }
        }
        if (!(bool)in_ZR && bVar1 == bVar2) goto LAB_1083c77f4;
        applStack_110[(long)pppplVar14] = (long **)pppplVar5;
      }
      func_0x0001083c88d0();
      pppplVar13 = pppplVar12;
      FUN_1083dcad4();
      pppplVar7 = pppplVar6;
    }
    else {
LAB_1083c77f4:
      *param_2 = (long ***)0x0;
    }
  }
  func_0x0001083c880c(uStack_90);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_1083c7844;
  pppplVar5 = pppplVar8;
  pppplVar9 = pppplVar13;
  pppplVar14 = pppplVar7;
  ppplStack_150 = (long ***)param_5;
  ppplStack_148 = (long ***)param_7;
  ppplStack_140 = (long ***)pppplVar12;
  ppplStack_138 = (long ***)param_3;
  ppplStack_130 = (long ***)param_4;
  ppplStack_128 = (long ***)param_2;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x0001083c88b4();
  pppplVar6 = pppplVar14;
  uStack_158 = extraout_x8_00;
  (*(code *)(*pppplVar14)[0x1a])();
  if ((int)pppplVar14 == 0) {
    func_0x0001083c8958((*pppplVar7)[0x1b]);
    if ((int)pppplVar14 == 0) {
      *pppplVar4 = (long ***)0x0;
    }
    else {
      pppplVar6 = pppplVar7;
      (*(code *)(*pppplVar7)[0x10])();
      param_5 = (long ****)applStack_178;
      uStack_160 = 0x400000000;
      ppplStack_168 = (long ***)param_5;
      func_0x0001083c7ec0(&ppplStack_168,pppplVar6);
      for (uVar3 = (uint)pppplVar6 & ((int)(uint)pppplVar6 >> 0x1f ^ 0xffffffffU); uVar3 != 0;
          uVar3 = uVar3 - 1) {
        (*(code *)(*pppplVar13)[6])(auStack_1a8,pppplVar13,*(undefined4 *)(pppplVar13 + 1));
        pppplVar6 = &ppplStack_168;
        FUN_1083c7ed8(pppplVar6,auStack_1a8);
        func_0x0001083c889c();
        if (pppplVar6 != (long ****)0x0) {
          func_0x0001083c878c();
        }
      }
      pppplVar13 = (long ****)(ulong)*(uint *)(pppplVar13 + 1);
      FUN_1083c8078(applStack_198,applStack_178);
      param_7 = (long ****)applStack_198;
      pppplVar6 = (long ****)applStack_198;
      pppplVar5 = pppplVar13;
      FUN_1083dc648(pppplVar4,pppplVar8,pppplVar13,pppplVar7);
      FUN_1083c81d4(auStack_188);
      pppplVar14 = &ppplStack_168;
      FUN_1083c81d4();
      pppplVar9 = pppplVar7;
    }
  }
  else {
    param_7 = (long ****)(ulong)*(uint *)(pppplVar13 + 1);
    (*(code *)(*pppplVar13)[6])(&pplStack_1a0,pppplVar13,param_7);
    pppplVar6 = (long ****)&pplStack_1a0;
    pppplVar14 = pppplVar8;
    pppplVar5 = param_7;
    FUN_1083dde68(pppplVar4,pppplVar8,param_7,pppplVar7);
    func_0x0001083c8974();
    pppplVar9 = pppplVar7;
    if (pppplVar14 != (long ****)0x0) {
      func_0x0001083c878c();
      pppplVar9 = pppplVar7;
    }
  }
  func_0x0001083c880c(uStack_158);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083c81d4(param_7 + 2);
  pppplVar7 = param_5 + 2;
  FUN_1083c81d4();
  func_0x0001083c8998();
  pcStack_1b8 = FUN_1083c7a10;
  bVar1 = uVar10 == 0x10;
  if ((uVar10 & 0xfe) == 0x10) {
    ppplStack_1f0 = (long ***)param_5;
    ppplStack_1e8 = (long ***)param_7;
    ppplStack_1e0 = (long ***)pppplVar13;
    ppplStack_1d8 = (long ***)pppplVar4;
    ppplStack_1d0 = (long ***)pppplVar8;
    ppplStack_1c8 = (long ***)pppplVar14;
    ppuStack_1c0 = &puStack_120;
    (*(code *)(*pppplVar6)[3])(pppplVar6,pppplVar11);
    if ((int)pppplVar6 != 1) {
      if ((int)pppplVar6 != 0) goto LAB_1083c7a94;
      bVar1 = uVar10 != 0x10;
    }
    func_0x0001083c7504(&pplStack_1f8,pppplVar5,pppplVar9,bVar1);
    *pppplVar7 = (long ***)pplStack_1f8;
  }
  else {
LAB_1083c7a94:
    *pppplVar7 = (long ***)0x0;
  }
  return;
}



/* Entry: 1083c7844; end: 1083c7a0f;  */

void FUN_1083c7844(undefined8 *param_1,undefined1 **param_2,undefined1 **param_3,
                  undefined1 **param_4,ulong param_5,undefined8 param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  undefined1 **ppuVar7;
  undefined8 extraout_x8;
  undefined1 **unaff_x23;
  undefined1 *unaff_x24;
  undefined8 uStack_e8;
  undefined1 *puStack_e0;
  undefined1 **ppuStack_d8;
  undefined1 **ppuStack_d0;
  undefined8 *puStack_c8;
  undefined1 **ppuStack_c0;
  undefined1 **ppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 *puStack_90;
  undefined1 *apuStack_88 [2];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar6 = param_2;
  ppuVar7 = param_3;
  ppuVar3 = param_4;
  func_0x0001083c88b4();
  ppuVar4 = ppuVar3;
  uStack_48 = extraout_x8;
  (**(code **)(*ppuVar3 + 0xd0))();
  if ((int)ppuVar3 == 0) {
    func_0x0001083c8958(*(undefined8 *)(*param_4 + 0xd8));
    if ((int)ppuVar3 == 0) {
      *param_1 = 0;
    }
    else {
      ppuVar4 = param_4;
      (**(code **)(*param_4 + 0x80))();
      unaff_x24 = auStack_68;
      uStack_50 = 0x400000000;
      puStack_58 = unaff_x24;
      func_0x0001083c7ec0(&puStack_58,ppuVar4);
      for (uVar1 = (uint)ppuVar4 & ((int)(uint)ppuVar4 >> 0x1f ^ 0xffffffffU); uVar1 != 0;
          uVar1 = uVar1 - 1) {
        (**(code **)(*param_3 + 0x30))(auStack_98,param_3,*(undefined4 *)(param_3 + 1));
        ppuVar4 = &puStack_58;
        FUN_1083c7ed8(ppuVar4,auStack_98);
        func_0x0001083c889c();
        if (ppuVar4 != (undefined1 **)0x0) {
          func_0x0001083c878c();
        }
      }
      param_3 = (undefined1 **)(ulong)*(uint *)(param_3 + 1);
      FUN_1083c8078(apuStack_88,auStack_68);
      unaff_x23 = apuStack_88;
      ppuVar4 = apuStack_88;
      ppuVar6 = param_3;
      FUN_1083dc648(param_1,param_2,param_3,param_4);
      FUN_1083c81d4(auStack_78);
      ppuVar3 = &puStack_58;
      FUN_1083c81d4();
      ppuVar7 = param_4;
    }
  }
  else {
    unaff_x23 = (undefined1 **)(ulong)*(uint *)(param_3 + 1);
    (**(code **)(*param_3 + 0x30))(&puStack_90,param_3,unaff_x23);
    ppuVar4 = &puStack_90;
    ppuVar3 = param_2;
    ppuVar6 = unaff_x23;
    FUN_1083dde68(param_1,param_2,unaff_x23,param_4);
    func_0x0001083c8974();
    ppuVar7 = param_4;
    if (ppuVar3 != (undefined1 **)0x0) {
      func_0x0001083c878c();
      ppuVar7 = param_4;
    }
  }
  func_0x0001083c880c(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083c81d4(unaff_x23 + 2);
  puVar5 = (undefined8 *)(unaff_x24 + 0x10);
  FUN_1083c81d4();
  func_0x0001083c8998();
  pcStack_a8 = FUN_1083c7a10;
  bVar2 = param_5 == 0x10;
  if ((param_5 & 0xfe) == 0x10) {
    puStack_e0 = unaff_x24;
    ppuStack_d8 = unaff_x23;
    ppuStack_d0 = param_3;
    puStack_c8 = param_1;
    ppuStack_c0 = param_2;
    ppuStack_b8 = ppuVar3;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(*ppuVar4 + 0x18))(ppuVar4,param_6);
    if ((int)ppuVar4 != 1) {
      if ((int)ppuVar4 != 0) goto LAB_1083c7a94;
      bVar2 = param_5 != 0x10;
    }
    func_0x0001083c7504(&uStack_e8,ppuVar6,ppuVar7,bVar2);
    *puVar5 = uStack_e8;
  }
  else {
LAB_1083c7a94:
    *puVar5 = 0;
  }
  return;
}



/* Entry: 1083c7a10; end: 1083c7a9f;  */

void FUN_1083c7a10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  ulong param_5,undefined8 param_6)

{
  bool bVar1;
  undefined8 uStack_48;
  
  bVar1 = param_5 == 0x10;
  if ((param_5 & 0xfe) == 0x10) {
    (**(code **)(*param_4 + 0x18))(param_4,param_6);
    if ((int)param_4 != 1) {
      if ((int)param_4 != 0) goto LAB_1083c7a94;
      bVar1 = param_5 != 0x10;
    }
    func_0x0001083c7504(&uStack_48,param_2,param_3,bVar1);
    *param_1 = uStack_48;
  }
  else {
LAB_1083c7a94:
    *param_1 = 0;
  }
  return;
}



/* Entry: 1083c7aa0; end: 1083c7b5f;  */

void FUN_1083c7aa0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = param_3;
  (**(code **)(*param_3 + 0x40))();
  iVar1 = (int)plVar2;
  if (iVar1 == 0) {
    func_0x0001083c7bf0(param_1,&stack0xffffffffffffffec,&stack0xffffffffffffffe8,
                        &stack0xffffffffffffffe0);
  }
  else {
    func_0x0001083c8958(*(undefined8 *)(*param_3 + 0x40));
    if ((iVar1 - 1U & 0xff) < 2) {
      func_0x0001083c7c1c(param_1,&stack0xffffffffffffffec,&stack0xffffffffffffffe0,
                          &stack0xffffffffffffffd8);
      return;
    }
    func_0x0001083c7c48(param_1,&stack0xffffffffffffffec,&stack0xffffffffffffffeb,
                        &stack0xffffffffffffffe0);
  }
  return;
}



/* Entry: 1083c7b60; end: 1083c7bef;  */

void FUN_1083c7b60(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_20 = param_3;
  uStack_18 = param_1;
  uStack_14 = param_2;
  FUN_1083c7bf0(&uStack_14,&uStack_18,&uStack_20);
  return;
}



/* Entry: 1083c7bf0; end: 1083c7c73;  */

void FUN_1083c7bf0(void)

{
  float *unaff_x20;
  undefined4 *unaff_x21;
  
  func_0x0001083c87d4();
  func_0x0001083c8798(*unaff_x21,(double)*unaff_x20);
  return;
}



/* Entry: 1083c7c74; end: 1083c7e9f;  */

double FUN_1083c7c74(undefined8 param_1,double param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5,long *param_6,long *param_7,uint param_8,uint param_9,
                    uint param_10,uint param_11)

{
  uint uVar1;
  double *pdVar2;
  double *pdVar3;
  int iVar4;
  undefined1 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 extraout_x8;
  ulong uVar8;
  double *pdVar9;
  long lVar10;
  ulong uVar11;
  double *pdVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  double dVar18;
  double adStack_1f0 [16];
  double adStack_170 [16];
  double adStack_f0 [16];
  undefined8 uStack_70;
  
  plVar7 = param_6;
  func_0x0001083c88b4();
  lVar6 = plVar7[2];
  uStack_70 = extraout_x8;
  func_0x0001083c89f0();
  iVar16 = 0;
  pdVar9 = adStack_f0;
  uVar17 = (ulong)(param_9 & ((int)param_9 >> 0x1f ^ 0xffffffffU));
  uVar14 = (ulong)(param_8 & ((int)param_8 >> 0x1f ^ 0xffffffffU));
  for (uVar15 = 0; uVar8 = uVar17, pdVar12 = pdVar9, iVar4 = iVar16, uVar15 != uVar14;
      uVar15 = uVar15 + 1) {
    for (; uVar8 != 0; uVar8 = uVar8 - 1) {
      plVar7 = param_6;
      (**(code **)(*param_6 + 0x28))(param_6,iVar4);
      *pdVar12 = (double)plVar7;
      pdVar12 = pdVar12 + 1;
      iVar4 = iVar4 + 1;
    }
    iVar16 = iVar16 + param_9;
    pdVar9 = pdVar9 + 4;
  }
  iVar16 = 0;
  pdVar9 = adStack_170;
  uVar8 = (ulong)(param_10 & ((int)param_10 >> 0x1f ^ 0xffffffffU));
  for (uVar15 = 0; uVar11 = (ulong)(param_11 & ((int)param_11 >> 0x1f ^ 0xffffffffU)),
      pdVar12 = pdVar9, iVar4 = iVar16, uVar15 != uVar8; uVar15 = uVar15 + 1) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      plVar7 = param_7;
      (**(code **)(*param_7 + 0x28))(param_7,iVar4);
      *pdVar12 = (double)plVar7;
      pdVar12 = pdVar12 + 1;
      iVar4 = iVar4 + 1;
    }
    iVar16 = iVar16 + param_11;
    pdVar9 = pdVar9 + 4;
  }
  uVar15 = 0;
  lVar10 = 0;
  pdVar9 = adStack_170;
  dVar18 = 3.4028234663852886e+38;
  do {
    if (uVar15 == uVar8) {
      uVar5 = param_10 == 1;
      uVar1 = param_9;
      if ((bool)uVar5) {
        uVar1 = 1;
        param_10 = param_9;
      }
      FUN_1083f0d08(lVar6,param_4,param_10,uVar1);
      FUN_1083dcad4(param_3,param_4,param_5,lVar6,adStack_1f0);
LAB_1083c7e3c:
      func_0x0001083c880c(uStack_70);
      if ((bool)uVar5) {
        return dVar18;
      }
      ___stack_chk_fail();
      return dVar18 + param_2;
    }
    lVar10 = (long)(int)lVar10;
    pdVar12 = adStack_f0;
    for (uVar11 = 0; uVar11 != uVar17; uVar11 = uVar11 + 1) {
      param_2 = 0.0;
      pdVar2 = pdVar9;
      pdVar3 = pdVar12;
      for (uVar13 = uVar14; uVar13 != 0; uVar13 = uVar13 - 1) {
        param_2 = param_2 + *pdVar2 * *pdVar3;
        pdVar2 = pdVar2 + 1;
        pdVar3 = pdVar3 + 4;
      }
      uVar5 = ABS(param_2) == 3.4028234663852886e+38;
      if (3.4028234663852886e+38 <= ABS(param_2) && !(bool)uVar5) {
        *param_3 = 0;
        goto LAB_1083c7e3c;
      }
      adStack_1f0[lVar10] = param_2;
      lVar10 = lVar10 + 1;
      pdVar12 = pdVar12 + 1;
    }
    uVar15 = uVar15 + 1;
    pdVar9 = pdVar9 + 4;
  } while( true );
}



/* Entry: 1083c7ea0; end: 1083c7ed7;  */

double FUN_1083c7ea0(double param_1,double param_2)

{
  return param_1 + param_2;
}



/* Entry: 1083c7ed8; end: 1083c7f6f;  */

long * FUN_1083c7ed8(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)(*(uint *)((long)param_1 + 0xc) >> 1)) {
    lVar4 = *param_2;
    plVar5 = (long *)(*param_1 + (long)iVar3 * 8);
    *param_2 = 0;
    *plVar5 = lVar4;
  }
  else {
    uVar2 = 1;
    plVar1 = param_1;
    FUN_1083c8054(0x3ff8000000000000,param_1,1);
    lVar4 = *param_2;
    plVar5 = plVar1 + (int)param_1[1];
    *param_2 = 0;
    *plVar5 = lVar4;
    FUN_1083c7fec(param_1,plVar1,uVar2);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + 1;
  return plVar5;
}



/* Entry: 1083c7f70; end: 1083c7f9f;  */

void FUN_1083c7f70(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 8;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 1083c7fa0; end: 1083c7feb;  */

void FUN_1083c7fa0(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if ((int)((*(uint *)((long)param_1 + 0xc) >> 1) - (int)param_1[1]) < (int)param_2) {
    plVar1 = param_1;
    FUN_1083c8054();
    if ((int)param_1[1] != 0) {
      _memcpy(plVar1,*param_1,(long)(int)param_1[1] << 3);
    }
    if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
      func_0x0001083c89fc();
    }
    param_2 = param_2 >> 3;
    if (0x7ffffffe < param_2) {
      param_2 = 0x7fffffff;
    }
    *param_1 = (long)plVar1;
    *(uint *)((long)param_1 + 0xc) = (int)param_2 << 1 | 1;
    return;
  }
  return;
}



/* Entry: 1083c7fec; end: 1083c8053;  */

void FUN_1083c7fec(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x0001083c89fc();
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1083c8054; end: 1083c8077;  */

undefined1 ** FUN_1083c8054(undefined1 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 8) ^ 0x7fffffff)) {
    ppuVar1 = &puStack_20;
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x8;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 8) + (int)param_2);
    return ppuVar1;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_1083c8078;
  *(undefined1 **)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_1083c80c4(param_1 + 0x10,param_2 + 0x10);
  return (undefined1 **)param_1;
}



/* Entry: 1083c8078; end: 1083c80c3;  */

long FUN_1083c8078(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = param_1;
  *(undefined8 *)(param_1 + 0x18) = 0x400000000;
  FUN_1083c80c4(param_1 + 0x10,param_2 + 0x10);
  return param_1;
}



/* Entry: 1083c80c4; end: 1083c81d3;  */

undefined8 * FUN_1083c80c4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    func_0x0001083c8178(param_1);
    if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
      FUN_1083c7fa0(0x3ff0000000000000,param_1,*(undefined4 *)(param_2 + 1));
      iVar1 = *(int *)(param_2 + 1);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 != 0) {
        _memcpy(*param_1,*param_2,(long)iVar1 << 3);
      }
    }
    else {
      if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
        func_0x0001083c89fc();
      }
      uVar2 = *param_2;
      *param_2 = 0;
      *param_1 = uVar2;
      *(uint *)((long)param_1 + 0xc) =
           *(uint *)((long)param_2 + 0xc) & 0xfffffffe | *(uint *)((long)param_1 + 0xc) & 1;
      *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 1;
      *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return param_1;
}



/* Entry: 1083c81d4; end: 1083c8203;  */

long FUN_1083c81d4(long param_1)

{
  func_0x0001083c819c();
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    func_0x0001083c89fc();
  }
  return param_1;
}



/* Entry: 1083c8204; end: 1083c823b;  */

void FUN_1083c8204(int param_1,long param_2)

{
  func_0x0001083c88ec();
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083c8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x10) + 0xd8))();
    return;
  }
  return;
}



/* Entry: 1083c823c; end: 1083c835b;  */

void FUN_1083c823c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  long *param_5)

{
  int iVar1;
  long *plVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)param_4[2];
  func_0x0001083c88ec();
  if (iVar1 == 0) {
LAB_1083c82e8:
    (**(code **)(*param_5 + 0x38))(param_5,param_4[2]);
    if ((int)param_5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083c8328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_4 + 0x30))(param_1,param_4,param_3);
      return;
    }
    *param_1 = 0;
  }
  else {
    plVar2 = param_5;
    (**(code **)(*param_5 + 0xd8))();
    if ((int)plVar2 == 0) {
      plVar2 = param_5;
      (**(code **)(*param_5 + 0xd0))();
      if ((int)plVar2 == 0) goto LAB_1083c82e8;
      func_0x0001083c8870();
      func_0x0001083c893c(auStack_50);
      func_0x0001083c8a34();
      FUN_1083dde68();
      func_0x0001083c8a54();
    }
    else {
      func_0x0001083c8870();
      func_0x0001083c893c(auStack_48);
      func_0x0001083c8a34();
      FUN_1083dd20c();
      func_0x0001083c889c();
    }
    if (plVar2 != (long *)0x0) {
      func_0x0001083c878c();
    }
  }
  return;
}



/* Entry: 1083c835c; end: 1083c8457;  */

bool FUN_1083c835c(double param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  
  iVar2 = (int)param_2[2];
  func_0x0001083c8850();
  if (iVar2 != 0) {
    uVar3 = (uint)param_2[2];
    func_0x0001083c89e4();
    plVar4 = (long *)param_2[2];
    (**(code **)(*plVar4 + 0x68))();
    if (uVar3 == (uint)plVar4) {
      uVar6 = 0;
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      for (uVar9 = 0; uVar7 = uVar3, uVar8 = uVar9, uVar9 != uVar3; uVar9 = uVar9 + 1) {
        while (uVar7 != 0) {
          plVar4 = param_2;
          uVar5 = uVar6;
          (**(code **)(*param_2 + 0x28))();
          if ((uVar5 & 1) == 0) goto LAB_1083c8434;
          uVar6 = (ulong)((int)uVar6 + 1);
          dVar10 = param_1;
          if (uVar8 != 0) {
            dVar10 = 0.0;
          }
          uVar8 = uVar8 - 1;
          uVar7 = uVar7 - 1;
          if (dVar10 != (double)plVar4) goto LAB_1083c8434;
        }
      }
      bVar1 = true;
    }
    else {
LAB_1083c8434:
      bVar1 = false;
    }
    return bVar1;
  }
  uVar9 = (uint)param_2[2];
  func_0x0001083c88e0();
  uVar3 = uVar9 & ((int)uVar9 >> 0x1f ^ 0xffffffffU);
  uVar6 = 0;
  while (uVar7 = (uint)uVar6, uVar8 = uVar3, uVar3 != uVar7) {
    plVar4 = param_2;
    (**(code **)(*param_2 + 0x28))();
    uVar8 = uVar7;
    if (((uVar6 & 1) == 0) || (uVar6 = (ulong)(uVar7 + 1), param_1 != (double)plVar4)) break;
  }
  return (int)uVar9 <= (int)uVar8;
}



/* Entry: 1083c8458; end: 1083c8593;  */

void FUN_1083c8458(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long *plVar1;
  code *pcVar2;
  long *plStack_48;
  
  plVar1 = param_4;
  (**(code **)(*param_4 + 0x50))(param_4);
  FUN_1083c7aa0(&plStack_48,0,param_3,plVar1);
  func_0x0001083c8958(*(undefined8 *)(*param_4 + 0xb8));
  if ((int)param_3 != 0) {
    *param_1 = plStack_48;
    return;
  }
  func_0x0001083c8958(*(undefined8 *)(*param_4 + 0xd0));
  if ((int)param_3 == 0) {
    func_0x0001083c8958(*(undefined8 *)(*param_4 + 0xd8));
    if ((int)param_3 == 0) {
      *param_1 = 0;
      if (plStack_48 == (long *)0x0) {
        return;
      }
      pcVar2 = *(code **)(*plStack_48 + 8);
      goto LAB_1083c8534;
    }
    func_0x0001083c8a20();
    FUN_1083dd20c();
    func_0x0001083c889c();
  }
  else {
    func_0x0001083c8a20();
    FUN_1083dde68();
    func_0x0001083c8974();
  }
  if (param_3 == (long *)0x0) {
    return;
  }
  pcVar2 = *(code **)(*param_3 + 8);
LAB_1083c8534:
  (*pcVar2)();
  return;
}



/* Entry: 1083c8594; end: 1083c8633;  */

void FUN_1083c8594(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lStack_40;
  long lStack_38;
  
  FUN_1083c823c(&lStack_38);
  if (lStack_38 == 0) {
    *param_1 = 0;
  }
  else {
    lStack_40 = lStack_38;
    lStack_38 = 0;
    FUN_1083e97a8(param_1,param_2,param_3,1,&lStack_40);
    func_0x0001083c8a54();
    if (param_2 != 0) {
      func_0x0001083c878c();
    }
    func_0x0001083c889c();
    if (param_2 != 0) {
      func_0x0001083c878c();
    }
  }
  return;
}



/* Entry: 1083c8634; end: 1083c8733;  */

long * FUN_1083c8634(undefined8 *param_1,long *param_2,long *param_3)

{
  undefined1 in_ZR;
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  ulong uVar5;
  double dVar6;
  double adStack_78 [4];
  undefined8 uStack_58;
  
  plVar2 = param_3;
  func_0x0001083c88b4();
  plVar2 = (long *)plVar2[2];
  uStack_58 = extraout_x8;
  func_0x0001083c8850();
  if (((ulong)plVar2 & 1) == 0) {
    plVar2 = (long *)param_3[2];
    func_0x0001083c89f0();
    func_0x0001083c885c();
    if ((int)plVar2 == 0) {
      uVar1 = (uint)param_3[2];
      func_0x0001083c88e0();
      for (uVar5 = 0; in_ZR = (uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) == uVar5, !(bool)in_ZR;
          uVar5 = uVar5 + 1) {
        plVar2 = param_3;
        uVar4 = uVar5;
        (**(code **)(*param_3 + 0x28))();
        if ((uVar4 & 1) == 0) goto LAB_1083c8680;
        dVar6 = 1.0 / (double)plVar2;
        in_ZR = 1;
        if ((dVar6 == 0.0) ||
           (in_ZR = ABS(dVar6) == 3.4028234663852886e+38,
           3.4028234663852886e+38 <= ABS(dVar6) && !(bool)in_ZR)) goto LAB_1083c8680;
        adStack_78[uVar5] = dVar6;
      }
      FUN_1083dcad4(param_1,param_2,(int)param_3[1],param_3[2],adStack_78);
      goto LAB_1083c8684;
    }
  }
LAB_1083c8680:
  param_2 = plVar2;
  *param_1 = 0;
LAB_1083c8684:
  func_0x0001083c880c(uStack_58);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  lVar3 = *param_2;
  *param_2 = 0;
  if (lVar3 != 0) {
    func_0x0001083c878c();
  }
  return param_2;
}



/* Entry: 1083c8734; end: 1083c875f;  */

long * FUN_1083c8734(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x0001083c878c();
  }
  return param_1;
}



/* Entry: 1083c8760; end: 1083c8a5f;  */

void FUN_1083c8760(void)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x19;
  long *unaff_x23;
  long *unaff_x25;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  iVar1 = (int)unaff_x23[2];
  func_0x0001083c88ec();
  if (iVar1 == 0) {
LAB_1083c82e8:
    (**(code **)(*unaff_x25 + 0x38))();
    if ((int)unaff_x25 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083c8328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_x23 + 0x30))();
      return;
    }
    *unaff_x19 = 0;
  }
  else {
    plVar2 = unaff_x25;
    (**(code **)(*unaff_x25 + 0xd8))();
    if ((int)plVar2 == 0) {
      plVar2 = unaff_x25;
      (**(code **)(*unaff_x25 + 0xd0))();
      if ((int)plVar2 == 0) goto LAB_1083c82e8;
      func_0x0001083c8870();
      func_0x0001083c893c(auStack_50);
      func_0x0001083c8a34();
      FUN_1083dde68();
      func_0x0001083c8a54();
    }
    else {
      func_0x0001083c8870();
      func_0x0001083c893c(auStack_48);
      func_0x0001083c8a34();
      FUN_1083dd20c();
      func_0x0001083c889c();
    }
    if (plVar2 != (long *)0x0) {
      func_0x0001083c878c();
    }
  }
  return;
}



/* Entry: 1083c8a60; end: 1083c8adf;  */

void FUN_1083c8a60(long *param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_3;
  FUN_1083c8ae0(param_3,param_4,&UNK_10df20bcd,8);
  if ((uVar1 & 1) != 0) {
    return;
  }
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
                    /* WARNING: Could not recover jumptable at 0x0001083c8adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3,param_4,param_2);
  return;
}



/* Entry: 1083c8ae0; end: 1083c8b17;  */

bool FUN_1083c8ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puVar1 = &uStack_20;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x000107278f60(&uStack_20,param_3,param_4,0);
  return puVar1 != (undefined8 *)0xffffffffffffffff;
}



/* Entry: 1083c8b18; end: 1083c95a7;  */

undefined8 FUN_1083c8b18(void)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long lVar3;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined *apuStack_9d8 [2];
  undefined1 auStack_9c8 [8];
  undefined *puStack_9c0;
  undefined8 uStack_9b8;
  undefined1 uStack_9b0;
  undefined *puStack_9a8;
  undefined8 uStack_9a0;
  undefined1 uStack_998;
  char *pcStack_990;
  undefined8 uStack_988;
  undefined1 uStack_980;
  undefined *puStack_978;
  undefined8 uStack_970;
  undefined1 uStack_968;
  undefined *puStack_960;
  undefined8 uStack_958;
  undefined1 uStack_950;
  undefined *puStack_948;
  undefined8 uStack_940;
  undefined1 uStack_938;
  undefined *puStack_930;
  undefined8 uStack_928;
  undefined1 uStack_920;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined *puStack_8e8;
  undefined8 uStack_8e0;
  undefined1 uStack_8d8;
  undefined *puStack_8d0;
  undefined8 uStack_8c8;
  undefined1 uStack_8c0;
  undefined *puStack_8b8;
  undefined8 uStack_8b0;
  undefined1 uStack_8a8;
  undefined *puStack_8a0;
  undefined8 uStack_898;
  undefined1 uStack_890;
  undefined *puStack_888;
  undefined8 uStack_880;
  undefined1 uStack_878;
  undefined *puStack_870;
  undefined8 uStack_868;
  undefined1 uStack_860;
  undefined *puStack_858;
  undefined8 uStack_850;
  undefined1 uStack_848;
  undefined *puStack_840;
  undefined8 uStack_838;
  undefined1 uStack_830;
  undefined *puStack_828;
  undefined8 uStack_820;
  undefined1 uStack_818;
  undefined *puStack_810;
  undefined8 uStack_808;
  undefined1 uStack_800;
  undefined *puStack_7f8;
  undefined8 uStack_7f0;
  undefined1 uStack_7e8;
  undefined *puStack_7e0;
  undefined8 uStack_7d8;
  undefined1 uStack_7d0;
  undefined *puStack_7c8;
  undefined8 uStack_7c0;
  undefined1 uStack_7b8;
  undefined *puStack_7b0;
  undefined8 uStack_7a8;
  undefined1 uStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_790;
  undefined1 uStack_788;
  undefined *puStack_780;
  undefined8 uStack_778;
  undefined1 uStack_770;
  undefined *puStack_768;
  undefined8 uStack_760;
  undefined1 uStack_758;
  char *pcStack_750;
  undefined8 uStack_748;
  undefined1 uStack_740;
  undefined *puStack_738;
  undefined8 uStack_730;
  undefined1 uStack_728;
  undefined *puStack_720;
  undefined8 uStack_718;
  undefined1 uStack_710;
  undefined *puStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  undefined1 uStack_6e0;
  undefined *puStack_6d8;
  undefined8 uStack_6d0;
  undefined1 uStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined1 uStack_6b0;
  undefined *puStack_6a8;
  undefined8 uStack_6a0;
  undefined1 uStack_698;
  undefined *puStack_690;
  undefined8 uStack_688;
  undefined1 uStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  undefined1 uStack_668;
  undefined *puStack_660;
  undefined8 uStack_658;
  undefined1 uStack_650;
  undefined *puStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined *puStack_630;
  undefined8 uStack_628;
  undefined1 uStack_620;
  char *pcStack_618;
  undefined8 uStack_610;
  undefined1 uStack_608;
  undefined *puStack_600;
  undefined8 uStack_5f8;
  undefined1 uStack_5f0;
  undefined *puStack_5e8;
  undefined8 uStack_5e0;
  undefined1 uStack_5d8;
  undefined *puStack_5d0;
  undefined8 uStack_5c8;
  undefined1 uStack_5c0;
  undefined *puStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a8;
  undefined *puStack_5a0;
  undefined8 uStack_598;
  undefined1 uStack_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined1 uStack_578;
  undefined *puStack_570;
  undefined8 uStack_568;
  undefined1 uStack_560;
  undefined *puStack_558;
  undefined8 uStack_550;
  undefined1 uStack_548;
  char *pcStack_540;
  undefined8 uStack_538;
  undefined1 uStack_530;
  undefined *puStack_528;
  undefined8 uStack_520;
  undefined1 uStack_518;
  undefined *puStack_510;
  undefined8 uStack_508;
  undefined1 uStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined1 uStack_4e8;
  undefined *puStack_4e0;
  undefined8 uStack_4d8;
  undefined1 uStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  undefined1 uStack_4b8;
  undefined *puStack_4b0;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined *puStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined1 uStack_470;
  undefined *puStack_468;
  undefined8 uStack_460;
  undefined1 uStack_458;
  undefined *puStack_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined *puStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined *puStack_420;
  undefined8 uStack_418;
  undefined1 uStack_410;
  undefined *puStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined *puStack_3f0;
  undefined8 uStack_3e8;
  undefined1 uStack_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 uStack_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined1 uStack_398;
  undefined *puStack_390;
  undefined8 uStack_388;
  undefined1 uStack_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined1 uStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined1 uStack_350;
  undefined *puStack_348;
  undefined8 uStack_340;
  undefined1 uStack_338;
  undefined *puStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined1 uStack_308;
  char *pcStack_300;
  undefined8 uStack_2f8;
  undefined1 uStack_2f0;
  undefined *puStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2d8;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  undefined1 uStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined1 uStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  undefined1 uStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined1 uStack_278;
  undefined *puStack_270;
  undefined8 uStack_268;
  undefined1 uStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined1 uStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  char *pcStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined1 uStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined1 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined1 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011372b300 & 1) == 0) {
    unaff_x19 = 0x11372b300;
    lVar3 = unaff_x19;
    ___cxa_guard_acquire();
    if ((int)lVar3 != 0) {
      apuStack_9d8[0] = &DAT_10f3dd8e9;
      apuStack_9d8[1] = (undefined *)0x3;
      auStack_9c8[0] = 0;
      puStack_9c0 = &UNK_10f491635;
      uStack_9b8 = 5;
      uStack_9b0 = 1;
      puStack_9a8 = &UNK_10f49163b;
      uStack_9a0 = 4;
      uStack_998 = 2;
      pcStack_990 = "all";
      uStack_988 = 3;
      uStack_980 = 3;
      puStack_978 = &DAT_10f416695;
      uStack_970 = 3;
      uStack_968 = 4;
      puStack_960 = &UNK_10f491640;
      uStack_958 = 5;
      uStack_950 = 5;
      puStack_948 = &UNK_10f491646;
      uStack_940 = 4;
      uStack_938 = 6;
      puStack_930 = &UNK_10f49164b;
      uStack_928 = 5;
      uStack_920 = 7;
      puStack_918 = &UNK_10f48d7d4;
      uStack_910 = 4;
      uStack_908 = 8;
      puStack_900 = &UNK_10f491651;
      uStack_8f8 = 9;
      uStack_8f0 = 9;
      puStack_8e8 = &UNK_10f49165b;
      uStack_8e0 = 10;
      uStack_8d8 = 10;
      puStack_8d0 = &UNK_10f491666;
      uStack_8c8 = 0xb;
      uStack_8c0 = 0xb;
      puStack_8b8 = &UNK_10f491672;
      uStack_8b0 = 8;
      uStack_8a8 = 0xc;
      puStack_8a0 = &DAT_10f3dd8db;
      uStack_898 = 4;
      uStack_890 = 0xd;
      puStack_888 = &DAT_10f3dd912;
      uStack_880 = 5;
      uStack_878 = 0xe;
      puStack_870 = &UNK_10f49167b;
      uStack_868 = 4;
      uStack_860 = 0xf;
      puStack_858 = &DAT_10f491680;
      uStack_850 = 3;
      uStack_848 = 0x10;
      puStack_840 = &UNK_10f491684;
      uStack_838 = 5;
      uStack_830 = 0x11;
      puStack_828 = &UNK_10f42296c;
      uStack_820 = 7;
      uStack_818 = 0x12;
      puStack_810 = &UNK_10f49168a;
      uStack_808 = 0xb;
      uStack_800 = 0x13;
      puStack_7f8 = &UNK_10f491696;
      uStack_7f0 = 4;
      uStack_7e8 = 0x14;
      puStack_7e0 = &UNK_10f49169b;
      uStack_7d8 = 4;
      uStack_7d0 = 0x15;
      puStack_7c8 = &DAT_10f3e1a8f;
      uStack_7c0 = 8;
      uStack_7b8 = 0x16;
      puStack_7b0 = &DAT_10f329830;
      uStack_7a8 = 3;
      uStack_7a0 = 0x17;
      puStack_798 = &UNK_10f4916a0;
      uStack_790 = 5;
      uStack_788 = 0x18;
      puStack_780 = &UNK_10f4916a6;
      uStack_778 = 4;
      uStack_770 = 0x19;
      puStack_768 = &DAT_10f4916ab;
      uStack_760 = 4;
      uStack_758 = 0x1a;
      pcStack_750 = "exp";
      uStack_748 = 3;
      uStack_740 = 0x1b;
      puStack_738 = &UNK_10f4916b0;
      uStack_730 = 0xb;
      uStack_728 = 0x1c;
      puStack_720 = &UNK_10f4916bc;
      uStack_718 = 7;
      uStack_710 = 0x1d;
      puStack_708 = &UNK_10f4916c4;
      uStack_700 = 7;
      uStack_6f8 = 0x1e;
      puStack_6f0 = &UNK_10f4916cc;
      uStack_6e8 = 0xe;
      uStack_6e0 = 0x1f;
      puStack_6d8 = &UNK_10f4916db;
      uStack_6d0 = 0xf;
      uStack_6c8 = 0x20;
      puStack_6c0 = &DAT_10f2c11ff;
      uStack_6b8 = 5;
      uStack_6b0 = 0x21;
      puStack_6a8 = &DAT_10f62b36a;
      uStack_6a0 = 3;
      uStack_698 = 0x22;
      puStack_690 = &UNK_10f4916eb;
      uStack_688 = 5;
      uStack_680 = 0x23;
      puStack_678 = &UNK_10f4916f1;
      uStack_670 = 5;
      uStack_668 = 0x24;
      puStack_660 = &UNK_10f4916f7;
      uStack_658 = 0xe;
      uStack_650 = 0x25;
      puStack_648 = &UNK_10f491706;
      uStack_640 = 6;
      uStack_638 = 0x26;
      puStack_630 = &UNK_10f49170d;
      uStack_628 = 0x10;
      uStack_620 = 0x27;
      pcStack_618 = "greaterThan";
      uStack_610 = 0xb;
      uStack_608 = 0x28;
      puStack_600 = &UNK_10f49171e;
      uStack_5f8 = 0xe;
      uStack_5f0 = 0x29;
      puStack_5e8 = &UNK_10f49172d;
      uStack_5e0 = 0xb;
      uStack_5d8 = 0x2a;
      puStack_5d0 = &DAT_10f2da2c7;
      uStack_5c8 = 7;
      uStack_5c0 = 0x2b;
      puStack_5b8 = &UNK_10f491739;
      uStack_5b0 = 5;
      uStack_5a8 = 0x2c;
      puStack_5a0 = &UNK_10f49173f;
      uStack_598 = 5;
      uStack_590 = 0x2d;
      puStack_588 = &UNK_10f491745;
      uStack_580 = 5;
      uStack_578 = 0x2e;
      puStack_570 = &DAT_10f355a53;
      uStack_568 = 6;
      uStack_560 = 0x2f;
      puStack_558 = &UNK_10f49174b;
      uStack_550 = 0xd;
      uStack_548 = 0x30;
      pcStack_540 = "lessThan";
      uStack_538 = 8;
      uStack_530 = 0x31;
      puStack_528 = &DAT_10f491759;
      uStack_520 = 4;
      uStack_518 = 0x32;
      puStack_510 = &DAT_10f3dd908;
      uStack_508 = 3;
      uStack_500 = 0x33;
      puStack_4f8 = &UNK_10f49175e;
      uStack_4f0 = 0xe;
      uStack_4e8 = 0x34;
      puStack_4e0 = &UNK_10f49176d;
      uStack_4d8 = 0xd;
      uStack_4d0 = 0x35;
      puStack_4c8 = &DAT_10f3dd8f1;
      uStack_4c0 = 3;
      uStack_4b8 = 0x36;
      puStack_4b0 = &DAT_10f3dd8ed;
      uStack_4a8 = 3;
      uStack_4a0 = 0x37;
      puStack_498 = &UNK_10f62b36e;
      uStack_490 = 3;
      uStack_488 = 0x38;
      puStack_480 = &UNK_10f49177b;
      uStack_478 = 4;
      uStack_470 = 0x39;
      puStack_468 = &UNK_10f491780;
      uStack_460 = 3;
      uStack_458 = 0x3a;
      puStack_450 = &UNK_10f491784;
      uStack_448 = 9;
      uStack_440 = 0x3b;
      puStack_438 = &UNK_10f49178e;
      uStack_430 = 8;
      uStack_428 = 0x3c;
      puStack_420 = &UNK_10f491797;
      uStack_418 = 3;
      uStack_410 = 0x3d;
      puStack_408 = &UNK_10f49179b;
      uStack_400 = 0xc;
      uStack_3f8 = 0x3e;
      puStack_3f0 = &UNK_10f4917a8;
      uStack_3e8 = 0xc;
      uStack_3e0 = 0x3f;
      puStack_3d8 = &UNK_10f4917b5;
      uStack_3d0 = 0xd;
      uStack_3c8 = 0x40;
      puStack_3c0 = &UNK_10f4917c3;
      uStack_3b8 = 0xc;
      uStack_3b0 = 0x41;
      puStack_3a8 = &UNK_10f4917d0;
      uStack_3a0 = 0xd;
      uStack_398 = 0x42;
      puStack_390 = &UNK_10f4917de;
      uStack_388 = 0xc;
      uStack_380 = 0x43;
      puStack_378 = &DAT_10f3dd8e0;
      uStack_370 = 3;
      uStack_368 = 0x44;
      puStack_360 = &UNK_10f4917eb;
      uStack_358 = 7;
      uStack_350 = 0x45;
      puStack_348 = &UNK_10f4917f3;
      uStack_340 = 7;
      uStack_338 = 0x46;
      puStack_330 = &UNK_10f4917fb;
      uStack_328 = 7;
      uStack_320 = 0x47;
      puStack_318 = &UNK_10f491803;
      uStack_310 = 9;
      uStack_308 = 0x48;
      pcStack_300 = "round";
      uStack_2f8 = 5;
      uStack_2f0 = 0x49;
      puStack_2e8 = &UNK_10f49180d;
      uStack_2e0 = 6;
      uStack_2d8 = 0x4a;
      puStack_2d0 = &UNK_10f491814;
      uStack_2c8 = 10;
      uStack_2c0 = 0x4b;
      puStack_2b8 = &UNK_10f49181f;
      uStack_2b0 = 9;
      uStack_2a8 = 0x4c;
      puStack_2a0 = &DAT_10f47de3c;
      uStack_298 = 8;
      uStack_290 = 0x4d;
      puStack_288 = &UNK_10f62b28c;
      uStack_280 = 4;
      uStack_278 = 0x4e;
      puStack_270 = &UNK_10f491829;
      uStack_268 = 4;
      uStack_260 = 0x4f;
      puStack_258 = &DAT_10f49182e;
      uStack_250 = 3;
      uStack_248 = 0x50;
      puStack_240 = &UNK_10f491832;
      uStack_238 = 10;
      uStack_230 = 0x51;
      puStack_228 = &DAT_10f3dd8e4;
      uStack_220 = 4;
      uStack_218 = 0x52;
      pcStack_210 = "step";
      uStack_208 = 4;
      uStack_200 = 0x53;
      puStack_1f8 = &UNK_10f49183d;
      uStack_1f0 = 0xe;
      uStack_1e8 = 0x54;
      puStack_1e0 = &UNK_10f49184c;
      uStack_1d8 = 0xb;
      uStack_1d0 = 0x55;
      puStack_1c8 = &UNK_10f491858;
      uStack_1c0 = 4;
      uStack_1b8 = 0x56;
      puStack_1b0 = &DAT_10f434303;
      uStack_1a8 = 3;
      uStack_1a0 = 0x57;
      puStack_198 = &UNK_10f49185d;
      uStack_190 = 0xd;
      uStack_188 = 0x58;
      puStack_180 = &UNK_10f49186b;
      uStack_178 = 0xb;
      uStack_170 = 0x59;
      puStack_168 = &UNK_10f491877;
      uStack_160 = 0xc;
      uStack_158 = 0x5a;
      puStack_150 = &UNK_10f491884;
      uStack_148 = 0xc;
      uStack_140 = 0x5b;
      puStack_138 = &UNK_10f491891;
      uStack_130 = 0xc;
      uStack_128 = 0x5c;
      puStack_120 = &UNK_10f49189e;
      uStack_118 = 9;
      uStack_110 = 0x5d;
      puStack_108 = &DAT_10f4918a8;
      uStack_100 = 5;
      uStack_f8 = 0x5e;
      puStack_f0 = &UNK_10f4918ae;
      uStack_e8 = 0xf;
      uStack_e0 = 0x5f;
      puStack_d8 = &UNK_10f4918be;
      uStack_d0 = 0xe;
      uStack_c8 = 0x60;
      puStack_c0 = &UNK_10f4918cd;
      uStack_b8 = 0xf;
      uStack_b0 = 0x61;
      puStack_a8 = &UNK_10f4918dd;
      uStack_a0 = 0xe;
      uStack_98 = 0x62;
      puStack_90 = &UNK_10f4918ec;
      uStack_88 = 0xf;
      uStack_80 = 99;
      puStack_78 = &UNK_10f4918fc;
      uStack_70 = 0xe;
      uStack_68 = 100;
      puStack_60 = &UNK_10f49190b;
      uStack_58 = 0x10;
      uStack_50 = 0x65;
      uStack_a00 = 0;
      uStack_9f8 = 0;
      FUN_1083c9684(&uStack_a00,0x100);
      lVar3 = 0;
      do {
        if (lVar3 == 0x990) goto LAB_1083c9548;
        uStack_9e8 = *(undefined8 *)(auStack_9c8 + lVar3 + -8);
        uStack_9f0 = *(undefined8 *)((long)apuStack_9d8 + lVar3);
        uStack_9e0 = *(undefined8 *)(auStack_9c8 + lVar3);
        if (uStack_a00._4_4_ * 3 <= (int)uStack_a00 * 4) {
          iVar1 = uStack_a00._4_4_ << 1;
          if (uStack_a00._4_4_ < 1) {
            iVar1 = 4;
          }
          FUN_1083c9684(&uStack_a00,iVar1);
        }
        FUN_1083c977c(&uStack_a00,&uStack_9f0);
        lVar3 = lVar3 + 0x18;
      } while( true );
    }
  }
  while (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
LAB_1083c9548:
    uVar2 = uStack_9f8;
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
    *(undefined8 *)(unaff_x19 + 8) = uStack_a00;
    uStack_9f8 = 0;
    FUN_1083c9764((undefined8 *)(unaff_x19 + 0x10),uVar2);
    uStack_a00 = 0;
    FUN_1083c9628(&uStack_9f8);
    ___cxa_guard_release(unaff_x19);
  }
  return 0x11372b308;
}



/* Entry: 1083c95a8; end: 1083c9627;  */

int FUN_1083c95a8(char *param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcStack_20;
  long lStack_18;
  
  pcStack_20 = param_1;
  lStack_18 = param_2;
  if ((param_2 != 0) && (*param_1 == '$')) {
    pcStack_20 = param_1 + 1;
    lStack_18 = param_2 + -1;
  }
  FUN_1083c8b18();
  pcVar1 = (char *)0x11372b308;
  func_0x0001083c9608(0x11372b308,&pcStack_20);
  if (pcVar1 == (char *)0x0) {
    cVar2 = -1;
  }
  else {
    cVar2 = *pcVar1;
  }
  return (int)cVar2;
}



/* Entry: 1083c9628; end: 1083c9657;  */

long * FUN_1083c9628(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    FUN_1083c9658();
  }
  return param_1;
}



/* Entry: 1083c9658; end: 1083c9683;  */

void FUN_1083c9658(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + -8) != 0) {
    lVar1 = *(long *)(param_1 + -8) << 5;
    do {
      if (*(int *)(param_1 + -0x20 + lVar1) != 0) {
        *(undefined4 *)(param_1 + -0x20 + lVar1) = 0;
      }
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdaPv_110352250)(param_1 + -0x10);
  return;
}



/* Entry: 1083c9684; end: 1083c9763;  */

void FUN_1083c9684(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lStack_48;
  
  uVar1 = param_1[1];
  *param_1 = 0;
  param_1[1] = param_2;
  plVar3 = (long *)(param_1 + 2);
  lVar5 = *plVar3;
  *plVar3 = 0;
  lVar6 = (long)param_2;
  puVar2 = (undefined8 *)(lVar6 << 5 | 0x10);
  if (param_2 < 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  lStack_48 = lVar5;
  __Znam();
  *puVar2 = 0x20;
  puVar2[1] = lVar6;
  if (param_2 != 0) {
    lVar6 = lVar6 << 5;
    puVar2 = puVar2 + 2;
    do {
      *(undefined4 *)puVar2 = 0;
      lVar6 = lVar6 + -0x20;
      puVar2 = puVar2 + 4;
    } while (lVar6 != 0);
  }
  FUN_1083c9764(plVar3);
  lVar5 = lVar5 + 8;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    if (*(int *)(lVar5 + -8) != 0) {
      FUN_1083c977c(param_1,lVar5);
    }
    lVar5 = lVar5 + 0x20;
  }
  FUN_1083c9628(&lStack_48);
  return;
}



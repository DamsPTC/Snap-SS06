/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10268de88; end: 10268de97; -[_TtC42MapAdsPromotedPlaceSponsoredBannerServices42MapAdsPromotedPlaceSponsoredBannerServices viewProviderObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268de88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb3a98));
  return;
}



/* Entry: 10268de98; end: 10268df6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268de98(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001003a5b88();
  *(long *)(unaff_x20 + _DAT_112eb3a98) = lVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb3aa0) = param_1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10268df70; end: 10268dfcf; -[_TtC42MapAdsPromotedPlaceSponsoredBannerServices42MapAdsPromotedPlaceSponsoredBannerServices init] */

void FUN_10268df70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdsPromotedPlaceSponsoredBannerServices.MapAdsPromotedPlaceSponsoredBannerServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268df9c);
  (*pcVar1)();
}



/* Entry: 10268dfd0; end: 10268e007; -[_TtC42MapAdsPromotedPlaceSponsoredBannerServices42MapAdsPromotedPlaceSponsoredBannerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268dfd0(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112eb3a98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb3aa0));
  return;
}



/* Entry: 10268e008; end: 10268e027;  */

void FUN_10268e008(void)

{
  func_0x000107c61168(&PTR_PTR_112857200);
  return;
}



/* Entry: 10268e028; end: 10268e03b;  */

bool FUN_10268e028(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10268e03c; end: 10268e0e7;  */

void FUN_10268e03c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10268e0e8; end: 10268e0eb;  */

void FUN_10268e0e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9130;
  func_0x000107c61520(&UNK_10dac9130,&UNK_110532ff0);
  puRam0000000112eb3ad0 = puVar1;
  return;
}



/* Entry: 10268e0ec; end: 10268e12b;  */

void FUN_10268e0ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9130;
  func_0x000107c61520(&UNK_10dac9130,&UNK_110532ff0);
  puRam0000000112eb3ad0 = puVar1;
  return;
}



/* Entry: 10268e12c; end: 10268e28f;  */

int FUN_10268e12c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10268e1a8;
        goto LAB_10268e18c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10268e18c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10268e1a8:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10268e290; end: 10268e2af; -[MapAdLoggingServices profileLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268e290(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb3ae8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10268e2b0; end: 10268e2f3;  */

long FUN_10268e2b0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10268e2f4; end: 10268e483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10268e2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  FUN_10268e2b0(param_1,unaff_x20 + _DAT_112eb3ad8);
  FUN_10268e2b0(param_2,unaff_x20 + _DAT_112eb3ae0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb3ae8) = param_3;
  FUN_10268e2b0(param_4,unaff_x20 + _DAT_112eb3af0);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_4);
  func_0x0001000834e4(param_2);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10268e484; end: 10268e4e3; -[MapAdLoggingServices init] */

void FUN_10268e484(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapAdLoggingServices.MapAdLoggingServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10268e4b0);
  (*pcVar1)();
}



/* Entry: 10268e4e4; end: 10268e53b; -[MapAdLoggingServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010268e500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268e504) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268e4e4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112eb3ad8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb3ad8));
  return;
}



/* Entry: 10268e53c; end: 10268e55b;  */

void FUN_10268e53c(void)

{
  func_0x000107c61168(&PTR_PTR_1128572c8);
  return;
}



/* Entry: 10268e55c; end: 10268e56f;  */

bool FUN_10268e55c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10268e570; end: 10268e647;  */

void FUN_10268e570(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10268e648; end: 10268e667;  */

void FUN_10268e648(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10268e668; end: 10268e6a7;  */

void FUN_10268e668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9220;
  func_0x000107c61520(&UNK_10dac9220,&UNK_110533048);
  puRam0000000112eb3b20 = puVar1;
  return;
}



/* Entry: 10268e6a8; end: 10268e6b7;  */

undefined1  [16] FUN_10268e6a8(void)

{
  return ZEXT816(0x110533048);
}



/* Entry: 10268e6b8; end: 10268e8ef;  */

long FUN_10268e6b8(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  *(undefined8 *)(lVar2 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  *(undefined8 *)(lVar2 + 0x38) = uStack_58;
  *(undefined8 *)(lVar2 + 0x30) = uStack_60;
  *(undefined8 *)(lVar2 + 0x40) = 0x697461746f6e6e61;
  *(undefined8 *)(lVar2 + 0x48) = 0xeb00000000736e6f;
  uStack_110 = unaff_x20[2];
  uStack_68 = uStack_110;
  func_0x000100402194(&uStack_60,&uStack_120);
  FUN_10268e98c(&uStack_68,&uStack_120);
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x2c;
  uVar7 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar3,uVar4);
  func_0x00010268e9dc(&uStack_68);
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  *(undefined8 *)(lVar2 + 0x58) = uVar7;
  *(undefined8 *)(lVar2 + 0x60) = 0x4449656c6974;
  *(undefined8 *)(lVar2 + 0x68) = 0xe600000000000000;
  uVar3 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  FUN_102691d10(uVar3,uVar4,unaff_x20[5]);
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  *(undefined8 *)(lVar2 + 0x78) = uVar4;
  *(undefined8 *)(lVar2 + 0x80) = 0x657079546e6970;
  *(undefined8 *)(lVar2 + 0x88) = 0xe700000000000000;
  uStack_120 = 0;
  uStack_118 = 0xe000000000000000;
  bVar1 = *(byte *)(unaff_x20 + 8);
  uVar3 = 0xed000079726f7473;
  if (bVar1 != 2) {
    uVar3 = 0xec0000006e6f6369;
  }
  uVar4 = 0x79726f7473;
  if (bVar1 != 0) {
    uVar4 = 0x6e6f6369;
  }
  uVar5 = 0xe500000000000000;
  if (bVar1 != 0) {
    uVar5 = 0xe400000000000000;
  }
  uVar7 = 0x5f64657375636f66;
  if (bVar1 < 2) {
    uVar3 = uVar5;
    uVar7 = uVar4;
  }
  func_0x000107c5fb78(uVar7,uVar3);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(lVar2 + 0x90) = uStack_120;
  *(undefined8 *)(lVar2 + 0x98) = uStack_118;
  lVar6 = lVar2;
  func_0x0001001830b8(lVar2);
  func_0x000107c61588(lVar2);
  uVar3 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),4,uVar3);
  return lVar6;
}



/* Entry: 10268e8f0; end: 10268e8f3;  */

long FUN_10268e8f0(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  *(undefined8 *)(lVar2 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar2 + 0x28) = 0xe700000000000000;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  *(undefined8 *)(lVar2 + 0x38) = uStack_58;
  *(undefined8 *)(lVar2 + 0x30) = uStack_60;
  *(undefined8 *)(lVar2 + 0x40) = 0x697461746f6e6e61;
  *(undefined8 *)(lVar2 + 0x48) = 0xeb00000000736e6f;
  uStack_110 = unaff_x20[2];
  uStack_68 = uStack_110;
  func_0x000100402194(&uStack_60,&uStack_120);
  FUN_10268e98c(&uStack_68,&uStack_120);
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x2c;
  uVar7 = 0xe100000000000000;
  func_0x000107c5fa80(0x2c,0xe100000000000000,uVar3,uVar4);
  func_0x00010268e9dc(&uStack_68);
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  *(undefined8 *)(lVar2 + 0x58) = uVar7;
  *(undefined8 *)(lVar2 + 0x60) = 0x4449656c6974;
  *(undefined8 *)(lVar2 + 0x68) = 0xe600000000000000;
  uVar3 = unaff_x20[3];
  uVar4 = unaff_x20[4];
  FUN_102691d10(uVar3,uVar4,unaff_x20[5]);
  *(undefined8 *)(lVar2 + 0x70) = uVar3;
  *(undefined8 *)(lVar2 + 0x78) = uVar4;
  *(undefined8 *)(lVar2 + 0x80) = 0x657079546e6970;
  *(undefined8 *)(lVar2 + 0x88) = 0xe700000000000000;
  uStack_120 = 0;
  uStack_118 = 0xe000000000000000;
  bVar1 = *(byte *)(unaff_x20 + 8);
  uVar3 = 0xed000079726f7473;
  if (bVar1 != 2) {
    uVar3 = 0xec0000006e6f6369;
  }
  uVar4 = 0x79726f7473;
  if (bVar1 != 0) {
    uVar4 = 0x6e6f6369;
  }
  uVar5 = 0xe500000000000000;
  if (bVar1 != 0) {
    uVar5 = 0xe400000000000000;
  }
  uVar7 = 0x5f64657375636f66;
  if (bVar1 < 2) {
    uVar3 = uVar5;
    uVar7 = uVar4;
  }
  func_0x000107c5fb78(uVar7,uVar3);
  func_0x000107c6142c(uVar3);
  *(undefined8 *)(lVar2 + 0x90) = uStack_120;
  *(undefined8 *)(lVar2 + 0x98) = uStack_118;
  lVar6 = lVar2;
  func_0x0001001830b8(lVar2);
  func_0x000107c61588(lVar2);
  uVar3 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),4,uVar3);
  return lVar6;
}



/* Entry: 10268e8f4; end: 10268e94b;  */

uint FUN_10268e8f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined2 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined2 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10268ea24(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10268e94c; end: 10268e98b;  */

undefined1  [16] FUN_10268e94c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd00000000000001e;
  pcVar1 = "Feature Loaded Event";
  if (*(char *)(unaff_x20 + 0x41) == '\0') {
    uVar2 = 0xd000000000000014;
    pcVar1 = "Pin Visibility Event (No-Fill)";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10268e98c; end: 10268ea23;  */

undefined8 FUN_10268e98c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10268ea24; end: 10268eb5b;  */

byte FUN_10268ea24(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
  {
    uVar1 = param_1[2];
    uVar3 = param_2[2];
    lVar4 = *(long *)(uVar1 + 0x10);
    if (lVar4 == *(long *)(uVar3 + 0x10)) {
      if (lVar4 != 0 && uVar1 != uVar3) {
        plVar5 = (long *)(uVar3 + 0x28);
        plVar6 = (long *)(uVar1 + 0x28);
        do {
          uVar1 = plVar6[-1];
          if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) &&
             (func_0x000107c605b8(), (uVar1 & 1) == 0)) goto LAB_10268eb40;
          plVar5 = plVar5 + 2;
          plVar6 = plVar6 + 2;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
      if (param_1[3] == param_2[3]) {
        bVar2 = 0;
        if ((param_1[4] != param_2[4]) || (param_1[5] != param_2[5])) goto LAB_10268eb44;
        uVar1 = param_1[6];
        if ((((uVar1 == param_2[6]) && (param_1[7] == param_2[7])) ||
            (func_0x000107c605b8(), (uVar1 & 1) != 0)) && ((char)param_1[8] == (char)param_2[8])) {
          bVar2 = *(byte *)((long)param_1 + 0x41) ^ *(byte *)((long)param_2 + 0x41) ^ 1;
          goto LAB_10268eb44;
        }
      }
    }
  }
LAB_10268eb40:
  bVar2 = 0;
LAB_10268eb44:
  return bVar2 & 1;
}



/* Entry: 10268eb5c; end: 10268eb7f;  */

void FUN_10268eb5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10268eb80();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10268eb80; end: 10268ebbf;  */

void FUN_10268eb80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac934c;
  func_0x000107c61520(&UNK_10dac934c,&UNK_1105331b8);
  puRam0000000112eb3b28 = puVar1;
  return;
}



/* Entry: 10268ebc0; end: 10268ec1b;  */

long FUN_10268ebc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10268ec1c; end: 10268ed33;  */

undefined8 * FUN_10268ec1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  uVar2 = param_2[7];
  param_1[7] = uVar2;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 10268ed34; end: 10268ed57;  */

void FUN_10268ed34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Entry: 10268ed58; end: 10268edcb;  */

undefined8 * FUN_10268ed58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  return param_1;
}



/* Entry: 10268edcc; end: 10268ee77;  */

int FUN_10268edcc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10268ee78; end: 10268efab;  */

long FUN_10268ee78(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  *(undefined8 *)(lVar3 + 0x40) = 0x656c6269736976;
  *(undefined8 *)(lVar3 + 0x48) = 0xe700000000000000;
  bVar2 = (param_3 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0xe000000000000000;
  lVar4 = lVar3;
  func_0x0001001830b8(lVar3);
  func_0x000107c61588(lVar3);
  uVar5 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar5);
  return lVar4;
}



/* Entry: 10268efac; end: 10268efb7;  */

long FUN_10268efac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  lVar5 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar2;
  *(undefined8 *)(lVar5 + 0x40) = 0x656c6269736976;
  *(undefined8 *)(lVar5 + 0x48) = 0xe700000000000000;
  bVar4 = (bVar3 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c61434(uVar2);
  func_0x000107c5fb78(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0xe000000000000000;
  lVar6 = lVar5;
  func_0x0001001830b8(lVar5);
  func_0x000107c61588(lVar5);
  uVar7 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),2,uVar7);
  return lVar6;
}



/* Entry: 10268efb8; end: 10268f013;  */

byte FUN_10268efb8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 10268f014; end: 10268f037;  */

undefined1  [16] FUN_10268f014(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee00746e65764520;
  auVar1._0_8_ = 0x6c65646f4d204433;
  return auVar1;
}



/* Entry: 10268f038; end: 10268f05b;  */

void FUN_10268f038(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10268f05c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10268f05c; end: 10268f09b;  */

void FUN_10268f05c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac93e4;
  func_0x000107c61520(&UNK_10dac93e4,&UNK_110533288);
  puRam0000000112eb3b30 = puVar1;
  return;
}



/* Entry: 10268f09c; end: 10268f0a3;  */

void FUN_10268f09c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10268f0a4; end: 10268f0d7;  */

undefined8 * FUN_10268f0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10268f0d8; end: 10268f12b;  */

undefined8 * FUN_10268f0d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10268f12c; end: 10268f167;  */

undefined8 * FUN_10268f12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10268f168; end: 10268f207;  */

int FUN_10268f168(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10268f208; end: 10268f343;  */

long FUN_10268f208(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  *(undefined8 *)(lVar3 + 0x40) = 0x6e696e6e75527369;
  *(undefined8 *)(lVar3 + 0x48) = 0xe900000000000067;
  bVar2 = (param_3 & 1) == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(uVar5,uVar1);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0xe000000000000000;
  lVar4 = lVar3;
  func_0x0001001830b8(lVar3);
  func_0x000107c61588(lVar3);
  uVar5 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar5);
  return lVar4;
}



/* Entry: 10268f344; end: 10268f34f;  */

long FUN_10268f344(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  lVar5 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 4;
  *(undefined8 *)(lVar5 + 0x10) = 2;
  *(undefined8 *)(lVar5 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar5 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar5 + 0x30) = uVar7;
  *(undefined8 *)(lVar5 + 0x38) = uVar2;
  *(undefined8 *)(lVar5 + 0x40) = 0x6e696e6e75527369;
  *(undefined8 *)(lVar5 + 0x48) = 0xe900000000000067;
  bVar4 = (bVar3 & 1) == 0;
  uVar7 = 0x65757274;
  if (bVar4) {
    uVar7 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar4) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c61434(uVar2);
  func_0x000107c5fb78(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0x58) = 0xe000000000000000;
  lVar6 = lVar5;
  func_0x0001001830b8(lVar5);
  func_0x000107c61588(lVar5);
  uVar7 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),2,uVar7);
  return lVar6;
}



/* Entry: 10268f350; end: 10268f3ab;  */

byte FUN_10268f350(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return 0;
  }
  return (byte)uVar1 ^ (byte)uVar2 ^ 1;
}



/* Entry: 10268f3ac; end: 10268f3c7;  */

undefined1  [16] FUN_10268f3ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0b3500;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Entry: 10268f3c8; end: 10268f3eb;  */

void FUN_10268f3c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10268f3ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10268f3ec; end: 10268f42b;  */

void FUN_10268f3ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9474;
  func_0x000107c61520(&UNK_10dac9474,&UNK_110533348);
  puRam0000000112eb3b38 = puVar1;
  return;
}



/* Entry: 10268f42c; end: 10268f433;  */

void FUN_10268f42c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10268f434; end: 10268f467;  */

undefined8 * FUN_10268f434(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10268f468; end: 10268f4bb;  */

undefined8 * FUN_10268f468(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10268f4bc; end: 10268f4f7;  */

undefined8 * FUN_10268f4bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Entry: 10268f4f8; end: 10268f597;  */

int FUN_10268f4f8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10268f598; end: 10268f6eb;  */

undefined1  [16] FUN_10268f598(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      auVar5._8_8_ = 0xe700000000000000;
      auVar5._0_8_ = 0x6e776f6e6b6e75;
      return auVar5;
    }
    if (param_1 == 1) {
      auVar7._8_8_ = 0xed000074726f7077;
      auVar7._0_8_ = 0x656956664f74756f;
      return auVar7;
    }
    if (param_1 == 2) {
      auVar3._8_8_ = 0xea00000000004955;
      auVar3._0_8_ = 0x79426e6564646968;
      return auVar3;
    }
  }
  else {
    if (param_1 == 3) {
      auVar6._8_8_ = 0xe90000000000006e;
      auVar6._0_8_ = 0x6f6973696c6c6f63;
      return auVar6;
    }
    if (param_1 == 4) {
      auVar8._8_8_ = 0xef74655365727574;
      auVar8._0_8_ = 0x6165466e49746f6e;
      return auVar8;
    }
    if (param_1 == 5) {
      auVar4._8_8_ = 0xef646574696d694c;
      auVar4._0_8_ = 0x74726f7077656976;
      return auVar4;
    }
  }
  puVar2 = PTR___sSSN_11034da80;
  func_0x000107c5fc58(param_1,PTR___sSSN_11034da80);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar2);
  auVar1._8_8_ = 0xeb00000000202d20;
  auVar1._0_8_ = 0x646564756c63636f;
  return auVar1;
}



/* Entry: 10268f6ec; end: 10268f6ff;  */

undefined8 FUN_10268f6ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  uVar1 = *param_1;
  uVar3 = *param_2;
  if ((long)uVar1 < 3) {
    if (uVar1 == 0) {
      if (uVar3 != 0) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 1) {
      if (uVar3 != 1) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 2) {
      if (uVar3 != 2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (uVar1 == 3) {
      if (uVar3 != 3) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 4) {
      if (uVar3 != 4) {
        return 0;
      }
      return 1;
    }
    if (uVar1 == 5) {
      if (uVar3 != 5) {
        return 0;
      }
      return 1;
    }
  }
  if (uVar3 < 6) {
    return 0;
  }
  lVar4 = *(long *)(uVar1 + 0x10);
  if (lVar4 == *(long *)(uVar3 + 0x10)) {
    if ((lVar4 == 0) || (uVar1 == uVar3)) {
      uVar2 = 1;
    }
    else {
      plVar5 = (long *)(uVar3 + 0x28);
      plVar6 = (long *)(uVar1 + 0x28);
      do {
        uVar1 = plVar6[-1];
        if ((uVar1 != plVar5[-1] || *plVar6 != *plVar5) && (func_0x000107c605b8(), (uVar1 & 1) == 0)
           ) goto LAB_10268f7fc;
        plVar5 = plVar5 + 2;
        plVar6 = plVar6 + 2;
        uVar2 = 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  else {
LAB_10268f7fc:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10268f700; end: 10268f80f;  */

undefined8 FUN_10268f700(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  if ((long)param_1 < 3) {
    if (param_1 == 0) {
      if (param_2 != 0) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 1) {
      if (param_2 != 1) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 2) {
      if (param_2 != 2) {
        return 0;
      }
      return 1;
    }
  }
  else {
    if (param_1 == 3) {
      if (param_2 != 3) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 4) {
      if (param_2 != 4) {
        return 0;
      }
      return 1;
    }
    if (param_1 == 5) {
      if (param_2 != 5) {
        return 0;
      }
      return 1;
    }
  }
  if (param_2 < 6) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 == 0) || (param_1 == param_2)) {
      uVar1 = 1;
    }
    else {
      plVar4 = (long *)(param_2 + 0x28);
      plVar5 = (long *)(param_1 + 0x28);
      do {
        uVar2 = plVar5[-1];
        if ((uVar2 != plVar4[-1] || *plVar5 != *plVar4) && (func_0x000107c605b8(), (uVar2 & 1) == 0)
           ) goto LAB_10268f7fc;
        plVar4 = plVar4 + 2;
        plVar5 = plVar5 + 2;
        uVar1 = 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
LAB_10268f7fc:
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 10268f810; end: 10268f827;  */

void FUN_10268f810(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10268f828; end: 10268f91b;  */

ulong * FUN_10268f828(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = *param_2;
  if (uVar2 < 0xffffffff) {
    if (uVar1 < 0xffffffff) {
      *param_1 = uVar1;
    }
    else {
      *param_1 = uVar1;
      func_0x000107c61434();
    }
  }
  else if (uVar1 < 0xffffffff) {
    func_0x000107c6142c(uVar2);
    *param_1 = *param_2;
  }
  else {
    *param_1 = uVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar2);
  }
  return param_1;
}



/* Entry: 10268f91c; end: 10268fa17;  */

int FUN_10268f91c(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff9 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffa;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (6 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -5;
  }
  return iVar1;
}



/* Entry: 10268fa18; end: 10268fb5f;  */

long FUN_10268fa18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined8 *)(lVar3 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined8 *)(lVar3 + 0x38) = uVar2;
  func_0x000107c61434(uVar2);
  lVar4 = lVar3;
  func_0x0001001830b8(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000100ab5dc4((undefined8 *)(lVar3 + 0x20));
  return lVar4;
}



/* Entry: 10268fb60; end: 10268fb83;  */

undefined1  [16] FUN_10268fb60(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed0000746e657645;
  auVar1._0_8_ = 0x20706154206e6950;
  return auVar1;
}



/* Entry: 10268fb84; end: 10268fba7;  */

void FUN_10268fb84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10268fba8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10268fba8; end: 10268fbe7;  */

void FUN_10268fba8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac954c;
  func_0x000107c61520(&UNK_10dac954c,&UNK_1105334b8);
  puRam0000000112eb3b40 = puVar1;
  return;
}



/* Entry: 10268fbe8; end: 10268fc53;  */

long FUN_10268fbe8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10268fc54; end: 10268fd93;  */

undefined8 * FUN_10268fc54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar2 = param_2[7];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  param_1[7] = uVar2;
  func_0x000107c61434();
  func_0x000107c615f0(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 10268fd94; end: 10268fe07;  */

undefined8 * FUN_10268fd94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(param_1[3]);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61574(param_1[5]);
  uVar2 = param_2[7];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_1[7];
  param_1[7] = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10268fe08; end: 10268fec3;  */

int FUN_10268fe08(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10268fec4; end: 10268ff6f;  */

void FUN_10268fec4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10268ff70; end: 10268ff73;  */

void FUN_10268ff70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac95a0;
  func_0x000107c61520(&UNK_10dac95a0,&UNK_110533578);
  puRam0000000112eb3b48 = puVar1;
  return;
}



/* Entry: 10268ff74; end: 10268ffb3;  */

void FUN_10268ff74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac95a0;
  func_0x000107c61520(&UNK_10dac95a0,&UNK_110533578);
  puRam0000000112eb3b48 = puVar1;
  return;
}



/* Entry: 10268ffb4; end: 1026901a7;  */

undefined1  [16] FUN_10268ffb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  uVar3 = 0xed000079726f7473;
  if (bVar4 != 2) {
    uVar3 = 0xec0000006e6f6369;
  }
  uVar1 = 0x79726f7473;
  if (bVar4 != 0) {
    uVar1 = 0x6e6f6369;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe400000000000000;
  }
  uVar5 = 0x5f64657375636f66;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1026901a8; end: 102690227;  */

undefined1  [16] FUN_1026901a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  if (*unaff_x20 == 6) {
    uVar2 = 0xe700000000000000;
    uVar1 = 0x656c6269736976;
  }
  else {
    FUN_10268f598();
    func_0x000107c5fb78();
    func_0x000107c6142c(param_2);
    uVar1 = 0x6c62697369766e69;
    uVar2 = 0xec000000202d2065;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102690228; end: 10269034b;  */

undefined8 FUN_102690228(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (param_1 == 6) {
    if (param_2 == 6) {
      return 1;
    }
  }
  else {
    if (param_2 == 6) {
      return 0;
    }
    if ((long)param_1 < 3) {
      if (param_1 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        return 0;
      }
      if (param_1 == 1) {
        if (param_2 != 1) {
          return 0;
        }
        return 1;
      }
      if (param_1 == 2) {
        if (param_2 != 2) {
          return 0;
        }
        return 1;
      }
    }
    else {
      if (param_1 == 3) {
        if (param_2 != 3) {
          return 0;
        }
        return 1;
      }
      if (param_1 == 4) {
        if (param_2 != 4) {
          return 0;
        }
        return 1;
      }
      if (param_1 == 5) {
        if (param_2 != 5) {
          return 0;
        }
        return 1;
      }
    }
    if ((5 < param_2) && (lVar2 = *(long *)(param_1 + 0x10), lVar2 == *(long *)(param_2 + 0x10))) {
      if ((lVar2 == 0) || (param_1 == param_2)) {
        return 1;
      }
      plVar3 = (long *)(param_2 + 0x28);
      plVar4 = (long *)(param_1 + 0x28);
      while ((uVar1 = plVar4[-1], uVar1 == plVar3[-1] && *plVar4 == *plVar3 ||
             (func_0x000107c605b8(), (uVar1 & 1) != 0))) {
        plVar3 = plVar3 + 2;
        plVar4 = plVar4 + 2;
        lVar2 = lVar2 + -1;
        if (lVar2 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Entry: 10269034c; end: 102690373;  */

void FUN_10269034c(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((5 < uVar2) && ((int)uVar1 + -6 < 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 102690374; end: 1026903c3;  */

ulong * FUN_102690374(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((5 < uVar2) && ((int)uVar1 + -6 < 0)) {
    func_0x000107c61434();
  }
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 1026903c4; end: 1026904bf;  */

ulong * FUN_1026903c4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = *param_2;
  uVar2 = uVar4;
  if (0xfffffffe < uVar4) {
    uVar2 = 0xffffffff;
  }
  iVar3 = (int)uVar2 + -6;
  if ((int)uVar1 + -6 < 0) {
    if (iVar3 < 0) {
      if (5 < uVar5) {
        if (uVar4 < 6) {
          FUN_1026904c0();
          *param_1 = *param_2;
          return param_1;
        }
        *param_1 = uVar4;
        func_0x000107c61434(uVar4);
        func_0x000107c6142c(uVar5);
        return param_1;
      }
      if (5 < uVar4) {
        *param_1 = uVar4;
        func_0x000107c61434(uVar4);
        return param_1;
      }
    }
    else if (5 < uVar5) {
      func_0x000107c6142c(uVar5);
      uVar4 = *param_2;
    }
  }
  else if ((iVar3 < 0) && (5 < uVar4)) {
    func_0x000107c61434(uVar4);
  }
  *param_1 = uVar4;
  return param_1;
}



/* Entry: 1026904c0; end: 1026905ab;  */

undefined8 FUN_1026904c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb3b50;
  func_0x0001000285a8(0x112eb3b50,&UNK_10dac9730);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1026905ac; end: 1026906cb;  */

uint FUN_1026905ac(ulong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffff9;
  }
  uVar3 = *param_1;
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 6;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Entry: 1026906cc; end: 10269092f;  */

long FUN_1026906cc(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  
  lVar4 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 8;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  *(undefined8 *)(lVar4 + 0x20) = 0x44496563616c70;
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[1];
  *(undefined8 *)(lVar4 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  *(undefined8 *)(lVar4 + 0x40) = 0x6576654c6d6f6f7a;
  *(undefined8 *)(lVar4 + 0x48) = 0xe90000000000006c;
  func_0x000107c61434();
  puVar5 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0x50) = puVar5;
  *(undefined **)(lVar4 + 0x58) = puVar8;
  *(undefined8 *)(lVar4 + 0x60) = 0x696c696269736976;
  *(undefined8 *)(lVar4 + 0x68) = 0xea00000000007974;
  if (unaff_x20[3] == 6) {
    uVar6 = 0x656c6269736976;
    uVar9 = 0xe700000000000000;
  }
  else {
    FUN_10268f598();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    uVar6 = 0x6c62697369766e69;
    uVar9 = 0xec000000202d2065;
  }
  func_0x000107c5fb78(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0xe000000000000000;
  *(undefined8 *)(lVar4 + 0x80) = 0x657079546e6970;
  *(undefined8 *)(lVar4 + 0x88) = 0xe700000000000000;
  bVar2 = *(byte *)(unaff_x20 + 4);
  uVar6 = 0xed000079726f7473;
  if (bVar2 != 2) {
    uVar6 = 0xec0000006e6f6369;
  }
  uVar9 = 0x79726f7473;
  if (bVar2 != 0) {
    uVar9 = 0x6e6f6369;
  }
  uVar1 = 0xe500000000000000;
  if (bVar2 != 0) {
    uVar1 = 0xe400000000000000;
  }
  uVar3 = 0x5f64657375636f66;
  if (bVar2 < 2) {
    uVar6 = uVar1;
    uVar3 = uVar9;
  }
  func_0x000107c5fb78(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0xe000000000000000;
  lVar7 = lVar4;
  func_0x0001001830b8(lVar4);
  func_0x000107c61588(lVar4);
  uVar6 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),4,uVar6);
  return lVar7;
}



/* Entry: 102690930; end: 102690933;  */

long FUN_102690930(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  
  lVar4 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 8;
  *(undefined8 *)(lVar4 + 0x10) = 4;
  *(undefined8 *)(lVar4 + 0x20) = 0x44496563616c70;
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[1];
  *(undefined8 *)(lVar4 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *(undefined8 *)(lVar4 + 0x38) = uVar9;
  *(undefined8 *)(lVar4 + 0x40) = 0x6576654c6d6f6f7a;
  *(undefined8 *)(lVar4 + 0x48) = 0xe90000000000006c;
  func_0x000107c61434();
  puVar5 = PTR___sSiN_11034deb0;
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  *(undefined **)(lVar4 + 0x50) = puVar5;
  *(undefined **)(lVar4 + 0x58) = puVar8;
  *(undefined8 *)(lVar4 + 0x60) = 0x696c696269736976;
  *(undefined8 *)(lVar4 + 0x68) = 0xea00000000007974;
  if (unaff_x20[3] == 6) {
    uVar6 = 0x656c6269736976;
    uVar9 = 0xe700000000000000;
  }
  else {
    FUN_10268f598();
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar8);
    uVar6 = 0x6c62697369766e69;
    uVar9 = 0xec000000202d2065;
  }
  func_0x000107c5fb78(uVar6,uVar9);
  func_0x000107c6142c(uVar9);
  *(undefined8 *)(lVar4 + 0x70) = 0;
  *(undefined8 *)(lVar4 + 0x78) = 0xe000000000000000;
  *(undefined8 *)(lVar4 + 0x80) = 0x657079546e6970;
  *(undefined8 *)(lVar4 + 0x88) = 0xe700000000000000;
  bVar2 = *(byte *)(unaff_x20 + 4);
  uVar6 = 0xed000079726f7473;
  if (bVar2 != 2) {
    uVar6 = 0xec0000006e6f6369;
  }
  uVar9 = 0x79726f7473;
  if (bVar2 != 0) {
    uVar9 = 0x6e6f6369;
  }
  uVar1 = 0xe500000000000000;
  if (bVar2 != 0) {
    uVar1 = 0xe400000000000000;
  }
  uVar3 = 0x5f64657375636f66;
  if (bVar2 < 2) {
    uVar6 = uVar1;
    uVar3 = uVar9;
  }
  func_0x000107c5fb78(uVar3,uVar6);
  func_0x000107c6142c(uVar6);
  *(undefined8 *)(lVar4 + 0x90) = 0;
  *(undefined8 *)(lVar4 + 0x98) = 0xe000000000000000;
  lVar7 = lVar4;
  func_0x0001001830b8(lVar4);
  func_0x000107c61588(lVar4);
  uVar6 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),4,uVar6);
  return lVar7;
}



/* Entry: 102690934; end: 10269097b;  */

uint FUN_102690934(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined2 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined2 *)(param_2 + 4);
  FUN_1026909bc(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10269097c; end: 1026909bb;  */

undefined1  [16] FUN_10269097c(void)

{
  char *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd00000000000001e;
  pcVar1 = "Pin Visibility Event";
  if (*(char *)(unaff_x20 + 0x21) == '\0') {
    uVar2 = 0xd000000000000014;
    pcVar1 = "Place Map Effect Event";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1026909bc; end: 102690b0b;  */

byte FUN_1026909bc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar1 & 1) != 0))
     && (param_1[2] == param_2[2])) {
    uVar1 = param_1[3];
    uVar2 = param_2[3];
    if (uVar1 == 6) {
      if (uVar2 == 6) goto LAB_102690a1c;
    }
    else if (uVar2 != 6) {
      if ((long)uVar1 < 3) {
        if (uVar1 == 0) {
          if (uVar2 == 0) goto LAB_102690a1c;
        }
        else if (uVar1 == 1) {
          if (uVar2 == 1) goto LAB_102690a1c;
        }
        else if (uVar1 == 2) {
          if (uVar2 == 2) {
LAB_102690a1c:
            if ((char)param_1[4] == (char)param_2[4]) {
              bVar3 = *(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21) ^ 1;
              goto LAB_102690a4c;
            }
          }
        }
        else {
LAB_102690abc:
          if ((5 < uVar2) && (func_0x00010142cfc4(), (uVar1 & 1) != 0)) goto LAB_102690a1c;
        }
      }
      else if (uVar1 == 3) {
        if (uVar2 == 3) goto LAB_102690a1c;
      }
      else if (uVar1 == 4) {
        if (uVar2 == 4) goto LAB_102690a1c;
      }
      else {
        if (uVar1 != 5) goto LAB_102690abc;
        if (uVar2 == 5) goto LAB_102690a1c;
      }
    }
  }
  bVar3 = 0;
LAB_102690a4c:
  return bVar3 & 1;
}



/* Entry: 102690b0c; end: 102690b4b;  */

void FUN_102690b0c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac9704;
  func_0x000107c61520(&UNK_10dac9704,&UNK_110533700);
  puRam0000000112eb3b58 = puVar1;
  return;
}



/* Entry: 102690b4c; end: 102690bb3;  */

long FUN_102690b4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102690bb4; end: 102690d33;  */

undefined8 * FUN_102690bb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  if (uVar2 < 6) {
    param_1[3] = uVar2;
  }
  else if (uVar2 == 6) {
    param_1[3] = 6;
  }
  else {
    param_1[3] = uVar2;
    func_0x000107c61434(uVar2);
  }
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



/* Entry: 102690d34; end: 102690d73;  */

undefined8 FUN_102690d34(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102690d74; end: 102690e3f;  */

undefined8 * FUN_102690d74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar3);
  puVar4 = param_1 + 3;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  if (*puVar4 != 6) {
    if (uVar2 == 6) {
      FUN_102690d34(puVar4,0x112eb3b60,&UNK_10dac9738);
      *puVar4 = 6;
      goto LAB_102690de4;
    }
    if (5 < *puVar4) {
      if (5 < uVar2) {
        *puVar4 = uVar2;
        func_0x000107c6142c();
        goto LAB_102690de4;
      }
      FUN_102690d34(puVar4,0x112eb3b50,&UNK_10dac9730);
    }
  }
  *puVar4 = uVar2;
LAB_102690de4:
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  return param_1;
}



/* Entry: 102690e40; end: 102690edb;  */

int FUN_102690e40(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x22) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102690edc; end: 102690fff;  */

long FUN_102690edc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar1 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  *(undefined8 *)(lVar1 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar1 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar1 + 0x30) = param_1;
  *(undefined8 *)(lVar1 + 0x38) = param_2;
  *(undefined8 *)(lVar1 + 0x40) = 0x707954746e657665;
  *(undefined8 *)(lVar1 + 0x48) = 0xe900000000000065;
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  uStack_b1 = param_3;
  func_0x000107c61434(param_2);
  func_0x000107c603d0(&uStack_b1,&uStack_b0,&UNK_110533890,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  *(undefined8 *)(lVar1 + 0x50) = uStack_b0;
  *(undefined8 *)(lVar1 + 0x58) = uStack_a8;
  lVar2 = lVar1;
  func_0x0001001830b8(lVar1);
  func_0x000107c61588(lVar1);
  uVar3 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar3);
  return lVar2;
}



/* Entry: 102691000; end: 10269100b;  */

long FUN_102691000(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  uVar5 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = *(undefined1 *)(unaff_x20 + 2);
  lVar3 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 4;
  *(undefined8 *)(lVar3 + 0x10) = 2;
  *(undefined8 *)(lVar3 + 0x20) = 0x44496563616c70;
  *(undefined8 *)(lVar3 + 0x28) = 0xe700000000000000;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  *(undefined8 *)(lVar3 + 0x38) = uVar1;
  *(undefined8 *)(lVar3 + 0x40) = 0x707954746e657665;
  *(undefined8 *)(lVar3 + 0x48) = 0xe900000000000065;
  uStack_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  uStack_b1 = uVar2;
  func_0x000107c61434(uVar1);
  func_0x000107c603d0(&uStack_b1,&uStack_b0,&UNK_110533890,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  *(undefined8 *)(lVar3 + 0x50) = uStack_b0;
  *(undefined8 *)(lVar3 + 0x58) = uStack_a8;
  lVar4 = lVar3;
  func_0x0001001830b8(lVar3);
  func_0x000107c61588(lVar3);
  uVar5 = 0x112d38308;
  func_0x0001000285a8(0x112d38308,&UNK_10d902040);
  func_0x000107c61408((undefined8 *)(lVar3 + 0x20),2,uVar5);
  return lVar4;
}



/* Entry: 10269100c; end: 102691067;  */

bool FUN_10269100c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_2[2];
  if ((uVar3 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar3 & 1) == 0))
  {
    return false;
  }
  return (char)uVar1 == (char)uVar2;
}



/* Entry: 102691068; end: 102691083;  */

undefined1  [16] FUN_102691068(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0b35c0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 102691084; end: 1026910a7;  */

void FUN_102691084(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1026910a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1026910a8; end: 1026910e7;  */

void FUN_1026910a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb3b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dac97a4;
  func_0x000107c61520(&UNK_10dac97a4,&UNK_1105337d0);
  puRam0000000112eb3b68 = puVar1;
  return;
}



/* Entry: 1026910e8; end: 1026910ef;  */

void FUN_1026910e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1026910f0; end: 102691123;  */

undefined8 * FUN_1026910f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  func_0x000107c61434();
  return param_1;
}



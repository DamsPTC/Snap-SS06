/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108876d88; end: 108876dcb;  */

void FUN_108876d88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  return;
}



/* Entry: 108876dcc; end: 108876deb;  */

void FUN_108876dcc(long param_1)

{
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x0001087dc134();
  }
  return;
}



/* Entry: 108876dec; end: 108876e3f;  */

void FUN_108876dec(void)

{
  long unaff_x19;
  ulong unaff_x20;
  
  func_0x000107c34660();
  func_0x000107c34484();
  func_0x000107c34750();
  FUN_108876e40();
  FUN_108876dcc(unaff_x20 | 8);
  func_0x000107c34534();
  func_0x000107c31408();
  FUN_108876dcc(unaff_x19 + 0x10);
  return;
}



/* Entry: 108876e40; end: 108876e5f;  */

void FUN_108876e40(void)

{
  func_0x000107c34494();
  FUN_108876e60();
  return;
}



/* Entry: 108876e60; end: 108876e83;  */

undefined8 FUN_108876e60(undefined8 param_1)

{
  FUN_108876e84();
  return param_1;
}



/* Entry: 108876e84; end: 108876eab;  */

void FUN_108876e84(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0x38);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x38) == '\x01') {
        func_0x0001087dc134();
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
      return;
    }
    FUN_108876d88();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000107c343b8();
    func_0x000107c27b9c();
    func_0x000107c3194c(unaff_x20 + 0x18,unaff_x19 + 0x18);
    *(undefined4 *)(unaff_x20 + 0x30) = *(undefined4 *)(unaff_x19 + 0x30);
    return;
  }
  return;
}



/* Entry: 108876eac; end: 108876edf;  */

void FUN_108876eac(undefined8 param_1)

{
  func_0x000107c3463c(param_1,param_1);
  FUN_108876ef8();
  func_0x000107c344fc();
  FUN_108876ef8();
  func_0x00010887cb78();
  return;
}



/* Entry: 108876ee0; end: 108876ef7;  */

void FUN_108876ee0(undefined8 *param_1,long param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  func_0x000107c34260(param_1,param_2 + 8);
  FUN_108876f78();
  func_0x000107c3425c();
  return;
}



/* Entry: 108876ef8; end: 108876f1b;  */

void FUN_108876ef8(void)

{
  func_0x000107c343bc();
  func_0x000107c34570();
  FUN_108876f1c();
  return;
}



/* Entry: 108876f1c; end: 108876f43;  */

void FUN_108876f1c(long param_1)

{
  func_0x000107c34684();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_108876f44();
  return;
}



/* Entry: 108876f44; end: 108876f57;  */

void FUN_108876f44(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_108876d88();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 108876f58; end: 108876f77;  */

void FUN_108876f58(void)

{
  func_0x000107c34260();
  FUN_108876f78();
  func_0x000107c3425c();
  return;
}



/* Entry: 108876f78; end: 108876fe3;  */

void FUN_108876f78(undefined8 *param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  func_0x000107c343b8();
  cVar1 = *(char *)(param_1 + 7);
  if (cVar1 != *(char *)(param_2 + 0x38)) {
    if (cVar1 == '\0') {
      func_0x00010887c048();
      FUN_108876d6c();
    }
    else {
      func_0x000107c344c8();
      FUN_108876d6c();
      unaff_x19 = unaff_x20;
    }
    if (*(char *)(unaff_x19 + 0x38) == '\x01') {
      func_0x0001087dc134();
      *(undefined1 *)(unaff_x19 + 0x38) = 0;
    }
    return;
  }
  if (cVar1 != '\0') {
    func_0x00010887c048();
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_50 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    uStack_40 = param_1[4];
    uStack_48 = param_1[3];
    uStack_38 = param_1[5];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uStack_30 = *(undefined4 *)(param_1 + 6);
    FUN_108876d38();
    FUN_108876d38(param_2,&uStack_60);
    func_0x0001087dc134(&uStack_60);
    return;
  }
  return;
}



/* Entry: 108876fe4; end: 10887704f;  */

void FUN_108876fe4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  uStack_40 = param_1[4];
  uStack_48 = param_1[3];
  uStack_38 = param_1[5];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uStack_30 = *(undefined4 *)(param_1 + 6);
  FUN_108876d38();
  FUN_108876d38(param_2,&uStack_60);
  func_0x0001087dc134(&uStack_60);
  return;
}



/* Entry: 108877050; end: 1088770bf;  */

void FUN_108877050(void)

{
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  func_0x000107c34788();
  func_0x000108877388(auStack_78);
  func_0x000108877388(auStack_c0);
  func_0x000107c34764();
  FUN_1088770c0();
  func_0x00010887cb78();
  func_0x00010887d00c();
  return;
}



/* Entry: 1088770c0; end: 10887713b;  */

void FUN_1088770c0(undefined8 param_1)

{
  undefined1 in_ZR;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c34344();
  uStack_38 = 0;
  uStack_40 = param_1;
  while ((((*(byte *)(unaff_x20 + 0x40) & 1) != 0 || ((*(byte *)(unaff_x19 + 0x40) & 1) != 0)) &&
         (func_0x00010887cbc0(), !(bool)in_ZR))) {
    FUN_10887730c();
    FUN_10887713c();
    FUN_108876c18();
  }
  uStack_38 = 1;
  FUN_10887735c(&uStack_40);
  return;
}



/* Entry: 10887713c; end: 10887719f;  */

long FUN_10887713c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    func_0x000108877178();
    lVar2 = uVar1 + 0x38;
  }
  else {
    lVar2 = param_1;
    FUN_1088771a0();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x38;
}



/* Entry: 1088771a0; end: 1088772bf;  */

long * FUN_1088771a0(long *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong extraout_x10;
  long *unaff_x19;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  uVar1 = (lVar7 - lVar6) / 0x38 + 1;
  uVar3 = uVar1 == 0x492492492492492;
  if (0x492492492492492 < uVar1) {
    FUN_1088772c0();
LAB_1088772bc:
    func_0x000104bd35f4();
    func_0x00010887be1c();
    func_0x00010887d174();
    while (func_0x00010887d07c(), !(bool)uVar3) {
      unaff_x19[2] = extraout_x8_00 + -0x38;
      func_0x0001087dc134();
    }
    if (*unaff_x19 != 0) {
      __ZdlPv();
    }
    return unaff_x19;
  }
  func_0x00010887c3f0();
  func_0x00010887d0ec();
  uVar1 = extraout_x9;
  if (0x249249249249248 < extraout_x10) {
    uVar1 = extraout_x8;
  }
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    uVar3 = uVar1 == extraout_x8;
    if (extraout_x8 <= uVar1 && !(bool)uVar3) goto LAB_1088772bc;
    lVar4 = uVar1 * 0x38;
    __Znwm(lVar4);
  }
  lVar4 = lVar4 + (lVar7 - lVar6);
  func_0x00010887c4f0();
  FUN_108876d88();
  lVar5 = *unaff_x19;
  lVar2 = unaff_x19[1];
  lVar7 = lVar4 + ((lVar2 - lVar5) / -0x38) * 0x38;
  for (lVar6 = lVar5; lVar6 != lVar2; lVar6 = lVar6 + 0x38) {
    FUN_108876d88(lVar7,lVar6);
    lVar7 = lVar7 + 0x38;
  }
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x38) {
    func_0x0001087dc134(lVar5);
  }
  func_0x00010887c8cc(0x38);
  FUN_1088772cc();
  return (long *)(lVar4 + 0x38);
}



/* Entry: 1088772c0; end: 1088772cb;  */

void FUN_1088772c0(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010887be1c();
  func_0x00010887d174();
  while (func_0x00010887d07c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x38;
    func_0x0001087dc134();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1088772cc; end: 10887730b;  */

void FUN_1088772cc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x19;
  
  func_0x00010887d174();
  while (func_0x00010887d07c(), !(bool)in_ZR) {
    unaff_x19[2] = extraout_x8 + -0x38;
    func_0x0001087dc134();
  }
  if (*unaff_x19 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10887730c; end: 10887735b;  */

long FUN_10887730c(long param_1)

{
  if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
    func_0x00010887b6dc();
    func_0x00010887b6c8();
    func_0x00010887b778();
    func_0x000107c34364();
    func_0x000107c34368();
  }
  return param_1 + 8;
}



/* Entry: 10887735c; end: 1088773ab;  */

long FUN_10887735c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001087dc0b4(param_1);
  }
  return param_1;
}



/* Entry: 1088773ac; end: 1088773db;  */

void FUN_1088773ac(long param_1)

{
  func_0x000107c34684();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_1088773dc();
  return;
}



/* Entry: 1088773dc; end: 1088773ef;  */

void FUN_1088773dc(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    FUN_10887740c();
    *(undefined1 *)(param_1 + 0x38) = 1;
    return;
  }
  return;
}



/* Entry: 1088773f0; end: 10887740b;  */

void FUN_1088773f0(long param_1)

{
  FUN_10887740c();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}



/* Entry: 10887740c; end: 10887744b;  */

void FUN_10887740c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107c344b4();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  func_0x000107c27994(param_1 + 0x18,unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x30) = *(undefined4 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 10887744c; end: 10887748b;  */

void FUN_10887744c(undefined8 param_1,undefined8 *param_2)

{
  FUN_10887748c(param_1,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_2[6],
                param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],param_2[0xc]);
  return;
}



/* Entry: 10887748c; end: 108877493;  */

void FUN_10887748c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  func_0x00010887b5e0();
  uStack_58 = uVar1;
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_10887750c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c27e6c(&uStack_58);
  return;
}



/* Entry: 108877494; end: 10887750b;  */

void FUN_108877494(undefined8 param_1)

{
  undefined8 uStack_58;
  
  func_0x00010887b5e0();
  uStack_58 = param_1;
  func_0x000107c343fc();
  func_0x00010887b604();
  FUN_10887750c();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c27e6c(&uStack_58);
  return;
}



/* Entry: 10887750c; end: 10887762b;  */

/* WARNING: Possible PIC construction at 0x0001088775c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001088775c4) */

void FUN_10887750c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_stack_00000000;
  
  func_0x000107c2820c(param_1,1,param_2);
  iVar1 = (int)param_1;
  func_0x000107c342bc();
  func_0x000107c287ac();
  func_0x00010887c434();
  func_0x000107c287ac();
  func_0x000107c345c4();
  func_0x000107c31410();
  func_0x000107c345c0();
  FUN_108875a6c();
  func_0x000107c34778();
  FUN_108873a40();
  func_0x000107c34770();
  FUN_108873a68();
  func_0x000107c3476c();
  if (*(char *)(in_stack_00000000 + 0x18) == '\x01') {
    func_0x00010054c7ec();
    func_0x0001005ecddc();
    func_0x000107c61324();
    if (iVar1 != 0) {
      func_0x000107c3a514();
      func_0x000107c3a50c();
      func_0x000107c3a524();
      func_0x0001003a91d4(&UNK_10f82fa8c);
      func_0x000107c3a51c();
      func_0x000107c3a4f0();
      func_0x000107c3a4fc();
      func_0x000107c3a504();
    }
    return;
  }
  func_0x00010bccb8cc();
  return;
}



/* Entry: 10887762c; end: 1088776d3;  */

long FUN_10887762c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_1088776a0;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_1088776a0:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108877760();
  return param_1;
}



/* Entry: 1088776d4; end: 10887772b;  */

void FUN_1088776d4(void)

{
  func_0x000107c343c4();
  func_0x000107c287a8();
  func_0x000107c343c0();
  func_0x000108877760();
  return;
}



/* Entry: 10887772c; end: 10887772f;  */

undefined8 * FUN_10887772c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108877730; end: 108877743;  */

void FUN_108877730(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108877744; end: 108877783;  */

void FUN_108877744(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108877784; end: 1088777b3;  */

void FUN_108877784(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x298) = 0;
  FUN_10879579c();
  return;
}



/* Entry: 1088777b4; end: 10887780b;  */

void FUN_1088777b4(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108877760();
  return;
}



/* Entry: 10887780c; end: 1088778b3;  */

long FUN_10887780c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108877880;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108877880:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108877940();
  return param_1;
}



/* Entry: 1088778b4; end: 10887790b;  */

void FUN_1088778b4(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108877940();
  return;
}



/* Entry: 10887790c; end: 10887790f;  */

undefined8 * FUN_10887790c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108877910; end: 108877923;  */

void FUN_108877910(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108877924; end: 108877963;  */

void FUN_108877924(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108877964; end: 108877993;  */

void FUN_108877964(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_10879e518();
  return;
}



/* Entry: 108877994; end: 108877a3b;  */

long FUN_108877994(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108877a08;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108877a08:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108877ac8();
  return param_1;
}



/* Entry: 108877a3c; end: 108877a93;  */

void FUN_108877a3c(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108877ac8();
  return;
}



/* Entry: 108877a94; end: 108877a97;  */

undefined8 * FUN_108877a94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108877a98; end: 108877aab;  */

void FUN_108877a98(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108877aac; end: 108877aeb;  */

void FUN_108877aac(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108877aec; end: 108877b1b;  */

void FUN_108877aec(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_10879e8a4();
  return;
}



/* Entry: 108877b1c; end: 108877bc3;  */

long FUN_108877b1c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108877b90;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108877b90:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  FUN_108877c50();
  func_0x000107c343c0();
  FUN_108877c84();
  return param_1;
}



/* Entry: 108877bc4; end: 108877c1b;  */

void FUN_108877bc4(void)

{
  func_0x000107c343c4();
  FUN_108877c50();
  func_0x000107c343c0();
  FUN_108877c84();
  return;
}



/* Entry: 108877c1c; end: 108877c1f;  */

undefined8 * FUN_108877c1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108877c20; end: 108877c33;  */

void FUN_108877c20(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108877c34; end: 108877c4f;  */

void FUN_108877c34(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108877c50; end: 108877c83;  */

void FUN_108877c50(int param_1)

{
  func_0x00010887b678();
  func_0x000107c2820c();
  func_0x00010887bad4();
  func_0x000107c287ac();
  func_0x00010887bae4();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 108877c84; end: 108877ca7;  */

void FUN_108877c84(void)

{
  func_0x000107c34170();
  FUN_108877ca8();
  return;
}



/* Entry: 108877ca8; end: 108877cd7;  */

void FUN_108877ca8(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_108877cd8();
  return;
}



/* Entry: 108877cd8; end: 108877de7;  */

void FUN_108877cd8(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  int iStack_78;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [24];
  int iStack_38;
  
  func_0x000107c3447c();
  if (param_1 != 0) {
    func_0x000107c3141c();
    iVar1 = (int)param_1;
    if (iVar1 != 0) {
      func_0x000107c3445c();
      func_0x00010887c3a4(auStack_a8);
      func_0x000107c344b8(auStack_90);
      func_0x000107c313e0();
      func_0x000107c34464();
      func_0x000107c313d8();
      iStack_78 = iVar1;
      func_0x00010887c434(auStack_70);
      func_0x000107c28210();
      func_0x000107c345c4(auStack_50);
      func_0x000107c2879c();
      func_0x000107c345c0();
      func_0x000107c313d8();
      iStack_38 = iVar1;
      if (*(char *)(unaff_x19 + 0x80) == '\x01') {
        func_0x000107c34588();
        FUN_1087e0710();
      }
      else {
        func_0x000107c34588();
        func_0x0001087e0780();
      }
      FUN_1087e0354(auStack_a8);
      return;
    }
  }
  lVar2 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x80) == '\x01') {
    FUN_1087e0354();
    *(undefined1 *)(lVar2 + 0x78) = 0;
  }
  return;
}



/* Entry: 108877de8; end: 108877e8f;  */

long FUN_108877de8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108877e5c;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108877e5c:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  FUN_108876a70();
  func_0x000107c343c0();
  func_0x000108877f1c();
  return param_1;
}



/* Entry: 108877e90; end: 108877ee7;  */

void FUN_108877e90(void)

{
  func_0x000107c343c4();
  FUN_108876a70();
  func_0x000107c343c0();
  func_0x000108877f1c();
  return;
}



/* Entry: 108877ee8; end: 108877eeb;  */

undefined8 * FUN_108877ee8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108877eec; end: 108877eff;  */

void FUN_108877eec(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108877f00; end: 108877f3f;  */

void FUN_108877f00(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108877f40; end: 108877f6f;  */

void FUN_108877f40(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x118) = 0;
  FUN_108877f70();
  return;
}



/* Entry: 108877f70; end: 10887813f;  */

void FUN_108877f70(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x21;
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [24];
  int iStack_100;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [32];
  int iStack_a0;
  int iStack_9c;
  undefined1 auStack_98 [40];
  undefined1 auStack_70 [32];
  
  func_0x000107c3447c();
  if (param_1 != 0) {
    func_0x000107c3141c();
    iVar1 = (int)param_1;
    if (iVar1 != 0) {
      func_0x000107c3445c();
      func_0x000107c344a8();
      func_0x000107c313dc();
      func_0x000107c344b8(unaff_x21 + 0x18);
      func_0x000107c2879c();
      func_0x000107c34464(unaff_x21 + 0x30);
      func_0x000107c2879c();
      func_0x00010887c434(auStack_118);
      func_0x000107c313e0();
      func_0x000107c345c4();
      func_0x000107c313d8();
      iStack_100 = iVar1;
      func_0x000107c345c0(auStack_f8);
      func_0x000107c28990();
      func_0x000107c34778(auStack_d8);
      FUN_10865fa68();
      func_0x000107c34770(auStack_c0);
      func_0x0001073a755c();
      func_0x000107c3476c();
      func_0x000107c313d8();
      iStack_a0 = iVar1;
      func_0x000107c34774();
      func_0x000107c313d8();
      iStack_9c = iVar1;
      func_0x000107c2893c(auStack_98);
      func_0x000107c313d8();
      func_0x0001073a755c(auStack_70);
      if (*(char *)(unaff_x19 + 0x118) == '\x01') {
        func_0x00010887c3e4();
        FUN_1087e0968();
      }
      else {
        func_0x00010887c3e4();
        func_0x0001087e0a1c();
      }
      FUN_1087dc1e8(auStack_160);
      return;
    }
  }
  lVar2 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0x118) == '\x01') {
    FUN_1087dc1e8();
    *(undefined1 *)(lVar2 + 0x110) = 0;
  }
  return;
}



/* Entry: 108878140; end: 1088781e7;  */

long FUN_108878140(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_1088781b4;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_1088781b4:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  FUN_108876a70();
  func_0x000107c343c0();
  func_0x000108878274();
  return param_1;
}



/* Entry: 1088781e8; end: 10887823f;  */

void FUN_1088781e8(void)

{
  func_0x000107c343c4();
  FUN_108876a70();
  func_0x000107c343c0();
  func_0x000108878274();
  return;
}



/* Entry: 108878240; end: 108878243;  */

undefined8 * FUN_108878240(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878244; end: 108878257;  */

void FUN_108878244(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108878258; end: 108878297;  */

void FUN_108878258(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878298; end: 1088782c7;  */

void FUN_108878298(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0xd0) = 0;
  FUN_1088782c8();
  return;
}



/* Entry: 1088782c8; end: 10887841f;  */

void FUN_1088782c8(long param_1)

{
  long lVar1;
  long unaff_x19;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  
  func_0x000107c3447c();
  if ((param_1 != 0) && (func_0x000107c3141c(), (int)param_1 != 0)) {
    func_0x000107c3445c();
    func_0x000107c345d8(auStack_108);
    func_0x000107c344b8(auStack_f0);
    func_0x000107c2879c();
    func_0x000107c34464();
    func_0x000107c313d8();
    uStack_d8 = (undefined4)param_1;
    func_0x000107c344e8();
    uStack_d4 = (undefined4)param_1;
    func_0x000107c345c4(auStack_d0);
    func_0x000107c2893c();
    func_0x000107c345c0(auStack_b0);
    func_0x000107c28210();
    func_0x000107c34778();
    func_0x000107c313d8();
    lStack_90 = param_1;
    func_0x000107c34770();
    func_0x000107c313d8();
    lStack_88 = param_1;
    func_0x000107c3476c(auStack_80);
    func_0x0001073a755c();
    func_0x000107c34774(auStack_60);
    func_0x0001073a755c();
    if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
      func_0x000107c34588();
      FUN_1087e00c8();
    }
    else {
      func_0x000107c34588();
      func_0x0001087e0150();
    }
    func_0x0001087dc244(auStack_108);
    return;
  }
  lVar1 = unaff_x19 + 8;
  if (*(char *)(unaff_x19 + 0xd0) == '\x01') {
    func_0x0001087dc244();
    *(undefined1 *)(lVar1 + 200) = 0;
  }
  return;
}



/* Entry: 108878420; end: 1088784c7;  */

long FUN_108878420(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_108878494;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_108878494:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108878554();
  return param_1;
}



/* Entry: 1088784c8; end: 10887851f;  */

void FUN_1088784c8(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x000108878554();
  return;
}



/* Entry: 108878520; end: 108878523;  */

undefined8 * FUN_108878520(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878524; end: 108878537;  */

void FUN_108878524(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108878538; end: 108878577;  */

void FUN_108878538(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878578; end: 1088785a7;  */

void FUN_108878578(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x28) = 0;
  FUN_10879ed48();
  return;
}



/* Entry: 1088785a8; end: 10887864f;  */

long FUN_1088785a8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x10;
  long unaff_x20;
  
  func_0x000107c34168();
  func_0x000107c34414();
  do {
    func_0x000107c34410();
    if ((bool)in_ZR) {
      func_0x000107c343e4();
      func_0x000107c3440c();
      func_0x000107c343e8();
      func_0x000107c34418();
      func_0x000107c343e0();
      func_0x000107c343d8();
      func_0x000107c341c8();
      func_0x000107c34164();
      goto LAB_10887861c;
    }
    func_0x000107c34404();
  } while (extraout_x10 != 0);
  func_0x000107c3441c();
  if (!(bool)in_ZR) {
    func_0x000107c3416c();
  }
LAB_10887861c:
  func_0x000107c341c4();
  func_0x000107c3418c();
  if ((bool)in_ZR) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x000107c343a8();
  func_0x00010887be28();
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x0001088786dc();
  return param_1;
}



/* Entry: 108878650; end: 1088786a7;  */

void FUN_108878650(void)

{
  func_0x000107c343c4();
  func_0x000107c28214();
  func_0x000107c343c0();
  func_0x0001088786dc();
  return;
}



/* Entry: 1088786a8; end: 1088786ab;  */

undefined8 * FUN_1088786a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088786ac; end: 1088786bf;  */

void FUN_1088786ac(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088786c0; end: 1088786ff;  */

void FUN_1088786c0(void)

{
  func_0x000107c341c0();
  func_0x000107c34400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)();
  return;
}



/* Entry: 108878700; end: 10887872f;  */

void FUN_108878700(long param_1)

{
  func_0x000107c34174();
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_10879ea90();
  return;
}



/* Entry: 108878730; end: 108878787;  */

void FUN_108878730(void)

{
  func_0x000107c343c4();
  func_0x000107c2822c();
  func_0x000107c343c0();
  func_0x000108877760();
  return;
}



/* Entry: 108878788; end: 1088787df;  */

void FUN_108878788(void)

{
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c343c0();
  func_0x000108877760();
  return;
}



/* Entry: 1088787e0; end: 108878833;  */

void FUN_1088787e0(void)

{
  func_0x000107c343c4();
  func_0x000107c287b0();
  func_0x000107c34320();
  return;
}



/* Entry: 108878834; end: 108878837;  */

undefined8 * FUN_108878834(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 108878838; end: 10887884b;  */

void FUN_108878838(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10887884c; end: 108878857;  */

void FUN_10887884c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001006929e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 108878858; end: 1088788cf;  */

void FUN_108878858(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  long unaff_x19;
  
  uVar5 = (undefined4)((ulong)param_1 >> 0x20);
  iVar4 = (int)param_1;
  func_0x000107c3447c();
  if ((CONCAT44(uVar5,iVar4) == 0) || (func_0x000107c3141c(), iVar4 == 0)) {
    if (*(char *)(unaff_x19 + 0x20) == '\x01') {
      *(undefined1 *)(unaff_x19 + 0x20) = 0;
    }
  }
  else {
    func_0x000107c3445c();
    func_0x000107c3450c();
    uVar1 = CONCAT44(uVar5,iVar4);
    func_0x00010887bde4();
    uVar2 = CONCAT44(uVar5,iVar4);
    func_0x000107c34464();
    uVar3 = (undefined1)iVar4;
    func_0x000107c287bc();
    *(undefined8 *)(unaff_x19 + 8) = uVar1;
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    *(undefined1 *)(unaff_x19 + 0x18) = uVar3;
    if ((*(byte *)(unaff_x19 + 0x20) & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x20) = 1;
    }
  }
  return;
}



/* Entry: 1088788d0; end: 1088788db;  */

long * FUN_1088788d0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  
  func_0x00010887be1c();
  func_0x000107c344b4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x18;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 0x18);
    __Znwm(plVar1);
  }
  func_0x00010887c2a8(0x18);
  return plVar1;
}



/* Entry: 1088788dc; end: 108878937;  */

long * FUN_1088788dc(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong unaff_x20;
  
  func_0x000107c344b4();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < unaff_x20) {
      func_0x000104bd35f4();
      lVar2 = param_1[2];
      while (lVar2 != param_1[1]) {
        lVar2 = lVar2 + -0x18;
        param_1[2] = lVar2;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    plVar1 = (long *)(unaff_x20 * 0x18);
    __Znwm(plVar1);
  }
  func_0x00010887c2a8(0x18);
  return plVar1;
}



/* Entry: 108878938; end: 108878977;  */

long * FUN_108878938(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x18;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108878978; end: 10887899b;  */

void FUN_108878978(void)

{
  func_0x00010887c998();
  func_0x000107c31408();
  return;
}



/* Entry: 10887899c; end: 10887899f;  */

undefined8 * FUN_10887899c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d99f30;
  func_0x00010054c334();
  func_0x000107c60ca0(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  return param_1;
}



/* Entry: 1088789a0; end: 1088789b3;  */

void FUN_1088789a0(void)

{
  func_0x000107c31400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1088789b4; end: 1088789df;  */

void FUN_1088789b4(int param_1)

{
  func_0x00010887b678();
  FUN_108873b10();
  func_0x00010887bad4();
  func_0x000107c287ac();
  func_0x00010887bae4();
  func_0x0001005edd44();
  func_0x000107c6132c();
  if (param_1 != 0) {
    func_0x000107c3a4f8();
    func_0x000107c3a50c();
    func_0x000107c3a520();
    func_0x0001003a91d4(&UNK_10f82fa21);
    func_0x000107c3a500();
    func_0x000107c3a4f0();
    func_0x000107c3a4fc();
    func_0x000107c3a504();
  }
  return;
}



/* Entry: 1088789e0; end: 108878a13;  */

void FUN_1088789e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_108873b64(param_1,2,param_4,param_5);
  func_0x00010887bfd8();
  func_0x00010887b890();
  func_0x000107c343fc();
  func_0x00010887bba4();
  FUN_108878a60();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Entry: 108878a14; end: 108878a5f;  */

void FUN_108878a14(void)

{
  func_0x00010887b890();
  func_0x000107c343fc();
  func_0x00010887bba4();
  FUN_108878a60();
  func_0x000107c343f8();
  func_0x000107c343b0();
  func_0x000107c343cc();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10461eeb0; end: 10461eec3;  */

void FUN_10461eeb0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461eec4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_101568c04)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461eec4; end: 10461ef03;  */

void FUN_10461eec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd208c8;
  _swift_getWitnessTable(&UNK_10dd208c8,&UNK_110790c80);
  puRam0000000113089e70 = puVar1;
  return;
}



/* Entry: 10461ef04; end: 10461ef07;  */

void FUN_10461ef04(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20908;
  _swift_getWitnessTable(&UNK_10dd20908,&UNK_110790c80);
  puRam0000000113089e78 = puVar1;
  return;
}



/* Entry: 10461ef08; end: 10461ef47;  */

void FUN_10461ef08(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20908;
  _swift_getWitnessTable(&UNK_10dd20908,&UNK_110790c80);
  puRam0000000113089e78 = puVar1;
  return;
}



/* Entry: 10461ef48; end: 10461ef6b;  */

void FUN_10461ef48(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461ef6c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10461ef6c; end: 10461efab;  */

void FUN_10461ef6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20978;
  _swift_getWitnessTable(&UNK_10dd20978,&UNK_110790d00);
  puRam0000000113089e80 = puVar1;
  return;
}



/* Entry: 10461efac; end: 10461efbf;  */

void FUN_10461efac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10461eff0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1045622dc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461efc0; end: 10461efef;  */

void FUN_10461efc0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10461eff0; end: 10461f02f;  */

void FUN_10461eff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd209a0;
  _swift_getWitnessTable(&UNK_10dd209a0,&UNK_110790d00);
  puRam0000000113089e88 = puVar1;
  return;
}



/* Entry: 10461f030; end: 10461f033;  */

void FUN_10461f030(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd209e0;
  _swift_getWitnessTable(&UNK_10dd209e0,&UNK_110790d00);
  puRam0000000113089e90 = puVar1;
  return;
}



/* Entry: 10461f034; end: 10461f073;  */

void FUN_10461f034(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd209e0;
  _swift_getWitnessTable(&UNK_10dd209e0,&UNK_110790d00);
  puRam0000000113089e90 = puVar1;
  return;
}



/* Entry: 10461f074; end: 10461f0bf;  */

undefined8 * FUN_10461f074(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 10461f0c0; end: 10461f0ff;  */

undefined8 * FUN_10461f0c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f100; end: 10461f10f;  */

undefined1  [16] FUN_10461f100(void)

{
  return ZEXT816(0x110790900);
}



/* Entry: 10461f110; end: 10461f15b;  */

undefined4 * FUN_10461f110(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 2);
  uVar4 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 10461f15c; end: 10461f19b;  */

undefined4 * FUN_10461f15c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f19c; end: 10461f1bb;  */

undefined1  [16] FUN_10461f19c(void)

{
  return ZEXT816(0x110790980);
}



/* Entry: 10461f1bc; end: 10461f24b;  */

undefined8 * FUN_10461f1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 10461f24c; end: 10461f28b;  */

undefined8 * FUN_10461f24c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2[2];
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f28c; end: 10461f2ab;  */

undefined1  [16] FUN_10461f28c(void)

{
  return ZEXT816(0x110790a80);
}



/* Entry: 10461f2ac; end: 10461f33b;  */

undefined4 * FUN_10461f2ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 10461f33c; end: 10461f37b;  */

undefined4 * FUN_10461f33c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f37c; end: 10461f42f;  */

int FUN_10461f37c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10461f430; end: 10461f4bf;  */

undefined1 * FUN_10461f430(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return param_1;
}



/* Entry: 10461f4c0; end: 10461f4ff;  */

undefined1 * FUN_10461f4c0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f500; end: 10461f5a7;  */

int FUN_10461f500(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x18] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10461f5a8; end: 10461f5cf;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10461f5a8(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10461f5d0; end: 10461f67f;  */

undefined8 * FUN_10461f5d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10461f680; end: 10461f6c3;  */

undefined8 * FUN_10461f680(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f6c4; end: 10461f75b;  */

int FUN_10461f6c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10461f75c; end: 10461f787;  */

/* WARNING: Possible PIC construction at 0x00010461f774: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010461f778) */

void FUN_10461f75c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10461f788; end: 10461f83f;  */

undefined8 * FUN_10461f788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10461f840; end: 10461f887;  */

undefined8 * FUN_10461f840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10461f888; end: 10461fa9b;  */

int FUN_10461f888(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10461fa9c; end: 10461fb47;  */

void FUN_10461fa9c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10461fb48; end: 10461fb6f;  */

void FUN_10461fb48(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 10461fb70; end: 10461fbaf;  */

void FUN_10461fb70(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113089ee0;
  func_0x0001000285a8(0x113089ee0,&UNK_10dd20b90);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 10461fbb0; end: 10461fcaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10461fbb0(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lStack_48;
  
  if (lRam000000011365fb40 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0xd00000000000001b;
    uVar4 = (undefined1)*(undefined8 *)(lRam000000011365fb40 + _DAT_113089ee8);
    if (param_2 == 0) {
      pcVar3 = "HELIOS_IOS_SIG_DIALOG_BUTTONS";
      uVar5 = 0xd00000000000001d;
    }
    else {
      if (param_2 != 1) {
        lStack_48 = param_2;
        _objc_retain();
        __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                  (&UNK_110790e80,&lStack_48,&UNK_110790e80,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10461fcb0);
        (*pcVar1)();
      }
      pcVar3 = "HELIOS_IOS_MEMORIES_BUTTONS";
    }
    lVar2 = lRam000000011365fb40;
    _objc_retain();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar5,(ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    _swift_bridgeObjectRelease((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    func_0x00010bf1f440();
    _objc_release(lVar2);
    _objc_release(uVar5);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10461fcb0; end: 10461fcd7;  */

void FUN_10461fcb0(void)

{
  long unaff_x20;
  
  FUN_10461fbb0(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10461fcd8; end: 10461fd6b; +[SCHeliosFeatureGate isEnabledForCurrentApplicationWithConfigKey:] */

undefined1 FUN_10461fcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  if (lRam000000011365f930 != -1) {
    _swift_once(0x11365f930,&UNK_1009d5a14);
  }
  _swift_getObjCClassMetadata();
  uStack_50 = param_1;
  uStack_48 = param_3;
  __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
            (&uStack_31,FUN_10461ffa8,auStack_60,PTR___sSbN_11034dd40);
  return uStack_31;
}



/* Entry: 10461fd6c; end: 10461fed7; +[SCHeliosFeatureGate configureForCurrentApplicationWithCircumstanceEngine:] */

void FUN_10461fd6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  _swift_getObjCClassMetadata();
  lVar1 = lRam000000011365f930;
  _swift_unknownObjectRetain(param_3);
  if (lVar1 != -1) {
    _swift_once(0x11365f930,&UNK_1009d5a14);
  }
  uVar2 = uRam000000011365f938;
  puVar4 = &UNK_110790ea0;
  _swift_allocObject(&UNK_110790ea0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  puVar5 = &UNK_110790ec8;
  _swift_allocObject(&UNK_110790ec8,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10461ffbc;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_50 = 0x10461ffc4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_10006eb60;
  puStack_58 = &UNK_110790ee0;
  puStack_48 = puVar5;
  __Block_copy(&puStack_70);
  puVar7 = puStack_48;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(puVar5);
  _swift_release(puVar7);
  func_0x00010006eaa4(uVar2,ppuVar6);
  __Block_release(ppuVar6);
  puVar7 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x3e,0x33,0x23,1);
  _swift_unknownObjectRelease(param_3);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if (((ulong)puVar7 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10461fed8);
  (*pcVar3)();
}



/* Entry: 10461fed8; end: 10461ff0b;  */

void FUN_10461fed8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10461ff0c; end: 10461ff1f; -[SCHeliosFeatureGate .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10461ff0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113089ee8));
  return;
}



/* Entry: 10461ff20; end: 10461ff93;  */

void FUN_10461ff20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113089ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20b98;
  _swift_getWitnessTable(&UNK_10dd20b98,&UNK_110790e80);
  puRam0000000113089ef0 = puVar1;
  return;
}



/* Entry: 10461ff94; end: 10461ffa7;  */

undefined1  [16] FUN_10461ff94(void)

{
  return ZEXT816(0x110790e80);
}



/* Entry: 10461ffa8; end: 10461ffbb;  */

void FUN_10461ffa8(void)

{
  FUN_10461fcb0();
  return;
}



/* Entry: 10461ffbc; end: 10461ffdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10461ffbc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar6 = &lStack_30;
  lVar4 = lVar3;
  func_0x0001009d58a0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(long *)(lVar5 + _DAT_113089ee8) = lVar3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar5;
  lStack_28 = lVar4;
  func_0x000107c615f0(lVar3);
  func_0x000107c61154(&lStack_30,puVar1);
  uVar2 = puRam000000011365fb40;
  puRam000000011365fb40 = (undefined1 *)plVar6;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10461ffdc; end: 1046200c7;  */

void FUN_10461ffdc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046200c8; end: 104620427;  */

undefined8 * FUN_1046200c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 in_CY;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong unaff_x26;
  ulong unaff_x27;
  char *unaff_x28;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  undefined8 uVar21;
  undefined8 unaff_d10;
  char *in_stack_00000038;
  undefined8 in_stack_00000040;
  char *in_stack_00000048;
  undefined8 in_stack_00000050;
  char *in_stack_00000058;
  undefined8 *in_stack_000000e0;
  undefined8 in_stack_000000e8;
  
  puVar19 = (undefined8 *)&stack0xfffffffffffffff0;
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  uVar15 = 0xd000000000000010;
  pcVar11 = "AvenirNextW1G-Demi";
  pcVar20 = (char *)0x404a000000000000;
  uVar21 = 0x4046000000000000;
  pcVar10 = (char *)((ulong)param_2 & 0xff);
  puVar5 = puVar4;
  puVar6 = param_2;
  puVar12 = (undefined8 *)PTR__UIFontTextStyleLargeTitle_110345c08;
  ppuVar13 = (undefined **)PTR__UIFontTextStyleLargeTitle_110345c08;
  puVar9 = PTR__UIFontWeightMedium_110345c38;
  puVar14 = (undefined8 *)PTR__UIFontWeightMedium_110345c38;
  puVar2 = (undefined8 *)0xd000000000000012;
  puVar18 = puVar19;
  switch(pcVar10) {
  case (char *)0x0:
    goto code_r0x0001046203dc;
  default:
    ppuVar13 = &PTR_DAT_110345000;
  case (char *)0x30:
  case (char *)0x3e:
  case (char *)0x7e:
  case (char *)0xbe:
    puVar12 = (undefined8 *)ppuVar13[0x183];
code_r0x000104620168:
code_r0x00010462016c:
code_r0x000104620170:
    pcVar10 = (char *)0x4046000000000000;
code_r0x000104620174:
    uVar21 = 0x4042000000000000;
    pcVar20 = pcVar10;
    goto code_r0x0001046203dc;
  case (char *)0x2:
    uVar21 = 0x403c000000000000;
  case (char *)0xd2:
  case (char *)0xfe:
    pcVar10 = (char *)0x4042000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle2_110345c20;
code_r0x000104620280:
    pcVar20 = pcVar10;
    goto code_r0x0001046203dc;
  case (char *)0x3:
    pcVar10 = "AvenirNextW1G-Demi";
  case (char *)0x44:
    pcVar11 = pcVar10 + -0x20;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle1_110345c18;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
code_r0x0001046202a4:
    uVar21 = 0x403c000000000000;
code_r0x0001046202a8:
code_r0x0001046202ac:
code_r0x0001046202b0:
    pcVar20 = (char *)0x4042000000000000;
    break;
  case (char *)0x4:
    pcVar11 = "AvenirNextW1G-Medium";
    uVar21 = 0x4038000000000000;
    pcVar20 = (char *)0x4040000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle2_110345c20;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
    break;
  case (char *)0x5:
    pcVar10 = "AvenirNextW1G-Demi";
  case (char *)0xcd:
  case (char *)0xdc:
  case (char *)0xe1:
  case (char *)0xe8:
  case (char *)0xf1:
  case (char *)0xf6:
  case (char *)0xfd:
    pcVar11 = pcVar10 + -0x20;
    pcVar20 = (char *)0x403c000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle3_110345c28;
code_r0x000104620304:
    uVar21 = 0x4034000000000000;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
code_r0x000104620310:
code_r0x000104620318:
    break;
  case (char *)0x6:
    pcVar11 = "AvenirNextW1G-Medium";
    pcVar20 = (char *)0x403c000000000000;
    uVar21 = 0x4036000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle2_110345c20;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
    break;
  case (char *)0x7:
    pcVar11 = "AvenirNextW1G-Medium";
    pcVar20 = (char *)0x4038000000000000;
    uVar21 = 0x4030000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleTitle3_110345c28;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
    break;
  case (char *)0x8:
    pcVar10 = "Duration";
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0xc6:
    pcVar11 = pcVar10 + 0x920;
code_r0x0001046203b4:
    pcVar20 = (char *)0x4034000000000000;
    uVar21 = 0x402c000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleHeadline_110345c00;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
    break;
  case (char *)0x9:
    pcVar11 = "AvenirNextW1G-Medium";
    pcVar20 = (char *)0x4038000000000000;
    uVar21 = 0x4032000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
    break;
  case (char *)0xa:
    pcVar11 = "AvenirNextW1G-Medium";
    pcVar20 = (char *)0x4038000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleBody_110345bd8;
  case (char *)0x84:
    uVar21 = 0x4030000000000000;
    puVar14 = (undefined8 *)PTR__UIFontWeightSemibold_110345c48;
code_r0x00010462039c:
code_r0x0001046203a0:
    break;
  case (char *)0xb:
    pcVar11 = "feature-gate.application";
    uVar15 = 0xd000000000000014;
    pcVar20 = (char *)0x4034000000000000;
    uVar21 = 0x402c000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleSubheadline_110345c10;
  case (char *)0x10:
    goto code_r0x0001046203dc;
  case (char *)0xc:
    pcVar11 = "feature-gate.application";
    uVar15 = 0xd000000000000014;
    pcVar20 = (char *)0x4030000000000000;
    uVar21 = 0x4028000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleFootnote_110345bf8;
    goto code_r0x0001046203dc;
  case (char *)0xd:
  case (char *)0xd0:
  case (char *)0xd3:
  case (char *)0xd7:
  case (char *)0xdf:
  case (char *)0xf4:
  case (char *)0xff:
    pcVar11 = "feature-gate.application";
  case (char *)0xd6:
    uVar15 = 0xd000000000000014;
code_r0x00010462032c:
    pcVar20 = (char *)0x4030000000000000;
code_r0x000104620330:
    uVar21 = 0x4028000000000000;
    puVar12 = (undefined8 *)PTR__UIFontTextStyleFootnote_110345bf8;
code_r0x000104620340:
code_r0x000104620344:
    goto code_r0x0001046203dc;
  case (char *)0xe:
  case (char *)0x8c:
    pcVar11 = "feature-gate.application";
  case (char *)0x14:
    uVar15 = 0xd000000000000014;
    pcVar20 = (char *)0x4028000000000000;
    uVar21 = 0x4024000000000000;
    ppuVar13 = &PTR_DAT_110345000;
code_r0x0001046201a0:
    puVar12 = (undefined8 *)ppuVar13[0x17e];
    goto code_r0x0001046203dc;
  case (char *)0x11:
    goto code_r0x00010462043c;
  case (char *)0x12:
  case (char *)0x62:
  case (char *)0x8a:
  case (char *)0xaa:
  case (char *)0xb2:
    goto code_r0x000104620498;
  case (char *)0x20:
    goto code_r0x0001046204e4;
  case (char *)0x21:
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x58:
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x91:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xb5:
    goto code_r0x000104620170;
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x92:
  case (char *)0xa6:
  case (char *)0xa8:
  case (char *)0xae:
  case (char *)0xb6:
    goto code_r0x0001046203fc;
  case (char *)0x23:
  case (char *)0x37:
  case (char *)0x4b:
  case (char *)0x5f:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0x93:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xb7:
    goto code_r0x000104620168;
  case (char *)0x25:
    goto code_r0x0001046202a8;
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0x96:
    goto code_r0x00010462041c;
  case (char *)0x2e:
  case (char *)0x56:
  case (char *)0x9e:
  case (char *)0xa0:
    goto code_r0x00010462016c;
  case (char *)0x34:
    goto LAB_1046204b4;
  case (char *)0x38:
    goto code_r0x0001046204a0;
  case (char *)0x39:
  case (char *)0x69:
  case (char *)0x71:
    goto code_r0x000104620528;
  case (char *)0x3a:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0xba:
    goto code_r0x00010462039c;
  case (char *)0x3b:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0xbb:
    goto code_r0x000104620538;
  case (char *)0x45:
  case (char *)0x85:
  case (char *)0xc5:
    goto code_r0x000104620518;
  case (char *)0x47:
  case (char *)0x87:
  case (char *)0xc7:
    goto code_r0x000104620174;
  case (char *)0x48:
    goto code_r0x000104620484;
  case (char *)0x4c:
    goto code_r0x0001046204c0;
  case (char *)0x4d:
  case (char *)0x95:
    goto code_r0x0001046202a4;
  case (char *)0x5c:
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
    goto code_r0x000104620454;
  case (char *)0x60:
    goto code_r0x0001046204d4;
  case (char *)0x61:
  case (char *)0x89:
  case (char *)0xa9:
  case (char *)0xb1:
    goto code_r0x000104620438;
  case (char *)0x68:
code_r0x000104620438:
code_r0x00010462043c:
    in_stack_000000e8 = 0x10462010c;
    puVar18 = &stack0x000000e0;
    param_1 = puVar4;
    in_stack_000000e0 = puVar19;
code_r0x000104620450:
    FUN_10462fe54();
code_r0x000104620454:
    FUN_1046200c8(&stack0x00000038,param_1);
    pcVar20 = in_stack_00000058;
    pcVar11 = in_stack_00000038;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(in_stack_00000038,in_stack_00000040);
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___UIFont_1126aec38;
    _objc_opt_self();
    param_1 = puVar4;
    puVar19 = puVar18;
code_r0x000104620484:
    func_0x00010bfb41a0(pcVar20);
code_r0x000104620490:
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
code_r0x000104620498:
    _objc_release(pcVar11);
code_r0x0001046204a0:
    if (puVar6 == (undefined8 *)0x0) {
LAB_1046204b4:
      puVar19[-0xe] = in_stack_00000048;
      unaff_x26 = *(ulong *)(in_stack_00000048 + 0x10);
      pcVar11 = in_stack_00000048;
code_r0x0001046204c0:
      _swift_bridgeObjectRetain(pcVar11);
      puVar6 = param_1;
      if (unaff_x26 != 0) {
        unaff_x27 = 0;
        unaff_x28 = pcVar11 + 0x28;
code_r0x0001046204d4:
        param_2 = (undefined8 *)PTR___sSSN_11034da80;
        do {
          in_CY = *(ulong *)(pcVar11 + 0x10) <= unaff_x27;
code_r0x0001046204e4:
          if ((bool)in_CY) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1046207c0);
            (*pcVar3)();
          }
          uVar15 = *(undefined8 *)(unaff_x28 + -8);
          puVar9 = *(undefined **)unaff_x28;
          _swift_bridgeObjectRetain(puVar9);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar15,puVar9);
          puVar4 = param_1;
          func_0x00010bfb3f40();
          _objc_retainAutoreleasedReturnValue();
code_r0x000104620518:
          puVar2 = puVar4;
code_r0x000104620520:
          puVar4 = puVar2;
          _objc_release();
code_r0x000104620528:
code_r0x00010462052c:
          __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
          puVar12 = puVar4;
code_r0x000104620538:
          _objc_release();
          lVar16 = puVar12[2];
          _swift_bridgeObjectRelease(puVar12);
          if (lVar16 != 0) {
            lVar16 = 0x11308a548;
            func_0x0001000285a8(0x11308a548,&UNK_10dd21158);
            _swift_initStackObject();
            puVar1 = PTR__UIFontDescriptorFamilyAttribute_110345bc0;
            *(undefined8 *)(lVar16 + 0x18) = 4;
            *(undefined8 *)(lVar16 + 0x10) = 2;
            uVar17 = *(undefined8 *)puVar1;
            *(undefined8 *)(lVar16 + 0x20) = uVar17;
            *(undefined8 *)(lVar16 + 0x28) = uVar15;
            *(undefined **)(lVar16 + 0x30) = puVar9;
            uVar15 = *(undefined8 *)PTR__UIFontDescriptorTraitsAttribute_110345bd0;
            *(undefined8 **)(lVar16 + 0x40) = param_2;
            *(undefined8 *)(lVar16 + 0x48) = uVar15;
            lVar7 = 0x11308a550;
            func_0x0001000285a8(0x11308a550,&UNK_10dd21160);
            _swift_initStackObject();
            *(undefined8 *)(lVar7 + 0x18) = 2;
            *(undefined8 *)(lVar7 + 0x10) = 1;
            uVar21 = *(undefined8 *)PTR__UIFontWeightTrait_110345c50;
            *(undefined8 *)(lVar7 + 0x20) = uVar21;
            *(undefined8 *)(lVar7 + 0x28) = in_stack_00000050;
            _objc_retain(uVar17);
            _objc_retain(uVar15);
            _objc_retain(uVar21);
            lVar8 = lVar7;
            FUN_10462a474();
            _swift_setDeallocating(lVar7);
            FUN_10462142c((undefined8 *)(lVar7 + 0x20),0x11308a558,&UNK_10dd21168);
            uVar15 = 0x11308a560;
            func_0x0001000285a8(0x11308a560,&UNK_10dd21170);
            *(undefined8 *)(lVar16 + 0x68) = uVar15;
            *(long *)(lVar16 + 0x50) = lVar8;
            lVar7 = lVar16;
            FUN_10462a55c(lVar16);
            _swift_setDeallocating(lVar16);
            uVar15 = 0x11308a568;
            func_0x0001000285a8(0x11308a568,&UNK_10dd21178);
            _swift_arrayDestroy((undefined8 *)(lVar16 + 0x20),2,uVar15);
            puVar9 = PTR__OBJC_CLASS___UIFontDescriptor_1126bb390;
            _objc_allocWithZone(PTR__OBJC_CLASS___UIFontDescriptor_1126bb390);
            uVar21 = 0;
            FUN_104621418(0);
            uVar15 = 0x11308a570;
            FUN_1046210f8(0x11308a570,FUN_104621418,&UNK_10dd21450);
            lVar16 = lVar7;
            __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                      (lVar7,uVar21,PTR___sypN_11034f1a8 + 8,uVar15);
            _swift_bridgeObjectRelease(lVar7);
            func_0x00010c013b00(puVar9);
            _objc_release(lVar16);
            func_0x00010bfb4160(pcVar20,param_1);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar9);
            FUN_1046207c0(&stack0x00000038);
            FUN_10462142c(puVar19 + -0xe,0x112d38270,&UNK_10d905a20);
            return param_1;
          }
          _swift_bridgeObjectRelease(puVar9);
          unaff_x27 = unaff_x27 + 1;
          unaff_x28 = unaff_x28 + 0x10;
          puVar6 = param_1;
        } while (unaff_x26 != unaff_x27);
      }
      FUN_10462142c(puVar19 + -0xe,0x112d38270,&UNK_10d905a20);
      func_0x00010c266f60(pcVar20,in_stack_00000050,puVar6);
      _objc_retainAutoreleasedReturnValue();
      FUN_1046207c0(&stack0x00000038);
    }
    else {
      FUN_1046207c0(&stack0x00000038);
    }
    return puVar6;
  case (char *)0x70:
    goto code_r0x000104620520;
  case (char *)0x78:
  case (char *)0xb8:
    goto code_r0x0001046201a0;
  case (char *)0x79:
  case (char *)0xb9:
    goto code_r0x00010462052c;
  case (char *)0x88:
    goto code_r0x000104620450;
  case (char *)0x90:
    goto code_r0x000104620404;
  case (char *)0x94:
    goto code_r0x0001046203a0;
  case (char *)0xa4:
  case (char *)0xac:
  case (char *)0xb4:
    break;
  case (char *)0xb0:
    goto code_r0x0001046203b4;
  case (char *)0xc4:
    goto code_r0x000104620490;
  case (char *)0xcc:
  case (char *)0xdb:
  case (char *)0xf0:
    goto code_r0x000104620280;
  case (char *)0xce:
  case (char *)0xd8:
  case (char *)0xdd:
  case (char *)0xe7:
  case (char *)0xf2:
  case (char *)0xfc:
    goto code_r0x000104620310;
  case (char *)0xcf:
  case (char *)0xde:
  case (char *)0xf3:
    goto code_r0x000104620304;
  case (char *)0xd1:
  case (char *)0xd9:
    goto code_r0x00010462032c;
  case (char *)0xd4:
    goto code_r0x000104620318;
  case (char *)0xd5:
  case (char *)0xe3:
  case (char *)0xe5:
  case (char *)0xf8:
  case (char *)0xfa:
    goto code_r0x000104620330;
  case (char *)0xe0:
  case (char *)0xf5:
    goto code_r0x0001046202b0;
  case (char *)0xe2:
  case (char *)0xf7:
    goto code_r0x000104620340;
  case (char *)0xe4:
  case (char *)0xf9:
    goto code_r0x0001046202ac;
  case (char *)0xe6:
  case (char *)0xfb:
    goto code_r0x000104620344;
  }
  uVar15 = 0xd000000000000012;
code_r0x0001046203dc:
  _swift_initStaticObject();
  unaff_d10 = *puVar14;
  puVar5 = (undefined8 *)*puVar12;
  _objc_retain();
  *param_1 = uVar15;
  param_1[1] = (ulong)pcVar11 | 0x8000000000000000;
  param_1[2] = puVar4;
code_r0x0001046203fc:
  param_1[3] = unaff_d10;
  param_1[4] = uVar21;
  param_1[5] = pcVar20;
code_r0x000104620404:
  param_1[6] = puVar5;
code_r0x00010462041c:
  return puVar5;
}



/* Entry: 104620428; end: 1046207bf;  */

undefined * FUN_104620428(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long alStack_80 [2];
  
  FUN_10462fe54();
  FUN_1046200c8(&uStack_b8,param_1);
  uVar8 = uStack_b8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_b8,uStack_b0);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_self();
  puVar3 = puVar2;
  func_0x00010bfb41a0(uStack_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (puVar3 == (undefined *)0x0) {
    alStack_80[0] = lStack_a8;
    uVar12 = *(ulong *)(lStack_a8 + 0x10);
    _swift_bridgeObjectRetain(lStack_a8);
    puVar3 = PTR___sSSN_11034da80;
    if (uVar12 != 0) {
      uVar13 = 0;
      puVar14 = (undefined8 *)(lStack_a8 + 0x28);
      do {
        if (*(ulong *)(lStack_a8 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1046207c0);
          (*pcVar1)();
        }
        uVar8 = puVar14[-1];
        uVar9 = *puVar14;
        _swift_bridgeObjectRetain(uVar9);
        uVar11 = uVar8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar8,uVar9);
        puVar4 = puVar2;
        func_0x00010bfb3f40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        puVar5 = puVar4;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar4,puVar3)
        ;
        _objc_release(puVar4);
        lVar10 = *(long *)(puVar5 + 0x10);
        _swift_bridgeObjectRelease(puVar5);
        if (lVar10 != 0) {
          lVar10 = 0x11308a548;
          func_0x0001000285a8(0x11308a548,&UNK_10dd21158);
          _swift_initStackObject();
          puVar4 = PTR__UIFontDescriptorFamilyAttribute_110345bc0;
          *(undefined8 *)(lVar10 + 0x18) = 4;
          *(undefined8 *)(lVar10 + 0x10) = 2;
          uVar11 = *(undefined8 *)puVar4;
          *(undefined8 *)(lVar10 + 0x20) = uVar11;
          *(undefined8 *)(lVar10 + 0x28) = uVar8;
          *(undefined8 *)(lVar10 + 0x30) = uVar9;
          uVar8 = *(undefined8 *)PTR__UIFontDescriptorTraitsAttribute_110345bd0;
          *(undefined **)(lVar10 + 0x40) = puVar3;
          *(undefined8 *)(lVar10 + 0x48) = uVar8;
          lVar6 = 0x11308a550;
          func_0x0001000285a8(0x11308a550,&UNK_10dd21160);
          _swift_initStackObject();
          *(undefined8 *)(lVar6 + 0x18) = 2;
          *(undefined8 *)(lVar6 + 0x10) = 1;
          uVar9 = *(undefined8 *)PTR__UIFontWeightTrait_110345c50;
          *(undefined8 *)(lVar6 + 0x20) = uVar9;
          *(undefined8 *)(lVar6 + 0x28) = uStack_a0;
          _objc_retain(uVar11);
          _objc_retain(uVar8);
          _objc_retain(uVar9);
          lVar7 = lVar6;
          FUN_10462a474();
          _swift_setDeallocating(lVar6);
          FUN_10462142c((undefined8 *)(lVar6 + 0x20),0x11308a558,&UNK_10dd21168);
          uVar8 = 0x11308a560;
          func_0x0001000285a8(0x11308a560,&UNK_10dd21170);
          *(undefined8 *)(lVar10 + 0x68) = uVar8;
          *(long *)(lVar10 + 0x50) = lVar7;
          lVar6 = lVar10;
          FUN_10462a55c(lVar10);
          _swift_setDeallocating(lVar10);
          uVar8 = 0x11308a568;
          func_0x0001000285a8(0x11308a568,&UNK_10dd21178);
          _swift_arrayDestroy((undefined8 *)(lVar10 + 0x20),2,uVar8);
          puVar3 = PTR__OBJC_CLASS___UIFontDescriptor_1126bb390;
          _objc_allocWithZone(PTR__OBJC_CLASS___UIFontDescriptor_1126bb390);
          uVar9 = 0;
          FUN_104621418(0);
          uVar8 = 0x11308a570;
          FUN_1046210f8(0x11308a570,FUN_104621418,&UNK_10dd21450);
          lVar10 = lVar6;
          __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                    (lVar6,uVar9,PTR___sypN_11034f1a8 + 8,uVar8);
          _swift_bridgeObjectRelease(lVar6);
          func_0x00010c013b00(puVar3);
          _objc_release(lVar10);
          func_0x00010bfb4160(uStack_98,puVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          FUN_1046207c0(&uStack_b8);
          FUN_10462142c(alStack_80,0x112d38270,&UNK_10d905a20);
          return puVar2;
        }
        _swift_bridgeObjectRelease(uVar9);
        uVar13 = uVar13 + 1;
        puVar14 = puVar14 + 2;
      } while (uVar12 != uVar13);
    }
    FUN_10462142c(alStack_80,0x112d38270,&UNK_10d905a20);
    func_0x00010c266f60(uStack_98,uStack_a0,puVar2);
    _objc_retainAutoreleasedReturnValue();
    FUN_1046207c0(&uStack_b8);
  }
  else {
    FUN_1046207c0(&uStack_b8);
    puVar2 = puVar3;
  }
  return puVar2;
}



/* Entry: 1046207c0; end: 1046207eb;  */

undefined8 FUN_1046207c0(undefined8 param_1)

{
  func_0x000104620a14(param_1,&UNK_1107910f8);
  return param_1;
}



/* Entry: 1046207ec; end: 1046207ef;  */

void FUN_1046207ec(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20ce0;
  _swift_getWitnessTable(&UNK_10dd20ce0,&UNK_110791080);
  puRam000000011308a4d0 = puVar1;
  return;
}



/* Entry: 1046207f0; end: 10462082f;  */

void FUN_1046207f0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd20ce0;
  _swift_getWitnessTable(&UNK_10dd20ce0,&UNK_110791080);
  puRam000000011308a4d0 = puVar1;
  return;
}



/* Entry: 104620830; end: 104620833;  */

void FUN_104620830(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308a4d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308a4e0;
  func_0x00010002969c(0x11308a4e0,&UNK_10dd20d48);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308a4d8 = puVar2;
  return;
}



/* Entry: 104620834; end: 104620883;  */

void FUN_104620834(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308a4d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308a4e0;
  func_0x00010002969c(0x11308a4e0,&UNK_10dd20d48);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308a4d8 = puVar2;
  return;
}



/* Entry: 104620884; end: 1046209e7;  */

int FUN_104620884(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf1 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xe) {
      iVar2 = 4;
    }
    if (param_2 + 0xe >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104620900;
        goto LAB_1046208e4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046208e4:
      return ((uint)*param_1 | uVar1 << 8) - 0xe;
    }
  }
LAB_104620900:
  iVar2 = *param_1 - 0xf;
  if (*param_1 < 0xf) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1046209e8; end: 104620a43;  */

long FUN_1046209e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104620a44; end: 104620b33;  */

undefined8 * FUN_104620a44(undefined8 *param_1,undefined8 *param_2)

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
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _objc_retain(uVar2);
  return param_1;
}



/* Entry: 104620b34; end: 104620b97;  */

undefined8 * FUN_104620b34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 104620b98; end: 104620c6b;  */

int FUN_104620b98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104620c6c; end: 104620d3b;  */

void FUN_104620c6c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  char cStack_28;
  
  uStack_30 = 0;
  cStack_28 = '\x01';
  __s12CoreGraphics7CGFloatV10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSNumberC_ACSgztFZ
            (param_1,&uStack_30);
  uVar1 = 0;
  if (cStack_28 != '\x01') {
    uVar1 = uStack_30;
  }
  *param_2 = uVar1;
  *(bool *)(param_2 + 1) = cStack_28 == '\x01';
  return;
}



/* Entry: 104620d3c; end: 104620e6b;  */

void FUN_104620d3c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_release(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  __sSS10FoundationE26_forceBridgeFromObjectiveC_6resultySo8NSStringC_SSSgztFZ(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_40,lStack_38);
    _swift_bridgeObjectRelease(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 104620e6c; end: 104620e87;  */

void FUN_104620e6c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 104620e88; end: 1046210b3;  */

void FUN_104620e88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x11308a538;
  FUN_1046210f8(0x11308a538,0x104620c50,&UNK_10dd20ee0);
  uVar2 = 0x11308a540;
  FUN_1046210f8(0x11308a540,0x104620c50,&UNK_10dd20e80);
  uVar3 = uVar2;
  func_0x0001021870b4();
  __ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF
            (param_1,param_2,uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1046210b4; end: 1046210f7;  */

void FUN_1046210b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1046210f8; end: 104621137;  */

void FUN_1046210f8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 104621138; end: 10462118f;  */

void FUN_104621138(void)

{
  FUN_1046210f8(0x11308a4f8,0x104620c50,&UNK_10dd20e44);
  return;
}



/* Entry: 104621190; end: 104621197;  */

void FUN_104621190(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb80f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSd9hashValueSivg_11034dd80)(*unaff_x20);
  return;
}



/* Entry: 104621198; end: 1046211cf;  */

void FUN_104621198(undefined8 param_1)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
  __ss6HasherV8_combineyys6UInt64VF(param_1,dVar1);
  return;
}



/* Entry: 1046211d0; end: 1046211e7;  */

void FUN_1046211d0(undefined8 param_1)

{
  double *unaff_x20;
  double dVar1;
  
  dVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    dVar1 = *unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss6HasherV5_hash4seed_S2i_s6UInt64VtFZ_11034ef28)(param_1,dVar1);
  return;
}



/* Entry: 1046211e8; end: 10462125f;  */

undefined8 FUN_1046211e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 104621260; end: 1046212cf;  */

undefined1 * FUN_104621260(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,param_1);
  puVar2 = auStack_78;
  __sSS4hash4intoys6HasherVz_tF(puVar2,uVar1,param_2);
  __ss6HasherV9_finalizeSiyF();
  _swift_bridgeObjectRelease(param_2);
  return puVar2;
}



/* Entry: 1046212d0; end: 1046212e3;  */

bool FUN_1046212d0(double *param_1,double *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1046212e4; end: 104621367;  */

void FUN_1046212e4(void)

{
  FUN_1046210f8(0x11308a508,0x104620c50,&UNK_10dd20eb4);
  return;
}



/* Entry: 104621368; end: 1046213eb;  */

uint FUN_104621368(long *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = *param_1;
  lVar4 = *param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  plVar3 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar2 == lVar4 && param_2 == plVar3) {
    uVar1 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (lVar2,param_2,lVar4,plVar3,0);
    uVar1 = (uint)lVar2;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(plVar3);
  return uVar1 & 1;
}



/* Entry: 1046213ec; end: 104621417;  */

void FUN_1046213ec(void)

{
  FUN_1046210f8(0x11308a520,0x104620c3c,&UNK_10dd2100c);
  return;
}



/* Entry: 104621418; end: 10462142b;  */

void FUN_104621418(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1107911a8;
  if (lRam000000011308a580 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011308a580 = param_1;
  }
  return;
}



/* Entry: 10462142c; end: 10462146b;  */

undefined8 FUN_10462142c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10462146c; end: 10462147f;  */

void FUN_10462146c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110791180;
  if (lRam000000011308a578 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam000000011308a578 = param_1;
  }
  return;
}



/* Entry: 104621480; end: 1046214c3;  */

void FUN_104621480(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1046214c4; end: 1046215cb;  */

void FUN_1046214c4(void)

{
  FUN_1046210f8(0x11308a588,FUN_104621418,&UNK_10dd21210);
  return;
}



/* Entry: 1046215cc; end: 1046217ab;  */

void FUN_1046215cc(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1046217ac; end: 1046217fb;  */

void FUN_1046217ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011308a5d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11308a5d8;
  func_0x00010002969c(0x11308a5d8,&UNK_10dd214a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam000000011308a5d0 = puVar2;
  return;
}



/* Entry: 1046217fc; end: 10462180f;  */

bool FUN_1046217fc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104621810; end: 1046218fb;  */

void FUN_104621810(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1046218fc; end: 1046218ff;  */

void FUN_1046218fc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21528;
  _swift_getWitnessTable(&UNK_10dd21528,&UNK_110791310);
  puRam000000011308a5e0 = puVar1;
  return;
}



/* Entry: 104621900; end: 10462193f;  */

void FUN_104621900(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a5e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21528;
  _swift_getWitnessTable(&UNK_10dd21528,&UNK_110791310);
  puRam000000011308a5e0 = puVar1;
  return;
}



/* Entry: 104621940; end: 104621be7;  */

int FUN_104621940(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1046219bc;
        goto LAB_1046219a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1046219a0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1046219bc:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 104621be8; end: 104621c13;  */

void FUN_104621be8(void)

{
  FUN_104621cc4(0x11308a620,0x11308a628,&UNK_10dd21598);
  return;
}



/* Entry: 104621c14; end: 104621c53;  */

void FUN_104621c14(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x11308a688;
  func_0x0001000285a8(0x11308a688,&UNK_10dd216f0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 104621c54; end: 104621c57;  */

void FUN_104621c54(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21618;
  _swift_getWitnessTable(&UNK_10dd21618,&UNK_110791488);
  puRam000000011308a630 = puVar1;
  return;
}



/* Entry: 104621c58; end: 104621cc3;  */

void FUN_104621c58(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd21618;
  _swift_getWitnessTable(&UNK_10dd21618,&UNK_110791488);
  puRam000000011308a630 = puVar1;
  return;
}



/* Entry: 104621cc4; end: 104621dcb;  */

void FUN_104621cc4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 104621dcc; end: 104621dcf;  */

void FUN_104621dcc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd216c0;
  _swift_getWitnessTable(&UNK_10dd216c0,&UNK_1107913f8);
  puRam000000011308a648 = puVar1;
  return;
}



/* Entry: 104621dd0; end: 104621e0f;  */

void FUN_104621dd0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308a648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd216c0;
  _swift_getWitnessTable(&UNK_10dd216c0,&UNK_1107913f8);
  puRam000000011308a648 = puVar1;
  return;
}



/* Entry: 104621e10; end: 1046224b3;  */

void FUN_104621e10(undefined8 *param_1,byte param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_2 < 3) {
    if (param_2 == 0) {
      if (lRam000000011308a6a0 != -1) {
        _swift_once(0x11308a6a0,FUN_1046224e4);
      }
      lVar1 = lRam000000011308a698;
      uVar3 = uRam0000000113814ea0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a698,FUN_104622810);
      }
      lVar1 = lRam000000011308a710;
      puVar4 = puRam0000000113814e98;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a710,0x10462260c);
      }
      lVar1 = lRam000000011308a6f0;
      uVar5 = uRam0000000113814f10;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6f0,0x1046228d8);
      }
      lVar1 = lRam000000011308a690;
      puVar2 = puRam0000000113814ef0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a690,FUN_104622bb0);
      }
      puVar6 = (undefined8 *)0x113814e90;
    }
    else if (param_2 == 1) {
      if (lRam000000011308a6b8 != -1) {
        _swift_once(0x11308a6b8,FUN_10462251c);
      }
      lVar1 = lRam000000011308a6b0;
      uVar3 = uRam0000000113814eb8;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6b0,FUN_1046228a0);
      }
      lVar1 = lRam000000011308a710;
      puVar4 = puRam0000000113814eb0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a710,0x10462260c);
      }
      lVar1 = lRam000000011308a6f0;
      uVar5 = uRam0000000113814f10;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6f0,0x1046228d8);
      }
      lVar1 = lRam000000011308a6a8;
      puVar2 = puRam0000000113814ef0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6a8,FUN_104622bec);
      }
      puVar6 = (undefined8 *)0x113814ea8;
    }
    else {
      if (lRam000000011308a6d0 != -1) {
        _swift_once(0x11308a6d0,0x104622538);
      }
      lVar1 = lRam000000011308a6c8;
      uVar3 = uRam0000000113814ed0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6c8,0x1046228bc);
      }
      lVar1 = lRam000000011308a710;
      puVar4 = puRam0000000113814ec8;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a710,0x10462260c);
      }
      lVar1 = lRam000000011308a6f0;
      uVar5 = uRam0000000113814f10;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6f0,0x1046228d8);
      }
      lVar1 = lRam000000011308a6c0;
      puVar2 = puRam0000000113814ef0;
      _objc_retain();
      if (lVar1 != -1) {
        _swift_once(0x11308a6c0,FUN_104622c74);
      }
      puVar6 = (undefined8 *)0x113814ec0;
    }
  }
  else if (param_2 == 3) {
    if (lRam000000011308a6e0 != -1) {
      _swift_once(0x11308a6e0,FUN_1046225f0);
    }
    uVar3 = uRam0000000113814ee0;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self();
    _objc_retain();
    puVar4 = puVar2;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011308a710 != -1) {
      _swift_once(0x11308a710,0x10462260c);
    }
    uVar5 = uRam0000000113814f10;
    _objc_retain();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011308a6d8 != -1) {
      _swift_once(0x11308a6d8,0x104622c90);
    }
    puVar6 = (undefined8 *)0x113814ed8;
  }
  else if (param_2 == 4) {
    if (lRam000000011308a700 != -1) {
      _swift_once(0x11308a700,FUN_1046226d0);
    }
    lVar1 = lRam000000011308a6f8;
    uVar3 = uRam0000000113814f00;
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0x11308a6f8,FUN_10462299c);
    }
    lVar1 = lRam000000011308a710;
    puVar4 = puRam0000000113814ef8;
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0x11308a710,0x10462260c);
    }
    lVar1 = lRam000000011308a6f0;
    uVar5 = uRam0000000113814f10;
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0x11308a6f0,0x1046228d8);
    }
    lVar1 = lRam000000011308a6e8;
    puVar2 = puRam0000000113814ef0;
    _objc_retain();
    if (lVar1 != -1) {
      _swift_once(0x11308a6e8,0x104622cac);
    }
    puVar6 = (undefined8 *)0x113814ee8;
  }
  else {
    if (lRam000000011308a718 != -1) {
      _swift_once(0x11308a718,FUN_104622708);
    }
    uVar3 = uRam0000000113814f18;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    _objc_opt_self();
    _objc_retain();
    puVar4 = puVar2;
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011308a710 != -1) {
      _swift_once(0x11308a710,0x10462260c);
    }
    uVar5 = uRam0000000113814f10;
    _objc_retain();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    if (lRam000000011308a708 != -1) {
      _swift_once(0x11308a708,0x104622cc8);
    }
    puVar6 = (undefined8 *)0x113814f08;
  }
  uVar7 = *puVar6;
  *param_1 = uVar3;
  param_1[1] = puVar4;
  param_1[2] = uVar5;
  param_1[3] = puVar2;
  param_1[4] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 1046224b4; end: 1046224e3;  */

undefined1 FUN_1046224b4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1046224e4; end: 10462251b;  */

void FUN_1046224e4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  func_0x00010c03d7c0(0,0,0,0x3ff0000000000000);
  puRam0000000113814ea0 = puVar1;
  return;
}



/* Entry: 10462251c; end: 104622553;  */

void FUN_10462251c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  uStack_40 = 0x104622dfc;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_103080c38;
  puStack_48 = &UNK_110791568;
  __Block_copy(&puStack_60);
  func_0x00010c00ec80();
  __Block_release(ppuVar2);
  _swift_release(uStack_38);
  puRam0000000113814eb8 = puVar1;
  return;
}



/* Entry: 104622554; end: 1046225ef;  */

void FUN_104622554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_allocWithZone();
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_103080c38;
  uStack_48 = param_3;
  uStack_40 = param_2;
  __Block_copy(&puStack_60);
  func_0x00010c00ec80();
  __Block_release(ppuVar2);
  _swift_release(uStack_38);
  *param_4 = puVar1;
  return;
}



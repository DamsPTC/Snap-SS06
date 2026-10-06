/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10485d148; end: 10485d1f3;  */

void FUN_10485d148(void)

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



/* Entry: 10485d1f4; end: 10485d22b;  */

void FUN_10485d1f4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 10485d22c; end: 10485d25f;  */

void FUN_10485d22c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRetain(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10485d260; end: 10485d2b7;  */

uint FUN_10485d260(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10485d2b8(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10485d2b8; end: 10485d5cf;  */

undefined8 FUN_10485d2b8(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  puVar7 = auStack_b0;
  uVar11 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar5 = param_1[3];
  uVar8 = *param_2;
  lVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (uVar9 == 1) {
    if (lVar2 != 1) {
LAB_10485d304:
      FUN_10485d22c(uVar8,lVar2,uVar1,uVar3);
      FUN_10485d22c(uVar11,uVar9,uVar10,uVar5);
      FUN_10485db00(uVar11,uVar9,uVar10,uVar5);
      FUN_10485db00(uVar8,lVar2,uVar1,uVar3);
      return 0;
    }
  }
  else {
    if (lVar2 == 1) goto LAB_10485d304;
    FUN_10485d22c(uVar8,lVar2,uVar1,uVar3);
    FUN_10485d22c(uVar11,uVar9,uVar10,uVar5);
    uVar4 = uVar11;
    FUN_1048712b0(uVar11,uVar9,uVar10,uVar5,uVar8,lVar2,uVar1,uVar3);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(uVar3);
    FUN_10485db00(uVar11,uVar9,uVar10,uVar5);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  if ((int)param_1[4] != *(int *)(param_2 + 4)) {
    return 0;
  }
  uVar11 = param_1[6];
  uVar10 = param_1[5];
  uVar9 = param_2[6];
  uVar8 = param_2[5];
  uStack_80 = uVar8;
  uStack_78 = uVar9;
  uStack_70 = uVar10;
  uStack_68 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (uVar9 >> 0x3c < 0xf) {
      func_0x00010105aabc(&uStack_70,&uStack_90);
      func_0x00010105aabc(&uStack_80,&uStack_90);
      uVar5 = uVar10;
      func_0x000100e25fcc(uVar10,uVar11,uVar8,uVar9);
      func_0x0001000b44c0(uVar8,uVar9);
      func_0x0001000b44c0(uVar10,uVar11);
      if ((uVar5 & 1) == 0) {
        return 0;
      }
      goto LAB_10485d4c4;
    }
  }
  else if (0xe < uVar9 >> 0x3c) {
    func_0x00010105aabc(&uStack_70,&uStack_90);
    func_0x00010105aabc(&uStack_80,&uStack_90);
    func_0x0001000b44c0(uVar10,uVar11);
LAB_10485d4c4:
    uVar11 = param_1[8];
    uVar10 = param_1[7];
    uVar9 = param_2[8];
    uVar8 = param_2[7];
    uStack_a0 = uVar8;
    uStack_98 = uVar9;
    uStack_90 = uVar10;
    uStack_88 = uVar11;
    if (uVar11 >> 0x3c < 0xf) {
      if (uVar9 >> 0x3c < 0xf) {
        func_0x00010105aabc(&uStack_90,auStack_b0);
        func_0x00010105aabc(&uStack_a0,auStack_b0);
        uVar5 = uVar10;
        func_0x000100e25fcc(uVar10,uVar11,uVar8,uVar9);
        func_0x0001000b44c0(uVar8,uVar9);
        func_0x0001000b44c0(uVar10,uVar11);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        return 1;
      }
    }
    else if (0xe < uVar9 >> 0x3c) {
      func_0x00010105aabc(&uStack_90,auStack_b0);
      func_0x00010105aabc(&uStack_a0,auStack_b0);
      func_0x0001000b44c0(uVar10,uVar11);
      return 1;
    }
    func_0x00010105aabc(&uStack_90,auStack_b0);
    puVar6 = &uStack_a0;
    goto LAB_10485d53c;
  }
  func_0x00010105aabc(&uStack_70,&uStack_90);
  puVar6 = &uStack_80;
  puVar7 = &uStack_90;
LAB_10485d53c:
  func_0x00010105aabc(puVar6,puVar7);
  func_0x0001000b44c0(uVar10,uVar11);
  func_0x0001000b44c0(uVar8,uVar9);
  return 0;
}



/* Entry: 10485d5d0; end: 10485d667;  */

long FUN_10485d5d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10485d668; end: 10485d8f7;  */

undefined8 * FUN_10485d668(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = lVar1;
    uVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar2;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar2);
  }
  param_1[4] = param_2[4];
  uVar3 = param_2[6];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[5];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
  }
  uVar3 = param_2[8];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[7];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[7] = uVar2;
    param_1[8] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
  }
  return param_1;
}



/* Entry: 10485d8f8; end: 10485da27;  */

undefined8 FUN_10485d8f8(undefined8 param_1)

{
  (*(code *)(undefined *)0x1048713b4)();
  return param_1;
}



/* Entry: 10485da28; end: 10485daff;  */

int FUN_10485da28(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar4 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar2 = (int)uVar4 - 1;
  uVar1 = uVar2;
  if (0x7fffffff < uVar2) {
    uVar1 = 0xffffffff;
  }
  iVar3 = uVar1 - 1;
  if ((int)uVar2 < 1) {
    iVar3 = -1;
  }
  return iVar3 + 1;
}



/* Entry: 10485db00; end: 10485db33;  */

void FUN_10485db00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == 1) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10485db34; end: 10485db4b; -[SCRegistrationUser firstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485db34(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113093280);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10485db4c; end: 10485db63; -[SCRegistrationUser setFirstName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485db4c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113093280);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10485db64; end: 10485dba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485db64(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113093280;
  _swift_beginAccess(unaff_x20 + _DAT_113093280,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104861db0;
  return auVar2;
}



/* Entry: 10485dba4; end: 10485dbbb; -[SCRegistrationUser lastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dba4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113093288);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10485dbbc; end: 10485dbd3; -[SCRegistrationUser setLastName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dbbc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113093288);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10485dbd4; end: 10485dc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485dbd4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113093288;
  _swift_beginAccess(unaff_x20 + _DAT_113093288,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861db4;
  return auVar2;
}



/* Entry: 10485dc14; end: 10485dd0b; -[SCRegistrationUser birthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dc14(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_1138153e8;
  puVar4 = auStack_60 + -extraout_x8;
  _swift_beginAccess(param_1 + _DAT_1138153e8,auStack_58,0,0);
  FUN_104861c44(param_1 + lVar1,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10485dd0c; end: 10485dd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dd0c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138153e8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153e8,auStack_48,0,0);
  FUN_104861c44(unaff_x20 + lVar1,param_1,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 10485dd70; end: 10485dec3; -[SCRegistrationUser setBirthday:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dd70(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  if (param_3 == 0) {
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(puVar3,param_3);
    lVar1 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar3,param_3 == 0,1);
  lVar1 = _DAT_1138153e8;
  _swift_beginAccess(param_1 + _DAT_1138153e8,auStack_48,0x21,0);
  lVar2 = param_1;
  _objc_retain(param_1);
  func_0x000100ed9cbc(puVar3,param_1 + lVar1);
  _swift_endAccess(auStack_48);
  _objc_release(lVar2);
  return;
}



/* Entry: 10485dec4; end: 10485df03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485dec4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1138153e8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153e8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dbc;
  return auVar2;
}



/* Entry: 10485df04; end: 10485df97; -[SCRegistrationUser username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485df04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138153f0;
  _swift_beginAccess(param_1 + _DAT_1138153f0,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10485df98; end: 10485dfa3; -[SCRegistrationUser setUsername:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485df98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138153f0;
  _swift_beginAccess(param_1 + _DAT_1138153f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10485dfa4; end: 10485dff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485dfa4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1138153f0;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10485dff8; end: 10485e037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485dff8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1138153f0;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861db8;
  return auVar2;
}



/* Entry: 10485e038; end: 10485e0f7; -[SCRegistrationUser usernameSuggestions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e038(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1138153f8;
  _swift_beginAccess(param_1 + _DAT_1138153f8,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_104867578(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10485e0f8; end: 10485e1bf; -[SCRegistrationUser setUsernameSuggestions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e0f8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_104867578(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar2);
  }
  lVar1 = _DAT_1138153f8;
  _swift_beginAccess(param_1 + _DAT_1138153f8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10485e1c0; end: 10485e1ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e1c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_1138153f8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dcc;
  return auVar2;
}



/* Entry: 10485e200; end: 10485e20b; -[SCRegistrationUser password] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e200(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_113815400);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10485e20c; end: 10485e27f;  */

void FUN_10485e20c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10485e280; end: 10485e28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e280(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _DAT_113815400);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10485e28c; end: 10485e2db;  */

undefined1  [16] FUN_10485e28c(long *param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *param_1);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Entry: 10485e2dc; end: 10485e2e7; -[SCRegistrationUser setPassword:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e2dc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113815400);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10485e2e8; end: 10485e35f;  */

void FUN_10485e2e8(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + *param_4);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 10485e360; end: 10485e36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e360(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815400);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10485e36c; end: 10485e3c3;  */

void FUN_10485e36c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Entry: 10485e3c4; end: 10485e403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e3c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815400;
  _swift_beginAccess(unaff_x20 + _DAT_113815400,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dc0;
  return auVar2;
}



/* Entry: 10485e404; end: 10485e487; -[SCRegistrationUser registerAttemptCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10485e404(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113815408;
  _swift_beginAccess(param_1 + _DAT_113815408,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 10485e488; end: 10485e523; -[SCRegistrationUser setRegisterAttemptCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e488(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815408;
  _swift_beginAccess(param_1 + _DAT_113815408,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10485e524; end: 10485e563;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e524(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815408;
  _swift_beginAccess(unaff_x20 + _DAT_113815408,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dc4;
  return auVar2;
}



/* Entry: 10485e564; end: 10485e5f7; -[SCRegistrationUser email] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e564(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113815410;
  _swift_beginAccess(param_1 + _DAT_113815410,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10485e5f8; end: 10485e603; -[SCRegistrationUser setEmail:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815410;
  _swift_beginAccess(param_1 + _DAT_113815410,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e604; end: 10485e657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e604(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815410;
  _swift_beginAccess(unaff_x20 + _DAT_113815410,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e658; end: 10485e697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e658(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815410;
  _swift_beginAccess(unaff_x20 + _DAT_113815410,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dc8;
  return auVar2;
}



/* Entry: 10485e698; end: 10485e72b; -[SCRegistrationUser phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e698(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113815418;
  _swift_beginAccess(param_1 + _DAT_113815418,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10485e72c; end: 10485e737; -[SCRegistrationUser setPhoneNumber:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e72c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815418;
  _swift_beginAccess(param_1 + _DAT_113815418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e738; end: 10485e78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e738(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815418;
  _swift_beginAccess(unaff_x20 + _DAT_113815418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e78c; end: 10485e7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e78c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815418;
  _swift_beginAccess(unaff_x20 + _DAT_113815418,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dd0;
  return auVar2;
}



/* Entry: 10485e7cc; end: 10485e85f; -[SCRegistrationUser optedIn1TL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e7cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113815420;
  _swift_beginAccess(param_1 + _DAT_113815420,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10485e860; end: 10485e86b; -[SCRegistrationUser setOptedIn1TL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e860(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815420;
  _swift_beginAccess(param_1 + _DAT_113815420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e86c; end: 10485e8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e86c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815420;
  _swift_beginAccess(unaff_x20 + _DAT_113815420,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e8c0; end: 10485e8ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485e8c0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815420;
  _swift_beginAccess(unaff_x20 + _DAT_113815420,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10485e900;
  return auVar2;
}



/* Entry: 10485e900; end: 10485e903;  */

void FUN_10485e900(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10485e904; end: 10485e997; -[SCRegistrationUser registrationMethod] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e904(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113815428;
  _swift_beginAccess(param_1 + _DAT_113815428,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10485e998; end: 10485e9a3; -[SCRegistrationUser setRegistrationMethod:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485e998(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113815428;
  _swift_beginAccess(param_1 + _DAT_113815428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10485e9a4; end: 10485ea57;  */

void FUN_10485e9a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  _swift_beginAccess(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10485ea58; end: 10485ea97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10485ea58(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113815428;
  _swift_beginAccess(unaff_x20 + _DAT_113815428,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x104861dd4;
  return auVar2;
}



/* Entry: 10485ea98; end: 10485edcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10485ea98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093280);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113093288);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = _DAT_1138153e8;
  lVar10 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(unaff_x20 + lVar4,1,1,lVar10);
  lVar10 = _DAT_1138153f0;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f0) = 0;
  lVar5 = _DAT_1138153f8;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f8) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113815400);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar6 = _DAT_113815410;
  *(undefined8 *)(unaff_x20 + _DAT_113815410) = 0;
  lVar7 = _DAT_113815418;
  *(undefined8 *)(unaff_x20 + _DAT_113815418) = 0;
  lVar8 = _DAT_113815420;
  *(undefined8 *)(unaff_x20 + _DAT_113815420) = 0;
  lVar9 = _DAT_113815428;
  *(undefined8 *)(unaff_x20 + _DAT_113815428) = 0;
  _swift_beginAccess(puVar1,auStack_80,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(puVar2,auStack_98,1,0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  _swift_beginAccess(unaff_x20 + lVar10,auStack_b0,1,0);
  *(undefined8 *)(unaff_x20 + lVar10) = param_5;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_c8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = param_6;
  _objc_retain(param_5);
  _swift_bridgeObjectRelease(uVar12);
  _swift_beginAccess(puVar3,auStack_e0,1,0);
  uVar12 = puVar3[1];
  *puVar3 = param_7;
  puVar3[1] = param_8;
  _swift_bridgeObjectRelease(uVar12);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_f8,0x21,0);
  func_0x000100ed9c6c(param_9,unaff_x20 + lVar4);
  _swift_endAccess(auStack_f8);
  _swift_beginAccess(unaff_x20 + lVar6,auStack_f8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = param_10;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar7,auStack_110,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = param_11;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar8,auStack_128,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar8);
  *(undefined8 *)(unaff_x20 + lVar8) = param_12;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar9,auStack_140,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = param_13;
  _objc_retain();
  _objc_release(uVar12);
  *(undefined8 *)(unaff_x20 + _DAT_113815408) = 0;
  puVar11 = auStack_150;
  _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
  _objc_release(param_5);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_12);
  _objc_release(param_13);
  func_0x000104861c8c(param_9,0x112d373d8,&UNK_10d9014c0);
  return puVar11;
}



/* Entry: 10485edd0; end: 10485f2d3; -[SCRegistrationUser initWithFirstName:lastName:username:usernameSuggestions:password:birthday:email:phoneNumber:optedIn1TL:registrationMethod:] */

long FUN_10485edd0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long alStack_d0 [6];
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = 0x112d373d8;
  puVar3 = &UNK_10d9014c0;
  uStack_70 = param_1;
  lStack_68 = param_8;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  lVar6 = (long)&uStack_a0 + lVar2;
  if (param_3 == 0) {
    puStack_80 = (undefined *)0x0;
    lStack_78 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_80 = puVar3;
    lStack_78 = param_3;
  }
  if (param_4 == 0) {
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_90 = puVar3;
    lStack_88 = param_4;
  }
  if (param_6 == 0) {
    lStack_98 = 0;
  }
  else {
    puVar3 = (undefined *)0x0;
    FUN_104867578(0);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,puVar3);
    lStack_98 = param_6;
  }
  _objc_retain();
  lVar5 = param_7;
  uStack_a0 = param_5;
  _objc_retain();
  lVar4 = lStack_68;
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (lVar5 == 0) {
    param_7 = 0;
    puVar3 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
    _objc_release(lVar5);
  }
  if (lVar4 == 0) {
    lVar5 = 0;
    __s10Foundation4DateVMa();
  }
  else {
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(lVar6,lStack_68);
    _objc_release(lVar4);
    lVar5 = 0;
    __s10Foundation4DateVMa();
  }
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar6,lVar4 == 0,1);
  *(undefined8 *)((long)alStack_d0 + lVar2 + 0x18) = param_11;
  *(undefined8 *)((long)alStack_d0 + lVar2 + 0x20) = param_12;
  *(undefined8 *)((long)alStack_d0 + lVar2 + 8) = param_9;
  *(undefined8 *)((long)alStack_d0 + lVar2 + 0x10) = param_10;
  *(long *)((long)alStack_d0 + lVar2) = lVar6;
  uVar1 = uStack_a0;
  lVar2 = lStack_78;
  FUN_104860e14(lStack_78,puStack_80,lStack_88,puStack_90,uStack_a0,lStack_98,param_7,puVar3);
  _objc_release(uVar1);
  _objc_release(param_9);
  _objc_release(param_10);
  _objc_release(param_11);
  _objc_release(param_12);
  return lVar2;
}



/* Entry: 10485f2d4; end: 10485f333; -[SCRegistrationUser init] */

void FUN_10485f2d4(void)

{
  func_0x00010485eff0();
  return;
}



/* Entry: 10485f334; end: 10485f36f; -[SCRegistrationUser initWithCoder:] */

undefined8 FUN_10485f334(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_104861140();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10485f370; end: 10485f8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485f370(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar8 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_140 + -extraout_x8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093280);
  _swift_beginAccess(puVar1,auStack_68,0,0);
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
    _swift_bridgeObjectRetain(lVar8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar3 = 0x6d614e7473726946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d614e7473726946,0xe900000000000065);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar6);
  _objc_release(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093288);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  lVar8 = puVar1[1];
  if (lVar8 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar1;
    _swift_bridgeObjectRetain(lVar8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar3 = 0x656d614e7473614c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d614e7473614c,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar6);
  _objc_release(uVar3);
  lVar8 = _DAT_1138153f0;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f0,auStack_98,0,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
  _objc_retain(uVar6);
  uVar3 = 0x656d614e72657355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d614e72657355,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar6);
  _objc_release(uVar3);
  lVar8 = _DAT_1138153f8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f8,auStack_b0,0,0);
  lVar8 = *(long *)(unaff_x20 + lVar8);
  if (lVar8 == 0) {
    lVar9 = 0;
  }
  else {
    FUN_104867578(0);
    lVar9 = lVar8;
    _swift_bridgeObjectRetain(lVar8);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar8);
  }
  uVar6 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f212290);
  func_0x00010bf93020(param_1);
  _objc_release(lVar9);
  _objc_release(uVar6);
  lVar8 = _DAT_113815408;
  _swift_beginAccess(unaff_x20 + _DAT_113815408,auStack_c8,0,0);
  if (-1 < *(long *)(unaff_x20 + lVar8)) {
    uVar6 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2122b0);
    func_0x00010bf92fc0(param_1);
    _objc_release(uVar6);
    lVar8 = _DAT_1138153e8;
    _swift_beginAccess(unaff_x20 + _DAT_1138153e8,auStack_e0,0,0);
    FUN_104861c44(unaff_x20 + lVar8,puVar5,0x112d373d8,&UNK_10d9014c0);
    lVar8 = 0;
    __s10Foundation4DateVMa();
    lVar9 = *(long *)(lVar8 + -8);
    puVar4 = puVar5;
    (**(code **)(lVar9 + 0x30))(puVar5,1,lVar8);
    puVar7 = (undefined1 *)0x0;
    if ((int)puVar4 != 1) {
      __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
      (**(code **)(lVar9 + 8))(puVar5,lVar8);
      puVar7 = puVar4;
    }
    uVar6 = 0x7961646874726942;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7961646874726942,0xe800000000000000);
    func_0x00010bf93020(param_1);
    _swift_unknownObjectRelease(puVar7);
    _objc_release(uVar6);
    lVar8 = _DAT_113815410;
    _swift_beginAccess(unaff_x20 + _DAT_113815410,auStack_f8,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
    _objc_retain(uVar6);
    uVar3 = 0x6c69616d45;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c69616d45,0xe500000000000000);
    func_0x00010bf93020(param_1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar8 = _DAT_113815418;
    _swift_beginAccess(unaff_x20 + _DAT_113815418,auStack_110,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
    _objc_retain(uVar6);
    uVar3 = 0x6d754e656e6f6850;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d754e656e6f6850,0xeb00000000726562);
    func_0x00010bf93020(param_1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar8 = _DAT_113815420;
    _swift_beginAccess(unaff_x20 + _DAT_113815420,auStack_128,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
    _objc_retain(uVar6);
    uVar3 = 0x316e49646574704f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x316e49646574704f,0xea00000000004c54);
    func_0x00010bf93020(param_1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    lVar8 = _DAT_113815428;
    _swift_beginAccess(unaff_x20 + _DAT_113815428,auStack_140,0,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar8);
    _objc_retain(uVar6);
    uVar3 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2122d0);
    func_0x00010bf93020(param_1);
    _objc_release(uVar6);
    _objc_release(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10485f8c0);
  (*pcVar2)();
}



/* Entry: 10485f8c0; end: 10485f90f; -[SCRegistrationUser encodeWithCoder:] */

void FUN_10485f8c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10485f370(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10485f910; end: 10485fea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10485f910(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_310;
  long lStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  long lStack_240;
  long lStack_238;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = 0x112d373d8;
  puStack_290 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093280);
  lStack_2a0 = (long)&uStack_310 - extraout_x8;
  _swift_beginAccess(puVar1,auStack_80,0,0);
  uStack_2b8 = *puVar1;
  uStack_2d0 = puVar1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093288);
  _swift_beginAccess(puVar1,auStack_98,0,0);
  lVar5 = _DAT_1138153f0;
  uStack_2d8 = *puVar1;
  uStack_2e0 = puVar1[1];
  _swift_beginAccess(unaff_x20 + _DAT_1138153f0,auStack_b0,0,0);
  lVar7 = _DAT_1138153f8;
  uStack_2e8 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_1138153f8,auStack_c8,0,0);
  uStack_2c0 = *(undefined8 *)(unaff_x20 + lVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113815400);
  _swift_beginAccess(puVar1,auStack_e0,0,0);
  lVar5 = _DAT_1138153e8;
  uStack_2a8 = *puVar1;
  uStack_2f0 = puVar1[1];
  _swift_beginAccess(unaff_x20 + _DAT_1138153e8,auStack_f8,0,0);
  FUN_104861c44(unaff_x20 + lVar5,(long)&uStack_310 - extraout_x8,0x112d373d8,&UNK_10d9014c0);
  lVar5 = _DAT_113815410;
  _swift_beginAccess(unaff_x20 + _DAT_113815410,auStack_110,0,0);
  lVar7 = _DAT_113815418;
  uStack_300 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_113815418,auStack_128,0,0);
  lVar5 = _DAT_113815420;
  uStack_288 = *(undefined8 *)(unaff_x20 + lVar7);
  _swift_beginAccess(unaff_x20 + _DAT_113815420,auStack_140,0,0);
  lVar7 = _DAT_113815428;
  uStack_280 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess(unaff_x20 + _DAT_113815428,auStack_158,0,0);
  uStack_278 = *(undefined8 *)(unaff_x20 + lVar7);
  lVar6 = 0;
  FUN_104861108();
  lStack_298 = lVar6;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(lVar6 + _DAT_113093280);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + _DAT_113093288);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar5 = _DAT_1138153e8;
  lStack_308 = _DAT_1138153e8;
  lVar7 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar6 + lVar5,1,1,lVar7);
  lVar5 = _DAT_1138153f0;
  *(undefined8 *)(lVar6 + _DAT_1138153f0) = 0;
  lVar7 = _DAT_1138153f8;
  *(undefined8 *)(lVar6 + _DAT_1138153f8) = 0;
  puVar3 = (undefined8 *)(lVar6 + _DAT_113815400);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar4 = _DAT_113815410;
  *(undefined8 *)(lVar6 + _DAT_113815410) = 0;
  lStack_2f8 = _DAT_113815418;
  *(undefined8 *)(lVar6 + _DAT_113815418) = 0;
  lStack_2c8 = _DAT_113815420;
  *(undefined8 *)(lVar6 + _DAT_113815420) = 0;
  lStack_2b0 = _DAT_113815428;
  *(undefined8 *)(lVar6 + _DAT_113815428) = 0;
  _swift_beginAccess(puVar1,auStack_170,1,0);
  uVar12 = uStack_2d0;
  *puVar1 = uStack_2b8;
  puVar1[1] = uStack_2d0;
  _swift_beginAccess(puVar2,auStack_188,1,0);
  uVar11 = uStack_2e0;
  *puVar2 = uStack_2d8;
  puVar2[1] = uStack_2e0;
  _swift_beginAccess(lVar6 + lVar5,auStack_1a0,1,0);
  uStack_310 = *(undefined8 *)(lVar6 + lVar5);
  *(undefined8 *)(lVar6 + lVar5) = uStack_2e8;
  uVar9 = uStack_2e8;
  _objc_retain();
  _objc_retain();
  uStack_2b8 = uVar9;
  _swift_bridgeObjectRetain(uVar12);
  _swift_bridgeObjectRetain(uVar11);
  uVar9 = uStack_2c0;
  _swift_bridgeObjectRetain(uStack_2c0);
  uVar12 = uStack_2f0;
  _swift_bridgeObjectRetain(uStack_2f0);
  uVar11 = uStack_300;
  uVar8 = uStack_300;
  _objc_retain();
  uVar13 = uStack_288;
  uStack_2e8 = uVar8;
  _objc_retain();
  uVar8 = uStack_280;
  uStack_2e0 = uVar13;
  _objc_retain();
  uVar13 = uStack_278;
  uStack_2d8 = uVar8;
  _objc_retain();
  uStack_2d0 = uVar13;
  _objc_release(uStack_310);
  _swift_beginAccess(lVar6 + lVar7,auStack_1b8,1,0);
  uVar8 = *(undefined8 *)(lVar6 + lVar7);
  *(undefined8 *)(lVar6 + lVar7) = uVar9;
  _swift_bridgeObjectRelease(uVar8);
  _swift_beginAccess(puVar3,auStack_1d0,1,0);
  uVar9 = puVar3[1];
  *puVar3 = uStack_2a8;
  puVar3[1] = uVar12;
  _swift_bridgeObjectRelease(uVar9);
  lVar5 = lStack_308;
  _swift_beginAccess(lVar6 + lStack_308,auStack_1e8,0x21,0);
  lVar7 = lStack_2a0;
  func_0x000100ed9c6c(lStack_2a0,lVar6 + lVar5);
  _swift_endAccess(auStack_1e8);
  _swift_beginAccess(lVar6 + lVar4,auStack_1e8,1,0);
  uVar12 = *(undefined8 *)(lVar6 + lVar4);
  *(undefined8 *)(lVar6 + lVar4) = uVar11;
  uVar11 = uStack_2e8;
  _objc_retain(uStack_2e8);
  _objc_release(uVar12);
  lVar5 = lStack_2f8;
  _swift_beginAccess(lVar6 + lStack_2f8,auStack_200,1,0);
  uVar9 = *(undefined8 *)(lVar6 + lVar5);
  *(undefined8 *)(lVar6 + lVar5) = uStack_288;
  uVar12 = uStack_2e0;
  _objc_retain(uStack_2e0);
  _objc_release(uVar9);
  lVar5 = lStack_2c8;
  _swift_beginAccess(lVar6 + lStack_2c8,auStack_218,1,0);
  uVar8 = *(undefined8 *)(lVar6 + lVar5);
  *(undefined8 *)(lVar6 + lVar5) = uStack_280;
  uVar9 = uStack_2d8;
  _objc_retain(uStack_2d8);
  _objc_release(uVar8);
  lVar5 = lStack_2b0;
  _swift_beginAccess(lVar6 + lStack_2b0,auStack_230,1,0);
  uVar13 = *(undefined8 *)(lVar6 + lVar5);
  *(undefined8 *)(lVar6 + lVar5) = uStack_278;
  uVar8 = uStack_2d0;
  _objc_retain(uStack_2d0);
  _objc_release(uVar13);
  lVar4 = lStack_298;
  *(undefined8 *)(lVar6 + _DAT_113815408) = 0;
  lStack_238 = lStack_298;
  plVar10 = &lStack_240;
  lStack_240 = lVar6;
  _objc_msgSendSuper2(plVar10,PTR_s_init_1125d9248);
  _objc_release(uStack_2b8);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar8);
  func_0x000104861c8c(lVar7,0x112d373d8,&UNK_10d9014c0);
  lVar5 = _DAT_113815408;
  _swift_beginAccess(unaff_x20 + _DAT_113815408,auStack_258,0,0);
  lVar7 = _DAT_113815408;
  uVar11 = *(undefined8 *)(unaff_x20 + lVar5);
  _swift_beginAccess((long)plVar10 + _DAT_113815408,auStack_270,1,0);
  *(undefined8 *)((long)plVar10 + lVar7) = uVar11;
  puStack_290[3] = lVar4;
  *puStack_290 = plVar10;
  return;
}



/* Entry: 10485fea8; end: 10485ff07; -[SCRegistrationUser copyWithZone:] */

undefined1 * FUN_10485fea8(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  _objc_retain();
  FUN_10485f910(auStack_40);
  _objc_release(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 10485ff08; end: 10486089b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10485ff08(undefined8 param_1)

{
  ulong *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_2b0 [4];
  uint uStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  long alStack_a0 [3];
  undefined1 auStack_88 [24];
  long lStack_70;
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = 0x112d373d0;
  puStack_288 = auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_2b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar14 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  lVar14 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_00;
  FUN_104861c44(param_1,auStack_88,0x112d387f8,&UNK_10d902650);
  if (lStack_70 == 0) {
    func_0x000104861c8c(auStack_88,0x112d387f8,&UNK_10d902650);
    return false;
  }
  uVar5 = 0;
  FUN_104861108(0);
  plVar6 = alStack_a0;
  _swift_dynamicCast(plVar6,auStack_88,PTR___sypN_11034f1a8 + 8,uVar5,6);
  if (((ulong)plVar6 & 1) == 0) {
    return false;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_113093280);
  lStack_2a8 = lVar11;
  lStack_2a0 = lVar4;
  lStack_298 = lVar13;
  _swift_beginAccess(puVar1,auStack_88,0,0);
  uVar10 = *puVar1;
  uVar7 = puVar1[1];
  lStack_290 = alStack_a0[0];
  puVar1 = (ulong *)(alStack_a0[0] + _DAT_113093280);
  _swift_beginAccess(puVar1,alStack_a0,0,0);
  uVar9 = puVar1[1];
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_1048604e4;
  }
  else if ((uVar9 == 0) ||
          (((uVar10 != *puVar1 || (uVar7 != uVar9)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar10,uVar7,*puVar1,uVar9,0), (uVar10 & 1) == 0)))) goto LAB_1048604e4;
  puVar1 = (ulong *)(unaff_x20 + _DAT_113093288);
  _swift_beginAccess(puVar1,auStack_b8,0,0);
  uVar10 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (ulong *)(lStack_290 + _DAT_113093288);
  _swift_beginAccess(puVar1,auStack_d0,0,0);
  uVar9 = puVar1[1];
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_1048604e4;
  }
  else if ((uVar9 == 0) ||
          (((uVar10 != *puVar1 || (uVar7 != uVar9)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar10,uVar7,*puVar1,uVar9,0), (uVar10 & 1) == 0)))) goto LAB_1048604e4;
  lVar4 = _DAT_1138153f0;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f0,auStack_e8,0,0);
  lVar13 = lStack_290;
  lVar11 = _DAT_1138153f0;
  uVar10 = *(ulong *)(unaff_x20 + lVar4);
  _swift_beginAccess(lStack_290 + _DAT_1138153f0,auStack_100,0,0);
  lVar4 = *(long *)(lVar13 + lVar11);
  if (uVar10 == 0) {
    if (lVar4 != 0) goto LAB_1048604e4;
  }
  else {
    if (lVar4 == 0) goto LAB_1048604e4;
    FUN_104867578(0);
    _objc_retain();
    _objc_retain(lVar4);
    uVar7 = uVar10;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,lVar4);
    _objc_release(uVar10);
    _objc_release(lVar4);
    if ((uVar7 & 1) == 0) goto LAB_1048604e4;
  }
  lVar4 = _DAT_1138153f8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153f8,auStack_118,0,0);
  lVar13 = lStack_290;
  lVar11 = _DAT_1138153f8;
  uVar10 = *(ulong *)(unaff_x20 + lVar4);
  _swift_beginAccess(lStack_290 + _DAT_1138153f8,auStack_130,0,0);
  lVar4 = *(long *)(lVar13 + lVar11);
  if (uVar10 == 0) {
    if (lVar4 != 0) goto LAB_1048604e4;
  }
  else {
    if (lVar4 == 0) goto LAB_1048604e4;
    _swift_bridgeObjectRetain(lVar4);
    uVar7 = uVar10;
    _swift_bridgeObjectRetain();
    FUN_104860a34();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(lVar4);
    if ((uVar7 & 1) == 0) goto LAB_1048604e4;
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_113815400);
  _swift_beginAccess(puVar1,auStack_148,0,0);
  uVar10 = *puVar1;
  uVar7 = puVar1[1];
  puVar1 = (ulong *)(lStack_290 + _DAT_113815400);
  _swift_beginAccess(puVar1,auStack_160,0,0);
  uVar9 = puVar1[1];
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_1048604e4;
  }
  else if ((uVar9 == 0) ||
          (((uVar10 != *puVar1 || (uVar7 != uVar9)) &&
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar10,uVar7,*puVar1,uVar9,0), (uVar10 & 1) == 0)))) goto LAB_1048604e4;
  lVar4 = _DAT_1138153e8;
  _swift_beginAccess(unaff_x20 + _DAT_1138153e8,auStack_178,0,0);
  FUN_104861c44(unaff_x20 + lVar4,lVar15,0x112d373d8,&UNK_10d9014c0);
  lVar11 = lStack_290;
  lVar4 = _DAT_1138153e8;
  _swift_beginAccess(lStack_290 + _DAT_1138153e8,auStack_190,0,0);
  FUN_104861c44(lVar11 + lVar4,lVar16,0x112d373d8,&UNK_10d9014c0);
  lVar4 = lStack_2a8;
  lVar12 = (long)*(int *)(lVar12 + 0x30);
  FUN_104861c44(lVar15,lStack_2a8,0x112d373d8,&UNK_10d9014c0);
  FUN_104861c44(lVar16,lVar4 + lVar12,0x112d373d8,&UNK_10d9014c0);
  lVar11 = lStack_2a0;
  pcVar17 = *(code **)(lStack_298 + 0x30);
  lVar13 = lVar4;
  (*pcVar17)(lVar4,1,lStack_2a0);
  if ((int)lVar13 == 1) {
    func_0x000104861c8c(lVar16,0x112d373d8,&UNK_10d9014c0);
    func_0x000104861c8c(lVar15,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lVar4 + lVar12;
    (*pcVar17)(lVar12,1,lVar11);
    if ((int)lVar12 != 1) {
LAB_1048604cc:
      func_0x000104861c8c(lVar4,0x112d373d0,&UNK_10d90f8f0);
      goto LAB_1048604e4;
    }
    func_0x000104861c8c(lVar4,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    FUN_104861c44(lVar4,lVar14,0x112d373d8,&UNK_10d9014c0);
    lVar13 = lVar4 + lVar12;
    (*pcVar17)(lVar13,1,lVar11);
    puVar3 = puStack_288;
    lVar2 = lStack_298;
    if ((int)lVar13 == 1) {
      func_0x000104861c8c(lVar16,0x112d373d8,&UNK_10d9014c0);
      func_0x000104861c8c(lVar15,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lStack_298 + 8))(lVar14,lVar11);
      goto LAB_1048604cc;
    }
    puVar8 = puStack_288;
    (**(code **)(lStack_298 + 0x20))(puStack_288,lVar4 + lVar12,lVar11);
    func_0x000100df4c40();
    lVar12 = lVar14;
    __sSQ2eeoiySbx_xtFZTj(lVar14,puVar3,lVar11,puVar8);
    uStack_2ac = (uint)lVar12;
    pcVar17 = *(code **)(lVar2 + 8);
    (*pcVar17)(puVar3,lVar11);
    func_0x000104861c8c(lVar16,0x112d373d8,&UNK_10d9014c0);
    func_0x000104861c8c(lVar15,0x112d373d8,&UNK_10d9014c0);
    (*pcVar17)(lVar14,lVar11);
    func_0x000104861c8c(lVar4,0x112d373d8,&UNK_10d9014c0);
    if ((uStack_2ac & 1) == 0) goto LAB_1048604e4;
  }
  lVar12 = _DAT_113815410;
  _swift_beginAccess(unaff_x20 + _DAT_113815410,auStack_1a8,0,0);
  lVar4 = lStack_290;
  lVar14 = _DAT_113815410;
  uVar10 = *(ulong *)(unaff_x20 + lVar12);
  _swift_beginAccess(lStack_290 + _DAT_113815410,auStack_1c0,0,0);
  lVar12 = *(long *)(lVar4 + lVar14);
  if (uVar10 == 0) {
    if (lVar12 != 0) goto LAB_1048604e4;
  }
  else {
    if (lVar12 == 0) goto LAB_1048604e4;
    FUN_104865260(0);
    _objc_retain();
    _objc_retain(lVar12);
    uVar7 = uVar10;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,lVar12);
    _objc_release(uVar10);
    _objc_release(lVar12);
    if ((uVar7 & 1) == 0) goto LAB_1048604e4;
  }
  lVar12 = _DAT_113815418;
  _swift_beginAccess(unaff_x20 + _DAT_113815418,auStack_1d8,0,0);
  lVar4 = lStack_290;
  lVar14 = _DAT_113815418;
  uVar10 = *(ulong *)(unaff_x20 + lVar12);
  _swift_beginAccess(lStack_290 + _DAT_113815418,auStack_1f0,0,0);
  lVar12 = *(long *)(lVar4 + lVar14);
  if (uVar10 == 0) {
    if (lVar12 != 0) goto LAB_1048604e4;
  }
  else {
    if (lVar12 == 0) goto LAB_1048604e4;
    FUN_104866d7c(0);
    _objc_retain();
    _objc_retain(lVar12);
    uVar7 = uVar10;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,lVar12);
    _objc_release(uVar10);
    _objc_release(lVar12);
    if ((uVar7 & 1) == 0) goto LAB_1048604e4;
  }
  lVar12 = _DAT_113815420;
  _swift_beginAccess(unaff_x20 + _DAT_113815420,auStack_208,0,0);
  lVar4 = lStack_290;
  lVar14 = _DAT_113815420;
  uVar10 = *(ulong *)(unaff_x20 + lVar12);
  _swift_beginAccess(lStack_290 + _DAT_113815420,auStack_220,0,0);
  lVar12 = *(long *)(lVar4 + lVar14);
  if (uVar10 == 0) {
    if (lVar12 != 0) goto LAB_1048604e4;
  }
  else {
    if (lVar12 == 0) goto LAB_1048604e4;
    func_0x000104861d70(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retain();
    _objc_retain(lVar12);
    uVar7 = uVar10;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,lVar12);
    _objc_release(uVar10);
    _objc_release(lVar12);
    if ((uVar7 & 1) == 0) goto LAB_1048604e4;
  }
  lVar12 = _DAT_113815428;
  _swift_beginAccess(unaff_x20 + _DAT_113815428,auStack_238,0,0);
  lVar4 = lStack_290;
  lVar14 = _DAT_113815428;
  uVar10 = *(ulong *)(unaff_x20 + lVar12);
  _swift_beginAccess(lStack_290 + _DAT_113815428,auStack_250,0,0);
  lVar12 = *(long *)(lVar4 + lVar14);
  if (uVar10 == 0) {
    if (lVar12 == 0) {
LAB_104860848:
      lVar12 = _DAT_113815408;
      _swift_beginAccess(unaff_x20 + _DAT_113815408,auStack_268,0,0);
      lVar4 = lStack_290;
      lVar14 = _DAT_113815408;
      lVar11 = *(long *)(unaff_x20 + lVar12);
      _swift_beginAccess(lStack_290 + _DAT_113815408,auStack_280,0,0);
      lVar12 = *(long *)(lVar4 + lVar14);
      _objc_release(lVar4);
      return lVar11 == lVar12;
    }
  }
  else if (lVar12 != 0) {
    FUN_104869ef8(0);
    _objc_retain();
    _objc_retain(lVar12);
    uVar7 = uVar10;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar10,lVar12);
    _objc_release(uVar10);
    _objc_release(lVar12);
    if ((uVar7 & 1) != 0) goto LAB_104860848;
  }
LAB_1048604e4:
  _objc_release(lStack_290);
  return false;
}



/* Entry: 10486089c; end: 10486092b; -[SCRegistrationUser isEqual:] */

uint FUN_10486089c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10485ff08(&uStack_40);
  _objc_release(param_1);
  func_0x000104861c8c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 10486092c; end: 10486095f;  */

void FUN_10486092c(void)

{
  FUN_104861108();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104860960; end: 104860a33; -[SCRegistrationUser .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104860960(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093280 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113093288 + 8));
  func_0x000104861c8c(param_1 + _DAT_1138153e8,0x112d373d8,&UNK_10d9014c0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138153f0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138153f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815400 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815410));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815418));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815420));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113815428));
  return;
}



/* Entry: 104860a34; end: 104860c77;  */

uint FUN_104860a34(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x104860c78);
          (*pcVar1)();
        }
        FUN_104867578(0);
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104860c18);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x104860c1c);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104860c20);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_104860b40;
LAB_104860b10:
              FUN_104860c78(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_104860c78(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_104860b10;
LAB_104860b40:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x104860c24);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_104860c50;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_104860c50:
  return uVar8 & 1;
}



/* Entry: 104860c78; end: 104860e13;  */

ulong FUN_104860c78(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104860d48);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x104860d4c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_104867578(0);
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar4 = 0;
    FUN_104867578(0);
    uVar3 = param_1;
    _swift_dynamicCastClass(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000018,0x800000010f2122f0);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar4 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x104860e14);
  (*pcVar2)();
}



/* Entry: 104860e14; end: 104861107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_104860e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093280);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113093288);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = _DAT_1138153e8;
  lVar10 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar10 + -8) + 0x38))(unaff_x20 + lVar4,1,1,lVar10);
  lVar10 = _DAT_1138153f0;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f0) = 0;
  lVar5 = _DAT_1138153f8;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f8) = 0;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113815400);
  *puVar3 = 0;
  puVar3[1] = 0;
  lVar6 = _DAT_113815410;
  *(undefined8 *)(unaff_x20 + _DAT_113815410) = 0;
  lVar7 = _DAT_113815418;
  *(undefined8 *)(unaff_x20 + _DAT_113815418) = 0;
  lVar8 = _DAT_113815420;
  *(undefined8 *)(unaff_x20 + _DAT_113815420) = 0;
  lVar9 = _DAT_113815428;
  *(undefined8 *)(unaff_x20 + _DAT_113815428) = 0;
  _swift_beginAccess(puVar1,auStack_80,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_beginAccess(puVar2,auStack_98,1,0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  _swift_beginAccess(unaff_x20 + lVar10,auStack_b0,1,0);
  *(undefined8 *)(unaff_x20 + lVar10) = param_5;
  _swift_beginAccess(unaff_x20 + lVar5,auStack_c8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar5);
  *(undefined8 *)(unaff_x20 + lVar5) = param_6;
  _objc_retain(param_5);
  _swift_bridgeObjectRelease(uVar12);
  _swift_beginAccess(puVar3,auStack_e0,1,0);
  uVar12 = puVar3[1];
  *puVar3 = param_7;
  puVar3[1] = param_8;
  _swift_bridgeObjectRelease(uVar12);
  _swift_beginAccess(unaff_x20 + lVar4,auStack_f8,0x21,0);
  func_0x000100ed9c6c(param_9,unaff_x20 + lVar4);
  _swift_endAccess(auStack_f8);
  _swift_beginAccess(unaff_x20 + lVar6,auStack_f8,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar6);
  *(undefined8 *)(unaff_x20 + lVar6) = param_10;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar7,auStack_110,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar7);
  *(undefined8 *)(unaff_x20 + lVar7) = param_11;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar8,auStack_128,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar8);
  *(undefined8 *)(unaff_x20 + lVar8) = param_12;
  _objc_retain();
  _objc_release(uVar12);
  _swift_beginAccess(unaff_x20 + lVar9,auStack_140,1,0);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = param_13;
  _objc_retain();
  _objc_release(uVar12);
  *(undefined8 *)(unaff_x20 + _DAT_113815408) = 0;
  FUN_104861108();
  puVar11 = &stack0xfffffffffffffeb0;
  _objc_msgSendSuper2(puVar11,PTR_s_init_1125d9248);
  func_0x000104861c8c(param_9,0x112d373d8,&UNK_10d9014c0);
  return puVar11;
}



/* Entry: 104861108; end: 10486113f;  */

void FUN_104861108(undefined8 param_1)

{
  if (lRam00000001130932b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81ef68);
  return;
}



/* Entry: 104861140; end: 104861c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104861140(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long **pplVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long unaff_x20;
  long *plVar12;
  long *plVar13;
  long lStack_1f0;
  code *pcStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  undefined8 auStack_168 [3];
  long *plStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  long *plStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_1d0 = (long)&lStack_1f0 - extraout_x8;
  plVar12 = (long *)(unaff_x20 + _DAT_113093280);
  *plVar12 = 0;
  plVar12[1] = 0;
  plVar1 = (long *)(unaff_x20 + _DAT_113093288);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar4 = _DAT_1138153e8;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  pcStack_1e8 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
  lStack_1d8 = lVar4;
  lStack_1e0 = lVar5;
  (*pcStack_1e8)(unaff_x20 + lVar4,1,1);
  lVar4 = _DAT_1138153f0;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f0) = 0;
  lStack_1b0 = _DAT_1138153f8;
  *(undefined8 *)(unaff_x20 + _DAT_1138153f8) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113815400);
  *puVar9 = 0;
  puVar9[1] = 0;
  lStack_1f0 = _DAT_113815410;
  *(undefined8 *)(unaff_x20 + _DAT_113815410) = 0;
  lStack_1c8 = _DAT_113815418;
  *(undefined8 *)(unaff_x20 + _DAT_113815418) = 0;
  lStack_1c0 = _DAT_113815420;
  *(undefined8 *)(unaff_x20 + _DAT_113815420) = 0;
  lStack_1b8 = _DAT_113815428;
  *(undefined8 *)(unaff_x20 + _DAT_113815428) = 0;
  uVar6 = 0x6d614e7473726946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d614e7473726946,0xe900000000000065);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar5 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar2 = PTR___sypN_11034f1a8;
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    plVar13 = (long *)0x0;
    lVar5 = 0;
  }
  else {
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    plVar13 = plStack_150;
    lVar5 = lStack_148;
    if ((int)pplVar7 == 0) {
      plVar13 = (long *)0x0;
      lVar5 = 0;
    }
  }
  _swift_beginAccess(plVar12,auStack_c8,1,0);
  lVar8 = plVar12[1];
  *plVar12 = (long)plVar13;
  plVar12[1] = lVar5;
  _swift_bridgeObjectRelease(lVar8);
  uVar6 = 0x656d614e7473614c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d614e7473614c,0xe800000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar5 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    plVar12 = (long *)0x0;
    lVar5 = 0;
  }
  else {
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_90,puVar2 + 8,PTR___sSSN_11034da80,6);
    plVar12 = plStack_150;
    lVar5 = lStack_148;
    if ((int)pplVar7 == 0) {
      plVar12 = (long *)0x0;
      lVar5 = 0;
    }
  }
  _swift_beginAccess(plVar1,auStack_e0,1,0);
  lVar8 = plVar1[1];
  *plVar1 = (long)plVar12;
  plVar1[1] = lVar5;
  _swift_bridgeObjectRelease(lVar8);
  uVar6 = 0x656d614e72657355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656d614e72657355,0xe800000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar5 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    plVar12 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    FUN_104867578(0);
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_90,puVar2 + 8,uVar6,6);
    plVar12 = plStack_150;
    if ((int)pplVar7 == 0) {
      plVar12 = (long *)0x0;
    }
  }
  _swift_beginAccess(unaff_x20 + lVar4,auStack_f8,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long **)(unaff_x20 + lVar4) = plVar12;
  _objc_release(uVar6);
  uVar6 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f212290);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
LAB_104861614:
    plVar12 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    func_0x000104861d70(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_90,puVar2 + 8,uVar6,6);
    plVar12 = plStack_150;
    if (((ulong)pplVar7 & 1) == 0) goto LAB_104861614;
    plStack_90 = (long *)0x0;
    uVar6 = 0;
    FUN_104867578(0);
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (plVar12,&plStack_90,uVar6);
    _objc_release(plVar12);
    plVar12 = plStack_90;
  }
  lVar4 = lStack_1b0;
  _swift_beginAccess(unaff_x20 + lStack_1b0,auStack_110,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long **)(unaff_x20 + lVar4) = plVar12;
  _swift_bridgeObjectRelease(uVar6);
  uVar6 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2122b0);
  lVar4 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar6);
  if (lVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x104861c44);
    (*pcVar3)();
  }
  *(long *)(unaff_x20 + _DAT_113815408) = lVar4;
  uVar6 = 0x7961646874726942;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7961646874726942,0xe800000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  lVar5 = lStack_1d0;
  lVar4 = lStack_1e0;
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    uVar11 = 1;
    lVar4 = lStack_1e0;
  }
  else {
    lVar8 = lStack_1d0;
    _swift_dynamicCast(lStack_1d0,&plStack_90,puVar2 + 8,lStack_1e0,6);
    uVar11 = (uint)lVar8 ^ 1;
  }
  (*pcStack_1e8)(lVar5,uVar11,1,lVar4);
  lVar4 = lStack_1d8;
  _swift_beginAccess(unaff_x20 + lStack_1d8,&plStack_90,0x21,0);
  func_0x000100ed9cbc(lVar5,unaff_x20 + lVar4);
  _swift_endAccess(&plStack_90);
  uVar6 = 0x6d754e656e6f6850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6d754e656e6f6850,0xeb00000000726562);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    lStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = lStack_a8;
  plStack_90 = plStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    plVar12 = (long *)0x0;
  }
  else {
    uVar6 = 0;
    FUN_104866d7c(0);
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_90,puVar2 + 8,uVar6,6);
    plVar12 = plStack_150;
    if ((int)pplVar7 == 0) {
      plVar12 = (long *)0x0;
    }
  }
  lVar4 = lStack_1c8;
  _swift_beginAccess(unaff_x20 + lStack_1c8,auStack_128,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long **)(unaff_x20 + lVar4) = plVar12;
  _objc_release(uVar6);
  uVar6 = 0x6c69616d45;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c69616d45,0xe500000000000000);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    uStack_88 = 0;
    plStack_90 = (long *)0x0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_90,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  FUN_104861c44(&plStack_90,&plStack_b0,0x112d387f8,&UNK_10d902650);
  if (lStack_98 == 0) {
    func_0x000104861c8c(&plStack_b0,0x112d387f8,&UNK_10d902650);
LAB_104861974:
    FUN_104861c44(&plStack_90,&plStack_b0,0x112d387f8,&UNK_10d902650);
    if (lStack_98 == 0) {
      func_0x000104861c8c(&plStack_b0,0x112d387f8,&UNK_10d902650);
      goto LAB_104861a00;
    }
    uVar6 = 0;
    FUN_104865260(0);
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_b0,puVar2 + 8,uVar6,6);
    plVar12 = plStack_150;
    if (((ulong)pplVar7 & 1) == 0) goto LAB_104861a00;
  }
  else {
    pplVar7 = &plStack_150;
    _swift_dynamicCast(pplVar7,&plStack_b0,puVar2 + 8,PTR___sSSN_11034da80,6);
    lVar4 = lStack_148;
    plVar12 = plStack_150;
    if (((ulong)pplVar7 & 1) == 0) goto LAB_104861974;
    lVar8 = 0;
    FUN_104865260();
    lVar5 = lVar8;
    _objc_allocWithZone();
    plVar1 = (long *)(lVar5 + _DAT_113093398);
    *plVar1 = (long)plVar12;
    plVar1[1] = lVar4;
    *(undefined8 *)(lVar5 + _DAT_1130933a0) = 0;
    plVar12 = &lStack_1a8;
    lStack_1a8 = lVar5;
    lStack_1a0 = lVar8;
    _objc_msgSendSuper2(plVar12,PTR_s_init_1125d9248);
  }
  lVar4 = lStack_1f0;
  _swift_beginAccess(unaff_x20 + lStack_1f0,auStack_198,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long **)(unaff_x20 + lVar4) = plVar12;
  _objc_release(uVar6);
LAB_104861a00:
  uVar6 = 0x316e49646574704f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x316e49646574704f,0xea00000000004c54);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar4 == 0) {
    lStack_148 = 0;
    plStack_150 = (long *)0x0;
    lStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_150,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  lStack_a8 = lStack_148;
  plStack_b0 = plStack_150;
  lStack_98 = lStack_138;
  uStack_a0 = uStack_140;
  if (lStack_138 == 0) {
    func_0x000104861c8c(&plStack_b0,0x112d387f8,&UNK_10d902650);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    func_0x000104861d70(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar9 = auStack_168;
    _swift_dynamicCast(puVar9,&plStack_b0,puVar2 + 8,uVar6,6);
    uVar6 = auStack_168[0];
    if ((int)puVar9 == 0) {
      uVar6 = 0;
    }
  }
  lVar4 = lStack_1c0;
  _swift_beginAccess(unaff_x20 + lStack_1c0,auStack_168,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = uVar6;
  _objc_release(uVar10);
  uVar6 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2122d0);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (param_1 == 0) {
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
    lStack_148 = 0;
    plStack_150 = (long *)0x0;
    lStack_138 = 0;
    uStack_140 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&plStack_150,param_1);
    _swift_unknownObjectRelease(param_1);
    func_0x000104861c8c(&plStack_90,0x112d387f8,&UNK_10d902650);
  }
  lStack_a8 = lStack_148;
  plStack_b0 = plStack_150;
  lStack_98 = lStack_138;
  uStack_a0 = uStack_140;
  if (lStack_138 == 0) {
    func_0x000104861c8c(&plStack_b0,0x112d387f8,&UNK_10d902650);
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    FUN_104869ef8(0);
    puVar9 = &uStack_180;
    _swift_dynamicCast(puVar9,&plStack_b0,puVar2 + 8,uVar6,6);
    uVar6 = uStack_180;
    if ((int)puVar9 == 0) {
      uVar6 = 0;
    }
  }
  lVar4 = lStack_1b8;
  _swift_beginAccess(unaff_x20 + lStack_1b8,&plStack_b0,1,0);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined8 *)(unaff_x20 + lVar4) = uVar6;
  _objc_release(uVar10);
  FUN_104861108();
  _objc_msgSendSuper2(&stack0xfffffffffffffe88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104861c44; end: 104861ccb;  */

undefined8 FUN_104861c44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104861ccc; end: 104861cd3;  */

void FUN_104861ccc(void)

{
  if (lRam00000001130932b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81ef68);
  return;
}



/* Entry: 104861cd4; end: 104861daf;  */

void FUN_104861cd4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_78 = &UNK_10dd38ed8;
  puStack_70 = &UNK_10dd38ed8;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &UNK_10dd38ef0;
    puStack_58 = &UNK_10dd38ef0;
    puStack_50 = &UNK_10dd38ed8;
    puStack_48 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_40 = &UNK_10dd38ef0;
    puStack_38 = &UNK_10dd38ef0;
    puStack_30 = &UNK_10dd38ef0;
    puStack_28 = &UNK_10dd38ef0;
    _swift_updateClassMetadata2(param_1,0x100,0xb,&puStack_78,param_1 + 0x50);
  }
  return;
}



/* Entry: 104861db0; end: 104861df3;  */

void FUN_104861db0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104861df4; end: 104861e5b;  */

bool FUN_104861df4(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (param_2 == 0) {
    if (param_5 == 0) goto LAB_104861e44;
  }
  else if (param_5 != 0) {
    if (((param_1 != param_4) || (param_2 != param_5)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
      return false;
    }
LAB_104861e44:
    return param_3 == param_6;
  }
  return false;
}



/* Entry: 104861e5c; end: 104861e63;  */

void FUN_104861e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 104861e64; end: 104861e97;  */

undefined8 * FUN_104861e64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 104861e98; end: 104861eeb;  */

undefined8 * FUN_104861e98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 104861eec; end: 104861f27;  */

undefined8 * FUN_104861eec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 104861f28; end: 104862003;  */

int FUN_104861f28(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 104862004; end: 1048620db;  */

void FUN_104862004(void)

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



/* Entry: 1048620dc; end: 1048620fb;  */

void FUN_1048620dc(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1048620fc; end: 10486213b;  */

void FUN_1048620fc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130932c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd38f60;
  _swift_getWitnessTable(&UNK_10dd38f60,&UNK_1107a51d8);
  puRam00000001130932c8 = puVar1;
  return;
}



/* Entry: 10486213c; end: 10486214b;  */

undefined1  [16] FUN_10486213c(void)

{
  return ZEXT816(0x1107a51d8);
}



/* Entry: 10486214c; end: 1048621f7;  */

void FUN_10486214c(void)

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



/* Entry: 1048621f8; end: 1048621fb;  */

void FUN_1048621f8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130932d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39060;
  _swift_getWitnessTable(&UNK_10dd39060,&UNK_1107a52c0);
  puRam00000001130932d0 = puVar1;
  return;
}



/* Entry: 1048621fc; end: 10486223b;  */

void FUN_1048621fc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130932d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd39060;
  _swift_getWitnessTable(&UNK_10dd39060,&UNK_1107a52c0);
  puRam00000001130932d0 = puVar1;
  return;
}



/* Entry: 10486223c; end: 1048623b3;  */

bool FUN_10486223c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1048623b4; end: 104862403;  */

undefined8 FUN_1048623b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x1130932d8;
  func_0x0001000285a8(0x1130932d8,&UNK_10dd390b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104862404; end: 10486245b;  */

uint FUN_104862404(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = *(undefined1 *)(param_1 + 8);
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = *(undefined1 *)(param_2 + 8);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10486245c(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10486245c; end: 1048626d3;  */

undefined8 FUN_10486245c(ulong *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_198 [56];
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  byte bStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  byte bStack_f0;
  ulong uStack_e0;
  undefined1 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  byte bStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  byte bStack_78;
  
  uVar4 = *param_1;
  lVar5 = *param_2;
  if (uVar4 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else {
    if (lVar5 == 0) {
      return 0;
    }
    FUN_104861108(0);
    _objc_retain(lVar5);
    _objc_retain();
    uVar6 = uVar4;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    _objc_release(uVar4);
    _objc_release(lVar5);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[1] == '\f') {
    if ((char)param_2[1] != '\f') {
      return 0;
    }
  }
  else if ((char)param_1[1] != (char)param_2[1]) {
    return 0;
  }
  uVar8 = param_1[3];
  uVar4 = param_1[2];
  uVar14 = param_1[5];
  uVar12 = param_1[4];
  uVar9 = param_1[7];
  uVar6 = param_1[6];
  bVar1 = (byte)param_1[8];
  lVar10 = param_2[3];
  lVar5 = param_2[2];
  lVar15 = param_2[5];
  lVar13 = param_2[4];
  lVar11 = param_2[7];
  lVar7 = param_2[6];
  bVar2 = *(byte *)(param_2 + 8);
  lStack_160 = lVar5;
  lStack_158 = lVar10;
  lStack_150 = lVar13;
  lStack_148 = lVar15;
  lStack_140 = lVar7;
  lStack_138 = lVar11;
  bStack_130 = bVar2;
  uStack_120 = uVar4;
  uStack_118 = uVar8;
  uStack_110 = uVar12;
  uStack_108 = uVar14;
  uStack_100 = uVar6;
  uStack_f8 = uVar9;
  bStack_f0 = bVar1;
  if (uVar9 == 0) {
    if (lVar11 == 0) {
      FUN_1048623b4(&uStack_120,&lStack_a8);
      FUN_1048623b4(&lStack_160,&lStack_a8);
      FUN_104862bf8(uVar4,uVar8,uVar12,uVar14,uVar6,0,bVar1);
      return 1;
    }
  }
  else if (lVar11 != 0) {
    uStack_a0 = (undefined1)lVar10;
    bStack_78 = bVar2 & 1;
    uStack_d8 = (undefined1)uVar8;
    bStack_b0 = bVar1 & 1;
    uStack_e0 = uVar4;
    uStack_d0 = uVar12;
    uStack_c8 = uVar14;
    uStack_c0 = uVar6;
    uStack_b8 = uVar9;
    lStack_a8 = lVar5;
    lStack_98 = lVar13;
    lStack_90 = lVar15;
    lStack_88 = lVar7;
    lStack_80 = lVar11;
    FUN_1048623b4(&uStack_120,auStack_198);
    FUN_1048623b4(&lStack_160,auStack_198);
    puVar3 = &uStack_e0;
    FUN_10485c3bc(puVar3,&lStack_a8);
    FUN_104862bf8(lVar5,lVar10,lVar13,lVar15,lVar7,lVar11,bVar2);
    FUN_104862bf8(uVar4,uVar8,uVar12,uVar14,uVar6,uVar9,bVar1);
    if (((ulong)puVar3 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  FUN_1048623b4(&uStack_120,&lStack_a8);
  FUN_1048623b4(&lStack_160,&lStack_a8);
  FUN_104862bf8(uVar4,uVar8,uVar12,uVar14,uVar6,uVar9,bVar1);
  FUN_104862bf8(lVar5,lVar10,lVar13,lVar15,lVar7,lVar11,bVar2);
  return 0;
}



/* Entry: 1048626d4; end: 104862757;  */

long FUN_1048626d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 104862758; end: 104862827;  */

undefined8 * FUN_104862758(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar2 = param_2[7];
  _objc_retain();
  if (lVar2 == 0) {
    uVar3 = param_2[2];
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar3;
    param_1[5] = uVar5;
    param_1[4] = uVar4;
    uVar3 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar3;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  else {
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 == -1) {
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
    }
    else {
      uVar3 = param_2[2];
      func_0x00010485c360(uVar3,cVar1);
      param_1[2] = uVar3;
      *(char *)(param_1 + 3) = cVar1;
    }
    uVar3 = param_2[4];
    uVar4 = param_2[5];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    param_1[6] = param_2[6];
    param_1[7] = lVar2;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    _swift_bridgeObjectRetain(lVar2);
  }
  return param_1;
}



/* Entry: 104862828; end: 104862a07;  */

undefined8 * FUN_104862828(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _objc_retain();
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (param_1[7] == 0) {
    if (param_2[7] == 0) {
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      uVar6 = param_2[5];
      uVar5 = param_2[4];
      uVar8 = param_2[7];
      uVar7 = param_2[6];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      param_1[5] = uVar6;
      param_1[4] = uVar5;
      param_1[7] = uVar8;
      param_1[6] = uVar7;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
    }
    else {
      cVar1 = *(char *)(param_2 + 3);
      if (cVar1 == -1) {
        uVar3 = param_2[2];
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
        param_1[2] = uVar3;
      }
      else {
        uVar3 = param_2[2];
        func_0x00010485c360(uVar3,cVar1);
        param_1[2] = uVar3;
        *(char *)(param_1 + 3) = cVar1;
      }
      uVar3 = param_2[4];
      uVar4 = param_2[5];
      func_0x00010006c00c(uVar3,uVar4);
      param_1[4] = uVar3;
      param_1[5] = uVar4;
      param_1[6] = param_2[6];
      param_1[7] = param_2[7];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
      _swift_bridgeObjectRetain();
    }
  }
  else if (param_2[7] == 0) {
    FUN_104862a08(param_1 + 2);
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    uVar8 = param_2[3];
    uVar7 = param_2[2];
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
  }
  else {
    cVar1 = *(char *)(param_2 + 3);
    if (*(char *)(param_1 + 3) == -1) {
      if (cVar1 == -1) {
        uVar3 = param_2[2];
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
        param_1[2] = uVar3;
      }
      else {
        uVar3 = param_2[2];
        func_0x00010485c360(uVar3,cVar1);
        param_1[2] = uVar3;
        *(char *)(param_1 + 3) = cVar1;
      }
    }
    else if (cVar1 == -1) {
      FUN_10485c724(param_1 + 2);
      uVar2 = *(undefined1 *)(param_2 + 3);
      param_1[2] = param_2[2];
      *(undefined1 *)(param_1 + 3) = uVar2;
    }
    else {
      uVar4 = param_2[2];
      func_0x00010485c360(uVar4,cVar1);
      uVar3 = param_1[2];
      param_1[2] = uVar4;
      uVar2 = *(undefined1 *)(param_1 + 3);
      *(char *)(param_1 + 3) = cVar1;
      FUN_10485c594(uVar3,uVar2);
    }
    uVar3 = param_2[4];
    uVar5 = param_2[5];
    func_0x00010006c00c(uVar3,uVar5);
    uVar4 = param_1[4];
    uVar6 = param_1[5];
    param_1[4] = uVar3;
    param_1[5] = uVar5;
    func_0x00010006c090(uVar4,uVar6);
    param_1[6] = param_2[6];
    uVar3 = param_1[7];
    param_1[7] = param_2[7];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar3);
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  return param_1;
}



/* Entry: 104862a08; end: 104862a3b;  */

undefined8 FUN_104862a08(undefined8 param_1)

{
  (*(code *)(undefined *)0x10485c558)();
  return param_1;
}



/* Entry: 104862a3c; end: 104862b23;  */

undefined8 * FUN_104862a3c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (param_1[7] == 0) {
LAB_104862ab4:
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar5;
    uVar2 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
    return param_1;
  }
  lVar3 = param_2[7];
  if (lVar3 == 0) {
    FUN_104862a08(param_1 + 2);
    goto LAB_104862ab4;
  }
  if (*(char *)(param_1 + 3) != -1) {
    cVar1 = *(char *)(param_2 + 3);
    if (cVar1 != -1) {
      uVar2 = param_1[2];
      param_1[2] = param_2[2];
      *(char *)(param_1 + 3) = cVar1;
      FUN_10485c594(uVar2);
      goto LAB_104862ae8;
    }
    FUN_10485c724(param_1 + 2);
  }
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
LAB_104862ae8:
  uVar2 = param_1[4];
  uVar5 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  func_0x00010006c090(uVar2,uVar5);
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = lVar3;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 104862b24; end: 104862bf7;  */

int FUN_104862b24(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104899b68; end: 104899c2b;  */

void FUN_104899b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  
  func_0x0001000bc2e0(param_5,0x1130978f0,&UNK_10dd3d828);
  lVar2 = 0x11305f568;
  func_0x0001000285a8(0x11305f568,&UNK_10dd3d7c0);
  iVar1 = *(int *)(lVar2 + 0x50);
  *param_5 = param_2;
  param_5[1] = param_3;
  param_5[2] = param_1;
  func_0x0001000bc298(param_4,(long)param_5 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x0001000d0cdc();
  _swift_storeEnumTagMultiPayload(param_5,lVar2,2);
                    /* WARNING: Could not recover jumptable at 0x000104899c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_5,0,1,lVar2);
  return;
}



/* Entry: 104899c2c; end: 104899c33;  */

void FUN_104899c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001000bc2e0(puVar3,0x1130978f0,&UNK_10dd3d828);
  lVar2 = 0x11305f568;
  func_0x0001000285a8(0x11305f568,&UNK_10dd3d7c0);
  iVar1 = *(int *)(lVar2 + 0x50);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_1;
  func_0x0001000bc298(param_4,(long)puVar3 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x0001000d0cdc();
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,2);
                    /* WARNING: Could not recover jumptable at 0x000104899c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  return;
}



/* Entry: 104899c34; end: 104899cfb;  */

void FUN_104899c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  long lVar2;
  
  func_0x0001000bc2e0(param_6,0x1130978f0,&UNK_10dd3d828);
  lVar2 = 0x11305f558;
  func_0x0001000285a8(0x11305f558,&UNK_10dcd48f0);
  iVar1 = *(int *)(lVar2 + 0x60);
  *param_6 = param_3;
  param_6[1] = param_4;
  param_6[2] = param_1;
  param_6[3] = param_2;
  func_0x0001000bc298(param_5,(long)param_6 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x0001000d0cdc();
  _swift_storeEnumTagMultiPayload(param_6,lVar2,3);
                    /* WARNING: Could not recover jumptable at 0x000104899cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_6,0,1,lVar2);
  return;
}



/* Entry: 104899cfc; end: 104899d13;  */

void FUN_104899cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x0001000bc2e0(puVar3,0x1130978f0,&UNK_10dd3d828);
  lVar2 = 0x11305f558;
  func_0x0001000285a8(0x11305f558,&UNK_10dcd48f0);
  iVar1 = *(int *)(lVar2 + 0x60);
  *puVar3 = param_3;
  puVar3[1] = param_4;
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  func_0x0001000bc298(param_5,(long)puVar3 + (long)iVar1,0x112d373d8,&UNK_10d9014c0);
  lVar2 = 0;
  func_0x0001000d0cdc();
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,3);
                    /* WARNING: Could not recover jumptable at 0x000104899cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  return;
}



/* Entry: 104899d14; end: 10489a4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104899d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar2 = 0x112d373d8;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_88 = param_4;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar6 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12_01;
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar9 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  (*pcVar9)(lVar8,1,1,lVar2);
  (*pcVar9)(lVar7,1,1,lVar2);
  (*pcVar9)(lVar6,1,1,lVar2);
  (*pcVar9)(puVar5,1,1,lVar2);
  lVar3 = 0;
  func_0x0001000bbcd0();
  lVar2 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_113097828) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097830);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097838);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097840);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001000bc298(lVar8,lVar2 + _DAT_113097848,0x112d373d8,&UNK_10d9014c0);
  *(undefined1 *)(lVar2 + _DAT_113097850) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097858);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097860);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097868);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097870);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097878);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(lVar2 + _DAT_113097880) = 0;
  func_0x0001000bc298(lVar7,lVar2 + _DAT_113097888,0x112d373d8,&UNK_10d9014c0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_113097890);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001000bc298(lVar6,lVar2 + _DAT_113097898,0x112d373d8,&UNK_10d9014c0);
  *(undefined1 *)(lVar2 + _DAT_1130978a0) = 2;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978a8);
  *puVar1 = uStack_98;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978b0);
  *puVar1 = uStack_90;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978b8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  func_0x0001000bc298(uStack_88,lVar2 + _DAT_1130978c0,0x112d373d8,&UNK_10d9014c0);
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978c8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130978e0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  func_0x0001000bc298(puVar5,lVar2 + _DAT_1130978e8,0x112d373d8,&UNK_10d9014c0);
  plVar4 = &lStack_80;
  lStack_80 = lVar2;
  lStack_78 = lVar3;
  _objc_msgSendSuper2(plVar4,PTR_s_init_1125d9248);
  func_0x0001000bc2e0(puVar5,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(lVar6,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(lVar7,0x112d373d8,&UNK_10d9014c0);
  func_0x0001000bc2e0(lVar8,0x112d373d8,&UNK_10d9014c0);
  return plVar4;
}



/* Entry: 10489a4b4; end: 10489a61b;  */

int FUN_10489a4b4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489a530;
        goto LAB_10489a514;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489a514:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10489a530:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489a61c; end: 10489a65b;  */

void FUN_10489a61c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d8c8;
  _swift_getWitnessTable(&UNK_10dd3d8c8,&UNK_1107adb08);
  puRam0000000113097930 = puVar1;
  return;
}



/* Entry: 10489a65c; end: 10489a66b;  */

void FUN_10489a65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x0001000bc298(param_4,puVar4,0x112d373d8,&UNK_10d9014c0);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)puVar2 != 1) {
    __s10Foundation4DateV19_bridgeToObjectiveCSo6NSDateCyF();
    (**(code **)(lVar6 + 8))(puVar4,lVar1);
    puVar5 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,lVar3,param_2,param_3,puVar5);
  _objc_release(puVar5);
  return;
}



/* Entry: 10489a66c; end: 10489a6cb;  */

void FUN_10489a66c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489a6cc; end: 10489a6ff;  */

void FUN_10489a6cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = unaff_x20[2];
  __sSS4hash4intoys6HasherVz_tF(param_1,*unaff_x20,unaff_x20[1]);
  __ss6HasherV8_combineyySuF(uVar1);
  return;
}



/* Entry: 10489a700; end: 10489a75b;  */

void FUN_10489a700(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489a75c; end: 10489a777;  */

bool FUN_10489a75c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[2];
  uVar3 = param_2[2];
  if (((uVar1 != *param_2) || (param_1[1] != param_2[1])) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar1,param_1[1],*param_2,param_2[1],0), (uVar1 & 1) == 0)) {
    return false;
  }
  return (int)uVar2 == (int)uVar3;
}



/* Entry: 10489a778; end: 10489a7cb;  */

bool FUN_10489a778(ulong param_1,long param_2,int param_3,ulong param_4,long param_5,int param_6)

{
  if (((param_1 != param_4) || (param_2 != param_5)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_4,param_5,0), (param_1 & 1) == 0)) {
    return false;
  }
  return param_3 == param_6;
}



/* Entry: 10489a7cc; end: 10489a7cf;  */

void FUN_10489a7cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d9b0;
  _swift_getWitnessTable(&UNK_10dd3d9b0,&UNK_1107adc58);
  puRam0000000113097938 = puVar1;
  return;
}



/* Entry: 10489a7d0; end: 10489a80f;  */

void FUN_10489a7d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3d9b0;
  _swift_getWitnessTable(&UNK_10dd3d9b0,&UNK_1107adc58);
  puRam0000000113097938 = puVar1;
  return;
}



/* Entry: 10489a810; end: 10489a817;  */

void FUN_10489a810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10489a818; end: 10489a84b;  */

undefined8 * FUN_10489a818(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 10489a84c; end: 10489a89f;  */

undefined8 * FUN_10489a84c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10489a8a0; end: 10489a8db;  */

undefined8 * FUN_10489a8a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10489a8dc; end: 10489a97b;  */

int FUN_10489a8dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10489a97c; end: 10489aa53;  */

void FUN_10489a97c(void)

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



/* Entry: 10489aa54; end: 10489aa63;  */

void FUN_10489aa54(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10489aa64; end: 10489aa9f; -[_TtC15SnapAttribution24AttributedPageObjCHelper init] */

void FUN_10489aa64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010489aad0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10489aaa0; end: 10489b02f;  */

void FUN_10489aaa0(void)

{
  func_0x00010489aad0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10489b030; end: 10489b043;  */

bool FUN_10489b030(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10489b044; end: 10489b11b;  */

void FUN_10489b044(void)

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



/* Entry: 10489b11c; end: 10489b12b;  */

void FUN_10489b11c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10489b12c; end: 10489b13b; +[_TtC15SnapAttribution21JiraProjectObjCHelper getProjectNameFrom:] */

void FUN_10489b12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)&SUB_1000b030c)(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10489b13c; end: 10489b147; +[_TtC15SnapAttribution21JiraProjectObjCHelper getLabelFrom:] */

void FUN_10489b13c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  (*(code *)0x10489aaf0)(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10489b148; end: 10489b17f;  */

void FUN_10489b148(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  (*param_4)(param_3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10489b180; end: 10489b19f;  */

undefined8 FUN_10489b180(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_10489b230();
  uVar1 = 0;
  if ((param_2 & 0xff) != 1) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Entry: 10489b1a0; end: 10489b1c3; +[_TtC15SnapAttribution21JiraProjectObjCHelper getEnumFrom:] */

undefined8 FUN_10489b1a0(undefined8 param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_10489b230(param_3);
  uVar1 = 0;
  if ((param_2 & 0xff) != 1) {
    uVar1 = param_3;
  }
  return uVar1;
}



/* Entry: 10489b1c4; end: 10489b1ff; -[_TtC15SnapAttribution21JiraProjectObjCHelper init] */

void FUN_10489b1c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_10489b240();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10489b200; end: 10489b22f;  */

void FUN_10489b200(void)

{
  FUN_10489b240();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10489b230; end: 10489b23f;  */

undefined1  [16] FUN_10489b230(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0x31) {
    uVar1 = param_1;
  }
  auVar2[8] = 0x30 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 10489b240; end: 10489b25f;  */

void FUN_10489b240(void)

{
  _objc_opt_self(&PTR_PTR_1129df8b0);
  return;
}



/* Entry: 10489b260; end: 10489b263;  */

void FUN_10489b260(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3de24;
  _swift_getWitnessTable(&UNK_10dd3de24,&UNK_1107add30);
  puRam0000000113097968 = puVar1;
  return;
}



/* Entry: 10489b264; end: 10489b2a3;  */

void FUN_10489b264(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3de24;
  _swift_getWitnessTable(&UNK_10dd3de24,&UNK_1107add30);
  puRam0000000113097968 = puVar1;
  return;
}



/* Entry: 10489b2a4; end: 10489b2b3;  */

undefined1  [16] FUN_10489b2a4(void)

{
  return ZEXT816(0x1107add30);
}



/* Entry: 10489b2b4; end: 10489b4f7;  */

undefined1  [16] FUN_10489b2b4(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (((uint)param_2 & 0xff) == 1) {
    uVar3 = 0xeb0000000072656b;
    uVar2 = 0x6e61526567646142;
                    /* WARNING: Could not recover jumptable at 0x00010489b304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd3df00)[param_1] * 4 + 0x10489b308))
              (0x6e61526567646142,0xeb0000000072656b);
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = uVar2;
    return auVar4;
  }
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x0001000e48c0(param_1);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(param_2);
  auVar1._8_8_ = 0xee00237265764f65;
  auVar1._0_8_ = 0x6b61547070416e49;
  return auVar1;
}



/* Entry: 10489b4f8; end: 10489b5ab;  */

void FUN_10489b4f8(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    if (lVar2 == 2) {
      func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
      _swift_initStaticObject();
      func_0x000100c8a830();
    }
  }
  else {
    lVar1 = 0x112e04798;
    func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
    _swift_initStackObject();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(long *)(lVar1 + 0x20) = lVar2;
    func_0x000100c8a830();
    _swift_setDeallocating(lVar1);
  }
  return;
}



/* Entry: 10489b5ac; end: 10489b5b7;  */

undefined1  [16] FUN_10489b5ac(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *unaff_x20;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  uVar5 = (ulong)*(byte *)(unaff_x20 + 1);
  if (*(byte *)(unaff_x20 + 1) == 1) {
    uVar4 = 0xeb0000000072656b;
    uVar2 = 0x6e61526567646142;
                    /* WARNING: Could not recover jumptable at 0x00010489b304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd3df00)[lVar3] * 4 + 0x10489b308))
              (0x6e61526567646142,0xeb0000000072656b);
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar2;
    return auVar6;
  }
  __ss11_StringGutsV4growyySiF(0x10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  func_0x0001000e48c0(lVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  auVar1._8_8_ = 0xee00237265764f65;
  auVar1._0_8_ = 0x6b61547070416e49;
  return auVar1;
}



/* Entry: 10489b5b8; end: 10489b603;  */

void FUN_10489b5b8(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  func_0x00010489b4ac(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489b604; end: 10489b60f;  */

void FUN_10489b604(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((char)unaff_x20[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10dd3dfd0 + lVar1 * 8);
  }
  else {
    __ss6HasherV8_combineyySuF(2);
  }
  __ss6HasherV8_combineyySuF(lVar1);
  return;
}



/* Entry: 10489b610; end: 10489b657;  */

void FUN_10489b610(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar2 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x00010489b4ac(auStack_68,uVar2,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489b658; end: 10489b7e3;  */

ulong FUN_10489b658(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010489b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dd3df0b)[uVar1] * 4 + 0x10489b694))();
    return uVar1;
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    return 0;
  }
  return (ulong)((int)uVar1 == (int)*param_2);
}



/* Entry: 10489b7e4; end: 10489b807;  */

void FUN_10489b7e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489b808();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489b808; end: 10489b847;  */

void FUN_10489b808(void)

{
  undefined *puVar1;
  
  if (puRam00000001130979f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3df3c;
  _swift_getWitnessTable(&UNK_10dd3df3c,&UNK_1107ade38);
  puRam00000001130979f0 = puVar1;
  return;
}



/* Entry: 10489b848; end: 10489b84b;  */

void FUN_10489b848(void)

{
  undefined *puVar1;
  
  if (puRam00000001130979f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3df7c;
  _swift_getWitnessTable(&UNK_10dd3df7c,&UNK_1107ade38);
  puRam00000001130979f8 = puVar1;
  return;
}



/* Entry: 10489b84c; end: 10489b88b;  */

void FUN_10489b84c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130979f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3df7c;
  _swift_getWitnessTable(&UNK_10dd3df7c,&UNK_1107ade38);
  puRam00000001130979f8 = puVar1;
  return;
}



/* Entry: 10489b88c; end: 10489b997;  */

int FUN_10489b88c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10489b998; end: 10489ba43;  */

void FUN_10489b998(void)

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



/* Entry: 10489ba44; end: 10489ba8f;  */

undefined8 FUN_10489ba44(void)

{
  undefined8 uVar1;
  byte *unaff_x20;
  
  if (*unaff_x20 < 3) {
    return 0;
  }
  uVar1 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  func_0x000100c8a830();
  return uVar1;
}



/* Entry: 10489ba90; end: 10489ba9b;  */

undefined1  [16] FUN_10489ba90(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  pcVar1 = "WarmupBillboardReporter";
  uVar3 = 0xd000000000000014;
  if (*unaff_x20 != 0) {
    pcVar1 = "ActivityCenterFHPCampaigns";
    uVar3 = 0xd000000000000017;
  }
  pcVar2 = "ChangeLanguageInSettingsPrompt";
  uVar4 = 0xd00000000000001a;
  if (1 < *unaff_x20 - 2) {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 10489ba9c; end: 10489badb;  */

void FUN_10489ba9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097a00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e038;
  _swift_getWitnessTable(&UNK_10dd3e038,&UNK_1107adf28);
  puRam0000000113097a00 = puVar1;
  return;
}



/* Entry: 10489badc; end: 10489baff;  */

void FUN_10489badc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489bb00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489bb00; end: 10489bb3f;  */

void FUN_10489bb00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e060;
  _swift_getWitnessTable(&UNK_10dd3e060,&UNK_1107adf28);
  puRam0000000113097a08 = puVar1;
  return;
}



/* Entry: 10489bb40; end: 10489bcab;  */

int FUN_10489bb40(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489bbbc;
        goto LAB_10489bba0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489bba0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_10489bbbc:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489bcac; end: 10489bd4b;  */

void FUN_10489bcac(void)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(0);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489bd4c; end: 10489bd7b;  */

undefined * FUN_10489bd4c(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [72];
  
  lVar3 = 0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
  _swift_initStaticObject();
  puVar10 = *(undefined **)(lVar3 + 0x10);
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d7b088,&UNK_10d9d8120);
    puVar2 = puVar10;
    func_0x000107c602e8();
    puVar12 = (undefined *)0x0;
    do {
      uVar11 = *(ulong *)(lVar3 + 0x20 + (long)puVar12 * 8);
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar2 + 0x28));
      uVar4 = uVar11;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)(byte)puVar2[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar2 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar11) goto code_r0x000100c8a8b4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar2 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar2 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(ulong *)(lVar5 + uVar4 * 8) = uVar11;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c8a968);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
code_r0x000100c8a8b4:
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
  return puVar2;
}



/* Entry: 10489bd7c; end: 10489bd9b;  */

undefined1  [16] FUN_10489bd7c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f2150c0;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Entry: 10489bd9c; end: 10489bddb;  */

void FUN_10489bd9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097a40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e0e8;
  _swift_getWitnessTable(&UNK_10dd3e0e8,&UNK_1107ae018);
  puRam0000000113097a40 = puVar1;
  return;
}



/* Entry: 10489bddc; end: 10489bdff;  */

void FUN_10489bddc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489be00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489be00; end: 10489be3f;  */

void FUN_10489be00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e110;
  _swift_getWitnessTable(&UNK_10dd3e110,&UNK_1107ae018);
  puRam0000000113097a48 = puVar1;
  return;
}



/* Entry: 10489be40; end: 10489c0eb;  */

uint FUN_10489be40(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 10489c0ec; end: 10489c233;  */

void FUN_10489c0ec(void)

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



/* Entry: 10489c234; end: 10489c23f;  */

/* WARNING: Removing unreachable block (ram,0x00010489c310) */
/* WARNING: Removing unreachable block (ram,0x00010489c330) */

undefined1  [16] FUN_10489c234(void)

{
  byte bVar1;
  bool in_CY;
  uint uVar2;
  char *pcVar4;
  ulong uVar5;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_70 [80];
  uint uVar3;
  char *pcVar6;
  
  bVar1 = *unaff_x20;
  pcVar6 = (char *)(ulong)bVar1;
  uVar3 = (uint)bVar1;
  uVar2 = (uint)bVar1;
  pcVar7 = (char *)0xed00006e6f697373;
  pcVar4 = (char *)0x6572706d49707041;
  puVar9 = &UNK_10dd3e190;
  switch(bVar1) {
  case 0:
    goto code_r0x00010489bfdc;
  default:
    pcVar6 = "tivityInfoProvider";
  case 0x28:
  case 0x36:
  case 0x76:
  case 0x92:
  case 0xd0:
  case 0xde:
    pcVar6 = pcVar6 + 0x220;
  case 0x1b:
  case 0x2f:
  case 0x43:
  case 0x57:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x83:
  case 0x8b:
  case 0x8e:
  case 0xc3:
  case 0xd7:
  case 0xeb:
  case 0xff:
    pcVar6 = pcVar6 + -0x20;
  case 0x26:
  case 0x4e:
  case 0xce:
  case 0xf6:
    pcVar7 = (char *)((ulong)pcVar6 | 0x8000000000000000);
  case 0x50:
  case 0x90:
  case 0xf8:
    pcVar6 = (char *)0x11;
code_r0x00010489bf80:
    auVar10._8_8_ = pcVar7;
    auVar10._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 9;
    return auVar10;
  case 2:
    auVar15._8_8_ = 0x800000010f2151e0;
    auVar15._0_8_ = 0xd000000000000016;
    return auVar15;
  case 3:
    pcVar7 = (char *)0x800000010f2151c0;
    pcVar4 = (char *)0xd000000000000018;
  case 0x7c:
    auVar16._8_8_ = pcVar7;
    auVar16._0_8_ = pcVar4;
    return auVar16;
  case 4:
    pcVar7 = (char *)0x800000010f215190;
    pcVar6 = (char *)0xd000000000000011;
  case 0x1c:
    auVar12._8_8_ = pcVar7;
    auVar12._0_8_ = pcVar6 + 0x10;
    return auVar12;
  case 5:
    pcVar7 = (char *)0x800000010f215170;
  case 0x80:
  case 0xa0:
  case 0xaa:
    pcVar6 = (char *)0xa;
    puVar9 = (undefined *)0x11;
  case 0x45:
  case 0x85:
  case 0xac:
  case 0xc5:
  case 0xed:
    puVar9 = (undefined *)((ulong)puVar9 | 0xd000000000000000);
code_r0x00010489c07c:
    auVar18._0_8_ = (ulong)puVar9 | (ulong)pcVar6;
    auVar18._8_8_ = pcVar7;
    return auVar18;
  case 6:
    pcVar7 = (char *)0xe400000000000000;
    pcVar4 = (char *)0x6441;
  case 0x59:
    auVar19._4_4_ = 0;
    auVar19._0_4_ = (uint)pcVar4 & 0xffff | 0x49550000;
    auVar19._8_8_ = pcVar7;
    return auVar19;
  case 7:
    pcVar6 = "AdServeResponseHandling";
  case 0x68:
    auVar17._8_8_ = (ulong)pcVar6 | 0x8000000000000000;
    auVar17._0_8_ = 0xd000000000000020;
    return auVar17;
  case 8:
    pcVar6 = "tivityInfoProvider";
  case 0xb2:
    pcVar7 = (char *)((ulong)(pcVar6 + 0x120) | 0x8000000000000000);
    pcVar6 = (char *)0x11;
  case 0x70:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
code_r0x00010489c0d0:
    auVar21._0_8_ = (ulong)pcVar6 | 6;
    auVar21._8_8_ = pcVar7;
    return auVar21;
  case 9:
  case 0x58:
    auVar14._8_8_ = 0x800000010f215100;
    auVar14._0_8_ = 0xd000000000000015;
    return auVar14;
  case 10:
    pcVar7 = (char *)0x686361437364;
  case 0x54:
  case 0x5c:
  case 100:
  case 0x6c:
    pcVar7 = (char *)((ulong)pcVar7 & 0xffffffffffff | 0xef65000000000000);
    pcVar4 = (char *)0x77657250;
code_r0x00010489c0ac:
    auVar20._0_8_ = (ulong)pcVar4 & 0xffffffff | 0x416d726100000000;
    auVar20._8_8_ = pcVar7;
    return auVar20;
  case 0xb:
    auVar11._8_8_ = 0xe800000000000000;
    auVar11._0_8_ = 0x7472657373416441;
    return auVar11;
  case 0xc:
    pcVar4 = (char *)0xd000000000000011;
  case 0x30:
    pcVar7 = (char *)0x800000010f2150e0;
code_r0x00010489bfdc:
    auVar13._8_8_ = pcVar7;
    auVar13._0_8_ = pcVar4;
    return auVar13;
  case 0x18:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case 0xa3:
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case 0xb4:
  case 0xa1:
  case 0xa2:
  case 0xa7:
  case 0xb1:
    pcVar6 = pcVar4;
code_r0x00010489c140:
    uVar5 = (ulong)*unaff_x20;
    __ss6HasherV8_combineyySuF(pcVar6,uVar5);
    auVar24._8_8_ = pcVar7;
    auVar24._0_8_ = uVar5;
    return auVar24;
  case 0x19:
  case 0x2d:
  case 0x41:
  case 0x55:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x81:
  case 0xc1:
  case 0xd5:
  case 0xe9:
  case 0xfd:
    goto code_r0x00010489c368;
  case 0x1a:
  case 0x2e:
  case 0x42:
  case 0x56:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x82:
  case 0x8a:
  case 0xc2:
  case 0xd6:
  case 0xea:
  case 0xfe:
    goto code_r0x00010489c204;
  case 0x1d:
    goto code_r0x00010489c07c;
  case 0x1e:
  case 0x46:
  case 0x86:
  case 0xc6:
  case 0xee:
    goto code_r0x00010489c224;
  case 0x2c:
  case 0xa8:
  case 0xaf:
    goto code_r0x00010489c100;
  case 0x32:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x96:
  case 0xda:
    if (puRam0000000113097b60 != (undefined *)0x0) {
      auVar27._8_8_ = 0xed00006e6f697373;
      auVar27._0_8_ = puRam0000000113097b60;
      return auVar27;
    }
  case 0xc0:
    puVar9 = &UNK_10dd3e1a8;
    puVar8 = &UNK_1107ae108;
    _swift_getWitnessTable(&UNK_10dd3e1a8,&UNK_1107ae108);
    puRam0000000113097b60 = puVar9;
    auVar28._8_8_ = puVar8;
    auVar28._0_8_ = puVar9;
    return auVar28;
  case 0x33:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x97:
  case 0xdb:
    goto LAB_10489c344;
  case 0x3c:
    goto LAB_10489c33c;
  case 0x3d:
    _swift_getWitnessTable();
  case 0x7d:
  case 0x99:
  case 0xe5:
    pcRam0000000113097b68 = pcVar4;
    auVar30._8_8_ = pcVar7;
    auVar30._0_8_ = pcVar4;
    return auVar30;
  case 0x3e:
  case 0x7e:
  case 0x9a:
  case 0xe6:
    break;
  case 0x3f:
  case 0x7f:
  case 0x9b:
  case 0xe7:
    goto code_r0x00010489bf80;
  case 0x40:
    goto code_r0x00010489c0d0;
  case 0x44:
    if (uVar3 != 2) {
      uVar3 = uRam6572706d49707042 & 0xff;
      goto code_r0x00010489c35c;
    }
    uVar2 = uRam6572706d49707042 & 0xffff;
    if ((short)uRam6572706d49707042 != 0) goto LAB_10489c344;
    goto LAB_10489c360;
  case 0x60:
code_r0x00010489c35c:
    uVar2 = uVar3;
    goto joined_r0x00010489c35c;
  case 0x61:
  case 0x31:
  case 0x69:
  case 0x71:
    in_CY = true;
code_r0x00010489c2ec:
    if (in_CY) {
code_r0x00010489c2f0:
LAB_10489c33c:
      uVar2 = uRam6572706d49707042;
joined_r0x00010489c35c:
      if (uVar2 != 0) {
LAB_10489c344:
        auVar31._4_4_ = 0;
        auVar31._0_4_ = ((uint)bRam6572706d49707041 | uVar2 << 8) - 0xc;
        auVar31._8_8_ = 0xed00006e6f697373;
        return auVar31;
      }
    }
LAB_10489c360:
    uVar3 = (uint)bRam6572706d49707041;
    goto code_r0x00010489c364;
  case 0x84:
    goto code_r0x00010489c21c;
  case 0x88:
    goto code_r0x00010489c0ac;
  case 0x89:
    goto code_r0x00010489c364;
  case 0x94:
    auVar22._1_7_ = 0;
    auVar22[0] = (uint)bVar1 == (uint)bRamed00006e6f697373;
    auVar22._8_8_ = 0xed00006e6f697373;
    return auVar22;
  case 0x95:
  case 0xd8:
    goto code_r0x00010489c2ec;
  case 0x98:
    goto code_r0x00010489c1cc;
  case 0xa4:
  case 0xae:
    goto code_r0x00010489c110;
  case 0xa5:
    goto code_r0x00010489c0f4;
  case 0xa6:
    goto code_r0x00010489c140;
  case 0xa9:
  case 0xab:
    goto code_r0x00010489c0fc;
  case 0xad:
    goto code_r0x00010489c11c;
  case 0xb0:
    goto code_r0x00010489c124;
  case 0xb5:
    goto code_r0x00010489c118;
  case 0xc4:
    auVar25._8_8_ = 0xed00006e6f697373;
    auVar25._0_8_ = 0x6572706d49707041;
    return auVar25;
  case 0xd4:
    goto code_r0x00010489c220;
  case 0xd9:
    goto code_r0x00010489c2f0;
  case 0xe4:
  case 0x5a:
    auVar29._8_8_ = 0xed00006e6f697373;
    auVar29._0_8_ = 0x6572706d49707041;
    return auVar29;
  case 0xe8:
    if (in_CY) goto code_r0x00010489c200;
    unaff_x19 = (char *)0x113097b38;
    goto code_r0x00010489c208;
  case 0xec:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xb3:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(char **)((long)register0x00000008 + 0x58) = unaff_x19;
code_r0x00010489c0f4:
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x00010489c0fc:
    unaff_x19 = (char *)(ulong)*unaff_x20;
    goto code_r0x00010489c100;
  case 0xfc:
    goto code_r0x00010489c1c0;
  }
  puVar9 = (undefined *)0x1;
code_r0x00010489c1c0:
  uVar3 = (int)puVar9 << (ulong)(bVar1 & 0x1f);
  pcVar6 = (char *)(ulong)uVar3;
  if ((uVar3 & 0x380) == 0) {
code_r0x00010489c1cc:
    if (((ulong)pcVar6 & 0x1440) == 0) goto code_r0x00010489c228;
code_r0x00010489c200:
    unaff_x19 = (char *)0x113097000;
code_r0x00010489c204:
    unaff_x19 = unaff_x19 + 0xa88;
  }
code_r0x00010489c208:
  pcVar4 = (char *)0x112e04798;
  func_0x0001000285a8(0x112e04798,&UNK_10dd3e030);
code_r0x00010489c21c:
  pcVar7 = unaff_x19;
  goto code_r0x00010489c220;
code_r0x00010489c100:
  __ss6HasherV5_seedABSi_tcfC((undefined1 *)((long)register0x00000008 + 8),0);
code_r0x00010489c110:
  pcVar4 = unaff_x19;
  __ss6HasherV8_combineyySuF(pcVar4);
code_r0x00010489c118:
  goto code_r0x00010489c11c;
code_r0x00010489c220:
  _swift_initStaticObject();
  goto code_r0x00010489c224;
code_r0x00010489c11c:
  __ss6HasherV9_finalizeSiyF();
code_r0x00010489c124:
  auVar23._8_8_ = pcVar7;
  auVar23._0_8_ = pcVar4;
  return auVar23;
code_r0x00010489c364:
  in_CY = 0xc < uVar3;
  uVar3 = uVar3 - 0xd;
code_r0x00010489c368:
  if (!in_CY) {
    uVar3 = 0xffffffff;
  }
  auVar32._4_4_ = 0;
  auVar32._0_4_ = uVar3 + 1;
  auVar32._8_8_ = 0xed00006e6f697373;
  return auVar32;
code_r0x00010489c224:
  func_0x000100c8a830();
code_r0x00010489c228:
  auVar26._8_8_ = pcVar7;
  auVar26._0_8_ = pcVar4;
  return auVar26;
}



/* Entry: 10489c240; end: 10489c27f;  */

void FUN_10489c240(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097b60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e1a8;
  _swift_getWitnessTable(&UNK_10dd3e1a8,&UNK_1107ae108);
  puRam0000000113097b60 = puVar1;
  return;
}



/* Entry: 10489c280; end: 10489c2a3;  */

void FUN_10489c280(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489c2a4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489c2a4; end: 10489c2e3;  */

void FUN_10489c2a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097b68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e1d0;
  _swift_getWitnessTable(&UNK_10dd3e1d0,&UNK_1107ae108);
  puRam0000000113097b68 = puVar1;
  return;
}



/* Entry: 10489c2e4; end: 10489c45b;  */

int FUN_10489c2e4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489c360;
        goto LAB_10489c344;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489c344:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_10489c360:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489c45c; end: 10489c507;  */

void FUN_10489c45c(void)

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



/* Entry: 10489c508; end: 10489c50b;  */

void FUN_10489c508(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e250;
  _swift_getWitnessTable(&UNK_10dd3e250,&UNK_1107ae1f8);
  puRam0000000113097b70 = puVar1;
  return;
}



/* Entry: 10489c50c; end: 10489c54b;  */

void FUN_10489c50c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e250;
  _swift_getWitnessTable(&UNK_10dd3e250,&UNK_1107ae1f8);
  puRam0000000113097b70 = puVar1;
  return;
}



/* Entry: 10489c54c; end: 10489c59f;  */

undefined8 FUN_10489c54c(void)

{
  return 0;
}



/* Entry: 10489c5a0; end: 10489c5c3;  */

void FUN_10489c5a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489c5c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489c5c4; end: 10489c603;  */

void FUN_10489c5c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e278;
  _swift_getWitnessTable(&UNK_10dd3e278,&UNK_1107ae1f8);
  puRam0000000113097b78 = puVar1;
  return;
}



/* Entry: 10489c604; end: 10489c767;  */

int FUN_10489c604(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489c680;
        goto LAB_10489c664;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489c664:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_10489c680:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489c768; end: 10489c8ab;  */

void FUN_10489c768(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if (param_2 < 4) {
    uVar5 = 0x800000010f215480;
    uVar4 = 0xd000000000000022;
    if (param_2 != 2) {
      uVar5 = 0xe700000000000000;
      uVar4 = 0x64616f6c657270;
    }
    pcVar2 = "featureSyncJobProcessor";
    uVar3 = 0xd000000000000015;
    if (param_2 != 0) {
      pcVar2 = "esSyncJobProcessor";
      uVar3 = 0xd000000000000017;
    }
    if (param_2 < 2) {
      uVar4 = uVar3;
      uVar5 = (ulong)pcVar2 | 0x8000000000000000;
    }
  }
  else {
    uVar5 = 0x800000010f215440;
    uVar4 = 0xd000000000000010;
    if (param_2 != 6) {
      uVar5 = 0xef72656469766f72;
      uVar4 = 0x507463656a627573;
    }
    uVar1 = 0xee0073746e656970;
    uVar3 = 0x696365526b6e6172;
    if (param_2 != 4) {
      uVar1 = 0x800000010f215460;
      uVar3 = 0xd000000000000011;
    }
    if (param_2 < 6) {
      uVar4 = uVar3;
      uVar5 = uVar1;
    }
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 10489c8ac; end: 10489c9f7;  */

undefined1  [16] FUN_10489c8ac(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    pcVar2 = "metaInfoProvider";
    if (param_1 != 2) {
      pcVar2 = "extensionInfoProvider";
    }
    uVar6 = 0x800000010f215320;
    uVar4 = 0xd00000000000001b;
    if (param_1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar4 = 0x657645656b616873;
    }
    uVar1 = (ulong)pcVar2 | 0x8000000000000000;
    uVar5 = 0xd000000000000010;
    if (param_1 < 2) {
      uVar1 = uVar6;
      uVar5 = uVar4;
    }
    auVar8._8_8_ = uVar1;
    auVar8._0_8_ = uVar5;
    return auVar8;
  }
  pcVar2 = "featureSettingsProvider";
  uVar4 = 0xd000000000000016;
  if (param_1 != 7) {
    pcVar2 = "DeepLinkHandling";
    uVar4 = 0xd000000000000017;
  }
  pcVar3 = "startSyncManagerUnauth";
  uVar5 = 0xd000000000000014;
  if (param_1 != 6) {
    pcVar3 = pcVar2;
    uVar5 = uVar4;
  }
  pcVar2 = "composerLogProvider";
  uVar4 = 0xd000000000000015;
  if (param_1 != 4) {
    pcVar2 = "startSyncManagerAuth";
    uVar4 = 0xd000000000000013;
  }
  if (param_1 < 6) {
    pcVar3 = pcVar2;
    uVar5 = uVar4;
  }
  auVar7._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Entry: 10489c9f8; end: 10489ca8f;  */

void FUN_10489c9f8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10489cd44(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10489ca90; end: 10489ca97;  */

void FUN_10489ca90(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 4) {
    pcVar2 = "metaInfoProvider";
    if (bVar1 != 2) {
      pcVar2 = "extensionInfoProvider";
    }
    uVar6 = 0x800000010f215320;
    uVar4 = 0xd00000000000001b;
    if (bVar1 != 0) {
      uVar6 = 0xea0000000000746e;
      uVar4 = 0x657645656b616873;
    }
    uVar5 = 0xd000000000000010;
    uVar7 = (ulong)pcVar2 | 0x8000000000000000;
    if (bVar1 < 2) {
      uVar5 = uVar4;
      uVar7 = uVar6;
    }
  }
  else {
    pcVar2 = "featureSettingsProvider";
    uVar4 = 0xd000000000000016;
    if (bVar1 != 7) {
      pcVar2 = "DeepLinkHandling";
      uVar4 = 0xd000000000000017;
    }
    pcVar3 = "startSyncManagerUnauth";
    uVar5 = 0xd000000000000014;
    if (bVar1 != 6) {
      pcVar3 = pcVar2;
      uVar5 = uVar4;
    }
    pcVar2 = "composerLogProvider";
    uVar4 = 0xd000000000000015;
    if (bVar1 != 4) {
      pcVar2 = "startSyncManagerAuth";
      uVar4 = 0xd000000000000013;
    }
    if (bVar1 < 6) {
      pcVar3 = pcVar2;
      uVar5 = uVar4;
    }
    uVar7 = (ulong)pcVar3 | 0x8000000000000000;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 10489ca98; end: 10489cb43;  */

void FUN_10489ca98(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x0001009252c8(auStack_68,uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489cb44; end: 10489cb4b;  */

undefined1  [16] FUN_10489cb44(void)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  byte *unaff_x20;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  bVar1 = *unaff_x20;
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      auVar12._8_8_ = 0xee00707574726174;
      auVar12._0_8_ = 0x5374736f50523243;
      return auVar12;
    }
    if (bVar1 == 10) {
      auVar10._8_8_ = 0x800000010f215360;
      auVar10._0_8_ = 0xd000000000000017;
      return auVar10;
    }
  }
  else {
    if (bVar1 == 0xb) {
      auVar13._8_8_ = 0x800000010f215340;
      auVar13._0_8_ = 0xd000000000000013;
      return auVar13;
    }
    if (bVar1 == 0xc) {
      auVar11._8_8_ = 0xee00636e79536e65;
      auVar11._0_8_ = 0x6b6f546563617254;
      return auVar11;
    }
  }
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 4;
  *(undefined8 *)(lVar2 + 0x10) = 2;
  *(undefined8 *)(lVar2 + 0x20) = 0x523253;
  *(undefined8 *)(lVar2 + 0x28) = 0xe300000000000000;
  if (bVar1 < 4) {
    if (1 < bVar1) {
      uVar9 = 0xd000000000000010;
      if (bVar1 == 2) {
        pcVar8 = "lastPageProvider";
      }
      else {
        pcVar8 = "metaInfoProvider";
      }
      uVar7 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
      goto code_r0x0001000ab964;
    }
    if (bVar1 != 0) {
      uVar7 = 0xea0000000000746e;
      uVar9 = 0x657645656b616873;
      goto code_r0x0001000ab964;
    }
    pcVar8 = "startupCompleteTimeProvider";
    uVar9 = 0xb;
  }
  else {
    if (5 < bVar1) {
      if (bVar1 == 6) {
        uVar7 = 0x800000010f215280;
        uVar9 = 0xd000000000000014;
      }
      else if (bVar1 == 7) {
        uVar7 = 0x800000010f215260;
        uVar9 = 0xd000000000000016;
      }
      else {
        uVar7 = 0x800000010f215240;
        uVar9 = 0xd000000000000017;
      }
      goto code_r0x0001000ab964;
    }
    if (bVar1 != 4) {
      uVar7 = 0x800000010f2152a0;
      uVar9 = 0xd000000000000013;
      goto code_r0x0001000ab964;
    }
    pcVar8 = "extensionInfoProvider";
    uVar9 = 5;
  }
  uVar7 = (ulong)(pcVar8 + -0x20) | 0x8000000000000000;
  uVar9 = uVar9 | 0xd000000000000010;
code_r0x0001000ab964:
  *(ulong *)(lVar2 + 0x30) = uVar9;
  *(ulong *)(lVar2 + 0x38) = uVar7;
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x23;
  uVar6 = 0xe100000000000000;
  func_0x000107c5fa80(0x23,0xe100000000000000,uVar3,uVar4);
  func_0x000107c61574(lVar2);
  auVar14._8_8_ = uVar6;
  auVar14._0_8_ = uVar5;
  return auVar14;
}



/* Entry: 10489cb4c; end: 10489cbf7;  */

void FUN_10489cb4c(void)

{
  byte bVar1;
  undefined8 uVar2;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar2 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_10489cbac:
        __ss6HasherV8_combineyySuF(2);
        func_0x0001009252c8(auStack_68,bVar1);
        goto LAB_10489cbe0;
      }
      uVar2 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar2 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_10489cbac;
    uVar2 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar2);
LAB_10489cbe0:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489cbf8; end: 10489cc8f;  */

void FUN_10489cbf8(undefined8 param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar4 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_10489cc48:
        __ss6HasherV8_combineyySuF(2);
        if (bVar1 < 4) {
          pcVar2 = "metaInfoProvider";
          if (bVar1 != 2) {
            pcVar2 = "extensionInfoProvider";
          }
          uVar6 = 0x800000010f215320;
          uVar4 = 0xd00000000000001b;
          if (bVar1 != 0) {
            uVar6 = 0xea0000000000746e;
            uVar4 = 0x657645656b616873;
          }
          uVar5 = 0xd000000000000010;
          uVar7 = (ulong)pcVar2 | 0x8000000000000000;
          if (bVar1 < 2) {
            uVar5 = uVar4;
            uVar7 = uVar6;
          }
        }
        else {
          pcVar2 = "featureSettingsProvider";
          uVar4 = 0xd000000000000016;
          if (bVar1 != 7) {
            pcVar2 = "DeepLinkHandling";
            uVar4 = 0xd000000000000017;
          }
          pcVar3 = "startSyncManagerUnauth";
          uVar5 = 0xd000000000000014;
          if (bVar1 != 6) {
            pcVar3 = pcVar2;
            uVar5 = uVar4;
          }
          pcVar2 = "composerLogProvider";
          uVar4 = 0xd000000000000015;
          if (bVar1 != 4) {
            pcVar2 = "startSyncManagerAuth";
            uVar4 = 0xd000000000000013;
          }
          if (bVar1 < 6) {
            pcVar3 = pcVar2;
            uVar5 = uVar4;
          }
          uVar7 = (ulong)pcVar3 | 0x8000000000000000;
        }
        func_0x000107c5fb58(param_1,uVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
        return;
      }
      uVar4 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar4 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_10489cc48;
    uVar4 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar4);
  return;
}



/* Entry: 10489cc90; end: 10489cd37;  */

void FUN_10489cc90(void)

{
  byte bVar1;
  undefined8 uVar2;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  if (bVar1 < 0xb) {
    if (bVar1 == 9) {
      uVar2 = 0;
    }
    else {
      if (bVar1 != 10) {
LAB_10489ccec:
        __ss6HasherV8_combineyySuF(2);
        func_0x0001009252c8(auStack_68,bVar1);
        goto LAB_10489cd20;
      }
      uVar2 = 1;
    }
  }
  else if (bVar1 == 0xb) {
    uVar2 = 3;
  }
  else {
    if (bVar1 != 0xc) goto LAB_10489ccec;
    uVar2 = 4;
  }
  __ss6HasherV8_combineyySuF(uVar2);
LAB_10489cd20:
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489cd38; end: 10489cd43;  */

bool FUN_10489cd38(byte *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  uVar1 = (uint)*param_2;
  if (*param_1 < 0xb) {
    if (uVar2 == 9) {
      if (uVar1 != 9) {
        return false;
      }
      return true;
    }
    if (uVar2 == 10) {
      if (uVar1 != 10) {
        return false;
      }
      return true;
    }
  }
  else {
    if (uVar2 == 0xb) {
      if (uVar1 != 0xb) {
        return false;
      }
      return true;
    }
    if (uVar2 == 0xc) {
      if (uVar1 != 0xc) {
        return false;
      }
      return true;
    }
  }
  if (uVar1 - 9 < 4) {
    return false;
  }
  return uVar2 == uVar1;
}



/* Entry: 10489cd44; end: 10489cda7;  */

ulong FUN_10489cd44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  _swift_initStaticObject();
  __ss21_findStringSwitchCase5cases6stringSiSays06StaticB0VG_SStF();
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Entry: 10489cda8; end: 10489ce3b;  */

bool FUN_10489cda8(uint param_1,uint param_2)

{
  param_1 = param_1 & 0xff;
  param_2 = param_2 & 0xff;
  if (param_1 < 0xb) {
    if (param_1 == 9) {
      if (param_2 != 9) {
        return false;
      }
      return true;
    }
    if (param_1 == 10) {
      if (param_2 != 10) {
        return false;
      }
      return true;
    }
  }
  else {
    if (param_1 == 0xb) {
      if (param_2 != 0xb) {
        return false;
      }
      return true;
    }
    if (param_1 == 0xc) {
      if (param_2 != 0xc) {
        return false;
      }
      return true;
    }
  }
  if (param_2 - 9 < 4) {
    return false;
  }
  return param_1 == param_2;
}



/* Entry: 10489ce3c; end: 10489ce7b;  */

void FUN_10489ce3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097be0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e2f8;
  _swift_getWitnessTable(&UNK_10dd3e2f8,&UNK_1107ae2e8);
  puRam0000000113097be0 = puVar1;
  return;
}



/* Entry: 10489ce7c; end: 10489ce9f;  */

void FUN_10489ce7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10489cea0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10489cea0; end: 10489cedf;  */

void FUN_10489cea0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e3b4;
  _swift_getWitnessTable(&UNK_10dd3e3b4,&UNK_1107ae378);
  puRam0000000113097be8 = puVar1;
  return;
}



/* Entry: 10489cee0; end: 10489cee3;  */

void FUN_10489cee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e3f4;
  _swift_getWitnessTable(&UNK_10dd3e3f4,&UNK_1107ae378);
  puRam0000000113097bf0 = puVar1;
  return;
}



/* Entry: 10489cee4; end: 10489cf23;  */

void FUN_10489cee4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113097bf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3e3f4;
  _swift_getWitnessTable(&UNK_10dd3e3f4,&UNK_1107ae378);
  puRam0000000113097bf0 = puVar1;
  return;
}



/* Entry: 10489cf24; end: 10489d213;  */

int FUN_10489cf24(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10489cfa0;
        goto LAB_10489cf84;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10489cf84:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10489cfa0:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10489d214; end: 10489d26b;  */

void FUN_10489d214(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0001000ae32c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489d26c; end: 10489d277;  */

/* WARNING: Possible PIC construction at 0x0001000ebe7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aef5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010092540c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aed3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bf2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000be2f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c7128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e9294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e9494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e921c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e90b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000e914c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000aee7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100674dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001003e5384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085ae48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010085ae9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010059b7b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bb858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bb898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bb8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bb904: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b5e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b5ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b5ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b5f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b5e08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b7030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000b708c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001006e84c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000b7090) */
/* WARNING: Removing unreachable block (ram,0x0001000b7034) */
/* WARNING: Removing unreachable block (ram,0x0001000b5f04) */
/* WARNING: Removing unreachable block (ram,0x0001000b5ef4) */
/* WARNING: Removing unreachable block (ram,0x0001000b5ee4) */
/* WARNING: Removing unreachable block (ram,0x0001000b5e14) */
/* WARNING: Removing unreachable block (ram,0x0001000b5e8c) */
/* WARNING: Removing unreachable block (ram,0x0001000b5e94) */
/* WARNING: Removing unreachable block (ram,0x0001000b5e9c) */
/* WARNING: Removing unreachable block (ram,0x0001000b5ea0) */
/* WARNING: Removing unreachable block (ram,0x0001000b5ea8) */
/* WARNING: Removing unreachable block (ram,0x0001000b5eb0) */
/* WARNING: Removing unreachable block (ram,0x0001000b5eb4) */
/* WARNING: Removing unreachable block (ram,0x0001000b5ecc) */
/* WARNING: Removing unreachable block (ram,0x0001000bb908) */
/* WARNING: Removing unreachable block (ram,0x0001000bb8c0) */
/* WARNING: Removing unreachable block (ram,0x0001000bb89c) */
/* WARNING: Removing unreachable block (ram,0x0001000bb85c) */
/* WARNING: Removing unreachable block (ram,0x00010059b7b8) */
/* WARNING: Removing unreachable block (ram,0x00010085aea0) */
/* WARNING: Removing unreachable block (ram,0x00010085ae4c) */
/* WARNING: Removing unreachable block (ram,0x00010085aea4) */
/* WARNING: Removing unreachable block (ram,0x0001003e5388) */
/* WARNING: Removing unreachable block (ram,0x000100674dd0) */
/* WARNING: Removing unreachable block (ram,0x0001000aee80) */
/* WARNING: Removing unreachable block (ram,0x0001000e9150) */
/* WARNING: Removing unreachable block (ram,0x0001000e9190) */
/* WARNING: Removing unreachable block (ram,0x0001000e9448) */
/* WARNING: Removing unreachable block (ram,0x0001000e9170) */
/* WARNING: Removing unreachable block (ram,0x0001000e90b8) */
/* WARNING: Removing unreachable block (ram,0x0001000e90c4) */
/* WARNING: Removing unreachable block (ram,0x0001000e9110) */
/* WARNING: Removing unreachable block (ram,0x0001000e9118) */
/* WARNING: Removing unreachable block (ram,0x0001000e9120) */
/* WARNING: Removing unreachable block (ram,0x0001000e9128) */
/* WARNING: Removing unreachable block (ram,0x0001000e912c) */
/* WARNING: Removing unreachable block (ram,0x0001000e9138) */
/* WARNING: Removing unreachable block (ram,0x0001000e9140) */
/* WARNING: Removing unreachable block (ram,0x0001000e9148) */
/* WARNING: Removing unreachable block (ram,0x0001000e9220) */
/* WARNING: Removing unreachable block (ram,0x0001000e9498) */
/* WARNING: Removing unreachable block (ram,0x0001000e94a8) */
/* WARNING: Removing unreachable block (ram,0x0001000e9298) */
/* WARNING: Removing unreachable block (ram,0x0001000e929c) */
/* WARNING: Removing unreachable block (ram,0x0001000c712c) */
/* WARNING: Removing unreachable block (ram,0x0001000be2f4) */
/* WARNING: Removing unreachable block (ram,0x0001000bf2fc) */
/* WARNING: Removing unreachable block (ram,0x0001000bf40c) */
/* WARNING: Removing unreachable block (ram,0x0001000bf428) */
/* WARNING: Removing unreachable block (ram,0x0001000bf420) */
/* WARNING: Removing unreachable block (ram,0x0001000bf314) */
/* WARNING: Removing unreachable block (ram,0x0001000aed40) */
/* WARNING: Removing unreachable block (ram,0x000100925410) */
/* WARNING: Removing unreachable block (ram,0x0001000aef60) */
/* WARNING: Removing unreachable block (ram,0x0001000aef64) */
/* WARNING: Removing unreachable block (ram,0x0001000ebe80) */
/* WARNING: Removing unreachable block (ram,0x0001006e84c8) */
/* WARNING: Removing unreachable block (ram,0x0001000cef0c) */
/* WARNING: Removing unreachable block (ram,0x0001000cee28) */
/* WARNING: Removing unreachable block (ram,0x0001000cee30) */
/* WARNING: Removing unreachable block (ram,0x0001000cef14) */
/* WARNING: Removing unreachable block (ram,0x0001000e9488) */
/* WARNING: Removing unreachable block (ram,0x0001000cef4c) */
/* WARNING: Removing unreachable block (ram,0x0001000cef54) */
/* WARNING: Removing unreachable block (ram,0x0001000cef6c) */
/* WARNING: Removing unreachable block (ram,0x0001000cef70) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10489d26c(code *******param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  code *******pppppppcVar6;
  code *******pppppppcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  uint uVar22;
  uint6 uVar23;
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  code *pcVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  undefined1 *puVar32;
  char in_NG;
  bool in_ZR;
  undefined1 in_CY;
  char in_OV;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  bool bVar37;
  bool bVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  code *******pppppppcVar42;
  undefined8 uVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  code ******ppppppcVar46;
  code *******pppppppcVar47;
  code ******ppppppcVar48;
  long lVar49;
  undefined *puVar50;
  undefined1 *puVar51;
  code ******ppppppcVar52;
  undefined8 uVar53;
  byte *pbVar54;
  long lVar55;
  code *******pppppppcVar56;
  undefined8 uVar57;
  code *******UNRECOVERED_JUMPTABLE;
  code *******in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  char *pcVar58;
  long extraout_x8;
  long extraout_x8_00;
  ushort *puVar59;
  ulong uVar60;
  code *******pppppppcVar61;
  uint uVar62;
  long lVar63;
  char *pcVar64;
  code *****pppppcVar65;
  code *******pppppppcVar66;
  code *******pppppppcVar67;
  code *******pppppppcVar68;
  ulong uVar69;
  code *******pppppppcVar70;
  ulong uVar71;
  code *******pppppppcVar72;
  char *in_x12;
  code *******pppppppcVar73;
  uint uVar74;
  code *******pppppppcVar75;
  code *******in_x13;
  code *******in_x14;
  uint uVar76;
  code *******unaff_x19;
  code *******unaff_x20;
  code *******UNRECOVERED_JUMPTABLE_00;
  code *******unaff_x22;
  code ******ppppppcVar77;
  code *******unaff_x23;
  undefined *puVar78;
  ulong uVar79;
  code *******unaff_x24;
  long lVar80;
  code *******unaff_x25;
  code *******unaff_x26;
  ulong uVar81;
  code *******unaff_x27;
  code *******pppppppcVar82;
  code *******unaff_x28;
  undefined1 *unaff_x29;
  int iVar83;
  undefined8 unaff_x30;
  undefined1 in_b0;
  byte bVar84;
  undefined1 in_register_00005001;
  byte bVar85;
  undefined1 in_register_00005002;
  byte bVar86;
  undefined1 in_register_00005003;
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  undefined8 unaff_d8;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  code *******in_stack_00000000;
  code *******in_stack_00000008;
  undefined1 *in_stack_00000010;
  undefined8 in_stack_00000018;
  code *******in_stack_00000038;
  undefined4 *in_stack_00000040;
  code *******in_stack_00000048;
  byte *in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  int in_stack_00000068;
  code *******in_stack_00000078;
  code ******in_stack_00000098;
  uint in_stack_000000a0;
  code *******in_stack_000000a8;
  code *******in_stack_000000b0;
  code *******in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  long in_stack_000000d0;
  long in_stack_000000d8;
  long in_stack_000000e0;
  long in_stack_000000e8;
  code *******in_stack_000000f0;
  code *******in_stack_000000f8;
  code *******in_stack_00000100;
  undefined8 in_stack_00000138;
  int in_stack_0000014c;
  code *******pppppppcStack_f8;
  ulong uStack_f0;
  code *******pppppppcStack_e8;
  code *******pppppppcStack_e0;
  code *******pppppppcStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  uint uStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code ******ppppppcStack_98;
  undefined1 *puStack_90;
  code *******pppppppcStack_88;
  code *******pppppppcStack_70;
  code *******pppppppcStack_60;
  undefined8 in_stack_ffffffffffffffc8;
  
  pppppppcVar56 = (code *******)*unaff_x20;
  pppppppcVar75 = (code *******)unaff_x20[1];
  bVar84 = *(byte *)(unaff_x20 + 2);
  UNRECOVERED_JUMPTABLE = (code *******)(ulong)bVar84;
  puVar44 = &stack0xffffffffffffffd0;
  puVar51 = &stack0xffffffffffffffd0;
  puVar45 = &stack0xfffffffffffffff0;
  uVar62 = (uint)(bVar84 >> 2);
  pcVar58 = (char *)(ulong)uVar62;
  pcVar64 = &UNK_10dd3e5d8;
  uVar21 = *(ushort *)(&UNK_10dd3e5d8 + (long)pcVar58 * 2);
  pppppppcVar70 = (code *******)(ulong)uVar21;
  pppppppcVar68 = (code *******)(&UNK_1000ae360 + (long)pppppppcVar70 * 4);
  uVar76 = (uint)pppppppcVar56;
  uVar74 = (uint)pppppppcVar75;
  puVar31 = &stack0xffffffffffffffd0;
  puVar30 = &stack0xffffffffffffffd0;
  puVar32 = &stack0xffffffffffffffd0;
  pppppppcVar42 = param_1;
  pppppppcVar66 = pppppppcVar56;
  pppppppcVar47 = pppppppcVar56;
  pppppppcVar82 = unaff_x28;
  switch(bVar84 >> 2) {
  default:
    param_1 = (code *******)0x0;
  case 0x83:
  case 0x90:
  case 0x97:
  case 0xc4:
  case 0xcb:
  case 0xeb:
  case 0xf9:
    UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
code_r0x0001000ae368:
    func_0x000107c60690(param_1);
code_r0x0001000ae36c:
    pcVar58 = (char *)((ulong)UNRECOVERED_JUMPTABLE_00 & 0xff);
code_r0x0001000ae370:
    if ((code *******)pcVar58 == (code *******)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001000ae38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_1000aeb08 + (ulong)*(byte *)(pppppppcVar56 + 0x21ba7cc6) * 4))();
      auVar91._8_8_ = pppppppcVar47;
      auVar91._0_8_ = param_1;
      return auVar91;
    }
code_r0x0001000ae904:
    uVar43 = 2;
code_r0x0001000aeba8:
    func_0x000107c60690(uVar43);
    param_1 = pppppppcVar56;
    goto code_r0x0001000ae86c;
  case 1:
    param_1 = (code *******)0x1;
  case 0x46:
    break;
  case 2:
    param_1 = (code *******)0x4;
    break;
  case 3:
  case 0x51:
    pppppppcVar42 = (code *******)0x5;
  case 0x6b:
  case 0x8b:
  case 0xbf:
  case 0xd3:
  case 0xf3:
    func_0x000107c60690(pppppppcVar42);
    uVar62 = uVar76 & 0xff;
    in_OV = SBORROW4(uVar62,10);
    in_NG = (int)(uVar62 - 10) < 0;
    in_ZR = uVar62 == 10;
code_r0x0001000ae624:
    if (in_ZR || in_NG != in_OV) {
      if (uVar62 == 9) goto code_r0x0001000aed5c;
      if (uVar62 == 10) {
code_r0x0001000aeb80:
        param_1 = (code *******)0x1;
        goto code_r0x0001000ae86c;
      }
    }
    else {
      if (uVar62 == 0xb) {
code_r0x0001000aeb9c:
        param_1 = (code *******)0x3;
        goto code_r0x0001000ae86c;
      }
      if (uVar62 == 0xc) {
code_r0x0001000aebc4:
        param_1 = (code *******)0x4;
        goto code_r0x0001000ae86c;
      }
    }
    func_0x000107c60690(2);
    uVar76 = uVar76 & 0xff;
    if (uVar76 < 4) {
      pcVar64 = "metaInfoProvider";
      if (uVar76 != 2) {
        pcVar64 = "extensionInfoProvider";
      }
      pppppppcVar75 = (code *******)0x800000010f215320;
      pppppppcVar68 = (code *******)0xd00000000000001b;
      if (((ulong)pppppppcVar56 & 0xff) != 0) {
        pppppppcVar75 = (code *******)0xea0000000000746e;
        pppppppcVar68 = (code *******)0x657645656b616873;
      }
      pppppppcVar66 = (code *******)0xd000000000000010;
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        pppppppcVar66 = pppppppcVar68;
      }
      UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
      }
    }
    else {
      pcVar64 = "featureSettingsProvider";
      pppppppcVar75 = (code *******)0xd000000000000016;
      if (uVar76 != 7) {
        pcVar64 = "DeepLinkHandling";
        pppppppcVar75 = (code *******)0xd000000000000017;
      }
      pcVar58 = "startSyncManagerUnauth";
      pppppppcVar66 = (code *******)0xd000000000000014;
      if (uVar76 != 6) {
        pcVar58 = pcVar64;
        pppppppcVar66 = pppppppcVar75;
      }
      pcVar64 = "composerLogProvider";
      pppppppcVar75 = (code *******)0xd000000000000015;
      if (uVar76 != 4) {
        pcVar64 = "startSyncManagerAuth";
        pppppppcVar75 = (code *******)0xd000000000000013;
      }
      if (uVar76 < 6) {
        pcVar58 = pcVar64;
        pppppppcVar66 = pppppppcVar75;
      }
      UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)pcVar58 | 0x8000000000000000);
    }
    goto code_r0x00010bdb78a8;
  case 4:
    param_1 = (code *******)0x6;
  case 0x4a:
    break;
  case 5:
    pppppppcVar42 = (code *******)0x7;
  case 0x44:
    func_0x000107c60690(pppppppcVar42);
    pppppppcVar66 = unaff_x19;
    pppppppcVar42 = unaff_x20;
    puVar45 = unaff_x29;
code_r0x0001000ae6e4:
    puVar32 = (undefined1 *)register0x00000008;
SUB_1000aed64:
    *(code ********)(puVar32 + -0x20) = pppppppcVar42;
    *(code ********)(puVar32 + -0x18) = pppppppcVar66;
    *(undefined1 **)(puVar32 + -0x10) = puVar45;
    *(undefined8 *)(puVar32 + -8) = unaff_x30;
    uVar62 = uVar76 & 0xff;
    uVar74 = uVar76 >> 5 & 7;
    if (2 < uVar74) {
      if (uVar74 < 5) {
        if (uVar74 == 3) {
          if (uVar62 < 100) {
            if (uVar62 < 0x62) {
              if (uVar62 == 0x60) {
                uVar43 = 0;
              }
              else {
                uVar43 = 1;
              }
            }
            else if (uVar62 == 0x62) {
              uVar43 = 2;
            }
            else {
              uVar43 = 3;
            }
          }
          else if (uVar62 < 0x66) {
            if (uVar62 == 100) {
              uVar43 = 4;
            }
            else {
              uVar43 = 6;
            }
          }
          else if (uVar62 == 0x66) {
            uVar43 = 7;
          }
          else {
            uVar43 = 8;
          }
        }
        else if (uVar62 < 0x84) {
          if (uVar62 < 0x82) {
            if (uVar62 == 0x80) {
              uVar43 = 9;
            }
            else {
              uVar43 = 10;
            }
          }
          else if (uVar62 == 0x82) {
            uVar43 = 0xb;
          }
          else {
            uVar43 = 0xd;
          }
        }
        else if (uVar62 < 0x86) {
          if (uVar62 == 0x84) {
            uVar43 = 0xe;
          }
          else {
            uVar43 = 0xf;
          }
        }
        else if (uVar62 == 0x86) {
          uVar43 = 0x10;
        }
        else {
          uVar43 = 0x11;
        }
      }
      else if (uVar74 == 5) {
        if (uVar62 < 0xa4) {
          if (uVar62 < 0xa2) {
            if (uVar62 == 0xa0) {
              uVar43 = 0x12;
            }
            else {
              uVar43 = 0x13;
            }
          }
          else if (uVar62 == 0xa2) {
            uVar43 = 0x14;
          }
          else {
            uVar43 = 0x15;
          }
        }
        else if (uVar62 < 0xa6) {
          if (uVar62 == 0xa4) {
            uVar43 = 0x16;
          }
          else {
            uVar43 = 0x17;
          }
        }
        else {
          if (uVar62 != 0xa6) {
            func_0x000107c60690(0x1a);
            pppppppcVar66 = (code *******)0xd000000000000012;
            UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f2162a0;
            goto code_r0x00010bdb78a8;
          }
          uVar43 = 0x18;
        }
      }
      else if (uVar62 < 0xc2) {
        if (uVar62 == 0xc0) {
          uVar43 = 0x1b;
        }
        else {
          uVar43 = 0x1c;
        }
      }
      else if (uVar62 == 0xc2) {
        uVar43 = 0x1d;
      }
      else if (uVar62 == 0xc3) {
        uVar43 = 0x1e;
      }
      else {
        uVar43 = 0x1f;
      }
      func_0x000107c60690(uVar43);
      auVar94._8_8_ = pppppppcVar56;
      auVar94._0_8_ = uVar43;
      return auVar94;
    }
    if (uVar74 == 0) {
      func_0x000107c60690(5);
      pppppppcVar66 = (code *******)0xd000000000000019;
      pcVar64 = "LockedCameraCapture";
      if (uVar62 != 1) {
        pppppppcVar66 = (code *******)0xd000000000000012;
        pcVar64 = "invalidateSessionContents";
      }
      UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
    }
    else {
      uVar76 = uVar76 & 0x1f;
      if (uVar74 == 1) {
        func_0x000107c60690(0xc);
        pcVar58 = (char *)0x800000010f216480;
        pcVar64 = (char *)0xd000000000000010;
        in_ZR = uVar76 == 1;
        pppppppcVar68 = (code *******)0x624f6c6c6163;
code_r0x0001000aedf8:
        pppppppcVar66 = (code *******)pcVar64;
        if (!in_ZR) {
          pppppppcVar66 = (code *******)((ulong)pppppppcVar68 | 0x6573000000000000);
        }
        UNRECOVERED_JUMPTABLE_00 = (code *******)pcVar58;
        if (!in_ZR) {
          UNRECOVERED_JUMPTABLE_00 = (code *******)0xec00000072657672;
        }
      }
      else {
        func_0x000107c60690(0x19);
        pppppppcVar75 = (code *******)0xed00007261657070;
        pppppppcVar68 = (code *******)0x4164694477656976;
        if (uVar76 != 3) {
          pppppppcVar75 = (code *******)0xee00686374656665;
          pppppppcVar68 = (code *******)0x725064616f6c7075;
        }
        UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f2162e0;
        pppppppcVar66 = (code *******)0xd000000000000011;
        if (uVar76 != 2) {
          UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
          pppppppcVar66 = pppppppcVar68;
        }
        pppppppcVar75 = (code *******)0xed000074696e4972;
        pppppppcVar68 = (code *******)0x65746c69466f6567;
        if (((ulong)pppppppcVar56 & 0x1f) != 0) {
          pppppppcVar75 = (code *******)0x800000010f216300;
          pppppppcVar68 = (code *******)0xd000000000000017;
        }
        if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0x1f) == 0) {
          pppppppcVar66 = pppppppcVar68;
        }
        if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0x1f) == 0) {
          UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
        }
      }
    }
    goto code_r0x00010bdb78a8;
  case 6:
    func_0x000107c60690(8);
    puVar30 = (undefined1 *)register0x00000008;
    pppppppcVar66 = unaff_x19;
    pppppppcVar42 = unaff_x20;
    puVar45 = unaff_x29;
  case 0x52:
    *(code ********)(puVar30 + -0x20) = pppppppcVar42;
    *(code ********)(puVar30 + -0x18) = pppppppcVar66;
    *(undefined1 **)(puVar30 + -0x10) = puVar45;
    *(undefined8 *)(puVar30 + -8) = unaff_x30;
    if ((uVar76 & 0xff) == 4) {
      func_0x000107c60690(1);
      pppppppcVar66 = (code *******)0x4c63696d616e7964;
      UNRECOVERED_JUMPTABLE_00 = (code *******)0xed0000656c61636f;
    }
    else if ((uVar76 & 0xff) == 5) {
      func_0x000107c60690(2);
      pppppppcVar66 = (code *******)0x49726f74696e6f6d;
      UNRECOVERED_JUMPTABLE_00 = (code *******)0xeb0000000074696e;
    }
    else {
      func_0x000107c60690(0);
      uVar76 = uVar76 & 0xff;
      pppppppcVar66 = (code *******)0x6e49726567676f6c;
      UNRECOVERED_JUMPTABLE_00 = (code *******)0xea00000000007469;
      if (uVar76 != 2) {
        pppppppcVar66 = (code *******)0xd000000000000013;
        UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f2166b0;
      }
      pppppppcVar75 = (code *******)0xd000000000000010;
      pcVar64 = "backgroundExecution";
      if (((ulong)pppppppcVar56 & 0xff) != 0) {
        pppppppcVar75 = (code *******)0xd000000000000013;
        pcVar64 = "loggerDebugViewInit";
      }
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        pppppppcVar66 = pppppppcVar75;
      }
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
      }
    }
    goto code_r0x00010bdb78a8;
  case 7:
    func_0x000107c60690(9);
    uVar62 = uVar76 & 0xff;
    if (uVar62 < 5) {
      if (uVar62 != 3) {
        if (uVar62 != 4) goto code_r0x0001000aea00;
        goto code_r0x0001000aeb80;
      }
      goto code_r0x0001000aed5c;
    }
    if (uVar62 == 5) goto code_r0x0001000aeb9c;
    if (uVar62 != 6) {
code_r0x0001000aea00:
      func_0x000107c60690(2);
      if (((ulong)pppppppcVar56 & 0xff) != 0) {
        pppppppcVar56 = (code *******)0xeb000000006e6967;
        pppppppcVar66 = (code *******)0x6f4c6e4f74696e69;
        pcVar64 = "initOnForeground";
        lVar63 = -5;
        goto code_r0x0001000aea48;
      }
      pppppppcVar56 = (code *******)0x7573;
      goto code_r0x0001000aed1c;
    }
    goto code_r0x0001000aebc4;
  case 8:
    param_1 = (code *******)0xa;
  case 0x49:
    break;
  case 9:
    func_0x000107c60690(0xb);
    uVar62 = uVar76 >> 6 & 3;
    if (uVar62 == 0) {
      func_0x000107c60690(3);
      uVar76 = uVar76 & 0xff;
      if (uVar76 < 4) {
        UNRECOVERED_JUMPTABLE_00 = (code *******)0xec00000070756d72;
        pppppppcVar66 = (code *******)0x615779636167656c;
        if (uVar76 != 2) {
          UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f2153e0;
          pppppppcVar66 = (code *******)0xd000000000000016;
        }
        pppppppcVar75 = (code *******)0xd000000000000013;
        pcVar64 = "warmupCustomStories";
        if (((ulong)pppppppcVar56 & 0xff) != 0) {
          pcVar64 = "snapReadReceiptCleanup";
        }
        pppppppcVar68 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
        bVar37 = SBORROW4(uVar76,1);
        iVar39 = uVar76 - 1;
        bVar38 = uVar76 == 1;
      }
      else {
        pppppppcVar75 = (code *******)0xee00676e69676461;
        pppppppcVar68 = (code *******)0x42736569726f7473;
        if (uVar76 != 7) {
          pppppppcVar75 = (code *******)0x800000010f215380;
          pppppppcVar68 = (code *******)0xd00000000000001a;
        }
        UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f2153a0;
        pppppppcVar66 = (code *******)0xd000000000000010;
        if (uVar76 != 6) {
          UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
          pppppppcVar66 = pppppppcVar68;
        }
        pppppppcVar68 = (code *******)0x800000010f2153c0;
        pppppppcVar75 = (code *******)0xd00000000000001c;
        if (uVar76 != 4) {
          pppppppcVar68 = (code *******)0xec00000073656972;
          pppppppcVar75 = (code *******)0x6f74536863746566;
        }
        bVar37 = SBORROW4(uVar76,5);
        iVar39 = uVar76 - 5;
        bVar38 = uVar76 == 5;
      }
      if (bVar38 || iVar39 < 0 != bVar37) {
        pppppppcVar66 = pppppppcVar75;
        UNRECOVERED_JUMPTABLE_00 = pppppppcVar68;
      }
      goto code_r0x00010bdb78a8;
    }
    if (uVar62 == 1) {
      func_0x000107c60690(5);
      pcVar58 = (char *)0x800000010f2161a0;
      in_ZR = (uVar76 & 0x3f) == 1;
      pppppppcVar56 = (code *******)0xd000000000000012;
      if (!in_ZR) {
        pppppppcVar56 = (code *******)0x6163696669746f6e;
      }
      pcVar64 = (char *)0xec0000006e6f6974;
      goto code_r0x0001000ae568;
    }
    uVar76 = uVar76 & 0xff;
    if (0x81 < uVar76) {
      if (uVar76 != 0x82) goto code_r0x0001000aebc4;
      goto code_r0x0001000aebbc;
    }
    if (uVar76 != 0x80) goto code_r0x0001000aeb80;
    goto code_r0x0001000aed5c;
  case 10:
    param_1 = (code *******)0xc;
    break;
  case 0xb:
    func_0x000107c60690(0xd);
    uVar74 = uVar74 & 0xff;
    if (uVar74 == 1 || ((ulong)pppppppcVar75 & 0xff) == 0) {
      if (((ulong)pppppppcVar75 & 0xff) == 0) {
        uVar43 = 0;
      }
      else {
        uVar43 = 2;
      }
    }
    else {
      if (uVar74 == 2) {
        __ss6HasherV8_combineyySuF(3);
        uVar76 = uVar76 & 0xff;
        pppppppcVar68 = (code *******)0xe900000000000072;
        pppppppcVar75 = (code *******)0x65766f6563696f76;
        if (uVar76 != 3) {
          pppppppcVar68 = (code *******)0xeb00000000726573;
          pppppppcVar75 = (code *******)0x617245636967616d;
        }
        pppppppcVar66 = (code *******)0x7372656b63697473;
        if (uVar76 != 2) {
          pppppppcVar66 = pppppppcVar75;
        }
        pppppppcVar75 = (code *******)0xe800000000000000;
        if (uVar76 != 2) {
          pppppppcVar75 = pppppppcVar68;
        }
        bVar38 = ((ulong)pppppppcVar56 & 0xff) != 0;
        pppppppcVar68 = (code *******)0x65646f4d6961;
        if (bVar38) {
          pppppppcVar68 = (code *******)0x736e6f6974706163;
        }
        UNRECOVERED_JUMPTABLE = (code *******)0xe600000000000000;
        if (bVar38) {
          UNRECOVERED_JUMPTABLE = (code *******)0xe800000000000000;
        }
        if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
          pppppppcVar66 = pppppppcVar68;
        }
        if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
          pppppppcVar75 = UNRECOVERED_JUMPTABLE;
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,pppppppcVar66,pppppppcVar75);
        goto _swift_bridgeObjectRelease;
      }
      if (uVar74 != 3) {
        __ss6HasherV8_combineyySuF(1);
        pppppppcVar66 = (code *******)0xd000000000000013;
        UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f216a00;
        goto code_r0x00010bdb78a8;
      }
      uVar43 = 4;
    }
    pppppppcVar66 = pppppppcVar56;
    __ss6HasherV8_combineyySuF(uVar43);
    __ss6HasherV8_combineyySuF(pppppppcVar56);
    auVar129._8_8_ = pppppppcVar66;
    auVar129._0_8_ = pppppppcVar56;
    return auVar129;
  case 0xc:
    param_1 = (code *******)0xe;
    break;
  case 0xd:
  case 0x3a:
    func_0x000107c60690(0x10);
    UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
  case 0x50:
    if (((ulong)UNRECOVERED_JUMPTABLE_00 & 0xff) != 0) {
      if (((uint)UNRECOVERED_JUMPTABLE_00 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001003e53ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1003e53b0 + (ulong)*(byte *)((long)pppppppcVar56 + 0x10dd3f924) * 4))();
        auVar126._8_8_ = pppppppcVar56;
        auVar126._0_8_ = param_1;
        return auVar126;
      }
      pppppppcVar66 = pppppppcVar56;
      func_0x000107c60690(3);
      func_0x000107c60690(pppppppcVar56);
      auVar125._8_8_ = pppppppcVar66;
      auVar125._0_8_ = pppppppcVar56;
      return auVar125;
    }
    func_0x000107c60690(1);
    uVar76 = uVar76 & 0xff;
    pppppppcVar66 = (code *******)0x6863746566657270;
    if (uVar76 != 2) {
      pppppppcVar66 = (code *******)0x656e656870617267;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *******)0xe800000000000000;
    if (uVar76 != 2) {
      UNRECOVERED_JUMPTABLE_00 = (code *******)0xee00726567676f4c;
    }
    pppppppcVar75 = (code *******)0xe900000000000061;
    pppppppcVar68 = (code *******)0x7461446775626564;
    if (((ulong)pppppppcVar56 & 0xff) != 0) {
      pppppppcVar75 = (code *******)0xec00000072656c64;
      pppppppcVar68 = (code *******)0x6e6148726f727265;
    }
    if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
      pppppppcVar66 = pppppppcVar68;
    }
    if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
      UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
    }
    goto code_r0x00010bdb78a8;
  case 0xe:
    func_0x000107c60690(0x12);
  case 0x4b:
    uVar74 = uVar74 & 0xff;
    if (uVar74 == 1 || ((ulong)pppppppcVar75 & 0xff) == 0) {
      if (((ulong)pppppppcVar75 & 0xff) != 0) {
        __ss6HasherV8_combineyySuF(9);
        if (((ulong)pppppppcVar56 & 0xff) == 0) {
          pppppppcVar66 = (code *******)0xd000000000000012;
          pcVar64 = "replyActivationWorkflow";
        }
        else {
          pppppppcVar66 = (code *******)0xd000000000000017;
          pcVar64 = "miniCameraLensIconWorkflow";
          if ((uVar76 & 0xff) != 1) {
            pppppppcVar66 = (code *******)0xd00000000000001a;
            pcVar64 = "LensCarouselPreview";
          }
        }
        __sSS4hash4intoys6HasherVz_tF(param_1,pppppppcVar66,(ulong)pcVar64 | 0x8000000000000000);
        pppppppcVar75 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
        goto _swift_bridgeObjectRelease;
      }
      __ss6HasherV8_combineyySuF(3);
      uVar76 = uVar76 & 0xff;
      pppppppcVar75 = (code *******)0xe900000000000073;
      pppppppcVar66 = (code *******)0x65736e654c746567;
      if (uVar76 != 2) {
        pppppppcVar75 = (code *******)0xef74736575716552;
        pppppppcVar66 = (code *******)0x70747448736e656c;
      }
      pppppppcVar68 = (code *******)0x800000010f216ed0;
      UNRECOVERED_JUMPTABLE = (code *******)0xd000000000000010;
      if (((ulong)pppppppcVar56 & 0xff) != 0) {
        pppppppcVar68 = (code *******)0xea0000000000736e;
        UNRECOVERED_JUMPTABLE = (code *******)0x654c657461657263;
      }
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        pppppppcVar66 = UNRECOVERED_JUMPTABLE;
      }
      if (uVar76 == 1 || ((ulong)pppppppcVar56 & 0xff) == 0) {
        pppppppcVar75 = pppppppcVar68;
      }
    }
    else {
      if (uVar74 == 2) {
        pppppppcVar66 = pppppppcVar56;
        __ss6HasherV8_combineyySuF(10);
        __ss6HasherV8_combineyySuF(pppppppcVar56);
        auVar130._8_8_ = pppppppcVar66;
        auVar130._0_8_ = pppppppcVar56;
        return auVar130;
      }
      if (uVar74 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a49d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)((long)pppppppcVar56 + 0x10dd3fb92) * 4 + 0x1048a49d4))();
        auVar131._8_8_ = pppppppcVar56;
        auVar131._0_8_ = param_1;
        return auVar131;
      }
      __ss6HasherV8_combineyySuF(0xb);
      bVar38 = ((ulong)pppppppcVar56 & 0xff) != 1;
      pppppppcVar66 = (code *******)0x74754265736f6c63;
      if (bVar38) {
        pppppppcVar66 = (code *******)0x766f72506e6f6369;
      }
      pppppppcVar75 = (code *******)0xeb000000006e6f74;
      if (bVar38) {
        pppppppcVar75 = (code *******)0xec00000072656469;
      }
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,pppppppcVar66,pppppppcVar75);
_swift_bridgeObjectRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(pppppppcVar75);
    auVar141._8_8_ = pppppppcVar66;
    auVar141._0_8_ = pppppppcVar75;
    return auVar141;
  case 0xf:
    func_0x000107c60690(0x13);
  case 0x33:
    uVar62 = uVar76 >> 4 & 0xf;
    if (3 < uVar62) {
      if (uVar62 < 6) {
        if (uVar62 == 4) {
          uVar76 = uVar76 & 0xff;
          if (uVar76 < 0x42) {
            if (uVar76 == 0x40) {
              uVar43 = 8;
            }
            else {
              uVar43 = 9;
            }
          }
          else if (uVar76 == 0x42) {
            uVar43 = 10;
          }
          else {
            uVar43 = 0xb;
          }
        }
        else {
          uVar76 = uVar76 & 0xff;
          if (uVar76 < 0x52) {
            if (uVar76 != 0x50) {
              func_0x000107c60690(0xd);
              pppppppcVar66 = (code *******)0x6e6f697461636f6c;
              UNRECOVERED_JUMPTABLE_00 = (code *******)0xef676e6972616853;
              goto code_r0x00010bdb78a8;
            }
            uVar43 = 0xc;
          }
          else if (uVar76 == 0x52) {
            uVar43 = 0xe;
          }
          else {
            uVar43 = 0xf;
          }
        }
      }
      else if (uVar62 == 6) {
        uVar76 = uVar76 & 0xff;
        if (uVar76 < 0x62) {
          if (uVar76 == 0x60) {
            uVar43 = 0x10;
          }
          else {
            uVar43 = 0x11;
          }
        }
        else if (uVar76 == 0x62) {
          uVar43 = 0x13;
        }
        else {
          uVar43 = 0x14;
        }
      }
      else if (uVar62 == 7) {
        uVar76 = uVar76 & 0xff;
        if (uVar76 < 0x72) {
          if (uVar76 == 0x70) {
            uVar43 = 0x15;
          }
          else {
            uVar43 = 0x16;
          }
        }
        else if (uVar76 == 0x72) {
          uVar43 = 0x17;
        }
        else {
          uVar43 = 0x18;
        }
      }
      else if ((uVar76 & 0xff) == 0x80) {
        uVar43 = 0x1a;
      }
      else if ((uVar76 & 0xff) == 0x81) {
        uVar43 = 0x1b;
      }
      else {
        uVar43 = 0x1c;
      }
code_r0x00010059b864:
      func_0x000107c60690(uVar43);
      auVar127._8_8_ = pppppppcVar56;
      auVar127._0_8_ = uVar43;
      return auVar127;
    }
    if (1 < uVar62) {
      if (uVar62 == 2) {
        uVar76 = uVar76 & 0xff;
        if (uVar76 < 0x22) {
          if (uVar76 == 0x20) {
            uVar43 = 0;
          }
          else {
            uVar43 = 1;
          }
        }
        else if (uVar76 == 0x22) {
          uVar43 = 2;
        }
        else {
          uVar43 = 3;
        }
      }
      else {
        uVar76 = uVar76 & 0xff;
        if (uVar76 < 0x32) {
          if (uVar76 == 0x30) {
            uVar43 = 4;
          }
          else {
            uVar43 = 5;
          }
        }
        else if (uVar76 == 0x32) {
          uVar43 = 6;
        }
        else {
          uVar43 = 7;
        }
      }
      goto code_r0x00010059b864;
    }
    if (uVar62 == 0) {
      func_0x000107c60690(0x12);
      bVar38 = (uVar76 & 0xff) != 1;
      pppppppcVar66 = (code *******)0x4264657469736976;
      if (bVar38) {
        pppppppcVar66 = (code *******)0xd000000000000010;
      }
      UNRECOVERED_JUMPTABLE_00 = (code *******)0xe900000000000079;
      if (bVar38) {
        UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f217060;
      }
    }
    else {
      func_0x000107c60690(0x19);
      if (((ulong)pppppppcVar56 & 0xf) == 0) {
        pppppppcVar66 = (code *******)0x6c6172656e6567;
        UNRECOVERED_JUMPTABLE_00 = (code *******)0xe700000000000000;
      }
      else {
        pppppppcVar66 = (code *******)0x6d6f72684370616d;
        UNRECOVERED_JUMPTABLE_00 = (code *******)0xeb00000000325665;
        if ((uVar76 & 0xf) != 1) {
          pppppppcVar66 = (code *******)0xd000000000000010;
          UNRECOVERED_JUMPTABLE_00 = (code *******)0x800000010f217000;
        }
      }
    }
    goto code_r0x00010bdb78a8;
  case 0x10:
    func_0x000107c60690(0x14);
    UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
  case 0x42:
    uVar62 = (uint)UNRECOVERED_JUMPTABLE_00 & 0xff;
    if (uVar62 != 1 && ((ulong)UNRECOVERED_JUMPTABLE_00 & 0xff) != 0) {
      if (uVar62 != 2) {
        in_ZR = uVar62 == 3;
code_r0x0001000ae418:
        if (in_ZR) {
          UNRECOVERED_JUMPTABLE_00 = (code *******)0xe90000000000006c;
          func_0x000107c60690(4);
          uVar62 = uVar76 & 0xff;
code_r0x0001000ae430:
          if (uVar62 < 2) {
            pcVar64 = (char *)0x65646f4d64616f6c;
code_r0x0001000aecd4:
            pppppppcVar68 = (code *******)0xeb000000006c6564;
            pppppppcVar70 = (code *******)0x64616f6c6e75;
code_r0x0001000aecec:
            pppppppcVar66 = (code *******)pcVar64;
            pppppppcVar56 = UNRECOVERED_JUMPTABLE_00;
            if (uVar62 != 0) {
              pppppppcVar66 = (code *******)((ulong)pppppppcVar70 | 0x6f4d000000000000);
              pppppppcVar56 = pppppppcVar68;
            }
          }
          else {
            pcVar64 = "VideoFilterCoordinator";
code_r0x0001000ae43c:
            pcVar64 = (char *)((long)pcVar64 + 0x1a0);
code_r0x0001000ae440:
            pcVar64 = (char *)((ulong)((long)pcVar64 + -0x20) | 0x8000000000000000);
            pppppppcVar68 = (code *******)0xd000000000000013;
            pppppppcVar70 = (code *******)0x15;
code_r0x0001000ae458:
            pppppppcVar70 = (code *******)((ulong)pppppppcVar70 | 0xd000000000000000);
            in_x12 = "NotificationCenterBadgeUpdate";
code_r0x0001000ae468:
            in_x12 = (char *)((ulong)in_x12 | 0x8000000000000000);
            in_x13 = (code *******)((long)UNRECOVERED_JUMPTABLE_00 + 0xb);
            in_x14 = (code *******)0x75626564;
code_r0x0001000ae478:
            if (uVar62 != 3) {
              in_x12 = (char *)in_x13;
              pppppppcVar70 = (code *******)((ulong)in_x14 & 0xffffffff | 0x6569566700000000);
            }
            pppppppcVar66 = pppppppcVar68;
            pppppppcVar56 = (code *******)pcVar64;
            if (uVar62 != 2) {
              pppppppcVar66 = pppppppcVar70;
              pppppppcVar56 = (code *******)in_x12;
            }
          }
          goto code_r0x0001000aed34;
        }
        if (pppppppcVar56 != (code *******)0x0) {
          if (pppppppcVar56 == (code *******)0x1) {
code_r0x0001000aeb94:
            param_1 = (code *******)0x5;
          }
          else {
code_r0x0001000aebdc:
            param_1 = (code *******)0x6;
          }
          goto code_r0x0001000ae86c;
        }
        goto code_r0x0001000aeb9c;
      }
      goto code_r0x0001000ae904;
    }
    if (((ulong)UNRECOVERED_JUMPTABLE_00 & 0xff) == 0) {
code_r0x0001000aeae8:
      uVar43 = 0;
    }
    else {
      uVar43 = 1;
    }
    goto code_r0x0001000aeba8;
  case 0x11:
    pppppppcVar66 = (code *******)(ulong)(uVar76 & 0xff);
    func_0x000107c60690(0x15);
    pppppppcVar47 = pppppppcVar56;
  case 0x37:
    iVar39 = (int)pppppppcVar66;
    if (4 < iVar39) {
      if (iVar39 != 5) {
        if (iVar39 != 6) {
          if (iVar39 != 7) goto code_r0x0001000aea70;
          goto code_r0x0001000aebdc;
        }
        goto code_r0x0001000aeb94;
      }
      goto code_r0x0001000aebc4;
    }
    if (iVar39 == 2) goto code_r0x0001000aed5c;
    in_ZR = iVar39 == 3;
code_r0x0001000ae694:
    iVar39 = (int)pppppppcVar66;
    if (!in_ZR) {
      if (iVar39 != 4) {
code_r0x0001000aea70:
        func_0x000107c60690(2);
        pppppppcVar66 = (code *******)0x6d6f7250776f6873;
        if (iVar39 != 1) {
          pppppppcVar66 = (code *******)0x635365736f707865;
        }
        pppppppcVar56 = (code *******)0xea00000000007470;
        if (iVar39 != 1) {
          pppppppcVar56 = (code *******)0xeb0000000065706f;
        }
        goto code_r0x0001000aed34;
      }
      goto code_r0x0001000aeb9c;
    }
    goto code_r0x0001000aeb80;
  case 0x12:
    func_0x000107c60690(0x16);
  case 0x48:
    puVar31 = (undefined1 *)register0x00000008;
    pppppppcVar66 = unaff_x19;
    pppppppcVar42 = unaff_x20;
    puVar45 = unaff_x29;
code_r0x0001000ae758:
    *(code ********)(puVar31 + -0x30) = unaff_x22;
    *(code ********)(puVar31 + -0x28) = UNRECOVERED_JUMPTABLE_00;
    *(code ********)(puVar31 + -0x20) = pppppppcVar42;
    *(code ********)(puVar31 + -0x18) = pppppppcVar66;
    *(undefined1 **)(puVar31 + -0x10) = puVar45;
    *(undefined8 *)(puVar31 + -8) = unaff_x30;
    uVar62 = uVar76 & 0xff;
    uVar74 = uVar76 >> 5 & 7;
    if (2 < uVar74) {
      if (uVar74 < 5) {
        if (uVar74 == 3) {
          if (uVar62 < 0x62) {
            if (uVar62 == 0x60) {
              uVar43 = 2;
            }
            else {
              uVar43 = 3;
            }
          }
          else if (uVar62 == 0x62) {
            uVar43 = 4;
          }
          else {
            uVar43 = 5;
          }
        }
        else if (uVar62 < 0x82) {
          if (uVar62 == 0x80) {
            uVar43 = 6;
          }
          else {
            uVar43 = 7;
          }
        }
        else if (uVar62 == 0x82) {
          uVar43 = 8;
        }
        else {
          uVar43 = 9;
        }
      }
      else if (uVar74 == 5) {
        if (uVar62 < 0xa2) {
          if (uVar62 == 0xa0) {
            uVar43 = 10;
          }
          else {
            uVar43 = 0xb;
          }
        }
        else if (uVar62 == 0xa2) {
          uVar43 = 0xc;
        }
        else {
          uVar43 = 0xd;
        }
      }
      else if (uVar62 == 0xc0) {
        uVar43 = 0xe;
      }
      else {
        uVar43 = 0x10;
      }
      func_0x000107c60690(uVar43);
      auVar128._8_8_ = pppppppcVar56;
      auVar128._0_8_ = uVar43;
      return auVar128;
    }
    if (uVar74 == 0) {
      func_0x000107c60690(0);
      pcVar1 = "doubleEncryptionResolver";
      pcVar64 = "doubleEncryptionInvoker";
      pcVar58 = "encryptionInfoProvider";
      bVar38 = uVar62 == 1;
      pppppppcVar75 = (code *******)0xd000000000000017;
      if (!bVar38) {
        pppppppcVar75 = (code *******)0xd000000000000016;
      }
    }
    else {
      if (uVar74 != 1) {
        func_0x000107c60690(0xf);
        bVar38 = (uVar76 & 0x1f) != 1;
        pppppppcVar66 = (code *******)0x7475436b63697571;
        if (bVar38) {
          pppppppcVar66 = (code *******)0x6c6172656e6567;
        }
        UNRECOVERED_JUMPTABLE_00 = (code *******)0xe800000000000000;
        if (bVar38) {
          UNRECOVERED_JUMPTABLE_00 = (code *******)0xe700000000000000;
        }
        goto code_r0x00010bdb78a8;
      }
      uVar62 = uVar76 & 0x1f;
      func_0x000107c60690(1);
      pcVar1 = "opportunisticRetranscode";
      pcVar64 = "snapDocTranscode";
      pppppppcVar75 = (code *******)0xd000000000000010;
      pcVar58 = "snapDocTranscodeForExport";
      bVar38 = uVar62 == 1;
      if (!bVar38) {
        pppppppcVar75 = (code *******)0xd000000000000019;
      }
    }
    if (!bVar38) {
      pcVar64 = pcVar58;
    }
    pppppppcVar66 = (code *******)0xd000000000000018;
    if (uVar62 != 0) {
      pppppppcVar66 = pppppppcVar75;
      pcVar1 = pcVar64;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    goto code_r0x00010bdb78a8;
  case 0x13:
    param_1 = (code *******)0x17;
    break;
  case 0x14:
  case 0x3f:
    func_0x000107c60690(0x18);
  case 0x38:
    if ((uVar74 & 0xff) == 1 || ((ulong)pppppppcVar75 & 0xff) == 0) {
      if (((ulong)pppppppcVar75 & 0xff) == 0) {
        pppppppcVar66 = pppppppcVar56;
        __ss6HasherV8_combineyySuF(4);
        __ss6HasherV8_combineyySuF(pppppppcVar56);
        auVar132._8_8_ = pppppppcVar66;
        auVar132._0_8_ = pppppppcVar56;
        return auVar132;
      }
      __ss6HasherV8_combineyySuF(5);
      uVar62 = uVar76 & 0xff;
      UNRECOVERED_JUMPTABLE = (code *******)0xeb00000000646565;
      pppppppcVar70 = (code *******)0x4673646e65697266;
      pppppppcVar68 = (code *******)0xed00006465654674;
      pppppppcVar75 = (code *******)0x6867696c746f7073;
      if (uVar62 != 3) {
        pppppppcVar68 = (code *******)0xe700000000000000;
        pppppppcVar75 = (code *******)0x6e776f6e6b6e75;
      }
      pppppppcVar66 = (code *******)0x79726f7473;
      if (uVar62 != 2) {
        pppppppcVar66 = pppppppcVar75;
      }
      pppppppcVar75 = (code *******)0xe500000000000000;
      if (uVar62 != 2) {
        pppppppcVar75 = pppppppcVar68;
      }
      pppppppcVar68 = (code *******)0xe300000000000000;
      pppppppcVar42 = (code *******)0x70616d;
    }
    else {
      if ((uVar74 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(byte *)(pppppppcVar56 + 0x21ba8105) * 4 + 0x1048aa5ec))();
        auVar133._8_8_ = pppppppcVar56;
        auVar133._0_8_ = param_1;
        return auVar133;
      }
      __ss6HasherV8_combineyySuF(10);
      uVar62 = uVar76 & 0xff;
      UNRECOVERED_JUMPTABLE = (code *******)0xe900000000000064;
      pppppppcVar70 = (code *******)0x6565466f54646461;
      pppppppcVar75 = (code *******)0x6574496863746566;
      pppppppcVar68 = (code *******)0xea0000000000736d;
      if (uVar62 != 3) {
        pppppppcVar75 = (code *******)0xd000000000000013;
        pppppppcVar68 = (code *******)0x800000010f217560;
      }
      pppppppcVar66 = (code *******)0x646565466e497369;
      if (uVar62 != 2) {
        pppppppcVar66 = pppppppcVar75;
      }
      pppppppcVar75 = (code *******)0xe800000000000000;
      if (uVar62 != 2) {
        pppppppcVar75 = pppppppcVar68;
      }
      pppppppcVar68 = (code *******)0xee00646565466d6f;
      pppppppcVar42 = (code *******)0x724665766f6d6572;
    }
    if (((ulong)pppppppcVar56 & 0xff) != 0) {
      UNRECOVERED_JUMPTABLE = pppppppcVar68;
      pppppppcVar70 = pppppppcVar42;
    }
    if ((uVar76 & 0xff) < 2) {
      pppppppcVar75 = UNRECOVERED_JUMPTABLE;
      pppppppcVar66 = pppppppcVar70;
    }
    __sSS4hash4intoys6HasherVz_tF(param_1,pppppppcVar66,pppppppcVar75);
    goto _swift_bridgeObjectRelease;
  case 0x15:
    param_1 = (code *******)0x19;
    break;
  case 0x16:
    param_1 = (code *******)0x1a;
    break;
  case 0x17:
    param_1 = (code *******)0x1b;
    break;
  case 0x18:
    func_0x000107c60690(0x1c);
    UNRECOVERED_JUMPTABLE_00 = (code *******)((ulong)pppppppcVar75 & 0xff);
    if (((ulong)pppppppcVar75 & 0xff00) != 0x100) {
      func_0x000107c60690(0);
      if (UNRECOVERED_JUMPTABLE_00 == (code *******)0x1) goto code_r0x0001000aeb80;
      goto code_r0x0001000aeae8;
    }
    uVar60 = (long)(char)pppppppcVar75 + (ulong)(pppppppcVar56 >= (code *******)0x3);
    if ((long)-uVar60 < 0 != SCARRY8(~uVar60,(ulong)(pppppppcVar56 < (code *******)0x3)))
    goto code_r0x0001000ae5c8;
    if (pppppppcVar56 != (code *******)0x0 || UNRECOVERED_JUMPTABLE_00 != (code *******)0x0) {
      if (pppppppcVar56 == (code *******)0x1 && UNRECOVERED_JUMPTABLE_00 == (code *******)0x0)
      goto code_r0x0001000aebbc;
      goto code_r0x0001000aeb9c;
    }
    goto code_r0x0001000aeb80;
  case 0x19:
    func_0x000107c60690(0x1e);
  case 0x41:
    uVar62 = uVar76 & 0xff;
    if (uVar62 < 10) {
      if (uVar62 != 8) {
code_r0x0001000ae58c:
        if (uVar62 == 9) {
code_r0x0001000aebbc:
          param_1 = (code *******)0x2;
          goto code_r0x0001000ae86c;
        }
code_r0x0001000ae91c:
        func_0x000107c60690(1);
        uVar62 = uVar76 & 0xff;
        if (uVar62 < 4) {
          pcVar64 = (char *)0x800000010f215480;
          pppppppcVar70 = (code *******)0xd000000000000022;
          if (uVar62 != 2) {
            pcVar64 = (char *)0xe700000000000000;
            pppppppcVar70 = (code *******)0x64616f6c657270;
          }
          pcVar58 = "featureSyncJobProcessor";
          in_x13 = (code *******)0xd000000000000015;
          if (((ulong)pppppppcVar56 & 0xff) != 0) {
            pcVar58 = "esSyncJobProcessor";
            in_x13 = (code *******)0xd000000000000017;
          }
          in_x12 = (char *)((ulong)pcVar58 | 0x8000000000000000);
          in_OV = SBORROW4(uVar62,1);
          iVar39 = uVar62 - 1;
          in_ZR = uVar62 == 1;
        }
        else {
          pppppppcVar68 = (code *******)0xd000000000000015;
          pcVar64 = (char *)(code *******)0x800000010f215440;
          pppppppcVar70 = (code *******)0xd000000000000010;
          if (uVar62 != 6) {
            pcVar64 = (char *)(code *******)0xef72656469766f72;
            pppppppcVar70 = (code *******)0x507463656a627573;
          }
          in_x12 = (char *)0xee0073746e656970;
          in_x13 = (code *******)0x6b6e6172;
code_r0x0001000aec8c:
          in_x13 = (code *******)((ulong)in_x13 & 0xffffffff | 0x6963655200000000);
          in_x14 = (code *******)0x800000010f215460;
code_r0x0001000aeca4:
          if (uVar62 != 4) {
            in_x12 = (char *)in_x14;
            in_x13 = (code *******)((long)pppppppcVar68 + -4);
          }
          in_OV = SBORROW4(uVar62,5);
          iVar39 = uVar62 - 5;
          in_ZR = uVar62 == 5;
        }
        in_NG = iVar39 < 0;
        pppppppcVar56 = pppppppcVar70;
        if (in_ZR || in_NG != in_OV) {
          pppppppcVar56 = in_x13;
        }
code_r0x0001000aecbc:
        pppppppcVar66 = pppppppcVar56;
        pppppppcVar56 = (code *******)pcVar64;
        if (in_ZR || in_NG != in_OV) {
          pppppppcVar56 = (code *******)in_x12;
        }
        goto code_r0x0001000aed34;
      }
      goto code_r0x0001000aed5c;
    }
    if (uVar62 == 10) goto code_r0x0001000aeb9c;
    if (uVar62 != 0xb) goto code_r0x0001000ae91c;
    goto code_r0x0001000aebc4;
  case 0x1a:
    func_0x000107c60690(0x1f);
    if ((uVar76 & 0xff) == 3) goto code_r0x0001000aeb80;
    if ((uVar76 & 0xff) != 4) {
      func_0x000107c60690(0);
      if (((ulong)pppppppcVar56 & 0xff) == 0) {
        pppppppcVar66 = (code *******)0x614264616f6c6572;
        pppppppcVar56 = (code *******)0xeb00000000656764;
      }
      else {
        pppppppcVar56 = (code *******)0xe90000000000006e;
        pppppppcVar66 = (code *******)0x6f63496863746566;
        pcVar64 = "bitmojiBadgeReload";
        lVar63 = -3;
code_r0x0001000aea48:
        if ((uVar76 & 0xff) != 1) {
          pppppppcVar66 = (code *******)(lVar63 + -0x2fffffffffffffeb);
          pppppppcVar56 = (code *******)((ulong)(pcVar64 + -0x20) | 0x8000000000000000);
        }
      }
      goto code_r0x0001000aed34;
    }
    goto code_r0x0001000aebbc;
  case 0x1b:
  case 0x57:
    pppppppcVar42 = (code *******)0x20;
    func_0x000107c60690(0x20);
    UNRECOVERED_JUMPTABLE_00 = pppppppcVar75;
    unaff_x22 = UNRECOVERED_JUMPTABLE;
  case 0x55:
    if (((ulong)unaff_x22 & 3) != 0) {
      if (((uint)unaff_x22 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000aeb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_1000aeb08 + (ulong)*(byte *)((long)pppppppcVar56 + 0x10dd3e626) * 4))();
        auVar93._8_8_ = pppppppcVar47;
        auVar93._0_8_ = pppppppcVar42;
        return auVar93;
      }
code_r0x0001000ae3c8:
      func_0x000107c60690(1);
code_r0x0001000ae3d8:
      goto code_r0x00010bdb78a8;
    }
    goto code_r0x0001000aeae8;
  case 0x1c:
    param_1 = (code *******)0x21;
    break;
  case 0x1d:
    param_1 = (code *******)0x22;
    break;
  case 0x1e:
    func_0x000107c60690(0x23);
    uVar62 = uVar76 & 0xff;
    pppppppcVar47 = pppppppcVar56;
  case 0x4e:
    if (uVar62 == 5) goto code_r0x0001000aed5c;
    if (uVar62 != 6) {
code_r0x0001000ae788:
      func_0x000107c60690(1);
      pcVar58 = (char *)0xea00000000007362;
      pcVar64 = (char *)(ulong)(uVar76 & 0xff);
      pppppppcVar68 = (code *******)0x6d627573;
code_r0x0001000ae7a4:
      pppppppcVar68 = (code *******)((ulong)pppppppcVar68 & 0xffff0000ffffffff | 0x6f4a746900000000)
      ;
      pppppppcVar70 = (code *******)0x800000010f215e10;
      in_x12 = (char *)0xd000000000000023;
      in_x14 = (code *******)0xd000000000000015;
      in_x13 = (code *******)0x800000010f215df0;
code_r0x0001000ae7e0:
      uVar62 = (uint)pcVar64;
      if (uVar62 != 3) {
        pcVar58 = (char *)in_x13;
        pppppppcVar68 = in_x14;
      }
      if (uVar62 != 2) {
        pppppppcVar70 = (code *******)pcVar58;
        in_x12 = (char *)pppppppcVar68;
      }
      pcVar64 = "registerSystemJobProviders";
      if (uVar62 != 0) {
        pcVar64 = "ticatedJobProviders";
      }
      pppppppcVar66 = (code *******)in_x12;
      pppppppcVar56 = pppppppcVar70;
      if (uVar62 < 2) {
        pppppppcVar66 = (code *******)((long)in_x14 + 5);
        pppppppcVar56 = (code *******)((ulong)pcVar64 | 0x8000000000000000);
      }
      goto code_r0x0001000aed34;
    }
    goto code_r0x0001000aebbc;
  case 0x1f:
    param_1 = (code *******)0x24;
    break;
  case 0x20:
    param_1 = (code *******)0x25;
    break;
  case 0x21:
    param_1 = (code *******)0x26;
    break;
  case 0x22:
    param_1 = (code *******)0x27;
  case 0x54:
    break;
  case 0x23:
    param_1 = (code *******)0x28;
    break;
  case 0x24:
    param_1 = (code *******)0x29;
    break;
  case 0x25:
    param_1 = (code *******)0x2a;
    break;
  case 0x26:
    if ((pppppppcVar75 == (code *******)0x0 && pppppppcVar56 == (code *******)0x0) &&
       (bVar84 == 0x98)) {
      uVar43 = 2;
    }
    else if ((pppppppcVar56 == (code *******)0x1) &&
            ((pppppppcVar75 == (code *******)0x0 && (bVar84 == 0x98)))) {
      uVar43 = 3;
    }
    else if ((pppppppcVar56 == (code *******)0x2) &&
            ((pppppppcVar75 == (code *******)0x0 && (bVar84 == 0x98)))) {
      uVar43 = 0xf;
    }
    else if ((pppppppcVar56 == (code *******)0x3) &&
            ((pppppppcVar75 == (code *******)0x0 && (bVar84 == 0x98)))) {
      uVar43 = 0x11;
    }
    else {
      uVar43 = 0x1d;
    }
    func_0x000107c60690(uVar43);
    pppppppcVar47 = pppppppcVar56;
code_r0x0001000aed5c:
    param_1 = (code *******)0x0;
    goto code_r0x0001000ae86c;
  case 0x27:
    pbVar54 = (byte *)((long)param_1 + (long)pcVar58);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acb8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acc0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acc8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acd0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acd8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ace0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ace8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acf0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309acf8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    *(code ********)((long)param_1 + _DAT_11309ad00) = pppppppcVar56;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad08);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad10);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad18);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad20);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad28);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad30);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad38);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad40);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad48);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad50);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad58);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad60);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad68);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad70);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad78);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad80);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad88);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad90);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ad98);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ada0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309ada8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_11309adb0);
    pbVar54[0] = 0;
    puVar78 = PTR_s_init_1125d9248;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    func_0x000107c61174(pppppppcVar56);
    func_0x000107c61154(&stack0xffffffffffffffd0,puVar78);
    auVar96._8_8_ = puVar78;
    auVar96._0_8_ = puVar44;
    return auVar96;
  case 0x28:
    func_0x0001000ac118();
    unaff_x28 = param_1;
    pppppppcVar47 = pppppppcVar56;
    goto code_r0x000107c61170;
  case 0x29:
    ppppppcVar52 = *(code *******)((long)pcVar58 + 0x838);
    *(code *******)((long)param_1 + (long)ppppppcVar52) = ppppppcStack_98;
    ((byte *)((long)param_1 + (long)ppppppcVar52))[8] = 0;
    pbVar54 = (byte *)((long)param_1 + _DAT_113097840);
    *(undefined8 *)pbVar54 = unaff_d8;
    pbVar54[8] = 0;
    func_0x0001000bc298(puStack_90,(byte *)((long)param_1 + _DAT_113097848),pppppppcVar56,param_1);
    *(byte *)((long)unaff_x26 + _DAT_113097850) = (byte)((ulong)pppppppcStack_88 >> 0x20);
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097858);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    bVar84 = (byte)unaff_x27;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097860);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097868);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097870);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097878);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097880);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    func_0x0001000bc298();
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_113097890);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    func_0x0001000bc298();
    *(byte *)((long)unaff_x26 + _DAT_1130978a0) = 2;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978a8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978b0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978b8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    func_0x0001000bc298();
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978c8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978d0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978d8);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    pbVar54 = (byte *)((long)unaff_x26 + _DAT_1130978e0);
    pbVar54[0] = 0;
    pbVar54[1] = 0;
    pbVar54[2] = 0;
    pbVar54[3] = 0;
    pbVar54[4] = 0;
    pbVar54[5] = 0;
    pbVar54[6] = 0;
    pbVar54[7] = 0;
    pbVar54[8] = bVar84;
    func_0x0001000bc298();
    puVar45 = &stack0xffffffffffffff80;
    func_0x000107c61154(puVar45,PTR_s_init_1125d9248);
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    func_0x0001000bc2e0();
    auVar98._8_8_ = pppppppcVar56;
    auVar98._0_8_ = puVar45;
    return auVar98;
  case 0x2a:
    pppppppcVar66 = param_1;
    pppppppcVar68 = UNRECOVERED_JUMPTABLE;
    in_stack_00000000 = param_1;
    in_stack_00000008 = pppppppcVar56;
    in_stack_00000010 = puVar45;
    func_0x0001099ed780(param_1,UNRECOVERED_JUMPTABLE,in_x4,in_x5,in_x6);
    if ((code *******)0xffffffffffffff88 < pppppppcVar66) {
code_r0x0001099ef144:
      auVar137._8_8_ = pppppppcVar68;
      auVar137._0_8_ = pppppppcVar66;
      return auVar137;
    }
    uVar60 = (long)in_x4 - (long)pppppppcVar66;
    if (in_x4 < pppppppcVar66 || uVar60 == 0) {
      pppppppcVar66 = (code *******)0xffffffffffffffb8;
      goto code_r0x0001099ef144;
    }
    puVar59 = (ushort *)((long)UNRECOVERED_JUMPTABLE + (long)pppppppcVar66);
    if (uVar60 < 10) {
code_r0x0001099ede30:
      auVar134._8_8_ = pppppppcVar75;
      auVar134._0_8_ = 0xffffffffffffffec;
      return auVar134;
    }
    uVar21 = *puVar59;
    uVar18 = puVar59[1];
    uVar19 = puVar59[2];
    uVar79 = (ulong)uVar21 + (ulong)uVar18 + (ulong)uVar19 + 6;
    if (uVar60 < uVar79) goto code_r0x0001099ede30;
    if (uVar21 == 0) {
      auVar135._8_8_ = pppppppcVar75;
      auVar135._0_8_ = 0xffffffffffffffb8;
      return auVar135;
    }
    pppppppcVar66 = (code *******)(puVar59 + 3);
    UNRECOVERED_JUMPTABLE = (code *******)((long)pppppppcVar66 + (ulong)uVar21);
    uVar20 = *(ushort *)((long)param_1 + 2);
    pppppppcVar68 = (code *******)(puVar59 + 7);
    pppppppcVar70 = pppppppcVar75;
    if (uVar21 < 8) {
      pppppppcStack_70 = (code *******)(ulong)*(byte *)pppppppcVar66;
      uVar62 = (uint)uVar21;
      if (uVar21 < 5) {
        if (uVar62 == 2) goto code_r0x0001099edf28;
        if (uVar62 == 3) goto code_r0x0001099edf20;
        if (uVar62 == 4) goto code_r0x0001099edf18;
      }
      else {
        if (uVar21 != 5) {
          if (uVar21 != 6) {
            if (uVar62 != 7) goto code_r0x0001099edf34;
            pppppppcStack_70 =
                 (code *******)((ulong)pppppppcStack_70 | (ulong)(byte)puVar59[6] << 0x30);
          }
          pppppppcStack_70 =
               (code *******)
               ((long)pppppppcStack_70 + ((ulong)*(byte *)((long)puVar59 + 0xb) << 0x28));
        }
        pppppppcStack_70 =
             (code *******)((long)pppppppcStack_70 + ((ulong)(byte)puVar59[5] << 0x20));
code_r0x0001099edf18:
        pppppppcStack_70 = pppppppcStack_70 + (ulong)*(byte *)((long)puVar59 + 9) * 0x200000;
code_r0x0001099edf20:
        pppppppcStack_70 = pppppppcStack_70 + (ulong)(byte)puVar59[4] * 0x2000;
code_r0x0001099edf28:
        pppppppcStack_70 = pppppppcStack_70 + (ulong)*(byte *)((long)puVar59 + 7) * 0x20;
      }
code_r0x0001099edf34:
      if (*(byte *)((long)UNRECOVERED_JUMPTABLE + -1) != 0) {
        uVar62 = (int)LZCOUNT((uint)*(byte *)((long)UNRECOVERED_JUMPTABLE + -1)) + uVar62 * -8 +
                 0x29;
        pppppppcStack_60 = pppppppcVar66;
        goto code_r0x0001099edf48;
      }
code_r0x0001099ee648:
      pppppppcVar47 = (code *******)0xffffffffffffffec;
    }
    else {
      pppppppcStack_70 = (code *******)UNRECOVERED_JUMPTABLE[-1];
      if ((ulong)pppppppcStack_70 >> 0x38 == 0) {
code_r0x0001099ee054:
        pppppppcVar47 = (code *******)0xffffffffffffffff;
        goto code_r0x0001099ee64c;
      }
      uVar62 = 8 - ((uint)LZCOUNT((uint)(byte)((ulong)pppppppcStack_70 >> 0x38)) ^ 0x1f);
      pppppppcStack_60 = UNRECOVERED_JUMPTABLE + -1;
code_r0x0001099edf48:
      uVar81 = (ulong)uVar62;
      if (uVar18 != 0) {
        pppppppcStack_a8 = (code *******)((long)UNRECOVERED_JUMPTABLE + (ulong)uVar18);
        pppppppcVar42 = UNRECOVERED_JUMPTABLE + 1;
        if (uVar18 < 8) {
          ppppppcStack_98 = (code ******)(ulong)*(byte *)UNRECOVERED_JUMPTABLE;
          uVar76 = (uint)uVar18;
          if (uVar18 < 5) {
            if (uVar76 == 2) goto code_r0x0001099ee000;
            if (uVar76 == 3) goto code_r0x0001099edff8;
            if (uVar76 == 4) goto code_r0x0001099edff0;
          }
          else {
            if (uVar18 != 5) {
              if (uVar18 != 6) {
                if (uVar76 != 7) goto code_r0x0001099ee00c;
                ppppppcStack_98 =
                     (code ******)
                     ((ulong)ppppppcStack_98 |
                     (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 6) << 0x30);
              }
              ppppppcStack_98 =
                   (code ******)
                   ((long)ppppppcStack_98 +
                   ((ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 5) << 0x28));
            }
            ppppppcStack_98 =
                 (code ******)
                 ((long)ppppppcStack_98 +
                 ((ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 4) << 0x20));
code_r0x0001099edff0:
            ppppppcStack_98 =
                 ppppppcStack_98 + (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 3) * 0x200000;
code_r0x0001099edff8:
            ppppppcStack_98 =
                 ppppppcStack_98 + (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 2) * 0x2000;
code_r0x0001099ee000:
            ppppppcStack_98 =
                 ppppppcStack_98 + (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE + 1) * 0x20;
          }
code_r0x0001099ee00c:
          if (*(byte *)((long)pppppppcStack_a8 + -1) == 0) goto code_r0x0001099ee648;
          iVar39 = (int)LZCOUNT((uint)*(byte *)((long)pppppppcStack_a8 + -1)) + uVar76 * -8 + 0x29;
          pppppppcStack_88 = UNRECOVERED_JUMPTABLE;
        }
        else {
          ppppppcStack_98 = pppppppcStack_a8[-1];
          if ((ulong)ppppppcStack_98 >> 0x38 == 0) goto code_r0x0001099ee054;
          iVar39 = 8 - ((uint)LZCOUNT((uint)(byte)((ulong)ppppppcStack_98 >> 0x38)) ^ 0x1f);
          pppppppcStack_88 = pppppppcStack_a8 + -1;
        }
        puStack_90 = (undefined1 *)CONCAT44(puStack_90._4_4_,iVar39);
        if (uVar19 != 0) {
          pppppppcVar70 = (code *******)((long)pppppppcStack_a8 + (ulong)uVar19);
          pppppppcStack_a0 = pppppppcStack_a8 + 1;
          if (uVar19 < 8) {
            pppppppcStack_c0 = (code *******)(ulong)*(byte *)pppppppcStack_a8;
            uVar76 = (uint)uVar19;
            if (uVar19 < 5) {
              if (uVar76 == 2) goto code_r0x0001099ee0e8;
              if (uVar76 == 3) goto code_r0x0001099ee0e0;
              if (uVar76 == 4) goto code_r0x0001099ee0d8;
            }
            else {
              if (uVar19 != 5) {
                if (uVar19 != 6) {
                  if (uVar76 != 7) goto code_r0x0001099ee0f4;
                  pppppppcStack_c0 =
                       (code *******)
                       ((ulong)pppppppcStack_c0 |
                       (ulong)*(byte *)((long)pppppppcStack_a8 + 6) << 0x30);
                }
                pppppppcStack_c0 =
                     (code *******)
                     ((long)pppppppcStack_c0 +
                     ((ulong)*(byte *)((long)pppppppcStack_a8 + 5) << 0x28));
              }
              pppppppcStack_c0 =
                   (code *******)
                   ((long)pppppppcStack_c0 + ((ulong)*(byte *)((long)pppppppcStack_a8 + 4) << 0x20))
              ;
code_r0x0001099ee0d8:
              pppppppcStack_c0 =
                   pppppppcStack_c0 + (ulong)*(byte *)((long)pppppppcStack_a8 + 3) * 0x200000;
code_r0x0001099ee0e0:
              pppppppcStack_c0 =
                   pppppppcStack_c0 + (ulong)*(byte *)((long)pppppppcStack_a8 + 2) * 0x2000;
code_r0x0001099ee0e8:
              pppppppcStack_c0 =
                   pppppppcStack_c0 + (ulong)*(byte *)((long)pppppppcStack_a8 + 1) * 0x20;
            }
code_r0x0001099ee0f4:
            if (*(byte *)((long)pppppppcVar70 + -1) == 0) goto code_r0x0001099ee648;
            uStack_b8 = (int)LZCOUNT((uint)*(byte *)((long)pppppppcVar70 + -1)) + uVar76 * -8 + 0x29
            ;
            pppppppcStack_b0 = pppppppcStack_a8;
          }
          else {
            pppppppcStack_c0 = (code *******)pppppppcVar70[-1];
            if ((ulong)pppppppcStack_c0 >> 0x38 == 0) goto code_r0x0001099ee054;
            uStack_b8 = 8 - ((uint)LZCOUNT((uint)(byte)((ulong)pppppppcStack_c0 >> 0x38)) ^ 0x1f);
            pppppppcStack_b0 = pppppppcVar70 + -1;
          }
          pppppppcVar47 = (code *******)&pppppppcStack_e8;
          func_0x000107c2ae50(pppppppcVar47,pppppppcVar70,uVar60 - uVar79);
          if (pppppppcVar47 < (code *******)0xffffffffffffff89) {
            pppppppcVar82 = (code *******)((long)pppppppcVar56 + (long)pppppppcVar75);
            pbVar54 = (byte *)((long)pppppppcVar75 + 3);
            pppppppcVar70 = (code *******)((long)pppppppcVar56 + ((ulong)pbVar54 >> 2));
            pppppppcVar6 = (code *******)((long)pppppppcVar70 + ((ulong)pbVar54 >> 2));
            pppppppcVar7 = (code *******)((long)pppppppcVar6 + ((ulong)pbVar54 >> 2));
            iVar40 = (int)&pppppppcStack_70;
            func_0x000107c2ae54();
            iVar87 = (int)&ppppppcStack_98;
            func_0x000107c2ae54();
            iVar39 = (int)&pppppppcStack_c0;
            func_0x000107c2ae54();
            iVar41 = (int)&pppppppcStack_e8;
            func_0x000107c2ae54();
            pppppppcVar61 = (code *******)((long)pppppppcVar82 + -7);
            iVar89 = (int)pppppppcVar66;
            iVar88 = (int)UNRECOVERED_JUMPTABLE;
            iVar83 = (int)pppppppcStack_a8;
            iVar90 = (int)pppppppcStack_d0;
            pppppppcVar67 = pppppppcVar7;
            pppppppcVar72 = pppppppcVar6;
            pppppppcVar73 = pppppppcVar70;
            if ((pppppppcVar7 < pppppppcVar61) &&
               ((iVar87 == 0 && iVar40 == 0) && (iVar39 == 0 && iVar41 == 0))) {
              uVar76 = -(uint)uVar20 & 0x3f;
              uVar81 = (ulong)uVar62;
              puStack_90 = (undefined1 *)((ulong)puStack_90 & 0xffffffff);
              uVar60 = (ulong)uStack_b8;
              pppppppcStack_e0 = (code *******)((ulong)pppppppcStack_e0 & 0xffffffff);
              pppppppcStack_f8 = pppppppcStack_d8;
              pppppppcVar47 = pppppppcStack_e8;
              do {
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_70 << (uVar81 & 0x3f)) >> uVar76) * 4 + 4);
                *(ushort *)pppppppcVar56 = *puVar59;
                uVar62 = (int)uVar81 + (uint)(byte)puVar59[1];
                pbVar8 = (byte *)((long)pppppppcVar56 + (ulong)*(byte *)((long)puVar59 + 3));
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)ppppppcStack_98 << ((ulong)puStack_90 & 0x3f)) >> uVar76) *
                          4 + 4);
                *(ushort *)pppppppcVar73 = *puVar59;
                uVar74 = (int)puStack_90 + (uint)(byte)puVar59[1];
                pbVar9 = (byte *)((long)pppppppcVar73 + (ulong)*(byte *)((long)puVar59 + 3));
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_c0 << (uVar60 & 0x3f)) >> uVar76) * 4 + 4);
                *(ushort *)pppppppcVar72 = *puVar59;
                uVar2 = (int)uVar60 + (uint)(byte)puVar59[1];
                pbVar10 = (byte *)((long)pppppppcVar72 + (ulong)*(byte *)((long)puVar59 + 3));
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcVar47 << ((ulong)pppppppcStack_e0 & 0x3f)) >>
                          uVar76) * 4 + 4);
                *(ushort *)pppppppcVar67 = *puVar59;
                uVar3 = (int)pppppppcStack_e0 + (uint)(byte)puVar59[1];
                pbVar11 = (byte *)((long)pppppppcVar67 + (ulong)*(byte *)((long)puVar59 + 3));
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_70 << ((ulong)uVar62 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar8 = *(undefined2 *)pbVar54;
                uVar62 = uVar62 + pbVar54[2];
                bVar84 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                uVar74 = uVar74 + pbVar54[2];
                pbVar9 = pbVar9 + pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_c0 << ((ulong)uVar2 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar10 = *(undefined2 *)pbVar54;
                uVar2 = uVar2 + pbVar54[2];
                pbVar10 = pbVar10 + pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcVar47 << ((ulong)uVar3 & 0x3f)) >> uVar76)
                                  * 4 + 4);
                *(undefined2 *)pbVar11 = *(undefined2 *)pbVar54;
                uVar3 = uVar3 + pbVar54[2];
                pbVar11 = pbVar11 + pbVar54[3];
                pbVar8 = pbVar8 + bVar84;
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_70 << ((ulong)uVar62 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar8 = *(undefined2 *)pbVar54;
                uVar62 = uVar62 + pbVar54[2];
                bVar84 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                uVar74 = uVar74 + pbVar54[2];
                bVar85 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_c0 << ((ulong)uVar2 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)pbVar10 = *(undefined2 *)pbVar54;
                uVar2 = uVar2 + pbVar54[2];
                bVar86 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcVar47 << ((ulong)uVar3 & 0x3f)) >> uVar76)
                                  * 4 + 4);
                *(undefined2 *)pbVar11 = *(undefined2 *)pbVar54;
                uVar3 = uVar3 + pbVar54[2];
                bVar12 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_70 << ((ulong)uVar62 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)(pbVar8 + bVar84) = *(undefined2 *)pbVar54;
                uVar62 = uVar62 + pbVar54[2];
                uVar81 = (ulong)uVar62;
                bVar13 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)(pbVar9 + bVar85) = *(undefined2 *)pbVar54;
                bVar14 = pbVar54[2];
                bVar15 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_c0 << ((ulong)uVar2 & 0x3f)) >>
                                  uVar76) * 4 + 4);
                *(undefined2 *)(pbVar10 + bVar86) = *(undefined2 *)pbVar54;
                bVar16 = pbVar54[2];
                bVar17 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcVar47 << ((ulong)uVar3 & 0x3f)) >> uVar76)
                                  * 4 + 4);
                *(undefined2 *)(pbVar11 + bVar12) = *(undefined2 *)pbVar54;
                if (uVar62 < 0x41) {
                  if (pppppppcStack_60 < pppppppcVar68) {
                    if (pppppppcStack_60 == pppppppcVar66) {
                      cVar33 = '\x01';
                      if (uVar62 == 0x40) {
                        cVar33 = '\x02';
                      }
                      goto code_r0x0001099ee47c;
                    }
                    cVar33 = (code *******)((long)pppppppcStack_60 - (ulong)(uVar62 >> 3)) <
                             pppppppcVar66;
                    uVar22 = (int)pppppppcStack_60 - iVar89;
                    if (!(bool)cVar33) {
                      uVar22 = uVar62 >> 3;
                    }
                    uVar62 = uVar62 + uVar22 * -8;
                  }
                  else {
                    cVar33 = false;
                    uVar22 = uVar62 >> 3;
                    uVar62 = uVar62 & 7;
                  }
                  uVar81 = (ulong)uVar62;
                  pppppppcStack_60 = (code *******)((long)pppppppcStack_60 - (ulong)uVar22);
                  pppppppcStack_70 = (code *******)*pppppppcStack_60;
                }
                else {
                  cVar33 = '\x03';
                }
code_r0x0001099ee47c:
                uVar74 = uVar74 + bVar14;
                puStack_90 = (undefined1 *)(ulong)uVar74;
                if (uVar74 < 0x41) {
                  if (pppppppcStack_88 < pppppppcVar42) {
                    if (pppppppcStack_88 == UNRECOVERED_JUMPTABLE) {
                      cVar34 = '\x01';
                      if (uVar74 == 0x40) {
                        cVar34 = '\x02';
                      }
                      goto code_r0x0001099ee4e8;
                    }
                    cVar34 = (code *******)((long)pppppppcStack_88 - (ulong)(uVar74 >> 3)) <
                             UNRECOVERED_JUMPTABLE;
                    uVar62 = (int)pppppppcStack_88 - iVar88;
                    if (!(bool)cVar34) {
                      uVar62 = uVar74 >> 3;
                    }
                    uVar74 = uVar74 + uVar62 * -8;
                  }
                  else {
                    cVar34 = false;
                    uVar62 = uVar74 >> 3;
                    uVar74 = uVar74 & 7;
                  }
                  puStack_90 = (undefined1 *)(ulong)uVar74;
                  pppppppcStack_88 = (code *******)((long)pppppppcStack_88 - (ulong)uVar62);
                  ppppppcStack_98 = *pppppppcStack_88;
                }
                else {
                  cVar34 = '\x03';
                }
code_r0x0001099ee4e8:
                uVar2 = uVar2 + bVar16;
                uVar60 = (ulong)uVar2;
                if (uVar2 < 0x41) {
                  if (pppppppcStack_b0 < pppppppcStack_a0) {
                    if (pppppppcStack_b0 == pppppppcStack_a8) {
                      cVar35 = '\x01';
                      if (uVar2 == 0x40) {
                        cVar35 = '\x02';
                      }
                      goto code_r0x0001099ee558;
                    }
                    cVar35 = (code *******)((long)pppppppcStack_b0 - (ulong)(uVar2 >> 3)) <
                             pppppppcStack_a8;
                    uVar62 = (int)pppppppcStack_b0 - iVar83;
                    if (!(bool)cVar35) {
                      uVar62 = uVar2 >> 3;
                    }
                    uVar2 = uVar2 + uVar62 * -8;
                  }
                  else {
                    cVar35 = false;
                    uVar62 = uVar2 >> 3;
                    uVar2 = uVar2 & 7;
                  }
                  pppppppcStack_b0 = (code *******)((long)pppppppcStack_b0 - (ulong)uVar62);
                  uVar60 = (ulong)uVar2;
                  pppppppcStack_c0 = (code *******)*pppppppcStack_b0;
                }
                else {
                  cVar35 = '\x03';
                }
code_r0x0001099ee558:
                uVar3 = uVar3 + pbVar54[2];
                pppppppcStack_e0 = (code *******)(ulong)uVar3;
                if (uVar3 < 0x41) {
                  if (pppppppcStack_f8 < pppppppcStack_c8) {
                    if (pppppppcStack_f8 == pppppppcStack_d0) {
                      cVar36 = '\x03';
                      goto code_r0x0001099ee5dc;
                    }
                    cVar36 = (code *******)((long)pppppppcStack_f8 - (ulong)(uVar3 >> 3)) <
                             pppppppcStack_d0;
                    uVar62 = (int)pppppppcStack_f8 - iVar90;
                    if (!(bool)cVar36) {
                      uVar62 = uVar3 >> 3;
                    }
                    uVar3 = uVar3 + uVar62 * -8;
                  }
                  else {
                    cVar36 = false;
                    uVar62 = uVar3 >> 3;
                    uVar3 = uVar3 & 7;
                  }
                  pppppppcStack_f8 = (code *******)((long)pppppppcStack_f8 - (ulong)uVar62);
                  pppppppcStack_e0 = (code *******)(ulong)uVar3;
                  pppppppcVar47 = (code *******)*pppppppcStack_f8;
                  pppppppcStack_e8 = pppppppcVar47;
                  pppppppcStack_d8 = pppppppcStack_f8;
                }
                else {
                  cVar36 = '\x03';
                }
code_r0x0001099ee5dc:
                pppppppcVar56 = (code *******)(pbVar8 + bVar84 + bVar13);
                pppppppcVar73 = (code *******)(pbVar9 + bVar85 + bVar15);
                pppppppcVar72 = (code *******)(pbVar10 + bVar86 + bVar17);
                pppppppcVar67 = (code *******)(pbVar11 + bVar12 + pbVar54[3]);
              } while (pppppppcVar67 < pppppppcVar61 &&
                       (((cVar34 == '\0' && cVar33 == '\0') && cVar35 == '\0') && cVar36 == '\0'));
              uStack_b8 = (uint)uVar60;
            }
            pppppppcVar47 = (code *******)0xffffffffffffffec;
            if (((pppppppcVar56 <= pppppppcVar70) && (pppppppcVar73 <= pppppppcVar6)) &&
               (pppppppcVar72 <= pppppppcVar7)) {
              uVar62 = -(uint)uVar20 & 0x3f;
              if ((uint)uVar81 < 0x41) {
                do {
                  uVar76 = (uint)uVar81;
                  if (pppppppcStack_60 < pppppppcVar68) {
                    if (pppppppcStack_60 == pppppppcVar66) goto code_r0x0001099ee81c;
                    bVar38 = pppppppcVar66 <= (code *******)((long)pppppppcStack_60 - (uVar81 >> 3))
                    ;
                    uVar74 = (uint)(uVar81 >> 3);
                    if (!bVar38) {
                      uVar74 = (int)pppppppcStack_60 - iVar89;
                    }
                    uVar76 = uVar76 + uVar74 * -8;
                  }
                  else {
                    uVar74 = uVar76 >> 3;
                    uVar76 = uVar76 & 7;
                    bVar38 = true;
                  }
                  pppppppcStack_60 = (code *******)((long)pppppppcStack_60 - (ulong)uVar74);
                  uVar81 = (ulong)uVar76;
                  pppppppcStack_70 = (code *******)*pppppppcStack_60;
                  if (((code *******)((long)pppppppcVar70 + -7) <= pppppppcVar56) || (!bVar38)) {
                    if (uVar76 < 0x41) goto code_r0x0001099ee81c;
                    break;
                  }
                  puVar59 = (ushort *)
                            ((long)param_1 +
                            ((ulong)((long)pppppppcStack_70 << ((ulong)uVar76 & 0x3f)) >> uVar62) *
                            4 + 4);
                  *(ushort *)pppppppcVar56 = *puVar59;
                  uVar76 = uVar76 + (byte)puVar59[1];
                  pbVar9 = (byte *)((long)pppppppcVar56 + (ulong)*(byte *)((long)puVar59 + 3));
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_70 << ((ulong)uVar76 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uVar76 = uVar76 + pbVar54[2];
                  pbVar9 = pbVar9 + pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_70 << ((ulong)uVar76 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uVar76 = uVar76 + pbVar54[2];
                  bVar84 = pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_70 << ((ulong)uVar76 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)(pbVar9 + bVar84) = *(undefined2 *)pbVar54;
                  uVar76 = uVar76 + pbVar54[2];
                  uVar81 = (ulong)uVar76;
                  pppppppcVar56 = (code *******)(pbVar9 + bVar84 + pbVar54[3]);
                } while (uVar76 < 0x41);
              }
code_r0x0001099ee8ec:
              for (; uVar76 = (uint)uVar81,
                  pppppppcVar56 <= (code *******)((long)pppppppcVar70 + -2);
                  pppppppcVar56 =
                       (code *******)((long)pppppppcVar56 + (ulong)*(byte *)((long)puVar59 + 3))) {
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_70 << (uVar81 & 0x3f)) >> uVar62) * 4 + 4);
                *(ushort *)pppppppcVar56 = *puVar59;
                uVar81 = (ulong)(uVar76 + (byte)puVar59[1]);
              }
              if (pppppppcVar56 < pppppppcVar70) {
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_70 << (uVar81 & 0x3f)) >> uVar62) * 4
                                  + 4);
                *(byte *)pppppppcVar56 = *pbVar54;
                if (pbVar54[3] == 1) {
                  uVar76 = uVar76 + pbVar54[2];
                }
                else if ((uVar76 < 0x40) && (uVar76 = uVar76 + pbVar54[2], 0x3f < uVar76)) {
                  uVar76 = 0x40;
                }
              }
              uVar60 = (ulong)puStack_90 & 0xffffffff;
              if ((uint)puStack_90 < 0x41) {
                do {
                  uVar74 = (uint)uVar60;
                  if (pppppppcStack_88 < pppppppcVar42) {
                    if (pppppppcStack_88 == UNRECOVERED_JUMPTABLE) goto code_r0x0001099eea84;
                    bVar38 = UNRECOVERED_JUMPTABLE <=
                             (code *******)((long)pppppppcStack_88 - (uVar60 >> 3));
                    uVar2 = (uint)(uVar60 >> 3);
                    if (!bVar38) {
                      uVar2 = (int)pppppppcStack_88 - iVar88;
                    }
                    uVar74 = uVar74 + uVar2 * -8;
                  }
                  else {
                    uVar2 = uVar74 >> 3;
                    uVar74 = uVar74 & 7;
                    bVar38 = true;
                  }
                  pppppppcStack_88 = (code *******)((long)pppppppcStack_88 - (ulong)uVar2);
                  uVar60 = (ulong)uVar74;
                  puStack_90 = (undefined1 *)(ulong)uVar74;
                  ppppppcStack_98 = *pppppppcStack_88;
                  if (((code *******)((long)pppppppcVar6 + -7) <= pppppppcVar73) || (!bVar38)) {
                    if (uVar74 < 0x41) goto code_r0x0001099eea84;
                    break;
                  }
                  puVar59 = (ushort *)
                            ((long)param_1 +
                            ((ulong)((long)ppppppcStack_98 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                  *(ushort *)pppppppcVar73 = *puVar59;
                  uVar74 = uVar74 + (byte)puVar59[1];
                  pbVar9 = (byte *)((long)pppppppcVar73 + (ulong)*(byte *)((long)puVar59 + 3));
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uVar74 = uVar74 + pbVar54[2];
                  pbVar9 = pbVar9 + pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uVar74 = uVar74 + pbVar54[2];
                  bVar84 = pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)ppppppcStack_98 << ((ulong)uVar74 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)(pbVar9 + bVar84) = *(undefined2 *)pbVar54;
                  uVar74 = uVar74 + pbVar54[2];
                  uVar60 = (ulong)uVar74;
                  puStack_90 = (undefined1 *)(ulong)uVar74;
                  pppppppcVar73 = (code *******)(pbVar9 + bVar84 + pbVar54[3]);
                } while (uVar74 < 0x41);
              }
code_r0x0001099eeb54:
              while( true ) {
                uVar74 = (uint)uVar60;
                if ((code *******)((long)pppppppcVar6 + -2) < pppppppcVar73) break;
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)ppppppcStack_98 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                *(ushort *)pppppppcVar73 = *puVar59;
                uVar74 = uVar74 + (byte)puVar59[1];
                uVar60 = (ulong)uVar74;
                puStack_90 = (undefined1 *)(ulong)uVar74;
                pppppppcVar73 =
                     (code *******)((long)pppppppcVar73 + (ulong)*(byte *)((long)puVar59 + 3));
              }
              if (pppppppcVar73 < pppppppcVar6) {
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)ppppppcStack_98 << (uVar60 & 0x3f)) >> uVar62) * 4
                                  + 4);
                *(byte *)pppppppcVar73 = *pbVar54;
                if (pbVar54[3] == 1) {
                  puStack_90._0_4_ = uVar74 + pbVar54[2];
                }
                else if ((uVar74 < 0x40) &&
                        (puStack_90._0_4_ = uVar74 + pbVar54[2], 0x3f < (uint)puStack_90)) {
                  puStack_90._0_4_ = 0x40;
                }
              }
              uVar60 = (ulong)uStack_b8;
              if (uStack_b8 < 0x41) {
                do {
                  uVar74 = (uint)uVar60;
                  if (pppppppcStack_b0 < pppppppcStack_a0) {
                    if (pppppppcStack_b0 == pppppppcStack_a8) goto code_r0x0001099eecec;
                    bVar38 = pppppppcStack_a8 <=
                             (code *******)((long)pppppppcStack_b0 - (uVar60 >> 3));
                    uVar2 = (uint)(uVar60 >> 3);
                    if (!bVar38) {
                      uVar2 = (int)pppppppcStack_b0 - iVar83;
                    }
                    uStack_b8 = uVar74 + uVar2 * -8;
                  }
                  else {
                    uVar2 = uVar74 >> 3;
                    uStack_b8 = uVar74 & 7;
                    bVar38 = true;
                  }
                  pppppppcStack_b0 = (code *******)((long)pppppppcStack_b0 - (ulong)uVar2);
                  uVar60 = (ulong)uStack_b8;
                  pppppppcStack_c0 = (code *******)*pppppppcStack_b0;
                  if (((code *******)((long)pppppppcVar7 + -7) <= pppppppcVar72) || (!bVar38)) {
                    if (uStack_b8 < 0x41) goto code_r0x0001099eecec;
                    break;
                  }
                  puVar59 = (ushort *)
                            ((long)param_1 +
                            ((ulong)((long)pppppppcStack_c0 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                  *(ushort *)pppppppcVar72 = *puVar59;
                  uStack_b8 = uStack_b8 + (byte)puVar59[1];
                  pbVar9 = (byte *)((long)pppppppcVar72 + (ulong)*(byte *)((long)puVar59 + 3));
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_c0 << ((ulong)uStack_b8 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uStack_b8 = uStack_b8 + pbVar54[2];
                  pbVar9 = pbVar9 + pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_c0 << ((ulong)uStack_b8 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                  uStack_b8 = uStack_b8 + pbVar54[2];
                  bVar84 = pbVar54[3];
                  pbVar54 = (byte *)((long)param_1 +
                                    ((ulong)((long)pppppppcStack_c0 << ((ulong)uStack_b8 & 0x3f)) >>
                                    uVar62) * 4 + 4);
                  *(undefined2 *)(pbVar9 + bVar84) = *(undefined2 *)pbVar54;
                  uStack_b8 = uStack_b8 + pbVar54[2];
                  uVar60 = (ulong)uStack_b8;
                  pppppppcVar72 = (code *******)(pbVar9 + bVar84 + pbVar54[3]);
                } while (uStack_b8 < 0x41);
              }
code_r0x0001099eedbc:
              for (; uVar74 = (uint)uVar60, pppppppcVar72 <= (code *******)((long)pppppppcVar7 + -2)
                  ; pppppppcVar72 =
                         (code *******)((long)pppppppcVar72 + (ulong)*(byte *)((long)puVar59 + 3)))
              {
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_c0 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                *(ushort *)pppppppcVar72 = *puVar59;
                uStack_b8 = uVar74 + (byte)puVar59[1];
                uVar60 = (ulong)uStack_b8;
              }
              if (pppppppcVar72 < pppppppcVar7) {
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_c0 << (uVar60 & 0x3f)) >> uVar62) * 4
                                  + 4);
                *(byte *)pppppppcVar72 = *pbVar54;
                if (pbVar54[3] == 1) {
                  uStack_b8 = uVar74 + pbVar54[2];
                }
                else if ((uVar74 < 0x40) && (uStack_b8 = uVar74 + pbVar54[2], 0x3f < uStack_b8)) {
                  uStack_b8 = 0x40;
                }
              }
              uVar74 = (uint)pppppppcStack_e0;
              while (uVar60 = (ulong)uVar74, uVar74 < 0x41) {
                if (pppppppcStack_d8 < pppppppcStack_c8) {
                  if (pppppppcStack_d8 == pppppppcStack_d0) goto code_r0x0001099eef50;
                  bVar38 = pppppppcStack_d0 <=
                           (code *******)((long)pppppppcStack_d8 - (ulong)(uVar74 >> 3));
                  uVar2 = uVar74 >> 3;
                  if (!bVar38) {
                    uVar2 = (int)pppppppcStack_d8 - iVar90;
                  }
                  uVar74 = uVar74 + uVar2 * -8;
                }
                else {
                  uVar2 = uVar74 >> 3;
                  uVar74 = uVar74 & 7;
                  bVar38 = true;
                }
                pppppppcStack_d8 = (code *******)((long)pppppppcStack_d8 - (ulong)uVar2);
                uVar60 = (ulong)uVar74;
                pppppppcStack_e0 = (code *******)(ulong)uVar74;
                pppppppcStack_e8 = (code *******)*pppppppcStack_d8;
                if ((pppppppcVar61 <= pppppppcVar67) || (!bVar38)) {
                  if (uVar74 < 0x41) goto code_r0x0001099eef50;
                  break;
                }
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_e8 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                *(ushort *)pppppppcVar67 = *puVar59;
                uVar74 = uVar74 + (byte)puVar59[1];
                pbVar9 = (byte *)((long)pppppppcVar67 + (ulong)*(byte *)((long)puVar59 + 3));
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_e8 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar62) * 4 + 4);
                *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                uVar74 = uVar74 + pbVar54[2];
                pbVar9 = pbVar9 + pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_e8 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar62) * 4 + 4);
                *(undefined2 *)pbVar9 = *(undefined2 *)pbVar54;
                uVar74 = uVar74 + pbVar54[2];
                bVar84 = pbVar54[3];
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_e8 << ((ulong)uVar74 & 0x3f)) >>
                                  uVar62) * 4 + 4);
                *(undefined2 *)(pbVar9 + bVar84) = *(undefined2 *)pbVar54;
                uVar74 = uVar74 + pbVar54[2];
                pppppppcStack_e0 = (code *******)(ulong)uVar74;
                pppppppcVar67 = (code *******)(pbVar9 + bVar84 + pbVar54[3]);
              }
code_r0x0001099ef020:
              for (; uVar74 = (uint)uVar60,
                  pppppppcVar67 <= (code *******)((long)pppppppcVar82 + -2);
                  pppppppcVar67 =
                       (code *******)((long)pppppppcVar67 + (ulong)*(byte *)((long)puVar59 + 3))) {
                puVar59 = (ushort *)
                          ((long)param_1 +
                          ((ulong)((long)pppppppcStack_e8 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
                *(ushort *)pppppppcVar67 = *puVar59;
                uVar74 = uVar74 + (byte)puVar59[1];
                uVar60 = (ulong)uVar74;
                pppppppcStack_e0 = (code *******)(ulong)uVar74;
              }
              if (pppppppcVar67 < pppppppcVar82) {
                pbVar54 = (byte *)((long)param_1 +
                                  ((ulong)((long)pppppppcStack_e8 << (uVar60 & 0x3f)) >> uVar62) * 4
                                  + 4);
                *(byte *)pppppppcVar67 = *pbVar54;
                if (pbVar54[3] == 1) {
                  uVar74 = uVar74 + pbVar54[2];
                }
                else if (uVar74 < 0x40) {
                  uVar74 = uVar74 + pbVar54[2];
                  if (0x3f < uVar74) {
                    uVar74 = 0x40;
                  }
                }
                else {
                  uVar74 = (uint)pppppppcStack_e0;
                }
              }
              pppppppcVar47 = (code *******)0xffffffffffffffec;
              pppppppcVar70 = pppppppcStack_d0;
              if (((((((uVar74 == 0x40 && pppppppcStack_d8 == pppppppcStack_d0) && uStack_b8 == 0x40
                      ) && pppppppcStack_b0 == pppppppcStack_a8) && (uint)puStack_90 == 0x40) &&
                   pppppppcStack_88 == UNRECOVERED_JUMPTABLE) && uVar76 == 0x40) &&
                  pppppppcStack_60 == pppppppcVar66) {
                pppppppcVar47 = pppppppcVar75;
              }
            }
          }
          goto code_r0x0001099ee64c;
        }
      }
      pppppppcVar47 = (code *******)0xffffffffffffffb8;
    }
code_r0x0001099ee64c:
    auVar136._8_8_ = pppppppcVar70;
    auVar136._0_8_ = pppppppcVar47;
    return auVar136;
  case 0x2b:
    if (!in_ZR) {
      if (UNRECOVERED_JUMPTABLE != (code *******)0x4) goto code_r0x0001000cedd8;
      pppppppcVar68 = pppppppcVar68 + (ulong)*(byte *)((long)pppppppcVar75 + 3) * 0x200000;
    }
    pppppppcVar68 =
         pppppppcVar68 +
         (ulong)*(byte *)((long)pppppppcVar75 + 2) * 0x2000 +
         (ulong)*(byte *)((long)pppppppcVar75 + 1) * 0x20;
code_r0x0001000cedd8:
    if (((byte *)((long)pppppppcVar75 + (long)UNRECOVERED_JUMPTABLE))[-1] == 0) {
      lVar63 = -0x14;
    }
    else {
      uVar21 = *(ushort *)in_x4;
      iVar39 = (int)LZCOUNT((uint)((byte *)((long)pppppppcVar75 + (long)UNRECOVERED_JUMPTABLE))[-1])
               + (uint)bVar84 * -8 + 0x29 + (uint)uVar21;
      uVar60 = (ulong)pppppppcVar68 >> ((ulong)(uint)-iVar39 & 0x3f) &
               (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar21 * 4);
      uVar62 = iVar39 + (uint)uVar21;
      uVar81 = (ulong)uVar62;
      uVar79 = (ulong)pppppppcVar68 >> ((ulong)-uVar62 & 0x3f) &
               (ulong)*(uint *)(&UNK_10e00f7c4 + (ulong)uVar21 * 4);
      pppppppcVar66 = param_1;
      if (uVar62 < 0x41) {
        uVar71 = 0;
        do {
          uVar62 = (uint)uVar81;
          if ((long)uVar71 < 8) {
            if (uVar71 == 0) goto code_r0x0001000cf078;
            uVar81 = uVar81 >> 3;
            bVar38 = (long)uVar81 <= (long)uVar71;
            uVar69 = uVar71;
            if ((long)uVar81 <= (long)uVar71) {
              uVar69 = uVar81;
            }
            uVar62 = uVar62 + (int)uVar69 * -8;
          }
          else {
            uVar69 = (ulong)(uVar62 >> 3);
            uVar62 = uVar62 & 7;
            bVar38 = true;
          }
          uVar81 = (ulong)uVar62;
          uVar71 = uVar71 - (uVar69 & 0xffffffff);
          pppppppcVar68 = *(code ********)((long)pppppppcVar75 + uVar71);
          if ((&UNK_10dd3e5d7 < pppppppcVar66) || (!bVar38)) goto code_r0x0001000cf078;
          puVar59 = (ushort *)((long)in_x4 + uVar60 * 4 + 4);
          uVar21 = *puVar59;
          bVar84 = *(byte *)((long)puVar59 + 3);
          uVar62 = uVar62 + bVar84;
          *(byte *)pppppppcVar66 = (byte)puVar59[1];
          puVar59 = (ushort *)((long)in_x4 + uVar79 * 4 + 4);
          uVar18 = *puVar59;
          bVar85 = *(byte *)((long)puVar59 + 3);
          uVar76 = uVar62 + bVar85;
          *(byte *)((long)pppppppcVar66 + 1) = (byte)puVar59[1];
          puVar59 = (ushort *)
                    ((long)in_x4 +
                    (ulong)uVar21 * 4 +
                    ((ulong)((long)pppppppcVar68 << (uVar81 & 0x3f)) >>
                    ((ulong)-(uint)bVar84 & 0x3f)) * 4 + 4);
          uVar74 = uVar76 + *(byte *)((long)puVar59 + 3);
          uVar60 = ((ulong)((long)pppppppcVar68 << ((ulong)uVar76 & 0x3f)) >>
                   ((ulong)-(uint)*(byte *)((long)puVar59 + 3) & 0x3f)) + (ulong)*puVar59;
          *(byte *)((long)pppppppcVar66 + 2) = (byte)puVar59[1];
          puVar59 = (ushort *)
                    ((long)in_x4 +
                    (ulong)uVar18 * 4 +
                    ((ulong)((long)pppppppcVar68 << ((ulong)uVar62 & 0x3f)) >>
                    ((ulong)-(uint)bVar85 & 0x3f)) * 4 + 4);
          pppppppcVar56 = (code *******)(ulong)(byte)puVar59[1];
          uVar62 = uVar74 + *(byte *)((long)puVar59 + 3);
          uVar81 = (ulong)uVar62;
          uVar79 = ((ulong)((long)pppppppcVar68 << ((ulong)uVar74 & 0x3f)) >>
                   ((ulong)-(uint)*(byte *)((long)puVar59 + 3) & 0x3f)) + (ulong)*puVar59;
          *(byte *)((long)pppppppcVar66 + 3) = (byte)puVar59[1];
          pppppppcVar66 = (code *******)((long)pppppppcVar66 + 4);
          if (0x40 < uVar62) goto code_r0x0001000cf078;
        } while( true );
      }
      uVar71 = 0;
code_r0x0001000cf078:
      UNRECOVERED_JUMPTABLE = (code *******)((long)pcVar58 + -2);
      if (pppppppcVar66 <= UNRECOVERED_JUMPTABLE) {
        pppppppcVar66 = (code *******)((long)pppppppcVar66 + 1);
        do {
          puVar59 = (ushort *)((long)in_x4 + uVar60 * 4 + 4);
          uVar21 = *puVar59;
          bVar84 = *(byte *)((long)puVar59 + 3);
          pppppppcVar56 = (code *******)(ulong)bVar84;
          uVar62 = (int)uVar81 + (uint)bVar84;
          *(byte *)((long)pppppppcVar66 + -1) = (byte)puVar59[1];
          if (0x40 < uVar62) {
            puVar59 = (ushort *)((long)pppppppcVar66 + 1);
            *(byte *)pppppppcVar66 = *(byte *)((long)in_x4 + uVar79 * 4 + 6);
code_r0x0001000cf430:
            lVar63 = (long)puVar59 - (long)param_1;
            goto code_r0x0001000cf434;
          }
          if ((long)uVar71 < 8) {
            pppppppcVar70 = pppppppcVar68;
            if (uVar71 != 0) {
              uVar60 = uVar71;
              if ((long)(ulong)(uVar62 >> 3) <= (long)uVar71) {
                uVar60 = (ulong)(uVar62 >> 3);
              }
              uVar62 = uVar62 + (int)uVar60 * -8;
              goto code_r0x0001000cf0d0;
            }
          }
          else {
            uVar60 = (ulong)(uVar62 >> 3);
            uVar62 = uVar62 & 7;
code_r0x0001000cf0d0:
            uVar71 = uVar71 - (uVar60 & 0xffffffff);
            pppppppcVar70 = *(code ********)((long)pppppppcVar75 + uVar71);
          }
          if (UNRECOVERED_JUMPTABLE < pppppppcVar66) break;
          uVar60 = ((ulong)((long)pppppppcVar68 << (uVar81 & 0x3f)) >> ((ulong)-(uint)bVar84 & 0x3f)
                   ) + (ulong)uVar21;
          puVar59 = (ushort *)((long)in_x4 + uVar79 * 4 + 4);
          uVar21 = *puVar59;
          bVar84 = *(byte *)((long)puVar59 + 3);
          pppppppcVar56 = (code *******)(ulong)bVar84;
          uVar76 = uVar62 + bVar84;
          *(byte *)pppppppcVar66 = (byte)puVar59[1];
          if (0x40 < uVar76) {
            *(byte *)((long)pppppppcVar66 + 1) = *(byte *)((long)in_x4 + uVar60 * 4 + 6);
            puVar59 = (ushort *)((long)pppppppcVar66 + 2);
            goto code_r0x0001000cf430;
          }
          if ((long)uVar71 < 8) {
            pppppppcVar68 = pppppppcVar70;
            if (uVar71 != 0) {
              uVar79 = uVar71;
              if ((long)(ulong)(uVar76 >> 3) <= (long)uVar71) {
                uVar79 = (ulong)(uVar76 >> 3);
              }
              uVar76 = uVar76 + (int)uVar79 * -8;
              goto code_r0x0001000cf138;
            }
          }
          else {
            uVar79 = (ulong)(uVar76 >> 3);
            uVar76 = uVar76 & 7;
code_r0x0001000cf138:
            uVar71 = uVar71 - (uVar79 & 0xffffffff);
            pppppppcVar68 = *(code ********)((long)pppppppcVar75 + uVar71);
          }
          uVar81 = (ulong)uVar76;
          uVar79 = ((ulong)((long)pppppppcVar70 << ((ulong)uVar62 & 0x3f)) >>
                   ((ulong)-(uint)bVar84 & 0x3f)) + (ulong)uVar21;
          pppppppcVar70 = (code *******)((long)pppppppcVar66 + 1);
          pppppppcVar66 = (code *******)((long)pppppppcVar66 + 2);
        } while (pppppppcVar70 <= UNRECOVERED_JUMPTABLE);
      }
      lVar63 = -0x46;
    }
code_r0x0001000cf434:
    auVar113._8_8_ = pppppppcVar56;
    auVar113._0_8_ = lVar63;
    return auVar113;
  case 0x2c:
    if (unaff_x24 == (code *******)0x0) {
      func_0x000100088750();
      func_0x000107c61180();
      func_0x000107c5c168();
      func_0x000107c61180();
      unaff_x28 = (code *******)unaff_x25[8];
      unaff_x25[8] = (code ******)param_1;
      pppppppcVar47 = pppppppcVar56;
    }
    else {
      func_0x000107c61174();
      unaff_x28 = (code *******)unaff_x25[8];
      unaff_x25[8] = (code ******)unaff_x24;
      pppppppcVar47 = pppppppcVar56;
    }
    goto code_r0x000107c61170;
  case 0x2d:
    if (uVar62 != 0x62) {
      auVar27._8_8_ = 0;
      auVar27._0_8_ = pppppppcVar56;
      return auVar27 << 0x40;
    }
    auVar97._8_8_ = pppppppcVar56;
    auVar97._0_8_ = 1;
    return auVar97;
  case 0x2e:
    puVar78 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    in_stack_00000010 = puVar45;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c453e4();
    func_0x000107c56330();
    func_0x000107c57a7c(puVar78);
    pppppppcVar47 = (code *******)0x800000010ef7f790;
    unaff_x28 = (code *******)0xd000000000000028;
    func_0x000107c5fadc(0xd000000000000028,0x800000010ef7f790);
    func_0x000107c56954(puVar78);
    goto code_r0x000107c61170;
  case 0x2f:
    goto code_r0x0001000ae43c;
  case 0x30:
code_r0x0001000cdd60:
    UNRECOVERED_JUMPTABLE = unaff_x26 + 6;
    pppppppcVar70 = (code *******)((long)pcVar58 + 0x40);
    do {
      ppppppcVar52 = pppppppcVar70[-2];
      UNRECOVERED_JUMPTABLE[1] = pppppppcVar70[-1];
      *UNRECOVERED_JUMPTABLE = ppppppcVar52;
      ppppppcVar52 = *pppppppcVar70;
      UNRECOVERED_JUMPTABLE[3] = pppppppcVar70[1];
      UNRECOVERED_JUMPTABLE[2] = ppppppcVar52;
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 4;
      pppppppcVar70 = pppppppcVar70 + 4;
    } while (UNRECOVERED_JUMPTABLE < unaff_x27);
code_r0x0001000cdd84:
    UNRECOVERED_JUMPTABLE = (code *******)((long)unaff_x27 - (long)pppppppcVar42);
    pppppppcVar70 = unaff_x27;
    in_stack_00000078 = pppppppcVar68;
    if ((code *******)((long)unaff_x27 - (long)unaff_x28) < pppppppcVar42) {
      if ((code *******)((long)unaff_x27 - in_stack_00000060) < pppppppcVar42) {
code_r0x0001000cc91c:
        unaff_x27 = param_1;
        unaff_x25 = (code *******)0xffffffffffffffec;
code_r0x0001000cc920:
        if (*(code ********)PTR____stack_chk_guard_11034bdc0 != pppppppcStack_70) {
          func_0x000107c60e78();
          if (pppppppcVar66 < unaff_x27) {
            uVar60 = 0;
            if (unaff_x27 != (code *******)0x0) {
              uVar60 = (ulong)((long)pppppppcVar66 << 4) / (ulong)unaff_x27;
            }
            uVar60 = uVar60 & 0xffffffff;
          }
          else {
            uVar60 = 0xf;
          }
          lVar63 = uVar60 * 0x18;
          iVar39 = (int)((ulong)unaff_x27 >> 8);
          uVar62 = *(int *)(&UNK_10e010d68 + lVar63) + *(int *)(&UNK_10e010d6c + lVar63) * iVar39;
          auVar112._1_7_ = 0;
          auVar112[0] = uVar62 + (uVar62 >> 3) <
                        (uint)(*(int *)(&UNK_10e010d60 + lVar63) +
                              *(int *)(&UNK_10e010d64 + lVar63) * iVar39);
          auVar112._8_8_ = pppppppcVar66;
          return auVar112;
        }
        auVar111._8_8_ = pppppppcVar66;
        auVar111._0_8_ = unaff_x25;
        return auVar111;
      }
      lVar63 = ((long)unaff_x27 - (long)pppppppcVar42) - (long)unaff_x28;
      bVar38 = SCARRY8(lVar63,(long)pppppppcVar75);
      pppppppcVar75 = (code *******)((long)pppppppcVar75 + lVar63);
      if (pppppppcVar75 == (code *******)0x0 || (long)pppppppcVar75 < 0 != bVar38) {
        pppppppcVar66 = (code *******)(in_stack_00000058 + lVar63);
        func_0x000107c610b8();
        in_x4 = in_stack_00000048;
        unaff_x23 = in_stack_00000038;
        goto code_r0x0001000cde6c;
      }
      pppppppcVar66 = (code *******)(in_stack_00000058 + lVar63);
      param_1 = unaff_x27;
      func_0x000107c610b8(unaff_x27,pppppppcVar66,-lVar63);
      pppppppcVar70 = (code *******)((long)unaff_x27 - lVar63);
      in_x4 = in_stack_00000048;
      UNRECOVERED_JUMPTABLE = unaff_x28;
      unaff_x23 = in_stack_00000038;
    }
    unaff_x27 = param_1;
    if (pppppppcVar42 < (code *******)0x10) {
      if (pppppppcVar42 < (code *******)0x8) {
        iVar39 = *(int *)(&UNK_10e011c80 + (long)pppppppcVar42 * 4);
        *(code *)pppppppcVar70 = *(code *)UNRECOVERED_JUMPTABLE;
        *(code *)((long)pppppppcVar70 + 1) = *(code *)((long)UNRECOVERED_JUMPTABLE + 1);
        *(code *)((long)pppppppcVar70 + 2) = *(code *)((long)UNRECOVERED_JUMPTABLE + 2);
        *(code *)((long)pppppppcVar70 + 3) = *(code *)((long)UNRECOVERED_JUMPTABLE + 3);
        uVar62 = *(uint *)(&UNK_10e011c60 + (long)pppppppcVar42 * 4);
        *(undefined4 *)((long)pppppppcVar70 + 4) =
             *(undefined4 *)((long)UNRECOVERED_JUMPTABLE + (ulong)uVar62);
        UNRECOVERED_JUMPTABLE =
             (code *******)((code *)((long)UNRECOVERED_JUMPTABLE + (ulong)uVar62) + -(long)iVar39);
      }
      else {
        *pppppppcVar70 = *UNRECOVERED_JUMPTABLE;
      }
      if ((code *******)0x8 < pppppppcVar75) {
        pppppppcVar68 = UNRECOVERED_JUMPTABLE + 1;
        pppppppcVar42 = pppppppcVar70 + 1;
        if ((long)pppppppcVar42 - (long)pppppppcVar68 < 0x10) {
          do {
            UNRECOVERED_JUMPTABLE = pppppppcVar42 + 1;
            *pppppppcVar42 = *pppppppcVar68;
            pppppppcVar68 = pppppppcVar68 + 1;
            pppppppcVar42 = UNRECOVERED_JUMPTABLE;
          } while (UNRECOVERED_JUMPTABLE < (code *******)((long)pppppppcVar70 + (long)pppppppcVar75)
                  );
        }
        else {
          ppppppcVar52 = *pppppppcVar68;
          pppppppcVar70[2] = UNRECOVERED_JUMPTABLE[2];
          *pppppppcVar42 = ppppppcVar52;
          ppppppcVar52 = UNRECOVERED_JUMPTABLE[3];
          pppppppcVar70[4] = UNRECOVERED_JUMPTABLE[4];
          pppppppcVar70[3] = ppppppcVar52;
          if (0x28 < (long)pppppppcVar75) {
            pppppppcVar68 = pppppppcVar70 + 5;
            UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 7;
            do {
              ppppppcVar52 = UNRECOVERED_JUMPTABLE[-2];
              pppppppcVar68[1] = UNRECOVERED_JUMPTABLE[-1];
              *pppppppcVar68 = ppppppcVar52;
              ppppppcVar52 = *UNRECOVERED_JUMPTABLE;
              pppppppcVar68[3] = UNRECOVERED_JUMPTABLE[1];
              pppppppcVar68[2] = ppppppcVar52;
              pppppppcVar68 = pppppppcVar68 + 4;
              UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 4;
            } while (pppppppcVar68 < (code *******)((long)pppppppcVar70 + (long)pppppppcVar75));
          }
        }
      }
    }
    else {
      ppppppcVar52 = *UNRECOVERED_JUMPTABLE;
      pppppppcVar70[1] = UNRECOVERED_JUMPTABLE[1];
      *pppppppcVar70 = ppppppcVar52;
      ppppppcVar52 = UNRECOVERED_JUMPTABLE[2];
      pppppppcVar70[3] = UNRECOVERED_JUMPTABLE[3];
      pppppppcVar70[2] = ppppppcVar52;
      if (0x20 < (long)pppppppcVar75) {
        pppppppcVar68 = pppppppcVar70 + 4;
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 6;
        do {
          ppppppcVar52 = UNRECOVERED_JUMPTABLE[-2];
          pppppppcVar68[1] = UNRECOVERED_JUMPTABLE[-1];
          *pppppppcVar68 = ppppppcVar52;
          ppppppcVar52 = *UNRECOVERED_JUMPTABLE;
          pppppppcVar68[3] = UNRECOVERED_JUMPTABLE[1];
          pppppppcVar68[2] = ppppppcVar52;
          pppppppcVar68 = pppppppcVar68 + 4;
          UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + 4;
        } while (pppppppcVar68 < (code *******)((long)pppppppcVar70 + (long)pppppppcVar75));
      }
    }
code_r0x0001000cde6c:
    do {
      in_stack_00000068 = in_stack_00000068 + -1;
      unaff_x26 = (code *******)((long)unaff_x26 + (long)unaff_x25);
      if ((code *******)0xffffffffffffff88 < unaff_x25) goto code_r0x0001000cc920;
      if (0x40 < in_stack_000000a0) {
        param_1 = unaff_x27;
        if (in_stack_00000068 == 0) {
code_r0x0001000ce274:
          lVar63 = 0x58;
          do {
            *in_stack_00000040 = (int)*(undefined8 *)((long)&stack0x00000098 + lVar63);
            lVar63 = lVar63 + 8;
            in_stack_00000040 = in_stack_00000040 + 1;
          } while (lVar63 != 0x70);
          uVar60 = (long)unaff_x23 - (long)in_stack_00000078;
          pppppppcVar66 = in_stack_00000078;
          if ((ulong)((long)in_x4 - (long)unaff_x26) < uVar60) {
            unaff_x25 = (code *******)0xffffffffffffffba;
          }
          else {
            unaff_x27 = unaff_x26;
            func_0x000107c610b4(unaff_x26,in_stack_00000078,uVar60);
            unaff_x25 = (code *******)((long)unaff_x26 + (uVar60 - (long)pppppppcVar56));
          }
          goto code_r0x0001000cc920;
        }
        goto code_r0x0001000cc91c;
      }
      if (in_stack_000000a8 < in_stack_000000b8) {
        if (in_stack_000000a8 != in_stack_000000b0) {
          uVar62 = (int)in_stack_000000a8 - (int)in_stack_000000b0;
          if (in_stack_000000b0 <=
              (code *******)((long)in_stack_000000a8 - (ulong)(in_stack_000000a0 >> 3))) {
            uVar62 = in_stack_000000a0 >> 3;
          }
          in_stack_000000a0 = in_stack_000000a0 + uVar62 * -8;
          goto code_r0x0001000cdb18;
        }
      }
      else {
        uVar62 = in_stack_000000a0 >> 3;
        in_stack_000000a0 = in_stack_000000a0 & 7;
code_r0x0001000cdb18:
        in_stack_000000a8 = (code *******)((long)in_stack_000000a8 - (ulong)uVar62);
        in_stack_00000098 = *in_stack_000000a8;
      }
      if (in_stack_00000068 == 0) {
        if ((0x40 < in_stack_000000a0) ||
           (((unaff_x25 = (code *******)0xffffffffffffffec, in_stack_000000a0 == 0x40 &&
             (in_stack_000000a8 < in_stack_000000b8)) &&
            (in_x4 = in_stack_00000048, unaff_x23 = in_stack_00000038,
            in_stack_000000a8 == in_stack_000000b0)))) goto code_r0x0001000ce274;
        goto code_r0x0001000cc920;
      }
      uVar60 = (ulong)in_stack_000000a0;
      puVar59 = (ushort *)(in_stack_000000c8 + in_stack_000000c0 * 8);
      bVar84 = (byte)puVar59[1];
      puVar4 = (ushort *)(in_stack_000000e8 + in_stack_000000e0 * 8);
      bVar85 = (byte)puVar4[1];
      puVar5 = (ushort *)(in_stack_000000d8 + in_stack_000000d0 * 8);
      bVar86 = (byte)puVar5[1];
      param_1 = (code *******)(ulong)bVar86;
      uVar62 = (uint)bVar86;
      if (bVar86 == 0) {
        pppppppcVar66 = (code *******)0x0;
code_r0x0001000cdb94:
        if (*(uint *)(puVar59 + 2) == 0) {
          pppppppcVar66 = (code *******)((long)pppppppcVar66 + 1);
        }
        if (pppppppcVar66 != (code *******)0x0) {
          if (pppppppcVar66 == (code *******)0x3) {
            pppppppcVar75 = (code *******)((long)in_stack_000000f0 + -1);
            if (pppppppcVar75 < (code *******)0x2) {
              pppppppcVar75 = (code *******)0x1;
            }
code_r0x0001000cdbd8:
            in_stack_00000100 = in_stack_000000f8;
          }
          else {
            pppppppcVar75 = (code *******)UNRECOVERED_JUMPTABLE_00[(long)pppppppcVar66];
            if (pppppppcVar75 < (code *******)0x2) {
              pppppppcVar75 = (code *******)0x1;
            }
            if (pppppppcVar66 != (code *******)0x1) goto code_r0x0001000cdbd8;
          }
          in_stack_000000f8 = in_stack_000000f0;
          goto code_r0x0001000cdbe8;
        }
      }
      else {
        uVar79 = uVar60 & 0x3f;
        uVar60 = (ulong)(in_stack_000000a0 + uVar62);
        pppppppcVar75 =
             (code *******)
             (((ulong)((long)in_stack_00000098 << uVar79) >> ((ulong)-(uint)bVar86 & 0x3f)) +
             (ulong)*(uint *)(puVar5 + 2));
        pppppppcVar66 = pppppppcVar75;
        if (uVar62 == 1) goto code_r0x0001000cdb94;
        in_stack_00000100 = in_stack_000000f8;
        in_stack_000000f8 = in_stack_000000f0;
code_r0x0001000cdbe8:
        in_stack_000000f8 = in_stack_000000f0;
        in_stack_000000f0 = pppppppcVar75;
      }
      if (bVar85 == 0) {
        pppppppcVar66 = (code *******)0x0;
      }
      else {
        pppppppcVar66 =
             (code *******)
             ((ulong)((long)in_stack_00000098 << (uVar60 & 0x3f)) >> ((ulong)-(uint)bVar85 & 0x3f));
        uVar60 = (ulong)((int)uVar60 + (uint)bVar85);
      }
      if ((0x1e < (uint)bVar85 + (uint)bVar84 + uVar62) && (uVar62 = (uint)uVar60, uVar62 < 0x41)) {
        if (in_stack_000000a8 < in_stack_000000b8) {
          if (in_stack_000000a8 == in_stack_000000b0) goto code_r0x0001000cdc74;
          param_1 = (code *******)((long)in_stack_000000a8 - (ulong)(uVar62 >> 3));
          uVar76 = (int)in_stack_000000a8 - (int)in_stack_000000b0;
          if (in_stack_000000b0 <= param_1) {
            uVar76 = uVar62 >> 3;
          }
          uVar62 = uVar62 + uVar76 * -8;
        }
        else {
          uVar76 = uVar62 >> 3;
          uVar62 = uVar62 & 7;
        }
        in_stack_000000a8 = (code *******)((long)in_stack_000000a8 - (ulong)uVar76);
        uVar60 = (ulong)uVar62;
        in_stack_00000098 = *in_stack_000000a8;
      }
code_r0x0001000cdc74:
      pppppppcVar75 = (code *******)((long)pppppppcVar66 + (ulong)*(uint *)(puVar4 + 2));
      uVar62 = (uint)bVar84;
      iVar39 = (int)uVar60;
      if (uVar62 != 0) {
        iVar39 = (int)uVar60 + uVar62;
      }
      uVar79 = 0;
      if (uVar62 != 0) {
        uVar79 = (ulong)((long)in_stack_00000098 << (uVar60 & 0x3f)) >>
                 ((ulong)-(uint)bVar84 & 0x3f);
      }
      uVar79 = uVar79 + *(uint *)(puVar59 + 2);
      iVar39 = iVar39 + (uint)*(byte *)((long)puVar59 + 3);
      in_stack_000000c0 =
           ((ulong)in_stack_00000098 >> ((ulong)(uint)-iVar39 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar59 + 3) * 4)) +
           (ulong)*puVar59;
      iVar39 = iVar39 + (uint)*(byte *)((long)puVar4 + 3);
      in_stack_000000e0 =
           ((ulong)in_stack_00000098 >> ((ulong)(uint)-iVar39 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar4 + 3) * 4)) +
           (ulong)*puVar4;
      in_stack_000000a0 = iVar39 + (uint)*(byte *)((long)puVar5 + 3);
      in_stack_000000d0 =
           ((ulong)in_stack_00000098 >> ((ulong)-in_stack_000000a0 & 0x3f) &
           (ulong)*(uint *)((long)unaff_x24 + (ulong)*(byte *)((long)puVar5 + 3) * 4)) +
           (ulong)*puVar5;
      pppppppcVar68 = (code *******)((long)in_stack_00000078 + uVar79);
      if ((pppppppcVar68 <= unaff_x23) &&
         (unaff_x25 = (code *******)((long)pppppppcVar75 + uVar79),
         (byte *)((long)unaff_x26 + (long)unaff_x25) <= in_stack_00000050))
      goto code_r0x0001000cdd30;
      unaff_x27 = unaff_x26;
      pppppppcVar66 = in_x4;
      uStack_f0 = uVar79;
      pppppppcStack_e8 = pppppppcVar75;
      pppppppcStack_e0 = in_stack_000000f0;
      func_0x000107c2ae84(unaff_x26,in_x4,&uStack_f0,&stack0x00000078,unaff_x23);
      unaff_x25 = unaff_x27;
    } while( true );
  case 0x31:
  case 0x34:
code_r0x0001000ae568:
    pppppppcVar66 = pppppppcVar56;
    pppppppcVar56 = (code *******)pcVar58;
    if (!in_ZR) {
      pppppppcVar56 = (code *******)pcVar64;
    }
  case 0x5f:
code_r0x0001000aed34:
    UNRECOVERED_JUMPTABLE_00 = pppppppcVar56;
code_r0x00010bdb78a8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb78b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sSS4hash4intoys6HasherVz_tF_11034d980)
              (param_1,pppppppcVar66,UNRECOVERED_JUMPTABLE_00);
    auVar138._8_8_ = pppppppcVar66;
    auVar138._0_8_ = param_1;
    return auVar138;
  case 0x35:
    goto code_r0x0001000ae58c;
  case 0x36:
    goto code_r0x0001000ae458;
  case 0x39:
code_r0x0001000ae5c8:
    uVar60 = (long)(char)UNRECOVERED_JUMPTABLE_00 + (ulong)(pppppppcVar56 >= (code *******)0x5);
    if ((long)-uVar60 < 0 != SCARRY8(~uVar60,(ulong)(pppppppcVar56 < (code *******)0x5))) {
      if (pppppppcVar56 != (code *******)0x5 || UNRECOVERED_JUMPTABLE_00 != (code *******)0x0) {
        param_1 = (code *******)0x7;
        goto code_r0x0001000ae86c;
      }
      goto code_r0x0001000aebdc;
    }
    if (pppppppcVar56 == (code *******)0x3 && UNRECOVERED_JUMPTABLE_00 == (code *******)0x0)
    goto code_r0x0001000aebc4;
    goto code_r0x0001000aeb94;
  case 0x3b:
    goto code_r0x0001000ae478;
  case 0x3c:
    goto code_r0x0001000ae6e4;
  case 0x3d:
    goto code_r0x0001000ae440;
  case 0x3e:
    goto code_r0x0001000ae468;
  case 0x40:
    goto code_r0x0001000ae418;
  case 0x43:
    goto code_r0x0001000ae624;
  case 0x45:
    goto code_r0x0001000ae758;
  case 0x47:
  case 0x75:
  case 0xdd:
    goto code_r0x0001000ae694;
  case 0x4c:
    goto code_r0x0001000ae7e0;
  case 0x4d:
    goto code_r0x0001000ae3d8;
  case 0x4f:
    goto code_r0x0001000ae788;
  case 0x53:
    goto code_r0x0001000ae430;
  case 0x56:
    goto code_r0x0001000ae3c8;
  case 0x58:
    goto code_r0x0001000ae7a4;
  case 0x5a:
    goto code_r0x0001000ae86c;
  case 0x5b:
    goto code_r0x0001000aecbc;
  case 0x5c:
    goto code_r0x0001000aecd4;
  case 0x5d:
    goto code_r0x0001000aec8c;
  case 0x5e:
code_r0x0001000aed1c:
    pppppppcVar66 = (code *******)0x65526e4f74696e69;
    pppppppcVar56 = (code *******)((ulong)pppppppcVar56 & 0xffff0000ffff | 0xec000000656d0000);
    goto code_r0x0001000aed34;
  case 0x60:
    goto code_r0x0001000aecec;
  case 0x61:
    goto SUB_1000aed64;
  case 0x62:
    goto code_r0x0001000aeca4;
  case 99:
    pppppppcVar75 = param_1;
    goto _swift_bridgeObjectRelease;
  case 0x68:
    goto code_r0x0001000edac4;
  case 0x69:
  case 0x73:
  case 0x77:
  case 0x7b:
  case 0x7f:
  case 0x89:
  case 0x93:
  case 0xbd:
  case 199:
  case 0xd1:
  case 0xdb:
  case 0xdf:
  case 0xe3:
  case 0xe7:
  case 0xf1:
  case 0xf5:
    goto code_r0x0001000aedf8;
  case 0x6a:
code_r0x0001000be260:
    unaff_x28 = (code *******)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c610f4();
    func_0x000107c45d74();
    pppppppcVar47 = unaff_x28;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    if (pppppppcVar47 == (code *******)0x0) {
      *(byte *)((long)pppppppcVar56 + 0x1c9) = 1;
      func_0x000107c61170(unaff_x28);
code_r0x0001000be680:
      auVar100._8_8_ = pppppppcVar66;
      auVar100._0_8_ = unaff_x28;
      return auVar100;
    }
    pppppppcVar66 = pppppppcVar47;
    func_0x000107c613d0();
    ppppppcVar52 = pppppppcVar56[0x37];
    ppppppcVar46 = pppppppcVar56[0x36];
    if ((long)pppppppcVar56[0x38] <= (long)pppppppcVar66 + (long)ppppppcVar52) {
      ppppppcVar52 = (code ******)((long)((long)pppppppcVar66 + (long)ppppppcVar52) * 2);
      ppppppcVar46 = (code ******)0x0;
      func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
      pppppppcVar56[0x36] = ppppppcVar46;
      pppppppcVar56[0x38] = ppppppcVar52;
      ppppppcVar52 = pppppppcVar56[0x37];
    }
    func_0x000107c610b4((long)ppppppcVar46 + (long)ppppppcVar52,pppppppcVar47,pppppppcVar66);
    pppppppcVar56[0x37] = (code ******)((long)pppppppcVar66 + (long)pppppppcVar56[0x37]);
    goto code_r0x000107c61170;
  case 0x6f:
  case 0x8f:
  case 0xc3:
  case 0xd7:
    goto code_r0x0001000ae36c;
  case 0x70:
  case 0xd8:
  case 0xf8:
    goto code_r0x0001000ae370;
  case 0x72:
  case 0x76:
  case 0x7a:
  case 0x7e:
    func_0x0001000285a8(pppppppcVar75,UNRECOVERED_JUMPTABLE);
    pcVar58 = (char *)pppppppcVar75[-1][2];
    pppppppcVar42 = pppppppcVar56;
    pppppppcVar66 = param_1;
code_r0x0001000edac4:
    (*(code *)pcVar58)(pppppppcVar42,pppppppcVar66,pppppppcVar75);
    auVar121._8_8_ = pppppppcVar66;
    auVar121._0_8_ = pppppppcVar56;
    return auVar121;
  case 0x74:
    ppppppcVar52 = param_1[0x36];
    if (pppppppcVar68 < &UNK_10dd3e5d9) {
      ppppppcVar52 = (code ******)0x0;
      func_0x000107c60748(0,param_1[0x36],0x21ba7cbb0,0);
      param_1[0x36] = ppppppcVar52;
      param_1[0x38] = (code ******)0x21ba7cbb0;
      pcVar58 = (char *)param_1[0x37];
    }
    *(code *)((long)pcVar58 + (long)ppppppcVar52) = (code)0x22;
    ppppppcVar52 = (code ******)((long)param_1[0x37] + 1);
    param_1[0x37] = ppppppcVar52;
    pppppppcVar66 = (code *******)0x1;
    iVar39 = 1;
    pcVar64 = (char *)((long)UNRECOVERED_JUMPTABLE_00 + (long)ppppppcVar52);
    pppppppcVar56 = (code *******)param_1[0x36];
    if ((long)param_1[0x38] <= (long)pcVar64) goto code_r0x0001000bf264;
    goto code_r0x0001000bf288;
  case 0x78:
    do {
      func_0x000107c50940(*param_1);
      param_1 = param_1 + 1;
      func_0x000107c5496c(pppppppcVar56);
      unaff_x28 = pppppppcVar56;
    } while (param_1 != UNRECOVERED_JUMPTABLE_00);
    goto code_r0x000107c61170;
  case 0x79:
  case 0x7d:
  case 0x81:
  case 0x95:
  case 0xc9:
  case 0xe1:
  case 0xe5:
  case 0xe9:
  case 0xfb:
    pppppppcVar47 = (code *******)PTR_s_init_1125d9248;
    func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
    if (puVar51 == (undefined1 *)0x0) {
      auVar28._8_8_ = 0;
      auVar28._0_8_ = pppppppcVar47;
      return auVar28 << 0x40;
    }
    puVar78 = PTR_PTR_1126b0ea0;
    func_0x000107c610fc();
    unaff_x28 = *(code ********)(puVar51 + _DAT_11278e2e8);
    *(undefined **)(puVar51 + _DAT_11278e2e8) = puVar78;
    goto code_r0x000107c61170;
  case 0x7c:
    if (in_stack_0000014c < 0) {
      func_0x000107c60e14(in_stack_00000138);
      pppppppcVar47 = pppppppcVar56;
    }
    if (pppppppcStack_c8 != (code *******)0x0) {
      pppppppcStack_c0 = pppppppcStack_c8;
      func_0x000107c60e14();
    }
    unaff_x28 = in_stack_00000008;
    if (UNRECOVERED_JUMPTABLE_00 != (code *******)0x0) {
      func_0x0001001ced2c(UNRECOVERED_JUMPTABLE_00);
      func_0x000107c60e14();
      unaff_x28 = in_stack_00000008;
    }
    goto code_r0x000107c61170;
  case 0x80:
    unaff_x28 = pppppppcVar56;
    goto code_r0x000107c61170;
  case 0x86:
    pcVar58 = "COMMERCE/COMPOSER_PAGE";
    goto code_r0x0001000e6288;
  case 0x87:
  case 0x9b:
  case 0xcf:
  case 0xef:
  case 0xfd:
    if (uVar62 != 6) {
      auVar26._8_8_ = 0;
      auVar26._0_8_ = pppppppcVar56;
      return auVar26 << 0x40;
    }
    auVar95._8_8_ = pppppppcVar56;
    auVar95._0_8_ = 1;
    return auVar95;
  case 0x88:
    goto code_r0x0001000eda64;
  case 0x8a:
code_r0x0001000be160:
    pppppppcVar56[0x36] = (code ******)param_1;
    pppppppcVar56[0x38] = (code ******)unaff_x25;
    ppppppcVar52 = pppppppcVar56[0x37];
code_r0x0001000be170:
    unaff_x28 = (code *******)((long)param_1 + (long)ppppppcVar52);
    func_0x000107c610b4(unaff_x28,unaff_x24,unaff_x23);
    do {
      ppppppcVar52 = (code ******)((long)unaff_x23 + (long)pppppppcVar56[0x37]);
code_r0x0001000be440:
      pppppppcVar56[0x37] = ppppppcVar52;
code_r0x0001000be624:
      param_1 = (code *******)((long)unaff_x27 + 2);
      if ((long)unaff_x22 <= (long)param_1) {
code_r0x0001000be62c:
        ppppppcVar52 = pppppppcVar56[0x37];
        pppppppcVar66 = (code *******)pppppppcVar56[0x36];
        if ((long)pppppppcVar56[0x38] <= (long)ppppppcVar52 + 1) {
          ppppppcVar52 = (code ******)(((long)ppppppcVar52 + 1) * 2);
          unaff_x28 = (code *******)0x0;
          func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
          pppppppcVar56[0x36] = (code ******)unaff_x28;
          pppppppcVar56[0x38] = ppppppcVar52;
          ppppppcVar52 = pppppppcVar56[0x37];
          pppppppcVar66 = unaff_x28;
        }
        *(byte *)((long)pppppppcVar66 + (long)ppppppcVar52) = 0;
        pppppppcVar56[0x37] = (code ******)((long)pppppppcVar56[0x37] + 1);
        goto code_r0x0001000be680;
      }
      unaff_x28 = (code *******)((long)UNRECOVERED_JUMPTABLE_00 + (long)param_1);
      pppppppcVar66 = (code *******)0x25;
      func_0x000107c610ac(unaff_x28,0x25,(long)unaff_x22 - (long)param_1);
      unaff_x27 = (code *******)((long)unaff_x28 - (long)UNRECOVERED_JUMPTABLE_00);
      unaff_x26 = unaff_x22;
      if (unaff_x28 != (code *******)0x0) {
        unaff_x26 = unaff_x27;
      }
      if (((ulong)pppppppcVar82 & 1) == 0) {
code_r0x0001000be078:
        pppppppcVar82 = (code *******)0x0;
      }
      else {
        if (((long)unaff_x26 < (long)unaff_x22) &&
           (((byte *)((long)UNRECOVERED_JUMPTABLE_00 + (long)unaff_x26))[1] != 0x25)) {
          if (1 < (long)unaff_x22 - (long)unaff_x26) {
            lVar63 = (long)unaff_x20 - (long)unaff_x26;
            pbVar54 = (byte *)((long)UNRECOVERED_JUMPTABLE_00 + (long)unaff_x26);
            do {
              bVar84 = *pbVar54;
              if (bVar84 == 0x24) goto code_r0x0001000be678;
              bVar38 = lVar63 != 0;
              lVar63 = lVar63 + -1;
              pbVar54 = pbVar54 + 1;
            } while (0xfffffff5 < bVar84 - 0x3a && bVar38);
          }
          goto code_r0x0001000be078;
        }
        pppppppcVar82 = (code *******)0x1;
      }
      unaff_x24 = (code *******)((long)unaff_x26 - (long)param_1);
      unaff_x23 = unaff_x28;
code_r0x0001000be080:
      ppppppcVar52 = pppppppcVar56[0x37];
      ppppppcVar46 = pppppppcVar56[0x36];
      if ((long)pppppppcVar56[0x38] <= (long)unaff_x24 + (long)ppppppcVar52) {
        ppppppcVar52 = (code ******)((long)((long)unaff_x24 + (long)ppppppcVar52) * 2);
        ppppppcVar46 = (code ******)0x0;
        func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
        pppppppcVar56[0x36] = ppppppcVar46;
        pppppppcVar56[0x38] = ppppppcVar52;
        ppppppcVar52 = pppppppcVar56[0x37];
      }
      unaff_x28 = (code *******)((long)ppppppcVar46 + (long)ppppppcVar52);
      pppppppcVar66 = (code *******)((long)UNRECOVERED_JUMPTABLE_00 + (long)param_1);
      func_0x000107c610b4(unaff_x28,pppppppcVar66,unaff_x24);
      ppppppcVar52 = (code ******)((long)unaff_x24 + (long)pppppppcVar56[0x37]);
      pppppppcVar56[0x37] = ppppppcVar52;
      if (unaff_x23 == (code *******)0x0) goto code_r0x0001000be62c;
      pbVar54 = (byte *)((long)UNRECOVERED_JUMPTABLE_00 + (long)unaff_x27);
      bVar84 = pbVar54[1];
      if (bVar84 < 0x53) {
        if (bVar84 != 0x25) {
          if (bVar84 == 0x40) {
            ppppppcVar52 = *unaff_x19;
            *unaff_x19 = ppppppcVar52 + 1;
            unaff_x28 = (code *******)*ppppppcVar52;
            func_0x000107c61174(unaff_x28);
            pppppppcVar47 = (code *******)0x0;
            func_0x0001000be6b4(unaff_x28,0,pppppppcVar56,0,0);
            goto code_r0x000107c61170;
          }
          if (bVar84 != 0x43) goto code_r0x0001000be300;
code_r0x0001000be184:
          if (bVar84 == 0x53) {
            lVar63 = 0;
            ppppppcVar52 = *unaff_x19;
            *unaff_x19 = ppppppcVar52 + 1;
            do {
              lVar49 = lVar63 * 2;
              lVar63 = lVar63 + 1;
            } while (*(short *)((long)*ppppppcVar52 + lVar49) != 0);
          }
          else {
            *unaff_x19 = *unaff_x19 + 1;
          }
          goto code_r0x0001000be260;
        }
        pppppppcVar66 = (code *******)pppppppcVar56[0x36];
        if ((long)pppppppcVar56[0x38] <= (long)ppppppcVar52 + 1) {
          ppppppcVar52 = (code ******)((long)((long)ppppppcVar52 + 1) * 2);
          unaff_x28 = (code *******)0x0;
          func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
          pppppppcVar56[0x36] = (code ******)unaff_x28;
          pppppppcVar56[0x38] = ppppppcVar52;
          ppppppcVar52 = pppppppcVar56[0x37];
          pppppppcVar66 = unaff_x28;
        }
        *(byte *)((long)pppppppcVar66 + (long)ppppppcVar52) = 0x25;
        ppppppcVar52 = (code ******)((long)pppppppcVar56[0x37] + 1);
        goto code_r0x0001000be440;
      }
      if (bVar84 == 0x53) goto code_r0x0001000be184;
      if (bVar84 != 0x73) {
        if (bVar84 == 0x6e) {
code_r0x0001000be678:
          *(byte *)((long)pppppppcVar56 + 0x1c9) = 1;
          goto code_r0x0001000be680;
        }
code_r0x0001000be300:
        lVar63 = -1;
        do {
          lVar49 = lVar63;
          if (lVar49 - ((long)unaff_x22 - (long)unaff_x27 &
                       ((long)unaff_x22 - (long)unaff_x27 >> 0x3f ^ 0xffffffffffffffffU)) == -1)
          goto code_r0x0001000be678;
          unaff_x28 = (code *******)(long)(char)pbVar54[lVar49 + 1];
          func_0x000107c60e80();
          bVar84 = (byte)((ulong)unaff_x28 >> 8);
          bVar85 = (byte)((ulong)unaff_x28 >> 0x10);
          bVar86 = (byte)((ulong)unaff_x28 >> 0x18);
          iVar87 = (int)unaff_x28 << 0x18;
          iVar39 = -(uint)(iVar87 == (int)((ulong)unaff_x29 >> 0x20));
          iVar41 = -(uint)(iVar87 == (int)unaff_x30);
          iVar40 = -(uint)(CONCAT13(bVar86 & (byte)((ulong)in_stack_00000018 >> 0x18),
                                    CONCAT12(bVar85 & (byte)((ulong)in_stack_00000018 >> 0x10),
                                             CONCAT11(bVar84 & (byte)((ulong)in_stack_00000018 >> 8)
                                                      ,(byte)unaff_x28 & (byte)in_stack_00000018)))
                          == (int)((ulong)unaff_x30 >> 0x20));
          iVar88 = -(uint)(iVar87 == (int)((ulong)in_stack_00000000 >> 0x20));
          iVar89 = -(uint)(iVar87 == (int)in_stack_00000008);
          iVar90 = -(uint)(iVar87 == (int)((ulong)in_stack_00000008 >> 0x20));
          uVar23 = CONCAT15((char)((uint)iVar39 >> 8),
                            CONCAT14((char)iVar39,-(uint)(iVar87 == (int)unaff_x29))) &
                   0xffff0000ffff;
          auVar24[2] = (char)iVar88;
          auVar24._0_2_ =
               -(ushort)(CONCAT13(bVar86 & (byte)((ulong)in_stack_00000010 >> 0x18),
                                  CONCAT12(bVar85 & (byte)((ulong)in_stack_00000010 >> 0x10),
                                           CONCAT11(bVar84 & (byte)((ulong)in_stack_00000010 >> 8),
                                                    (byte)unaff_x28 & (byte)in_stack_00000010))) ==
                        (int)in_stack_00000000);
          auVar24[3] = (char)((uint)iVar88 >> 8);
          auVar24[4] = (char)iVar89;
          auVar24[5] = (char)((uint)iVar89 >> 8);
          auVar24[6] = (char)iVar90;
          auVar24[7] = (char)((uint)iVar90 >> 8);
          auVar24[8] = (char)uVar23;
          auVar24[9] = (char)(uVar23 >> 8);
          auVar24[10] = (char)(uVar23 >> 0x20);
          auVar24[0xb] = (char)(uVar23 >> 0x28);
          auVar24[0xc] = (char)iVar41;
          auVar24[0xd] = (char)((uint)iVar41 >> 8);
          auVar24[0xe] = (char)iVar40;
          auVar24[0xf] = (char)((uint)iVar40 >> 8);
          uVar21 = NEON_umaxv(auVar24,2);
        } while (((uVar21 & 1) == 0) &&
                (iVar39 = (int)unaff_x28 << 0x18, lVar63 = lVar49 + 1,
                iVar39 != 0x70000000 && iVar39 != 0x67000000));
        if ((lVar49 == 0x7ffffffffffffffd) ||
           ((lVar63 = lVar49 + 2, 0x1e < lVar63 ||
            (unaff_x28 = (code *******)(long)(char)pbVar54[lVar49 + 1], pbVar54[lVar49 + 1] == 0x4f)
            ))) goto code_r0x0001000be678;
        func_0x000107c60e80();
        iVar39 = (int)unaff_x28;
        if (iVar39 < 0x69) {
          if (iVar39 < 0x65) {
            if (iVar39 != 0x61) {
              if (iVar39 != 99) {
                if (iVar39 == 100) goto code_r0x0001000be4d8;
                goto code_r0x0001000be678;
              }
              goto code_r0x0001000be580;
            }
          }
          else if (2 < iVar39 - 0x65U) goto code_r0x0001000be678;
          func_0x000107c610b4(pppppppcVar56 + 0x32,pbVar54,lVar63);
          *(byte *)((long)pppppppcVar56 + lVar49 + 0x192) = 0;
          *unaff_x19 = *unaff_x19 + 1;
        }
        else {
          if (iVar39 < 0x70) {
            if (iVar39 != 0x69) {
              if (iVar39 != 0x6f) goto code_r0x0001000be678;
              goto code_r0x0001000be4c0;
            }
code_r0x0001000be4d8:
            bVar84 = pbVar54[lVar49];
            if (bVar84 < 0x71) {
              if ((bVar84 == 0x68) || ((bVar84 != 0x6a && (bVar84 != 0x6c))))
              goto code_r0x0001000be580;
              goto code_r0x0001000be550;
            }
            if (bVar84 != 0x7a) goto code_r0x0001000be51c;
code_r0x0001000be52c:
            func_0x000107c610b4(pppppppcVar56 + 0x32,pbVar54,lVar49);
            pbVar54 = (byte *)((long)pppppppcVar56 + lVar49 + 400);
            pbVar54[0] = 0x6c;
            pbVar54[1] = 0x6c;
            pbVar54[2] = 100;
            pbVar54[3] = 0;
          }
          else {
            if (iVar39 != 0x70) {
              if ((iVar39 != 0x75) && (iVar39 != 0x78)) goto code_r0x0001000be678;
code_r0x0001000be4c0:
              bVar84 = pbVar54[lVar49];
              if (bVar84 < 0x6c) {
                if ((bVar84 == 0x68) || (bVar84 != 0x6a)) {
code_r0x0001000be580:
                  func_0x000107c610b4(pppppppcVar56 + 0x32,pbVar54,lVar63);
                  *(byte *)((long)pppppppcVar56 + lVar49 + 0x192) = 0;
                  *unaff_x19 = *unaff_x19 + 1;
                  goto code_r0x0001000be5b0;
                }
              }
              else if (bVar84 != 0x6c) {
code_r0x0001000be51c:
                if (bVar84 != 0x74) {
                  if (bVar84 == 0x71) goto code_r0x0001000be52c;
                  goto code_r0x0001000be580;
                }
              }
            }
code_r0x0001000be550:
            func_0x000107c610b4(pppppppcVar56 + 0x32,pbVar54,lVar63);
            *(byte *)((long)pppppppcVar56 + lVar49 + 0x192) = 0;
          }
          *unaff_x19 = *unaff_x19 + 1;
        }
code_r0x0001000be5b0:
        pppppppcVar66 = pppppppcVar56;
        func_0x000107c61318(pppppppcVar56,400,pppppppcVar56 + 0x32);
        ppppppcVar52 = pppppppcVar56[0x37];
        iVar39 = (int)pppppppcVar66;
        ppppppcVar46 = pppppppcVar56[0x36];
        if ((long)pppppppcVar56[0x38] <= (long)ppppppcVar52 + (long)iVar39) {
          ppppppcVar52 = (code ******)(((long)ppppppcVar52 + (long)iVar39) * 2);
          ppppppcVar46 = (code ******)0x0;
          func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
          pppppppcVar56[0x36] = ppppppcVar46;
          pppppppcVar56[0x38] = ppppppcVar52;
          ppppppcVar52 = pppppppcVar56[0x37];
        }
        unaff_x28 = (code *******)((long)ppppppcVar46 + (long)ppppppcVar52);
        func_0x000107c610b4(unaff_x28,pppppppcVar56,(long)iVar39);
        pppppppcVar56[0x37] = (code ******)((long)pppppppcVar56[0x37] + (long)iVar39);
        unaff_x27 = (code *******)((long)unaff_x26 + lVar49);
        goto code_r0x0001000be624;
      }
      pcVar58 = (char *)*unaff_x19;
      pcVar64 = (char *)((long)pcVar58 + 8);
      param_1 = unaff_x28;
      pppppppcVar68 = unaff_x19;
code_r0x0001000be120:
      unaff_x28 = param_1;
      *pppppppcVar68 = (code ******)pcVar64;
      unaff_x24 = *(code ********)pcVar58;
      if (unaff_x24 != (code *******)0x0) goto code_r0x0001000be12c;
      ppppppcVar52 = pppppppcVar56[0x37];
      pppppppcVar66 = (code *******)pppppppcVar56[0x36];
      if ((long)pppppppcVar56[0x38] <= (long)ppppppcVar52 + 6) {
        ppppppcVar52 = (code ******)(((long)ppppppcVar52 + 6) * 2);
        unaff_x28 = (code *******)0x0;
        func_0x000107c60748(0,pppppppcVar56[0x36],ppppppcVar52,0);
        pppppppcVar56[0x36] = (code ******)unaff_x28;
        pppppppcVar56[0x38] = ppppppcVar52;
        ppppppcVar52 = pppppppcVar56[0x37];
        pppppppcVar66 = unaff_x28;
      }
      pbVar54 = (byte *)((long)pppppppcVar66 + (long)ppppppcVar52);
      pbVar54[4] = 0x6c;
      pbVar54[5] = 0x29;
      pbVar54[0] = 0x28;
      pbVar54[1] = 0x6e;
      pbVar54[2] = 0x75;
      pbVar54[3] = 0x6c;
      unaff_x23 = (code *******)0x6;
    } while( true );
  case 0x92:
    param_1[2] = (code ******)unaff_x23;
    param_1[3] = (code ******)unaff_x22;
    puStack_90 = (undefined1 *)0x0;
    if (unaff_x27 != (code *******)0x0 || param_1 != (code *******)0x0) {
      puStack_90 = &stack0xffffffffffffff80;
      pppppppcStack_70 = param_1;
    }
    ppppppcStack_98 = (code ******)0x1;
    pppppppcVar66 = &ppppppcStack_98;
    param_1 = unaff_x26;
    pppppppcStack_88 = pppppppcVar56;
code_r0x0001000eda64:
    func_0x000107c615bc();
    func_0x000107c61574();
    auVar120._8_8_ = pppppppcVar66;
    auVar120._0_8_ = param_1;
    return auVar120;
  case 0x94:
    unaff_x28 = pppppppcVar56;
    goto code_r0x000107c61170;
  case 0x9a:
code_r0x0001000e6288:
    auVar117._8_8_ = (ulong)((long)pcVar58 + -0x20) | 0x8000000000000000;
    auVar117._0_8_ = 0xd000000000000016;
    return auVar117;
  case 0x9e:
  case 0xac:
    *(uint *)(pppppppcVar56 + 2) = uVar62;
    ((ushort *)((long)pppppppcVar56 + 0x14))[0] = 0;
    ((ushort *)((long)pppppppcVar56 + 0x14))[1] = 0;
    *(int *)((long)pppppppcVar56 + 0x1c) = (int)pppppppcVar68;
    *(uint *)(pppppppcVar56 + 4) = (uint)uVar21;
    auVar110._8_8_ = pppppppcVar56;
    auVar110._0_8_ = param_1;
    return auVar110;
  case 0x9f:
  case 0xad:
    func_0x000107c6157c(param_1);
    puVar78 = &UNK_1000d2370;
    func_0x0001000cafa8(&UNK_1000d2370,param_1);
    auVar109._8_8_ = param_1;
    auVar109._0_8_ = puVar78;
    return auVar109;
  case 0xa0:
  case 0xae:
    (*(code *)pppppppcVar75[3])
              ((ulong)*(byte *)(pppppppcVar56[-1] + 10) + 0x28 &
               ((ulong)*(byte *)(pppppppcVar56[-1] + 10) ^ 0xffffffffffffffff));
    auVar103._8_8_ = pppppppcVar56;
    auVar103._0_8_ = param_1;
    return auVar103;
  case 0xa1:
  case 0xaf:
    func_0x000107c61574();
    func_0x000107c61574(param_1[3]);
    uVar43 = 0x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocObject_11034f298)(param_1,0x20,7);
    auVar142._8_8_ = uVar43;
    auVar142._0_8_ = param_1;
    return auVar142;
  case 0xa2:
  case 0xb0:
    ppppppcVar52 = *param_1;
    in_stack_00000000 = param_1;
    in_stack_00000008 = pppppppcVar56;
    in_stack_00000010 = puVar45;
    func_0x000107c611ec(param_1[2][2]);
    pppppcVar65 = (*param_1)[0xc];
    func_0x000107c61428((byte *)((long)param_1 + (long)pppppcVar65),&stack0xffffffffffffffd8,0,0);
    pbVar54 = (byte *)((long)param_1 + (long)pppppcVar65);
    (*(code *)ppppppcVar52[10][-1][2])(pcVar58,pbVar54);
    pppppcVar65 = param_1[2][2];
    func_0x000107c611f0(pppppcVar65);
    auVar104._8_8_ = pbVar54;
    auVar104._0_8_ = pppppcVar65;
    return auVar104;
  case 0xa3:
  case 0xb1:
    if (pppppppcVar56 == (code *******)0x0) {
      puVar78 = (undefined *)0x0;
      pppppppcVar66 = (code *******)PTR___swiftEmptyDictionarySingleton_11034f1d0;
code_r0x0001000c6984:
      auVar101._8_8_ = puVar78;
      auVar101._0_8_ = pppppppcVar66;
      return auVar101;
    }
    puVar78 = &UNK_10dcd4ba0;
    func_0x0001000285a8(0x11305f7b8);
    pppppppcVar66 = pppppppcVar56;
    func_0x000107c60498();
    ppppppcVar52 = param_1[4];
    ppppppcVar46 = param_1[5];
    ppppppcVar77 = param_1[6];
    ppppppcVar48 = ppppppcVar52;
    func_0x0001040b7fe8();
    if (((ulong)puVar78 & 1) == 0) {
      pppppppcVar75 = param_1 + 9;
      do {
        uVar60 = (ulong)ppppppcVar48 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)pppppppcVar66 + uVar60 + 0x40) =
             *(ulong *)((long)pppppppcVar66 + uVar60 + 0x40) | 1L << ((ulong)ppppppcVar48 & 0x3f);
        pppppppcVar66[6][(long)ppppppcVar48] = (code *****)ppppppcVar52;
        ppppppcVar52 = pppppppcVar66[7];
        ppppppcVar52[(long)ppppppcVar48 * 2] = (code *****)ppppppcVar46;
        (ppppppcVar52 + (long)ppppppcVar48 * 2)[1] = (code *****)ppppppcVar77;
        if (SCARRY8((long)pppppppcVar66[2],1)) {
                    /* WARNING: Does not return */
          pcVar29 = (code *)SoftwareBreakpoint(1,0x1000c69a4);
          (*pcVar29)();
        }
        pppppppcVar66[2] = (code ******)((long)pppppppcVar66[2] + 1);
        pppppppcVar56 = (code *******)((long)pppppppcVar56 + -1);
        if (pppppppcVar56 == (code *******)0x0) {
          func_0x000107c61434();
          goto code_r0x0001000c6984;
        }
        ppppppcVar52 = pppppppcVar75[-2];
        ppppppcVar46 = pppppppcVar75[-1];
        ppppppcVar77 = *pppppppcVar75;
        func_0x000107c61434();
        ppppppcVar48 = ppppppcVar52;
        func_0x0001040b7fe8();
        pppppppcVar75 = pppppppcVar75 + 3;
      } while (((ulong)puVar78 & 1) == 0);
    }
                    /* WARNING: Does not return */
    pcVar29 = (code *)SoftwareBreakpoint(1,0x1000c6974);
    (*pcVar29)();
  case 0xa4:
  case 0xb2:
    lVar49 = 0;
    in_stack_00000010 = puVar45;
    func_0x0001000c2d68();
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar49 + -8) + 0x40));
    puVar45 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lVar63 = 0x113060130;
    func_0x0001000285a8(0x113060130,&UNK_10dcd5720);
    lVar80 = *(long *)(lVar63 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar80 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar78 = puVar45 + -extraout_x8_00;
    if (lRam0000000113060118 != -1) {
      func_0x000107c61568(0x113060118,&UNK_1000c92a8);
    }
    puVar50 = &UNK_1000c94b8;
    lVar55 = 0;
    func_0x000100075034(&stack0xffffffffffffffcf,&UNK_1000c94b8,0,PTR___sSbN_11034dd40);
    if ((char)((ulong)in_stack_ffffffffffffffc8 >> 0x38) == '\x01') {
      if (lRam0000000113060108 != -1) {
        func_0x000107c61568(0x113060108,&UNK_1000c2b1c);
      }
      func_0x000107c6159c(puVar45,lVar49,2);
      uVar43 = 0x113060140;
      func_0x0001000285a8(0x113060140,&UNK_10dcd5728);
      func_0x000107c5fd28(puVar78,puVar45,uVar43);
      (**(code **)(lVar80 + 8))(puVar78,lVar63);
      puVar50 = puVar78;
      lVar55 = lVar63;
    }
    auVar106._8_8_ = lVar55;
    auVar106._0_8_ = puVar50;
    return auVar106;
  case 0xb3:
    auVar102._8_8_ = pppppppcVar56;
    auVar102._0_8_ = param_1;
    return auVar102;
  case 0xb4:
    func_0x000100075034();
    func_0x0001000c74f0(&stack0xffffffffffffffe0);
    func_0x0001040b5900(unaff_x20);
    pppppppcVar75 = pppppppcVar56;
    goto _swift_bridgeObjectRelease;
  case 0xb5:
    func_0x000107c61428();
    pbVar54 = (byte *)((long)UNRECOVERED_JUMPTABLE_00 + (long)pppppppcVar56);
    func_0x0001000c90cc();
    func_0x000107c614a8(&puStack_90);
    func_0x0001000c2ae4(0);
    func_0x0001000c911c();
    ppppppcVar52 = UNRECOVERED_JUMPTABLE_00[0xf];
    func_0x000107c5982c(ppppppcVar52);
    auVar105._8_8_ = pbVar54;
    auVar105._0_8_ = ppppppcVar52;
    return auVar105;
  case 0xb6:
    auVar107._8_8_ = pppppppcVar56;
    auVar107._0_8_ = param_1;
    return auVar107;
  case 0xb7:
    *pppppppcVar56 = (code ******)param_1;
    auVar108._8_8_ = pppppppcVar56;
    auVar108._0_8_ = param_1;
    return auVar108;
  case 0xbc:
    goto code_r0x0001000edbc4;
  case 0xbe:
    goto code_r0x0001000be120;
  case 0xc6:
    pppppppcVar42 = (code *******)(ulong)*(uint *)((long)pppppppcVar56 + 4);
    UNRECOVERED_JUMPTABLE_00 = (code *******)((long)pppppppcVar56 + (long)*(int *)pppppppcVar56);
    func_0x000107c615b8();
    unaff_x22[2] = (code ******)pppppppcVar42;
    pcVar58 = (char *)pppppppcVar42;
    pppppppcVar56 = param_1;
code_r0x0001000edbc4:
    *pppppppcVar42 = (code ******)unaff_x22;
    pppppppcVar42[1] = (code ******)&UNK_10175c218;
                    /* WARNING: Could not recover jumptable at 0x0001000edbe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_00)(pcVar58,pppppppcVar56);
    auVar124._8_8_ = UNRECOVERED_JUMPTABLE_00;
    auVar124._0_8_ = pppppppcVar56;
    return auVar124;
  case 200:
code_r0x0001000e9ee0:
    if ((unaff_x22 == (code *******)0x0) ||
       (*(float *)(pppppppcVar56 + 4) * (float)unaff_x22 <
        (float)CONCAT13(in_register_00005003,
                        CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0))))) {
      uVar60 = 1;
      if ((code *******)0x2 < unaff_x22) {
        uVar60 = (ulong)(((ulong)unaff_x22 & (ulong)((long)unaff_x22 + -1)) != 0);
      }
      uVar60 = uVar60 | (long)unaff_x22 << 1;
      uVar79 = (ulong)((float)CONCAT13(in_register_00005003,
                                       CONCAT12(in_register_00005002,
                                                CONCAT11(in_register_00005001,in_b0))) /
                      *(float *)(pppppppcVar56 + 4));
      if (uVar60 <= uVar79) {
        uVar60 = uVar79;
      }
      func_0x0001000ea010(pppppppcVar56,uVar60);
      unaff_x22 = (code *******)pppppppcVar56[1];
      if (((ulong)unaff_x22 & (ulong)((long)unaff_x22 + -1)) == 0) {
        unaff_x24 = (code *******)((ulong)((long)unaff_x22 + -1) & (ulong)unaff_x23);
      }
      else {
        unaff_x24 = unaff_x23;
        if (unaff_x22 <= unaff_x23) {
          uVar60 = 0;
          if (unaff_x22 != (code *******)0x0) {
            uVar60 = (ulong)unaff_x23 / (ulong)unaff_x22;
          }
          unaff_x24 = (code *******)((long)unaff_x23 - uVar60 * (long)unaff_x22);
        }
      }
    }
  case 0xe4:
    ppppppcVar52 = *pppppppcVar56;
    pppppcVar65 = ppppppcVar52[(long)unaff_x24];
    if (pppppcVar65 == (code *****)0x0) {
      *param_1 = *unaff_x25;
      *unaff_x25 = (code ******)param_1;
      ppppppcVar52[(long)unaff_x24] = (code *****)unaff_x25;
      if (*param_1 != (code ******)0x0) {
        pppppppcVar66 = (code *******)(*param_1)[1];
        if (((ulong)unaff_x22 & (ulong)((long)unaff_x22 + -1)) == 0) {
          pppppppcVar66 = (code *******)((ulong)pppppppcVar66 & (ulong)((long)unaff_x22 + -1));
        }
        else if (unaff_x22 <= pppppppcVar66) {
          uVar60 = 0;
          if (unaff_x22 != (code *******)0x0) {
            uVar60 = (ulong)pppppppcVar66 / (ulong)unaff_x22;
          }
          pppppppcVar66 = (code *******)((long)pppppppcVar66 - uVar60 * (long)unaff_x22);
        }
        ppppppcVar52[(long)pppppppcVar66] = (code *****)param_1;
      }
    }
    else {
      *param_1 = (code ******)*pppppcVar65;
      *pppppcVar65 = (code ****)param_1;
    }
    pppppppcVar56[3] = (code ******)((long)pppppppcVar56[3] + 1);
    pppppppcVar56 = (code *******)0x1;
code_r0x0001000e9fe0:
    auVar118._8_8_ = pppppppcVar56;
    auVar118._0_8_ = param_1;
    return auVar118;
  case 0xce:
    auVar114._8_8_ = pppppppcVar56;
    auVar114._0_8_ = param_1;
    return auVar114;
  case 0xd0:
    goto code_r0x0001000edb64;
  case 0xd2:
    goto code_r0x0001000be080;
  case 0xda:
  case 0xde:
  case 0xe2:
  case 0xe6:
    UNRECOVERED_JUMPTABLE_00 = (code *******)param_1[2];
    param_1 = (code *******)param_1[3];
    pcVar58 = (char *)0x20;
    func_0x000107c615b8();
    unaff_x22[2] = (code ******)pcVar58;
    *(code ********)pcVar58 = unaff_x22;
    *(undefined **)((long)pcVar58 + 8) = &UNK_1040be0bc;
    UNRECOVERED_JUMPTABLE = (code *******)&UNK_1000edb88;
code_r0x0001000edb64:
                    /* WARNING: Could not recover jumptable at 0x0001000edb84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)(pcVar58,pppppppcVar56,UNRECOVERED_JUMPTABLE_00,param_1);
    auVar123._8_8_ = UNRECOVERED_JUMPTABLE_00;
    auVar123._0_8_ = pppppppcVar56;
    return auVar123;
  case 0xdc:
code_r0x0001000bf264:
    iVar39 = (int)pppppppcVar66;
    pppppppcVar66 = (code *******)0x0;
    func_0x000107c60748(0,pppppppcVar56,(code ******)((long)pcVar64 << 1),0);
    param_1[0x36] = (code ******)pppppppcVar66;
    param_1[0x38] = (code ******)((long)pcVar64 << 1);
    ppppppcVar52 = param_1[0x37];
    pppppppcVar56 = pppppppcVar66;
code_r0x0001000bf288:
    pppppppcVar47 = param_1;
    func_0x000107c610b4((code *)((long)pppppppcVar56 + (long)ppppppcVar52),param_1);
    ppppppcVar52 = (code ******)((long)UNRECOVERED_JUMPTABLE_00 + (long)param_1[0x37]);
    param_1[0x37] = ppppppcVar52;
    if (iVar39 != 0) {
      pppppppcVar47 = (code *******)param_1[0x36];
      if ((long)param_1[0x38] <= (long)ppppppcVar52 + 1) {
        ppppppcVar52 = (code ******)((long)((long)ppppppcVar52 + 1) * 2);
        pppppppcVar47 = (code *******)0x0;
        func_0x000107c60748(0,param_1[0x36],ppppppcVar52,0);
        param_1[0x36] = (code ******)pppppppcVar47;
        param_1[0x38] = ppppppcVar52;
        ppppppcVar52 = param_1[0x37];
      }
      *(code *)((long)pppppppcVar47 + (long)ppppppcVar52) = (code)0x22;
      param_1[0x37] = (code ******)((long)param_1[0x37] + 1);
    }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    auVar140._8_8_ = pppppppcVar47;
    auVar140._0_8_ = unaff_x28;
    return auVar140;
  case 0xe0:
code_r0x0001000e9e70:
    if ((bool)in_CY) {
      uVar60 = 0;
      if (unaff_x22 != (code *******)0x0) {
        uVar60 = (ulong)pcVar64 / (ulong)unaff_x22;
      }
      pcVar64 = (char *)((long)pcVar64 - uVar60 * (long)unaff_x22);
    }
    do {
      if ((code *******)pcVar64 != unaff_x24) {
code_r0x0001000e9e94:
        unaff_x25 = pppppppcVar56 + 2;
        param_1 = (code *******)0x40;
        func_0x000107c60e20();
        *param_1 = (code ******)0x0;
        param_1[1] = (code ******)unaff_x23;
        param_1[2] = (code ******)**UNRECOVERED_JUMPTABLE_00;
        param_1[6] = (code ******)0x0;
        param_1[5] = (code ******)0x0;
        param_1[4] = (code ******)0x0;
        param_1[3] = (code ******)0x0;
        *(undefined4 *)(param_1 + 7) = 0x3f800000;
        fVar25 = (float)((long)pppppppcVar56[3] + 1);
        in_b0 = SUB41(fVar25,0);
        in_register_00005001 = (undefined1)((uint)fVar25 >> 8);
        in_register_00005002 = (undefined1)((uint)fVar25 >> 0x10);
        in_register_00005003 = (undefined1)((uint)fVar25 >> 0x18);
        goto code_r0x0001000e9ee0;
      }
      while( true ) {
        param_1 = (code *******)*param_1;
        if (param_1 == (code *******)0x0) goto code_r0x0001000e9e94;
        pcVar64 = (char *)param_1[1];
        if ((code *******)pcVar64 != unaff_x23) break;
        if ((code *******)param_1[2] == unaff_x23) {
          pppppppcVar56 = (code *******)0x0;
          goto code_r0x0001000e9fe0;
        }
      }
      if (((ulong)unaff_x22 & (ulong)pcVar58) != 0) goto code_r0x0001000e9e6c;
      pcVar64 = (char *)((ulong)pcVar64 & (ulong)pcVar58);
    } while( true );
  case 0xe8:
    goto code_r0x0001000e9fe0;
  case 0xee:
    auVar115._0_8_ = (ulong)param_1 & 0xffffffff | 0x5f50415400000000;
    auVar115._8_8_ = pppppppcVar56;
    return auVar115;
  case 0xf0:
    pppppppcVar66 = pppppppcVar56;
    (*(code *)pcVar58)();
    auVar122._8_8_ = pppppppcVar66;
    auVar122._0_8_ = pppppppcVar56;
    return auVar122;
  case 0xf2:
    auVar99._8_8_ = pppppppcVar56;
    auVar99._0_8_ = param_1;
    return auVar99;
  case 0xf4:
    uVar60 = (ulong)*(byte *)(pppppppcVar56 + 10);
    uVar81 = uVar60 + 0x20 & (uVar60 ^ 0xffffffffffffffff);
    uVar79 = (ulong)((long)unaff_x24 + uVar81 + 7) & 0xfffffffffffffff8;
    puVar78 = &UNK_110744c68;
    func_0x000107c613fc(&UNK_110744c68,uVar79 + 0x10,uVar60 | 7);
    *(undefined8 *)(puVar78 + 0x10) = 0;
    *(undefined8 *)(puVar78 + 0x18) = 0;
    (*(code *)pppppppcVar56[4])(puVar78 + uVar81);
    pppppppcVar66 = in_stack_00000008;
    *(code ********)(puVar78 + uVar79) = unaff_x19;
    *(code ********)(puVar78 + uVar79 + 8) = in_stack_00000008;
    func_0x000107c615c0();
    func_0x000107c615f0(in_stack_00000010);
    func_0x000107c6157c(pppppppcVar66);
    func_0x0001000ed8cc();
    func_0x0001000edad8();
    func_0x000107c615c0();
    iVar39 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar39 == 0) {
      ppppppcVar52 = (code ******)*unaff_x22[7];
      unaff_x22[0xe] = ppppppcVar52;
      pppppppcVar66 = unaff_x22 + 0x10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
                (pppppppcVar66,ppppppcVar52,&UNK_1040bbed8,unaff_x22 + 2);
      auVar143._8_8_ = ppppppcVar52;
      auVar143._0_8_ = pppppppcVar66;
      return auVar143;
    }
    ppppppcVar52 = (code ******)
                   (ulong)*(uint *)(
                                   PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaFTu_11034fbd0
                                   + 4);
    func_0x000107c615b8();
    unaff_x22[0xd] = ppppppcVar52;
    uVar43 = 0x112dc6b70;
    func_0x0001000285a8(0x112dc6b70,&UNK_10da1df30);
    *ppppppcVar52 = (code *****)unaff_x22;
    ppppppcVar52[1] = (code *****)&UNK_1040bbe90;
    uVar53 = 0;
    uVar57 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScG22awaitAllRemainingTasks9isolationyScA_pSgYi_tYaF_11034fbc8)(0,0,uVar43);
    auVar139._8_8_ = uVar57;
    auVar139._0_8_ = uVar53;
    return auVar139;
  case 0xf7:
    goto code_r0x0001000ae368;
  case 0xfa:
    do {
      uVar60 = 0;
      if (pppppppcVar56 != (code *******)0x0) {
        uVar60 = (ulong)in_x12 / (ulong)pppppppcVar56;
      }
      in_x12 = (char *)((long)in_x12 - uVar60 * (long)pppppppcVar56);
      do {
        while( true ) {
          if ((code *******)in_x12 != pppppppcVar68) {
            if (param_1[(long)in_x12] == (code ******)0x0) {
              param_1[(long)in_x12] = (code ******)pcVar64;
              pppppppcVar68 = (code *******)in_x12;
            }
            else {
              *(code *******)pcVar64 = *pppppppcVar70;
              *pppppppcVar70 = (code ******)*param_1[(long)in_x12];
              *param_1[(long)in_x12] = (code *****)pppppppcVar70;
              pppppppcVar70 = (code *******)pcVar64;
            }
          }
          pcVar64 = (char *)pppppppcVar70;
          pppppppcVar70 = *(code ********)pcVar64;
          if (pppppppcVar70 == (code *******)0x0) {
            auVar119._8_8_ = pppppppcVar56;
            auVar119._0_8_ = param_1;
            return auVar119;
          }
          in_x12 = (char *)pppppppcVar70[1];
          if (((ulong)pppppppcVar56 & (ulong)pcVar58) != 0) break;
          in_x12 = (char *)((ulong)in_x12 & (ulong)pcVar58);
        }
      } while (in_x12 < pppppppcVar56);
    } while( true );
  case 0xfc:
    auVar116._8_8_ = 0xef4e574f4e4b4e55;
    auVar116._0_8_ = 0x2f454c49464f5250;
    return auVar116;
  }
  func_0x000107c60690(param_1);
  param_1 = (code *******)((ulong)pppppppcVar56 & 0xff);
code_r0x0001000ae86c:
  func_0x000107c60690(param_1);
  auVar92._8_8_ = pppppppcVar47;
  auVar92._0_8_ = param_1;
  return auVar92;
code_r0x0001000e9e6c:
  in_CY = unaff_x22 <= pcVar64;
  goto code_r0x0001000e9e70;
code_r0x0001000be12c:
  unaff_x23 = unaff_x24;
  func_0x000107c613d0();
  ppppppcVar52 = pppppppcVar56[0x37];
  param_1 = (code *******)pppppppcVar56[0x36];
  if ((long)pppppppcVar56[0x38] <= (long)unaff_x23 + (long)ppppppcVar52) goto code_r0x0001000be14c;
  goto code_r0x0001000be170;
code_r0x0001000be14c:
  unaff_x25 = (code *******)((long)((long)unaff_x23 + (long)ppppppcVar52) * 2);
  param_1 = (code *******)0x0;
  func_0x000107c60748(0,pppppppcVar56[0x36],unaff_x25,0);
  goto code_r0x0001000be160;
code_r0x0001000cdd30:
  unaff_x27 = (code *******)((long)unaff_x26 + uVar79);
  ppppppcVar52 = *in_stack_00000078;
  unaff_x26[1] = in_stack_00000078[1];
  *unaff_x26 = ppppppcVar52;
  pppppppcVar42 = in_stack_000000f0;
  if (uVar79 < 0x11) goto code_r0x0001000cdd84;
  ppppppcVar52 = in_stack_00000078[2];
  unaff_x26[3] = in_stack_00000078[3];
  unaff_x26[2] = ppppppcVar52;
  ppppppcVar52 = in_stack_00000078[4];
  unaff_x26[5] = in_stack_00000078[5];
  unaff_x26[4] = ppppppcVar52;
  pcVar58 = (char *)in_stack_00000078;
  if (0x20 < (long)(uVar79 - 0x10)) goto code_r0x0001000cdd60;
  goto code_r0x0001000cdd84;
code_r0x0001099ee81c:
  uVar76 = (uint)uVar81;
  if (pppppppcStack_60 < pppppppcVar68) {
    if (pppppppcStack_60 == pppppppcVar66) goto code_r0x0001099ee8ec;
    bVar38 = pppppppcVar66 <= (code *******)((long)pppppppcStack_60 - (uVar81 >> 3));
    uVar74 = (uint)(uVar81 >> 3);
    if (!bVar38) {
      uVar74 = (int)pppppppcStack_60 - iVar89;
    }
    uVar76 = uVar76 + uVar74 * -8;
  }
  else {
    uVar74 = uVar76 >> 3;
    uVar76 = uVar76 & 7;
    bVar38 = true;
  }
  pppppppcStack_60 = (code *******)((long)pppppppcStack_60 - (ulong)uVar74);
  uVar81 = (ulong)uVar76;
  pppppppcStack_70 = (code *******)*pppppppcStack_60;
  if (((code *******)((long)pppppppcVar70 + -2) < pppppppcVar56) || (!bVar38))
  goto code_r0x0001099ee8ec;
  puVar59 = (ushort *)
            ((long)param_1 +
            ((ulong)((long)pppppppcStack_70 << ((ulong)uVar76 & 0x3f)) >> uVar62) * 4 + 4);
  *(ushort *)pppppppcVar56 = *puVar59;
  uVar76 = uVar76 + (byte)puVar59[1];
  uVar81 = (ulong)uVar76;
  pppppppcVar56 = (code *******)((long)pppppppcVar56 + (ulong)*(byte *)((long)puVar59 + 3));
  if (0x40 < uVar76) goto code_r0x0001099ee8ec;
  goto code_r0x0001099ee81c;
code_r0x0001099eea84:
  uVar74 = (uint)uVar60;
  if (pppppppcStack_88 < pppppppcVar42) {
    if (pppppppcStack_88 == UNRECOVERED_JUMPTABLE) goto code_r0x0001099eeb54;
    bVar38 = UNRECOVERED_JUMPTABLE <= (code *******)((long)pppppppcStack_88 - (uVar60 >> 3));
    uVar2 = (uint)(uVar60 >> 3);
    if (!bVar38) {
      uVar2 = (int)pppppppcStack_88 - iVar88;
    }
    uVar74 = uVar74 + uVar2 * -8;
  }
  else {
    uVar2 = uVar74 >> 3;
    uVar74 = uVar74 & 7;
    bVar38 = true;
  }
  pppppppcStack_88 = (code *******)((long)pppppppcStack_88 - (ulong)uVar2);
  uVar60 = (ulong)uVar74;
  puStack_90 = (undefined1 *)(ulong)uVar74;
  ppppppcStack_98 = *pppppppcStack_88;
  if (((code *******)((long)pppppppcVar6 + -2) < pppppppcVar73) || (!bVar38))
  goto code_r0x0001099eeb54;
  puVar59 = (ushort *)
            ((long)param_1 + ((ulong)((long)ppppppcStack_98 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4);
  *(ushort *)pppppppcVar73 = *puVar59;
  uVar74 = uVar74 + (byte)puVar59[1];
  uVar60 = (ulong)uVar74;
  puStack_90 = (undefined1 *)(ulong)uVar74;
  pppppppcVar73 = (code *******)((long)pppppppcVar73 + (ulong)*(byte *)((long)puVar59 + 3));
  if (0x40 < uVar74) goto code_r0x0001099eeb54;
  goto code_r0x0001099eea84;
code_r0x0001099eecec:
  uVar74 = (uint)uVar60;
  if (pppppppcStack_b0 < pppppppcStack_a0) {
    if (pppppppcStack_b0 == pppppppcStack_a8) goto code_r0x0001099eedbc;
    bVar38 = pppppppcStack_a8 <= (code *******)((long)pppppppcStack_b0 - (uVar60 >> 3));
    uVar2 = (uint)(uVar60 >> 3);
    if (!bVar38) {
      uVar2 = (int)pppppppcStack_b0 - iVar83;
    }
    uStack_b8 = uVar74 + uVar2 * -8;
  }
  else {
    uVar2 = uVar74 >> 3;
    uStack_b8 = uVar74 & 7;
    bVar38 = true;
  }
  pppppppcStack_b0 = (code *******)((long)pppppppcStack_b0 - (ulong)uVar2);
  uVar60 = (ulong)uStack_b8;
  pppppppcStack_c0 = (code *******)*pppppppcStack_b0;
  if (((code *******)((long)pppppppcVar7 + -2) < pppppppcVar72) || (!bVar38))
  goto code_r0x0001099eedbc;
  puVar59 = (ushort *)
            ((long)param_1 + ((ulong)((long)pppppppcStack_c0 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4)
  ;
  *(ushort *)pppppppcVar72 = *puVar59;
  uStack_b8 = uStack_b8 + (byte)puVar59[1];
  uVar60 = (ulong)uStack_b8;
  pppppppcVar72 = (code *******)((long)pppppppcVar72 + (ulong)*(byte *)((long)puVar59 + 3));
  if (0x40 < uStack_b8) goto code_r0x0001099eedbc;
  goto code_r0x0001099eecec;
code_r0x0001099eef50:
  uVar74 = (uint)uVar60;
  if (pppppppcStack_d8 < pppppppcStack_c8) {
    if (pppppppcStack_d8 == pppppppcStack_d0) goto code_r0x0001099ef020;
    bVar38 = pppppppcStack_d0 <= (code *******)((long)pppppppcStack_d8 - (uVar60 >> 3));
    uVar2 = (uint)(uVar60 >> 3);
    if (!bVar38) {
      uVar2 = (int)pppppppcStack_d8 - iVar90;
    }
    uVar74 = uVar74 + uVar2 * -8;
  }
  else {
    uVar2 = uVar74 >> 3;
    uVar74 = uVar74 & 7;
    bVar38 = true;
  }
  pppppppcStack_d8 = (code *******)((long)pppppppcStack_d8 - (ulong)uVar2);
  uVar60 = (ulong)uVar74;
  pppppppcStack_e0 = (code *******)(ulong)uVar74;
  pppppppcStack_e8 = (code *******)*pppppppcStack_d8;
  if (((code *******)((long)pppppppcVar82 + -2) < pppppppcVar67) || (!bVar38))
  goto code_r0x0001099ef020;
  puVar59 = (ushort *)
            ((long)param_1 + ((ulong)((long)pppppppcStack_e8 << (uVar60 & 0x3f)) >> uVar62) * 4 + 4)
  ;
  *(ushort *)pppppppcVar67 = *puVar59;
  uVar74 = uVar74 + (byte)puVar59[1];
  uVar60 = (ulong)uVar74;
  pppppppcStack_e0 = (code *******)(ulong)uVar74;
  pppppppcVar67 = (code *******)((long)pppppppcVar67 + (ulong)*(byte *)((long)puVar59 + 3));
  if (0x40 < uVar74) goto code_r0x0001099ef020;
  goto code_r0x0001099eef50;
}



/* Entry: 10489d278; end: 10489d2cb;  */

void FUN_10489d278(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x0001000ae32c(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 10489d2cc; end: 10489d2e7;  */

/* WARNING: Possible PIC construction at 0x0001000bf2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000ebd34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000ebd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000bee64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c4348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c4378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000c0078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000ee86c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001000ee884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000ee870) */
/* WARNING: Removing unreachable block (ram,0x0001000ee89c) */
/* WARNING: Removing unreachable block (ram,0x0001000ee874) */
/* WARNING: Removing unreachable block (ram,0x0001000c007c) */
/* WARNING: Removing unreachable block (ram,0x0001000c437c) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x0001000c434c) */
/* WARNING: Removing unreachable block (ram,0x0001000bee68) */
/* WARNING: Removing unreachable block (ram,0x0001000bee78) */
/* WARNING: Removing unreachable block (ram,0x0001000bee7c) */
/* WARNING: Removing unreachable block (ram,0x0001000bee90) */
/* WARNING: Removing unreachable block (ram,0x0001000beeb4) */
/* WARNING: Removing unreachable block (ram,0x0001000beecc) */
/* WARNING: Removing unreachable block (ram,0x0001000beee0) */
/* WARNING: Removing unreachable block (ram,0x0001000ebd8c) */
/* WARNING: Removing unreachable block (ram,0x0001000ebd38) */
/* WARNING: Removing unreachable block (ram,0x0001000bf2fc) */
/* WARNING: Removing unreachable block (ram,0x0001000bf40c) */
/* WARNING: Removing unreachable block (ram,0x0001000bf428) */
/* WARNING: Removing unreachable block (ram,0x0001000bf420) */
/* WARNING: Removing unreachable block (ram,0x0001000bf314) */
/* WARNING: Removing unreachable block (ram,0x0001000ee888) */
/* WARNING: Removing unreachable block (ram,0x0001000eed68) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10489d2cc(code ******param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar18;
  uint uVar19;
  code *******pppppppcVar20;
  char *pcVar21;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined **ppuVar29;
  code ******ppppppcVar30;
  uint uVar31;
  code *****UNRECOVERED_JUMPTABLE;
  uint uVar32;
  code *******pppppppcVar33;
  uint uVar34;
  code ******in_x6;
  code *******pppppppcVar35;
  ulong uVar36;
  ulong uVar37;
  code *******pppppppcVar38;
  uint uVar39;
  int iVar40;
  code *******pppppppcVar41;
  ulong uVar42;
  code *******pppppppcVar43;
  long extraout_x12;
  long extraout_x12_00;
  code *******in_x12;
  uint in_w13;
  undefined8 *puVar44;
  code *******unaff_x19;
  uint uVar45;
  code *******unaff_x20;
  code ****ppppcVar46;
  code *******unaff_x21;
  code ******ppppppcVar47;
  long lVar48;
  code *******pppppppcVar49;
  char *pcVar50;
  code *******unaff_x22;
  code ******ppppppcVar51;
  code *******pppppppcVar52;
  code *******unaff_x23;
  code *******unaff_x24;
  code *******unaff_x25;
  char *unaff_x26;
  long lVar53;
  code *******unaff_x27;
  long lVar54;
  code *******unaff_x28;
  long unaff_x29;
  code *******unaff_x30;
  code ******in_register_00005008;
  code ******unaff_d8;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [16];
  code *******in_stack_00000000;
  code *******in_stack_00000008;
  undefined8 *in_stack_00000010;
  code *******in_stack_00000018;
  code *****in_stack_00000020;
  code ******in_stack_00000028;
  code ******in_stack_00000030;
  undefined8 *in_stack_00000038;
  code ******in_stack_00000040;
  undefined8 *in_stack_00000048;
  code ******in_stack_00000050;
  long in_stack_00000058;
  code ******in_stack_00000060;
  code *******in_stack_00000068;
  int in_stack_000000c0;
  code *******apppppppcStack_98 [2];
  char cStack_81;
  code *******pppppppcStack_80;
  code ******ppppppcStack_78;
  code ******ppppppcStack_70;
  
  lVar24 = _DAT_11305f908;
  ppuVar29 = *(undefined ***)*param_2;
  pcVar21 = *(char **)(*param_2 + 8);
  pppppppcVar49 = (code *******)*param_3;
  pppppppcVar33 = (code *******)param_3[1];
  bVar2 = *(byte *)(param_3 + 2);
  bVar3 = param_2[1][0];
  ppppppcVar30 = (code ******)(ulong)bVar3;
  uVar39 = (uint)(bVar3 >> 2);
  pppppppcVar35 = (code *******)(ulong)uVar39;
  pppppppcVar38 = (code *******)&UNK_10dd3e63c;
  uVar4 = *(ushort *)(&UNK_10dd3e63c + (long)pppppppcVar35 * 2);
  pppppppcVar43 = (code *******)(ulong)uVar4;
  pppppppcVar41 = (code *******)(&UNK_1000af134 + (long)pppppppcVar43 * 4);
  uVar34 = (uint)bVar2;
  uVar32 = (uint)pppppppcVar33;
  uVar19 = (uint)ppuVar29;
  uVar31 = (uint)pppppppcVar49;
  uVar26 = (uint)pcVar21;
  uVar45 = (uint)unaff_x20;
  cVar5 = (char)pcVar21;
  pppppppcVar20 = (code *******)ppuVar29;
  pppppppcVar52 = pppppppcVar35;
  switch(bVar3 >> 2) {
  default:
    uVar39 = (uint)bVar2;
  case 0x51:
  case 0x5e:
  case 0x65:
  case 0x92:
  case 0x99:
  case 0xb9:
  case 199:
  case 0xea:
  case 0xf1:
    in_CY = 3 < uVar39;
code_r0x0001000af13c:
    if (!(bool)in_CY) {
code_r0x0001000af140:
      uVar39 = uVar32 & 0xff;
      goto code_r0x0001000af144;
    }
    break;
  case 1:
    if ((bVar2 & 0xfc) != 4) break;
    goto code_r0x0001000af568;
  case 2:
    if ((bVar2 & 0xfc) == 8) goto code_r0x0001000af568;
    break;
  case 3:
    if ((bVar2 & 0xfc) == 0xc) {
      uVar39 = uVar31 & 0xff;
      uVar32 = uVar19 & 0xff;
      if (uVar32 < 0xb) {
        if (uVar32 == 9) {
          if (uVar39 == 9) {
            auVar84._8_8_ = pcVar21;
            auVar84._0_8_ = 1;
            return auVar84;
          }
          break;
        }
        if (uVar32 == 10) {
          if (uVar39 == 10) {
            auVar59._8_8_ = pcVar21;
            auVar59._0_8_ = 1;
            return auVar59;
          }
          break;
        }
      }
      else {
        if (uVar32 == 0xb) {
          if (uVar39 == 0xb) {
            auVar85._8_8_ = pcVar21;
            auVar85._0_8_ = 1;
            return auVar85;
          }
          break;
        }
        if (uVar32 == 0xc) {
          if (uVar39 == 0xc) {
            auVar68._8_8_ = pcVar21;
            auVar68._0_8_ = 1;
            return auVar68;
          }
          break;
        }
      }
      if ((3 < uVar39 - 9) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar80._8_8_ = pcVar21;
        auVar80._0_8_ = 1;
        return auVar80;
      }
    }
    break;
  case 4:
    if ((bVar2 & 0xfc) == 0x10) goto code_r0x0001000af568;
    break;
  case 5:
    if ((bVar2 & 0xfc) == 0x14) {
      uVar39 = uVar19 & 0xff;
      uVar32 = uVar31 & 0xff;
      uVar19 = uVar19 >> 5 & 7;
      if (uVar19 < 3) {
        if (uVar19 == 0) {
          if (uVar32 < 0x20) {
            auVar114._1_7_ = 0;
            auVar114[0] = uVar39 == uVar32;
            auVar114._8_8_ = pppppppcVar49;
            return auVar114;
          }
        }
        else if (uVar19 == 1) {
          if ((uVar31 & 0xe0) == 0x20) {
code_r0x0001000b9f14:
            auVar115._1_7_ = 0;
            auVar115[0] = ((uVar32 ^ uVar39) & 0x1f) == 0;
            auVar115._8_8_ = pppppppcVar49;
            return auVar115;
          }
        }
        else if ((uVar31 & 0xe0) == 0x40) goto code_r0x0001000b9f14;
      }
      else if (uVar19 < 5) {
        if (uVar19 == 3) {
          if (uVar39 < 100) {
            if (uVar39 < 0x62) {
              if (uVar39 == 0x60) {
                if (uVar32 == 0x60) {
                  auVar112._8_8_ = pppppppcVar49;
                  auVar112._0_8_ = 1;
                  return auVar112;
                }
              }
              else if (uVar32 == 0x61) {
                auVar131._8_8_ = pppppppcVar49;
                auVar131._0_8_ = 1;
                return auVar131;
              }
            }
            else if (uVar39 == 0x62) {
              if (uVar32 == 0x62) {
                auVar122._8_8_ = pppppppcVar49;
                auVar122._0_8_ = 1;
                return auVar122;
              }
            }
            else if (uVar32 == 99) {
              auVar137._8_8_ = pppppppcVar49;
              auVar137._0_8_ = 1;
              return auVar137;
            }
          }
          else if (uVar39 < 0x66) {
            if (uVar39 == 100) {
              if (uVar32 == 100) {
                auVar118._8_8_ = pppppppcVar49;
                auVar118._0_8_ = 1;
                return auVar118;
              }
            }
            else if (uVar32 == 0x65) {
              auVar134._8_8_ = pppppppcVar49;
              auVar134._0_8_ = 1;
              return auVar134;
            }
          }
          else if (uVar39 == 0x66) {
            if (uVar32 == 0x66) {
              auVar125._8_8_ = pppppppcVar49;
              auVar125._0_8_ = 1;
              return auVar125;
            }
          }
          else if (uVar32 == 0x67) {
            auVar140._8_8_ = pppppppcVar49;
            auVar140._0_8_ = 1;
            return auVar140;
          }
        }
        else if (uVar39 < 0x84) {
          if (uVar39 < 0x82) {
            if (uVar39 == 0x80) {
              if (uVar32 == 0x80) {
                auVar116._8_8_ = pppppppcVar49;
                auVar116._0_8_ = 1;
                return auVar116;
              }
            }
            else if (uVar32 == 0x81) {
              auVar133._8_8_ = pppppppcVar49;
              auVar133._0_8_ = 1;
              return auVar133;
            }
          }
          else if (uVar39 == 0x82) {
            if (uVar32 == 0x82) {
              auVar124._8_8_ = pppppppcVar49;
              auVar124._0_8_ = 1;
              return auVar124;
            }
          }
          else if (uVar32 == 0x83) {
            auVar139._8_8_ = pppppppcVar49;
            auVar139._0_8_ = 1;
            return auVar139;
          }
        }
        else if (uVar39 < 0x86) {
          if (uVar39 == 0x84) {
            if (uVar32 == 0x84) {
              auVar120._8_8_ = pppppppcVar49;
              auVar120._0_8_ = 1;
              return auVar120;
            }
          }
          else if (uVar32 == 0x85) {
            auVar136._8_8_ = pppppppcVar49;
            auVar136._0_8_ = 1;
            return auVar136;
          }
        }
        else if (uVar39 == 0x86) {
          if (uVar32 == 0x86) {
            auVar127._8_8_ = pppppppcVar49;
            auVar127._0_8_ = 1;
            return auVar127;
          }
        }
        else if (uVar32 == 0x87) {
          auVar142._8_8_ = pppppppcVar49;
          auVar142._0_8_ = 1;
          return auVar142;
        }
      }
      else if (uVar19 == 5) {
        if (uVar39 < 0xa4) {
          if (uVar39 < 0xa2) {
            if (uVar39 == 0xa0) {
              if (uVar32 == 0xa0) {
                auVar113._8_8_ = pppppppcVar49;
                auVar113._0_8_ = 1;
                return auVar113;
              }
            }
            else if (uVar32 == 0xa1) {
              auVar132._8_8_ = pppppppcVar49;
              auVar132._0_8_ = 1;
              return auVar132;
            }
          }
          else if (uVar39 == 0xa2) {
            if (uVar32 == 0xa2) {
              auVar123._8_8_ = pppppppcVar49;
              auVar123._0_8_ = 1;
              return auVar123;
            }
          }
          else if (uVar32 == 0xa3) {
            auVar138._8_8_ = pppppppcVar49;
            auVar138._0_8_ = 1;
            return auVar138;
          }
        }
        else if (uVar39 < 0xa6) {
          if (uVar39 == 0xa4) {
            if (uVar32 == 0xa4) {
              auVar119._8_8_ = pppppppcVar49;
              auVar119._0_8_ = 1;
              return auVar119;
            }
          }
          else if (uVar32 == 0xa5) {
            auVar135._8_8_ = pppppppcVar49;
            auVar135._0_8_ = 1;
            return auVar135;
          }
        }
        else if (uVar39 == 0xa6) {
          if (uVar32 == 0xa6) {
            auVar126._8_8_ = pppppppcVar49;
            auVar126._0_8_ = 1;
            return auVar126;
          }
        }
        else if (uVar32 == 0xa7) {
          auVar141._8_8_ = pppppppcVar49;
          auVar141._0_8_ = 1;
          return auVar141;
        }
      }
      else if (uVar39 < 0xc2) {
        if (uVar39 == 0xc0) {
          if (uVar32 == 0xc0) {
            auVar121._8_8_ = pppppppcVar49;
            auVar121._0_8_ = 1;
            return auVar121;
          }
        }
        else if (uVar32 == 0xc1) {
          auVar130._8_8_ = pppppppcVar49;
          auVar130._0_8_ = 1;
          return auVar130;
        }
      }
      else if (uVar39 == 0xc2) {
        if (uVar32 == 0xc2) {
          auVar128._8_8_ = pppppppcVar49;
          auVar128._0_8_ = 1;
          return auVar128;
        }
      }
      else if (uVar39 == 0xc3) {
        if (uVar32 == 0xc3) {
          auVar117._8_8_ = pppppppcVar49;
          auVar117._0_8_ = 1;
          return auVar117;
        }
      }
      else if (uVar32 == 0xc4) {
        auVar129._8_8_ = pppppppcVar49;
        auVar129._0_8_ = 1;
        return auVar129;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = pppppppcVar49;
      return auVar6 << 0x40;
    }
    break;
  case 6:
    if ((bVar2 & 0xfc) == 0x18) {
      uVar19 = uVar19 & 0xff;
      uVar39 = uVar31 & 0xff;
      if (uVar19 == 4) {
        if (uVar39 == 4) {
          auVar176._8_8_ = pppppppcVar49;
          auVar176._0_8_ = 1;
          return auVar176;
        }
      }
      else if (uVar19 == 5) {
        if (uVar39 == 5) {
          auVar175._8_8_ = pppppppcVar49;
          auVar175._0_8_ = 1;
          return auVar175;
        }
      }
      else if ((uVar31 & 0xfe) != 4) {
        auVar177._1_7_ = 0;
        auVar177[0] = uVar19 == uVar39;
        auVar177._8_8_ = pppppppcVar49;
        return auVar177;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = pppppppcVar49;
      return auVar7 << 0x40;
    }
    break;
  case 7:
    if ((bVar2 & 0xfc) == 0x1c) {
      uVar39 = uVar31 & 0xff;
      uVar32 = uVar19 & 0xff;
      if (uVar32 < 5) {
        if (uVar32 == 3) {
          if (uVar39 == 3) {
            auVar86._8_8_ = pcVar21;
            auVar86._0_8_ = 1;
            return auVar86;
          }
          break;
        }
        if (uVar32 == 4) {
          if (uVar39 == 4) {
            auVar60._8_8_ = pcVar21;
            auVar60._0_8_ = 1;
            return auVar60;
          }
          break;
        }
      }
      else {
        if (uVar32 == 5) {
          if (uVar39 == 5) {
            auVar87._8_8_ = pcVar21;
            auVar87._0_8_ = 1;
            return auVar87;
          }
          break;
        }
        if (uVar32 == 6) {
          if (uVar39 == 6) {
            auVar69._8_8_ = pcVar21;
            auVar69._0_8_ = 1;
            return auVar69;
          }
          break;
        }
      }
      if ((3 < uVar39 - 3) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar81._8_8_ = pcVar21;
        auVar81._0_8_ = 1;
        return auVar81;
      }
    }
    break;
  case 8:
    if ((bVar2 & 0xfc) == 0x20) goto code_r0x0001000af568;
    break;
  case 9:
    if ((bVar2 & 0xfc) == 0x24) {
      uVar39 = uVar19 & 0xff;
      uVar32 = uVar31 & 0xff;
      if (uVar39 >> 6 == 0) {
        if ((uVar32 < 0x40) && ((uVar31 & 0x3f) == (uVar19 & 0xff))) {
          auVar72._8_8_ = pcVar21;
          auVar72._0_8_ = 1;
          return auVar72;
        }
      }
      else if (uVar39 >> 6 == 1) {
        if (((uVar31 & 0xc0) == 0x40) && (((uVar32 ^ uVar39) & 0x3f) == 0)) {
          auVar56._8_8_ = pcVar21;
          auVar56._0_8_ = 1;
          return auVar56;
        }
      }
      else if (uVar39 < 0x82) {
        if (uVar39 == 0x80) {
          if (uVar32 == 0x80) {
            auVar73._8_8_ = pcVar21;
            auVar73._0_8_ = 1;
            return auVar73;
          }
        }
        else if (uVar32 == 0x81) {
          auVar97._8_8_ = pcVar21;
          auVar97._0_8_ = 1;
          return auVar97;
        }
      }
      else if (uVar39 == 0x82) {
        if (uVar32 == 0x82) {
          auVar88._8_8_ = pcVar21;
          auVar88._0_8_ = 1;
          return auVar88;
        }
      }
      else if (uVar32 == 0x83) {
        auVar98._8_8_ = pcVar21;
        auVar98._0_8_ = 1;
        return auVar98;
      }
    }
    break;
  case 10:
    if ((bVar2 & 0xfc) == 0x28) goto code_r0x0001000af568;
    break;
  case 0xb:
    if ((bVar2 & 0xfc) == 0x2c) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar21 & 0xff) == 0) {
        if (((ulong)pcVar21 & 0xff) == 0) {
          if (((ulong)pppppppcVar33 & 0xff) == 0) {
LAB_1048a2510:
            auVar180._1_7_ = 0;
            auVar180[0] = uVar19 == uVar31;
            auVar180._8_8_ = pcVar21;
            return auVar180;
          }
        }
        else if ((uVar32 & 0xff) == 1) goto LAB_1048a2510;
      }
      else if (uVar26 == 2) {
        if ((uVar32 & 0xff) == 2) {
          auVar178._1_7_ = 0;
          auVar178[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
          auVar178._8_8_ = pcVar21;
          return auVar178;
        }
      }
      else if (uVar26 == 3) {
        if ((uVar32 & 0xff) == 3) goto LAB_1048a2510;
      }
      else if (((uVar32 & 0xff) == 4) && (pppppppcVar49 == (code *******)0x0)) {
        auVar179._8_8_ = pcVar21;
        auVar179._0_8_ = 1;
        return auVar179;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = pcVar21;
      return auVar8 << 0x40;
    }
    break;
  case 0xc:
    if ((bVar2 & 0xfc) == 0x30) goto code_r0x0001000af568;
    break;
  case 0xd:
    if ((bVar2 & 0xfc) == 0x34) {
      if (((ulong)pcVar21 & 0xff) == 0) {
        if (((ulong)pppppppcVar33 & 0xff) == 0) {
          auVar183._1_7_ = 0;
          auVar183[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
          auVar183._8_8_ = pcVar21;
          return auVar183;
        }
      }
      else {
        if ((uVar26 & 0xff) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001048a3744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)(ppuVar29 + 0x21ba7f27) * 4 + 0x1048a3748))();
          auVar182._8_8_ = pcVar21;
          auVar182._0_8_ = ppuVar29;
          return auVar182;
        }
        if ((uVar32 & 0xff) == 1) {
          auVar181._1_7_ = 0;
          auVar181[0] = uVar19 == uVar31;
          auVar181._8_8_ = pcVar21;
          return auVar181;
        }
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = pcVar21;
      return auVar9 << 0x40;
    }
    break;
  case 0xe:
    if ((bVar2 & 0xfc) == 0x38) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar21 & 0xff) == 0) {
        if (((ulong)pcVar21 & 0xff) == 0) {
          if (((ulong)pppppppcVar33 & 0xff) == 0) {
LAB_1048a4c34:
            auVar186._1_7_ = 0;
            auVar186[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
            auVar186._8_8_ = pcVar21;
            return auVar186;
          }
        }
        else if ((uVar32 & 0xff) == 1) goto LAB_1048a4c34;
      }
      else if (uVar26 == 2) {
        if ((uVar32 & 0xff) == 2) {
          auVar184._1_7_ = 0;
          auVar184[0] = uVar19 == uVar31;
          auVar184._8_8_ = pcVar21;
          return auVar184;
        }
      }
      else {
        if (uVar26 != 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048a4c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)ppuVar29 + 0x10dd3fba3) * 4 + 0x1048a4c10))();
          auVar185._8_8_ = pcVar21;
          auVar185._0_8_ = ppuVar29;
          return auVar185;
        }
        if ((uVar32 & 0xff) == 3) goto LAB_1048a4c34;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = pcVar21;
      return auVar10 << 0x40;
    }
    break;
  case 0xf:
    if ((bVar2 & 0xfc) == 0x3c) {
      uVar39 = uVar19 & 0xff;
      uVar32 = uVar31 & 0xff;
      uVar19 = uVar19 >> 4 & 0xf;
      if (uVar19 < 4) {
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            if (uVar32 < 0x10) {
              auVar188._1_7_ = 0;
              auVar188[0] = uVar39 == uVar32;
              auVar188._8_8_ = pppppppcVar49;
              return auVar188;
            }
          }
          else if ((uVar31 & 0xf0) == 0x10) {
            auVar192._1_7_ = 0;
            auVar192[0] = ((uVar32 ^ uVar39) & 0xf) == 0;
            auVar192._8_8_ = pppppppcVar49;
            return auVar192;
          }
        }
        else if (uVar19 == 2) {
          if (uVar39 < 0x22) {
            if (uVar39 == 0x20) {
              if (uVar32 == 0x20) {
                auVar189._8_8_ = pppppppcVar49;
                auVar189._0_8_ = 1;
                return auVar189;
              }
            }
            else if (uVar32 == 0x21) {
              auVar206._8_8_ = pppppppcVar49;
              auVar206._0_8_ = 1;
              return auVar206;
            }
          }
          else if (uVar39 == 0x22) {
            if (uVar32 == 0x22) {
              auVar197._8_8_ = pppppppcVar49;
              auVar197._0_8_ = 1;
              return auVar197;
            }
          }
          else if (uVar32 == 0x23) {
            auVar208._8_8_ = pppppppcVar49;
            auVar208._0_8_ = 1;
            return auVar208;
          }
        }
        else if (uVar39 < 0x32) {
          if (uVar39 == 0x30) {
            if (uVar32 == 0x30) {
              auVar193._8_8_ = pppppppcVar49;
              auVar193._0_8_ = 1;
              return auVar193;
            }
          }
          else if (uVar32 == 0x31) {
            auVar207._8_8_ = pppppppcVar49;
            auVar207._0_8_ = 1;
            return auVar207;
          }
        }
        else if (uVar39 == 0x32) {
          if (uVar32 == 0x32) {
            auVar198._8_8_ = pppppppcVar49;
            auVar198._0_8_ = 1;
            return auVar198;
          }
        }
        else if (uVar32 == 0x33) {
          auVar209._8_8_ = pppppppcVar49;
          auVar209._0_8_ = 1;
          return auVar209;
        }
      }
      else if (uVar19 < 6) {
        if (uVar19 == 4) {
          if (uVar39 < 0x42) {
            if (uVar39 == 0x40) {
              if (uVar32 == 0x40) {
                auVar190._8_8_ = pppppppcVar49;
                auVar190._0_8_ = 1;
                return auVar190;
              }
            }
            else if (uVar32 == 0x41) {
              auVar212._8_8_ = pppppppcVar49;
              auVar212._0_8_ = 1;
              return auVar212;
            }
          }
          else if (uVar39 == 0x42) {
            if (uVar32 == 0x42) {
              auVar200._8_8_ = pppppppcVar49;
              auVar200._0_8_ = 1;
              return auVar200;
            }
          }
          else if (uVar32 == 0x43) {
            auVar214._8_8_ = pppppppcVar49;
            auVar214._0_8_ = 1;
            return auVar214;
          }
        }
        else if (uVar39 < 0x52) {
          if (uVar39 == 0x50) {
            if (uVar32 == 0x50) {
              auVar195._8_8_ = pppppppcVar49;
              auVar195._0_8_ = 1;
              return auVar195;
            }
          }
          else if (uVar32 == 0x51) {
            auVar213._8_8_ = pppppppcVar49;
            auVar213._0_8_ = 1;
            return auVar213;
          }
        }
        else if (uVar39 == 0x52) {
          if (uVar32 == 0x52) {
            auVar201._8_8_ = pppppppcVar49;
            auVar201._0_8_ = 1;
            return auVar201;
          }
        }
        else if (uVar32 == 0x53) {
          auVar215._8_8_ = pppppppcVar49;
          auVar215._0_8_ = 1;
          return auVar215;
        }
      }
      else if (uVar19 == 6) {
        if (uVar39 < 0x62) {
          if (uVar39 == 0x60) {
            if (uVar32 == 0x60) {
              auVar191._8_8_ = pppppppcVar49;
              auVar191._0_8_ = 1;
              return auVar191;
            }
          }
          else if (uVar32 == 0x61) {
            auVar204._8_8_ = pppppppcVar49;
            auVar204._0_8_ = 1;
            return auVar204;
          }
        }
        else if (uVar39 == 0x62) {
          if (uVar32 == 0x62) {
            auVar196._8_8_ = pppppppcVar49;
            auVar196._0_8_ = 1;
            return auVar196;
          }
        }
        else if (uVar32 == 99) {
          auVar205._8_8_ = pppppppcVar49;
          auVar205._0_8_ = 1;
          return auVar205;
        }
      }
      else if (uVar19 == 7) {
        if (uVar39 < 0x72) {
          if (uVar39 == 0x70) {
            if (uVar32 == 0x70) {
              auVar187._8_8_ = pppppppcVar49;
              auVar187._0_8_ = 1;
              return auVar187;
            }
          }
          else if (uVar32 == 0x71) {
            auVar210._8_8_ = pppppppcVar49;
            auVar210._0_8_ = 1;
            return auVar210;
          }
        }
        else if (uVar39 == 0x72) {
          if (uVar32 == 0x72) {
            auVar199._8_8_ = pppppppcVar49;
            auVar199._0_8_ = 1;
            return auVar199;
          }
        }
        else if (uVar32 == 0x73) {
          auVar211._8_8_ = pppppppcVar49;
          auVar211._0_8_ = 1;
          return auVar211;
        }
      }
      else if (uVar39 == 0x80) {
        if (uVar32 == 0x80) {
          auVar202._8_8_ = pppppppcVar49;
          auVar202._0_8_ = 1;
          return auVar202;
        }
      }
      else if (uVar39 == 0x81) {
        if (uVar32 == 0x81) {
          auVar194._8_8_ = pppppppcVar49;
          auVar194._0_8_ = 1;
          return auVar194;
        }
      }
      else if (uVar32 == 0x82) {
        auVar203._8_8_ = pppppppcVar49;
        auVar203._0_8_ = 1;
        return auVar203;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = pppppppcVar49;
      return auVar11 << 0x40;
    }
    break;
  case 0x10:
    if ((bVar2 & 0xfc) == 0x40) {
      uVar26 = uVar26 & 0xff;
      if (uVar26 == 1 || ((ulong)pcVar21 & 0xff) == 0) {
        if (((ulong)pcVar21 & 0xff) == 0) {
          if (((ulong)pppppppcVar33 & 0xff) == 0) {
code_r0x0001000b9d20:
            auVar109._1_7_ = 0;
            auVar109[0] = uVar19 == uVar31;
            auVar109._8_8_ = pcVar21;
            return auVar109;
          }
        }
        else if ((uVar32 & 0xff) == 1) goto code_r0x0001000b9d20;
      }
      else if (uVar26 == 2) {
        if ((uVar32 & 0xff) == 2) goto code_r0x0001000b9d20;
      }
      else if (uVar26 == 3) {
        if ((uVar32 & 0xff) == 3) {
          auVar107._1_7_ = 0;
          auVar107[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
          auVar107._8_8_ = pcVar21;
          return auVar107;
        }
      }
      else {
        uVar32 = uVar32 & 0xff;
        if ((code *******)ppuVar29 == (code *******)0x0) {
          if ((uVar32 == 4) && (pppppppcVar49 == (code *******)0x0)) {
            auVar110._8_8_ = pcVar21;
            auVar110._0_8_ = 1;
            return auVar110;
          }
        }
        else if ((code *******)ppuVar29 == (code *******)0x1) {
          if ((uVar32 == 4) && (pppppppcVar49 == (code *******)0x1)) {
            auVar108._8_8_ = pcVar21;
            auVar108._0_8_ = 1;
            return auVar108;
          }
        }
        else if ((uVar32 == 4) && (pppppppcVar49 == (code *******)0x2)) {
          auVar111._8_8_ = pcVar21;
          auVar111._0_8_ = 1;
          return auVar111;
        }
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = pcVar21;
      return auVar16 << 0x40;
    }
    break;
  case 0x11:
    if ((bVar2 & 0xfc) == 0x44) {
      uVar39 = uVar31 & 0xff;
      uVar32 = uVar19 & 0xff;
      if (uVar32 < 5) {
        if (uVar32 == 2) {
          if (uVar39 == 2) {
            auVar90._8_8_ = pcVar21;
            auVar90._0_8_ = 1;
            return auVar90;
          }
          break;
        }
        if (uVar32 == 3) {
          if (uVar39 == 3) {
            auVar93._8_8_ = pcVar21;
            auVar93._0_8_ = 1;
            return auVar93;
          }
          break;
        }
        if (uVar32 == 4) {
          if (uVar39 == 4) {
            auVar61._8_8_ = pcVar21;
            auVar61._0_8_ = 1;
            return auVar61;
          }
          break;
        }
      }
      else {
        if (uVar32 == 5) {
          if (uVar39 == 5) {
            auVar91._8_8_ = pcVar21;
            auVar91._0_8_ = 1;
            return auVar91;
          }
          break;
        }
        if (uVar32 == 6) {
          if (uVar39 == 6) {
            auVar94._8_8_ = pcVar21;
            auVar94._0_8_ = 1;
            return auVar94;
          }
          break;
        }
        if (uVar32 == 7) {
          if (uVar39 == 7) {
            auVar71._8_8_ = pcVar21;
            auVar71._0_8_ = 1;
            return auVar71;
          }
          break;
        }
      }
      if ((5 < uVar39 - 2) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar92._8_8_ = pcVar21;
        auVar92._0_8_ = 1;
        return auVar92;
      }
    }
    break;
  case 0x12:
    if ((bVar2 & 0xfc) == 0x48) {
      uVar39 = uVar19 & 0xff;
      uVar32 = uVar31 & 0xff;
      uVar19 = uVar19 >> 5 & 7;
      if (uVar19 < 3) {
        if (uVar19 == 0) {
          if (uVar32 < 0x20) {
            auVar218._1_7_ = 0;
            auVar218[0] = uVar39 == uVar32;
            auVar218._8_8_ = pppppppcVar49;
            return auVar218;
          }
        }
        else if (uVar19 == 1) {
          if ((uVar31 & 0xe0) == 0x20) {
LAB_1048a8644:
            auVar219._1_7_ = 0;
            auVar219[0] = ((uVar32 ^ uVar39) & 0x1f) == 0;
            auVar219._8_8_ = pppppppcVar49;
            return auVar219;
          }
        }
        else if ((uVar31 & 0xe0) == 0x40) goto LAB_1048a8644;
      }
      else if (uVar19 < 5) {
        if (uVar19 == 3) {
          if (uVar39 < 0x62) {
            if (uVar39 == 0x60) {
              if (uVar32 == 0x60) {
                auVar216._8_8_ = pppppppcVar49;
                auVar216._0_8_ = 1;
                return auVar216;
              }
            }
            else if (uVar32 == 0x61) {
              auVar226._8_8_ = pppppppcVar49;
              auVar226._0_8_ = 1;
              return auVar226;
            }
          }
          else if (uVar39 == 0x62) {
            if (uVar32 == 0x62) {
              auVar222._8_8_ = pppppppcVar49;
              auVar222._0_8_ = 1;
              return auVar222;
            }
          }
          else if (uVar32 == 99) {
            auVar229._8_8_ = pppppppcVar49;
            auVar229._0_8_ = 1;
            return auVar229;
          }
        }
        else if (uVar39 < 0x82) {
          if (uVar39 == 0x80) {
            if (uVar32 == 0x80) {
              auVar220._8_8_ = pppppppcVar49;
              auVar220._0_8_ = 1;
              return auVar220;
            }
          }
          else if (uVar32 == 0x81) {
            auVar228._8_8_ = pppppppcVar49;
            auVar228._0_8_ = 1;
            return auVar228;
          }
        }
        else if (uVar39 == 0x82) {
          if (uVar32 == 0x82) {
            auVar224._8_8_ = pppppppcVar49;
            auVar224._0_8_ = 1;
            return auVar224;
          }
        }
        else if (uVar32 == 0x83) {
          auVar231._8_8_ = pppppppcVar49;
          auVar231._0_8_ = 1;
          return auVar231;
        }
      }
      else if (uVar19 == 5) {
        if (uVar39 < 0xa2) {
          if (uVar39 == 0xa0) {
            if (uVar32 == 0xa0) {
              auVar217._8_8_ = pppppppcVar49;
              auVar217._0_8_ = 1;
              return auVar217;
            }
          }
          else if (uVar32 == 0xa1) {
            auVar227._8_8_ = pppppppcVar49;
            auVar227._0_8_ = 1;
            return auVar227;
          }
        }
        else if (uVar39 == 0xa2) {
          if (uVar32 == 0xa2) {
            auVar223._8_8_ = pppppppcVar49;
            auVar223._0_8_ = 1;
            return auVar223;
          }
        }
        else if (uVar32 == 0xa3) {
          auVar230._8_8_ = pppppppcVar49;
          auVar230._0_8_ = 1;
          return auVar230;
        }
      }
      else if (uVar39 == 0xc0) {
        if (uVar32 == 0xc0) {
          auVar221._8_8_ = pppppppcVar49;
          auVar221._0_8_ = 1;
          return auVar221;
        }
      }
      else if (uVar32 == 0xc1) {
        auVar225._8_8_ = pppppppcVar49;
        auVar225._0_8_ = 1;
        return auVar225;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = pppppppcVar49;
      return auVar12 << 0x40;
    }
    break;
  case 0x13:
    if ((bVar2 & 0xfc) == 0x4c) goto code_r0x0001000af568;
    break;
  case 0x14:
    if ((bVar2 & 0xfc) == 0x50) {
      if ((uVar26 & 0xff) == 1 || ((ulong)pcVar21 & 0xff) == 0) {
        if (((ulong)pcVar21 & 0xff) == 0) {
          if (((ulong)pppppppcVar33 & 0xff) == 0) {
            auVar232._1_7_ = 0;
            auVar232[0] = uVar19 == uVar31;
            auVar232._8_8_ = pcVar21;
            return auVar232;
          }
        }
        else if ((uVar32 & 0xff) == 1) goto LAB_1048aa7fc;
      }
      else {
        if ((uVar26 & 0xff) != 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048aa820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)*(byte *)((long)ppuVar29 + 0x10dd40836) * 4 + 0x1048aa824))();
          auVar234._8_8_ = pcVar21;
          auVar234._0_8_ = ppuVar29;
          return auVar234;
        }
        if ((uVar32 & 0xff) == 2) {
LAB_1048aa7fc:
          auVar233._1_7_ = 0;
          auVar233[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
          auVar233._8_8_ = pcVar21;
          return auVar233;
        }
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = pcVar21;
      return auVar13 << 0x40;
    }
    break;
  case 0x15:
  case 0x43:
  case 0xab:
    if ((uVar34 & 0xfc) == 0x54) goto code_r0x0001000af568;
    break;
  case 0x16:
    if ((uVar34 & 0xfc) == 0x58) goto code_r0x0001000af568;
    break;
  case 0x17:
    if ((uVar34 & 0xfc) == 0x5c) goto code_r0x0001000af568;
    break;
  case 0x18:
    if ((uVar34 & 0xfc) != 0x60) break;
    uVar39 = uVar32 >> 8 & 0xff;
    pppppppcVar38 = (code *******)((ulong)pcVar21 & 0xff00);
  case 0xdc:
    if (pppppppcVar38 == (code *******)0x100) {
      uVar36 = (long)cVar5 + (ulong)(ppuVar29 >= (code *******)0x3);
      if ((long)-uVar36 < 0 == SCARRY8(~uVar36,(ulong)(ppuVar29 < (code *******)0x3))) {
        if ((code *******)ppuVar29 == (code *******)0x0 && ((ulong)pcVar21 & 0xff) == 0) {
          if ((uVar39 == 1) &&
             (((ulong)pppppppcVar33 & 0xff) == 0 && pppppppcVar49 == (code *******)0x0)) {
            auVar99._8_8_ = pcVar21;
            auVar99._0_8_ = 1;
            return auVar99;
          }
        }
        else if ((code *******)ppuVar29 == (code *******)0x1 && ((ulong)pcVar21 & 0xff) == 0) {
          if ((uVar39 == 1) &&
             (pppppppcVar49 == (code *******)0x1 && ((ulong)pppppppcVar33 & 0xff) == 0)) {
            auVar78._8_8_ = pcVar21;
            auVar78._0_8_ = 1;
            return auVar78;
          }
        }
        else if ((uVar39 == 1) &&
                (pppppppcVar49 == (code *******)0x2 && ((ulong)pppppppcVar33 & 0xff) == 0)) {
          auVar100._8_8_ = pcVar21;
          auVar100._0_8_ = 1;
          return auVar100;
        }
      }
      else {
        uVar36 = (long)cVar5 + (ulong)(ppuVar29 >= (code *******)0x5);
        if ((long)-uVar36 < 0 == SCARRY8(~uVar36,(ulong)(ppuVar29 < (code *******)0x5))) {
          if ((code *******)ppuVar29 == (code *******)0x3 && ((ulong)pcVar21 & 0xff) == 0) {
            if ((uVar39 == 1) &&
               (pppppppcVar49 == (code *******)0x3 && ((ulong)pppppppcVar33 & 0xff) == 0)) {
              auVar58._8_8_ = pcVar21;
              auVar58._0_8_ = 1;
              return auVar58;
            }
          }
          else if (uVar39 == 1) {
code_r0x0001000afa60:
            if (pppppppcVar49 == (code *******)0x4 && ((ulong)pppppppcVar33 & 0xff) == 0) {
              auVar101._8_8_ = pcVar21;
              auVar101._0_8_ = 1;
              return auVar101;
            }
          }
        }
        else {
          in_ZR = uVar39 == 1;
          if ((code *******)ppuVar29 == (code *******)0x5 && ((ulong)pcVar21 & 0xff) == 0) {
            if (((bool)in_ZR) &&
               (pppppppcVar49 == (code *******)0x5 && ((ulong)pppppppcVar33 & 0xff) == 0)) {
              auVar89._8_8_ = pcVar21;
              auVar89._0_8_ = 1;
              return auVar89;
            }
          }
          else {
code_r0x0001000afa78:
            if (((bool)in_ZR) &&
               (((ulong)pppppppcVar33 & 0xff) != 0 ||
                CARRY8(((ulong)pppppppcVar33 & 0xff) - 1,(ulong)((code *******)0x5 < pppppppcVar49))
               )) {
              ppuVar29 = (undefined **)0x1;
code_r0x0001000afa90:
              auVar102._8_8_ = pcVar21;
              auVar102._0_8_ = ppuVar29;
              return auVar102;
            }
          }
        }
      }
    }
    else if (uVar39 != 1) {
      if (((ulong)pcVar21 & 0xff) == 1) {
        if ((uVar32 & 0xff) == 1) {
          auVar67._8_8_ = pcVar21;
          auVar67._0_8_ = 1;
          return auVar67;
        }
      }
      else if (((uVar32 & 0xff) != 1) && (uVar19 == uVar31)) {
        auVar95._8_8_ = pcVar21;
        auVar95._0_8_ = 1;
        return auVar95;
      }
    }
    break;
  case 0x19:
    if ((uVar34 & 0xfc) == 100) {
      uVar39 = uVar31 & 0xff;
      uVar32 = uVar19 & 0xff;
      if (uVar32 < 10) {
        if (uVar32 == 8) {
          if (uVar39 == 8) {
            auVar82._8_8_ = pcVar21;
            auVar82._0_8_ = 1;
            return auVar82;
          }
          break;
        }
        if (uVar32 == 9) {
          if (uVar39 == 9) {
            auVar57._8_8_ = pcVar21;
            auVar57._0_8_ = 1;
            return auVar57;
          }
          break;
        }
      }
      else {
        if (uVar32 == 10) {
          if (uVar39 == 10) {
            auVar83._8_8_ = pcVar21;
            auVar83._0_8_ = 1;
            return auVar83;
          }
          break;
        }
        if (uVar32 == 0xb) {
          if (uVar39 == 0xb) {
            auVar66._8_8_ = pcVar21;
            auVar66._0_8_ = 1;
            return auVar66;
          }
          break;
        }
      }
      if (((uVar31 & 0xfc) != 8) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar79._8_8_ = pcVar21;
        auVar79._0_8_ = 1;
        return auVar79;
      }
    }
    break;
  case 0x1a:
    if ((uVar34 & 0xfc) == 0x68) {
      uVar39 = uVar31 & 0xff;
      if ((uVar19 & 0xff) == 3) {
        if (uVar39 == 3) {
          auVar76._8_8_ = pcVar21;
          auVar76._0_8_ = 1;
          return auVar76;
        }
      }
      else if ((uVar19 & 0xff) == 4) {
        if (uVar39 == 4) {
          auVar65._8_8_ = pcVar21;
          auVar65._0_8_ = 1;
          return auVar65;
        }
      }
      else if ((1 < uVar39 - 3) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar77._8_8_ = pcVar21;
        auVar77._0_8_ = 1;
        return auVar77;
      }
    }
    break;
  case 0x1b:
    if ((bVar2 & 0xfc) == 0x6c) {
      if ((bVar3 & 3) == 0) {
        if ((bVar2 & 3) == 0) {
          auVar106._1_7_ = 0;
          auVar106[0] = uVar19 == uVar31;
          auVar106._8_8_ = pcVar21;
          return auVar106;
        }
      }
      else {
        if ((bVar3 & 3) != 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000b1d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1000b1d44 + (ulong)*(byte *)((long)ppuVar29 + 0x10dd41824) * 4))();
          auVar105._8_8_ = pcVar21;
          auVar105._0_8_ = ppuVar29;
          return auVar105;
        }
        if ((bVar2 & 3) == 1) {
          if (((code *******)ppuVar29 == pppppppcVar49) && ((code *******)pcVar21 == pppppppcVar33))
          {
            auVar104._8_8_ = pcVar21;
            auVar104._0_8_ = 1;
            return auVar104;
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(ppuVar29,pcVar21,pppppppcVar49,pppppppcVar33,0);
          auVar236._8_8_ = pcVar21;
          auVar236._0_8_ = ppuVar29;
          return auVar236;
        }
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = pcVar21;
      return auVar15 << 0x40;
    }
    break;
  case 0x1c:
    if ((uVar34 & 0xfc) == 0x70) goto code_r0x0001000af568;
    break;
  case 0x1d:
    if ((uVar34 & 0xfc) == 0x74) goto code_r0x0001000af568;
    break;
  case 0x1e:
    if ((uVar34 & 0xfc) == 0x78) {
      uVar39 = uVar31 & 0xff;
      if ((uVar19 & 0xff) == 6) {
        if (uVar39 == 6) {
          auVar74._8_8_ = pcVar21;
          auVar74._0_8_ = 1;
          return auVar74;
        }
      }
      else if ((uVar19 & 0xff) == 5) {
        if (uVar39 == 5) {
          auVar62._8_8_ = pcVar21;
          auVar62._0_8_ = 1;
          return auVar62;
        }
      }
      else if ((1 < uVar39 - 5) && (((uVar31 ^ uVar19) & 0xff) == 0)) {
        auVar75._8_8_ = pcVar21;
        auVar75._0_8_ = 1;
        return auVar75;
      }
    }
    break;
  case 0x1f:
    uVar39 = uVar34 & 0xfc;
  case 0x39:
  case 0x59:
  case 0x8d:
  case 0xa1:
  case 0xc1:
  case 0xe5:
  case 0xf9:
    if (uVar39 == 0x7c) {
code_r0x0001000af568:
      auVar63._1_7_ = 0;
      auVar63[0] = ((uVar31 ^ uVar19) & 0xff) == 0;
      auVar63._8_8_ = pcVar21;
      return auVar63;
    }
    break;
  case 0x20:
    if ((char)bVar2 < -0x7c) goto code_r0x0001000af568;
    break;
  case 0x21:
    if ((uVar34 & 0xfc) == 0x84) goto code_r0x0001000af568;
    break;
  case 0x22:
    if ((uVar34 & 0xfc) == 0x88) goto code_r0x0001000af568;
    break;
  case 0x23:
    if ((uVar34 & 0xfc) == 0x8c) goto code_r0x0001000af568;
    break;
  case 0x24:
    if ((uVar34 & 0xfc) == 0x90) goto code_r0x0001000af568;
    break;
  case 0x25:
    if ((uVar34 & 0xfc) == 0x94) goto code_r0x0001000af568;
    break;
  case 0x26:
    if (((code *******)pcVar21 == (code *******)0x0 && (code *******)ppuVar29 == (code *******)0x0)
       && (bVar3 == 0x98)) {
      if ((((bVar2 & 0xfc) == 0x98) &&
          (pppppppcVar33 == (code *******)0x0 && pppppppcVar49 == (code *******)0x0)) &&
         (bVar2 == 0x98)) {
        auVar64._8_8_ = pcVar21;
        auVar64._0_8_ = 1;
        return auVar64;
      }
    }
    else if (((code *******)ppuVar29 == (code *******)0x1) &&
            (((code *******)pcVar21 == (code *******)0x0 && (bVar3 == 0x98)))) {
      if (((((bVar2 & 0xfc) == 0x98) && (pppppppcVar49 == (code *******)0x1)) &&
          (pppppppcVar33 == (code *******)0x0)) && (bVar2 == 0x98)) {
        return ZEXT816(1);
      }
    }
    else if (((code *******)ppuVar29 == (code *******)0x2) &&
            (((code *******)pcVar21 == (code *******)0x0 && (bVar3 == 0x98)))) {
      if ((((bVar2 & 0xfc) == 0x98) && (pppppppcVar49 == (code *******)0x2)) &&
         ((pppppppcVar33 == (code *******)0x0 && (bVar2 == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if (((code *******)ppuVar29 == (code *******)0x3) &&
            (((code *******)pcVar21 == (code *******)0x0 && (bVar3 == 0x98)))) {
      if ((((bVar2 & 0xfc) == 0x98) && (pppppppcVar49 == (code *******)0x3)) &&
         ((pppppppcVar33 == (code *******)0x0 && (bVar2 == 0x98)))) {
        return ZEXT816(1);
      }
    }
    else if (((bVar2 & 0xfc) == 0x98) &&
            (((pppppppcVar49 == (code *******)0x4 && (pppppppcVar33 == (code *******)0x0)) &&
             (bVar2 == 0x98)))) {
      auVar96._8_8_ = pcVar21;
      auVar96._0_8_ = 1;
      return auVar96;
    }
    break;
  case 0x28:
    return *param_2;
  case 0x29:
    goto code_r0x0001000afa90;
  case 0x2a:
    return *param_2;
  case 0x2b:
    goto code_r0x0001000afa60;
  case 0x2c:
    return *param_2;
  case 0x2d:
    return *param_2;
  case 0x2e:
    return *param_2;
  case 0x2f:
    return *param_2;
  case 0x30:
    goto code_r0x0001000afa78;
  case 0x31:
    return *param_2;
  case 0x36:
    (*(code *)pppppppcVar49[-1][7])();
    pcVar21 = (char *)((long)unaff_x22 + _DAT_1137ff4d8);
    func_0x0001001021cc();
    pppppppcVar35 = (code *******)&UNK_1103c7000;
    ppuVar29 = (undefined **)unaff_x20;
  case 0xbe:
    unaff_x19[3] = (code ******)unaff_x21;
    unaff_x19[4] = (code ******)(pppppppcVar35 + 0xb4);
    *unaff_x19 = (code ******)unaff_x22;
    auVar169._8_8_ = pcVar21;
    auVar169._0_8_ = ppuVar29;
    return auVar169;
  case 0x37:
  case 0x41:
  case 0x45:
  case 0x49:
  case 0x4d:
  case 0x57:
  case 0x61:
  case 0x8b:
  case 0x95:
  case 0x9f:
  case 0xa9:
  case 0xad:
  case 0xb1:
  case 0xb5:
  case 0xbf:
  case 0xc3:
  case 0xe3:
  case 0xed:
  case 0xf7:
    func_0x000107c606a8();
    auVar103._0_8_ =
         (ulong)ppuVar29 &
         (-1L << ((ulong)(byte)*(code *)(in_stack_00000050 + 4) & 0x3f) ^ 0xffffffffffffffffU);
    auVar103._8_4_ =
         (uint)(*(ulong *)((long)in_stack_00000050 +
                          (auVar103._0_8_ >> 3 & 0xffffffffffffff8) + 0x40) >>
               (auVar103._0_8_ & 0x3f)) & 1;
    auVar103._12_4_ = 0;
    return auVar103;
  case 0x38:
    goto code_r0x0001000bf034;
  case 0x3d:
  case 0x5d:
  case 0x91:
  case 0xa5:
  case 0xe9:
  case 0xfd:
  case 0xfe:
    goto code_r0x0001000af140;
  case 0x3e:
  case 0xa6:
  case 0xc6:
    goto code_r0x0001000af144;
  case 0x40:
  case 0x44:
  case 0x48:
  case 0x4c:
    goto code_r0x0001000ee868;
  case 0x42:
    return *param_2;
  case 0x46:
    while( true ) {
      if (((ulong)unaff_x22 & (ulong)pppppppcVar35) == 0) {
        pppppppcVar38 = (code *******)((ulong)pppppppcVar38 & (ulong)pppppppcVar35);
      }
      else if (unaff_x22 <= pppppppcVar38) {
        uVar36 = 0;
        if (unaff_x22 != (code *******)0x0) {
          uVar36 = (ulong)pppppppcVar38 / (ulong)unaff_x22;
        }
        pppppppcVar38 = (code *******)((long)pppppppcVar38 - uVar36 * (long)unaff_x22);
      }
      if (pppppppcVar38 != unaff_x24) break;
      while( true ) {
        unaff_x20 = (code *******)*unaff_x20;
        if (unaff_x20 == (code *******)0x0) goto code_r0x0001000e9e94;
        pppppppcVar38 = (code *******)unaff_x20[1];
        if (pppppppcVar38 != unaff_x23) break;
        if ((code *******)unaff_x20[2] == unaff_x23) {
          uVar27 = 0;
          goto code_r0x0001000e9fd0;
        }
      }
    }
code_r0x0001000e9e94:
    pppppppcVar38 = unaff_x19 + 2;
    unaff_x20 = (code *******)0x40;
    func_0x000107c60e20();
    in_stack_00000018 = (code *******)0x1;
    *unaff_x20 = (code ******)0x0;
    unaff_x20[1] = (code ******)unaff_x23;
    unaff_x20[2] = (code ******)**unaff_x21;
    unaff_x20[6] = (code ******)0x0;
    unaff_x20[5] = (code ******)0x0;
    unaff_x20[4] = (code ******)0x0;
    unaff_x20[3] = (code ******)0x0;
    *(int *)(unaff_x20 + 7) = 0x3f800000;
    if ((unaff_x22 == (code *******)0x0) ||
       (*(float *)(unaff_x19 + 4) * (float)unaff_x22 < (float)(undefined *)((long)unaff_x19[3] + 1))
       ) {
      in_stack_00000008 = unaff_x20;
      func_0x0001000ea010();
      unaff_x22 = (code *******)unaff_x19[1];
      if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) == 0) {
        unaff_x24 = (code *******)((long)unaff_x22 - 1U & (ulong)unaff_x23);
      }
      else {
        unaff_x24 = unaff_x23;
        if (unaff_x22 <= unaff_x23) {
          uVar36 = 0;
          if (unaff_x22 != (code *******)0x0) {
            uVar36 = (ulong)unaff_x23 / (ulong)unaff_x22;
          }
          unaff_x24 = (code *******)((long)unaff_x23 - uVar36 * (long)unaff_x22);
        }
      }
    }
    pppppppcVar35 = (code *******)*unaff_x19;
    ppppppcVar30 = pppppppcVar35[(long)unaff_x24];
    if (ppppppcVar30 != (code ******)0x0) {
      *unaff_x20 = (code ******)*ppppppcVar30;
      *ppppppcVar30 = (code *****)unaff_x20;
      goto code_r0x0001000e9fc0;
    }
    *unaff_x20 = *pppppppcVar38;
    *pppppppcVar38 = (code ******)unaff_x20;
    pppppppcVar35[(long)unaff_x24] = (code ******)pppppppcVar38;
    if (*unaff_x20 == (code ******)0x0) goto code_r0x0001000e9fc0;
    pppppppcVar38 = (code *******)(*unaff_x20)[1];
    if (((ulong)unaff_x22 & (long)unaff_x22 - 1U) != 0) goto code_r0x0001000e9fa4;
    pppppppcVar38 = (code *******)((ulong)pppppppcVar38 & (long)unaff_x22 - 1U);
    goto code_r0x0001000e9fbc;
  case 0x47:
  case 0x4b:
  case 0x4f:
  case 99:
  case 0x97:
  case 0xaf:
  case 0xb3:
  case 0xb7:
  case 0xc9:
  case 0xef:
    do {
      *(ulong *)((long)unaff_x26 + ((ulong)pppppppcVar38 & 0x1ffffffffffffff8)) =
           1L << ((ulong)pppppppcVar35 & 0x3f) |
           *(ulong *)((long)unaff_x26 + ((ulong)pppppppcVar38 & 0x1ffffffffffffff8));
      unaff_x22[7][(long)pppppppcVar35] = (code *****)unaff_x23;
      unaff_x22[2] = (code ******)((long)unaff_x22[2] + 1);
      if (unaff_x19 == (code *******)0x0) {
        do {
          pppppppcVar49 = (code *******)((long)unaff_x25 + 1);
          if (SCARRY8((long)unaff_x25,1)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1000ecd9c);
            (*pcVar17)();
          }
          if ((long)unaff_x28 <= (long)pppppppcVar49) {
            if (((ulong)in_stack_00000008 & 0x100000000) != 0) {
              uVar36 = 1L << ((ulong)*(byte *)(unaff_x21 + 4) & 0x3f);
              if ((*(byte *)(unaff_x21 + 4) & 0x3f) < 6) {
                *unaff_x24 = (code ******)(-1L << (uVar36 & 0x3f));
              }
              else {
                pcVar21 = (char *)(uVar36 + 0x3f >> 3 & 0xffffffffffffff8);
                func_0x000107c60ee4();
              }
              unaff_x21[2] = (code ******)0x0;
            }
            func_0x000107c61574();
            *in_stack_00000010 = unaff_x22;
            auVar167._8_8_ = pcVar21;
            auVar167._0_8_ = unaff_x21;
            return auVar167;
          }
          ppppppcVar30 = unaff_x24[(long)pppppppcVar49];
          unaff_x25 = (code *******)((long)unaff_x25 + 1);
        } while (ppppppcVar30 == (code ******)0x0);
        uVar36 = ((ulong)ppppppcVar30 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)ppppppcVar30 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        uVar36 = uVar36 >> 0x20 | uVar36 << 0x20;
        unaff_x19 = (code *******)((ulong)((long)ppppppcVar30 + -1) & (ulong)ppppppcVar30);
      }
      else {
        uVar36 = ((ulong)unaff_x19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                 ((ulong)unaff_x19 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        uVar36 = uVar36 >> 0x20 | uVar36 << 0x20;
        unaff_x19 = (code *******)((long)unaff_x19 - 1U & (ulong)unaff_x19);
        pppppppcVar49 = unaff_x25;
      }
      unaff_x23 = (code *******)unaff_x21[7][LZCOUNT(uVar36) | (long)pppppppcVar49 << 6];
      func_0x000107c6068c(&stack0x00000018,unaff_x22[5]);
      uVar25 = 0;
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar42 = (long)unaff_x27 << ((ulong)*(byte *)(unaff_x22 + 4) & 0x3f);
      uVar25 = uVar25 & (uVar42 ^ 0xffffffffffffffff);
      uVar37 = uVar25 >> 6;
      uVar36 = (long)unaff_x27 << (uVar25 & 0x3f) &
               ((ulong)*(code *******)((long)unaff_x26 + uVar37 * 8) ^ 0xffffffffffffffff);
      if (uVar36 == 0) {
        bVar18 = false;
        uVar36 = 0x3f - uVar42 >> 6;
        do {
          uVar25 = uVar37 + 1;
          if ((uVar25 == uVar36) && (bVar18)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1000ecda0);
            (*pcVar17)();
          }
          uVar37 = 0;
          if (uVar25 != uVar36) {
            uVar37 = uVar25;
          }
          bVar18 = (bool)(uVar25 == uVar36 | bVar18);
        } while (*(code *******)((long)unaff_x26 + uVar37 * 8) == (code ******)0xffffffffffffffff);
        uVar36 = ~(ulong)*(code *******)((long)unaff_x26 + uVar37 * 8);
        uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        pppppppcVar35 = (code *******)(LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) | uVar37 << 6);
      }
      else {
        uVar36 = (uVar36 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar36 & 0x5555555555555555) << 1;
        uVar36 = (uVar36 & 0xcccccccccccccccc) >> 2 | (uVar36 & 0x3333333333333333) << 2;
        uVar36 = (uVar36 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar36 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar36 = (uVar36 & 0xff00ff00ff00ff00) >> 8 | (uVar36 & 0xff00ff00ff00ff) << 8;
        uVar36 = (uVar36 & 0xffff0000ffff0000) >> 0x10 | (uVar36 & 0xffff0000ffff) << 0x10;
        pppppppcVar35 =
             (code *******)(LZCOUNT(uVar36 >> 0x20 | uVar36 << 0x20) | uVar25 & 0x7fffffffffffffc0);
      }
      pppppppcVar38 = (code *******)((ulong)pppppppcVar35 >> 3);
      unaff_x25 = pppppppcVar49;
    } while( true );
  case 0x4a:
code_r0x0001000e9fa4:
    if (unaff_x22 <= pppppppcVar38) {
      uVar36 = 0;
      if (unaff_x22 != (code *******)0x0) {
        uVar36 = (ulong)pppppppcVar38 / (ulong)unaff_x22;
      }
      pppppppcVar38 = (code *******)((long)pppppppcVar38 - uVar36 * (long)unaff_x22);
      goto code_r0x0001000e9fb4;
    }
    goto code_r0x0001000e9fbc;
  case 0x4e:
code_r0x0001000e9fb4:
code_r0x0001000e9fbc:
    pppppppcVar35[(long)pppppppcVar38] = (code ******)unaff_x20;
code_r0x0001000e9fc0:
    unaff_x19[3] = (code ******)((long)unaff_x19[3] + 1);
    uVar27 = 1;
code_r0x0001000e9fd0:
    auVar162._8_8_ = uVar27;
    auVar162._0_8_ = unaff_x20;
    return auVar162;
  case 0x54:
    auVar157._8_8_ = (ulong)pcVar21 & 0xffff | 0xee00534d52410000;
    auVar157._0_8_ = 0x2f454c49464f5250;
    return auVar157;
  case 0x55:
  case 0x69:
  case 0x9d:
  case 0xbd:
  case 0xcb:
  case 0xf5:
    unaff_x22[0x13] = (code ******)(ulong)bVar2;
    unaff_x22[0x14] = in_x6;
    *(char *)((long)unaff_x22 + 0x101) = (char)pppppppcVar33;
    unaff_x22[0x11] = ppppppcVar30;
    unaff_x22[0x12] = (code ******)pppppppcVar49;
    *(char *)(unaff_x22 + 0x20) = cVar5;
    ppppppcVar30 = (code ******)0x0;
    func_0x000107c5f7fc();
    unaff_x22[0x15] = ppppppcVar30;
    ppppppcVar30 = (code ******)ppppppcVar30[-1];
    unaff_x22[0x16] = ppppppcVar30;
    ppppppcVar30 = (code ******)((ulong)((long)ppppppcVar30[8] + 0xfU) & 0xfffffffffffffff0);
    func_0x000107c615b8();
    unaff_x22[0x17] = ppppppcVar30;
    ppppppcVar30 = (code ******)0x0;
    func_0x000107c5f824();
    unaff_x22[0x18] = ppppppcVar30;
    ppppppcVar30 = (code ******)ppppppcVar30[-1];
    unaff_x22[0x19] = ppppppcVar30;
    ppppppcVar30 = (code ******)((ulong)((long)ppppppcVar30[8] + 0xfU) & 0xfffffffffffffff0);
    func_0x000107c615b8();
    unaff_x22[0x1a] = ppppppcVar30;
    lVar24 = 0x1130970c0;
    func_0x0001000285a8(0x1130970c0,&UNK_10dd3d170);
    uVar36 = *(long *)(*(long *)(lVar24 + -8) + 0x40) + 0xf;
    ppppppcVar30 = (code ******)(uVar36 & 0xfffffffffffffff0);
    func_0x000107c615b8();
    unaff_x22[0x1b] = ppppppcVar30;
    ppppppcVar30 = (code ******)(uVar36 & 0xfffffffffffffff0);
    func_0x000107c615b8();
    unaff_x22[0x1c] = ppppppcVar30;
    ppppppcVar30 = (code ******)0x0;
    func_0x000107c5f804();
    unaff_x22[0x1d] = ppppppcVar30;
    ppppppcVar30 = (code ******)ppppppcVar30[-1];
    unaff_x22[0x1e] = ppppppcVar30;
    ppppppcVar30 = (code ******)((ulong)((long)ppppppcVar30[8] + 0xfU) & 0xfffffffffffffff0);
    func_0x000107c615b8();
    unaff_x22[0x1f] = ppppppcVar30;
    puVar22 = &UNK_1000b087c;
    uVar27 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_1000b087c,0,0);
    auVar238._8_8_ = uVar27;
    auVar238._0_8_ = puVar22;
    return auVar238;
  case 0x56:
    goto code_r0x0001000ee838;
  case 0x58:
    do {
      if ((bool)in_ZR) {
        *(undefined2 *)((long)unaff_x21 + (long)pppppppcVar52) = 0xe63c;
code_r0x0001000bef5c:
        pppppppcVar52 = (code *******)((long)pppppppcVar52 + 2);
      }
      else {
        if (in_w13 == 0x22) {
          *(short *)((long)unaff_x21 + (long)pppppppcVar52) = (short)pppppppcVar41;
          goto code_r0x0001000bef5c;
        }
        if (in_w13 == 10) {
          *(ushort *)((long)unaff_x21 + (long)pppppppcVar52) = uVar4;
          goto code_r0x0001000bef5c;
        }
        *(char *)((long)unaff_x21 + (long)pppppppcVar52) = (char)in_w13;
        pppppppcVar52 = (code *******)((long)pppppppcVar52 + 1);
      }
      unaff_x23 = (code *******)((long)unaff_x23 + -1);
      if (unaff_x23 == (code *******)0x0) goto code_r0x0001000bef74;
      in_w13 = (uint)*(byte *)in_x12;
      in_ZR = *(byte *)in_x12 == 9;
      in_x12 = (code *******)((long)in_x12 + 1);
    } while( true );
  case 0x60:
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar24 = 0;
    func_0x0001000ee8fc();
    pcVar21 = (char *)(ulong)*(uint *)(lVar24 + 0x30);
    func_0x000107c613fc();
    goto code_r0x0001000ee838;
  case 0x62:
    if ((code *******)pcVar21 == (code *******)0x0) {
      pppppppcVar38 = (code *******)*ppuVar29;
      *ppuVar29 = (undefined *)0x0;
      pppppppcVar49 = (code *******)pcVar21;
      if (pppppppcVar38 != (code *******)0x0) {
        func_0x000107c60e14();
        pppppppcVar49 = (code *******)pcVar21;
      }
      ppuVar29[1] = (undefined *)0x0;
code_r0x0001000ea200:
      auVar163._8_8_ = pppppppcVar49;
      auVar163._0_8_ = pppppppcVar38;
      return auVar163;
    }
    if ((ulong)pcVar21 >> 0x3d == 0) {
      pppppppcVar49 = (code *******)((long)pcVar21 << 3);
      pppppppcVar52 = pppppppcVar49;
      func_0x000107c60e20();
      ppppppcVar30 = (code ******)*ppuVar29;
      *ppuVar29 = (undefined *)pppppppcVar52;
      if (ppppppcVar30 != (code ******)0x0) {
        func_0x000107c60e14();
        pppppppcVar52 = (code *******)*ppuVar29;
      }
      ppuVar29[1] = pcVar21;
      pppppppcVar38 = pppppppcVar52;
      func_0x000107c60ee4(pppppppcVar52,pppppppcVar49);
      ppppppcVar30 = (code ******)ppuVar29[2];
      if (ppppppcVar30 != (code ******)0x0) {
        pppppppcVar35 = (code *******)ppppppcVar30[1];
        uVar36 = (long)pcVar21 - 1;
        if (((ulong)pcVar21 & uVar36) == 0) {
          pppppppcVar35 = (code *******)((ulong)pppppppcVar35 & uVar36);
        }
        else if (pcVar21 <= pppppppcVar35) {
          uVar37 = 0;
          if ((code *******)pcVar21 != (code *******)0x0) {
            uVar37 = (ulong)pppppppcVar35 / (ulong)pcVar21;
          }
          pppppppcVar35 = (code *******)((long)pppppppcVar35 - uVar37 * (long)pcVar21);
        }
        pppppppcVar52[(long)pppppppcVar35] = (code ******)(ppuVar29 + 2);
        ppppppcVar47 = (code ******)*ppppppcVar30;
        while (ppppppcVar47 != (code ******)0x0) {
          pppppppcVar41 = (code *******)ppppppcVar47[1];
          if (((ulong)pcVar21 & uVar36) == 0) {
            pppppppcVar41 = (code *******)((ulong)pppppppcVar41 & uVar36);
          }
          else if (pcVar21 <= pppppppcVar41) {
            uVar37 = 0;
            if ((code *******)pcVar21 != (code *******)0x0) {
              uVar37 = (ulong)pppppppcVar41 / (ulong)pcVar21;
            }
            pppppppcVar41 = (code *******)((long)pppppppcVar41 - uVar37 * (long)pcVar21);
          }
          ppppppcVar51 = ppppppcVar47;
          if (pppppppcVar41 != pppppppcVar35) {
            if (pppppppcVar52[(long)pppppppcVar41] == (code ******)0x0) {
              pppppppcVar52[(long)pppppppcVar41] = ppppppcVar30;
              pppppppcVar35 = pppppppcVar41;
            }
            else {
              *ppppppcVar30 = *ppppppcVar47;
              *ppppppcVar47 = *pppppppcVar52[(long)pppppppcVar41];
              *pppppppcVar52[(long)pppppppcVar41] = (code *****)ppppppcVar47;
              ppppppcVar51 = ppppppcVar30;
            }
          }
          ppppppcVar30 = ppppppcVar51;
          ppppppcVar47 = (code ******)*ppppppcVar51;
        }
      }
      goto code_r0x0001000ea200;
    }
    FUN_104bd35f4();
    pppppppcVar38 = (code *******)ppuVar29;
    if ((*(byte *)((long)ppuVar29 + 0x1b) & 1) != 0) goto code_r0x0001000ea8a4;
    switch(*(int *)(ppuVar29 + 1)) {
    case 0:
      func_0x000107c60c5c(pcVar21,"NOT (",5);
      ppppppcVar47 = (code ******)ppuVar29[7];
      goto code_r0x0001000ea874;
    case 1:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      pcVar50 = ") ISNULL";
      pppppppcVar38 = (code *******)0x8;
      goto code_r0x0001000ea894;
    case 2:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      pcVar50 = ") IS NOT NULL";
      pppppppcVar38 = (code *******)0xd;
      goto code_r0x0001000ea894;
    case 3:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") % (",5);
      break;
    case 4:
      pppppppcVar38 = (code *******)ppuVar29[7];
      pppppppcVar49 = (code *******)ppuVar29[8];
      if ((*(byte *)((long)pppppppcVar38 + 0x1b) & 1) != 0) {
        if ((*(byte *)((long)pppppppcVar49 + 0x1b) & 1) == 0) {
          UNRECOVERED_JUMPTABLE = (*pppppppcVar49)[2];
          pppppppcVar38 = pppppppcVar49;
          goto code_r0x0001000ea808;
        }
        goto code_r0x0001000ea8a4;
      }
      if ((*(byte *)((long)pppppppcVar49 + 0x1b) & 1) != 0) {
        UNRECOVERED_JUMPTABLE = (*pppppppcVar38)[2];
code_r0x0001000ea808:
                    /* WARNING: Could not recover jumptable at 0x0001000ea82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)(pppppppcVar38,pcVar21,ppppppcVar30);
        auVar164._8_8_ = pcVar21;
        auVar164._0_8_ = pppppppcVar38;
        return auVar164;
      }
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") AND (",7);
      break;
    case 5:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") OR (",6);
      break;
    case 6:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") < (",5);
      break;
    case 7:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") <= (",6);
      break;
    case 8:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") > (",5);
      break;
    case 9:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") >= (",6);
      break;
    case 10:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") = (",5);
      break;
    case 0xb:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") != (",6);
      break;
    case 0xc:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") IN (",6);
      if (ppuVar29[10] != ppuVar29[9]) {
        uVar36 = 0;
        pppppppcVar38 = (code *******)0x1;
        pcVar50 = &DAT_10f684600;
        do {
          *(int *)ppppppcVar30 = *(int *)ppppppcVar30 + 1;
          func_0x000107c60ddc(apppppppcStack_98);
          pcVar1 = "?";
          if (uVar36 != 0) {
            pcVar1 = ",?";
          }
          uVar27 = 1;
          if (uVar36 != 0) {
            uVar27 = 2;
          }
          pppppppcVar49 = (code *******)apppppppcStack_98;
          func_0x000107c60c70(pppppppcVar49,0,pcVar1,uVar27);
          ppppppcStack_78 = pppppppcVar49[1];
          pppppppcStack_80 = (code *******)*pppppppcVar49;
          ppppppcStack_70 = pppppppcVar49[2];
          pppppppcVar49[1] = (code ******)0x0;
          pppppppcVar49[2] = (code ******)0x0;
          *pppppppcVar49 = (code ******)0x0;
          ppppppcVar47 = ppppppcStack_78;
          pppppppcVar49 = pppppppcStack_80;
          if (-1 < (long)ppppppcStack_70) {
            ppppppcVar47 = (code ******)((ulong)ppppppcStack_70 >> 0x38);
            pppppppcVar49 = (code *******)&pppppppcStack_80;
          }
          func_0x000107c60c5c(pcVar21,pppppppcVar49,ppppppcVar47);
          if ((long)ppppppcStack_70 < 0) {
            func_0x000107c60e14(pppppppcStack_80);
          }
          if (cStack_81 < '\0') {
            func_0x000107c60e14(apppppppcStack_98[0]);
          }
          uVar36 = uVar36 + 1;
        } while (uVar36 < (ulong)((long)ppuVar29[10] - (long)ppuVar29[9] >> 3));
        goto code_r0x0001000ea894;
      }
      goto code_r0x0001000ea888;
    case 0xd:
      func_0x000107c60c5c(pcVar21,&DAT_10f68e8ec,1);
      (*(code *)(*(code ******)ppuVar29[7])[2])(ppuVar29[7],pcVar21,ppppppcVar30);
      func_0x000107c60c5c(pcVar21,") NOT IN (",10);
      if (ppuVar29[10] == ppuVar29[9]) goto code_r0x0001000ea888;
      uVar36 = 0;
      pppppppcVar38 = (code *******)0x1;
      pcVar50 = &DAT_10f684600;
      do {
        *(int *)ppppppcVar30 = *(int *)ppppppcVar30 + 1;
        func_0x000107c60ddc(apppppppcStack_98);
        pcVar1 = "?";
        if (uVar36 != 0) {
          pcVar1 = ",?";
        }
        uVar27 = 1;
        if (uVar36 != 0) {
          uVar27 = 2;
        }
        pppppppcVar49 = (code *******)apppppppcStack_98;
        func_0x000107c60c70(pppppppcVar49,0,pcVar1,uVar27);
        ppppppcStack_78 = pppppppcVar49[1];
        pppppppcStack_80 = (code *******)*pppppppcVar49;
        ppppppcStack_70 = pppppppcVar49[2];
        pppppppcVar49[1] = (code ******)0x0;
        pppppppcVar49[2] = (code ******)0x0;
        *pppppppcVar49 = (code ******)0x0;
        ppppppcVar47 = ppppppcStack_78;
        pppppppcVar49 = pppppppcStack_80;
        if (-1 < (long)ppppppcStack_70) {
          ppppppcVar47 = (code ******)((ulong)ppppppcStack_70 >> 0x38);
          pppppppcVar49 = (code *******)&pppppppcStack_80;
        }
        func_0x000107c60c5c(pcVar21,pppppppcVar49,ppppppcVar47);
        if ((long)ppppppcStack_70 < 0) {
          func_0x000107c60e14(pppppppcStack_80);
        }
        if (cStack_81 < '\0') {
          func_0x000107c60e14(apppppppcStack_98[0]);
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < (ulong)((long)ppuVar29[10] - (long)ppuVar29[9] >> 3));
      goto code_r0x0001000ea894;
    case 0xe:
      pcVar50 = ppuVar29[2];
      pppppppcVar38 = (code *******)pcVar50;
      func_0x000107c613d0(pcVar50);
      goto code_r0x0001000ea894;
    case 0xf:
      *(int *)ppppppcVar30 = *(int *)ppppppcVar30 + 1;
      func_0x000107c60ddc(apppppppcStack_98);
      pppppppcVar38 = (code *******)apppppppcStack_98;
      func_0x000107c60c70(pppppppcVar38,0,"?",1);
      ppppppcStack_78 = pppppppcVar38[1];
      pppppppcStack_80 = (code *******)*pppppppcVar38;
      ppppppcStack_70 = pppppppcVar38[2];
      pppppppcVar38[1] = (code ******)0x0;
      pppppppcVar38[2] = (code ******)0x0;
      *pppppppcVar38 = (code ******)0x0;
      ppppppcVar30 = ppppppcStack_78;
      pppppppcVar49 = pppppppcStack_80;
      if (-1 < (long)ppppppcStack_70) {
        ppppppcVar30 = (code ******)((ulong)ppppppcStack_70 >> 0x38);
        pppppppcVar49 = (code *******)&pppppppcStack_80;
      }
      func_0x000107c60c5c(pcVar21,pppppppcVar49,ppppppcVar30);
      if ((long)ppppppcStack_70 < 0) {
        pcVar21 = (char *)pppppppcStack_80;
        func_0x000107c60e14(pppppppcStack_80);
      }
      pppppppcVar38 = (code *******)pcVar21;
      pcVar21 = (char *)pppppppcVar49;
      if (cStack_81 < '\0') {
        func_0x000107c60e14(apppppppcStack_98[0]);
        pppppppcVar38 = apppppppcStack_98[0];
        pcVar21 = (char *)pppppppcVar49;
      }
    default:
      goto code_r0x0001000ea8a4;
    }
    ppppppcVar47 = (code ******)ppuVar29[8];
code_r0x0001000ea874:
    (*(code *)(*ppppppcVar47)[2])(ppppppcVar47,pcVar21,ppppppcVar30);
code_r0x0001000ea888:
    pcVar50 = &DAT_10f684600;
    pppppppcVar38 = (code *******)0x1;
code_r0x0001000ea894:
    func_0x000107c60c5c(pcVar21,pcVar50,pppppppcVar38);
    pppppppcVar38 = (code *******)pcVar21;
    pcVar21 = pcVar50;
code_r0x0001000ea8a4:
    auVar165._8_8_ = pcVar21;
    auVar165._0_8_ = pppppppcVar38;
    return auVar165;
  case 0x68:
    auVar160._8_8_ = 0x800000010f2147d0;
    auVar160._0_8_ = 0xd000000000000013;
    return auVar160;
  case 0x6c:
  case 0x7a:
  case 0xd2:
    do {
      pppppppcVar49 = pppppppcVar43;
      if (!(bool)in_CY || (bool)in_ZR) {
        pppppppcVar49 = pppppppcVar41;
      }
      if ((code *******)0xffffffffffffff88 < pppppppcVar49) goto code_r0x0001000cc174;
      unaff_x27 = (code *******)((long)unaff_x27 + (long)pppppppcVar49);
      unaff_x25 = (code *******)((long)unaff_x25 - (long)pppppppcVar49);
      if (unaff_x25 < pppppppcVar38) {
code_r0x0001000cc164:
        pppppppcVar49 = (code *******)0xffffffffffffffb8;
        if (unaff_x25 == (code *******)0x0) {
          pppppppcVar49 = (code *******)((long)in_x12 - (long)unaff_x26);
        }
        goto code_r0x0001000cc174;
      }
      while (uVar39 = (uint)unaff_x22, (uint)unaff_x28 != *(uint *)unaff_x27 >> 4) {
        in_stack_00000068 = in_x12;
        if (unaff_x20 == (code *******)0x0) {
          pppppppcVar38 = (code *******)0x0;
          unaff_x28 = (code *******)0x5;
          ppppppcVar30 = (code ******)0x5;
          if ((int)pppppppcVar35 != 0) {
            ppppppcVar30 = (code ******)0x1;
          }
          unaff_x24[0xe0d] = ppppppcVar30;
          unaff_x24[0xe13] = (code ******)0x0;
          in_stack_00000048[1] = 0;
          *in_stack_00000048 = 0;
          in_stack_00000048[3] = 0;
          in_stack_00000048[2] = 0;
          *(int *)(unaff_x24 + 0x507) = 0xc00000c;
          unaff_x19[0x15] = (code ******)0x0;
          *(int *)((long)unaff_x19 + 0xa4) = 0;
          *(int *)(unaff_x19 + 0x2d) = 0;
          *in_stack_00000038 = 0x400000001;
          *(undefined4 *)(in_stack_00000038 + 1) = 8;
          *unaff_x24 = in_stack_00000050;
          unaff_x24[1] = in_stack_00000030;
          unaff_x24[2] = in_stack_00000028;
          unaff_x24[3] = in_stack_00000040;
          pppppppcVar49 = (code *******)pcVar21;
          if (in_stack_00000020._4_4_ != 0) {
            if (unaff_x23 < (code *******)0x8) {
code_r0x0001000cc344:
              ppppppcVar30 = (code ******)0x0;
              ppppppcVar47 = (code ******)0x0;
              pppppppcVar38 = unaff_x21;
            }
            else {
              in_ZR = *(int *)unaff_x21 == -0x13cf5bc9;
code_r0x0001000cc308:
              uVar39 = (uint)unaff_x22;
              if (!(bool)in_ZR) goto code_r0x0001000cc344;
              *(int *)(unaff_x19 + 0x2d) = *(int *)((long)unaff_x21 + 4);
              ppppppcVar51 = in_stack_00000050;
              pcVar21 = (char *)unaff_x21;
              func_0x000107c2ae74();
              if ((code ******)0xffffffffffffff88 < ppppppcVar51) {
                pppppppcVar49 = (code *******)0xffffffffffffffe2;
                goto code_r0x0001000cc174;
              }
              unaff_x24[0xe15] = unaff_d8;
              ppppppcVar47 = unaff_x24[0xe09];
              ppppppcVar30 = unaff_x24[0xe0a];
              pppppppcVar38 = (code *******)((long)unaff_x21 + (long)ppppppcVar51);
              in_x12 = in_stack_00000068;
            }
            unaff_x24[0xe0c] = ppppppcVar47;
            unaff_x24[0xe0b] =
                 (code ******)((long)pppppppcVar38 + ((long)ppppppcVar30 - (long)ppppppcVar47));
            unaff_x24[0xe0a] = (code ******)pppppppcVar38;
            unaff_x24[0xe09] = (code ******)in_stack_00000018;
            pppppppcVar49 = (code *******)pcVar21;
            pppppppcVar38 = in_stack_00000018;
          }
        }
        else {
          pppppppcVar49 = unaff_x20;
          func_0x000107c2ae78();
          pppppppcVar38 = (code *******)unaff_x24[0xe09];
          in_x12 = in_stack_00000068;
          unaff_x28 = (code *******)0x5;
        }
        pcVar21 = (char *)unaff_x28;
        ppppppcVar30 = in_stack_00000060;
        if (pppppppcVar38 != in_x12) {
          unaff_x24[0xe0c] = (code ******)pppppppcVar38;
          unaff_x24[0xe0b] =
               (code ******)((long)in_x12 + ((long)unaff_x24[0xe0a] - (long)pppppppcVar38));
          unaff_x24[0xe0a] = (code ******)in_x12;
          unaff_x24[0xe09] = (code ******)in_x12;
        }
        pppppppcVar38 = (code *******)0x9;
        if (*(int *)(unaff_x19 + 0x22) != 0) {
          pppppppcVar38 = (code *******)pcVar21;
        }
        if (unaff_x25 < pppppppcVar38) {
code_r0x0001000cc5e0:
          pcVar21 = (char *)pppppppcVar49;
          pppppppcVar52 = (code *******)0xffffffffffffffb8;
code_r0x0001000cc5e4:
          pppppppcVar49 = (code *******)0xffffffffffffffb8;
          if ((uVar39 & pppppppcVar52 == (code *******)0xfffffffffffffff6) == 0) {
            pppppppcVar49 = pppppppcVar52;
          }
          goto code_r0x0001000cc174;
        }
        if (*(int *)(unaff_x19 + 0x22) != 0) {
          pcVar21 = (char *)0x1;
        }
        pppppppcVar38 = unaff_x27;
        in_stack_00000008 = unaff_x23;
        func_0x0001000cb23c(unaff_x27,pcVar21);
        pppppppcVar52 = pppppppcVar38;
        if ((code *******)0xffffffffffffff88 < pppppppcVar38) goto code_r0x0001000cc5e4;
        pppppppcVar49 = (code *******)pcVar21;
        if (unaff_x25 < (code *******)((long)pppppppcVar38 + 3)) goto code_r0x0001000cc5e0;
        pppppppcVar52 = unaff_x24;
        pcVar21 = (char *)unaff_x27;
        func_0x0001000cc630();
        if ((code *******)0xffffffffffffff88 < pppppppcVar52) goto code_r0x0001000cc5e4;
        in_stack_00000058 = (long)in_stack_00000068 + (long)ppppppcVar30;
        pppppppcVar35 = (code *******)((long)unaff_x27 + (long)pppppppcVar38);
        unaff_x25 = (code *******)((long)unaff_x25 - (long)pppppppcVar38);
        pppppppcVar38 = in_stack_00000068;
        in_stack_00000000 = (code *******)unaff_x26;
        do {
          pppppppcVar41 = (code *******)((long)unaff_x25 + -3);
          pppppppcVar49 = (code *******)pcVar21;
          if (unaff_x25 < (code *******)0x3) goto code_r0x0001000cc5e0;
          uVar4 = *(ushort *)pppppppcVar35;
          pppppppcVar52 = (code *******)(ulong)(*(uint3 *)pppppppcVar35 >> 3);
          pppppppcVar33 = (code *******)((ulong)(uVar4 >> 1) & 3);
          iVar40 = (int)pppppppcVar33;
          if ((iVar40 != 1) && (pppppppcVar33 = pppppppcVar52, iVar40 == 3))
          goto code_r0x0001000cc600;
          unaff_x25 = (code *******)((long)pppppppcVar41 - (long)pppppppcVar33);
          if (pppppppcVar41 < pppppppcVar33) goto code_r0x0001000cc5e0;
          pppppppcVar49 = (code *******)((long)pppppppcVar35 + 3);
          if (iVar40 == 2) {
            pppppppcVar52 = unaff_x24;
            pcVar21 = (char *)pppppppcVar38;
            func_0x0001000cc8d0();
            if ((code *******)0xffffffffffffff88 < pppppppcVar52) goto code_r0x0001000cc5e4;
          }
          else if (iVar40 == 1) {
            if (pppppppcVar38 == (code *******)0x0) {
              if (7 < *(uint3 *)pppppppcVar35) {
code_r0x0001000cc610:
                pppppppcVar52 = (code *******)0xffffffffffffffb6;
                goto code_r0x0001000cc5e4;
              }
code_r0x0001000cc504:
              pppppppcVar52 = (code *******)0x0;
            }
            else {
              if ((code *******)(in_stack_00000058 - (long)pppppppcVar38) < pppppppcVar52) {
code_r0x0001000cc608:
                pppppppcVar52 = (code *******)0xffffffffffffffba;
                goto code_r0x0001000cc5e4;
              }
              pcVar21 = (char *)(ulong)*(byte *)pppppppcVar49;
              func_0x000107c610bc(pppppppcVar38,pcVar21,pppppppcVar52);
            }
          }
          else {
            if (pppppppcVar38 == (code *******)0x0) {
              if (pppppppcVar33 != (code *******)0x0) goto code_r0x0001000cc610;
              goto code_r0x0001000cc504;
            }
            if ((code *******)(in_stack_00000058 - (long)pppppppcVar38) < pppppppcVar33)
            goto code_r0x0001000cc608;
            pcVar21 = (char *)pppppppcVar49;
            func_0x000107c610b4(pppppppcVar38,pppppppcVar49,pppppppcVar33);
            pppppppcVar52 = pppppppcVar33;
          }
          if (*(int *)(unaff_x19 + 0x12) != 0) {
            pcVar21 = (char *)pppppppcVar38;
            func_0x0001000d2df8(unaff_x24 + 0xe16,pppppppcVar38,pppppppcVar52);
          }
          pppppppcVar38 = (code *******)((long)pppppppcVar38 + (long)pppppppcVar52);
          pppppppcVar35 = (code *******)((long)pppppppcVar49 + (long)pppppppcVar33);
          unaff_x28 = (code *******)0x184d2a5;
        } while ((uVar4 & 1) == 0);
        pppppppcVar52 = (code *******)((long)pppppppcVar38 - (long)in_stack_00000068);
        if (((code *******)unaff_x24[0xe0e] != (code *******)0xffffffffffffffff) &&
           (pppppppcVar52 != (code *******)unaff_x24[0xe0e])) {
code_r0x0001000cc600:
          pppppppcVar52 = (code *******)0xffffffffffffffec;
          goto code_r0x0001000cc5e4;
        }
        unaff_x27 = pppppppcVar35;
        if (*(int *)(unaff_x19 + 0x12) != 0) {
          iVar40 = (int)unaff_x24 + 0x70b0;
          func_0x0001000db3c0();
          bVar18 = unaff_x25 < (code *******)0x4;
          unaff_x25 = (code *******)((long)unaff_x25 + -4);
          if ((bVar18) ||
             (unaff_x27 = (code *******)((long)pppppppcVar35 + 4), *(int *)pppppppcVar35 != iVar40))
          {
            pppppppcVar52 = (code *******)0xffffffffffffffea;
            goto code_r0x0001000cc5e4;
          }
        }
        pppppppcVar43 = (code *******)0xffffffffffffffb8;
        if ((code *******)0xffffffffffffff88 < pppppppcVar52) goto code_r0x0001000cc5e4;
        in_x12 = (code *******)((long)in_stack_00000068 + (long)pppppppcVar52);
        in_stack_00000060 = (code ******)((long)in_stack_00000060 - (long)pppppppcVar52);
        pppppppcVar35 = (code *******)(ulong)*(uint *)(unaff_x19 + 0x22);
        pppppppcVar38 = (code *******)0x5;
        if (*(uint *)(unaff_x19 + 0x22) != 0) {
          pppppppcVar38 = (code *******)0x1;
        }
        unaff_x22 = (code *******)0x1;
        unaff_x23 = in_stack_00000008;
        unaff_x26 = (char *)in_stack_00000000;
        if (unaff_x25 < pppppppcVar38) goto code_r0x0001000cc164;
      }
      if (unaff_x25 < (code *******)0x8) {
        pppppppcVar49 = (code *******)0xffffffffffffffb8;
        goto code_r0x0001000cc174;
      }
      if (0xfffffff7 < *(uint *)((long)unaff_x27 + 4)) {
        pppppppcVar49 = (code *******)0xfffffffffffffff2;
code_r0x0001000cc174:
        auVar155._8_8_ = pcVar21;
        auVar155._0_8_ = pppppppcVar49;
        return auVar155;
      }
      pppppppcVar41 = (code *******)((ulong)*(uint *)((long)unaff_x27 + 4) + 8);
      in_CY = unaff_x25 <= pppppppcVar41;
      in_ZR = pppppppcVar41 == unaff_x25;
    } while( true );
  case 0x6d:
  case 0x7b:
  case 0xd3:
code_r0x0001000cbb04:
    goto code_r0x0001000cbb68;
  case 0x6e:
  case 0x7c:
  case 0xd4:
    func_0x0001000c7980();
    auVar145._8_8_ = pcVar21;
    auVar145._0_8_ = ppuVar29;
    return auVar145;
  case 0x6f:
  case 0x7d:
  case 0xd5:
    goto code_r0x0001000cc308;
  case 0x70:
  case 0x7e:
  case 0xd6:
    if (uVar19 == *(uint *)pppppppcVar35[0xef]) {
      (*(code *)unaff_x22[0xc])();
      ppppppcVar30 = (code ******)((long)*unaff_x20 * 1000000);
      if (SUB168(SEXT816((long)*unaff_x20) * SEXT816(1000000),8) != (long)ppppppcVar30 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1000c8308);
        (*pcVar17)();
      }
    }
    else {
      if (uVar19 != *(uint *)PTR___s8Dispatch0A12TimeIntervalO12microsecondsyACSicACmFWC_11034f770)
      {
        if (uVar19 == *(uint *)PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_11034f768)
        {
          (*(code *)unaff_x22[0xc])();
          uVar27 = 0;
          ppppppcVar30 = *unaff_x20;
        }
        else if (uVar19 == *(uint *)PTR___s8Dispatch0A12TimeIntervalO5neveryA2CmFWC_11034f780) {
          uVar27 = 0;
          ppppppcVar30 = (code ******)0x7fffffffffffffff;
        }
        else {
          (*(code *)unaff_x22[1])();
          ppppppcVar30 = (code ******)0x0;
          uVar27 = 1;
        }
        goto code_r0x0001000c8348;
      }
      (*(code *)unaff_x22[0xc])();
      ppppppcVar30 = (code ******)((long)*unaff_x20 * 1000);
      if (SUB168(SEXT816((long)*unaff_x20) * SEXT816(1000),8) != (long)ppppppcVar30 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1000c83cc);
        (*pcVar17)();
      }
    }
    uVar27 = 0;
code_r0x0001000c8348:
    auVar147._8_8_ = uVar27;
    auVar147._0_8_ = ppppppcVar30;
    return auVar147;
  case 0x71:
  case 0x7f:
    func_0x000107c61428((long)unaff_x21 + _DAT_11305f908,unaff_x29 + -0x68,0,0);
    ppppppcVar30 = unaff_x28[7];
    *(code *******)(unaff_x29 + -0x98) = ppppppcVar30;
    (*(code *)ppppppcVar30)();
    iVar40 = *(int *)(unaff_x20 + 6);
    func_0x0001000c78e8((long)unaff_x21 + lVar24);
    func_0x0001000c78e8();
    ppppppcVar30 = unaff_x28[6];
    pppppppcVar38 = unaff_x24;
    (*(code *)ppppppcVar30)();
    if ((int)pppppppcVar38 == 1) {
      func_0x0001000c7938();
      lVar53 = (long)unaff_x24 + (long)iVar40;
      (*(code *)ppppppcVar30)(lVar53,1);
      if ((int)lVar53 != 1) {
code_r0x0001000c7790:
        lVar53 = 0x112d68090;
        func_0x0001000c7938();
        goto code_r0x0001000c789c;
      }
      func_0x0001000c7938();
    }
    else {
      func_0x0001000c78e8();
      lVar53 = (long)unaff_x24 + (long)iVar40;
      (*(code *)ppppppcVar30)(lVar53,1);
      if ((int)lVar53 == 1) {
        func_0x0001000c7938();
        (*(code *)unaff_x28[1])();
        goto code_r0x0001000c7790;
      }
      (*(code *)unaff_x28[4])();
      func_0x000101207ba8();
      func_0x000107c5fab8();
      ppppppcVar30 = unaff_x28[1];
      (*(code *)ppppppcVar30)();
      lVar53 = 0x112d3bc20;
      func_0x0001000c7938();
      (*(code *)ppppppcVar30)();
      func_0x0001000c7938();
      if (((ulong)unaff_x26 & 1) == 0) goto code_r0x0001000c789c;
    }
    ppppppcVar30 = unaff_x21[0xd];
    ppppppcVar47 = unaff_x21[0xe];
    func_0x0001000a8868(unaff_x21 + 10,ppppppcVar30);
    uVar27 = *(undefined8 *)(unaff_x29 + -0x90);
    (*(code *)ppppppcVar47[1])(uVar27,ppppppcVar30,ppppppcVar47);
    (**(code **)(unaff_x29 + -0x98))(uVar27,0,1);
    func_0x000107c61428((long)unaff_x21 + lVar24,unaff_x29 + -0x80,0x21,0);
    lVar53 = (long)unaff_x21 + lVar24;
    func_0x0001000c90cc(uVar27,lVar53);
    func_0x000107c614a8(unaff_x29 + -0x80);
code_r0x0001000c789c:
    func_0x0001000c2ae4(0);
    func_0x0001000c911c();
    ppppppcVar30 = unaff_x21[0xf];
    func_0x000107c5982c(ppppppcVar30);
    auVar143._8_8_ = lVar53;
    auVar143._0_8_ = ppppppcVar30;
    return auVar143;
  case 0x72:
  case 0x80:
    ppppppcVar51 = unaff_x20[2];
    uVar27 = 0;
    func_0x0001000c9eec(0,(*unaff_x20)[0x15]);
    func_0x0001000b693c(pcVar21,ppppppcVar30);
    ppppppcVar30 = unaff_x20[3];
    ppppppcVar47 = unaff_x20[4];
    func_0x000107c6157c(ppppppcVar47);
    func_0x0001000ca0d4(pcVar21,ppppppcVar30,ppppppcVar47);
    ppppcVar46 = (*ppppppcVar51)[0xb];
    puVar22 = &DAT_10dd3b4a8;
    in_stack_00000008 = (code *******)pcVar21;
    func_0x000107c61520(&DAT_10dd3b4a8,uVar27);
    puVar44 = &stack0x00000008;
    (*(code *)ppppcVar46)(puVar44,uVar27,puVar22);
    func_0x000107c61574(pcVar21);
    auVar150._8_8_ = uVar27;
    auVar150._0_8_ = puVar44;
    return auVar150;
  case 0x81:
    (*(code *)pppppppcVar35)();
    ppppppcVar30 = unaff_x27[1];
    (*(code *)ppppppcVar30)();
    func_0x0001000c7b50();
    (*(code *)ppppppcVar30)();
    auVar144._8_8_ = unaff_x23;
    auVar144._0_8_ = unaff_x25;
    return auVar144;
  case 0x82:
    lVar24 = (long)&UNK_10dd3e63c - (long)in_x12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar39 = (uint)pcVar21;
    lVar54 = lVar24 - extraout_x12;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar53 = lVar54 - extraout_x12_00;
    *(code ********)(unaff_x29 + -0x60) = unaff_x20;
    *(code ********)(unaff_x29 + -0x70) = unaff_x25;
    func_0x000107c5f838();
    func_0x0001000c8210();
    bVar18 = (uVar39 & 0xff) != 1;
    if (bVar18 && 0 < (long)unaff_x20) {
      (*(code *)unaff_x21[4])(lVar53);
    }
    else {
      (*(code *)unaff_x21[1])();
    }
    ppppppcVar30 = unaff_x21[7];
    (*(code *)ppppppcVar30)(lVar53,!bVar18 || 0 >= (long)unaff_x20,1);
    (*(code *)ppppppcVar30)(lVar54,1,1);
    lVar48 = (long)*(int *)(unaff_x19 + 6);
    func_0x0001000c83cc(lVar53);
    func_0x0001000c83cc(lVar54,(long)unaff_x24 + lVar48,0x113060240,&UNK_10dcd57d8);
    ppppppcVar30 = unaff_x21[6];
    pppppppcVar38 = unaff_x24;
    (*(code *)ppppppcVar30)();
    if ((int)pppppppcVar38 == 1) {
      func_0x0001000c8414(lVar54,0x113060240,&UNK_10dcd57d8);
      func_0x0001000c8414(lVar53,0x113060240,&UNK_10dcd57d8);
      lVar48 = (long)unaff_x24 + lVar48;
      (*(code *)ppppppcVar30)(lVar48,1);
      if ((int)lVar48 == 1) {
        func_0x0001000c8414();
        puVar44 = *(undefined8 **)(unaff_x29 + -0x68);
code_r0x0001000c81a4:
        *puVar44 = 10000000000;
        (*(code *)unaff_x21[0xd])
                  (puVar44,*(undefined4 *)
                            PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_11034f768);
        func_0x000107c5f834(*(undefined8 *)(unaff_x29 + -0x58),puVar44);
        (*(code *)unaff_x21[1])(puVar44);
        goto code_r0x0001000c81f0;
      }
code_r0x0001000c80b8:
      func_0x0001000c8414();
    }
    else {
      func_0x0001000c83cc();
      lVar23 = (long)unaff_x24 + lVar48;
      (*(code *)ppppppcVar30)(lVar23,1);
      if ((int)lVar23 == 1) {
        func_0x0001000c8414(lVar54,0x113060240,&UNK_10dcd57d8);
        func_0x0001000c8414(lVar53,0x113060240,&UNK_10dcd57d8);
        (*(code *)unaff_x21[1])(lVar24);
        goto code_r0x0001000c80b8;
      }
      puVar44 = *(undefined8 **)(unaff_x29 + -0x68);
      (*(code *)unaff_x21[4])(puVar44,(long)unaff_x24 + lVar48);
      func_0x0001040b8600(0x113060250,PTR___s8Dispatch0A12TimeIntervalOMa_11034f790,
                          PTR___s8Dispatch0A12TimeIntervalOSQAAMc_11034f7a0);
      lVar48 = lVar24;
      func_0x000107c5fab8(lVar24,puVar44);
      *(int *)(unaff_x29 + -0x74) = (int)lVar48;
      ppppppcVar30 = unaff_x21[1];
      (*(code *)ppppppcVar30)(puVar44);
      func_0x0001000c8414(lVar54,0x113060240,&UNK_10dcd57d8);
      func_0x0001000c8414(lVar53,0x113060240,&UNK_10dcd57d8);
      (*(code *)ppppppcVar30)(lVar24);
      func_0x0001000c8414();
      if ((*(uint *)(unaff_x29 + -0x74) & 1) != 0) goto code_r0x0001000c81a4;
    }
    lVar24 = 0;
    func_0x000107c5f83c();
    unaff_x23 = *(code ********)(unaff_x29 + -0x60);
    puVar44 = *(undefined8 **)(unaff_x29 + -0x58);
    (**(code **)(*(long *)(lVar24 + -8) + 0x10))(puVar44,unaff_x23,lVar24);
code_r0x0001000c81f0:
    auVar146._8_8_ = unaff_x23;
    auVar146._0_8_ = puVar44;
    return auVar146;
  case 0x83:
    func_0x000107c613fc(ppuVar29,pcVar21,(ulong)pppppppcVar35 | 7);
    ppuVar29[2] = (undefined *)0x0;
    ppuVar29[3] = (undefined *)0x0;
    (*(code *)unaff_x22[4])((long)ppuVar29 + (long)unaff_x23);
    uVar27 = *(undefined8 *)(unaff_x29 + -0xa8);
    uVar28 = *(undefined8 *)(unaff_x29 + -0xa0);
    *(undefined8 *)((long)ppuVar29 + (long)unaff_x24) = uVar28;
    (*(code *)unaff_x21[4])
              ((long)ppuVar29 + (long)unaff_x19,uVar27,*(undefined8 *)(unaff_x29 + -0x68));
    (*(code *)*(code *******)((long)unaff_x26 + 0x20))
              ((long)ppuVar29 + (long)unaff_x28,*(undefined8 *)(unaff_x29 + -0x60),
               *(undefined8 *)(unaff_x29 + -0x58));
    *(undefined8 *)((long)ppuVar29 + (long)unaff_x25) = *(undefined8 *)(unaff_x29 + -0x70);
    func_0x000107c6157c(uVar28);
    uVar27 = 0;
    uVar28 = 0;
    func_0x0001000abba4(0,0,*(undefined8 *)(unaff_x29 + -0x98),&UNK_10dcd57c8,ppuVar29);
    auVar148._8_8_ = uVar28;
    auVar148._0_8_ = uVar27;
    return auVar148;
  case 0x84:
    if ((uVar31 == 1) || (*(uint *)unaff_x21 == 0xfd2fb528)) {
      pppppppcVar38 = unaff_x21;
      pcVar21 = (char *)unaff_x22;
      func_0x0001000cb23c();
      if (pppppppcVar38 <= unaff_x22) {
        *(int *)(unaff_x19 + 3) = (int)pppppppcVar38;
        bVar2 = ((byte *)((long)unaff_x21 + (long)unaff_x20))[-1];
        if ((bVar2 >> 3 & 1) == 0) {
          if ((bVar2 >> 5 & 1) == 0) {
            bVar3 = *(byte *)((long)unaff_x21 + (long)unaff_x20);
            if (0xaf < (ulong)bVar3) {
              pppppppcVar38 = (code *******)0xfffffffffffffff0;
              goto code_r0x0001000cb46c;
            }
            unaff_x20 = (code *******)((long)unaff_x20 + 1);
            uVar36 = 1L << (ulong)(bVar3 >> 3) + 10;
            ppppppcVar30 = (code ******)(uVar36 + (uVar36 >> 3) * ((ulong)bVar3 & 7));
          }
          else {
            ppppppcVar30 = (code ******)0x0;
          }
          uVar39 = bVar2 & 3;
          bVar3 = bVar2 >> 6;
          if (uVar39 == 1 || (bVar2 & 3) == 0) {
            if ((bVar2 & 3) != 0) {
              uVar39 = (uint)*(byte *)((long)unaff_x21 + (long)unaff_x20);
              unaff_x20 = (code *******)((long)unaff_x20 + 1);
            }
          }
          else if (uVar39 == 2) {
            uVar39 = (uint)*(ushort *)((long)unaff_x21 + (long)unaff_x20);
            unaff_x20 = (code *******)((long)unaff_x20 + 2);
          }
          else {
            uVar39 = *(uint *)((long)unaff_x21 + (long)unaff_x20);
            unaff_x20 = (code *******)((long)unaff_x20 + 4);
          }
          if (bVar3 < 2) {
            if (bVar3 == 0) {
              if ((bVar2 >> 5 & 1) == 0) {
                ppppppcVar47 = (code ******)0xffffffffffffffff;
              }
              else {
                ppppppcVar47 = (code ******)(ulong)*(byte *)((long)unaff_x21 + (long)unaff_x20);
              }
            }
            else {
              ppppppcVar47 = (code ******)
                             ((ulong)*(ushort *)((long)unaff_x21 + (long)unaff_x20) + 0x100);
            }
          }
          else if (bVar3 == 2) {
            ppppppcVar47 = (code ******)(ulong)*(uint *)((long)unaff_x21 + (long)unaff_x20);
          }
          else {
            ppppppcVar47 = *(code *******)((long)unaff_x21 + (long)unaff_x20);
          }
          pppppppcVar38 = (code *******)0x0;
          if ((bVar2 & 0x20) != 0) {
            ppppppcVar30 = ppppppcVar47;
          }
          *unaff_x19 = ppppppcVar47;
          unaff_x19[1] = ppppppcVar30;
          if ((code ******)0x1ffff < ppppppcVar30) {
            ppppppcVar30 = (code ******)0x20000;
          }
          *(int *)(unaff_x19 + 2) = (int)ppppppcVar30;
          *(int *)((long)unaff_x19 + 0x14) = 0;
          *(uint *)((long)unaff_x19 + 0x1c) = uVar39;
          *(uint *)(unaff_x19 + 4) = bVar2 >> 2 & 1;
        }
        else {
          pppppppcVar38 = (code *******)0xfffffffffffffff2;
        }
      }
    }
    else if (*(uint *)unaff_x21 >> 4 == 0x184d2a5) {
      if (unaff_x22 < (code *******)0x8) {
        pppppppcVar38 = (code *******)0x8;
      }
      else {
        pppppppcVar38 = (code *******)0x0;
        unaff_x19[4] = (code ******)0x0;
        unaff_x19[1] = in_register_00005008;
        *unaff_x19 = param_1;
        unaff_x19[3] = in_register_00005008;
        unaff_x19[2] = param_1;
        *unaff_x19 = (code ******)(ulong)*(uint *)((long)unaff_x21 + 4);
        *(int *)((long)unaff_x19 + 0x14) = 1;
      }
    }
    else {
      pppppppcVar38 = (code *******)0xfffffffffffffff6;
    }
code_r0x0001000cb46c:
    auVar152._8_8_ = pcVar21;
    auVar152._0_8_ = pppppppcVar38;
    return auVar152;
  case 0x85:
    func_0x000107c60ca0();
    if (((ulong)unaff_x23 & 1) != 0) goto code_r0x0001000cbbe8;
    func_0x00010002b838();
    if (in_stack_000000c0 != 0) {
      if (in_stack_000000c0 == 1) {
        pcVar21 = "directoryCreation_operation_not_permitted";
      }
      else {
        if (in_stack_000000c0 != 2) {
          if (in_stack_000000c0 == 0xd) {
            pcVar21 = "directoryCreation_access_denied";
            goto code_r0x0001000cbb04;
          }
          func_0x000107c60ddc(&stack0x00000088);
          func_0x0001004c3cd0(&stack0x000000a0,"directoryCreation_",&stack0x00000088);
          func_0x000100066230(unaff_x29 + -0xa8,&stack0x000000a0);
          func_0x000107c60ca0(&stack0x000000a0);
          func_0x00010533bd14();
          goto code_r0x0001000cbba8;
        }
        pcVar21 = "directoryCreation_path_not_found";
      }
code_r0x0001000cbb68:
      func_0x000107c60c64(unaff_x29 + -0xa8,pcVar21);
    }
code_r0x0001000cbba8:
    ppppppcVar30 = *unaff_x20;
    func_0x00010533bcb4();
    func_0x00010002b838(&stack0x00000070);
    func_0x000107c60c94(&stack0x00000058,unaff_x29 + -0xa8);
    pcVar21 = &stack0x00000070;
    func_0x00010533bd48(ppppppcVar30,pcVar21,&stack0x00000058);
    func_0x000107c60ca0(&stack0x00000058);
    func_0x00010533bdb4();
    func_0x000107c60ca0(unaff_x29 + -0xa8);
code_r0x0001000cbbe8:
    func_0x0001000e3154();
    auVar154._8_8_ = pcVar21;
    auVar154._0_8_ = unaff_x19;
    return auVar154;
  case 0x8a:
    pppppppcVar38 = (code *******)0x13f;
    func_0x0001000ee934();
    if (pcVar21 < (code *******)0x40) {
      in_stack_00000008 = (code *******)(pppppppcVar38[-1] + 8);
      uVar27 = 0x100;
      func_0x000107c61630(ppuVar29,0x100,1,&stack0x00000008,ppuVar29 + 10);
      if ((code *******)ppuVar29 == (code *******)0x0) {
        ppuVar29 = (undefined **)0x0;
        uVar27 = 0;
      }
    }
    else {
      uVar27 = 0x3f;
      ppuVar29 = (undefined **)pppppppcVar38;
    }
    auVar173._8_8_ = uVar27;
    auVar173._0_8_ = ppuVar29;
    return auVar173;
  case 0x8c:
    unaff_x20[0x36] = (code ******)ppuVar29;
    unaff_x20[0x38] = (code ******)unaff_x21;
    *(undefined1 *)((long)ppuVar29 + (long)unaff_x20[0x37]) = 0x29;
    unaff_x20[0x37] = (code ******)((long)unaff_x20[0x37] + 1);
    goto code_r0x000107c61170;
  case 0x94:
    goto code_r0x0001000ee968;
  case 0x96:
    (*(code *)*(code ******)((long)*ppuVar29 + 0x10))();
    func_0x000107c60c5c();
    goto code_r0x0001000eaf2c;
  case 0x9c:
    auVar156._8_8_ = (ulong)pcVar21 & 0xffffffff | 0xee00454200000000;
    auVar156._0_8_ = 0x4255532f53554c50;
    return auVar156;
  case 0x9e:
    if (pppppppcRam0000000112d71a80 != (code *******)0x0) {
      pcVar21 = (char *)0x0;
      ppuVar29 = (undefined **)pppppppcRam0000000112d71a80;
      goto code_r0x0001000ee97c;
    }
    pcVar21 = (char *)0xff;
    in_stack_00000018 = unaff_x30;
    func_0x000107c5ede0();
    goto code_r0x0001000ee968;
  case 0xa0:
    while (func_0x000107c4080c(pppppppcVar20,pcVar21,ppppppcVar30,pppppppcVar49,pppppppcVar33),
          ppuVar29 = (undefined **)pcVar21, pppppppcVar20 != (code *******)0x0) {
code_r0x0001000bed4c:
      unaff_x28 = (code *******)0x0;
      unaff_x24 = (code *******)((long)unaff_x25 - (long)unaff_x19);
      unaff_x22 = pppppppcVar20;
code_r0x0001000bed54:
      pppppppcVar38 = in_stack_00000008;
      do {
        if ((code *******)*in_stack_00000030 != unaff_x21) {
          func_0x000107c61128(in_stack_00000018);
        }
        func_0x0001000be6b4(in_stack_00000028[(long)unaff_x28],(long)pppppppcVar38 + 1);
        ppppppcVar30 = unaff_x20[0x37];
        if (unaff_x24 != unaff_x28) {
          ppppppcVar47 = unaff_x20[0x36];
          if ((long)unaff_x20[0x38] <= (long)ppppppcVar30 + 1) {
            ppppppcVar30 = (code ******)((long)((long)ppppppcVar30 + 1) * 2);
            ppppppcVar47 = (code ******)0x0;
            func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar30,0);
            unaff_x20[0x36] = ppppppcVar47;
            unaff_x20[0x38] = ppppppcVar30;
            ppppppcVar30 = unaff_x20[0x37];
            pppppppcVar38 = in_stack_00000008;
          }
          *(char *)((long)ppppppcVar47 + (long)ppppppcVar30) = (char)unaff_x27;
          ppppppcVar30 = (code ******)((long)unaff_x20[0x37] + 1);
          unaff_x20[0x37] = ppppppcVar30;
        }
        pcVar21 = (char *)unaff_x20[0x36];
        if ((long)unaff_x20[0x38] <= (long)ppppppcVar30 + 1) {
          ppppppcVar30 = (code ******)((long)((long)ppppppcVar30 + 1) * 2);
          pcVar21 = (char *)0x0;
          func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar30,0);
          unaff_x20[0x36] = (code ******)pcVar21;
          unaff_x20[0x38] = ppppppcVar30;
          ppppppcVar30 = unaff_x20[0x37];
          pppppppcVar38 = in_stack_00000008;
        }
        *(char *)((long)pcVar21 + (long)ppppppcVar30) = (char)unaff_x26;
        unaff_x20[0x37] = (code ******)((long)unaff_x20[0x37] + 1);
        unaff_x28 = (code *******)((long)unaff_x28 + 1);
      } while (unaff_x22 != unaff_x28);
      unaff_x19 = (code *******)((long)unaff_x22 + (long)unaff_x19);
      ppppppcVar30 = &stack0x00000020;
      pppppppcVar49 = &stack0x00000060;
      pppppppcVar33 = (code *******)0x10;
      pppppppcVar20 = in_stack_00000018;
      unaff_x28 = in_stack_00000018;
    }
    goto code_r0x000107c61170;
  case 0xa8:
  case 0xac:
  case 0xb0:
  case 0xb4:
    if ((code *******)ppuVar29 == (code *******)0x0) {
      puVar22 = &DAT_10e63c18c;
      func_0x000107c614fc(pppppppcVar35,&DAT_10e63c18c);
      auVar171._8_8_ = puVar22;
      auVar171._0_8_ = pppppppcVar35;
      return auVar171;
    }
    auVar170._8_8_ = 0;
    auVar170._0_8_ = ppuVar29;
    return auVar170;
  case 0xaa:
    func_0x000107c61174(ppppppcVar30);
    in_stack_00000008 = (code *******)PTR_PTR_1126e75d0;
    pppppppcVar38 = (code *******)PTR_s_init_1125d9248;
    in_stack_00000000 = (code *******)ppuVar29;
    func_0x000107c61154();
    unaff_x28 = unaff_x19;
    ppuVar29 = (undefined **)pppppppcVar38;
    if ((undefined1 *)register0x00000008 != (undefined1 *)0x0) {
      ppuVar29 = (undefined **)unaff_x19;
      func_0x000107c611a0((undefined1 *)((long)register0x00000008 + 8));
    }
    goto code_r0x000107c61170;
  case 0xae:
    (*(code *)pppppppcVar35)();
    func_0x000107c60c5c();
code_r0x0001000eaf2c:
    (*(code *)(*unaff_x21[8])[2])();
    pcVar21 = &DAT_10f684600;
code_r0x0001000eaf50:
    func_0x000107c60c5c();
    ppuVar29 = (undefined **)unaff_x19;
code_r0x0001000eaf74:
    auVar166._8_8_ = pcVar21;
    auVar166._0_8_ = ppuVar29;
    return auVar166;
  case 0xb2:
    unaff_x25 = (code *******)((long)unaff_x25 + 0xb9a);
    unaff_x26 = "?";
    unaff_x23 = (code *******)0x1;
    pcVar21 = &DAT_10f684600;
    do {
      *(int *)unaff_x20 = *(int *)unaff_x20 + 1;
      func_0x000107c60ddc(&stack0x00000008);
      pppppppcVar38 = unaff_x23;
      pppppppcVar49 = (code *******)unaff_x26;
      if (unaff_x24 != (code *******)0x0) {
        pppppppcVar38 = (code *******)((long)unaff_x23 + 1);
        pppppppcVar49 = unaff_x25;
      }
      puVar44 = &stack0x00000008;
      func_0x000107c60c70(puVar44,0,pppppppcVar49,pppppppcVar38);
      in_stack_00000028 = (code ******)puVar44[1];
      in_stack_00000020 = (code *****)*puVar44;
      in_stack_00000030 = (code ******)puVar44[2];
      puVar44[1] = 0;
      puVar44[2] = 0;
      *puVar44 = 0;
      func_0x000107c60c5c();
      unaff_x22 = (code *******)pcVar21;
code_r0x0001000eadb4:
      pcVar21 = (char *)unaff_x22;
      if ((long)in_stack_00000030 < 0) {
        func_0x000107c60e14(in_stack_00000020);
      }
      if ((long)in_stack_00000018 < 0) {
        func_0x000107c60e14(in_stack_00000008);
      }
      unaff_x24 = (code *******)((long)unaff_x24 + 1);
    } while (unaff_x24 < (code *******)((long)unaff_x21[10] - (long)unaff_x21[9] >> 3));
    goto code_r0x0001000eaf50;
  case 0xb6:
    goto code_r0x0001000eadb4;
  case 0xbc:
    auVar161._8_8_ = (ulong)(pppppppcVar35 + 0x1e0) | 0x8000000000000000;
    auVar161._0_8_ = 0xd000000000000012;
    return auVar161;
  case 0xc0:
    goto code_r0x0001000bed54;
  case 0xc2:
    do {
      pppppppcVar49 = pppppppcVar38;
      do {
        pppppppcVar38 = (code *******)((long)pppppppcVar49 + 1);
        if (SCARRY8((long)pppppppcVar49,1)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1000ee560);
          (*pcVar17)();
        }
        if ((long)unaff_x19 <= (long)pppppppcVar38) {
          func_0x000107c6142c();
          func_0x0001000ee560();
          auVar168._8_8_ = unaff_x25;
          auVar168._0_8_ = unaff_x24;
          return auVar168;
        }
        ppppppcVar30 = unaff_x25[(long)pppppppcVar38];
        pppppppcVar49 = (code *******)((long)pppppppcVar49 + 1);
      } while (ppppppcVar30 == (code ******)0x0);
      do {
        ppppppcVar30 = (code ******)((ulong)((long)ppppppcVar30 + -1) & (ulong)ppppppcVar30);
        (*(code *)unaff_x28[2])();
        func_0x000107c5fd28();
        (**(code **)(*(long *)(unaff_x29 + -0x78) + 8))();
        (*(code *)unaff_x28[1])();
      } while (ppppppcVar30 != (code ******)0x0);
    } while( true );
  case 0xc5:
    goto code_r0x0001000af13c;
  case 200:
    goto code_r0x0001000eaf74;
  case 0xca:
    auVar158._8_8_ = pcVar21;
    auVar158._0_8_ = ((ulong)pppppppcVar35 | 0xd000000000000000) + 0x1a;
    return auVar158;
  case 0xd7:
    func_0x000107c61174();
    func_0x0001000c9664(ppppppcVar30);
    unaff_x28 = (code *******)ppuVar29;
    ppuVar29 = (undefined **)pcVar21;
    goto code_r0x000107c61170;
  case 0xd8:
    if (1 < (uint)pppppppcVar41) {
      uVar39 = 4;
      if (uVar45 < 4) {
        uVar39 = uVar45;
      }
      if ((int)uVar39 < 2) {
        if (uVar39 == 0) goto code_r0x0001000ca774;
        uVar39 = (uint)(byte)*pcVar21;
      }
      else if (uVar39 == 2) {
        uVar39 = (uint)*(ushort *)pcVar21;
      }
      else if (uVar39 == 3) {
        uVar39 = (uint)*(uint3 *)pcVar21;
      }
      else {
        uVar39 = *(uint *)pcVar21;
      }
      uVar32 = uVar39 | (uint)pppppppcVar41 - 2 << (ulong)((uVar45 & 3) << 3);
      if (3 < uVar45) {
        uVar32 = uVar39;
      }
      pppppppcVar41 = (code *******)(ulong)(uVar32 + 2);
    }
code_r0x0001000ca774:
    bVar18 = (int)pppppppcVar41 != 1;
    if (bVar18) {
      ppppppcVar30 = *(code *******)((long)pcVar21 + 8);
      ppppppcVar47 = *(code *******)pcVar21;
      unaff_x19[1] = *(code *******)((long)pcVar21 + 8);
      *unaff_x19 = ppppppcVar47;
      func_0x000107c6157c(ppppppcVar30);
    }
    else {
      (*(code *)pppppppcVar35[2])();
    }
    *(bool *)((long)unaff_x19 + (long)unaff_x20) = !bVar18;
    auVar151._8_8_ = pcVar21;
    auVar151._0_8_ = unaff_x19;
    return auVar151;
  case 0xd9:
    func_0x0001000285a8(ppuVar29,(code *******)((long)pcVar21 + 0x9a0));
    func_0x000107c6140c();
    func_0x000107c6142c();
    auVar149._8_8_ = unaff_x24;
    auVar149._0_8_ = unaff_x22;
    return auVar149;
  case 0xda:
    func_0x000107c61174(ppppppcVar30);
    puVar22 = PTR_PTR_1126e0370;
    func_0x000107c610f4(PTR_PTR_1126e0370);
    ppuVar29 = (undefined **)pcVar21;
    if (lRam00000001137f7328 != -1) {
      ppuVar29 = &PTR___NSConcreteGlobalBlock_110d25490;
      func_0x00010002a2fc(0x1137f7328,&PTR___NSConcreteGlobalBlock_110d25490);
    }
    unaff_x28 = pppppppcRam00000001137f7320;
    func_0x000107c61174(pppppppcRam00000001137f7320);
    if (lRam00000001137f7338 != -1) {
      ppuVar29 = &PTR___NSConcreteGlobalBlock_110d254b0;
      func_0x00010002a2fc(0x1137f7338,&PTR___NSConcreteGlobalBlock_110d254b0);
    }
    func_0x000107c467bc(puVar22);
    goto code_r0x000107c61170;
  case 0xdb:
    lVar24 = unaff_x29 + -1;
    func_0x0001000d0424(lVar24,&UNK_10dd3e63c,ppppppcVar30,pcVar21,pppppppcVar41);
    auVar153._8_8_ = pppppppcVar38;
    auVar153._0_8_ = lVar24;
    return auVar153;
  case 0xe2:
    goto code_r0x0001000eecd8;
  case 0xe4:
    while (unaff_x19 = (code *******)((long)unaff_x19 + -1), unaff_x19 != (code *******)0x0) {
      ppppppcVar30 = unaff_x20[0x36];
      if ((long)unaff_x20[0x38] <= (long)pppppppcVar35 + 4) {
        ppppppcVar47 = (code ******)((long)((long)pppppppcVar35 + 4) * 2);
        ppppppcVar30 = (code ******)0x0;
        func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar47,0);
        unaff_x20[0x36] = ppppppcVar30;
        unaff_x20[0x38] = ppppppcVar47;
        pppppppcVar35 = (code *******)unaff_x20[0x37];
      }
      *(int *)((long)pppppppcVar35 + (long)ppppppcVar30) = (int)unaff_x21;
      pppppppcVar35 = (code *******)((long)unaff_x20[0x37] + 4);
      unaff_x20[0x37] = (code ******)pppppppcVar35;
    }
    ppuVar29 = (undefined **)unaff_x20[0x36];
    if ((long)unaff_x20[0x38] <= (long)pppppppcVar35 + 2) {
      ppppppcVar30 = (code ******)((long)((long)pppppppcVar35 + 2) * 2);
      ppuVar29 = (undefined **)0x0;
      func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar30,0);
      unaff_x20[0x36] = (code ******)ppuVar29;
      unaff_x20[0x38] = ppppppcVar30;
      pppppppcVar35 = (code *******)unaff_x20[0x37];
    }
    *(undefined2 *)((long)ppuVar29 + (long)pppppppcVar35) = 0xa28;
    unaff_x20[0x37] = (code ******)((long)unaff_x20[0x37] + 2);
    pppppppcVar38 = unaff_x28;
    func_0x000107c40808();
    in_stack_00000028 = (code ******)0x0;
    in_stack_00000020 = (code *****)0x0;
    in_stack_00000038 = (undefined8 *)0x0;
    in_stack_00000030 = (code ******)0x0;
    in_stack_00000048 = (undefined8 *)0x0;
    in_stack_00000040 = (code ******)0x0;
    in_stack_00000058 = 0;
    func_0x000107c61174();
    pppppppcVar20 = unaff_x28;
    func_0x000107c4080c();
    if (pppppppcVar20 != (code *******)0x0) {
      unaff_x19 = (code *******)0x0;
      unaff_x21 = (code *******)*in_stack_00000030;
      unaff_x25 = (code *******)((long)pppppppcVar38 + -1);
      unaff_x26 = (char *)0xa;
      unaff_x27 = (code *******)0x2c;
      goto code_r0x0001000bed4c;
    }
    goto code_r0x000107c61170;
  case 0xec:
    if (0x10dd3e63b < (long)pcVar21) {
      pppppppcVar38 = (code *******)pcVar21;
    }
    unaff_x21 = (code *******)unaff_x19[2];
    if ((long)pppppppcVar38 <= (long)unaff_x21) {
      pppppppcVar38 = unaff_x21;
    }
    pppppppcVar49 = (code *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppcVar38 == (code *******)0x0) goto code_r0x0001000eed18;
    goto code_r0x0001000eecd8;
  case 0xee:
    func_0x000107c61428(ppuVar29,&stack0x00000018,0,0);
    unaff_x28 = (code *******)*unaff_x19;
    func_0x000107c61174(unaff_x28);
    ppuVar29 = (undefined **)0x800000010f0c9640;
    func_0x0001000a9a18(0xd000000000000052,0x800000010f0c9640);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    auVar237._8_8_ = ppuVar29;
    auVar237._0_8_ = unaff_x28;
    return auVar237;
  case 0xf4:
    auVar159._8_8_ = (ulong)pcVar21 & 0xffffffffffff | 0xee00000000000000;
    auVar159._0_8_ = 0x20746e656d796150;
    return auVar159;
  case 0xf6:
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)();
    auVar235._8_8_ = pcVar21;
    auVar235._0_8_ = ppuVar29;
    return auVar235;
  case 0xf8:
    unaff_x21 = unaff_x24;
    pppppppcVar52 = unaff_x23;
    goto code_r0x0001000befe4;
  }
code_r0x0001000afb84:
  auVar14._8_8_ = 0;
  auVar14._0_8_ = pcVar21;
  return auVar14 << 0x40;
code_r0x0001000bef74:
  func_0x000107c31814();
  pppppppcVar35 = (code *******)unaff_x20[0x37];
  if ((int)unaff_x24 == 0) {
    unaff_x19 = (code *******)0x0;
  }
  else {
    ppppppcVar30 = unaff_x20[0x36];
    if ((long)unaff_x20[0x38] <= (long)pppppppcVar35 + 1) {
      ppppppcVar47 = (code ******)((long)((long)pppppppcVar35 + 1) * 2);
      ppppppcVar30 = (code ******)0x0;
      func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar47,0);
      unaff_x20[0x36] = ppppppcVar30;
      unaff_x20[0x38] = ppppppcVar47;
      pppppppcVar35 = (code *******)unaff_x20[0x37];
    }
    *(undefined1 *)((long)pppppppcVar35 + (long)ppppppcVar30) = 0x22;
    pppppppcVar35 = (code *******)((long)unaff_x20[0x37] + 1);
    unaff_x20[0x37] = (code ******)pppppppcVar35;
    unaff_x19 = (code *******)0x1;
  }
code_r0x0001000befe4:
  ppppppcVar30 = unaff_x20[0x36];
  if ((long)unaff_x20[0x38] <= (long)pppppppcVar52 + (long)pppppppcVar35) {
    ppppppcVar47 = (code ******)((long)((long)pppppppcVar52 + (long)pppppppcVar35) * 2);
    ppppppcVar30 = (code ******)0x0;
    func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar47,0);
    unaff_x20[0x36] = ppppppcVar30;
    unaff_x20[0x38] = ppppppcVar47;
    pppppppcVar35 = (code *******)unaff_x20[0x37];
  }
  pcVar21 = (char *)unaff_x21;
  func_0x000107c610b4((undefined *)((long)pppppppcVar35 + (long)ppppppcVar30),unaff_x21,
                      pppppppcVar52);
  pppppppcVar35 = (code *******)((long)pppppppcVar52 + (long)unaff_x20[0x37]);
code_r0x0001000bf034:
  unaff_x20[0x37] = (code ******)pppppppcVar35;
  if ((int)unaff_x19 != 0) {
    pcVar21 = (char *)unaff_x20[0x36];
    if ((long)unaff_x20[0x38] <= (long)pppppppcVar35 + 1) {
      ppppppcVar30 = (code ******)((long)((long)pppppppcVar35 + 1) * 2);
      pcVar21 = (char *)0x0;
      func_0x000107c60748(0,unaff_x20[0x36],ppppppcVar30,0);
      unaff_x20[0x36] = (code ******)pcVar21;
      unaff_x20[0x38] = ppppppcVar30;
      pppppppcVar35 = (code *******)unaff_x20[0x37];
    }
    *(undefined1 *)((long)pcVar21 + (long)pppppppcVar35) = 0x22;
    unaff_x20[0x37] = (code ******)((long)unaff_x20[0x37] + 1);
  }
  ppuVar29 = (undefined **)pcVar21;
  if ((int)unaff_x25 != 0) {
    func_0x000107c60740(0,unaff_x21);
    ppuVar29 = (undefined **)unaff_x21;
  }
  goto code_r0x000107c61170;
code_r0x0001000ee838:
  unaff_x24 = (code *******)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c4c12c();
  func_0x000107c61180();
  func_0x000107c3de88();
  func_0x000107c61180();
code_r0x0001000ee868:
  unaff_x28 = unaff_x24;
  ppuVar29 = (undefined **)pcVar21;
  goto code_r0x000107c61170;
code_r0x0001000af144:
  if (((ulong)pcVar21 & 0xff) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001000af164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1000af168 + (ulong)*(ushort *)(&UNK_10dd3e68a + (long)ppuVar29 * 2) * 4))();
    auVar55._8_8_ = pcVar21;
    auVar55._0_8_ = ppuVar29;
    return auVar55;
  }
  if ((uVar39 != 1) && (uVar19 == uVar31)) {
    auVar70._8_8_ = pcVar21;
    auVar70._0_8_ = 1;
    return auVar70;
  }
  goto code_r0x0001000afb84;
code_r0x0001000eecd8:
  pppppppcVar49 = (code *******)0x113060260;
  func_0x0001000285a8(0x113060260,&UNK_10dcd57f0);
  func_0x000107c613fc();
  pppppppcVar38 = pppppppcVar49;
  func_0x000107c610a4();
  pppppppcVar49[2] = (code ******)unaff_x21;
  pppppppcVar49[3] = (code ******)((long)pppppppcVar38 * 2 + -0x40);
code_r0x0001000eed18:
  pppppppcVar38 = pppppppcVar49 + 4;
  pppppppcVar52 = unaff_x19 + 4;
  if (((ulong)unaff_x20 & 1) == 0) {
    func_0x000107c610b4(pppppppcVar38,pppppppcVar52,unaff_x21);
  }
  else {
    if (pppppppcVar49 != unaff_x19 ||
        (code *******)((long)pppppppcVar52 + (long)unaff_x21) <= pppppppcVar38) {
      func_0x000107c610b8(pppppppcVar38,pppppppcVar52,unaff_x21);
    }
    unaff_x19[2] = (code ******)0x0;
  }
  func_0x000107c61574();
  auVar174._8_8_ = pppppppcVar52;
  auVar174._0_8_ = pppppppcVar49;
  return auVar174;
code_r0x0001000ee968:
  func_0x000107c60188();
  if ((code *******)pcVar21 == (code *******)0x0) {
    pppppppcRam0000000112d71a80 = (code *******)ppuVar29;
  }
code_r0x0001000ee97c:
  auVar172._8_8_ = pcVar21;
  auVar172._0_8_ = ppuVar29;
  return auVar172;
}



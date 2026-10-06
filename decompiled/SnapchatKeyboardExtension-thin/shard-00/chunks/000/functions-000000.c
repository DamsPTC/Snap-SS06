/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 1000102ff;  */

void FUN_100010000(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  long *plVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_80 [15];
  char cStack_71;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uVar8 = 0;
  func_0x000100010fc8();
  lVar16 = *(long *)(uVar8 - 8);
  lVar14 = *(long *)(lVar16 + 0x40);
  uVar12 = uVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  __s7SwiftUI24ButtonStyleConfigurationV5labelAC5LabelVvg(param_1);
  uVar13 = *(ulong *)(unaff_x20 + *(int *)(uVar8 + 0x18));
  uVar15 = uVar13;
  if (uVar13 == 0) {
    __s7SwiftUI5ColorV5clearACvgZ();
    uVar15 = uVar12;
  }
  lVar9 = 0x1000513c8;
  FUN_100010860(0x1000513c8,&UNK_10003bdf8);
  *(ulong *)(param_1 + *(int *)(lVar9 + 0x24)) = uVar15;
  lVar9 = 0x1000513d0;
  FUN_100010860(0x1000513d0,&UNK_10003be00);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar9 + 0x24));
  lVar9 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar7 = *(int *)(lVar9 + 0x14);
  uVar6 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_10004c448;
  lVar9 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar1 + (long)iVar7,uVar6,lVar9);
  auVar17 = NEON_fmov(0x4014000000000000,8);
  puVar1[1] = auVar17._8_8_;
  *puVar1 = auVar17._0_8_;
  _swift_retain();
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  if ((uVar13 & 1) == 0) {
    puVar2 = (undefined1 *)(unaff_x20 + *(int *)(uVar8 + 0x24));
    uStack_70 = *puVar2;
    uStack_68 = *(undefined8 *)(puVar2 + 8);
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvg(&cStack_71);
    if (cStack_71 == '\x01') goto LAB_100010154;
    lVar9 = *(long *)(unaff_x20 + *(int *)(uVar8 + 0x14));
  }
  else {
LAB_100010154:
    lVar9 = *(long *)(unaff_x20 + *(int *)(uVar8 + 0x1c));
    if (lVar9 == 0) {
      lVar9 = *(long *)(unaff_x20 + *(int *)(uVar8 + 0x14));
      __s7SwiftUI5ColorV7opacityyACSdF(0x3fd3333333333333);
      goto LAB_100010190;
    }
  }
  _swift_retain(lVar9);
LAB_100010190:
  uVar12 = 0x1000513e0;
  FUN_100010860(0x1000513e0,&UNK_10003be10);
  *(long *)((long)puVar1 + (long)*(int *)(uVar12 + 0x34)) = lVar9;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(uVar12 + 0x38)) = 0x100;
  __s7SwiftUI9AnimationV7easeOut8durationACSd_tFZ
            (*(undefined8 *)(unaff_x20 + *(int *)(uVar8 + 0x20)));
  uVar15 = uVar12;
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  if ((uVar15 & 1) == 0) {
    puVar2 = (undefined1 *)(unaff_x20 + *(int *)(uVar8 + 0x24));
    uStack_70 = *puVar2;
    uStack_68 = *(undefined8 *)(puVar2 + 8);
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvg(&cStack_71);
  }
  else {
    cStack_71 = '\x01';
  }
  lVar9 = 0x1000513e8;
  puVar11 = &UNK_10003be18;
  FUN_100010860();
  puVar3 = (ulong *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
  *puVar3 = uVar12;
  *(char *)(puVar3 + 1) = cStack_71;
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar10 = 0x1000513f0;
  FUN_100010860(0x1000513f0,&UNK_10003be20);
  plVar4 = (long *)((long)puVar1 + (long)*(int *)(lVar10 + 0x24));
  *plVar4 = lVar9;
  plVar4[1] = (long)puVar11;
  __s7SwiftUI24ButtonStyleConfigurationV9isPressedSbvg();
  FUN_1000115fc();
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar15 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar11 = &UNK_10004d328;
  _swift_allocObject(&UNK_10004d328,uVar15 + lVar14,uVar12 | 7);
  FUN_100011644(auStack_80 + -(lVar14 + 0xfU & 0xfffffffffffffff0),puVar11 + uVar15);
  lVar14 = 0x1000513f8;
  FUN_100010860(0x1000513f8,&UNK_10003be28);
  pbVar5 = (byte *)(param_1 + *(int *)(lVar14 + 0x24));
  *pbVar5 = (byte)lVar10 & 1;
  pbVar5[8] = 0x88;
  pbVar5[9] = 0x16;
  pbVar5[10] = 1;
  pbVar5[0xb] = 0;
  pbVar5[0xc] = 1;
  pbVar5[0xd] = 0;
  pbVar5[0xe] = 0;
  pbVar5[0xf] = 0;
  *(undefined **)(pbVar5 + 0x10) = puVar11;
  return;
}



/* Entry: 100010300; end: 10001046f;  */

void FUN_100010300(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long alStack_70 [2];
  undefined1 auStack_60 [15];
  char cStack_51;
  char acStack_50 [8];
  undefined8 uStack_48;
  
  lVar3 = 0;
  func_0x000100010fc8();
  lVar9 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar2 = -(lVar7 + 0xfU & 0xfffffffffffffff0);
  acStack_50[0] = *param_1;
  pcVar1 = (char *)(param_2 + *(int *)(lVar3 + 0x24));
  if (acStack_50[0] == '\x01') {
    uVar5 = 0x1000513d8;
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvs(acStack_50,uVar5);
  }
  else {
    acStack_50[0] = *pcVar1;
    uStack_48 = *(undefined8 *)(pcVar1 + 8);
    FUN_100010860(0x1000513d8,&UNK_10003c3e0);
    __s7SwiftUI5StateV12wrappedValuexvg(&cStack_51);
    if (cStack_51 == '\x01') {
      FUN_1000115fc(param_2,auStack_60 + lVar2);
      uVar6 = (ulong)*(byte *)(lVar9 + 0x50);
      uVar8 = uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff);
      puVar4 = &UNK_10004d350;
      _swift_allocObject(&UNK_10004d350,uVar8 + lVar7,uVar6 | 7);
      FUN_100011644(auStack_60 + lVar2,puVar4 + uVar8);
      *(undefined **)((long)alStack_70 + lVar2) = PTR___sytN_10004cdf0 + 8;
      uVar5 = 2;
      __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
                (2,0,0x10,4,0,0,&UNK_10003be38,puVar4);
      _swift_release(puVar4);
      _swift_release(uVar5);
    }
  }
  return;
}



/* Entry: 100010470; end: 1000104db;  */

void FUN_100010470(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_10004d060
                                   + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000104dc;
                    /* WARNING: Could not recover jumptable at 0x00010003a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_10004d058)(50000000);
  return;
}



/* Entry: 1000104dc; end: 1000105ab;  */

void FUN_1000104dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x28));
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    uVar1 = 0x100051400;
    FUN_100010f20(0x100051400,PTR___sScMMa_10004d028,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj(uVar2,uVar1);
    pcVar3 = FUN_1000105ac;
  }
  else {
    _swift_errorRelease();
    uVar1 = 0x100051400;
    FUN_100010f20(0x100051400,PTR___sScMMa_10004d028,PTR___sScMScAsMc_10004d030);
    __sScA15unownedExecutorScevgTj(uVar2,uVar1);
    pcVar3 = (code *)0x100011aa4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010003aec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_10004d078)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 1000105ac; end: 10001061f;  */

void FUN_1000105ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000100010fc8();
  *(undefined1 *)(unaff_x22 + 0x30) = 0;
  uVar1 = 0x1000513d8;
  FUN_100010860(0x1000513d8,&UNK_10003c3e0);
  __s7SwiftUI5StateV12wrappedValuexvs((undefined1 *)(unaff_x22 + 0x30),uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001061c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100010620; end: 10001062f;  */

void FUN_100010620(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003a68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_10004c620
  )();
  return;
}



/* Entry: 100010630; end: 1000106fb;  */

void FUN_100010630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 uStack_41;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  lVar4 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  lVar4 = 0;
  func_0x000100010fc8();
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x14)) = uVar1;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x18)) = uVar2;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x1c)) = uVar5;
  *(undefined8 *)(param_1 + *(int *)(lVar4 + 0x20)) = 0x3faeb851eb851eb8;
  iVar3 = *(int *)(lVar4 + 0x24);
  uStack_41 = 0;
  _swift_retain(uVar5);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  __s7SwiftUI5StateV12wrappedValueACyxGx_tcfC(param_1 + iVar3,&uStack_41,PTR___sSbN_10004ccf0);
  return;
}



/* Entry: 1000106fc; end: 10001074f;  */

void FUN_1000106fc(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  iVar1 = 2;
  FUN_100038d80(2,0x1a,4,0);
  if (iVar1 == 0) {
    uVar2 = 0xff;
    __s7SwiftUI13_TaskModifierVMa(0xff);
  }
  else {
    uVar2 = 0xff;
    __s7SwiftUI14_TaskModifier2VMa(0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010003a488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI15ModifiedContentVMa_10004c338)(0,uVar3,uVar2);
  return;
}



/* Entry: 100010750; end: 10001081b;  */

void FUN_100010750(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar7 = &uStack_50;
  uVar6 = *param_1;
  uVar1 = param_1[1];
  iVar3 = 2;
  FUN_100038d80(2,0x1a,4,0);
  if (iVar3 == 0) {
    uVar4 = 0xff;
    __s7SwiftUI13_TaskModifierVMa(0xff);
    puVar2 = PTR___s7SwiftUI13_TaskModifierVMa_10004c2a0;
    uVar5 = 0xff;
    __s7SwiftUI15ModifiedContentVMa(0xff,uVar6,uVar4);
    uVar6 = 0x1000512c0;
    FUN_100010f20(0x1000512c0,puVar2,PTR___s7SwiftUI13_TaskModifierVAA04ViewD0AAMc_10004c298);
    uStack_50 = uVar1;
    uStack_48 = uVar6;
  }
  else {
    uVar4 = 0xff;
    __s7SwiftUI14_TaskModifier2VMa(0xff);
    uVar5 = 0xff;
    __s7SwiftUI15ModifiedContentVMa(0xff,uVar6,uVar4);
    uVar6 = uVar5;
    FUN_10001081c();
    puVar7 = &uStack_40;
    uStack_40 = uVar1;
    uStack_38 = uVar6;
  }
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar5,
             puVar7);
  return;
}



/* Entry: 10001081c; end: 10001085f;  */

void FUN_10001081c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001000512b8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI14_TaskModifier2VMa(0xff);
  puVar2 = PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_10004c310;
  _swift_getWitnessTable(PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_10004c310,uVar1);
  puRam00000001000512b8 = puVar2;
  return;
}



/* Entry: 100010860; end: 1000108af;  */

void FUN_100010860(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 1000108b0; end: 1000108b7;  */

void FUN_1000108b0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010003ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_10004cc60)(*unaff_x20);
  return;
}



/* Entry: 1000108b8; end: 1000109e7;  */

void FUN_1000108b8(undefined8 param_1,undefined8 *param_2)

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



/* Entry: 1000109e8; end: 100010a5f;  */

undefined8 FUN_1000109e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(uVar1);
  __sSS9hashValueSivg();
  _swift_bridgeObjectRelease(param_2);
  return uVar1;
}



/* Entry: 100010a60; end: 100010b97;  */

undefined1 * FUN_100010a60(undefined8 param_1,undefined8 param_2)

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



/* Entry: 100010b98; end: 100010bbf;  */

void FUN_100010b98(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100010bc0; end: 100010c43;  */

void FUN_100010bc0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x100051310;
  FUN_100010f20(0x100051310,FUN_100010c44,&UNK_10003bd1c);
  uVar2 = 0x100051318;
  FUN_100010f20(0x100051318,FUN_100010c44,&UNK_10003bc38);
                    /* WARNING: Could not recover jumptable at 0x00010003aa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_10004cd78
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_10004ccd8);
  return;
}



/* Entry: 100010c44; end: 100010c5b;  */

void FUN_100010c44(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10004d1f8;
  if (lRam00000001000512e8 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam00000001000512e8 = param_1;
  }
  return;
}



/* Entry: 100010c5c; end: 100010c8b;  */

void FUN_100010c5c(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(param_1[2]);
  return;
}



/* Entry: 100010c8c; end: 100010d4b;  */

undefined8 * FUN_100010c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 100010d4c; end: 100010d5f;  */

void FUN_100010d4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 100010d60; end: 100010dab;  */

undefined8 * FUN_100010d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 100010dac; end: 100010eaf;  */

int FUN_100010dac(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100010eb0; end: 100010ef3;  */

void FUN_100010eb0(long param_1,long *param_2,long param_3)

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



/* Entry: 100010ef4; end: 100010f1f;  */

void FUN_100010ef4(void)

{
  FUN_100010f20(0x1000512f8,FUN_100010c44,&UNK_10003bbfc);
  return;
}



/* Entry: 100010f20; end: 100010f5f;  */

void FUN_100010f20(long *param_1,code *param_2,long param_3)

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



/* Entry: 100010f60; end: 100010f8b;  */

void FUN_100010f60(void)

{
  FUN_100010f20(0x100051300,FUN_100010c44,&UNK_10003bbd0);
  return;
}



/* Entry: 100010f8c; end: 100010f9b;  */

void FUN_100010f8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_10004ced8)(param_1,&UNK_10003dd18,1);
  return;
}



/* Entry: 100010f9c; end: 100010fff;  */

void FUN_100010f9c(void)

{
  FUN_100010f20(0x100051308,FUN_100010c44,&UNK_10003bc6c);
  return;
}



/* Entry: 100011000; end: 1000110df;  */

long * FUN_100011000(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    __s7SwiftUI24ButtonStyleConfigurationVMa();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = *(undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined8 *)((long)param_1 + (long)iVar3) = uVar7;
    iVar3 = *(int *)(param_3 + 0x20);
    uVar8 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar8;
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *puVar1 = *puVar2;
    lVar5 = *(long *)(puVar2 + 8);
    *(long *)(puVar1 + 8) = lVar5;
    _swift_retain();
    _swift_retain(uVar7);
    _swift_retain(uVar8);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar5);
  return param_1;
}



/* Entry: 1000110e0; end: 10001114b;  */

void FUN_1000110e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  return;
}



/* Entry: 10001114c; end: 100011203;  */

long FUN_10001114c(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + iVar3) = uVar6;
  iVar3 = *(int *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) = uVar7;
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  puVar1 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar5 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar1 + 8) = uVar5;
  _swift_retain();
  _swift_retain(uVar6);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  return param_1;
}



/* Entry: 100011204; end: 10001141b;  */

long FUN_100011204(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
  lVar3 = (long)*(int *)(param_3 + 0x14);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  _swift_retain();
  _swift_release(uVar4);
  lVar3 = (long)*(int *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  _swift_retain();
  _swift_release(uVar4);
  lVar3 = (long)*(int *)(param_3 + 0x1c);
  uVar4 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
  _swift_retain();
  _swift_release(uVar4);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x20)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  puVar1 = (undefined1 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined1 *)(param_2 + *(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar4 = *(undefined8 *)(puVar1 + 8);
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(puVar2 + 8);
  _swift_retain();
  _swift_release(uVar4);
  return param_1;
}



/* Entry: 10001141c; end: 100011427;  */

void FUN_10001141c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_10004cea8)();
  return;
}



/* Entry: 100011428; end: 1000114a3;  */

ulong FUN_100011428(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100011478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 1000114a4; end: 1000114af;  */

void FUN_1000114a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_10004cf70)();
  return;
}



/* Entry: 1000114b0; end: 100011527;  */

void FUN_1000114b0(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100011508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 100011528; end: 1000115bf;  */

void FUN_100011528(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = PTR___sBoWV_10004cc80 + 0x40;
    puStack_40 = &UNK_10003bd78;
    puStack_38 = &UNK_10003bd78;
    puStack_30 = PTR___sBi64_WV_10004cc78 + 0x40;
    puStack_28 = &UNK_10003bd90;
    _swift_initStructMetadata(param_1,0x100,6,&lStack_50,param_1 + 0x10);
  }
  return;
}



/* Entry: 1000115c0; end: 1000115eb;  */

void FUN_1000115c0(void)

{
  FUN_100010f20(0x1000513c0,0x100010fc8,&UNK_10003bda8);
  return;
}



/* Entry: 1000115ec; end: 1000115fb;  */

void FUN_1000115ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_10004ced8)(param_1,&UNK_10003dd40,1);
  return;
}



/* Entry: 1000115fc; end: 10001163f;  */

undefined8 FUN_1000115fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100010fc8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100011640; end: 100011643;  */

void FUN_100011640(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = 0;
  func_0x000100010fc8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1,lVar3);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x18)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x24) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 100011644; end: 1000116c3;  */

undefined8 FUN_100011644(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100010fc8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000116c4; end: 10001176b;  */

void FUN_1000116c4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = 0;
  func_0x000100010fc8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff));
  lVar3 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1,lVar3);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x14)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x18)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x24) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010003ad28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_10004ce78)();
  return;
}



/* Entry: 10001176c; end: 1000117df;  */

void FUN_10001176c(void)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = 0;
  func_0x000100010fc8();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1000117e0;
  plVar3[2] = unaff_x20 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff));
  lVar2 = 0;
  __sScMMa();
  plVar3[3] = lVar2;
  __sScM6sharedScMvgZ();
  plVar3[4] = lVar2;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_10004d060
                                   + 4);
  _swift_task_alloc();
  plVar3[5] = (long)plVar1;
  *plVar1 = (long)plVar3;
  plVar1[1] = (long)FUN_1000104dc;
                    /* WARNING: Could not recover jumptable at 0x00010003a9bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_10004d058)(50000000);
  return;
}



/* Entry: 1000117e0; end: 10001181b;  */

void FUN_1000117e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100011818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10001181c; end: 10001181f;  */

void FUN_10001181c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100051408 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000513f8;
  func_0x0001000118b8(0x1000513f8,&UNK_10003be28);
  uVar2 = uVar1;
  func_0x00010001190c();
  uVar3 = 0x100051440;
  func_0x000100011a54(0x100051440,0x100051448,&UNK_10003be48,
                      PTR___s7SwiftUI20_ValueActionModifierVyxGAA04ViewE0AAMc_10004c4e0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100051408 = puVar4;
  return;
}



/* Entry: 100011820; end: 100011a97;  */

void FUN_100011820(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000100051408 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000513f8;
  func_0x0001000118b8(0x1000513f8,&UNK_10003be28);
  uVar2 = uVar1;
  func_0x00010001190c();
  uVar3 = 0x100051440;
  func_0x000100011a54(0x100051440,0x100051448,&UNK_10003be48,
                      PTR___s7SwiftUI20_ValueActionModifierVyxGAA04ViewE0AAMc_10004c4e0);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam0000000100051408 = puVar4;
  return;
}



/* Entry: 100011a98; end: 100011ad3;  */

undefined8 * FUN_100011a98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_retain();
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Entry: 100011ad4; end: 100011bc7;  */

void FUN_100011ad4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  __s7SwiftUI24ButtonStyleConfigurationV5labelAC5LabelVvg();
  lVar4 = 0x1000514e8;
  FUN_100010860(0x1000514e8,&UNK_10003bf10);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  lVar4 = 0;
  __s7SwiftUI16RoundedRectangleVMa();
  iVar3 = *(int *)(lVar4 + 0x14);
  uVar2 = *(undefined4 *)PTR___s7SwiftUI18RoundedCornerStyleO10continuousyA2CmFWC_10004c448;
  lVar4 = 0;
  __s7SwiftUI18RoundedCornerStyleOMa();
  (**(code **)(*(long *)(lVar4 + -8) + 0x68))((long)puVar1 + (long)iVar3,uVar2,lVar4);
  auVar7 = NEON_fmov(0x4014000000000000,8);
  puVar1[1] = auVar7._8_8_;
  *puVar1 = auVar7._0_8_;
  uVar6 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x14));
  lVar4 = 0x1000513e0;
  puVar5 = &UNK_10003be10;
  FUN_100010860();
  *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x34)) = uVar6;
  *(undefined2 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x38)) = 0x100;
  _swift_retain();
  __s7SwiftUI9AlignmentV6centerACvgZ();
  lVar4 = 0x1000514f0;
  FUN_100010860(0x1000514f0,&UNK_10003bf20);
  puVar1 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar4 + 0x24));
  *puVar1 = uVar6;
  puVar1[1] = puVar5;
  return;
}



/* Entry: 100011bc8; end: 100011c27;  */

void FUN_100011bc8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  lVar1 = 0;
  FUN_100011c28();
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14)) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010003ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_10004cf40)(uVar2);
  return;
}



/* Entry: 100011c28; end: 100011c5f;  */

void FUN_100011c28(undefined8 param_1)

{
  if (lRam00000001000514a8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10003dd8c);
  return;
}



/* Entry: 100011c60; end: 100011ce7;  */

long * FUN_100011c60(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    __s7SwiftUI24ButtonStyleConfigurationVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
  }
  _swift_retain();
  return param_1;
}



/* Entry: 100011ce8; end: 100011d2b;  */

void FUN_100011ce8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 100011d2c; end: 100011eb7;  */

long FUN_100011d2c(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  _swift_retain();
  return param_1;
}



/* Entry: 100011eb8; end: 100011ec3;  */

void FUN_100011eb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ad70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_10004cea8)();
  return;
}



/* Entry: 100011ec4; end: 100011f3f;  */

ulong FUN_100011ec4(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100011f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Entry: 100011f40; end: 100011f4b;  */

void FUN_100011f40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ae9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_10004cf70)();
  return;
}



/* Entry: 100011f4c; end: 100011fc3;  */

void FUN_100011f4c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100011fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14)) = (ulong)((int)param_2 - 1);
  return;
}



/* Entry: 100011fc4; end: 100012037;  */

void FUN_100011fc4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s7SwiftUI24ButtonStyleConfigurationVMa();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_10004cc80 + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 100012038; end: 100012063;  */

void FUN_100012038(void)

{
  func_0x000100012108(0x1000514e0,FUN_100011c28,&UNK_10003bec0);
  return;
}



/* Entry: 100012064; end: 100012077;  */

void FUN_100012064(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_10004ced8)(param_1,&UNK_10003dddc,1);
  return;
}



/* Entry: 100012078; end: 100012147;  */

void FUN_100012078(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam00000001000514f8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000514e8;
  func_0x0001000118b8(0x1000514e8,&UNK_10003bf10);
  uVar2 = 0x100051420;
  func_0x000100012108(0x100051420,PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVMa_10004c508,
                      PTR___s7SwiftUI24ButtonStyleConfigurationV5LabelVAA4ViewAAMc_10004c500);
  uVar3 = uVar2;
  FUN_100012148();
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  _swift_getWitnessTable
            (PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_10004c348,uVar1,
             &uStack_30);
  puRam00000001000514f8 = puVar4;
  return;
}



/* Entry: 100012148; end: 100012197;  */

void FUN_100012148(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100051500 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x1000514f0;
  func_0x0001000118b8(0x1000514f0,&UNK_10003bf20);
  puVar2 = PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_10004c4a0;
  _swift_getWitnessTable(PTR___s7SwiftUI19_BackgroundModifierVyxGAA04ViewD0AAMc_10004c4a0,uVar1);
  puRam0000000100051500 = puVar2;
  return;
}



/* Entry: 100012198; end: 1000127bf;  */

void FUN_100012198(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_100;
  ulong uStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  code *pcStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined4 uStack_6c;
  
  uVar12 = param_2;
  __s7SwiftUI5ColorV5clearACvgZ();
  lVar7 = 0;
  uStack_80 = uVar12;
  __s7SwiftUI11ColorSchemeOMa();
  lVar14 = *(long *)(lVar7 + -8);
  lVar15 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar12 = lVar15 + 0xfU & 0xfffffffffffffff0;
  lVar13 = (long)&lStack_100 - uVar12;
  uVar4 = *(undefined4 *)PTR___s7SwiftUI11ColorSchemeO5lightyA2CmFWC_10004c170;
  pcStack_f0 = *(code **)(lVar14 + 0x68);
  pcStack_88 = (code *)uVar12;
  uStack_6c = uVar4;
  (*pcStack_f0)(lVar13,uVar4,lVar7);
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar13);
  pcVar11 = *(code **)(lVar14 + 8);
  (*pcVar11)(lVar13,lVar7);
  puVar8 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self();
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puStack_98 = puVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  pcVar5 = pcStack_f0;
  lVar14 = lVar13 - uVar12;
  (*pcStack_f0)(lVar14,uVar4,lVar7);
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar14);
  (*pcVar11)(lVar14,lVar7);
  puVar8 = PTR__OBJC_CLASS___UIColor_100051030;
  _objc_opt_self();
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puVar9 = PTR__OBJC_CLASS___UIColor_100051030;
  puStack_a0 = puVar8;
  _objc_opt_self();
  puVar8 = puVar9;
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  puStack_a8 = puVar8;
  FUN_100038d80(2,0x1a,0,0);
  puVar8 = puVar9;
  func_0x00010003b520();
  _objc_retainAutoreleasedReturnValue();
  __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  lStack_90 = lVar15;
  puStack_78 = puVar8;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar14 = lVar13 - (long)pcStack_88;
  (*pcVar5)(lVar14,uStack_6c,lVar7);
  uVar12 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar14);
  pcStack_88 = pcVar11;
  (*pcVar11)(lVar14,lVar7);
  if ((uVar12 & 1) == 0) {
    func_0x00010003b520();
    _objc_retainAutoreleasedReturnValue();
    __s7SwiftUI5ColorVyACSo7UIColorCcfC();
  }
  else {
    puVar9 = puStack_78;
    _swift_retain();
  }
  lVar14 = lStack_90;
  puStack_b0 = puVar9;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar4 = uStack_6c;
  uStack_f8 = lVar14 + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar13 - uStack_f8;
  (*pcVar5)(lVar14,uStack_6c,lVar7);
  uVar12 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar14);
  pcVar11 = pcStack_88;
  (*pcStack_88)(lVar14,lVar7);
  bVar6 = (uVar12 & 1) == 0;
  uStack_b8 = 0xd000000000000011;
  if (bVar6) {
    uStack_b8 = 0x636170736b636162;
  }
  uStack_c0 = 0x8000000100045cf0;
  if (bVar6) {
    uStack_c0 = 0xed00006e6f634965;
  }
  lStack_c8 = lVar13;
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  uVar12 = uStack_f8;
  lVar13 = lVar13 - uStack_f8;
  (*pcVar5)(lVar13,uVar4,lVar7);
  uVar10 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar13);
  (*pcVar11)(lVar13,lVar7);
  lVar13 = lStack_c8;
  lStack_d8 = lStack_c8;
  bVar6 = (uVar10 & 1) != 0;
  lStack_c8 = 0x697966696e67616d;
  if (bVar6) {
    lStack_c8 = 0xd000000000000012;
  }
  uStack_d0 = 0x8000000100045cd0;
  if (!bVar6) {
    uStack_d0 = 0xee006e6f6349676e;
  }
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - uVar12;
  (*pcVar5)(lVar13,uVar4,lVar7);
  uVar10 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar13);
  (*pcVar11)(lVar13,lVar7);
  lVar13 = lStack_d8;
  lStack_e8 = lStack_d8;
  bVar6 = (uVar10 & 1) == 0;
  lStack_d8 = 0x69466e7275746572;
  if (bVar6) {
    lStack_d8 = 0x63496e7275746572;
  }
  uStack_e0 = 0xee006e6f63496c6c;
  if (bVar6) {
    uStack_e0 = 0xea00000000006e6f;
  }
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - uVar12;
  (*pcVar5)(lVar13,uVar4,lVar7);
  uVar10 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar13);
  (*pcVar11)(lVar13,lVar7);
  lVar13 = lStack_e8;
  lStack_100 = lStack_e8;
  bVar6 = (uVar10 & 1) == 0;
  lStack_e8 = 0x6c69467466696873;
  if (bVar6) {
    lStack_e8 = 0x6f63497466696873;
  }
  uVar1 = 0xed00006e6f63496c;
  if (bVar6) {
    uVar1 = 0xe90000000000006e;
  }
  (*(code *)PTR____chkstk_darwin_10004c8a8)();
  lVar13 = lVar13 - uVar12;
  (*pcVar5)(lVar13,uVar4,lVar7);
  uVar12 = param_2;
  __s7SwiftUI11ColorSchemeO2eeoiySbAC_ACtFZ(param_2,lVar13);
  (*pcVar11)(lVar13,lVar7);
  _swift_release(puStack_78);
  bVar6 = (uVar12 & 1) == 0;
  uVar2 = 0x7261447466696873;
  if (bVar6) {
    uVar2 = 0x67694c7466696873;
  }
  uVar3 = 0xed00006e6f63496b;
  if (bVar6) {
    uVar3 = 0xee006e6f63497468;
  }
  (*pcVar11)(param_2,lVar7);
  param_1[1] = 0x4028000000000000;
  *param_1 = 0x4018000000000000;
  param_1[2] = 4;
  param_1[4] = 0x403a000000000000;
  param_1[3] = 0x4034000000000000;
  param_1[5] = uStack_80;
  param_1[6] = puStack_98;
  param_1[7] = puStack_a0;
  param_1[8] = puStack_b0;
  param_1[9] = puStack_a8;
  param_1[10] = uStack_b8;
  param_1[0xb] = uStack_c0;
  param_1[0xc] = lStack_c8;
  param_1[0xd] = uStack_d0;
  param_1[0xe] = lStack_d8;
  param_1[0xf] = uStack_e0;
  param_1[0x10] = lStack_e8;
  param_1[0x11] = uVar1;
  param_1[0x12] = uVar2;
  param_1[0x13] = uVar3;
  return;
}



/* Entry: 1000127c0; end: 100012853;  */

long FUN_1000127c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100012854; end: 100012927;  */

undefined8 * FUN_100012854(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  param_1[6] = uVar7;
  param_1[7] = uVar9;
  uVar8 = param_2[8];
  uVar1 = param_2[9];
  param_1[8] = uVar8;
  param_1[9] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  uVar4 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar4;
  uVar5 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar5;
  uVar6 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar6;
  _swift_retain();
  _swift_retain(uVar7);
  _swift_retain(uVar9);
  _swift_retain(uVar8);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Entry: 100012928; end: 100012a93;  */

undefined8 * FUN_100012928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_retain();
  _swift_release(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x10] = param_2[0x10];
  uVar1 = param_1[0x11];
  param_1[0x11] = param_2[0x11];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x12] = param_2[0x12];
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 100012a94; end: 100012abf;  */

void FUN_100012a94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return;
}



/* Entry: 100012ac0; end: 100012b8b;  */

undefined8 * FUN_100012ac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_release(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  _swift_release(param_1[7]);
  uVar1 = param_1[8];
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_release(uVar1);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x11];
  uVar2 = param_1[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x13];
  uVar2 = param_1[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 100012b8c; end: 100012c4b;  */

int FUN_100012b8c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100012c4c; end: 100012c9b;  */

void FUN_100012c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 100012c9c; end: 100012e73;  */

void FUN_100012c9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  uVar4 = 0x100051508;
  FUN_100010860(0x100051508,&UNK_10003bf70);
  __s7SwiftUI7BindingV12wrappedValuexvg(auStack_60);
  __sSS6appendyySSF(param_1,param_2);
  __s7SwiftUI7BindingV12wrappedValuexvs(auStack_60,uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Entry: 100012e74; end: 100012ec7;  */

void FUN_100012e74(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong *unaff_x20;
  
  uVar1 = unaff_x20[1];
  if ((uVar1 >> 0x3d & 1) == 0) {
    uVar3 = *unaff_x20 & 0xffffffffffff;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100012e90);
      (*pcVar2)();
    }
  }
  else {
    uVar3 = uVar1 >> 0x38 & 0xf;
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100012ec8);
      (*pcVar2)();
    }
  }
  uVar4 = (uint)(*unaff_x20 >> 0x3b) & 1;
  if ((uVar1 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar1 = 7;
  if (uVar4 == 0) {
    uVar1 = 0xb;
  }
  __sSS5index6beforeSS5IndexVAD_tF(uVar1 | uVar3 << 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010003a938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSS6remove2atSJSS5IndexV_tF_10004ccb8)();
  return;
}



/* Entry: 100012ec8; end: 100012f0f;  */

void FUN_100012ec8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(uVar2);
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_10004ce70)();
  return;
}



/* Entry: 100012f10; end: 100012f63;  */

undefined1  [16] FUN_100012f10(void)

{
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100010860(0x100051508,&UNK_10003bf70);
  __s7SwiftUI7BindingV12wrappedValuexvg(auStack_50);
  return auStack_50;
}



/* Entry: 100012f64; end: 100012f6b;  */

void FUN_100012f64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  uVar4 = 0x100051508;
  FUN_100010860(0x100051508,&UNK_10003bf70);
  __s7SwiftUI7BindingV12wrappedValuexvg(auStack_60);
  __sSS6appendyySSF(param_1,param_2);
  __s7SwiftUI7BindingV12wrappedValuexvs(auStack_60,uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Entry: 100012f6c; end: 100013043;  */

undefined1  [16] FUN_100012f6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = &UNK_10003bf78;
  _swift_getKeyPath(&UNK_10003bf78);
  puVar2 = &UNK_10003bfa0;
  _swift_getKeyPath(&UNK_10003bfa0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return auStack_40;
}



/* Entry: 100013044; end: 100013047;  */

void FUN_100013044(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10003bf78;
  _swift_getKeyPath(&UNK_10003bf78);
  puVar2 = &UNK_10003bfa0;
  _swift_getKeyPath(&UNK_10003bfa0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010003ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_10004cf38)(puVar2);
  return;
}



/* Entry: 100013048; end: 1000130c7;  */

void FUN_100013048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10003bf78;
  _swift_getKeyPath(&UNK_10003bf78);
  puVar4 = &UNK_10003bfa0;
  _swift_getKeyPath(&UNK_10003bfa0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 1000130c8; end: 1000130cb;  */

void FUN_1000130c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10003bf78;
  _swift_getKeyPath(&UNK_10003bf78);
  puVar4 = &UNK_10003bfa0;
  _swift_getKeyPath(&UNK_10003bfa0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 1000130cc; end: 1000132bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1000130cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0x100051518;
  FUN_100010860(0x100051518,&UNK_10003bfc0);
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_10004c8a8)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_allocObject();
  lVar1 = _DAT_100051510;
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            ((long)&uStack_50 - extraout_x8,&uStack_50,PTR___sSSN_10004ccd0);
  (**(code **)(lVar3 + 0x20))(unaff_x20 + lVar1,(long)&uStack_50 - extraout_x8,lVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_unknownObjectRetain(param_1);
  func_0x0001000131a8();
  _swift_unknownObjectRelease(param_1);
  return unaff_x20;
}



/* Entry: 1000132bc; end: 100013357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000132bc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = _DAT_100051510;
  lVar2 = 0x100051518;
  FUN_100010860(0x100051518,&UNK_10003bfc0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_10004ce70)();
  return;
}



/* Entry: 100013358; end: 100013377;  */

void FUN_100013358(void)

{
  _objc_opt_self(&PTR_PTR_100051570);
  return;
}



/* Entry: 100013378; end: 100013383;  */

undefined * FUN_100013378(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_10004c0e0;
}



/* Entry: 100013384; end: 100013453;  */

undefined1  [16] FUN_100013384(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = &UNK_10003bf78;
  _swift_getKeyPath(&UNK_10003bf78);
  puVar2 = &UNK_10003bfa0;
  _swift_getKeyPath(&UNK_10003bfa0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return auStack_40;
}



/* Entry: 100013454; end: 10001346b;  */

void FUN_100013454(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x00010003b080(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x00010003b0e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
    uVar3 = 0xe000000000000000;
    uVar4 = param_2;
  }
  else {
    lVar2 = lVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar4 = param_2;
    _objc_release(lVar1);
    uVar3 = param_2;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x00010003b0c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar5 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    lVar5 = lVar1;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  lStack_50 = lVar2;
  uStack_48 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(lVar5,uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = uStack_48;
  lVar1 = lStack_50;
  _swift_getKeyPath(&UNK_10003bf78);
  _swift_getKeyPath(&UNK_10003bfa0);
  lStack_50 = lVar1;
  uStack_48 = uVar4;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&lStack_50);
  return;
}



/* Entry: 10001346c; end: 1000134eb;  */

void FUN_10001346c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x100051528;
  func_0x0001000134ac(0x100051528,0xff,FUN_1000134ec,&UNK_10003c040);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 1000134ec; end: 100013523;  */

void FUN_1000134ec(undefined8 param_1)

{
  if (lRam00000001000515f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10003dea0);
  return;
}



/* Entry: 100013524; end: 10001352f;  */

undefined * FUN_100013524(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_10004c0e0;
}



/* Entry: 100013530; end: 100013557;  */

void FUN_100013530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg();
  *param_1 = uVar1;
  return;
}



/* Entry: 100013558; end: 10001355f;  */

void FUN_100013558(void)

{
  if (lRam00000001000515f8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10003dea0);
  return;
}



/* Entry: 100013560; end: 1000135d7;  */

void FUN_100013560(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10003c0d8;
  lVar1 = 0x13f;
  FUN_1000135d8();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1000135d8; end: 100013627;  */

void FUN_1000135d8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000100051608 != 0) {
    return;
  }
  puVar1 = PTR___sSSN_10004ccd0;
  __s7Combine9PublishedVMa();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000100051608 = param_1;
  return;
}



/* Entry: 100013628; end: 100013657;  */

void FUN_100013628(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg();
  *param_1 = uVar1;
  return;
}



/* Entry: 100013658; end: 1000136bf;  */

undefined1 FUN_100013658(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath();
  _swift_getKeyPath(param_2);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(param_1);
  _swift_release(param_2);
  return uStack_31;
}



/* Entry: 1000136c0; end: 100013993;  */

undefined * FUN_1000136c0(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puStack_68;
  
  puVar4 = &UNK_10003c268;
  _swift_getKeyPath(&UNK_10003c268);
  puVar5 = &UNK_10003c290;
  _swift_getKeyPath(&UNK_10003c290);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&puStack_68);
  _swift_release(puVar4);
  _swift_release(puVar5);
  if ((char)puStack_68 == '\x01') {
    puVar4 = puRam0000000100054328;
    if (lRam0000000100051850 != -1) {
      _swift_once(0x100051850,0x100014654);
      puVar4 = puRam0000000100054328;
    }
  }
  else {
    puVar4 = &UNK_10003c2b0;
    _swift_getKeyPath(&UNK_10003c2b0);
    puVar5 = &UNK_10003c2d8;
    _swift_getKeyPath(&UNK_10003c2d8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&puStack_68);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if ((char)puStack_68 != '\0') {
      if (lRam0000000100051848 != -1) {
        _swift_once(0x100051848,0x100014630);
      }
      puVar5 = puRam0000000100054320;
      puVar4 = PTR___swiftEmptyArrayStorage_10004ce00;
      uVar12 = *(ulong *)(puRam0000000100054320 + 0x10);
      if (uVar12 == 0) {
        return PTR___swiftEmptyArrayStorage_10004ce00;
      }
      puStack_68 = PTR___swiftEmptyArrayStorage_10004ce00;
      FUN_100014738(0,uVar12,0);
      uVar11 = 0;
      do {
        puVar2 = puStack_68;
        if (*(ulong *)(puVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10001394c);
          (*pcVar3)();
        }
        lVar8 = *(long *)(puVar5 + uVar11 * 8 + 0x20);
        lVar9 = *(long *)(lVar8 + 0x10);
        if (lVar9 != 0) {
          _swift_bridgeObjectRetain(lVar8);
          func_0x000100014754(0,lVar9,0);
          puVar10 = (undefined8 *)(lVar8 + 0x28);
          do {
            uVar6 = puVar10[-1];
            uVar7 = *puVar10;
            __sSS10uppercasedSSyF();
            uVar1 = *(ulong *)(puVar4 + 0x10);
            if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
              func_0x000100014754(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
            }
            puVar10 = puVar10 + 2;
            *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
            *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x20) = uVar6;
            *(undefined8 *)(puVar4 + uVar1 * 0x10 + 0x28) = uVar7;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          _swift_bridgeObjectRelease(lVar8);
        }
        uVar1 = *(ulong *)(puVar2 + 0x10);
        puStack_68 = puVar2;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
          FUN_100014738(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
        }
        uVar11 = uVar11 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar4;
      } while (uVar11 != uVar12);
      return puStack_68;
    }
    puVar4 = puRam0000000100054320;
    if (lRam0000000100051848 != -1) {
      _swift_once(0x100051848,0x100014630);
      puVar4 = puRam0000000100054320;
    }
  }
  _swift_bridgeObjectRetain(puVar4);
  return puVar4;
}



/* Entry: 100013994; end: 100013d17;  */

void FUN_100013994(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 uStack_43;
  undefined1 uStack_42;
  char cStack_41;
  
  puVar1 = &UNK_10003c2b0;
  _swift_getKeyPath(&UNK_10003c2b0);
  puVar2 = &UNK_10003c2d8;
  _swift_getKeyPath(&UNK_10003c2d8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&cStack_41);
  _swift_release(puVar1);
  _swift_release(puVar2);
  _swift_getKeyPath(&UNK_10003c2b0);
  _swift_getKeyPath(&UNK_10003c2d8);
  if (cStack_41 == '\0') {
    uStack_43 = 1;
    _swift_retain();
    puVar3 = &uStack_43;
  }
  else {
    uStack_42 = 0;
    _swift_retain();
    puVar3 = &uStack_42;
  }
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (puVar3);
  return;
}



/* Entry: 100013d18; end: 100013e6b;  */

double FUN_100013d18(double param_1,double param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  char cStack_51;
  
  if (lRam0000000100051848 != -1) {
    param_3 = 0x100051848;
    _swift_once(0x100051848,0x100014630);
  }
  if (*(long *)(lRam0000000100054320 + 0x10) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulong *)(*(long *)(lRam0000000100054320 + *(long *)(lRam0000000100054320 + 0x10) * 8 +
                                0x18) + 0x10);
  }
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = uVar5 - 1;
  }
  FUN_1000136c0();
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + *(long *)(param_3 + 0x10) * 8 + 0x18);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRelease(param_3);
    uVar6 = *(ulong *)(lVar4 + 0x10);
  }
  _swift_bridgeObjectRelease();
  puVar2 = &UNK_10003c268;
  _swift_getKeyPath(&UNK_10003c268);
  puVar3 = &UNK_10003c290;
  _swift_getKeyPath(&UNK_10003c290);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&cStack_51);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if ((cStack_51 == '\x01') && (uVar6 != 0)) {
    param_1 = ((param_1 * (double)uVar5 + param_2 * (double)uVar1) - param_2 * (double)(uVar6 - 1))
              / (double)uVar6;
  }
  return param_1;
}



/* Entry: 100013e6c; end: 100013f03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013e6c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = _DAT_100051690;
  lVar2 = 0x100051840;
  FUN_100010860(0x100051840,&UNK_10003c250);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  lVar1 = _DAT_100051698;
  lVar2 = 0x100051838;
  FUN_100010860(0x100051838,&UNK_10003c248);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010003ad1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_10004ce70)();
  return;
}



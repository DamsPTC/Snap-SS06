/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00032ee0; end: 00032f23;  */

void FUN_00032ee0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  iVar1 = *(int *)(param_2 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x00032f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)param_1 + (long)iVar1,lVar2);
  return;
}



/* Entry: 00032f24; end: 00032f8f;  */

undefined8 * FUN_00032f24(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  uVar3 = *param_2;
  *param_1 = uVar3;
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar4)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 00032f90; end: 000330b7;  */

undefined8 * FUN_00032f90(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x14);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar2);
  return param_1;
}



/* Entry: 000330b8; end: 000330c3;  */

void FUN_000330b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_0099ba10)();
  return;
}



/* Entry: 000330c4; end: 0003313f;  */

ulong FUN_000330c4(ulong *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  __s10Foundation4DateVMa();
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0003313c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Entry: 00033140; end: 0003314b;  */

void FUN_00033140(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_storeEnumTagSinglePayloadGeneric_0099bb68)();
  return;
}



/* Entry: 0003314c; end: 000331bf;  */

void FUN_0003314c(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  __s10Foundation4DateVMa();
                    /* WARNING: Could not recover jumptable at 0x000331bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x14),param_2,param_2,lVar1);
  return;
}



/* Entry: 000331c0; end: 00033237;  */

void FUN_000331c0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBbWV_0099ae78 + 0x40;
  lVar1 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&puStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 00033238; end: 000332b7;  */

void FUN_00033238(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7128 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce3d4;
  _swift_getWitnessTable(&UNK_007ce3d4,&UNK_0099eaa8);
  puRam0000000000ae7128 = puVar1;
  return;
}



/* Entry: 000332b8; end: 000332fb;  */

undefined8 FUN_000332b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_00032cdc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 000332fc; end: 0003336b;  */

void FUN_000332fc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  if (*param_1 == 0) {
    uVar1 = 0xae7130;
    FUN_00016c74(0xae7130,&UNK_007ce300);
    uVar2 = uVar1;
    (*param_2)();
    uStack_38 = uVar2;
    _swift_getWitnessTable(param_3,uVar1,&uStack_38);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 0003336c; end: 000333ab;  */

void FUN_0003336c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d26a0;
  _swift_getWitnessTable(&UNK_007d26a0,&UNK_009a3000);
  puRam0000000000ae7160 = puVar1;
  return;
}



/* Entry: 000333ac; end: 00033513;  */

int FUN_000333ac(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00033428;
        goto LAB_0003340c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0003340c:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_00033428:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00033514; end: 00033553;  */

void FUN_00033514(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7170 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce3ac;
  _swift_getWitnessTable(&UNK_007ce3ac,&UNK_0099eaa8);
  puRam0000000000ae7170 = puVar1;
  return;
}



/* Entry: 00033554; end: 00033557;  */

void FUN_00033554(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce344;
  _swift_getWitnessTable(&UNK_007ce344,&UNK_0099eaa8);
  puRam0000000000ae7178 = puVar1;
  return;
}



/* Entry: 00033558; end: 00033597;  */

void FUN_00033558(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7178 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce344;
  _swift_getWitnessTable(&UNK_007ce344,&UNK_0099eaa8);
  puRam0000000000ae7178 = puVar1;
  return;
}



/* Entry: 00033598; end: 0003359b;  */

void FUN_00033598(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce31c;
  _swift_getWitnessTable(&UNK_007ce31c,&UNK_0099eaa8);
  puRam0000000000ae7180 = puVar1;
  return;
}



/* Entry: 0003359c; end: 000335db;  */

void FUN_0003359c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7180 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ce31c;
  _swift_getWitnessTable(&UNK_007ce31c,&UNK_0099eaa8);
  puRam0000000000ae7180 = puVar1;
  return;
}



/* Entry: 000335dc; end: 00033647;  */

undefined8
FUN_000335dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00033648(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Entry: 00033648; end: 00033a8b;  */

void FUN_00033648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_d0 [4];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar3 = 0;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar4 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820;
  _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820);
  _swift_retain(param_2);
  func_0x0077fce0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0xd000000000000018;
  uVar10 = 0x80000000008b5a10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018);
  puVar6 = puVar4;
  func_0x0078dc60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  func_0x00790a00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00790060(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d3c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
  _objc_opt_self();
  func_0x00793380();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release();
  uStack_80 = 0xd000000000000019;
  uStack_78 = 0x80000000008b5a30;
  uStack_90 = 0x7461686370616e53;
  uStack_88 = 0xe800000000000000;
  puStack_70 = (undefined8 *)puVar6;
  puStack_68 = (undefined8 *)uVar10;
  FUN_00033a8c();
  puVar6 = PTR___sSSN_0099b040;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x10) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x18) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3) = PTR___sSSN_0099b040;
  *(undefined **)((long)auStack_d0 + lVar3 + 8) = puVar7;
  puVar8 = &uStack_80;
  puVar11 = &uStack_90;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar11,0,0,0,1,PTR___sSSN_0099b040,PTR___sSSN_0099b040);
  _swift_bridgeObjectRelease(uVar10);
  uStack_80 = 0xd000000000000019;
  uStack_78 = 0x80000000008b5a50;
  uStack_90 = 0x7461686370616e53;
  uStack_88 = 0xe800000000000000;
  puStack_70 = puVar8;
  puStack_68 = puVar11;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x10) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x18) = puVar7;
  puVar8 = &uStack_80;
  puVar12 = &uStack_90;
  *(undefined **)((long)auStack_d0 + lVar3) = puVar6;
  *(undefined **)((long)auStack_d0 + lVar3 + 8) = puVar7;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar12,0,0,0,1,puVar6,puVar6);
  _swift_bridgeObjectRelease(puVar11);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar8,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  puVar6 = puVar4;
  func_0x00791000(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  lVar2 = lStack_a8;
  lVar1 = lStack_b0;
  (**(code **)(lStack_b0 + 0x68))
            ((long)&lStack_b0 + lVar3,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,
             lStack_a8);
  puVar6 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar5 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x80000000008b5a70);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar6);
  _objc_release(uVar5);
  (**(code **)(lVar1 + 8))((long)&lStack_b0 + lVar3,lVar2);
  puVar7 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  puVar9 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_opt_self();
  uVar5 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x80000000008b5aa0);
  _objc_retain(puVar4);
  uVar10 = uStack_a0;
  _swift_unknownObjectRetain(uStack_a0);
  _objc_retain(puVar7);
  func_0x00781100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _swift_unknownObjectRelease_n(uVar10,2);
  _swift_release(uStack_98);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  *(undefined **)(unaff_x20 + 0x10) = puVar9;
  return;
}



/* Entry: 00033a8c; end: 00033acb;  */

void FUN_00033a8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7188 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_0099b060;
  _swift_getWitnessTable(PTR___sSSSysMc_0099b060,PTR___sSSN_0099b040);
  puRam0000000000ae7188 = puVar1;
  return;
}



/* Entry: 00033acc; end: 00033ae7;  */

void FUN_00033acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00033ae8,0,0);
  return;
}



/* Entry: 00033ae8; end: 00033b53;  */

void FUN_00033ae8(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_00033b54;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_00033bbc();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 00033b54; end: 00033bbb;  */

void FUN_00033b54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00033b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00033bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 00033bbc; end: 0003470b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00033bbc(undefined1 *param_1,long param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 != 0) {
    puVar7 = &UNK_0099eb88;
    _swift_allocObject(&UNK_0099eb88,0x18,7);
    _swift_weakInit(puVar7 + 0x10,param_2);
    puVar1 = &UNK_0099ebb0;
    _swift_allocObject(&UNK_0099ebb0,0x20,7);
    *(undefined **)(puVar1 + 0x10) = puVar7;
    *(undefined1 **)(puVar1 + 0x18) = param_1;
    lVar2 = 0;
    FUN_00034878();
    lVar3 = lVar2;
    _objc_allocWithZone();
    puVar9 = (undefined8 *)(lVar3 + _DAT_00ae7248);
    *puVar9 = FUN_00034b40;
    puVar9[1] = puVar1;
    puVar7 = PTR_s_init_00abbf70;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    _objc_retain(lVar10);
    _objc_msgSendSuper2(&lStack_70,puVar7);
    func_0x000344a8();
    lVar3 = param_3;
    func_0x007814c0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar2 = lVar3;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(lVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
      lVar3 = lVar2;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar2,puVar7);
      puVar1 = PTR_PTR_00ac2818;
      _objc_opt_self(PTR_PTR_00ac2818);
      func_0x0077fce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(plVar4);
      lVar5 = lVar10;
      func_0x00792fa0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_4);
      _objc_release(lVar3);
      _objc_release(puVar1);
      _objc_release(plVar4);
      _objc_release(lVar5);
      FUN_00023358(lVar2,puVar7);
    }
    _objc_release(lVar10);
    _objc_release(plVar4);
    _objc_release(param_3);
    return;
  }
  puVar6 = param_1;
  FUN_00030868();
  puVar7 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar6,0,0);
  *puVar6 = 0;
  uVar8 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
  _swift_allocError();
  *puVar9 = puVar7;
                    /* WARNING: Could not recover jumptable at 0x0077b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_0099c078)(param_1,uVar8);
  return;
}



/* Entry: 0003470c; end: 0003475f;  */

void FUN_0003470c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00034760; end: 00034803; -[_TtC23ExtensionsStickerPickerP33_BD024C32DDF11561350A2DD196FD60CD26ComputeFeedResponseHandler onEvent:status:] */

void FUN_00034760(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    _objc_retain(param_4);
    _objc_retain(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_1);
    lVar1 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
    _objc_release(lVar1);
  }
  FUN_00034958(param_3,param_2);
  FUN_00023344(param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00034804; end: 00034863; -[_TtC23ExtensionsStickerPickerP33_BD024C32DDF11561350A2DD196FD60CD26ComputeFeedResponseHandler init] */

void FUN_00034804(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.ComputeFeedResponseHandler",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x34830);
  (*pcVar1)();
}



/* Entry: 00034864; end: 00034877; -[_TtC23ExtensionsStickerPickerP33_BD024C32DDF11561350A2DD196FD60CD26ComputeFeedResponseHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034864(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae7248 + 8));
  return;
}



/* Entry: 00034878; end: 00034897;  */

void FUN_00034878(void)

{
  _objc_opt_self(&PTR_PTR_00ac6a38);
  return;
}



/* Entry: 00034898; end: 00034957;  */

/* WARNING: Removing unreachable block (ram,0x00034a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00034898(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *unaff_x20;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00785200();
  _objc_release(param_1);
  puVar3 = (undefined1 *)0x0;
  if (unaff_x20 == (undefined1 *)0x0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    if (param_2 >> 0x3c < 0xf) {
      _objc_allocWithZone(PTR_PTR_00ac3210);
      func_0x00023304(puVar3,param_2);
      puVar5 = puVar3;
      FUN_00034898(puVar3,param_2);
      FUN_00023344(puVar3,param_2);
      pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7248);
      uVar2 = *(undefined8 *)((long)(unaff_x20 + _DAT_00ae7248) + 8);
      _swift_retain(uVar2);
      puVar3 = puVar5;
      _objc_retain(puVar5);
      (*pcVar1)(puVar5,0);
      _swift_release(uVar2);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(puVar3);
      return puVar3;
    }
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7248);
    puVar5 = *(undefined1 **)((long)(unaff_x20 + _DAT_00ae7248) + 8);
    FUN_00030868();
    puVar4 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar3,0,0);
    *puVar3 = 0;
    _swift_retain(puVar5);
    (*pcVar1)(puVar4,1);
    _swift_errorRelease(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(puVar5);
    return puVar5;
  }
  return unaff_x20;
}



/* Entry: 00034958; end: 00034af7;  */

/* WARNING: Removing unreachable block (ram,0x00034a48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00034958(undefined1 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  if (param_2 >> 0x3c < 0xf) {
    _objc_allocWithZone(PTR_PTR_00ac3210);
    func_0x00023304(param_1,param_2);
    puVar4 = param_1;
    FUN_00034898(param_1,param_2);
    FUN_00023344(param_1,param_2);
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7248);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7248))[1];
    _swift_retain(uVar2);
    puVar5 = puVar4;
    _objc_retain(puVar4);
    (*pcVar1)(puVar4,0);
    _swift_release(uVar2);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar5);
    return;
  }
  pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7248);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7248))[1];
  FUN_00030868();
  puVar3 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
  *param_1 = 0;
  _swift_retain(uVar2);
  (*pcVar1)(puVar3,1);
  _swift_errorRelease(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 00034af8; end: 00034b3f;  */

void FUN_00034af8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00034b40; end: 00034b47;  */

void FUN_00034b40(undefined1 *param_1,char param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long unaff_x20;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (param_2 == '\x01') {
    puVar18 = param_1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    puVar8 = puVar18;
    func_0x00780460();
    _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
    lVar7 = lVar7 + 0x10;
    _swift_weakLoadStrong();
    if (lVar7 != 0) {
      lVar19 = *(long *)(lVar7 + 0x18);
      _swift_retain(lVar19);
      _swift_release(lVar7);
      if (lVar19 != 0) {
        func_0x0002c3fc(0x5f657475706d6f63,0xec00000064656566,puVar8);
        _swift_release(lVar19);
      }
    }
    _objc_release(puVar18);
    puStack_88 = (undefined *)0x0;
    uStack_80 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2a);
    _swift_bridgeObjectRelease(uStack_80);
    puStack_88 = (undefined *)0xd000000000000028;
    uStack_80 = 0x80000000008b5b10;
    _swift_getErrorValue(param_1,auStack_90,auStack_a8);
    uVar9 = uStack_98;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_a0,uStack_98);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = uStack_80;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_88,uStack_80);
    _objc_release();
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar16 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar16 = param_1;
    _swift_errorRetain(param_1);
  }
  else {
    _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
    lVar7 = lVar7 + 0x10;
    _swift_weakLoadStrong();
    if (lVar7 != 0) {
      lVar19 = *(long *)(lVar7 + 0x18);
      _swift_retain(lVar19);
      _swift_release(lVar7);
      if (lVar19 != 0) {
        func_0x0002c264(0x5f657475706d6f63,0xec00000064656566);
        _swift_release(lVar19);
      }
    }
    puVar18 = param_1;
    func_0x0078c480();
    _objc_retainAutoreleasedReturnValue();
    if (puVar18 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x344a0);
      (*pcVar5)();
    }
    puVar8 = puVar18;
    func_0x0078c4c0();
    _objc_release(puVar18);
    if (puVar8 == (undefined1 *)0x0) {
      func_0x00783800();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x344a8);
        (*pcVar5)();
      }
      puVar18 = param_1;
      func_0x00788000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      if (puVar18 == (undefined1 *)0x0) {
        return;
      }
      puStack_88 = (undefined *)0x0;
      uVar9 = 0;
      FUN_00034b48(0,0xae68f0,&PTR_PTR_00ac2838);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (puVar18,&puStack_88,uVar9);
      _objc_release(puVar18);
      if (puStack_88 == (undefined *)0x0) {
        return;
      }
      **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = puStack_88;
LAB_00034490:
      _swift_continuation_throwingResume(lVar3);
      return;
    }
    puStack_88 = PTR___swiftEmptyArrayStorage_0099b8f0;
    func_0x0078c480();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x344a4);
      (*pcVar5)();
    }
    puVar18 = param_1;
    func_0x0078c4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined1 *)0x0) {
      puStack_b0 = (undefined1 *)0x0;
      uVar9 = 0;
      FUN_00034b48(0,0xae7278,&PTR_PTR_00ac3240);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (puVar18,&puStack_b0,uVar9);
      _objc_release();
      puVar8 = puStack_b0;
      param_1 = puVar18;
      if (puStack_b0 != (undefined1 *)0x0) {
        puVar18 = (undefined1 *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((ulong)puStack_b0 >> 0x3e == 0) {
          puVar20 = *(undefined1 **)(puVar18 + 0x10);
        }
        else {
          puVar20 = puStack_b0;
          if (-1 < (long)puStack_b0) {
            puVar20 = puVar18;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puVar15 = PTR___swiftEmptyArrayStorage_0099b8f0;
        if (puVar20 != (undefined1 *)0x0) {
          puVar22 = (undefined1 *)0x0;
          do {
            if (((ulong)puVar8 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar18 + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x34460);
                (*pcVar5)();
              }
              puVar10 = *(undefined1 **)(puVar8 + (long)puVar22 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar10 = puVar22;
              FUN_000386b0(puVar22,puVar8);
            }
            bVar6 = SCARRY8((long)puVar22,1);
            puVar22 = puVar22 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x3445c);
              (*pcVar5)();
            }
            puVar21 = puVar10;
            func_0x0078bb60();
            _objc_retainAutoreleasedReturnValue();
            if (puVar21 == (undefined1 *)0x0) {
LAB_000343c8:
              FUN_00030868();
              puVar15 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
              _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar21,0,0);
              *puVar21 = 0;
              uVar9 = 0xae60d0;
              func_0x000115a8(0xae60d0,&UNK_007ccdd0);
              puVar16 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
              _swift_allocError();
              *puVar16 = puVar15;
              _swift_continuation_throwingResumeWithError(lVar3,uVar9);
              _objc_release(puVar10);
              _swift_bridgeObjectRelease(puVar8);
              _swift_bridgeObjectRelease(puStack_88);
              return;
            }
            puStack_b0 = (undefined1 *)0x0;
            uVar9 = 0;
            FUN_00034b48(0,0xae7280,&PTR_PTR_00ac3248);
            __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                      (puVar21,&puStack_b0,uVar9);
            _objc_release();
            puVar4 = puStack_b0;
            if (puStack_b0 == (undefined1 *)0x0) goto LAB_000343c8;
            puVar21 = (undefined1 *)((ulong)puStack_b0 & 0xffffffffffffff8);
            if ((ulong)puStack_b0 >> 0x3e == 0) {
              puVar24 = *(undefined1 **)(puVar21 + 0x10);
            }
            else {
              puVar24 = puStack_b0;
              if (-1 < (long)puStack_b0) {
                puVar24 = puVar21;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar23 = (undefined1 *)0x0;
            puVar15 = PTR___swiftEmptyArrayStorage_0099b8f0;
            while (puVar24 != puVar23) {
              if (((ulong)puVar4 & 0xc000000000000001) == 0) {
                if (*(undefined1 **)(puVar21 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x34458);
                  (*pcVar5)();
                }
                puVar11 = *(undefined1 **)(puVar4 + (long)puVar23 * 8 + 0x20);
                _objc_retain();
              }
              else {
                puVar11 = puVar23;
                func_0x000384e0(puVar23,puVar4);
              }
              puVar1 = puVar23 + 1;
              if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x34454);
                (*pcVar5)();
              }
              puVar12 = puVar11;
              func_0x00781260();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar11);
              puVar23 = puVar23 + 1;
              if (puVar12 != (undefined1 *)0x0) {
                puVar14 = puVar15;
                _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                if ((((int)puVar14 == 0) || ((long)puVar15 < 0)) ||
                   (puVar14 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar15 >> 0x3e == 0) {
                    puVar13 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar13 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar15) {
                      puVar13 = puVar15;
                    }
                    __ss18_CocoaArrayWrapperV8endIndexSivg(puVar13);
                  }
                  puVar14 = (undefined *)0x0;
                  FUN_0002a20c(0,puVar13 + 1,1,puVar15);
                }
                uVar17 = (ulong)puVar14 & 0xffffffffffffff8;
                uVar2 = *(ulong *)(uVar17 + 0x10);
                puVar15 = puVar14;
                if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar2) {
                  puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
                  FUN_0002a20c(puVar15,uVar2 + 1,1,puVar14);
                  uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar17 + 0x10) = uVar2 + 1;
                *(undefined1 **)(uVar17 + uVar2 * 8 + 0x20) = puVar12;
                puVar23 = puVar1;
              }
            }
            _swift_bridgeObjectRelease(puVar4);
            FUN_0003a9ac(puVar15);
            _objc_release(puVar10);
            puVar15 = puStack_88;
          } while (puVar22 != puVar20);
        }
        _swift_bridgeObjectRelease(puVar8);
        **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = puVar15;
        goto LAB_00034490;
      }
    }
    FUN_00030868();
    puVar15 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    *param_1 = 0;
    uVar9 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar16 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar16 = puVar15;
  }
  _swift_continuation_throwingResumeWithError(lVar3,uVar9);
  return;
}



/* Entry: 00034b48; end: 00034b87;  */

void FUN_00034b48(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 00034b88; end: 00034bf3;  */

undefined8
FUN_00034b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_00034bf4(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Entry: 00034bf4; end: 00035037;  */

void FUN_00034bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 auStack_d0 [4];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  
  lVar3 = 0;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lStack_b0 = *(long *)(lVar3 + -8);
  lStack_a8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar4 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820;
  _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820);
  _swift_retain(param_2);
  func_0x0077fce0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0xd000000000000018;
  uVar10 = 0x80000000008b5a10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018);
  puVar6 = puVar4;
  func_0x0078dc60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(puVar6);
  func_0x00790a00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00790060(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d3c0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar7 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
  _objc_opt_self();
  func_0x00793380();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release();
  uStack_80 = 0xd000000000000019;
  uStack_78 = 0x80000000008b5a30;
  uStack_90 = 0x7461686370616e53;
  uStack_88 = 0xe800000000000000;
  puStack_70 = (undefined8 *)puVar6;
  puStack_68 = (undefined8 *)uVar10;
  FUN_00033a8c();
  puVar6 = PTR___sSSN_0099b040;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x10) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x18) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3) = PTR___sSSN_0099b040;
  *(undefined **)((long)auStack_d0 + lVar3 + 8) = puVar7;
  puVar8 = &uStack_80;
  puVar11 = &uStack_90;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar11,0,0,0,1,PTR___sSSN_0099b040,PTR___sSSN_0099b040);
  _swift_bridgeObjectRelease(uVar10);
  uStack_80 = 0xd000000000000019;
  uStack_78 = 0x80000000008b5a50;
  uStack_90 = 0x7461686370616e53;
  uStack_88 = 0xe800000000000000;
  puStack_70 = puVar8;
  puStack_68 = puVar11;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x10) = puVar7;
  *(undefined **)((long)auStack_d0 + lVar3 + 0x18) = puVar7;
  puVar8 = &uStack_80;
  puVar12 = &uStack_90;
  *(undefined **)((long)auStack_d0 + lVar3) = puVar6;
  *(undefined **)((long)auStack_d0 + lVar3 + 8) = puVar7;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar8,puVar12,0,0,0,1,puVar6,puVar6);
  _swift_bridgeObjectRelease(puVar11);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar8,puVar12);
  _swift_bridgeObjectRelease(puVar12);
  puVar6 = puVar4;
  func_0x00791000(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar6);
  lVar2 = lStack_a8;
  lVar1 = lStack_b0;
  (**(code **)(lStack_b0 + 0x68))
            ((long)&lStack_b0 + lVar3,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,
             lStack_a8);
  puVar6 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar5 = 0xd00000000000001e;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x80000000008b5b40);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar6);
  _objc_release(uVar5);
  (**(code **)(lVar1 + 8))((long)&lStack_b0 + lVar3,lVar2);
  puVar7 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  puVar9 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_opt_self();
  uVar10 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x80000000008b5b60);
  _objc_retain(puVar4);
  uVar5 = uStack_a0;
  _swift_unknownObjectRetain(uStack_a0);
  _objc_retain(puVar7);
  func_0x00781100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _swift_unknownObjectRelease_n(uVar5,2);
  _swift_release(uStack_98);
  _objc_release(puVar7);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar6);
  *(undefined **)(unaff_x20 + 0x10) = puVar9;
  return;
}



/* Entry: 00035038; end: 00035057;  */

void FUN_00035038(void)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00035058,0,0);
  return;
}



/* Entry: 00035058; end: 000350af;  */

void FUN_00035058(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_000350b0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_00035118();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 000350b0; end: 00035117;  */

void FUN_000350b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000350f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00035114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 00035118; end: 000353eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035118(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar11 = *(long *)(param_2 + 0x10);
  if (lVar11 != 0) {
    puVar9 = &UNK_0099ebd8;
    _swift_allocObject(&UNK_0099ebd8,0x18,7);
    _swift_weakInit(puVar9 + 0x10,param_2);
    puVar1 = &UNK_0099ec00;
    _swift_allocObject(&UNK_0099ec00,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar9;
    *(undefined1 **)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_3;
    lVar2 = 0;
    FUN_00035d98();
    lVar3 = lVar2;
    _objc_allocWithZone();
    puVar10 = (undefined8 *)(lVar3 + _DAT_00ae7340);
    *puVar10 = FUN_00036514;
    puVar10[1] = puVar1;
    puVar9 = PTR_s_init_00abbf70;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    _objc_retain(lVar11);
    _objc_msgSendSuper2(&lStack_70,puVar9);
    puVar8 = (undefined1 *)plVar4;
    func_0x00035974();
    puVar5 = puVar8;
    func_0x007814c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined1 *)0x0) {
      FUN_00030868();
      puVar9 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
      _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar5,0,0);
      *puVar5 = 0;
      uVar7 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      puVar10 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
      _swift_allocError();
      *puVar10 = puVar9;
      _swift_continuation_throwingResumeWithError(param_1,uVar7);
      _objc_release(puVar8);
      _objc_release(lVar11);
    }
    else {
      puVar6 = puVar5;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar5);
      uVar7 = 0xd000000000000042;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000042,0x80000000008b5bb0);
      puVar5 = puVar6;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar6,puVar9);
      puVar1 = PTR_PTR_00ac2818;
      _objc_opt_self(PTR_PTR_00ac2818);
      func_0x0077fce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(plVar4);
      lVar3 = lVar11;
      func_0x00792fa0(lVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      _objc_release(puVar5);
      _objc_release(puVar1);
      _objc_release(plVar4);
      _objc_release(lVar3);
      FUN_00023358(puVar6,puVar9);
      _objc_release(lVar11);
      _objc_release(plVar4);
      plVar4 = (long *)puVar8;
    }
    _objc_release(plVar4);
    return;
  }
  puVar8 = param_1;
  FUN_00030868();
  puVar9 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar8,0,0);
  *puVar8 = 0;
  uVar7 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar10 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
  _swift_allocError();
  *puVar10 = puVar9;
                    /* WARNING: Could not recover jumptable at 0x0077b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_0099c078)(param_1,uVar7);
  return;
}



/* Entry: 000353ec; end: 00035663;  */

void FUN_000353ec(undefined1 *param_1,char param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  if (param_2 == '\x01') {
    puVar2 = param_1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    puVar1 = puVar2;
    func_0x00780460();
    _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      lVar6 = *(long *)(param_3 + 0x18);
      _swift_retain(lVar6);
      _swift_release(param_3);
      if (lVar6 != 0) {
        func_0x0002c3fc(0x64656566,0xe400000000000000,puVar1);
        _swift_release(lVar6);
      }
    }
    _objc_release(puVar2);
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2a);
    _swift_bridgeObjectRelease(uStack_60);
    uStack_68 = 0xd000000000000028;
    uStack_60 = 0x80000000008b5b10;
    _swift_getErrorValue(param_1,auStack_70,auStack_88);
    uVar4 = uStack_78;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_80,uStack_78);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uStack_60;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_68,uStack_60);
    _objc_release();
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar5 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar5 = param_1;
    _swift_errorRetain(param_1);
  }
  else {
    _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong();
    if (param_3 != 0) {
      lVar6 = *(long *)(param_3 + 0x18);
      _swift_retain(lVar6);
      _swift_release(param_3);
      if (lVar6 != 0) {
        func_0x0002c264(0x64656566,0xe400000000000000);
        _swift_release(lVar6);
      }
    }
    func_0x0078bce0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined1 *)0x0) {
      puVar2 = param_1;
      FUN_00035664();
      **(undefined8 **)(*(long *)(param_4 + 0x40) + 0x28) = puVar2;
      _swift_continuation_throwingResume(param_4);
      _objc_release(param_1);
      return;
    }
    FUN_00030868();
    puVar3 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    *param_1 = 0;
    uVar4 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar5 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar5 = puVar3;
  }
  _swift_continuation_throwingResumeWithError(param_4,uVar4);
  return;
}



/* Entry: 00035664; end: 00035c2b;  */

undefined * FUN_00035664(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_210 [8];
  long lStack_208;
  long lStack_200;
  undefined1 auStack_1f8 [24];
  long lStack_1e0;
  long lStack_190;
  undefined1 auStack_188 [32];
  undefined1 auStack_168 [32];
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = 0;
  __s10Foundation25NSFastEnumerationIteratorVMa();
  lStack_208 = *(long *)(lVar2 + -8);
  lStack_200 = lVar2;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_208 + 0x40));
  FUN_00035db8(&uStack_148,param_1);
  puVar8 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lStack_138 != 0) {
    uStack_d8 = uStack_140;
    uStack_e0 = uStack_148;
    lStack_d0 = lStack_138;
    uStack_a0 = uStack_108;
    uStack_a8 = uStack_110;
    uStack_90 = uStack_f8;
    uStack_98 = uStack_100;
    uStack_80 = uStack_e8;
    uStack_88 = uStack_f0;
    uStack_c0 = uStack_128;
    uStack_c8 = uStack_130;
    uStack_b0 = uStack_118;
    uStack_b8 = uStack_120;
    FUN_00036584(&uStack_e0,auStack_1f8);
    puVar3 = (undefined *)0x0;
    FUN_0002a334(0,1,1,PTR___swiftEmptyArrayStorage_0099b8f0);
    uVar10 = *(ulong *)(puVar3 + 0x10);
    puVar8 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_0002a334(puVar8,uVar10 + 1,1,puVar3);
    }
    *(ulong *)(puVar8 + 0x10) = uVar10 + 1;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x38) = uStack_c8;
    *(long *)(puVar8 + uVar10 * 0x68 + 0x30) = lStack_d0;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x48) = uStack_b8;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x40) = uStack_c0;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x28) = uStack_d8;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x20) = uStack_e0;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x80) = uStack_80;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x68) = uStack_98;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x60) = uStack_a0;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x78) = uStack_88;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x70) = uStack_90;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x58) = uStack_a8;
    *(undefined8 *)(puVar8 + uVar10 * 0x68 + 0x50) = uStack_b0;
    func_0x000365c0(&uStack_148);
  }
  func_0x007899c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x35974);
    (*pcVar1)();
  }
  __sSo7NSArrayC10FoundationE12makeIteratorAC017NSFastEnumerationD0VyF
            (auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _objc_release(param_1);
  __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_1f8);
  puVar3 = PTR___sypN_0099b8d8;
  do {
    if (lStack_1e0 == 0) {
      (**(code **)(lStack_208 + 8))
                (auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_200);
      return puVar8;
    }
    FUN_000252c8(auStack_1f8,auStack_168);
    FUN_000232c8(auStack_168,auStack_188);
    uVar4 = 0;
    FUN_00036520(0);
    plVar5 = &lStack_190;
    _swift_dynamicCast(plVar5,auStack_188,puVar3 + 8,uVar4,6);
    lVar2 = lStack_190;
    puVar7 = puVar8;
    if (((ulong)plVar5 & 1) != 0) {
      lVar6 = lStack_190;
      FUN_00035664();
      uVar10 = *(ulong *)(lVar6 + 0x10);
      lVar11 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar11,uVar10)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x35944);
        (*pcVar1)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar7 == 0) ||
         (uVar9 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar9 < (long)(lVar11 + uVar10))) {
        FUN_0002a334();
        uVar9 = *(ulong *)(puVar7 + 0x18) >> 1;
        puVar8 = puVar7;
        if (*(long *)(lVar6 + 0x10) != 0) goto LAB_000358bc;
LAB_000357dc:
        _swift_bridgeObjectRelease(lVar6);
        puVar7 = puVar8;
        if (uVar10 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x35948);
          (*pcVar1)();
        }
      }
      else {
        puVar7 = puVar8;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_000357dc;
LAB_000358bc:
        if (uVar9 - *(long *)(puVar7 + 0x10) < uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x3594c);
          (*pcVar1)();
        }
        _swift_arrayInitWithCopy
                  (puVar7 + *(long *)(puVar7 + 0x10) * 0x68 + 0x20,lVar6 + 0x20,uVar10,&UNK_009a3000
                  );
        _swift_bridgeObjectRelease(lVar6);
        if (uVar10 != 0) {
          if (SCARRY8(*(long *)(puVar7 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x35950);
            (*pcVar1)();
          }
          *(ulong *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + uVar10;
        }
      }
      _objc_release(lVar2);
    }
    FUN_00036564(auStack_168);
    __s10Foundation25NSFastEnumerationIteratorV4nextypSgyF(auStack_1f8);
    puVar8 = puVar7;
  } while( true );
}



/* Entry: 00035c2c; end: 00035c7f;  */

void FUN_00035c2c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 00035c80; end: 00035d23; -[_TtC23ExtensionsStickerPickerP33_9B00652E174E13CBA9DEDDDA3EC052A419FeedResponseHandler onEvent:status:] */

void FUN_00035c80(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  if (param_3 == 0) {
    _objc_retain(param_4);
    _objc_retain(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    _objc_retain(param_4);
    _objc_retain(param_1);
    lVar1 = param_3;
    _objc_retain(param_3);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(param_3);
    _objc_release(lVar1);
  }
  FUN_0003632c(param_3,param_2);
  FUN_00023344(param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00035d24; end: 00035d83; -[_TtC23ExtensionsStickerPickerP33_9B00652E174E13CBA9DEDDDA3EC052A419FeedResponseHandler init] */

void FUN_00035d24(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.FeedResponseHandler",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x35d50);
  (*pcVar1)();
}



/* Entry: 00035d84; end: 00035d97; -[_TtC23ExtensionsStickerPickerP33_9B00652E174E13CBA9DEDDDA3EC052A419FeedResponseHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae7340 + 8));
  return;
}



/* Entry: 00035d98; end: 00035db7;  */

void FUN_00035d98(void)

{
  _objc_opt_self(&PTR_PTR_00ac6af8);
  return;
}



/* Entry: 00035db8; end: 0003626b;  */

void FUN_00035db8(undefined8 *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  uVar13 = param_2;
  func_0x00792f20();
  iVar2 = (int)uVar13;
  if (iVar2 < 8) {
    if (iVar2 < 5) {
      if (iVar2 == 1) {
        uStack_80 = 2;
      }
      else if (iVar2 == 4) {
        uStack_80 = 4;
      }
      else {
LAB_00035e9c:
        uStack_80 = 0;
      }
    }
    else if (iVar2 == 5) {
      uStack_80 = 5;
    }
    else {
      if (iVar2 != 7) goto LAB_00035e9c;
      uStack_80 = 6;
    }
  }
  else if (iVar2 < 0x13) {
    if (iVar2 == 8) {
      uStack_80 = 7;
    }
    else {
      if (iVar2 != 0xe) goto LAB_00035e9c;
      uStack_80 = 0xd;
    }
  }
  else if (iVar2 == 0x13) {
    uStack_80 = 0x14;
  }
  else {
    if (iVar2 != 0x19) goto LAB_00035e9c;
    uStack_80 = 0x16;
  }
  uVar13 = param_2;
  func_0x00789760();
  _objc_retainAutoreleasedReturnValue();
  if (uVar13 == 0) {
    uVar9 = 0;
    uVar13 = 0xe000000000000000;
    uVar14 = param_3;
  }
  else {
    uVar9 = uVar13;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar14 = param_3;
    _objc_release(uVar13);
    uVar13 = param_3;
  }
  uVar11 = param_2;
  func_0x00784300();
  if ((int)uVar11 == 0) {
    uStack_70 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar6 = 0xff;
  }
  else {
    uVar11 = param_2;
    func_0x00789060();
    _objc_retainAutoreleasedReturnValue();
    if (uVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x36268);
      (*pcVar1)();
    }
    uVar10 = uVar11;
    func_0x00792880();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    if (uVar10 == 0) {
      uStack_70 = 0;
      uVar10 = 0;
      uVar3 = uVar14;
    }
    else {
      uStack_70 = uVar10;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar3 = uVar14;
      _objc_release(uVar10);
      uVar10 = uVar14;
    }
    uVar14 = param_2;
    func_0x00789060();
    _objc_retainAutoreleasedReturnValue();
    if (uVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3626c);
      (*pcVar1)();
    }
    uVar12 = uVar14;
    func_0x00780d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    if (uVar12 == 0) {
      uVar11 = 0;
      uVar12 = 0;
      uVar6 = 0;
      uVar14 = uVar3;
    }
    else {
      uVar11 = uVar12;
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      uVar14 = uVar3;
      _objc_release(uVar12);
      uVar6 = 0;
      uVar12 = uVar3;
    }
  }
  uVar3 = param_2;
  func_0x00791ac0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x36258);
    (*pcVar1)();
  }
  uVar8 = uVar3;
  func_0x007808e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x3625c);
    (*pcVar1)();
  }
  uVar3 = uVar8;
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar3 == 0) {
    FUN_00036608(uStack_70,uVar10,uVar11,uVar12,uVar6);
LAB_00036154:
    _swift_bridgeObjectRelease(uVar13);
LAB_00036160:
    lVar7 = 0;
  }
  else {
    uVar8 = uVar3;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(uVar3);
    uVar3 = param_2;
    func_0x00791ac0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x36260);
      (*pcVar1)();
    }
    uVar4 = uVar3;
    func_0x007808e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x36264);
      (*pcVar1)();
    }
    uVar3 = uVar4;
    func_0x0077f6a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar3 == 0) {
      FUN_00036608(uStack_70,uVar10,uVar11,uVar12,uVar6);
      _swift_bridgeObjectRelease(uVar14);
      goto LAB_00036154;
    }
    lStack_68 = 0;
    __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
              (uVar3,&lStack_68,PTR___s10Foundation4DataVN_0099c3c0);
    _objc_release(uVar3);
    lVar7 = lStack_68;
    if (lStack_68 != 0) {
      uVar3 = uVar8 & 0xffffffffffff;
      if ((uVar14 & 0x2000000000000000) != 0) {
        uVar3 = uVar14 >> 0x38 & 0xf;
      }
      if ((uVar3 != 0) && (*(long *)(lStack_68 + 0x10) != 0)) {
        uVar3 = param_2;
        func_0x00784360();
        if ((uVar3 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar14);
          _swift_bridgeObjectRelease(lVar7);
          uVar8 = 0;
          lVar7 = 0;
          uVar14 = 3;
        }
        func_0x00791ae0();
        param_2 = param_2 & 0xffffffff;
        puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
        goto LAB_0003618c;
      }
      FUN_00036608(uStack_70,uVar10,uVar11,uVar12,uVar6);
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_00036160;
    }
    FUN_00036608(uStack_70,uVar10,uVar11,uVar12,uVar6);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar13);
  }
  uVar13 = 0;
  uVar14 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uStack_70 = 0;
  puVar5 = (undefined *)0x0;
  param_2 = 0;
  uVar6 = 0;
  uStack_80 = 0;
LAB_0003618c:
  *param_1 = uStack_80;
  param_1[1] = uVar9;
  param_1[2] = uVar13;
  param_1[3] = uStack_70;
  param_1[4] = uVar10;
  param_1[5] = uVar11;
  param_1[6] = uVar12;
  param_1[7] = uVar6;
  param_1[8] = puVar5;
  param_1[9] = uVar8;
  param_1[10] = uVar14;
  param_1[0xb] = lVar7;
  param_1[0xc] = param_2;
  return;
}



/* Entry: 0003626c; end: 0003632b;  */

/* WARNING: Removing unreachable block (ram,0x0003641c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0003626c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *unaff_x20;
  
  lVar6 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00785200();
  _objc_release(param_1);
  puVar3 = (undefined1 *)0x0;
  if (unaff_x20 == (undefined1 *)0x0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release();
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar6) {
    ___stack_chk_fail();
    if (param_2 >> 0x3c < 0xf) {
      _objc_allocWithZone(PTR_PTR_00ac2880);
      func_0x00023304(puVar3,param_2);
      puVar5 = puVar3;
      FUN_0003626c(puVar3,param_2);
      FUN_00023344(puVar3,param_2);
      pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7340);
      uVar2 = *(undefined8 *)((long)(unaff_x20 + _DAT_00ae7340) + 8);
      _swift_retain(uVar2);
      puVar3 = puVar5;
      _objc_retain(puVar5);
      (*pcVar1)(puVar5,0);
      _swift_release(uVar2);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_0099ada0)(puVar3);
      return puVar3;
    }
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7340);
    puVar5 = *(undefined1 **)((long)(unaff_x20 + _DAT_00ae7340) + 8);
    FUN_00030868();
    puVar4 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar3,0,0);
    *puVar3 = 0;
    _swift_retain(puVar5);
    (*pcVar1)(puVar4,1);
    _swift_errorRelease(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(puVar5);
    return puVar5;
  }
  return unaff_x20;
}



/* Entry: 0003632c; end: 000364cb;  */

/* WARNING: Removing unreachable block (ram,0x0003641c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003632c(undefined1 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  if (param_2 >> 0x3c < 0xf) {
    _objc_allocWithZone(PTR_PTR_00ac2880);
    func_0x00023304(param_1,param_2);
    puVar4 = param_1;
    FUN_0003626c(param_1,param_2);
    FUN_00023344(param_1,param_2);
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7340);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7340))[1];
    _swift_retain(uVar2);
    puVar5 = puVar4;
    _objc_retain(puVar4);
    (*pcVar1)(puVar4,0);
    _swift_release(uVar2);
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_0099ada0)(puVar5);
    return;
  }
  pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7340);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7340))[1];
  FUN_00030868();
  puVar3 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
  *param_1 = 0;
  _swift_retain(uVar2);
  (*pcVar1)(puVar3,1);
  _swift_errorRelease(puVar3);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2);
  return;
}



/* Entry: 000364cc; end: 00036513;  */

void FUN_000364cc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00036514; end: 0003651f;  */

void FUN_00036514(undefined1 *param_1,char param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (param_2 == '\x01') {
    puVar4 = param_1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    puVar2 = puVar4;
    func_0x00780460();
    _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0);
    lVar3 = lVar3 + 0x10;
    _swift_weakLoadStrong();
    if (lVar3 != 0) {
      lVar8 = *(long *)(lVar3 + 0x18);
      _swift_retain(lVar8);
      _swift_release(lVar3);
      if (lVar8 != 0) {
        func_0x0002c3fc(0x64656566,0xe400000000000000,puVar2);
        _swift_release(lVar8);
      }
    }
    _objc_release(puVar4);
    uStack_68 = 0;
    uStack_60 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x2a);
    _swift_bridgeObjectRelease(uStack_60);
    uStack_68 = 0xd000000000000028;
    uStack_60 = 0x80000000008b5b10;
    _swift_getErrorValue(param_1,auStack_70,auStack_88);
    uVar6 = uStack_78;
    __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_80,uStack_78);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uStack_60;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_68,uStack_60);
    _objc_release();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar7 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar7 = param_1;
    _swift_errorRetain(param_1);
  }
  else {
    _swift_beginAccess(lVar3 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x20));
    lVar3 = lVar3 + 0x10;
    _swift_weakLoadStrong();
    if (lVar3 != 0) {
      lVar8 = *(long *)(lVar3 + 0x18);
      _swift_retain(lVar8);
      _swift_release(lVar3);
      if (lVar8 != 0) {
        func_0x0002c264(0x64656566,0xe400000000000000);
        _swift_release(lVar8);
      }
    }
    func_0x0078bce0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined1 *)0x0) {
      puVar4 = param_1;
      FUN_00035664();
      **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = puVar4;
      _swift_continuation_throwingResume(lVar1);
      _objc_release(param_1);
      return;
    }
    FUN_00030868();
    puVar5 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    *param_1 = 0;
    uVar6 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar7 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar7 = puVar5;
  }
  _swift_continuation_throwingResumeWithError(lVar1,uVar6);
  return;
}



/* Entry: 00036520; end: 00036563;  */

void FUN_00036520(void)

{
  undefined *puVar1;
  
  if (puRam0000000000ae7370 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_00ac3220;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000000ae7370 = puVar1;
  return;
}



/* Entry: 00036564; end: 00036583;  */

void FUN_00036564(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00036578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 00036584; end: 00036607;  */

undefined8 FUN_00036584(undefined8 param_1,undefined8 param_2)

{
  FUN_0008004c(param_2,param_1);
  return param_2;
}



/* Entry: 00036608; end: 0003661b;  */

void FUN_00036608(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 char param_5)

{
  uint uVar1;
  
  if (param_5 == -1) {
    return;
  }
  if (param_5 == '\x01') {
    FUN_00023358();
    uVar1 = (uint)(param_4 >> 0x3e);
    if (uVar1 != 1) {
      if (uVar1 != 2) {
        return;
      }
      _swift_release(param_3);
    }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(param_4 & 0x3fffffffffffffff);
    return;
  }
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
  return;
}



/* Entry: 0003661c; end: 0003666b;  */

void FUN_0003661c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 char param_5)

{
  uint uVar1;
  
  if (param_5 != '\x01') {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_4);
    return;
  }
  FUN_00023358();
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_4 & 0x3fffffffffffffff);
  return;
}



/* Entry: 0003666c; end: 0003681b;  */

long FUN_0003666c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_allocObject();
  func_0x00035c60(0);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  _swift_allocObject();
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(param_6);
  uVar1 = param_1;
  _swift_unknownObjectRetain();
  FUN_00034bf4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x00034740(0);
  _swift_allocObject();
  FUN_00033648(param_1,param_3,param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return unaff_x20;
}



/* Entry: 0003681c; end: 00036a0b;  */

void __s23ExtensionsStickerPicker20StickersFeedsServiceC05fetchE8MetaDataAA0B5ItemsVyYaKF
               (undefined8 param_1)

{
  qword *pqVar1;
  undefined8 unaff_x20;
  qword unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  pqVar1 = &segment_command_00000020.filesize;
  _swift_task_alloc();
  *(qword **)(unaff_x22 + 0xf0) = pqVar1;
  *pqVar1 = unaff_x22;
  pqVar1[1] = 0x36864;
  pqVar1[2] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x36bbc,0,0);
  return;
}



/* Entry: 00036a0c; end: 00036b57;  */

void FUN_00036a0c(void)

{
  undefined *puVar1;
  code *pcVar2;
  char *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  FUN_00037174(unaff_x22 + 0x10);
  if (*(char *)(unaff_x22 + 0x10) == '\x02') {
    lVar5 = *(long *)(unaff_x22 + 0x110);
    lVar6 = *(long *)(unaff_x22 + 0x100);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x108));
    if (lVar5 + 1 != lVar6) {
      lVar5 = *(long *)(unaff_x22 + 0x110);
      *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x120);
LAB_00036ac4:
      uVar4 = lVar5 + 1;
      *(ulong *)(unaff_x22 + 0x110) = uVar4;
      if (uVar4 < *(ulong *)(*(long *)(unaff_x22 + 0xf8) + 0x10)) {
        lVar5 = *(long *)(unaff_x22 + 0xf8) + uVar4 * 0x68;
        uVar9 = *(undefined8 *)(lVar5 + 0x28);
        uVar8 = *(undefined8 *)(lVar5 + 0x20);
        uVar10 = *(undefined8 *)(lVar5 + 0x30);
        uVar12 = *(undefined8 *)(lVar5 + 0x48);
        uVar11 = *(undefined8 *)(lVar5 + 0x40);
        *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(lVar5 + 0x38);
        *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar11;
        *(undefined8 *)(unaff_x22 + 0x18) = uVar9;
        *(undefined8 *)(unaff_x22 + 0x10) = uVar8;
        uVar9 = *(undefined8 *)(lVar5 + 0x58);
        uVar8 = *(undefined8 *)(lVar5 + 0x50);
        uVar11 = *(undefined8 *)(lVar5 + 0x68);
        uVar10 = *(undefined8 *)(lVar5 + 0x60);
        uVar13 = *(undefined8 *)(lVar5 + 0x78);
        uVar12 = *(undefined8 *)(lVar5 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(lVar5 + 0x80);
        *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
        *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
        *(undefined8 *)(unaff_x22 + 0x68) = uVar13;
        *(undefined8 *)(unaff_x22 + 0x60) = uVar12;
        *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
        *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
        FUN_00036584(unaff_x22 + 0x10,unaff_x22 + 0x78);
        pcVar3 = section_00000068.segname + 8;
        _swift_task_alloc();
        *(char **)(unaff_x22 + 0x118) = pcVar3;
        *(long *)pcVar3 = unaff_x22;
        *(qword *)(pcVar3 + 8) = 0x369ac;
        uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
        *(long *)(pcVar3 + 0x28) = unaff_x22 + 0x10;
        *(undefined8 *)(pcVar3 + 0x30) = uVar8;
        lVar5 = 0;
        __s10Foundation4DateVMa();
        *(long *)(pcVar3 + 0x38) = lVar5;
        lVar5 = *(long *)(lVar5 + -8);
        *(long *)(pcVar3 + 0x40) = lVar5;
        uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(pcVar3 + 0x48) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00036e48,0,0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x36b58);
      (*pcVar2)();
    }
    puVar7 = (undefined8 *)(unaff_x22 + 0x120);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x110);
    lVar5 = *(long *)(unaff_x22 + 0x100);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x120));
    if (lVar6 + 1 != lVar5) {
      lVar5 = *(long *)(unaff_x22 + 0x110);
      goto LAB_00036ac4;
    }
    puVar7 = (undefined8 *)(unaff_x22 + 0x108);
  }
  uVar8 = *puVar7;
  puVar7 = *(undefined8 **)(unaff_x22 + 0xe0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xf8));
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
  puVar7[1] = puVar1;
  puVar7[2] = puVar1;
  puVar7[3] = puVar1;
  puVar7[4] = uVar8;
                    /* WARNING: Could not recover jumptable at 0x00036aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00036b58; end: 00036ba3;  */

void FUN_00036b58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  FUN_00037174(unaff_x22 + 0x10);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00036ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00036ba4; end: 00036bd7;  */

void FUN_00036ba4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x36bbc,0,0);
  return;
}



/* Entry: 00036bd8; end: 00036c17;  */

void FUN_00036bd8(undefined8 param_1)

{
  long unaff_x22;
  
  FUN_00031368();
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00036c18,0,0);
  return;
}



/* Entry: 00036c18; end: 00036cc7;  */

void FUN_00036c18(void)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00036c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar4 = *(undefined8 **)(*(long *)(unaff_x22 + 0x10) + 0x10);
  *(undefined8 **)(unaff_x22 + 0x28) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined **)(unaff_x22 + 0x48) = PTR___swiftEmptyArrayStorage_0099b8f0;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    pcVar2 = (code *)0x36dac;
  }
  else {
    pcVar1 = section_00000068.sectname + 8;
    _swift_retain(puVar4);
    _swift_task_alloc();
    *(char **)(unaff_x22 + 0x30) = pcVar1;
    *(long *)pcVar1 = unaff_x22;
    *(code **)(pcVar1 + 8) = FUN_00036cc8;
    *(undefined8 **)(pcVar1 + 0x58) = puVar4;
    *(undefined8 *)(pcVar1 + 0x60) = *puVar4;
    pcVar2 = FUN_00035058;
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar2,uVar3,0);
  return;
}



/* Entry: 00036cc8; end: 00036d33;  */

void FUN_00036cc8(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_00036d34;
  }
  else {
    pcVar1 = (code *)0x36d78;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 00036d34; end: 00036e47;  */

void FUN_00036d34(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x36dac,*(undefined8 *)(unaff_x22 + 0x18),0);
  return;
}



/* Entry: 00036e48; end: 00036f0b;  */

void FUN_00036e48(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  bVar1 = **(byte **)(unaff_x22 + 0x28);
  *(ulong *)(unaff_x22 + 0x20) = (ulong)bVar1;
  puVar2 = PTR___sSus23CustomStringConvertiblesWP_0099b368;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSuN_0099b360,PTR___sSus23CustomStringConvertiblesWP_0099b368);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  *(undefined8 *)(unaff_x22 + 0x50) = 0x5f64656566;
  *(undefined8 *)(unaff_x22 + 0x58) = 0xe500000000000000;
  if ((ulong)bVar1 == 2) {
    lVar3 = *(long *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(lVar3 + 0x28) = 0x5f64656566;
    *(undefined8 *)(lVar3 + 0x30) = 0xe500000000000000;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
  }
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x20);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00036f0c,uVar4,0);
  return;
}



/* Entry: 00036f0c; end: 00036fcf;  */

void FUN_00036f0c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_00030f4c(uVar1,*(undefined8 *)(unaff_x22 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x68) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(0x36f50,0,0);
  return;
}



/* Entry: 00036fd0; end: 00037057;  */

void FUN_00036fd0(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x48);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x58));
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0003702c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037058,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Entry: 00037058; end: 00037173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037058(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long *plVar10;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar4 = *(long *)(unaff_x22 + 0x40);
  __s10Foundation4DateVACycfC(uVar1);
  lVar6 = 0;
  func_0x00032c4c();
  lVar7 = lVar6;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_00ae7018) = uVar9;
  (**(code **)(lVar4 + 0x10))(lVar7 + _DAT_00b647d8,uVar1,uVar2);
  plVar10 = (long *)(unaff_x22 + 0x10);
  *plVar10 = lVar7;
  *(long *)(unaff_x22 + 0x18) = lVar6;
  puVar5 = PTR_s_init_00abbf70;
  _swift_bridgeObjectRetain(uVar9);
  _objc_msgSendSuper2(plVar10,puVar5);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  FUN_00030a38(plVar10,uVar3,uVar8);
  _objc_release(plVar10);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00037170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 00037174; end: 000371a7;  */

undefined8 FUN_00037174(undefined8 param_1)

{
  (*(code *)(undefined *)0x7ffe4)();
  return param_1;
}



/* Entry: 000371a8; end: 0003723f;  */

void __s23ExtensionsStickerPicker20StickersFeedsServiceC22addItemsToRecentsCacheyySaySo14SCCTPEXTCTItemCGYaF
               (undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  lVar3 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0x48) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037240,0,0);
  return;
}



/* Entry: 00037240; end: 0003730f;  */

void FUN_00037240(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x28);
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x30);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(unaff_x22 + 0x28);
    if (uVar3 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
      *(ulong *)(unaff_x22 + 0x70) = uVar4;
    }
    else {
      uVar4 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar4 = uVar3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      *(ulong *)(unaff_x22 + 0x70) = uVar4;
    }
    if (uVar4 != 0) {
      uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x20);
      *(undefined8 *)(unaff_x22 + 0x78) = uVar5;
      _swift_bridgeObjectRetain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037310,uVar5,0);
      return;
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0003730c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00037310; end: 00037353;  */

void FUN_00037310(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x00031174(uVar1,*(undefined8 *)(unaff_x22 + 0x68));
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037354,0,0);
  return;
}



/* Entry: 00037354; end: 00037c47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00037354(void)

{
  undefined *puVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  code *pcVar19;
  long lVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puStack_68;
  
  lVar20 = _DAT_00b647d8;
  lVar12 = *(long *)(unaff_x22 + 0x80);
  puVar11 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar12 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
    puVar11 = *(undefined1 **)(lVar12 + _DAT_00ae7018);
    pcVar19 = *(code **)(*(long *)(unaff_x22 + 0x50) + 0x10);
    _swift_bridgeObjectRetain(puVar11);
    (*pcVar19)(uVar8,lVar12 + lVar20,uVar9);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
  lVar20 = *(long *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(lVar20 + 0x38))(uVar15,lVar12 == 0,1,uVar9);
  *(undefined1 **)(unaff_x22 + 0x20) = puVar11;
  FUN_00037d20(uVar15,uVar8);
  pcVar19 = *(code **)(lVar20 + 0x30);
  (*pcVar19)(uVar8,1,uVar9);
  if ((int)uVar8 == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    __s10Foundation4DateVACycfC(*(undefined8 *)(unaff_x22 + 0x58));
    puVar5 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    (*pcVar19)(uVar9,1,uVar8);
    if ((int)uVar9 != 1) {
      func_0x000138f4(*(undefined8 *)(unaff_x22 + 0x38));
    }
  }
  else {
    puVar5 = *(undefined1 **)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x58),puVar5,*(undefined8 *)(unaff_x22 + 0x48));
  }
  if (*(long *)(unaff_x22 + 0x70) < 1) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c40);
    (*pcVar19)();
  }
  lVar20 = 0;
  uVar6 = *(ulong *)(unaff_x22 + 0x28);
LAB_0003748c:
  if ((uVar6 & 0xc000000000000001) == 0) {
    lVar12 = *(long *)(uVar6 + 0x20 + lVar20 * 8);
    _objc_retain();
  }
  else {
    puVar5 = *(undefined1 **)(unaff_x22 + 0x28);
    lVar12 = lVar20;
    FUN_000384f4(lVar20,puVar5,&PTR_PTR_00ac2838,0xae68f0);
  }
  uVar7 = (ulong)puVar11 & 0x8000000000000000;
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar23 = *(undefined1 **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar23 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if (uVar7 != 0) {
      puVar23 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_68 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
  puVar21 = (undefined1 *)0x0;
  lVar20 = lVar20 + 1;
  while (puVar23 != puVar21) {
    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
      if (*(undefined1 **)(puStack_68 + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x37bfc);
        (*pcVar19)();
      }
      puVar3 = *(undefined1 **)(puVar11 + (long)puVar21 * 8 + 0x20);
      _objc_retain();
    }
    else {
      puVar3 = puVar21;
      puVar5 = puVar11;
      FUN_000384f4(puVar21,puVar11,&PTR_PTR_00ac2838,0xae68f0);
    }
    puVar13 = puVar3;
    func_0x00784580();
    _objc_retainAutoreleasedReturnValue();
    if (puVar13 == (undefined1 *)0x0) {
      puVar24 = (undefined1 *)0x0;
      puVar13 = (undefined1 *)0xf000000000000000;
      puVar10 = puVar5;
    }
    else {
      puVar24 = puVar13;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      puVar10 = puVar5;
      _objc_release(puVar13);
      puVar13 = puVar5;
    }
    lVar14 = lVar12;
    func_0x00784580();
    _objc_retainAutoreleasedReturnValue();
    if (lVar14 == 0) {
      if (0xe < (ulong)puVar13 >> 0x3c) {
LAB_00037698:
        FUN_00023344(puVar24);
        _objc_release(puVar3);
LAB_000376ac:
        puVar5 = puVar21;
        if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x37c3c);
          (*pcVar19)();
        }
        goto LAB_000376c8;
      }
      lVar17 = 0;
      puVar5 = (undefined1 *)0xf000000000000000;
LAB_00037508:
      FUN_00023344(puVar24,puVar13);
      FUN_00023344(lVar17);
      _objc_release(puVar3);
    }
    else {
      lVar17 = lVar14;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(lVar14);
      puVar5 = puVar10;
      if (0xe < (ulong)puVar13 >> 0x3c) {
        if (0xe < (ulong)puVar10 >> 0x3c) goto LAB_00037698;
        goto LAB_00037508;
      }
      if (0xe < (ulong)puVar10 >> 0x3c) goto LAB_00037508;
      FUN_000308a8(puVar24,puVar13);
      FUN_000308a8(lVar17,puVar10);
      puVar4 = puVar24;
      FUN_00038814(puVar24,puVar13,lVar17,puVar10);
      FUN_00023344(lVar17,puVar10);
      FUN_00023344(puVar24,puVar13);
      FUN_00023344(lVar17,puVar10);
      FUN_00023344(puVar24);
      _objc_release(puVar3);
      puVar5 = puVar13;
      if (((ulong)puVar4 & 1) != 0) goto LAB_000376ac;
    }
    bVar2 = SCARRY8((long)puVar21,1);
    puVar21 = puVar21 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c00);
      (*pcVar19)();
    }
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar21 = *(undefined1 **)(puStack_68 + 0x10);
  }
  else {
    puVar21 = puStack_68;
    if (uVar7 != 0) {
      puVar21 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  goto LAB_000379cc;
LAB_000376c8:
  puVar5 = puVar5 + 1;
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar23 = *(undefined1 **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    puVar3 = puVar13;
  }
  else {
    puVar23 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar11) {
      puVar23 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar3 = puVar13;
  }
  if (puVar5 == puVar23) goto LAB_000379a8;
  if (((ulong)puVar11 & 0xc000000000000001) == 0) {
    if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c04);
      (*pcVar19)();
    }
    if (*(undefined1 **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c08);
      (*pcVar19)();
    }
    puVar23 = *(undefined1 **)(puVar11 + (long)puVar5 * 8 + 0x20);
    _objc_retain();
  }
  else {
    puVar23 = puVar5;
    puVar3 = puVar11;
    FUN_000384f4(puVar5,puVar11,&PTR_PTR_00ac2838,0xae68f0);
  }
  puVar13 = puVar23;
  func_0x00784580();
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 == (undefined1 *)0x0) {
    puVar24 = (undefined1 *)0x0;
    puVar13 = (undefined1 *)0xf000000000000000;
    puVar10 = puVar3;
  }
  else {
    puVar24 = puVar13;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puVar10 = puVar3;
    _objc_release(puVar13);
    puVar13 = puVar3;
  }
  lVar14 = lVar12;
  func_0x00784580();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 == 0) {
    if ((ulong)puVar13 >> 0x3c < 0xf) {
      lVar17 = 0;
      puVar10 = (undefined1 *)0xf000000000000000;
      goto LAB_00037834;
    }
LAB_00037794:
    FUN_00023344(puVar24);
    _objc_release(puVar23);
  }
  else {
    lVar17 = lVar14;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar14);
    if ((ulong)puVar13 >> 0x3c < 0xf) {
      if (0xe < (ulong)puVar10 >> 0x3c) goto LAB_00037834;
      FUN_000308a8(puVar24,puVar13);
      FUN_000308a8(lVar17,puVar10);
      puVar3 = puVar24;
      FUN_00038814(puVar24,puVar13,lVar17,puVar10);
      FUN_00023344(lVar17,puVar10);
      FUN_00023344(puVar24,puVar13);
      FUN_00023344(lVar17,puVar10);
      FUN_00023344(puVar24);
      _objc_release(puVar23);
      if (((ulong)puVar3 & 1) != 0) goto LAB_000376c0;
    }
    else {
      if (0xe < (ulong)puVar10 >> 0x3c) goto LAB_00037794;
LAB_00037834:
      FUN_00023344(puVar24,puVar13);
      FUN_00023344(lVar17);
      _objc_release(puVar23);
      puVar13 = puVar10;
    }
    if (puVar21 != puVar5) {
      if (((ulong)puVar11 & 0xc000000000000001) == 0) {
        if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x37c1c);
          (*pcVar19)();
        }
        puVar23 = *(undefined1 **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        if (puVar23 <= puVar21) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x37c20);
          (*pcVar19)();
        }
        if (puVar23 <= puVar5) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x37c24);
          (*pcVar19)();
        }
        puVar23 = *(undefined1 **)(puVar11 + (long)puVar21 * 8 + 0x20);
        puVar3 = *(undefined1 **)(puVar11 + (long)puVar5 * 8 + 0x20);
        _objc_retain();
        _objc_retain();
      }
      else {
        puVar23 = puVar21;
        FUN_000384f4(puVar21,puVar11,&PTR_PTR_00ac2838,0xae68f0);
        puVar3 = puVar5;
        puVar13 = puVar11;
        FUN_000384f4(puVar5,puVar11,&PTR_PTR_00ac2838,0xae68f0);
      }
      puVar24 = puVar11;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar24 == 0) || ((long)puVar11 < 0)) || (((ulong)puVar11 >> 0x3e & 1) != 0)) {
        FUN_000387c4();
        uVar16 = (uint)((ulong)puVar11 >> 0x3e) & 1;
      }
      else {
        uVar16 = 0;
      }
      uVar7 = (ulong)puVar11 & 0xffffffffffffff8;
      lVar14 = uVar7 + (long)puVar21 * 8;
      uVar9 = *(undefined8 *)(lVar14 + 0x20);
      *(undefined1 **)(lVar14 + 0x20) = puVar3;
      _objc_release(uVar9);
      if ((uVar16 != 0) || ((long)puVar11 < 0)) {
        FUN_000387c4();
        uVar7 = (ulong)puVar11 & 0xffffffffffffff8;
      }
      if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x37c14);
        (*pcVar19)();
      }
      if (*(undefined1 **)(uVar7 + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x37c18);
        (*pcVar19)();
      }
      lVar14 = uVar7 + (long)puVar5 * 8;
      uVar9 = *(undefined8 *)(lVar14 + 0x20);
      *(undefined1 **)(lVar14 + 0x20) = puVar23;
      _objc_release(uVar9);
      *(undefined1 **)(unaff_x22 + 0x20) = puVar11;
    }
    bVar2 = SCARRY8((long)puVar21,1);
    puVar21 = puVar21 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c10);
      (*pcVar19)();
    }
  }
LAB_000376c0:
  if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c0c);
    (*pcVar19)();
  }
  goto LAB_000376c8;
LAB_000379a8:
  uVar7 = (ulong)puVar11 & 0x8000000000000000;
LAB_000379cc:
  uVar18 = (ulong)puVar11 >> 0x3e;
  if (uVar18 == 0) {
    puVar5 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    lVar14 = (long)puVar5 - (long)puVar21;
  }
  else {
    puVar5 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if (uVar7 != 0) {
      puVar5 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    lVar14 = (long)puVar5 - (long)puVar21;
  }
  if ((long)puVar5 < (long)puVar21) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c28);
    (*pcVar19)();
  }
  if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c2c);
    (*pcVar19)();
  }
  if (uVar18 == 0) {
    puVar23 = *(undefined1 **)((undefined1 *)((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar23 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if (uVar7 != 0) {
      puVar23 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if ((long)puVar23 < (long)puVar5) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c30);
    (*pcVar19)();
  }
  if (SBORROW8(0,lVar14)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c34);
    (*pcVar19)();
  }
  if (uVar18 == 0) {
    puVar23 = *(undefined1 **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar23 = (undefined1 *)((ulong)puVar11 & 0xffffffffffffff8);
    if (uVar7 != 0) {
      puVar23 = puVar11;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SCARRY8((long)puVar23,-lVar14)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37c38);
    (*pcVar19)();
  }
  FUN_00038714((long)puVar23 + -lVar14,1);
  func_0x00038b4c(puVar21,puVar5,0);
  uVar7 = *(ulong *)(unaff_x22 + 0x20);
  if (uVar7 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar18 = uVar7;
    }
    uVar7 = uVar18;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c44);
      (*pcVar19)();
    }
    uVar7 = uVar18;
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar19 = (code *)SoftwareBreakpoint(1,0x37c48);
      (*pcVar19)();
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
    pcVar19 = (code *)SoftwareBreakpoint(1,0x37b4c);
    (*pcVar19)();
  }
  lVar14 = *(long *)(unaff_x22 + 0x70);
  _objc_retain(lVar12);
  FUN_00038714(uVar18 + 1,1);
  puVar5 = (undefined1 *)0x0;
  FUN_00038c58(0,0,1,lVar12);
  _objc_release(lVar12);
  puVar11 = *(undefined1 **)(unaff_x22 + 0x20);
  *(undefined1 **)(unaff_x22 + 0x88) = puVar11;
  _objc_release(lVar12);
  if (lVar20 == lVar14) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    lVar20 = *(long *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar14 = 0;
    func_0x00032c4c();
    lVar12 = lVar14;
    _objc_allocWithZone();
    *(undefined1 **)(lVar12 + _DAT_00ae7018) = puVar11;
    (**(code **)(lVar20 + 0x10))(lVar12 + _DAT_00b647d8,uVar9,uVar15);
    plVar22 = (long *)(unaff_x22 + 0x10);
    *plVar22 = lVar12;
    *(long *)(unaff_x22 + 0x18) = lVar14;
    puVar1 = PTR_s_init_00abbf70;
    _swift_bridgeObjectRetain(puVar11);
    _objc_msgSendSuper2(plVar22,puVar1);
    *(long **)(unaff_x22 + 0x90) = plVar22;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037c48,uVar8,0);
    return;
  }
  goto LAB_0003748c;
}



/* Entry: 00037c48; end: 00037c97;  */

void FUN_00037c48(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_00030a38(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x60),uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037c98,0,0);
  return;
}



/* Entry: 00037c98; end: 00037d1f;  */

void FUN_00037c98(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  _objc_release(*(undefined8 *)(unaff_x22 + 0x90));
  _objc_release(uVar4);
  (**(code **)(lVar2 + 8))(uVar3,uVar5);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00037d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00037d20; end: 00037d6f;  */

undefined8 FUN_00037d20(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0xae60c8;
  func_0x000115a8(0xae60c8,&UNK_007cccd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 00037d70; end: 00037d87;  */

void FUN_00037d70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00037d88,0,0);
  return;
}



/* Entry: 00037d88; end: 00037e1f;  */

void FUN_00037d88(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x60) + 0x18);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_00037e20;
    _swift_continuation_init(unaff_x22 + 0x10,1);
    FUN_00037ef8();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00037e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_0099b8f0);
  return;
}



/* Entry: 00037e20; end: 00037e8b;  */

void FUN_00037e20(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_00037e8c;
  }
  else {
    _swift_willThrow();
    pcVar1 = (code *)0x37ec4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 00037e8c; end: 00037ef7;  */

void FUN_00037e8c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00037ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 00037ef8; end: 00038003;  */

void FUN_00037ef8(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 0x50);
  if ((1 < lVar2 - 1U) && (lVar2 != 3)) {
    uVar3 = *(undefined8 *)(param_2 + 0x58);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    puVar1 = &UNK_0099ecb8;
    _swift_allocObject(&UNK_0099ecb8,0x38,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    *(long *)(puVar1 + 0x18) = lVar2;
    *(undefined8 *)(puVar1 + 0x20) = uVar3;
    *(undefined8 *)(puVar1 + 0x28) = param_3;
    *(long *)(puVar1 + 0x30) = param_1;
    _swift_bridgeObjectRetain(uVar3);
    _swift_retain(param_3);
    _swift_bridgeObjectRetain(lVar2);
    uVar3 = 1;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (1,0,0x10,4,0,0,&UNK_007ce588,puVar1,PTR___sytN_0099b8e0 + 8);
    _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_0099bb20)(uVar3);
    return;
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = PTR___swiftEmptyArrayStorage_0099b8f0;
                    /* WARNING: Could not recover jumptable at 0x0077b2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_0099c070)();
  return;
}



/* Entry: 00038004; end: 00038023;  */

void FUN_00038004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00038024,0,0);
  return;
}



/* Entry: 00038024; end: 0003813f;  */

void FUN_00038024(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  if (*(long *)(unaff_x22 + 0x60) == 0 || lVar1 == 0) {
    **(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x78) + 0x40) + 0x28) =
         PTR___swiftEmptyArrayStorage_0099b8f0;
    _swift_continuation_throwingResume();
                    /* WARNING: Could not recover jumptable at 0x0003808c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_0003ad50();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_allocWithZone();
  lVar3 = lVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar1,PTR___sypN_0099b8d8 + 8);
  _swift_bridgeObjectRelease(lVar1);
  func_0x00784c20();
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  _objc_release(lVar3);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_00038140;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_00033bbc();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 00038140; end: 000381ab;  */

void FUN_00038140(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x88) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_000381ac;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_000381f4;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,0,0);
  return;
}



/* Entry: 000381ac; end: 000381f3;  */

void FUN_000381ac(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  **(undefined8 **)(*(long *)(*(long *)(unaff_x22 + 0x78) + 0x40) + 0x28) =
       *(undefined8 *)(unaff_x22 + 0x90);
  _swift_continuation_throwingResume();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000381f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 000381f4; end: 00038263;  */

void FUN_000381f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  _objc_release(*(undefined8 *)(unaff_x22 + 0x80));
  uVar2 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
  _swift_allocError();
  *puVar3 = uVar1;
  _swift_continuation_throwingResumeWithError(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00038260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00038264; end: 0003829f;  */

void FUN_00038264(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 000382a0; end: 000384cb;  */

void FUN_000382a0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar8 != 0) {
      lVar9 = (long)(int)param_4;
      lVar2 = (param_4 >> 0x20) - lVar9;
      if (param_4 >> 0x20 < lVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38490);
        (*pcVar4)();
      }
      lVar6 = param_2;
      __s10Foundation13__DataStorageC6_bytesSvSgvg();
      if (lVar6 == 0) {
        __s10Foundation13__DataStorageC7_lengthSivg();
      }
      else {
        lVar7 = lVar6;
        __s10Foundation13__DataStorageC7_offsetSivg();
        if (SBORROW8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38498);
          (*pcVar4)();
        }
        lVar6 = (lVar9 - lVar7) + lVar6;
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar6 != 0) {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          if (param_2 == 0) goto LAB_000384b4;
          goto LAB_00038420;
        }
      }
      if (param_2 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x384c8);
        (*pcVar4)();
      }
LAB_000384b4:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x384b8);
      (*pcVar4)();
    }
    uStack_66 = (undefined1)param_4;
    uStack_65 = (undefined1)((ulong)param_4 >> 8);
    uStack_64 = (undefined1)((ulong)param_4 >> 0x10);
    uStack_63 = (undefined1)((ulong)param_4 >> 0x18);
    uStack_62 = (undefined1)((ulong)param_4 >> 0x20);
    uStack_61 = (undefined1)((ulong)param_4 >> 0x28);
    uStack_60 = (undefined1)((ulong)param_4 >> 0x30);
    uStack_5f = (undefined1)((ulong)param_4 >> 0x38);
    uStack_5e = (undefined1)param_5;
    uStack_5d = (undefined1)(param_5 >> 8);
    uStack_5c = (undefined1)(param_5 >> 0x10);
    uStack_5b = (undefined1)(param_5 >> 0x18);
    uStack_5a = (undefined1)(param_5 >> 0x20);
    uStack_59 = (undefined1)(param_5 >> 0x28);
    if (param_2 == 0) goto LAB_000384a0;
    _memcmp(param_2,&uStack_66,param_5 >> 0x30 & 0xff);
    bVar5 = (int)param_2 == 0;
  }
  else if (uVar8 == 2) {
    lVar2 = *(long *)(param_4 + 0x10);
    lVar9 = *(long *)(param_4 + 0x18);
    lVar6 = param_2;
    __s10Foundation13__DataStorageC6_bytesSvSgvg();
    lVar7 = lVar6;
    if (lVar6 != 0) {
      __s10Foundation13__DataStorageC7_offsetSivg();
      if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x3849c);
        (*pcVar4)();
      }
      lVar6 = (lVar2 - lVar7) + lVar6;
    }
    lVar1 = lVar9 - lVar2;
    if (SBORROW8(lVar9,lVar2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38494);
      (*pcVar4)();
    }
    __s10Foundation13__DataStorageC7_lengthSivg();
    if (lVar6 == 0) {
      if (param_2 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x384cc);
        (*pcVar4)();
      }
LAB_000384bc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x384c0);
      (*pcVar4)();
    }
    if (lVar1 <= lVar7) {
      lVar7 = lVar1;
    }
    if (param_2 == 0) goto LAB_000384bc;
LAB_00038420:
    if (param_2 == lVar6) {
      bVar5 = true;
    }
    else {
      _memcmp(param_2,lVar6,lVar7);
      bVar5 = (int)param_2 == 0;
    }
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x384a8);
      (*pcVar4)();
    }
    bVar5 = true;
  }
  *(bool *)param_1 = bVar5;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_000384a0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x384a4);
  (*pcVar4)();
}



/* Entry: 000384cc; end: 000384f3;  */

ulong FUN_000384cc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385dc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_00ac2838;
    _objc_opt_self(PTR_PTR_00ac2838);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_00ac2838;
    _objc_opt_self(PTR_PTR_00ac2838);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x386b0);
  (*pcVar2)();
}



/* Entry: 000384f4; end: 000386af;  */

ulong FUN_000384f4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385dc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar4);
    uVar3 = *param_3;
    _objc_opt_self(uVar3);
    uVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_00039114(0,param_4,param_3);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x386b0);
  (*pcVar2)();
}



/* Entry: 000386b0; end: 00038713;  */

ulong FUN_000386b0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385d8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x385dc);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_00ac3240;
    _objc_opt_self(PTR_PTR_00ac3240);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar5);
    puVar4 = PTR_PTR_00ac3240;
    _objc_opt_self(PTR_PTR_00ac3240);
    uVar5 = param_1;
    _swift_dynamicCastObjCClass(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_00039114(0,0xae7278,&PTR_PTR_00ac3240);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x386b0);
  (*pcVar2)();
}



/* Entry: 00038714; end: 000387c3;  */

void FUN_00038714(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  FUN_0002a20c();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 000387c4; end: 00038813;  */

/* WARNING: Removing unreachable block (ram,0x0002a240) */
/* WARNING: Removing unreachable block (ram,0x0002a264) */
/* WARNING: Removing unreachable block (ram,0x0002a248) */
/* WARNING: Removing unreachable block (ram,0x0002a330) */
/* WARNING: Removing unreachable block (ram,0x0002a254) */
/* WARNING: Removing unreachable block (ram,0x0002a25c) */
/* WARNING: Removing unreachable block (ram,0x0002a2a0) */
/* WARNING: Removing unreachable block (ram,0x0002a2b4) */
/* WARNING: Removing unreachable block (ram,0x0002a2c0) */
/* WARNING: Removing unreachable block (ram,0x0002a2c8) */

ulong FUN_000387c4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_1 >> 0x3e != 0) {
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_0002a5d4(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_0002a654(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2a330);
  (*pcVar1)();
}



/* Entry: 00038814; end: 00038c57;  */

void FUN_00038814(long param_1,byte *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)param_2 >> 0x20);
  uVar11 = uVar3 >> 0x1e;
  uVar4 = (uint)(param_4 >> 0x20);
  uVar14 = uVar4 >> 0x1e;
  iVar6 = (int)param_1;
  if ((ulong)param_2 >> 0x3e == 3) {
    uVar13 = 0;
    if ((((param_1 != 0) || (param_2 != (byte *)0xc000000000000000)) || (param_4 >> 0x3e < 3)) ||
       ((uVar13 = 0, param_3 != 0 || (param_4 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar11 == 0) {
        uVar13 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar12 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar12,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar13 = (ulong)(iVar12 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar14 != 2) {
        uVar13 = (ulong)(uVar13 == 0);
        goto LAB_00038af8;
      }
      uVar15 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar13 != uVar15) {
LAB_0003899c:
        uVar13 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar11 == 2) {
        uVar13 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar13 = 0;
      if (1 < uVar14) goto LAB_00038898;
LAB_000388cc:
      if (uVar14 == 0) {
        uVar15 = param_4 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar12 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar12,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar13 != (long)(iVar12 - (int)param_3)) goto LAB_0003899c;
    }
    if (0 < (long)uVar13) {
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          abStack_70[0] = (byte)param_1;
          abStack_70[1] = (byte)((ulong)param_1 >> 8);
          abStack_70[2] = (byte)((ulong)param_1 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_1 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_1 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_1 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_1 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_1 >> 0x38);
          abStack_70[8] = (byte)param_2;
          abStack_70[9] = (byte)((ulong)param_2 >> 8);
          abStack_70[10] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_2 >> 0x28);
          param_2 = abStack_70 + ((ulong)param_2 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar13 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar6;
        lVar7 = (param_1 >> 0x20) - lVar17;
        if (param_1 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_1 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_1 = 0;
        }
        else {
          lVar8 = param_1;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar8) + param_1;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_1 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar10 = (byte *)(lVar8 + param_1);
            goto LAB_00038aec;
          }
        }
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar11 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_2 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar8 = *(long *)(param_1 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = param_1;
        if (param_1 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          param_1 = (lVar17 - lVar7) + param_1;
        }
        lVar2 = lVar8 - lVar17;
        if (SBORROW8(lVar8,lVar17)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_1 == 0) {
          pbVar10 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar10 = (byte *)(lVar7 + param_1);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_2 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_1,pbVar10,param_3,param_4);
      uVar13 = (ulong)abStack_70[0];
      param_2 = pbVar10;
      goto LAB_00038af8;
    }
  }
  uVar13 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = (long)param_2 - uVar13;
  if (SBORROW8((long)param_2,uVar13)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  lVar17 = uVar15 + 0x20 + uVar13 * 8;
  uVar9 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar17,lVar7,uVar9);
  lVar8 = param_3 - lVar7;
  if (SBORROW8(param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar8 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
      lVar7 = uVar13 - (long)param_2;
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar7 = uVar13 - (long)param_2;
    }
    if (SBORROW8(uVar13,(long)param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar13 = lVar17 + param_3 * 8;
    uVar1 = uVar15 + 0x20 + (long)param_2 * 8;
    if (uVar13 != uVar1 || uVar1 + lVar7 * 8 <= uVar13) {
      _memmove(uVar13,uVar1,lVar7 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar13 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar8)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar13 + lVar8;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 00038c58; end: 00038d83;  */

void FUN_00038c58(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38d60);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x38d64);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38d7c);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      _memmove(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38d80);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    _objc_retain(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x38d84);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 00038d84; end: 00038da3;  */

void __s23ExtensionsStickerPicker20StickersFeedsServiceCMa(void)

{
  _objc_opt_self(&PTR_PTR_00ae73c0);
  return;
}



/* Entry: 00038da4; end: 00038e0f;  */

long FUN_00038da4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



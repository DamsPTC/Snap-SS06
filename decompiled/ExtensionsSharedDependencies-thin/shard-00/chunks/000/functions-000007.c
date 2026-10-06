/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00038e10; end: 00038e7b;  */

undefined8 * FUN_00038e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar4 = param_2[4];
  param_1[4] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Entry: 00038e7c; end: 00038f1f;  */

undefined8 * FUN_00038e7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 00038f20; end: 00038f83;  */

undefined8 * FUN_00038f20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 00038f84; end: 00039023;  */

int FUN_00038f84(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00039024; end: 00039057;  */

void FUN_00039024(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 00039058; end: 000390d7;  */

void FUN_00039058(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dword *pdVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  pdVar5 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar5;
  *(long *)pdVar5 = unaff_x22;
  *(code **)(pdVar5 + 2) = FUN_000390d8;
  *(undefined8 *)(pdVar5 + 0x1c) = uVar4;
  *(undefined8 *)(pdVar5 + 0x1e) = uVar6;
  *(undefined8 *)(pdVar5 + 0x18) = uVar3;
  *(undefined8 *)(pdVar5 + 0x1a) = uVar2;
  *(undefined8 *)(pdVar5 + 0x16) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00038024,0,0);
  return;
}



/* Entry: 000390d8; end: 00039113;  */

void FUN_000390d8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00039110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 00039114; end: 00039153;  */

void FUN_00039114(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 00039154; end: 0003975f;  */

long FUN_00039154(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_70 = param_3;
  uStack_68 = param_1;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar8 = *(long *)(lVar1 + -8);
  lStack_78 = lVar1;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar8 + 0x40));
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  puVar2 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820;
  _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820);
  _swift_retain(param_3);
  _swift_retain(param_2);
  func_0x0077fce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x80000000008b5a10);
  puVar4 = puVar2;
  func_0x0078dc60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar4);
  func_0x00790a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00790060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d3c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = lStack_78;
  (**(code **)(lVar8 + 0x68))
            (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,
             lStack_78);
  puVar4 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar3 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x80000000008b5c00);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar4);
  _objc_release(uVar3);
  (**(code **)(lVar8 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar5 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  puVar6 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_opt_self();
  uVar7 = 0xd00000000000001d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x80000000008b5c30);
  _objc_retain(puVar2);
  uVar3 = uStack_68;
  _swift_unknownObjectRetain(uStack_68);
  _objc_retain(puVar5);
  func_0x00781100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _swift_unknownObjectRelease_n(uVar3,2);
  _swift_release(param_2);
  _swift_release(uStack_70);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Entry: 00039760; end: 000397c3;  */

void __s23ExtensionsStickerPicker20StickersSearchClientC21fetchMetaDataIfNeeded4withSaySo14SCCTPEXTCTItemCGSS_tYaKF
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  lVar1 = 0;
  __s10Foundation4DateVMa();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000397c4,0,0);
  return;
}



/* Entry: 000397c4; end: 0003986f;  */

void FUN_000397c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_bridgeObjectRetain();
  puVar2 = PTR___sSSN_0099b040;
  __sSSySSxcs25LosslessStringConvertibleRzSTRzSJ7ElementSTRtzlufC
            ((undefined8 *)(unaff_x22 + 0x50),PTR___sSSN_0099b040,
             PTR___sSSs25LosslessStringConvertiblesWP_0099b068,PTR___sSSSTsWP_0099b058);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  *(undefined8 *)(unaff_x22 + 0xa8) = 0x5f686372616573;
  *(undefined8 *)(unaff_x22 + 0xb0) = 0xe700000000000000;
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_00039870,uVar3,0);
  return;
}



/* Entry: 00039870; end: 000398b3;  */

void FUN_00039870(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  FUN_00030f4c(uVar1,*(undefined8 *)(unaff_x22 + 0xb0));
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_000398b4,0,0);
  return;
}



/* Entry: 000398b4; end: 00039953;  */

void FUN_000398b4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  if (lVar1 != 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xb0));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00039900. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar1);
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x70;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_00039954;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_00039b20();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 00039954; end: 000399c3;  */

void FUN_00039954(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 200) = *(long *)(lVar3 + 0x30);
  if (*(long *)(lVar3 + 0x30) == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0xb8);
    *(undefined8 *)(lVar3 + 0xd0) = *(undefined8 *)(lVar3 + 0x70);
    pcVar1 = FUN_000399c4;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_00039ae0;
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(pcVar1,uVar2,0);
  return;
}



/* Entry: 000399c4; end: 00039adf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000399c4(void)

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
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x98);
  __s10Foundation4DateVACycfC(uVar1);
  lVar6 = 0;
  func_0x00032c4c();
  lVar7 = lVar6;
  _objc_allocWithZone();
  *(undefined8 *)(lVar7 + _DAT_00ae7018) = uVar9;
  (**(code **)(lVar4 + 0x10))(lVar7 + _DAT_00b647d8,uVar1,uVar2);
  plVar10 = (long *)(unaff_x22 + 0x60);
  *plVar10 = lVar7;
  *(long *)(unaff_x22 + 0x68) = lVar6;
  puVar5 = PTR_s_init_00abbf70;
  _swift_bridgeObjectRetain(uVar9);
  _objc_msgSendSuper2(plVar10,puVar5);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  FUN_00030a38(plVar10,uVar3,uVar8);
  _objc_release(plVar10);
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00039adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 00039ae0; end: 00039b1f;  */

void FUN_00039ae0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00039b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00039b20; end: 0003a59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039b20(undefined1 *param_1,long param_2,undefined1 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 != 0) {
    puVar8 = &UNK_0099ece0;
    _swift_allocObject(&UNK_0099ece0,0x18,7);
    _swift_weakInit(puVar8 + 0x10,param_2);
    puVar1 = &UNK_0099ed08;
    _swift_allocObject(&UNK_0099ed08,0x20,7);
    *(undefined **)(puVar1 + 0x10) = puVar8;
    *(undefined1 **)(puVar1 + 0x18) = param_1;
    lVar2 = 0;
    FUN_0003a98c();
    lVar3 = lVar2;
    _objc_allocWithZone();
    puVar9 = (undefined8 *)(lVar3 + _DAT_00ae7520);
    *puVar9 = FUN_0003ad08;
    puVar9[1] = puVar1;
    puVar8 = PTR_s_init_00abbf70;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    _objc_retain(lVar10);
    _objc_msgSendSuper2(&lStack_70,puVar8);
    func_0x0003a3a0(param_3,param_4);
    puVar7 = param_3;
    func_0x007814c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined1 *)0x0) {
      FUN_00030868();
      puVar8 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
      _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar7,0,0);
      *puVar7 = 0;
      uVar6 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
      _swift_allocError();
      *puVar9 = puVar8;
      _swift_continuation_throwingResumeWithError(param_1,uVar6);
      _objc_release(param_3);
      _objc_release(lVar10);
    }
    else {
      puVar5 = puVar7;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar7);
      uVar6 = 0xd000000000000033;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000033,0x80000000008b5c80);
      puVar7 = puVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar5,param_4);
      puVar8 = PTR_PTR_00ac2818;
      _objc_opt_self(PTR_PTR_00ac2818);
      func_0x0077fce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(plVar4);
      lVar3 = lVar10;
      func_0x00792fa0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(plVar4);
      _objc_release(lVar3);
      FUN_00023358(puVar5,param_4);
      _objc_release(lVar10);
      _objc_release(plVar4);
      plVar4 = (long *)param_3;
    }
    _objc_release(plVar4);
    return;
  }
  puVar7 = param_1;
  FUN_00030868();
  puVar8 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar7,0,0);
  *puVar7 = 0;
  uVar6 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
  _swift_allocError();
  *puVar9 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_0099c078)(param_1,uVar6);
  return;
}



/* Entry: 0003a5a0; end: 0003a603;  */

void FUN_0003a5a0(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0003a604; end: 0003a86f;  */

/* WARNING: Removing unreachable block (ram,0x0003a7c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a604(undefined1 *param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  
  if (0xe < param_2 >> 0x3c) {
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7520);
    param_2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7520))[1];
    FUN_00030868();
    puVar5 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    if (param_3 == 0) {
      *param_1 = 1;
    }
    else {
      *param_1 = 0;
    }
    _swift_retain(param_2);
    (*pcVar1)(puVar5,1);
    _swift_errorRelease(puVar5);
    goto code_r0x0077b51c;
  }
  uVar3 = (uint)(param_2 >> 0x20);
  puVar4 = param_1;
  if (uVar3 >> 0x1e < 2) {
    if (uVar3 >> 0x1e == 0) {
      if ((param_2 & 0xff000000000000) != 0) goto LAB_0003a774;
    }
    else {
      lVar7 = (long)(int)param_1;
      lVar8 = (long)param_1 >> 0x20;
LAB_0003a6e4:
      FUN_000308a8(param_1,param_2);
      if (lVar7 != lVar8) {
LAB_0003a774:
        puVar5 = PTR_PTR_00ac2890;
        _objc_allocWithZone(PTR_PTR_00ac2890);
        puVar4 = param_1;
        FUN_0003ac00(param_1,param_2,puVar5);
        FUN_00023344(param_1,param_2);
        pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7520);
        uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7520))[1];
        _swift_retain(uVar2);
        puVar6 = puVar4;
        _objc_retain(puVar4);
        (*pcVar1)(puVar4,0);
        _swift_release(uVar2);
        _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_0099ada0)(puVar6);
        return;
      }
    }
  }
  else if (uVar3 >> 0x1e == 2) {
    lVar7 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(param_1 + 0x18);
    goto LAB_0003a6e4;
  }
  pcVar1 = *(code **)(unaff_x20 + _DAT_00ae7520);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae7520))[1];
  FUN_00030868();
  puVar5 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar4,0,0);
  *puVar4 = 1;
  _swift_retain(uVar2);
  (*pcVar1)(puVar5,1);
  _swift_errorRelease(puVar5);
  _swift_release(uVar2);
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  if (uVar3 >> 0x1e != 1) {
    if (uVar3 >> 0x1e != 2) {
      return;
    }
    _swift_release(param_1);
  }
  param_2 = param_2 & 0x3fffffffffffffff;
code_r0x0077b51c:
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_2);
  return;
}



/* Entry: 0003a870; end: 0003a917; -[_TtC23ExtensionsStickerPickerP33_73B808AEE9B7489D245CDED3C105F28221SearchResponseHandler onEvent:status:] */

void FUN_0003a870(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_0003a604(param_3,param_2,param_4);
  FUN_00023344(param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0003a918; end: 0003a977; -[_TtC23ExtensionsStickerPickerP33_73B808AEE9B7489D245CDED3C105F28221SearchResponseHandler init] */

void FUN_0003a918(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.SearchResponseHandler",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3a944);
  (*pcVar1)();
}



/* Entry: 0003a978; end: 0003a98b; -[_TtC23ExtensionsStickerPickerP33_73B808AEE9B7489D245CDED3C105F28221SearchResponseHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a978(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae7520 + 8));
  return;
}



/* Entry: 0003a98c; end: 0003a9ab;  */

void FUN_0003a98c(void)

{
  _objc_opt_self(&PTR_PTR_00ac6bb8);
  return;
}



/* Entry: 0003a9ac; end: 0003aa97;  */

void FUN_0003a9ac(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_00038714(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_0003aa98(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                 (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3aa94);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3aa98);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3aa90);
  (*pcVar1)();
}



/* Entry: 0003aa98; end: 0003abff;  */

ulong FUN_0003aa98(undefined8 *param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if (param_3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_3 & 0xffffffffffffff8;
    if ((param_3 & 0x8000000000000000) != 0) {
      uVar5 = param_3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar5 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x3ac00);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3abf4);
        (*pcVar1)();
      }
      uVar2 = 0;
      FUN_0003ad10(0,0xae68f0,&PTR_PTR_00ac2838);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar7 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar7 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3abf8);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x3abfc);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar8 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar8;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar8 = puVar8 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar7 = 0;
        do {
          uVar3 = uVar7;
          FUN_000384cc(uVar7,param_3);
          param_1[uVar7] = uVar3;
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
  }
  return param_3;
}



/* Entry: 0003ac00; end: 0003acbf;  */

long FUN_0003ac00(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_00999f88;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00785200();
  _objc_release(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(0);
    _objc_release(uVar1);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar2) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)(unaff_x20,0x18,7);
  return unaff_x20;
}



/* Entry: 0003acc0; end: 0003ad07;  */

void FUN_0003acc0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003ad08; end: 0003ad0f;  */

void FUN_0003ad08(undefined1 *param_1,char param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
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
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (param_2 == '\x01') {
    puVar7 = param_1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    puVar20 = puVar7;
    func_0x00780460();
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
    lVar8 = lVar8 + 0x10;
    _swift_weakLoadStrong();
    if (lVar8 != 0) {
      lVar19 = *(long *)(lVar8 + 0x20);
      _swift_retain(lVar19);
      _swift_release(lVar8);
      if (lVar19 != 0) {
        func_0x0002c3fc(0x686372616573,0xe600000000000000,puVar20);
        _swift_release(lVar19);
      }
    }
    _objc_release(puVar7);
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
    puVar17 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar17 = param_1;
    _swift_errorRetain(param_1);
  }
  else {
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
    lVar8 = lVar8 + 0x10;
    _swift_weakLoadStrong();
    if (lVar8 != 0) {
      lVar19 = *(long *)(lVar8 + 0x20);
      _swift_retain(lVar19);
      _swift_release(lVar8);
      if (lVar19 != 0) {
        func_0x0002c264(0x686372616573,0xe600000000000000);
        _swift_release(lVar19);
      }
    }
    puStack_88 = PTR___swiftEmptyArrayStorage_0099b8f0;
    func_0x0078c4a0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined1 *)0x0) {
      puStack_b0 = (undefined1 *)0x0;
      uVar9 = 0;
      FUN_0003ad10(0,0xae7450,&PTR_PTR_00ac3230);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (param_1,&puStack_b0,uVar9);
      _objc_release();
      puVar7 = puStack_b0;
      if (puStack_b0 != (undefined1 *)0x0) {
        puVar20 = (undefined1 *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((ulong)puStack_b0 >> 0x3e == 0) {
          puVar10 = *(undefined1 **)(puVar20 + 0x10);
        }
        else {
          puVar10 = puStack_b0;
          if (-1 < (long)puStack_b0) {
            puVar10 = puVar20;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puVar16 = PTR___swiftEmptyArrayStorage_0099b8f0;
        if (puVar10 != (undefined1 *)0x0) {
          puVar22 = (undefined1 *)0x0;
          do {
            if (((ulong)puVar7 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar20 + 0x10) <= puVar22) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x3a368);
                (*pcVar5)();
              }
              puVar11 = *(undefined1 **)(puVar7 + (long)puVar22 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar11 = puVar22;
              func_0x000386d8(puVar22,puVar7);
            }
            bVar6 = SCARRY8((long)puVar22,1);
            puVar22 = puVar22 + 1;
            if (bVar6) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x3a364);
              (*pcVar5)();
            }
            puVar21 = puVar11;
            func_0x0078bb60();
            _objc_retainAutoreleasedReturnValue();
            if (puVar21 == (undefined1 *)0x0) {
LAB_0003a2d0:
              FUN_00030868();
              puVar16 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
              _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar21,0,0);
              *puVar21 = 0;
              uVar9 = 0xae60d0;
              func_0x000115a8(0xae60d0,&UNK_007ccdd0);
              puVar17 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
              _swift_allocError();
              *puVar17 = puVar16;
              _swift_continuation_throwingResumeWithError(lVar3,uVar9);
              _objc_release(puVar11);
              _swift_bridgeObjectRelease(puVar7);
              _swift_bridgeObjectRelease(puStack_88);
              return;
            }
            puStack_b0 = (undefined1 *)0x0;
            uVar9 = 0;
            FUN_0003ad10(0,0xae7448,&PTR_PTR_00ac3238);
            __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                      (puVar21,&puStack_b0,uVar9);
            _objc_release();
            puVar4 = puStack_b0;
            if (puStack_b0 == (undefined1 *)0x0) goto LAB_0003a2d0;
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
            puVar16 = PTR___swiftEmptyArrayStorage_0099b8f0;
            while (puVar24 != puVar23) {
              if (((ulong)puVar4 & 0xc000000000000001) == 0) {
                if (*(undefined1 **)(puVar21 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x3a360);
                  (*pcVar5)();
                }
                puVar12 = *(undefined1 **)(puVar4 + (long)puVar23 * 8 + 0x20);
                _objc_retain();
              }
              else {
                puVar12 = puVar23;
                func_0x000386c4(puVar23,puVar4);
              }
              puVar1 = puVar23 + 1;
              if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x3a35c);
                (*pcVar5)();
              }
              puVar13 = puVar12;
              func_0x00787fe0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar12);
              puVar23 = puVar23 + 1;
              if (puVar13 != (undefined1 *)0x0) {
                puVar15 = puVar16;
                _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
                if ((((int)puVar15 == 0) || ((long)puVar16 < 0)) ||
                   (puVar15 = puVar16, ((ulong)puVar16 >> 0x3e & 1) != 0)) {
                  if ((ulong)puVar16 >> 0x3e == 0) {
                    puVar14 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
                  }
                  else {
                    puVar14 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
                    if ((undefined *)0x7fffffffffffffff < puVar16) {
                      puVar14 = puVar16;
                    }
                    __ss18_CocoaArrayWrapperV8endIndexSivg(puVar14);
                  }
                  puVar15 = (undefined *)0x0;
                  FUN_0002a20c(0,puVar14 + 1,1,puVar16);
                }
                uVar18 = (ulong)puVar15 & 0xffffffffffffff8;
                uVar2 = *(ulong *)(uVar18 + 0x10);
                puVar16 = puVar15;
                if (*(ulong *)(uVar18 + 0x18) >> 1 <= uVar2) {
                  puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar18 + 0x18));
                  FUN_0002a20c(puVar16,uVar2 + 1,1,puVar15);
                  uVar18 = (ulong)puVar16 & 0xffffffffffffff8;
                }
                *(ulong *)(uVar18 + 0x10) = uVar2 + 1;
                *(undefined1 **)(uVar18 + uVar2 * 8 + 0x20) = puVar13;
                puVar23 = puVar1;
              }
            }
            _swift_bridgeObjectRelease(puVar4);
            FUN_0003a9ac(puVar16);
            _objc_release(puVar11);
            puVar16 = puStack_88;
          } while (puVar22 != puVar10);
        }
        _swift_bridgeObjectRelease(puVar7);
        **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = puVar16;
        _swift_continuation_throwingResume(lVar3);
        return;
      }
    }
    FUN_00030868();
    puVar16 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    *param_1 = 0;
    uVar9 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar17 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar17 = puVar16;
  }
  _swift_continuation_throwingResumeWithError(lVar3,uVar9);
  return;
}



/* Entry: 0003ad10; end: 0003ad4f;  */

void FUN_0003ad10(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 0003ad50; end: 0003ae4b;  */

undefined * FUN_0003ad50(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (lVar4 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00025268(0,lVar4,0);
    puVar3 = PTR___s10Foundation4DataVN_0099c3c0;
    puVar2 = PTR___sypN_0099b8d8;
    puVar6 = (undefined8 *)(param_1 + 0x28);
    puVar5 = puStack_58;
    do {
      uStack_88 = puVar6[-1];
      uStack_80 = *puVar6;
      func_0x00023304();
      _swift_dynamicCast(auStack_78,&uStack_88,puVar3,puVar2 + 8,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_00025268(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_58;
      puVar6 = puVar6 + 2;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      FUN_000252c8(auStack_78,puStack_58 + uVar1 * 0x20 + 0x20);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Entry: 0003ae4c; end: 0003b03f;  */

undefined * FUN_0003ae4c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_00025268(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_0099b8d8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x3b040);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_0003c3f4(0,0xae7438,&PTR_PTR_00ac3250);
      puVar1 = PTR___sypN_0099b8d8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        _objc_retain();
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          FUN_00025268(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        FUN_000252c8(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000386ec(uVar7,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_0003c3f4(0,0xae7438,&PTR_PTR_00ac3250);
        _swift_dynamicCast(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_00025268(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        FUN_000252c8(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 0003b040; end: 0003b08b;  */

undefined8 FUN_0003b040(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  __s23ExtensionsStickerPicker22StickersUserDataClientC19authContextDelegate22stickersGrapheneLoggerACSo011SCNGrpcAuthiJ0_p_AA0dlM0CSgtcfc
            (param_1,param_2);
  return unaff_x20;
}



/* Entry: 0003b08c; end: 0003b33f;  */

void __s23ExtensionsStickerPicker22StickersUserDataClientC19authContextDelegate22stickersGrapheneLoggerACSo011SCNGrpcAuthiJ0_p_AA0dlM0CSgtcfc
               (undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar7 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar2 = PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820;
  _objc_opt_self(PTR__OBJC_CLASS___SCNGrpcParamsBuilder_00ac2820);
  _swift_retain(param_2);
  func_0x0077fce0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x80000000008b5a10);
  puVar4 = puVar2;
  func_0x0078dc60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar4);
  func_0x00790a00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00790060(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d420(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x0078d3c0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88,lVar1)
  ;
  puVar4 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar3 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x80000000008b5cc0);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar4);
  _objc_release(uVar3);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar5 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  puVar6 = PTR__OBJC_CLASS___SCNGrpcUnifiedGrpcService_00ac3208;
  _objc_opt_self();
  uVar3 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x80000000008b5cf0);
  _objc_retain(puVar2);
  _swift_unknownObjectRetain(param_1);
  _objc_retain(puVar5);
  func_0x00781100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _swift_unknownObjectRelease_n(param_1,2);
  _swift_release(param_2);
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return;
}



/* Entry: 0003b340; end: 0003b357;  */

void __s23ExtensionsStickerPicker22StickersUserDataClientC03puteF5Items4withSaySo14SCCTPEXTCTItemCGSaySSG_tYaKF
               (undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003b358,0,0);
  return;
}



/* Entry: 0003b358; end: 0003b3af;  */

void FUN_0003b358(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_0003b3b0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_0003b418();
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
  return;
}



/* Entry: 0003b3b0; end: 0003b417;  */

void FUN_0003b3b0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0003b3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0003b414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(*unaff_x22 + 0x50));
  return;
}



/* Entry: 0003b418; end: 0003baa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003b418(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lStack_70;
  long lStack_68;
  
  plVar4 = &lStack_70;
  lVar10 = *(long *)(param_2 + 0x10);
  if (lVar10 != 0) {
    puVar8 = &UNK_0099ed30;
    _swift_allocObject(&UNK_0099ed30,0x18,7);
    _swift_weakInit(puVar8 + 0x10,param_2);
    puVar1 = &UNK_0099ed58;
    _swift_allocObject(&UNK_0099ed58,0x20,7);
    *(undefined **)(puVar1 + 0x10) = puVar8;
    *(undefined1 **)(puVar1 + 0x18) = param_1;
    lVar2 = 0;
    FUN_0003bc0c();
    lVar3 = lVar2;
    _objc_allocWithZone();
    puVar9 = (undefined8 *)(lVar3 + _DAT_00ae75f8);
    *puVar9 = FUN_0003c3ec;
    puVar9[1] = puVar1;
    puVar8 = PTR_s_init_00abbf70;
    lStack_70 = lVar3;
    lStack_68 = lVar2;
    _objc_retain(lVar10);
    _objc_msgSendSuper2(&lStack_70,puVar8);
    FUN_0003bf5c();
    puVar7 = param_3;
    func_0x007814c0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined1 *)0x0) {
      FUN_00030868();
      puVar8 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
      _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar7,0,0);
      *puVar7 = 0;
      uVar6 = 0xae60d0;
      func_0x000115a8(0xae60d0,&UNK_007ccdd0);
      puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
      _swift_allocError();
      *puVar9 = puVar8;
      _swift_continuation_throwingResumeWithError(param_1,uVar6);
      _objc_release(param_3);
      _objc_release(lVar10);
    }
    else {
      puVar5 = puVar7;
      __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
      _objc_release(puVar7);
      uVar6 = 0xd000000000000045;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000045,0x80000000008b5d50);
      puVar7 = puVar5;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar5,puVar8);
      puVar1 = PTR_PTR_00ac2818;
      _objc_opt_self(PTR_PTR_00ac2818);
      func_0x0077fce0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(plVar4);
      lVar3 = lVar10;
      func_0x00792fa0(lVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(puVar7);
      _objc_release(puVar1);
      _objc_release(plVar4);
      _objc_release(lVar3);
      FUN_00023358(puVar5,puVar8);
      _objc_release(lVar10);
      _objc_release(plVar4);
      plVar4 = (long *)param_3;
    }
    _objc_release(plVar4);
    return;
  }
  puVar7 = param_1;
  FUN_00030868();
  puVar8 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
  _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,puVar7,0,0);
  *puVar7 = 0;
  uVar6 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  puVar9 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
  _swift_allocError();
  *puVar9 = puVar8;
                    /* WARNING: Could not recover jumptable at 0x0077b2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_0099c078)(param_1,uVar6);
  return;
}



/* Entry: 0003baa8; end: 0003baf3;  */

void FUN_0003baa8(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0003baf4; end: 0003bb97; -[_TtC23ExtensionsStickerPickerP33_205659D5D6E0D6D44DC0734E884DE4A826UserDataPutResponseHandler onEvent:status:] */

void FUN_0003baf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  FUN_0003c204(param_3,param_2);
  FUN_00023344(param_3,param_2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 0003bb98; end: 0003bbf7; -[_TtC23ExtensionsStickerPickerP33_205659D5D6E0D6D44DC0734E884DE4A826UserDataPutResponseHandler init] */

void FUN_0003bb98(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ExtensionsStickerPicker.UserDataPutResponseHandler",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x3bbc4);
  (*pcVar1)();
}



/* Entry: 0003bbf8; end: 0003bc0b; -[_TtC23ExtensionsStickerPickerP33_205659D5D6E0D6D44DC0734E884DE4A826UserDataPutResponseHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003bbf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*(undefined8 *)(param_1 + _DAT_00ae75f8 + 8));
  return;
}



/* Entry: 0003bc0c; end: 0003bc2b;  */

void FUN_0003bc0c(void)

{
  _objc_opt_self(&PTR_PTR_00ac6c78);
  return;
}



/* Entry: 0003bc2c; end: 0003bc4f;  */

void FUN_0003bc2c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0xae7630;
  plVar5 = (long *)&UNK_007ce680;
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_0003c3f4(0,0xae68f0,&PTR_PTR_00ac2838);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0xae61a0;
      plVar5 = (long *)&UNK_007cfbd0;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 0003bc50; end: 0003bcc7;  */

void FUN_0003bc50(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_0040c9a8(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_0003c3f4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0xae61a0;
      param_4 = (long *)&UNK_007cfbd0;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    _swift_getTypeByMangledNameInContext(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 0003bcc8; end: 0003bcff;  */

void FUN_0003bcc8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_0003bd00();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0003bd00; end: 0003be07;  */

undefined * FUN_0003bd00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x3be08);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0xae6940;
    func_0x000115a8(0xae6940,&UNK_007da060);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___sSSN_0099b040);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 0003be08; end: 0003bf5b;  */

undefined * FUN_0003be08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x3bf5c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0xae7438;
    FUN_0003bc50(0xae7438,&PTR_PTR_00ac3250,0xae7628,&UNK_007ce670);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_0003c3f4(0,0xae7438,&PTR_PTR_00ac3250);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Entry: 0003bf5c; end: 0003c143;  */

undefined * FUN_0003bf5c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar3 = PTR_PTR_00ac28a0;
  _objc_allocWithZone(PTR_PTR_00ac28a0);
  func_0x007849a0();
  puVar7 = PTR___swiftEmptyArrayStorage_0099b8f0;
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    func_0x0003bce4(0,lVar8,0);
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar6 = puVar9[-1];
      uVar2 = *puVar9;
      puVar4 = PTR_PTR_00ac3250;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar2);
      func_0x007849a0();
      puVar5 = PTR_PTR_00ac3260;
      _objc_allocWithZone(PTR_PTR_00ac3260);
      func_0x007849a0();
      func_0x0078e960();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar2);
      func_0x0078e5e0(puVar5);
      _objc_release(uVar6);
      func_0x0078dea0(puVar4);
      func_0x0078d360(puVar4);
      _swift_bridgeObjectRelease(uVar2);
      _objc_release(puVar5);
      uVar1 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        func_0x0003bce4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar9 = puVar9 + 2;
      *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
      *(undefined **)(puVar7 + uVar1 * 8 + 0x20) = puVar4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  puVar4 = puVar7;
  FUN_0003ae4c(puVar7);
  _swift_bridgeObjectRelease(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_allocWithZone(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  puVar5 = puVar4;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar4,PTR___sypN_0099b8d8 + 8);
  _swift_bridgeObjectRelease(puVar4);
  func_0x00784c20(puVar7);
  _objc_release(puVar5);
  func_0x0078e980(puVar3);
  _objc_release(puVar7);
  func_0x0078e660(puVar3);
  return puVar3;
}



/* Entry: 0003c144; end: 0003c203;  */

/* WARNING: Removing unreachable block (ram,0x0003c2f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_0003c144(undefined8 param_1,ulong param_2)

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
      _objc_allocWithZone(PTR_PTR_00ac2898);
      func_0x00023304(puVar3,param_2);
      puVar5 = puVar3;
      FUN_0003c144(puVar3,param_2);
      FUN_00023344(puVar3,param_2);
      pcVar1 = *(code **)(unaff_x20 + _DAT_00ae75f8);
      uVar2 = *(undefined8 *)((long)(unaff_x20 + _DAT_00ae75f8) + 8);
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
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae75f8);
    puVar5 = *(undefined1 **)((long)(unaff_x20 + _DAT_00ae75f8) + 8);
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



/* Entry: 0003c204; end: 0003c3a3;  */

/* WARNING: Removing unreachable block (ram,0x0003c2f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003c204(undefined1 *param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  if (param_2 >> 0x3c < 0xf) {
    _objc_allocWithZone(PTR_PTR_00ac2898);
    func_0x00023304(param_1,param_2);
    puVar4 = param_1;
    FUN_0003c144(param_1,param_2);
    FUN_00023344(param_1,param_2);
    pcVar1 = *(code **)(unaff_x20 + _DAT_00ae75f8);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae75f8))[1];
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
  pcVar1 = *(code **)(unaff_x20 + _DAT_00ae75f8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_00ae75f8))[1];
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



/* Entry: 0003c3a4; end: 0003c3eb;  */

void FUN_0003c3a4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003c3ec; end: 0003c3f3;  */

void FUN_0003c3ec(undefined1 *param_1,char param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (param_2 == '\x01') {
    puVar5 = param_1;
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_1);
    puVar6 = puVar5;
    func_0x00780460();
    _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
    lVar7 = lVar7 + 0x10;
    _swift_weakLoadStrong();
    if (lVar7 != 0) {
      lVar15 = *(long *)(lVar7 + 0x18);
      _swift_retain(lVar15);
      _swift_release(lVar7);
      if (lVar15 != 0) {
        func_0x0002c3fc(0x7461645f72657375,0xe900000000000061,puVar6);
        _swift_release(lVar15);
      }
    }
    _objc_release(puVar5);
    uVar8 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar14 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar14 = param_1;
    _swift_errorRetain(param_1);
  }
  else {
    _swift_beginAccess(lVar7 + 0x10,auStack_78,0,0);
    lVar7 = lVar7 + 0x10;
    _swift_weakLoadStrong();
    if (lVar7 != 0) {
      lVar15 = *(long *)(lVar7 + 0x18);
      _swift_retain(lVar15);
      _swift_release(lVar7);
      if (lVar15 != 0) {
        func_0x0002c264(0x7461645f72657375,0xe900000000000061);
        _swift_release(lVar15);
      }
    }
    func_0x0078bb60();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != (undefined1 *)0x0) {
      uStack_80 = 0;
      uVar8 = 0;
      FUN_0003c3f4(0,0xae7440,&PTR_PTR_00ac3258);
      __sSa10FoundationE34_conditionallyBridgeFromObjectiveC_6resultSbSo7NSArrayC_SayxGSgztFZ
                (param_1,&uStack_80,uVar8);
      _objc_release();
      uVar3 = uStack_80;
      if (uStack_80 != 0) {
        uVar18 = uStack_80 & 0xffffffffffffff8;
        if (uStack_80 >> 0x3e == 0) {
          uVar16 = *(ulong *)(uVar18 + 0x10);
          puVar13 = PTR___swiftEmptyArrayStorage_0099b8f0;
        }
        else {
          uVar16 = uStack_80;
          if (-1 < (long)uStack_80) {
            uVar16 = uVar18;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
          puVar13 = PTR___swiftEmptyArrayStorage_0099b8f0;
        }
        PTR___swiftEmptyArrayStorage_0099b8f0 = puVar13;
        if (uVar16 != 0) {
          uVar17 = 0;
          do {
            while( true ) {
              if ((uVar3 & 0xc000000000000001) == 0) {
                if (*(ulong *)(uVar18 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x3ba6c);
                  (*pcVar4)();
                }
                uVar9 = *(ulong *)(uVar3 + uVar17 * 8 + 0x20);
                _objc_retain();
              }
              else {
                uVar9 = uVar17;
                func_0x00038700(uVar17,uVar3);
              }
              uVar1 = uVar17 + 1;
              if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x3ba68);
                (*pcVar4)();
              }
              uVar10 = uVar9;
              func_0x00782da0();
              if ((int)uVar10 == 0) break;
              _objc_release(uVar9);
LAB_0003b8d0:
              uVar17 = uVar17 + 1;
              if (uVar1 == uVar16) goto LAB_0003ba88;
            }
            uVar10 = uVar9;
            func_0x00787fe0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            if (uVar10 == 0) goto LAB_0003b8d0;
            puVar12 = puVar13;
            _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
            if (((((ulong)puVar12 & 1) == 0) || ((long)puVar13 < 0)) ||
               (puVar12 = puVar13, ((ulong)puVar13 >> 0x3e & 1) != 0)) {
              if ((ulong)puVar13 >> 0x3e == 0) {
                puVar11 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar11 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar13) {
                  puVar11 = puVar13;
                }
                __ss18_CocoaArrayWrapperV8endIndexSivg(puVar11);
              }
              puVar12 = (undefined *)0x0;
              FUN_0002a20c(0,puVar11 + 1,1,puVar13);
            }
            uVar9 = (ulong)puVar12 & 0xffffffffffffff8;
            uVar17 = *(ulong *)(uVar9 + 0x10);
            puVar13 = puVar12;
            if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar17) {
              puVar13 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
              FUN_0002a20c(puVar13,uVar17 + 1,1,puVar12);
              uVar9 = (ulong)puVar13 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar9 + 0x10) = uVar17 + 1;
            *(ulong *)(uVar9 + uVar17 * 8 + 0x20) = uVar10;
            uVar17 = uVar1;
          } while (uVar1 != uVar16);
        }
LAB_0003ba88:
        _swift_bridgeObjectRelease(uVar3);
        **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar13;
        _swift_continuation_throwingResume(lVar2);
        return;
      }
    }
    FUN_00030868();
    puVar13 = &__s23ExtensionsStickerPicker0B8ExtErrorON;
    _swift_allocError(&__s23ExtensionsStickerPicker0B8ExtErrorON,param_1,0,0);
    *param_1 = 0;
    uVar8 = 0xae60d0;
    func_0x000115a8(0xae60d0,&UNK_007ccdd0);
    puVar14 = (undefined8 *)PTR___ss5ErrorWS_0099b720;
    _swift_allocError();
    *puVar14 = puVar13;
  }
  _swift_continuation_throwingResumeWithError(lVar2,uVar8);
  return;
}



/* Entry: 0003c3f4; end: 0003c433;  */

void FUN_0003c3f4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 0003c434; end: 0003cd23;  */

undefined *
__s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
          (ulong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  ulong *puVar12;
  long extraout_x12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uStack_d0;
  ulong *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined4 uStack_84;
  undefined8 uStack_80;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = 0xae6dd0;
  uStack_84 = param_4;
  uStack_80 = param_3;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar15 = (long)&uStack_d0 - extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar14 + 0x40));
  lVar11 = uVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_90 = lVar11;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lStack_c0 = *(long *)(lVar3 + -8);
  lStack_b8 = lVar3;
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lStack_c0 + 0x40));
  puVar12 = (ulong *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puStack_c8 = puVar12;
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lStack_a0 = (long)puVar12 - extraout_x12;
  if (param_1 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar16 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  puStack_98 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar16 != 0) {
    uVar17 = 0;
    uStack_68 = param_1 & 0xc000000000000001;
    uStack_70 = param_1 & 0xffffffffffffff8;
    uStack_b0 = param_2;
    uStack_a8 = param_1;
    lStack_78 = lVar14;
    do {
      if (uStack_68 == 0) {
        if (*(ulong *)(uStack_70 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x3c7bc);
          (*pcVar13)();
        }
        uVar4 = *(ulong *)(param_1 + uVar17 * 8 + 0x20);
        _objc_retain();
      }
      else {
        uVar4 = uVar17;
        FUN_000384cc(uVar17,param_1);
      }
      uVar1 = uVar17 + 1;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x3c7b8);
        (*pcVar13)();
      }
      uVar5 = uVar4;
      func_0x007829c0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x3c808);
        (*pcVar13)();
      }
      uVar6 = uVar5;
      func_0x007829e0();
      _objc_release(uVar5);
      if ((int)uVar6 == 2) {
        func_0x0003c810(uVar15,uVar4,param_2,uStack_80,uStack_84);
        lVar3 = lStack_78;
        uVar5 = uVar15;
        (**(code **)(lStack_78 + 0x30))(uVar15,1,lVar2);
        if ((int)uVar5 == 1) {
          _objc_release(uVar4);
          func_0x0002f32c(uVar15);
        }
        else {
          pcVar13 = *(code **)(lVar3 + 0x20);
          uVar6 = uVar15;
          (*pcVar13)(lStack_90,uVar15,lVar2);
          uVar5 = uVar4;
          func_0x007829c0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar5 == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x3c810);
            (*pcVar13)();
          }
          uVar7 = uVar5;
          func_0x0077fa60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          if (uVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x3c80c);
            (*pcVar13)();
          }
          uVar5 = uVar7;
          func_0x00780640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          if (uVar5 == 0) {
            (**(code **)(lStack_78 + 8))(lStack_90,lVar2);
            _objc_release(uVar4);
            param_2 = uStack_b0;
            param_1 = uStack_a8;
          }
          else {
            uVar7 = uVar5;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(uVar5);
            _objc_release(uVar4);
            puVar12 = puStack_c8;
            (*pcVar13)((long)puStack_c8 + (long)*(int *)(lStack_b8 + 0x1c),lStack_90,lVar2);
            *puVar12 = uVar7;
            puVar12[1] = uVar6;
            *(undefined2 *)(puVar12 + 2) = 0x100;
            FUN_0002b8f0(puVar12,lStack_a0);
            puVar10 = puStack_98;
            puVar8 = puStack_98;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar9 = puVar10;
            if (((ulong)puVar8 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              FUN_0002a458(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
            }
            uVar4 = *(ulong *)(puVar9 + 0x10);
            puVar10 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar4) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              FUN_0002a458(puVar10,uVar4 + 1,1,puVar9);
            }
            *(ulong *)(puVar10 + 0x10) = uVar4 + 1;
            puStack_98 = puVar10;
            FUN_0002b8f0(lStack_a0,
                         puVar10 + *(long *)(lStack_c0 + 0x48) * uVar4 +
                                   ((ulong)*(byte *)(lStack_c0 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lStack_c0 + 0x50) ^ 0xffffffffffffffff)));
            param_2 = uStack_b0;
            param_1 = uStack_a8;
          }
        }
      }
      else {
        _objc_release(uVar4);
      }
      uVar17 = uVar17 + 1;
    } while (uVar1 != uVar16);
  }
  return puStack_98;
}



/* Entry: 0003cd24; end: 0003cd33;  */

undefined1  [16] FUN_0003cd24(void)

{
  return ZEXT816(0x99ed80);
}



/* Entry: 0003cd34; end: 0003cdff;  */

void __s23ExtensionsStickerPicker0B14FetchViewModelC7fileURL10Foundation0H0VSgvg(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar2 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 0003ce00; end: 0003ce03;  */

void FUN_0003ce00(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar2 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 0003ce04; end: 0003cebf;  */

void FUN_0003ce04(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *param_2;
  puVar2 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar3 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  FUN_0002f2dc(param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&stack0xffffffffffffffc0 + -extraout_x8,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 0003cec0; end: 0003cec3;  */

void FUN_0003cec0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = *param_2;
  puVar2 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar3 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  FUN_0002f2dc(param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&stack0xffffffffffffffc0 + -extraout_x8,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 0003cec4; end: 0003cf9b;  */

undefined1 __s23ExtensionsStickerPicker0B14FetchViewModelC5errorAA0B8ExtErrorOSgvg(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_007ce720;
  _swift_getKeyPath(&UNK_007ce720);
  puVar2 = &UNK_007ce748;
  _swift_getKeyPath(&UNK_007ce748);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 0003cf9c; end: 0003cf9f;  */

void FUN_0003cf9c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_007ce720;
  _swift_getKeyPath(&UNK_007ce720);
  puVar2 = &UNK_007ce748;
  _swift_getKeyPath(&UNK_007ce748);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 0003cfa0; end: 0003d00f;  */

void FUN_0003cfa0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &UNK_007ce720;
  _swift_getKeyPath(&UNK_007ce720);
  puVar3 = &UNK_007ce748;
  _swift_getKeyPath(&UNK_007ce748);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 0003d010; end: 0003d013;  */

void FUN_0003d010(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &UNK_007ce720;
  _swift_getKeyPath(&UNK_007ce720);
  puVar3 = &UNK_007ce748;
  _swift_getKeyPath(&UNK_007ce748);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 0003d014; end: 0003d0eb;  */

undefined8 __s23ExtensionsStickerPicker0B14FetchViewModelC12displayImageSo7UIImageCSgvg(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_007ce778;
  _swift_getKeyPath(&UNK_007ce778);
  puVar2 = &UNK_007ce7a0;
  _swift_getKeyPath(&UNK_007ce7a0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_38;
}



/* Entry: 0003d0ec; end: 0003d0ef;  */

void FUN_0003d0ec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_007ce778;
  _swift_getKeyPath(&UNK_007ce778);
  puVar2 = &UNK_007ce7a0;
  _swift_getKeyPath(&UNK_007ce7a0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(puVar2);
  return;
}



/* Entry: 0003d0f0; end: 0003d167;  */

void FUN_0003d0f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  puVar1 = &UNK_007ce778;
  _swift_getKeyPath(&UNK_007ce778);
  puVar2 = &UNK_007ce7a0;
  _swift_getKeyPath(&UNK_007ce7a0);
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_38,uVar4,puVar1,puVar2);
  return;
}



/* Entry: 0003d168; end: 0003d16b;  */

void FUN_0003d168(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  puVar1 = &UNK_007ce778;
  _swift_getKeyPath(&UNK_007ce778);
  puVar2 = &UNK_007ce7a0;
  _swift_getKeyPath(&UNK_007ce7a0);
  uStack_38 = uVar3;
  _objc_retain(uVar3);
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_38,uVar4,puVar1,puVar2);
  return;
}



/* Entry: 0003d16c; end: 0003daa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_0003d16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined1 uStack_61;
  
  lVar3 = 0xae6dd0;
  uStack_90 = param_2;
  uStack_88 = param_3;
  uStack_80 = param_4;
  uStack_74 = param_5;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar7 = lVar6 - extraout_x12;
  _swift_allocObject();
  lVar2 = _DAT_00ae7640;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (**(code **)(lVar8 + 0x38))(lVar7,1,1,lVar4);
  FUN_0002f2dc(lVar7,lVar6);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(unaff_x20 + lVar2,lVar6,lVar3);
  FUN_0003daa8(lVar7,0xae6dd0,&UNK_007ce690);
  lVar3 = _DAT_00ae7658;
  uStack_61 = 2;
  uVar5 = 0xae7650;
  func_0x000115a8(0xae7650,&UNK_007ce718);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(unaff_x20 + lVar3,&uStack_61,uVar5);
  lVar3 = _DAT_00ae7670;
  uStack_70 = 0;
  uVar5 = 0xae7668;
  func_0x000115a8(0xae7668,&UNK_007ce770);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(unaff_x20 + lVar3,&uStack_70,uVar5);
  *(undefined8 *)(unaff_x20 + _DAT_00ae7680) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_00ae7688) = 0;
  (**(code **)(lVar8 + 0x20))(unaff_x20 + _DAT_00ae7690,param_1,lVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_00ae7698);
  *puVar1 = uStack_90;
  puVar1[1] = uStack_88;
  *(undefined8 *)(unaff_x20 + _DAT_00ae76a0) = uStack_80;
  *(char *)(unaff_x20 + _DAT_00ae76a8) = (char)uStack_74;
  return unaff_x20;
}



/* Entry: 0003daa8; end: 0003dae7;  */

undefined8 FUN_0003daa8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x000115a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 0003dae8; end: 0003db0b;  */

void FUN_0003dae8(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003db0c; end: 0003dbd3;  */

void FUN_0003db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar4;
  uVar5 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar6 = uVar5;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar6;
  uVar6 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003dbd4,uVar5,uVar6);
  return;
}



/* Entry: 0003dbd4; end: 0003dccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dbd4(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x30);
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x68) = lVar7;
  lVar2 = _DAT_00ae7690;
  if (lVar7 != 0) {
    *(long *)(unaff_x22 + 0x70) = _DAT_00ae7690;
    uVar1 = *(undefined8 *)(lVar7 + _DAT_00ae7698);
    uVar6 = ((undefined8 *)(lVar7 + _DAT_00ae7698))[1];
    *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
    pcVar5 = section_000001a8.segname + 8;
    _swift_bridgeObjectRetain(uVar6);
    _swift_task_alloc();
    *(char **)(unaff_x22 + 0x80) = pcVar5;
    *(long *)pcVar5 = unaff_x22;
    *(code **)(pcVar5 + 8) = FUN_0003dcd0;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(pcVar5 + 0x160) = uVar6;
    *(undefined8 *)(pcVar5 + 0x168) = uVar8;
    *(long *)(pcVar5 + 0x150) = lVar7 + lVar2;
    *(undefined8 *)(pcVar5 + 0x158) = uVar1;
    lVar7 = 0;
    __s10Foundation4DateVMa();
    *(long *)(pcVar5 + 0x170) = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    *(long *)(pcVar5 + 0x178) = lVar7;
    uVar4 = *(long *)(lVar7 + 0x40) + 0xf;
    uVar3 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar5 + 0x180) = uVar3;
    uVar4 = uVar4 & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(pcVar5 + 0x188) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_0099c0e8)(0x2f6b8,0,0);
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0003dccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003dcd0; end: 0003dd37;  */

void FUN_0003dcd0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(long *)(lVar3 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_0003dd38;
  }
  else {
    pcVar2 = FUN_0003de24;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (pcVar2,*(undefined8 *)(lVar3 + 0x58),*(undefined8 *)(lVar3 + 0x60));
  return;
}



/* Entry: 0003dd38; end: 0003de23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003dd38(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_0002e6b4(uVar2,lVar1 + lVar3);
  puVar5 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar6 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  FUN_0002f2dc(uVar2,uVar4);
  _swift_retain(lVar1);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (uVar4,lVar1,puVar5,puVar6);
  FUN_0003daa8(uVar2,0xae6dd0,&UNK_007ce690);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_00ae7680);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_00ae7680) = 0;
  _swift_release();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(uVar7);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0003de20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003de24; end: 0003df93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003de24(void)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  _swift_errorRetain(uVar5);
  uVar5 = 0xae60d0;
  func_0x000115a8(0xae60d0,&UNK_007ccdd0);
  uVar2 = unaff_x22 + 0x90;
  _swift_dynamicCast(uVar2,(undefined8 *)(unaff_x22 + 0x28),uVar5,
                     &__s23ExtensionsStickerPicker0B8ExtErrorON,0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  if ((uVar2 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x28));
    puVar3 = &UNK_007ce720;
    _swift_getKeyPath(&UNK_007ce720);
    puVar4 = &UNK_007ce748;
    _swift_getKeyPath(&UNK_007ce748);
    *(undefined1 *)(unaff_x22 + 0x91) = 0;
    _swift_retain(uVar6);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined1 *)(unaff_x22 + 0x91),uVar6,puVar3,puVar4);
  }
  else {
    _swift_errorRelease(uVar5);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x90);
    puVar3 = &UNK_007ce720;
    _swift_getKeyPath(&UNK_007ce720);
    puVar4 = &UNK_007ce748;
    _swift_getKeyPath(&UNK_007ce748);
    *(undefined1 *)(unaff_x22 + 0x92) = uVar1;
    _swift_retain(uVar6);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined1 *)(unaff_x22 + 0x92),uVar6,puVar3,puVar4);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  }
  _swift_errorRelease(uVar5);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_00ae7680);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_00ae7680) = 0;
  _swift_release();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0003df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003df94; end: 0003dfbf;  */

void FUN_0003df94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003dfc0; end: 0003e023;  */

void FUN_0003dfc0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  dword *pdVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  pdVar7 = &section_00000068.reloff;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar7;
  *(long *)pdVar7 = unaff_x22;
  *(code **)(pdVar7 + 2) = FUN_0003e024;
  *(undefined8 *)(pdVar7 + 0xc) = uVar6;
  *(undefined8 *)(pdVar7 + 0xe) = uVar5;
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar7 + 0x10) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pdVar7 + 0x12) = uVar4;
  uVar5 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar6 = uVar5;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pdVar7 + 0x14) = uVar6;
  uVar6 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pdVar7 + 0x16) = uVar5;
  *(undefined8 *)(pdVar7 + 0x18) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003dbd4,uVar5,uVar6);
  return;
}



/* Entry: 0003e024; end: 0003e05f;  */

void FUN_0003e024(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0003e05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 0003e060; end: 0003e2fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __s23ExtensionsStickerPicker0B14FetchViewModelC27prepareDisplayImageIfNeeded11stickerSize5scaleySo6CGSizeV_12CoreGraphics7CGFloatVtF
               (double param_1,double param_2,double param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long alStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar4 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (puVar11);
  _swift_release(puVar3);
  _swift_release(puVar4);
  puVar5 = puVar11;
  (**(code **)(lVar13 + 0x30))(puVar11,1,lVar2);
  if ((int)puVar5 == 1) {
    FUN_0003daa8(puVar11,0xae6dd0,&UNK_007ce690);
  }
  else {
    (**(code **)(lVar13 + 0x20))(lVar10,puVar11,lVar2);
    lVar1 = _DAT_00ae7688;
    puVar3 = PTR___sytN_0099b8e0;
    lVar12 = *(long *)(unaff_x20 + _DAT_00ae7688);
    if (lVar12 != 0) {
      _swift_retain(lVar12);
      __sScT6cancelyyF();
      _swift_release(lVar12);
    }
    _swift_getKeyPath(&UNK_007ce778);
    _swift_getKeyPath(&UNK_007ce7a0);
    uStack_88 = 0;
    _swift_retain();
    puVar6 = &uStack_88;
    lVar12 = unaff_x20;
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ();
    __s10Foundation3URLV4pathSSvg();
    puVar4 = &UNK_0099eda0;
    _swift_allocObject(&UNK_0099eda0,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar7 = &UNK_0099edf0;
    _swift_allocObject(&UNK_0099edf0,0x38,7);
    *(undefined **)(puVar7 + 0x10) = puVar4;
    *(undefined8 **)(puVar7 + 0x18) = puVar6;
    *(long *)(puVar7 + 0x20) = lVar12;
    *(double *)(puVar7 + 0x28) = param_1 * param_3;
    *(double *)(puVar7 + 0x30) = param_2 * param_3;
    *(undefined **)(lVar10 + -0x10) = puVar3 + 8;
    uVar8 = 2;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (2,0,0x10,4,0,0,&UNK_007ce7e8,puVar7);
    _swift_release(puVar7);
    (**(code **)(lVar13 + 8))(lVar10,lVar2);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar8;
    _swift_release(uVar9);
  }
  return;
}



/* Entry: 0003e2fc; end: 0003e393;  */

void FUN_0003e2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_1;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  uVar3 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003e394,uVar2,uVar3);
  return;
}



/* Entry: 0003e394; end: 0003e5f7;  */

void FUN_0003e394(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0xb0);
  _swift_beginAccess(lVar6 + 0x10,unaff_x22 + 0x90,0,0);
  uVar1 = lVar6 + 0x10;
  _swift_weakLoadStrong();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  if (uVar1 == 0) {
    uVar1 = *(ulong *)(unaff_x22 + 0xd8);
  }
  else {
    uVar4 = uVar1;
    __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
    if ((uVar4 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
      puVar2 = PTR__OBJC_CLASS___UIImage_00ac2a88;
      _objc_allocWithZone();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar7);
      func_0x00785080();
      *(undefined **)(unaff_x22 + 0xf8) = puVar2;
      _objc_release(uVar3);
      if (puVar2 != (undefined *)0x0) {
        uVar8 = *(undefined8 *)(unaff_x22 + 200);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_0003e5f8;
        lVar6 = unaff_x22 + 0x10;
        _swift_continuation_init(lVar6,0);
        uVar3 = 0xae77d0;
        func_0x000115a8(0xae77d0,&UNK_007ce8b8);
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_00999f30;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(code **)(unaff_x22 + 0x60) = FUN_0003e844;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_0099ee58;
        *(long *)(unaff_x22 + 0x70) = lVar6;
        _objc_retain(puVar2);
        func_0x0078a8c0(uVar8,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_0099c058)(unaff_x22 + 0x10);
        return;
      }
      uVar4 = *(ulong *)(unaff_x22 + 0xd8);
      _swift_release();
      __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
      uVar1 = *(ulong *)(unaff_x22 + 0xf0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
        puVar2 = &UNK_0099eda0;
        _swift_allocObject(&UNK_0099eda0,0x18,7);
        _swift_weakInit(puVar2 + 0x10,uVar1);
        puVar5 = &UNK_0099ee18;
        _swift_allocObject(&UNK_0099ee18,0x30,7);
        *(undefined **)(puVar5 + 0x10) = puVar2;
        *(undefined8 *)(puVar5 + 0x18) = uVar7;
        *(undefined8 *)(puVar5 + 0x20) = uVar8;
        *(undefined8 *)(puVar5 + 0x28) = 0;
        puVar2 = &UNK_0099ee40;
        _swift_allocObject(&UNK_0099ee40,0x20,7);
        *(undefined **)(puVar2 + 0x10) = &UNK_007ce8a0;
        *(undefined **)(puVar2 + 0x18) = puVar5;
        _swift_bridgeObjectRetain(uVar8);
        __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
                  (2,0,0x10,4,0,0,&UNK_007ce8b0,puVar2,PTR___sytN_0099b8e0 + 8);
        _swift_release();
        _swift_release(puVar2);
      }
      _objc_release(uVar3);
    }
    else {
      _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
    }
  }
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0003e5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003e5f8; end: 0003e633;  */

void FUN_0003e5f8(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)
            (FUN_0003e634,*(undefined8 *)(*unaff_x22 + 0xe0),*(undefined8 *)(*unaff_x22 + 0xe8));
  return;
}



/* Entry: 0003e634; end: 0003e78f;  */

void FUN_0003e634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
  _objc_release();
  __sScTss5NeverORszABRs_rlE11isCancelledSbvgZ();
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  if ((uVar7 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    puVar5 = &UNK_0099eda0;
    _swift_allocObject(&UNK_0099eda0,0x18,7);
    _swift_weakInit(puVar5 + 0x10,uVar1);
    puVar6 = &UNK_0099ee18;
    _swift_allocObject(&UNK_0099ee18,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(undefined8 *)(puVar6 + 0x20) = uVar4;
    *(undefined8 *)(puVar6 + 0x28) = uVar8;
    puVar5 = &UNK_0099ee40;
    _swift_allocObject(&UNK_0099ee40,0x20,7);
    *(undefined **)(puVar5 + 0x10) = &UNK_007ce8a0;
    *(undefined **)(puVar5 + 0x18) = puVar6;
    _objc_retain(uVar8);
    _swift_bridgeObjectRetain(uVar4);
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (2,0,0x10,4,0,0,&UNK_007ce8b0,puVar5,PTR___sytN_0099b8e0 + 8);
    _swift_release();
    _swift_release(puVar5);
    _objc_release(uVar8);
    _objc_release(uVar3);
    _swift_release(uVar1);
  }
  else {
    _objc_release(uVar3);
    _swift_release(uVar1);
    _objc_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x0003e78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003e790; end: 0003e7bb;  */

void FUN_0003e790(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003e7bc; end: 0003e843;  */

void FUN_0003e7bc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  dword *pdVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  pdVar4 = &section_000000b8.reserved2;
  _swift_task_alloc();
  *(dword **)(unaff_x22 + 0x10) = pdVar4;
  *(long *)pdVar4 = unaff_x22;
  *(undefined8 *)(pdVar4 + 2) = 0x3f2e8;
  *(undefined8 *)(pdVar4 + 0x32) = uVar6;
  *(undefined8 *)(pdVar4 + 0x34) = uVar7;
  *(undefined8 *)(pdVar4 + 0x2e) = uVar2;
  *(undefined8 *)(pdVar4 + 0x30) = uVar5;
  *(undefined8 *)(pdVar4 + 0x2c) = uVar3;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pdVar4 + 0x36) = uVar3;
  uVar3 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(pdVar4 + 0x38) = uVar2;
  *(undefined8 *)(pdVar4 + 0x3a) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003e394,uVar2,uVar3);
  return;
}



/* Entry: 0003e844; end: 0003e887;  */

void FUN_0003e844(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0003f2c4(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *plVar1;
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = param_2;
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x0077b29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_0099c068)(lVar2);
  return;
}



/* Entry: 0003e888; end: 0003e96f;  */

void FUN_0003e888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  *(long *)(unaff_x22 + 0x50) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x58) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar3;
  uVar4 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_0099be80;
  uVar5 = uVar4;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  uVar5 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar1,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003e970,uVar4,uVar5);
  return;
}



/* Entry: 0003e970; end: 0003eb57;  */

void FUN_0003e970(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_beginAccess(lVar7 + 0x10,unaff_x22 + 0x10,0,0);
  lVar7 = lVar7 + 0x10;
  _swift_weakLoadStrong();
  if (lVar7 == 0) goto LAB_0003eb28;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar6 = *(long *)(unaff_x22 + 0x58);
  puVar4 = &UNK_007ce6c8;
  _swift_getKeyPath(&UNK_007ce6c8);
  puVar5 = &UNK_007ce6f0;
  _swift_getKeyPath(&UNK_007ce6f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (uVar8,lVar7,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  (**(code **)(lVar6 + 0x30))(uVar8,1,uVar10);
  uVar9 = *(ulong *)(unaff_x22 + 0x68);
  if ((int)uVar8 == 0) {
    lVar1 = *(long *)(unaff_x22 + 0x58);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(ulong *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x40);
    (**(code **)(lVar1 + 0x10))(uVar10,uVar9,uVar8);
    lVar6 = 0xae6dd0;
    FUN_0003daa8(uVar9,0xae6dd0,&UNK_007ce690);
    __s10Foundation3URLV4pathSSvg();
    (**(code **)(lVar1 + 8))(uVar10,uVar8);
    if ((uVar9 == uVar2) && (lVar6 == lVar3)) {
      _swift_bridgeObjectRelease(lVar6);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar9,lVar6,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),0);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar9 & 1) == 0) goto LAB_0003ea40;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    puVar4 = &UNK_007ce778;
    _swift_getKeyPath(&UNK_007ce778);
    puVar5 = &UNK_007ce7a0;
    _swift_getKeyPath(&UNK_007ce7a0);
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    _objc_retain(uVar10);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x28,lVar7,puVar4,puVar5);
  }
  else {
    FUN_0003daa8(uVar9,0xae6dd0,&UNK_007ce690);
LAB_0003ea40:
    _swift_release(lVar7);
  }
LAB_0003eb28:
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0003eb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 0003eb58; end: 0003ebe7;  */

void FUN_0003eb58(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x3ebac;
                    /* WARNING: Could not recover jumptable at 0x0003eba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))();
  return;
}



/* Entry: 0003ebe8; end: 0003ee37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __s23ExtensionsStickerPicker0B14FetchViewModelC5resetyyF(void)

{
  undefined8 uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_50 [7];
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar2 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar4 = auStack_50 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar2 = _DAT_00ae7680;
  lVar3 = (long)puVar4 - extraout_x12;
  lVar5 = *(long *)(unaff_x20 + _DAT_00ae7680);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(lVar5);
    __sScT6cancelyyF();
    _swift_release(lVar5);
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _swift_release(uVar1);
  lVar2 = _DAT_00ae7688;
  if (*(char *)(unaff_x20 + _DAT_00ae76a8) == '\x01') {
    lVar5 = *(long *)(unaff_x20 + _DAT_00ae7688);
    if (lVar5 == 0) {
      uVar1 = 0;
    }
    else {
      _swift_retain(lVar5);
      __sScT6cancelyyF();
      _swift_release(lVar5);
      uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    _swift_release(uVar1);
    _swift_getKeyPath(&UNK_007ce778);
    _swift_getKeyPath(&UNK_007ce7a0);
    uStack_48 = 0;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_48);
    lVar2 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,1,1,lVar2);
    _swift_getKeyPath(&UNK_007ce6c8);
    _swift_getKeyPath(&UNK_007ce6f0);
    FUN_0002f2dc(lVar3,puVar4);
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (puVar4);
    FUN_0003daa8(lVar3,0xae6dd0,&UNK_007ce690);
    _swift_getKeyPath(&UNK_007ce720);
    _swift_getKeyPath(&UNK_007ce748);
    uStack_49 = 2;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_49);
  }
  return;
}



/* Entry: 0003ee38; end: 0003ef57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ee38(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = _DAT_00ae7640;
  lVar1 = 0xae7648;
  func_0x000115a8(0xae7648,&UNK_007ce710);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + lVar2,lVar1);
  lVar2 = _DAT_00ae7658;
  lVar1 = 0xae7660;
  func_0x000115a8(0xae7660,&UNK_007ce768);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + lVar2,lVar1);
  lVar2 = _DAT_00ae7670;
  lVar1 = 0xae7678;
  func_0x000115a8(0xae7678,&UNK_007ce7c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + lVar2,lVar1);
  lVar1 = _DAT_00ae7690;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_00ae7698 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00ae76a0));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00ae7680));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_00ae7688));
                    /* WARNING: Could not recover jumptable at 0x0077b2cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_0099b9a0)();
  return;
}



/* Entry: 0003ef58; end: 0003ef63;  */

undefined * FUN_0003ef58(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_009990f0;
}



/* Entry: 0003ef64; end: 0003ef8b;  */

void FUN_0003ef64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  __s7Combine16ObservableObjectPA2A0bC9PublisherC0c10WillChangeD0RtzrlE06objecteF0AEvg();
  *param_1 = uVar1;
  return;
}



/* Entry: 0003ef8c; end: 0003ef93;  */

void FUN_0003ef8c(void)

{
  if (lRam0000000000ae76e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&__s23ExtensionsStickerPicker0B14FetchViewModelCMn);
  return;
}



/* Entry: 0003ef94; end: 0003efcb;  */

void __s23ExtensionsStickerPicker0B14FetchViewModelCMa(undefined8 param_1)

{
  if (lRam0000000000ae76e8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&__s23ExtensionsStickerPicker0B14FetchViewModelCMn);
  return;
}



/* Entry: 0003efcc; end: 0003f17f;  */

void FUN_0003efcc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar2 = 0xae76f8;
  lVar1 = 0x13f;
  func_0x0003f0f0(0x13f,0xae76f8,0xae6dd0,&UNK_007ce690);
  if (uVar2 < 0x40) {
    lStack_68 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0xae7700;
    lVar1 = 0x13f;
    func_0x0003f0f0(0x13f,0xae7700,0xae7650,&UNK_007ce718);
    if (uVar2 < 0x40) {
      lStack_60 = *(long *)(lVar1 + -8) + 0x40;
      uVar2 = 0xae7708;
      lVar1 = 0x13f;
      func_0x0003f0f0(0x13f,0xae7708,0xae7668,&UNK_007ce770);
      if (uVar2 < 0x40) {
        lStack_58 = *(long *)(lVar1 + -8) + 0x40;
        lVar1 = 0x13f;
        __s10Foundation3URLVMa();
        if (uVar2 < 0x40) {
          lStack_50 = *(long *)(lVar1 + -8) + 0x40;
          puStack_48 = &UNK_007ce848;
          puStack_40 = &UNK_007ce860;
          puStack_38 = &UNK_007ce860;
          puStack_30 = &UNK_007ce860;
          puStack_28 = &UNK_007ce878;
          _swift_updateClassMetadata2(param_1,0x100,9,&lStack_68,param_1 + 0x50);
        }
      }
    }
  }
  return;
}



/* Entry: 0003f180; end: 0003f1b3;  */

void FUN_0003f180(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _objc_release(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003f1b4; end: 0003f217;  */

void FUN_0003f1b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long unaff_x20;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  pcVar8 = section_00000068.segname + 8;
  _swift_task_alloc();
  *(char **)(unaff_x22 + 0x10) = pcVar8;
  *(long *)pcVar8 = unaff_x22;
  *(qword *)(pcVar8 + 8) = 0x3f2ec;
  *(undefined8 *)(pcVar8 + 0x40) = uVar6;
  *(undefined8 *)(pcVar8 + 0x48) = uVar2;
  *(undefined8 *)(pcVar8 + 0x30) = uVar7;
  *(undefined8 *)(pcVar8 + 0x38) = uVar1;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  *(long *)(pcVar8 + 0x50) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(pcVar8 + 0x58) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar8 + 0x60) = uVar5;
  lVar4 = 0xae6dd0;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(pcVar8 + 0x68) = uVar5;
  uVar6 = 0;
  __sScMMa();
  puVar3 = PTR___sScMMa_0099be80;
  uVar7 = uVar6;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(pcVar8 + 0x70) = uVar7;
  uVar7 = 0xae77c8;
  func_0x0003f140(0xae77c8,puVar3,PTR___sScMScAsMc_0099be88);
  __sScA15unownedExecutorScevgTj(uVar6,uVar7);
                    /* WARNING: Could not recover jumptable at 0x0077b614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_0099c0e8)(FUN_0003e970,uVar6,uVar7);
  return;
}



/* Entry: 0003f218; end: 0003f23b;  */

void FUN_0003f218(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 0003f23c; end: 0003f2ab;  */

void FUN_0003f23c(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  segment_command *psVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  psVar5 = &segment_command_00000020;
  _swift_task_alloc();
  *(segment_command **)(unaff_x22 + 0x10) = psVar5;
  psVar5->cmd = (int)unaff_x22;
  psVar5->cmdsize = (int)((ulong)unaff_x22 >> 0x20);
  psVar5->segname[0] = -0x10;
  psVar5->segname[1] = -0xe;
  psVar5->segname[2] = '\x03';
  psVar5->segname[3] = '\0';
  psVar5->segname[4] = '\0';
  psVar5->segname[5] = '\0';
  psVar5->segname[6] = '\0';
  psVar5->segname[7] = '\0';
  iVar1 = *piVar2;
  puVar4 = (undefined8 *)(ulong)(uint)piVar2[1];
  _swift_task_alloc(puVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  *(undefined8 **)(psVar5->segname + 8) = puVar4;
  *puVar4 = psVar5;
  puVar4[1] = 0x3ebac;
                    /* WARNING: Could not recover jumptable at 0x0003eba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



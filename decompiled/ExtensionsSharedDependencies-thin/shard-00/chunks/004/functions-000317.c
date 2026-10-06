/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00637cf8; end: 00637d1b; -[SCNMdpCommonUIPageInfo copyWithZone:] */

undefined8 FUN_00637cf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 00637d1c; end: 00637d23; -[SCNMdpCommonUIPageInfo pageHierarchy] */

undefined8 FUN_00637d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 00637d24; end: 00637d2f; -[SCNMdpCommonUIPageInfo .cxx_destruct] */

void FUN_00637d24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00637d30; end: 00637e17; +[SCDevice currentDevice] */

void FUN_00637d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  uStack_38 = 0x637db8;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b636b0 != -1) {
    _dispatch_once(0xb636b0,&puStack_48);
  }
  uVar1 = uRam0000000000b636a8;
  _objc_retain(uRam0000000000b636a8);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 00637e18; end: 0063806b; -[SCDevice initWithUIDevice:] */

undefined1 * FUN_00637e18(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined **ppuStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  if (lRam0000000000b636b8 != -1) {
    _dispatch_once(0xb636b8,&PTR___NSConcreteGlobalBlock_00a0b7b8);
  }
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc();
  _strlen(0xb63ac0);
  func_0x00784e40();
  ppuVar2 = ppuVar1;
  func_0x007882e0();
  ppuVar7 = &PTR____CFConstantStringClassReference_00a27180;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar7 = ppuVar1;
  }
  _objc_retain(ppuVar7);
  _objc_release(ppuVar1);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f0 = 0x80;
  uStack_e8 = 0x4100000001;
  _sysctl(&uStack_e8,2,&uStack_e0,&uStack_f0,0,0);
  puVar3 = PTR__OBJC_CLASS___NSString_00ac2988;
  func_0x00792220();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000000b636b8 != -1) {
    _dispatch_once(0xb636b8,&PTR___NSConcreteGlobalBlock_00a0b7b8);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_00ac2988;
  _objc_alloc();
  _strlen(0xb639c0);
  func_0x00784e40();
  uVar14 = param_3;
  func_0x007894c0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_3;
  func_0x007926a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar14;
  ppuVar2 = ppuVar7;
  uVar9 = uVar13;
  uVar10 = uVar5;
  puVar11 = puVar3;
  puVar12 = puVar4;
  func_0x007852c0();
  _objc_release(uVar5);
  _objc_release(uVar13);
  _objc_release(uVar14);
  _objc_release(puVar4);
  _objc_release(puVar3);
  ppuVar1 = ppuVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  pppuVar6 = &ppuStack_150;
  pcStack_f8 = FUN_0063806c;
  uStack_140 = uVar5;
  uStack_138 = uVar13;
  uStack_130 = uVar14;
  puStack_128 = puVar4;
  puStack_120 = puVar3;
  ppuStack_118 = ppuVar7;
  uStack_110 = param_3;
  puStack_108 = param_1;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_retain(uVar8);
  _objc_retain(ppuVar2);
  _objc_retain(uVar9);
  _objc_retain(uVar10);
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puStack_148 = PTR_PTR_00ac4538;
  ppuStack_150 = ppuVar1;
  _objc_msgSendSuper2(&ppuStack_150,PTR_s_init_00abbf70);
  if (pppuVar6 != (undefined ***)0x0) {
    uVar14 = uVar8;
    func_0x00780e20();
    uVar13 = *(undefined8 *)((long)pppuVar6 + 8);
    *(undefined8 *)((long)pppuVar6 + 8) = uVar14;
    _objc_release(uVar13);
    ppuVar7 = ppuVar2;
    func_0x00780e20();
    uVar14 = *(undefined8 *)((long)pppuVar6 + 0x10);
    *(undefined ***)((long)pppuVar6 + 0x10) = ppuVar7;
    _objc_release(uVar14);
    uVar14 = uVar9;
    func_0x00780e20();
    uVar13 = *(undefined8 *)((long)pppuVar6 + 0x18);
    *(undefined8 *)((long)pppuVar6 + 0x18) = uVar14;
    _objc_release(uVar13);
    uVar14 = uVar10;
    func_0x00780e20();
    uVar13 = *(undefined8 *)((long)pppuVar6 + 0x20);
    *(undefined8 *)((long)pppuVar6 + 0x20) = uVar14;
    _objc_release(uVar13);
    puVar3 = puVar11;
    func_0x00780e20();
    uVar14 = *(undefined8 *)((long)pppuVar6 + 0x28);
    *(undefined **)((long)pppuVar6 + 0x28) = puVar3;
    _objc_release(uVar14);
    puVar3 = puVar12;
    func_0x00780e20();
    uVar14 = *(undefined8 *)((long)pppuVar6 + 0x30);
    *(undefined **)((long)pppuVar6 + 0x30) = puVar3;
    _objc_release(uVar14);
  }
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(ppuVar2);
  _objc_release(uVar8);
  return (undefined1 *)pppuVar6;
}



/* Entry: 0063806c; end: 006381d7; -[SCDevice initWithDeviceModel:hardwareModel:systemName:systemVersion:buildVersion:kernelVersion:] */

undefined1 *
FUN_0063806c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_00ac4538;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 006381d8; end: 006381df; -[SCDevice deviceModel] */

undefined8 FUN_006381d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 006381e0; end: 006381e7; -[SCDevice hardwareModel] */

undefined8 FUN_006381e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 006381e8; end: 006381ef; -[SCDevice systemName] */

undefined8 FUN_006381e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 006381f0; end: 006381f7; -[SCDevice systemVersion] */

undefined8 FUN_006381f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 006381f8; end: 006381ff; -[SCDevice buildVersion] */

undefined8 FUN_006381f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 00638200; end: 00638207; -[SCDevice kernelVersion] */

undefined8 FUN_00638200(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 00638208; end: 00638267; -[SCDevice .cxx_destruct] */

void FUN_00638208(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00638268; end: 00638273;  */

void FUN_00638268(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b7a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_0099a818)(0xb636c0);
  return;
}



/* Entry: 00638274; end: 0063831f; -[SCDevice chipType] */

long FUN_00638274(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00784240();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lRam0000000000b63bc8 != -1) {
    _dispatch_once(0xb63bc8,&PTR___NSConcreteGlobalBlock_00a0b7d8);
  }
  lVar1 = lRam0000000000b63bc0;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00787200(lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar2;
}



/* Entry: 00638320; end: 00638357; -[SCDevice chipName] */

undefined ** FUN_00638320(long param_1)

{
  undefined **ppuVar1;
  
  func_0x00780200();
  if (param_1 - 1U < 8) {
    ppuVar1 = (undefined **)(&PTR_PTR_00a0b7f8)[param_1 - 1U];
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_00a27180;
  }
  return ppuVar1;
}



/* Entry: 00638358; end: 0063836f;  */

void FUN_00638358(void)

{
  undefined8 uVar1;
  
  uVar1 = ppuRam0000000000b63bc0;
  ppuRam0000000000b63bc0 = &PTR__OBJC_CLASS___NSConstantDictionary_00a596d0;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00638370; end: 006383c3; +[SCDevice currentMetalDevice] */

void FUN_00638370(void)

{
  undefined8 uVar1;
  
  if (lRam0000000000b63bd8 != -1) {
    _dispatch_once(0xb63bd8,&PTR___NSConcreteGlobalBlock_00a0b838);
  }
  uVar1 = uRam0000000000b63bd0;
  _objc_retain(uRam0000000000b63bd0);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 006383c4; end: 006383e7;  */

void FUN_006383c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _MTLCreateSystemDefaultDevice();
  uVar1 = uRam0000000000b63bd0;
  uRam0000000000b63bd0 = param_1;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 006383e8; end: 00638433; -[SCDevice gpuModelName] */

void FUN_006383e8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_00ac3638;
  func_0x00781340(PTR_PTR_00ac3638);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00789760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 00638434; end: 006384c3; -[SCDevice deviceModelType] */

undefined1 FUN_00638434(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  
  func_0x00781f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar2 = param_1;
  func_0x007882e0();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x0078ae00(param_1,param_2,&PTR____CFConstantStringClassReference_00a48fa0);
    if (lVar2 == 0x7fffffffffffffff) {
      lVar2 = param_1;
      func_0x0078ae00(param_1,param_2,&PTR____CFConstantStringClassReference_00a48f80);
      uVar1 = lVar2 != 0x7fffffffffffffff;
    }
    else {
      uVar1 = 2;
    }
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 006384c4; end: 006384df; -[SCDevice isIpad] */

bool FUN_006384c4(long param_1)

{
  func_0x00781f80();
  return param_1 == 1;
}



/* Entry: 006384e0; end: 006384fb; -[SCDevice isIphone] */

bool FUN_006384e0(long param_1)

{
  func_0x00781f80();
  return param_1 == 2;
}



/* Entry: 006384fc; end: 0063855b; -[SCDevice isSimilarToIphone14orNewer] */

long FUN_006384fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 0063855c; end: 006386ab;  */

ulong FUN_0063855c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar7 = param_1;
  func_0x007878e0();
  if (((uVar7 & 1) == 0) && (uVar7 = param_2, func_0x007878e0(), (uVar7 & 1) == 0)) {
    lStack_60 = 0;
    uStack_58 = 0;
    uVar7 = param_1;
    FUN_00638b84(param_1,&uStack_58,&lStack_60);
    uVar4 = uStack_58;
    _objc_retain(uStack_58);
    lVar3 = lStack_60;
    _objc_retain(lStack_60);
    if ((int)uVar7 == 0) {
      uVar7 = 0;
    }
    else {
      uStack_70 = 0;
      uStack_68 = 0;
      uVar7 = param_2;
      FUN_00638b84(param_2,&uStack_68,&uStack_70);
      uVar2 = uStack_68;
      _objc_retain(uStack_68);
      uVar1 = uStack_70;
      _objc_retain(uStack_70);
      if ((int)uVar7 != 0) {
        uVar5 = uVar4;
        func_0x007878e0();
        if ((int)uVar5 == 0) {
          uVar7 = 0;
        }
        else {
          lVar6 = lVar3;
          func_0x007806c0(lVar3);
          uVar7 = (ulong)(lVar6 != -1);
        }
      }
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
    _objc_release(lVar3);
    _objc_release(uVar4);
  }
  else {
    uVar7 = 0;
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 006386ac; end: 0063870b; -[SCDevice isSimilarToIphone13orNewer] */

long FUN_006386ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 0063870c; end: 0063876b; -[SCDevice isSimilarToIphone12orNewer] */

long FUN_0063870c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 0063876c; end: 006387cb; -[SCDevice isSimilarToIphone11orNewer] */

long FUN_0063876c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 006387cc; end: 0063882b; -[SCDevice isSimilarToIphoneXSorNewer] */

long FUN_006387cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 0063882c; end: 006388fb; -[SCDevice isSimilarToIphoneXorNewer] */

ulong FUN_0063882c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1;
  func_0x00781f80();
  if (uVar3 == 2) {
    uVar1 = param_1;
    func_0x00784240();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    FUN_0063855c();
    if ((uVar3 & 1) == 0) {
      uVar2 = param_1;
      func_0x00784240();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x007878e0();
      if ((uVar3 & 1) == 0) {
        func_0x00784240(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x007878e0();
        _objc_release(param_1);
      }
      else {
        uVar3 = 1;
      }
      _objc_release(uVar2);
    }
    else {
      uVar3 = 1;
    }
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 006388fc; end: 00638973; -[SCDevice isSimilarToIphone6SorNewer] */

long FUN_006388fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if ((lVar1 == 1) || (lVar1 == 2)) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 00638974; end: 006389d3; -[SCDevice isSimilarToIphone7orNewer] */

long FUN_00638974(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 006389d4; end: 00638a33; -[SCDevice isSimilarToIphone8orNewer] */

long FUN_006389d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00781f80();
  if (lVar1 == 2) {
    func_0x00784240(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    FUN_0063855c();
    _objc_release(param_1);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 00638a34; end: 00638abb; +[SCDevice deviceScore] */

undefined8 FUN_00638a34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_00ac3638;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00787de0();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR_PTR_00ac3638;
    func_0x007812c0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00787dc0();
    _objc_release(puVar1);
    uVar3 = 0x50;
    if ((int)puVar2 == 0) {
      uVar3 = 0x3c;
    }
  }
  else {
    uVar3 = 100;
  }
  return uVar3;
}



/* Entry: 00638abc; end: 00638b83; -[SCDevice iPhoneDeviceCluster] */

undefined8 FUN_00638abc(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00781f80();
  if (uVar1 == 2) {
    uVar1 = param_1;
    func_0x00787da0();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x00787d80();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x00787d60();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          func_0x00787d40();
          if ((uVar1 & 1) == 0) {
            uVar1 = param_1;
            func_0x00787e20();
            if ((uVar1 & 1) == 0) {
              uVar1 = param_1;
              func_0x00787e40();
              if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00787e00(), (uVar1 & 1) == 0)) {
                func_0x00787de0();
                uVar2 = 4;
                if ((int)param_1 != 0) {
                  uVar2 = 5;
                }
              }
              else {
                uVar2 = 6;
              }
            }
            else {
              uVar2 = 7;
            }
          }
          else {
            uVar2 = 8;
          }
        }
        else {
          uVar2 = 9;
        }
      }
      else {
        uVar2 = 10;
      }
    }
    else {
      uVar2 = 0xb;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 00638b84; end: 00638c4b;  */

undefined * FUN_00638b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSScanner_00ac32e8;
  func_0x0078c2e0(PTR__OBJC_CLASS___NSScanner_00ac32e8,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
  func_0x007819e0(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0078c2c0();
  _objc_release(puVar3);
  if ((int)puVar2 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_00ac30b0;
    func_0x00788380(PTR__OBJC_CLASS___NSCharacterSet_00ac30b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x0078c2c0(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 00638c4c; end: 00638cdf; -[SCDevice systemNameType] */

undefined8 FUN_00638c4c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  func_0x007926a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  uVar1 = param_1;
  func_0x007878e0(param_1,param_2,&PTR____CFConstantStringClassReference_00a49080);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x007878e0(param_1,param_2,&PTR____CFConstantStringClassReference_00a490a0);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x007878e0(param_1,param_2,&PTR____CFConstantStringClassReference_00a490c0);
      uVar2 = 3;
      if ((int)uVar1 == 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 00638ce0; end: 00638d5f; -[SCNInspectorLogsInspectorLogWriter initWithCpp:] */

undefined1 * FUN_00638ce0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar4 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4540;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    if (param_3[1] != 0) {
      plVar1 = (long *)(param_3[1] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_28 = *(undefined8 *)((long)puVar4 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar4 + 0x18);
    *(undefined8 *)((long)puVar4 + 0x20) = uVar6;
    *(undefined8 *)((long)puVar4 + 0x18) = uVar5;
    func_0x00638f34(&uStack_30);
  }
  return (undefined1 *)puVar4;
}



/* Entry: 00638d60; end: 00638d67; +[SCNInspectorLogsInspectorLogWriter available] */

undefined8 FUN_00638d60(void)

{
  return 0;
}



/* Entry: 00638d68; end: 00638e8b; +[SCNInspectorLogsInspectorLogWriter log:category:subCategory:message:] */

void FUN_00638d68(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _objc_retain(in_x3);
  _objc_retain(in_x4);
  _objc_retain(in_x5);
  FUN_0047c764(auStack_58,in_x3);
  FUN_0047c764(auStack_70,in_x4);
  FUN_0047c764(auStack_88,in_x5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  _objc_release(in_x5);
  _objc_release(in_x4);
  _objc_release(in_x3);
  return;
}



/* Entry: 00638e8c; end: 00638ee7; -[SCNInspectorLogsInspectorLogWriter .cxx_destruct] */

void FUN_00638e8c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0b868;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x00638f34((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 00638ee8; end: 00638f5f; -[SCNInspectorLogsInspectorLogWriter .cxx_construct] */

undefined8 * FUN_00638ee8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_00718574();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 00638f60; end: 00638ff7;  */

void FUN_00638f60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_00ac3640;
  _objc_alloc(PTR_PTR_00ac3640);
  lVar2 = param_1;
  FUN_0047c844(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x18;
  FUN_004cde2c(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00784d20(puVar1,param_2,lVar2,param_1);
  FUN_00638ff8();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 00638ff8; end: 00639003;  */

void FUN_00638ff8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 00639004; end: 0063907b; -[SCNShimsDataProviderCppProxy initWithCpp:] */

undefined1 * FUN_00639004(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4548;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063938c();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x006392f0(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063907c; end: 006390d3; -[SCNShimsDataProviderCppProxy isPlatformSafe] */

void FUN_0063907c(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 006390d4; end: 0063914b; -[SCNShimsDataProviderCppProxy data] */

void FUN_006390d4(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
  func_0x00781620(PTR__OBJC_CLASS___NSData_00ac2b10);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063914c; end: 00639257; -[SCNShimsDataProviderCppProxy subspan:len:] */

void FUN_0063914c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int extraout_w10;
  long lVar2;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined **ppuStack_28;
  
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))
            (&lStack_48,*(long **)(param_1 + 0x18),param_3,param_4);
  lVar2 = lStack_48;
  if (lStack_48 != 0) {
    lVar1 = lStack_48;
    ___dynamic_cast(lStack_48,&PTR_DAT_00a0b878,&PTR_DAT_00a0b888,0);
    if (lVar1 == 0) {
      ppuStack_28 = &PTR_DAT_00a0b8d0;
      lStack_38 = lStack_48;
      lStack_30 = lStack_40;
      if (lStack_40 != 0) {
        do {
          FUN_0063938c();
        } while (extraout_w10 != 0);
      }
      FUN_00718534(&ppuStack_28,&lStack_38,FUN_0063931c);
      _objc_retainAutoreleasedReturnValue();
      func_0x006393b0();
    }
    else {
      lVar2 = *(long *)(lVar1 + 0x18);
      _objc_retain(lVar2);
    }
  }
  func_0x006392f0(&lStack_48);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00639258; end: 006392ab; -[SCNShimsDataProviderCppProxy .cxx_destruct] */

void FUN_00639258(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0b8d0;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x006392f0((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 006392ac; end: 0063931b; -[SCNShimsDataProviderCppProxy .cxx_construct] */

undefined8 * FUN_006392ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_0063938c();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063931c; end: 0063938b;  */

void FUN_0063931c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac3648;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063938c();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  func_0x006392f0(&uStack_30);
  return;
}



/* Entry: 0063938c; end: 006393c3;  */

void FUN_0063938c(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 006393c4; end: 0063943b; -[SCNShimsDispatchQueueCppProxy initWithCpp:] */

undefined1 * FUN_006393c4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4550;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_00639a80();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0045e4e4(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063943c; end: 006394d3; -[SCNShimsDispatchQueueCppProxy submit:] */

void FUN_0063943c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00639ac8();
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
  FUN_0045d30c(auStack_40);
  func_0x00639a90();
  return;
}



/* Entry: 006394d4; end: 00639573; -[SCNShimsDispatchQueueCppProxy submitWithDelay:delayMs:] */

void FUN_006394d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  func_0x00639ac8();
  (**(code **)(*plVar1 + 0x18))(plVar1,auStack_40,param_4);
  FUN_0045d30c(auStack_40);
  func_0x00639a90();
  return;
}



/* Entry: 00639574; end: 006395cf; -[SCNShimsDispatchQueueCppProxy isCurrentQueueOrTrueOnAndroid] */

void FUN_00639574(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}



/* Entry: 006395d0; end: 006396bf;  */

void FUN_006395d0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac3650;
    _objc_opt_class(PTR_PTR_00ac3650);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a0b928;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_0063975c);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_00639a58(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_00639a80();
        } while (extraout_w10 != 0);
      }
    }
  }
  func_0x00639a90();
  return;
}



/* Entry: 006396c0; end: 0063971b; -[SCNShimsDispatchQueueCppProxy .cxx_destruct] */

void FUN_006396c0(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0ba18;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0045e4e4((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063971c; end: 0063975b; -[SCNShimsDispatchQueueCppProxy .cxx_construct] */

undefined8 * FUN_0063971c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_00639a80();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063975c; end: 0063984f;  */

void FUN_0063975c(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a0b968;
  pqVar1[3] = (qword)&PTR_DAT_00a0b9f0;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_00639a80();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a0b9b8;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_00639a58(&uStack_50);
  return;
}



/* Entry: 00639850; end: 00639853;  */

void FUN_00639850(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0b968;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00639854; end: 00639867;  */

void FUN_00639854(void)

{
  FUN_00639a48();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00639868; end: 00639873;  */

long FUN_00639868(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a0b928;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 00639874; end: 006398af;  */

void FUN_00639874(void)

{
  func_0x00639ae4();
  return;
}



/* Entry: 006398b0; end: 0063990f;  */

void FUN_006398b0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_00639ccc(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00792360(uVar2);
  func_0x00639aa8();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 00639910; end: 00639977;  */

void FUN_00639910(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  FUN_00639ccc(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x007923a0(uVar2);
  func_0x00639aa8();
                    /* WARNING: Could not recover jumptable at 0x0077a93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_0099acd0)(lVar1);
  return;
}



/* Entry: 00639978; end: 006399b3;  */

undefined8 FUN_00639978(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x007875e0(uVar2);
  _objc_autoreleasePoolPop(lVar1);
  return uVar2;
}



/* Entry: 006399b4; end: 00639a47;  */

long FUN_006399b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a0b928;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 00639a48; end: 00639a57;  */

void FUN_00639a48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0b968;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00639a58; end: 00639a7f;  */

long FUN_00639a58(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00639a80; end: 00639afb;  */

void FUN_00639a80(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 00639afc; end: 00639b73; -[SCNShimsDispatchTaskCppProxy initWithCpp:] */

undefined1 * FUN_00639afc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4558;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063a104();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    FUN_0045d30c(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00639b74; end: 00639bcf; -[SCNShimsDispatchTaskCppProxy run] */

void FUN_00639b74(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 00639bd0; end: 00639ccb;  */

void FUN_00639bd0(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac3658;
    _objc_opt_class(PTR_PTR_00ac3658);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a0ba70;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_00639dd0);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_00639ff8(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_0063a104();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 00639ccc; end: 00639d3b;  */

void FUN_00639ccc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    param_1 = (long *)0x0;
  }
  else {
    ___dynamic_cast(lVar1,&PTR_DAT_009e57c8,&PTR_DAT_00a0ba28,0);
    if (lVar1 == 0) {
      FUN_0063a020(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      param_1 = *(long **)(lVar1 + 0x18);
      _objc_retain(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 00639d3c; end: 00639d8f; -[SCNShimsDispatchTaskCppProxy .cxx_destruct] */

void FUN_00639d3c(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bb40;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  FUN_0045d30c((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 00639d90; end: 00639dcf; -[SCNShimsDispatchTaskCppProxy .cxx_construct] */

undefined8 * FUN_00639d90(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_0063a104();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 00639dd0; end: 00639ec3;  */

void FUN_00639dd0(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a0bab0;
  pqVar1[3] = (qword)&PTR_DAT_00a0bb28;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_0063a104();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a0bb00;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_00639ff8(&uStack_50);
  return;
}



/* Entry: 00639ec4; end: 00639ec7;  */

void FUN_00639ec4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bab0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00639ec8; end: 00639edb;  */

void FUN_00639ec8(void)

{
  FUN_00639fe8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00639edc; end: 00639ee7;  */

long FUN_00639edc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuStack_38;
  
  lVar1 = param_1 + 0x20;
  lVar2 = lVar1;
  _objc_autoreleasePoolPush();
  lVar4 = *(long *)(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a0ba70;
    _objc_retain(lVar4);
    FUN_0071828c(lVar1,&ppuStack_38,lVar4);
    _objc_release(lVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  _objc_release(uVar3);
  FUN_0047def8(lVar1);
  _objc_autoreleasePoolPop(lVar2);
  return lVar1;
}



/* Entry: 00639ee8; end: 00639f53;  */

void FUN_00639ee8(void)

{
  func_0x0063a130();
  return;
}



/* Entry: 00639f54; end: 00639fe7;  */

long FUN_00639f54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuStack_38;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    ppuStack_38 = &PTR_DAT_00a0ba70;
    _objc_retain(lVar3);
    FUN_0071828c(param_1,&ppuStack_38,lVar3);
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
  }
  _objc_release(uVar2);
  FUN_0047def8(param_1);
  _objc_autoreleasePoolPop(lVar1);
  return param_1;
}



/* Entry: 00639fe8; end: 00639ff7;  */

void FUN_00639fe8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bab0;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00639ff8; end: 0063a01f;  */

long FUN_00639ff8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 0063a020; end: 0063a093;  */

void FUN_0063a020(undefined8 *param_1)

{
  int extraout_w10;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined **ppuStack_28;
  
  ppuStack_28 = &PTR_DAT_00a0bb40;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    do {
      FUN_0063a104();
    } while (extraout_w10 != 0);
  }
  FUN_00718534(&ppuStack_28,&uStack_40,FUN_0063a094);
  _objc_retainAutoreleasedReturnValue();
  func_0x0063a13c();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0063a094; end: 0063a103;  */

void FUN_0063a094(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  int extraout_w10;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_PTR_00ac3658;
  _objc_alloc();
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    do {
      FUN_0063a104();
    } while (extraout_w10 != 0);
  }
  func_0x00785140();
  uVar2 = *param_2;
  *param_1 = puVar1;
  param_1[1] = uVar2;
  FUN_0045d30c(&uStack_30);
  return;
}



/* Entry: 0063a104; end: 0063a147;  */

void FUN_0063a104(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 0063a148; end: 0063a197; -[SCNShimsDjinniAsyncTaskQueueCppProxy initWithCpp:] */

undefined1 * FUN_0063a148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4560;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0063a330((undefined1 *)((long)puVar1 + 0x18),param_3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063a198; end: 0063a263; -[SCNShimsDjinniAsyncTaskQueueCppProxy submit:delayMs:] */

void FUN_0063a198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined1 auStack_40 [16];
  
  _objc_retain(param_3);
  plVar1 = *(long **)(param_1 + 0x18);
  FUN_0063a494(auStack_40,param_3);
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40,param_4);
  func_0x0063a384(auStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 0063a264; end: 0063a2bf; -[SCNShimsDjinniAsyncTaskQueueCppProxy .cxx_destruct] */

void FUN_0063a264(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bb50;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x0063a308((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063a2c0; end: 0063a3ab; -[SCNShimsDjinniAsyncTaskQueueCppProxy .cxx_construct] */

undefined8 * FUN_0063a2c0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = param_1;
  FUN_00718574();
  lVar5 = puVar4[1];
  uVar6 = *puVar4;
  param_1[2] = puVar4[1];
  param_1[1] = uVar6;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063a3ac; end: 0063a3bf;  */

void FUN_0063a3ac(void)

{
  return;
}



/* Entry: 0063a3c0; end: 0063a437; -[SCNShimsDjinniTaskCppProxy initWithCpp:] */

undefined1 * FUN_0063a3c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4568;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar3 = param_3[1];
    uVar2 = *param_3;
    if (param_3[1] != 0) {
      do {
        FUN_0063a874();
      } while (extraout_w10 != 0);
    }
    uStack_28 = *(undefined8 *)((long)puVar1 + 0x20);
    uStack_30 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x0063a384(&uStack_30);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 0063a438; end: 0063a493; -[SCNShimsDjinniTaskCppProxy run] */

void FUN_0063a438(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 0063a494; end: 0063a58f;  */

void FUN_0063a494(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  int extraout_w10;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar2 = PTR_PTR_00ac3660;
    _objc_opt_class(PTR_PTR_00ac3660);
    uVar3 = param_2;
    _objc_opt_isKindOfClass(param_2,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_2);
      ppuStack_38 = &PTR_DAT_00a0bbb8;
      uStack_40 = param_2;
      FUN_007181c8(&uStack_30,&ppuStack_38,&uStack_40,FUN_0063a624);
      uVar1 = uStack_28;
      uVar5 = uStack_30;
      uStack_30 = 0;
      uStack_28 = 0;
      FUN_0047df30(&uStack_30);
      _objc_release(uStack_40);
      param_1[1] = uVar1;
      *param_1 = uVar5;
      uStack_50 = 0;
      uStack_48 = 0;
      FUN_0063a84c(&uStack_50);
    }
    else {
      lVar4 = *(long *)(param_2 + 0x20);
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      param_1[1] = *(undefined8 *)(param_2 + 0x20);
      *param_1 = uVar5;
      if (lVar4 != 0) {
        do {
          FUN_0063a874();
        } while (extraout_w10 != 0);
      }
    }
  }
  _objc_release(param_2);
  return;
}



/* Entry: 0063a590; end: 0063a5e3; -[SCNShimsDjinniTaskCppProxy .cxx_destruct] */

void FUN_0063a590(long param_1)

{
  undefined **ppuStack_28;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    ppuStack_28 = &PTR_DAT_00a0bc88;
    FUN_007185f0(param_1 + 8,&ppuStack_28);
  }
  func_0x0063a384((long *)(param_1 + 0x18));
  FUN_0047f134(param_1 + 8);
  return;
}



/* Entry: 0063a5e4; end: 0063a623; -[SCNShimsDjinniTaskCppProxy .cxx_construct] */

undefined8 * FUN_0063a5e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_00718574();
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[1];
  param_1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      FUN_0063a874();
    } while (extraout_w10 != 0);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



/* Entry: 0063a624; end: 0063a717;  */

void FUN_0063a624(undefined8 *param_1,long *param_2)

{
  qword *pqVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  int extraout_w10;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar5 = (undefined8 *)*param_2;
  pqVar1 = &segment_command_00000020.vmaddr;
  __Znwm();
  pqVar1[1] = 0;
  pqVar1[2] = 0;
  *pqVar1 = (qword)&PTR_FUN_00a0bbf8;
  pqVar1[3] = (qword)&PTR_DAT_00a0bc70;
  puVar2 = puVar5;
  _objc_retain();
  _objc_autoreleasePoolPush();
  puVar3 = puVar2;
  FUN_00718210();
  lVar4 = puVar3[1];
  uVar6 = *puVar3;
  pqVar1[5] = puVar3[1];
  pqVar1[4] = uVar6;
  if (lVar4 != 0) {
    do {
      FUN_0063a874();
    } while (extraout_w10 != 0);
  }
  _objc_retain(puVar5);
  pqVar1[6] = (qword)puVar5;
  _objc_autoreleasePoolPop(puVar2);
  _objc_release(puVar5);
  pqVar1[3] = (qword)&PTR_FUN_00a0bc48;
  *param_1 = pqVar1 + 3;
  param_1[1] = pqVar1;
  uStack_50 = 0;
  uStack_48 = 0;
  param_1[2] = *param_2;
  FUN_0063a84c(&uStack_50);
  return;
}



/* Entry: 0063a718; end: 0063a71b;  */

void FUN_0063a718(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0bbf8;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



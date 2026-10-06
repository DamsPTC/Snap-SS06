/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100011910; end: 100011f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011910(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar5 = &puStack_c0;
  ppuVar7 = &puStack_c0;
  ppuVar11 = &puStack_c0;
  puVar3 = &UNK_1000a0cb0;
  _swift_allocObject(&UNK_1000a0cb0,0x18,7);
  *(long *)(puVar3 + 0x10) = param_3;
  lVar14 = *(long *)(param_2 + _DAT_1000dd0c8);
  __Block_copy(param_3);
  __Block_copy(param_3);
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar14;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar14);
  if (lVar4 != 0) {
    lVar14 = lVar4;
    func_0x00010006e360();
    _swift_unknownObjectRelease(lVar4);
    if ((int)lVar14 != 0) {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000041,0x8000000100092aa0);
      _objc_release();
      (**(code **)(param_3 + 0x10))(param_3);
      _swift_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006b830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___Block_release_1000a00e8)(param_3);
      return;
    }
  }
  puStack_c0 = (undefined *)0x0;
  uStack_b8 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x43);
  uVar13 = 0x80000001000929d0;
  __sSS6appendyySSF(0xd000000000000041,0x80000001000929d0);
  lVar4 = param_1;
  func_0x00010006fda0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(lVar4);
  __sSS6appendyySSF(lVar14,uVar13);
  _swift_bridgeObjectRelease(uVar13);
  uVar13 = uStack_b8;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_c0,uStack_b8);
  _objc_release();
  _swift_bridgeObjectRelease(uVar13);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR___sypN_1000a08a0;
  lVar14 = lVar4;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (lVar4,PTR___ss11AnyHashableVN_1000a0728,PTR___sypN_1000a08a0 + 8,
             PTR___ss11AnyHashableVSHsWP_1000a0730);
  _objc_release(lVar4);
  uStack_80 = 0x745f646f6d726568;
  uStack_78 = 0xee0064695f6b7361;
  puVar9 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&puStack_c0,&uStack_80,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100011b94:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    func_0x000100010aa4(&puStack_c0);
    if (((ulong)puVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_100011b94;
    }
    func_0x000100012008(*(long *)(lVar14 + 0x38) + (long)ppuVar5 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(lVar14);
  }
  func_0x000100010e28(&puStack_c0);
  if (lStack_68 == 0) {
    func_0x000100010e5c(&uStack_80);
    lVar15 = 0;
    lVar4 = 0;
  }
  else {
    plVar6 = &lStack_90;
    _swift_dynamicCast(plVar6,&uStack_80,puVar8 + 8,PTR___sSSN_1000a0680,6);
    lVar15 = lStack_88;
    lVar4 = lStack_90;
    if ((int)plVar6 == 0) {
      lVar4 = 0;
      lVar15 = 0;
    }
  }
  lStack_90 = 0x755f646f6d726568;
  lStack_88 = -0x109a8c9e9ca09a8d;
  puVar9 = PTR___sSSN_1000a0680;
  __ss11AnyHashableVyABxcSHRzlufC
            (&puStack_c0,&lStack_90,PTR___sSSN_1000a0680,PTR___sSSSHsWP_1000a0690);
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_100011c6c:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    func_0x000100010aa4(&puStack_c0);
    if (((ulong)puVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_100011c6c;
    }
    func_0x000100012008(*(long *)(lVar14 + 0x38) + (long)ppuVar7 * 0x20,&uStack_80);
    _swift_bridgeObjectRelease(lVar14);
  }
  func_0x000100010e28(&puStack_c0);
  if (lStack_68 == 0) {
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(lVar15);
    func_0x000100010e5c(&uStack_80);
LAB_100011e34:
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000039,0x8000000100092a20);
    _objc_release();
LAB_100011e50:
    (**(code **)(param_3 + 0x10))(param_3);
  }
  else {
    plVar6 = &lStack_90;
    _swift_dynamicCast(plVar6,&uStack_80,puVar8 + 8,PTR___sSSN_1000a0680,6);
    lVar2 = lStack_88;
    lVar1 = lStack_90;
    if (((ulong)plVar6 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar15);
      goto LAB_100011e34;
    }
    uVar12 = 0;
    if (((lStack_90 != 0x435f454349564544) || (lStack_88 != -0x13ffffffb4bcbab8)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x435f454349564544,0xec0000004b434548,lStack_90,lStack_88,0), (uVar12 & 1) == 0))
    {
      uVar12 = 0x5441545345545441;
      if (((lVar1 == 0x5441545345545441) && (lVar2 == -0x14ffffffffb1b0b7)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0x5441545345545441,0xeb000000004e4f49,lVar1,lVar2,0), (uVar12 & 1) != 0)) {
        _swift_bridgeObjectRelease(lVar2);
        __Block_copy(param_3);
        _swift_retain(puVar3);
        func_0x0001000114c0(lVar4,lVar15,lVar14,param_2,param_3);
        __Block_release(param_3);
        _swift_bridgeObjectRelease(lVar14);
        _swift_release_n(puVar3,2);
        _swift_bridgeObjectRelease(lVar15);
        goto LAB_100011e64;
      }
      _swift_bridgeObjectRelease(lVar14);
      _swift_bridgeObjectRelease(lVar15);
      puStack_c0 = (undefined *)0x0;
      uStack_b8 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x27);
      _swift_bridgeObjectRelease(uStack_b8);
      puStack_c0 = (undefined *)0xd000000000000025;
      uStack_b8 = 0x8000000100092a60;
      __sSS6appendyySSF(lVar1,lVar2);
      _swift_bridgeObjectRelease(lVar2);
      uVar13 = uStack_b8;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puStack_c0,uStack_b8);
      _objc_release();
      _swift_bridgeObjectRelease(uVar13);
      goto LAB_100011e50;
    }
    _swift_bridgeObjectRelease(lVar14);
    _swift_bridgeObjectRelease(lVar2);
    puVar8 = &UNK_1000a0cd8;
    _swift_allocObject(&UNK_1000a0cd8,0x20,7);
    *(undefined **)(puVar8 + 0x10) = &UNK_100012064;
    *(undefined **)(puVar8 + 0x18) = puVar3;
    uVar13 = *(undefined8 *)(param_2 + _DAT_1000dd0d0);
    puVar9 = &UNK_1000a0c88;
    _swift_allocObject(&UNK_1000a0c88,0x18,7);
    _swift_unknownObjectWeakInit(puVar9 + 0x10,param_2);
    puVar10 = &UNK_1000a0d00;
    _swift_allocObject(&UNK_1000a0d00,0x38,7);
    *(undefined **)(puVar10 + 0x10) = puVar9;
    *(undefined **)(puVar10 + 0x18) = &UNK_100012748;
    *(undefined **)(puVar10 + 0x20) = puVar8;
    *(long *)(puVar10 + 0x28) = lVar4;
    *(long *)(puVar10 + 0x30) = lVar15;
    puStack_a0 = &UNK_100012744;
    puStack_c0 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_b8 = 0x42000000;
    puStack_b0 = &UNK_100010818;
    puStack_a8 = &UNK_1000a0d18;
    puStack_98 = puVar10;
    __Block_copy(&puStack_c0);
    puVar9 = puStack_98;
    _swift_bridgeObjectRetain(lVar15);
    _swift_retain(puVar3);
    _swift_retain(puVar8);
    _swift_release(puVar9);
    func_0x00010006f3c0(uVar13);
    __Block_release(ppuVar11);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(lVar15);
    puVar3 = puVar8;
  }
  _swift_release(puVar3);
LAB_100011e64:
  __Block_release(param_3);
  return;
}



/* Entry: 100021c4c; end: 100021d17;  */

undefined1 * FUN_100021c4c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined *puVar5;
  undefined1 *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [12];
  undefined4 uStack_2b4;
  long lStack_2b0;
  int iStack_2a8;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_2c8 = 4;
  uVar2 = 0x938b5;
  _sysctlnametomib("kern.proc.pid",auStack_2c0,&uStack_2c8);
  _getpid();
  uStack_2c8 = 0x288;
  puVar3 = auStack_2c0;
  uStack_2b4 = uVar2;
  _sysctl(puVar3,4,&lStack_2b0,&uStack_2c8,0,0);
  dRam00000001000e9fb8 = 0.0;
  if ((int)puVar3 == 0) {
    dRam00000001000e9fb8 = (double)iStack_2a8 / 1000000.0 + (double)lStack_2b0;
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_300;
  puStack_2f8 = PTR_PTR_1000d23c0;
  puStack_300 = puVar3;
  _objc_msgSendSuper2(&puStack_300,PTR_s_init_1000d07d0);
  if (ppuVar4 != (undefined1 **)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSDateFormatter_1000d1c00;
    _objc_alloc_init();
    puVar1 = puRam00000001000e9428;
    puRam00000001000e9428 = puVar5;
    _objc_release(puVar1);
    func_0x000100072da0(puRam00000001000e9428);
  }
  return (undefined1 *)ppuVar4;
}



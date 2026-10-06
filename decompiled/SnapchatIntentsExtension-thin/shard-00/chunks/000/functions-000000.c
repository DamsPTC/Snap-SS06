/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10000c000; end: 10000c00f;  */

void FUN_10000c000(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000283f8)();
  return;
}



/* Entry: 10000c010; end: 10000c02f;  */

void FUN_10000c010(void)

{
  _objc_opt_self(&PTR_PTR_1000305c8);
  return;
}



/* Entry: 10000c030; end: 10000c0f7;  */

void FUN_10000c030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_10002f308;
  _objc_allocWithZone();
  func_0x00010001f4e0();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_10002f310;
    _objc_allocWithZone();
    func_0x00010001f400();
    puVar3 = puVar2;
    func_0x00010001fce0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
    else {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return;
}



/* Entry: 10000c0f8; end: 10000c1b7;  */

/* WARNING: Removing unreachable block (ram,0x00010000c310) */

long FUN_10000c0f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100028200;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
  func_0x00010001f3a0();
  _objc_release(param_1);
  uVar1 = 0;
  if (unaff_x20 == 0) {
    _objc_retain();
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _objc_release(uVar1);
    _swift_willThrow();
  }
  else {
    _objc_retain();
  }
  if (*(long *)PTR____stack_chk_guard_100028200 == lVar7) {
    return unaff_x20;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_10002f308;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_1000293d8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  func_0x00010001f3c0();
  _objc_release(uVar1);
  _objc_release(&PTR____CFConstantStringClassReference_1000293d8);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_10002f310;
    _objc_allocWithZone();
    func_0x00010001f400();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010001f8a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0);
        _swift_unknownObjectRelease(puVar2);
      }
      puVar2 = PTR___sypN_100028398;
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        _objc_release(puVar3);
      }
      else {
        plVar4 = &lStack_d0;
        _swift_dynamicCast(plVar4,&uStack_a0,PTR___sypN_100028398 + 8,
                           PTR___s10Foundation4DataVN_1000284f0,6);
        lVar7 = lStack_d0;
        if (((ulong)plVar4 & 1) == 0) {
          _objc_release(puVar3);
          return 0;
        }
        _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_10002f390);
        func_0x00010000c4c8(lVar7,uStack_c8);
        lVar5 = lVar7;
        FUN_10000c0f8(lVar7,uStack_c8);
        func_0x00010000c508(lVar7,uStack_c8);
        if (lVar5 == 0) {
          _objc_release(puVar3);
          func_0x00010000c508(lVar7,uStack_c8);
          return 0;
        }
        func_0x00010001fc20(lVar5);
        lVar6 = lVar5;
        func_0x00010001efe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010000c508(lVar7,uStack_c8);
          _objc_release(puVar3);
          _objc_release(lVar5);
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0);
          func_0x00010000c508(lVar7,uStack_c8);
          _swift_unknownObjectRelease(lVar6);
          _objc_release(puVar3);
          _objc_release(lVar5);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 != 0) {
          uVar1 = 0;
          FUN_10000c548(0);
          plVar4 = &lStack_d0;
          _swift_dynamicCast(plVar4,&uStack_a0,puVar2 + 8,uVar1,6);
          if ((int)plVar4 == 0) {
            return 0;
          }
          return lStack_d0;
        }
      }
      func_0x00010000c430(&uStack_a0);
    }
  }
  return 0;
}



/* Entry: 10000c1b8; end: 10000c42f;  */

/* WARNING: Removing unreachable block (ram,0x00010000c310) */

long FUN_10000c1b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR_PTR_10002f308;
  _objc_allocWithZone();
  _objc_retain(&PTR____CFConstantStringClassReference_1000293d8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  func_0x00010001f3c0();
  _objc_release(param_1);
  _objc_release(&PTR____CFConstantStringClassReference_1000293d8);
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR_PTR_10002f310;
    _objc_allocWithZone();
    func_0x00010001f400();
    _objc_release(puVar2);
    if (puVar3 != (undefined *)0x0) {
      puVar2 = puVar3;
      func_0x00010001f8a0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar2 == (undefined *)0x0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80);
        _swift_unknownObjectRelease(puVar2);
      }
      puVar2 = PTR___sypN_100028398;
      uStack_58 = uStack_78;
      uStack_60 = uStack_80;
      lStack_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        _objc_release(puVar3);
      }
      else {
        plVar4 = &lStack_90;
        _swift_dynamicCast(plVar4,&uStack_60,PTR___sypN_100028398 + 8,
                           PTR___s10Foundation4DataVN_1000284f0,6);
        lVar1 = lStack_90;
        if (((ulong)plVar4 & 1) == 0) {
          _objc_release(puVar3);
          return 0;
        }
        _objc_allocWithZone(PTR__OBJC_CLASS___NSKeyedUnarchiver_10002f390);
        func_0x00010000c4c8(lVar1,uStack_88);
        lVar5 = lVar1;
        FUN_10000c0f8(lVar1,uStack_88);
        func_0x00010000c508(lVar1,uStack_88);
        if (lVar5 == 0) {
          _objc_release(puVar3);
          func_0x00010000c508(lVar1,uStack_88);
          return 0;
        }
        func_0x00010001fc20(lVar5);
        lVar6 = lVar5;
        func_0x00010001efe0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          func_0x00010000c508(lVar1,uStack_88);
          _objc_release(puVar3);
          _objc_release(lVar5);
          uStack_78 = 0;
          uStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80);
          func_0x00010000c508(lVar1,uStack_88);
          _swift_unknownObjectRelease(lVar6);
          _objc_release(puVar3);
          _objc_release(lVar5);
        }
        uStack_58 = uStack_78;
        uStack_60 = uStack_80;
        lStack_48 = lStack_68;
        uStack_50 = uStack_70;
        if (lStack_68 != 0) {
          uVar7 = 0;
          FUN_10000c548(0);
          plVar4 = &lStack_90;
          _swift_dynamicCast(plVar4,&uStack_60,puVar2 + 8,uVar7,6);
          if ((int)plVar4 == 0) {
            return 0;
          }
          return lStack_90;
        }
      }
      func_0x00010000c430(&uStack_60);
    }
  }
  return 0;
}



/* Entry: 10000c430; end: 10000c547;  */

undefined8 FUN_10000c430(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x100030620;
  func_0x00010000c478(0x100030620,&UNK_100021960);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10000c548; end: 10000c58b;  */

void FUN_10000c548(void)

{
  undefined *puVar1;
  
  if (puRam0000000100030628 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_10002f2a0;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam0000000100030628 = puVar1;
  return;
}



/* Entry: 10000c58c; end: 10000c817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000c58c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  undefined8 unaff_x20;
  undefined8 *puVar9;
  long alStack_c0 [4];
  undefined8 auStack_a0 [3];
  long lStack_88;
  undefined **ppuStack_80;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar1 = 0;
  func_0x000100014cf4(0);
  lVar2 = param_2;
  _swift_dynamicCastClass(param_2,uVar1);
  if (lVar2 == 0) {
    func_0x0001000141c8();
    _swift_dynamicCastClass(param_2,lVar2);
    if (param_2 == 0) {
      func_0x00010000c90c();
      param_1[3] = param_2;
      *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010001e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_100028168)();
      return;
    }
    lVar6 = 0;
    func_0x00010000d8c8();
    uVar1 = 0x30;
    lVar2 = lVar6;
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x18) = 1;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    lVar3 = lVar2;
    FUN_10000c030();
    *(long *)(lVar2 + 0x20) = lVar3;
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    ppuStack_58 = &PTR_DAT_1000285c0;
    lVar3 = 0;
    alStack_78[0] = lVar2;
    lStack_60 = lVar6;
    FUN_10000f888();
    lVar2 = lVar3;
    _objc_allocWithZone();
    FUN_10000c950(alStack_78,lVar6);
    (*(code *)PTR____chkstk_darwin_1000281f0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    puVar9 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar9);
    auStack_a0[0] = *puVar9;
    ppuStack_80 = &PTR_DAT_1000285c0;
    lStack_88 = lVar6;
    FUN_10000c998(auStack_a0,lVar2 + _DAT_100030760);
    plVar7 = alStack_c0 + 2;
    alStack_c0[2] = lVar2;
    alStack_c0[3] = lVar3;
    _objc_msgSendSuper2(plVar7,PTR_s_init_10002eed8);
    FUN_10000c978(auStack_a0);
    FUN_10000c978(alStack_78);
    param_1[3] = lVar3;
    *param_1 = plVar7;
  }
  else {
    lVar3 = 0;
    func_0x000100011420();
    lVar2 = lVar3;
    _swift_allocObject();
    uVar4 = 0;
    FUN_10001479c();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    uVar1 = 0x746c7561666564;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746c7561666564,0xe700000000000000);
    uVar5 = 0x7461686370616e53;
    uVar8 = 0xe800000000000000;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    func_0x00010001f440();
    _objc_release(uVar1);
    _objc_release();
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    FUN_10000c030();
    *(undefined8 *)(lVar2 + 0x18) = uVar5;
    *(undefined8 *)(lVar2 + 0x20) = uVar8;
    ppuStack_58 = &PTR_DAT_100028790;
    lVar6 = 0;
    alStack_78[0] = lVar2;
    lStack_60 = lVar3;
    FUN_100013b14();
    lVar2 = lVar6;
    _objc_allocWithZone();
    FUN_10000c998(alStack_78,lVar2 + _DAT_100030958);
    plVar7 = alStack_c0;
    alStack_c0[0] = lVar2;
    alStack_c0[1] = lVar6;
    _objc_msgSendSuper2(plVar7,PTR_s_init_10002eed8);
    FUN_10000c978(alStack_78);
    param_1[3] = lVar6;
    *param_1 = plVar7;
  }
  return;
}



/* Entry: 10000c818; end: 10000c89f; -[IntentHandler handlerForIntent:] */

void FUN_10000c818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar1 = auStack_50;
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10000c58c(auStack_50,param_3);
  _objc_release(param_3);
  _objc_release(param_1);
  FUN_10000c92c(auStack_50,uStack_38);
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  FUN_10000c978(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(puVar1);
  return;
}



/* Entry: 10000c8a0; end: 10000c8db; -[IntentHandler init] */

void FUN_10000c8a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010000c90c();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_10002eed8);
  return;
}



/* Entry: 10000c8dc; end: 10000c92b;  */

void FUN_10000c8dc(void)

{
  func_0x00010000c90c();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_10002eae0);
  return;
}



/* Entry: 10000c92c; end: 10000c94f;  */

long * FUN_10000c92c(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10000c950; end: 10000c977;  */

long FUN_10000c950(long param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    _swift_makeBoxUnique(param_1,param_2,uVar1 & 0xff);
    param_1 = param_2;
  }
  return param_1;
}



/* Entry: 10000c978; end: 10000c997;  */

void FUN_10000c978(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010000c98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028480)(*param_1);
  return;
}



/* Entry: 10000c998; end: 10000c9db;  */

long FUN_10000c998(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10000c9dc; end: 10000cb23;  */

undefined8
FUN_10000c9dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  puVar4 = &UNK_100028660;
  _swift_allocObject(&UNK_100028660,0x30,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_48;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  puVar5 = &UNK_100028688;
  _swift_allocObject(&UNK_100028688,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10000f64c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x10000f654;
  puStack_78 = PTR___NSConcreteStackBlock_1000281e0;
  uStack_70 = 0x42000000;
  uStack_68 = 0x100013808;
  puStack_60 = &UNK_1000286a0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  __Block_copy(ppuVar6);
  puVar1 = puStack_50;
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(puVar5);
  _swift_release(puVar1);
  func_0x00010001f760(param_1);
  __Block_release(ppuVar6);
  uVar2 = uStack_48;
  _swift_release(puVar4);
  puVar4 = puVar5;
  _swift_isEscapingClosureAtFileLocation(puVar5,"",0x6e,0xe,0x2b,1);
  _swift_release(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10000cb24);
  (*pcVar3)();
}



/* Entry: 10000cb24; end: 10000cd8b;  */

void FUN_10000cb24(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar1 = param_1;
  puVar4 = param_2;
  func_0x00010001f820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    lVar5 = param_1;
    func_0x00010001f680();
    if ((int)lVar5 == 0) {
      _objc_release(lVar1);
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      FUN_100013d2c();
      func_0x00010001fdc0();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        lVar5 = 0;
      }
      else {
        lVar5 = param_1;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(param_1);
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,puVar4);
        _swift_bridgeObjectRelease(puVar4);
      }
      func_0x00010001f440();
      _objc_release(lVar5);
      _objc_release(lVar1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_4,param_5);
      func_0x00010001fb20(uVar2);
      _objc_release(param_4);
    }
  }
  uVar3 = *param_2;
  *param_2 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar3);
  return;
}



/* Entry: 10000cd8c; end: 10000cdff;  */

long FUN_10000cd8c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      lVar1 = 0;
      uVar3 = 1;
    }
    else {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      FUN_10000c1b8();
      uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    }
    *(long *)(unaff_x20 + 0x10) = lVar1;
    _objc_retain(lVar1);
    func_0x00010000f614(uVar3);
  }
  func_0x00010000f624(lVar2);
  return lVar1;
}



/* Entry: 10000ce00; end: 10000cee3;  */

undefined * FUN_10000ce00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  puVar4 = *(undefined **)(unaff_x20 + 0x18);
  puVar3 = puVar4;
  if (puVar4 == (undefined *)0x1) {
    lVar5 = *(long *)(unaff_x20 + 0x28);
    if (lVar5 == 0) {
      uVar6 = 1;
      puVar3 = (undefined *)0x0;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
      puVar1 = PTR_PTR_10002f2b8;
      _objc_opt_self();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar5);
      func_0x00010001fc80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      puVar2 = puVar1;
      func_0x00010001ec80();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010001fd60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      _objc_release(puVar2);
      uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
    }
    *(undefined **)(unaff_x20 + 0x18) = puVar3;
    _swift_unknownObjectRetain(puVar3);
    FUN_10000f5f4(uVar6);
  }
  func_0x00010000f604(puVar4);
  return puVar3;
}



/* Entry: 10000cee4; end: 10000d787;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_10000cee4(undefined *param_1,undefined *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puStack_c8;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar13 = *(long *)(unaff_x20 + 0x28);
  if (lVar13 != 0) {
    uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
    FUN_10000cd8c();
    if (param_1 != (undefined *)0x0) {
      puVar18 = param_1;
      FUN_10000ce00();
      if (puVar18 != (undefined *)0x0) {
        puVar12 = (undefined *)0x8000000100022aa0;
        uVar4 = 0xd000000000000018;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018);
        puVar16 = puVar18;
        func_0x00010001fce0();
        _objc_retainAutoreleasedReturnValue();
        _swift_unknownObjectRelease(puVar18);
        _objc_release(uVar4);
        param_2 = puVar12;
        if (puVar16 != (undefined *)0x0) {
          puVar18 = puVar16;
          __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
          param_2 = puVar12;
          _objc_release(puVar16);
          puVar16 = param_1;
          func_0x00010001f280();
          _objc_retainAutoreleasedReturnValue();
          if (puVar16 != (undefined *)0x0) {
            param_2 = (undefined *)0x0;
            FUN_10000f5b4(0,0x100030748,&PTR_PTR_10002f2b0);
            puVar17 = puVar16;
            __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
            _objc_release(puVar16);
            if ((ulong)puVar17 >> 0x3e == 0) {
              puVar16 = *(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar16 = (undefined *)((ulong)puVar17 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar17) {
                puVar16 = puVar17;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            if (puVar16 != (undefined *)0x0) {
              puVar19 = (undefined *)0x0;
              do {
                if (((ulong)puVar17 & 0xc000000000000001) == 0) {
                  if (*(undefined **)(((ulong)puVar17 & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d144);
                    (*pcVar2)();
                  }
                  puVar5 = *(undefined **)(puVar17 + (long)puVar19 * 8 + 0x20);
                  _objc_retain();
                  puVar8 = param_2;
                }
                else {
                  puVar5 = puVar19;
                  puVar8 = puVar17;
                  func_0x000100011908();
                }
                puVar15 = puVar19 + 1;
                if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d140);
                  (*pcVar2)();
                }
                puVar6 = puVar5;
                func_0x00010001fdc0();
                _objc_retainAutoreleasedReturnValue();
                param_2 = puVar8;
                if (puVar6 != (undefined *)0x0) {
                  puVar7 = puVar6;
                  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                  _objc_release(puVar6);
                  if ((puVar7 == puVar18) && (puVar8 == puVar12)) {
                    _swift_bridgeObjectRelease(puVar12);
                    puVar12 = puVar17;
LAB_10000d0ec:
                    _swift_bridgeObjectRelease(puVar12);
                    _swift_bridgeObjectRelease(puVar8);
                    _swift_bridgeObjectRetain(lVar13);
                    puVar18 = puVar5;
                    func_0x00010000cc60(puVar5,uVar14,lVar13);
                    _objc_release(param_1);
                    _objc_release(puVar5);
                    _swift_bridgeObjectRelease(lVar13);
                    return puVar18;
                  }
                  param_2 = puVar8;
                  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (puVar7,puVar8,puVar18,puVar12,0);
                  _swift_bridgeObjectRelease(puVar8);
                  puVar8 = puVar17;
                  if (((ulong)puVar7 & 1) != 0) goto LAB_10000d0ec;
                }
                _objc_release(puVar5);
                puVar19 = puVar19 + 1;
              } while (puVar15 != puVar16);
            }
            _swift_bridgeObjectRelease(puVar12);
            puVar12 = puVar17;
          }
          _swift_bridgeObjectRelease(puVar12);
        }
      }
      puVar18 = param_1;
      func_0x00010001ed20();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar18 != (undefined *)0x0) {
        param_2 = (undefined *)0x0;
        FUN_10000f5b4(0,0x100030748,&PTR_PTR_10002f2b0);
        puVar16 = puVar18;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                  (puVar18,param_2);
        _objc_release(puVar18);
      }
      _swift_bridgeObjectRetain(lVar13);
      puVar18 = param_1;
      func_0x00010001f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar18 != (undefined *)0x0) {
        param_2 = (undefined *)0x0;
        FUN_10000f5b4(0,0x100030750,&PTR_PTR_10002f2d0);
        puVar12 = puVar18;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
                  (puVar18,param_2);
        _objc_release(puVar18);
      }
      uVar4 = 0;
      FUN_100013d2c();
      puVar18 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
      if ((ulong)puVar16 >> 0x3e == 0) {
        puVar17 = *(undefined **)(puVar18 + 0x10);
      }
      else {
        puVar17 = puVar18;
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          puVar17 = puVar16;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      _swift_bridgeObjectRetain(lVar13);
      puVar19 = (undefined *)0x0;
      while (puVar17 != puVar19) {
        if (((ulong)puVar16 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d710);
            (*pcVar2)();
          }
          puVar5 = *(undefined **)(puVar16 + (long)puVar19 * 8 + 0x20);
          _objc_retain();
        }
        else {
          puVar5 = puVar19;
          param_2 = puVar16;
          func_0x000100011908(puVar19,puVar16);
        }
        puVar8 = puVar5;
        func_0x00010001f820();
        _objc_retainAutoreleasedReturnValue();
        if (puVar8 != (undefined *)0x0) {
          puVar15 = puVar5;
          func_0x00010001f680();
          if ((int)puVar15 != 0) {
            puVar17 = puVar5;
            func_0x00010001fdc0();
            _objc_retainAutoreleasedReturnValue();
            uVar9 = uVar4;
            if (puVar17 == (undefined *)0x0) {
              _swift_getObjCClassFromMetadata(uVar4);
              _objc_allocWithZone();
              puVar15 = (undefined *)0x0;
            }
            else {
              puVar15 = puVar17;
              __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
              _objc_release(puVar17);
              _swift_getObjCClassFromMetadata(uVar4);
              _objc_allocWithZone();
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar15,param_2);
              _swift_bridgeObjectRelease(param_2);
            }
            func_0x00010001f440();
            _objc_release(puVar15);
            _objc_release(puVar8);
            uVar10 = uVar14;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar14,lVar13);
            func_0x00010001fb20(uVar9);
            _objc_release(uVar9);
            _objc_release(puVar5);
            _objc_release(uVar10);
            puVar17 = puVar19;
            break;
          }
          _objc_release(puVar5);
          puVar5 = puVar8;
        }
        _objc_release(puVar5);
        bVar3 = SCARRY8((long)puVar19,1);
        puVar19 = puVar19 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d714);
          (*pcVar2)();
        }
      }
      if ((ulong)puVar16 >> 0x3e == 0) {
        puVar19 = *(undefined **)(puVar18 + 0x10);
      }
      else {
        puVar19 = puVar18;
        if (((ulong)puVar16 & 0x8000000000000000) != 0) {
          puVar19 = puVar16;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if (puVar17 == puVar19) {
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar18 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar18 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
          if (((ulong)puVar12 & 0x8000000000000000) != 0) {
            puVar18 = puVar12;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        puStack_c8 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
        puVar17 = (undefined *)0x0;
        while (puVar19 = puVar18, puVar18 != puVar17) {
          if (((ulong)puVar12 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puStack_c8 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d71c);
              (*pcVar2)();
            }
            puVar19 = *(undefined **)(puVar12 + (long)puVar17 * 8 + 0x20);
            _objc_retain(puVar19);
          }
          else {
            puVar19 = puVar17;
            FUN_1000118f4(puVar17,puVar12);
          }
          lStack_78 = 0;
          puVar5 = &UNK_1000286d8;
          _swift_allocObject(&UNK_1000286d8,0x30,7);
          *(long **)(puVar5 + 0x10) = &lStack_78;
          *(undefined8 *)(puVar5 + 0x18) = uVar4;
          *(undefined8 *)(puVar5 + 0x20) = uVar14;
          *(long *)(puVar5 + 0x28) = lVar13;
          puVar8 = &UNK_100028700;
          _swift_allocObject(&UNK_100028700,0x20,7);
          *(undefined8 *)(puVar8 + 0x10) = 0x10000f650;
          *(undefined **)(puVar8 + 0x18) = puVar5;
          uStack_88 = 0x10000f658;
          puStack_a8 = PTR___NSConcreteStackBlock_1000281e0;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x100013808;
          puStack_90 = &UNK_100028718;
          ppuVar11 = &puStack_a8;
          puStack_80 = puVar8;
          __Block_copy(ppuVar11);
          puVar15 = puStack_80;
          _swift_bridgeObjectRetain(lVar13);
          _swift_retain(puVar8);
          _swift_release(puVar15);
          func_0x00010001f760(puVar19);
          __Block_release(ppuVar11);
          lVar1 = lStack_78;
          _swift_release(puVar5);
          puVar5 = puVar8;
          _swift_isEscapingClosureAtFileLocation(puVar8,"",0x6e,0xe,0x2b,1);
          _objc_release(puVar19);
          _swift_release(puVar8);
          _objc_release(lVar1);
          if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d718);
            (*pcVar2)();
          }
          puVar19 = puVar17;
          if (lVar1 != 0) break;
          bVar3 = SCARRY8((long)puVar17,1);
          puVar17 = puVar17 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d720);
            (*pcVar2)();
          }
        }
        if ((ulong)puVar12 >> 0x3e == 0) {
          puVar18 = *(undefined **)(puStack_c8 + 0x10);
        }
        else {
          puVar18 = puStack_c8;
          if (((ulong)puVar12 & 0x8000000000000000) != 0) {
            puVar18 = puVar12;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (puVar19 == puVar18) {
          _swift_bridgeObjectRelease(puVar16);
          _swift_bridgeObjectRelease_n(lVar13,2);
          _swift_bridgeObjectRelease(puVar12);
          _objc_release(param_1);
          return (undefined *)0x0;
        }
        if (((ulong)puVar12 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puStack_c8 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d778);
            (*pcVar2)();
          }
          puVar19 = *(undefined **)(puVar12 + (long)puVar19 * 8 + 0x20);
          _objc_retain();
        }
        else {
          FUN_1000118f4(puVar19,puVar12);
        }
        puVar18 = puVar19;
        FUN_10000c9dc();
        _objc_release(puVar19);
        if (puVar18 == (undefined *)0x0) {
          _swift_bridgeObjectRelease_n(lVar13,2);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d788);
          (*pcVar2)();
        }
      }
      else {
        if (((ulong)puVar16 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar18 + 0x10) <= puVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d764);
            (*pcVar2)();
          }
          puVar17 = *(undefined **)(puVar16 + (long)puVar17 * 8 + 0x20);
          _objc_retain();
        }
        else {
          func_0x000100011908(puVar17,puVar16);
        }
        puVar18 = puVar17;
        func_0x00010000cc60();
        _objc_release(puVar17);
        if (puVar18 == (undefined *)0x0) {
          _swift_bridgeObjectRelease_n(lVar13,2);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000d32c);
          (*pcVar2)();
        }
      }
      FUN_10000f5b4(0,0x100030758,&PTR__OBJC_CLASS___NSNumber_10002f348);
      puVar17 = puVar18;
      _objc_retain(puVar18);
      uVar14 = 1;
      __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(1);
      func_0x00010001fb80(puVar17);
      _objc_release(puVar17);
      _objc_release(uVar14);
      _swift_bridgeObjectRelease(puVar16);
      _swift_bridgeObjectRelease_n(lVar13,2);
      _swift_bridgeObjectRelease(puVar12);
      _objc_release(param_1);
      return puVar18;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10000d788; end: 10000d893;  */

void FUN_10000d788(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_100012fd4();
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_1000283a0;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_100013d2c(0);
      puVar3 = puVar6;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_10000d8e8(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_10000df2c(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 10000d894; end: 10000d8e7;  */

void FUN_10000d894(void)

{
  long unaff_x20;
  
  func_0x00010000f614(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x00010000f5f4(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010001e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000283f8)();
  return;
}



/* Entry: 10000d8e8; end: 10000df2b;  */

void FUN_10000d8e8(long *param_1,long param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x21;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_1000283a0;
  lVar14 = param_3[1];
  if (0 < lVar14) {
    lVar16 = 0;
    do {
      lVar12 = lVar16 + 1;
      lVar25 = param_2;
      if (lVar12 < lVar14) {
        lVar20 = *param_3;
        uVar3 = *(ulong *)(lVar20 + lVar12 * 8);
        uVar23 = *(ulong *)(lVar20 + lVar16 * 8);
        _objc_retain();
        _objc_retain();
        uVar8 = uVar3;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar12 = param_2;
        _objc_release(uVar8);
        uVar8 = uVar23;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar25 = lVar12;
        _objc_release(uVar8);
        if (uStack_68 == uVar4 && param_2 == lVar12) {
          uStack_68 = 0;
        }
        else {
          lVar25 = param_2;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uStack_68,param_2,uVar4,lVar12,1);
          uStack_68 = uStack_68 & 0xffffffff;
        }
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(lVar12);
        _objc_release(uVar3);
        _objc_release(uVar23);
        lVar12 = lVar16 + 2;
        if (lVar12 < lVar14) {
          plVar21 = (long *)(lVar20 + lVar16 * 8 + 0x10);
          lVar15 = lVar25;
          lVar20 = lVar12;
          do {
            lVar12 = lVar20;
            lVar20 = plVar21[-1];
            lVar22 = *plVar21;
            _objc_retain();
            _objc_retain();
            lVar25 = lVar22;
            func_0x00010001f0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar25;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            lVar13 = lVar15;
            _objc_release(lVar25);
            lVar6 = lVar20;
            func_0x00010001f0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            lVar25 = lVar13;
            _objc_release(lVar6);
            if (lVar5 == lVar7 && lVar15 == lVar13) {
              _objc_release(lVar22);
              _objc_release(lVar20);
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(lVar13);
              if ((uStack_68 & 1) != 0) goto LAB_10000db5c;
            }
            else {
              lVar25 = lVar15;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (lVar5,lVar15,lVar7,lVar13,1);
              _objc_release(lVar22);
              _objc_release(lVar20);
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(lVar13);
              if ((((uint)uStack_68 ^ (uint)lVar5) & 1) != 0) break;
            }
            plVar21 = plVar21 + 1;
            lVar20 = lVar12 + 1;
            lVar15 = lVar25;
            lVar12 = lVar14;
          } while (lVar14 != lVar20);
        }
        if ((uStack_68 & 1) != 0) {
LAB_10000db5c:
          if (lVar12 < lVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df00);
            (*pcVar1)();
          }
          if (lVar16 < lVar12) {
            lVar15 = *param_3;
            puVar17 = (undefined8 *)(lVar15 + lVar12 * 8);
            puVar18 = (undefined8 *)(lVar15 + lVar16 * 8);
            lVar20 = lVar12;
            lVar14 = lVar16;
            do {
              puVar17 = puVar17 + -1;
              lVar20 = lVar20 + -1;
              if (lVar14 != lVar20) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df20);
                  (*pcVar1)();
                }
                uVar19 = *puVar18;
                *puVar18 = *puVar17;
                *puVar17 = uVar19;
              }
              lVar14 = lVar14 + 1;
              puVar18 = puVar18 + 1;
            } while (lVar14 < lVar20);
          }
        }
      }
      lVar14 = param_3[1];
      lVar20 = lVar12;
      if (lVar12 < lVar14) {
        if (SBORROW8(lVar12,lVar16)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10000defc);
          (*pcVar1)();
        }
        if (lVar12 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df04);
            (*pcVar1)();
          }
          lVar15 = lVar16 + param_4;
          if (lVar14 <= lVar16 + param_4) {
            lVar15 = lVar14;
          }
          if (lVar15 < lVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df08);
            (*pcVar1)();
          }
          if (lVar12 != lVar15) {
            lVar14 = *param_3;
            puVar26 = (ulong *)(lVar14 + lVar12 * 8 + -8);
            lVar22 = lVar16 - lVar12;
            do {
              uVar8 = *(ulong *)(lVar14 + lVar12 * 8);
              lVar5 = lVar25;
              lVar20 = lVar22;
              puVar27 = puVar26;
              do {
                uVar24 = *puVar27;
                _objc_retain();
                _objc_retain();
                uVar4 = uVar8;
                func_0x00010001f0c0();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar4;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar6 = lVar5;
                _objc_release(uVar4);
                uVar4 = uVar24;
                func_0x00010001f0c0();
                _objc_retainAutoreleasedReturnValue();
                uVar23 = uVar4;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar25 = lVar6;
                _objc_release(uVar4);
                if (uVar3 == uVar23 && lVar5 == lVar6) {
                  _objc_release(uVar8);
                  _objc_release(uVar24);
                  _swift_bridgeObjectRelease(lVar5);
                  _swift_bridgeObjectRelease(lVar6);
                  break;
                }
                lVar25 = lVar5;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar3,lVar5,uVar23,lVar6,1);
                _objc_release(uVar8);
                _objc_release(uVar24);
                _swift_bridgeObjectRelease(lVar5);
                _swift_bridgeObjectRelease(lVar6);
                if ((uVar3 & 1) == 0) break;
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df0c);
                  (*pcVar1)();
                }
                uVar4 = *puVar27;
                uVar8 = puVar27[1];
                *puVar27 = uVar8;
                puVar27[1] = uVar4;
                bVar2 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                lVar5 = lVar25;
                puVar27 = puVar27 + -1;
              } while (bVar2);
              lVar12 = lVar12 + 1;
              puVar26 = puVar26 + 1;
              lVar22 = lVar22 + -1;
              lVar20 = lVar15;
            } while (lVar12 != lVar15);
          }
        }
      }
      puVar11 = puStack_58;
      if (lVar20 < lVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000def0);
        (*pcVar1)();
      }
      puVar9 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100012894(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar8 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100012894(puVar11,uVar8 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar8 + 1;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x28) = lVar20;
      param_2 = *param_1;
      puStack_58 = puVar11;
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df24);
        (*pcVar1)();
      }
      FUN_10000e0b4(&puStack_58,param_2,param_3);
      puVar11 = puStack_58;
      if (unaff_x21 != 0) goto LAB_10000dec0;
      lVar14 = param_3[1];
      lVar16 = lVar20;
    } while (lVar20 < lVar14);
  }
  puVar11 = puStack_58;
  lVar14 = *param_1;
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df2c);
    (*pcVar1)();
  }
  puVar9 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100012e50();
  }
  uVar8 = *(ulong *)(puVar11 + 0x10);
  while (puStack_58 = puVar11, 1 < uVar8) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000df28);
      (*pcVar1)();
    }
    lVar20 = uVar8 - 1;
    lVar25 = *(long *)(puVar11 + uVar8 * 0x10);
    lVar12 = *(long *)(puVar11 + lVar20 * 0x10 + 0x28);
    FUN_10000e31c(lVar16 + lVar25 * 8,lVar16 + *(long *)(puVar11 + lVar20 * 0x10 + 0x20) * 8,
                  lVar16 + lVar12 * 8,lVar14);
    if (unaff_x21 != 0) break;
    if (lVar12 < lVar25) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000def4);
      (*pcVar1)();
    }
    puVar9 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100012e50();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar8 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000def8);
      (*pcVar1)();
    }
    *(long *)(puVar11 + uVar8 * 0x10) = lVar25;
    *(long *)((long)(puVar11 + uVar8 * 0x10) + 8) = lVar12;
    puStack_58 = puVar11;
    FUN_100012dc8(lVar20);
    puVar11 = puStack_58;
    uVar8 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_10000dec0:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Entry: 10000df2c; end: 10000e0b3;  */

void FUN_10000df2c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  
  if (param_3 != param_2) {
    lVar10 = *param_4;
    puVar12 = (ulong *)(lVar10 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    lVar9 = param_2;
    do {
      uVar3 = *(ulong *)(lVar10 + param_3 * 8);
      lVar7 = lVar9;
      lVar11 = param_1;
      puVar13 = puVar12;
      do {
        uVar14 = *puVar13;
        _objc_retain();
        _objc_retain();
        uVar4 = uVar3;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar8 = lVar7;
        _objc_release(uVar4);
        uVar4 = uVar14;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar9 = lVar8;
        _objc_release(uVar4);
        if (uVar5 == uVar6 && lVar7 == lVar8) {
          _objc_release(uVar3);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(lVar7);
          _swift_bridgeObjectRelease(lVar8);
          break;
        }
        lVar9 = lVar7;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar7,uVar6,lVar8,1);
        _objc_release(uVar3);
        _objc_release(uVar14);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(lVar8);
        if ((uVar5 & 1) == 0) break;
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10000e0b4);
          (*pcVar1)();
        }
        uVar4 = *puVar13;
        uVar3 = puVar13[1];
        *puVar13 = uVar3;
        puVar13[1] = uVar4;
        bVar2 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        lVar7 = lVar9;
        puVar13 = puVar13 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar12 = puVar12 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10000e0b4; end: 10000e31b;  */

undefined8 FUN_10000e0b4(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100012e50();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10000e188;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e304);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10000e1ec:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2f4);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2fc);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2dc);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2e0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2e8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2f0);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10000e188:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2e4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2ec);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2f8);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e300);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10000e1ec;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e308);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2d0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e31c);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_10000e31c(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2d4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100012e50();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10000e2d8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100012dc8(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 10000e31c; end: 10000e74f;  */

undefined8 FUN_10000e31c(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puStack_58;
  
  lVar13 = (long)param_2 - (long)param_1;
  lVar8 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar8 = lVar13;
  }
  lVar8 = lVar8 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar10 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar10 = lVar14;
  }
  lVar10 = lVar10 >> 3;
  if (lVar8 < lVar10) {
    if (((param_4 < param_1) || (param_1 + lVar8 <= param_4)) ||
       (puVar5 = param_2, param_4 != param_1)) {
      puVar5 = param_1;
      _memmove(param_4,param_1,lVar8 << 3);
    }
    puStack_58 = param_4 + lVar8;
    puVar7 = param_1;
    if (7 < lVar13) {
      do {
        if (param_3 <= param_2) break;
        uVar1 = *param_2;
        uVar12 = *param_4;
        _objc_retain();
        _objc_retain();
        uVar2 = uVar1;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar6 = puVar5;
        _objc_release(uVar2);
        uVar2 = uVar12;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar4 = puVar6;
        _objc_release(uVar2);
        if (uVar9 == uVar3 && puVar5 == puVar6) {
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar5);
          _swift_bridgeObjectRelease(puVar6);
LAB_10000e4f4:
          puVar11 = param_4 + 1;
          puVar5 = puVar4;
          puVar6 = param_4;
        }
        else {
          puVar4 = puVar5;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,puVar5,uVar3,puVar6,1);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar5);
          _swift_bridgeObjectRelease(puVar6);
          if ((uVar9 & 1) == 0) goto LAB_10000e4f4;
          puVar11 = param_4;
          puVar5 = puVar4;
          puVar6 = param_2;
          param_2 = param_2 + 1;
        }
        param_4 = puVar11;
        if (puVar7 != puVar6) {
          *puVar7 = *puVar6;
        }
        puVar7 = puVar7 + 1;
      } while (param_4 < puStack_58);
    }
  }
  else {
    puVar5 = param_2;
    if (((param_4 < param_2) || (param_2 + lVar10 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar10 << 3);
    }
    puStack_58 = param_4 + lVar10;
    puVar7 = param_2;
    if ((param_1 < param_2) && (7 < lVar14)) {
LAB_10000e570:
      puVar11 = param_2 + -1;
      puVar6 = puVar5;
      puVar4 = param_3;
      do {
        puVar15 = puStack_58 + -1;
        uVar1 = *puVar15;
        uVar12 = *puVar11;
        _objc_retain();
        _objc_retain();
        uVar2 = uVar1;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar7 = puVar6;
        _objc_release(uVar2);
        uVar2 = uVar12;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar5 = puVar7;
        _objc_release(uVar2);
        if (uVar9 == uVar3 && puVar6 == puVar7) {
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar7);
        }
        else {
          puVar5 = puVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,puVar6,uVar3,puVar7,1);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar7);
          param_3 = puVar4 + -1;
          if ((uVar9 & 1) != 0) goto LAB_10000e69c;
        }
        if (puStack_58 != puVar4) {
          puVar4[-1] = *puVar15;
        }
        puVar6 = puVar5;
        puVar4 = puVar4 + -1;
        puVar7 = param_2;
        puStack_58 = puVar15;
        if (puVar15 <= param_4) break;
      } while( true );
    }
  }
LAB_10000e6e8:
  uVar9 = (long)puStack_58 - (long)param_4;
  uVar2 = uVar9 + 7;
  if (-1 < (long)uVar9) {
    uVar2 = uVar9;
  }
  if ((puVar7 != param_4) || ((ulong *)((long)param_4 + (uVar2 & 0xfffffffffffffff8)) <= puVar7)) {
    _memmove(puVar7,param_4,((long)uVar2 >> 3) << 3);
  }
  return 1;
LAB_10000e69c:
  if (puVar4 != param_2) {
    *param_3 = *puVar11;
  }
  puVar7 = puVar11;
  if ((puVar11 <= param_1) || (param_2 = puVar11, puStack_58 <= param_4)) goto LAB_10000e6e8;
  goto LAB_10000e570;
}



/* Entry: 10000e750; end: 10000e85b;  */

undefined1  [16] FUN_10000e750(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar6 = 0;
  while( true ) {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_10000e81c;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000e844);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar6;
      FUN_100011ad8(uVar6,param_1);
    }
    uVar4 = uVar3;
    FUN_10000fdb4();
    if ((uVar4 & 1) != 0) break;
    uVar4 = uVar3;
    FUN_10000fdb4(uVar3,param_3);
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_10000e818;
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000e848);
      (*pcVar1)();
    }
  }
  _objc_release(uVar3);
LAB_10000e818:
  uVar5 = 0;
LAB_10000e81c:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar6;
  return auVar9;
}



/* Entry: 10000e85c; end: 10000eaeb;  */

void FUN_10000e85c(ulong *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  FUN_10000e750();
  if (unaff_x21 == 0) {
    if ((param_2 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
      }
    }
    else {
      uVar10 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eaec);
        (*pcVar2)();
      }
      while( true ) {
        uVar10 = uVar10 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg();
        }
        if (uVar10 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eab0);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eab4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
          _objc_retain();
        }
        else {
          uVar5 = uVar10;
          FUN_100011ad8(uVar10,uVar8);
        }
        uVar11 = uVar5;
        FUN_10000fdb4();
        if ((uVar11 & 1) == 0) {
          uVar11 = uVar5;
          FUN_10000fdb4(uVar5,param_3);
          _objc_release(uVar5);
          if ((uVar11 & 1) == 0) {
            if (uVar4 != uVar10) {
              if ((uVar8 & 0xc000000000000001) == 0) {
                if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eac4);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
                if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eac8);
                  (*pcVar2)();
                }
                if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eacc);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
                uVar11 = *(ulong *)(uVar8 + 0x20 + uVar10 * 8);
                _objc_retain();
                _objc_retain();
              }
              else {
                uVar5 = uVar4;
                FUN_100011ad8(uVar4,uVar8);
                uVar11 = uVar10;
                FUN_100011ad8(uVar10,uVar8);
              }
              uVar9 = uVar8;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)uVar9 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
                FUN_100012fd4();
                uVar7 = (uint)(uVar8 >> 0x3e) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar9 = uVar8 & 0xffffffffffffff8;
              lVar1 = uVar9 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar11;
              _objc_release(uVar6);
              if (((long)uVar8 < 0) || (uVar7 != 0)) {
                FUN_100012fd4();
                uVar9 = uVar8 & 0xffffffffffffff8;
              }
              if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10000ea84);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar9 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eac0);
                (*pcVar2)();
              }
              lVar1 = uVar9 + uVar10 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              _objc_release(uVar6);
              *param_1 = uVar8;
            }
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eabc);
              (*pcVar2)();
            }
          }
        }
        else {
          _objc_release(uVar5);
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10000eab8);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 10000eaec; end: 10000f54f;  */

void FUN_10000eaec(undefined *param_1,code *param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  puVar15 = *(undefined **)(param_1 + 0x28);
  if (puVar15 != (undefined *)0x0) {
    uVar16 = *(undefined8 *)(param_1 + 0x20);
    FUN_10000cd8c();
    if (param_1 != (undefined *)0x0) {
      puVar21 = param_1;
      func_0x00010001ed20();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar21 != (undefined *)0x0) {
        uVar4 = 0;
        FUN_10000f5b4(0,0x100030748,&PTR_PTR_10002f2b0);
        puVar5 = puVar21;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar21,uVar4)
        ;
        _objc_release(puVar21);
      }
      puVar21 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar18 = *(undefined **)(puVar21 + 0x10);
      }
      else {
        puVar18 = puVar21;
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar18 = puVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar14 = (undefined *)0x2;
      _swift_bridgeObjectRetain_n(puVar15,2);
      puVar8 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar18 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar21 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4e8);
                (*pcVar3)();
              }
              puVar6 = *(undefined **)(puVar5 + (long)puVar12 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar6 = puVar12;
              puVar14 = puVar5;
              func_0x000100011908(puVar12,puVar5);
            }
            puVar10 = puVar12 + 1;
            if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4e4);
              (*pcVar3)();
            }
            puVar7 = puVar6;
            func_0x00010001f820();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 != (undefined *)0x0) break;
LAB_10000ec4c:
            _objc_release(puVar6);
            puVar12 = puVar12 + 1;
            if (puVar10 == puVar18) goto LAB_10000ee38;
          }
          puVar19 = puVar6;
          func_0x00010001f680();
          if ((int)puVar19 == 0) {
            _objc_release(puVar6);
            puVar6 = puVar7;
            goto LAB_10000ec4c;
          }
          uVar4 = 0;
          FUN_100013d2c();
          puVar12 = puVar6;
          func_0x00010001fdc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined *)0x0) {
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            puVar19 = (undefined *)0x0;
          }
          else {
            puVar19 = puVar12;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar12);
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar19,puVar14);
            _swift_bridgeObjectRelease(puVar14);
          }
          func_0x00010001f440();
          _objc_release(puVar19);
          _objc_release(puVar7);
          uVar9 = uVar16;
          puVar14 = puVar15;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar16);
          func_0x00010001fb20(uVar4);
          _objc_release(puVar6);
          _objc_release(uVar9);
          puVar12 = puVar8;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar12 == 0) || ((long)puVar8 < 0)) ||
             (puVar12 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar8) {
                puVar14 = puVar8;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar14 = puVar14 + 1;
            puVar12 = (undefined *)0x0;
            FUN_100011534(0,puVar14,1,puVar8);
          }
          uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar17 + 0x10);
          puVar6 = (undefined *)(uVar1 + 1);
          puVar8 = puVar12;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            puVar14 = puVar6;
            FUN_100011534(puVar8,puVar6,1,puVar12);
            uVar17 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar17 + 0x10) = puVar6;
          *(undefined8 *)(uVar17 + uVar1 * 8 + 0x20) = uVar4;
          puVar12 = puVar10;
        } while (puVar10 != puVar18);
      }
LAB_10000ee38:
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease_n(puVar15,2);
      puVar21 = param_1;
      func_0x00010001f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar21 != (undefined *)0x0) {
        uVar4 = 0;
        FUN_10000f5b4(0,0x100030750,&PTR_PTR_10002f2d0);
        puVar5 = puVar21;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar21,uVar4)
        ;
        _objc_release(puVar21);
      }
      uVar4 = 0;
      FUN_100013d2c();
      if ((ulong)puVar5 >> 0x3e == 0) {
        puStack_e0 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puStack_e0 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puStack_e0 = puVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uStack_e8 = (ulong)puVar5 & 0xffffffffffffff8;
      _swift_bridgeObjectRetain_n(puVar15,2);
      puStack_f0 = PTR___swiftEmptyArrayStorage_1000283a0;
      puVar21 = (undefined *)0x0;
      while (puStack_e0 != puVar21) {
        if (((ulong)puVar5 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_e8 + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4dc);
            (*pcVar3)();
          }
          puVar18 = *(undefined **)(puVar5 + (long)puVar21 * 8 + 0x20);
          _objc_retain(puVar18);
        }
        else {
          puVar18 = puVar21;
          FUN_1000118f4(puVar21,puVar5);
        }
        puVar14 = puVar21 + 1;
        if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4d8);
          (*pcVar3)();
        }
        alStack_80[0] = 0;
        puVar12 = &UNK_1000285e8;
        _swift_allocObject(&UNK_1000285e8,0x30,7);
        *(long **)(puVar12 + 0x10) = alStack_80;
        *(undefined8 *)(puVar12 + 0x18) = uVar4;
        *(undefined8 *)(puVar12 + 0x20) = uVar16;
        *(undefined **)(puVar12 + 0x28) = puVar15;
        puVar6 = &UNK_100028610;
        _swift_allocObject(&UNK_100028610,0x20,7);
        *(code **)(puVar6 + 0x10) = FUN_10000f574;
        *(undefined **)(puVar6 + 0x18) = puVar12;
        uStack_90 = 0x10000f580;
        puStack_b0 = PTR___NSConcreteStackBlock_1000281e0;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x100013808;
        puStack_98 = &UNK_100028628;
        ppuVar13 = &puStack_b0;
        puStack_88 = puVar6;
        __Block_copy(ppuVar13);
        puVar10 = puStack_88;
        _swift_bridgeObjectRetain(puVar15);
        _swift_retain(puVar6);
        _swift_release(puVar10);
        func_0x00010001f760(puVar18);
        __Block_release(ppuVar13);
        lVar2 = alStack_80[0];
        _swift_release(puVar12);
        puVar12 = puVar6;
        _swift_isEscapingClosureAtFileLocation(puVar6,"",0x6e,0xe,0x2b,1);
        _objc_release(puVar18);
        _swift_release(puVar6);
        if (((ulong)puVar12 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4e0);
          (*pcVar3)();
        }
        puVar21 = puVar21 + 1;
        if (lVar2 != 0) {
          puVar21 = puStack_f0;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar21 == 0) || ((long)puStack_f0 < 0)) ||
             (puVar21 = puStack_f0, ((ulong)puStack_f0 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_f0 >> 0x3e == 0) {
              puVar18 = *(undefined **)(((ulong)puStack_f0 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar18 = (undefined *)((ulong)puStack_f0 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_f0) {
                puVar18 = puStack_f0;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar18);
            }
            puVar21 = (undefined *)0x0;
            FUN_100011534(0,puVar18 + 1,1,puStack_f0);
          }
          uVar17 = (ulong)puVar21 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar17 + 0x10);
          puStack_f0 = puVar21;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
            puStack_f0 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            FUN_100011534(puStack_f0,uVar1 + 1,1,puVar21);
            uVar17 = (ulong)puStack_f0 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar17 + 0x10) = uVar1 + 1;
          *(long *)(uVar17 + uVar1 * 8 + 0x20) = lVar2;
          puVar21 = puVar14;
        }
      }
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease_n(puVar15,2);
      puVar21 = param_1;
      func_0x00010001f280();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar21 != (undefined *)0x0) {
        uVar9 = 0;
        FUN_10000f5b4(0,0x100030748,&PTR_PTR_10002f2b0);
        puVar5 = puVar21;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar21,uVar9)
        ;
        _objc_release(puVar21);
      }
      puVar21 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
      if ((ulong)puVar5 >> 0x3e == 0) {
        puVar18 = *(undefined **)(puVar21 + 0x10);
      }
      else {
        puVar18 = puVar21;
        if ((undefined *)0x7fffffffffffffff < puVar5) {
          puVar18 = puVar5;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar14 = (undefined *)0x2;
      _swift_bridgeObjectRetain_n(puVar15,2);
      puVar12 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar18 != (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar5 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar21 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4f0);
                (*pcVar3)();
              }
              puVar10 = *(undefined **)(puVar5 + (long)puVar6 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar10 = puVar6;
              puVar14 = puVar5;
              func_0x000100011908(puVar6,puVar5);
            }
            puVar7 = puVar6 + 1;
            if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f4ec);
              (*pcVar3)();
            }
            puVar19 = puVar10;
            func_0x00010001f820();
            _objc_retainAutoreleasedReturnValue();
            if (puVar19 != (undefined *)0x0) break;
LAB_10000f1ac:
            _objc_release(puVar10);
            puVar6 = puVar6 + 1;
            if (puVar7 == puVar18) goto LAB_10000f398;
          }
          puVar20 = puVar10;
          func_0x00010001f680();
          if ((int)puVar20 == 0) {
            _objc_release(puVar10);
            puVar10 = puVar19;
            goto LAB_10000f1ac;
          }
          puVar6 = puVar10;
          func_0x00010001fdc0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar4;
          if (puVar6 == (undefined *)0x0) {
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            puVar20 = (undefined *)0x0;
          }
          else {
            puVar20 = puVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar6);
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar20,puVar14);
            _swift_bridgeObjectRelease(puVar14);
          }
          func_0x00010001f440();
          _objc_release(puVar20);
          _objc_release(puVar19);
          uVar11 = uVar16;
          puVar14 = puVar15;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar16);
          func_0x00010001fb20(uVar9);
          _objc_release(puVar10);
          _objc_release(uVar11);
          puVar6 = puVar12;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar6 == 0) || ((long)puVar12 < 0)) ||
             (puVar6 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar12) {
                puVar14 = puVar12;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar14 = puVar14 + 1;
            puVar6 = (undefined *)0x0;
            FUN_100011534(0,puVar14,1,puVar12);
          }
          uVar17 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar17 + 0x10);
          puVar10 = (undefined *)(uVar1 + 1);
          puVar12 = puVar6;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            puVar14 = puVar10;
            FUN_100011534(puVar12,puVar10,1,puVar6);
            uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar17 + 0x10) = puVar10;
          *(undefined8 *)(uVar17 + uVar1 * 8 + 0x20) = uVar9;
          puVar6 = puVar7;
        } while (puVar7 != puVar18);
      }
LAB_10000f398:
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease_n(puVar15,2);
      puStack_b0 = puVar12;
      _swift_bridgeObjectRetain(puVar8);
      _swift_bridgeObjectRetain(puStack_f0);
      ppuVar13 = &puStack_b0;
      FUN_10000e85c(ppuVar13,puVar8,puStack_f0);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puStack_f0);
      if ((ulong)puStack_b0 >> 0x3e == 0) {
        puVar15 = *(undefined **)(((ulong)puStack_b0 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar15 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_b0) {
          puVar15 = puStack_b0;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)puVar15 < (long)ppuVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10000f550);
        (*pcVar3)();
      }
      FUN_10001311c(ppuVar13);
      FUN_10000d788(&puStack_b0);
      FUN_100010ecc(puStack_f0);
      puVar15 = puStack_b0;
      _swift_bridgeObjectRetain(puStack_b0);
      FUN_100010ecc();
      puVar21 = PTR__OBJC_CLASS___INObjectCollection_10002f2a8;
      _objc_allocWithZone(PTR__OBJC_CLASS___INObjectCollection_10002f2a8);
      puVar5 = puVar8;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar8,uVar4);
      func_0x00010001f480(puVar21);
      _objc_release(puVar5);
      (*param_2)(puVar21,0);
      _swift_bridgeObjectRelease(puVar15);
      _swift_bridgeObjectRelease(puVar8);
      _objc_release(param_1);
      _objc_release(puVar21);
      return;
    }
  }
  puVar15 = PTR__OBJC_CLASS___INObjectCollection_10002f2a8;
  _objc_allocWithZone(PTR__OBJC_CLASS___INObjectCollection_10002f2a8);
  uVar16 = 0;
  FUN_100013d2c(0);
  puVar21 = PTR___swiftEmptyArrayStorage_1000283a0;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
            (PTR___swiftEmptyArrayStorage_1000283a0,uVar16);
  func_0x00010001f480(puVar15);
  _objc_release(puVar21);
  (*param_2)(puVar15,0);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(puVar15);
  return;
}



/* Entry: 10000f550; end: 10000f573;  */

void FUN_10000f550(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010001e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028400)();
  return;
}



/* Entry: 10000f574; end: 10000f5b3;  */

void FUN_10000f574(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  long lVar7;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = param_1;
  puVar6 = puVar1;
  func_0x00010001f820(param_1,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar7 = param_1;
    func_0x00010001f680();
    if ((int)lVar7 == 0) {
      _objc_release(lVar3);
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      FUN_100013d2c();
      func_0x00010001fdc0();
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        lVar7 = 0;
      }
      else {
        lVar7 = param_1;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        _objc_release(param_1);
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar7,puVar6);
        _swift_bridgeObjectRelease(puVar6);
      }
      func_0x00010001f440();
      _objc_release(lVar7);
      _objc_release(lVar3);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar2);
      func_0x00010001fb20(uVar4);
      _objc_release(uVar5);
    }
  }
  uVar5 = *puVar1;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar5);
  return;
}



/* Entry: 10000f5b4; end: 10000f5f3;  */

void FUN_10000f5b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10000f5f4; end: 10000f663;  */

void FUN_10000f5f4(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_1000284a0)();
  return;
}



/* Entry: 10000f664; end: 10000f6df; -[_TtC28SnapchatIntentsExtension_lib27FriendLocationIntentHandler resolveFriendForFriendLocation:withCompletion:] */

void FUN_10000f664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __Block_copy(param_4);
  __Block_copy();
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10000f8f8(param_3,param_1,param_4);
  __Block_release(param_4);
  __Block_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_1);
  return;
}



/* Entry: 10000f6e0; end: 10000f7c7; -[_TtC28SnapchatIntentsExtension_lib27FriendLocationIntentHandler provideFriendOptionsCollectionForFriendLocation:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000f6e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  __Block_copy();
  puVar1 = &UNK_100028758;
  _swift_allocObject(&UNK_100028758,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = (undefined8 *)(param_1 + _DAT_100030760);
  FUN_10000f8a8(puVar2,puVar2[3]);
  uVar3 = *puVar2;
  _objc_retain(param_1);
  FUN_10000eaec(uVar3,FUN_10000f8f0,puVar1);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_1);
  return;
}



/* Entry: 10000f7c8; end: 10000f81b; -[_TtC28SnapchatIntentsExtension_lib27FriendLocationIntentHandler defaultFriendForFriendLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000f7c8(long param_1)

{
  long lVar1;
  
  FUN_10000f8a8(param_1 + _DAT_100030760,*(undefined8 *)(param_1 + _DAT_100030760 + 0x18));
  _objc_retain(param_1);
  lVar1 = param_1;
  FUN_10000cee4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010001e6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000280d8)(lVar1);
  return;
}



/* Entry: 10000f81c; end: 10000f877; -[_TtC28SnapchatIntentsExtension_lib27FriendLocationIntentHandler init] */

void FUN_10000f81c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatIntentsExtension_lib.FriendLocationIntentHandler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10000f848);
  (*pcVar1)();
}



/* Entry: 10000f878; end: 10000f887; -[_TtC28SnapchatIntentsExtension_lib27FriendLocationIntentHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000f878(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_100030760))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010000fa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028480)(*(undefined8 *)(param_1 + _DAT_100030760));
  return;
}



/* Entry: 10000f888; end: 10000f8a7;  */

void FUN_10000f888(void)

{
  _objc_opt_self(&PTR_PTR_10002f640);
  return;
}



/* Entry: 10000f8a8; end: 10000f8cb;  */

long * FUN_10000f8a8(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 10000f8cc; end: 10000f8ef;  */

void FUN_10000f8cc(void)

{
  long unaff_x20;
  
  __Block_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028400)();
  return;
}



/* Entry: 10000f8f0; end: 10000f8f7;  */

void FUN_10000f8f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_2);
  return;
}



/* Entry: 10000f8f8; end: 10000fa37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10000f8f8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010001f260();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_2 = param_2 + _DAT_100030760;
    FUN_10000f8a8(param_2,*(undefined8 *)(param_2 + 0x18));
    FUN_10000cee4();
    if (param_2 == 0) {
      FUN_100013d2c();
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      uVar1 = 0x746c7561666564;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x746c7561666564,0xe700000000000000);
      uVar2 = 0x7461686370616e53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7461686370616e53,0xe800000000000000);
      func_0x00010001f440(param_2);
      _objc_release(uVar1);
      _objc_release(uVar2);
    }
    FUN_1000141a8(0);
    lVar3 = param_2;
    FUN_100013dfc(param_2);
    _objc_release(param_2);
    (**(code **)(param_3 + 0x10))(param_3,lVar3);
  }
  else {
    FUN_1000141a8(0);
    lVar3 = param_1;
    FUN_100013dfc(param_1);
    (**(code **)(param_3 + 0x10))(param_3,lVar3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(lVar3);
  return;
}



/* Entry: 10000fa38; end: 10000fadf;  */

void FUN_10000fa38(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010000fa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028480)(*param_1);
  return;
}



/* Entry: 10000fae0; end: 10000fb73;  */

void FUN_10000fae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10001479c();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,0xe300000000000000);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  func_0x00010001f440();
  _objc_release(param_2);
  _objc_release(param_3);
  *param_5 = uVar1;
  return;
}



/* Entry: 10000fb74; end: 10000fbb7;  */

void FUN_10000fb74(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000283f8)();
  return;
}



/* Entry: 10000fbb8; end: 10000fbff;  */

void FUN_10000fbb8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100028168)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10000fc00; end: 10000fd93;  */

void FUN_10000fc00(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  FUN_1000156c4(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x100030870;
      param_3 = (long *)&UNK_100021aa0;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    _swift_getTypeByMangledNameInContext(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10000fd94; end: 10000fdb3;  */

void FUN_10000fd94(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 10000fdb4; end: 10000fdd3;  */

bool FUN_10000fdb4(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000fed0);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar2 = uVar4;
      FUN_100011af8(uVar4,param_2,FUN_100013d2c,0x646e656972464c46,0xe800000000000000);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000fecc);
      (*pcVar1)();
    }
    FUN_100013d2c(0);
    uVar3 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,param_1);
    _objc_release(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 10000fdd4; end: 10000fee3;  */

bool FUN_10000fdd4(undefined8 param_1,ulong param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = param_2 & 0xffffffffffffff8;
  if (param_2 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar5 = uVar6;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar5 == uVar4) break;
    if ((param_2 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar6 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10000fed0);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(param_2 + uVar4 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar2 = uVar4;
      FUN_100011af8(uVar4,param_2,param_3,param_4,param_5);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10000fecc);
      (*pcVar1)();
    }
    (*param_3)(0);
    uVar3 = uVar2;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar2,param_1);
    _objc_release(uVar2);
    uVar2 = uVar4 + 1;
  } while ((uVar3 & 1) == 0);
  return uVar5 != uVar4;
}



/* Entry: 10000fee4; end: 10000ffff;  */

void FUN_10000fee4(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  if ((((int)uVar1 == 0) || ((long)uVar4 < 0)) || ((uVar4 >> 0x3e & 1) != 0)) {
    FUN_100012fe8(uVar4,0x10000fbe4,0x1000117fc);
  }
  uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  lStack_50 = (uVar4 & 0xffffffffffffff8) + 0x20;
  uVar1 = uVar5;
  uStack_48 = uVar5;
  __ss22_minimumMergeRunLengthyS2iF();
  if ((long)uVar1 < (long)uVar5) {
    puVar6 = (undefined *)(uVar5 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_1000283a0;
    if (1 < uVar5) {
      uVar2 = 0;
      FUN_10001479c(0);
      puVar3 = puVar6;
      __ss15ContiguousArrayV28_allocateBufferUninitialized15minimumCapacitys01_abD0VyxGSi_tFZ
                (puVar6,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar6;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar6;
    FUN_100011e60(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release(puVar3);
  }
  else if (uVar5 != 0) {
    FUN_1000124a4(0,uVar5,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 100010000; end: 100010ecb;  */

void FUN_100010000(code *param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined *puStack_118;
  undefined *puStack_110;
  ulong uStack_e0;
  undefined *puStack_d0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  lVar20 = *(long *)(unaff_x20 + 0x20);
  if (lVar20 != 0) {
    puVar3 = *(undefined **)(unaff_x20 + 0x18);
    puVar4 = puVar3;
    FUN_10000c1b8(puVar3,lVar20);
    if (puVar4 != (undefined *)0x0) {
      puVar22 = puVar4;
      func_0x00010001ed20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar22 != (undefined *)0x0) {
        uVar5 = 0;
        FUN_1000137c4(0,0x100030748,&PTR_PTR_10002f2b0);
        puVar9 = puVar22;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar22,uVar5)
        ;
        _objc_release(puVar22);
      }
      puVar22 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar19 = *(undefined **)(puVar22 + 0x10);
      }
      else {
        puVar19 = puVar22;
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar19 = puVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar14 = (undefined *)0x2;
      _swift_retain_n(unaff_x20,2);
      if (puVar19 == (undefined *)0x0) {
        puStack_118 = PTR___swiftEmptyArrayStorage_1000283a0;
      }
      else {
        puStack_118 = PTR___swiftEmptyArrayStorage_1000283a0;
        puVar11 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar9 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar22 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e5c);
                (*pcVar2)();
              }
              puVar6 = *(undefined **)(puVar9 + (long)puVar11 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar6 = puVar11;
              puVar14 = puVar9;
              FUN_10001191c(puVar11,puVar9,&PTR_PTR_10002f2b0,0x100030748);
            }
            puVar10 = puVar11 + 1;
            if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e58);
              (*pcVar2)();
            }
            puVar7 = puVar6;
            func_0x00010001f820();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 != (undefined *)0x0) break;
LAB_100010104:
            _objc_release(puVar6);
            puVar11 = puVar11 + 1;
            if (puVar10 == puVar19) goto LAB_100010364;
          }
          puVar15 = puVar6;
          func_0x00010001f680();
          if ((int)puVar15 == 0) {
            _objc_release(puVar6);
            puVar6 = puVar7;
            goto LAB_100010104;
          }
          uVar5 = 0;
          FUN_10001479c();
          puVar11 = puVar6;
          func_0x00010001fdc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 == (undefined *)0x0) {
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            puVar15 = (undefined *)0x0;
          }
          else {
            puVar15 = puVar11;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar11);
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar15,puVar14);
            _swift_bridgeObjectRelease(puVar14);
          }
          puVar14 = (undefined *)0x100030758;
          func_0x00010001f440();
          _objc_release(puVar15);
          _objc_release(puVar7);
          puVar11 = puVar3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar3,lVar20);
          func_0x00010001fb20(uVar5);
          _objc_release(puVar11);
          FUN_1000137c4(0,0x100030758,&PTR__OBJC_CLASS___NSNumber_10002f348);
          uVar12 = 0;
          __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(0);
          func_0x00010001fba0(uVar5);
          _objc_release(puVar6);
          _objc_release(uVar12);
          puVar11 = puStack_118;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if (((((ulong)puVar11 & 1) == 0) || ((long)puStack_118 < 0)) ||
             (puVar11 = puStack_118, ((ulong)puStack_118 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_118 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puStack_118 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puStack_118 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_118) {
                puVar14 = puStack_118;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar14 = puVar14 + 1;
            puVar11 = (undefined *)0x0;
            FUN_100011548(0,puVar14,1,puStack_118,0x10000fbe4,0x1000117fc);
          }
          uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar16 + 0x10);
          puVar6 = (undefined *)(uVar21 + 1);
          puStack_118 = puVar11;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar21) {
            puStack_118 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            puVar14 = puVar6;
            FUN_100011548(puStack_118,puVar6,1,puVar11,0x10000fbe4,0x1000117fc);
            uVar16 = (ulong)puStack_118 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar16 + 0x10) = puVar6;
          *(undefined8 *)(uVar16 + uVar21 * 8 + 0x20) = uVar5;
          puVar11 = puVar10;
        } while (puVar10 != puVar19);
      }
LAB_100010364:
      _swift_bridgeObjectRelease(puVar9);
      _swift_release_n(unaff_x20,2);
      puVar9 = puVar4;
      func_0x00010001f9e0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar9 != (undefined *)0x0) {
        uVar5 = 0;
        FUN_1000137c4(0,0x100030750,&PTR_PTR_10002f2d0);
        puVar22 = puVar9;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar9,uVar5);
        _objc_release(puVar9);
      }
      if ((ulong)puVar22 >> 0x3e == 0) {
        puStack_d0 = *(undefined **)(((ulong)puVar22 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puStack_d0 = (undefined *)((ulong)puVar22 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar22) {
          puStack_d0 = puVar22;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      uStack_e0 = (ulong)puVar22 & 0xffffffffffffff8;
      _swift_retain_n(unaff_x20,2);
      puStack_110 = PTR___swiftEmptyArrayStorage_1000283a0;
      puVar9 = (undefined *)0x0;
      while (puStack_d0 != puVar9) {
        if (((ulong)puVar22 & 0xc000000000000001) == 0) {
          if (*(undefined **)(uStack_e0 + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e4c);
            (*pcVar2)();
          }
          puVar19 = *(undefined **)(puVar22 + (long)puVar9 * 8 + 0x20);
          _objc_retain(puVar19);
        }
        else {
          puVar19 = puVar9;
          FUN_10001191c(puVar9,puVar22,&PTR_PTR_10002f2d0,0x100030750);
        }
        if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e48);
          (*pcVar2)();
        }
        puVar15 = puVar9 + 1;
        alStack_80[0] = 0;
        puVar14 = &UNK_1000287b8;
        _swift_allocObject(&UNK_1000287b8,0x20,7);
        *(long **)(puVar14 + 0x10) = alStack_80;
        *(long *)(puVar14 + 0x18) = unaff_x20;
        puVar11 = &UNK_1000287e0;
        _swift_allocObject(&UNK_1000287e0,0x20,7);
        *(code **)(puVar11 + 0x10) = FUN_100013078;
        *(undefined **)(puVar11 + 0x18) = puVar14;
        puVar7 = PTR___NSConcreteStackBlock_1000281e0;
        uStack_90 = 0x100013818;
        puStack_b0 = PTR___NSConcreteStackBlock_1000281e0;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x100013808;
        puStack_98 = &UNK_1000287f8;
        ppuVar13 = &puStack_b0;
        puStack_88 = puVar11;
        __Block_copy(ppuVar13);
        puVar6 = puStack_88;
        _swift_retain(unaff_x20);
        _swift_retain(puVar11);
        _swift_release(puVar6);
        puVar6 = &UNK_100028830;
        _swift_allocObject(&UNK_100028830,0x20,7);
        *(long **)(puVar6 + 0x10) = alStack_80;
        *(long *)(puVar6 + 0x18) = unaff_x20;
        puVar10 = &UNK_100028858;
        _swift_allocObject(&UNK_100028858,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_1000130d0;
        *(undefined **)(puVar10 + 0x18) = puVar6;
        uStack_90 = 0x1000130fc;
        puStack_b0 = puVar7;
        uStack_a8 = 0x42000000;
        uStack_a0 = 0x10001380c;
        puStack_98 = &UNK_100028870;
        ppuVar8 = &puStack_b0;
        puStack_88 = puVar10;
        __Block_copy(ppuVar8);
        puVar7 = puStack_88;
        _swift_retain(unaff_x20);
        _swift_retain(puVar10);
        _swift_release(puVar7);
        func_0x00010001f760(puVar19);
        __Block_release(ppuVar8);
        __Block_release(ppuVar13);
        lVar1 = alStack_80[0];
        _swift_release(puVar14);
        puVar14 = puVar11;
        _swift_isEscapingClosureAtFileLocation(puVar11,"",0x4b,0x44,0x27,1);
        _swift_release(puVar6);
        _swift_release(puVar11);
        if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e50);
          (*pcVar2)();
        }
        puVar14 = puVar10;
        _swift_isEscapingClosureAtFileLocation(puVar10,"",0x4b,0x46,0x12,1);
        _objc_release(puVar19);
        _swift_release(puVar10);
        if (((ulong)puVar14 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e54);
          (*pcVar2)();
        }
        puVar9 = puVar9 + 1;
        if (lVar1 != 0) {
          puVar9 = puStack_110;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar9 == 0) || ((long)puStack_110 < 0)) ||
             (((ulong)puStack_110 >> 0x3e & 1) != 0)) {
            if ((ulong)puStack_110 >> 0x3e == 0) {
              puVar9 = *(undefined **)(((ulong)puStack_110 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar9 = (undefined *)((ulong)puStack_110 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puStack_110) {
                puVar9 = puStack_110;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar9);
            }
            puVar19 = (undefined *)0x0;
            FUN_100011548(0,puVar9 + 1,1,puStack_110,0x10000fbe4,0x1000117fc);
            puStack_110 = puVar19;
          }
          uVar16 = (ulong)puStack_110 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar16 + 0x10);
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar21) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            FUN_100011548(puVar9,uVar21 + 1,1,puStack_110,0x10000fbe4,0x1000117fc);
            uVar16 = (ulong)puVar9 & 0xffffffffffffff8;
            puStack_110 = puVar9;
          }
          *(ulong *)(uVar16 + 0x10) = uVar21 + 1;
          *(long *)(uVar16 + uVar21 * 8 + 0x20) = lVar1;
          puVar9 = puVar15;
        }
      }
      _swift_bridgeObjectRelease(puVar22);
      _swift_release_n(unaff_x20,2);
      puVar22 = puVar4;
      func_0x00010001f280();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar22 != (undefined *)0x0) {
        uVar5 = 0;
        FUN_1000137c4(0,0x100030748,&PTR_PTR_10002f2b0);
        puVar9 = puVar22;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar22,uVar5)
        ;
        _objc_release(puVar22);
      }
      puVar22 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar19 = *(undefined **)(puVar22 + 0x10);
      }
      else {
        puVar19 = puVar22;
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar19 = puVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar14 = (undefined *)0x2;
      _swift_retain_n(unaff_x20,2);
      puVar11 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar19 != (undefined *)0x0) {
        puVar6 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar9 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar22 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e64);
                (*pcVar2)();
              }
              puVar10 = *(undefined **)(puVar9 + (long)puVar6 * 8 + 0x20);
              _objc_retain();
            }
            else {
              puVar10 = puVar6;
              puVar14 = puVar9;
              FUN_10001191c(puVar6,puVar9,&PTR_PTR_10002f2b0,0x100030748);
            }
            puVar7 = puVar6 + 1;
            if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e60);
              (*pcVar2)();
            }
            puVar15 = puVar10;
            func_0x00010001f820();
            _objc_retainAutoreleasedReturnValue();
            if (puVar15 != (undefined *)0x0) break;
LAB_1000107f0:
            _objc_release(puVar10);
            puVar6 = puVar6 + 1;
            if (puVar7 == puVar19) goto LAB_100010a44;
          }
          puVar18 = puVar10;
          func_0x00010001f680();
          if ((int)puVar18 == 0) {
            _objc_release(puVar10);
            puVar10 = puVar15;
            goto LAB_1000107f0;
          }
          uVar5 = 0;
          FUN_10001479c();
          puVar6 = puVar10;
          func_0x00010001fdc0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar6 == (undefined *)0x0) {
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            puVar18 = (undefined *)0x0;
          }
          else {
            puVar18 = puVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            _objc_release(puVar6);
            _swift_getObjCClassFromMetadata();
            _objc_allocWithZone();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar18,puVar14);
            _swift_bridgeObjectRelease(puVar14);
          }
          func_0x00010001f440();
          _objc_release(puVar18);
          _objc_release(puVar15);
          puVar14 = puVar3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar3,lVar20);
          func_0x00010001fb20(uVar5);
          _objc_release(puVar14);
          puVar14 = (undefined *)0x100030758;
          FUN_1000137c4(0,0x100030758,&PTR__OBJC_CLASS___NSNumber_10002f348);
          uVar12 = 0;
          __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(0);
          func_0x00010001fba0(uVar5);
          _objc_release(puVar10);
          _objc_release(uVar12);
          puVar6 = puVar11;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if (((((ulong)puVar6 & 1) == 0) || ((long)puVar11 < 0)) ||
             (puVar6 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar11 >> 0x3e == 0) {
              puVar14 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar14 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar11) {
                puVar14 = puVar11;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar14 = puVar14 + 1;
            puVar6 = (undefined *)0x0;
            FUN_100011548(0,puVar14,1,puVar11,0x10000fbe4,0x1000117fc);
          }
          uVar16 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar16 + 0x10);
          puVar10 = (undefined *)(uVar21 + 1);
          puVar11 = puVar6;
          if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar21) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar16 + 0x18));
            puVar14 = puVar10;
            FUN_100011548(puVar11,puVar10,1,puVar6,0x10000fbe4,0x1000117fc);
            uVar16 = (ulong)puVar11 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar16 + 0x10) = puVar10;
          *(undefined8 *)(uVar16 + uVar21 * 8 + 0x20) = uVar5;
          puVar6 = puVar7;
        } while (puVar7 != puVar19);
      }
LAB_100010a44:
      _swift_bridgeObjectRelease(puVar9);
      _swift_release_n(unaff_x20,2);
      puVar22 = puVar4;
      puStack_b0 = puVar11;
      func_0x00010001f320();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar22 != (undefined *)0x0) {
        uVar5 = 0;
        FUN_1000137c4(0,0x100030948,&PTR_PTR_10002f2c0);
        puVar9 = puVar22;
        __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(puVar22,uVar5)
        ;
        _objc_release(puVar22);
      }
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar22 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar22 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          puVar22 = puVar9;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      puVar19 = (undefined *)0x2;
      _swift_retain_n(unaff_x20);
      puVar14 = PTR___swiftEmptyArrayStorage_1000283a0;
      if (puVar22 != (undefined *)0x0) {
        uVar21 = 0;
        do {
          if (((ulong)puVar9 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e6c);
              (*pcVar2)();
            }
            uVar16 = *(ulong *)(puVar9 + uVar21 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar16 = uVar21;
            puVar19 = puVar9;
            func_0x000100011c9c();
          }
          puVar11 = (undefined *)(uVar21 + 1);
          if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100010e68);
            (*pcVar2)();
          }
          uVar17 = uVar16;
          func_0x00010001f2e0();
          _objc_retainAutoreleasedReturnValue();
          if (uVar17 == 0) {
            uVar23 = 0;
            puVar10 = (undefined *)0x0;
            puVar6 = puVar19;
          }
          else {
            uVar23 = uVar17;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            puVar6 = puVar19;
            _objc_release(uVar17);
            puVar10 = puVar19;
          }
          uVar17 = uVar16;
          func_0x00010001f300();
          _objc_retainAutoreleasedReturnValue();
          if (uVar17 == 0) {
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
            _swift_bridgeObjectRelease(puVar6);
            if (puVar10 == (undefined *)0x0) goto LAB_100010bac;
LAB_100010b70:
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar23,puVar10);
            _swift_bridgeObjectRelease(puVar10);
          }
          else {
            if (puVar10 != (undefined *)0x0) goto LAB_100010b70;
LAB_100010bac:
            uVar23 = 0;
          }
          uVar5 = 0;
          FUN_10001479c();
          _swift_getObjCClassFromMetadata();
          _objc_allocWithZone();
          func_0x00010001f440();
          _objc_release(uVar23);
          _objc_release(uVar17);
          puVar19 = puVar3;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar3,lVar20);
          func_0x00010001fb20(uVar5);
          _objc_release(puVar19);
          puVar19 = (undefined *)0x100030758;
          FUN_1000137c4(0,0x100030758,&PTR__OBJC_CLASS___NSNumber_10002f348);
          uVar12 = 1;
          __sSo8NSNumberC10FoundationE14booleanLiteralABSb_tcfC(1);
          func_0x00010001fba0(uVar5);
          _objc_release(uVar16);
          _objc_release(uVar12);
          puVar6 = puVar14;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar6 == 0) || ((long)puVar14 < 0)) ||
             (puVar6 = puVar14, ((ulong)puVar14 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar14 >> 0x3e == 0) {
              puVar19 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar19 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar14) {
                puVar19 = puVar14;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg();
            }
            puVar19 = puVar19 + 1;
            puVar6 = (undefined *)0x0;
            FUN_100011548(0,puVar19,1,puVar14,0x10000fbe4,0x1000117fc);
          }
          uVar17 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar16 = *(ulong *)(uVar17 + 0x10);
          puVar10 = (undefined *)(uVar16 + 1);
          puVar14 = puVar6;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar16) {
            puVar14 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            puVar19 = puVar10;
            FUN_100011548(puVar14,puVar10,1,puVar6,0x10000fbe4,0x1000117fc);
            uVar17 = (ulong)puVar14 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar17 + 0x10) = puVar10;
          *(undefined8 *)(uVar17 + uVar16 * 8 + 0x20) = uVar5;
          uVar21 = uVar21 + 1;
        } while (puVar11 != puVar22);
      }
      _swift_bridgeObjectRelease(puVar9);
      _swift_release_n(unaff_x20,2);
      func_0x000100010fe4(puVar14);
      _swift_bridgeObjectRetain(puStack_118);
      _swift_bridgeObjectRetain(puStack_110);
      ppuVar13 = &puStack_b0;
      FUN_100013290(ppuVar13,puStack_118,puStack_110);
      _swift_bridgeObjectRelease(puStack_118);
      _swift_bridgeObjectRelease(puStack_110);
      if ((ulong)puStack_b0 >> 0x3e == 0) {
        puVar3 = *(undefined **)(((ulong)puStack_b0 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar3 = (undefined *)((ulong)puStack_b0 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puStack_b0) {
          puVar3 = puStack_b0;
        }
        __ss18_CocoaArrayWrapperV8endIndexSivg();
      }
      if ((long)ppuVar13 <= (long)puVar3) {
        func_0x0001000136cc(ppuVar13,puVar3,0x10000fbe4,0x1000117fc,FUN_10001479c);
        FUN_10000fee4(&puStack_b0);
        func_0x000100010fe4(puStack_110);
        puVar3 = puStack_b0;
        _swift_bridgeObjectRetain(puStack_b0);
        func_0x000100010fe4();
        (*param_1)(puStack_118,0);
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(puStack_118);
        _objc_release(puVar4);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100010ecc);
      (*pcVar2)();
    }
  }
  (*param_1)(0,1);
  return;
}



/* Entry: 100010ecc; end: 1000113bb;  */

void FUN_100010ecc(ulong param_1)

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
    FUN_10001146c(uVar2 + uVar4,1,0x10000fbc8,FUN_100011704);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_100012e64(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,FUN_100013d2c,
                  0x646e656972464c46,0xe800000000000000);
    _swift_bridgeObjectRelease();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100010fe0);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100010fe4);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100010fdc);
  (*pcVar1)();
}



/* Entry: 1000113bc; end: 1000113f3;  */

void FUN_1000113bc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  _objc_retain(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_2);
  return;
}



/* Entry: 1000113f4; end: 10001143f;  */

void FUN_1000113f4(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010001e8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000283f8)();
  return;
}



/* Entry: 100011440; end: 10001144b;  */

void FUN_100011440(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001e79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_100028168)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10001144c; end: 10001146b;  */

void FUN_10001144c(void)

{
  FUN_100010000();
  return;
}



/* Entry: 10001146c; end: 100011533;  */

void FUN_10001146c(long param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
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
  FUN_100011548();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 100011534; end: 100011547;  */

ulong FUN_100011534(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100011684);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100011684(uVar2,uVar4,0x10000fbc8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100011680);
      (*pcVar1)();
    }
    FUN_100011704(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 100011548; end: 100011683;  */

ulong FUN_100011548(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   code *param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100011684);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100011684(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100011680);
      (*pcVar1)();
    }
    (*param_6)(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      _memmove(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar3;
}



/* Entry: 100011684; end: 100011703;  */

undefined * FUN_100011684(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_1000283a0;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100011704; end: 1000118f3;  */

long FUN_100011704(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000117f8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000117fc);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_100013d2c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        __ss12_ArrayBufferV18_typeCheckSlowPathyySiF(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_100013d2c(0);
      _swift_arrayInitWithCopy
                (param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,uVar4)
      ;
      _swift_bridgeObjectRelease(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000117f4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_100028338)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1000118f4; end: 10001191b;  */

ulong FUN_1000118f4(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011a00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011a04);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    puVar4 = PTR_PTR_10002f2d0;
    _objc_opt_self(PTR_PTR_10002f2d0);
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
    puVar4 = PTR_PTR_10002f2d0;
    _objc_opt_self(PTR_PTR_10002f2d0);
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
  FUN_1000137c4(0,0x100030750,&PTR_PTR_10002f2d0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100011ad8);
  (*pcVar2)();
}



/* Entry: 10001191c; end: 100011ad7;  */

ulong FUN_10001191c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011a00);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011a04);
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
  FUN_1000137c4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100011ad8);
  (*pcVar2)();
}



/* Entry: 100011ad8; end: 100011af7;  */

ulong FUN_100011ad8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011be0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011be4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_100013d2c(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
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
    uVar3 = 0;
    FUN_100013d2c(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0x646e656972464c46,0xe800000000000000);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100011c9c);
  (*pcVar2)();
}



/* Entry: 100011af8; end: 100011e5f;  */

ulong FUN_100011af8(ulong param_1,ulong param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011be0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100011be4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    (*param_3)(0);
    uVar4 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
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
    uVar3 = 0;
    (*param_3)(0);
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(param_4,param_5);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar3 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100011c9c);
  (*pcVar2)();
}



/* Entry: 100011e60; end: 1000124a3;  */

void FUN_100011e60(long *param_1,long param_2,long *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long unaff_x21;
  long lVar25;
  ulong *puVar26;
  ulong *puVar27;
  ulong uStack_68;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_1000283a0;
  lVar14 = param_3[1];
  if (0 < lVar14) {
    lVar16 = 0;
    do {
      lVar12 = lVar16 + 1;
      lVar25 = param_2;
      if (lVar12 < lVar14) {
        lVar20 = *param_3;
        uVar3 = *(ulong *)(lVar20 + lVar12 * 8);
        uVar23 = *(ulong *)(lVar20 + lVar16 * 8);
        _objc_retain();
        _objc_retain();
        uVar8 = uVar3;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uStack_68 = uVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar12 = param_2;
        _objc_release(uVar8);
        uVar8 = uVar23;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar8;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar25 = lVar12;
        _objc_release(uVar8);
        if (uStack_68 == uVar4 && param_2 == lVar12) {
          uStack_68 = 0;
        }
        else {
          lVar25 = param_2;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uStack_68,param_2,uVar4,lVar12,1);
          uStack_68 = uStack_68 & 0xffffffff;
        }
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(lVar12);
        _objc_release(uVar3);
        _objc_release(uVar23);
        lVar12 = lVar16 + 2;
        if (lVar12 < lVar14) {
          plVar21 = (long *)(lVar20 + lVar16 * 8 + 0x10);
          lVar15 = lVar25;
          lVar20 = lVar12;
          do {
            lVar12 = lVar20;
            lVar20 = plVar21[-1];
            lVar22 = *plVar21;
            _objc_retain();
            _objc_retain();
            lVar25 = lVar22;
            func_0x00010001f0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar25;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            lVar13 = lVar15;
            _objc_release(lVar25);
            lVar6 = lVar20;
            func_0x00010001f0c0();
            _objc_retainAutoreleasedReturnValue();
            lVar7 = lVar6;
            __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
            lVar25 = lVar13;
            _objc_release(lVar6);
            if (lVar5 == lVar7 && lVar15 == lVar13) {
              _objc_release(lVar22);
              _objc_release(lVar20);
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(lVar13);
              if ((uStack_68 & 1) != 0) goto LAB_1000120d4;
            }
            else {
              lVar25 = lVar15;
              __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (lVar5,lVar15,lVar7,lVar13,1);
              _objc_release(lVar22);
              _objc_release(lVar20);
              _swift_bridgeObjectRelease(lVar15);
              _swift_bridgeObjectRelease(lVar13);
              if ((((uint)uStack_68 ^ (uint)lVar5) & 1) != 0) break;
            }
            plVar21 = plVar21 + 1;
            lVar20 = lVar12 + 1;
            lVar15 = lVar25;
            lVar12 = lVar14;
          } while (lVar14 != lVar20);
        }
        if ((uStack_68 & 1) != 0) {
LAB_1000120d4:
          if (lVar12 < lVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100012478);
            (*pcVar1)();
          }
          if (lVar16 < lVar12) {
            lVar15 = *param_3;
            puVar17 = (undefined8 *)(lVar15 + lVar12 * 8);
            puVar18 = (undefined8 *)(lVar15 + lVar16 * 8);
            lVar20 = lVar12;
            lVar14 = lVar16;
            do {
              puVar17 = puVar17 + -1;
              lVar20 = lVar20 + -1;
              if (lVar14 != lVar20) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100012498);
                  (*pcVar1)();
                }
                uVar19 = *puVar18;
                *puVar18 = *puVar17;
                *puVar17 = uVar19;
              }
              lVar14 = lVar14 + 1;
              puVar18 = puVar18 + 1;
            } while (lVar14 < lVar20);
          }
        }
      }
      lVar14 = param_3[1];
      lVar20 = lVar12;
      if (lVar12 < lVar14) {
        if (SBORROW8(lVar12,lVar16)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100012474);
          (*pcVar1)();
        }
        if (lVar12 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10001247c);
            (*pcVar1)();
          }
          lVar15 = lVar16 + param_4;
          if (lVar14 <= lVar16 + param_4) {
            lVar15 = lVar14;
          }
          if (lVar15 < lVar16) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100012480);
            (*pcVar1)();
          }
          if (lVar12 != lVar15) {
            lVar14 = *param_3;
            puVar26 = (ulong *)(lVar14 + lVar12 * 8 + -8);
            lVar22 = lVar16 - lVar12;
            do {
              uVar8 = *(ulong *)(lVar14 + lVar12 * 8);
              lVar5 = lVar25;
              lVar20 = lVar22;
              puVar27 = puVar26;
              do {
                uVar24 = *puVar27;
                _objc_retain();
                _objc_retain();
                uVar4 = uVar8;
                func_0x00010001f0c0();
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar4;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar6 = lVar5;
                _objc_release(uVar4);
                uVar4 = uVar24;
                func_0x00010001f0c0();
                _objc_retainAutoreleasedReturnValue();
                uVar23 = uVar4;
                __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
                lVar25 = lVar6;
                _objc_release(uVar4);
                if (uVar3 == uVar23 && lVar5 == lVar6) {
                  _objc_release(uVar8);
                  _objc_release(uVar24);
                  _swift_bridgeObjectRelease(lVar5);
                  _swift_bridgeObjectRelease(lVar6);
                  break;
                }
                lVar25 = lVar5;
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar3,lVar5,uVar23,lVar6,1);
                _objc_release(uVar8);
                _objc_release(uVar24);
                _swift_bridgeObjectRelease(lVar5);
                _swift_bridgeObjectRelease(lVar6);
                if ((uVar3 & 1) == 0) break;
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100012484);
                  (*pcVar1)();
                }
                uVar4 = *puVar27;
                uVar8 = puVar27[1];
                *puVar27 = uVar8;
                puVar27[1] = uVar4;
                bVar2 = lVar20 != -1;
                lVar20 = lVar20 + 1;
                lVar5 = lVar25;
                puVar27 = puVar27 + -1;
              } while (bVar2);
              lVar12 = lVar12 + 1;
              puVar26 = puVar26 + 1;
              lVar22 = lVar22 + -1;
              lVar20 = lVar15;
            } while (lVar12 != lVar15);
          }
        }
      }
      puVar11 = puStack_58;
      if (lVar20 < lVar16) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100012468);
        (*pcVar1)();
      }
      puVar9 = puStack_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100012894(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar8 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar8) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100012894(puVar11,uVar8 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar8 + 1;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar11 + uVar8 * 0x10 + 0x28) = lVar20;
      param_2 = *param_1;
      puStack_58 = puVar11;
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10001249c);
        (*pcVar1)();
      }
      FUN_10001262c(&puStack_58,param_2,param_3);
      puVar11 = puStack_58;
      if (unaff_x21 != 0) goto LAB_100012438;
      lVar14 = param_3[1];
      lVar16 = lVar20;
    } while (lVar20 < lVar14);
  }
  puVar11 = puStack_58;
  lVar14 = *param_1;
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000124a4);
    (*pcVar1)();
  }
  puVar9 = puStack_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100012e50();
  }
  uVar8 = *(ulong *)(puVar11 + 0x10);
  while (puStack_58 = puVar11, 1 < uVar8) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000124a0);
      (*pcVar1)();
    }
    lVar20 = uVar8 - 1;
    lVar25 = *(long *)(puVar11 + uVar8 * 0x10);
    lVar12 = *(long *)(puVar11 + lVar20 * 0x10 + 0x28);
    FUN_100012994(lVar16 + lVar25 * 8,lVar16 + *(long *)(puVar11 + lVar20 * 0x10 + 0x20) * 8,
                  lVar16 + lVar12 * 8,lVar14);
    if (unaff_x21 != 0) break;
    if (lVar12 < lVar25) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001246c);
      (*pcVar1)();
    }
    puVar9 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100012e50();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar8 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100012470);
      (*pcVar1)();
    }
    *(long *)(puVar11 + uVar8 * 0x10) = lVar25;
    *(long *)((long)(puVar11 + uVar8 * 0x10) + 8) = lVar12;
    puStack_58 = puVar11;
    FUN_100012dc8(lVar20);
    puVar11 = puStack_58;
    uVar8 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_100012438:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Entry: 1000124a4; end: 10001262b;  */

void FUN_1000124a4(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  
  if (param_3 != param_2) {
    lVar10 = *param_4;
    puVar12 = (ulong *)(lVar10 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    lVar9 = param_2;
    do {
      uVar3 = *(ulong *)(lVar10 + param_3 * 8);
      lVar7 = lVar9;
      lVar11 = param_1;
      puVar13 = puVar12;
      do {
        uVar14 = *puVar13;
        _objc_retain();
        _objc_retain();
        uVar4 = uVar3;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar8 = lVar7;
        _objc_release(uVar4);
        uVar4 = uVar14;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar4;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        lVar9 = lVar8;
        _objc_release(uVar4);
        if (uVar5 == uVar6 && lVar7 == lVar8) {
          _objc_release(uVar3);
          _objc_release(uVar14);
          _swift_bridgeObjectRelease(lVar7);
          _swift_bridgeObjectRelease(lVar8);
          break;
        }
        lVar9 = lVar7;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar5,lVar7,uVar6,lVar8,1);
        _objc_release(uVar3);
        _objc_release(uVar14);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(lVar8);
        if ((uVar5 & 1) == 0) break;
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10001262c);
          (*pcVar1)();
        }
        uVar4 = *puVar13;
        uVar3 = puVar13[1];
        *puVar13 = uVar3;
        puVar13[1] = uVar4;
        bVar2 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        lVar7 = lVar9;
        puVar13 = puVar13 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar12 = puVar12 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 10001262c; end: 100012893;  */

undefined8 FUN_10001262c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100012e50();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_100012700;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10001287c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100012764:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10001286c);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100012874);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100012854);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100012858);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100012860);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100012868);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100012700:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10001285c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100012864);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100012870);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100012878);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100012764;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100012880);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100012848);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100012894);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100012994(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10001284c);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100012e50();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100012850);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100012dc8(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 100012894; end: 100012993;  */

undefined * FUN_100012894(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100012994);
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
  puVar3 = PTR___swiftEmptyArrayStorage_1000283a0;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x100030950;
    func_0x00010000c478(0x100030950,&UNK_100021ae8);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Entry: 100012994; end: 100012dc7;  */

undefined8 FUN_100012994(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong *puVar15;
  ulong *puStack_58;
  
  lVar13 = (long)param_2 - (long)param_1;
  lVar8 = lVar13 + 7;
  if (-1 < lVar13) {
    lVar8 = lVar13;
  }
  lVar8 = lVar8 >> 3;
  lVar14 = (long)param_3 - (long)param_2;
  lVar10 = lVar14 + 7;
  if (-1 < lVar14) {
    lVar10 = lVar14;
  }
  lVar10 = lVar10 >> 3;
  if (lVar8 < lVar10) {
    if (((param_4 < param_1) || (param_1 + lVar8 <= param_4)) ||
       (puVar5 = param_2, param_4 != param_1)) {
      puVar5 = param_1;
      _memmove(param_4,param_1,lVar8 << 3);
    }
    puStack_58 = param_4 + lVar8;
    puVar7 = param_1;
    if (7 < lVar13) {
      do {
        if (param_3 <= param_2) break;
        uVar1 = *param_2;
        uVar12 = *param_4;
        _objc_retain();
        _objc_retain();
        uVar2 = uVar1;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar6 = puVar5;
        _objc_release(uVar2);
        uVar2 = uVar12;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar4 = puVar6;
        _objc_release(uVar2);
        if (uVar9 == uVar3 && puVar5 == puVar6) {
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar5);
          _swift_bridgeObjectRelease(puVar6);
LAB_100012b6c:
          puVar11 = param_4 + 1;
          puVar5 = puVar4;
          puVar6 = param_4;
        }
        else {
          puVar4 = puVar5;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,puVar5,uVar3,puVar6,1);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar5);
          _swift_bridgeObjectRelease(puVar6);
          if ((uVar9 & 1) == 0) goto LAB_100012b6c;
          puVar11 = param_4;
          puVar5 = puVar4;
          puVar6 = param_2;
          param_2 = param_2 + 1;
        }
        param_4 = puVar11;
        if (puVar7 != puVar6) {
          *puVar7 = *puVar6;
        }
        puVar7 = puVar7 + 1;
      } while (param_4 < puStack_58);
    }
  }
  else {
    puVar5 = param_2;
    if (((param_4 < param_2) || (param_2 + lVar10 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar10 << 3);
    }
    puStack_58 = param_4 + lVar10;
    puVar7 = param_2;
    if ((param_1 < param_2) && (7 < lVar14)) {
LAB_100012be8:
      puVar11 = param_2 + -1;
      puVar6 = puVar5;
      puVar4 = param_3;
      do {
        puVar15 = puStack_58 + -1;
        uVar1 = *puVar15;
        uVar12 = *puVar11;
        _objc_retain();
        _objc_retain();
        uVar2 = uVar1;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar7 = puVar6;
        _objc_release(uVar2);
        uVar2 = uVar12;
        func_0x00010001f0c0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        puVar5 = puVar7;
        _objc_release(uVar2);
        if (uVar9 == uVar3 && puVar6 == puVar7) {
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar7);
        }
        else {
          puVar5 = puVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar9,puVar6,uVar3,puVar7,1);
          _objc_release(uVar1);
          _objc_release(uVar12);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(puVar7);
          param_3 = puVar4 + -1;
          if ((uVar9 & 1) != 0) goto LAB_100012d14;
        }
        if (puStack_58 != puVar4) {
          puVar4[-1] = *puVar15;
        }
        puVar6 = puVar5;
        puVar4 = puVar4 + -1;
        puVar7 = param_2;
        puStack_58 = puVar15;
        if (puVar15 <= param_4) break;
      } while( true );
    }
  }
LAB_100012d60:
  uVar9 = (long)puStack_58 - (long)param_4;
  uVar2 = uVar9 + 7;
  if (-1 < (long)uVar9) {
    uVar2 = uVar9;
  }
  if ((puVar7 != param_4) || ((ulong *)((long)param_4 + (uVar2 & 0xfffffffffffffff8)) <= puVar7)) {
    _memmove(puVar7,param_4,((long)uVar2 >> 3) << 3);
  }
  return 1;
LAB_100012d14:
  if (puVar4 != param_2) {
    *param_3 = *puVar11;
  }
  puVar7 = puVar11;
  if ((puVar11 <= param_1) || (param_2 = puVar11, puStack_58 <= param_4)) goto LAB_100012d60;
  goto LAB_100012be8;
}



/* Entry: 100012dc8; end: 100012e4f;  */

undefined1  [16] FUN_100012dc8(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100012e50();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,lVar1 + 0x30,(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100012e50);
  (*pcVar3)();
}



/* Entry: 100012e50; end: 100012e63;  */

/* WARNING: Removing unreachable block (ram,0x0001000128b0) */
/* WARNING: Removing unreachable block (ram,0x0001000128c0) */
/* WARNING: Removing unreachable block (ram,0x000100012990) */
/* WARNING: Removing unreachable block (ram,0x0001000128cc) */
/* WARNING: Removing unreachable block (ram,0x0001000128d4) */
/* WARNING: Removing unreachable block (ram,0x00010001294c) */
/* WARNING: Removing unreachable block (ram,0x000100012954) */
/* WARNING: Removing unreachable block (ram,0x000100012958) */
/* WARNING: Removing unreachable block (ram,0x00010001295c) */
/* WARNING: Removing unreachable block (ram,0x000100012964) */

undefined * FUN_100012e50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_1000283a0;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x100030950;
    func_0x00010000c478(0x100030950,&UNK_100021ae8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  _memcpy(puVar3 + 0x20,param_1 + 0x20,lVar5 << 4);
  _swift_bridgeObjectRelease(param_1);
  return puVar3;
}



/* Entry: 100012e64; end: 100012fd3;  */

ulong FUN_100012e64(undefined8 *param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
                   undefined8 param_6)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100012fd4);
      (*pcVar1)();
    }
    if (param_3 >> 0x3e == 0) {
      lVar6 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100012fc8);
        (*pcVar1)();
      }
      uVar2 = 0;
      (*param_4)(0);
      _swift_arrayInitWithCopy(param_1,(param_3 & 0xffffffffffffff8) + 0x20,lVar6,uVar2);
    }
    else {
      uVar8 = param_3 & 0xffffffffffffff8;
      if ((param_3 & 0x8000000000000000) != 0) {
        uVar8 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      if (param_2 < (long)uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100012fcc);
        (*pcVar1)();
      }
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100012fd0);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        uVar2 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar2;
        lVar6 = uVar5 - 1;
        if (lVar6 != 0) {
          uVar4 = uVar2;
          puVar7 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar2 = *puVar7;
            *param_1 = uVar2;
            _objc_retain(uVar4);
            lVar6 = lVar6 + -1;
            uVar4 = uVar2;
            puVar7 = puVar7 + 1;
          } while (lVar6 != 0);
        }
        _objc_retain(uVar2);
      }
      else {
        uVar8 = 0;
        do {
          uVar3 = uVar8;
          FUN_100011af8(uVar8,param_3,param_4,param_5,param_6);
          param_1[uVar8] = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar5 != uVar8);
      }
    }
  }
  return param_3;
}



/* Entry: 100012fd4; end: 100012fe7;  */

void FUN_100012fd4(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
  }
  FUN_100011548(0,uVar1,0,param_1,0x10000fbc8,FUN_100011704);
  return;
}



/* Entry: 100012fe8; end: 100013053;  */

void FUN_100012fe8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar1);
  }
  FUN_100011548(0,uVar1,0,param_1,param_2,param_3);
  return;
}



/* Entry: 100013054; end: 100013077;  */

void FUN_100013054(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010001e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028400)();
  return;
}



/* Entry: 100013078; end: 1000130a3;  */

void FUN_100013078(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000100011100();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar2);
  return;
}



/* Entry: 1000130a4; end: 1000130cf;  */

void FUN_1000130a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028400)();
  return;
}



/* Entry: 1000130d0; end: 10001311b;  */

void FUN_1000130d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000100011264();
  uVar2 = *puVar1;
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(uVar2);
  return;
}



/* Entry: 10001311c; end: 100013137;  */

void FUN_10001311c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100013790);
    (*pcVar2)();
  }
  uVar4 = *unaff_x20;
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar3 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg(uVar3,param_2,0x10000fbc8,FUN_100011704);
  }
  if ((long)uVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000137b8);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000137bc);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000137c0);
    (*pcVar2)();
  }
  if (uVar4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar4 & 0xffffffffffffff8;
    if ((uVar4 & 0x8000000000000000) != 0) {
      uVar3 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (SCARRY8(uVar3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000137c4);
    (*pcVar2)();
  }
  FUN_10001146c(uVar3 + lVar1,1,0x10000fbc8,FUN_100011704);
  FUN_1000135d0(param_1,param_2,0,FUN_100013d2c);
  return;
}



/* Entry: 100013138; end: 10001328f;  */

undefined1  [16] FUN_100013138(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar8 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar8 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  uVar6 = 0;
  while( true ) {
    if (uVar8 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_10001324c;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100013278);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      _objc_retain();
    }
    else {
      uVar3 = uVar6;
      FUN_100011af8(uVar6,param_1,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
    }
    uVar4 = uVar3;
    FUN_10000fdd4();
    if ((uVar4 & 1) != 0) break;
    uVar4 = uVar3;
    FUN_10000fdd4(uVar3,param_3,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
    _objc_release(uVar3);
    if ((uVar4 & 1) != 0) goto LAB_100013248;
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10001327c);
      (*pcVar1)();
    }
  }
  _objc_release(uVar3);
LAB_100013248:
  uVar5 = 0;
LAB_10001324c:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar6;
  return auVar9;
}



/* Entry: 100013290; end: 1000135cf;  */

void FUN_100013290(ulong *param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x21;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_68;
  
  uVar9 = *param_1;
  uVar4 = uVar9;
  FUN_100013138();
  if (unaff_x21 == 0) {
    if ((param_2 & 0xff) != 1) {
      uVar10 = uVar4 + 1;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135d0);
        (*pcVar2)();
      }
      do {
        while( true ) {
          if (uVar9 >> 0x3e == 0) {
            uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar5 = uVar9 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar9) {
              uVar5 = uVar9;
            }
            __ss18_CocoaArrayWrapperV8endIndexSivg();
          }
          if (uVar10 == uVar5) {
            return;
          }
          if ((uVar9 & 0xc000000000000001) == 0) {
            if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100013594);
              (*pcVar2)();
            }
            if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100013598);
              (*pcVar2)();
            }
            uVar5 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
            _objc_retain();
          }
          else {
            uVar5 = uVar10;
            FUN_100011af8(uVar10,uVar9,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
          }
          uVar7 = uVar5;
          FUN_10000fdd4();
          if ((uVar7 & 1) != 0) break;
          uVar7 = uVar5;
          FUN_10000fdd4(uVar5,param_3,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
          _objc_release(uVar5);
          if ((uVar7 & 1) == 0) {
            if (uVar4 != uVar10) {
              if ((uVar9 & 0xc000000000000001) == 0) {
                if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135a8);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
                if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135ac);
                  (*pcVar2)();
                }
                if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135b0);
                  (*pcVar2)();
                }
                uStack_68 = *(ulong *)(uVar9 + 0x20 + uVar4 * 8);
                uVar5 = *(ulong *)(uVar9 + 0x20 + uVar10 * 8);
                _objc_retain();
                _objc_retain();
              }
              else {
                uStack_68 = uVar4;
                FUN_100011af8(uVar4,uVar9,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
                uVar5 = uVar10;
                FUN_100011af8(uVar10,uVar9,FUN_10001479c,0x6e65697246464d50,0xe900000000000064);
              }
              uVar7 = uVar9;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)uVar7 == 0) || ((long)uVar9 < 0)) || ((uVar9 >> 0x3e & 1) != 0)) {
                FUN_100012fe8(uVar9,0x10000fbe4,0x1000117fc);
                uVar8 = (uint)(uVar9 >> 0x3e) & 1;
              }
              else {
                uVar8 = 0;
              }
              uVar7 = uVar9 & 0xffffffffffffff8;
              lVar1 = uVar7 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              _objc_release(uVar6);
              if (((long)uVar9 < 0) || (uVar8 != 0)) {
                FUN_100012fe8(uVar9,0x10000fbe4,0x1000117fc);
                uVar7 = uVar9 & 0xffffffffffffff8;
              }
              if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100013568);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135a4);
                (*pcVar2)();
              }
              lVar1 = uVar7 + uVar10 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uStack_68;
              _objc_release(uVar6);
              *param_1 = uVar9;
            }
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1000135a0);
              (*pcVar2)();
            }
          }
          bVar3 = SCARRY8(uVar10,1);
          uVar10 = uVar10 + 1;
          if (bVar3) goto LAB_100013598;
        }
        _objc_release(uVar5);
        bVar3 = SCARRY8(uVar10,1);
        uVar10 = uVar10 + 1;
      } while (!bVar3);
LAB_100013598:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10001359c);
      (*pcVar2)();
    }
    if (uVar9 >> 0x3e != 0) {
      uVar4 = uVar9 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar9) {
        uVar4 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg(uVar4);
    }
  }
  return;
}



/* Entry: 1000135d0; end: 1000137c3;  */

void FUN_1000135d0(long param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000136a8);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  (*param_4)(0);
  _swift_arrayDestroy(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000136ac);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000136c4);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      _memmove(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000136c8);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000136cc);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1000137c4; end: 100013803;  */

void FUN_1000137c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100013804; end: 10001381f;  */

void FUN_100013804(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010001e904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_100028400)();
  return;
}



/* Entry: 100013820; end: 100013927; -[_TtC28SnapchatIntentsExtension_lib25SelectFriendIntentHandler resolveFriendForSelectFriend:withCompletion:] */

void FUN_100013820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  __Block_copy(param_4);
  __Block_copy();
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_100013b68(param_3,param_1,param_4);
  __Block_release(param_4);
  __Block_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_1);
  return;
}



/* Entry: 100013928; end: 1000139e3; -[_TtC28SnapchatIntentsExtension_lib25SelectFriendIntentHandler provideFriendOptionsCollectionForSelectFriend:withCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_60 [16];
  code *pcStack_50;
  undefined *puStack_48;
  
  __Block_copy();
  puVar4 = &UNK_1000288b0;
  _swift_allocObject(&UNK_1000288b0,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  lVar1 = param_1 + _DAT_100030958;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  FUN_10000f8a8(lVar1,uVar2);
  pcStack_50 = FUN_100013b58;
  pcVar5 = *(code **)(lVar3 + 0x10);
  puStack_48 = puVar4;
  _objc_retain(param_1);
  (*pcVar5)(0x100013b60,auStack_60,uVar2,lVar3);
  _swift_release(puVar4);
  _objc_release(param_1);
  return;
}



/* Entry: 1000139e4; end: 100013a3b;  */

void FUN_1000139e4(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_2);
  return;
}



/* Entry: 100013a3c; end: 100013aa7; -[_TtC28SnapchatIntentsExtension_lib25SelectFriendIntentHandler resolveOpenToForSelectFriend:withCompletion:] */

void FUN_100013a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  FUN_100014cd4(0);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010001f900();
  FUN_100014c10();
  (**(code **)(param_4 + 0x10))(param_4,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_3);
  return;
}



/* Entry: 100013aa8; end: 100013b03; -[_TtC28SnapchatIntentsExtension_lib25SelectFriendIntentHandler init] */

void FUN_100013aa8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapchatIntentsExtension_lib.SelectFriendIntentHandler",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100013ad4);
  (*pcVar1)();
}



/* Entry: 100013b04; end: 100013b13; -[_TtC28SnapchatIntentsExtension_lib25SelectFriendIntentHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013b04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_100030958))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010000fa4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100028480)(*(undefined8 *)(param_1 + _DAT_100030958));
  return;
}



/* Entry: 100013b14; end: 100013b57;  */

void FUN_100013b14(void)

{
  _objc_opt_self(&PTR_PTR_10002f718);
  return;
}



/* Entry: 100013b58; end: 100013b67;  */

void FUN_100013b58(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(param_2);
  return;
}



/* Entry: 100013b68; end: 100013c3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013b68(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010001f260();
  _objc_retainAutoreleasedReturnValue();
  FUN_100014bd4(0);
  if (param_1 == 0) {
    param_2 = param_2 + _DAT_100030958;
    lVar1 = *(long *)(param_2 + 0x18);
    lVar2 = *(long *)(param_2 + 0x20);
    FUN_10000f8a8(param_2,lVar1);
    (**(code **)(lVar2 + 8))(lVar1,lVar2);
    lVar2 = lVar1;
    FUN_10001486c();
    _objc_release(lVar1);
    (**(code **)(param_3 + 0x10))(param_3,lVar2);
  }
  else {
    lVar2 = param_1;
    FUN_10001486c(param_1);
    (**(code **)(param_3 + 0x10))(param_3,lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100028160)(lVar2);
  return;
}



/* Entry: 100013c3c; end: 100013c43; +[FLFriend supportsSecureCoding] */

undefined8 FUN_100013c3c(void)

{
  return 1;
}



/* Entry: 100013c44; end: 100013d2b;  */

undefined1 *
FUN_100013c44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xffffffffffffffa0;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(param_2);
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_3,param_4);
  _swift_bridgeObjectRelease();
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_5,param_6);
    _swift_bridgeObjectRelease();
  }
  FUN_100013d2c();
  _objc_msgSendSuper2(&stack0xffffffffffffffa0,PTR_s_initWithIdentifier_displayString_10002ef20,
                      param_1,param_3,param_5);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 100013d2c; end: 100013d4b;  */

void FUN_100013d2c(void)

{
  _objc_opt_self(&PTR_PTR_10002f7f0);
  return;
}



/* Entry: 100013d4c; end: 100013de3; -[FLFriend initWithIdentifier:displayString:pronunciationHint:] */

void FUN_100013d4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
    uVar2 = param_2;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  FUN_100013c44(param_3,uVar2,param_4,param_2,param_5,uVar1);
  return;
}



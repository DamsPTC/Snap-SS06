/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10465a764; end: 10465a7b3; -[SCWebViewContext encodeWithCoder:] */

void FUN_10465a764(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10465a0d4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10465a7b4; end: 10465a7e3;  */

void FUN_10465a7b4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10465a7e4(param_1);
  return;
}



/* Entry: 10465a7e4; end: 10465b833;  */

undefined8 FUN_10465a7e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lStack_170;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_f8;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f209ea0);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar10 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_c8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_c8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_c8 = 0;
    }
  }
  uVar2 = 0x5f4c414954494e49;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f4c414954494e49,0xeb000000004c5255);
  lVar10 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar10 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar10);
    _swift_unknownObjectRelease(lVar10);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar9 = lStack_b8;
    lVar10 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar10 = 0;
      lVar9 = 0;
    }
  }
  uVar2 = 0x4445564c4f534552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4445564c4f534552,0xec0000004c52555f);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_118 = 0;
    lStack_e8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lStack_118 = lStack_c0;
    lStack_e8 = lStack_b8;
    if ((int)plVar3 == 0) {
      lStack_118 = 0;
      lStack_e8 = 0;
    }
  }
  uVar2 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f209ec0);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar4 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar4 = 0;
    }
  }
  uVar2 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f209ef0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_120 = 0;
    lVar5 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_b8;
    lStack_120 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_120 = 0;
      lVar5 = 0;
    }
  }
  uVar2 = 0xd00000000000002b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002b,0x800000010f209f20);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_d0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_d0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_d0 = 0;
    }
  }
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f2099c0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_d8 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_d8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_d8 = 0;
    }
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f209f50);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_e0 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lStack_e0 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_e0 = 0;
    }
  }
  uVar2 = 0x5f524553574f5242;
  uVar8 = 0x45505954;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524553574f5242);
  func_0x00010bf66f40();
  _objc_release(uVar2);
  FUN_104645f5c();
  if ((uVar8 & 0xff) != 1) {
    uVar2 = 0x4547415f52455355;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4547415f52455355,0xea0000000000544e);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_170 = 0;
      lStack_130 = 0;
    }
    else {
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_170 = lStack_c0;
      lStack_130 = lStack_b8;
      if ((int)plVar3 == 0) {
        lStack_170 = 0;
        lStack_130 = 0;
      }
    }
    uVar2 = 0xd00000000000002a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f209f70);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_140 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_140 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_140 = 0;
      }
    }
    uVar2 = 0xd000000000000024;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f1f1330);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_148 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_148 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_148 = 0;
      }
    }
    uVar2 = 0xd000000000000026;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f1f1390);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_150 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_150 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_150 = 0;
      }
    }
    uVar2 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f209fa0);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_158 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_158 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_158 = 0;
      }
    }
    uVar2 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f209fd0);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_160 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_160 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_160 = 0;
      }
    }
    uVar2 = 0xd000000000000020;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f209ff0);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_f8 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_f8 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_f8 = 0;
      }
    }
    uVar2 = 0x545f5449485f4147;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f5449485f4147,0xec00000053455059);
    lVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar6 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
      _swift_unknownObjectRelease(lVar6);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lVar6 = 0;
    }
    else {
      uVar2 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lVar6 = lStack_c0;
      if ((int)plVar3 == 0) {
        lVar6 = 0;
      }
    }
    uVar2 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20a020);
    lVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar7 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_108 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_108 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_108 = 0;
      }
    }
    uVar2 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20a040);
    lVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (lVar7 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar7);
      _swift_unknownObjectRelease(lVar7);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      lStack_110 = 0;
    }
    else {
      uVar2 = 0;
      func_0x0001002ed07c(0);
      plVar3 = &lStack_c0;
      _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
      lStack_110 = lStack_c0;
      if ((int)plVar3 == 0) {
        lStack_110 = 0;
      }
    }
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f3570);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000023;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f1f3590);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    uVar2 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20a060);
    func_0x00010bf66ce0();
    _objc_release(uVar2);
    if (lVar9 == 0) {
      lVar10 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar10,lVar9);
      _swift_bridgeObjectRelease(lVar9);
    }
    if (lStack_e8 == 0) {
      lStack_118 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_118,lStack_e8);
      _swift_bridgeObjectRelease(lStack_e8);
    }
    if (lVar5 == 0) {
      lStack_e8 = 0;
      lStack_120 = lStack_e8;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_120,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    if (lStack_130 == 0) {
      lStack_170 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_170,lStack_130);
      _swift_bridgeObjectRelease(lStack_130);
    }
    if (lVar6 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar6;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar6,PTR___sSSN_11034da80);
      _swift_bridgeObjectRelease(lVar6);
    }
    func_0x00010c019de0();
    _objc_release(lVar10);
    _objc_release(lStack_118);
    _objc_release(lStack_120);
    _objc_release(lStack_170);
    _objc_release(lVar9);
    _objc_release(param_1);
    _objc_release(lStack_140);
    _objc_release(lStack_148);
    _objc_release(lStack_150);
    _objc_release(lStack_158);
    _objc_release(lStack_160);
    _objc_release(lStack_f8);
    _objc_release(lStack_108);
    _objc_release(lStack_110);
    _objc_release(lStack_c8);
    _objc_release(lVar4);
    _objc_release(lStack_d0);
    _objc_release(lStack_d8);
    _objc_release(lStack_e0);
    return unaff_x20;
  }
  _objc_release(param_1);
  _objc_release(lStack_c8);
  _objc_release(lVar4);
  _objc_release(lStack_d0);
  _objc_release(lStack_d8);
  _objc_release(lStack_e0);
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lStack_e8);
  _swift_bridgeObjectRelease(lVar9);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10465b834; end: 10465b85b; -[SCWebViewContext initWithCoder:] */

void FUN_10465b834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10465a7e4();
  return;
}



/* Entry: 10465b85c; end: 10465b89b; -[SCWebViewContext description] */

void FUN_10465b85c(void)

{
  undefined1 auStack_118 [248];
  
  _objc_retain();
  FUN_10465ba60(auStack_118);
  func_0x0001037b0e30(auStack_118);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465b89c; end: 10465b917; -[SCWebViewContext init] */

void FUN_10465b89c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebViewContextWrapper.swift",0x31,2,0x118,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10465b8e4);
  (*pcVar1)();
}



/* Entry: 10465b918; end: 10465ba5f; -[SCWebViewContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465b918(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b5c0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b5c8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b5d0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b5d8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b5e0 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b5e8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b5f0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b5f8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b608 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b610));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b618));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b620));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b628));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b630));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b638));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b640));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308b648));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308b650));
  return;
}



/* Entry: 10465ba60; end: 10465c0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465ba60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 uStack_41c;
  undefined8 uStack_418;
  undefined1 uStack_3dc;
  undefined1 uStack_3d8;
  undefined1 uStack_3d4;
  undefined8 uStack_3d0;
  undefined1 uStack_3c4;
  long lStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_394;
  undefined1 auStack_390 [248];
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined5 uStack_245;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 uStack_220;
  undefined7 uStack_21f;
  undefined8 uStack_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined7 uStack_1ff;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e8;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined1 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined1 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  
  lVar16 = *(long *)(param_3 + _DAT_11308b5c0);
  if (lVar16 == 0) {
    uStack_394 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_394 = (undefined1)lVar16;
  }
  lVar16 = _DAT_11308b5e8;
  uVar7 = *(undefined8 *)(param_3 + _DAT_11308b5c8);
  uVar10 = ((undefined8 *)(param_3 + _DAT_11308b5c8))[1];
  uVar8 = *(undefined8 *)(param_3 + _DAT_11308b5d0);
  uVar11 = ((undefined8 *)(param_3 + _DAT_11308b5d0))[1];
  lStack_3c0 = *(long *)(param_3 + _DAT_11308b5d8);
  if (lStack_3c0 == 0) {
    uStack_3b0 = *(undefined8 *)(param_3 + _DAT_11308b5e0);
    uStack_3b8 = ((undefined8 *)(param_3 + _DAT_11308b5e0))[1];
    puVar17 = &UNK_10dd23350;
    _swift_getKeyPath(&UNK_10dd23350);
    lVar16 = *(long *)(param_3 + lVar16);
    _swift_bridgeObjectRetain(uStack_3b8);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    if (lVar16 != 0) {
      lStack_3c0 = 0;
      uStack_3c4 = 1;
      goto LAB_10465bbb0;
    }
    _swift_release(puVar17);
    lStack_3c0 = 0;
    uVar20 = 0;
    uStack_3d0 = 0;
    uStack_3d4 = 1;
    uStack_3c4 = 1;
  }
  else {
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar10);
    func_0x00010c067fc0();
    lVar16 = _DAT_11308b5e8;
    uStack_3b0 = *(undefined8 *)(param_3 + _DAT_11308b5e0);
    uStack_3b8 = ((undefined8 *)(param_3 + _DAT_11308b5e0))[1];
    puVar17 = &UNK_10dd23350;
    _swift_getKeyPath(&UNK_10dd23350);
    lVar16 = *(long *)(param_3 + lVar16);
    _swift_bridgeObjectRetain(uStack_3b8);
    if (lVar16 == 0) {
      _swift_release(puVar17);
      uStack_3c4 = 0;
      uVar20 = 0;
      uStack_3d0 = 0;
      uStack_3d4 = 1;
    }
    else {
      uStack_3c4 = 0;
LAB_10465bbb0:
      _objc_retain(lVar16);
      _objc_retain();
      func_0x00010bf885a0();
      uVar20 = param_2;
      _objc_release(lVar16);
      _objc_release(lVar16);
      _swift_release(puVar17);
      uStack_3d4 = 0;
      uStack_3d0 = param_2;
    }
  }
  lVar16 = *(long *)(param_3 + _DAT_11308b5f0);
  if (lVar16 == 0) {
    uStack_3d8 = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_3d8 = (undefined1)lVar16;
  }
  lVar16 = *(long *)(param_3 + _DAT_11308b5f8);
  if (lVar16 == 0) {
    uStack_3dc = 2;
  }
  else {
    func_0x00010bf1f3c0();
    uStack_3dc = (undefined1)lVar16;
  }
  uVar18 = *(undefined8 *)(param_3 + _DAT_11308b600);
  uVar9 = *(undefined8 *)(param_3 + _DAT_11308b608);
  uVar12 = ((undefined8 *)(param_3 + _DAT_11308b608))[1];
  lVar16 = *(long *)(param_3 + _DAT_11308b610);
  bVar1 = lVar16 == 0;
  if (bVar1) {
    _swift_bridgeObjectRetain();
    uVar22 = 0;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x00010bf885a0(lVar16);
    uVar22 = uVar20;
  }
  uVar23 = 0;
  bVar2 = *(long *)(param_3 + _DAT_11308b618) == 0;
  if (bVar2) {
    uVar24 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar24 = uVar20;
  }
  bVar3 = *(long *)(param_3 + _DAT_11308b620) == 0;
  if (!bVar3) {
    func_0x00010bf885a0();
    uVar23 = uVar20;
  }
  uVar25 = 0;
  bVar4 = *(long *)(param_3 + _DAT_11308b628) == 0;
  if (bVar4) {
    uVar26 = 0;
  }
  else {
    func_0x00010bf885a0();
    uVar26 = uVar20;
  }
  bVar5 = *(long *)(param_3 + _DAT_11308b630) == 0;
  if (!bVar5) {
    func_0x00010bf885a0();
    uVar25 = uVar20;
  }
  lVar16 = _DAT_11308b648;
  if (*(long *)(param_3 + _DAT_11308b638) == 0) {
    uStack_418 = *(undefined8 *)(param_3 + _DAT_11308b640);
    puVar17 = &UNK_10dd23350;
    _swift_getKeyPath(&UNK_10dd23350);
    lVar16 = *(long *)(param_3 + lVar16);
    _swift_bridgeObjectRetain(uStack_418);
    if (lVar16 == 0) {
      _swift_release(puVar17);
      uStack_41c = 1;
      uVar27 = 0;
      uVar28 = 0;
      uVar19 = 1;
      uVar21 = uVar20;
      goto LAB_10465be84;
    }
    uStack_41c = 1;
    uVar27 = 0;
    uVar28 = uVar20;
  }
  else {
    func_0x00010bf885a0();
    lVar16 = _DAT_11308b648;
    uStack_418 = *(undefined8 *)(param_3 + _DAT_11308b640);
    puVar17 = &UNK_10dd23350;
    uVar21 = uVar20;
    _swift_getKeyPath(&UNK_10dd23350);
    lVar16 = *(long *)(param_3 + lVar16);
    _swift_bridgeObjectRetain(uStack_418);
    uVar27 = uVar20;
    if (lVar16 == 0) {
      _swift_release(puVar17);
      uStack_41c = 0;
      uVar19 = 1;
      uVar28 = 0;
      goto LAB_10465be84;
    }
    uStack_41c = 0;
    uVar28 = uVar21;
  }
  _objc_retain(lVar16);
  _objc_retain();
  func_0x00010bf885a0();
  uVar21 = uVar28;
  _objc_release(lVar16);
  _objc_release(lVar16);
  _swift_release(puVar17);
  uVar19 = 0;
LAB_10465be84:
  bVar6 = *(long *)(param_3 + _DAT_11308b650) == 0;
  if (bVar6) {
    uVar21 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  uVar13 = *(undefined1 *)(param_3 + _DAT_11308b658);
  uVar14 = *(undefined1 *)(param_3 + _DAT_11308b660);
  uVar15 = *(undefined1 *)(param_3 + _DAT_11308b668);
  _objc_release(param_3);
  uStack_298 = uStack_394;
  lStack_270 = lStack_3c0;
  uStack_268 = uStack_3c4;
  uStack_260 = uStack_3b0;
  uStack_258 = uStack_3b8;
  uStack_250 = uStack_3d0;
  uStack_248 = uStack_3d4;
  uStack_247 = uStack_3d8;
  uStack_246 = uStack_3dc;
  uStack_1d0 = uStack_41c;
  uStack_1c8 = uStack_418;
  uStack_1a8 = CONCAT13(uVar15,CONCAT12(uVar14,CONCAT11(uVar13,bVar6)));
  lStack_178 = lStack_3c0;
  uStack_168 = uStack_3b0;
  uStack_160 = uStack_3b8;
  uStack_158 = uStack_3d0;
  uStack_d0 = uStack_418;
  uStack_290 = uVar7;
  uStack_288 = uVar10;
  uStack_280 = uVar8;
  uStack_278 = uVar11;
  uStack_240 = uVar18;
  uStack_238 = uVar9;
  uStack_230 = uVar12;
  uStack_228 = uVar22;
  uStack_220 = bVar1;
  uStack_218 = uVar24;
  uStack_210 = bVar2;
  uStack_208 = uVar23;
  uStack_200 = bVar3;
  uStack_1f8 = uVar26;
  uStack_1f0 = bVar4;
  uStack_1e8 = uVar25;
  uStack_1e0 = bVar5;
  uStack_1d8 = uVar27;
  uStack_1c0 = uVar28;
  uStack_1b8 = uVar19;
  uStack_1b0 = uVar21;
  auStack_1a0[0] = uStack_298;
  uStack_198 = uVar7;
  uStack_190 = uVar10;
  uStack_188 = uVar8;
  uStack_180 = uVar11;
  uStack_170 = uStack_268;
  uStack_150 = uStack_248;
  uStack_14f = uStack_247;
  uStack_14e = uStack_246;
  uStack_148 = uVar18;
  uStack_140 = uVar9;
  uStack_138 = uVar12;
  uStack_130 = uVar22;
  uStack_128 = bVar1;
  uStack_120 = uVar24;
  uStack_118 = bVar2;
  uStack_110 = uVar23;
  uStack_108 = bVar3;
  uStack_100 = uVar26;
  uStack_f8 = bVar4;
  uStack_f0 = uVar25;
  uStack_e8 = bVar5;
  uStack_e0 = uVar27;
  uStack_d8 = uStack_1d0;
  uStack_c8 = uVar28;
  uStack_c0 = uVar19;
  uStack_b8 = uVar21;
  uStack_b0 = bVar6;
  uStack_af = uVar13;
  uStack_ae = uVar14;
  uStack_ad = uVar15;
  func_0x0001037b0db4(&uStack_298,auStack_390);
  func_0x0001037b0e30(auStack_1a0);
  param_1[0x19] = CONCAT71(uStack_1cf,uStack_1d0);
  param_1[0x18] = uStack_1d8;
  param_1[0x1b] = uStack_1c0;
  param_1[0x1a] = uStack_1c8;
  param_1[0x1d] = uStack_1b0;
  param_1[0x1c] = CONCAT71(uStack_1b7,uStack_1b8);
  *(undefined4 *)(param_1 + 0x1e) = uStack_1a8;
  param_1[0x11] = CONCAT71(uStack_20f,uStack_210);
  param_1[0x10] = uStack_218;
  param_1[0x13] = CONCAT71(uStack_1ff,uStack_200);
  param_1[0x12] = uStack_208;
  param_1[0x15] = CONCAT71(uStack_1ef,uStack_1f0);
  param_1[0x14] = uStack_1f8;
  param_1[0x17] = CONCAT71(uStack_1df,uStack_1e0);
  param_1[0x16] = uStack_1e8;
  param_1[9] = uStack_250;
  param_1[8] = uStack_258;
  param_1[0xb] = uStack_240;
  param_1[10] = CONCAT53(uStack_245,CONCAT12(uStack_246,CONCAT11(uStack_247,uStack_248)));
  param_1[0xd] = uStack_230;
  param_1[0xc] = uStack_238;
  param_1[0xf] = CONCAT71(uStack_21f,uStack_220);
  param_1[0xe] = uStack_228;
  param_1[1] = uStack_290;
  *param_1 = CONCAT71(uStack_297,uStack_298);
  param_1[3] = uStack_280;
  param_1[2] = uStack_288;
  param_1[5] = lStack_270;
  param_1[4] = uStack_278;
  param_1[7] = uStack_260;
  param_1[6] = CONCAT71(uStack_267,uStack_268);
  return;
}



/* Entry: 10465c0b4; end: 10465c0fb;  */

undefined8 FUN_10465c0b4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10465c0fc; end: 10465c11b;  */

void FUN_10465c0fc(void)

{
  _objc_opt_self(&PTR_PTR_1129ce968);
  return;
}



/* Entry: 10465c11c; end: 10465c127;  */

undefined * FUN_10465c11c(void)

{
  return PTR_s_doubleValue_1125bfb10;
}



/* Entry: 10465c128; end: 10465c1d3;  */

void FUN_10465c128(void)

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



/* Entry: 10465c1d4; end: 10465c20b;  */

void FUN_10465c1d4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 10465c20c; end: 10465c4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465c20c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  puVar5 = auStack_80;
  uVar6 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  if (*(char *)(param_1 + 6) == '\0') {
    lVar4 = unaff_x20;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11308b698) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a0);
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a8);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    uVar2 = param_1[4];
    uVar3 = param_1[5];
    uVar7 = param_1[3];
    lVar4 = unaff_x20;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11308b698) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b0);
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b8);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c0);
    *puVar1 = uVar7;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c8);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar5 = auStack_70;
  }
  else {
    lVar4 = unaff_x20;
    _objc_allocWithZone();
    *(undefined1 *)(lVar4 + _DAT_11308b698) = 2;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d0);
    *puVar1 = uVar6;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d8);
    *puVar1 = uVar8;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar5 = auStack_60;
  }
  *(long *)(puVar5 + 8) = unaff_x20;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465c4c0; end: 10465c4ef; -[SCWebViewUserInteractionEvent description] */

void FUN_10465c4c0(void)

{
  undefined1 auStack_48 [56];
  
  _objc_retain();
  FUN_10465d8d0(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465c4f0; end: 10465c537;  */

void FUN_10465c4f0(undefined8 *param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10465d8d0(&uStack_58);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  param_1[5] = uStack_30;
  param_1[4] = uStack_38;
  *(undefined1 *)(param_1 + 6) = uStack_28;
  return;
}



/* Entry: 10465c538; end: 10465c57f; -[SCWebViewUserInteractionEvent init] */

void FUN_10465c538(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebViewUserInteractionEventWrapper.swift",0x3e,2,0x5e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10465c580);
  (*pcVar1)();
}



/* Entry: 10465c580; end: 10465c59f; -[SCWebViewUserInteractionEvent hash] */

void FUN_10465c580(void)

{
  FUN_10465c5a0();
  return;
}



/* Entry: 10465c5a0; end: 10465c8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465c5a0(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(unaff_x20 + _DAT_11308b698));
  if ((char)((ulong *)(unaff_x20 + _DAT_11308b6a0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308b6a0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308b6a8);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308b6b0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308b6b0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308b6b8);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308b6c0))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308b6c0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_11308b6c8);
  if ((char)puVar1[2] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *puVar1;
    uVar3 = puVar1[1];
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar3 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar3;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6d0) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308b6d0);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar5);
  }
  if ((char)((ulong *)(unaff_x20 + _DAT_11308b6d8))[1] == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_11308b6d8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    uVar2 = 0;
    if ((uVar4 & 0x7fffffffffffffff) != 0) {
      uVar2 = uVar4;
    }
    __ss6HasherV8_combineyys6UInt64VF(uVar2);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10465c8a4; end: 10465cb73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10465c8a4(undefined8 param_1)

{
  double *pdVar1;
  double *pdVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    return false;
  }
  plVar7 = &lStack_78;
  _swift_dynamicCast(plVar7,auStack_70,PTR___sypN_11034f1a8 + 8,lVar6,6);
  if (((ulong)plVar7 & 1) == 0) {
    return false;
  }
  cVar5 = *(char *)(unaff_x20 + _DAT_11308b698);
  if (cVar5 != *(char *)(lStack_78 + _DAT_11308b698)) goto LAB_10465cb50;
  if (cVar5 == '\0') {
    cVar5 = *(char *)((double *)(lStack_78 + _DAT_11308b6a0) + 1);
    lVar6 = _DAT_11308b6a8;
    if (*(char *)((double *)(unaff_x20 + _DAT_11308b6a0) + 1) != '\x01') {
      if ((cVar5 == '\x01') ||
         (*(double *)(unaff_x20 + _DAT_11308b6a0) != *(double *)(lStack_78 + _DAT_11308b6a0)))
      goto LAB_10465cb50;
      goto LAB_10465ca24;
    }
  }
  else {
    if (cVar5 != '\x01') {
      cVar5 = *(char *)((undefined8 *)(lStack_78 + _DAT_11308b6d0) + 1);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6d0) + 1) == '\x01') {
        if (cVar5 == '\x01') {
LAB_10465ca90:
          dVar8 = *(double *)(unaff_x20 + _DAT_11308b6d8);
          cVar5 = *(char *)((double *)(unaff_x20 + _DAT_11308b6d8) + 1);
          dVar9 = *(double *)(lStack_78 + _DAT_11308b6d8);
          cVar4 = *(char *)((double *)(lStack_78 + _DAT_11308b6d8) + 1);
          _objc_release();
          if (cVar5 != '\x01') {
            return dVar8 == dVar9 && cVar4 != '\x01';
          }
          return cVar4 == '\x01';
        }
      }
      else if ((cVar5 != '\x01') &&
              ((int)*(undefined8 *)(unaff_x20 + _DAT_11308b6d0) ==
               (int)*(undefined8 *)(lStack_78 + _DAT_11308b6d0))) goto LAB_10465ca90;
      goto LAB_10465cb50;
    }
    cVar5 = *(char *)((double *)(lStack_78 + _DAT_11308b6b0) + 1);
    if (*(char *)((double *)(unaff_x20 + _DAT_11308b6b0) + 1) == '\x01') {
      if (cVar5 != '\x01') goto LAB_10465cb50;
    }
    else if ((cVar5 == '\x01') ||
            (*(double *)(unaff_x20 + _DAT_11308b6b0) != *(double *)(lStack_78 + _DAT_11308b6b0)))
    goto LAB_10465cb50;
    pdVar1 = (double *)(unaff_x20 + _DAT_11308b6b8);
    pdVar2 = (double *)(lStack_78 + _DAT_11308b6b8);
    if (*(char *)(pdVar1 + 2) == '\x01') {
      if (*(char *)(pdVar2 + 2) != '\x01') goto LAB_10465cb50;
    }
    else if (((*(char *)(pdVar2 + 2) == '\x01') || (*pdVar1 != *pdVar2)) || (pdVar1[1] != pdVar2[1])
            ) goto LAB_10465cb50;
    cVar5 = *(char *)((double *)(lStack_78 + _DAT_11308b6c0) + 1);
    lVar6 = _DAT_11308b6c8;
    if (*(char *)((double *)(unaff_x20 + _DAT_11308b6c0) + 1) != '\x01') {
      if ((cVar5 != '\x01') &&
         (*(double *)(unaff_x20 + _DAT_11308b6c0) == *(double *)(lStack_78 + _DAT_11308b6c0)))
      goto LAB_10465ca24;
      goto LAB_10465cb50;
    }
  }
  if (cVar5 == '\x01') {
LAB_10465ca24:
    pdVar1 = (double *)(unaff_x20 + lVar6);
    dVar9 = *pdVar1;
    dVar8 = pdVar1[1];
    cVar5 = *(char *)(pdVar1 + 2);
    pdVar1 = (double *)(lStack_78 + lVar6);
    dVar11 = *pdVar1;
    dVar10 = pdVar1[1];
    cVar4 = *(char *)(pdVar1 + 2);
    _objc_release();
    bVar3 = cVar4 == '\x01' && cVar5 == '\x01';
    if (cVar5 == '\x01') {
      return bVar3;
    }
    if (cVar4 != '\x01') {
      return dVar8 == dVar10 && dVar9 == dVar11;
    }
    return bVar3;
  }
LAB_10465cb50:
  _objc_release();
  return false;
}



/* Entry: 10465cb74; end: 10465cbf3; -[SCWebViewUserInteractionEvent isEqual:] */

uint FUN_10465cb74(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10465c8a4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10465cbf4; end: 10465cbf7; -[SCWebViewUserInteractionEvent copyWithZone:] */

void FUN_10465cbf4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10465cbf8; end: 10465cf7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465cbf8(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(char *)(unaff_x20 + _DAT_11308b698) == '\0') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf64);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308b6a0);
    uVar3 = 0xd000000000000021;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20a250);
    func_0x00010bf92e80(uVar5,param_1);
    _objc_release(uVar3);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a8);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf70);
      (*pcVar2)();
    }
    uVar6 = *puVar1;
    uVar5 = puVar1[1];
    uVar3 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20a280);
    func_0x00010bf92dc0(uVar6,uVar5,param_1);
    pcVar4 = "SUBTYPE_CONTENT_AREA_TAP";
    uVar5 = 0xd000000000000018;
  }
  else {
    if (*(char *)(unaff_x20 + _DAT_11308b698) == '\x01') {
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6b0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf60);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308b6b0);
      uVar3 = 0xd00000000000002a;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f20a170);
      func_0x00010bf92e80(uVar5,param_1);
      _objc_release(uVar3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b8);
      if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf6c);
        (*pcVar2)();
      }
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
      uVar3 = 0xd000000000000022;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20a1a0);
      func_0x00010bf92dc0(uVar6,uVar5,param_1);
      _objc_release(uVar3);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf78);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308b6c0);
      uVar3 = 0xd000000000000028;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20a1d0);
      func_0x00010bf92e80(uVar5,param_1);
      _objc_release(uVar3);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c8);
      if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf7c);
        (*pcVar2)();
      }
      uVar6 = *puVar1;
      uVar5 = puVar1[1];
      uVar3 = 0xd000000000000020;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f20a200);
      func_0x00010bf92dc0(uVar6,uVar5,param_1);
      pcVar4 = "SUBTYPE_CONTENT_AREA_SCROLL";
    }
    else {
      if (*(char *)(unaff_x20 + _DAT_11308b6d0 + 8) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf68);
        (*pcVar2)();
      }
      uVar3 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20a100);
      func_0x00010bf92fc0(param_1);
      _objc_release(uVar3);
      if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10465cf74);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11308b6d8);
      uVar3 = 0xd000000000000024;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20a120);
      func_0x00010bf92e80(uVar5,param_1);
      pcVar4 = "SUBTYPE_FEATURE_INTERACTION";
    }
    uVar5 = 0xd00000000000001b;
  }
  _objc_release(uVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,(ulong)(pcVar4 + -0x20) | 0x8000000000000000);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10465cf7c; end: 10465cfcb; -[SCWebViewUserInteractionEvent encodeWithCoder:] */

void FUN_10465cf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10465cbf8(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10465cfcc; end: 10465cffb;  */

void FUN_10465cfcc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10465cffc(param_1);
  return;
}



/* Entry: 10465cffc; end: 10465d67b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10465cffc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  puVar6 = auStack_f0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_90);
    goto LAB_10465d52c;
  }
  plVar4 = &lStack_c0;
  uVar2 = uStack_a0;
  uVar8 = uStack_b0;
  _swift_dynamicCast(plVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  if (((ulong)plVar4 & 1) == 0) {
LAB_10465d524:
    _objc_release(param_1);
LAB_10465d52c:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  uVar7 = 0;
  if (((lStack_c0 == -0x2fffffffffffffe8) && (lStack_b8 == -0x7ffffffef0df5d60)) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000018,0x800000010f20a2a0,lStack_c0,lStack_b8,0), (uVar7 & 1) != 0)) {
    _swift_bridgeObjectRelease(lStack_b8);
    uVar5 = 0xd000000000000021;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20a250);
    func_0x00010bf66da0(param_1);
    uVar10 = uVar2;
    _objc_release(uVar5);
    uVar5 = 0xd000000000000019;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20a280);
    func_0x00010bf66d00(param_1);
    _objc_release(uVar5);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_11308b698) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a0);
    *puVar1 = uVar2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a8);
    *puVar1 = uVar10;
    puVar1[1] = uVar8;
    *(undefined1 *)(puVar1 + 2) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6d0);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6d8);
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    goto LAB_10465d254;
  }
  if ((lStack_c0 != -0x2fffffffffffffe5) || (lStack_b8 != -0x7ffffffef0df5dd0)) {
    uVar7 = 0xd00000000000001b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd00000000000001b,0x800000010f20a230,lStack_c0,lStack_b8,0);
    if ((uVar7 & 1) == 0) {
      if ((lStack_c0 == -0x2fffffffffffffe5) && (lStack_b8 == -0x7ffffffef0df5eb0)) {
        _swift_bridgeObjectRelease(0x800000010f20a150);
      }
      else {
        uVar7 = 0xd00000000000001b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd00000000000001b,0x800000010f20a150,lStack_c0,lStack_b8,0);
        _swift_bridgeObjectRelease(lStack_b8);
        if ((uVar7 & 1) == 0) goto LAB_10465d524;
      }
      uVar9 = 0;
      uVar8 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b);
      lVar3 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar8);
      func_0x0001042c3468();
      if ((uVar9 & 0xff) != 1) {
        uVar8 = 0xd000000000000024;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20a120)
        ;
        func_0x00010bf66da0(param_1);
        _objc_release(uVar8);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_11308b698) = 2;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 1;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 1;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c0);
        *puVar1 = 0;
        *(undefined1 *)(puVar1 + 1) = 1;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(puVar1 + 2) = 1;
        plVar4 = (long *)(unaff_x20 + _DAT_11308b6d0);
        *plVar4 = lVar3;
        *(char *)(plVar4 + 1) = (char)uVar9;
        puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6d8);
        *puVar1 = uVar2;
        *(undefined1 *)(puVar1 + 1) = 0;
        puVar6 = auStack_d0;
        goto LAB_10465d254;
      }
      goto LAB_10465d524;
    }
  }
  _swift_bridgeObjectRelease(lStack_b8);
  uVar5 = 0xd00000000000002a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000002a,0x800000010f20a170);
  func_0x00010bf66da0(param_1);
  uVar10 = uVar2;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000022;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000022,0x800000010f20a1a0);
  func_0x00010bf66d00(param_1);
  uVar11 = uVar10;
  uVar13 = uVar8;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000028;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000028,0x800000010f20a1d0);
  func_0x00010bf66da0(param_1);
  uVar12 = uVar11;
  _objc_release(uVar5);
  uVar5 = 0xd000000000000020;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000020,0x800000010f20a200);
  func_0x00010bf66d00(param_1);
  _objc_release(uVar5);
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11308b698) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b0);
  *puVar1 = uVar2;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b8);
  *puVar1 = uVar10;
  puVar1[1] = uVar8;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c0);
  *puVar1 = uVar11;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6c8);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar6 = auStack_e0;
LAB_10465d254:
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar6;
}



/* Entry: 10465d67c; end: 10465d6a3; -[SCWebViewUserInteractionEvent initWithCoder:] */

void FUN_10465d67c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10465cffc();
  return;
}



/* Entry: 10465d6a4; end: 10465d6b7; +[SCWebViewUserInteractionEvent contentAreaTapWithTimestampMillis:position:] */

void FUN_10465d6a4(void)

{
  FUN_10465da50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465d6b8; end: 10465d6cb; +[SCWebViewUserInteractionEvent contentAreaScrollWithStartTimestampMillis:startPosition:endTimestampMillis:endPosition:] */

void FUN_10465d6b8(void)

{
  FUN_10465db5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465d6cc; end: 10465d6e3; +[SCWebViewUserInteractionEvent featureInteractionWithFeature:timestampMillis:] */

void FUN_10465d6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10465dc7c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465d6e4; end: 10465d833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465d6e4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_11308b698) == '\0') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d81c);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6a8);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d828);
      (*pcVar3)();
    }
    (*param_1)(*(undefined8 *)(unaff_x20 + _DAT_11308b6a0),*puVar1,puVar1[1]);
  }
  else if (*(char *)(unaff_x20 + _DAT_11308b698) == '\x01') {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6b0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d818);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b6b8);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d824);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d830);
      (*pcVar3)();
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_11308b6c8);
    if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d834);
      (*pcVar3)();
    }
    (*param_3)(*(undefined8 *)(unaff_x20 + _DAT_11308b6b0),*puVar1,puVar1[1],
               *(undefined8 *)(unaff_x20 + _DAT_11308b6c0),*puVar2,puVar2[1]);
  }
  else {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d820);
      (*pcVar3)();
    }
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11308b6d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10465d82c);
      (*pcVar3)();
    }
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_11308b6d8),
               *(undefined8 *)(unaff_x20 + _DAT_11308b6d0));
  }
  return;
}



/* Entry: 10465d834; end: 10465d897; -[SCWebViewUserInteractionEvent matchContentAreaTap:contentAreaScroll:featureInteraction:] */

void FUN_10465d834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_10465d6e4(FUN_10465df48,auStack_40,0x10465df54,auStack_60,0x10465df60,auStack_80);
  _objc_release(param_1);
  return;
}



/* Entry: 10465d898; end: 10465d8cb;  */

void FUN_10465d898(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10465d8cc; end: 10465d8cf; -[SCWebViewUserInteractionEvent .cxx_destruct] */

void FUN_10465d8cc(void)

{
  return;
}



/* Entry: 10465d8d0; end: 10465da4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465d8d0(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  cVar3 = *(char *)(param_2 + _DAT_11308b698);
  if (cVar3 == '\0') {
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308b6a0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da38);
      (*pcVar4)();
    }
    puVar1 = (undefined8 *)(param_2 + _DAT_11308b6a8);
    if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da44);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(param_2 + _DAT_11308b6a0);
    uStack_38 = puVar1[1];
    uStack_40 = *puVar1;
  }
  else {
    if (cVar3 == '\x01') {
      if (*(char *)((undefined8 *)(param_2 + _DAT_11308b6b0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da34);
        (*pcVar4)();
      }
      puVar1 = (undefined8 *)(param_2 + _DAT_11308b6b8);
      if (*(char *)(puVar1 + 2) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da40);
        (*pcVar4)();
      }
      if (*(char *)((undefined8 *)(param_2 + _DAT_11308b6c0) + 1) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da4c);
        (*pcVar4)();
      }
      puVar2 = (undefined8 *)(param_2 + _DAT_11308b6c8);
      if (*(char *)(puVar2 + 2) == '\x01') {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da50);
        (*pcVar4)();
      }
      uVar6 = *(undefined8 *)(param_2 + _DAT_11308b6b0);
      uStack_38 = puVar1[1];
      uStack_40 = *puVar1;
      uVar5 = *(undefined8 *)(param_2 + _DAT_11308b6c0);
      uVar8 = puVar2[1];
      uVar7 = *puVar2;
      goto LAB_10465d9fc;
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308b6d0) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da3c);
      (*pcVar4)();
    }
    if (*(char *)((undefined8 *)(param_2 + _DAT_11308b6d8) + 1) == '\x01') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10465da48);
      (*pcVar4)();
    }
    uVar6 = *(undefined8 *)(param_2 + _DAT_11308b6d0);
    uStack_40 = *(undefined8 *)(param_2 + _DAT_11308b6d8);
    uStack_38 = 0;
  }
  uVar5 = 0;
  uVar7 = 0;
  uVar8 = 0;
LAB_10465d9fc:
  _objc_release();
  *param_1 = uVar6;
  param_1[2] = uStack_38;
  param_1[1] = uStack_40;
  param_1[3] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  *(char *)(param_1 + 6) = cVar3;
  return;
}



/* Entry: 10465da50; end: 10465db5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465da50(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  FUN_10465dd80();
  lVar2 = param_4;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b698) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6a0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6a8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_50 = lVar2;
  lStack_48 = param_4;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465db5c; end: 10465dc7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465db5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  FUN_10465dd80();
  lVar2 = param_7;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11308b698) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6b0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6b8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6c0);
  *puVar1 = param_4;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6c8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6d0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11308b6d8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_60 = lVar2;
  lStack_58 = param_7;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465dc7c; end: 10465dd7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465dc7c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_2;
  FUN_10465dd80();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_11308b698) = 2;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6c8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  plVar2 = (long *)(lVar4 + _DAT_11308b6d0);
  *plVar2 = param_2;
  *(undefined1 *)(plVar2 + 1) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_11308b6d8);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465dd80; end: 10465dd9f;  */

void FUN_10465dd80(void)

{
  _objc_opt_self(&PTR_PTR_1129ceae0);
  return;
}



/* Entry: 10465dda0; end: 10465df07;  */

int FUN_10465dda0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10465de1c;
        goto LAB_10465de00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10465de00:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_10465de1c:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10465df08; end: 10465df47;  */

void FUN_10465df08(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd233c4;
  _swift_getWitnessTable(&UNK_10dd233c4,&UNK_110793028);
  puRam000000011308b708 = puVar1;
  return;
}



/* Entry: 10465df48; end: 10465df6f;  */

void FUN_10465df48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010465df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 10465df70; end: 10465dfdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465df70(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  uVar2 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b710);
  puVar1[1] = param_1[1];
  *puVar1 = uVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b718);
  puVar1[1] = uVar4;
  *puVar1 = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11308b720) = param_1[4];
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465dfdc; end: 10465e0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465dfdc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b710))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b710);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b718))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b718);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308b720));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 10465e0b4; end: 10465e21b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10465e0b4(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar1 & 1) != 0) {
      uVar3 = ((ulong *)(unaff_x20 + _DAT_11308b710))[1];
      uVar5 = ((ulong *)(lStack_68 + _DAT_11308b710))[1];
      uVar8 = (ulong)(uVar3 == 0 && uVar5 == 0);
      if (uVar3 != 0 && uVar5 != 0) {
        uVar8 = *(ulong *)(unaff_x20 + _DAT_11308b710);
        if (uVar8 == *(ulong *)(lStack_68 + _DAT_11308b710) && uVar3 == uVar5) {
          uVar8 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
        }
      }
      lVar4 = ((long *)(unaff_x20 + _DAT_11308b718))[1];
      lVar6 = ((long *)(lStack_68 + _DAT_11308b718))[1];
      uVar9 = (uint)(lVar4 == 0 && lVar6 == 0);
      if (lVar4 != 0 && lVar6 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_11308b718);
        if (lVar2 == *(long *)(lStack_68 + _DAT_11308b718) && lVar4 == lVar6) {
          uVar9 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar9 = (uint)lVar2;
        }
      }
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11308b720);
      uVar10 = *(undefined8 *)(lStack_68 + _DAT_11308b720);
      _objc_release(lStack_68);
      if ((uVar8 & 1) != 0) {
        return uVar9 & (int)uVar7 == (int)uVar10;
      }
    }
  }
  return 0;
}



/* Entry: 10465e21c; end: 10465e227; -[SCWebviewAttributionInfo pixelToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e21c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b710))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b710);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10465e228; end: 10465e233; -[SCWebviewAttributionInfo serveItemId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308b718))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308b718);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10465e234; end: 10465e28b;  */

void FUN_10465e234(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10465e28c; end: 10465e29b; -[SCWebviewAttributionInfo webViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10465e28c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308b720);
}



/* Entry: 10465e29c; end: 10465e327;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b710);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308b718);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308b720) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465e328; end: 10465e3e3; -[SCWebviewAttributionInfo initWithPixelToken:serveItemId:webViewType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e328(long param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11308b710);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11308b718);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_11308b720) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465e3e4; end: 10465e417; -[SCWebviewAttributionInfo hash] */

undefined8 FUN_10465e3e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10465dfdc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10465e418; end: 10465e497; -[SCWebviewAttributionInfo isEqual:] */

uint FUN_10465e418(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10465e0b4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10465e498; end: 10465e49b; -[SCWebviewAttributionInfo copyWithZone:] */

void FUN_10465e498(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10465e49c; end: 10465e5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e49c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11308b710))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b710);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4f545f4c45584950;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f545f4c45584950,0xeb000000004e454b);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308b718))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308b718);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x574549565f424557;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x574549565f424557,0xed0000455059545f);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10465e5e4; end: 10465e633; -[SCWebviewAttributionInfo encodeWithCoder:] */

void FUN_10465e5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10465e49c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10465e634; end: 10465e663;  */

void FUN_10465e634(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10465e664(param_1);
  return;
}



/* Entry: 10465e664; end: 10465e92b;  */

undefined8 FUN_10465e664(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x4f545f4c45584950;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f545f4c45584950,0xeb000000004e454b);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar7 = 0;
    uVar6 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_98;
    uVar6 = uStack_a0;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  uVar8 = 0x574549565f424557;
  uVar10 = 0x5059545f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x574549565f424557);
  lVar9 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar8);
  FUN_104630458(lVar9);
  if ((uVar10 & 0xff) != 1) {
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar5);
    }
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
      _swift_bridgeObjectRelease(lVar7);
    }
    func_0x00010c036240();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(param_1);
    return unaff_x20;
  }
  _objc_release(param_1);
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar5);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10465e92c; end: 10465e953; -[SCWebviewAttributionInfo initWithCoder:] */

void FUN_10465e92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10465e664();
  return;
}



/* Entry: 10465e954; end: 10465e96f; -[SCWebviewAttributionInfo description] */

void FUN_10465e954(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465e970; end: 10465e9eb; -[SCWebviewAttributionInfo init] */

void FUN_10465e970(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCWebBrowsingServices/WebviewAttributionInfoWrapper.swift",0x39,2,0x54,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10465e9b8);
  (*pcVar1)();
}



/* Entry: 10465e9ec; end: 10465ea2b; -[SCWebviewAttributionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465e9ec(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308b710 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308b718 + 8))
  ;
  return;
}



/* Entry: 10465ea2c; end: 10465ea4b;  */

void FUN_10465ea2c(void)

{
  _objc_opt_self(&PTR_PTR_1129cebe8);
  return;
}



/* Entry: 10465ea4c; end: 10465ebf3;  */

void FUN_10465ea4c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 10465ebf4; end: 10465ec9b;  */

void FUN_10465ebf4(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10465ec88;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10465ec88:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Entry: 10465ec9c; end: 10465ecdb;  */

void FUN_10465ec9c(undefined8 *param_1)

{
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 2;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  return;
}



/* Entry: 10465ecdc; end: 10465ed1b;  */

void FUN_10465ecdc(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b750 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd234d0;
  _swift_getWitnessTable(&UNK_10dd234d0,&UNK_110793120);
  puRam000000011308b750 = puVar1;
  return;
}



/* Entry: 10465ed1c; end: 10465ed1f;  */

void FUN_10465ed1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd23508;
  _swift_getWitnessTable(&UNK_10dd23508,&UNK_110793120);
  puRam000000011308b758 = puVar1;
  return;
}



/* Entry: 10465ed20; end: 10465ed5f;  */

void FUN_10465ed20(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd23508;
  _swift_getWitnessTable(&UNK_10dd23508,&UNK_110793120);
  puRam000000011308b758 = puVar1;
  return;
}



/* Entry: 10465ed60; end: 10465ed63;  */

void FUN_10465ed60(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd235d0;
  _swift_getWitnessTable(&UNK_10dd235d0,&UNK_110793120);
  puRam000000011308b760 = puVar1;
  return;
}



/* Entry: 10465ed64; end: 10465eda3;  */

void FUN_10465ed64(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd235d0;
  _swift_getWitnessTable(&UNK_10dd235d0,&UNK_110793120);
  puRam000000011308b760 = puVar1;
  return;
}



/* Entry: 10465eda4; end: 10465eda7;  */

void FUN_10465eda4(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd235f8;
  _swift_getWitnessTable(&UNK_10dd235f8,&UNK_110793120);
  puRam000000011308b768 = puVar1;
  return;
}



/* Entry: 10465eda8; end: 10465ede7;  */

void FUN_10465eda8(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b768 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd235f8;
  _swift_getWitnessTable(&UNK_10dd235f8,&UNK_110793120);
  puRam000000011308b768 = puVar1;
  return;
}



/* Entry: 10465ede8; end: 10465ee03;  */

undefined1  [16] FUN_10465ede8(void)

{
  return ZEXT816(0x110793120);
}



/* Entry: 10465ee04; end: 10465ee4f; -[SCAdTrackLoggingEventType initWithRawValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465ee04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308b770) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465ee50; end: 10465ee5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465ee50(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10465f484();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308b770) = 0;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  puRam0000000113815170 = (undefined1 *)plVar2;
  return;
}



/* Entry: 10465ee60; end: 10465ee8b; +[SCAdTrackLoggingEventType null] */

void FUN_10465ee60(void)

{
  if (lRam000000011308b778 != -1) {
    _swift_once(0x11308b778,FUN_10465ee50);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815170);
  return;
}



/* Entry: 10465ee8c; end: 10465eea7; +[SCAdTrackLoggingEventType adTrack] */

void FUN_10465ee8c(void)

{
  if (lRam000000011308b780 != -1) {
    _swift_once(0x11308b780,0x10465ee7c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815178);
  return;
}



/* Entry: 10465eea8; end: 10465eeeb;  */

void FUN_10465eea8(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    _swift_once(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 10465eeec; end: 10465eefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465eeec(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10465f484();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308b770) = 2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  puRam0000000113815180 = (undefined1 *)plVar2;
  return;
}



/* Entry: 10465eefc; end: 10465ef5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465eefc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  FUN_10465f484();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11308b770) = param_2;
  lStack_40 = lVar1;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  *param_3 = plVar2;
  return;
}



/* Entry: 10465ef5c; end: 10465ef77; +[SCAdTrackLoggingEventType webviewUserEvent] */

void FUN_10465ef5c(void)

{
  if (lRam000000011308b788 != -1) {
    _swift_once(0x11308b788,FUN_10465eeec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113815180);
  return;
}



/* Entry: 10465ef78; end: 10465efc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465ef78(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308b770) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10465efc4; end: 10465f02f; -[SCAdTrackLoggingEventType union:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465efc4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  uVar4 = *(ulong *)(param_1 + _DAT_11308b770);
  uVar3 = *(ulong *)(param_3 + _DAT_11308b770);
  lVar2 = lVar1;
  _objc_allocWithZone();
  *(ulong *)(lVar2 + _DAT_11308b770) = uVar3 | uVar4;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10465f030; end: 10465f04b; -[SCAdTrackLoggingEventType contains:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10465f030(long param_1,undefined8 param_2,long param_3)

{
  return (*(ulong *)(param_3 + _DAT_11308b770) &
         (*(ulong *)(param_1 + _DAT_11308b770) ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 10465f04c; end: 10465f063; -[SCAdTrackLoggingEventType isEmpty] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10465f04c(long param_1)

{
  return *(long *)(param_1 + _DAT_11308b770) == 0;
}



/* Entry: 10465f064; end: 10465f103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10465f064(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar1 = &lStack_58;
    _swift_dynamicCast(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x20 + _DAT_11308b770);
      lVar3 = *(long *)(lStack_58 + _DAT_11308b770);
      _objc_release();
      return lVar2 == lVar3;
    }
  }
  return false;
}



/* Entry: 10465f104; end: 10465f183; -[SCAdTrackLoggingEventType isEqual:] */

uint FUN_10465f104(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_10465f064(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10465f184; end: 10465f193; -[SCAdTrackLoggingEventType hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10465f184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb8d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSu9hashValueSivg_11034e218)(*(undefined8 *)(param_1 + _DAT_11308b770));
  return;
}



/* Entry: 10465f194; end: 10465f1eb; -[SCAdTrackLoggingEventType description] */

void FUN_10465f194(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10465f1ec();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10465f1ec; end: 10465f41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10465f1ec(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  undefined1 auVar10 [16];
  
  if (lRam000000011308b780 != -1) {
    _swift_once(0x11308b780,0x10465ee7c);
  }
  uVar9 = *(ulong *)(unaff_x20 + _DAT_11308b770);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(ulong *)(lRam0000000113815178 + _DAT_11308b770) & (uVar9 ^ 0xffffffffffffffff)) == 0) {
    puVar2 = (undefined *)0x0;
    func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar7 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      func_0x0001000d182c(puVar7,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = 0x6b636172546461;
    *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = 0xe700000000000000;
  }
  if (lRam000000011308b788 != -1) {
    _swift_once(0x11308b788,FUN_10465eeec);
  }
  if ((*(ulong *)(lRam0000000113815180 + _DAT_11308b770) & (uVar9 ^ 0xffffffffffffffff)) == 0) {
    puVar2 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar2 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      func_0x0001000d182c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar9 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      func_0x0001000d182c(puVar7,uVar9 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar9 + 1;
    *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x20) = 0xd000000000000010;
    *(undefined8 *)(puVar7 + uVar9 * 0x10 + 0x28) = 0x800000010f20a300;
  }
  else if (*(long *)(puVar7 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar7);
    uVar8 = 0xe400000000000000;
    uVar5 = 0x6c6c756e;
    goto LAB_10465f358;
  }
  uVar3 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar4 = uVar3;
  func_0x00010011d734();
  uVar5 = 0x202c;
  uVar8 = 0xe200000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0x202c,0xe200000000000000,uVar3,uVar4);
  _swift_bridgeObjectRelease(puVar7);
LAB_10465f358:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Entry: 10465f420; end: 10465f47f; -[SCAdTrackLoggingEventType init] */

void FUN_10465f420(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdTrackEventDataServices.AdTrackLoggingEventTypeObjc",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10465f44c);
  (*pcVar1)();
}



/* Entry: 10465f480; end: 10465f483; -[SCAdTrackLoggingEventType .cxx_destruct] */

void FUN_10465f480(void)

{
  return;
}



/* Entry: 10465f484; end: 10465f4a3;  */

void FUN_10465f484(void)

{
  _objc_opt_self(&PTR_PTR_1129cecc8);
  return;
}



/* Entry: 10465f4a4; end: 10465f4b7;  */

bool FUN_10465f4a4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10465f4b8; end: 10465f58f;  */

void FUN_10465f4b8(void)

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



/* Entry: 10465f590; end: 10465f5af;  */

void FUN_10465f590(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10465f5b0; end: 10465f5ef;  */

void FUN_10465f5b0(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b7b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd23690;
  _swift_getWitnessTable(&UNK_10dd23690,&UNK_110793260);
  puRam000000011308b7b8 = puVar1;
  return;
}



/* Entry: 10465f5f0; end: 10465f617;  */

undefined1  [16] FUN_10465f5f0(void)

{
  return ZEXT816(0x110793260);
}



/* Entry: 10465f618; end: 10465f657;  */

void FUN_10465f618(void)

{
  undefined *puVar1;
  
  if (puRam000000011308b7c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd23750;
  _swift_getWitnessTable(&UNK_10dd23750,&UNK_1107932d8);
  puRam000000011308b7c0 = puVar1;
  return;
}



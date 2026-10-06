/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104865bc0; end: 104865bcf; -[SCRegistrationPhoneNumber phoneNumber] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093408));
  return;
}



/* Entry: 104865bd0; end: 104865bdf; -[SCRegistrationPhoneNumber state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104865bd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113093410);
}



/* Entry: 104865be0; end: 104865beb; -[SCRegistrationPhoneNumber phoneVerifyToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865be0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113093418))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113093418);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104865bec; end: 104865bf7; -[SCRegistrationPhoneNumber authSessionPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865bec(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_113093420))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_113093420);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104865bf8; end: 104865c67;  */

void FUN_104865bf8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + *param_3))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + *param_3);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104865c68; end: 104865daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093408) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113093410) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093418);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093420);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104865db0; end: 104865ecb; -[SCRegistrationPhoneNumber initWithPhoneNumber:state:phoneVerifyToken:authSessionPayload:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865db0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 == 0) {
    _objc_retain(param_3);
    _objc_retain(param_6);
    lVar3 = -0x1000000000000000;
    lVar5 = param_2;
  }
  else {
    _objc_retain(param_3);
    _objc_retain(param_6);
    lVar3 = param_5;
    _objc_retain(param_5);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    lVar5 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (param_6 == 0) {
    lVar4 = 0;
    lVar5 = -0x1000000000000000;
  }
  else {
    lVar4 = param_6;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(param_6);
  }
  *(undefined8 *)(param_1 + _DAT_113093408) = param_3;
  *(undefined8 *)(param_1 + _DAT_113093410) = param_4;
  plVar1 = (long *)(param_1 + _DAT_113093418);
  *plVar1 = param_5;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_113093420);
  *plVar1 = lVar4;
  plVar1[1] = lVar5;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104865ecc; end: 104865f0b;  */

undefined8 FUN_104865ecc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_104866b24(param_1);
  FUN_104866c54(param_1);
  return uVar1;
}



/* Entry: 104865f0c; end: 104865f3f; -[SCRegistrationPhoneNumber hash] */

undefined8 FUN_104865f0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104865f40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104865f40; end: 104866067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104865f40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113093408) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104871a4c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113093410));
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093418))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093418);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093420))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093420);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x00010bfde980();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104866068; end: 1048663a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104866068(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long unaff_x20;
  uint uVar13;
  long lStack_88;
  long alStack_80 [4];
  
  lVar12 = unaff_x20;
  _swift_getObjectType();
  FUN_104866d9c(param_1,alStack_80,0x112d387f8,&UNK_10d902650);
  if (alStack_80[3] == 0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar7 = &lStack_88;
    _swift_dynamicCast(plVar7,alStack_80,PTR___sypN_11034f1a8 + 8,lVar12,6);
    if (((ulong)plVar7 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113093408) == 0) {
        uVar11 = (uint)(*(long *)(lStack_88 + _DAT_113093408) == 0);
      }
      else {
        lVar12 = *(long *)(lStack_88 + _DAT_113093408);
        if (lVar12 == 0) {
          lVar8 = 0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          lVar8 = 0;
          FUN_104872184();
        }
        alStack_80[0] = lVar12;
        alStack_80[3] = lVar8;
        _objc_retain(lVar12);
        uVar11 = 0;
        func_0x000104871b10();
        func_0x00010006e7f4(alStack_80);
      }
      iVar5 = *(int *)(unaff_x20 + _DAT_113093410);
      iVar6 = *(int *)(lStack_88 + _DAT_113093410);
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_113093418);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_113093418))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093418);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113093418))[1];
      if (uVar4 >> 0x3c < 0xf) {
        if (0xe < uVar3 >> 0x3c) goto LAB_1048661cc;
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        uVar9 = uVar2;
        func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
        uVar10 = (uint)uVar9;
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar2,uVar4);
      }
      else if (uVar3 >> 0x3c < 0xf) {
LAB_1048661cc:
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        func_0x0001000b44c0(uVar1,uVar3);
        uVar10 = 0;
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        func_0x0001000b44c0(uVar2,uVar4);
        uVar10 = 1;
      }
      uVar1 = *(undefined8 *)(lStack_88 + _DAT_113093420);
      uVar3 = ((undefined8 *)(lStack_88 + _DAT_113093420))[1];
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093420);
      uVar4 = ((undefined8 *)(unaff_x20 + _DAT_113093420))[1];
      if (uVar4 >> 0x3c < 0xf) {
        func_0x000100de78a0(uVar1,uVar3);
        if (0xe < uVar3 >> 0x3c) {
          func_0x000100de78a0(uVar2,uVar4);
          _objc_release(lStack_88);
          goto LAB_1048662ec;
        }
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        uVar9 = uVar2;
        func_0x000100e25fcc(uVar2,uVar4,uVar1,uVar3);
        uVar13 = (uint)uVar9;
        func_0x0001000b44c0(uVar1,uVar3);
        _objc_release(lStack_88);
        func_0x0001000b44c0(uVar1,uVar3);
        func_0x0001000b44c0(uVar2,uVar4);
      }
      else {
        func_0x000100de78a0(uVar1,uVar3);
        func_0x000100de78a0(uVar2,uVar4);
        _objc_release(lStack_88);
        if (uVar3 >> 0x3c < 0xf) {
LAB_1048662ec:
          func_0x0001000b44c0(uVar2,uVar4);
          func_0x0001000b44c0(uVar1,uVar3);
          uVar13 = 0;
        }
        else {
          func_0x0001000b44c0(uVar2,uVar4);
          uVar13 = 1;
        }
      }
      if ((uVar11 & iVar5 == iVar6) != 0) {
        uVar10 = uVar10 & uVar13;
        goto LAB_104866384;
      }
    }
  }
  uVar10 = 0;
LAB_104866384:
  return uVar10 & 1;
}



/* Entry: 1048663a8; end: 104866427; -[SCRegistrationPhoneNumber isEqual:] */

uint FUN_1048663a8(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104866068(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104866428; end: 10486642b; -[SCRegistrationPhoneNumber copyWithZone:] */

void FUN_104866428(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10486642c; end: 1048665bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486642c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093418))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093418);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2125c0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113093420))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093420);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2125e0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1048665bc; end: 10486660b; -[SCRegistrationPhoneNumber encodeWithCoder:] */

void FUN_1048665bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10486642c(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10486660c; end: 10486663b;  */

void FUN_10486660c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10486663c(param_1);
  return;
}



/* Entry: 10486663c; end: 1048669fb;  */

undefined8 FUN_10486663c(ulong param_1)

{
  int iVar1;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&uStack_b0;
  iVar2 = (int)&uStack_b0;
  iVar3 = (int)&uStack_b0;
  uVar4 = 0x554e5f454e4f4850;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554e5f454e4f4850,0xec0000005245424d);
  uVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (uVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
    _swift_unknownObjectRelease(uVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    FUN_104872184(0);
    _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
    uVar4 = uStack_b0;
    if (iVar1 == 0) {
      uVar4 = 0;
    }
  }
  uVar6 = 0x4554415453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554415453,0xe500000000000000);
  uVar5 = param_1;
  func_0x00010bf66f40();
  _objc_release(uVar6);
  if (uVar5 < 3) {
    uVar6 = 0xd000000000000012;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f2125c0);
    uVar5 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    if (uVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar5);
      _swift_unknownObjectRelease(uVar5);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uVar6 = 0;
      uVar5 = 0xf000000000000000;
    }
    else {
      _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,
                         PTR___s10Foundation4DataVN_110350ae0,6);
      uVar6 = uStack_b0;
      uVar5 = uStack_a8;
      if (iVar2 == 0) {
        uVar6 = 0;
        uVar5 = 0xf000000000000000;
      }
    }
    uVar7 = 0xd000000000000014;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2125e0);
    uVar8 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar8 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,uVar8);
      _swift_unknownObjectRelease(uVar8);
    }
    uStack_78 = uStack_98;
    uStack_80 = uStack_a0;
    lStack_68 = lStack_88;
    uStack_70 = uStack_90;
    if (lStack_88 == 0) {
      func_0x00010006e7f4(&uStack_80);
      uVar7 = 0;
      uVar8 = 0xf000000000000000;
    }
    else {
      _swift_dynamicCast(&uStack_b0,&uStack_80,PTR___sypN_11034f1a8 + 8,
                         PTR___s10Foundation4DataVN_110350ae0,6);
      uVar7 = uStack_b0;
      uVar8 = uStack_a8;
      if (iVar3 == 0) {
        uVar7 = 0;
        uVar8 = 0xf000000000000000;
      }
    }
    if (uVar5 >> 0x3c < 0xf) {
      func_0x00010006c00c(uVar6,uVar5);
      uVar9 = uVar6;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar6,uVar5);
      func_0x0001000b44c0(uVar6,uVar5);
    }
    else {
      uVar9 = 0;
    }
    if (uVar8 >> 0x3c < 0xf) {
      func_0x00010006c00c(uVar7,uVar8);
      uVar10 = uVar7;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar7,uVar8);
      func_0x0001000b44c0(uVar7,uVar8);
    }
    else {
      uVar10 = 0;
    }
    func_0x00010c035aa0();
    _objc_release(uVar4);
    func_0x0001000b44c0(uVar6,uVar5);
    func_0x0001000b44c0(uVar7,uVar8);
    _objc_release(uVar9);
    _objc_release(uVar10);
    _objc_release(param_1);
  }
  else {
    _objc_release(param_1);
    _objc_release(uVar4);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Entry: 1048669fc; end: 104866a23; -[SCRegistrationPhoneNumber initWithCoder:] */

void FUN_1048669fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10486663c();
  return;
}



/* Entry: 104866a24; end: 104866a57; -[SCRegistrationPhoneNumber description] */

void FUN_104866a24(void)

{
  undefined1 auStack_58 [72];
  
  FUN_104866c88(auStack_58);
  FUN_104866c54(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104866a58; end: 104866ad3; -[SCRegistrationPhoneNumber init] */

void FUN_104866a58(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationPhoneNumberWrapper.swift",0x4a,2,99,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104866aa0);
  (*pcVar1)();
}



/* Entry: 104866ad4; end: 104866b23; -[SCRegistrationPhoneNumber .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104866b04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104866b08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866ad4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093408));
  uVar1 = ((undefined8 *)(param_1 + _DAT_113093418))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_113093418));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104866b24; end: 104866c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866b24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _swift_getObjectType();
  lVar5 = param_1[1];
  if (lVar5 == 1) {
    uVar4 = 0;
  }
  else {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    uVar4 = *param_1;
    FUN_104872184(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(lVar5);
    FUN_1048721a4(uVar4,lVar5,uVar1,uVar2);
  }
  *(undefined8 *)(unaff_x20 + _DAT_113093408) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_113093410) = param_1[4];
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113093418);
  puVar3[1] = uStack_58;
  *puVar3 = uStack_60;
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113093420);
  puVar3[1] = uStack_68;
  *puVar3 = uStack_70;
  FUN_104866d9c(&uStack_60,auStack_80,0x112d56fe0,&UNK_10d91dda0);
  FUN_104866d9c(&uStack_70,auStack_80,0x112d56fe0,&UNK_10d91dda0);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104866c54; end: 104866c87;  */

undefined8 FUN_104866c54(undefined8 param_1)

{
  (*(code *)(undefined *)0x10485d5fc)();
  return param_1;
}



/* Entry: 104866c88; end: 104866d7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866c88(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(param_2 + _DAT_113093408);
  if (lVar6 == 0) {
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 1;
    uStack_50 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar6 + _DAT_1130937d8);
    puVar2 = (undefined8 *)(lVar6 + _DAT_1130937e0);
    uStack_48 = puVar1[1];
    uStack_50 = *puVar1;
    uVar7 = puVar1[1];
    uStack_58 = puVar2[1];
    uStack_60 = *puVar2;
    _swift_bridgeObjectRetain(puVar2[1]);
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar8 = *(undefined8 *)(param_2 + _DAT_113093410);
  uVar7 = *(undefined8 *)(param_2 + _DAT_113093418);
  uVar4 = ((undefined8 *)(param_2 + _DAT_113093418))[1];
  uVar3 = *(undefined8 *)(param_2 + _DAT_113093420);
  uVar5 = ((undefined8 *)(param_2 + _DAT_113093420))[1];
  func_0x000100de78a0(uVar7,uVar4);
  func_0x000100de78a0(uVar3,uVar5);
  param_1[1] = uStack_48;
  *param_1 = uStack_50;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[4] = uVar8;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar3;
  param_1[8] = uVar5;
  return;
}



/* Entry: 104866d7c; end: 104866d9b;  */

void FUN_104866d7c(void)

{
  _objc_opt_self(&PTR_PTR_1129ddc58);
  return;
}



/* Entry: 104866d9c; end: 104866de3;  */

undefined8 FUN_104866d9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 104866de4; end: 104866e3f; -[SCRegistrationUsername usernameText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866de4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113093450))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113093450);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104866e40; end: 104866e53; -[SCRegistrationUsername source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104866e40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113093458);
}



/* Entry: 104866e54; end: 104866f43; -[SCRegistrationUsername initWithUsernameText:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866e54(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_113093450);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_113093458) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104866f44; end: 104866f77; -[SCRegistrationUsername hash] */

undefined8 FUN_104866f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104866f78();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104866f78; end: 104867113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104866f78(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113093450))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093450);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_113093458));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104867114; end: 104867193; -[SCRegistrationUsername isEqual:] */

uint FUN_104867114(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x00010486700c(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104867194; end: 104867197; -[SCRegistrationUsername copyWithZone:] */

void FUN_104867194(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104867198; end: 104867263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_113093450))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093450);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x454d414e52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e52455355,0xed0000545845545f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x454352554f53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104867264; end: 1048672b3; -[SCRegistrationUsername encodeWithCoder:] */

void FUN_104867264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104867198(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048672b4; end: 1048672e3;  */

void FUN_1048672b4(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1048672e4(param_1);
  return;
}



/* Entry: 1048672e4; end: 1048674a3;  */

undefined8 FUN_1048672e4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  undefined8 unaff_x20;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  iVar1 = (int)&uStack_90;
  uVar2 = 0x454d414e52455355;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454d414e52455355,0xed0000545845545f);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    lVar3 = 0;
    uVar2 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_90,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar3 = lStack_88;
    uVar2 = uStack_90;
    if (iVar1 == 0) {
      uVar2 = 0;
      lVar3 = 0;
    }
  }
  uVar4 = 0x454352554f53;
  uVar6 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x454352554f53);
  lVar5 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar4);
  func_0x0001048620e8(lVar5);
  if ((uVar6 & 0xff) == 1) {
    _objc_release(param_1);
    _swift_bridgeObjectRelease(lVar3);
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  else {
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar3);
      _swift_bridgeObjectRelease(lVar3);
    }
    func_0x00010c05f860();
    _objc_release(uVar2);
    _objc_release(param_1);
  }
  return unaff_x20;
}



/* Entry: 1048674a4; end: 1048674cb; -[SCRegistrationUsername initWithCoder:] */

void FUN_1048674a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1048672e4();
  return;
}



/* Entry: 1048674cc; end: 1048674e7; -[SCRegistrationUsername description] */

void FUN_1048674cc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048674e8; end: 104867563; -[SCRegistrationUsername init] */

void FUN_1048674e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationUsernameWrapper.swift",0x47,2,0x48,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104867530);
  (*pcVar1)();
}



/* Entry: 104867564; end: 104867577; -[SCRegistrationUsername .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113093450 + 8))
  ;
  return;
}



/* Entry: 104867578; end: 104867597;  */

void FUN_104867578(void)

{
  _objc_opt_self(&PTR_PTR_1129ddd40);
  return;
}



/* Entry: 104867598; end: 10486759b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867598(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093450);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113093458) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10486759c; end: 1048675db;  */

undefined8 FUN_10486759c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1048682a0(param_1);
  FUN_104862a08(param_1);
  return uVar1;
}



/* Entry: 1048675dc; end: 1048676d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048675dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (*(long *)(unaff_x20 + _DAT_113093488) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104868580();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(param_1);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093490);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113093490))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113093498);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113093498))[1]);
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_1130934a0));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048676d4; end: 10486787f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1048676d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  long unaff_x20;
  long lVar11;
  long lStack_78;
  long alStack_70 [4];
  
  lVar11 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_70);
  if (alStack_70[3] == 0) {
    func_0x00010006e7f4(alStack_70);
  }
  else {
    plVar6 = &lStack_78;
    _swift_dynamicCast(plVar6,alStack_70,PTR___sypN_11034f1a8 + 8,lVar11,6);
    if (((ulong)plVar6 & 1) != 0) {
      if (*(long *)(unaff_x20 + _DAT_113093488) == 0) {
        uVar10 = (uint)(*(long *)(lStack_78 + _DAT_113093488) == 0);
      }
      else {
        lVar11 = *(long *)(lStack_78 + _DAT_113093488);
        if (lVar11 == 0) {
          lVar7 = 0;
          alStack_70[1] = 0;
          alStack_70[2] = 0;
        }
        else {
          lVar7 = 0;
          FUN_1048691b4();
        }
        alStack_70[0] = lVar11;
        alStack_70[3] = lVar7;
        _objc_retain(lVar11);
        uVar10 = 0;
        func_0x000104868648();
        func_0x00010006e7f4(alStack_70);
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113093490);
      uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113093490))[1];
      uVar1 = *(undefined8 *)(lStack_78 + _DAT_113093490);
      uVar3 = ((undefined8 *)(lStack_78 + _DAT_113093490))[1];
      func_0x00010006c00c(uVar1,uVar3);
      func_0x000100e25fcc(uVar8,uVar2,uVar1,uVar3);
      func_0x00010006c090(uVar1,uVar3);
      lVar11 = *(long *)(unaff_x20 + _DAT_113093498);
      if (lVar11 == *(long *)(lStack_78 + _DAT_113093498) &&
          ((long *)(unaff_x20 + _DAT_113093498))[1] == ((long *)(lStack_78 + _DAT_113093498))[1]) {
        uVar9 = 1;
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  ();
        uVar9 = (uint)lVar11;
      }
      bVar4 = *(byte *)(unaff_x20 + _DAT_1130934a0);
      bVar5 = *(byte *)(lStack_78 + _DAT_1130934a0);
      _objc_release(lStack_78);
      if ((uVar10 & (uint)uVar8 & 1) != 0) {
        uVar9 = uVar9 & ((bVar4 ^ bVar5) ^ 1);
        goto LAB_104867860;
      }
    }
  }
  uVar9 = 0;
LAB_104867860:
  return uVar9 & 1;
}



/* Entry: 104867880; end: 10486788f; -[SCRegistrationChallenge registrationChallengeServerResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113093488));
  return;
}



/* Entry: 104867890; end: 1048678eb; -[SCRegistrationChallenge authSessionPayload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867890(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113093490);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113093490))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1048678ec; end: 104867937; -[SCRegistrationChallenge clientRequestId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048678ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113093498);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113093498))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104867938; end: 104867947; -[SCRegistrationChallenge isFromResuming] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104867938(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130934a0);
}



/* Entry: 104867948; end: 104867a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113093488) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093490);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113093498);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_1130934a0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104867a90; end: 104867b87; -[SCRegistrationChallenge initWithRegistrationChallengeServerResponse:authSessionPayload:clientRequestId:isFromResuming:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867a90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  _objc_retain(param_3);
  uVar3 = param_4;
  _objc_retain(param_4);
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar4 = param_2;
  _objc_release(uVar3);
  uVar3 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_5);
  *(undefined8 *)(param_1 + _DAT_113093488) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_113093490);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113093498);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  *(undefined1 *)(param_1 + _DAT_1130934a0) = param_6;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104867b88; end: 104867bbb; -[SCRegistrationChallenge hash] */

undefined8 FUN_104867b88(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1048675dc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104867bbc; end: 104867c3b; -[SCRegistrationChallenge isEqual:] */

uint FUN_104867bbc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048676d4(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104867c3c; end: 104867c3f; -[SCRegistrationChallenge copyWithZone:] */

void FUN_104867c3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104867c40; end: 104867d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104867c40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f2126a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093490);
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113093490))[1]);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2125e0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113093498);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_113093498))[1]);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2126d0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2126f0);
  func_0x00010bf92da0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104867d9c; end: 104867deb; -[SCRegistrationChallenge encodeWithCoder:] */

void FUN_104867d9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104867c40(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104867dec; end: 104867e1b;  */

void FUN_104867dec(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104867e1c(param_1);
  return;
}



/* Entry: 104867e1c; end: 104868177;  */

undefined8 FUN_104867e1c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 unaff_x20;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  iVar2 = (int)&lStack_b0;
  uVar6 = 0;
  uVar8 = 0;
  uVar4 = 0xd000000000000026;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000026,0x800000010f2126a0);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar3 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    lVar3 = 0;
  }
  else {
    uVar4 = 0;
    FUN_1048691b4(0);
    _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,uVar4,6);
    lVar3 = lStack_b0;
    if (iVar2 == 0) {
      lVar3 = 0;
    }
  }
  uVar4 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f2125e0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    _objc_release(param_1);
LAB_10486810c:
    _objc_release(lVar3);
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
    uVar4 = uStack_a8;
    lVar5 = lStack_b0;
    if ((uVar6 & 1) == 0) {
      _objc_release(param_1);
    }
    else {
      uVar9 = 0xd000000000000011;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f2126d0);
      lVar7 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      if (lVar7 == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
        _swift_unknownObjectRelease(lVar7);
      }
      uStack_78 = uStack_98;
      uStack_80 = uStack_a0;
      lStack_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        _objc_release(lVar3);
        func_0x00010006c090(lVar5,uVar4);
        lVar3 = param_1;
        goto LAB_10486810c;
      }
      _swift_dynamicCast(&lStack_b0,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
      if ((uVar8 & 1) != 0) {
        uVar9 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f2126f0)
        ;
        func_0x00010bf66ce0(param_1);
        _objc_release(uVar9);
        lVar7 = lVar5;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar5,uVar4);
        lVar10 = lStack_b0;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_b0,uStack_a8);
        _swift_bridgeObjectRelease(uStack_a8);
        func_0x00010c03dae0();
        _objc_release(lVar3);
        func_0x00010006c090(lVar5,uVar4);
        _objc_release(lVar7);
        _objc_release(lVar10);
        _objc_release(param_1);
        return unaff_x20;
      }
      _objc_release(lVar3);
      func_0x00010006c090(lVar5,uVar4);
      lVar3 = param_1;
    }
    _objc_release(lVar3);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 104868178; end: 10486819f; -[SCRegistrationChallenge initWithCoder:] */

void FUN_104868178(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104867e1c();
  return;
}



/* Entry: 1048681a0; end: 1048681d3; -[SCRegistrationChallenge description] */

void FUN_1048681a0(void)

{
  undefined1 auStack_48 [56];
  
  FUN_1048683e0(auStack_48);
  FUN_104862a08(auStack_48);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048681d4; end: 10486824f; -[SCRegistrationChallenge init] */

void FUN_1048681d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationChallengeWrapper.swift",0x48,2,99,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10486821c);
  (*pcVar1)();
}



/* Entry: 104868250; end: 10486829f; -[SCRegistrationChallenge .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104868250(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113093488));
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_113093490),
                      ((undefined8 *)(param_1 + _DAT_113093490))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113093498 + 8))
  ;
  return;
}



/* Entry: 1048682a0; end: 1048683df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048682a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_c0 [2];
  long alStack_b0 [2];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _swift_getObjectType();
  if (*(char *)(param_1 + 1) == -1) {
    plVar8 = (long *)0x0;
  }
  else {
    uVar9 = *param_1;
    bVar5 = *(char *)(param_1 + 1) == '\x01';
    uVar1 = uVar9;
    if (bVar5) {
      uVar1 = 0;
    }
    plVar8 = alStack_c0;
    uVar3 = 0;
    if (bVar5) {
      plVar8 = alStack_b0;
      uVar3 = uVar9;
    }
    lVar6 = 0;
    FUN_1048691b4();
    lVar7 = lVar6;
    _objc_allocWithZone();
    *(bool *)(lVar7 + _DAT_1130934d0) = bVar5;
    *(undefined8 *)(lVar7 + _DAT_1130934d8) = uVar1;
    *(undefined8 *)(lVar7 + _DAT_1130934e0) = uVar3;
    puVar4 = PTR_s_init_1125d9248;
    *plVar8 = lVar7;
    plVar8[1] = lVar6;
    _objc_retain(uVar9);
    _objc_msgSendSuper2(plVar8,puVar4);
  }
  *(long **)(unaff_x20 + _DAT_113093488) = plVar8;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113093490);
  puVar2[1] = uStack_68;
  *puVar2 = uStack_70;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113093498);
  puVar2[1] = uStack_78;
  *puVar2 = uStack_80;
  *(undefined1 *)(unaff_x20 + _DAT_1130934a0) = *(undefined1 *)(param_1 + 6);
  func_0x0001006e36f4(&uStack_70,auStack_90);
  func_0x000100402194(&uStack_80,auStack_90);
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048683e0; end: 1048684d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048683e0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  undefined1 uVar8;
  
  lVar7 = *(long *)(param_2 + _DAT_113093488);
  if (lVar7 == 0) {
    lVar7 = 0;
    uVar8 = 0xff;
  }
  else {
    if (*(char *)(lVar7 + _DAT_1130934d0) == '\x01') {
      lVar7 = *(long *)(lVar7 + _DAT_1130934e0);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1048684d0);
        (*pcVar6)();
      }
      uVar8 = 1;
    }
    else {
      lVar7 = *(long *)(lVar7 + _DAT_1130934d8);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1048684d4);
        (*pcVar6)();
      }
      uVar8 = 0;
    }
    _objc_retain(lVar7);
  }
  lVar1 = *(long *)(param_2 + _DAT_113093490);
  lVar3 = ((long *)(param_2 + _DAT_113093490))[1];
  lVar2 = *(long *)(param_2 + _DAT_113093498);
  lVar4 = ((long *)(param_2 + _DAT_113093498))[1];
  uVar5 = *(undefined1 *)(param_2 + _DAT_1130934a0);
  func_0x00010006c00c(lVar1,lVar3);
  *param_1 = lVar7;
  *(undefined1 *)(param_1 + 1) = uVar8;
  param_1[2] = lVar1;
  param_1[3] = lVar3;
  param_1[4] = lVar2;
  param_1[5] = lVar4;
  *(undefined1 *)(param_1 + 6) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(lVar4);
  return;
}



/* Entry: 1048684d4; end: 1048684f3;  */

void FUN_1048684d4(void)

{
  _objc_opt_self(&PTR_PTR_1129dde18);
  return;
}



/* Entry: 1048684f4; end: 10486875f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048684f4(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long alStack_50 [2];
  long alStack_40 [2];
  
  lVar4 = unaff_x20;
  _objc_allocWithZone();
  plVar2 = alStack_40;
  uVar1 = param_1;
  uVar3 = 0;
  if (param_2 != '\x01') {
    uVar1 = 0;
    plVar2 = alStack_50;
    uVar3 = param_1;
  }
  *(bool *)(lVar4 + _DAT_1130934d0) = param_2 == '\x01';
  *(undefined8 *)(lVar4 + _DAT_1130934d8) = uVar3;
  *(undefined8 *)(lVar4 + _DAT_1130934e0) = uVar1;
  *plVar2 = lVar4;
  plVar2[1] = unaff_x20;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104868760; end: 10486880b;  */

void FUN_104868760(void)

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



/* Entry: 10486880c; end: 10486884b;  */

void FUN_10486880c(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 10486884c; end: 1048688a3; -[SCRegistrationChallengeServerResponse description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486884c(long param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130934d0) == '\x01') {
    if (*(long *)(param_1 + _DAT_1130934e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104868874);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_1130934d8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048688a4);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048688a4; end: 1048688eb; -[SCRegistrationChallengeServerResponse init] */

void FUN_1048688a4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationChallengeServerResponseWrapper.swift"
             ,0x56,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048688ec);
  (*pcVar1)();
}



/* Entry: 1048688ec; end: 10486891f; -[SCRegistrationChallengeServerResponse hash] */

undefined8 FUN_1048688ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104868580();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104868920; end: 10486899f; -[SCRegistrationChallengeServerResponse isEqual:] */

uint FUN_104868920(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000104868648(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048689a0; end: 1048689a3; -[SCRegistrationChallengeServerResponse copyWithZone:] */

void FUN_1048689a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048689a4; end: 104868acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048689a4(undefined8 param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar5 = 0xd000000000000017;
  if (*(char *)(unaff_x20 + _DAT_1130934d0) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_1130934e0) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104868ac8);
      (*pcVar3)();
    }
    pcVar1 = "SUBTYPE_USER_PASSED_CHALLENGE";
    uVar4 = 0xd000000000000026;
    uVar5 = 0xd00000000000001d;
    pcVar2 = "USER_PASSED_CHALLENGE_BOOOT_STRAP_DATA";
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_1130934d8) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104868acc);
      (*pcVar3)();
    }
    pcVar1 = "SUBTYPE_USER_CHALLENGED";
    pcVar2 = "USER_CHALLENGED_CHALLENGE_DATA";
    uVar4 = 0xd00000000000001e;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar4,(ulong)(pcVar2 + -0x20) | 0x8000000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar4);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar4 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104868acc; end: 104868b1b; -[SCRegistrationChallengeServerResponse encodeWithCoder:] */

void FUN_104868acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1048689a4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104868b1c; end: 104868b4b;  */

void FUN_104868b1c(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_104868b4c(param_1);
  return;
}



/* Entry: 104868b4c; end: 104868f3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104868b4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = auStack_c0;
  _swift_getObjectType();
  uVar1 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar6 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_104868ee4:
    uStack_90 = uStack_70;
    uStack_88 = uStack_68;
    uStack_80 = uStack_60;
    lStack_78 = lStack_58;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    plVar3 = &lStack_a0;
    _swift_dynamicCast(plVar3,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_a0;
    if (((ulong)plVar3 & 1) != 0) {
      if ((lStack_a0 != -0x2fffffffffffffe9) || (lStack_98 != -0x7ffffffef0ded7d0)) {
        uVar4 = 0xd000000000000017;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0xd000000000000017,0x800000010f212830,lStack_a0,lStack_98,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0xd00000000000001d;
          if ((lVar2 == -0x2fffffffffffffe3) && (lStack_98 == -0x7ffffffef0ded810)) {
            _swift_bridgeObjectRelease(0x800000010f2127f0);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001d,0x800000010f2127f0,lVar2,lStack_98,0);
            _swift_bridgeObjectRelease(lStack_98);
            if ((uVar4 & 1) == 0) goto LAB_104868ef8;
          }
          uVar1 = 0xd000000000000026;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000026,0x800000010f2127c0);
          lVar2 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          if (lVar2 == 0) {
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
            _swift_unknownObjectRelease(lVar2);
          }
          uStack_68 = uStack_88;
          uStack_70 = uStack_90;
          lStack_58 = lStack_78;
          uStack_60 = uStack_80;
          if (lStack_78 == 0) goto LAB_104868ee4;
          uVar1 = 0;
          func_0x0001048690bc(0,0x1130932e0,&PTR_PTR_1126af830);
          plVar3 = &lStack_a0;
          _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
          if (((ulong)plVar3 & 1) != 0) {
            _objc_allocWithZone();
            *(undefined1 *)(unaff_x20 + _DAT_1130934d0) = 1;
            *(undefined8 *)(unaff_x20 + _DAT_1130934d8) = 0;
            *(long *)(unaff_x20 + _DAT_1130934e0) = lStack_a0;
            puVar6 = PTR_s_init_1125d9248;
            _objc_retain(lStack_a0);
            puVar5 = auStack_b0;
            goto LAB_104868d5c;
          }
          goto LAB_104868ef8;
        }
      }
      _swift_bridgeObjectRelease(lStack_98);
      uVar1 = 0xd00000000000001e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001e,0x800000010f212810);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      if (lVar2 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) goto LAB_104868ee4;
      uVar1 = 0;
      func_0x0001048690bc(0,0x1130934e8,&PTR_PTR_1126e2db0);
      plVar3 = &lStack_a0;
      _swift_dynamicCast(plVar3,&uStack_70,puVar6 + 8,uVar1,6);
      if (((ulong)plVar3 & 1) != 0) {
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_1130934d0) = 0;
        *(long *)(unaff_x20 + _DAT_1130934d8) = lStack_a0;
        *(undefined8 *)(unaff_x20 + _DAT_1130934e0) = 0;
        puVar6 = PTR_s_init_1125d9248;
        _objc_retain(lStack_a0);
LAB_104868d5c:
        _objc_msgSendSuper2(puVar5,puVar6);
        _objc_release(lStack_a0);
        _objc_release(param_1);
        _swift_getObjectType();
        _swift_deallocPartialClassInstance();
        return puVar5;
      }
    }
LAB_104868ef8:
    _objc_release(param_1);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 104868f3c; end: 104868f63; -[SCRegistrationChallengeServerResponse initWithCoder:] */

void FUN_104868f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_104868b4c();
  return;
}



/* Entry: 104868f64; end: 104868fd7; +[SCRegistrationChallengeServerResponse userChallengedWithChallengeData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104868f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130934d0) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130934d8) = param_3;
  *(undefined8 *)(lVar2 + _DAT_1130934e0) = 0;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104868fd8; end: 1048690fb; +[SCRegistrationChallengeServerResponse userPassedChallengeWithBoootStrapData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104868fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130934d0) = 1;
  *(undefined8 *)(lVar2 + _DAT_1130934d8) = 0;
  *(undefined8 *)(lVar2 + _DAT_1130934e0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048690fc; end: 104869147; -[SCRegistrationChallengeServerResponse matchUserChallenged:userPassedChallenge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048690fc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_1130934d0) == '\x01') {
    param_3 = param_4;
    if (*(long *)(param_1 + _DAT_1130934e0) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104869128);
      (*pcVar1)();
    }
  }
  else if (*(long *)(param_1 + _DAT_1130934d8) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104869148);
    (*pcVar1)();
  }
                    /* WARNING: Could not recover jumptable at 0x000104869140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 104869148; end: 10486917b;  */

void FUN_104869148(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10486917c; end: 1048691b3; -[SCRegistrationChallengeServerResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486917c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130934d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130934e0));
  return;
}



/* Entry: 1048691b4; end: 1048691d3;  */

void FUN_1048691b4(void)

{
  _objc_opt_self(&PTR_PTR_1129ddf00);
  return;
}



/* Entry: 1048691d4; end: 10486933b;  */

int FUN_1048691d4(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_104869250;
        goto LAB_104869234;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_104869234:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_104869250:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10486933c; end: 10486937b;  */

void FUN_10486933c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113093518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd3939c;
  _swift_getWitnessTable(&UNK_10dd3939c,&UNK_1107a5598);
  puRam0000000113093518 = puVar1;
  return;
}



/* Entry: 10486937c; end: 104869403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10486937c(void)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  uVar1 = (ulong)*(byte *)(unaff_x20 + _DAT_113093520);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113093528) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10486bf04();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 104869404; end: 10486954b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_104869404(undefined8 param_1)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lStack_58;
  long alStack_50 [4];
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_50);
  if (alStack_50[3] == 0) {
    func_0x00010006e7f4(alStack_50);
  }
  else {
    plVar2 = &lStack_58;
    _swift_dynamicCast(plVar2,alStack_50,PTR___sypN_11034f1a8 + 8,lVar6,6);
    if (((ulong)plVar2 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_113093520);
      lVar6 = lStack_58;
      if (cVar1 == *(char *)(lStack_58 + _DAT_113093520)) {
        if ((cVar1 == '\0') || (cVar1 == '\x01')) {
          _objc_release();
          uVar4 = 1;
          goto LAB_1048694f4;
        }
        if (*(long *)(unaff_x20 + _DAT_113093528) != 0) {
          lVar6 = *(long *)(lStack_58 + _DAT_113093528);
          if (lVar6 == 0) {
            uVar3 = 0;
            alStack_50[1] = 0;
            alStack_50[2] = 0;
          }
          else {
            uVar3 = 0;
            FUN_10486d6b0();
          }
          alStack_50[0] = lVar6;
          alStack_50[3] = uVar3;
          _objc_retain(lVar6);
          plVar2 = alStack_50;
          FUN_10486c0c4(plVar2);
          uVar4 = (uint)plVar2;
          _objc_release(lStack_58);
          func_0x00010006e7f4(alStack_50);
          goto LAB_1048694f4;
        }
        lVar5 = *(long *)(lStack_58 + _DAT_113093528);
        lVar6 = lVar5;
        _objc_retain(lVar5);
        _objc_release(lStack_58);
        if (lVar5 == 0) {
          uVar4 = 1;
          goto LAB_1048694f4;
        }
      }
      _objc_release(lVar6);
    }
  }
  uVar4 = 0;
LAB_1048694f4:
  return uVar4 & 1;
}



/* Entry: 10486954c; end: 1048695f7;  */

void FUN_10486954c(void)

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



/* Entry: 1048695f8; end: 10486962f;  */

void FUN_1048695f8(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 104869630; end: 104869673; -[SCRegistrationMethod description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869630(long param_1)

{
  code *pcVar1;
  
  if ((1 < *(byte *)(param_1 + _DAT_113093520)) && (*(long *)(param_1 + _DAT_113093528) == 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x104869674);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104869674; end: 1048696bb; -[SCRegistrationMethod init] */

void FUN_104869674(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCResumeRegistrationStorageServices/SCRegistrationMethodWrapper.swift",0x45,2,0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048696bc);
  (*pcVar1)();
}



/* Entry: 1048696bc; end: 1048696ef; -[SCRegistrationMethod hash] */

undefined8 FUN_1048696bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10486937c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1048696f0; end: 10486976f; -[SCRegistrationMethod isEqual:] */

uint FUN_1048696f0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_104869404(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104869770; end: 104869773; -[SCRegistrationMethod copyWithZone:] */

void FUN_104869770(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 104869774; end: 1048698ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104869774(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + _DAT_113093520) == '\0') {
    uVar3 = 0x800000010f2128a0;
    uVar2 = 0xd000000000000016;
  }
  else if (*(char *)(unaff_x20 + _DAT_113093520) == '\x01') {
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xeb000000004f474e;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_113093528) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1048698ac);
      (*pcVar1)();
    }
    uVar2 = 0x505f485455415f4f;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f485455415f4f,0xed0000304d415241);
    func_0x00010bf93020(param_1);
    _objc_release(uVar2);
    uVar2 = 0x5f45505954425553;
    uVar3 = 0xed0000485455414f;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar3);
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x00010bf93020(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1048698ac; end: 1048698fb; -[SCRegistrationMethod encodeWithCoder:] */

void FUN_1048698ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_104869774(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1048698fc; end: 10486992b;  */

void FUN_1048698fc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10486992c(param_1);
  return;
}



/* Entry: 10486992c; end: 104869cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10486992c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar6 = auStack_d0;
  _swift_getObjectType();
  uVar2 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
LAB_104869c80:
    uStack_70 = uStack_90;
    uStack_68 = uStack_88;
    uStack_60 = uStack_80;
    lStack_58 = lStack_78;
    _objc_release(param_1);
    func_0x00010006e7f4(&uStack_70);
    goto LAB_104869c9c;
  }
  plVar4 = &lStack_a0;
  _swift_dynamicCast(plVar4,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  lVar3 = lStack_a0;
  if (((ulong)plVar4 & 1) == 0) {
LAB_104869c94:
    _objc_release(param_1);
LAB_104869c9c:
    _swift_getObjectType();
    _swift_deallocPartialClassInstance();
    return (undefined1 *)0x0;
  }
  if ((lStack_a0 == -0x2fffffffffffffea) && (lStack_98 == -0x7ffffffef0ded760)) {
LAB_104869a44:
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113093520) = 0;
    *(undefined8 *)(unaff_x20 + _DAT_113093528) = 0;
  }
  else {
    uVar7 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000016,0x800000010f2128a0,lStack_a0,lStack_98,0);
    if ((uVar7 & 1) != 0) goto LAB_104869a44;
    uVar7 = 0x5f45505954425553;
    if (((lVar3 != 0x5f45505954425553) || (lStack_98 != -0x14ffffffffb0b8b2)) &&
       (uVar5 = uVar7,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (0x5f45505954425553,0xeb000000004f474e,lVar3,lStack_98,0), (uVar5 & 1) == 0)) {
      if ((lVar3 == 0x5f45505954425553) && (lStack_98 == -0x12ffffb7abaabeb1)) {
        _swift_bridgeObjectRelease(0xed0000485455414f);
      }
      else {
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x5f45505954425553,0xed0000485455414f,lVar3,lStack_98,0);
        _swift_bridgeObjectRelease(lStack_98);
        if ((uVar7 & 1) == 0) goto LAB_104869c94;
      }
      uVar2 = 0x505f485455415f4f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x505f485455415f4f,0xed0000304d415241);
      lVar3 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      if (lVar3 == 0) {
        uStack_88 = 0;
        uStack_90 = 0;
        lStack_78 = 0;
        uStack_80 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar3);
        _swift_unknownObjectRelease(lVar3);
      }
      uStack_68 = uStack_88;
      uStack_70 = uStack_90;
      lStack_58 = lStack_78;
      uStack_60 = uStack_80;
      if (lStack_78 == 0) goto LAB_104869c80;
      uVar2 = 0;
      FUN_10486d6b0(0);
      plVar4 = &lStack_a0;
      _swift_dynamicCast(plVar4,&uStack_70,puVar1 + 8,uVar2,6);
      if (((ulong)plVar4 & 1) != 0) {
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_113093520) = 2;
        *(long *)(unaff_x20 + _DAT_113093528) = lStack_a0;
        puVar1 = PTR_s_init_1125d9248;
        lVar3 = lStack_a0;
        _objc_retain(lStack_a0);
        puVar6 = auStack_b0;
        _objc_msgSendSuper2(puVar6,puVar1);
        _objc_release(lVar3);
        goto LAB_104869a84;
      }
      goto LAB_104869c94;
    }
    _swift_bridgeObjectRelease(lStack_98);
    _objc_allocWithZone();
    *(undefined1 *)(unaff_x20 + _DAT_113093520) = 1;
    *(undefined8 *)(unaff_x20 + _DAT_113093528) = 0;
    puVar6 = auStack_c0;
  }
  _objc_msgSendSuper2(puVar6,PTR_s_init_1125d9248);
LAB_104869a84:
  _objc_release(param_1);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return puVar6;
}



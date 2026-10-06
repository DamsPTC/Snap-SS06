/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0004ebc4; end: 0004f3eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_0004ebc4(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5,
            long param_6,ulong param_7,undefined4 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  long lStack_f8;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_90 [48];
  
  puStack_110 = (undefined *)CONCAT44(puStack_110._4_4_,param_8);
  lVar12 = unaff_x20;
  puStack_108 = param_1;
  _swift_getObjectType();
  lVar1 = 0xae6dd0;
  puVar2 = &UNK_007ce690;
  lStack_f8 = lVar12;
  func_0x000115a8(0xae6dd0,&UNK_007ce690);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar14 = (long)&puStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_00999f48)();
  lVar13 = lVar14 - extraout_x12;
  lVar1 = 0;
  __s8Dispatch0A3QoSV0B6SClassOMa();
  lVar16 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar16 + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_6 == 0) {
    puStack_100 = (undefined *)0x0;
    if ((param_7 & 1) == 0) goto LAB_0004ed90;
LAB_0004ed14:
    puVar15 = PTR__OBJC_CLASS___SCAPIUserAgentHelper_00ac3170;
    _objc_opt_self();
    func_0x00793380();
    _objc_retainAutoreleasedReturnValue();
    if (puVar15 == (undefined *)0x0) {
      __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(puVar2);
    }
    puVar2 = PTR_PTR_00ac2ea0;
    _objc_allocWithZone();
    func_0x00786d00();
    _objc_release(puVar15);
  }
  else {
    puVar15 = PTR_PTR_00ac2f08;
    _objc_allocWithZone();
    puVar2 = (undefined *)0x0;
    func_0x00050b14(0,0xae8010,&PTR__OBJC_CLASS___NSNumber_00ac29d8);
    puVar3 = puVar2;
    func_0x000505e0();
    lVar4 = param_6;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (param_6,puVar2,PTR___sSSN_0099b040,puVar3);
    func_0x00786ae0();
    puStack_100 = puVar15;
    _swift_bridgeObjectRelease(param_6);
    _objc_release(lVar4);
    if ((param_7 & 1) != 0) goto LAB_0004ed14;
LAB_0004ed90:
    puVar2 = (undefined *)0x0;
  }
  (**(code **)(lVar16 + 0x68))
            (lVar12,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_0099bc88
             ,lVar1);
  puVar15 = PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCQueuePerformer_00ac2cb0);
  uVar5 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x80000000008b6070);
  __s8Dispatch0A3QoSV0B6SClassO8rawValueSo11qos_class_tavg();
  func_0x00785a40(puVar15);
  _objc_release(uVar5);
  (**(code **)(lVar16 + 8))(lVar12,lVar1);
  puVar3 = PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828;
  _objc_allocWithZone(PTR__OBJC_CLASS___SCNativeDispatchQueue_00ac2828);
  func_0x00786460();
  _objc_release(puVar15);
  if (param_5 == 0) {
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar15 = PTR__OBJC_CLASS___SCNativeGrapheneExtensionLoggerDelegate_00ac28c0;
    _objc_allocWithZone();
    func_0x00785780();
  }
  puVar6 = puStack_108;
  if (param_2 == 0) {
    puVar6 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
    _objc_opt_self();
    func_0x007817a0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar13);
      _objc_release(puVar6);
    }
    lVar1 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar13,puVar6 == (undefined *)0x0,1,lVar1);
    lVar12 = 0x62645f6669746f6e;
    lVar1 = lVar13;
    func_0x00050408(lVar13,0x62645f6669746f6e,0xef6574696c71732e);
    func_0x00050588(lVar13,0xae6dd0,&UNK_007ce690);
    if (lVar12 == 0) {
      _objc_release(puVar3);
      _objc_release(puStack_100);
    }
    else {
      puVar7 = PTR_PTR_00ac2ee8;
      _objc_allocWithZone(PTR_PTR_00ac2ee8);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar1,lVar12);
      _swift_bridgeObjectRelease(lVar12);
      puVar6 = puStack_100;
      func_0x007852a0(puVar7);
      _objc_release(lVar1);
      puVar8 = PTR_PTR_00ac2ed8;
      _objc_opt_self();
      func_0x007810c0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar8 != (undefined *)0x0) {
        lVar1 = 0;
        func_0x00050b14(0,0xae8000,&PTR_PTR_00ac2ed8);
        ppuStack_a0 = &PTR_DAT_0099f780;
        puStack_c0 = puVar8;
        lStack_a8 = lVar1;
        _objc_release(puVar15);
        _objc_release(puVar7);
        _objc_release(puVar3);
LAB_0004f270:
        _objc_release(puVar6);
        _objc_release(puVar2);
        if (lVar1 != 0) {
          func_0x000505c8(&puStack_c0,auStack_90);
          func_0x000505c8(auStack_90,unaff_x20 + _DAT_00ae7ff8);
          lStack_c8 = lStack_f8;
          puVar10 = auStack_d0;
          _objc_msgSendSuper2(puVar10,PTR_s_init_00abbf70);
          _objc_release(param_3);
          _objc_release(param_5);
          _objc_release(param_4);
          return puVar10;
        }
        goto LAB_0004f388;
      }
      _objc_release(puVar7);
      _objc_release(puVar3);
      _objc_release(puVar6);
    }
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    puVar7 = puVar6;
    uVar11 = param_2;
    func_0x000533f8(puVar6);
    if (uVar11 >> 0x3c < 0xf) {
      puVar8 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_00ac2a70;
      puStack_110 = puVar15;
      _objc_opt_self();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(puVar6,param_2);
      func_0x007817c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      if (puVar8 != (undefined *)0x0) {
        __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar14,puVar8);
        _objc_release(puVar8);
      }
      lVar1 = 0;
      __s10Foundation3URLVMa();
      (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar14,puVar8 == (undefined *)0x0,1,lVar1);
      lVar12 = 0x62645f6669746f6e;
      lVar1 = lVar14;
      func_0x00050408(lVar14,0x62645f6669746f6e,0xef6574696c71732e);
      func_0x00050588(lVar14,0xae6dd0,&UNK_007ce690);
      if (lVar12 == 0) {
        func_0x00023344(puVar7,uVar11);
        _swift_bridgeObjectRelease(param_2);
        _objc_release(puVar3);
        _objc_release(puStack_100);
        puVar15 = puStack_110;
      }
      else {
        puVar6 = PTR_PTR_00ac3698;
        _objc_allocWithZone(PTR_PTR_00ac3698);
        func_0x00023304(puVar7,uVar11);
        puVar15 = puVar7;
        __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(puVar7,uVar11);
        func_0x00785860(puVar6);
        _objc_release(puVar15);
        func_0x00023344(puVar7,uVar11);
        puVar8 = PTR_PTR_00ac2ee0;
        _objc_allocWithZone(PTR_PTR_00ac2ee0);
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar1,lVar12);
        _swift_bridgeObjectRelease(lVar12);
        puVar15 = puStack_100;
        func_0x00786d60(puVar8);
        _objc_release(puVar6);
        _objc_release(lVar1);
        puVar9 = PTR_PTR_00ac2ed0;
        _objc_opt_self();
        puVar6 = puStack_110;
        func_0x007810e0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar9 != (undefined *)0x0) {
          lVar1 = 0;
          func_0x00050b14(0,0xae8008,&PTR_PTR_00ac2ed0);
          ppuStack_a0 = &PTR_DAT_0099f758;
          puStack_108 = puVar2;
          puStack_c0 = puVar9;
          lStack_a8 = lVar1;
          _swift_bridgeObjectRelease(param_2);
          _objc_release(puVar3);
          _objc_release(puVar15);
          _objc_release(puStack_108);
          func_0x00023344(puVar7,uVar11);
          puVar2 = puVar8;
          goto LAB_0004f270;
        }
        _swift_bridgeObjectRelease(param_2);
        _objc_release(puVar3);
        _objc_release(puVar15);
        _objc_release(puVar2);
        func_0x00023344(puVar7,uVar11);
        puVar15 = puVar6;
        puVar2 = puVar8;
      }
    }
    else {
      _swift_bridgeObjectRelease(param_2);
      _objc_release(puVar3);
      _objc_release(puStack_100);
    }
  }
  _objc_release(puVar2);
  ppuStack_a0 = (undefined **)0x0;
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  _objc_release(puVar15);
LAB_0004f388:
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00050588(&puStack_c0,0xae7ff0,&UNK_007cf478);
  _swift_deallocPartialClassInstance(unaff_x20,lStack_f8,0x30,7);
  return (undefined1 *)0x0;
}



/* Entry: 004ad888; end: 004ad893;  */

void FUN_004ad888(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_0099a7c0)();
  return;
}



/* Entry: 004ad8cc; end: 004ad8d7;  */

void FUN_004ad8cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_0099a7b8)();
  return;
}



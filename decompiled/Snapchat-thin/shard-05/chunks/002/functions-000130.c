/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b98e6c; end: 103b98e97; +[SCAdPlayableContentLayer playableURLKey] */

void FUN_103b98e6c(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f105b50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b98e98; end: 103b98ea3;  */

undefined * FUN_103b98e98(void)

{
  return &UNK_1106ddee8;
}



/* Entry: 103b98ea4; end: 103b992a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b98ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 auStack_d0 [4];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  auStack_d0[3] = param_2;
  uStack_b0 = param_3;
  func_0x000107c614f0();
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)auStack_d0 - extraout_x8);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = _DAT_11307abc8;
  lVar14 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_4 + _DAT_11307abc8);
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61170(param_4);
LAB_103b99044:
    func_0x000107c61170(param_1);
    (**(code **)(lVar13 + 0x38))(puVar5,1,1,lVar1);
LAB_103b99064:
    uVar9 = 0x112d36580;
    puVar10 = &UNK_10d9016d0;
  }
  else {
    uStack_a8 = param_1;
    func_0x000107c61434(lVar11);
    uVar8 = 0;
    lVar2 = -0x2fffffffffffffe0;
    func_0x000100029284(0xd000000000000020);
    if ((uVar8 & 1) == 0) {
      func_0x000107c61170(param_4);
      func_0x000107c6142c(lVar11);
      param_1 = uStack_a8;
      goto LAB_103b99044;
    }
    func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar2 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar11);
    puVar10 = PTR___sypN_11034f1a8;
    puVar3 = puVar5;
    func_0x000107c6147c(puVar5,&uStack_80,PTR___sypN_11034f1a8 + 8,lVar1,6);
    (**(code **)(lVar13 + 0x38))(puVar5,(uint)puVar3 ^ 1,1,lVar1);
    puVar3 = puVar5;
    (**(code **)(lVar13 + 0x30))(puVar5,1,lVar1);
    if ((int)puVar3 == 1) {
      func_0x000107c61170(param_4);
      func_0x000107c61170(uStack_a8);
      goto LAB_103b99064;
    }
    (**(code **)(lVar13 + 0x20))(lVar14,puVar5,lVar1);
    lVar12 = *(long *)(param_4 + lVar12);
    if (*(long *)(lVar12 + 0x10) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(lVar12);
      lVar11 = -0x2fffffffffffffd9;
      uVar8 = 0;
      func_0x000100029284(0xd000000000000027);
      if ((uVar8 & 1) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        func_0x0001000bb420(*(long *)(lVar12 + 0x38) + lVar11 * 0x20,&uStack_80);
      }
      func_0x000107c6142c(lVar12);
      uVar9 = uStack_a8;
      if (lStack_68 != 0) {
        uVar4 = 0x112ff2540;
        func_0x0001000285a8(0x112ff2540,&UNK_10dc5da60);
        puVar5 = &uStack_90;
        func_0x000107c6147c(puVar5,&uStack_80,puVar10 + 8,uVar4,6);
        if (((ulong)puVar5 & 1) != 0) {
          auStack_d0[1] = uStack_88;
          auStack_d0[0] = uStack_90;
          (**(code **)(lVar13 + 0x10))(unaff_x20 + _DAT_11380cf00,lVar14,lVar1);
          puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ff2570);
          puVar5[1] = auStack_d0[1];
          *puVar5 = auStack_d0[0];
          func_0x0001002ed07c(0);
          uVar4 = auStack_d0[0];
          func_0x000107c615f0(auStack_d0[0]);
          uVar6 = 0;
          func_0x000107c6010c(0);
          puVar7 = &stack0xffffffffffffff60;
          func_0x000107c61154(puVar7,PTR_s_initWithIsRecyclable_ctaType_uni_1125e5730,uVar6,
                              auStack_d0[3],uStack_b0,param_4);
          func_0x000107c615e8(uVar4);
          func_0x000107c61170(param_4);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar9);
          (**(code **)(lVar13 + 8))(lVar14,lVar1);
          return puVar7;
        }
        (**(code **)(lVar13 + 8))(lVar14,lVar1);
        func_0x000107c61170(param_4);
        func_0x000107c61170(uVar9);
        goto LAB_103b9907c;
      }
    }
    uVar9 = uStack_a8;
    (**(code **)(lVar13 + 8))(lVar14,lVar1);
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar9);
    uVar9 = 0x112d387f8;
    puVar10 = &UNK_10d902650;
    puVar5 = &uStack_80;
  }
  func_0x000103b995cc(puVar5,uVar9,puVar10);
LAB_103b9907c:
  func_0x000107c61464();
  return (undefined1 *)0x0;
}



/* Entry: 103b992a4; end: 103b99307; -[SCAdPlayableContentLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

void FUN_103b992a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_103b98ea4(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b99308; end: 103b994b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b99308(undefined8 param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  long extraout_x8;
  uint uVar3;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [8];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x000103b995cc(auStack_70,0x112d387f8,&UNK_10d902650);
  }
  else {
    plVar1 = &lStack_78;
    func_0x000107c6147c(plVar1,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar1 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) {
        puVar4 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_70,lStack_58);
        lVar5 = *(long *)(lStack_58 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
        puVar2 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar5 + 0x10))(puVar2);
        puVar4 = puVar2;
        func_0x000107c605b0(puVar2,lStack_58);
        (**(code **)(lVar5 + 8))(puVar2,lStack_58);
        func_0x000100183ab8(auStack_70);
      }
      puVar2 = &stack0xffffffffffffff78;
      func_0x000107c61154(puVar2,PTR_s_isEqual__1125fa0c8,puVar4);
      func_0x000107c615e8(puVar4);
      if (((int)puVar2 != 0) &&
         (*(long *)(unaff_x20 + _DAT_112ff2570) == *(long *)(lStack_78 + _DAT_112ff2570))) {
        lVar5 = unaff_x20 + _DAT_11380cf00;
        func_0x000107c5edac(lVar5,lStack_78 + _DAT_11380cf00);
        uVar3 = (uint)lVar5;
        func_0x000107c61170(lStack_78);
        goto LAB_103b99470;
      }
      func_0x000107c61170(lStack_78);
    }
  }
  uVar3 = 0;
LAB_103b99470:
  return uVar3 & 1;
}



/* Entry: 103b994b4; end: 103b99543; -[SCAdPlayableContentLayer isEqual:] */

uint FUN_103b994b4(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b99308(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000103b995cc(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103b99544; end: 103b9954b; -[SCAdPlayableContentLayer layerContentType] */

undefined8 FUN_103b99544(void)

{
  return 1;
}



/* Entry: 103b9954c; end: 103b9957f;  */

void FUN_103b9954c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b99580; end: 103b9960b; -[SCAdPlayableContentLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b99580(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ff2570));
  lVar1 = _DAT_11380cf00;
  lVar2 = 0;
  func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000103b995c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103b9960c; end: 103b99613;  */

void FUN_103b9960c(void)

{
  if (lRam0000000112ff25a0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b3e78);
  return;
}



/* Entry: 103b99614; end: 103b9964b;  */

void FUN_103b99614(undefined8 param_1)

{
  if (lRam0000000112ff25a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b3e78);
  return;
}



/* Entry: 103b9964c; end: 103b996c3;  */

void FUN_103b9964c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dc5da88;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,2,&puStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103b996c4; end: 103b99773; -[SCAdStaticAdSkipRestrictionLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

undefined1 *
FUN_103b996c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar3 = &uStack_50;
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_initWithIsRecyclable_ctaType_uni_1125e5730;
  uStack_50 = param_1;
  uStack_48 = uVar2;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_50,puVar1,param_3,param_4,param_5,param_6);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_6);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 103b99774; end: 103b998d7;  */

undefined8 FUN_103b99774(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    puVar1 = &uStack_78;
    func_0x000107c6147c(puVar1,auStack_70,PTR___sypN_11034f1a8 + 8,unaff_x20,6);
    if (((ulong)puVar1 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_70,lStack_58);
        lVar4 = *(long *)(lStack_58 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
        puVar2 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar4 + 0x10))(puVar2);
        puVar3 = puVar2;
        func_0x000107c605b0(puVar2,lStack_58);
        (**(code **)(lVar4 + 8))(puVar2,lStack_58);
        func_0x000100183ab8(auStack_70);
      }
      puVar2 = &stack0xffffffffffffff78;
      func_0x000107c61154(puVar2,PTR_s_isEqual__1125fa0c8,puVar3);
      func_0x000107c615e8(puVar3);
      func_0x000107c61170(uStack_78);
      if (((ulong)puVar2 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 103b998d8; end: 103b99957; -[SCAdStaticAdSkipRestrictionLayer isEqual:] */

uint FUN_103b998d8(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b99774(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b99958; end: 103b999ab;  */

void FUN_103b99958(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b999ac; end: 103b999cf;  */

undefined * FUN_103b999ac(void)

{
  return &UNK_1106ddef8;
}



/* Entry: 103b999d0; end: 103b99cef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b999d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c614f0();
  lVar7 = _DAT_11307abc8;
  lVar6 = *(long *)(param_4 + _DAT_11307abc8);
  if (*(long *)(lVar6 + 0x10) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_103b99adc:
    func_0x00010006e7f4(&uStack_80);
    uVar2 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    uVar4 = 0;
    lVar1 = -0x2fffffffffffffea;
    func_0x000100029284(0xd000000000000016);
    if ((uVar4 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      func_0x000107c6142c(lVar6);
      goto LAB_103b99adc;
    }
    func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar1 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar6);
    if (lStack_68 == 0) goto LAB_103b99adc;
    uVar2 = 0;
    FUN_103b9a030(0,0x112f09848,&PTR_PTR_1126ac1d0);
    puVar3 = &uStack_98;
    func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar2,6);
    uVar2 = CONCAT71(uStack_97,uStack_98);
    if ((int)puVar3 == 0) {
      uVar2 = 0;
    }
  }
  *(undefined8 *)(unaff_x20 + _DAT_112ff25d8) = uVar2;
  lVar6 = *(long *)(param_4 + lVar7);
  if (*(long *)(lVar6 + 0x10) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_103b99b8c:
    func_0x00010006e7f4(&uStack_80);
LAB_103b99b94:
    uVar5 = 0;
  }
  else {
    func_0x000107c61434(lVar6);
    lVar1 = -0x2fffffffffffffde;
    uVar4 = 0;
    func_0x000100029284(0xd000000000000022);
    if ((uVar4 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar6 + 0x38) + lVar1 * 0x20,&uStack_80);
    }
    func_0x000107c6142c(lVar6);
    if (lStack_68 == 0) goto LAB_103b99b8c;
    puVar3 = &uStack_98;
    func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    uVar5 = uStack_98;
    if ((int)puVar3 == 0) goto LAB_103b99b94;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112ff25e0) = uVar5;
  lVar7 = *(long *)(param_4 + lVar7);
  if (*(long *)(lVar7 + 0x10) == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
LAB_103b99c3c:
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    func_0x000107c61434(lVar7);
    lVar6 = -0x2fffffffffffffe6;
    uVar4 = 0;
    func_0x000100029284(0xd00000000000001a);
    if ((uVar4 & 1) == 0) {
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x0001000bb420(*(long *)(lVar7 + 0x38) + lVar6 * 0x20,&uStack_80);
    }
    func_0x000107c6142c(lVar7);
    if (lStack_68 == 0) goto LAB_103b99c3c;
    puVar3 = &uStack_98;
    func_0x000107c6147c(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
    if ((int)puVar3 != 0) goto LAB_103b99c48;
  }
  uStack_98 = 0;
LAB_103b99c48:
  *(undefined1 *)(unaff_x20 + _DAT_112ff25e8) = uStack_98;
  FUN_103b9a030(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar2 = 0;
  func_0x000107c6010c(0);
  puVar3 = &stack0xffffffffffffff70;
  func_0x000107c61154(puVar3,PTR_s_initWithIsRecyclable_ctaType_uni_1125e5730,uVar2,param_2,param_3,
                      param_4);
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return puVar3;
}



/* Entry: 103b99cf0; end: 103b99d53; -[SCAdTapTooltipLayer initWithIsRecyclable:ctaType:unifiedActionBarBottomOffset:page:] */

void FUN_103b99cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  FUN_103b999d0(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103b99d54; end: 103b99f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103b99d54(undefined8 param_1)

{
  byte bVar1;
  long *plVar2;
  undefined1 *puVar3;
  ulong uVar4;
  byte bVar5;
  long extraout_x8;
  long unaff_x20;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    func_0x000107c6147c(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar8,6);
    if (((ulong)plVar2 & 1) != 0) {
      func_0x000100672b50(param_1,auStack_70);
      if (lStack_58 == 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else {
        func_0x0001006732c8(auStack_70,lStack_58);
        lVar8 = *(long *)(lStack_58 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
        puVar3 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar8 + 0x10))(puVar3);
        puVar7 = puVar3;
        func_0x000107c605b0(puVar3,lStack_58);
        (**(code **)(lVar8 + 8))(puVar3,lStack_58);
        func_0x000100183ab8(auStack_70);
      }
      puVar3 = &stack0xffffffffffffff78;
      func_0x000107c61154(puVar3,PTR_s_isEqual__1125fa0c8,puVar7);
      func_0x000107c615e8(puVar7);
      if ((int)puVar3 != 0) {
        uVar6 = *(ulong *)(unaff_x20 + _DAT_112ff25d8);
        lVar8 = *(long *)(lStack_78 + _DAT_112ff25d8);
        if (uVar6 == 0) {
          if (lVar8 == 0) {
LAB_103b99f04:
            if (*(char *)(unaff_x20 + _DAT_112ff25e0) == *(char *)(lStack_78 + _DAT_112ff25e0)) {
              bVar5 = *(byte *)(unaff_x20 + _DAT_112ff25e8);
              bVar1 = *(byte *)(lStack_78 + _DAT_112ff25e8);
              func_0x000107c61170(lStack_78);
              bVar5 = bVar5 ^ bVar1 ^ 1;
              goto LAB_103b99f28;
            }
          }
        }
        else if (lVar8 != 0) {
          FUN_103b9a030(0,0x112f09848,&PTR_PTR_1126ac1d0);
          func_0x000107c61174(lVar8);
          func_0x000107c61174();
          uVar4 = uVar6;
          func_0x000107c60118();
          func_0x000107c61170(uVar6);
          func_0x000107c61170(lVar8);
          if ((uVar4 & 1) != 0) goto LAB_103b99f04;
        }
      }
      func_0x000107c61170(lStack_78);
    }
  }
  bVar5 = 0;
LAB_103b99f28:
  return bVar5 & 1;
}



/* Entry: 103b99f6c; end: 103b99feb; -[SCAdTapTooltipLayer isEqual:] */

uint FUN_103b99f6c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b99d54(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b99fec; end: 103b9a01f;  */

void FUN_103b99fec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b9a020; end: 103b9a02f; -[SCAdTapTooltipLayer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a020(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff25d8));
  return;
}



/* Entry: 103b9a030; end: 103b9a06f;  */

void FUN_103b9a030(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103b9a070; end: 103b9a08f;  */

void FUN_103b9a070(void)

{
  func_0x000107c61168(&PTR_PTR_11293a950);
  return;
}



/* Entry: 103b9a090; end: 103b9a09f; -[AdOperaCollectionItem attachmentType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b9a090(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff2618);
}



/* Entry: 103b9a0a0; end: 103b9a0fb; -[AdOperaCollectionItem iconImageKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a0a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff2620))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff2620);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b9a0fc; end: 103b9a107; -[AdOperaCollectionItem webViewUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a0fc(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000103b9c1c4(param_1 + _DAT_11380cf08,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b9a108; end: 103b9a113; -[AdOperaCollectionItem deepLinkUri] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a108(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000103b9c1c4(param_1 + _DAT_11380cf10,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b9a114; end: 103b9a1f3;  */

void FUN_103b9a114(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000103b9c1c4(param_1 + *param_3,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b9a1f4; end: 103b9a203; -[AdOperaCollectionItem deepLinkFallbackType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b9a1f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11380cf18);
}



/* Entry: 103b9a204; end: 103b9a213; -[AdOperaCollectionItem deepLinkFallBackStoreVCParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380cf20));
  return;
}



/* Entry: 103b9a214; end: 103b9a21f; -[AdOperaCollectionItem deepLinkFallBackUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a214(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000103b9c1c4(param_1 + _DAT_11380cf28,puVar4,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103b9a220; end: 103b9a22f; -[AdOperaCollectionItem appInstallStoreVCParams] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380cf30));
  return;
}



/* Entry: 103b9a230; end: 103b9a23f; -[AdOperaCollectionItem showcaseModelUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9a230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380cf38));
  return;
}



/* Entry: 103b9a240; end: 103b9a51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b9a240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2618) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff2620);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000103b9c1c4(param_4,unaff_x20 + _DAT_11380cf08,0x112d36580,&UNK_10d9016d0);
  func_0x000103b9c1c4(param_5,unaff_x20 + _DAT_11380cf10,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(unaff_x20 + _DAT_11380cf18) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11380cf20) = param_7;
  func_0x000103b9c1c4(param_8,unaff_x20 + _DAT_11380cf28,0x112d36580,&UNK_10d9016d0);
  *(undefined8 *)(unaff_x20 + _DAT_11380cf30) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11380cf38) = param_10;
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000103b9c20c(param_8,0x112d36580,&UNK_10d9016d0);
  func_0x000103b9c20c(param_5,0x112d36580,&UNK_10d9016d0);
  func_0x000103b9c20c(param_4,0x112d36580,&UNK_10d9016d0);
  return puVar2;
}



/* Entry: 103b9a51c; end: 103b9a553;  */

void FUN_103b9a51c(undefined8 param_1)

{
  if (lRam0000000112ff2658 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7b3f14);
  return;
}



/* Entry: 103b9a554; end: 103b9b503; -[AdOperaCollectionItem initWithAttachmentType:iconImageKey:webViewUrl:deepLinkUri:deepLinkFallbackType:deepLinkFallBackStoreVCParams:deepLinkFallBackUrl:appInstallStoreVCParams:showcaseModelUpdate:] */

void FUN_103b9a554(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 auStack_a0 [2];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  uStack_68 = param_8;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar1 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar4 - extraout_x12_00;
  if (param_4 == 0) {
    puStack_78 = (undefined *)0x0;
    lStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    puStack_78 = puVar3;
    lStack_70 = param_4;
  }
  if (param_5 != 0) {
    func_0x000107c5edb4(lVar5,param_5);
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  else {
    lVar2 = 0;
    func_0x000107c5ede0();
  }
  lStack_88 = lVar5;
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,param_5 == 0,1);
  lStack_80 = lVar4;
  if (param_6 == 0) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar4,1,1,lVar2);
    func_0x000107c61174(uStack_68);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
  }
  else {
    func_0x000107c5edb4(lVar4,param_6);
    lVar2 = 0;
    func_0x000107c5ede0();
    pcVar6 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
    lStack_90 = lVar1;
    func_0x000107c61174(uStack_68);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    (*pcVar6)(lVar4,0,1,lVar2);
    lVar1 = lStack_90;
  }
  if (param_9 != 0) {
    func_0x000107c5edb4(lVar1,param_9);
    func_0x000107c61170(param_9);
  }
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar1,param_9 == 0,1,lVar4);
  *(undefined8 *)(lVar5 + -0x10) = param_10;
  *(undefined8 *)(lVar5 + -8) = param_11;
  func_0x000103b9a3c0(param_3,lStack_70,puStack_78,lStack_88,lStack_80,param_7,uStack_68,lVar1);
  return;
}



/* Entry: 103b9b504; end: 103b9b54b; -[AdOperaCollectionItem initWithProperties:] */

void FUN_103b9b504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000103b9a7d0();
  return;
}



/* Entry: 103b9b54c; end: 103b9bfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b9b54c(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar13;
  ulong uVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  uint uVar15;
  long lVar16;
  long unaff_x20;
  code *pcVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  code *pcStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_a0 = *(long *)(lVar2 + -8);
  lStack_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar16 = (long)&pcStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d7e680;
  lStack_a8 = lVar16;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar13 = (undefined1 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puStack_b0 = puVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar13 = puVar13 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar19 = puVar13 + -extraout_x12_00;
  lVar16 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
  uVar14 = (long)puVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uStack_b8 = uVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = uVar14 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar22 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar16 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar18 - extraout_x12_05;
  func_0x000103b9c1c4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar3 = 0x112d387f8;
    puVar11 = &UNK_10d902650;
    puVar19 = auStack_80;
LAB_103b9b890:
    func_0x000103b9c20c(puVar19,uVar3,puVar11);
  }
  else {
    uVar3 = 0;
    FUN_103b9a51c(0);
    plVar4 = &lStack_88;
    func_0x000107c6147c(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      func_0x000107c614e8(uVar3);
      lVar5 = lStack_88;
      func_0x000107c4a054();
      lVar9 = _DAT_11380cf08;
      lVar7 = lStack_88;
      if ((int)lVar5 != 0) {
        if (lStack_88 == unaff_x20) {
          func_0x000107c61170(lStack_88);
          uVar15 = 1;
          goto LAB_103b9be10;
        }
        lVar7 = lStack_88;
        if (*(int *)(unaff_x20 + _DAT_112ff2618) == *(int *)(lStack_88 + _DAT_112ff2618)) {
          lStack_c0 = lStack_88;
          func_0x000103b9c1c4(lStack_88 + _DAT_11380cf08,lVar20,0x112d36580,&UNK_10d9016d0);
          iVar1 = *(int *)(lVar2 + 0x30);
          func_0x000103b9c1c4(unaff_x20 + lVar9,puVar19,0x112d36580,&UNK_10d9016d0);
          uStack_c8 = (long)iVar1;
          func_0x000103b9c1c4(lVar20,puVar19 + iVar1,0x112d36580,&UNK_10d9016d0);
          pcVar17 = *(code **)(lStack_a0 + 0x30);
          puVar6 = puVar19;
          (*pcVar17)(puVar19,1,lStack_98);
          if ((int)puVar6 == 1) {
            func_0x000103b9c20c(lVar20,0x112d36580,&UNK_10d9016d0);
            puVar6 = puVar19 + uStack_c8;
            (*pcVar17)(puVar6,1,lStack_98);
            if ((int)puVar6 != 1) {
              func_0x000107c61170(lStack_c0);
LAB_103b9b920:
              uVar3 = 0x112d7e680;
              puVar11 = &UNK_10d95e350;
              goto LAB_103b9b890;
            }
            pcStack_d0 = pcVar17;
            func_0x000103b9c20c(puVar19,0x112d36580,&UNK_10d9016d0);
            lVar5 = lStack_98;
LAB_103b9b9c8:
            lVar18 = _DAT_11380cf10;
            func_0x000103b9c1c4(lStack_c0 + _DAT_11380cf10,lVar16,0x112d36580,&UNK_10d9016d0);
            iVar1 = *(int *)(lVar2 + 0x30);
            func_0x000103b9c1c4(unaff_x20 + lVar18,puVar13,0x112d36580,&UNK_10d9016d0);
            func_0x000103b9c1c4(lVar16,puVar13 + iVar1,0x112d36580,&UNK_10d9016d0);
            pcVar17 = pcStack_d0;
            puVar19 = puVar13;
            (*pcStack_d0)(puVar13,1,lVar5);
            if ((int)puVar19 == 1) {
              func_0x000103b9c20c(lVar16,0x112d36580,&UNK_10d9016d0);
              puVar19 = puVar13 + iVar1;
              (*pcVar17)(puVar19,1,lVar5);
              if ((int)puVar19 != 1) {
                func_0x000107c61170(lStack_c0);
LAB_103b9bb08:
                uVar3 = 0x112d7e680;
                puVar11 = &UNK_10d95e350;
                puVar19 = puVar13;
                goto LAB_103b9b890;
              }
              func_0x000103b9c20c(puVar13,0x112d36580,&UNK_10d9016d0);
            }
            else {
              func_0x000103b9c1c4(puVar13,lVar22,0x112d36580,&UNK_10d9016d0);
              puVar19 = puVar13 + iVar1;
              (*pcVar17)(puVar19,1,lVar5);
              lVar20 = lStack_a0;
              lVar18 = lStack_a8;
              if ((int)puVar19 == 1) {
                func_0x000107c61170(lStack_c0);
                func_0x000103b9c20c(lVar16,0x112d36580,&UNK_10d9016d0);
                (**(code **)(lStack_a0 + 8))(lVar22,lVar5);
                goto LAB_103b9bb08;
              }
              lVar9 = lStack_a8;
              (**(code **)(lStack_a0 + 0x20))(lStack_a8,puVar13 + iVar1,lVar5);
              func_0x000101553b98();
              lVar7 = lVar22;
              func_0x000107c5fab8(lVar22,lVar18,lVar5,lVar9);
              uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)lVar7);
              pcVar17 = *(code **)(lVar20 + 8);
              (*pcVar17)(lVar18,lVar5);
              func_0x000103b9c20c(lVar16,0x112d36580,&UNK_10d9016d0);
              (*pcVar17)(lVar22,lVar5);
              func_0x000103b9c20c(puVar13,0x112d36580,&UNK_10d9016d0);
              lVar7 = lStack_c0;
              if ((uStack_c8 & 1) == 0) goto LAB_103b9be08;
            }
            lVar16 = _DAT_11380cf28;
            lVar7 = lStack_c0;
            if (*(int *)(unaff_x20 + _DAT_11380cf18) == *(int *)(lStack_c0 + _DAT_11380cf18)) {
              func_0x000103b9c1c4(lStack_c0 + _DAT_11380cf28,lVar21,0x112d36580,&UNK_10d9016d0);
              puVar19 = puStack_b0;
              iVar1 = *(int *)(lVar2 + 0x30);
              func_0x000103b9c1c4(unaff_x20 + lVar16,puStack_b0,0x112d36580,&UNK_10d9016d0);
              func_0x000103b9c1c4(lVar21,puVar19 + iVar1,0x112d36580,&UNK_10d9016d0);
              lVar2 = lStack_98;
              pcVar17 = pcStack_d0;
              puVar13 = puVar19;
              (*pcStack_d0)(puVar19,1,lStack_98);
              uVar14 = uStack_b8;
              if ((int)puVar13 == 1) {
                func_0x000103b9c20c(lVar21,0x112d36580,&UNK_10d9016d0);
                puVar13 = puVar19 + iVar1;
                (*pcVar17)(puVar13,1,lVar2);
                if ((int)puVar13 != 1) {
                  func_0x000107c61170(lStack_c0);
LAB_103b9bd10:
                  uVar3 = 0x112d7e680;
                  puVar11 = &UNK_10d95e350;
                  goto LAB_103b9b890;
                }
                func_0x000103b9c20c(puVar19,0x112d36580,&UNK_10d9016d0);
LAB_103b9bdb8:
                lVar7 = lStack_c0;
                uVar14 = ((ulong *)(unaff_x20 + _DAT_112ff2620))[1];
                uVar12 = ((ulong *)(lStack_c0 + _DAT_112ff2620))[1];
                if (uVar14 == 0) {
                  if (uVar12 == 0) goto LAB_103b9be34;
                }
                else if ((uVar12 != 0) &&
                        (((uVar10 = *(ulong *)(unaff_x20 + _DAT_112ff2620),
                          uVar10 == *(ulong *)(lStack_c0 + _DAT_112ff2620) && (uVar14 == uVar12)) ||
                         (func_0x000107c605b8(), (uVar10 & 1) != 0)))) {
LAB_103b9be34:
                  uVar14 = *(ulong *)(unaff_x20 + _DAT_11380cf20);
                  lVar2 = *(long *)(lVar7 + _DAT_11380cf20);
                  lVar7 = lStack_c0;
                  if (uVar14 == 0) {
                    if (lVar2 == 0) {
LAB_103b9beac:
                      uVar14 = *(ulong *)(unaff_x20 + _DAT_11380cf30);
                      lVar2 = *(long *)(lStack_c0 + _DAT_11380cf30);
                      lVar7 = lStack_c0;
                      if (uVar14 == 0) {
                        if (lVar2 == 0) {
LAB_103b9bf20:
                          lVar16 = *(long *)(unaff_x20 + _DAT_11380cf38);
                          lVar2 = *(long *)(lStack_c0 + _DAT_11380cf38);
                          if (lVar16 != 0) {
                            uVar15 = 0;
                            if (lVar2 != 0) {
                              func_0x000103b9c184(0,0x112ff2628,&PTR_PTR_1126ca670);
                              func_0x000107c61174(lVar2);
                              func_0x000107c61174(lVar16);
                              lVar18 = lVar16;
                              func_0x000107c60118();
                              uVar15 = (uint)lVar18;
                              func_0x000107c61170(lVar16);
                              func_0x000107c61170(lVar2);
                            }
                            func_0x000107c61170(lStack_c0);
                            goto LAB_103b9be10;
                          }
                          lVar7 = lVar2;
                          func_0x000107c61174(lVar2);
                          func_0x000107c61170(lStack_c0);
                          if (lVar2 == 0) {
                            uVar15 = 1;
                            goto LAB_103b9be10;
                          }
                        }
                      }
                      else if (lVar2 != 0) {
                        func_0x000103b9c184(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670)
                        ;
                        func_0x000107c61174(lVar2);
                        func_0x000107c61174();
                        uVar12 = uVar14;
                        func_0x000107c60118();
                        func_0x000107c61170(uVar14);
                        func_0x000107c61170(lVar2);
                        lVar7 = lStack_c0;
                        if ((uVar12 & 1) != 0) goto LAB_103b9bf20;
                      }
                    }
                  }
                  else if (lVar2 != 0) {
                    func_0x000103b9c184(0,0x112d55e50,&PTR__OBJC_CLASS___NSDictionary_1126ae670);
                    func_0x000107c61174(lVar2);
                    func_0x000107c61174();
                    uVar12 = uVar14;
                    func_0x000107c60118();
                    func_0x000107c61170(uVar14);
                    func_0x000107c61170(lVar2);
                    lVar7 = lStack_c0;
                    if ((uVar12 & 1) != 0) goto LAB_103b9beac;
                  }
                }
              }
              else {
                func_0x000103b9c1c4(puVar19,uStack_b8,0x112d36580,&UNK_10d9016d0);
                puVar13 = puVar19 + iVar1;
                (*pcVar17)(puVar13,1,lVar2);
                lVar18 = lStack_a0;
                lVar16 = lStack_a8;
                if ((int)puVar13 == 1) {
                  func_0x000107c61170(lStack_c0);
                  func_0x000103b9c20c(lVar21,0x112d36580,&UNK_10d9016d0);
                  (**(code **)(lStack_a0 + 8))(uVar14,lVar2);
                  goto LAB_103b9bd10;
                }
                lVar20 = lStack_a8;
                (**(code **)(lStack_a0 + 0x20))(lStack_a8,puVar19 + iVar1,lVar2);
                func_0x000101553b98();
                uVar12 = uVar14;
                func_0x000107c5fab8(uVar14,lVar16,lVar2,lVar20);
                pcVar17 = *(code **)(lVar18 + 8);
                (*pcVar17)(lVar16,lVar2);
                func_0x000103b9c20c(lVar21,0x112d36580,&UNK_10d9016d0);
                (*pcVar17)(uVar14,lVar2);
                func_0x000103b9c20c(puVar19,0x112d36580,&UNK_10d9016d0);
                lVar7 = lStack_c0;
                if ((uVar12 & 1) != 0) goto LAB_103b9bdb8;
              }
            }
          }
          else {
            func_0x000103b9c1c4(puVar19,lVar18,0x112d36580,&UNK_10d9016d0);
            puVar6 = puVar19 + uStack_c8;
            pcStack_d0 = pcVar17;
            (*pcVar17)(puVar6,1,lStack_98);
            lVar5 = lStack_98;
            lVar9 = lStack_a8;
            if ((int)puVar6 == 1) {
              func_0x000107c61170(lStack_c0);
              func_0x000103b9c20c(lVar20,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lStack_a0 + 8))(lVar18,lStack_98);
              goto LAB_103b9b920;
            }
            lVar7 = lStack_a8;
            (**(code **)(lStack_a0 + 0x20))(lStack_a8,puVar19 + uStack_c8,lStack_98);
            func_0x000101553b98();
            lVar8 = lVar18;
            func_0x000107c5fab8(lVar18,lVar9,lVar5,lVar7);
            uStack_c8 = CONCAT44(uStack_c8._4_4_,(int)lVar8);
            pcVar17 = *(code **)(lStack_a0 + 8);
            (*pcVar17)(lStack_a8,lVar5);
            func_0x000103b9c20c(lVar20,0x112d36580,&UNK_10d9016d0);
            (*pcVar17)(lVar18,lVar5);
            func_0x000103b9c20c(puVar19,0x112d36580,&UNK_10d9016d0);
            lVar7 = lStack_c0;
            if ((uStack_c8 & 1) != 0) goto LAB_103b9b9c8;
          }
        }
      }
LAB_103b9be08:
      func_0x000107c61170(lVar7);
    }
  }
  uVar15 = 0;
LAB_103b9be10:
  return uVar15 & 1;
}



/* Entry: 103b9bfc8; end: 103b9c057; -[AdOperaCollectionItem isEqual:] */

uint FUN_103b9bfc8(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b9b54c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000103b9c20c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103b9c058; end: 103b9c0b7; -[AdOperaCollectionItem init] */

void FUN_103b9c058(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayersDataModels.AdOperaCollectionItem",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9c084);
  (*pcVar1)();
}



/* Entry: 103b9c0b8; end: 103b9c173; -[AdOperaCollectionItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b9c12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b9c154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9c130) */
/* WARNING: Removing unreachable block (ram,0x000103b9c158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9c0b8(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff2620 + 8));
  func_0x000103b9c20c(param_1 + _DAT_11380cf08,0x112d36580,&UNK_10d9016d0);
  func_0x000103b9c20c(param_1 + _DAT_11380cf10,0x112d36580,&UNK_10d9016d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11380cf20));
  return;
}



/* Entry: 103b9c174; end: 103b9c183;  */

undefined1  [16] FUN_103b9c174(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b9c184; end: 103b9c24b;  */

void FUN_103b9c184(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103b9c24c; end: 103b9c347;  */

undefined * FUN_103b9c24c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ff2670,&UNK_10dc5db50);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b9c344);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103b9c348);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 103b9c348; end: 103b9c34f;  */

void FUN_103b9c348(void)

{
  if (lRam0000000112ff2658 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7b3f14);
  return;
}



/* Entry: 103b9c350; end: 103b9c3e7;  */

void FUN_103b9c350(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_60 = &UNK_10dc5db18;
  lVar2 = 0x13f;
  puStack_68 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = &UNK_10dc5db30;
    puStack_30 = &UNK_10dc5db30;
    puStack_28 = &UNK_10dc5db30;
    lStack_50 = lStack_58;
    puStack_48 = puVar1;
    lStack_38 = lStack_58;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 103b9c3e8; end: 103b9c4db;  */

undefined * FUN_103b9c3e8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    uVar6 = 0;
    func_0x0001000285a8(0x112ff2668);
    puVar3 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar4 = puVar9[-1];
      uVar1 = *puVar9;
      func_0x000107c61174();
      func_0x000107c61434(uVar1);
      uVar5 = uVar4;
      func_0x000100121450();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9c4d8);
        (*pcVar2)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar5 * 8) = uVar4;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar5 * 8) = uVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9c4dc);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 2;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 103b9c4dc; end: 103b9c9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9c4dc(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,byte param_5,
                  long param_6,undefined8 param_7,long param_8,long param_9,undefined8 param_10,
                  long param_11,undefined8 param_12,long param_13,long param_14,long param_15,
                  long param_16,long param_17)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *apuStack_1a0 [3];
  undefined1 auStack_188 [24];
  long lStack_170;
  byte bStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  long lStack_150;
  undefined1 uStack_148;
  long lStack_140;
  undefined1 uStack_138;
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
  
  if (param_4 == 0) {
    return;
  }
  if (((param_11 == 0 || param_13 == 0) || param_14 == 0) || param_15 == 0) {
    return;
  }
  uVar8 = param_4;
  func_0x000107c61174();
  uVar7 = (uint)uVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61434(param_4);
  lVar12 = param_11;
  func_0x000107c49820();
  FUN_103b9df8c();
  lVar1 = 0;
  if ((uVar7 & 0xff) != 1) {
    lVar1 = lVar12;
  }
  lVar12 = param_9;
  FUN_103b9df9c(param_7,param_9,param_10);
  func_0x000107c3ab34(param_13);
  uVar5 = param_1;
  uVar19 = param_2;
  func_0x000107c3ab34(param_14);
  uVar11 = uVar5;
  uVar20 = uVar19;
  func_0x000107c3ab34(param_15);
  uVar17 = uVar11;
  if (param_8 == 0) {
    param_8 = 0;
    uVar15 = 1;
    if (param_9 == 0) goto LAB_103b9c678;
LAB_103b9c654:
    func_0x000107c49820();
    uVar14 = 0;
  }
  else {
    func_0x000107c49820();
    uVar15 = 0;
    if (param_9 != 0) goto LAB_103b9c654;
LAB_103b9c678:
    uVar14 = 1;
  }
  func_0x000107c4223c(param_12);
  uStack_b8 = 0;
  if (param_16 == 0) {
    uStack_c0 = 1;
    uVar21 = 0;
    uVar18 = uVar17;
    if (param_17 == 0) goto LAB_103b9c6d0;
LAB_103b9c6ac:
    func_0x000107c4223c(param_17);
    uStack_b0 = 0;
    uStack_b8 = uVar18;
  }
  else {
    uVar21 = uVar17;
    func_0x000107c4223c(param_16);
    uStack_c0 = 0;
    uVar18 = uVar21;
    if (param_17 != 0) goto LAB_103b9c6ac;
LAB_103b9c6d0:
    uStack_b0 = 1;
  }
  bStack_168 = param_5 & 1;
  uStack_158 = (undefined1)lVar12;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_d8 = 0;
  lStack_170 = lVar1;
  uStack_160 = param_7;
  lStack_150 = param_8;
  uStack_148 = uVar15;
  lStack_140 = param_9;
  uStack_138 = uVar14;
  uStack_130 = param_1;
  uStack_120 = param_2;
  uStack_110 = uVar5;
  uStack_100 = uVar19;
  uStack_f0 = uVar11;
  uStack_e0 = uVar20;
  uStack_d0 = uVar17;
  uStack_c8 = uVar21;
  FUN_1042ac494(0);
  func_0x000107c610f8();
  plVar2 = &lStack_170;
  FUN_1042aa478();
  lVar1 = _DAT_112ff2678;
  puVar9 = auStack_188;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2678,puVar9,0,0);
  lVar12 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar12 + 0x10) != 0) {
    func_0x000107c61438(lVar12,2);
    lVar3 = param_3;
    uVar8 = param_4;
    func_0x000100029284();
    if ((uVar8 & 1) != 0) {
      puVar13 = *(undefined **)(*(long *)(lVar12 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar13);
      puVar9 = (undefined1 *)0x0;
      func_0x000107c61430(lVar12);
      lVar12 = *(long *)(puVar13 + 0x10);
      puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
      goto joined_r0x000103b9c7f4;
    }
    puVar9 = (undefined1 *)0x0;
    func_0x000107c61430(lVar12);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103b9c3e8();
  lVar12 = *(long *)(puVar13 + 0x10);
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
joined_r0x000103b9c7f4:
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar16;
  if (lVar12 != 0) {
    func_0x000107c61434(puVar13);
    lVar12 = param_6;
    func_0x000100121450();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (((ulong)puVar9 & 1) != 0) {
      puVar16 = *(undefined **)(*(long *)(puVar13 + 0x38) + lVar12 * 8);
      func_0x000107c61434(puVar16);
    }
    func_0x000107c6142c(puVar13);
  }
  func_0x000107c61174();
  puVar6 = puVar16;
  func_0x000107c61550();
  if ((((int)puVar6 == 0) || ((long)puVar16 < 0)) || (((ulong)puVar16 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar16 >> 0x3e == 0) {
      puVar6 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar6 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar16) {
        puVar6 = puVar16;
      }
      func_0x000107c60480(puVar6);
    }
    puVar4 = (undefined *)0x0;
    FUN_103b9dcec(0,puVar6 + 1,1,puVar16);
    puVar16 = puVar4;
  }
  uVar10 = (ulong)puVar16 & 0xffffffffffffff8;
  uVar8 = *(ulong *)(uVar10 + 0x10);
  puVar6 = puVar16;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_103b9dcec(puVar6,uVar8 + 1,1,puVar16);
    uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar10 + 0x10) = uVar8 + 1;
  *(long **)(uVar10 + uVar8 * 8 + 0x20) = plVar2;
  func_0x000107c61434(puVar6);
  puVar16 = puVar13;
  func_0x000107c61558(puVar13);
  apuStack_1a0[0] = puVar13;
  FUN_103b9d230(puVar6,param_6,puVar16);
  puVar13 = apuStack_1a0[0];
  func_0x000107c61428(unaff_x20 + lVar1,apuStack_1a0,0x21,0);
  func_0x000107c6157c(puVar13);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar5);
  uVar11 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_103b9d0e0(puVar13,param_3,param_4,uVar5);
  func_0x000107c6142c(param_4);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar11;
  func_0x000107c614a8(apuStack_1a0);
  func_0x000107c61574(puVar13);
  func_0x000107c6142c(puVar6);
  func_0x000107c61170(plVar2);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_11);
  return;
}



/* Entry: 103b9c9ac; end: 103b9cb9f; -[AdTopSnapInteractionInfoStore addInteractionForAdRequestClientId:attachmentTriggered:viewingStatusIndex:collectionItems:tileIndex:collectionItemIndex:defaultAttachmentIndex:interactionSource:interactionTimestamp:sourceRelativeLocation:screenRelativeLocation:screenLocation:scrollDepth:scrollOffset:] */

/* WARNING: Possible PIC construction at 0x000103b9cb78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9cb7c) */

void FUN_103b9c9ac(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  undefined8 uStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  if (param_3 == 0) {
    uStack_98 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_98 = param_3;
    uStack_70 = param_2;
  }
  if (param_6 == 0) {
    uStack_78 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001047e57bc(0);
    func_0x000107c5fc54(param_6,uVar1);
    uStack_78 = param_6;
  }
  func_0x000107c61174();
  uVar1 = param_7;
  func_0x000107c61174();
  uVar2 = param_8;
  func_0x000107c61174();
  uVar3 = param_9;
  func_0x000107c61174();
  uVar4 = param_10;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar5 = param_12;
  func_0x000107c61174();
  uVar6 = param_13;
  func_0x000107c61174();
  uVar7 = param_14;
  func_0x000107c61174();
  uVar8 = param_15;
  func_0x000107c61174();
  uVar9 = param_16;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  FUN_103b9c4dc(uStack_98,uStack_70,param_4,param_5,uStack_78,param_7,param_8,param_9,param_10,
                param_11,param_12,param_13,param_14,param_15,param_16);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uStack_78);
  return;
}



/* Entry: 103b9cba0; end: 103b9cc3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b9cba0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = _DAT_112ff2678;
  func_0x000107c61428(unaff_x20 + _DAT_112ff2678,auStack_48,0,0);
  lVar2 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
      func_0x000107c61434(uVar1);
    }
    func_0x000107c6142c(lVar2);
  }
  return uVar1;
}



/* Entry: 103b9cc3c; end: 103b9ccf7; -[AdTopSnapInteractionInfoStore interactionInfosForAdRequestClientId:] */

void FUN_103b9cc3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  FUN_103b9cba0(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (param_3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = 0;
    func_0x0001002ed07c(0);
    uVar2 = 0x112ff26a8;
    func_0x0001000285a8(0x112ff26a8,&UNK_10dc5db80);
    uVar3 = uVar2;
    func_0x000100120cb0();
    lVar4 = param_3;
    func_0x000107c5f9dc(param_3,uVar1,uVar2,uVar3);
    func_0x000107c6142c(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 103b9ccf8; end: 103b9cd97; -[AdTopSnapInteractionInfoStore removeInteractionInfosForAdRequestClientId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9ccf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c5faec(param_3);
  func_0x000107c61428(param_1 + _DAT_112ff2678,auStack_58,0x21,0);
  func_0x000107c61174(param_1);
  FUN_103b9d024(param_3,param_2);
  func_0x000107c614a8(auStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 103b9cd98; end: 103b9cdeb; -[AdTopSnapInteractionInfoStore init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9cd98(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = _DAT_112ff2678;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103b9c24c();
  *(undefined **)(param_1 + lVar1) = puVar2;
  FUN_103b9e120();
  lStack_30 = param_1;
  puStack_28 = puVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9cdec; end: 103b9ce1b;  */

void FUN_103b9cdec(void)

{
  FUN_103b9e120();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b9ce1c; end: 103b9ce2b; -[AdTopSnapInteractionInfoStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9ce1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff2678));
  return;
}



/* Entry: 103b9ce2c; end: 103b9ce87;  */

void FUN_103b9ce2c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_1042ac494();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ff26b0;
  plVar5 = (long *)&UNK_10dc5db98;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 103b9ce88; end: 103b9d023;  */

ulong FUN_103b9ce88(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9cf58);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9cf5c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001047e57bc(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001047e57bc(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000019,0x800000010f1a7320);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9d024);
  (*pcVar2)();
}



/* Entry: 103b9d024; end: 103b9d0df;  */

undefined8 FUN_103b9d024(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_103b9d364();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000103b9db3c(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 103b9d0e0; end: 103b9d22f;  */

void FUN_103b9d0e0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9d1b8);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_103b9d638(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9d180);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_103b9d364();
    lVar6 = *unaff_x20;
    goto joined_r0x000103b9d1cc;
  }
  lVar6 = *unaff_x20;
joined_r0x000103b9d1cc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103b9d230);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103b9d230; end: 103b9d363;  */

void FUN_103b9d230(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000100121450();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9d2f4);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    func_0x000103b9d8d4(lVar5);
    uVar2 = param_2;
    func_0x000100121450();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x0001002ed07c(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9d2c0);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x000103b9d4d4();
    lVar5 = *unaff_x20;
    goto joined_r0x000103b9d308;
  }
  lVar5 = *unaff_x20;
joined_r0x000103b9d308:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9d364);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103b9d364; end: 103b9d637;  */

void FUN_103b9d364(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112ff2670,&UNK_10dc5db50);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_103b9d440;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61434(uVar12);
        if (uVar8 != 0) break;
LAB_103b9d440:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x103b9d4d4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_103b9d4ac;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_103b9d4ac:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 103b9d638; end: 103b9dceb;  */

void FUN_103b9d638(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ff2670;
  func_0x0001000285a8(0x112ff2670,&UNK_10dc5db50);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_103b9d8a0:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b9d8d0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_103b9d8a0;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103b9d8d4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 103b9dcec; end: 103b9de13;  */

ulong FUN_103b9dcec(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9de14);
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
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103b9de14(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9de10);
      (*pcVar1)();
    }
    FUN_103b9de94(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103b9de14; end: 103b9de93;  */

undefined * FUN_103b9de14(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_103b9ce2c();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103b9de94; end: 103b9df8b;  */

long FUN_103b9de94(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9df88);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9df8c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1042ac494(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1042ac494(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103b9df84);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 103b9df8c; end: 103b9df9b;  */

undefined1  [16] FUN_103b9df8c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 0xc) {
    uVar1 = param_1;
  }
  auVar2[8] = 0xb < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103b9df9c; end: 103b9e11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b9df9c(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_1 != 0) {
    if (param_1 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar6 = param_1;
      }
      func_0x000107c60480();
    }
    uVar2 = 0;
    uVar5 = 1;
    if ((uVar6 == 0) || (param_2 == 0)) goto LAB_103b9e04c;
    if (param_3 == 0) {
      func_0x000107c61174(param_2,1);
LAB_103b9e014:
      uVar3 = param_2;
      func_0x000107c49820();
      uVar6 = uVar3 - 1;
      if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9e0e8);
        (*pcVar1)();
      }
    }
    else {
      uVar6 = param_2;
      func_0x000107c61174(param_2,1);
      func_0x000107c49820();
      if (param_3 < 1) goto LAB_103b9e014;
      func_0x000107c49820();
    }
    if (-1 < (long)uVar6) {
      if (param_1 >> 0x3e == 0) {
        uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar3 = param_1 & 0xffffffffffffff8;
        if ((param_1 & 0x8000000000000000) != 0) {
          uVar3 = param_1;
        }
        func_0x000107c60480();
      }
      if ((long)uVar6 < (long)uVar3) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9e120);
            (*pcVar1)();
          }
          lVar4 = *(long *)(param_1 + uVar6 * 8 + 0x20);
          func_0x000107c61174();
          func_0x000107c61170(param_2);
          uVar2 = *(undefined8 *)(lVar4 + _DAT_11308fd90);
          func_0x000107c61170(lVar4);
        }
        else {
          FUN_103b9ce88(uVar6,param_1);
          func_0x000107c61170(param_2);
          uVar2 = *(undefined8 *)(uVar6 + _DAT_11308fd90);
          func_0x000107c615e8(uVar6);
        }
        uVar5 = 0;
        goto LAB_103b9e04c;
      }
    }
    func_0x000107c61170(param_2);
  }
  uVar2 = 0;
  uVar5 = 1;
LAB_103b9e04c:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Entry: 103b9e120; end: 103b9e13f;  */

void FUN_103b9e120(void)

{
  func_0x000107c61168(&PTR_PTR_11293ab20);
  return;
}



/* Entry: 103b9e140; end: 103b9e14b; -[CameraLensItem scancodeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e140(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff26b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff26b8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b9e14c; end: 103b9e157; -[CameraLensItem scancodeVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e14c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff26c0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff26c0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b9e158; end: 103b9e1df;  */

void FUN_103b9e158(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b9e1e0; end: 103b9e3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e1e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  int iVar2;
  
  iVar1 = (int)&uStack_70;
  iVar2 = (int)&uStack_70;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e3b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e3b8);
  puVar4 = param_2;
  if (param_1[2] == 0) {
LAB_103b9e29c:
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
    func_0x000107c6142c(param_2);
LAB_103b9e2ac:
    func_0x00010006e7f4(&uStack_50);
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    func_0x000100029284(ppuVar3);
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_103b9e29c;
    }
    puVar4 = &uStack_50;
    func_0x0001000bb420(param_1[7] + (long)ppuVar3 * 0x20);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_1);
    if (lStack_38 == 0) goto LAB_103b9e2ac;
    puVar4 = &uStack_50;
    func_0x000107c6147c(&uStack_70,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_70;
    uVar7 = uStack_68;
    if (iVar1 == 0) {
      uVar6 = 0;
      uVar7 = 0;
    }
  }
  puVar5 = (undefined8 *)(unaff_x20 + _DAT_112ff26b8);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0e3d8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e3d8);
  if (param_1[2] != 0) {
    func_0x000107c61434(param_1);
    puVar5 = puVar4;
    func_0x000100029284(ppuVar3);
    if (((ulong)puVar5 & 1) != 0) {
      func_0x0001000bb420(param_1[7] + (long)ppuVar3 * 0x20,&uStack_50);
      func_0x000107c6142c(puVar4);
      puVar4 = param_1;
      goto LAB_103b9e334;
    }
    func_0x000107c6142c(param_1);
  }
  uStack_48 = 0;
  uStack_50 = 0;
  lStack_38 = 0;
  uStack_40 = 0;
LAB_103b9e334:
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(param_1);
  if (lStack_38 == 0) {
    func_0x00010006e7f4();
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x000107c6147c(&uStack_70,&uStack_50,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (iVar2 == 0) {
      uStack_70 = 0;
      uStack_68 = 0;
    }
  }
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_112ff26c0);
  *puVar4 = uStack_70;
  puVar4[1] = uStack_68;
  FUN_103b9e6a8();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9e3d0; end: 103b9e417; -[CameraLensItem initWithProperties:] */

void FUN_103b9e3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5f9e8(param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  FUN_103b9e1e0();
  return;
}



/* Entry: 103b9e418; end: 103b9e58b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b9e418(undefined8 param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  long unaff_x20;
  long lVar8;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    FUN_103b9e6a8();
    plVar1 = &lStack_58;
    func_0x000107c6147c(plVar1,auStack_50,PTR___sypN_11034f1a8 + 8,param_1,6);
    if (((ulong)plVar1 & 1) != 0) {
      func_0x000107c614e8(param_1);
      lVar5 = lStack_58;
      func_0x000107c4a054();
      if ((int)lVar5 == 0) goto LAB_103b9e524;
      if (lStack_58 == unaff_x20) {
LAB_103b9e504:
        func_0x000107c61170(lStack_58);
        uVar7 = 1;
        goto LAB_103b9e530;
      }
      uVar4 = ((ulong *)(unaff_x20 + _DAT_112ff26b8))[1];
      uVar6 = ((ulong *)(lStack_58 + _DAT_112ff26b8))[1];
      if (uVar4 == 0) {
        if (uVar6 == 0) goto LAB_103b9e4cc;
      }
      else if ((uVar6 != 0) &&
              ((uVar2 = *(ulong *)(unaff_x20 + _DAT_112ff26b8),
               uVar2 == *(ulong *)(lStack_58 + _DAT_112ff26b8) && uVar4 == uVar6 ||
               (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
LAB_103b9e4cc:
        lVar5 = ((long *)(unaff_x20 + _DAT_112ff26c0))[1];
        lVar8 = ((long *)(lStack_58 + _DAT_112ff26c0))[1];
        if (lVar5 != 0) {
          uVar7 = 0;
          if (lVar8 != 0) {
            lVar3 = *(long *)(unaff_x20 + _DAT_112ff26c0);
            if ((lVar3 == *(long *)(lStack_58 + _DAT_112ff26c0)) && (lVar5 == lVar8))
            goto LAB_103b9e504;
            func_0x000107c605b8();
            uVar7 = (uint)lVar3;
          }
          func_0x000107c61170(lStack_58);
          goto LAB_103b9e530;
        }
        func_0x000107c61434(lVar8);
        func_0x000107c61170(lStack_58);
        if (lVar8 == 0) {
          uVar7 = 1;
          goto LAB_103b9e530;
        }
        func_0x000107c6142c(lVar8);
        goto LAB_103b9e52c;
      }
LAB_103b9e524:
      func_0x000107c61170(lStack_58);
    }
  }
LAB_103b9e52c:
  uVar7 = 0;
LAB_103b9e530:
  return uVar7 & 1;
}



/* Entry: 103b9e58c; end: 103b9e60b; -[CameraLensItem isEqual:] */

uint FUN_103b9e58c(undefined8 param_1,undefined8 param_2,long param_3)

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
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b9e418(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b9e60c; end: 103b9e667; -[CameraLensItem init] */

void FUN_103b9e60c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdOperaLayersDataModels.CameraLensItem",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9e638);
  (*pcVar1)();
}



/* Entry: 103b9e668; end: 103b9e6a7; -[CameraLensItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b9e688: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9e68c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff26b8 + 8))
  ;
  return;
}



/* Entry: 103b9e6a8; end: 103b9e6c7;  */

void FUN_103b9e6a8(void)

{
  func_0x000107c61168(&PTR_PTR_11293abf8);
  return;
}



/* Entry: 103b9e6c8; end: 103b9e6d7; -[PayToPromoteOperaScopedServices payToPromoteDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff26f0));
  return;
}



/* Entry: 103b9e6d8; end: 103b9e6e7; -[PayToPromoteOperaScopedServices payToPromotePlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e6d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff26f8));
  return;
}



/* Entry: 103b9e6e8; end: 103b9e7af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e6e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff26f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff26f8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9e7b0; end: 103b9e827; -[PayToPromoteOperaScopedServices initWithDataSource:payToPromotePlugin:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e7b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff26f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112ff26f8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103b9e828; end: 103b9e887; -[PayToPromoteOperaScopedServices init] */

void FUN_103b9e828(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PayToPromoteServices.PayToPromoteOperaScopedServices",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9e854);
  (*pcVar1)();
}



/* Entry: 103b9e888; end: 103b9e8bf; -[PayToPromoteOperaScopedServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b9e8a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9e8a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff26f0));
  return;
}



/* Entry: 103b9e8c0; end: 103b9e8df;  */

void FUN_103b9e8c0(void)

{
  func_0x000107c61168(&PTR_PTR_11293acc0);
  return;
}



/* Entry: 103b9e8e0; end: 103b9e8ef; -[PayToPromoteServices operaScopedServicesCreator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e8e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff2728));
  return;
}



/* Entry: 103b9e8f0; end: 103b9e987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e8f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff2728) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9e988; end: 103b9e9df; -[PayToPromoteServices initWithOperaScopedServicesCreator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9e988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112ff2728) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103b9e9e0; end: 103b9ea3f; -[PayToPromoteServices init] */

void FUN_103b9e9e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PayToPromoteServices.PayToPromoteServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b9ea0c);
  (*pcVar1)();
}



/* Entry: 103b9ea40; end: 103b9ea63; -[PayToPromoteServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b9ea40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff2728));
  return;
}



/* Entry: 103b9ea64; end: 103b9eb3b;  */

void FUN_103b9ea64(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b9eb3c; end: 103b9eb5b;  */

void FUN_103b9eb3c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103b9eb5c; end: 103b9eb9b;  */

void FUN_103b9eb5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff2758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5dc20;
  func_0x000107c61520(&UNK_10dc5dc20,&UNK_1106de088);
  puRam0000000112ff2758 = puVar1;
  return;
}



/* Entry: 103b9eb9c; end: 103b9ebab;  */

undefined1  [16] FUN_103b9eb9c(void)

{
  return ZEXT816(0x1106de088);
}



/* Entry: 103b9ebac; end: 103b9ed0f;  */

int FUN_103b9ebac(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b9ec28;
        goto LAB_103b9ec0c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b9ec0c:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_103b9ec28:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b9ed10; end: 103b9edd3;  */

void FUN_103b9ed10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112ff2798;
  func_0x0001000285a8(0x112ff2798,&UNK_10dc5dce0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103b9edd4; end: 103b9edd7;  */

void FUN_103b9edd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff27e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5dcf0;
  func_0x000107c61520(&UNK_10dc5dcf0,&UNK_1106de2b8);
  puRam0000000112ff27e0 = puVar1;
  return;
}



/* Entry: 103b9edd8; end: 103b9ee43;  */

void FUN_103b9edd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff27e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5dcf0;
  func_0x000107c61520(&UNK_10dc5dcf0,&UNK_1106de2b8);
  puRam0000000112ff27e0 = puVar1;
  return;
}



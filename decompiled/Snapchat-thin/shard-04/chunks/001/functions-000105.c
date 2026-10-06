/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031396bc; end: 1031396bf;  */

void FUN_1031396bc(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_103139e34(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_103139eb4(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4,puVar3,lVar1);
    FUN_103138560(lVar4);
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 1031396c0; end: 1031397ef;  */

void FUN_1031396c0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_103139e34(param_1,puVar3,0x112d36580,&UNK_10d9016d0);
  puVar2 = puVar3;
  (**(code **)(lVar5 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_103139eb4(puVar3,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar4,puVar3,lVar1);
    FUN_103138560(lVar4);
    (**(code **)(lVar5 + 8))(lVar4,lVar1);
  }
  return;
}



/* Entry: 1031397f0; end: 103139d43;  */

void FUN_1031397f0(char param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_78 + (-8 - extraout_x8);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar4 = *(long *)(param_3 + 0x20);
    if (lVar4 != 0) {
      lVar9 = *(long *)(param_3 + 0x28);
      lVar2 = lVar4;
      lStack_80 = lVar8;
      func_0x000107c614f0(lVar4);
      pcVar5 = *(code **)(lVar9 + 0x20);
      func_0x000107c615f0(lVar4);
      lVar8 = lStack_80;
      (*pcVar5)(lVar2,lVar9);
      func_0x000107c615e8(lVar4);
    }
    if (param_1 == '\0') {
      lVar8 = param_3 + 0x10;
      func_0x000107c61618();
      if (lVar8 != 0) {
        FUN_103152f14(param_2);
        func_0x000107c615e8(lVar8);
      }
    }
    else if (param_1 == '\x01') {
      FUN_103139560(param_2);
    }
    else {
      FUN_103139e34(param_2,puVar6,0x112d36580,&UNK_10d9016d0);
      puVar3 = puVar6;
      (**(code **)(lVar8 + 0x30))(puVar6,1,lVar1);
      if ((int)puVar3 == 1) {
        func_0x000107c61574(param_3);
        FUN_103139eb4(puVar6,0x112d36580,&UNK_10d9016d0);
        return;
      }
      (**(code **)(lVar8 + 0x20))(lVar7,puVar6,lVar1);
      FUN_103138560(lVar7);
      (**(code **)(lVar8 + 8))(lVar7,lVar1);
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 103139d44; end: 103139dd7;  */

void FUN_103139d44(void)

{
  long unaff_x20;
  
  FUN_103139dd8(unaff_x20 + 0x10);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 103139dd8; end: 103139dfb;  */

undefined8 FUN_103139dd8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103139dfc; end: 103139e33;  */

void FUN_103139dfc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103139560(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103139e34; end: 103139e7b;  */

undefined8 FUN_103139e34(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103139e7c; end: 103139e93;  */

void FUN_103139e7c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_103138b20();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103139e94; end: 103139eab;  */

void FUN_103139e94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1031396c0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103139eac; end: 103139eb3;  */

void FUN_103139eac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = auStack_78 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar9 - extraout_x8_00;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  uVar10 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  (**(code **)(lVar13 + 0x38))(lVar11,1,1,lVar1);
  lVar6 = (long)*(int *)(lVar6 + 0x30);
  uStack_80 = param_1;
  FUN_103139e34(param_1,lVar8,0x112d36580,&UNK_10d9016d0);
  FUN_103139e34(lVar11,lVar8 + lVar6,0x112d36580,&UNK_10d9016d0);
  pcVar12 = *(code **)(lVar13 + 0x30);
  lVar3 = lVar8;
  (*pcVar12)(lVar8,1,lVar1);
  if ((int)lVar3 == 1) {
    FUN_103139eb4(lVar11,0x112d36580,&UNK_10d9016d0);
    lVar6 = lVar8 + lVar6;
    (*pcVar12)(lVar6,1,lVar1);
    if ((int)lVar6 != 1) {
LAB_103139c3c:
      FUN_103139eb4(lVar8,0x112d7e680,&UNK_10d95e350);
      uVar7 = uStack_80;
      goto LAB_103139cfc;
    }
    FUN_103139eb4(lVar8,0x112d36580,&UNK_10d9016d0);
  }
  else {
    FUN_103139e34(lVar8,uVar10,0x112d36580,&UNK_10d9016d0);
    lVar3 = lVar8 + lVar6;
    (*pcVar12)(lVar3,1,lVar1);
    if ((int)lVar3 == 1) {
      FUN_103139eb4(lVar11,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar13 + 8))(uVar10,lVar1);
      goto LAB_103139c3c;
    }
    puVar4 = puVar9;
    (**(code **)(lVar13 + 0x20))(puVar9,lVar8 + lVar6,lVar1);
    func_0x000101553b98();
    uVar5 = uVar10;
    func_0x000107c5fab8(uVar10,puVar9,lVar1,puVar4);
    pcVar12 = *(code **)(lVar13 + 8);
    (*pcVar12)(puVar9,lVar1);
    FUN_103139eb4(lVar11,0x112d36580,&UNK_10d9016d0);
    (*pcVar12)(uVar10,lVar1);
    FUN_103139eb4(lVar8,0x112d36580,&UNK_10d9016d0);
    uVar7 = uStack_80;
    if ((uVar5 & 1) == 0) goto LAB_103139cfc;
  }
  uVar7 = uStack_80;
  lVar6 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_10314f830(1,0);
    func_0x000107c615e8(lVar6);
  }
LAB_103139cfc:
  lVar6 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    FUN_103152f14(uVar7);
    func_0x000107c615e8(lVar6);
  }
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 103139eb4; end: 103139ef3;  */

undefined8 FUN_103139eb4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103139ef4; end: 103139eff;  */

void FUN_103139ef4(char param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_78 + (-8 - extraout_x8);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + 0x20);
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar1 + 0x28);
      lVar3 = lVar5;
      lStack_80 = lVar9;
      func_0x000107c614f0(lVar5);
      pcVar6 = *(code **)(lVar10 + 0x20);
      func_0x000107c615f0(lVar5);
      lVar9 = lStack_80;
      (*pcVar6)(lVar3,lVar10);
      func_0x000107c615e8(lVar5);
    }
    if (param_1 == '\0') {
      lVar9 = lVar1 + 0x10;
      func_0x000107c61618();
      if (lVar9 != 0) {
        FUN_103152f14(param_2);
        func_0x000107c615e8(lVar9);
      }
    }
    else if (param_1 == '\x01') {
      FUN_103139560(param_2);
    }
    else {
      FUN_103139e34(param_2,puVar7,0x112d36580,&UNK_10d9016d0);
      puVar4 = puVar7;
      (**(code **)(lVar9 + 0x30))(puVar7,1,lVar2);
      if ((int)puVar4 == 1) {
        func_0x000107c61574(lVar1);
        FUN_103139eb4(puVar7,0x112d36580,&UNK_10d9016d0);
        return;
      }
      (**(code **)(lVar9 + 0x20))(lVar8,puVar7,lVar2);
      FUN_103138560(lVar8);
      (**(code **)(lVar9 + 8))(lVar8,lVar2);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103139f00; end: 10313a14b;  */

void FUN_103139f00(void)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uStack_d8;
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined *puStack_48;
  
  uVar9 = *(undefined8 *)PTR__kCIContextCacheIntermediates_11034ad08;
  uStack_88 = 0;
  uVar10 = *(undefined8 *)PTR__kCIContextPriorityRequestLow_11034ad18;
  puStack_70 = PTR___sSbN_11034dd40;
  puStack_48 = PTR___sSbN_11034dd40;
  uStack_60 = 1;
  uStack_90 = uVar9;
  uStack_68 = uVar10;
  func_0x0001000285a8(0x112d5dff0,&UNK_10db286d0);
  lVar2 = 2;
  func_0x000107c60498();
  puVar6 = &uStack_d8;
  func_0x00010313f6c0(&uStack_90,puVar6,0x112d5dff8,&UNK_10d9246e0);
  uVar3 = uStack_d8;
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(lVar2);
  uVar8 = uVar3;
  FUN_10313f208();
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313a140);
    (*pcVar1)();
  }
  lVar5 = lVar2 + 0x40;
  uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar5 + uVar7) = *(ulong *)(lVar5 + uVar7) | 1L << (uVar8 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + uVar8 * 8) = uVar3;
  func_0x000100102924(auStack_d0,*(long *)(lVar2 + 0x38) + uVar8 * 0x20);
  if (SCARRY8(*(long *)(lVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313a144);
    (*pcVar1)();
  }
  *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
  puVar6 = &uStack_d8;
  func_0x00010313f6c0(&uStack_68,puVar6,0x112d5dff8,&UNK_10d9246e0);
  uVar3 = uStack_d8;
  FUN_10313f208();
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10313a148);
    (*pcVar1)();
  }
  uVar8 = uVar3 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar5 + uVar8) = *(ulong *)(lVar5 + uVar8) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar2 + 0x30) + uVar3 * 8) = uStack_d8;
  func_0x000100102924(auStack_d0,*(long *)(lVar2 + 0x38) + uVar3 * 0x20);
  func_0x000107c61574(lVar2);
  uVar9 = 0x112d5dff8;
  func_0x0001000285a8(0x112d5dff8,&UNK_10d9246e0);
  func_0x000107c61408(&uStack_90,2,uVar9);
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    puVar4 = PTR__OBJC_CLASS___CIContext_1126b3120;
    func_0x000107c610f8();
    uVar10 = 0;
    func_0x0001010f6448(0);
    uVar9 = 0x112d5dce8;
    func_0x00010313f644(0x112d5dce8,&SUB_1010f6448,&UNK_10d9244d4);
    lVar5 = lVar2;
    func_0x000107c5f9dc(lVar2,uVar10,PTR___sypN_11034f1a8 + 8,uVar9);
    func_0x000107c61574(lVar2);
    func_0x000107c47c98();
    func_0x000107c61170(lVar5);
    puRam0000000112f44270 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10313a14c);
  (*pcVar1)();
}



/* Entry: 10313a14c; end: 10313a3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313a14c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  lVar3 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000107c61614(unaff_x20 + 0x10,0);
  lVar2 = _DAT_112f44080;
  lVar4 = 0;
  FUN_10313e71c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar4);
  puVar5 = PTR__kCMTimeInvalid_110348648;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f44088);
  uVar6 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
  *puVar1 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
  puVar1[1] = *(undefined8 *)(puVar5 + 8);
  puVar1[2] = uVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112f44090) = 0;
  lVar2 = _DAT_112f44098;
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar3
            );
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1275e0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112f440a0;
  puVar5 = &UNK_10db90370;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  func_0x00010313f6c0(param_1,unaff_x20 + 0x18,0x112f44260,&UNK_10db90460);
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  puVar5 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c61174(param_2);
  func_0x000107c41570(puVar5);
  func_0x000107c61180();
  func_0x000107c6157c();
  func_0x000107c3d7bc(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61574();
  func_0x000107c61170(param_2);
  func_0x00010313f708(param_1,0x112f44260,&UNK_10db90460);
  return;
}



/* Entry: 10313a3a4; end: 10313b45f;  */

/* WARNING: Removing unreachable block (ram,0x00010313a7e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313a3a4(undefined *param_1,undefined8 param_2,double param_3,undefined *param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  double *pdVar1;
  int iVar2;
  unkuint9 Var3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long lVar22;
  long extraout_x8_02;
  long lVar23;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 *unaff_x20;
  code *pcVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  code *pcVar30;
  double dVar31;
  double dVar32;
  undefined *puVar33;
  undefined1 auStack_410 [8];
  code *pcStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long *plStack_3a8;
  ulong uStack_3a0;
  long lStack_398;
  undefined8 *puStack_390;
  code *pcStack_388;
  undefined *puStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined *puStack_340;
  code *pcStack_338;
  undefined *puStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_308 [176];
  undefined1 auStack_258 [176];
  undefined1 auStack_1a8 [232];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  
  uVar20 = *unaff_x20;
  lVar7 = 0;
  puVar16 = param_1;
  uStack_3d8 = param_6;
  uStack_3c8 = param_7;
  uStack_3a0 = param_5;
  FUN_10313e71c();
  lVar28 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar28 + 0x40));
  puVar8 = (undefined8 *)0x0;
  plStack_3a8 = (long *)(auStack_410 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eec8();
  lStack_398 = puVar8[-1];
  puStack_390 = puVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_398 + 0x40));
  lVar29 = (long)(auStack_410 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar21 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar23 = lVar29 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar23 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcStack_388 = (code *)(lVar26 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = (lVar26 - extraout_x12_00) - extraout_x12_01;
  lVar14 = 0x112f44078;
  lVar10 = lVar14;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar24 = lVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_3c0 = lVar24;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = lVar24 - extraout_x12_02;
  func_0x000107c6071c();
  lVar10 = _DAT_112f44080;
  puVar33 = puVar16;
  func_0x000107c61428((long)unaff_x20 + _DAT_112f44080,auStack_b0,0,0);
  lStack_3d0 = lVar10;
  func_0x00010313f6c0((long)unaff_x20 + lVar10,lVar24,0x112f44078,&UNK_10db90470);
  lVar10 = lVar24;
  lStack_3b8 = lVar28;
  lStack_3b0 = lVar7;
  (**(code **)(lVar28 + 0x30))(lVar24,1,lVar7);
  func_0x00010313f708(lVar24,0x112f44078,&UNK_10db90470);
  if ((int)lVar10 != 1) {
    return;
  }
  puVar8 = unaff_x20 + 2;
  func_0x000107c61618();
  if (puVar8 != (undefined8 *)0x0) {
    func_0x000107c3ec60();
    func_0x000107c609cc();
    if (0.0 < (double)puVar33) {
      func_0x000107c3ec60(puVar8);
      func_0x000107c609b0();
      if (0.0 < (double)puVar33) {
        puVar11 = puVar8;
        FUN_10313b460();
        if (puVar11 == (undefined8 *)0x0) {
          func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
          puVar16 = puStack_340;
          if (puStack_340 != (undefined *)0x0) {
            func_0x0001000a8868(&puStack_358,puStack_340);
            (**(code **)(pcStack_338 + 0x38))(5,puVar16,pcStack_338);
LAB_10313aa7c:
            func_0x000107c61170(puVar8);
            goto LAB_10313a9c4;
          }
        }
        else {
          puVar12 = puVar11;
          FUN_10313b5a4();
          if (((ulong)puVar12 & 1) != 0) {
            puStack_3e0 = puVar8;
            func_0x000107c3ec60(puVar8);
            param_3 = param_3 / (double)param_4;
            dVar32 = param_3 * 1280.0 * 0.5;
            if (1.0 <= param_3) {
              dVar32 = 640.0;
            }
            dVar31 = 640.0;
            if (1.0 <= param_3) {
              dVar31 = (1280.0 / param_3) * 0.5;
            }
            if ((long)uStack_3a0 < 2) {
              uStack_3a0 = 1;
            }
            if (0x3b < (long)uStack_3a0) {
              uStack_3a0 = 0x3c;
            }
            uVar13 = unaff_x20[8];
            uStack_3e8 = uVar13;
            func_0x000107c5c7fc();
            func_0x000107c61180();
            func_0x000107c5edb4(lVar26);
            func_0x000107c61170(uVar13);
            puStack_358 = (undefined *)0x2d736e656c626577;
            uStack_350 = 0xe800000000000000;
            func_0x000107c5eec4(lVar29);
            func_0x000107c5eeac();
            (**(code **)(lStack_398 + 8))(lVar29,puStack_390);
            func_0x000107c5fb78(uVar13,lVar14);
            func_0x000107c6142c(lVar14);
            uVar13 = uStack_350;
            pcVar30 = pcStack_388;
            func_0x000107c5ed9c(pcStack_388,puStack_358,uStack_350);
            func_0x000107c6142c(uVar13);
            pcVar25 = *(code **)(lVar21 + 8);
            (*pcVar25)(lVar26,lVar9);
            func_0x000107c5eda0(lVar22,0x34706d,0xe300000000000000);
            pcStack_388 = pcVar25;
            (*pcVar25)(pcVar30,lVar9);
            pcVar30 = *(code **)(lVar21 + 0x10);
            (*pcVar30)(lVar23,lVar22,lVar9);
            uVar13 = *(undefined8 *)PTR__AVFileTypeMPEG4_110348008;
            func_0x000107c610f8(PTR__OBJC_CLASS___AVAssetWriter_1126bf5a8);
            func_0x000107c61174(uVar13);
            func_0x000102b722dc(lVar23,uVar13);
            func_0x000107c61170(uVar13);
            pcStack_408 = pcVar30;
            if (lVar23 == 0) {
              func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
              puVar16 = puStack_340;
              puVar8 = puStack_3e0;
              if (puStack_340 == (undefined *)0x0) {
                (*pcStack_388)(lVar22,lVar9);
                goto LAB_10313b0e0;
              }
              func_0x0001000a8868(&puStack_358,puStack_340);
              (**(code **)(pcStack_338 + 0x38))(5,puVar16,pcStack_338);
              func_0x000107c61170(puVar11);
              func_0x000107c61170(puVar8);
            }
            else {
              dVar32 = (double)(long)dVar32 + (double)(long)dVar32;
              if (dVar32 <= 2.0) {
                dVar32 = 2.0;
              }
              lVar14 = 0x112d4b5e8;
              func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
              puVar19 = auStack_1a8;
              lVar10 = lVar14;
              func_0x000107c61534();
              *(undefined8 *)(lVar10 + 0x18) = 8;
              *(undefined8 *)(lVar10 + 0x10) = 4;
              uVar13 = *(undefined8 *)PTR__AVVideoCodecKey_110348120;
              func_0x000107c5faec();
              *(undefined8 *)(lVar10 + 0x20) = uVar13;
              *(undefined1 **)(lVar10 + 0x28) = puVar19;
              uVar27 = *(undefined8 *)PTR__AVVideoCodecTypeHEVC_110348130;
              uVar13 = 0;
              func_0x000102b68db0();
              *(undefined8 *)(lVar10 + 0x48) = uVar13;
              *(undefined8 *)(lVar10 + 0x30) = uVar27;
              uVar13 = *(undefined8 *)PTR__AVVideoWidthKey_1103481a0;
              func_0x000107c5faec();
              *(undefined8 *)(lVar10 + 0x50) = uVar13;
              *(undefined1 **)(lVar10 + 0x58) = puVar19;
              puVar33 = PTR___sSiN_11034deb0;
              if ((dVar32 == INFINITY) || (NAN(dVar32))) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b44c);
                (*pcVar30)();
              }
              if (dVar32 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b450);
                (*pcVar30)();
              }
              if (9.223372036854776e+18 <= dVar32) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b454);
                (*pcVar30)();
              }
              dVar31 = (double)(long)dVar31 + (double)(long)dVar31;
              lVar7 = (long)dVar32;
              if (dVar31 <= 2.0) {
                dVar31 = 2.0;
              }
              *(undefined **)(lVar10 + 0x78) = PTR___sSiN_11034deb0;
              *(long *)(lVar10 + 0x60) = lVar7;
              uVar13 = *(undefined8 *)PTR__AVVideoHeightKey_110348168;
              func_0x000107c5faec();
              *(undefined8 *)(lVar10 + 0x80) = uVar13;
              *(undefined1 **)(lVar10 + 0x88) = puVar19;
              if ((dVar31 == INFINITY) || (NAN(dVar31))) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b458);
                (*pcVar30)();
              }
              if (dVar31 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b45c);
                (*pcVar30)();
              }
              lStack_398 = lVar7;
              puStack_390 = puVar11;
              if (9.223372036854776e+18 <= dVar31) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x10313b460);
                (*pcVar30)();
              }
              uStack_3f0 = *(undefined8 *)PTR__AVMediaTypeVideo_110348090;
              *(undefined **)(lVar10 + 0xa8) = puVar33;
              *(long *)(lVar10 + 0x90) = (long)dVar31;
              uVar13 = *(undefined8 *)PTR__AVVideoCompressionPropertiesKey_110348158;
              func_0x000107c5faec();
              *(undefined8 *)(lVar10 + 0xb0) = uVar13;
              *(undefined1 **)(lVar10 + 0xb8) = puVar19;
              puVar19 = auStack_258;
              lVar7 = lVar14;
              func_0x000107c61534();
              uStack_3f8 = 6;
              uStack_400 = 3;
              *(undefined8 *)(lVar7 + 0x18) = 6;
              *(undefined8 *)(lVar7 + 0x10) = 3;
              uVar13 = *(undefined8 *)PTR__AVVideoAverageBitRateKey_110348108;
              func_0x000107c5faec();
              *(undefined8 *)(lVar7 + 0x20) = uVar13;
              *(undefined **)(lVar7 + 0x48) = puVar33;
              *(undefined1 **)(lVar7 + 0x28) = puVar19;
              *(undefined8 *)(lVar7 + 0x30) = 2500000;
              uVar13 = *(undefined8 *)PTR__AVVideoExpectedSourceFrameRateKey_110348160;
              func_0x000107c5faec();
              uVar6 = uStack_3a0;
              puVar18 = PTR___ss5Int32VN_11034ee20;
              *(undefined8 *)(lVar7 + 0x50) = uVar13;
              *(undefined1 **)(lVar7 + 0x58) = puVar19;
              *(undefined **)(lVar7 + 0x78) = puVar18;
              *(int *)(lVar7 + 0x60) = (int)uStack_3a0;
              uVar13 = *(undefined8 *)PTR__AVVideoMaxKeyFrameIntervalKey_110348170;
              func_0x000107c5faec();
              *(undefined8 *)(lVar7 + 0x80) = uVar13;
              *(undefined1 **)(lVar7 + 0x88) = puVar19;
              *(undefined **)(lVar7 + 0xa8) = puVar33;
              *(ulong *)(lVar7 + 0x90) = uVar6 << 1;
              func_0x000107c61174(uVar27);
              lVar21 = lVar7;
              func_0x000100214a84();
              func_0x000107c61588(lVar7);
              uVar13 = 0x112d4b5f0;
              func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
              func_0x000107c61408((undefined8 *)(lVar7 + 0x20),3,uVar13);
              uVar27 = 0x112d472a8;
              func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
              *(undefined8 *)(lVar10 + 0xd8) = uVar27;
              *(long *)(lVar10 + 0xc0) = lVar21;
              lVar7 = lVar10;
              func_0x000100214a84(lVar10);
              func_0x000107c61588(lVar10);
              func_0x000107c61408((undefined8 *)(lVar10 + 0x20),4,uVar13);
              puVar8 = (undefined8 *)PTR__OBJC_CLASS___AVAssetWriterInput_1126bf5b0;
              func_0x000107c610f8();
              puVar4 = PTR___sypN_11034f1a8;
              puVar18 = PTR___sSSSHsWP_11034da90;
              puVar33 = PTR___sSSN_11034da80;
              lVar10 = lVar7;
              func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                                  PTR___sSSSHsWP_11034da90);
              func_0x000107c6142c(lVar7);
              func_0x000107c476c4();
              func_0x000107c61170(lVar10);
              func_0x000107c54788(puVar8);
              puVar19 = auStack_308;
              func_0x000107c61534();
              *(undefined8 *)(lVar14 + 0x18) = uStack_3f8;
              *(undefined8 *)(lVar14 + 0x10) = uStack_400;
              uVar27 = *(undefined8 *)PTR__kCVPixelBufferPixelFormatTypeKey_11034a3b0;
              func_0x000107c5faec();
              *(undefined8 *)(lVar14 + 0x20) = uVar27;
              *(undefined1 **)(lVar14 + 0x28) = puVar19;
              *(undefined **)(lVar14 + 0x48) = PTR___ss6UInt32VN_11034f020;
              *(undefined4 *)(lVar14 + 0x30) = 0x42475241;
              uVar27 = *(undefined8 *)PTR__kCVPixelBufferWidthKey_11034a3d0;
              func_0x000107c5faec();
              *(undefined8 *)(lVar14 + 0x50) = uVar27;
              *(undefined1 **)(lVar14 + 0x58) = puVar19;
              puVar15 = PTR___sSiN_11034deb0;
              *(undefined **)(lVar14 + 0x78) = PTR___sSiN_11034deb0;
              *(long *)(lVar14 + 0x60) = lStack_398;
              uVar27 = *(undefined8 *)PTR__kCVPixelBufferHeightKey_11034a388;
              func_0x000107c5faec();
              *(undefined8 *)(lVar14 + 0x80) = uVar27;
              *(undefined1 **)(lVar14 + 0x88) = puVar19;
              *(undefined **)(lVar14 + 0xa8) = puVar15;
              *(long *)(lVar14 + 0x90) = (long)dVar31;
              func_0x000107c61174();
              lVar10 = lVar14;
              func_0x000100214a84(lVar14);
              func_0x000107c61588(lVar14);
              func_0x000107c61408((undefined8 *)(lVar14 + 0x20),3,uVar13);
              puVar15 = PTR__OBJC_CLASS___AVAssetWriterInputPixelBufferAdaptor_1126d0110;
              func_0x000107c610f8();
              lVar14 = lVar10;
              func_0x000107c5f9dc(lVar10,puVar33,puVar4 + 8,puVar18);
              func_0x000107c6142c(lVar10);
              func_0x000107c457c8();
              func_0x000107c61170(puVar8);
              func_0x000107c61170(lVar14);
              lVar14 = lVar23;
              func_0x000107c3f394();
              if ((int)lVar14 == 0) {
                FUN_103138560(lVar22);
                func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
                puVar16 = puStack_340;
                if (puStack_340 == (undefined *)0x0) goto LAB_10313b418;
                func_0x0001000a8868(&puStack_358,puStack_340);
                (**(code **)(pcStack_338 + 0x38))(5,puVar16,pcStack_338);
                func_0x000107c61170(puVar8);
                func_0x000107c61170(lVar23);
                func_0x000107c61170(puVar15);
                func_0x000107c61170(puStack_390);
                func_0x000107c61170(puStack_3e0);
              }
              else {
                func_0x000107c3d710(lVar23);
                lVar14 = lVar23;
                func_0x000107c5bc58();
                uVar6 = uStack_3a0;
                if ((int)lVar14 != 0) {
                  Var3 = (unkuint9)uStack_3a0;
                  puStack_358 = *(undefined **)PTR__kCMTimeZero_110348670;
                  puStack_348 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
                  uStack_350 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
                  func_0x000107c5bbb8(lVar23);
                  plVar5 = plStack_3a8;
                  lVar14 = lStack_3b0;
                  (*pcStack_408)((undefined1 *)
                                 ((long)plStack_3a8 + (long)*(int *)(lStack_3b0 + 0x1c)),lVar22,
                                 lVar9);
                  *plVar5 = lVar23;
                  plVar5[1] = (long)puVar8;
                  plVar5[2] = (long)puVar15;
                  uVar13 = uStack_3c8;
                  pdVar1 = (double *)((long)plVar5 + (long)*(int *)(lVar14 + 0x20));
                  *pdVar1 = dVar32;
                  pdVar1[1] = dVar31;
                  *(undefined8 **)((long)plVar5 + (long)*(int *)(lVar14 + 0x24)) = puStack_390;
                  *(int *)((long)plVar5 + (long)*(int *)(lVar14 + 0x28)) = (int)uVar6;
                  *(double *)((long)plVar5 + (long)*(int *)(lVar14 + 0x2c)) =
                       1.0 / (double)(unkint9)Var3;
                  *(undefined **)((long)plVar5 + (long)*(int *)(lVar14 + 0x30)) = puVar16;
                  iVar2 = *(int *)(lVar14 + 0x34);
                  *(undefined8 *)((long)plVar5 + (long)iVar2) = 0;
                  puVar8 = (undefined8 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x38));
                  *puVar8 = uStack_3d8;
                  puVar8[1] = uStack_3c8;
                  *(undefined8 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x3c)) = 0;
                  *(undefined1 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x40)) = 0;
                  *(undefined8 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x44)) = 0;
                  *(undefined1 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x48)) = 0;
                  *(undefined8 *)((long)plVar5 + (long)*(int *)(lVar14 + 0x4c)) = 0;
                  if ((double)param_1 <= 0.0) {
                    func_0x000107c6157c(uStack_3c8);
                  }
                  else {
                    puVar16 = &UNK_1106125d8;
                    func_0x000107c613fc(&UNK_1106125d8,0x18,7);
                    func_0x000107c61644(puVar16 + 0x10,unaff_x20);
                    puVar33 = &UNK_1106126f0;
                    func_0x000107c613fc(&UNK_1106126f0,0x20,7);
                    *(undefined **)(puVar33 + 0x10) = puVar16;
                    *(undefined8 *)(puVar33 + 0x18) = uVar20;
                    pcStack_338 = FUN_10313f3d0;
                    puStack_358 = PTR___NSConcreteStackBlock_11034bd00;
                    uStack_350 = 0x42000000;
                    puStack_348 = &UNK_100fef460;
                    puStack_340 = &UNK_110612708;
                    ppuVar17 = &puStack_358;
                    puStack_330 = puVar33;
                    func_0x000107c60bc4(ppuVar17);
                    puVar18 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
                    func_0x000107c61168();
                    func_0x000107c6157c(uVar13);
                    func_0x000107c6157c(puVar16);
                    func_0x000107c5ca5c(param_1);
                    func_0x000107c61180();
                    func_0x000107c60bd0(ppuVar17);
                    puVar33 = puStack_330;
                    func_0x000107c61574(puVar16);
                    func_0x000107c61574(puVar33);
                    puVar16 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
                    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
                    func_0x000107c4c190();
                    func_0x000107c61180();
                    func_0x000107c3d8e0();
                    func_0x000107c61170(puVar16);
                    *(undefined **)((long)plVar5 + (long)iVar2) = puVar18;
                  }
                  lVar10 = lStack_3c0;
                  FUN_10313f38c(plVar5,lStack_3c0);
                  (**(code **)(lStack_3b8 + 0x38))(lVar10,0,1,lVar14);
                  lVar14 = lStack_3d0;
                  func_0x000107c61428((long)unaff_x20 + lStack_3d0,&puStack_358,0x21,0);
                  func_0x00010313efb8(lVar10,(long)unaff_x20 + lVar14);
                  func_0x000107c614a8(&puStack_358);
                  func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
                  pcVar30 = pcStack_338;
                  puVar16 = puStack_340;
                  if (puStack_340 == (undefined *)0x0) {
                    func_0x00010313f708(&puStack_358,0x112f44260,&UNK_10db90460);
                  }
                  else {
                    func_0x0001000a8868(&puStack_358,puStack_340);
                    (**(code **)(pcVar30 + 0x30))(puVar16,pcVar30);
                    func_0x0001000834e4(&puStack_358);
                  }
                  FUN_10313b944();
                  func_0x000107c61170(puStack_3e0);
                  (*pcStack_388)(lVar22,lVar9);
                  func_0x00010313f684(plVar5,FUN_10313e71c);
                  return;
                }
                puStack_358 = (undefined *)0x0;
                uStack_350 = 0xe000000000000000;
                func_0x000107c602fc(0x25);
                func_0x000107c6142c(uStack_350);
                puStack_358 = (undefined *)0xd000000000000023;
                uStack_350 = 0x800000010f127640;
                lVar14 = lVar23;
                func_0x000107c42a28();
                func_0x000107c61180();
                if (lVar14 == 0) {
                  uVar13 = 0xe100000000000000;
                  uVar20 = 0x3f;
                }
                else {
                  func_0x000107c614cc();
                  uVar20 = uStack_320;
                  uVar13 = uStack_318;
                  func_0x000107c60640(uStack_320,uStack_318);
                  func_0x000107c61170(lVar14);
                }
                func_0x000107c5fb78(uVar20,uVar13);
                func_0x000107c6142c(uVar13);
                func_0x000107c6142c(uStack_350);
                FUN_103138560(lVar22);
                func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
                puVar16 = puStack_340;
                if (puStack_340 == (undefined *)0x0) {
LAB_10313b418:
                  (*pcStack_388)(lVar22,lVar9);
                  func_0x000107c61170(puStack_3e0);
                  func_0x000107c61170(puStack_390);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(lVar23);
                  goto LAB_10313b0ec;
                }
                func_0x0001000a8868(&puStack_358,puStack_340);
                (**(code **)(pcStack_338 + 0x38))(5,puVar16,pcStack_338);
                func_0x000107c61170(puVar8);
                func_0x000107c61170(lVar23);
                func_0x000107c61170(puVar15);
                func_0x000107c61170(puStack_390);
                func_0x000107c61170(puStack_3e0);
              }
            }
            (*pcStack_388)(lVar22,lVar9);
            goto LAB_10313a9c4;
          }
          func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
          puVar16 = puStack_340;
          if (puStack_340 != (undefined *)0x0) {
            func_0x0001000a8868(&puStack_358,puStack_340);
            (**(code **)(pcStack_338 + 0x38))(4,puVar16,pcStack_338);
            func_0x000107c61170(puVar8);
            puVar8 = puVar11;
            goto LAB_10313aa7c;
          }
LAB_10313b0e0:
          func_0x000107c61170(puVar8);
          puVar8 = puVar11;
        }
LAB_10313b0ec:
        func_0x000107c61170(puVar8);
        goto LAB_10313b0f0;
      }
    }
    func_0x000107c61170(puVar8);
  }
  puStack_358 = (undefined *)0x0;
  uStack_350 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  puStack_c0 = puStack_358;
  uStack_b8 = uStack_350;
  func_0x000107c5fb78(0xd000000000000015,0x800000010f127620);
  puVar8 = unaff_x20 + 2;
  func_0x000107c61618();
  if (puVar8 == (undefined8 *)0x0) {
    uVar13 = 0xe500000000000000;
    uVar20 = 0x65736c6166;
  }
  else {
    func_0x000107c61170();
    uVar13 = 0xe400000000000000;
    uVar20 = 0x65757274;
  }
  func_0x000107c5fb78(uVar20,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c5fb78(0x73646e756f62202c,0xe90000000000003d);
  puVar8 = unaff_x20 + 2;
  func_0x000107c61618();
  if (puVar8 == (undefined8 *)0x0) {
    puVar33 = (undefined *)0x0;
    param_2 = 0;
    param_3 = 0.0;
    param_4 = (undefined *)0x0;
  }
  else {
    func_0x000107c3ec60();
    func_0x000107c61170(puVar8);
  }
  uVar20 = 0;
  puStack_358 = puVar33;
  uStack_350 = param_2;
  puStack_348 = (undefined *)param_3;
  puStack_340 = param_4;
  func_0x000100f6e390(0);
  func_0x000107c603d0(&puStack_358,&puStack_c0,uVar20,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_b8);
  func_0x00010313f6c0(unaff_x20 + 3,&puStack_358,0x112f44260,&UNK_10db90460);
  puVar16 = puStack_340;
  if (puStack_340 != (undefined *)0x0) {
    func_0x0001000a8868(&puStack_358,puStack_340);
    (**(code **)(pcStack_338 + 0x38))(6,puVar16,pcStack_338);
LAB_10313a9c4:
    func_0x0001000834e4(&puStack_358);
    return;
  }
LAB_10313b0f0:
  func_0x00010313f708(&puStack_358,0x112f44260,&UNK_10db90460);
  return;
}



/* Entry: 10313b460; end: 10313b5a3;  */

ulong FUN_10313b460(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  puVar2 = PTR__OBJC_CLASS___WKWebView_1126b4f60;
  func_0x000107c61168(PTR__OBJC_CLASS___WKWebView_1126b4f60);
  uVar3 = param_1;
  func_0x000107c6148c(param_1,puVar2);
  if (uVar3 == 0) {
    func_0x000107c5c3b0();
    func_0x000107c61180();
    uVar4 = 0;
    func_0x000100f115fc(0);
    uVar5 = param_1;
    func_0x000107c5fc54(param_1,uVar4);
    func_0x000107c61170(param_1);
    uVar9 = uVar5 & 0xffffffffffffff8;
    if (uVar5 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar7 = uVar9;
      if (0x7fffffffffffffff < uVar5) {
        uVar7 = uVar5;
      }
      func_0x000107c60480();
    }
    uVar8 = 0;
    do {
      if (uVar7 == uVar8) {
        func_0x000107c6142c(uVar5);
        return 0;
      }
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10313b590);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar6 = uVar8;
        func_0x000100f040d0(uVar8,uVar5);
      }
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10313b558);
        (*pcVar1)();
      }
      uVar3 = uVar6;
      FUN_10313b460();
      func_0x000107c61170(uVar6);
      uVar8 = uVar8 + 1;
    } while (uVar3 == 0);
    func_0x000107c6142c(uVar5);
  }
  else {
    func_0x000107c61174(param_1);
  }
  return uVar3;
}



/* Entry: 10313b5a4; end: 10313b837;  */

/* WARNING: Removing unreachable block (ram,0x00010313b6fc) */

bool FUN_10313b5a4(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [48];
  
  lVar4 = 0x112f44278;
  func_0x0001000285a8(0x112f44278,&UNK_10db90478);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar7 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c5c7fc(uVar3);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar9);
  func_0x000107c61170(uVar3);
  lVar4 = 0x112da3000;
  func_0x0001000285a8(0x112da3000,&UNK_10db90480);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined8 *)(lVar4 + 0x20) =
       *(undefined8 *)PTR__NSURLVolumeAvailableCapacityForImportantUsageKey_11034ab38;
  func_0x000107c61174();
  lVar10 = lVar4;
  func_0x0001014a3020(lVar4);
  func_0x000107c61588(lVar4);
  func_0x00010313f684((undefined8 *)(lVar4 + 0x20),&UNK_1014a2fa0);
  func_0x000107c5ed78(lVar8,lVar10);
  func_0x000107c6142c(lVar10);
  lVar4 = 0;
  func_0x000107c5ecc4();
  lVar10 = *(long *)(lVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar8,0,1,lVar4);
  func_0x00010313f6c0(lVar8,puVar7,0x112f44278,&UNK_10db90478);
  uVar6 = 1;
  puVar5 = puVar7;
  (**(code **)(lVar10 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    func_0x00010313f708(lVar8,0x112f44278,&UNK_10db90478);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
    func_0x00010313f708(puVar7,0x112f44278,&UNK_10db90478);
    bVar1 = false;
  }
  else {
    func_0x000107c5ecbc();
    func_0x00010313f708(lVar8,0x112f44278,&UNK_10db90478);
    (**(code **)(lVar11 + 8))(lVar9,lVar2);
    (**(code **)(lVar10 + 8))(puVar7,lVar4);
    bVar1 = (uVar6 & 0xff) == 1;
    bVar1 = (!bVar1 && puVar5 != (undefined1 *)0xc7fffff) && (bVar1 || 0xc7ffffe < (long)puVar5);
  }
  return bVar1;
}



/* Entry: 10313b838; end: 10313b943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313b838(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar4 = param_2 + _DAT_112f44080;
    func_0x000107c61428(lVar4,auStack_60,0,0);
    lVar2 = 0;
    FUN_10313e71c();
    lVar5 = lVar4;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(lVar4,1,lVar2);
    if ((int)lVar5 == 0) {
      plVar1 = (long *)(lVar4 + *(int *)(lVar2 + 0x38));
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        lVar5 = plVar1[1];
        puVar3 = &UNK_110612740;
        func_0x000107c613fc(&UNK_110612740,0x20,7);
        *(long *)(puVar3 + 0x10) = lVar4;
        *(long *)(puVar3 + 0x18) = lVar5;
        FUN_10313f400(lVar4,lVar5);
        func_0x000107c6157c(lVar5);
        FUN_10313bb68(0,FUN_10313f3d8,puVar3);
        func_0x000107c61574(puVar3);
        func_0x00010313f410(lVar4,lVar5);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10313b944; end: 10313bb67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313b944(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  byte *pbVar8;
  long unaff_x20;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  byte abStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar2 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar9 = abStack_a0 + -extraout_x8;
  lVar3 = 0;
  FUN_10313e71c();
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  pbVar8 = pbVar9 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_112f44080;
  func_0x000107c61428(lVar2,auStack_68,1,0);
  func_0x00010313f6c0(lVar2,pbVar9,0x112f44078,&UNK_10db90470);
  pcVar12 = *(code **)(lVar13 + 0x30);
  pbVar4 = pbVar9;
  (*pcVar12)(pbVar9,1,lVar3);
  if ((int)pbVar4 == 1) {
    func_0x00010313f708(pbVar9,0x112f44078,&UNK_10db90470);
  }
  else {
    func_0x00010313ef74(pbVar9,pbVar8);
    iVar1 = *(int *)(lVar3 + 0x48);
    if ((pbVar8[iVar1] & 1) == 0) {
      lVar13 = lVar2;
      (*pcVar12)(lVar2,1,lVar3);
      if ((int)lVar13 == 0) {
        *(undefined1 *)(lVar2 + iVar1) = 1;
      }
      uVar11 = *(undefined8 *)pbVar8;
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f440a0);
      puVar5 = &UNK_1106125d8;
      func_0x000107c613fc(&UNK_1106125d8,0x18,7);
      func_0x000107c61644(puVar5 + 0x10);
      puVar6 = &UNK_110612768;
      func_0x000107c613fc(&UNK_110612768,0x20,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(undefined8 *)(puVar6 + 0x18) = uVar11;
      uStack_78 = 0x10313f420;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0x42000000;
      puStack_88 = &UNK_1000f6b44;
      puStack_80 = &UNK_110612780;
      ppuVar7 = &puStack_98;
      puStack_70 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar5 = puStack_70;
      func_0x000107c61174(uVar11);
      func_0x000107c61574(puVar5);
      func_0x000107c4e528(*(undefined8 *)(pbVar8 + *(int *)(lVar3 + 0x2c)),uVar10);
      func_0x000107c60bd0(ppuVar7);
    }
    func_0x00010313f684(pbVar8,FUN_10313e71c);
  }
  return;
}



/* Entry: 10313bb68; end: 10313c14f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313bb68(double param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x13;
  long lVar13;
  undefined8 *unaff_x20;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long lVar19;
  double dVar20;
  double dStack_190;
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  ulong uStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined4 uStack_114;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  
  uStack_110 = *unaff_x20;
  lVar3 = 0x112d36580;
  uStack_114 = param_2;
  pcStack_f8 = param_3;
  uStack_f0 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)&dStack_190 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar14 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  puStack_120 = (undefined8 *)extraout_x13;
  lStack_100 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12;
  lVar3 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_140 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar5 = 0;
  FUN_10313e71c();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  puVar17 = (undefined8 *)(lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar3 = (long)unaff_x20 + _DAT_112f44080;
  func_0x000107c61428(lVar3,auStack_90,0,0);
  func_0x00010313f6c0(lVar3,lVar12,0x112f44078,&UNK_10db90470);
  lVar6 = lVar12;
  (**(code **)(lVar19 + 0x30))(lVar12,1,lVar5);
  if ((int)lVar6 == 1) {
    func_0x00010313f708(lVar12,0x112f44078,&UNK_10db90470);
    (**(code **)(lVar13 + 0x38))(lVar14,1,1,lVar4);
    (*pcStack_f8)(lVar14);
    func_0x00010313f708(lVar14,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x00010313ef74(lVar12,puVar17);
    func_0x000107c498f8(*(undefined8 *)((long)puVar17 + (long)*(int *)(lVar5 + 0x34)));
    uStack_130 = *puVar17;
    uStack_128 = puVar17[1];
    pcVar15 = *(code **)(lVar13 + 0x10);
    lVar6 = lVar4;
    lStack_108 = lVar11;
    (*pcVar15)(lVar11,(long)puVar17 + (long)*(int *)(lVar5 + 0x1c));
    dVar20 = 0.0;
    if (*(char *)((long)puVar17 + (long)*(int *)(lVar5 + 0x40)) == '\x01') {
      func_0x000107c6071c();
      dVar20 = param_1 - *(double *)((long)puVar17 + (long)*(int *)(lVar5 + 0x3c));
    }
    uStack_148 = *(undefined8 *)((long)puVar17 + (long)*(int *)(lVar5 + 0x44));
    uStack_150 = *(undefined8 *)((long)unaff_x20 + _DAT_112f440a0);
    uStack_138 = unaff_x20[8];
    func_0x000107c6071c();
    uVar1 = *(uint *)((long)puVar17 + (long)*(int *)(lVar5 + 0x28));
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    uVar10 = (ulong)uVar1;
    uVar7 = 1;
    func_0x000107c600c8();
    lVar11 = lStack_140;
    uStack_160 = uVar10 >> 0x20;
    uStack_170 = uVar10;
    uStack_168 = uVar7;
    lStack_158 = lVar6;
    (**(code **)(lVar19 + 0x38))(lStack_140,1,1,lVar5);
    func_0x000107c61428(lVar3,&puStack_e8,0x21,0);
    func_0x00010313efb8(lVar11,lVar3);
    func_0x000107c614a8(&puStack_e8);
    lStack_140 = *(undefined8 *)((long)unaff_x20 + _DAT_112f44098);
    puVar8 = &UNK_1106125d8;
    func_0x000107c613fc(&UNK_1106125d8,0x18,7);
    puStack_180 = puVar8;
    func_0x000107c61644(puVar8 + 0x10);
    (*pcVar15)(lStack_100,lStack_108,lVar4);
    func_0x00010313f6c0(unaff_x20 + 3,&uStack_b8,0x112f44260,&UNK_10db90460);
    uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar16 = uVar10 + 0x48 & (uVar10 ^ 0xffffffffffffffff);
    uVar18 = (long)puStack_120 + uVar16 + 7 & 0xfffffffffffffff8;
    lStack_188 = uVar18 + 8;
    puVar8 = &UNK_110612600;
    lStack_178 = lVar4;
    puStack_120 = puVar17;
    func_0x000107c613fc(&UNK_110612600,uVar18 + 0x68,uVar10 | 7);
    *(undefined8 *)(puVar8 + 0x10) = uStack_130;
    *(undefined **)(puVar8 + 0x18) = puStack_180;
    *(undefined8 *)(puVar8 + 0x20) = uStack_168;
    *(int *)(puVar8 + 0x28) = (int)uStack_170;
    *(int *)(puVar8 + 0x2c) = (int)uStack_160;
    *(long *)(puVar8 + 0x30) = lStack_158;
    *(undefined8 *)(puVar8 + 0x38) = uStack_128;
    *(undefined8 *)(puVar8 + 0x40) = uStack_138;
    (**(code **)(lVar13 + 0x20))(puVar8 + uVar16,lStack_100,lVar4);
    uVar2 = uStack_f0;
    uVar7 = uStack_150;
    *(undefined8 *)(puVar8 + uVar18) = uStack_150;
    *(undefined8 *)(puVar8 + lStack_188) = uStack_148;
    *(char *)((long)(puVar8 + lStack_188) + 8) = (char)uStack_114;
    puVar17 = (undefined8 *)(puVar8 + uVar18 + 0x18);
    puVar17[4] = uStack_98;
    puVar17[1] = uStack_b0;
    *puVar17 = uStack_b8;
    puVar17[3] = uStack_a0;
    puVar17[2] = uStack_a8;
    *(double *)(puVar8 + uVar18 + 0x40) = dVar20;
    *(double *)(puVar8 + uVar18 + 0x48) = param_1;
    *(code **)(puVar8 + uVar18 + 0x50) = pcStack_f8;
    *(undefined8 *)((long)(puVar8 + uVar18 + 0x50) + 8) = uStack_f0;
    *(undefined8 *)(puVar8 + uVar18 + 0x60) = uStack_110;
    pcStack_c8 = FUN_10313f008;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    puStack_d8 = &UNK_1000f6b44;
    puStack_d0 = &UNK_110612618;
    ppuVar9 = &puStack_e8;
    puStack_c0 = puVar8;
    func_0x000107c60bc4(ppuVar9);
    puVar8 = puStack_c0;
    func_0x000107c61174(uStack_130);
    func_0x000107c61174(uStack_128);
    func_0x000107c61174(uStack_138);
    func_0x000107c615f0(uVar7);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c4e524(lStack_140);
    func_0x000107c60bd0(ppuVar9);
    (**(code **)(lVar13 + 8))(lStack_108,lStack_178);
    func_0x00010313f684(puStack_120,FUN_10313e71c);
  }
  return;
}



/* Entry: 10313c150; end: 10313c1bb;  */

void FUN_10313c150(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  func_0x000107c427f4(param_1);
  uVar1 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  func_0x000107c61428(param_2 + 0x10,auStack_50,1,0);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  return;
}



/* Entry: 10313c1bc; end: 10313c23f;  */

void FUN_10313c1bc(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  (*param_2)();
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)PTR__UIBackgroundTaskInvalid_110345af0;
  if (*(long *)(param_4 + 0x10) != lVar1) {
    func_0x000107c427f4(param_5);
    func_0x000107c61428(param_4 + 0x10,auStack_60,1,0);
    *(long *)(param_4 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10313c240; end: 10313cef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313c240(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  byte param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_1a0;
  uint uStack_194;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined *puStack_118;
  ulong uStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar4 = 0;
  uStack_168 = param_8;
  lStack_160 = param_10;
  uStack_138 = param_9;
  func_0x000107c5ede0();
  lStack_158 = *(long *)(lVar4 + -8);
  lVar10 = *(long *)(lStack_158 + 0x40);
  lStack_148 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_150 = (long)&uStack_1a0 - (lVar10 + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_3;
  func_0x000107c5bd00();
  if (lVar4 == 1) {
    func_0x000107c61428(param_4 + 0x10,auStack_130,0,0);
    lVar4 = param_4 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      puVar1 = (ulong *)(lVar4 + _DAT_112f44088);
      puVar12 = (undefined *)*puVar1;
      uVar11 = puVar1[1];
      uVar7 = puVar1[1];
      uVar9 = puVar1[2];
      func_0x000107c61574();
      puVar5 = puVar12;
      func_0x000107c600cc(puVar12,uVar7,uVar9);
      if (((ulong)puVar5 & 1) != 0) {
        uStack_e0 = (undefined4)param_6;
        uStack_dc = (undefined4)((ulong)param_6 >> 0x20);
        puStack_118 = puVar12;
        uStack_110 = uVar11;
        puStack_108 = (undefined *)uVar9;
        uStack_e8 = param_5;
        uStack_d8 = param_7;
        func_0x000107c60a34(&puStack_90,&puStack_118,&uStack_e8);
        puStack_118 = puStack_90;
        uStack_110 = uStack_88;
        puStack_108 = (undefined *)uStack_80;
        func_0x000107c42878(param_3);
      }
    }
  }
  func_0x000107c61428(param_4 + 0x10,&puStack_90,0,0);
  lVar4 = param_4 + 0x10;
  func_0x000107c61648();
  puVar5 = PTR__kCMTimeInvalid_110348648;
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)(PTR__kCMTimeInvalid_110348648 + 0x10);
    puVar2 = (undefined8 *)(lVar4 + _DAT_112f44088);
    *puVar2 = *(undefined8 *)PTR__kCMTimeInvalid_110348648;
    puVar2[1] = *(undefined8 *)(puVar5 + 8);
    puVar2[2] = uVar8;
    func_0x000107c61574();
  }
  func_0x000107c61428(param_4 + 0x10,auStack_a8,0,0);
  lVar4 = param_4 + 0x10;
  func_0x000107c61648();
  if (lVar4 == 0) {
    uStack_180 = 0;
  }
  else {
    uStack_180 = *(undefined8 *)(lVar4 + _DAT_112f44090);
    func_0x000107c61574();
  }
  uStack_188 = param_18;
  uStack_170 = param_17;
  uStack_190 = param_16;
  uStack_194 = (uint)param_13;
  uStack_1a0 = param_12;
  uStack_178 = param_11;
  lStack_140 = param_3;
  func_0x000107c61428(param_4 + 0x10,auStack_c0,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    *(undefined8 *)(param_4 + _DAT_112f44090) = 0;
    func_0x000107c61574();
  }
  func_0x000107c4c4ac(uStack_168);
  lVar4 = lStack_158;
  (**(code **)(lStack_158 + 0x10))(lStack_150,lStack_160,lStack_148);
  func_0x00010313f6c0(param_15,&uStack_e8,0x112f44260,&UNK_10db90460);
  uVar7 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar9 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  uVar11 = lVar10 + uVar9 + 7 & 0xfffffffffffffff8;
  lStack_160 = uVar11 + 8;
  puVar5 = &UNK_110612650;
  func_0x000107c613fc(&UNK_110612650,uVar11 + 0x70,uVar7 | 7);
  *(long *)(puVar5 + 0x10) = lStack_140;
  *(undefined8 *)(puVar5 + 0x18) = uStack_138;
  (**(code **)(lVar4 + 0x20))(puVar5 + uVar9,lStack_150,lStack_148);
  uVar3 = uStack_170;
  uVar8 = uStack_178;
  *(undefined8 *)(puVar5 + uVar11) = uStack_178;
  *(undefined8 *)(puVar5 + lStack_160) = uStack_1a0;
  *(char *)((long)(puVar5 + lStack_160) + 8) = (char)uStack_194;
  puVar2 = (undefined8 *)(puVar5 + uVar11 + 0x18);
  puVar2[4] = uStack_c8;
  puVar2[1] = CONCAT44(uStack_dc,uStack_e0);
  *puVar2 = uStack_e8;
  puVar2[3] = uStack_d0;
  puVar2[2] = uStack_d8;
  *(undefined8 *)(puVar5 + uVar11 + 0x40) = param_1;
  *(undefined8 *)(puVar5 + uVar11 + 0x48) = param_2;
  *(undefined8 *)(puVar5 + uVar11 + 0x50) = uStack_180;
  *(undefined8 *)(puVar5 + uVar11 + 0x58) = uStack_190;
  *(undefined8 *)((long)(puVar5 + uVar11 + 0x58) + 8) = uStack_170;
  *(undefined8 *)(puVar5 + uVar11 + 0x68) = uStack_188;
  pcStack_f8 = FUN_10313f0e4;
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0x42000000;
  puStack_108 = &UNK_1000b0c7c;
  puStack_100 = &UNK_110612668;
  ppuVar6 = &puStack_118;
  puStack_f0 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_f0;
  lVar4 = lStack_140;
  func_0x000107c61174(lStack_140);
  func_0x000107c61174(uStack_138);
  func_0x000107c615f0(uVar8);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c435c0(lVar4);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 10313cef8; end: 10313cf53;  */

void FUN_10313cef8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10313cf54(param_2);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10313cf54; end: 10313d18f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313cf54(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_b0 - extraout_x8;
  lVar2 = 0;
  FUN_10313e71c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = _DAT_112f44080;
  plVar7 = (long *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + _DAT_112f44080,auStack_78,0,0);
  func_0x00010313f6c0(unaff_x20 + lVar1,lVar8,0x112f44078,&UNK_10db90470);
  lVar1 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x00010313f708(lVar8,0x112f44078,&UNK_10db90470);
  }
  else {
    func_0x00010313ef74(lVar8,plVar7);
    if (*plVar7 == param_1) {
      uVar9 = *(undefined8 *)((long)plVar7 + (long)*(int *)(lVar2 + 0x24));
      puVar3 = PTR__OBJC_CLASS___WKSnapshotConfiguration_1126d6c50;
      func_0x000107c610f8(PTR__OBJC_CLASS___WKSnapshotConfiguration_1126d6c50);
      func_0x000107c453e4();
      func_0x000107c52588();
      puVar4 = &UNK_1106125d8;
      func_0x000107c613fc(&UNK_1106125d8,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      puVar5 = &UNK_1106127b8;
      func_0x000107c613fc(&UNK_1106127b8,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = param_1;
      uStack_88 = 0x10313f428;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_10130cf28;
      puStack_90 = &UNK_1106127d0;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      puVar4 = puStack_80;
      func_0x000107c61174(puVar3);
      func_0x000107c61174(param_1);
      func_0x000107c61574(puVar4);
      func_0x000107c5c6c8(uVar9);
      func_0x000107c61170(puVar3);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(puVar3);
    }
    func_0x00010313f684(plVar7,FUN_10313e71c);
  }
  return;
}



/* Entry: 10313d190; end: 10313d207;  */

void FUN_10313d190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    FUN_10313d208(param_1,param_2,param_4);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10313d208; end: 10313d9c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313d208(double param_1,long param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long lVar13;
  long extraout_x8;
  long extraout_x8_00;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  code *pcVar20;
  double dVar21;
  undefined8 uVar22;
  double dStack_130;
  long alStack_128 [2];
  long *plStack_118;
  long lStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  uStack_f8 = *unaff_x20;
  lVar4 = 0x112f44078;
  lStack_f0 = param_2;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&dStack_130 - extraout_x8;
  lVar5 = 0;
  FUN_10313e71c();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  plVar19 = (long *)(lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar4 = (long)unaff_x20 + _DAT_112f44080;
  func_0x000107c61428(lVar4,auStack_90,1,0);
  func_0x00010313f6c0(lVar4,lVar6,0x112f44078,&UNK_10db90470);
  pcVar20 = *(code **)(lVar17 + 0x30);
  lVar17 = lVar6;
  (*pcVar20)(lVar6,1,lVar5);
  if ((int)lVar17 == 1) {
    func_0x00010313f708(lVar6,0x112f44078,&UNK_10db90470);
    return;
  }
  func_0x00010313ef74(lVar6,plVar19);
  if (*plVar19 == param_4) {
    lVar17 = lVar4;
    (*pcVar20)(lVar4,1,lVar5);
    if ((int)lVar17 == 0) {
      *(undefined1 *)(lVar4 + *(int *)(lVar5 + 0x48)) = 0;
    }
    if (param_3 == 0) {
      if (lStack_f0 != 0) {
        lVar6 = lStack_f0;
        lStack_100 = param_4;
        func_0x000107c61174();
        lVar17 = lVar6;
        func_0x000107c3ab2c();
        func_0x000107c61180();
        if (lVar17 != 0) {
          if ((*(byte *)((long)plVar19 + (long)*(int *)(lVar5 + 0x40)) & 1) == 0) {
            func_0x000107c61428(lVar4,&puStack_c0,0x21,0);
            lVar15 = lVar4;
            (*pcVar20)(lVar4,1,lVar5);
            if ((int)lVar15 == 0) {
              func_0x000107c6071c();
              *(double *)(lVar4 + *(int *)(lVar5 + 0x3c)) = param_1;
            }
            lVar15 = lVar4;
            (*pcVar20)(lVar4,1,lVar5);
            if ((int)lVar15 == 0) {
              *(undefined1 *)(lVar4 + *(int *)(lVar5 + 0x40)) = 1;
            }
            func_0x000107c614a8(&puStack_c0);
            func_0x00010313f6c0(unaff_x20 + 3,&puStack_c0,0x112f44260,&UNK_10db90460);
            pcVar3 = pcStack_a0;
            puVar9 = puStack_a8;
            if (puStack_a8 == (undefined *)0x0) {
              func_0x00010313f708(&puStack_c0,0x112f44260,&UNK_10db90460);
            }
            else {
              lStack_f0 = lVar17;
              func_0x0001000a8868(&puStack_c0,puStack_a8);
              func_0x000107c6071c();
              lVar17 = lStack_f0;
              param_1 = param_1 - *(double *)((long)plVar19 + (long)*(int *)(lVar5 + 0x30));
              (**(code **)(pcVar3 + 0x58))(param_1,puVar9,pcVar3);
              func_0x0001000834e4(&puStack_c0);
            }
          }
          lVar15 = plVar19[1];
          lVar2 = plVar19[2];
          lVar14 = lVar2;
          func_0x000107c4e794();
          func_0x000107c61180();
          if (lVar14 == 0) {
            FUN_10313b944();
            func_0x000107c61170(lVar17);
            func_0x000107c61170(lVar6);
          }
          else {
            lVar16 = *(long *)((long)plVar19 + (long)*(int *)(lVar5 + 0x4c));
            uVar12 = 1;
            lVar7 = lVar4;
            lVar13 = lVar5;
            (*pcVar20)();
            if (lVar16 < 3) {
              dVar21 = 0.0;
              if ((int)lVar7 == 0) {
                dVar21 = *(double *)(lVar4 + *(int *)(lVar5 + 0x3c));
              }
              lStack_110 = lVar14;
              func_0x000107c6071c();
              uVar8 = 600;
              func_0x000107c600d0(param_1 - dVar21);
              uStack_108 = uVar8;
              lStack_f0 = lVar13;
              puVar1 = (undefined8 *)((long)plVar19 + (long)*(int *)(lVar5 + 0x20));
              uVar8 = *puVar1;
              uVar22 = puVar1[1];
              lVar14 = lVar4;
              (*pcVar20)(lVar4,1,lVar5);
              if ((int)lVar14 == 0) {
                lVar14 = *(long *)(lVar4 + *(int *)(lVar5 + 0x4c));
                if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)SoftwareBreakpoint(1,0x10313d9c0);
                  (*pcVar20)();
                }
                *(long *)(lVar4 + *(int *)(lVar5 + 0x4c)) = lVar14 + 1;
              }
              uVar18 = *(undefined8 *)((long)unaff_x20 + _DAT_112f440a0);
              alStack_128[1] = *(undefined8 *)((long)unaff_x20 + _DAT_112f44098);
              puVar9 = &UNK_1106125d8;
              alStack_128[0] = uVar18;
              plStack_118 = plVar19;
              func_0x000107c613fc(&UNK_1106125d8,0x18,7);
              func_0x000107c61644(puVar9 + 0x10,unaff_x20);
              puVar10 = &UNK_110612808;
              func_0x000107c613fc(&UNK_110612808,0x78,7);
              lVar5 = lStack_100;
              lVar4 = lStack_110;
              *(long *)(puVar10 + 0x10) = lVar17;
              *(long *)(puVar10 + 0x18) = lStack_110;
              *(undefined8 *)(puVar10 + 0x20) = uVar8;
              *(undefined8 *)(puVar10 + 0x28) = uVar22;
              *(long *)(puVar10 + 0x30) = lVar15;
              *(long *)(puVar10 + 0x38) = lVar2;
              *(undefined8 *)(puVar10 + 0x40) = uStack_108;
              *(int *)(puVar10 + 0x48) = (int)uVar12;
              *(int *)(puVar10 + 0x4c) = (int)((ulong)uVar12 >> 0x20);
              *(long *)(puVar10 + 0x50) = lStack_f0;
              *(undefined **)(puVar10 + 0x58) = puVar9;
              *(long *)(puVar10 + 0x60) = lStack_100;
              *(undefined8 *)(puVar10 + 0x68) = uVar18;
              *(undefined8 *)(puVar10 + 0x70) = uStack_f8;
              pcStack_a0 = FUN_10313f430;
              puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_b8 = 0x42000000;
              puStack_b0 = &UNK_1000f6b44;
              puStack_a8 = &UNK_110612820;
              ppuVar11 = &puStack_c0;
              puStack_98 = puVar10;
              func_0x000107c60bc4(ppuVar11);
              puVar9 = puStack_98;
              func_0x000107c61174(lVar17);
              func_0x000107c61174(lVar4);
              func_0x000107c61174(lVar15);
              func_0x000107c61174(lVar2);
              func_0x000107c61174(lVar5);
              func_0x000107c615f0(alStack_128[0]);
              func_0x000107c61574(puVar9);
              func_0x000107c4e524(alStack_128[1]);
              func_0x000107c60bd0(ppuVar11);
              FUN_10313b944();
              func_0x000107c61170(lVar4);
              func_0x000107c61170(lVar17);
              func_0x000107c61170(lVar6);
              plVar19 = plStack_118;
            }
            else {
              if ((int)lVar7 == 0) {
                lVar15 = *(long *)(lVar4 + *(int *)(lVar5 + 0x44));
                if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
                  pcVar20 = (code *)SoftwareBreakpoint(1,0x10313d9c4);
                  (*pcVar20)();
                }
                *(long *)(lVar4 + *(int *)(lVar5 + 0x44)) = lVar15 + 1;
              }
              func_0x00010313f6c0(unaff_x20 + 3,&puStack_c0,0x112f44260,&UNK_10db90460);
              pcVar20 = pcStack_a0;
              puVar9 = puStack_a8;
              if (puStack_a8 == (undefined *)0x0) {
                func_0x00010313f708(&puStack_c0,0x112f44260,&UNK_10db90460);
              }
              else {
                func_0x0001000a8868(&puStack_c0,puStack_a8);
                (**(code **)(pcVar20 + 0x40))(puVar9,pcVar20);
                func_0x0001000834e4(&puStack_c0);
              }
              FUN_10313b944();
              func_0x000107c61170(lVar14);
              func_0x000107c61170(lVar17);
              func_0x000107c61170(lVar6);
            }
          }
          goto LAB_10313d664;
        }
        func_0x000107c61170(lVar6);
      }
      lVar17 = lVar4;
      (*pcVar20)(lVar4,1,lVar5);
      if ((int)lVar17 == 0) {
        lVar17 = *(long *)(lVar4 + *(int *)(lVar5 + 0x44));
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10313d9bc);
          (*pcVar20)();
        }
        *(long *)(lVar4 + *(int *)(lVar5 + 0x44)) = lVar17 + 1;
      }
      func_0x00010313f6c0(unaff_x20 + 3,&puStack_c0,0x112f44260,&UNK_10db90460);
      pcVar20 = pcStack_a0;
      puVar9 = puStack_a8;
      if (puStack_a8 == (undefined *)0x0) {
        func_0x00010313f708(&puStack_c0,0x112f44260,&UNK_10db90460);
      }
      else {
        func_0x0001000a8868(&puStack_c0,puStack_a8);
        (**(code **)(pcVar20 + 0x40))(puVar9,pcVar20);
        func_0x0001000834e4(&puStack_c0);
      }
      FUN_10313b944();
    }
    else {
      puStack_c0 = (undefined *)0x0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c614b0(param_3);
      func_0x000107c602fc(0x17);
      func_0x000107c6142c(uStack_b8);
      puStack_c0 = (undefined *)0xd000000000000015;
      uStack_b8 = 0x800000010f127670;
      func_0x000107c614cc(param_3,auStack_c8,auStack_e0);
      uVar12 = uStack_d0;
      func_0x000107c60640(uStack_d8,uStack_d0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar12);
      func_0x000107c6142c(uStack_b8);
      lVar17 = lVar4;
      (*pcVar20)(lVar4,1,lVar5);
      if ((int)lVar17 == 0) {
        lVar17 = *(long *)(lVar4 + *(int *)(lVar5 + 0x44));
        if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10313d9b8);
          (*pcVar20)();
        }
        *(long *)(lVar4 + *(int *)(lVar5 + 0x44)) = lVar17 + 1;
      }
      func_0x00010313f6c0(unaff_x20 + 3,&puStack_c0,0x112f44260,&UNK_10db90460);
      pcVar20 = pcStack_a0;
      puVar9 = puStack_a8;
      if (puStack_a8 == (undefined *)0x0) {
        func_0x00010313f708(&puStack_c0,0x112f44260,&UNK_10db90460);
      }
      else {
        func_0x0001000a8868(&puStack_c0,puStack_a8);
        (**(code **)(pcVar20 + 0x40))(puVar9,pcVar20);
        func_0x0001000834e4(&puStack_c0);
      }
      FUN_10313b944();
      func_0x000107c614ac(param_3);
    }
  }
LAB_10313d664:
  func_0x00010313f684(plVar19,FUN_10313e71c);
  return;
}



/* Entry: 10313d9c4; end: 10313dc6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313d9c4(long param_1,undefined8 param_2,int param_3,int param_4,undefined *param_5,
                  undefined8 param_6,undefined *param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  FUN_10313f470();
  if (param_1 == 0) {
LAB_10313daec:
    func_0x000107c61428(param_8 + 0x10,auStack_78,0,0);
    lVar4 = param_8 + 0x10;
    func_0x000107c61648();
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 == 0) goto LAB_10313dbc8;
    uVar8 = *(undefined8 *)(lVar4 + _DAT_112f440a0);
    puVar5 = &UNK_1106125d8;
    func_0x000107c613fc(&UNK_1106125d8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar4);
    puVar6 = &UNK_110612858;
    func_0x000107c613fc(&UNK_110612858,0x20,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(undefined8 *)(puVar6 + 0x18) = param_9;
    pcStack_88 = FUN_10313f608;
    puStack_a8 = puVar9;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_110612870;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = puStack_80;
    func_0x000107c61174(param_9);
    func_0x000107c61574(puVar5);
    func_0x000107c4e524(uVar8);
    func_0x000107c60bd0(ppuVar7);
  }
  else {
    lVar3 = param_1;
    func_0x000107c61174(param_1);
    func_0x000107c4a2dc();
    if (param_3 == 0) {
LAB_10313dae4:
      func_0x000107c61170(lVar3);
      goto LAB_10313daec;
    }
    puStack_a8 = param_5;
    uStack_a0 = param_6;
    puStack_98 = param_7;
    func_0x000107c3df10();
    if (param_4 == 0) goto LAB_10313dae4;
    func_0x000107c61428(param_8 + 0x10,auStack_78,0,0);
    lVar4 = param_8 + 0x10;
    func_0x000107c61648();
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + _DAT_112f44088);
      *puVar1 = param_5;
      *(int *)(puVar1 + 1) = (int)param_6;
      *(int *)((long)puVar1 + 0xc) = (int)((ulong)param_6 >> 0x20);
      puVar1[2] = param_7;
      func_0x000107c61574();
    }
    func_0x000107c61428(param_8 + 0x10,auStack_c0,0,0);
    lVar4 = param_8 + 0x10;
    func_0x000107c61648();
    func_0x000107c61170(lVar3);
    puVar9 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar4 == 0) goto LAB_10313dbc8;
    if (SCARRY8(*(long *)(lVar4 + _DAT_112f44090),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10313dc70);
      (*pcVar2)();
    }
    *(long *)(lVar4 + _DAT_112f44090) = *(long *)(lVar4 + _DAT_112f44090) + 1;
  }
  func_0x000107c61574(lVar4);
LAB_10313dbc8:
  puVar5 = &UNK_1106128a8;
  func_0x000107c613fc(&UNK_1106128a8,0x20,7);
  *(long *)(puVar5 + 0x10) = param_8;
  *(undefined8 *)(puVar5 + 0x18) = param_9;
  pcStack_88 = FUN_10313f63c;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1106128c0;
  ppuVar7 = &puStack_a8;
  puStack_a8 = puVar9;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar7);
  puVar9 = puStack_80;
  func_0x000107c61174(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c61574(puVar9);
  func_0x000107c4e524(param_10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 10313dc70; end: 10313e06f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313dc70(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar3 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)alStack_80 - extraout_x8;
  lVar3 = 0;
  FUN_10313e71c();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  plVar5 = (long *)(lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112f44080;
    func_0x000107c61428(lVar1,alStack_80,1,0);
    func_0x00010313f6c0(lVar1,lVar4,0x112f44078,&UNK_10db90470);
    pcVar7 = *(code **)(lVar6 + 0x30);
    lVar6 = lVar4;
    (*pcVar7)(lVar4,1,lVar3);
    if ((int)lVar6 == 1) {
      func_0x000107c61574(param_1);
      func_0x00010313f708(lVar4,0x112f44078,&UNK_10db90470);
    }
    else {
      func_0x00010313ef74(lVar4,plVar5);
      if ((*plVar5 == param_2) && (lVar4 = lVar1, (*pcVar7)(lVar1,1,lVar3), (int)lVar4 == 0)) {
        lVar4 = *(long *)((long)plVar5 + (long)*(int *)(lVar3 + 0x4c));
        uVar2 = lVar4 - 1;
        if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10313de24);
          (*pcVar7)();
        }
        *(ulong *)(lVar1 + *(int *)(lVar3 + 0x4c)) =
             uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      }
      func_0x000107c61574(param_1);
      func_0x00010313f684(plVar5,FUN_10313e71c);
    }
  }
  return;
}



/* Entry: 10313e070; end: 10313e547;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313e070(double param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  double dStack_d0;
  long lStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = ((long)&dStack_d0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar14 - extraout_x12;
  lVar2 = 0;
  FUN_10313e71c();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar4 = _DAT_112f44080;
  lVar10 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112f44080,auStack_88,0,0);
  func_0x00010313f6c0(unaff_x20 + lVar4,lVar12,0x112f44078,&UNK_10db90470);
  pcVar13 = *(code **)(lVar15 + 0x30);
  lVar15 = lVar12;
  (*pcVar13)(lVar12,1,lVar2);
  if ((int)lVar15 == 1) {
    func_0x00010313f708(lVar12,0x112f44078,&UNK_10db90470);
  }
  else {
    dStack_d0 = (double)((long)&dStack_d0 - extraout_x8);
    func_0x00010313ef74(lVar12,lVar10);
    dVar16 = 0.0;
    if (*(char *)(lVar10 + *(int *)(lVar2 + 0x40)) == '\x01') {
      func_0x000107c6071c();
      dVar16 = param_1 - *(double *)(lVar10 + *(int *)(lVar2 + 0x3c));
    }
    puStack_b8 = (undefined *)0x0;
    uStack_b0 = 0xe000000000000000;
    func_0x000107c602fc(0x26);
    func_0x000107c5fb78(0xd000000000000017,0x800000010f127690);
    func_0x000107c5fddc(dVar16,&puStack_b8,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x6c616e6966203b73,0xed0000676e697a69);
    func_0x000107c6142c(uStack_b0);
    lStack_c8 = lVar10;
    puVar11 = (undefined8 *)(lVar10 + *(int *)(lVar2 + 0x38));
    pcVar1 = (code *)*puVar11;
    uVar7 = puVar11[1];
    puVar3 = &UNK_1106128f8;
    func_0x000107c613fc(&UNK_1106128f8,0x20,7);
    *(code **)(puVar3 + 0x10) = pcVar1;
    *(undefined8 *)(puVar3 + 0x18) = uVar7;
    func_0x00010313f6c0(unaff_x20 + lVar4,lVar14,0x112f44078,&UNK_10db90470);
    lVar4 = lVar14;
    (*pcVar13)(lVar14,1,lVar2);
    FUN_10313f400(pcVar1,uVar7);
    func_0x00010313f708(lVar14,0x112f44078,&UNK_10db90470);
    if ((int)lVar4 == 1) {
      lVar4 = 0;
      func_0x000107c5ede0();
      dVar16 = dStack_d0;
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(dStack_d0,1,1,lVar4);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(1,dVar16);
      }
      func_0x000107c61574(puVar3);
      func_0x00010313f708(dVar16,0x112d36580,&UNK_10d9016d0);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar6 = &UNK_110612920;
      func_0x000107c613fc(&UNK_110612920,0x18,7);
      puVar11 = (undefined8 *)(puVar6 + 0x10);
      *puVar11 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
      uVar7 = 0xd00000000000001f;
      func_0x000107c5fadc(0xd00000000000001f,0x800000010f127590);
      puVar8 = &UNK_110612948;
      func_0x000107c613fc(&UNK_110612948,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar5;
      *(undefined **)(puVar8 + 0x18) = puVar6;
      pcStack_98 = FUN_10313f778;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_1000b0c7c;
      puStack_a0 = &UNK_110612960;
      ppuVar9 = &puStack_b8;
      puStack_90 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_90;
      func_0x000107c61174();
      func_0x000107c6157c(puVar6);
      func_0x000107c61574(puVar8);
      puVar8 = puVar5;
      func_0x000107c3e768();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(uVar7);
      func_0x000107c61428(puVar11,&puStack_b8,1,0);
      *puVar11 = puVar8;
      puVar8 = &UNK_110612998;
      func_0x000107c613fc(&UNK_110612998,0x30,7);
      *(undefined8 *)(puVar8 + 0x10) = 0x10313f748;
      *(undefined **)(puVar8 + 0x18) = puVar3;
      *(undefined **)(puVar8 + 0x20) = puVar6;
      *(undefined **)(puVar8 + 0x28) = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000107c6157c(puVar6);
      func_0x000107c6157c(puVar3);
      FUN_10313bb68(2,0x10313f780,puVar8);
      func_0x000107c61170(puVar5);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar3);
    }
    func_0x00010313f684(lStack_c8,FUN_10313e71c);
  }
  return;
}



/* Entry: 10313e548; end: 10313e56f; -[_TtC23WebLensesImplementation22WebLensesVideoRecorder handleAppDidEnterBackground] */

void FUN_10313e548(undefined8 param_1)

{
  func_0x000107c6157c();
  FUN_10313e070();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 10313e570; end: 10313e5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313e570(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x00010313f708(unaff_x20 + 0x18,0x112f44260,&UNK_10db90460);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x00010313f708(unaff_x20 + _DAT_112f44080,0x112f44078,&UNK_10db90470);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f44098));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112f440a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10313e5f8; end: 10313e613;  */

void FUN_10313e5f8(void)

{
  if (lRam0000000112f440d0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e74a50c);
  return;
}



/* Entry: 10313e614; end: 10313e71b;  */

void FUN_10313e614(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10db90388;
  puStack_58 = &UNK_10db903a0;
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_50 = puVar1;
  func_0x00010313e6c8();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = &UNK_10db903b8;
    puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_28 = &UNK_10db903d0;
    puStack_30 = puVar1;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 10313e71c; end: 10313e72f;  */

void FUN_10313e71c(undefined8 param_1)

{
  if (lRam0000000112f441f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74a55c);
  return;
}



/* Entry: 10313e730; end: 10313e75f;  */

void FUN_10313e730(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 10313e760; end: 10313e8c7;  */

long * FUN_10313e760(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar11 = *param_2;
  *param_1 = lVar11;
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    lVar3 = param_2[2];
    param_1[1] = lVar9;
    param_1[2] = lVar3;
    iVar5 = *(int *)(param_3 + 0x1c);
    lVar8 = 0;
    func_0x000107c5ede0();
    pcVar13 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    func_0x000107c61174(lVar11);
    func_0x000107c61174(lVar9);
    func_0x000107c61174(lVar3);
    (*pcVar13)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar8);
    iVar5 = *(int *)(param_3 + 0x24);
    puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar12 = *puVar6;
    puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar7[1] = puVar6[1];
    *puVar7 = uVar12;
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    iVar5 = *(int *)(param_3 + 0x2c);
    *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined8 *)((long)param_1 + (long)iVar5) = *(undefined8 *)((long)param_2 + (long)iVar5);
    iVar5 = *(int *)(param_3 + 0x34);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar12 = *(undefined8 *)((long)param_2 + (long)iVar5);
    *(undefined8 *)((long)param_1 + (long)iVar5) = uVar12;
    plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    lVar11 = *plVar2;
    func_0x000107c61174();
    func_0x000107c61174(uVar12);
    if (lVar11 == 0) {
      lVar11 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar11;
    }
    else {
      lVar9 = plVar2[1];
      *plVar1 = lVar11;
      plVar1[1] = lVar9;
      func_0x000107c6157c();
    }
    iVar5 = *(int *)(param_3 + 0x40);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
    iVar5 = *(int *)(param_3 + 0x48);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  }
  else {
    uVar10 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar11 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c(lVar11);
  }
  return param_1;
}



/* Entry: 10313e8c8; end: 10313e963;  */

void FUN_10313e8c8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  func_0x000107c61170(*param_1);
  func_0x000107c61170(param_1[1]);
  func_0x000107c61170(param_1[2]);
  iVar2 = *(int *)(param_2 + 0x1c);
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 8))((long)param_1 + (long)iVar2,lVar3);
  func_0x000107c61170(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x24)));
  func_0x000107c61170(*(undefined8 *)((long)param_1 + (long)*(int *)(param_2 + 0x34)));
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_2 + 0x38));
  if (*plVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(plVar1[1]);
    return;
  }
  return;
}



/* Entry: 10313e964; end: 10313eaa3;  */

undefined8 * FUN_10313e964(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  
  uVar9 = *param_2;
  uVar3 = param_2[1];
  *param_1 = uVar9;
  param_1[1] = uVar3;
  uVar10 = param_2[2];
  param_1[2] = uVar10;
  iVar4 = *(int *)(param_3 + 0x1c);
  lVar7 = 0;
  func_0x000107c5ede0();
  pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar10);
  (*pcVar11)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar7);
  iVar4 = *(int *)(param_3 + 0x24);
  puVar5 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = *puVar5;
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar6[1] = puVar5[1];
  *puVar6 = uVar9;
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x2c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined8 *)((long)param_1 + (long)iVar4) = *(undefined8 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar9 = *(undefined8 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)iVar4) = uVar9;
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar7 = *plVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar9);
  if (lVar7 == 0) {
    lVar7 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar7;
  }
  else {
    lVar8 = plVar2[1];
    *plVar1 = lVar7;
    plVar1[1] = lVar8;
    func_0x000107c6157c();
  }
  iVar4 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  iVar4 = *(int *)(param_3 + 0x48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  return param_1;
}



/* Entry: 10313eaa4; end: 10313ec57;  */

undefined8 * FUN_10313eaa4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  uVar8 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  uVar8 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  iVar5 = *(int *)(param_3 + 0x1c);
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 0x18))
            ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  lVar6 = (long)*(int *)(param_3 + 0x24);
  uVar8 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar6 = (long)*(int *)(param_3 + 0x34);
  uVar8 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  func_0x000107c61174();
  func_0x000107c61170(uVar8);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar6 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar6 != 0) {
      lVar7 = plVar4[1];
      *plVar3 = lVar6;
      plVar3[1] = lVar7;
      func_0x000107c6157c();
      goto LAB_10313ec04;
    }
  }
  else {
    if (lVar6 != 0) {
      lVar7 = plVar4[1];
      lVar9 = plVar3[1];
      *plVar3 = lVar6;
      plVar3[1] = lVar7;
      func_0x000107c6157c();
      func_0x000107c61574(lVar9);
      goto LAB_10313ec04;
    }
    func_0x000107c61574(plVar3[1]);
  }
  lVar6 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar6;
LAB_10313ec04:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  return param_1;
}



/* Entry: 10313ec58; end: 10313ed33;  */

undefined8 * FUN_10313ec58(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x3c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x44);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x40)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x4c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x48)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x48));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 10313ed34; end: 10313ee8f;  */

undefined8 * FUN_10313ed34(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar6);
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61170(uVar6);
  uVar6 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar6);
  iVar3 = *(int *)(param_3 + 0x1c);
  lVar7 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar7 + -8) + 0x28))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,lVar7);
  lVar7 = (long)*(int *)(param_3 + 0x24);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar6 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar6;
  uVar6 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  func_0x000107c61170(uVar6);
  iVar3 = *(int *)(param_3 + 0x2c);
  *(undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  lVar7 = (long)*(int *)(param_3 + 0x34);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar6 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  func_0x000107c61170(uVar6);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  lVar7 = *plVar2;
  if (*plVar1 == 0) {
    if (lVar7 != 0) {
      lVar8 = plVar2[1];
      *plVar1 = lVar7;
      plVar1[1] = lVar8;
      goto LAB_10313ee44;
    }
  }
  else {
    if (lVar7 != 0) {
      lVar9 = plVar2[1];
      lVar8 = plVar1[1];
      *plVar1 = lVar7;
      plVar1[1] = lVar9;
      func_0x000107c61574(lVar8);
      goto LAB_10313ee44;
    }
    func_0x000107c61574(plVar1[1]);
  }
  lVar7 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar7;
LAB_10313ee44:
  iVar3 = *(int *)(param_3 + 0x40);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x48);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x4c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x4c));
  return param_1;
}



/* Entry: 10313ee90; end: 10313eea7;  */

void FUN_10313ee90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10313eea8; end: 10313f007;  */

void FUN_10313eea8(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  lVar2 = 0x13f;
  puStack_a0 = puVar1;
  puStack_98 = puVar1;
  puStack_90 = puVar1;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_88 = *(long *)(lVar2 + -8) + 0x40;
    puStack_80 = &UNK_10db903f0;
    puStack_70 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_68 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_58 = &UNK_10db90408;
    puStack_50 = &UNK_10db90420;
    puStack_40 = &UNK_10db90438;
    puStack_30 = &UNK_10db90438;
    puStack_78 = puVar1;
    puStack_60 = puStack_68;
    puStack_48 = puStack_68;
    puStack_38 = puStack_68;
    puStack_28 = puStack_68;
    func_0x000107c6153c(param_1,0x100,0x10,&puStack_a0,param_1 + 0x10);
  }
  return;
}



/* Entry: 10313f008; end: 10313f0c7;  */

void FUN_10313f008(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x48 & (uVar3 ^ 0xffffffffffffffff);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar4 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar3 + 8);
  FUN_10313c240(*(undefined8 *)(unaff_x20 + uVar3 + 0x40),*(undefined8 *)(unaff_x20 + uVar3 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),unaff_x20 + uVar4,
                *(undefined8 *)(unaff_x20 + uVar3),*puVar1,*(undefined1 *)(puVar1 + 1));
  return;
}



/* Entry: 10313f0c8; end: 10313f0e3;  */

void FUN_10313f0c8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10313f0e4; end: 10313f207;  */

void FUN_10313f0e4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar4 + 8);
  puVar2 = (undefined8 *)(unaff_x20 + uVar4 + 0x58);
  func_0x00010313c6d8(*(undefined8 *)(unaff_x20 + uVar4 + 0x40),
                      *(undefined8 *)(unaff_x20 + uVar4 + 0x48),*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + uVar5,
                      *(undefined8 *)(unaff_x20 + uVar4),*puVar1,*(undefined1 *)(puVar1 + 1),
                      unaff_x20 + uVar4 + 0x18,*(undefined8 *)(unaff_x20 + uVar4 + 0x50),*puVar2,
                      puVar2[1],*(undefined8 *)(unaff_x20 + (uVar4 + 0x6f & 0xffffffffffffff8)));
  return;
}



/* Entry: 10313f208; end: 10313f293;  */

void FUN_10313f208(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_88 [72];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar3);
  puVar2 = auStack_88;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  FUN_10313f294(param_1,puVar2);
  return;
}



/* Entry: 10313f294; end: 10313f38b;  */

undefined1  [16] FUN_10313f294(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_10313f36c;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_10313f36c:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10313f38c; end: 10313f3cf;  */

undefined8 FUN_10313f38c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10313e71c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10313f3d0; end: 10313f3d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313f3d0(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar5 = lVar2 + _DAT_112f44080;
    func_0x000107c61428(lVar5,auStack_60,0,0);
    lVar3 = 0;
    FUN_10313e71c();
    lVar6 = lVar5;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar5,1,lVar3);
    if ((int)lVar6 == 0) {
      plVar1 = (long *)(lVar5 + *(int *)(lVar3 + 0x38));
      lVar5 = *plVar1;
      if (lVar5 != 0) {
        lVar6 = plVar1[1];
        puVar4 = &UNK_110612740;
        func_0x000107c613fc(&UNK_110612740,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar5;
        *(long *)(puVar4 + 0x18) = lVar6;
        FUN_10313f400(lVar5,lVar6);
        func_0x000107c6157c(lVar6);
        FUN_10313bb68(0,FUN_10313f3d8,puVar4);
        func_0x000107c61574(puVar4);
        func_0x00010313f410(lVar5,lVar6);
      }
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10313f3d8; end: 10313f3ff;  */

void FUN_10313f3d8(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,param_1);
  return;
}



/* Entry: 10313f400; end: 10313f42f;  */

void FUN_10313f400(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10313f430; end: 10313f46f;  */

void FUN_10313f430(void)

{
  long unaff_x20;
  
  FUN_10313d9c4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 10313f470; end: 10313f607;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10313f470(double param_1,double param_2,double param_3,double param_4,undefined *param_5,
                    undefined8 param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long *plVar11;
  long lVar12;
  code *pcVar13;
  double dVar14;
  long lStack_140;
  undefined1 auStack_138 [24];
  long lStack_120;
  long lStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_90 [48];
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_60 = (long *)0x0;
  iVar3 = 0;
  dVar14 = param_1;
  func_0x000107c60ad8(0,param_6,&plStack_60);
  plVar7 = plStack_60;
  plVar11 = (long *)0x0;
  if ((iVar3 == 0) && (plStack_60 != (long *)0x0)) {
    param_5 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c610f8();
    func_0x000107c61174(plVar7);
    func_0x000107c45af0();
    func_0x000107c42c78();
    bVar2 = false;
    if ((param_3 == param_1) && (bVar2 = false, !NAN(param_4) && !NAN(param_2))) {
      bVar2 = param_4 == param_2;
    }
    puVar8 = param_5;
    if (bVar2) {
      func_0x000107c61174();
    }
    else {
      func_0x000107c42c78(param_5);
      func_0x000107c609cc();
      param_1 = param_1 / dVar14;
      func_0x000107c42c78(param_5);
      func_0x000107c609b0();
      func_0x000107c6088c(auStack_90,param_1,param_2 / dVar14);
      func_0x000107c45044();
      func_0x000107c61180();
    }
    lVar4 = lRam0000000112f44268;
    func_0x000107c61174();
    if (lVar4 != -1) {
      func_0x000107c61568(0x112f44268,FUN_103139f00);
    }
    func_0x000107c50088(uRam0000000112f44270);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(param_5);
    plVar11 = plVar7;
  }
  func_0x000107c61170(plStack_60);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return plVar11;
  }
  func_0x000107c60e78();
  lVar5 = *(long *)(param_5 + 0x10);
  lVar10 = *(long *)(param_5 + 0x18);
  lVar4 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar7 = (long *)((long)&lStack_140 - extraout_x8);
  lVar4 = 0;
  FUN_10313e71c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  plVar11 = (long *)((long)plVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar5 + 0x10,auStack_f8,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61648();
  if (lVar5 == 0) {
    return (long *)0x0;
  }
  lVar1 = lVar5 + _DAT_112f44080;
  func_0x000107c61428(lVar1,auStack_110,1,0);
  func_0x00010313f6c0(lVar1,plVar7,0x112f44078,&UNK_10db90470);
  pcVar13 = *(code **)(lVar12 + 0x30);
  plVar6 = plVar7;
  (*pcVar13)(plVar7,1,lVar4);
  if ((int)plVar6 == 1) {
    func_0x000107c61574(lVar5);
    uVar9 = 0x112f44078;
    puVar8 = &UNK_10db90470;
  }
  else {
    func_0x00010313ef74(plVar7,plVar11);
    if (*plVar11 != lVar10) {
      func_0x000107c61574(lVar5);
      func_0x00010313f684(plVar11,FUN_10313e71c);
      return plVar11;
    }
    lVar10 = lVar1;
    (*pcVar13)(lVar1,1,lVar4);
    if ((int)lVar10 == 0) {
      lVar10 = *(long *)(lVar1 + *(int *)(lVar4 + 0x44));
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10313e070);
        (*pcVar13)();
      }
      *(long *)(lVar1 + *(int *)(lVar4 + 0x44)) = lVar10 + 1;
    }
    func_0x00010313f6c0(lVar5 + 0x18,auStack_138,0x112f44260,&UNK_10db90460);
    if (lStack_120 != 0) {
      func_0x0001000a8868(auStack_138,lStack_120);
      (**(code **)(lStack_118 + 0x40))(lStack_120,lStack_118);
      func_0x000107c61574(lVar5);
      func_0x00010313f684(plVar11,FUN_10313e71c);
      plVar7 = (long *)auStack_138;
      func_0x0001000834e4(plVar7);
      return plVar7;
    }
    func_0x000107c61574(lVar5);
    func_0x00010313f684(plVar11,FUN_10313e71c);
    uVar9 = 0x112f44260;
    puVar8 = &UNK_10db90460;
    plVar7 = (long *)auStack_138;
  }
  func_0x00010313f708(plVar7,uVar9,puVar8);
  return plVar7;
}



/* Entry: 10313f608; end: 10313f60f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313f608(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar8 = *(long *)(unaff_x20 + 0x18);
  lVar2 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined1 *)((long)&lStack_b0 - extraout_x8);
  lVar2 = 0;
  FUN_10313e71c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  plVar9 = (long *)(puVar5 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = lVar3 + _DAT_112f44080;
  func_0x000107c61428(lVar1,auStack_80,1,0);
  func_0x00010313f6c0(lVar1,puVar5,0x112f44078,&UNK_10db90470);
  pcVar11 = *(code **)(lVar10 + 0x30);
  puVar4 = puVar5;
  (*pcVar11)(puVar5,1,lVar2);
  if ((int)puVar4 == 1) {
    func_0x000107c61574(lVar3);
    uVar6 = 0x112f44078;
    puVar7 = &UNK_10db90470;
  }
  else {
    func_0x00010313ef74(puVar5,plVar9);
    if (*plVar9 != lVar8) {
      func_0x000107c61574(lVar3);
      func_0x00010313f684(plVar9,FUN_10313e71c);
      return;
    }
    lVar8 = lVar1;
    (*pcVar11)(lVar1,1,lVar2);
    if ((int)lVar8 == 0) {
      lVar8 = *(long *)(lVar1 + *(int *)(lVar2 + 0x44));
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10313e070);
        (*pcVar11)();
      }
      *(long *)(lVar1 + *(int *)(lVar2 + 0x44)) = lVar8 + 1;
    }
    func_0x00010313f6c0(lVar3 + 0x18,auStack_a8,0x112f44260,&UNK_10db90460);
    if (lStack_90 != 0) {
      func_0x0001000a8868(auStack_a8,lStack_90);
      (**(code **)(lStack_88 + 0x40))(lStack_90,lStack_88);
      func_0x000107c61574(lVar3);
      func_0x00010313f684(plVar9,FUN_10313e71c);
      func_0x0001000834e4(auStack_a8);
      return;
    }
    func_0x000107c61574(lVar3);
    func_0x00010313f684(plVar9,FUN_10313e71c);
    uVar6 = 0x112f44260;
    puVar7 = &UNK_10db90460;
    puVar5 = auStack_a8;
  }
  func_0x00010313f708(puVar5,uVar6,puVar7);
  return;
}



/* Entry: 10313f610; end: 10313f63b;  */

void FUN_10313f610(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10313f63c; end: 10313f643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313f63c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar3 = 0x112f44078;
  func_0x0001000285a8(0x112f44078,&UNK_10db90470);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)alStack_80 - extraout_x8;
  lVar3 = 0;
  FUN_10313e71c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  plVar6 = (long *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    lVar1 = lVar4 + _DAT_112f44080;
    func_0x000107c61428(lVar1,alStack_80,1,0);
    func_0x00010313f6c0(lVar1,lVar7,0x112f44078,&UNK_10db90470);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar8 = lVar7;
    (*pcVar9)(lVar7,1,lVar3);
    if ((int)lVar8 == 1) {
      func_0x000107c61574(lVar4);
      func_0x00010313f708(lVar7,0x112f44078,&UNK_10db90470);
    }
    else {
      func_0x00010313ef74(lVar7,plVar6);
      if ((*plVar6 == lVar5) && (lVar5 = lVar1, (*pcVar9)(lVar1,1,lVar3), (int)lVar5 == 0)) {
        lVar5 = *(long *)((long)plVar6 + (long)*(int *)(lVar3 + 0x4c));
        uVar2 = lVar5 - 1;
        if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10313de24);
          (*pcVar9)();
        }
        *(ulong *)(lVar1 + *(int *)(lVar3 + 0x4c)) =
             uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
      }
      func_0x000107c61574(lVar4);
      func_0x00010313f684(plVar6,FUN_10313e71c);
    }
  }
  return;
}



/* Entry: 10313f644; end: 10313f777;  */

void FUN_10313f644(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 10313f778; end: 10313f7d3;  */

void FUN_10313f778(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  func_0x000107c427f4(uVar2);
  uVar2 = *(undefined8 *)PTR__UIBackgroundTaskInvalid_110345af0;
  func_0x000107c61428(lVar1 + 0x10,auStack_50,1,0);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  return;
}



/* Entry: 10313f7d4; end: 10313f847;  */

void FUN_10313f7d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 10313f848; end: 10313f967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313f848(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar7 = _DAT_113070410;
  lVar6 = _DAT_113070408;
  lVar5 = _DAT_113070400;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113070388);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_113070418);
  uVar3 = ((undefined8 *)(lVar1 + _DAT_113070418))[1];
  lVar8 = 0;
  func_0x000103148474();
  lVar9 = lVar8;
  func_0x000107c613fc();
  puVar4 = (undefined8 *)(lVar1 + lVar6);
  uVar14 = puVar4[1];
  uVar13 = *puVar4;
  uVar11 = *(undefined8 *)(lVar1 + lVar6);
  puVar4 = (undefined8 *)(lVar1 + lVar7);
  uVar16 = puVar4[1];
  uVar15 = *puVar4;
  uVar12 = *(undefined8 *)(lVar1 + lVar7);
  uVar17 = *(undefined8 *)(lVar1 + lVar5);
  *(undefined8 *)(lVar9 + 0x18) = ((undefined8 *)(lVar1 + lVar5))[1];
  *(undefined8 *)(lVar9 + 0x10) = uVar17;
  *(undefined8 *)(lVar9 + 0x20) = uVar10;
  *(undefined8 *)(lVar9 + 0x40) = uVar16;
  *(undefined8 *)(lVar9 + 0x38) = uVar15;
  *(undefined8 *)(lVar9 + 0x30) = uVar14;
  *(undefined8 *)(lVar9 + 0x28) = uVar13;
  *(undefined8 *)(lVar9 + 0x48) = uVar2;
  *(undefined8 *)(lVar9 + 0x50) = uVar3;
  ppuStack_58 = &PTR_DAT_110613298;
  alStack_78[0] = lVar9;
  lStack_60 = lVar8;
  func_0x00010034aad0(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar17);
  func_0x000107c615f0(uVar10);
  func_0x000107c615f0(uVar11);
  func_0x000107c615f0(uVar12);
  func_0x00010434a878(alStack_78);
  return;
}



/* Entry: 10313f968; end: 10313f983;  */

/* WARNING: Possible PIC construction at 0x00010313f974: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010313f978) */

void FUN_10313f968(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10313f984; end: 10313f9cf;  */

void FUN_10313f984(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10313f9d0; end: 10313fa4b;  */

void FUN_10313f9d0(undefined8 param_1)

{
  if (lRam0000000112f442a8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e74a584);
  return;
}



/* Entry: 10313fa4c; end: 10313faf3;  */

void FUN_10313fa4c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10313f848();
  *param_1 = param_2;
  return;
}



/* Entry: 10313faf4; end: 10313fb6b;  */

undefined1  [16] FUN_10313faf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  func_0x000107c5fadc();
  func_0x000107c4f98c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    lVar1 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = unaff_x20;
    func_0x000107c5ee30(unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 10313fb6c; end: 10313fb7b;  */

undefined1  [16] FUN_10313fb6c(void)

{
  return ZEXT816(0x10313fb7c);
}



/* Entry: 10313fb7c; end: 10313fbef;  */

undefined1  [16] FUN_10313fb7c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = PTR_PTR_1126acc88;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c4577c();
  func_0x000107c61170(param_1);
  ppuVar1 = (undefined **)0x0;
  if (puVar2 != (undefined *)0x0) {
    ppuVar1 = &PTR_DAT_1106129c8;
  }
  auVar3._8_8_ = ppuVar1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Entry: 10313fbf0; end: 10313fc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313fbf0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f44358) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10313fc88; end: 10313ff1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313fc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  ulong uStack_128;
  ulong uStack_120;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_e8 [136];
  
  uVar1 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar6 = auStack_e8;
  func_0x000107c61534();
  *(undefined8 *)(uVar1 + 0x18) = 4;
  *(undefined8 *)(uVar1 + 0x10) = 2;
  uVar2 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(uVar1 + 0x20) = uVar2;
  *(undefined1 **)(uVar1 + 0x28) = puVar6;
  uStack_108 = 0x23736e654c626557;
  uStack_100 = 0xe800000000000000;
  func_0x000107c5fb78(param_1);
  puVar4 = PTR___sSSN_11034da80;
  *(undefined **)(uVar1 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(uVar1 + 0x30) = uStack_108;
  *(undefined8 *)(uVar1 + 0x38) = uStack_100;
  uVar2 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_110345570;
  func_0x000107c5faec();
  *(undefined8 *)(uVar1 + 0x50) = uVar2;
  *(undefined8 *)(uVar1 + 0x58) = param_2;
  *(undefined **)(uVar1 + 0x78) = puVar4;
  *(undefined8 *)(uVar1 + 0x60) = param_3;
  *(undefined8 *)(uVar1 + 0x68) = param_4;
  func_0x000107c61434(param_4);
  uVar3 = uVar1;
  func_0x000100214a84();
  func_0x000107c61588(uVar1);
  uVar2 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(uVar1 + 0x20),2,uVar2);
  if (param_6 != 0) {
    uVar1 = param_5 & 0xffffffffffff;
    if ((param_6 & 0x2000000000000000) != 0) {
      uVar1 = param_6 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      puStack_110 = puVar4;
      uStack_128 = param_5;
      uStack_120 = param_6;
      func_0x000100102924(&uStack_128,&uStack_108);
      func_0x000107c61434(param_6);
      uVar1 = uVar3;
      func_0x000107c61558(uVar3);
      uStack_128 = uVar3;
      func_0x0001001029e8(&uStack_108,0x636172746b636162,0xe900000000000065,uVar1);
      uVar3 = uStack_128;
    }
  }
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  uVar2 = 0x736e654c626557;
  func_0x000107c5fadc(0x736e654c626557,0xe700000000000000);
  uVar1 = uVar3;
  func_0x000107c5f9dc(uVar3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c466bc(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f44358);
  func_0x000107c61174(puVar4);
  puVar5 = puVar4;
  func_0x000107c5ed2c();
  func_0x000107c61170(puVar4);
  func_0x000107c5fadc(param_7,param_8);
  func_0x000107c4bab0(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_7);
  return;
}



/* Entry: 10313ff1c; end: 10313ff1f; -[_TtC23WebLensesImplementation35WebLensCrashLoggerExceptionReporter webLensRuntimeError] */

void FUN_10313ff1c(void)

{
  return;
}



/* Entry: 10313ff20; end: 10313ff7f; -[_TtC23WebLensesImplementation35WebLensCrashLoggerExceptionReporter init] */

void FUN_10313ff20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebLensesImplementation.WebLensCrashLoggerExceptionReporter",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10313ff4c);
  (*pcVar1)();
}



/* Entry: 10313ff80; end: 10313ff8f; -[_TtC23WebLensesImplementation35WebLensCrashLoggerExceptionReporter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10313ff80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f44358));
  return;
}



/* Entry: 10313ff90; end: 10313ffaf;  */

void FUN_10313ff90(void)

{
  FUN_10313fc88();
  return;
}



/* Entry: 10313ffb0; end: 10313ffcf;  */

void FUN_10313ffb0(void)

{
  func_0x000107c61168(&PTR_PTR_1128ba2d8);
  return;
}



/* Entry: 10313ffd0; end: 10313ffdb;  */

void FUN_10313ffd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar6 = 0xed000064656c6961;
  uVar5 = 0x665f726574697277;
  if (bVar4 != 5) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (bVar4 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (bVar4 < 5) {
    uVar6 = uVar1;
    uVar5 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (bVar4 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (bVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar3 = uVar1;
  }
  if (bVar4 < 3) {
    uVar6 = uVar3;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 10313ffdc; end: 1031400e3;  */

void FUN_10313ffdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xed000064656c6961;
  uVar5 = 0x665f726574697277;
  if (bVar4 != 5) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (bVar4 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (bVar4 < 5) {
    uVar6 = uVar1;
    uVar5 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (bVar4 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (bVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar3 = uVar1;
  }
  if (bVar4 < 3) {
    uVar6 = uVar3;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(param_1,uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar6);
  return;
}



/* Entry: 1031400e4; end: 1031400eb;  */

void FUN_1031400e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar6 = 0xed000064656c6961;
  uVar5 = 0x665f726574697277;
  if (bVar4 != 5) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (bVar4 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (bVar4 < 5) {
    uVar6 = uVar1;
    uVar5 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (bVar4 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (bVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar3 = uVar1;
  }
  if (bVar4 < 3) {
    uVar6 = uVar3;
    uVar5 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031400ec; end: 103140243;  */

void FUN_1031400ec(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  uVar5 = 0xed000064656c6961;
  uVar4 = 0x665f726574697277;
  if (param_2 != 5) {
    uVar5 = 0xe700000000000000;
    uVar4 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (param_2 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (param_2 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (param_2 < 5) {
    uVar5 = uVar1;
    uVar4 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (param_2 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (param_2 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (param_2 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar3 = uVar1;
  }
  if (param_2 < 3) {
    uVar5 = uVar3;
    uVar4 = uVar2;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140244; end: 10314032f;  */

void FUN_103140244(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar6 = 0xed000064656c6961;
  uVar5 = 0x665f726574697277;
  if (bVar4 != 5) {
    uVar6 = 0xe700000000000000;
    uVar5 = 0x776569765f6f6e;
  }
  uVar3 = 0x6873617263;
  if (bVar4 != 3) {
    uVar3 = 0x6c75665f6b736964;
  }
  uVar1 = 0xe500000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xe90000000000006c;
  }
  if (bVar4 < 5) {
    uVar6 = uVar1;
    uVar5 = uVar3;
  }
  uVar3 = 0x6c65636e6163;
  if (bVar4 != 1) {
    uVar3 = 0x756f72676b636162;
  }
  uVar1 = 0xe600000000000000;
  if (bVar4 != 1) {
    uVar1 = 0xea0000000000646e;
  }
  uVar2 = 0x73736563637573;
  if (bVar4 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe700000000000000;
  if (bVar4 != 0) {
    uVar3 = uVar1;
  }
  if (bVar4 < 3) {
    uVar6 = uVar3;
    uVar5 = uVar2;
  }
  *param_1 = uVar5;
  param_1[1] = uVar6;
  return;
}



/* Entry: 103140330; end: 103140647;  */

void FUN_103140330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar2 = 0x6b6361626c6c6f72;
  if (bVar4 != 3) {
    uVar2 = 0x635f726579616c70;
  }
  uVar1 = 0xe800000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xed00006465736f6c;
  }
  uVar3 = 0xea0000000000646e;
  uVar5 = 0x756f72676b636162;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar2 = 0xed00006465686374;
  uVar1 = 0x6977735f736e656c;
  if (bVar4 != 0) {
    uVar2 = 0xeb00000000746978;
    uVar1 = 0x655f6172656d6163;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140648; end: 10314070b;  */

void FUN_103140648(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar2 = 0x6b6361626c6c6f72;
  if (bVar4 != 3) {
    uVar2 = 0x635f726579616c70;
  }
  uVar1 = 0xe800000000000000;
  if (bVar4 != 3) {
    uVar1 = 0xed00006465736f6c;
  }
  uVar3 = 0xea0000000000646e;
  uVar5 = 0x756f72676b636162;
  if (bVar4 != 2) {
    uVar3 = uVar1;
    uVar5 = uVar2;
  }
  uVar2 = 0xed00006465686374;
  uVar1 = 0x6977735f736e656c;
  if (bVar4 != 0) {
    uVar2 = 0xeb00000000746978;
    uVar1 = 0x655f6172656d6163;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10314070c; end: 10314093f;  */

void FUN_10314070c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010f127730;
  uVar4 = 0xd000000000000013;
  if (cVar3 != '\x01') {
    uVar1 = 0xee00676e69737369;
    uVar4 = 0x6d5f726579616c70;
  }
  uVar2 = 0xec00000072656e69;
  uVar5 = 0x61746e6f635f6f6e;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140940; end: 1031409b7;  */

void FUN_103140940(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0x800000010f127730;
  uVar3 = 0xd000000000000013;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xee00676e69737369;
    uVar3 = 0x6d5f726579616c70;
  }
  uVar2 = 0xec00000072656e69;
  uVar4 = 0x61746e6f635f6f6e;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1031409b8; end: 103140b03;  */

void FUN_1031409b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x64656c696166;
  if (cVar3 != '\x01') {
    uVar1 = 0x64657265646e6572;
  }
  uVar2 = 0xe600000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140b04; end: 103140b4b;  */

void FUN_103140b04(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103140b4c; end: 103140d2b;  */

void FUN_103140b4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0xe900000000000067;
  uVar2 = 0x6e6964726f636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x776f6c66646e6573;
  }
  uVar1 = 0x656c6469;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140d2c; end: 103140d87;  */

void FUN_103140d2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0xe900000000000067;
  uVar2 = 0x6e6964726f636572;
  if (cVar3 != '\x01') {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x776f6c66646e6573;
  }
  uVar1 = 0x656c6469;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103140d88; end: 103140fef;  */

void FUN_103140d88(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0xea00000000007265;
  uVar3 = 0x6c646e61685f6f6e;
  if (bVar2 != 2) {
    uVar1 = 0xeb00000000746f68;
    uVar3 = 0x7370616e735f6f6e;
  }
  uVar4 = 0x73736563637573;
  if (bVar2 != 0) {
    uVar4 = 0x736e656c5f6f6e;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe700000000000000;
    uVar3 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103140ff0; end: 10314107b;  */

void FUN_103140ff0(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  uVar1 = 0xea00000000007265;
  uVar3 = 0x6c646e61685f6f6e;
  if (bVar2 != 2) {
    uVar1 = 0xeb00000000746f68;
    uVar3 = 0x7370616e735f6f6e;
  }
  uVar4 = 0x73736563637573;
  if (bVar2 != 0) {
    uVar4 = 0x736e656c5f6f6e;
  }
  if (bVar2 < 2) {
    uVar1 = 0xe700000000000000;
    uVar3 = uVar4;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10314107c; end: 1031411f7;  */

void FUN_10314107c(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x61665f6f65646976;
  if (cVar2 != '\x01') {
    uVar1 = 0x72657474756873;
  }
  uVar3 = 0xee006b6361626c6c;
  if (cVar2 != '\x01') {
    uVar3 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031411f8; end: 10314124f;  */

void FUN_1031411f8(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 103141250; end: 103141513;  */

void FUN_103141250(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar5 = 0xe900000000000064;
  bVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x6c646e61685f6f6e;
  uVar1 = 0xea00000000007265;
  if (bVar2 != 3) {
    uVar4 = 0xd000000000000014;
    uVar1 = 0x800000010f127770;
  }
  if (bVar2 == 2) {
    uVar1 = 0xe900000000000065;
    uVar4 = 0x6e6f675f736e656c;
  }
  uVar3 = 0x65746e6573657270;
  if (bVar2 != 0) {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x656c69665f6f6e;
  }
  if (bVar2 < 2) {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103141514; end: 1031415bb;  */

void FUN_103141514(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  uVar4 = 0xe900000000000064;
  bVar2 = *unaff_x20;
  uVar5 = 0x6c646e61685f6f6e;
  uVar1 = 0xea00000000007265;
  if (bVar2 != 3) {
    uVar5 = 0xd000000000000014;
    uVar1 = 0x800000010f127770;
  }
  if (bVar2 == 2) {
    uVar1 = 0xe900000000000065;
    uVar5 = 0x6e6f675f736e656c;
  }
  uVar3 = 0x65746e6573657270;
  if (bVar2 != 0) {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x656c69665f6f6e;
  }
  if (bVar2 < 2) {
    uVar1 = uVar4;
    uVar5 = uVar3;
  }
  *param_1 = uVar5;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1031415bc; end: 103141627;  */

void FUN_1031415bc(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x646573756572;
  if (cVar2 != '\x01') {
    uVar1 = 0x64656b726170;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe600000000000000);
  func_0x000107c6142c(0xe600000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 103141628; end: 103141667;  */

void FUN_103141628(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x646573756572;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64656b726170;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe600000000000000);
  return;
}



/* Entry: 103141668; end: 1031416cf;  */

void FUN_103141668(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x646573756572;
  if (cVar2 != '\x01') {
    uVar1 = 0x64656b726170;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe600000000000000);
  func_0x000107c6142c(0xe600000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1031416d0; end: 1031416db;  */

void FUN_1031416d0(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1031416dc; end: 103141753;  */

void FUN_1031416dc(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



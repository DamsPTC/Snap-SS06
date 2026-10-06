/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10220699c; end: 1022069d3;  */

void FUN_10220699c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1022069d4; end: 102206a03;  */

undefined1  [16] FUN_1022069d4(void)

{
  return ZEXT816(0x1104e40a0);
}



/* Entry: 102206a04; end: 102206a27;  */

undefined8 FUN_102206a04(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 102206a28; end: 102206a2f;  */

void FUN_102206a28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102206a30; end: 102206bab;  */

void FUN_102206a30(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x00010032c050();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  puVar1 = PTR_PTR_1126aa260;
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000107c61174(uStack_58);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar4 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = param_2;
  return;
}



/* Entry: 102206bac; end: 102206cf7;  */

long FUN_102206bac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126aa260;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar1);
  uVar2 = 0x767265536b6c6174;
  func_0x000107c5fadc(0x767265536b6c6174,0xec00000073656369);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c3e740(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 102206cf8; end: 102206d23;  */

void FUN_102206cf8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102206d24; end: 102206d57;  */

undefined1  [16] FUN_102206d24(void)

{
  return ZEXT816(0x1104e41e8);
}



/* Entry: 102206d58; end: 102206d7f;  */

void FUN_102206d58(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102206d80; end: 102206dcb;  */

undefined8 FUN_102206d80(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 102206dcc; end: 102206dcf;  */

void FUN_102206dcc(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x18,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102206dd0; end: 102207cb7;  */

void FUN_102206dd0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar15 = *unaff_x20;
  puVar10 = *(ulong **)(lVar15 + 0x50);
  uVar12 = puVar10[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar12 + 0x40));
  puVar11 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = 0x112d9dd00;
  func_0x00010002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar10,uVar16,0,0);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 0x18))(param_1,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar13 = unaff_x20[2];
  lVar14 = lVar13;
  func_0x000107c61434();
  lVar3 = lStack_c8;
  func_0x000107c5fc7c();
  if (lVar14 != 0) {
    lVar14 = 0;
    lStack_b0 = (long)*(int *)(lVar3 + 0x30);
    lStack_b8 = *(long *)(lVar15 + 0x58);
    pcStack_c0 = *(code **)(lStack_b8 + 8);
    lStack_a8 = (long)puVar11 - extraout_x8_00;
    do {
      lVar6 = lStack_a8;
      func_0x000107c5fc98(lStack_a8,lVar14,lVar13,lVar3);
      lVar15 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10220704c);
        (*pcVar2)();
      }
      uVar16 = *(undefined8 *)(lVar6 + lStack_b0);
      (**(code **)(uVar12 + 0x20))(puVar11,lVar6,puVar10);
      puVar7 = puVar10;
      (*pcStack_c0)(puVar10,lStack_b8);
      puVar8 = puVar7;
      func_0x0001040b12c0();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        func_0x000100083b20(&uStack_a0);
        lVar6 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar3 = lStack_c8;
        (**(code **)(*(long *)(lVar6 + 8) + 0x18))(param_1,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar16);
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
      }
      else {
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
        func_0x000107c61574(uVar16);
      }
      lVar6 = lVar13;
      func_0x000107c5fc7c(lVar13,lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar15 != lVar6);
  }
  func_0x000107c6142c(lVar13);
  return;
}



/* Entry: 102207cb8; end: 102207d1b;  */

void FUN_102207cb8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_102207e80(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102207d1c; end: 102207e67;  */

void FUN_102207d1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x18,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x000107c61604(unaff_x20 + 0x18,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 102207e68; end: 102207e7f;  */

void FUN_102207e68(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  ulong *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  code *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  plVar4 = unaff_x20 + 3;
  lVar15 = *unaff_x20;
  puVar10 = *(ulong **)(lVar15 + 0x50);
  uVar12 = puVar10[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(uVar12 + 0x40));
  puVar11 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar16 = 0x112d9dd00;
  func_0x00010002969c(0x112d9dd00,&UNK_10d93e920);
  lVar3 = 0;
  func_0x000107c61510(0,puVar10,uVar16,0,0);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(plVar4,auStack_78,0,0);
  func_0x000107c61618();
  if (plVar4 != (long *)0x0) {
    lVar3 = unaff_x20[4];
    plVar5 = plVar4;
    func_0x000107c614f0();
    (**(code **)(*(long *)(lVar3 + 8) + 0x18))(param_1,plVar5);
    func_0x000107c615e8(plVar4);
  }
  func_0x000107c61428(unaff_x20 + 2,auStack_90,0,0);
  lVar13 = unaff_x20[2];
  lVar14 = lVar13;
  func_0x000107c61434();
  lVar3 = lStack_c8;
  func_0x000107c5fc7c();
  if (lVar14 != 0) {
    lVar14 = 0;
    lStack_b0 = (long)*(int *)(lVar3 + 0x30);
    lStack_b8 = *(long *)(lVar15 + 0x58);
    pcStack_c0 = *(code **)(lStack_b8 + 8);
    lStack_a8 = (long)puVar11 - extraout_x8_00;
    do {
      lVar6 = lStack_a8;
      func_0x000107c5fc98(lStack_a8,lVar14,lVar13,lVar3);
      lVar15 = lVar14 + 1;
      if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10220704c);
        (*pcVar2)();
      }
      uVar16 = *(undefined8 *)(lVar6 + lStack_b0);
      (**(code **)(uVar12 + 0x20))(puVar11,lVar6,puVar10);
      puVar7 = puVar10;
      (*pcStack_c0)(puVar10,lStack_b8);
      puVar8 = puVar7;
      func_0x0001040b12c0();
      if ((*puVar8 & ((ulong)puVar7 ^ 0xffffffffffffffff)) == 0) {
        func_0x000100083b20(&uStack_a0);
        lVar6 = lStack_98;
        uVar1 = uStack_a0;
        uVar9 = uStack_a0;
        func_0x000107c614f0(uStack_a0);
        lVar3 = lStack_c8;
        (**(code **)(*(long *)(lVar6 + 8) + 0x18))(param_1,uVar9);
        func_0x000107c615e8(uVar1);
        func_0x000107c61574(uVar16);
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
      }
      else {
        (**(code **)(uVar12 + 8))(puVar11,puVar10);
        func_0x000107c61574(uVar16);
      }
      lVar6 = lVar13;
      func_0x000107c5fc7c(lVar13,lVar3);
      lVar14 = lVar14 + 1;
    } while (lVar15 != lVar6);
  }
  func_0x000107c6142c(lVar13);
  return;
}



/* Entry: 102207e80; end: 102207ea3;  */

undefined8 FUN_102207e80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102207ea4; end: 102207ea7;  */

void FUN_102207ea4(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x18,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 102207ea8; end: 102207f3b;  */

long FUN_102207ea8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  lVar1 = param_1;
  func_0x000107c6157c();
  func_0x000100a123e8();
  func_0x000107c61574(param_2);
  func_0x000107c61428(param_1 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  func_0x000107c61574(param_1);
  func_0x000107c6142c(uVar2);
  return unaff_x20;
}



/* Entry: 102207f3c; end: 102207f6f;  */

undefined1  [16] FUN_102207f3c(void)

{
  return ZEXT816(0);
}



/* Entry: 102207f70; end: 102208043;  */

long FUN_102207f70(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_2;
  lVar1 = param_2;
  func_0x000107c6157c();
  (*param_4)();
  func_0x000107c61574(param_3);
  func_0x000107c61428(param_2 + 0x10,auStack_58,1,0);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar1;
  func_0x000107c6142c(uVar2);
  func_0x000107c61428(param_1 + 0x18,auStack_70,1,0);
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1104e42c8;
  func_0x000107c61604(param_1 + 0x18,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return unaff_x20;
}



/* Entry: 102208044; end: 10220804f;  */

undefined1  [16] FUN_102208044(void)

{
  return ZEXT816(0);
}



/* Entry: 102208050; end: 1022080b7;  */

undefined8 FUN_102208050(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x0001008f0048(param_1,param_2,param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 1022080b8; end: 10220811b;  */

void FUN_1022080b8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6145c();
  return;
}



/* Entry: 10220811c; end: 102208223;  */

undefined1  [16] FUN_10220811c(void)

{
  return ZEXT816(0);
}



/* Entry: 102208224; end: 102208353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102208224(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e65298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e652a0) = 0;
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e652a8) = lVar2;
    puVar3 = &UNK_1104e4788;
    func_0x000107c613fc(&UNK_1104e4788,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    func_0x0001000285a8(0x112e652b0,&UNK_10da701a0);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    pcVar1 = FUN_102208e84;
    func_0x0001000bdd8c(FUN_102208e84,puVar3);
    *(code **)(unaff_x20 + _DAT_112e652b8) = pcVar1;
    func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102208354);
  (*pcVar1)();
}



/* Entry: 102208354; end: 1022083ab;  */

undefined8 FUN_102208354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_102208d84(param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1022083ac; end: 102208437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022083ac(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_113083800);
  lVar1 = 0;
  func_0x00010220b58c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa268;
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined **)(lVar2 + 0x18) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104e4c00;
  *param_1 = lVar2;
  return;
}



/* Entry: 102208438; end: 10220848f; +[_TtC18CloudAccountIdImpl26CAIDNotificationEntryPoint attributedTask] */

void FUN_102208438(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x000100933ae0(0);
  func_0x00010094a100();
  uVar2 = uVar1;
  func_0x000100933b54();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102208490; end: 1022086f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102208490(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar8 = &puStack_80;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112e652a8);
  uVar2 = 0x414e455f44494143;
  func_0x000107c5fadc(0x414e455f44494143,0xec00000044454c42);
  uVar10 = uVar9;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)uVar10 != 0) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e652b8);
    lVar3 = 0;
    func_0x00010220b35c();
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x30) = uVar10;
    *(undefined8 *)(lVar3 + 0x10) = uVar9;
    func_0x0001000285a8(0x112e652c0,&UNK_10da70280);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar10);
    func_0x000107c615f0(uVar9);
    pcVar4 = FUN_10220b1e0;
    func_0x0001000bdd8c(FUN_10220b1e0,0);
    *(code **)(lVar3 + 0x18) = pcVar4;
    *(code **)(lVar3 + 0x20) = FUN_10220b230;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    puVar5 = &UNK_1104e47b0;
    func_0x000107c613fc(&UNK_1104e47b0,0x18,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    func_0x000107c61174();
    FUN_10220ace8(FUN_102208e8c,puVar5);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1104e47d8;
    func_0x000107c613fc(&UNK_1104e47d8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_102208eac;
    *(long *)(puVar5 + 0x18) = lVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x102208eb4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104e47f0;
    puStack_58 = puVar5;
    func_0x000107c60bc4();
    puVar7 = (undefined1 *)ppuVar6;
    func_0x000107c60bc4();
    func_0x000107c6157c(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puStack_58);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e65298);
    *(undefined1 **)(unaff_x20 + _DAT_112e65298) = puVar7;
    func_0x000107c60bd0(uVar10);
    puVar5 = &UNK_1104e4828;
    func_0x000107c613fc(&UNK_1104e4828,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = 0x102208ed8;
    *(long *)(puVar5 + 0x18) = lVar3;
    uStack_60 = 0x102208f08;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104e4840;
    puStack_58 = puVar5;
    func_0x000107c60bc4();
    puVar7 = (undefined1 *)ppuVar8;
    func_0x000107c60bc4();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(puStack_58);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e652a0);
    *(undefined1 **)(unaff_x20 + _DAT_112e652a0) = puVar7;
    func_0x000107c60bd0(uVar10);
  }
  return;
}



/* Entry: 1022086f8; end: 102208b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022086f8(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *pcVar11;
  undefined8 uStack_98;
  long *plStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  long alStack_60 [4];
  
  func_0x000107c5eba8();
  if (param_1 == (long *)0x0) {
    alStack_60[1] = 0;
    alStack_60[0] = 0;
    alStack_60[3] = 0;
    alStack_60[2] = 0;
    goto LAB_102208890;
  }
  uVar2 = *(undefined8 *)PTR__NSUbiquitousKeyValueStoreChangeReasonKey_110345648;
  func_0x000107c5faec();
  uStack_98 = uVar2;
  plStack_90 = param_2;
  func_0x000107c61434(param_2);
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&lStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (param_1[2] == 0) {
LAB_1022087b4:
    alStack_60[1] = 0;
    alStack_60[0] = 0;
    alStack_60[3] = 0;
    alStack_60[2] = 0;
  }
  else {
    func_0x000107c61434(param_1);
    plVar3 = &lStack_88;
    func_0x000100df95d0(plVar3);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_1022087b4;
    }
    func_0x0001000bb420(param_1[7] + (long)plVar3 * 0x20,alStack_60);
    func_0x000107c6142c(param_2);
    param_2 = param_1;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_1);
  func_0x0001007bbff0(&lStack_88);
  puVar6 = PTR___sypN_11034f1a8;
  if (alStack_60[3] == 0) {
LAB_102208890:
    func_0x00010006e7f4(alStack_60);
    return;
  }
  plVar3 = &lStack_88;
  plVar7 = alStack_60;
  func_0x000107c6147c(plVar3,plVar7,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
  lVar1 = lStack_88;
  if (((ulong)plVar3 & 1) == 0) {
    return;
  }
  func_0x000107c5eba8();
  if (plVar3 == (long *)0x0) {
    alStack_60[1] = 0;
    alStack_60[0] = 0;
    alStack_60[3] = 0;
    alStack_60[2] = 0;
LAB_1022089bc:
    func_0x00010006e7f4(alStack_60);
    if (lVar1 == 0) {
      return;
    }
    lVar5 = 0;
  }
  else {
    uVar2 = *(undefined8 *)PTR__NSUbiquitousKeyValueStoreChangedKeysKey_110345650;
    func_0x000107c5faec();
    uStack_98 = uVar2;
    plStack_90 = plVar7;
    func_0x000107c61434(plVar7);
    puVar8 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_88,&uStack_98,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (plVar3[2] == 0) {
LAB_1022088c4:
      alStack_60[1] = 0;
      alStack_60[0] = 0;
      alStack_60[3] = 0;
      alStack_60[2] = 0;
    }
    else {
      func_0x000107c61434(plVar3);
      plVar4 = &lStack_88;
      func_0x000100df95d0(plVar4);
      if (((ulong)puVar8 & 1) == 0) {
        func_0x000107c6142c(plVar3);
        goto LAB_1022088c4;
      }
      func_0x0001000bb420(plVar3[7] + (long)plVar4 * 0x20,alStack_60);
      func_0x000107c6142c(plVar7);
      plVar7 = plVar3;
    }
    func_0x000107c6142c(plVar7);
    func_0x000107c6142c(plVar3);
    func_0x0001007bbff0(&lStack_88);
    if (alStack_60[3] == 0) goto LAB_1022089bc;
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    plVar3 = &lStack_88;
    func_0x000107c6147c(plVar3,alStack_60,puVar6 + 8,uVar2,6);
    lVar5 = lStack_88;
    if ((int)plVar3 == 0) {
      lVar5 = 0;
    }
    if (lVar1 == 0) {
      if (lVar5 == 0) {
        return;
      }
      uVar10 = 0x6d65732e70616e73;
      func_0x000100077018(0x6d65732e70616e73,0xee00646961632e63,lVar5);
      func_0x000107c6142c(lVar5);
      if ((uVar10 & 1) == 0) {
        return;
      }
      func_0x0001000d224c(&lStack_88);
      func_0x0001000a8868(&lStack_88,uStack_70);
      pcVar11 = *(code **)(lStack_68 + 0x18);
      uVar2 = 0x635f726576726573;
      uVar9 = 0xed000065676e6168;
      goto LAB_102208b84;
    }
  }
  func_0x000107c6142c(lVar5);
  if (lVar1 == 3) {
    func_0x0001000d224c(&lStack_88);
    func_0x0001000a8868(&lStack_88,uStack_70);
    pcVar11 = *(code **)(lStack_68 + 0x18);
    uVar2 = 0x5f746e756f636361;
    uVar9 = 0xee0065676e616863;
  }
  else if (lVar1 == 2) {
    func_0x0001000d224c(&lStack_88);
    func_0x0001000a8868(&lStack_88,uStack_70);
    pcVar11 = *(code **)(lStack_68 + 0x18);
    uVar2 = 0x69765f61746f7571;
    uVar9 = 0xef6e6f6974616c6f;
  }
  else if (lVar1 == 1) {
    func_0x0001000d224c(&lStack_88);
    func_0x0001000a8868(&lStack_88,uStack_70);
    pcVar11 = *(code **)(lStack_68 + 0x18);
    uVar2 = 0x5f6c616974696e69;
    uVar9 = 0xec000000636e7973;
  }
  else {
    lStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_80);
    lStack_88 = -0x2fffffffffffffe9;
    uStack_80 = 0x800000010f071890;
    alStack_60[0] = lVar1;
    puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(uStack_80);
    func_0x0001000d224c(&lStack_88);
    func_0x0001000a8868(&lStack_88,uStack_70);
    pcVar11 = *(code **)(lStack_68 + 0x18);
    uVar2 = 0x6e776f6e6b6e75;
    uVar9 = 0xe700000000000000;
  }
LAB_102208b84:
  (*pcVar11)(uVar2,uVar9,uStack_70,lStack_68);
  func_0x0001000834e4(&lStack_88);
  return;
}



/* Entry: 102208b9c; end: 102208c1b;  */

/* WARNING: Possible PIC construction at 0x000102208bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102208c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102208bcc) */
/* WARNING: Removing unreachable block (ram,0x000102208c08) */

void FUN_102208b9c(void)

{
  func_0x000107c602fc(0x13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 102208c1c; end: 102208ca3;  */

void FUN_102208c1c(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x80))(0,0,0x6d65732e70616e73,0xee00646961632e63,uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 102208ca4; end: 102208d03; -[_TtC18CloudAccountIdImpl26CAIDNotificationEntryPoint init] */

void FUN_102208ca4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CloudAccountIdImpl.CAIDNotificationEntryPoint",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102208cd0);
  (*pcVar1)();
}



/* Entry: 102208d04; end: 102208d7b; -[_TtC18CloudAccountIdImpl26CAIDNotificationEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102208d40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102208d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102208d04(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e652a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e652b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(*(undefined8 *)(param_1 + _DAT_112e65298));
  return;
}



/* Entry: 102208d7c; end: 102208d83;  */

undefined8 FUN_102208d7c(void)

{
  return 0;
}



/* Entry: 102208d84; end: 102208e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102208d84(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e65298) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e652a0) = 0;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e652a8) = param_2;
    puVar2 = &UNK_1104e4890;
    func_0x000107c613fc(&UNK_1104e4890,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    func_0x0001000285a8(0x112e652b0,&UNK_10da701a0);
    func_0x000107c613fc();
    func_0x000107c61174(param_1);
    uVar3 = 0x102208f0c;
    func_0x0001000bdd8c(0x102208f0c,puVar2);
    *(undefined8 *)(unaff_x20 + _DAT_112e652b8) = uVar3;
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102208e84);
  (*pcVar1)();
}



/* Entry: 102208e84; end: 102208e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102208e84(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083800);
  lVar1 = 0;
  func_0x00010220b58c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa268;
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined **)(lVar2 + 0x18) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104e4c00;
  *param_1 = lVar2;
  return;
}



/* Entry: 102208e8c; end: 102208eab;  */

void FUN_102208e8c(void)

{
  FUN_1022086f8();
  return;
}



/* Entry: 102208eac; end: 102208edf;  */

/* WARNING: Possible PIC construction at 0x000102208bc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102208c04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102208bcc) */
/* WARNING: Removing unreachable block (ram,0x000102208c08) */

void FUN_102208eac(void)

{
  func_0x000107c602fc(0x13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 102208ee0; end: 102208eff;  */

void FUN_102208ee0(void)

{
  func_0x000107c61168(&PTR_PTR_11282a940);
  return;
}



/* Entry: 102208f00; end: 102208f0f;  */

void FUN_102208f00(long param_1,long param_2)

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



/* Entry: 102208f10; end: 102209047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102208f10(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e652f0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e652f8) = param_1;
  uVar3 = *(undefined8 *)(param_2 + _DAT_11307e6a8);
  *(undefined8 *)(unaff_x20 + _DAT_112e65300) = uVar3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  return puVar2;
}



/* Entry: 102209048; end: 1022091df; +[_TtC18CloudAccountIdImpl27CAIDPostLoginSyncEntryPoint attributedTask] */

void FUN_102209048(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000100079360(0);
  uVar1 = 0;
  func_0x000100933ae0(0);
  func_0x00010094a100();
  uVar2 = uVar1;
  func_0x000100933b54();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1022091e0; end: 1022093db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022091e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_130 [224];
  
  puVar5 = auStack_130;
  func_0x000102fb83b8(0);
  func_0x000107c61534();
  uVar1 = 0xd000000000000015;
  func_0x000102fb7fdc(0xd000000000000015,0x800000010f0718e0);
  uVar2 = 0;
  func_0x000102fb8764(0);
  func_0x000107c61534();
  func_0x000102fb862c();
  uVar3 = 1;
  func_0x000102fb86cc(1);
  func_0x000107c61574(uVar2);
  uVar2 = 0x112e28318;
  func_0x0001000285a8(0x112e28318,&UNK_10da17640);
  func_0x000107c61538();
  func_0x000102fb86fc();
  func_0x000107c61574(uVar3);
  uVar3 = uVar2;
  func_0x000102fb825c(uVar2);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  uVar2 = 0;
  func_0x000102fb8920(0);
  func_0x000107c61534();
  func_0x000102fb8858();
  uVar1 = 1;
  func_0x000102fb88e0(1);
  func_0x000107c61574(uVar2);
  uVar2 = 0x4b;
  func_0x000102fb88f0(0x4b);
  func_0x000107c61574(uVar1);
  uVar1 = 3;
  func_0x000102fb8900(3);
  func_0x000107c61574(uVar2);
  uVar2 = uVar1;
  func_0x000102fb833c(uVar1);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
  func_0x000102fb804c();
  func_0x000107c61574(uVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_112e65300);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x0001040a0250(param_1);
    uVar2 = param_1;
    func_0x000107c5ee20();
    func_0x00010006c090(param_1,puVar5);
    func_0x000107c5c2c0(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1022093dc; end: 102209433;  */

void FUN_1022093dc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1022091e0(8);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102209434; end: 10220943b;  */

void FUN_102209434(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1022091e0(8);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10220943c; end: 10220949b; -[_TtC18CloudAccountIdImpl27CAIDPostLoginSyncEntryPoint init] */

void FUN_10220943c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CloudAccountIdImpl.CAIDPostLoginSyncEntryPoint",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102209468);
  (*pcVar1)();
}



/* Entry: 10220949c; end: 102209503; -[_TtC18CloudAccountIdImpl27CAIDPostLoginSyncEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220949c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e652f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e65300));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_release_11034bcf0)(*(undefined8 *)(param_1 + _DAT_112e652f0));
  return;
}



/* Entry: 102209504; end: 10220952f;  */

undefined8 FUN_102209504(void)

{
  return 0;
}



/* Entry: 102209530; end: 10220954f;  */

void FUN_102209530(void)

{
  func_0x000107c61168(&PTR_PTR_11282aa18);
  return;
}



/* Entry: 102209550; end: 102209723;  */

long FUN_102209550(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  lVar2 = param_3;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + 0x18) = lVar2;
    puVar3 = &UNK_1104e4958;
    func_0x000107c613fc(&UNK_1104e4958,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    func_0x0001000285a8(0x112e652b0,&UNK_10da701a0);
    func_0x000107c613fc();
    func_0x000107c61174(param_2);
    pcVar1 = FUN_1022097b0;
    func_0x0001000bdd8c(FUN_1022097b0,puVar3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    *(code **)(unaff_x20 + 0x10) = pcVar1;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102209644);
  (*pcVar1)();
}



/* Entry: 102209724; end: 1022097af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102209724(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_113083800);
  lVar1 = 0;
  func_0x00010220b58c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa268;
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined **)(lVar2 + 0x18) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104e4c00;
  *param_1 = lVar2;
  return;
}



/* Entry: 1022097b0; end: 1022097b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022097b0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113083800);
  lVar1 = 0;
  func_0x00010220b58c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa268;
  func_0x000107c610f8();
  func_0x000107c61174(uVar4);
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined **)(lVar2 + 0x18) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104e4c00;
  *param_1 = lVar2;
  return;
}



/* Entry: 1022097b8; end: 10220986b;  */

void FUN_1022097b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1104e49a8;
  func_0x000107c613fc(&UNK_1104e49a8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e65360,&UNK_10da70238);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  pcVar4 = FUN_10220991c;
  func_0x0001000bdd8c(FUN_10220991c,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  func_0x00010009b910(0);
  func_0x000107c610f8();
  func_0x0001040a057c(pcVar5);
  return;
}



/* Entry: 10220986c; end: 10220991b;  */

void FUN_10220986c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  func_0x00010220b35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x10) = param_3;
  func_0x0001000285a8(0x112e652c0,&UNK_10da70280);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  pcVar2 = FUN_10220b1e0;
  func_0x0001000bdd8c(FUN_10220b1e0,0);
  *(code **)(lVar1 + 0x18) = pcVar2;
  *(code **)(lVar1 + 0x20) = FUN_10220b230;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 10220991c; end: 102209923;  */

void FUN_10220991c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010220b35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  func_0x0001000285a8(0x112e652c0,&UNK_10da70280);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  pcVar4 = FUN_10220b1e0;
  func_0x0001000bdd8c(FUN_10220b1e0,0);
  *(code **)(lVar3 + 0x18) = pcVar4;
  *(code **)(lVar3 + 0x20) = FUN_10220b230;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *param_1 = lVar3;
  return;
}



/* Entry: 102209924; end: 10220993f;  */

void FUN_102209924(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102209940; end: 10220998b;  */

void FUN_102209940(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10220998c; end: 102209a0f;  */

void FUN_10220998c(undefined8 param_1)

{
  if (lRam0000000112e65390 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6ba014);
  return;
}



/* Entry: 102209a10; end: 102209ad3;  */

void FUN_102209a10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1104e49d0;
  func_0x000107c613fc(&UNK_1104e49d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e65360,&UNK_10da70238);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  pcVar4 = FUN_102209b00;
  func_0x0001000bdd8c(FUN_102209b00,puVar3);
  pcVar5 = pcVar4;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar4);
  func_0x00010009b910(0);
  func_0x000107c610f8();
  func_0x0001040a057c();
  *param_1 = pcVar5;
  return;
}



/* Entry: 102209ad4; end: 102209aff;  */

void FUN_102209ad4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102209b00; end: 102209b07;  */

void FUN_102209b00(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010220b35c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  func_0x0001000285a8(0x112e652c0,&UNK_10da70280);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c615f0(uVar2);
  pcVar4 = FUN_10220b1e0;
  func_0x0001000bdd8c(FUN_10220b1e0,0);
  *(code **)(lVar3 + 0x18) = pcVar4;
  *(code **)(lVar3 + 0x20) = FUN_10220b230;
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *param_1 = lVar3;
  return;
}



/* Entry: 102209b08; end: 102209b9f;  */

void FUN_102209b08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104e4a10;
  func_0x000107c613fc(&UNK_1104e4a10,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_102209d88,puVar1);
  return;
}



/* Entry: 102209ba0; end: 102209d87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102209ba0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  ppuVar5 = &puStack_d0;
  func_0x000100083b20(&puStack_d0);
  puVar4 = puStack_d0;
  uVar1 = *(undefined8 *)(puStack_d0 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_d0);
  puVar4 = puStack_d0;
  func_0x000103e3687c(auStack_78);
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_d0);
  uVar2 = *(undefined8 *)(puStack_d0 + _DAT_11305c1e8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_d0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  func_0x00010132740c(auStack_78,auStack_a0);
  puVar4 = &UNK_1104e4a58;
  func_0x000107c613fc(&UNK_1104e4a58,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  FUN_102209ea8(auStack_a0,puVar4 + 0x18);
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  uStack_b0 = 0x102209ec0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_101443eec;
  puStack_b8 = &UNK_1104e4a70;
  puStack_a8 = puVar4;
  func_0x000107c60bc4(&puStack_d0);
  puVar4 = puStack_a8;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd000000000000015,0x800000010f0718e0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = puVar4;
  return;
}



/* Entry: 102209d88; end: 102209da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102209d88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [40];
  undefined1 auStack_78 [40];
  
  ppuVar5 = &puStack_d0;
  func_0x000100083b20(&puStack_d0,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  puVar4 = puStack_d0;
  uVar1 = *(undefined8 *)(puStack_d0 + _DAT_113093a98);
  func_0x000107c61174();
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_d0);
  puVar4 = puStack_d0;
  func_0x000103e3687c(auStack_78);
  func_0x000107c61170(puVar4);
  func_0x000100083b20(&puStack_d0);
  uVar2 = *(undefined8 *)(puStack_d0 + _DAT_11305c1e8);
  func_0x000107c61174();
  func_0x000107c61170(puStack_d0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  func_0x00010132740c(auStack_78,auStack_a0);
  puVar4 = &UNK_1104e4a58;
  func_0x000107c613fc(&UNK_1104e4a58,0x48,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  FUN_102209ea8(auStack_a0,puVar4 + 0x18);
  *(undefined8 *)(puVar4 + 0x40) = uVar2;
  uStack_b0 = 0x102209ec0;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_101443eec;
  puStack_b8 = &UNK_1104e4a70;
  puStack_a8 = puVar4;
  func_0x000107c60bc4(&puStack_d0);
  puVar4 = puStack_a8;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  func_0x0001000a0a8c(0);
  puVar4 = puVar3;
  func_0x000100a0dc54(puVar3,0xd000000000000015,0x800000010f0718e0);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x0001000834e4(auStack_78);
  *param_1 = puVar4;
  return;
}



/* Entry: 102209da4; end: 102209ea7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102209da4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0;
  FUN_10220a84c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e65458;
  func_0x0001000285a8(0x112e652b0,&UNK_10da701a0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar4 = FUN_102209eec;
  func_0x0001000bdd8c(FUN_102209eec,0);
  *(code **)(lVar3 + lVar1) = pcVar4;
  *(undefined8 *)(lVar3 + _DAT_112e65460) = 1;
  *(undefined8 *)(lVar3 + _DAT_112e65440) = param_1;
  func_0x00010132740c(param_2,lVar3 + _DAT_112e65448);
  *(undefined8 *)(lVar3 + _DAT_112e65450) = param_3;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102209ea8; end: 102209eeb;  */

undefined8 * FUN_102209ea8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102209eec; end: 102209f4f;  */

void FUN_102209eec(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  func_0x00010220b58c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  puVar3 = PTR_PTR_1126aa268;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined **)(lVar2 + 0x18) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104e4c00;
  *param_1 = lVar2;
  return;
}



/* Entry: 102209f50; end: 10220a137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102209f50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e65460;
  lVar3 = *(long *)(unaff_x20 + _DAT_112e65460);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    func_0x000102209fbc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    FUN_10220ab98(uVar4);
  }
  func_0x00010220aba8(lVar3);
  return lVar2;
}



/* Entry: 10220a138; end: 10220a153;  */

void FUN_10220a138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10220a154,0,0);
  return;
}



/* Entry: 10220a154; end: 10220a46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220a154(long *param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long lVar11;
  int *piVar12;
  long unaff_x22;
  
  FUN_102209f50();
  *(long **)(unaff_x22 + 0x1d0) = param_1;
  if (param_1 == (long *)0x0) {
    pcVar4 = *(code **)(unaff_x22 + 0x1b8);
    func_0x00010220ab58();
    puVar10 = &UNK_1104e4b68;
    func_0x000107c613f8(&UNK_1104e4b68,param_1,0,0);
    (*pcVar4)(2,puVar10);
    func_0x000107c614ac(puVar10);
  }
  else {
    uVar5 = *(ulong *)(*(long *)(unaff_x22 + 0x1b0) + _DAT_112e65450);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(ulong *)(unaff_x22 + 0x1d8) = uVar5;
    if (uVar5 == 0) {
      pcVar4 = *(code **)(unaff_x22 + 0x1b8);
      func_0x00010220ab58();
      puVar10 = &UNK_1104e4b68;
      func_0x000107c613f8(&UNK_1104e4b68,uVar5,0,0);
      (*pcVar4)(2,puVar10);
      func_0x000107c61574(param_1);
      func_0x000107c614ac(puVar10);
      param_2 = 0xe000000000000000;
    }
    else {
      uVar6 = uVar5;
      func_0x000107c43f88();
      func_0x000107c61180();
      uVar7 = uVar6;
      func_0x000107c5faec();
      func_0x000107c61170(uVar6);
      *(ulong *)(unaff_x22 + 0x1e0) = param_2;
      uVar6 = uVar7 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar6 = param_2 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        func_0x00010448a8f4(unaff_x22 + 0xd0);
        lVar11 = 0x112d38300;
        func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
        func_0x000107c61534();
        *(undefined8 *)(lVar11 + 0x18) = 2;
        *(undefined8 *)(lVar11 + 0x10) = 1;
        *(undefined8 *)(lVar11 + 0x20) = 0xd000000000000010;
        uVar3 = uRam0000000112e65618;
        uVar2 = uRam0000000112e65610;
        *(undefined8 *)(lVar11 + 0x28) = 0x800000010ef1c330;
        *(undefined8 *)(lVar11 + 0x30) = uVar2;
        *(undefined8 *)(lVar11 + 0x38) = uVar3;
        func_0x000107c61434();
        lVar8 = lVar11;
        func_0x0001001830b8(lVar11);
        func_0x000107c61588(lVar11);
        func_0x000100ab5dc4((undefined8 *)(lVar11 + 0x20));
        func_0x00010448a92c(unaff_x22 + 0x70,lVar8);
        *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x90);
        *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa0);
        *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0xb8);
        *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0xb0);
        *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xc0);
        *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x78);
        *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
        *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
        func_0x000107c6142c(lVar8);
        func_0x000100e19000(unaff_x22 + 0xd0);
        piVar12 = *(int **)(*param_1 + 0x78);
        iVar1 = *piVar12;
        plVar9 = (long *)(ulong)(uint)piVar12[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1e8) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_10220a470;
                    /* WARNING: Could not recover jumptable at 0x00010220a31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar12))
                  (uVar7,param_2,0,0xc000000000000000,unaff_x22 + 0x10);
        return;
      }
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
      pcVar4 = *(code **)(unaff_x22 + 0x1b8);
      func_0x0001000d224c(unaff_x22 + 0x170);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
      lVar11 = *(long *)(unaff_x22 + 400);
      func_0x0001000a8868(unaff_x22 + 0x170,uVar2);
      (**(code **)(lVar11 + 0x48))(uVar3,uVar2,lVar11);
      lVar11 = unaff_x22 + 0x170;
      func_0x0001000834e4(lVar11);
      func_0x00010220ab58();
      puVar10 = &UNK_1104e4b68;
      func_0x000107c613f8(&UNK_1104e4b68,lVar11,0,0);
      (*pcVar4)(2,puVar10);
      func_0x000107c61574(param_1);
      func_0x000107c614ac(puVar10);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c6142c(param_2);
    func_0x00010006c090(0,0xc000000000000000);
  }
                    /* WARNING: Could not recover jumptable at 0x00010220a46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10220a470; end: 10220a4f7;  */

void FUN_10220a470(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1f0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x1e8));
  if (unaff_x20 == 0) {
    func_0x00010006c090(param_1,param_2);
    func_0x000100e19000(lVar2 + 0x70);
    pcVar1 = FUN_10220a4f8;
  }
  else {
    func_0x000100e19000(lVar2 + 0x70);
    pcVar1 = FUN_10220a560;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10220a4f8; end: 10220a55f;  */

void FUN_10220a4f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  (**(code **)(unaff_x22 + 0x1b8))(0,0);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e0));
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010220a55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10220a560; end: 10220a673;  */

void FUN_10220a560(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  pcVar2 = *(code **)(unaff_x22 + 0x1b8);
  func_0x000107c602fc(0x16);
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0xe000000000000000;
  func_0x000107c5fb78(0xd000000000000014,0x800000010f071990);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar5;
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c603d0(unaff_x22 + 0x1a8,unaff_x22 + 0x198,uVar4,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1a0));
  func_0x000107c614b0(uVar5);
  (*pcVar2)(1,uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c614ac(uVar5);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e0));
  func_0x00010006c090(0,0xc000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010220a670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10220a674; end: 10220a783; -[_TtC18CloudAccountIdImpl20CAIDSyncJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_10220a674(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1104e4aa8;
  func_0x000107c613fc(&UNK_1104e4aa8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  lVar1 = param_4;
  FUN_10220a92c(param_4,param_2,FUN_10220a86c,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10220a784; end: 10220a7e3; -[_TtC18CloudAccountIdImpl20CAIDSyncJobProcessor init] */

void FUN_10220a784(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CloudAccountIdImpl.CAIDSyncJobProcessor",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10220a7b0);
  (*pcVar1)();
}



/* Entry: 10220a7e4; end: 10220a84b; -[_TtC18CloudAccountIdImpl20CAIDSyncJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010220a830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010220a834) */
/* WARNING: Removing unreachable block (ram,0x00010220ab98) */
/* WARNING: Removing unreachable block (ram,0x00010220aba4) */
/* WARNING: Removing unreachable block (ram,0x00010220aba0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10220a7e4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e65440));
  func_0x0001000834e4(param_1 + _DAT_112e65448);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e65450));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e65458));
  return;
}



/* Entry: 10220a84c; end: 10220a86b;  */

void FUN_10220a84c(void)

{
  func_0x000107c61168(&PTR_PTR_11282aae8);
  return;
}



/* Entry: 10220a86c; end: 10220a87b;  */

void FUN_10220a86c(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10220a87c; end: 10220a91b;  */

void FUN_10220a87c(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 10220a91c; end: 10220a92b;  */

void FUN_10220a91c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10220a92c; end: 10220aaa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10220a92c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x0001040a033c();
  uVar2 = 8;
  if (((uint)param_2 & 0xff) != 1) {
    uVar2 = param_1;
  }
  uStack_78 = 0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x24);
  func_0x000107c6142c(uStack_70);
  uStack_78 = 0xd000000000000022;
  uStack_70 = 0x800000010f071960;
  func_0x0001040a00cc(uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uStack_70);
  func_0x0001000d224c(&uStack_78);
  func_0x0001000a8868(&uStack_78,uStack_60);
  (**(code **)(lStack_58 + 0x38))(uVar2,uStack_60,lStack_58);
  func_0x0001000834e4(&uStack_78);
  puVar1 = &UNK_1104e4ad0;
  func_0x000107c613fc(&UNK_1104e4ad0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = uVar2;
  func_0x000107c61174();
  func_0x000107c6157c(param_4);
  uVar2 = 4;
  func_0x0001001ca524(4,0,0x5c,4,0,0,&UNK_10da702d0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return 0;
}



/* Entry: 10220aaa4; end: 10220ab1b;  */

void FUN_10220aaa4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x200;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10220ab1c;
  plVar5[0x38] = lVar2;
  plVar5[0x39] = lVar4;
  plVar5[0x36] = lVar1;
  plVar5[0x37] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10220a154,0,0);
  return;
}



/* Entry: 10220ab1c; end: 10220ab97;  */

void FUN_10220ab1c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010220ab54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10220ab98; end: 10220aca7;  */

void FUN_10220ab98(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)();
  return;
}



/* Entry: 10220aca8; end: 10220ace7;  */

void FUN_10220aca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e65498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da7033c;
  func_0x000107c61520(&UNK_10da7033c,&UNK_1104e4b68);
  puRam0000000112e65498 = puVar1;
  return;
}



/* Entry: 10220ace8; end: 10220ae43;  */

void FUN_10220ace8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar5 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c453e4();
  func_0x000107c56330();
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x0001000d224c(&puStack_80);
  func_0x0001000a8868(&puStack_80,puStack_68);
  func_0x000107c605b0();
  func_0x0001000834e4(&puStack_80);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100ef35e4;
  puStack_68 = &UNK_1104e4bd8;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c3d7c4(puVar3);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(ppuVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 10220ae44; end: 10220b1df;  */

undefined1  [16] FUN_10220ae44(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_80;
  long lStack_78;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0x414e455f44494143;
  func_0x000107c5fadc(0x414e455f44494143,0xec00000044454c42);
  uVar3 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)uVar3 == 0) {
    func_0x0001000d224c(&uStack_98);
    func_0x0001000a8868(&uStack_98,uStack_80);
    (**(code **)(lStack_78 + 0x30))(param_2,uStack_80,lStack_78);
    func_0x0001000834e4(&uStack_98);
    puVar8 = (undefined8 *)0x0;
    uVar7 = 0xe000000000000000;
    goto LAB_10220b118;
  }
  func_0x000107c3de48();
  func_0x000107c61180();
  uVar4 = 0x800000010f0719b0;
  uVar2 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0719b0);
  uVar3 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar2);
  if ((((int)uVar3 != 0) && (param_2 != 7)) && (param_2 != 0)) {
    uVar7 = 0xe000000000000000;
    uStack_98 = 0;
    uStack_90 = 0xe000000000000000;
    func_0x000107c602fc(0x26);
    func_0x000107c6142c(uStack_90);
    uStack_98 = 0xd000000000000024;
    uStack_90 = 0x800000010f0719d0;
    func_0x0001040a00cc(param_2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uStack_90);
    func_0x0001000d224c(&uStack_98);
    func_0x0001000a8868(&uStack_98,uStack_80);
    (**(code **)(lStack_78 + 0x40))(param_2,uStack_80,lStack_78);
    func_0x0001000834e4(&uStack_98);
    puVar8 = (undefined8 *)0x0;
    goto LAB_10220b118;
  }
  uVar9 = 0xee00646961632e63;
  puVar10 = (undefined8 *)0x6d65732e70616e73;
  func_0x000107c31808();
  func_0x0001000d224c(&uStack_98);
  lVar1 = lStack_78;
  uVar7 = uStack_80;
  func_0x0001000a8868(&uStack_98,uStack_80);
  (**(code **)(lVar1 + 0x40))(0x6d65732e70616e73,0xee00646961632e63,uVar7,lVar1);
  puVar8 = &uStack_98;
  uVar7 = uVar9;
  func_0x0001000834e4(puVar8);
  if (uVar9 == 0) {
LAB_10220b070:
    (**(code **)(unaff_x20 + 0x20))();
    func_0x0001000d224c(&uStack_98);
    lVar1 = lStack_78;
    uVar9 = uStack_80;
    func_0x0001000a8868(&uStack_98,uStack_80);
    pcVar5 = *(code **)(lVar1 + 0x80);
    func_0x000107c61434(uVar7);
    (*pcVar5)(puVar8,uVar7,0x6d65732e70616e73,0xee00646961632e63,uVar9,lVar1);
    func_0x000107c6142c(uVar7);
    func_0x0001000834e4(&uStack_98);
    func_0x0001000d224c(&uStack_98);
    func_0x0001000a8868(&uStack_98,uStack_80);
    pcVar5 = *(code **)(lStack_78 + 0x10);
  }
  else {
    uVar7 = (ulong)puVar10 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar7 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar7 == 0) {
      func_0x000107c6142c(uVar9);
      func_0x0001000d224c(&uStack_98);
      lVar1 = lStack_78;
      uVar7 = uStack_80;
      func_0x0001000a8868(&uStack_98,uStack_80);
      (**(code **)(lVar1 + 0x28))(param_2,uVar7,lVar1);
      puVar8 = &uStack_98;
      func_0x0001000834e4(puVar8);
      goto LAB_10220b070;
    }
    func_0x0001000d224c(&uStack_98);
    func_0x0001000a8868(&uStack_98,uStack_80);
    pcVar5 = *(code **)(lStack_78 + 8);
    uVar7 = uVar9;
    puVar8 = puVar10;
  }
  (*pcVar5)(param_1,param_2,uStack_80,lStack_78);
  func_0x0001000834e4(&uStack_98);
LAB_10220b118:
  auVar11._8_8_ = uVar7;
  auVar11._0_8_ = puVar8;
  return auVar11;
}



/* Entry: 10220b1e0; end: 10220b22f;  */

void FUN_10220b1e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8;
  func_0x000107c61168();
  func_0x000107c41628();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_10220b398();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1104e4c50;
  *param_1 = puVar1;
  return;
}



/* Entry: 10220b230; end: 10220b2bf;  */

undefined1  [16] FUN_10220b230(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar3 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10220b2c0; end: 10220b31f; -[_TtC18CloudAccountIdImpl11CAIDManager getCloudAccountIdWithContext:] */

void FUN_10220b2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6157c();
  FUN_10220ae44(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c5fadc(param_3,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10220b320; end: 10220b37b;  */

void FUN_10220b320(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10220b37c; end: 10220b397;  */

void FUN_10220b37c(long param_1,long param_2)

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



/* Entry: 10220b398; end: 10220b3db;  */

void FUN_10220b398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e65560 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSUbiquitousKeyValueStore_1126bd0a8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e65560 = puVar1;
  return;
}



/* Entry: 10220b3dc; end: 10220b47f;  */

/* WARNING: Possible PIC construction at 0x00010220b43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010220b440) */
/* WARNING: Removing unreachable block (ram,0x00010220b448) */
/* WARNING: Removing unreachable block (ram,0x00010220b458) */
/* WARNING: Removing unreachable block (ram,0x00010220b46c) */

void FUN_10220b3dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aa270;
  uVar2 = param_2;
  func_0x000107c610f8(PTR_PTR_1126aa270);
  func_0x000107c453e4();
  func_0x000107c5710c();
  func_0x0001040a00cc(param_2);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c59558(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10220b480; end: 10220b55f;  */

/* WARNING: Possible PIC construction at 0x00010220b4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010220b43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010220b4e4) */
/* WARNING: Removing unreachable block (ram,0x00010220b554) */
/* WARNING: Removing unreachable block (ram,0x00010220b500) */
/* WARNING: Removing unreachable block (ram,0x00010220b50c) */
/* WARNING: Removing unreachable block (ram,0x00010220b510) */
/* WARNING: Removing unreachable block (ram,0x00010220b558) */
/* WARNING: Removing unreachable block (ram,0x00010220b514) */
/* WARNING: Removing unreachable block (ram,0x00010220b51c) */
/* WARNING: Removing unreachable block (ram,0x00010220b520) */
/* WARNING: Removing unreachable block (ram,0x00010220b55c) */
/* WARNING: Removing unreachable block (ram,0x00010220b524) */
/* WARNING: Removing unreachable block (ram,0x00010220b3dc) */
/* WARNING: Removing unreachable block (ram,0x00010220b440) */
/* WARNING: Removing unreachable block (ram,0x00010220b448) */
/* WARNING: Removing unreachable block (ram,0x00010220b458) */
/* WARNING: Removing unreachable block (ram,0x00010220b46c) */

void FUN_10220b480(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  pcVar1 = param_2;
  func_0x0001040a00cc();
  func_0x000107c5fadc();
  func_0x000107c6142c(pcVar1);
  (*param_2)(uVar2,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10220b560; end: 10220b5ab;  */

void FUN_10220b560(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10220b5ac; end: 10220b64f;  */

void FUN_10220b5ac(undefined8 param_1)

{
  FUN_10220b480(param_1,&UNK_105c8a5ec,&UNK_105c8a760,0);
  return;
}



/* Entry: 10220b650; end: 10220b6a3;  */

undefined1 ** FUN_10220b650(uint param_1)

{
  undefined1 **ppuVar1;
  char *pcVar2;
  undefined1 **ppuVar3;
  undefined1 ***pppuVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long *unaff_x20;
  long *plVar9;
  undefined8 *unaff_x21;
  undefined1 **ppuStack_320;
  undefined *puStack_318;
  undefined1 **ppuStack_310;
  undefined1 **ppuStack_308;
  undefined8 **ppuStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 *puStack_2d8;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 **ppuStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 *puStack_258;
  undefined8 auStack_250 [2];
  char cStack_239;
  long lStack_238;
  undefined8 **ppuStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined8 **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined8 auStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  ppuVar6 = (undefined1 **)(ulong)(param_1 & 1);
  puVar7 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar5 = (undefined1 *)0x1;
  if (*(long *)(*unaff_x20 + 0x18) != 0) {
    plVar9 = *(long **)(*(long *)(*unaff_x20 + 0x18) + 8);
    pcVar2 = "true";
    if ((param_1 & 1) == 0) {
      pcVar2 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar2);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    ppuVar6 = (undefined1 **)&UNK_1108e2fe8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e2fe8,&uStack_70,1);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    puVar5 = (undefined1 *)puVar7;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar5 = (undefined1 *)puVar7;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x00010007e5dc(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_f0;
  puStack_78 = &UNK_105c8ac50;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar8 = puVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_d0,pcVar2);
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    func_0x00010007e1e8(&uStack_f0,auStack_d0,&lStack_b8,1);
    ppuVar3 = (undefined1 **)&UNK_1108e3038;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3038,&uStack_f0,puVar5);
    puStack_d8 = (undefined1 *)&uStack_f0;
    func_0x00010007e5dc(&puStack_d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_b9 < '\0') {
      __ZdlPv(auStack_d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar7 = &uStack_170;
  puStack_f8 = &UNK_105c8adc4;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puVar5 = puVar8;
  ppuStack_100 = &puStack_80;
  _objc_retain(ppuVar3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_150,pcVar2);
    uStack_170 = 0;
    uStack_168 = 0;
    uStack_160 = 0;
    func_0x00010007e1e8(&uStack_170,auStack_150,&lStack_138,1);
    ppuVar6 = (undefined1 **)&UNK_1108e3088;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3088,&uStack_170,puVar8);
    puStack_158 = (undefined1 *)&uStack_170;
    func_0x00010007e5dc(&puStack_158);
    puVar5 = (undefined1 *)puVar7;
    if (cStack_139 < '\0') {
      __ZdlPv(auStack_150[0]);
      puVar5 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar7 = &uStack_1f0;
  puStack_178 = &UNK_105c8af38;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar3 = ppuVar6;
  puVar8 = puVar5;
  ppuStack_180 = &ppuStack_100;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_1d0,pcVar2);
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    func_0x00010007e1e8(&uStack_1f0,auStack_1d0,&lStack_1b8,1);
    ppuVar3 = (undefined1 **)&UNK_1108e30d8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e30d8,&uStack_1f0,puVar5);
    puStack_1d8 = (undefined1 *)&uStack_1f0;
    func_0x00010007e5dc(&puStack_1d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_1b9 < '\0') {
      __ZdlPv(auStack_1d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  __Unwind_Resume();
  puVar7 = &uStack_270;
  puStack_1f8 = &UNK_105c8b0ac;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar6 = ppuVar3;
  puVar5 = puVar8;
  ppuStack_200 = &ppuStack_180;
  _objc_retain(ppuVar3);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar3);
    if (ppuVar3 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar3;
      _objc_retainAutorelease(ppuVar3);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar3);
    func_0x00010002b838(auStack_250,pcVar2);
    uStack_270 = 0;
    uStack_268 = 0;
    uStack_260 = 0;
    func_0x00010007e1e8(&uStack_270,auStack_250,&lStack_238,1);
    ppuVar6 = (undefined1 **)&UNK_1108e3128;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3128,&uStack_270,puVar8);
    puStack_258 = (undefined1 *)&uStack_270;
    func_0x00010007e5dc(&puStack_258);
    puVar5 = (undefined1 *)puVar7;
    if (cStack_239 < '\0') {
      __ZdlPv(auStack_250[0]);
      puVar5 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar3);
  _objc_release(ppuVar3);
  __Unwind_Resume();
  puVar7 = &uStack_2f0;
  puStack_278 = &UNK_105c8b220;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar5;
  ppuStack_280 = &ppuStack_200;
  _objc_retain(ppuVar6);
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar9 = (long *)ppuVar1[1];
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined1 **)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = (char *)ppuVar6;
      _objc_retainAutorelease(ppuVar6);
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_2d0,pcVar2);
    uStack_2f0 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x00010007e1e8(&uStack_2f0,auStack_2d0,&lStack_2b8,1);
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_1108e3178,&uStack_2f0,puVar5);
    puStack_2d8 = (undefined1 *)&uStack_2f0;
    func_0x00010007e5dc(&puStack_2d8);
    puVar8 = (undefined1 *)puVar7;
    if (cStack_2b9 < '\0') {
      __ZdlPv(auStack_2d0[0]);
      puVar8 = (undefined1 *)puVar7;
    }
  }
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
    return ppuVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  _objc_release(ppuVar6);
  ppuVar3 = ppuVar1;
  __Unwind_Resume();
  pppuVar4 = &ppuStack_320;
  puStack_2f8 = &UNK_105c8b394;
  ppuStack_310 = ppuVar1;
  ppuStack_308 = ppuVar6;
  ppuStack_300 = &ppuStack_280;
  _objc_retain(puVar8);
  puStack_318 = PTR_PTR_1126ecae8;
  ppuStack_320 = ppuVar3;
  _objc_msgSendSuper2(&ppuStack_320,PTR_s_init_1125d9248);
  if (pppuVar4 != (undefined1 ***)0x0) {
    _objc_retain(puVar8);
    puVar5 = (undefined1 *)pppuVar4[1];
    pppuVar4[1] = (undefined1 **)puVar8;
    _objc_release(puVar5);
  }
  _objc_release(puVar8);
  return (undefined1 **)pppuVar4;
}



/* Entry: 10220b6a4; end: 10220b6fb;  */

void FUN_10220b6a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
  func_0x0001040a00cc();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  (*param_4)(uVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



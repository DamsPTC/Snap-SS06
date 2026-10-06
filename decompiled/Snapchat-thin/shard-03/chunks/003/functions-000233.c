/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10277e6e4; end: 10277e777;  */

void FUN_10277e6e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277e778,uVar2,uVar3);
  return;
}



/* Entry: 10277e778; end: 10277e817;  */

void FUN_10277e778(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0xf0) = param_1;
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000020;
  func_0x000100029b28(0xd000000000000020,0x800000010f0bada0);
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  func_0x000107c61170(uVar2);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10277e818;
  lVar5 = *(long *)(unaff_x22 + 0xd0);
  lVar6 = *(long *)(unaff_x22 + 0xc0);
  plVar4[0xe] = *(long *)(unaff_x22 + 200);
  plVar4[0xf] = lVar5;
  plVar4[0xd] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar6;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar5;
  lVar5 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar4[0x11] = lVar6;
  plVar4[0x12] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027820dc,lVar6,lVar5);
  return;
}



/* Entry: 10277e818; end: 10277e873;  */

void FUN_10277e818(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x108) = param_1;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10277e874;
  }
  else {
    pcVar1 = FUN_10277ea74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0xe0),*(undefined8 *)(lVar2 + 0xe8));
  return;
}



/* Entry: 10277e874; end: 10277ea73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277e874(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x110);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c5fd64();
  if (lVar7 != 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x108));
    puVar1 = *(undefined8 **)(unaff_x22 + 0xf0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
    func_0x000107c61428(puVar1,unaff_x22 + 0x90,0,0);
    uVar3 = *puVar1;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar6);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010277e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0xd0) + 0x60);
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xc0) + _DAT_112ebd9d0);
  func_0x000107c5fb78(*puVar1,puVar1[1]);
  uVar6 = 0xd000000000000018;
  uVar9 = *(undefined8 *)(lVar7 + _DAT_112ebd440);
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0bad20);
  func_0x000107c56bcc(uVar9);
  func_0x000107c61170(uVar6);
  lVar7 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61534();
  *(undefined8 *)(lVar7 + 0x18) = 2;
  *(undefined8 *)(lVar7 + 0x10) = 1;
  ppuVar4 = &PTR____CFConstantStringClassReference_110f0c0b8;
  func_0x000107c5faec();
  *(undefined8 *)(lVar7 + 0x20) = ppuVar4;
  *(undefined **)(lVar7 + 0x48) = PTR___sSSN_11034da80;
  *(long *)(lVar7 + 0x28) = lVar5;
  *(undefined8 *)(lVar7 + 0x30) = 0xd000000000000018;
  *(undefined8 *)(lVar7 + 0x38) = 0x800000010f0bad20;
  lVar5 = lVar7;
  func_0x000100214a84(lVar7);
  func_0x000107c61588(lVar7);
  FUN_1027848a4((undefined8 *)(lVar7 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61170(uVar8);
  func_0x000107c61428(puVar2,unaff_x22 + 0xa8,0,0);
  uVar6 = *puVar2;
  func_0x000107c61174(uVar6);
  func_0x000100069b5c(uVar3);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010277ea70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5);
  return;
}



/* Entry: 10277ea74; end: 10277eaeb;  */

void FUN_10277ea74(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xd8));
  puVar1 = *(undefined8 **)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61428(puVar1,unaff_x22 + 0x78,0,0);
  uVar3 = *puVar1;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010277eae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277eaec; end: 10277eb97;  */

void FUN_10277eaec(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  long in_x5;
  long in_x6;
  long in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x20) = in_x4;
  lVar2 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x28) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  uVar4 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  plVar5 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10277eb98;
  plVar5[6] = in_x7;
  plVar5[7] = in_x5;
  plVar5[5] = in_x6;
  lVar6 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar6;
  func_0x000107c5fce8();
  plVar5[8] = lVar2;
  lVar2 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar5[9] = lVar6;
  plVar5[10] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ee0c,lVar6,lVar2);
  return;
}



/* Entry: 10277eb98; end: 10277ec73;  */

void FUN_10277eb98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x50));
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x60) = param_1;
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = (code *)0x102784f54;
  }
  else {
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277ec74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 10277ec74; end: 10277ed77;  */

void FUN_10277ec74(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  func_0x000107c614b0(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar1,(undefined8 *)(unaff_x22 + 0x10),uVar2,uVar3,6);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  if ((int)uVar1 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x18);
    uVar1 = uVar2;
    func_0x000107c5ed2c(uVar2);
    uVar3 = uVar1;
    FUN_1027841cc();
    func_0x000107c61170(uVar1);
    (*UNRECOVERED_JUMPTABLE)(uVar3,0);
    func_0x000107c6142c(uVar3);
    func_0x000107c614ac(uVar2);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61654();
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277ed74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10277ed78; end: 10277ee0b;  */

void FUN_10277ed78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ee0c,uVar2,uVar3);
  return;
}



/* Entry: 10277ee0c; end: 10277f083;  */

void FUN_10277ee0c(undefined8 param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  FUN_10277c518();
  if (((param_2 & 1) != 0) && (func_0x000102787a38(), (param_2 & 1) != 0)) {
    uVar3 = *(ulong *)(unaff_x22 + 0x30);
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x10);
    func_0x000102c0e130();
    func_0x000107c61170(uVar10);
    uVar2 = param_2;
    func_0x000107c614f0();
    (**(code **)(param_3 + 0x10))(uVar3,uVar2,param_3);
    func_0x000107c615e8();
    if ((uVar3 & 1) != 0) {
      func_0x000100083b20(unaff_x22 + 0x18);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000102c0e130();
      uVar3 = uVar2;
      func_0x000107c61170(uVar10);
      *(ulong *)(unaff_x22 + 0x58) = param_2;
      FUN_1027ad598();
      if (uVar3 >> 0x3c < 0xf) {
        uVar4 = param_2;
        func_0x000107c614f0();
        (**(code **)(uVar2 + 8))();
        if ((uVar4 & 1) != 0) {
          uVar12 = *(undefined8 *)(unaff_x22 + 0x30);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
          func_0x000100083b20(unaff_x22 + 0x20);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x20);
          uVar5 = uVar11;
          func_0x000107c42d48(uVar11);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          uVar11 = uVar5;
          func_0x000107c42428(uVar5);
          func_0x000107c61180();
          func_0x000107c615e8(uVar5);
          func_0x000100de78a0(uVar10,uVar3);
          func_0x000107c615f0(uVar11);
          func_0x000107c615f0(param_2);
          FUN_102784a68(uVar12);
          FUN_102c0db78(0);
          func_0x000107c610f8();
          uVar5 = uVar10;
          func_0x000102c0da28(param_1,uVar10,uVar3,uVar11,param_2,uVar2);
          uVar12 = uVar5;
          FUN_102784b68();
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar11);
          func_0x0001000b44c0(uVar10,uVar3);
          func_0x000107c615e8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010277f00c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(unaff_x22 + 8))(uVar12);
          return;
        }
        func_0x0001000b44c0(uVar10,uVar3);
      }
      plVar6 = (long *)0x230;
      func_0x000107c615b8();
      pcVar8 = FUN_10277f084;
      *(long **)(unaff_x22 + 0x60) = plVar6;
      goto LAB_10277f028;
    }
  }
  plVar6 = (long *)0x230;
  func_0x000107c615b8();
  pcVar8 = FUN_10277f134;
  *(long **)(unaff_x22 + 0x78) = plVar6;
LAB_10277f028:
  *plVar6 = unaff_x22;
  plVar6[1] = (long)pcVar8;
  lVar7 = *(long *)(unaff_x22 + 0x38);
  lVar9 = *(long *)(unaff_x22 + 0x28);
  plVar6[0x39] = *(long *)(unaff_x22 + 0x30);
  plVar6[0x3a] = lVar7;
  plVar6[0x38] = lVar9;
  lVar9 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar7 = lVar9;
  func_0x000107c5fce8();
  plVar6[0x3b] = lVar7;
  lVar7 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[0x3c] = lVar9;
  plVar6[0x3d] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102780c8c,lVar9,lVar7);
  return;
}



/* Entry: 10277f084; end: 10277f0ef;  */

void FUN_10277f084(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x70) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_10277f0f0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = (code *)0x10277f20c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277f0f0; end: 10277f133;  */

void FUN_10277f0f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 10277f134; end: 10277f19f;  */

void FUN_10277f134(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x88) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = FUN_10277f1a0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x48);
    uVar3 = *(undefined8 *)(lVar4 + 0x50);
    pcVar1 = (code *)0x10277f1d8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277f1a0; end: 10277f247;  */

void FUN_10277f1a0(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010277f1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 10277f248; end: 10277f2ab;  */

void FUN_10277f248(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar4 + 0x8e) = *(undefined1 *)(lVar4 + 0x8c);
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_10277f2dc;
  }
  else {
    *(long *)(lVar4 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x50);
    uVar3 = *(undefined8 *)(lVar4 + 0x58);
    pcVar1 = FUN_10277f3e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277f2ac; end: 10277f2db;  */

void FUN_10277f2ac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 == 0) {
    *(undefined1 *)(unaff_x22 + 0x8e) = *(undefined1 *)(unaff_x22 + 0x8d);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_10277f2dc;
  }
  else {
    *(long *)(unaff_x22 + 0x80) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    pcVar1 = FUN_10277f3e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10277f2dc; end: 10277f3df;  */

void FUN_10277f2dc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x8e) == '\x01') {
    lVar1 = *(long *)(unaff_x22 + 0x70);
    uVar2 = *(ulong *)(unaff_x22 + 0x60);
    func_0x000107c5fd8c(uVar2,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                        PTR___ss5ErrorWS_11034ee10);
    if ((uVar2 & 1) != 0) {
      if (lVar1 != 0) {
        func_0x000107c61654();
      }
                    /* WARNING: Could not recover jumptable at 0x00010277f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 0x70) = lVar1;
  }
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar3 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar3;
    uVar4 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10277f248;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_10277f2ac,unaff_x22 + 0x10);
  return;
}



/* Entry: 10277f3e0; end: 10277f4eb;  */

void FUN_10277f3e0(void)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x80);
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    func_0x000107c614ac(lVar4);
    lVar4 = *(long *)(unaff_x22 + 0x70);
  }
  uVar1 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c5fd8c(uVar1,PTR___sytN_11034f1b0 + 8,*(undefined8 *)(unaff_x22 + 0x68),
                      PTR___ss5ErrorWS_11034ee10);
  if ((uVar1 & 1) != 0) {
    if (lVar4 != 0) {
      func_0x000107c61654();
    }
                    /* WARNING: Could not recover jumptable at 0x00010277f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x70) = lVar4;
  if (*(int *)(unaff_x22 + 0x88) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScg4next9isolationxSgScA_pSgYi_tYaKFTu_11034fe68 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar2;
    uVar3 = 0x112dec560;
    func_0x0001000285a8(0x112dec560,&UNK_10d9b8310);
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10277f248;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScg4next9isolationxSgScA_pSgYi_tYaKF_11034fe60)
              (unaff_x22 + 0x8c,*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
               uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_taskGroup_wait_next_throwing_1103500d0)
            (unaff_x22 + 0x8d,**(undefined8 **)(unaff_x22 + 0x48),FUN_10277f2ac,unaff_x22 + 0x10);
  return;
}



/* Entry: 10277f4ec; end: 10277f583;  */

void FUN_10277f4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x100) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x120) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277f584,uVar2,uVar3);
  return;
}



/* Entry: 10277f584; end: 10277f693;  */

void FUN_10277f584(double param_1,undefined8 param_2,double param_3,double param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  func_0x0001048580f8(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x00010278471c(unaff_x22 + 0x60,uVar2);
  puVar4 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar5 = puVar4;
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar5);
  func_0x000107c4c194(puVar4);
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar4);
  piVar7 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x128) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10277f694;
                    /* WARNING: Could not recover jumptable at 0x00010277f690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (param_3 * param_1,param_4 * param_1,*(undefined8 *)(unaff_x22 + 0xf0),uVar2,lVar3);
  return;
}



/* Entry: 10277f694; end: 10277f6ef;  */

void FUN_10277f694(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x130) = param_1;
  *(long *)(lVar2 + 0x138) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x128));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10277f6f0;
  }
  else {
    pcVar1 = FUN_10277f994;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x118),*(undefined8 *)(lVar2 + 0x120));
  return;
}



/* Entry: 10277f6f0; end: 10277f993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10277f6f0(void)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x138);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  FUN_1027846b8(unaff_x22 + 0x60);
  func_0x000107c5fd64();
  if (lVar5 == 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x108) + 0x60);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xe8) + _DAT_112ebd9d0);
    func_0x000107c5fb78(*puVar1,puVar1[1]);
    uVar6 = 0xd00000000000001f;
    uVar7 = *(undefined8 *)(lVar5 + _DAT_112ebd440);
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bace0);
    func_0x000107c56bcc(uVar7);
    func_0x000107c61170(uVar6);
    lVar5 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0c078;
    func_0x000107c5faec();
    *(undefined8 *)(lVar5 + 0x20) = ppuVar2;
    *(undefined **)(lVar5 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar5 + 0x28) = lVar3;
    *(undefined8 *)(lVar5 + 0x30) = 0xd00000000000001f;
    *(undefined8 *)(lVar5 + 0x38) = 0x800000010f0bace0;
    lVar3 = lVar5;
    func_0x000100214a84();
    func_0x000107c61588(lVar5);
    uVar6 = 0x112d4b5f0;
    FUN_1027848a4((undefined8 *)(lVar5 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0bc38;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(lVar3);
    func_0x000107c46ed0();
    lVar5 = 0;
    FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined **)(unaff_x22 + 0xa8) = puVar4;
    *(long *)(unaff_x22 + 0xc0) = lVar5;
    if (lVar5 == 0) {
      FUN_1027848a4(unaff_x22 + 0xa8,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(unaff_x22 + 200,ppuVar2,uVar6);
      func_0x000107c6142c(uVar6);
      FUN_1027848a4(unaff_x22 + 200,0x112d387f8,&UNK_10d902650);
      func_0x000107c6142c(lVar3);
    }
    else {
      func_0x000100102924(unaff_x22 + 0xa8,unaff_x22 + 0x88);
      lVar5 = lVar3;
      func_0x000107c61558(lVar3);
      func_0x0001001029e8(unaff_x22 + 0x88,ppuVar2,uVar6,lVar5);
      func_0x000107c6142c(uVar6);
      func_0x000107c6142c(lVar3);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    (**(code **)(unaff_x22 + 0xf8))(lVar3,0);
    func_0x000107c6142c(lVar3);
    func_0x000107c61170(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x130));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10277f994; end: 10277f9cf;  */

void FUN_10277f994(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x110));
  FUN_1027846b8(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010277f9cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277f9d0; end: 10277faa7;  */

void FUN_10277f9d0(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x80) = param_4;
  *(long *)(unaff_x22 + 0x88) = unaff_x20;
  *(long *)(unaff_x22 + 0x70) = param_2;
  *(long *)(unaff_x22 + 0x78) = param_3;
  lVar2 = 0x112ebd568;
  func_0x0001000285a8(0x112ebd568,&UNK_10dad7dc8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  uVar5 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar5;
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10277faa8;
  plVar6[0x14] = param_4;
  plVar6[0x15] = unaff_x20;
  plVar6[0x12] = param_2;
  plVar6[0x13] = param_3;
  plVar6[0x11] = param_1;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar7;
  func_0x000107c5fce8();
  plVar6[0x16] = lVar2;
  lVar2 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar6[0x17] = lVar7;
  plVar6[0x18] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ff94,lVar7,lVar2);
  return;
}



/* Entry: 10277faa8; end: 10277fb6b;  */

void FUN_10277faa8(void)

{
  undefined *puVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar4 = *unaff_x22;
  lVar6 = *unaff_x22;
  *(long *)(lVar4 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb8));
  if (unaff_x20 == 0) {
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(lVar4 + 200) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_10277fb6c;
    lVar6 = *(long *)(lVar4 + 0xa0);
    lVar5 = *(long *)(lVar4 + 0x88);
    plVar2[10] = *(long *)(lVar4 + 0x70);
    plVar2[0xb] = lVar5;
    plVar2[9] = lVar6;
    lVar6 = 0;
    func_0x000107c5fcec();
    puVar1 = PTR___sScMMa_11034fc70;
    plVar2[0xc] = lVar6;
    lVar4 = lVar6;
    func_0x000107c5fce8();
    plVar2[0xd] = lVar4;
    lVar4 = 0x112d45220;
    FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
    plVar2[0xe] = lVar4;
    func_0x000107c5fca8();
    plVar2[0xf] = lVar6;
    plVar2[0x10] = lVar4;
    pcVar3 = FUN_102780368;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0xa8);
    lVar4 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(lVar6,lVar4);
    pcVar3 = FUN_10277fe5c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar6,lVar4);
  return;
}



/* Entry: 10277fb6c; end: 10277fc57;  */

void FUN_10277fb6c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 200));
  uVar2 = *(undefined8 *)(lVar4 + 0xa8);
  if (unaff_x20 == 0) {
    *(byte *)(lVar4 + 0xdc) = param_1 & 1;
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(*(long *)(lVar4 + 0x90) + 0x30);
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277fc58;
  }
  else {
    uVar1 = 0x112d45220;
    FUN_102784678(0x112d45220,PTR___sScMMa_11034fc70,PTR___sScMScAsMc_11034fc78);
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277feac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 10277fc58; end: 10277fe5b;  */

void FUN_10277fc58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x22;
  
  iVar4 = *(int *)(unaff_x22 + 0xd8);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xdc);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  *(undefined1 *)(lVar6 + iVar4) = uVar3;
  FUN_102784d4c(lVar6,uVar1,0x112ebd568,&UNK_10dad7dc8);
  func_0x000107c5ed90();
  lVar5 = lVar6;
  func_0x000102784090();
  func_0x000107c61170(lVar6);
  lVar6 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar6 + -8) + 8))(uVar1,lVar6);
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0bc38;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c61434(lVar5);
  func_0x000107c46ed0();
  lVar9 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar10 = (undefined8 *)(unaff_x22 + 0x30);
  *puVar10 = puVar8;
  *(long *)(unaff_x22 + 0x48) = lVar9;
  if (lVar9 == 0) {
    FUN_1027848a4(puVar10,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(unaff_x22 + 0x50,ppuVar7,lVar6);
    func_0x000107c6142c(lVar6);
    FUN_1027848a4(unaff_x22 + 0x50,0x112d387f8,&UNK_10d902650);
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000100102924(puVar10,unaff_x22 + 0x10);
    lVar9 = lVar5;
    func_0x000107c61558(lVar5);
    func_0x0001001029e8(unaff_x22 + 0x10,ppuVar7,lVar6,lVar9);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(unaff_x22 + 0x78))(lVar5,0);
  func_0x000107c6142c(lVar5);
  FUN_1027848a4(uVar2,0x112ebd568,&UNK_10dad7dc8);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277fe58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277fe5c; end: 10277feab;  */

void FUN_10277fe5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277fea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277feac; end: 10277fefb;  */

void FUN_10277feac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010277fef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277fefc; end: 10277ff93;  */

void FUN_10277fefc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277ff94,uVar2,uVar3);
  return;
}



/* Entry: 10277ff94; end: 10278008b;  */

void FUN_10277ff94(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  double dVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x90);
  func_0x0001048580f8(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar3 = *(long *)(unaff_x22 + 0x80);
  func_0x00010278471c(unaff_x22 + 0x60,uVar2);
  func_0x000107c4e7a8();
  if (lVar6 < 1) {
    dVar8 = 1066.6666666666665;
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x90);
    lVar6 = lVar7;
    func_0x000107c4e798(lVar7);
    func_0x000107c4e7a8(lVar7);
    dVar8 = ((double)lVar6 / (double)lVar7) * 600.0;
  }
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10278008c;
                    /* WARNING: Could not recover jumptable at 0x000102780088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (0x4082c00000000000,dVar8,*(undefined8 *)(unaff_x22 + 0x90),uVar2,lVar3);
  return;
}



/* Entry: 10278008c; end: 1027800f3;  */

void FUN_10278008c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0xd0) = param_1;
  *(long *)(lVar4 + 0xd8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 200));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    pcVar1 = FUN_1027800f4;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0xb8);
    uVar3 = *(undefined8 *)(lVar4 + 0xc0);
    pcVar1 = FUN_102780290;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1027800f4; end: 10278028f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027800f4(void)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_1027846b8(unaff_x22 + 0x60);
  func_0x000107c5fd64();
  if (lVar6 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x98);
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0xa8) + 0x60);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x88) + _DAT_112ebd9d0);
    func_0x000107c5fb78(*puVar1,puVar1[1]);
    uVar2 = 0xd000000000000018;
    uVar7 = *(undefined8 *)(lVar6 + _DAT_112ebd440);
    func_0x000107c5fadc(0xd000000000000018,0x800000010f0bad20);
    func_0x000107c56bcc(uVar7);
    func_0x000107c61170(uVar2);
    lVar6 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar6 + 0x18) = 2;
    *(undefined8 *)(lVar6 + 0x10) = 1;
    ppuVar3 = &PTR____CFConstantStringClassReference_110f0c0b8;
    func_0x000107c5faec();
    *(undefined8 *)(lVar6 + 0x20) = ppuVar3;
    *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar6 + 0x28) = lVar4;
    *(undefined8 *)(lVar6 + 0x30) = 0xd000000000000018;
    *(undefined8 *)(lVar6 + 0x38) = 0x800000010f0bad20;
    lVar4 = lVar6;
    func_0x000100214a84(lVar6);
    func_0x000107c61588(lVar6);
    FUN_1027848a4((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    (*UNRECOVERED_JUMPTABLE)(lVar4,0);
    func_0x000107c6142c(lVar4);
    func_0x000107c61170(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd0));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010278028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102780290; end: 1027802cb;  */

void FUN_102780290(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_1027846b8(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x0001027802c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027802cc; end: 102780367;  */

void FUN_1027802cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102780368,uVar2,uVar3);
  return;
}



/* Entry: 102780368; end: 1027803f7;  */

void FUN_102780368(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001048580f8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x00010278471c(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1027803f8;
                    /* WARNING: Could not recover jumptable at 0x0001027803f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x50),uVar2,lVar3);
  return;
}



/* Entry: 1027803f8; end: 102780453;  */

void FUN_1027803f8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x90) = param_1;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102780454;
  }
  else {
    pcVar1 = FUN_102780bb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x78),*(undefined8 *)(lVar2 + 0x80));
  return;
}



/* Entry: 102780454; end: 1027805bf;  */

void FUN_102780454(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  FUN_1027846b8(unaff_x22 + 0x10);
  func_0x000107c5fd64();
  if (lVar6 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001027804b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = 0x112ebd570;
  func_0x0001000285a8(0x112ebd570,&UNK_10dad7de0);
  func_0x000107c5f05c();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar5;
  uVar2 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  if (iVar1 != 0) {
    plVar3 = (long *)(ulong)*(uint *)(
                                     PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlFTu_11034d5c0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1027805c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb8984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___sSo29AVAsynchronousKeyValueLoadingP12AVFoundationE4load_9isolationqd__AC15AVAsyncPropertyCyxqd__G_ScA_pSgYitYaKlF_11034d5b8
    )(plVar3,unaff_x22 + 0x38,uVar5,uVar2,uVar4);
    return;
  }
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102780654;
                    /* WARNING: Could not recover jumptable at 0x0001027805bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_102782af8(uVar5,uVar2,uVar4);
  return;
}



/* Entry: 1027805c0; end: 102780653;  */

void FUN_1027805c0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb0));
  uVar2 = *(undefined8 *)(lVar4 + 0xa0);
  uVar3 = *(undefined8 *)(lVar4 + 0xa8);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1027806f0;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_102780a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 102780654; end: 1027806ef;  */

void FUN_102780654(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0xb8));
  uVar2 = *(undefined8 *)(lVar4 + 0xa0);
  uVar3 = *(undefined8 *)(lVar4 + 0xa8);
  if (unaff_x20 == 0) {
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_1027806f0;
  }
  else {
    func_0x000107c614ac();
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar4 + 0x78);
    uVar3 = *(undefined8 *)(lVar4 + 0x80);
    pcVar1 = FUN_102780a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1027806f0; end: 102780a0f;  */

void FUN_1027806f0(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puStack_68;
  
  puVar10 = *(undefined1 **)(unaff_x22 + 200);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  lVar14 = *(long *)(unaff_x22 + 0xc0);
  func_0x000107c5fd64();
  uVar16 = *(ulong *)(unaff_x22 + 0x90);
  if (lVar14 == 0) {
    puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
    func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
    func_0x000107c6148c(uVar16,puVar1);
    uVar17 = *(ulong *)(unaff_x22 + 0x90);
    if (uVar16 == 0) {
      func_0x000107c6142c();
      func_0x0001027836cc();
      func_0x000107c613f8(&UNK_1105473e0,puVar10,0,0);
      *puVar10 = 1;
      func_0x000107c61654();
    }
    else {
      func_0x000107c61174(uVar17);
      func_0x000107c61174();
      func_0x000100083b20(unaff_x22 + 0x40);
      puVar13 = *(undefined1 **)(unaff_x22 + 0x40);
      puVar19 = puVar13;
      func_0x000107c3fa04();
      func_0x000107c61180();
      func_0x000107c61170(puVar13);
      func_0x0001044d77a8(0);
      uVar2 = uVar16;
      puVar13 = puVar19;
      func_0x0001044d6bf8();
      func_0x000107c615e8(puVar19);
      func_0x000107c61170(uVar17);
      uVar17 = *(ulong *)(unaff_x22 + 0x90);
      if ((uVar2 & 1) == 0) {
        func_0x000107c61170(uVar17);
        if (puVar10 == (undefined1 *)0x0) {
          bVar12 = false;
        }
        else {
          puVar19 = (undefined1 *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((ulong)puVar10 >> 0x3e == 0) {
            puStack_68 = *(undefined1 **)(puVar19 + 0x10);
          }
          else {
            puStack_68 = puVar10;
            if (-1 < (long)puVar10) {
              puStack_68 = puVar19;
            }
            func_0x000107c60480();
          }
          puVar18 = (undefined1 *)0x0;
          puVar9 = *(undefined1 **)PTR__AVMediaTypeAudio_110348070;
          do {
            bVar12 = puStack_68 != puVar18;
            if (puStack_68 == puVar18) break;
            if (((ulong)puVar10 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar19 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
                UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1027809fc);
                (*UNRECOVERED_JUMPTABLE)();
              }
              puVar3 = *(undefined1 **)(puVar10 + (long)puVar18 * 8 + 0x20);
              func_0x000107c61174();
              puVar8 = puVar13;
            }
            else {
              puVar3 = puVar18;
              puVar8 = puVar10;
              func_0x000100f95fe8();
            }
            if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1027809f8);
              (*UNRECOVERED_JUMPTABLE)();
            }
            puVar4 = puVar3;
            func_0x000107c4ca5c();
            func_0x000107c61180();
            puVar5 = puVar4;
            func_0x000107c5faec();
            puVar6 = puVar9;
            puVar7 = puVar8;
            func_0x000107c5faec();
            if ((puVar5 == puVar6) && (puVar8 == puVar7)) {
              func_0x000107c6142c(puVar7);
              func_0x000107c6142c(puVar8);
              func_0x000107c61170(puVar3);
              func_0x000107c61170(puVar4);
              bVar12 = true;
              break;
            }
            puVar13 = puVar8;
            func_0x000107c605b8(puVar5,puVar8,puVar6,puVar7,0);
            func_0x000107c6142c(puVar7);
            func_0x000107c6142c(puVar8);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar4);
            puVar18 = puVar18 + 1;
          } while (((ulong)puVar5 & 1) == 0);
          func_0x000107c6142c(puVar10);
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x48);
        func_0x000107c3abfc(uVar16);
        func_0x000107c61180();
        func_0x000107c5edb4(uVar15);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar16);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_10278074c;
      }
      func_0x000107c6142c(puVar10);
      FUN_102783f34();
      func_0x000107c61654();
      func_0x000107c61170(uVar17);
    }
  }
  else {
    func_0x000107c6142c(puVar10);
    uVar17 = uVar16;
  }
  func_0x000107c61170(uVar17);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  bVar12 = false;
LAB_10278074c:
                    /* WARNING: Could not recover jumptable at 0x000102780768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(bVar12);
  return;
}



/* Entry: 102780a10; end: 102780bb7;  */

/* WARNING: Removing unreachable block (ram,0x000102780a44) */

void FUN_102780a10(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c5fd64();
  puVar5 = *(undefined1 **)(unaff_x22 + 0x90);
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  func_0x000107c61168(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
  func_0x000107c6148c(puVar5,puVar1);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c6142c();
    func_0x0001027836cc();
    func_0x000107c613f8(&UNK_1105473e0,puVar5,0,0);
    *puVar5 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61174(uVar6);
    func_0x000107c61174();
    func_0x000100083b20(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = uVar3;
    func_0x000107c3fa04(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x0001044d77a8(0);
    puVar2 = puVar5;
    func_0x0001044d6bf8(puVar5,uVar4);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    if (((ulong)puVar2 & 1) == 0) {
      func_0x000107c61170(uVar6);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      func_0x000107c3abfc(puVar5);
      func_0x000107c61180();
      func_0x000107c5edb4(uVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar5);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_102780a60;
    }
    func_0x000107c6142c(0);
    FUN_102783f34();
    func_0x000107c61654();
    func_0x000107c61170(uVar6);
  }
  func_0x000107c61170(uVar6);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102780a60:
                    /* WARNING: Could not recover jumptable at 0x000102780a74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}



/* Entry: 102780bb8; end: 102780bf7;  */

void FUN_102780bb8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  FUN_1027846b8(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102780bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102780bf8; end: 102780c8b;  */

void FUN_102780bf8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1d0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102780c8c,uVar2,uVar3);
  return;
}



/* Entry: 102780c8c; end: 1027811ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102780c8c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x1f0) = param_1;
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar9 = 0x800000010f0bad40;
  uVar3 = 0xd00000000000002d;
  func_0x000100029b28();
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar3;
  func_0x000107c61170(uVar2);
  func_0x000100083b20(unaff_x22 + 0x198);
  lVar12 = *(long *)(unaff_x22 + 0x198);
  lVar4 = *(long *)(lVar12 + _DAT_112ff5de8);
  func_0x000107c61174();
  func_0x000107c61170(lVar12);
  lVar12 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x200) = lVar12;
  func_0x000107c61170(lVar4);
  if (lVar12 == 0) {
    lVar4 = unaff_x22 + 0x108;
    puVar6 = *(undefined1 **)(unaff_x22 + 0x1d8);
    func_0x000107c61574();
    func_0x0001027836cc();
    func_0x000107c613f8(&UNK_1105473e0,puVar6,0,0);
    *puVar6 = 2;
    func_0x000107c61654();
LAB_102780e78:
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1f0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
    func_0x000107c61428(puVar1,lVar4,0,0);
    uVar3 = *puVar1;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar2);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102780ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar4 = lVar12;
  func_0x000107c4e2b4();
  func_0x000107c61180();
  uVar11 = *(ulong *)(lVar4 + _DAT_113079c48);
  *(ulong *)(unaff_x22 + 0x208) = uVar11;
  func_0x000107c61434(uVar11);
  func_0x000107c61170(lVar4);
  if (uVar11 == 0) {
    lVar4 = unaff_x22 + 0x120;
    puVar6 = *(undefined1 **)(unaff_x22 + 0x1d8);
    func_0x000107c61574();
    func_0x0001027836cc();
    func_0x000107c613f8(&UNK_1105473e0,puVar6,0,0);
    *puVar6 = 3;
    func_0x000107c61654();
    func_0x000107c615e8(lVar12);
    goto LAB_102780e78;
  }
  *(ulong *)(unaff_x22 + 0x1a0) = uVar11;
  ppuVar5 = &PTR____CFConstantStringClassReference_110f378b8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f378b8);
  if (*(long *)(uVar11 + 0x10) != 0) {
    func_0x000107c61434(uVar11);
    uVar10 = uVar9;
    func_0x000100029284(ppuVar5);
    if ((uVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(uVar11 + 0x38) + (long)ppuVar5 * 0x20,unaff_x22 + 0x10);
      func_0x000107c6142c(uVar9);
      uVar9 = uVar11;
      goto LAB_102780ee0;
    }
    func_0x000107c6142c(uVar11);
  }
  *(undefined8 *)(unaff_x22 + 0x18) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x20) = 0;
LAB_102780ee0:
  func_0x000107c6142c(uVar9);
  if (*(long *)(unaff_x22 + 0x28) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
    uVar2 = 0x112d387f8;
    FUN_1027848a4(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
    ppuVar5 = &PTR____CFConstantStringClassReference_110f37898;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f37898);
    func_0x000100083b20(unaff_x22 + 0x1b8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar3 = uVar13;
    func_0x000107c4d6b0();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    lVar12 = 0x112de6120;
    func_0x0001000285a8(0x112de6120,&UNK_10d9b0cc0);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
    *(long *)(unaff_x22 + 200) = lVar12;
    if (lVar12 == 0) {
      FUN_1027848a4(unaff_x22 + 0xb0,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(unaff_x22 + 0xd0,ppuVar5,uVar2);
      func_0x000107c6142c(uVar2);
      FUN_1027848a4(unaff_x22 + 0xd0,0x112d387f8,&UNK_10d902650);
      uVar11 = *(ulong *)(unaff_x22 + 0x1a0);
    }
    else {
      func_0x000100102924(unaff_x22 + 0xb0,unaff_x22 + 0x90);
      uVar9 = uVar11;
      func_0x000107c61558(uVar11);
      func_0x0001001029e8(unaff_x22 + 0x90,ppuVar5,uVar2,uVar9);
      func_0x000107c6142c(uVar2);
      *(ulong *)(unaff_x22 + 0x1a0) = uVar11;
    }
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
    FUN_102783138(uVar3);
    uVar9 = uVar11;
    FUN_10278370c(uVar11,uVar2,((uint)uVar3 ^ 0xffffffff) & 1);
    func_0x000107c61434();
    func_0x000107c6142c(uVar11);
    ppuVar5 = &PTR____CFConstantStringClassReference_110f0bc38;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    lVar12 = 0;
    FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined **)(unaff_x22 + 0x50) = puVar8;
    *(long *)(unaff_x22 + 0x68) = lVar12;
    uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
    if (lVar12 == 0) {
      FUN_1027848a4(unaff_x22 + 0x50,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(unaff_x22 + 0x70,ppuVar5,uVar2);
      func_0x000107c6142c(uVar2);
      FUN_1027848a4(unaff_x22 + 0x70,0x112d387f8,&UNK_10d902650);
      func_0x000107c615e8(uVar3);
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x000100102924(unaff_x22 + 0x50,unaff_x22 + 0x30);
      uVar11 = uVar9;
      func_0x000107c61558(uVar9);
      func_0x0001001029e8(unaff_x22 + 0x30,ppuVar5,uVar2,uVar11);
      func_0x000107c6142c(uVar2);
      func_0x000107c615e8(uVar3);
      func_0x000107c6142c(uVar9);
    }
    puVar1 = *(undefined8 **)(unaff_x22 + 0x1f0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
    func_0x000107c61428(puVar1,unaff_x22 + 0x180,0,0);
    uVar3 = *puVar1;
    func_0x000107c61174(uVar3);
    func_0x000100069b5c(uVar2);
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001027811fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar9);
    return;
  }
  FUN_1027848a4(unaff_x22 + 0x10,0x112d387f8,&UNK_10d902650);
  plVar7 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x210) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102781200;
  lVar12 = *(long *)(unaff_x22 + 0x1d0);
  lVar4 = *(long *)(unaff_x22 + 0x1c0);
  plVar7[0x10] = *(long *)(unaff_x22 + 0x1c8);
  plVar7[0x11] = lVar12;
  plVar7[0xf] = lVar4;
  lVar4 = 0;
  func_0x000107c5fcec();
  puVar8 = PTR___sScMMa_11034fc70;
  lVar12 = lVar4;
  func_0x000107c5fce8();
  plVar7[0x12] = lVar12;
  lVar12 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar8,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar7[0x13] = lVar4;
  plVar7[0x14] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027816bc,lVar4,lVar12);
  return;
}



/* Entry: 102781200; end: 10278126b;  */

void FUN_102781200(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x218) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x210));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x220) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x1e0);
    uVar3 = *(undefined8 *)(lVar4 + 0x1e8);
    pcVar1 = FUN_10278126c;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x1e0);
    uVar3 = *(undefined8 *)(lVar4 + 0x1e8);
    pcVar1 = FUN_102781478;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10278126c; end: 102781477;  */

void FUN_10278126c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 auStack_58 [2];
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x208);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
  uVar1 = uVar7;
  func_0x000107c61558(uVar7);
  auStack_58[0] = uVar7;
  FUN_102783bfc(uVar8,&UNK_100216600,0,uVar1,auStack_58);
  func_0x000107c6142c(uVar8);
  uVar8 = auStack_58[0];
  *(undefined8 *)(unaff_x22 + 0x1a0) = auStack_58[0];
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
  FUN_102783138(uVar7);
  uVar2 = uVar8;
  FUN_10278370c(uVar8,uVar1,((uint)uVar7 ^ 0xffffffff) & 1);
  func_0x000107c61434();
  func_0x000107c6142c(uVar8);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0bc38;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc38);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  lVar5 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = puVar4;
  *(long *)(unaff_x22 + 0x68) = lVar5;
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
    FUN_1027848a4(puVar6,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(unaff_x22 + 0x70,ppuVar3,uVar1);
    func_0x000107c6142c(uVar1);
    FUN_1027848a4(unaff_x22 + 0x70,0x112d387f8,&UNK_10d902650);
    func_0x000107c615e8(uVar7);
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
    func_0x000100102924(puVar6,unaff_x22 + 0x30);
    uVar7 = uVar2;
    func_0x000107c61558(uVar2);
    auStack_58[0] = uVar2;
    func_0x0001001029e8(unaff_x22 + 0x30,ppuVar3,uVar1,uVar7);
    func_0x000107c6142c(uVar1);
    func_0x000107c615e8(uVar8);
    func_0x000107c6142c(uVar2);
    uVar2 = auStack_58[0];
  }
  puVar6 = *(undefined8 **)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  func_0x000107c61428(puVar6,unaff_x22 + 0x180,0,0);
  uVar7 = *puVar6;
  func_0x000107c61174(uVar7);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102781474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102781478; end: 102781627;  */

void FUN_102781478(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x218);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1d8));
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar5;
  func_0x000107c614b0(uVar5);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  uVar2 = 0;
  FUN_102784cf8(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
  lVar3 = unaff_x22 + 0x1b0;
  func_0x000107c6147c(lVar3,unaff_x22 + 0x1a8,uVar5,uVar2,0);
  if ((int)lVar3 == 0) {
    lVar3 = unaff_x22 + 0x138;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x208);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar5 = uVar2;
    func_0x000107c51784();
    if ((int)uVar5 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x218));
      uVar4 = uVar2;
      FUN_1027841cc(uVar2);
      func_0x000107c615e8(uVar6);
      func_0x000107c61170(uVar2);
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
      func_0x000107c6142c(uVar5);
      puVar1 = *(undefined8 **)(unaff_x22 + 0x1f0);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
      func_0x000107c61428(puVar1,unaff_x22 + 0x168,0,0);
      uVar2 = *puVar1;
      func_0x000107c61174(uVar2);
      func_0x000100069b5c(uVar5);
      func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102781594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar4);
      return;
    }
    lVar3 = unaff_x22 + 0x150;
    uVar5 = *(undefined8 *)(unaff_x22 + 0x208);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
    func_0x000107c61170(uVar2);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x1a8));
  func_0x000107c6142c(uVar5);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x1f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
  func_0x000107c61428(puVar1,lVar3,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102781624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102781628; end: 1027816bb;  */

void FUN_102781628(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027816bc,uVar2,uVar3);
  return;
}



/* Entry: 1027816bc; end: 102781887;  */

void FUN_1027816bc(undefined1 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  FUN_1027af714();
  *(undefined1 **)(unaff_x22 + 0xa8) = param_1;
  *(char *)(unaff_x22 + 0xe8) = (char)param_2;
  if ((((uint)param_2 ^ 0xffffffff) & 0xff) == 0) {
    param_1 = *(undefined1 **)(unaff_x22 + 0x90);
    func_0x000107c61574();
  }
  else {
    puVar1 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (puVar1 != (undefined1 *)0x0) {
      puVar2 = puVar1;
      func_0x000107c4c99c();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0xb0) = puVar2;
      func_0x000107c61170(puVar1);
      if (puVar2 != (undefined1 *)0x0) {
        func_0x000100083b20(unaff_x22 + 0x60);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar3 = uVar5;
        func_0x000107c42d48();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        uVar5 = uVar3;
        func_0x000107c42428();
        func_0x000107c61180();
        *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
        func_0x000107c615e8(uVar3);
        func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
        func_0x000107c4ca6c();
        func_0x000107c61180();
        uVar3 = uVar5;
        func_0x000100759c94();
        *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
        func_0x000107c61170(uVar5);
        plVar4 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 200) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_102781888;
                    /* WARNING: Could not recover jumptable at 0x000102781818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)&UNK_10121ae24)();
        return;
      }
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
    FUN_10276f644(param_1,param_2);
  }
  func_0x0001027836cc();
  func_0x000107c613f8(&UNK_1105473e0,param_1,0,0);
  *param_1 = 4;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102781884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102781888; end: 10278197f;  */

void FUN_102781888(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd0) = param_1;
  *(undefined1 *)(lVar1 + 0xe9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1027818dc,0,0);
  return;
}



/* Entry: 102781980; end: 102781d3f;  */

/* WARNING: Removing unreachable block (ram,0x0001027819b8) */

void FUN_102781980(void)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  long lVar14;
  
  lVar9 = *(long *)(unaff_x22 + 0xd0);
  if (lVar9 == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar7 = *(undefined1 **)(unaff_x22 + 0x90);
    uVar8 = *(undefined1 *)(unaff_x22 + 0xe8);
    func_0x000107c61574();
    func_0x0001027836cc();
    func_0x000107c613f8(&UNK_1105473e0,puVar7,0,0);
    *puVar7 = 5;
    func_0x000107c61654();
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar11);
  }
  else {
    func_0x000107c5fd64();
    if (*(char *)(unaff_x22 + 0xe8) == '\x01') {
      uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
      lVar3 = 0;
      func_0x000107c5ede0();
      lVar14 = *(long *)(lVar3 + -8);
      uVar4 = *(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar4);
      func_0x000107c5edb4(uVar4,uVar11);
      puVar5 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      func_0x000107c610f8();
      puVar6 = puVar5;
      func_0x000107c5ed90();
      func_0x000107c48fd4();
      func_0x000107c61170(puVar6);
      (**(code **)(lVar14 + 8))(uVar4,lVar3);
      func_0x000107c615c0(uVar4);
      func_0x000100083b20(unaff_x22 + 0x70);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar11 = uVar12;
      func_0x000107c3fa04(uVar12);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x0001044d77a8(0);
      puVar6 = puVar5;
      func_0x0001044d6bf8(puVar5,uVar11);
      func_0x000107c615e8(uVar11);
      func_0x000107c61170(puVar5);
      if (((ulong)puVar6 & 1) == 0) {
        lVar3 = *(long *)(unaff_x22 + 0x80);
        func_0x000107c4e8d8();
        func_0x000107c61180();
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102781d3c);
          (*pcVar2)();
        }
        lVar14 = lVar3;
        func_0x000107c4e8ec();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102781d40);
          (*pcVar2)();
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar8 = *(undefined1 *)(unaff_x22 + 0xe9);
        lVar3 = lVar14;
        func_0x000107c44b24(lVar14);
        func_0x000107c61170(lVar14);
        func_0x000102784090(lVar9,lVar3);
        FUN_102784d38(uVar13,uVar8);
        func_0x000107c615e8(uVar12);
        func_0x000107c61170(uVar11);
        FUN_10276f644(uVar10,1);
                    /* WARNING: Could not recover jumptable at 0x000102781cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))(lVar9);
        return;
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined1 *)(unaff_x22 + 0xe9);
      FUN_102783f34();
      func_0x000107c61654();
      FUN_102784d38(uVar10,uVar8);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(uVar11);
      uVar8 = 1;
    }
    else {
      func_0x000107c4e430();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0xd8) = lVar9;
      if (lVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_102781da4,0,0);
        return;
      }
      puVar7 = *(undefined1 **)(unaff_x22 + 0x90);
      func_0x000107c61574();
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xe9);
      uVar8 = *(undefined1 *)(unaff_x22 + 0xe8);
      func_0x0001027836cc();
      func_0x000107c613f8(&UNK_1105473e0,puVar7,0,0);
      *puVar7 = 6;
      func_0x000107c61654();
      FUN_102784d38(uVar10,uVar1);
      func_0x000107c615e8(uVar12);
      func_0x000107c61170(uVar11);
    }
  }
  FUN_10276f644(uVar13,uVar8);
                    /* WARNING: Could not recover jumptable at 0x000102781a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102781d40; end: 102781da3;  */

void FUN_102781d40(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xe8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  FUN_10276f644(uVar3,uVar2);
  func_0x000107c615e8(uVar1);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102781da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102781da4; end: 102781df7;  */

void FUN_102781da4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c46110();
  *(undefined **)(unaff_x22 + 0xe0) = puVar1;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102781df8,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 102781df8; end: 102782047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102781df8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  lVar11 = *(long *)(unaff_x22 + 0xe0);
  puVar5 = *(undefined1 **)(unaff_x22 + 0x90);
  func_0x000107c61574();
  if (lVar11 != 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x88) + 0x60);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x78) + _DAT_112ebd9d0);
    uVar3 = *(undefined1 *)(unaff_x22 + 0xe9);
    uVar4 = *(undefined1 *)(unaff_x22 + 0xe8);
    func_0x000107c5fb78(*puVar1,puVar1[1]);
    uVar6 = 0xd00000000000001f;
    uVar10 = *(undefined8 *)(lVar11 + _DAT_112ebd440);
    func_0x000107c5fadc(0xd00000000000001f,0x800000010f0bace0);
    func_0x000107c56bcc(uVar10);
    func_0x000107c61170(uVar6);
    lVar11 = 0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c61534();
    *(undefined8 *)(lVar11 + 0x18) = 2;
    *(undefined8 *)(lVar11 + 0x10) = 1;
    ppuVar7 = &PTR____CFConstantStringClassReference_110f0c078;
    func_0x000107c5faec();
    *(undefined8 *)(lVar11 + 0x20) = ppuVar7;
    *(undefined **)(lVar11 + 0x48) = PTR___sSSN_11034da80;
    *(long *)(lVar11 + 0x28) = lVar8;
    *(undefined8 *)(lVar11 + 0x30) = 0xd00000000000001f;
    *(undefined8 *)(lVar11 + 0x38) = 0x800000010f0bace0;
    func_0x000107c61434(0x800000010f0bace0);
    lVar8 = lVar11;
    func_0x000100214a84(lVar11);
    func_0x000107c61588(lVar11);
    FUN_1027848a4((undefined8 *)(lVar11 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
    func_0x000107c61170(uVar2);
    FUN_102784d38(uVar14,uVar3);
    func_0x000107c6142c(0x800000010f0bace0);
    func_0x000107c61170(uVar13);
    FUN_10276f644(uVar9,uVar4);
    func_0x000107c615e8(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000102781fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(lVar8);
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined1 *)(unaff_x22 + 0xe9);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xe8);
  func_0x0001027836cc();
  func_0x000107c613f8(&UNK_1105473e0,puVar5,0,0);
  *puVar5 = 6;
  func_0x000107c61654();
  FUN_102784d38(uVar12,uVar3);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar2);
  FUN_10276f644(uVar9,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102782044. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102782048; end: 1027820db;  */

void FUN_102782048(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027820dc,uVar2,uVar3);
  return;
}



/* Entry: 1027820dc; end: 102782203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027820dc(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x68) + _DAT_112ebd9f8);
  lVar12 = puVar1[1];
  if (lVar12 != 0) {
    uVar3 = puVar1[4];
    uVar6 = puVar1[5];
    uVar4 = puVar1[2];
    uVar7 = puVar1[3];
    uVar13 = *puVar1;
    func_0x000100083b20(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar10 = *(long *)(unaff_x22 + 0x30);
    func_0x00010278471c(unaff_x22 + 0x10,uVar5);
    piVar11 = *(int **)(lVar10 + 0x10);
    iVar2 = *piVar11;
    plVar9 = (long *)(ulong)(uint)piVar11[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_102782204;
                    /* WARNING: Could not recover jumptable at 0x0001027821b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar11))(uVar13,lVar12,uVar4,uVar7,uVar3,uVar6,uVar5,lVar10);
    return;
  }
  plVar9 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1027822ac;
  lVar12 = *(long *)(unaff_x22 + 0x78);
  plVar9[4] = *(long *)(unaff_x22 + 0x70);
  plVar9[5] = lVar12;
  lVar10 = 0;
  func_0x000107c5fcec();
  puVar8 = PTR___sScMMa_11034fc70;
  lVar12 = lVar10;
  func_0x000107c5fce8();
  plVar9[6] = lVar12;
  lVar12 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar8,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar9[7] = lVar10;
  plVar9[8] = lVar12;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278245c,lVar10,lVar12);
  return;
}



/* Entry: 102782204; end: 10278226b;  */

void FUN_102782204(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long **)(lVar4 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar4 + 0x40) = param_1;
  *(long *)(lVar4 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x98));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x88);
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    pcVar1 = FUN_10278226c;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x88);
    uVar3 = *(undefined8 *)(lVar4 + 0x90);
    pcVar1 = (code *)0x102782344;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 10278226c; end: 1027822ab;  */

void FUN_10278226c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  FUN_1027846b8(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001027822a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 1027822ac; end: 10278230b;  */

void FUN_1027822ac(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x50) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10278230c;
  }
  else {
    pcVar1 = (code *)0x102782398;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x88),*(undefined8 *)(lVar2 + 0x90));
  return;
}



/* Entry: 10278230c; end: 1027823cb;  */

void FUN_10278230c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000102782340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 1027823cc; end: 10278245b;  */

void FUN_1027823cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10278245c,uVar2,uVar3);
  return;
}



/* Entry: 10278245c; end: 1027825bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10278245c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  lVar1 = *(long *)(lVar4 + _DAT_112ff73d0);
  func_0x000107c61174();
  func_0x000107c61170(lVar4);
  lVar4 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  func_0x000107c61170(lVar1);
  if (lVar4 != 0) {
    func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
    func_0x000107c5c92c(0x4082c00000000000);
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000100759c94();
    *(long *)(unaff_x22 + 0x50) = lVar1;
    func_0x000107c61170(lVar4);
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1027825c0;
                    /* WARNING: Could not recover jumptable at 0x00010278256c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100f96304)();
    return;
  }
  puVar3 = *(undefined1 **)(unaff_x22 + 0x30);
  func_0x000107c61574();
  func_0x0001027836cc();
  func_0x000107c613f8(&UNK_1105473e0,puVar3,0,0);
  *puVar3 = 7;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001027825bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027825c0; end: 1027826b7;  */

void FUN_1027825c0(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  *(undefined1 *)(lVar1 + 0x68) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102782614,0,0);
  return;
}



/* Entry: 1027826b8; end: 102782763;  */

void FUN_1027826b8(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  puVar1 = *(undefined1 **)(unaff_x22 + 0x30);
  func_0x000107c61574();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102782708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar3);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x0001027836cc();
  func_0x000107c613f8(&UNK_1105473e0,puVar1,0,0);
  *puVar1 = 8;
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102782760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102782764; end: 1027827a3;  */

void FUN_102782764(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027827a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027827a4; end: 1027828df;  */

void FUN_1027827a4(undefined8 *param_1,double *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  
  dVar5 = *param_2;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828cc);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828d0);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828d4);
    (*pcVar1)();
  }
  dVar5 = param_2[1];
  puVar2 = PTR___sSiN_11034deb0;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c();
  func_0x000107c5fb78(0x78,0xe100000000000000);
  if ((ulong)ABS(dVar5) < 0x7ff0000000000000) {
    if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828dc);
      (*pcVar1)();
    }
    if (dVar5 < 9.223372036854776e+18) {
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar4);
      *param_1 = puVar2;
      param_1[1] = puVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828e0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027828d8);
  (*pcVar1)();
}



/* Entry: 1027828e0; end: 102782963;  */

void FUN_1027828e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102782964; end: 102782983;  */

void FUN_102782964(void)

{
  FUN_10277c5d4();
  return;
}



/* Entry: 102782984; end: 1027829eb;  */

void FUN_102782984(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1027829ec;
  plVar3[9] = param_3;
  plVar3[10] = lVar4;
  plVar3[7] = param_1;
  plVar3[8] = param_2;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar4 = lVar2;
  func_0x000107c5fce8();
  plVar3[0xb] = lVar4;
  lVar4 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  plVar3[0xc] = lVar2;
  plVar3[0xd] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277c934,lVar2,lVar4);
  return;
}



/* Entry: 1027829ec; end: 102782a27;  */

void FUN_1027829ec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102782a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102782a28; end: 102782a3b;  */

bool FUN_102782a28(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102782a3c; end: 102782ae7;  */

void FUN_102782a3c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102782ae8; end: 102782af7;  */

void FUN_102782ae8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102782af8; end: 102782b5f;  */

void FUN_102782af8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  if (param_2 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102782b60,param_2);
  return;
}



/* Entry: 102782b60; end: 102782c87;  */

void FUN_102782b60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  uVar2 = 2;
  uVar4 = 0x1a;
  func_0x000100029b9c(2,0x1a,0,0);
  *(int *)(unaff_x22 + 0xb8) = (int)uVar2;
  if ((int)uVar2 == 0) {
    func_0x000101041c0c();
  }
  else {
    func_0x000107c5f058();
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  *(undefined8 *)(lVar1 + 0x28) = uVar4;
  lVar3 = lVar1;
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  func_0x000107c61574(lVar1);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102782c88;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  uVar2 = 0x112d4e498;
  func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_101041ab4;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1105472c0;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c4b794(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102782c88; end: 102782cc3;  */

void FUN_102782c88(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102782cc4,*(undefined8 *)(*unaff_x22 + 0xa0),*(undefined8 *)(*unaff_x22 + 0xa8));
  return;
}



/* Entry: 102782cc4; end: 102782d4b;  */

/* WARNING: Removing unreachable block (ram,0x000102782d14) */

void FUN_102782cc4(void)

{
  int iVar1;
  long unaff_x22;
  
  iVar1 = *(int *)(unaff_x22 + 0xb8);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  if (iVar1 == 0) {
    FUN_102782d4c(*(undefined8 *)(unaff_x22 + 0x90));
  }
  else {
    func_0x000107c60098(unaff_x22 + 0x50);
  }
                    /* WARNING: Could not recover jumptable at 0x000102782d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102782d4c; end: 102782e6f;  */

undefined8 FUN_102782d4c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  char cStack_38;
  
  func_0x000107c6009c(&uStack_40);
  if (cStack_38 != '\0') {
    if (cStack_38 != '\x01') {
      FUN_102784700(uStack_40,cStack_38);
      func_0x000107c602fc(0x16);
      func_0x000107c6142c(0xe000000000000000);
      puVar2 = &UNK_10dad7df0;
      func_0x0001000285a8(0x112ebd578,&UNK_10dad7df0);
      func_0x000107c5f050();
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef21400,
                          "AVFoundation/arm64e-apple-ios.swiftinterface",0x2c,2,0x19a,0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102782e70);
      (*pcVar1)();
    }
    func_0x000107c61654();
  }
  return uStack_40;
}



/* Entry: 102782e70; end: 102782ee7;  */

/* WARNING: Possible PIC construction at 0x000102782ea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102782ea8) */
/* WARNING: Removing unreachable block (ram,0x000102782eb4) */
/* WARNING: Removing unreachable block (ram,0x000102782eb8) */

void FUN_102782e70(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112ebd588;
    plVar5 = (long *)&UNK_10dad7e60;
  }
  else {
    puVar3 = (ulong *)0x112ebd590;
    plVar5 = (long *)&UNK_10dad7e68;
    unaff_x30 = 0x102782ea8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 102782ee8; end: 102782f67;  */

void FUN_102782ee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102784f40,0,0);
  return;
}



/* Entry: 102782f68; end: 102782f77;  */

void FUN_102782f68(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102782f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102782f78; end: 10278309b;  */

void FUN_102782f78(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_1027af494();
  if (param_1 == 0) {
    return;
  }
  uVar5 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    if (*(long *)(uVar5 + 0x10) != 1) {
LAB_102783064:
      func_0x000107c6142c();
      return;
    }
  }
  else {
    uVar4 = param_1;
    if (-1 < (long)param_1) {
      uVar4 = uVar5;
    }
    uVar3 = uVar4;
    func_0x000107c60480();
    if ((uVar3 != 1) || (func_0x000107c60480(), uVar4 == 0)) goto LAB_102783064;
  }
  if ((param_1 & 0xc000000000000001) == 0) {
    if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278309c);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar2);
  }
  else {
    uVar2 = 0;
    func_0x00010121c1ac(0);
  }
  func_0x000107c6142c();
  FUN_1027ad448();
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10278309c; end: 102783137;  */

void FUN_10278309c(double param_1,double param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 1) {
    uVar1 = 5;
  }
  else if ((((param_1 + -16.0 == 0.0) || (param_2 / (param_1 + -16.0) < 1.777778)) ||
           (param_1 == 0.0)) || (1.77778 < param_2 / param_1)) {
    uVar1 = 3;
  }
  else {
    uVar1 = 6;
  }
  func_0x0001044434c0(0);
  func_0x000107c610f8();
  func_0x000104442dd8(0,0,0,0,uVar1);
  return;
}



/* Entry: 102783138; end: 102783267;  */

undefined8 FUN_102783138(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  FUN_1027af494();
  if (param_1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if (param_1 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar7 = param_1;
      if (-1 < (long)param_1) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102783228);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c61174(uVar3);
          uVar5 = param_2;
        }
        else {
          uVar3 = uVar8;
          uVar5 = param_1;
          func_0x00010121c1ac(uVar8);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102783208);
          (*pcVar2)();
        }
        uVar10 = uVar8 + 1;
        uVar4 = uVar3;
        func_0x0001027af800();
        param_2 = uVar5;
        func_0x000107c61170(uVar3);
        uVar1 = (uint)uVar5 & 0xff;
        if (uVar1 != 0xff) {
          if (uVar1 == 1) {
            uVar6 = 1;
            FUN_10276f644(uVar4,1);
            goto LAB_102783240;
          }
          FUN_10276f644(uVar4);
          param_2 = uVar5;
        }
        uVar8 = uVar8 + 1;
      } while (uVar10 != uVar7);
    }
    uVar6 = 0;
LAB_102783240:
    func_0x000107c6142c(param_1);
  }
  return uVar6;
}



/* Entry: 102783268; end: 10278369b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102783268(double param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_188 [80];
  undefined *apuStack_138 [3];
  undefined *puStack_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [136];
  
  if (*(long *)((long)param_1 + _DAT_112ebd9f0 + 8) != 0) {
    puVar8 = (undefined *)0x112d4b5e8;
    func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
    puVar10 = auStack_188;
    func_0x000107c61534();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0be98;
    func_0x000107c5faec();
    *(undefined ***)(puVar8 + 0x20) = ppuVar2;
    *(undefined1 **)(puVar8 + 0x28) = puVar10;
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    uVar3 = 0;
    FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    *(undefined8 *)(puVar8 + 0x48) = uVar3;
    *(undefined **)(puVar8 + 0x30) = puVar6;
    puVar6 = puVar8;
    func_0x000100214a84(puVar8);
    func_0x000107c61588(puVar8);
    FUN_1027848a4(puVar8 + 0x20,0x112d4b5f0,&UNK_10d9127d0);
    return puVar6;
  }
  FUN_102787314();
  dVar4 = param_1;
  FUN_1027af494();
  if (dVar4 == 0.0) {
LAB_102783640:
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84(PTR___swiftEmptyArrayStorage_11034f1c8);
    func_0x000107c61170(param_1);
    return puVar8;
  }
  if ((ulong)dVar4 >> 0x3e == 0) {
    dVar12 = *(double *)(((ulong)dVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    dVar12 = (double)((ulong)dVar4 & 0xffffffffffffff8);
    if (((ulong)dVar4 & 0x8000000000000000) != 0) {
      dVar12 = dVar4;
    }
    func_0x000107c60480();
  }
  if (dVar12 == 0.0) {
    func_0x000107c6142c();
    goto LAB_102783640;
  }
  dVar12 = param_1;
  FUN_102783138();
  if (((ulong)dVar12 & 1) != 0) {
    dVar11 = param_1;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (dVar11 == 0.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102783698);
      (*pcVar1)();
    }
    dVar5 = dVar11;
    func_0x000107c4e8ec();
    func_0x000107c61180();
    func_0x000107c61170(dVar11);
    if (dVar5 == 0.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10278369c);
      (*pcVar1)();
    }
    func_0x000107c44b24();
    func_0x000107c61170(dVar5);
  }
  puVar8 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar10 = auStack_f8;
  func_0x000107c61534();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0be98;
  func_0x000107c5faec();
  *(undefined ***)(puVar8 + 0x20) = ppuVar2;
  *(undefined1 **)(puVar8 + 0x28) = puVar10;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c490d4();
  uVar3 = 0x112d38c88;
  uVar7 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(puVar8 + 0x48) = uVar7;
  *(undefined **)(puVar8 + 0x30) = puVar6;
  ppuVar2 = &PTR____CFConstantStringClassReference_110db9478;
  func_0x000107c5faec();
  *(undefined ***)(puVar8 + 0x50) = ppuVar2;
  *(undefined8 *)(puVar8 + 0x58) = uVar3;
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  *(undefined8 *)(puVar8 + 0x78) = uVar7;
  *(undefined **)(puVar8 + 0x60) = puVar6;
  puVar6 = puVar8;
  func_0x000100214a84();
  func_0x000107c61588(puVar8);
  uVar3 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  dVar11 = 9.88131291682493e-324;
  func_0x000107c61408(puVar8 + 0x20,2,uVar3);
  if (((ulong)dVar12 & 1) != 0) {
    if ((ulong)dVar4 >> 0x3e == 0) {
      dVar12 = *(double *)(((ulong)dVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      dVar12 = (double)((ulong)dVar4 & 0xffffffffffffff8);
      if (((ulong)dVar4 & 0x8000000000000000) != 0) {
        dVar12 = dVar4;
      }
      func_0x000107c60480();
    }
    if (dVar12 == 4.94065645841247e-324) {
      if (((ulong)dVar4 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)dVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102783694);
          (*pcVar1)();
        }
        uVar3 = *(undefined8 *)((long)dVar4 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = 0;
        dVar11 = dVar4;
        func_0x00010121c1ac(0);
      }
      func_0x000107c6142c();
      FUN_1027ad52c();
      uVar9 = SUB84(dVar11,0);
      func_0x000107c61170(uVar3);
      if (((uVar9 & 0xff) != 1) && (0.0 < dVar4)) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110f0e938;
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e938);
        apuStack_138[0] = (undefined *)(dVar4 / 1000.0);
        puStack_120 = PTR___sSdN_11034dd90;
        func_0x000100102924(apuStack_138,auStack_118);
        puVar8 = puVar6;
        func_0x000107c61558(puVar6);
        apuStack_138[0] = puVar6;
        func_0x0001001029e8(auStack_118,ppuVar2,dVar11,puVar8);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(dVar11);
        return apuStack_138[0];
      }
      goto LAB_10278351c;
    }
  }
  func_0x000107c6142c(dVar4);
LAB_10278351c:
  func_0x000107c61170(param_1);
  return puVar6;
}



/* Entry: 10278369c; end: 1027836ab;  */

undefined1  [16] FUN_10278369c(void)

{
  return ZEXT816(0x1105472b0);
}



/* Entry: 1027836ac; end: 10278370b;  */

void FUN_1027836ac(void)

{
  func_0x000107c61168(&PTR_PTR_112ebd4b0);
  return;
}



/* Entry: 10278370c; end: 102783bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_10278370c(undefined **param_1,ulong param_2,ulong param_3)

{
  char cVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined **ppuVar9;
  undefined **appuStack_90 [3];
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined **ppuStack_48;
  
  uVar6 = 0;
  cVar1 = *(char *)(param_2 + _DAT_112ebda10 + 0x10);
  ppuVar9 = &PTR____CFConstantStringClassReference_110f0c258;
  ppuVar2 = ppuVar9;
  ppuStack_48 = param_1;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c258);
  if (cVar1 == '\x01') {
    ppuVar9 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c61434(param_1);
    func_0x000107c490d4();
    lVar3 = 0;
    FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    appuStack_90[0] = ppuVar9;
    puStack_78 = (undefined *)lVar3;
    if (lVar3 == 0) {
      ppuVar9 = (undefined **)0x112d387f8;
      FUN_1027848a4(appuStack_90,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&puStack_70,ppuVar2,param_2);
      func_0x000107c6142c(param_2);
      FUN_1027848a4(&puStack_70,0x112d387f8,&UNK_10d902650);
      ppuVar2 = ppuStack_48;
    }
    else {
      func_0x000100102924(appuStack_90,&puStack_70);
      ppuVar9 = param_1;
      func_0x000107c61558(param_1);
      appuStack_90[0] = param_1;
      func_0x0001001029e8(&puStack_70,ppuVar2,param_2,ppuVar9);
      func_0x000107c6142c(param_2);
      ppuVar9 = ppuVar2;
      ppuVar2 = appuStack_90[0];
    }
    ppuVar4 = &PTR____CFConstantStringClassReference_110f0bc78;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc78);
    appuStack_90[0] = (undefined **)((ulong)appuStack_90[0] & 0xffffffffffffff00);
    puStack_78 = PTR___sSbN_11034dd40;
    func_0x000100102924(appuStack_90,&puStack_70);
    ppuVar7 = ppuVar2;
    func_0x000107c61558(ppuVar2);
    appuStack_90[0] = ppuVar2;
    func_0x0001001029e8(&puStack_70,ppuVar4,ppuVar9,ppuVar7);
    goto LAB_102783908;
  }
  if (param_1[2] == (undefined *)0x0) {
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
    func_0x000107c61434(param_1);
LAB_102783930:
    func_0x000107c6142c(param_2);
LAB_102783938:
    uVar5 = 0x112d387f8;
    FUN_1027848a4(&puStack_70,0x112d387f8,&UNK_10d902650);
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c258);
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c490d4();
    lVar3 = 0;
    FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    appuStack_90[0] = ppuVar2;
    puStack_78 = (undefined *)lVar3;
    if (lVar3 == 0) {
      ppuVar2 = (undefined **)0x112d387f8;
      FUN_1027848a4(appuStack_90,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(&puStack_70,ppuVar9,uVar5);
      func_0x000107c6142c(uVar5);
      FUN_1027848a4(&puStack_70,0x112d387f8,&UNK_10d902650);
      ppuVar9 = ppuStack_48;
    }
    else {
      func_0x000100102924(appuStack_90,&puStack_70);
      ppuVar2 = param_1;
      func_0x000107c61558(param_1);
      appuStack_90[0] = param_1;
      func_0x0001001029e8(&puStack_70,ppuVar9,uVar5,ppuVar2);
      func_0x000107c6142c(uVar5);
      ppuVar2 = ppuVar9;
      ppuVar9 = appuStack_90[0];
    }
    ppuVar7 = &PTR____CFConstantStringClassReference_110f0bc78;
    func_0x000107c5faec();
    appuStack_90[0] = (undefined **)CONCAT71(appuStack_90[0]._1_7_,1);
    puStack_78 = PTR___sSbN_11034dd40;
    func_0x000100102924(appuStack_90,&puStack_70);
    ppuVar4 = ppuVar9;
    func_0x000107c61558(ppuVar9);
    appuStack_90[0] = ppuVar9;
    func_0x0001001029e8(&puStack_70,ppuVar7,ppuVar2,ppuVar4);
    func_0x000107c6142c(ppuVar2);
    param_1 = appuStack_90[0];
  }
  else {
    func_0x000107c61434(param_1);
    uVar8 = param_2;
    func_0x000100029284(ppuVar2);
    if ((uVar8 & 1) == 0) {
      uStack_68 = 0;
      puStack_70 = (undefined *)0x0;
      lStack_58 = 0;
      uStack_60 = 0;
      goto LAB_102783930;
    }
    func_0x0001000bb420(param_1[7] + (long)ppuVar2 * 0x20,&puStack_70);
    func_0x000107c6142c(param_2);
    if (lStack_58 == 0) goto LAB_102783938;
    ppuVar7 = (undefined **)0x112d387f8;
    FUN_1027848a4(&puStack_70,0x112d387f8,&UNK_10d902650);
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0bc78;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc78);
  if (param_1[2] == (undefined *)0x0) {
LAB_102783af0:
    uStack_68 = 0;
    puStack_70 = (undefined *)0x0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c61434(param_1);
    ppuVar9 = ppuVar7;
    func_0x000100029284(ppuVar2);
    if (((ulong)ppuVar9 & 1) == 0) {
      func_0x000107c6142c(param_1);
      goto LAB_102783af0;
    }
    func_0x0001000bb420(param_1[7] + (long)ppuVar2 * 0x20,&puStack_70);
    func_0x000107c6142c(ppuVar7);
    ppuVar7 = param_1;
  }
  func_0x000107c6142c(ppuVar7);
  if (lStack_58 == 0) {
    FUN_1027848a4(&puStack_70,0x112d387f8,&UNK_10d902650);
    return param_1;
  }
  uVar5 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  ppuVar9 = &puStack_70;
  func_0x000107c6147c(appuStack_90,ppuVar9,PTR___sypN_11034f1a8 + 8,uVar5,6);
  ppuVar2 = appuStack_90[0];
  if ((uVar6 & 1) == 0) {
    return param_1;
  }
  ppuVar7 = appuStack_90[0];
  func_0x000107c3ebcc();
  func_0x000107c61170(ppuVar2);
  if ((int)ppuVar7 == 0) {
    return param_1;
  }
  if ((param_3 & 1) == 0) {
    return param_1;
  }
  ppuVar7 = &PTR____CFConstantStringClassReference_110f0bc98;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0bc98);
  appuStack_90[0] = (undefined **)0x4024000000000000;
  puStack_78 = PTR___sSdN_11034dd90;
  func_0x000100102924(appuStack_90,&puStack_70);
  ppuVar2 = param_1;
  func_0x000107c61558(param_1);
  appuStack_90[0] = param_1;
  func_0x0001001029e8(&puStack_70,ppuVar7,ppuVar9,ppuVar2);
LAB_102783908:
  func_0x000107c6142c(ppuVar9);
  return appuStack_90[0];
}



/* Entry: 102783bfc; end: 102783f33;  */

void FUN_102783bfc(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [32];
  long lStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uStack_90 = ~uVar6;
  puStack_98 = (ulong *)(param_1 + 0x40);
  uVar6 = -uVar6;
  uStack_80 = 0xffffffffffffffff;
  if (uVar6 < 0x40) {
    uStack_80 = ~(-1L << (uVar6 & 0x3f));
  }
  uStack_88 = 0;
  uStack_80 = uStack_80 & *puStack_98;
  lStack_a0 = param_1;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  func_0x000100216040(&uStack_d0);
  uVar2 = uStack_c8;
  uVar6 = uStack_d0;
  if (uStack_c8 == 0) goto LAB_102783ef0;
  func_0x000100102924(auStack_c0,auStack_f0);
  lVar9 = *param_5;
  uVar4 = uVar6;
  uVar5 = uVar2;
  func_0x000100029284();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar10 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_102783f2c:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102783f30);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar10) {
    func_0x000100102b0c(lVar10,param_4 & 1);
    uVar4 = uVar6;
    uVar8 = uVar2;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
LAB_102783d00:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102783d10);
      (*pcVar3)();
    }
LAB_102783d14:
    if ((uVar5 & 1) != 0) goto LAB_102783d18;
LAB_102783d70:
    lVar7 = *param_5;
    lVar10 = lVar7 + (uVar4 >> 6) * 8;
    *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar2;
    func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
LAB_102783f30:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102783f34);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_102783d14;
    func_0x0001010fc388();
    if ((uVar5 & 1) == 0) goto LAB_102783d70;
LAB_102783d18:
    lVar10 = *param_5;
    func_0x0001000bb420(auStack_f0,auStack_110);
    func_0x000107c6142c(uVar2);
    FUN_1027846b8(auStack_f0);
    lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
    FUN_1027846b8(lVar10);
    func_0x000100102924(auStack_110,lVar10);
  }
  func_0x000100216040(&uStack_d0);
  uVar6 = uStack_d0;
  uVar2 = uStack_c8;
  while (uVar2 != 0) {
    uStack_d0 = uVar6;
    uStack_c8 = uVar2;
    func_0x000100102924(auStack_c0,auStack_f0);
    lVar9 = *param_5;
    uVar4 = uVar6;
    uVar5 = uVar2;
    func_0x000100029284();
    lVar7 = *(long *)(lVar9 + 0x10);
    uVar8 = (ulong)~(uint)uVar5 & 1;
    lVar10 = lVar7 + uVar8;
    if (SCARRY8(lVar7,uVar8)) goto LAB_102783f2c;
    if (*(long *)(lVar9 + 0x18) < lVar10) {
      func_0x000100102b0c(lVar10,1);
      uVar4 = uVar6;
      uVar8 = uVar2;
      func_0x000100029284();
      if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) goto LAB_102783d00;
    }
    if ((uVar5 & 1) == 0) {
      lVar7 = *param_5;
      lVar10 = lVar7 + (uVar4 >> 6) * 8;
      *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar6;
      puVar1[1] = uVar2;
      func_0x000100102924(auStack_f0,*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) goto LAB_102783f30;
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    }
    else {
      lVar10 = *param_5;
      func_0x0001000bb420(auStack_f0,auStack_110);
      func_0x000107c6142c(uVar2);
      FUN_1027846b8(auStack_f0);
      lVar10 = *(long *)(lVar10 + 0x38) + uVar4 * 0x20;
      FUN_1027846b8(lVar10);
      func_0x000100102924(auStack_110,lVar10);
    }
    func_0x000100216040(&uStack_d0);
    uVar6 = uStack_d0;
    uVar2 = uStack_c8;
  }
LAB_102783ef0:
  func_0x000100216694(lStack_a0,puStack_98,uStack_90,uStack_88,uStack_80);
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 102783f34; end: 1027841cb;  */

undefined * FUN_102783f34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 auStack_90 [80];
  
  puVar8 = auStack_90;
  func_0x00010443bfa0();
  uVar7 = *param_1;
  uVar1 = param_1[1];
  lVar3 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  puVar2 = PTR___sSSN_11034da80;
  *(undefined **)(lVar3 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar3 + 0x28) = puVar8;
  *(undefined8 *)(lVar3 + 0x30) = 0xd00000000000001a;
  *(undefined8 *)(lVar3 + 0x38) = 0x800000010f0bad00;
  func_0x000107c61434(uVar1);
  lVar5 = lVar3;
  func_0x000100214a84(lVar3);
  func_0x000107c61588(lVar3);
  FUN_1027848a4((undefined8 *)(lVar3 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(uVar7,uVar1);
  func_0x000107c6142c(uVar1);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,puVar2,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar5);
  func_0x000107c466bc(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar3);
  return puVar6;
}



/* Entry: 1027841cc; end: 102784677;  */

long FUN_1027841cc(undefined8 param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  long lStack_120;
  undefined8 uStack_118;
  undefined *puStack_108;
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [128];
  
  uVar8 = param_1;
  func_0x000107c51784();
  lVar11 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar9 = auStack_e0;
  func_0x000107c61534();
  *(undefined8 *)(lVar11 + 0x18) = 4;
  *(undefined8 *)(lVar11 + 0x10) = 2;
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0bc38;
  func_0x000107c5faec();
  *(undefined8 *)(lVar11 + 0x20) = ppuVar2;
  *(undefined1 **)(lVar11 + 0x28) = puVar9;
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  uVar5 = 0x112d38c88;
  uVar4 = 0;
  FUN_102784cf8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  *(undefined8 *)(lVar11 + 0x48) = uVar4;
  *(undefined **)(lVar11 + 0x30) = puVar3;
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0c958;
  func_0x000107c5faec();
  *(undefined ***)(lVar11 + 0x50) = ppuVar2;
  *(undefined8 *)(lVar11 + 0x58) = uVar5;
  uVar5 = 0;
  FUN_102784cf8(0,0x112d46e68,&PTR__OBJC_CLASS___NSError_1126ae858);
  *(undefined8 *)(lVar11 + 0x78) = uVar5;
  *(undefined8 *)(lVar11 + 0x60) = param_1;
  func_0x000107c61174(param_1);
  lVar6 = lVar11;
  func_0x000100214a84();
  func_0x000107c61588(lVar11);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  puVar10 = (undefined8 *)0x2;
  func_0x000107c61408((undefined8 *)(lVar11 + 0x20),2,uVar5);
  iVar12 = (int)uVar8;
  if (iVar12 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0dc98;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0dc98);
    puVar3 = PTR___sSbN_11034dd40;
    lStack_120 = CONCAT71(lStack_120._1_7_,1);
    puStack_108 = PTR___sSbN_11034dd40;
    func_0x000100102924(&lStack_120,auStack_100);
    lVar11 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_120 = lVar6;
    func_0x0001001029e8(auStack_100,ppuVar2,puVar10,lVar11);
    func_0x000107c6142c();
    lVar11 = lStack_120;
    func_0x0001038eac98();
    uVar5 = *puVar10;
    uVar8 = puVar10[1];
    lStack_120 = CONCAT71(lStack_120._1_7_,1);
    puStack_108 = puVar3;
    func_0x000100102924(&lStack_120,auStack_100);
    func_0x000107c61434(uVar8);
    lVar6 = lVar11;
    func_0x000107c61558(lVar11);
    lStack_120 = lVar11;
    func_0x0001001029e8(auStack_100,uVar5,uVar8,lVar6);
    func_0x000107c6142c(uVar8);
    lVar6 = lStack_120;
  }
  lVar7 = 0x79616b6f;
  func_0x000107c5fadc(0x79616b6f,0xe400000000000000);
  uVar8 = 0;
  func_0x000107c5fe40();
  lVar11 = lVar7;
  uVar5 = uVar8;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uVar8);
  puVar3 = PTR___sSSN_11034da80;
  if (lVar11 != 0) {
    lVar7 = lVar11;
    func_0x000107c5faec();
    uVar8 = uVar5;
    func_0x000107c61170(lVar11);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0c938;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c938);
    puStack_108 = puVar3;
    lStack_120 = lVar7;
    uStack_118 = uVar5;
    func_0x000100102924(&lStack_120,auStack_100);
    lVar11 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_120 = lVar6;
    func_0x0001001029e8(auStack_100,ppuVar2,uVar8,lVar11);
    func_0x000107c6142c(uVar8);
    lVar6 = lStack_120;
  }
  lVar11 = -0x2fffffffffffffe3;
  pcVar1 = "sed_apps_music_photos";
  if (iVar12 == 0) {
    lVar11 = -0x2ffffffffffffff0;
    pcVar1 = "actoryServiceProvider";
  }
  func_0x000107c5fadc(lVar11,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  uVar8 = 0;
  func_0x000107c5fe40();
  lVar7 = lVar11;
  uVar5 = uVar8;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar8);
  if (lVar7 != 0) {
    lVar11 = lVar7;
    func_0x000107c5faec();
    uVar8 = uVar5;
    func_0x000107c61170(lVar7);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0c8f8;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c8f8);
    puStack_108 = puVar3;
    lStack_120 = lVar11;
    uStack_118 = uVar5;
    func_0x000100102924(&lStack_120,auStack_100);
    lVar11 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_120 = lVar6;
    func_0x0001001029e8(auStack_100,ppuVar2,uVar8,lVar11);
    func_0x000107c6142c(uVar8);
    lVar6 = lStack_120;
  }
  pcVar1 = "video_codec_unavailable_title";
  lVar11 = -0x2fffffffffffffe1;
  if (iVar12 == 0) {
    pcVar1 = "oops_exclamation";
    lVar11 = -0x2fffffffffffffdb;
  }
  func_0x000107c5fadc(lVar11,(ulong)pcVar1 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar1 | 0x8000000000000000);
  uVar8 = 0;
  func_0x000107c5fe40();
  lVar7 = lVar11;
  uVar5 = uVar8;
  func_0x000107c312f4();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uVar8);
  if (lVar7 != 0) {
    lVar11 = lVar7;
    func_0x000107c5faec();
    uVar8 = uVar5;
    func_0x000107c61170(lVar7);
    ppuVar2 = &PTR____CFConstantStringClassReference_110f0c918;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c918);
    puStack_108 = puVar3;
    lStack_120 = lVar11;
    uStack_118 = uVar5;
    func_0x000100102924(&lStack_120,auStack_100);
    lVar11 = lVar6;
    func_0x000107c61558(lVar6);
    lStack_120 = lVar6;
    func_0x0001001029e8(auStack_100,ppuVar2,uVar8,lVar11);
    func_0x000107c6142c(uVar8);
    lVar6 = lStack_120;
  }
  return lVar6;
}



/* Entry: 102784678; end: 1027846b7;  */

void FUN_102784678(long *param_1,code *param_2,long param_3)

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



/* Entry: 1027846b8; end: 1027846e7;  */

void FUN_1027846b8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001027846cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1027846e8; end: 1027846ff;  */

void FUN_1027846e8(long param_1)

{
  FUN_1027846b8(param_1 + 0x20);
  return;
}



/* Entry: 102784700; end: 10278473f;  */

void FUN_102784700(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 102784740; end: 1027847d3;  */

void FUN_102784740(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar9 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1027847d4;
  plVar9[7] = lVar1;
  plVar9[8] = lVar4;
  plVar9[5] = lVar8;
  plVar9[6] = lVar3;
  plVar9[3] = lVar6;
  plVar9[4] = lVar2;
  plVar9[2] = param_2;
  lVar6 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[9] = uVar7;
  lVar8 = 0;
  func_0x000107c5fcec();
  puVar5 = PTR___sScMMa_11034fc70;
  plVar9[10] = lVar8;
  lVar6 = lVar8;
  func_0x000107c5fce8();
  plVar9[0xb] = lVar6;
  lVar6 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar5,PTR___sScMScAsMc_11034fc78);
  plVar9[0xc] = lVar6;
  func_0x000107c5fca8();
  plVar9[0xd] = lVar8;
  plVar9[0xe] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277de68,lVar8,lVar6);
  return;
}



/* Entry: 1027847d4; end: 10278480f;  */

void FUN_1027847d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010278480c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102784810; end: 1027848a3;  */

void FUN_102784810(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = 0x102784f44;
  plVar8[0xe] = lVar3;
  plVar8[0xf] = lVar9;
  plVar8[0xc] = lVar5;
  plVar8[0xd] = lVar6;
  lVar5 = 0;
  func_0x000107c5fcec(0,uVar7,uVar2,uVar1);
  puVar4 = PTR___sScMMa_11034fc70;
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar8[0x10] = lVar6;
  uVar7 = 0x112d45220;
  FUN_102784678(0x112d45220,puVar4,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar5,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10277e2c8,lVar5,uVar7);
  return;
}



/* Entry: 1027848a4; end: 1027848e3;  */

undefined8 FUN_1027848a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



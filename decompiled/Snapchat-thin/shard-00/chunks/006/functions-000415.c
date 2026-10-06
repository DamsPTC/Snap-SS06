/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10089b360; end: 10089b373;  */

void FUN_10089b360(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b36c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10089b374; end: 10089b3fb;  */

long FUN_10089b374(undefined8 *param_1)

{
  long unaff_x19;
  
  *param_1 = &PTR_DAT_110cd35f0;
  func_0x000107c60ca0(param_1 + 0x13);
  func_0x0001006833b8(param_1 + 0x10);
  func_0x000100683178();
  FUN_10089b3fc(param_1[0xd]);
  FUN_10067c884(unaff_x19 + 0x70);
  FUN_100683368(unaff_x19 + 0x50);
  func_0x00010089b864(unaff_x19 + 0x18);
  FUN_100554470(unaff_x19 + 8);
  return unaff_x19;
}



/* Entry: 10089b3fc; end: 10089b487;  */

void FUN_10089b3fc(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10089b488; end: 10089b48f;  */

void FUN_10089b488(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10089b490; end: 10089b83b;  */

void FUN_10089b490(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100786b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* Entry: 10089b83c; end: 10089b83f;  */

void FUN_10089b83c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10089b840; end: 10089b88b;  */

void FUN_10089b840(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10089b88c; end: 10089b8db;  */

void FUN_10089b88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10089b8dc; end: 10089b9ab;  */

void FUN_10089b8dc(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  func_0x00010089b8a0();
  lVar3 = param_2;
  func_0x000100576480(param_1);
  do {
    lVar5 = param_2 + -0xff8;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          func_0x000107c60e14(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x24;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x49;
        }
        param_1[4] = lVar3;
        return;
      }
      (*(code *)**(undefined8 **)(param_2 + 8))((undefined8 *)(param_2 + 8));
      lVar5 = lVar5 + 0x38;
      param_2 = param_2 + 0x38;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 10089b9ac; end: 10089b9ef;  */

long * FUN_10089b9ac(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_10089b8dc();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    func_0x000107c60e14(*puVar2);
  }
  FUN_10089ba30();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10089b9f0; end: 10089ba2f;  */

undefined8 * FUN_10089b9f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110880f00;
  FUN_10089b9ac(param_1 + 9);
  func_0x000107c60d94(param_1 + 1);
  return param_1;
}



/* Entry: 10089ba30; end: 10089ba37;  */

void FUN_10089ba30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10089ba38; end: 10089ba63;  */

long * FUN_10089ba38(long *param_1)

{
  FUN_10089ba30();
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 10089ba64; end: 10089ba87;  */

void FUN_10089ba64(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10089ba88; end: 10089bac3;  */

void FUN_10089ba88(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x000107c2ddf4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10089bac4; end: 10089baef;  */

undefined1 * FUN_10089bac4(void)

{
  undefined1 uStack0000000000000040;
  undefined1 uStack0000000000000050;
  
  uStack0000000000000040 = 0;
  uStack0000000000000050 = 0;
  func_0x00010066a1cc(&stack0x00000040,&stack0x000000c0);
  return &stack0x00000040;
}



/* Entry: 10089baf0; end: 10089bb2b;  */

void FUN_10089baf0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x23;
  
  func_0x00010089bad8();
  FUN_10089bb2c(*(undefined8 *)(unaff_x23 + 0x38));
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(unaff_x23 + 0x98) + 0x30);
  func_0x000100669788();
                    /* WARNING: Could not recover jumptable at 0x00010089c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10089bb2c; end: 10089bb37;  */

void FUN_10089bb2c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010089bb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return;
}



/* Entry: 10089bb38; end: 10089bcaf;  */

void FUN_10089bb38(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  code *extraout_x8;
  code *pcVar5;
  code *extraout_x8_00;
  long unaff_x19;
  
  func_0x00010071e654();
  puVar1 = (undefined8 *)(param_1 + 0x3f8);
  lVar3 = *(long *)(param_1 + 0x3f8);
  if (lVar3 != 0) {
    func_0x000100894d48();
    if ((((int)lVar3 == 0) || (*(int *)(unaff_x19 + 0x720) != 0x16)) ||
       (*(char *)(unaff_x19 + 2000) == '\x01')) {
      func_0x00010089bca0(*puVar1);
      pcVar5 = extraout_x8;
    }
    else {
      iVar2 = (int)*puVar1;
      func_0x000100894d34();
      plVar4 = (long *)*puVar1;
      if (iVar2 == 0) {
        *(undefined8 *)(unaff_x19 + 0x3f8) = 0;
        (**(code **)(*plVar4 + 0x90))(plVar4,*(undefined8 *)(unaff_x19 + 0x38));
        goto LAB_10089bb84;
      }
      func_0x00010089bca0();
      pcVar5 = extraout_x8_00;
    }
    (*pcVar5)();
  }
LAB_10089bb84:
  if ((*(long *)(unaff_x19 + 0x58) != 0) && (*(long *)(*(long *)(unaff_x19 + 0x58) + 0x178) != 0)) {
    func_0x00010078521c();
  }
  func_0x0001001c6900(unaff_x19 + 0x780);
  func_0x000100140e00(unaff_x19 + 0x778);
  func_0x000100140e00(unaff_x19 + 0x770);
  func_0x000100140e00(unaff_x19 + 0x768);
  func_0x000100140e00(unaff_x19 + 0x760);
  func_0x000100140e00(unaff_x19 + 0x758);
  func_0x000107c60ca0(unaff_x19 + 0x730);
  func_0x0001001f1ba4(unaff_x19 + 0x6f0);
  func_0x0001001ab2f8(unaff_x19 + 0x6d8);
  func_0x0001001a8104(unaff_x19 + 0x570);
  func_0x0001001a8104(unaff_x19 + 0x408);
  func_0x0001001c649c(puVar1);
  func_0x000100624e30(unaff_x19 + 0x3f0);
  func_0x0001001c6990(unaff_x19 + 0x3a8);
  func_0x0001001778d4(unaff_x19 + 0x2e0);
  func_0x00010082c7dc(unaff_x19 + 0xe0);
  func_0x0001001832d8(unaff_x19 + 0x60);
  func_0x000100140e00(unaff_x19 + 0x30);
  func_0x000100140e00(unaff_x19 + 0x28);
  lVar3 = 0x18;
  do {
    func_0x000100784ac4(unaff_x19 + lVar3);
    lVar3 = lVar3 + -8;
  } while (lVar3 != 8);
  return;
}



/* Entry: 10089bcb0; end: 10089bcc3;  */

bool FUN_10089bcb0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  puVar1 = (undefined8 *)**(long **)(*(long *)(param_2 + 0x10) + 0x40);
  puVar2 = puVar1;
  func_0x00010067cf30(puVar1,param_1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x00010067d054();
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    if (puVar3[1] != 0) {
      do {
        FUN_10067d860();
      } while (extraout_w10 != 0);
    }
    uVar4 = puVar1[5];
    FUN_10089bda0(uVar4,puVar1[6],&uStack_50);
    FUN_10089bdc0(puVar1,auStack_38);
    FUN_10089bfbc(puVar1 + 5,uVar4);
    FUN_10089c050();
  }
  return puVar2 != (undefined8 *)0x0;
}



/* Entry: 10089bcc4; end: 10089bcdf;  */

void FUN_10089bcc4(void)

{
  undefined1 in_ZR;
  int iVar1;
  long *plVar2;
  long **pplVar3;
  code *extraout_x8;
  undefined8 unaff_x19;
  long *plStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  long *aplStack_40 [2];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  FUN_10089bcb0();
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10067d9d4(aplStack_40,1);
  puStack_48 = puStack_30;
  *puStack_30 = &PTR_DAT_1108789a8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_FUN_110878a10;
  puStack_30[4] = FUN_10067dc4c;
  puStack_30[5] = &PTR_FUN_110cd2cc0;
  puStack_30[6] = unaff_x19;
  puStack_30 = (undefined8 *)0x0;
  plVar2 = puStack_48 + 3;
  iVar1 = (int)aplStack_40;
  plStack_50 = plVar2;
  FUN_10067db54();
  FUN_10060f340();
  if (iVar1 != 0) {
    func_0x000107c2c7a8(aplStack_40);
    plVar2 = aplStack_40[0];
    FUN_100669930();
    iVar1 = (int)plVar2;
    (*extraout_x8)();
    func_0x000107c35834();
    plVar2 = plStack_50;
    if (iVar1 == 0) {
      func_0x000107c2c7a8(aplStack_40);
      puStack_58 = puStack_48;
      plStack_60 = plStack_50;
      plStack_50 = (long *)0x0;
      puStack_48 = (undefined8 *)0x0;
      (**(code **)(*aplStack_40[0] + 0x10))(aplStack_40[0],&plStack_60);
      FUN_100576684(&plStack_60);
      func_0x000107c35834();
      goto LAB_10067daf4;
    }
  }
  (**(code **)(*plVar2 + 0x10))(plVar2);
LAB_10067daf4:
  FUN_10068f378(&plStack_50);
  func_0x0001006696e4(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c3580c();
  FUN_100576684();
  func_0x000107c35834();
  pplVar3 = &plStack_50;
  FUN_10068f378();
  func_0x000107c357f0();
  if (pplVar3[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10089bce0; end: 10089bce7;  */

bool FUN_10089bce0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = puVar1;
  func_0x00010067cf30();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
    func_0x00010067d054();
    uStack_48 = puVar3[1];
    uStack_50 = *puVar3;
    if (puVar3[1] != 0) {
      do {
        FUN_10067d860();
      } while (extraout_w10 != 0);
    }
    uVar4 = puVar1[5];
    FUN_10089bda0(uVar4,puVar1[6],&uStack_50);
    FUN_10089bdc0(puVar1,auStack_38);
    FUN_10089bfbc(puVar1 + 5,uVar4);
    FUN_10089c050();
  }
  return puVar2 != (undefined8 *)0x0;
}



/* Entry: 10089bce8; end: 10089bd7b;  */

bool FUN_10089bce8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int extraout_w10;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [8];
  
  puVar1 = param_1;
  func_0x00010067cf30();
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010067d054();
    uStack_48 = puVar2[1];
    uStack_50 = *puVar2;
    if (puVar2[1] != 0) {
      do {
        FUN_10067d860();
      } while (extraout_w10 != 0);
    }
    uVar3 = param_1[5];
    FUN_10089bda0(uVar3,param_1[6],&uStack_50);
    FUN_10089bdc0(param_1,auStack_38);
    FUN_10089bfbc(param_1 + 5,uVar3);
    FUN_10089c050();
  }
  return puVar1 != (undefined8 *)0x0;
}



/* Entry: 10089bd7c; end: 10089bd9f;  */

void FUN_10089bd7c(long *param_1,long *param_2,long *param_3)

{
  for (; (param_1 != param_2 && (*param_1 != *param_3)); param_1 = param_1 + 2) {
  }
  return;
}



/* Entry: 10089bda0; end: 10089bdbf;  */

void FUN_10089bda0(void)

{
  FUN_10089bd7c();
  return;
}



/* Entry: 10089bdc0; end: 10089bdef;  */

void FUN_10089bdc0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10067cfb8();
  if (lVar1 != 0) {
    FUN_10089bf0c(param_1,lVar1);
  }
  return;
}



/* Entry: 10089bdf0; end: 10089bf0b;  */

void FUN_10089bdf0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10089bea4;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10089bea4;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10089bea4:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10089bf0c; end: 10089bf87;  */

undefined8 FUN_10089bf0c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_10089bdf0(auStack_38);
  func_0x00010067d444();
  return uVar1;
}



/* Entry: 10089bf88; end: 10089bf9b;  */

long FUN_10089bf88(void)

{
  long unaff_x29;
  
  return unaff_x29 + -1;
}



/* Entry: 10089bf9c; end: 10089bfbb;  */

void FUN_10089bf9c(void)

{
  FUN_10089bf88();
  FUN_10089bff4();
  return;
}



/* Entry: 10089bfbc; end: 10089bff3;  */

long FUN_10089bfbc(long param_1,long param_2)

{
  FUN_10089bf9c(param_2 + 0x10,*(undefined8 *)(param_1 + 8),param_2);
  FUN_10067f578(param_1);
  return param_2;
}



/* Entry: 10089bff4; end: 10089c04f;  */

undefined1  [16] FUN_10089bff4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x000107c2c608(lVar1,param_2);
    lVar1 = lVar1 + 0x10;
    param_4 = param_4 + 0x10;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 10089c050; end: 10089c05f;  */

void FUN_10089c050(void)

{
  long in_stack_00000008;
  
  if (in_stack_00000008 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10089c060; end: 10089c13f;  */

void FUN_10089c060(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089c068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 10089c140; end: 10089c14f;  */

void FUN_10089c140(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00010089c14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10089c150; end: 10089c87f;  */

void FUN_10089c150(undefined8 param_1,undefined8 param_2,long param_3,undefined *****param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *****pppppuVar8;
  undefined ****ppppuVar9;
  undefined ****ppppuVar10;
  long *plVar11;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x9;
  long unaff_x19;
  undefined *****pppppuVar12;
  uint in_stack_fffffffffffffa30;
  uint uVar13;
  undefined ****ppppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined8 uStack_5b0;
  undefined1 auStack_3b0 [24];
  undefined1 uStack_398;
  undefined1 auStack_390 [8];
  long lStack_388;
  uint auStack_380 [2];
  undefined ****ppppuStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_360;
  undefined1 uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  undefined ****ppppuStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined ****ppppuStack_310;
  undefined ****ppppuStack_308;
  undefined **ppuStack_300;
  undefined ****ppppuStack_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  undefined4 uStack_2e8;
  int iStack_2c8;
  undefined ****ppppuStack_c0;
  long lStack_b8;
  undefined ****ppppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_90;
  undefined ****appppuStack_80 [4];
  
  puVar6 = &stack0xfffffffffffffa30;
  func_0x000100689a14();
  appppuStack_80[3] = (undefined ****)extraout_x8;
  FUN_10089c880(&lStack_338,unaff_x19 + 0x18);
  lStack_348 = lStack_338;
  lStack_340 = lStack_330;
  if (lStack_330 == 0) {
    lStack_388 = 0;
  }
  else {
    plVar11 = (long *)(lStack_330 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lStack_388 = lStack_330;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar4) {
        *plVar11 = *plVar11 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (*(char *)(param_4 + 2) == '\x01') {
    FUN_10089c8bc();
    iVar1 = iStack_2c8;
    func_0x00010089c8c4();
    if (((iVar1 != 9) || (*(char *)(param_3 + 0x178) != '\x01')) ||
       (*(int *)(param_3 + 0xf8) != 400)) goto LAB_10089c284;
    func_0x00010089c8cc();
    FUN_10089c8bc();
    lStack_b8 = (long)ppuStack_300;
    ppppuStack_c0 = ppppuStack_308;
    ppppuStack_b0 = ppppuStack_2f8;
    func_0x000107c35778();
    func_0x00010089c8c4();
    pppppuVar12 = (undefined *****)ppppuStack_c0;
    pppppuVar8 = (undefined *****)((long)ppppuStack_c0 + lStack_b8);
    if (-1 < (long)ppppuStack_b0) {
      pppppuVar12 = &ppppuStack_c0;
      pppppuVar8 = (undefined *****)((long)&ppppuStack_c0 + ((ulong)ppppuStack_b0 >> 0x38));
    }
    for (; pppppuVar12 != pppppuVar8; pppppuVar12 = (undefined *****)((long)pppppuVar12 + 1)) {
      uVar5 = *(undefined1 *)pppppuVar12;
      func_0x000107c60e80();
      *(undefined1 *)pppppuVar12 = uVar5;
    }
    pppppuVar8 = &ppppuStack_c0;
    FUN_1005d480c(pppppuVar8,&UNK_10e572a2e,0);
    if (pppppuVar8 == (undefined *****)0xffffffffffffffff) {
      uVar13 = in_stack_fffffffffffffa30 & 0xffffff00;
      uVar5 = false;
    }
    else {
      ppppuVar9 = *param_4;
      if (ppppuVar9 == (undefined ****)0x0) {
        ppppuVar9 = (undefined ****)0x0;
LAB_10089c574:
        ppppuVar10 = (undefined ****)0x0;
      }
      else {
        func_0x00010067cdbc();
        (*extraout_x8_02)();
        ppppuVar10 = *param_4;
        if (ppppuVar10 == (undefined ****)0x0) goto LAB_10089c574;
        func_0x000107c357c8();
        (*extraout_x8_03)();
      }
      pppppuVar8 = appppuStack_80;
      func_0x000107c60c50(pppppuVar8,ppppuVar9,ppppuVar10);
      func_0x000107c3576c();
      if ((pppppuVar8 == (undefined *****)0xffffffffffffffff) &&
         (func_0x000107c3576c(), pppppuVar8 == (undefined *****)0xffffffffffffffff)) {
        uVar13 = in_stack_fffffffffffffa30 & 0xffffff00;
        uVar5 = false;
      }
      else {
        FUN_10002b838(&ppppuStack_328,&UNK_10f74246c);
        ppuStack_5c0 = ppuStack_320;
        ppppuStack_5c8 = ppppuStack_328;
        ppppuStack_310 = (undefined ****)CONCAT44(ppppuStack_310._4_4_,0x3ec);
        ppuStack_300 = ppuStack_320;
        ppppuStack_308 = ppppuStack_328;
        ppuStack_320 = (undefined **)0x0;
        ppppuStack_328 = (undefined ****)0x0;
        uStack_318 = 0;
        uStack_2f0 = 4;
        uStack_2ec = uStack_2ec & 0xffffff00;
        uStack_2e8 = 0xffffffff;
        uVar13 = 0x3ec;
        func_0x000107c35778();
        uStack_5b0 = CONCAT44(uStack_2ec,uStack_2f0);
        uVar5 = true;
        func_0x000107c60ca0(extraout_x9 + 8);
        func_0x000107c60ca0(&ppppuStack_328);
      }
      func_0x000107c35764();
    }
    func_0x000107c60ca0(&ppppuStack_c0);
    if (!(bool)uVar5) goto LAB_10089c284;
    ppuStack_370 = ppuStack_5c0;
    ppppuStack_378 = ppppuStack_5c8;
    uStack_360 = uStack_5b0;
    uStack_350 = 1;
    auStack_380[0] = uVar13;
  }
  else {
LAB_10089c284:
    uVar5 = *(char *)(param_4 + 2) == '\x01';
    if ((bool)uVar5) {
      func_0x00010089c8cc();
      FUN_10089c8bc();
      uVar5 = iStack_2c8 == 9;
      if ((!(bool)uVar5) || ((*(byte *)(unaff_x19 + 0xd8) & 1) == 0)) {
        func_0x00010089c8c4();
        goto LAB_10089c2c0;
      }
      if ((*(byte *)(unaff_x19 + 0xd2) & 1) == 0) {
        bVar2 = *(byte *)(unaff_x19 + 0xd3);
        func_0x00010089c8c4();
        if ((bVar2 & 1) == 0) goto LAB_10089c2c0;
      }
      else {
        func_0x00010089c8c4();
      }
      iVar1 = *(int *)(param_3 + 0xf8);
      if (*(char *)(unaff_x19 + 0xd3) != '\x01') {
        uVar5 = iVar1 == 500;
        if (!(bool)uVar5) goto LAB_10089c2c0;
        func_0x00010089c8cc();
        FUN_10089c8bc();
        appppuStack_80[1] = (undefined ****)ppuStack_300;
        appppuStack_80[0] = ppppuStack_308;
        appppuStack_80[2] = ppppuStack_2f8;
        func_0x000107c35778();
        func_0x00010089c8c4();
        pppppuVar12 = (undefined *****)appppuStack_80[0];
        pppppuVar8 = (undefined *****)((long)appppuStack_80[0] + (long)appppuStack_80[1]);
        if (-1 < (long)appppuStack_80[2]) {
          pppppuVar12 = appppuStack_80;
          pppppuVar8 = (undefined *****)((long)appppuStack_80 + ((ulong)appppuStack_80[2] >> 0x38));
        }
        for (; pppppuVar12 != pppppuVar8; pppppuVar12 = (undefined *****)((long)pppppuVar12 + 1)) {
          uVar5 = *(undefined1 *)pppppuVar12;
          func_0x000107c60e80();
          *(undefined1 *)pppppuVar12 = uVar5;
        }
        ppppuVar9 = *param_4;
        if (ppppuVar9 == (undefined ****)0x0) {
          ppppuVar9 = (undefined ****)0x0;
LAB_10089c678:
          ppppuVar10 = (undefined ****)0x0;
        }
        else {
          func_0x00010067cdbc();
          (*extraout_x8_04)();
          ppppuVar10 = *param_4;
          if (ppppuVar10 == (undefined ****)0x0) goto LAB_10089c678;
          func_0x000107c357c8();
          (*extraout_x8_05)();
        }
        pppppuVar8 = &ppppuStack_310;
        func_0x000107c60c50(pppppuVar8,ppppuVar9,ppppuVar10);
        func_0x000107c3576c();
        uVar5 = pppppuVar8 == (undefined *****)0xffffffffffffffff;
        if (!(bool)uVar5) {
          pppppuVar8 = &ppppuStack_310;
          FUN_1005d480c(pppppuVar8,&UNK_10e572a5d,0);
          uVar5 = pppppuVar8 == (undefined *****)0xffffffffffffffff;
          if (!(bool)uVar5) {
            func_0x000107c60ca0(&ppppuStack_310);
            func_0x000107c35764();
            goto LAB_10089c6c4;
          }
        }
        ppppuStack_c0 = (undefined ****)((ulong)ppppuStack_c0 & 0xffffffffffffff00);
        uStack_90 = 0;
        func_0x000107c60ca0(&ppppuStack_310);
        func_0x000107c35764();
        goto LAB_10089c2c8;
      }
      uVar5 = iVar1 == 499;
      if (iVar1 < 500) goto LAB_10089c2c0;
LAB_10089c6c4:
      FUN_10002b838(&ppppuStack_328,&UNK_10f74249e);
      ppppuStack_b0 = (undefined ****)ppuStack_320;
      lStack_b8 = (long)ppppuStack_328;
      ppppuStack_310 = (undefined ****)CONCAT44(ppppuStack_310._4_4_,0x3ee);
      ppuStack_300 = ppuStack_320;
      ppppuStack_308 = ppppuStack_328;
      ppuStack_320 = (undefined **)0x0;
      ppppuStack_328 = (undefined ****)0x0;
      uStack_318 = 0;
      uStack_2f0 = 0xb;
      uStack_2ec = uStack_2ec & 0xffffff00;
      uStack_2e8 = 0xffffffff;
      ppppuStack_c0 = (undefined ****)CONCAT44(ppppuStack_c0._4_4_,0x3ee);
      func_0x000107c35778(&ppppuStack_310);
      uStack_a0 = CONCAT44(uStack_2ec,uStack_2f0);
      uStack_90 = 1;
      func_0x000107c60ca0(extraout_x8_06 + 8);
      func_0x000107c60ca0(&ppppuStack_328);
      auStack_380[0] = 0x3ee;
      ppuStack_370 = (undefined **)ppppuStack_b0;
      ppppuStack_378 = (undefined ****)lStack_b8;
      lStack_b8 = 0;
      ppppuStack_b0 = (undefined ****)0x0;
      uStack_360 = uStack_a0;
      uStack_a8 = 0;
      uStack_350 = 1;
    }
    else {
LAB_10089c2c0:
      ppppuStack_c0 = (undefined ****)((ulong)ppppuStack_c0 & 0xffffffffffffff00);
      uStack_90 = 0;
LAB_10089c2c8:
      auStack_380[0] = auStack_380[0] & 0xffffff00;
      uStack_350 = 0;
    }
    FUN_10089a920(&ppppuStack_c0);
  }
  FUN_10089a920();
  func_0x00010089c8dc();
  FUN_10089a920(auStack_380);
  FUN_10089c97c(auStack_390);
  FUN_10089c97c(&lStack_348);
  if (((ulong)puVar6 & 1) == 0) {
    (**(code **)**(undefined8 **)(unaff_x19 + 0x78))();
  }
  func_0x00010089cd80();
  puVar7 = auStack_3b0;
  FUN_10066a208();
  uStack_398 = SUB81(puVar6,0);
  FUN_10060f340();
  if ((int)puVar7 != 0) {
    func_0x000107c3573c();
    (*extraout_x8_00)();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000107c2c654(&ppppuStack_310,*(undefined8 *)(unaff_x19 + 8),
                          *(undefined8 *)(unaff_x19 + 0x10));
      func_0x000107c2c6b0(&ppuStack_300,&stack0xfffffffffffffa30);
      FUN_10089ca94(appppuStack_80);
      ppppuVar9 = appppuStack_80[2];
      func_0x000107c35724();
      ppppuStack_c0 = (undefined ****)&UNK_10b2d8c78;
      lStack_b8 = (long)&PTR_DAT_110cd2750;
      ppppuVar10 = (undefined ****)0x250;
      func_0x000107c60e20();
      ppppuVar10[1] = (undefined ***)ppppuStack_308;
      *ppppuVar10 = (undefined ***)ppppuStack_310;
      ppppuStack_308 = (undefined ****)0x0;
      ppppuStack_310 = (undefined ****)0x0;
      func_0x000107c2c6b0(ppppuVar10 + 2,&ppuStack_300);
      ppppuVar9[3] = (undefined ***)&PTR_FUN_110878a10;
      ppppuVar9[4] = (undefined ***)&UNK_10b2d8c78;
      ppppuVar9[5] = (undefined ***)&PTR_DAT_110cd2750;
      ppppuVar9[6] = (undefined ***)ppppuVar10;
      ppppuStack_b0 = (undefined ****)0x0;
      func_0x000107c2c6ac(&lStack_b8);
      ppppuVar9 = appppuStack_80[2];
      appppuStack_80[2] = (undefined ****)0x0;
      func_0x000107c357d0();
      func_0x000107c2c6b4(&ppppuStack_310);
      ppppuStack_308 = ppppuVar9;
      ppuStack_320 = (undefined **)0x0;
      ppppuStack_328 = (undefined ****)0x0;
      ppppuStack_310 = ppppuVar9 + 3;
      func_0x00010067cdbc(*(undefined8 *)(unaff_x19 + 0xe0));
      param_4 = &ppppuStack_310;
      (*extraout_x8_01)();
      FUN_100576684(&ppppuStack_310);
      FUN_10068f378(&ppppuStack_328);
      goto LAB_10089c428;
    }
  }
  FUN_10089ce50(&stack0xfffffffffffffa30);
LAB_10089c428:
  FUN_1008a4020(&stack0xfffffffffffffa30);
  func_0x00010067c914();
  func_0x00010068e834(appppuStack_80[3]);
  if ((bool)uVar5) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c35764();
  func_0x000107c60ca0(&ppppuStack_c0);
  FUN_10089c97c(auStack_390);
  FUN_10089c97c(&lStack_348);
  plVar11 = &lStack_338;
  func_0x00010067c914();
  func_0x000107c35748();
  *plVar11 = 0;
  plVar11[1] = 0;
  ppppuVar9 = param_4[1];
  if (ppppuVar9 != (undefined ****)0x0) {
    func_0x000107c60d6c();
    plVar11[1] = (long)ppppuVar9;
    if (ppppuVar9 != (undefined ****)0x0) {
      *plVar11 = (long)*param_4;
    }
  }
  return;
}



/* Entry: 10089c880; end: 10089c8bb;  */

void FUN_10089c880(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    func_0x000107c60d6c();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 10089c8bc; end: 10089c8e7;  */

void FUN_10089c8bc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x00010089c8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(&stack0x000002c0);
  return;
}



/* Entry: 10089c8e8; end: 10089c97b;  */

undefined1 * FUN_10089c8e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long alStack_40 [2];
  
  plVar1 = alStack_40;
  if (*(char *)(param_4 + 0x30) == '\x01') {
    func_0x000107c2c69c(alStack_40,param_2);
    func_0x00010067cd60(alStack_40[0] + 0x158,param_1 + 0x28);
    (**(code **)(param_1 + 0x38))(alStack_40,param_3,param_4,(undefined8 *)(param_1 + 0x38));
    func_0x000107c357bc();
  }
  else {
    plVar1 = (long *)0x0;
  }
  return (undefined1 *)plVar1;
}



/* Entry: 10089c97c; end: 10089c9a3;  */

long FUN_10089c97c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10089c9a4; end: 10089c9ab;  */

long FUN_10089c9a4(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x9;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + -0x20;
  func_0x00010067c994();
  uVar1 = (*(uint *)(param_1 + 0x120) & 0xfffffffe) == 2;
  lVar3 = param_1;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    *(undefined1 *)(param_1 + 0x124) = 1;
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_10054f908();
      uVar4 = lVar3 - *(long *)(param_1 + 0x128);
      uVar1 = uVar4 == 0x3e9;
      if (uVar4 < 0x3e9) goto LAB_10089ca64;
    }
    FUN_10054f908();
    *(long *)(param_1 + 0x128) = lVar3;
    FUN_10089ca94(&lStack_50);
    func_0x00010089ca9c();
    lVar2 = lStack_40;
    *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x18) = extraout_x9;
    *(code **)(extraout_x8_00 + 0x20) = FUN_1008a5d14;
    *(undefined ***)(extraout_x8_00 + 0x28) = &PTR_FUN_110cd27e0;
    *(long *)(extraout_x8_00 + 0x30) = param_1;
    lStack_40 = 0;
    FUN_10067db54(&lStack_50);
    lVar3 = *(long *)(param_1 + 0x38);
    lStack_48 = lVar2;
    lStack_50 = lVar2 + 0x18;
    func_0x00010067cdbc();
    (*extraout_x8_01)();
    FUN_10089cd60();
    func_0x00010089cd68();
  }
LAB_10089ca64:
  func_0x00010068e834(uStack_38);
  if ((bool)uVar1) {
    return lVar3;
  }
  func_0x000107c60e78();
  FUN_10089cd60();
  func_0x00010089cd68();
  func_0x000107c35748();
  *(undefined8 *)(lVar3 + 8) = 1;
  lVar2 = lVar3;
  FUN_10067d9a8();
  *(long *)(lVar3 + 0x10) = lVar2;
  return lVar3;
}



/* Entry: 10089c9ac; end: 10089ca93;  */

long FUN_10089c9ac(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 extraout_x9;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x00010067c994();
  uVar1 = (*(uint *)(param_1 + 0x120) & 0xfffffffe) == 2;
  lVar3 = param_1;
  uStack_38 = extraout_x8;
  if ((bool)uVar1) {
    *(undefined1 *)(param_1 + 0x124) = 1;
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_10054f908();
      uVar4 = lVar3 - *(long *)(param_1 + 0x128);
      uVar1 = uVar4 == 0x3e9;
      if (uVar4 < 0x3e9) goto LAB_10089ca64;
    }
    FUN_10054f908();
    *(long *)(param_1 + 0x128) = lVar3;
    FUN_10089ca94(&lStack_50);
    func_0x00010089ca9c();
    lVar2 = lStack_40;
    *(undefined8 *)(extraout_x8_00 + 0x10) = 0;
    *(undefined8 *)(extraout_x8_00 + 0x18) = extraout_x9;
    *(code **)(extraout_x8_00 + 0x20) = FUN_1008a5d14;
    *(undefined ***)(extraout_x8_00 + 0x28) = &PTR_FUN_110cd27e0;
    *(long *)(extraout_x8_00 + 0x30) = param_1;
    lStack_40 = 0;
    FUN_10067db54(&lStack_50);
    lVar3 = *(long *)(param_1 + 0x38);
    lStack_48 = lVar2;
    lStack_50 = lVar2 + 0x18;
    func_0x00010067cdbc();
    (*extraout_x8_01)();
    FUN_10089cd60();
    func_0x00010089cd68();
  }
LAB_10089ca64:
  func_0x00010068e834(uStack_38);
  if ((bool)uVar1) {
    return lVar3;
  }
  func_0x000107c60e78();
  FUN_10089cd60();
  func_0x00010089cd68();
  func_0x000107c35748();
  *(undefined8 *)(lVar3 + 8) = 1;
  lVar2 = lVar3;
  FUN_10067d9a8();
  *(long *)(lVar3 + 0x10) = lVar2;
  return lVar3;
}



/* Entry: 10089ca94; end: 10089cabf;  */

long FUN_10089ca94(long param_1)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = 1;
  lVar1 = param_1;
  FUN_10067d9a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10089cac0; end: 10089ccb3;  */

undefined8 * FUN_10089cac0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cdede0;
  func_0x000100140e00(param_1 + 2);
  func_0x00010089cb00(param_1 + 1);
  return param_1;
}



/* Entry: 10089ccb4; end: 10089ccdf;  */

undefined8 * FUN_10089ccb4(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 10089cce0; end: 10089cd07;  */

undefined8 * FUN_10089cce0(undefined8 *param_1)

{
  FUN_10089ccb4(param_1 + 3);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c60e14(*param_1);
  }
  return param_1;
}



/* Entry: 10089cd08; end: 10089cd0f;  */

void FUN_10089cd08(void)

{
  return;
}



/* Entry: 10089cd10; end: 10089cd5f;  */

long * FUN_10089cd10(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x000107c3640c();
  }
  return param_1;
}



/* Entry: 10089cd60; end: 10089cd8b;  */

void FUN_10089cd60(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x00000010;
  FUN_10046e218();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10089cd8c; end: 10089ce4f;  */

undefined8 * FUN_10089cd8c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cdfc18;
  func_0x0001001746b0(param_1 + 0x2e);
  func_0x000100140e00(param_1 + 0x2d);
  func_0x00010089cde8(param_1 + 10);
  func_0x0001001f1ba4(param_1 + 7);
  func_0x0001001f1ba4(param_1 + 6);
  func_0x00010089ce1c(param_1 + 5);
  return param_1;
}



/* Entry: 10089ce50; end: 10089ce8f;  */

void FUN_10089ce50(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x28) + 0x30))
            (*(long **)(*param_1 + 0x28),param_1[1],param_1 + 2,param_1 + 0x44,(char)param_1[0x47]);
  return;
}



/* Entry: 10089ce90; end: 10089cf07;  */

void FUN_10089ce90(undefined8 param_1)

{
  func_0x00010089ce78();
  FUN_10088f1ec();
  func_0x000107c61180();
  FUN_1008377cc();
  func_0x000107c61180();
  FUN_10089d500();
  func_0x000107c4dd38();
  func_0x0001008a3e1c();
  func_0x00010067ae84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10089cf08; end: 10089d073;  */

undefined8 FUN_10089cf08(undefined8 *param_1)

{
  return *param_1;
}



/* Entry: 10089d074; end: 10089d15b;  */

void FUN_10089d074(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar8 = PTR_PTR_1126e0230;
  func_0x000107c610f4();
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  uVar15 = param_1[7];
  uVar14 = param_1[6];
  uVar12 = param_1[9];
  uVar10 = param_1[8];
  uVar13 = param_1[0xb];
  uVar11 = param_1[10];
  uVar9 = param_1[0xc];
  uVar7 = *(undefined1 *)(param_1 + 0xd);
  FUN_1006a7df8();
  func_0x000107c61180();
  func_0x000107c483b0(puVar8,param_2,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar14,uVar15,uVar10,uVar12
                      ,uVar11,uVar13,uVar9,uVar7);
  FUN_10089d43c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10089d15c; end: 10089d32b;  */

undefined8 * FUN_10089d15c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ce8f78;
  (**(code **)(*(long *)param_1[0xb] + 0x18))();
  func_0x0001001746b0(param_1 + 0xc);
  *param_1 = &PTR_DAT_110cd7b50;
  func_0x000100140e00(param_1 + 5);
  return param_1;
}



/* Entry: 10089d32c; end: 10089d43b; -[SCNNetworkTypesCronetMetrics initWithRequestStart:dnsStart:dnsEnd:connectStart:connectEnd:sslStart:sslEnd:sendingStart:sendingEnd:pushStart:pushEnd:responseStart:requestEnd:socketReused:sentByteCount:receivedByteCount:serverAddress:] */

undefined1 *
FUN_10089d32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined1 param_16,
             undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_20);
  puStack_68 = PTR_PTR_11270b850;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    *(undefined8 *)((long)puVar1 + 0x50) = param_11;
    *(undefined8 *)((long)puVar1 + 0x58) = param_12;
    *(undefined8 *)((long)puVar1 + 0x60) = param_13;
    *(undefined8 *)((long)puVar1 + 0x68) = param_14;
    *(undefined1 *)((long)puVar1 + 8) = param_16;
    *(undefined8 *)((long)puVar1 + 0x70) = param_15;
    *(undefined8 *)((long)puVar1 + 0x78) = param_18;
    *(undefined8 *)((long)puVar1 + 0x80) = param_19;
    uVar2 = param_20;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_20);
  return (undefined1 *)puVar1;
}



/* Entry: 10089d43c; end: 10089d443;  */

void FUN_10089d43c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10089d444; end: 10089d487;  */

void FUN_10089d444(void)

{
  func_0x000107c610f4(PTR_PTR_1126e0280);
  func_0x000107c490e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10089d488; end: 10089d4ff; -[SCNNetworkTypesRequestContextUpdate initWithUpdateIndex:updateTimeMillis:updatedPriority:updatedImportance:updatedTrigger:updatedPageId:] */

void FUN_10089d488(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_11270b8c0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
  }
  return;
}



/* Entry: 10089d500; end: 10089d51b;  */

void FUN_10089d500(void)

{
  return;
}



/* Entry: 10089d51c; end: 10089d813; -[SCHTTPRequestCallback onSucceeded:info:buffer:willRetry:] */

void FUN_10089d51c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,uint param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  if (param_5 == (undefined *)0x0 && *(long *)(param_1 + 8) == 0) {
    param_5 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x000107c41214(PTR__OBJC_CLASS___NSData_1126ae778);
    func_0x000107c61180();
  }
  puVar5 = PTR_PTR_1126dfd70;
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_4;
  func_0x000107c50664(param_4);
  func_0x000107c61180();
  func_0x000107c5bd18(puVar5,param_2,uVar6,uVar1,param_5);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (*(long *)(param_1 + 8) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar6);
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c50384();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    FUN_10089dcf4(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar6);
    puVar2 = PTR_PTR_1126dfd70;
    if (puVar5 == (undefined *)0x0) {
      uVar1 = param_4;
      func_0x000107c50664(param_4);
      func_0x000107c61180();
      func_0x000107c44f64(puVar2,param_2,uVar1);
      func_0x000107c61180();
      puVar3 = puVar2;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(uVar1);
      puVar4 = *(undefined **)(param_1 + 0x10);
      func_0x000107c50300(puVar4);
      func_0x000107c61180();
      puVar2 = puVar4;
      func_0x000107c503d8();
      func_0x000107c61180();
      puVar7 = puVar2;
      func_0x000107c4e378();
      func_0x000107c61180();
      puVar5 = (undefined *)0x0;
      func_0x000107c61174(0);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    else {
      func_0x000107c61174(param_5);
      puVar7 = param_5;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar6);
    func_0x000107c61180();
    uVar1 = uVar6;
    func_0x000107c50384();
    func_0x000107c61180();
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c61180();
    func_0x000107c5c9e4();
    func_0x000107c59dd4(uVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar6);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  func_0x000107c4dc10(param_1,param_2,puVar7,*(undefined8 *)(param_1 + 0x40),param_4,puVar5,
                      param_6 ^ 1);
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar6);
  func_0x000107c61180();
  uVar1 = uVar6;
  func_0x000107c5cd54();
  func_0x000107c427e8(puVar2,param_2,uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10089d814; end: 10089dceb; +[SCNNetworkHttpRequestConverter statusCodeErrorForRequest:response:data:] */

undefined *
FUN_10089d814(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = param_4;
  func_0x000107c44f68();
  if (((int)puVar1 < 200) || (puVar1 = param_4, func_0x000107c44f68(), 299 < (int)puVar1)) {
    puVar1 = param_4;
    func_0x000107c44f68();
    if ((int)puVar1 == 0x130) {
      puVar1 = PTR_PTR_1126dfd70;
      func_0x000107c44f64();
      func_0x000107c61180();
      puVar2 = puVar1;
      func_0x000107c4d9e8();
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c61170(puVar1);
      if (puVar2 != (undefined *)0x0) goto LAB_10089d8e0;
    }
    puVar1 = param_4;
    func_0x000107c5d7e8();
    func_0x000107c61180();
    puVar2 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x000107c4d8b8();
      func_0x000107c61180();
    }
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x000107c419ac(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c4d2d4();
    func_0x000107c61170(puVar3);
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
    }
    func_0x000107c61170(puVar1);
    if (param_5 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c610f4();
      func_0x000107c46368();
      puVar2 = puVar1;
      func_0x000107c4adac();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c56bd8(puVar4);
      }
      puVar2 = PTR_PTR_1126bbfc8;
      func_0x000107c4f8f4();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        func_0x000107c56bd8(puVar4);
      }
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
    }
    lVar5 = param_3;
    func_0x000107c44f58();
    func_0x000107c61180();
    func_0x000107c4ce5c();
    func_0x000107c61170(lVar5);
    func_0x000107c56bd8(puVar4);
    lVar5 = param_3;
    func_0x000107c2bf24(param_3,&PTR____CFConstantStringClassReference_110dc6318);
    func_0x000107c61180();
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4adac();
    func_0x000107c4d95c(puVar1);
    func_0x000107c61180();
    func_0x000107c56bd8(puVar4);
    func_0x000107c61170(puVar1);
    lVar6 = param_3;
    func_0x000107c2bf24(param_3,&PTR____CFConstantStringClassReference_110f9c878);
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c56bd8(puVar4);
    }
    puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar2 = param_4;
    func_0x000107c5d7e8(param_4);
    func_0x000107c61180();
    func_0x000107c3ac40();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c44f08();
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c56bd8(puVar4);
    }
    lVar7 = param_3;
    func_0x000107c2bf24(param_3,&PTR____CFConstantStringClassReference_110dd9d18);
    func_0x000107c61180();
    if (lVar7 != 0) {
      func_0x000107c56bd8(puVar4);
    }
    puVar1 = PTR_PTR_1126dfd70;
    func_0x000107c44f64();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c56bd8(puVar4);
    }
    puVar10 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSError_1126ae858);
    puVar8 = param_4;
    func_0x000107c44f68();
    if ((int)puVar8 != 0) {
      func_0x000107c44f68(param_4);
    }
    func_0x000107c466bc(puVar10);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(puVar4);
  }
  else {
LAB_10089d8e0:
    puVar10 = (undefined *)0x0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
    return puVar10;
  }
  func_0x000107c60e78();
  return (undefined *)(ulong)*(uint *)(param_3 + 0xc);
}



/* Entry: 10089dcec; end: 10089dcf3; -[SCNNetworkTypesUrlResponseInfo httpStatusCode] */

undefined4 FUN_10089dcec(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10089dcf4; end: 10089dddb;  */

void FUN_10089dcf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10089dddc;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  if (lRam00000001137f4598 != -1) {
    FUN_10002a2fc(0x1137f4598,&puStack_78);
  }
  func_0x000107c54a44(param_2);
  func_0x000107c59dd8(param_1,param_2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10089dddc; end: 10089ddef;  */

void FUN_10089dddc(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10089ddf0; end: 10089ddf7; -[SCRequestInfoContainer setFirstHitParsingStart:] */

void FUN_10089ddf0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3b) = param_3;
  return;
}



/* Entry: 10089ddf8; end: 10089ddff; -[SCRequestInfoContainer setTimestampParsingStart:] */

void FUN_10089ddf8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x80) = param_1;
  return;
}



/* Entry: 10089de00; end: 10089dfb3; +[SCNNetworkHttpRequestConverter httpResponseHeaderForUrlResponseInfo:] */

undefined * FUN_10089de00(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c3db50();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c40808();
  func_0x000107c61170(lVar1);
  puVar5 = (undefined *)0x0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    func_0x000107c61180();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lVar1 = param_3;
    func_0x000107c3db50();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4080c();
    if (lVar2 != 0) {
      lVar7 = *plStack_120;
      do {
        lVar8 = 0;
        do {
          if (*plStack_120 != lVar7) {
            func_0x000107c61128(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          uVar4 = uVar6;
          func_0x000107c5dc0c(uVar6);
          func_0x000107c61180();
          func_0x000107c4a8c4(uVar6);
          func_0x000107c61180();
          func_0x000107c56bd8(puVar3,param_2,uVar4,uVar6);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar2 != lVar8);
        lVar2 = lVar1;
        func_0x000107c4080c(lVar1,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar2 != 0);
    }
    func_0x000107c61170(lVar1);
    puVar5 = puVar3;
    func_0x000107c40794(puVar3);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  func_0x000107c60e78();
  return *(undefined **)(param_3 + 0x108);
}



/* Entry: 10089dfb4; end: 10089dfbb; -[SCRequest requestParser] */

undefined8 FUN_10089dfb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x108);
}



/* Entry: 10089dfbc; end: 10089dfe3; -[NoopRequestParser parseData:MIMEType:error:] */

void FUN_10089dfbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10089dfe4; end: 10089dfeb; -[SCRequestInfoContainer setTimestampParsingEnd:] */

void FUN_10089dfe4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x88) = param_1;
  return;
}



/* Entry: 10089dfec; end: 10089e783; -[SCHTTPRequestCallback onFinishWithParsedData:httpRequest:info:error:shouldInvokeCallback:] */

void FUN_10089dfec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,int param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar1);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4a8c4(param_4);
  func_0x000107c4d968(puVar2);
  func_0x000107c61180();
  func_0x000107c3fcb0(param_6);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar3);
  func_0x000107c61180();
  func_0x000107c4bbe0();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  lVar16 = param_5;
  func_0x000107c50380(param_5);
  func_0x000107c61180();
  lVar6 = lVar16;
  func_0x000107c40da8();
  func_0x000107c61180();
  lVar4 = lVar6;
  func_0x000107c5035c();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar16);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar1);
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c50384();
  func_0x000107c61180();
  FUN_10089e79c((double)lVar4 / 1000.0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c3fa34(param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar5);
  func_0x000107c61180();
  func_0x000107c5a280();
  func_0x000107c61170(uVar5);
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x000107c50300();
  func_0x000107c61180();
  lVar16 = lVar6;
  func_0x000107c42d68();
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c61170(lVar6);
  if (lVar16 == 0) {
    lVar16 = param_5;
    func_0x000107c42d68(param_5);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar5);
    func_0x000107c61180();
    func_0x000107c54868();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar16);
  }
  puVar2 = PTR_PTR_1126dfd70;
  lVar16 = param_5;
  func_0x000107c50664(param_5);
  func_0x000107c61180();
  func_0x000107c44f6c();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  puVar8 = PTR_PTR_1126dfd88;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar3);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c5d7fc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar7);
  func_0x000107c61180();
  uVar1 = uVar7;
  func_0x000107c5ce60();
  func_0x000107c61180();
  func_0x000107c4d588();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  puVar10 = PTR_PTR_1126dfd88;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar3);
  func_0x000107c61180();
  uVar5 = uVar3;
  func_0x000107c5d7fc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar7);
  func_0x000107c61180();
  func_0x000107c50438();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar9);
  func_0x000107c61180();
  uVar1 = uVar9;
  func_0x000107c5ce60();
  func_0x000107c61180();
  func_0x000107c4d584();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  puVar11 = PTR_PTR_1126dfd88;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar5);
  func_0x000107c61180();
  func_0x000107c4d574();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  lVar16 = param_1 + 0x38;
  func_0x000107c61148(lVar16);
  puVar12 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c41360((double)lVar4 / 1000.0,PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c61180();
  func_0x000107c41d5c(lVar16);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(lVar16);
  puVar12 = puVar2;
  func_0x000107c3db4c(puVar2);
  func_0x000107c61180();
  func_0x000107c3b748(param_1);
  func_0x000107c61170(puVar12);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300();
  func_0x000107c61180();
  uVar5 = uVar13;
  func_0x000107c50384();
  func_0x000107c61180();
  uVar1 = uVar5;
  func_0x000107c40074();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar14);
  func_0x000107c61180();
  uVar3 = uVar14;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar15);
  func_0x000107c61180();
  uVar7 = uVar15;
  func_0x000107c5043c();
  func_0x000107c61180();
  uVar9 = uVar1;
  func_0x000107c435ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar13);
  if ((*(byte *)(param_1 + 0x61) & 1) == 0) {
    func_0x000107c3d66c(*(undefined8 *)(param_1 + 0x58));
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar5);
    func_0x000107c61180();
    uVar1 = *(undefined8 *)(param_1 + 0x58);
    func_0x000107c40794(uVar1);
    lVar16 = param_1 + 0x28;
    func_0x000107c61148(lVar16);
    func_0x000107c2bf60(uVar5,param_4,puVar2,param_6,param_6 == 0,param_5,uVar1,lVar16,
                        *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x68));
    func_0x000107c61170(lVar16);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar5);
  }
  puVar12 = PTR_PTR_1126dfd78;
  func_0x000107c5a9bc(PTR_PTR_1126dfd78);
  func_0x000107c61180();
  func_0x000107c4ffd4();
  func_0x000107c61170(puVar12);
  if (param_7 == 0) {
    func_0x000107c41b74(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    lVar16 = param_1 + 0x20;
    func_0x000107c61148(lVar16);
    func_0x000107c41cec();
    func_0x000107c61170(lVar16);
    lVar16 = *(long *)(param_1 + 8);
    if (lVar16 != 0) {
      func_0x000107c4f418();
      func_0x000107c61180();
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0xc2000000;
      puStack_a8 = &UNK_10b25b538;
      puStack_a0 = &UNK_11084c4a0;
      lStack_98 = param_1;
      func_0x000107c61174(param_6);
      lStack_90 = param_6;
      func_0x000107c61174(puVar2);
      puStack_88 = puVar2;
      func_0x000107c61174(param_5);
      lStack_80 = param_5;
      FUN_10007380c(lVar16,&puStack_b8);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(lStack_80);
      func_0x000107c61170(puStack_88);
      func_0x000107c61170(lStack_90);
    }
    lVar16 = *(long *)(param_1 + 0x10);
    func_0x000107c3feec();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar5);
    func_0x000107c61180();
    (**(code **)(lVar16 + 0x10))(lVar16,uVar5,puVar2,param_3,param_6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar16);
  }
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10089e784; end: 10089e78b; -[SCNNetworkTypesRequestResponseInfo requestInfo] */

undefined8 FUN_10089e784(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10089e78c; end: 10089e793; -[SCNNetworkTypesUrlRequestInfo cronetMetrics] */

undefined8 FUN_10089e78c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10089e794; end: 10089e79b; -[SCNNetworkTypesCronetMetrics requestEnd] */

undefined8 FUN_10089e794(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 10089e79c; end: 10089e883;  */

void FUN_10089e79c(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  func_0x000107c61174();
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10089e884;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  if (lRam00000001137f4590 != -1) {
    FUN_10002a2fc(0x1137f4590,&puStack_78);
  }
  func_0x000107c54a40(param_2);
  func_0x000107c59dd0(param_1,param_2);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 10089e884; end: 10089e897;  */

void FUN_10089e884(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10089e898; end: 10089e89f; -[SCRequestInfoContainer setFirstHitNSURLSessionFinished:] */

void FUN_10089e898(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x3a) = param_3;
  return;
}



/* Entry: 10089e8a0; end: 10089e8a7; -[SCRequestInfoContainer setTimestampNSURLSessionFinished:] */

void FUN_10089e8a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x78) = param_1;
  return;
}



/* Entry: 10089e8a8; end: 10089e9eb; -[SCHTTPRequestCallback cleanUpDownloadFileWithError:] */

/* WARNING: Removing unreachable block (ram,0x00010089e958) */
/* WARNING: Removing unreachable block (ram,0x00010089e9a0) */

void FUN_10089e8a8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c61174(param_3);
  if ((param_3 != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c61180();
    func_0x000107c4ff50();
    func_0x000107c61174(0);
    func_0x000107c61170(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar2);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(param_1 + 0x70);
    func_0x000107c4e430(uVar4);
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c50300(uVar5);
    func_0x000107c61180();
    func_0x000107c4bbe0();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(0);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10089e9ec; end: 10089ea1b; -[SCRequest setUrlRequestResponseInfo:] */

void FUN_10089e9ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  *(undefined8 *)(param_1 + 0x178) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10089ea1c; end: 10089ea27; -[SCRequest failoverAdvice] */

void FUN_10089ea1c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x70,1);
  return;
}



/* Entry: 10089ea28; end: 10089eb27; +[SCNNetworkHttpRequestConverter httpURLResponseWithUrlResponseInfo:] */

void FUN_10089ea28(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar4 = (undefined *)0x0;
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    lVar1 = param_3;
    func_0x000107c5d7e8(param_3);
    func_0x000107c61180();
    func_0x000107c3ac40(puVar2,param_2,lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = param_3;
    func_0x000107c4d56c(param_3);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126dfd70;
    func_0x000107c44f64(PTR_PTR_1126dfd70,param_2,param_3);
    func_0x000107c61180();
    puVar4 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    lVar5 = param_3;
    func_0x000107c44f68(param_3);
    func_0x000107c61170(param_3);
    func_0x000107c48fe8(puVar4,param_2,puVar2,(long)(int)lVar5,lVar1,puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10089eb28; end: 10089eb2f; -[SCNNetworkTypesUrlResponseInfo url] */

undefined8 FUN_10089eb28(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10089eb30; end: 10089f0d7; -[SCCameraToolbarButtonImpl setAppearanceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10089eb30(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_e0 [48];
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = 40.0;
  dVar17 = 80.0;
  if (param_3 != 1) {
    dVar17 = 40.0;
  }
  puVar1 = param_1;
  func_0x000107c54b80(0,0,0x4044000000000000,dVar17);
  if (param_3 == 1) {
    func_0x000107c60890(auStack_e0,0,0xc044000000000000);
    func_0x000107c5a03c(param_1);
    puVar1 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c610fc();
    func_0x000107c3ec60(param_1);
    dVar18 = dVar16 + -8.0;
    func_0x000107c3ec60(param_1);
    puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c3ec60(param_1);
    dVar19 = dVar16 + -4.0;
    func_0x000107c3ec60(param_1);
    func_0x000107c3e8ac(0x4000000000000000,0x4000000000000000,dVar18,dVar17 + -8.0,dVar19,
                        dVar16 + -4.0,puVar2);
    func_0x000107c61180();
    func_0x000107c54b80(0x4000000000000000,0x4000000000000000,dVar18,dVar17 + -8.0,puVar1);
    func_0x000107c61178(puVar2);
    func_0x000107c3ab30();
    func_0x000107c57274(puVar1);
    puVar3 = param_1;
    func_0x000107c4aba4(param_1);
    func_0x000107c61180();
    func_0x000107c562f4();
    func_0x000107c61170(puVar3);
    puVar3 = param_1;
    func_0x000107c4aba4(param_1);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar3);
  }
  else {
    if (param_3 != 2) goto LAB_10089f088;
    lVar14 = (long)_DAT_1127429e0;
    if (param_1[lVar14] == '\x01') {
      puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610fc();
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
      func_0x000107c610f4();
      puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
      func_0x000107c42448(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
      func_0x000107c61180();
      func_0x000107c46734();
      func_0x000107c61170(puVar2);
    }
    func_0x000107c5a050(puVar1);
    puVar2 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    uVar15 = 0x3fe0000000000000;
    if (param_1[lVar14] == '\0') {
      uVar15 = 0x3fc999999999999a;
    }
    puVar3 = puVar2;
    func_0x000107c3fdd0(uVar15);
    func_0x000107c61180();
    func_0x000107c52b50(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar2 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c539d4(0x402a000000000000);
    func_0x000107c61170(puVar2);
    func_0x000107c49778(param_1);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    if (param_1[lVar14] == '\x01') {
      func_0x000107c54b80(0x4010000000000000,0x401c000000000000,0x4040000000000000,
                          0x403a000000000000,puVar1);
    }
    else {
      puVar3 = puVar1;
      func_0x000107c44d9c();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c40290(0x403a000000000000);
      func_0x000107c61180();
      puVar5 = puVar1;
      puStack_b0 = puVar4;
      func_0x000107c5e308();
      func_0x000107c61180();
      puVar6 = puVar5;
      func_0x000107c40290(0x4040000000000000);
      func_0x000107c61180();
      puVar7 = puVar1;
      puStack_a8 = puVar6;
      func_0x000107c3f75c();
      func_0x000107c61180();
      puVar8 = param_1;
      func_0x000107c3f75c(param_1);
      func_0x000107c61180();
      puVar9 = puVar7;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar10 = puVar1;
      puStack_a0 = puVar9;
      func_0x000107c3f764();
      func_0x000107c61180();
      puVar11 = param_1;
      func_0x000107c3f764(param_1);
      func_0x000107c61180();
      puVar12 = puVar10;
      func_0x000107c40280();
      func_0x000107c61180();
      puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar12;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar2);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    puVar2 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c52e0c(0x3fe0000000000000);
    func_0x000107c61170(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3fdd0(0x3fc999999999999a);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab24();
    puVar4 = puVar1;
    func_0x000107c4aba4(puVar1);
    func_0x000107c61180();
    func_0x000107c52df8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    puVar3 = PTR_PTR_1126b08d8;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    FUN_10085b3c8(0x4020000000000000,0x3fc3333333333333,*(undefined8 *)PTR__CGSizeZero_110347620,
                  *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar3,param_1,puVar2);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
LAB_10089f088:
  *(long *)(param_1 + _DAT_112742a1c) = param_3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar1;
  }
  func_0x000107c60e78();
  return *(undefined **)(puVar1 + 0xb0);
}



/* Entry: 10089f0d8; end: 10089f0df; -[SCCameraToolbarItemImpl normalImageName] */

undefined8 FUN_10089f0d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10089f0e0; end: 10089fa7b;  */

void FUN_10089f0e0(ulong param_1,long param_2)

{
  ulong uVar1;
  undefined *unaff_x21;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c49d0c();
  if ((int)uVar1 == 0) {
    uVar1 = param_1;
    func_0x000107c49d0c();
    if ((int)uVar1 != 0) {
      if (param_2 != 2) {
        if (param_2 == 1) {
          unaff_x21 = (undefined *)0x1e4;
          goto LAB_10089f1cc;
        }
        if (param_2 != 0) goto LAB_10089f304;
      }
      unaff_x21 = (undefined *)0x1e5;
      goto LAB_10089f1cc;
    }
    uVar1 = param_1;
    func_0x000107c49d0c();
    if ((int)uVar1 == 0) {
      uVar1 = param_1;
      func_0x000107c49d0c();
      if ((int)uVar1 == 0) {
        uVar1 = param_1;
        func_0x000107c49d0c();
        if ((int)uVar1 == 0) {
          uVar1 = param_1;
          func_0x000107c49d0c();
          if ((int)uVar1 == 0) {
            uVar1 = param_1;
            func_0x000107c49d0c();
            if ((int)uVar1 == 0) {
              uVar1 = param_1;
              func_0x000107c49d0c();
              if ((int)uVar1 == 0) {
                uVar1 = param_1;
                func_0x000107c49d0c();
                if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x000107c49d0c(), (int)uVar1 == 0))
                {
                  uVar1 = param_1;
                  func_0x000107c49d0c();
                  if ((int)uVar1 != 0) {
                    if (param_2 == 2) {
                      unaff_x21 = (undefined *)0x69;
                    }
                    else {
                      if (param_2 != 1) goto joined_r0x00010089f434;
                      unaff_x21 = (undefined *)0x68;
                    }
                    goto LAB_10089f1cc;
                  }
                  uVar1 = param_1;
                  func_0x000107c49d0c();
                  if ((int)uVar1 == 0) {
                    uVar1 = param_1;
                    func_0x000107c49d0c();
                    if ((int)uVar1 == 0) {
                      uVar1 = param_1;
                      func_0x000107c49d0c();
                      if ((int)uVar1 == 0) {
                        uVar1 = param_1;
                        func_0x000107c49d0c();
                        if ((int)uVar1 != 0) {
                          if (param_2 == 2) {
                            unaff_x21 = (undefined *)0x1e9;
                          }
                          else {
                            if (param_2 != 1) goto joined_r0x00010089f434;
                            unaff_x21 = (undefined *)0x1e8;
                          }
                          goto LAB_10089f1cc;
                        }
                        uVar1 = param_1;
                        func_0x000107c49d0c();
                        if ((int)uVar1 == 0) {
                          uVar1 = param_1;
                          func_0x000107c49d0c();
                          if ((int)uVar1 == 0) {
                            uVar1 = param_1;
                            func_0x000107c49d0c();
                            if ((int)uVar1 != 0) {
                              if (param_2 == 2) {
                                unaff_x21 = (undefined *)0x1a4;
                              }
                              else {
                                if (param_2 != 1) goto joined_r0x00010089f434;
                                unaff_x21 = (undefined *)0x1a3;
                              }
                              goto LAB_10089f1cc;
                            }
                            uVar1 = param_1;
                            func_0x000107c49d0c();
                            if ((int)uVar1 == 0) {
                              uVar1 = param_1;
                              func_0x000107c49d0c();
                              if ((int)uVar1 != 0) {
                                if (param_2 == 2) {
                                  unaff_x21 = (undefined *)0x1c6;
                                }
                                else {
                                  if (param_2 != 1) goto joined_r0x00010089f434;
                                  unaff_x21 = (undefined *)0x1c5;
                                }
                                goto LAB_10089f1cc;
                              }
                              uVar1 = param_1;
                              func_0x000107c49d0c();
                              if ((int)uVar1 == 0) {
                                uVar1 = param_1;
                                func_0x000107c49d0c();
                                if ((int)uVar1 == 0) {
                                  uVar1 = param_1;
                                  func_0x000107c49d0c();
                                  if ((int)uVar1 == 0) {
                                    uVar1 = param_1;
                                    func_0x000107c49d0c();
                                    if ((int)uVar1 == 0) {
                                      uVar1 = param_1;
                                      func_0x000107c49d0c();
                                      if ((int)uVar1 == 0) {
                                        uVar1 = param_1;
                                        func_0x000107c49d0c();
                                        if ((int)uVar1 == 0) {
                                          uVar1 = param_1;
                                          func_0x000107c49d0c();
                                          if ((int)uVar1 == 0) {
                                            uVar1 = param_1;
                                            func_0x000107c49d0c();
                                            if (((int)uVar1 == 0) &&
                                               (uVar1 = param_1, func_0x000107c49d0c(),
                                               (int)uVar1 == 0)) {
                                              uVar1 = param_1;
                                              func_0x000107c49d0c();
                                              if ((int)uVar1 != 0) {
                                                if (param_2 == 2) {
                                                  unaff_x21 = (undefined *)0x9b;
                                                }
                                                else {
                                                  if (param_2 != 1) goto joined_r0x00010089f434;
                                                  unaff_x21 = (undefined *)0x9a;
                                                }
                                                goto LAB_10089f1cc;
                                              }
                                              uVar1 = param_1;
                                              func_0x000107c49d0c();
                                              if ((int)uVar1 == 0) {
                                                uVar1 = param_1;
                                                func_0x000107c49d0c();
                                                if ((int)uVar1 == 0) {
                                                  uVar1 = param_1;
                                                  func_0x000107c49d0c();
                                                  if ((int)uVar1 == 0) {
                                                    uVar1 = param_1;
                                                    func_0x000107c49d0c();
                                                    if ((int)uVar1 != 0) {
                                                      if (param_2 == 2) {
                                                        unaff_x21 = (undefined *)0x232;
                                                      }
                                                      else {
                                                        if (param_2 != 1)
                                                        goto joined_r0x00010089f434;
                                                        unaff_x21 = (undefined *)0x231;
                                                      }
                                                      goto LAB_10089f18c;
                                                    }
                                                    uVar1 = param_1;
                                                    func_0x000107c49d0c();
                                                    if ((int)uVar1 == 0) {
                                                      uVar1 = param_1;
                                                      func_0x000107c49d0c();
                                                      if ((int)uVar1 != 0) {
                                                        if (param_2 == 2) {
                                                          unaff_x21 = (undefined *)0x1fb;
                                                        }
                                                        else {
                                                          if (param_2 != 1)
                                                          goto joined_r0x00010089f434;
                                                          unaff_x21 = (undefined *)0x1fa;
                                                        }
                                                        goto LAB_10089f18c;
                                                      }
                                                      uVar1 = param_1;
                                                      func_0x000107c49d0c();
                                                      if ((int)uVar1 == 0) {
                                                        uVar1 = param_1;
                                                        func_0x000107c49d0c();
                                                        if ((int)uVar1 != 0) {
                                                          if (param_2 == 2) {
                                                            unaff_x21 = (undefined *)0x170;
                                                          }
                                                          else {
                                                            if (param_2 != 1)
                                                            goto joined_r0x00010089f434;
                                                            unaff_x21 = (undefined *)0x16f;
                                                          }
                                                          goto LAB_10089f18c;
                                                        }
                                                        uVar1 = param_1;
                                                        func_0x000107c49d0c();
                                                        if ((int)uVar1 == 0) {
                                                          uVar1 = param_1;
                                                          func_0x000107c49d0c();
                                                          if ((int)uVar1 != 0) {
                                                            if (param_2 == 2) {
                                                              unaff_x21 = (undefined *)0x9d;
                                                            }
                                                            else {
                                                              if (param_2 != 1)
                                                              goto joined_r0x00010089f434;
                                                              unaff_x21 = (undefined *)0x9c;
                                                            }
                                                            goto LAB_10089f18c;
                                                          }
                                                          uVar1 = param_1;
                                                          func_0x000107c49d0c();
                                                          if ((int)uVar1 == 0) {
                                                            uVar1 = param_1;
                                                            func_0x000107c49d0c();
                                                            if ((int)uVar1 != 0) {
                                                              if (param_2 == 2) {
                                                                unaff_x21 = (undefined *)0x27c;
                                                              }
                                                              else {
                                                                if (param_2 != 1)
                                                                goto joined_r0x00010089f434;
                                                                unaff_x21 = (undefined *)0x27b;
                                                              }
                                                              goto LAB_10089f18c;
                                                            }
                                                            uVar1 = param_1;
                                                            func_0x000107c49d0c();
                                                            if ((int)uVar1 == 0) goto LAB_10089f2f4;
                                                            if (param_2 == 2) {
                                                              unaff_x21 = (undefined *)0x27c;
                                                            }
                                                            else {
                                                              if (param_2 != 1)
                                                              goto joined_r0x00010089f434;
                                                              unaff_x21 = (undefined *)0x27b;
                                                            }
                                                          }
                                                          else if (param_2 == 2) {
                                                            unaff_x21 = (undefined *)0x9d;
                                                          }
                                                          else {
                                                            if (param_2 != 1)
                                                            goto joined_r0x00010089f434;
                                                            unaff_x21 = (undefined *)0x9c;
                                                          }
                                                        }
                                                        else if (param_2 == 2) {
                                                          unaff_x21 = (undefined *)0x170;
                                                        }
                                                        else {
                                                          if (param_2 != 1)
                                                          goto joined_r0x00010089f434;
                                                          unaff_x21 = (undefined *)0x16f;
                                                        }
                                                      }
                                                      else if (param_2 == 2) {
                                                        unaff_x21 = (undefined *)0x1fb;
                                                      }
                                                      else {
                                                        if (param_2 != 1)
                                                        goto joined_r0x00010089f434;
                                                        unaff_x21 = (undefined *)0x1fa;
                                                      }
                                                    }
                                                    else if (param_2 == 2) {
                                                      unaff_x21 = (undefined *)0x232;
                                                    }
                                                    else {
                                                      if (param_2 != 1) goto joined_r0x00010089f434;
                                                      unaff_x21 = (undefined *)0x231;
                                                    }
                                                  }
                                                  else if (param_2 == 2) {
                                                    unaff_x21 = (undefined *)0x134;
                                                  }
                                                  else {
                                                    if (param_2 != 1) goto joined_r0x00010089f434;
                                                    unaff_x21 = (undefined *)0x133;
                                                  }
                                                  goto LAB_10089f1cc;
                                                }
                                                if (param_2 == 2) {
                                                  unaff_x21 = (undefined *)0x134;
                                                }
                                                else {
                                                  if (param_2 != 1) goto joined_r0x00010089f434;
                                                  unaff_x21 = (undefined *)0x133;
                                                }
                                              }
                                              else if (param_2 == 2) {
                                                unaff_x21 = (undefined *)0x9b;
                                              }
                                              else {
                                                if (param_2 != 1) goto joined_r0x00010089f434;
                                                unaff_x21 = (undefined *)0x9a;
                                              }
                                            }
                                            else if (param_2 == 2) {
                                              unaff_x21 = (undefined *)0x22e;
                                            }
                                            else {
                                              if (param_2 != 1) goto joined_r0x00010089f434;
                                              unaff_x21 = (undefined *)0x22d;
                                            }
                                          }
                                          else if (param_2 == 2) {
                                            unaff_x21 = (undefined *)0x23e;
                                          }
                                          else {
                                            if (param_2 != 1) goto joined_r0x00010089f434;
                                            unaff_x21 = (undefined *)0x23d;
                                          }
                                        }
                                        else if (param_2 == 2) {
                                          unaff_x21 = (undefined *)0x2ae;
                                        }
                                        else {
                                          if (param_2 != 1) goto joined_r0x00010089f434;
                                          unaff_x21 = (undefined *)0x29b;
                                        }
                                        goto LAB_10089f18c;
                                      }
                                      if (param_2 == 2) {
                                        unaff_x21 = (undefined *)0x2b0;
                                      }
                                      else {
                                        if (param_2 != 1) goto joined_r0x00010089f434;
                                        unaff_x21 = (undefined *)0x2af;
                                      }
                                    }
                                    else if (param_2 == 2) {
                                      unaff_x21 = (undefined *)0x2a9;
                                    }
                                    else {
                                      if (param_2 != 1) goto joined_r0x00010089f434;
                                      unaff_x21 = (undefined *)0x2a8;
                                    }
                                    goto LAB_10089f1cc;
                                  }
                                  if (param_2 == 2) {
                                    unaff_x21 = (undefined *)0x26e;
                                  }
                                  else {
                                    if (param_2 != 1) goto joined_r0x00010089f434;
                                    unaff_x21 = (undefined *)0x26d;
                                  }
                                }
                                else if (param_2 == 2) {
                                  unaff_x21 = (undefined *)0x84;
                                }
                                else {
                                  if (param_2 != 1) goto joined_r0x00010089f434;
                                  unaff_x21 = (undefined *)0x83;
                                }
                              }
                              else if (param_2 == 2) {
                                unaff_x21 = (undefined *)0x21c;
                              }
                              else {
                                if (param_2 != 1) goto joined_r0x00010089f434;
                                unaff_x21 = (undefined *)0x21b;
                              }
                            }
                            else if (param_2 == 2) {
                              unaff_x21 = (undefined *)0x1c6;
                            }
                            else {
                              if (param_2 != 1) goto joined_r0x00010089f434;
                              unaff_x21 = (undefined *)0x1c5;
                            }
                          }
                          else if (param_2 == 2) {
                            unaff_x21 = (undefined *)0x1a4;
                          }
                          else {
                            if (param_2 != 1) goto joined_r0x00010089f434;
                            unaff_x21 = (undefined *)0x1a3;
                          }
                        }
                        else if (param_2 == 2) {
                          unaff_x21 = (undefined *)0x16c;
                        }
                        else {
                          if (param_2 != 1) goto joined_r0x00010089f434;
                          unaff_x21 = (undefined *)0x16b;
                        }
                      }
                      else if (param_2 == 2) {
                        unaff_x21 = (undefined *)0x1e9;
                      }
                      else {
                        if (param_2 != 1) goto joined_r0x00010089f434;
                        unaff_x21 = (undefined *)0x1e8;
                      }
                    }
                    else if (param_2 == 2) {
                      unaff_x21 = (undefined *)0x2df;
                    }
                    else {
                      if (param_2 != 1) goto joined_r0x00010089f434;
                      unaff_x21 = (undefined *)0x2de;
                    }
                  }
                  else if (param_2 == 2) {
                    unaff_x21 = (undefined *)0x69;
                  }
                  else {
                    if (param_2 != 1) goto joined_r0x00010089f434;
                    unaff_x21 = (undefined *)0x68;
                  }
                }
                else if (param_2 == 2) {
                  unaff_x21 = (undefined *)0x179;
                }
                else {
                  if (param_2 != 1) goto joined_r0x00010089f434;
                  unaff_x21 = (undefined *)0x178;
                }
              }
              else if (param_2 == 2) {
                unaff_x21 = (undefined *)0x17a;
              }
              else {
                if (param_2 != 1) goto joined_r0x00010089f434;
                unaff_x21 = (undefined *)0x177;
              }
              goto LAB_10089f18c;
            }
            if (param_2 == 2) {
              unaff_x21 = (undefined *)0xa2;
            }
            else {
              if (param_2 != 1) goto joined_r0x00010089f434;
              unaff_x21 = (undefined *)0xa1;
            }
          }
          else if (param_2 == 2) {
            unaff_x21 = (undefined *)0x17a;
          }
          else {
            if (param_2 != 1) goto joined_r0x00010089f434;
            unaff_x21 = (undefined *)0x177;
          }
        }
        else if (param_2 == 2) {
          unaff_x21 = (undefined *)0x1a6;
        }
        else {
          if (param_2 != 1) goto joined_r0x00010089f434;
          unaff_x21 = (undefined *)0x1a5;
        }
LAB_10089f1cc:
        func_0x0001061e0f50(unaff_x21);
        func_0x000107c61180();
        goto LAB_10089f304;
      }
      if (param_2 == 2) {
        unaff_x21 = (undefined *)0x1a6;
      }
      else {
        if (param_2 != 1) goto joined_r0x00010089f434;
        unaff_x21 = (undefined *)0x1a5;
      }
    }
    else if (param_2 == 2) {
      unaff_x21 = (undefined *)0x40;
    }
    else {
      if (param_2 != 1) {
joined_r0x00010089f434:
        if (param_2 != 0) goto LAB_10089f304;
LAB_10089f2f4:
        unaff_x21 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c450cc(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c61180();
        goto LAB_10089f304;
      }
      unaff_x21 = (undefined *)0x3f;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 1) {
        unaff_x21 = (undefined *)0x1e4;
        goto LAB_10089f18c;
      }
      if (param_2 != 0) goto LAB_10089f304;
    }
    unaff_x21 = (undefined *)0x1e5;
  }
LAB_10089f18c:
  func_0x00010089fa04(unaff_x21);
  func_0x000107c61180();
LAB_10089f304:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10089fa7c; end: 10089fa8f; +[SIGIcons imageFromIconType:size:color:] */

void FUN_10089fa7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,param_2,*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
             *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),param_3,
             PTR_s_imageFromIconType_size_color_edg_1125d7878);
  return;
}



/* Entry: 10089fa90; end: 10089fa97; -[SCNNetworkTypesUrlResponseInfo negotiatedProtocol] */

undefined8 FUN_10089fa90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10089fa98; end: 10089fb9f; -[SCCameraToolbarButtonImpl setImage:] */

void FUN_10089fa98(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  long lStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_setImage__1126481e8;
  puStack_58 = PTR_PTR_1126f0488;
  lStack_60 = param_3;
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_60,puVar1,param_5);
  lVar2 = param_3;
  func_0x000107c3dee0();
  func_0x000107c5b078(param_5);
  func_0x000107c5b078(param_3);
  if (lVar2 == 1) {
    dVar3 = param_2 * 0.25;
    func_0x000107c5b078(param_5);
    func_0x000107c61170(param_5);
    dVar3 = dVar3 + param_2 * -0.5 + 4.0;
  }
  else {
    dVar3 = param_2;
    func_0x000107c5b078(param_5);
    func_0x000107c61170(param_5);
    dVar3 = (param_2 - dVar3) * 0.5;
  }
  func_0x000107c5527c((40.0 - param_1) * 0.5,dVar3,param_3);
  return;
}



/* Entry: 10089fba0; end: 10089fc1f; -[SCScalingButton setImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10089fba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278e144);
  *(undefined8 *)(param_1 + _DAT_11278e144) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  lVar1 = param_1;
  func_0x000107c45130(param_1);
  func_0x000107c61180();
  func_0x000107c55258();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 10089fc20; end: 10089fc2f; -[SCCameraToolbarButtonImpl appearanceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10089fc20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742a1c);
}



/* Entry: 10089fc30; end: 10089fc6b;  */

undefined1  [16] FUN_10089fc30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  func_0x000107c5e304();
  uVar1 = param_1;
  func_0x000107c44d98(param_2);
  auVar2._8_8_ = uVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10089fc6c; end: 10089fc93;  */

void FUN_10089fc6c(void)

{
  func_0x000107c438d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetWidth_1103475a8)();
  return;
}



/* Entry: 10089fc94; end: 10089fc9b; -[SCCameraToolbarItemImpl normalBackgroundColor] */

undefined8 FUN_10089fc94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10089fc9c; end: 10089fd4b; -[SCBatteryLogger didStopNetworkActivity:stopTime:activityAttributionKey:activityAttributionInfo:succeeded:] */

/* WARNING: Possible PIC construction at 0x00010089fd18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010089fd28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010089fd1c) */
/* WARNING: Removing unreachable block (ram,0x00010089fd2c) */

void FUN_10089fc9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c3e714(param_1);
  func_0x000107c61180();
  func_0x000107c4bb6c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 10089fd4c; end: 10089fec7; -[SCBatteryNetworkMonitor logFinishedNetworkActivity:endTime:activityAttributionKey:activityAttributionInfo:succeeded:] */

void FUN_10089fd4c(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined1 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  lVar1 = param_1;
  func_0x000107c3c73c();
  if ((((int)lVar1 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    func_0x000107c61144(auStack_58,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x000107c6111c(auStack_68,auStack_58);
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    uStack_60 = param_7;
    func_0x000107c4e524(uVar2);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61120(auStack_68);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10089fec8; end: 10089fecf; -[SCCameraToolbarItemImpl accessibilityLabel] */

undefined8 FUN_10089fec8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10089fed0; end: 10089fed7; -[SCCameraToolbarItemImpl accessibilityIdentifier] */

undefined8 FUN_10089fed0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10089fed8; end: 10089fedf; -[SCCameraToolbarItemImpl accessibilityValueNormal] */

undefined8 FUN_10089fed8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



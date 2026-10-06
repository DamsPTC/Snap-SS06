/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072bd094; end: 1072bd0ab;  */

long FUN_1072bd094(long param_1)

{
  func_0x00010739f220(param_1 + 0x38);
  func_0x00010726eeb8(param_1 + 0x28);
  func_0x00010739f1c8(param_1 + 0x20);
  func_0x00010739f194(param_1 + 0x18,0);
  return param_1 + 0x18;
}



/* Entry: 1072bd0ac; end: 1072bd0c3;  */

void FUN_1072bd0ac(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x00010563ab98();
  return;
}



/* Entry: 1072bd0c4; end: 1072bd0cb;  */

void FUN_1072bd0c4(void)

{
  return;
}



/* Entry: 1072bd0cc; end: 1072bd0ef;  */

void FUN_1072bd0cc(void)

{
  func_0x0001072ce7fc();
  func_0x0001072cee44(&PTR_FUN_11099aac0);
  return;
}



/* Entry: 1072bd0f0; end: 1072bd10b;  */

void FUN_1072bd0f0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099aac0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072bd10c; end: 1072bd267;  */

void FUN_1072bd10c(long param_1)

{
  undefined1 in_ZR;
  long lVar1;
  code *extraout_x8;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **appuStack_158 [3];
  undefined ***pppuStack_140;
  undefined2 uStack_108;
  undefined1 uStack_f0;
  
  func_0x0001072ce248();
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar1 = param_1;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x0001072cf684();
  func_0x0001077538cc(lVar1 + 0xd8,appuStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_158);
  uVar3 = *(undefined8 *)(lVar4 + 0xa8);
  func_0x0001072cf684();
  FUN_1072b6de4(param_1 + 8,uVar3,appuStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_158);
  (**(code **)(**(long **)(lVar4 + 0x128) + 0x20))(appuStack_158);
  FUN_1072b86f4(param_1 + 8,&DAT_10f34bce8,uStack_108,uStack_f0);
  FUN_1072bbee8(appuStack_158);
  if (*(long *)(lVar4 + 0x240) != 0) {
    func_0x0001072cf5a4();
    (*extraout_x8)();
  }
  plVar2 = *(long **)(lVar4 + 0xd0);
  func_0x0001072cf1bc();
  func_0x0001072d0114();
  func_0x0001072cec88(*(undefined8 *)(*plVar2 + 0x30));
  func_0x0001072cefb4();
  func_0x0001072cec80();
  appuStack_158[0] = &PTR_DAT_11099ab40;
  pppuStack_140 = appuStack_158;
  FUN_107292e94(*(undefined8 *)(lVar4 + 0xb0),appuStack_158);
  func_0x000107283e00(appuStack_158);
  func_0x0001072ce098();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072cf3ec();
  func_0x000107283e00();
  func_0x0001072ce900();
  func_0x0001072cea90();
  func_0x0001072cea04();
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bd268; end: 1072bd28f;  */

void FUN_1072bd268(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099abc0);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bd290; end: 1072bd2a3;  */

undefined ** FUN_1072bd290(void)

{
  return &PTR_DAT_11099abc0;
}



/* Entry: 1072bd2a4; end: 1072bd2c3;  */

void FUN_1072bd2a4(undefined8 *param_1)

{
  func_0x0001072ceb0c();
  *param_1 = &PTR_DAT_11099ab40;
  return;
}



/* Entry: 1072bd2c4; end: 1072bd2df;  */

void FUN_1072bd2c4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099ab40;
  return;
}



/* Entry: 1072bd2e0; end: 1072bd35f;  */

void FUN_1072bd2e0(undefined8 param_1,long *param_2)

{
  undefined1 auStack_38 [24];
  
  (**(code **)(*param_2 + 0x100))(param_2,1);
  func_0x000100060b18(auStack_38,&PTR_DAT_11099aba0);
  func_0x0001072d01c8();
  func_0x0001072cf668();
  func_0x0001072cf4e4(*(undefined8 *)(*param_2 + 0x110));
  func_0x0001072cec0c();
  func_0x0001072cf958();
  func_0x0001072cecfc();
  return;
}



/* Entry: 1072bd360; end: 1072bd387;  */

void FUN_1072bd360(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099abb0);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bd388; end: 1072bd393;  */

undefined ** FUN_1072bd388(void)

{
  return &PTR_DAT_11099abb0;
}



/* Entry: 1072bd394; end: 1072bd3bf;  */

undefined8 * FUN_1072bd394(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099abe0;
  func_0x0001072a9fc0(param_1 + 3);
  return param_1;
}



/* Entry: 1072bd3c0; end: 1072bd3d3;  */

void FUN_1072bd3c0(void)

{
  FUN_1072bd394();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072bd3d4; end: 1072bd3fb;  */

undefined8 * FUN_1072bd3d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x278;
  __Znwm();
  *puVar1 = &PTR_FUN_11099abe0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  func_0x0001072b97e0(puVar1 + 3,param_1 + 0x18);
  return puVar1;
}



/* Entry: 1072bd3fc; end: 1072bd41f;  */

undefined8 * FUN_1072bd3fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_11099abe0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  func_0x0001072b97e0(param_2 + 3,param_1 + 0x18);
  return param_2;
}



/* Entry: 1072bd420; end: 1072bd90f;  */

void FUN_1072bd420(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 **ppuStack_90;
  undefined8 **ppuStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  
  ppuVar7 = &puStack_b0;
  func_0x0001072ce940();
  lVar2 = *(long *)(param_1 + 0x10);
  lVar3 = 0x40;
  __Znwm();
  func_0x00010738f8c0();
  lStack_58 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar3 = lStack_58;
  lStack_58 = 0;
  if (lVar3 != 0) {
    func_0x0001072ce338();
  }
  puVar8 = *(undefined8 **)(lVar2 + 0x1c8);
  lVar4 = *(long *)(lVar2 + 0x1d0);
  func_0x0001072cf830();
  puStack_50 = puVar8;
  lStack_48 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  func_0x000107392710(lVar3,&puStack_50);
  func_0x0001072aa27c(&puStack_50);
  lStack_60 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar4 = lStack_60;
  lStack_60 = 0;
  if (lVar4 != 0) {
    func_0x0001072ce338();
  }
  lStack_48 = *(undefined8 *)(unaff_x20 + 0x70);
  puStack_50 = *(undefined8 **)(unaff_x20 + 0x68);
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x0001072cef44();
  func_0x0001072cfab8();
  func_0x000107395f8c();
  lStack_68 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar4 = lStack_68;
  lStack_68 = 0;
  if (lVar4 != 0) {
    func_0x0001072ce338();
  }
  func_0x00010726ee28(&puStack_50);
  lStack_48 = *(undefined8 *)(unaff_x20 + 0x100);
  puStack_50 = *(undefined8 **)(unaff_x20 + 0xf8);
  if (*(long *)(unaff_x20 + 0x100) != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_01 != 0);
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  func_0x0001072cef44();
  func_0x0001072cfab8();
  func_0x00010739519c();
  lStack_70 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar3 = lStack_70;
  lStack_70 = 0;
  if (lVar3 != 0) {
    func_0x0001072ce338();
  }
  func_0x0001072aa258(&puStack_50);
  lVar4 = 0x30;
  __Znwm();
  lVar3 = lVar4;
  func_0x00010738f340();
  lStack_78 = lVar4;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  func_0x0001072d0154();
  if (lVar3 != 0) {
    func_0x0001072ce338();
  }
  puStack_50 = *(undefined8 **)(unaff_x20 + 0x1a8);
  lStack_48 = *(long *)(unaff_x20 + 0x1b0);
  if (lStack_48 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_02 != 0);
  }
  func_0x0001072cef44();
  func_0x0001072cfab8();
  func_0x00010739721c();
  lStack_80 = lVar4;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar3 = lStack_80;
  lStack_80 = 0;
  if (lVar3 != 0) {
    func_0x0001072ce338();
  }
  ppuVar5 = &puStack_50;
  func_0x00010725b6e0();
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  ppuVar6 = ppuVar5 + 1;
  func_0x0001072ceb0c();
  *ppuVar5 = &PTR_DAT_1109a8d70;
  ppuVar5[1] = ppuVar6;
  ppuStack_88 = ppuVar5;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  func_0x0001072cf45c();
  if (ppuVar5 != (undefined8 **)0x0) {
    func_0x0001072ce338();
  }
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  ppuVar6 = ppuVar5 + 0x1a;
  func_0x0001072ceb0c();
  *ppuVar5 = &PTR_DAT_1109a8ce0;
  ppuVar5[1] = ppuVar6;
  ppuStack_90 = ppuVar5;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  func_0x0001072cf678();
  if (ppuVar5 != (undefined8 **)0x0) {
    func_0x0001072ce338();
  }
  lVar3 = 0x30;
  __Znwm();
  func_0x00010739a640();
  lStack_98 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  lVar3 = lStack_98;
  lStack_98 = 0;
  if (lVar3 != 0) {
    func_0x0001072ce338();
  }
  puVar8 = *(undefined8 **)(unaff_x20 + 0x208);
  lVar4 = *(long *)(unaff_x20 + 0x210);
  puStack_b0 = puVar8;
  lStack_a8 = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_03 != 0);
  }
  func_0x0001072cedd4();
  puStack_b0 = (undefined8 *)0x0;
  lStack_a8 = 0;
  puStack_50 = puVar8;
  lStack_48 = lVar4;
  func_0x000107393144();
  ppuVar6 = &puStack_50;
  func_0x0001072ac928();
  lStack_a0 = lVar3;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  func_0x0001072d0334();
  if (ppuVar6 != (undefined8 **)0x0) {
    func_0x0001072ce338();
  }
  func_0x0001072ac928();
  uVar1 = *(undefined8 *)(lVar2 + 0x1d8);
  lVar2 = *(long *)(lVar2 + 0x1e0);
  func_0x0001072ced58();
  if (lVar2 != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10_04 != 0);
  }
  *ppuVar7 = &PTR_DAT_1109a8db0;
  ppuVar7[1] = (undefined8 *)uVar1;
  ppuVar7[2] = (undefined8 *)lVar2;
  puStack_50 = (undefined8 *)0x0;
  lStack_48 = 0;
  func_0x0001072aa30c(&puStack_50);
  puStack_50 = ppuVar7;
  func_0x0001072cedc0();
  func_0x0001072ceb4c();
  puVar8 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    func_0x0001072ce338();
  }
  return;
}



/* Entry: 1072bd910; end: 1072bd937;  */

void FUN_1072bd910(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099ac40);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bd938; end: 1072bd943;  */

undefined ** FUN_1072bd938(void)

{
  return &PTR_DAT_11099ac40;
}



/* Entry: 1072bd944; end: 1072bd97b;  */

undefined8 * FUN_1072bd944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_11099abe0;
  uVar1 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar1;
  func_0x0001072b97e0(param_1 + 3,param_2 + 2);
  return param_1;
}



/* Entry: 1072bd97c; end: 1072bd987;  */

bool FUN_1072bd97c(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x40) == *(long *)(param_1 + 0x18)) {
    plVar3 = (long *)(param_1 + 0x38);
    do {
      plVar3 = (long *)*plVar3;
      bVar1 = plVar3 == (long *)0x0;
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar2 = param_1;
      FUN_1072bd9fc(param_1,plVar3 + 2);
      if (lVar2 == 0) {
        return bVar1;
      }
    } while (*(int *)(plVar3 + 2) == *(int *)(lVar2 + 0x10));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1072bd988; end: 1072bd9fb;  */

bool FUN_1072bd988(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18)) {
    plVar3 = (long *)(param_1 + 0x10);
    do {
      plVar3 = (long *)*plVar3;
      bVar1 = plVar3 == (long *)0x0;
      if (plVar3 == (long *)0x0) {
        return true;
      }
      lVar2 = param_2;
      FUN_1072bd9fc(param_2,plVar3 + 2);
      if (lVar2 == 0) {
        return bVar1;
      }
    } while (*(int *)(plVar3 + 2) == *(int *)(lVar2 + 0x10));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1072bd9fc; end: 1072bda97;  */

long FUN_1072bd9fc(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 1072bda98; end: 1072bdaef;  */

long FUN_1072bda98(long param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce4e8();
  if ((bool)in_CY) {
    FUN_1072bdaf0();
  }
  else {
    func_0x0001072bdacc();
    param_1 = unaff_x20 + 0x28;
  }
  *(long *)(unaff_x19 + 8) = param_1;
  return param_1 + -0x28;
}



/* Entry: 1072bdaf0; end: 1072bdb57;  */

void FUN_1072bdaf0(void)

{
  func_0x0001072ce314();
  func_0x0001072cf038();
  FUN_1072bdb7c();
  func_0x0001072ce15c();
  FUN_1072bdc00();
  func_0x0001072cfa50();
  FUN_1072bdb58();
  func_0x0001072ce9c4();
  FUN_1072bdbc0();
  func_0x0001072ceb54();
  func_0x0001072bdd70();
  return;
}



/* Entry: 1072bdb58; end: 1072bdb7b;  */

void FUN_1072bdb58(long param_1,long param_2)

{
  func_0x000105302f48();
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  return;
}



/* Entry: 1072bdb7c; end: 1072bdbbf;  */

undefined8 FUN_1072bdb7c(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x8;
  ulong extraout_x9;
  undefined8 extraout_x10;
  
  if (0x666666666666666 < param_2) {
    FUN_1072bdbf4();
    func_0x0001072ce2cc();
    func_0x0001072cf398();
    FUN_1072bdc78();
    func_0x0001072cdfc8();
    return param_1;
  }
  func_0x0001072d0100();
  uVar1 = extraout_x10;
  if (0x333333333333332 < extraout_x9) {
    uVar1 = extraout_x8;
  }
  return uVar1;
}



/* Entry: 1072bdbc0; end: 1072bdbf3;  */

void FUN_1072bdbc0(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072bdc78();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072bdbf4; end: 1072bdbff;  */

void FUN_1072bdbf4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce494();
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072bdc34(param_4);
  }
  func_0x0001072ce27c(0x28);
  return;
}



/* Entry: 1072bdc00; end: 1072bdc53;  */

void FUN_1072bdc00(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    func_0x0001072bdc34(param_4);
  }
  func_0x0001072ce27c(0x28);
  return;
}



/* Entry: 1072bdc54; end: 1072bdc77;  */

void FUN_1072bdc54(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  func_0x0001072d03d4();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x28);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x28) {
    func_0x0001072cf5d0();
    FUN_1072bdb58();
    lStack_48 = lStack_48 + 0x28;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072bdcdc();
  FUN_1072bdd08(auStack_70);
  return;
}



/* Entry: 1072bdc78; end: 1072bdcdb;  */

void FUN_1072bdc78(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x28) {
    func_0x0001072cf5d0();
    FUN_1072bdb58();
    lStack_38 = lStack_38 + 0x28;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  FUN_1072bdcdc();
  FUN_1072bdd08(auStack_60);
  return;
}



/* Entry: 1072bdcdc; end: 1072bdd07;  */

void FUN_1072bdcdc(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x28) {
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072bdd08; end: 1072bdd33;  */

void FUN_1072bdd08(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072bdd34();
  }
  return;
}



/* Entry: 1072bdd34; end: 1072bdd43;  */

void FUN_1072bdd34(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072bdd44; end: 1072bdd9b;  */

void FUN_1072bdd44(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x28;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072bdd9c; end: 1072bdda3;  */

void FUN_1072bdd9c(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940(param_1,*(undefined8 *)(param_1 + 8));
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072bdda4; end: 1072bddd3;  */

void FUN_1072bdda4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001072ce940();
  while (func_0x0001072cf020(), !(bool)in_ZR) {
    *(long *)(unaff_x20 + 0x10) = extraout_x8 + -0x28;
    func_0x0001006393ec();
  }
  return;
}



/* Entry: 1072bddd4; end: 1072bdddb;  */

void FUN_1072bddd4(void)

{
  return;
}



/* Entry: 1072bdddc; end: 1072bde03;  */

void FUN_1072bdddc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x0001072ce718();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_11099ac60;
  param_1[1] = uVar1;
  return;
}



/* Entry: 1072bde04; end: 1072bde23;  */

void FUN_1072bde04(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_11099ac60;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1072bde24; end: 1072bed27;  */

void FUN_1072bde24(long param_1)

{
  uint uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *plVar6;
  long lVar7;
  ulong uStack_5f0;
  long lStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined1 *apuStack_5c8 [2];
  undefined2 auStack_5b8 [12];
  int iStack_5a0;
  long lStack_598;
  undefined1 *puStack_590;
  undefined8 uStack_588;
  undefined1 *apuStack_570 [2];
  undefined1 *apuStack_560 [2];
  undefined1 *puStack_550;
  undefined1 *puStack_548;
  undefined1 auStack_540 [16];
  undefined1 auStack_530 [112];
  undefined1 auStack_4c0 [16];
  undefined4 uStack_4b0;
  undefined1 *puStack_480;
  undefined8 uStack_478;
  undefined1 auStack_450 [16];
  undefined4 uStack_440;
  undefined1 *puStack_410;
  undefined8 uStack_408;
  undefined1 auStack_400 [16];
  undefined1 uStack_3f0;
  undefined1 uStack_3b0;
  undefined1 auStack_3a0 [144];
  ulong uStack_310;
  long alStack_308 [3];
  undefined4 uStack_2f0;
  undefined4 uStack_2e0;
  uint uStack_2d8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined8 uStack_290;
  undefined1 *puStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [72];
  undefined1 auStack_210 [16];
  undefined1 uStack_200;
  undefined8 uStack_1c8;
  undefined1 auStack_180 [240];
  undefined1 auStack_90 [56];
  undefined8 uStack_58;
  
  func_0x0001072ce328();
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x188);
  uStack_58 = extraout_x8;
  func_0x00010002b838(auStack_180,PTR_DAT_1131ad030);
  (**(code **)(*plVar6 + 0x28))(plVar6,auStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
  func_0x000100060964(auStack_180,"annotations");
  func_0x0001072cfdc0(&uStack_310);
  FUN_1072bd0ac(&uStack_310);
  uVar1 = (uint)plVar6 & 0x101;
  lStack_5e8 = alStack_308[0];
  uStack_5f0 = uStack_310;
  if (alStack_308[0] != 0) {
    do {
      func_0x0001072ced88();
    } while (extraout_w10 != 0);
  }
  FUN_1072b9760(&uStack_310);
  func_0x0001072cfa1c();
  uVar3 = uVar1 == 0x101;
  if ((bool)uVar3) {
    func_0x000104c302a4(auStack_90,&UNK_10f4091cf,0x12);
    puVar5 = auStack_450;
    func_0x000104c302a4(puVar5,&UNK_10f4091e2,0x11);
    func_0x0001072cf468();
    func_0x0001077c38ac();
    if (puVar5 == (undefined1 *)0x0) {
      func_0x0001072cf468();
      func_0x0001077c3840();
      if (puVar5 == (undefined1 *)0x0) {
        auStack_210[0] = 0;
        uStack_200 = 0;
        func_0x0001072cf9ec();
        uStack_2f0 = 0;
        puStack_410 = (undefined1 *)((ulong)puStack_410 & 0xffffffffffffff00);
        uStack_3f0 = 0;
        func_0x0001072d0048();
        uStack_2b0 = 0;
        uStack_290 = 0;
        func_0x0001072cf524();
        func_0x00010736e5f0(0x139);
        func_0x0001072ceef8();
        if (extraout_x8_00 != 0) {
          do {
            func_0x0001072ced88();
          } while (extraout_w10_00 != 0);
        }
        uStack_4b0 = 0;
        FUN_1072bedf8(auStack_258,auStack_4c0,1);
        func_0x0001072d0028();
        func_0x0001072cf510(auStack_180);
        func_0x0001072cec2c();
        func_0x0001072cf33c(&puStack_480);
        func_0x0001072cf924();
        func_0x0001072cf628();
        func_0x0001072cfa24();
        func_0x0001072cf980();
        func_0x0001072cf988();
        FUN_1072b978c(auStack_4c0);
        func_0x0001072cfa0c();
        func_0x0001072cf9e4();
        func_0x0001072cf828();
        func_0x0001072d0014();
        func_0x0001072cf468();
        puStack_548 = puStack_480;
        puStack_480 = (undefined1 *)0x0;
        func_0x0001077c3854();
        puVar5 = puStack_548;
        puStack_548 = (undefined1 *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          func_0x0001072ce338();
        }
        func_0x0001072d02c4();
        if (puVar5 != (undefined1 *)0x0) {
          func_0x0001072ce338();
        }
      }
      func_0x0001072cef44();
      func_0x00010779d358();
      puStack_550 = puVar5;
      func_0x0001072cfd0c();
      uStack_1c8 = 0;
      func_0x00010774f358(auStack_540,"image");
      func_0x00010774f878(auStack_530,auStack_540);
      uStack_260 = 0;
      puStack_268 = (undefined1 *)0x0;
      func_0x00010774f7b8(&uStack_310,auStack_530,&puStack_268);
      func_0x0001072ced2c();
      func_0x0001072cf3a4();
      func_0x0001072cf32c();
      func_0x0001072cffb0();
      func_0x0001072cfeac();
      func_0x0001072cf900();
      func_0x0001072ced2c();
      func_0x0001072cf3a4();
      func_0x0001072cfe48();
      func_0x00010774fa54(apuStack_570,auStack_210);
      func_0x00010774fab8(apuStack_560,apuStack_570);
      func_0x0001072c9b9c(apuStack_570);
      func_0x0001072cf820();
      func_0x0001072cf8e0();
      func_0x000100060b18(auStack_4c0,&PTR_s_scale_11099acc0);
      FUN_1072625b4(auStack_3a0,auStack_4c0);
      func_0x0001072d00b4();
      func_0x0001072cfa14(&puStack_480);
      func_0x0001072bed5c(auStack_258,&puStack_480,1,auStack_5b8);
      func_0x0001072cf9d4(&puStack_590);
      func_0x0001072cf990();
      func_0x0001072c9b9c(&puStack_480);
      func_0x0001072ceb60();
      func_0x0001072cf968();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4c0);
      func_0x0001072cf9cc();
      uStack_408 = uStack_588;
      puStack_410 = puStack_590;
      puStack_590 = (undefined1 *)0x0;
      uStack_588 = 0;
      alStack_308[0] = 0;
      uStack_2a8 = 2;
      func_0x0001072cfa14(auStack_400);
      func_0x0001072bed5c(auStack_3a0,&puStack_410,2,auStack_4c0);
      FUN_1072bed64(&lStack_598,auStack_3a0);
      func_0x0001072cf970();
      lVar7 = 0x10;
      do {
        func_0x0001072c9b9c((long)&puStack_410 + lVar7);
        lVar7 = lVar7 + -0x10;
      } while (lVar7 != -0x10);
      func_0x0001072ceb60();
      func_0x0001077a091c(auStack_5b8,puStack_550);
      uVar3 = iStack_5a0 == 1;
      if ((bool)uVar3) {
        puVar4 = auStack_5b8;
        FUN_1072ca248();
        puVar5 = puStack_550;
        uVar2 = *puVar4;
        puStack_410 = (undefined1 *)((ulong)puStack_410 & 0xffffffffffffff00);
        uStack_3b0 = 0;
        FUN_1072ca264(auStack_3a0,apuStack_560,&puStack_410);
        func_0x0001072d00c0();
        func_0x00010779dfec(puVar5,uVar2,&uStack_310);
        FUN_1072ca37c(alStack_308);
        func_0x0001072cf978();
        func_0x0001072cf9c4();
        puVar5 = puStack_550;
        FUN_1072ca3fc(auStack_4c0,&lStack_598);
        FUN_1072ca4a8(&puStack_480,auStack_4c0,0);
        FUN_1072ca4f0(&uStack_310,&puStack_480);
        func_0x00010779e184(puVar5,uVar2,&uStack_310);
        FUN_107266a30(&uStack_310);
        FUN_107266a84(&puStack_480);
        func_0x0001072c9b9c(auStack_4c0);
        uStack_310 = 0x4140000000000000;
        uStack_2d8 = 1;
        func_0x00010779e078(puStack_550,uVar2,&uStack_310);
        FUN_1072ca524(&uStack_310);
      }
      puVar5 = puStack_550;
      func_0x00010774f888(apuStack_5c8);
      func_0x0001072d01c8();
      FUN_1072ca574(auStack_4c0,apuStack_5c8,&uStack_5e0);
      FUN_1072ca5e8(&uStack_310,auStack_4c0);
      func_0x00010779e0e4(puVar5,&uStack_310);
      FUN_1072ca648(&uStack_310);
      FUN_1072ca6a0(auStack_4c0);
      FUN_10726b07c(&uStack_5e0);
      func_0x0001072c9b9c(apuStack_5c8);
      func_0x0001072cf468();
      apuStack_5c8[0] = puStack_550;
      puStack_550 = (undefined1 *)0x0;
      uStack_310 = uStack_310 & 0xffffffffffffff00;
      uStack_2d8 = uStack_2d8 & 0xffffff00;
      func_0x0001077c38c0();
      func_0x00010724b3d8(&uStack_310);
      if (apuStack_5c8[0] != (undefined1 *)0x0) {
        func_0x0001072ce338();
      }
      FUN_1072ca6c8(auStack_5b8);
      if (lStack_598 != 0) {
        func_0x0001072ce338();
      }
      FUN_1072c95d0(&puStack_590);
      func_0x0001072c9b9c(apuStack_560);
      func_0x0001072cf92c();
      func_0x0001072cf620();
      func_0x0001072ca74c(&puStack_550);
    }
    func_0x000104c2f714(auStack_450);
    puVar5 = auStack_90;
  }
  else {
    func_0x000104c302a4(auStack_4c0,&UNK_10f4091cf,0x12);
    puVar5 = auStack_90;
    func_0x000104c302a4(puVar5,&UNK_10f4091e2,0x11);
    func_0x0001072cf468();
    func_0x0001077c38ac();
    if (puVar5 == (undefined1 *)0x0) {
      func_0x0001072cf468();
      func_0x0001077c3840();
      if (puVar5 == (undefined1 *)0x0) {
        auStack_210[0] = 0;
        uStack_200 = 0;
        func_0x0001072cf9ec();
        uStack_2f0 = 0;
        puStack_410 = (undefined1 *)((ulong)puStack_410 & 0xffffffffffffff00);
        uStack_3f0 = 0;
        func_0x0001072d0048();
        uStack_2b0 = 0;
        uStack_290 = 0;
        func_0x0001072cf524();
        func_0x00010736e5f0(uVar1 + 0x38);
        func_0x0001072ceef8();
        if (extraout_x8_01 != 0) {
          do {
            func_0x0001072ced88();
          } while (extraout_w10_01 != 0);
        }
        uStack_440 = 0;
        FUN_1072bedf8(auStack_258,auStack_450,1);
        func_0x0001072d0028();
        func_0x0001072cf510(auStack_180);
        func_0x0001072cec2c();
        func_0x0001072cf33c(&puStack_480);
        func_0x0001072cf924();
        func_0x0001072cf628();
        func_0x0001072cfa24();
        func_0x0001072cf980();
        func_0x0001072cf988();
        FUN_1072b978c(auStack_450);
        func_0x0001072cfa0c();
        func_0x0001072cf9e4();
        func_0x0001072cf828();
        func_0x0001072d0014();
        func_0x0001072cf468();
        apuStack_560[0] = puStack_480;
        puStack_480 = (undefined1 *)0x0;
        func_0x0001077c3854();
        puVar5 = apuStack_560[0];
        apuStack_560[0] = (undefined1 *)0x0;
        if (puVar5 != (undefined1 *)0x0) {
          func_0x0001072ce338();
        }
        func_0x0001072d02c4();
        if (puVar5 != (undefined1 *)0x0) {
          func_0x0001072ce338();
        }
      }
      func_0x0001072cef44();
      func_0x0001077a4328();
      apuStack_570[0] = puVar5;
      func_0x0001072cfd0c();
      uStack_1c8 = 0;
      func_0x00010774f358(&puStack_590,"image");
      func_0x00010774f878(auStack_5b8,&puStack_590);
      uStack_5e0 = 0;
      uStack_5d8 = 0;
      func_0x00010774f7b8(&uStack_310,auStack_5b8,&uStack_5e0);
      func_0x0001072ced2c();
      func_0x0001072cf3a4();
      func_0x0001072c9b9c(&uStack_5e0);
      func_0x0001072c9b9c(auStack_5b8);
      func_0x0001072c9b9c(&puStack_590);
      func_0x0001072cf900();
      func_0x0001072ced2c();
      func_0x0001072cf3a4();
      func_0x0001072cfe48();
      func_0x00010774fa54(auStack_540,auStack_210);
      func_0x00010774fab8(auStack_530,auStack_540);
      func_0x0001072cfeac();
      func_0x0001072cf820();
      func_0x0001072cf8e0();
      func_0x000100060b18(auStack_450,&PTR_s_scale_11099acc0);
      FUN_1072625b4(auStack_3a0,auStack_450);
      func_0x0001072d00b4();
      func_0x0001072cfa14(&puStack_268);
      func_0x0001072bed5c(auStack_258,&puStack_268,1,apuStack_5c8);
      func_0x0001072cf9d4(&puStack_480);
      func_0x0001072cf990();
      func_0x0001072cf32c();
      func_0x0001072ceb60();
      func_0x0001072cf968();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_450);
      func_0x0001072cf9cc();
      uStack_408 = uStack_478;
      puStack_410 = puStack_480;
      puStack_480 = (undefined1 *)0x0;
      uStack_478 = 0;
      alStack_308[0] = 0;
      uStack_2a8 = 2;
      func_0x0001072cfa14(auStack_400);
      func_0x0001072bed5c(auStack_3a0,&puStack_410,2,auStack_450);
      FUN_1072bed64(apuStack_5c8,auStack_3a0);
      func_0x0001072cf970();
      lVar7 = 0x10;
      do {
        func_0x0001072c9b9c((long)&puStack_410 + lVar7);
        lVar7 = lVar7 + -0x10;
        uVar3 = lVar7 == -0x10;
      } while (!(bool)uVar3);
      func_0x0001072ceb60();
      puVar5 = apuStack_570[0];
      puStack_410 = (undefined1 *)((ulong)puStack_410 & 0xffffffffffffff00);
      uStack_3b0 = 0;
      FUN_1072ca264(auStack_3a0,auStack_530,&puStack_410);
      func_0x0001072d00c0();
      func_0x0001077a5728(puVar5,&uStack_310);
      FUN_1072ca37c(alStack_308);
      func_0x0001072cf978();
      func_0x0001072cf9c4();
      puVar5 = apuStack_570[0];
      FUN_1072ca3fc(&puStack_268,apuStack_5c8);
      FUN_1072ca4a8(auStack_450,&puStack_268,0);
      FUN_1072ca4f0(&uStack_310,auStack_450);
      func_0x0001077a58c0(puVar5,&uStack_310);
      FUN_107266a30(&uStack_310);
      FUN_107266a84(auStack_450);
      func_0x0001072cf32c();
      uStack_310._0_1_ = 4;
      uStack_2e0 = 1;
      func_0x0001077a5658(apuStack_570[0],&uStack_310);
      FUN_1072ca7a0(&uStack_310);
      uStack_310._0_1_ = 3;
      uStack_2e0 = 1;
      func_0x0001077a5854(apuStack_570[0],&uStack_310);
      FUN_1072ca7a0(&uStack_310);
      uStack_310._0_1_ = 1;
      uStack_2e0 = 1;
      func_0x0001077a56c4(apuStack_570[0],&uStack_310);
      FUN_10727fc1c(&uStack_310);
      uStack_310 = CONCAT71(uStack_310._1_7_,1);
      uStack_2e0 = 1;
      func_0x0001077a57f0(apuStack_570[0],&uStack_310);
      FUN_1072ca7f0(&uStack_310);
      uStack_310 = 0x4140000000000000;
      uStack_2d8 = 1;
      func_0x0001077a578c(apuStack_570[0],&uStack_310);
      FUN_1072ca524(&uStack_310);
      func_0x0001072cf468();
      puStack_268 = apuStack_570[0];
      apuStack_570[0] = (undefined1 *)0x0;
      uStack_310 = uStack_310 & 0xffffffffffffff00;
      uStack_2d8 = uStack_2d8 & 0xffffff00;
      func_0x0001077c38c0();
      func_0x00010724b3d8(&uStack_310);
      if (puStack_268 != (undefined1 *)0x0) {
        func_0x0001072ce338();
      }
      if (apuStack_5c8[0] != (undefined1 *)0x0) {
        func_0x0001072ce338();
      }
      FUN_1072c95d0(&puStack_480);
      func_0x0001072cffb0();
      func_0x0001072cf92c();
      func_0x0001072cf620();
      FUN_1072ca840(apuStack_570);
    }
    func_0x000104c2f714(auStack_90);
    puVar5 = auStack_4c0;
  }
  func_0x000104c2f714(puVar5);
  func_0x00010726ee94(&uStack_5f0);
  func_0x0001072ce0cc(uStack_58);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar5 = apuStack_560[0];
    if (apuStack_560[0] != (undefined1 *)0x0) {
      func_0x0001072ce338();
    }
    func_0x0001072d02c4();
    if (puVar5 != (undefined1 *)0x0) {
      func_0x0001072ce338();
    }
    do {
      func_0x000104c2f714(auStack_90);
      func_0x000104c2f714(auStack_4c0);
      func_0x00010726ee94(&uStack_5f0);
      func_0x0001072ce900();
      func_0x0001072cfeac();
      func_0x0001072cf820();
      func_0x0001072cf92c();
      func_0x0001072cf620();
      FUN_1072ca840(apuStack_570);
    } while( true );
  }
  return;
}



/* Entry: 1072bed28; end: 1072bed4f;  */

void FUN_1072bed28(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099aef8);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bed50; end: 1072bed63;  */

undefined ** FUN_1072bed50(void)

{
  return &PTR_DAT_11099aef8;
}



/* Entry: 1072bed64; end: 1072bedf7;  */

undefined8 * FUN_1072bed64(undefined8 *param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 *puStack_100;
  long *plStack_f8;
  long *plStack_f0;
  undefined1 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [80];
  
  puVar2 = &uStack_90;
  puVar3 = &uStack_90;
  func_0x0001072ce248();
  uVar1 = 0x90;
  __Znwm();
  uStack_88 = 1;
  FUN_1072c9bc0(auStack_80,param_2);
  puVar4 = auStack_80;
  FUN_1072c9e10(uVar1,&uStack_90);
  *param_1 = uVar1;
  FUN_1072c9c34(auStack_80);
  FUN_1072c9884();
  func_0x0001072ce098();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    FUN_1072c9c34(auStack_80);
    FUN_1072c9884();
    func_0x0001072cedb8();
    func_0x0001072ce94c();
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    func_0x0001072cee8c();
    if (puVar4 != (undefined1 *)0x0) {
      FUN_1072beee0(puVar3,puVar4);
      lVar5 = puVar3[1];
      puStack_100 = puVar3 + 2;
      plStack_f8 = &lStack_e0;
      plStack_f0 = &lStack_d8;
      uStack_e8 = 0;
      lStack_e0 = lVar5;
      for (lVar6 = (long)puVar4 * 0x18; lStack_d8 = lVar5, lVar6 != 0; lVar6 = lVar6 + -0x18) {
        func_0x0001072cefcc();
        FUN_1072bef58();
        lVar5 = lStack_d8 + 0x18;
      }
      uStack_e8 = 1;
      FUN_1072bf024(&puStack_100);
      puVar3[1] = lVar5;
    }
    func_0x0001072ce630();
    func_0x0001072bf094();
    return puVar3;
  }
  return puVar2;
}



/* Entry: 1072bedf8; end: 1072beedf;  */

undefined8 * FUN_1072bedf8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001072cee8c();
  if (param_3 != 0) {
    FUN_1072beee0(param_1,param_3);
    lVar1 = param_1[1];
    puStack_70 = param_1 + 2;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_50 = lVar1;
    for (param_3 = param_3 * 0x18; lStack_48 = lVar1, param_3 != 0; param_3 = param_3 + -0x18) {
      func_0x0001072cefcc();
      FUN_1072bef58();
      lVar1 = lStack_48 + 0x18;
    }
    uStack_58 = 1;
    FUN_1072bf024(&puStack_70);
    param_1[1] = lVar1;
  }
  func_0x0001072ce630();
  func_0x0001072bf094();
  return param_1;
}



/* Entry: 1072beee0; end: 1072bef0b;  */

void FUN_1072beee0(void)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
    func_0x0001072cef30();
    FUN_1072bef18();
    func_0x0001072ce7dc();
    return;
  }
  FUN_1072bef0c();
  func_0x0001072ce494();
  FUN_1072bef38();
  return;
}



/* Entry: 1072bef0c; end: 1072bef17;  */

void FUN_1072bef0c(void)

{
  func_0x0001072ce494();
  FUN_1072bef38();
  return;
}



/* Entry: 1072bef18; end: 1072bef37;  */

void FUN_1072bef18(void)

{
  FUN_1072bef38();
  return;
}



/* Entry: 1072bef38; end: 1072bef57;  */

void FUN_1072bef38(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined4 extraout_w8;
  long unaff_x30;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cfb38();
  *(undefined4 *)(unaff_x30 + 0x10) = extraout_w8;
  FUN_1072bef88();
  return;
}



/* Entry: 1072bef58; end: 1072bef87;  */

void FUN_1072bef58(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x0001072cfb38();
  *(undefined4 *)(param_1 + 0x10) = extraout_w8;
  FUN_1072bef88();
  return;
}



/* Entry: 1072bef88; end: 1072befcb;  */

void FUN_1072bef88(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac1fc();
  FUN_1072b978c();
  iVar1 = *(int *)(unaff_x20 + 0x10);
  if (iVar1 != -1) {
    func_0x0001072ced04(&PTR_FUN_11099acd0);
    *(int *)(unaff_x19 + 0x10) = iVar1;
  }
  return;
}



/* Entry: 1072befcc; end: 1072bf023;  */

void FUN_1072befcc(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)*param_1;
  lVar1 = param_2[1];
  uVar3 = *param_2;
  puVar2[1] = param_2[1];
  *puVar2 = uVar3;
  if (lVar1 != 0) {
    do {
      func_0x0001072ced88(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072bf024; end: 1072bf04f;  */

void FUN_1072bf024(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072bf050();
  }
  return;
}



/* Entry: 1072bf050; end: 1072bf05f;  */

void FUN_1072bf050(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  func_0x0001072ce908();
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    FUN_1072b978c(param_3);
  }
  return;
}



/* Entry: 1072bf060; end: 1072bf0e7;  */

void FUN_1072bf060(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    FUN_1072b978c(param_3);
  }
  return;
}



/* Entry: 1072bf0e8; end: 1072bf0ef;  */

void FUN_1072bf0e8(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072ce940(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_1072b978c(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bf0f0; end: 1072bf12b;  */

void FUN_1072bf0f0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001072ce940();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x18;
    FUN_1072b978c(lVar1);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072bf12c; end: 1072bf16b;  */

void FUN_1072bf12c(long param_1)

{
  func_0x0001003ac1fc();
  func_0x000104c2fe00();
  FUN_1072bf16c(param_1 + 0x38);
  return;
}



/* Entry: 1072bf16c; end: 1072bf18f;  */

void FUN_1072bf16c(void)

{
  func_0x0001072ce208();
  func_0x0001072ceafc();
  FUN_1072bf190();
  return;
}



/* Entry: 1072bf190; end: 1072bf1d7;  */

void FUN_1072bf190(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072beee0();
    func_0x0001072ce35c();
    FUN_1072bf1d8();
  }
  func_0x0001072ce630();
  func_0x0001072bf094();
  return;
}



/* Entry: 1072bf1d8; end: 1072bf1ff;  */

void FUN_1072bf1d8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  FUN_1072bf200();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072bf200; end: 1072bf213;  */

void FUN_1072bf200(void)

{
  FUN_1072bf214();
  return;
}



/* Entry: 1072bf214; end: 1072bf263;  */

void FUN_1072bf214(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_1072bef58();
    func_0x0001072d0180();
  }
  func_0x0001072ce708();
  FUN_1072bf024();
  return;
}



/* Entry: 1072bf264; end: 1072bf2b3;  */

void FUN_1072bf264(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x0001003ac1fc();
  func_0x0001072d0320();
  for (param_3 = param_3 * 0x50; param_3 != 0; param_3 = param_3 + -0x50) {
    func_0x0001072cef80();
    FUN_1072bf2b4();
  }
  return;
}



/* Entry: 1072bf2b4; end: 1072bf2e7;  */

void FUN_1072bf2b4(void)

{
  func_0x0001072bf2cc();
  return;
}



/* Entry: 1072bf2e8; end: 1072bf4a7;  */

undefined1  [16]
FUN_1072bf2e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_x8;
  undefined8 extraout_x9;
  long *unaff_x19;
  long *unaff_x21;
  long *plVar5;
  ulong uVar6;
  ulong unaff_x25;
  ulong uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_68 [24];
  
  func_0x0001072cfa2c();
  FUN_10726364c();
  uVar6 = unaff_x19[1];
  if (uVar6 != 0) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      unaff_x25 = uVar7 & param_3;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_3 - uVar6) < 0;
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar4 * uVar6;
      }
    }
    plVar5 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    unaff_x21 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x21 = (long *)*plVar5;
          if (unaff_x21 == (long *)0x0) goto LAB_1072bf3a8;
          uVar4 = unaff_x21[1];
          in_NG = (long)(uVar4 - param_3) < 0;
          plVar5 = unaff_x21;
          if (uVar4 != param_3) break;
          plVar2 = unaff_x21 + 2;
          func_0x000104c32db4(plVar2,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            goto LAB_1072bf47c;
          }
        }
        if ((uVar6 & uVar7) == 0) {
          uVar4 = uVar4 & uVar7;
        }
        else if (uVar6 <= uVar4) {
          uVar1 = 0;
          if (uVar6 != 0) {
            uVar1 = uVar4 / uVar6;
          }
          uVar4 = uVar4 - uVar1 * uVar6;
        }
        in_NG = (long)(uVar4 - unaff_x25) < 0;
      } while (uVar4 == unaff_x25);
    }
  }
LAB_1072bf3a8:
  func_0x0001072cef80(auStack_68);
  FUN_1072bf4a8();
  func_0x0001072cf168();
  if ((uVar6 == 0) || (func_0x0001072d01ec(param_1,param_2,(float)uVar6), (bool)in_NG)) {
    func_0x0001072cfbe4();
    func_0x0001072ceb68();
    FUN_1072bf534();
    uVar6 = unaff_x19[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      unaff_x25 = uVar6 - 1 & param_3;
    }
    else {
      unaff_x25 = param_3;
      if (uVar6 <= param_3) {
        uVar7 = 0;
        if (uVar6 != 0) {
          uVar7 = param_3 / uVar6;
        }
        unaff_x25 = param_3 - uVar7 * uVar6;
      }
    }
  }
  if (*(long *)(*unaff_x19 + unaff_x25 * 8) == 0) {
    func_0x0001072cfc20();
    *(undefined8 *)(extraout_x8 + unaff_x25 * 8) = extraout_x9;
    if (*unaff_x21 != 0) {
      uVar7 = *(ulong *)(*unaff_x21 + 8);
      if ((uVar6 & uVar6 - 1) == 0) {
        uVar7 = uVar7 & uVar6 - 1;
      }
      else if (uVar6 <= uVar7) {
        uVar4 = 0;
        if (uVar6 != 0) {
          uVar4 = uVar7 / uVar6;
        }
        uVar7 = uVar7 - uVar4 * uVar6;
      }
      *(long **)(extraout_x8 + uVar7 * 8) = unaff_x21;
    }
  }
  else {
    func_0x0001072d0194();
  }
  func_0x0001072cfb60();
  FUN_1072bf6b8();
  uVar3 = 1;
LAB_1072bf47c:
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = unaff_x21;
  return auVar8;
}



/* Entry: 1072bf4a8; end: 1072bf4fb;  */

void FUN_1072bf4a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x0001072cf804();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_1072bf4fc(param_2 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1072bf4fc; end: 1072bf533;  */

void FUN_1072bf4fc(long param_1)

{
  long unaff_x20;
  
  func_0x0001003ac1fc();
  func_0x000104c2fe00();
  FUN_1072bf16c(param_1 + 0x38,unaff_x20 + 0x38);
  return;
}



/* Entry: 1072bf534; end: 1072bf5bf;  */

void FUN_1072bf534(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar5;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar6;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *plVar7;
  ulong uVar8;
  
  uVar3 = param_1;
  if (param_2 - 1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar5 = param_2;
    if ((param_2 & param_2 - 1) != 0) {
      func_0x0001072cfdd8();
      uVar5 = uVar3;
    }
  }
  uVar8 = *(ulong *)(param_1 + 8);
  uVar2 = uVar8 <= uVar5;
  if (uVar8 < uVar5) {
LAB_1072bf578:
    func_0x0001072cef80();
    if (param_2 == 0) {
      FUN_1072bf688(uVar3);
      *(undefined8 *)(uVar3 + 8) = 0;
    }
    else {
      lVar4 = uVar3 + 8;
      FUN_1072bf6a0(lVar4);
      FUN_1072bf688(uVar3,lVar4);
      func_0x0001072cfac8();
      uVar5 = extraout_x9;
      while (param_2 != uVar5) {
        func_0x0001072d01d4();
        uVar5 = extraout_x9_00;
      }
      if (*(long *)(uVar3 + 0x10) != 0) {
        func_0x0001072cf2a8();
        func_0x0001072cf294();
        lVar4 = extraout_x8;
        plVar7 = extraout_x9_01;
        uVar3 = extraout_x10;
        uVar5 = extraout_x11;
        while (plVar6 = plVar7, plVar7 = (long *)*plVar6, plVar7 != (long *)0x0) {
          uVar8 = plVar7[1];
          if ((param_2 & uVar3) == 0) {
            uVar8 = uVar8 & uVar3;
          }
          else if (param_2 <= uVar8) {
            uVar1 = 0;
            if (param_2 != 0) {
              uVar1 = uVar8 / param_2;
            }
            uVar8 = uVar8 - uVar1 * param_2;
          }
          if (uVar8 != uVar5) {
            if (*(long *)(lVar4 + uVar8 * 8) == 0) {
              *(long **)(lVar4 + uVar8 * 8) = plVar6;
              uVar5 = uVar8;
            }
            else {
              *plVar6 = *plVar7;
              func_0x0001072ce844();
              lVar4 = extraout_x8_00;
              plVar7 = extraout_x9_02;
              uVar3 = extraout_x10_00;
              uVar5 = extraout_x11_00;
            }
          }
        }
      }
    }
    return;
  }
  if (!(bool)uVar2) {
    func_0x0001072ceaa8();
    if (((bool)uVar2) && ((uVar8 & uVar8 - 1) == 0)) {
      func_0x0001072ce5e0();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x0001072cfae8();
    if (!(bool)uVar2) goto LAB_1072bf578;
  }
  return;
}



/* Entry: 1072bf5c0; end: 1072bf687;  */

void FUN_1072bf5c0(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  ulong extraout_x9;
  ulong uVar3;
  ulong extraout_x9_00;
  long *extraout_x9_01;
  long *plVar4;
  long *extraout_x9_02;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1072bf688(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = param_1 + 8;
    FUN_1072bf6a0(lVar2);
    FUN_1072bf688(param_1,lVar2);
    func_0x0001072cfac8();
    uVar3 = extraout_x9;
    while (param_2 != uVar3) {
      func_0x0001072d01d4();
      uVar3 = extraout_x9_00;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x0001072cf2a8();
      func_0x0001072cf294();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_01;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x0001072ce844();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_02;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1072bf688; end: 1072bf69f;  */

void FUN_1072bf688(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bf6a0; end: 1072bf6b7;  */

void FUN_1072bf6a0(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x0001072cebb4();
  FUN_1072bf6d8();
  return;
}



/* Entry: 1072bf6b8; end: 1072bf6d7;  */

void FUN_1072bf6b8(void)

{
  func_0x0001072cebb4();
  FUN_1072bf6d8();
  return;
}



/* Entry: 1072bf6d8; end: 1072bf6ef;  */

void FUN_1072bf6d8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x0001072c9320(lVar1 + 0x10);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar1);
  return;
}



/* Entry: 1072bf6f0; end: 1072bf7a3;  */

void FUN_1072bf6f0(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001072c9320(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 1072bf7a4; end: 1072bf7c3;  */

void FUN_1072bf7a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072bf7c4; end: 1072bf7e7;  */

void FUN_1072bf7c4(undefined8 *param_1)

{
  func_0x0001072ceb0c();
  *param_1 = &PTR_DAT_11099bcf8;
  return;
}



/* Entry: 1072bf7e8; end: 1072bf80f;  */

void FUN_1072bf7e8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_11099bcf8;
  return;
}



/* Entry: 1072bf810; end: 1072bf837;  */

void FUN_1072bf810(undefined8 param_1)

{
  func_0x0001072cea90();
  func_0x0001072cea04(param_1,&PTR_DAT_11099bd68);
  func_0x0001072ce484();
  return;
}



/* Entry: 1072bf838; end: 1072bf843;  */

undefined ** FUN_1072bf838(void)

{
  return &PTR_DAT_11099bd68;
}



/* Entry: 1072bf844; end: 1072bf8cf;  */

void FUN_1072bf844(undefined8 param_1,undefined8 param_2,int *param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  int *piVar1;
  undefined1 auStack_48 [24];
  
  if (*param_3 == 0) {
    piVar1 = param_3;
    FUN_1072bf8d0();
    if (**(long **)piVar1 != (*(long **)piVar1)[1]) {
      FUN_1072bf928(auStack_48,param_3,*param_4,*(undefined4 *)(param_4 + 4),
                    *(undefined4 *)(param_4 + 8),param_5);
      func_0x0001072ce9c4();
      FUN_1072c8ec0();
      FUN_1072c8f3c(auStack_48);
      return;
    }
  }
  FUN_1072c8fb4(param_1);
  return;
}



/* Entry: 1072bf8d0; end: 1072bf927;  */

int * FUN_1072bf8d0(int *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,double *param_5
                   )

{
  undefined8 uVar1;
  int *piVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  byte bVar5;
  undefined8 *extraout_x8;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_140 [104];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  int aiStack_90 [4];
  
  if (*param_1 == 0) {
    return param_1 + 2;
  }
  uVar1 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c2dd4c();
  ppuVar3 = &PTR_DAT_1107eaec8;
  puVar4 = &DAT_104c2dd50;
  ___cxa_throw(uVar1,&PTR_DAT_1107eaec8,&DAT_104c2dd50);
  func_0x0001072cec00();
  ___cxa_free_exception();
  func_0x0001072ce94c();
  FUN_1072bffec(aiStack_90);
  dVar7 = (double)NEON_ucvtf((ulong)*(ushort *)(param_5 + 1));
  dVar9 = (double)(uint)(1 << (ulong)((uint)ppuVar3 & 0x1f));
  dVar8 = (*param_5 / dVar7) / dVar9;
  dVar6 = dVar8;
  FUN_1072bfb0c(auStack_a8,dVar8,aiStack_90,0);
  if (*(char *)((long)param_5 + 0xd) == '\x01') {
    func_0x0001072d0224();
    dVar6 = dVar6 / dVar7;
    FUN_1072bfc4c(auStack_140,dVar6,auStack_a8,*(undefined1 *)((long)param_5 + 0xc));
    func_0x0001072c3c44(auStack_a8,auStack_140);
    func_0x0001072cf494();
  }
  if (((*(byte *)((long)param_5 + 0xe) & 1) == 0) && (*(char *)((long)param_5 + 0xc) == '\0')) {
    bVar5 = 0;
  }
  else {
    func_0x0001072d0224();
    dVar6 = dVar6 / dVar7;
    func_0x0001072cfbfc(auStack_140,((double)((ulong)puVar4 & 0xffffffff) - dVar6) / dVar9,
                        (dVar6 + (double)((int)puVar4 + 1)) / dVar9,auStack_a8);
    FUN_1072bfd7c();
    func_0x0001072cfbfc(auStack_c0,((double)(param_4 & 0xffffffff) - dVar6) / dVar9,
                        (dVar6 + (double)((int)param_4 + 1)) / dVar9,auStack_140,
                        *(undefined1 *)((long)param_5 + 0xc));
    FUN_1072bfeb4();
    func_0x0001072c3c44(auStack_a8,auStack_c0);
    func_0x0001072c3ca8(auStack_c0);
    func_0x0001072cf494();
    bVar5 = *(byte *)((long)param_5 + 0xc);
  }
  FUN_1072c5b2c(dVar8,auStack_140,auStack_a8,ppuVar3,puVar4,param_4,*(undefined2 *)(param_5 + 1),
                bVar5 & 1);
  extraout_x8[1] = uStack_d0;
  *extraout_x8 = uStack_d8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  extraout_x8[2] = uStack_c8;
  FUN_1072c8e94(auStack_140);
  func_0x0001072c3ca8(auStack_a8);
  piVar2 = aiStack_90;
  FUN_10726dd08(piVar2);
  return piVar2;
}



/* Entry: 1072bf928; end: 1072bfb0b;  */

void FUN_1072bf928(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,double *param_6)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_120 [104];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  
  FUN_1072bffec(auStack_70,param_2,auStack_120);
  dVar3 = (double)NEON_ucvtf((ulong)*(ushort *)(param_6 + 1));
  dVar5 = (double)(uint)(1 << (ulong)((uint)param_3 & 0x1f));
  dVar4 = (*param_6 / dVar3) / dVar5;
  dVar2 = dVar4;
  FUN_1072bfb0c(auStack_88,dVar4,auStack_70,0);
  if (*(char *)((long)param_6 + 0xd) == '\x01') {
    func_0x0001072d0224();
    dVar2 = dVar2 / dVar3;
    FUN_1072bfc4c(auStack_120,dVar2,auStack_88,*(undefined1 *)((long)param_6 + 0xc));
    func_0x0001072c3c44(auStack_88,auStack_120);
    func_0x0001072cf494();
  }
  if (((*(byte *)((long)param_6 + 0xe) & 1) == 0) && (*(char *)((long)param_6 + 0xc) == '\0')) {
    bVar1 = 0;
  }
  else {
    func_0x0001072d0224();
    dVar2 = dVar2 / dVar3;
    func_0x0001072cfbfc(auStack_120,((double)(param_4 & 0xffffffff) - dVar2) / dVar5,
                        (dVar2 + (double)((int)param_4 + 1)) / dVar5,auStack_88);
    FUN_1072bfd7c();
    func_0x0001072cfbfc(auStack_a0,((double)(param_5 & 0xffffffff) - dVar2) / dVar5,
                        (dVar2 + (double)((int)param_5 + 1)) / dVar5,auStack_120,
                        *(undefined1 *)((long)param_6 + 0xc));
    FUN_1072bfeb4();
    func_0x0001072c3c44(auStack_88,auStack_a0);
    func_0x0001072c3ca8(auStack_a0);
    func_0x0001072cf494();
    bVar1 = *(byte *)((long)param_6 + 0xc);
  }
  FUN_1072c5b2c(dVar4,auStack_120,auStack_88,param_3,param_4,param_5,*(undefined2 *)(param_6 + 1),
                bVar1 & 1);
  param_1[1] = uStack_b0;
  *param_1 = uStack_b8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  param_1[2] = uStack_a8;
  FUN_1072c8e94(auStack_120);
  func_0x0001072c3ca8(auStack_88);
  FUN_10726dd08(auStack_70);
  return;
}



/* Entry: 1072bfb0c; end: 1072bfc4b;  */

void FUN_1072bfb0c(double param_1,undefined8 *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 *extraout_x8_00;
  long lVar5;
  long lVar6;
  double dVar7;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_148;
  long lStack_140;
  double dStack_f0;
  undefined4 auStack_e8 [2];
  long lStack_e0;
  undefined1 auStack_a8 [64];
  undefined8 uStack_68;
  
  dVar7 = param_1;
  func_0x0001072ce294();
  uStack_68 = extraout_x8;
  func_0x0001072cf0fc();
  func_0x0001072cfe18();
  lVar1 = ((long *)*param_2)[1];
  lVar5 = 0;
  for (lVar4 = *(long *)*param_2; bVar2 = lVar4 == lVar1, !bVar2; lVar4 = lVar4 + 0x70) {
    func_0x000107269bac(auStack_a8,lVar4 + 0x30);
    lVar6 = lVar5;
    if (param_3 != 0) {
      lVar6 = lVar5 + 1;
      auStack_e8[0] = 3;
      lStack_e0 = lVar5;
      FUN_1072c0368(auStack_a8,auStack_e8);
      func_0x000104c319e0(auStack_e8);
    }
    dStack_f0 = param_1;
    FUN_1072c1ab4(auStack_e8,lVar4,&dStack_f0);
    FUN_1072c038c();
    FUN_1072c308c(auStack_e8);
    func_0x000104c319e0();
    lVar5 = lVar6;
  }
  func_0x0001072ce0cc(uStack_68);
  if (!bVar2) {
    ___stack_chk_fail();
    func_0x0001072cf7f4();
    func_0x0001072ce94c();
    func_0x0001072cfbfc(&lStack_148,-1.0 - dVar7);
    FUN_1072bfd7c();
    func_0x0001072cfbfc(&uStack_160,1.0 - dVar7,dVar7 + 2.0);
    func_0x0001072cfd8c();
    bVar2 = lStack_148 == lStack_140;
    if ((bVar2) && (func_0x0001072d013c(), bVar2)) {
      func_0x0001072cf0f0();
      FUN_1072c31c0();
    }
    else {
      func_0x0001072cfbfc(-dVar7,dVar7 + 1.0);
      func_0x0001072cfd8c(extraout_x8_00);
      uVar3 = lStack_148 == lStack_140;
      if (!(bool)uVar3) {
        FUN_1072c314c(0x3ff0000000000000,&lStack_148);
        FUN_1072c31b0(extraout_x8_00,*extraout_x8_00,lStack_148,lStack_140);
      }
      func_0x0001072d013c();
      if (!(bool)uVar3) {
        FUN_1072c314c(0xbff0000000000000,&uStack_160);
        FUN_1072c31b0(extraout_x8_00,extraout_x8_00[1],uStack_160,uStack_158);
      }
    }
    func_0x0001072cf494();
    func_0x0001072c3ca8(&lStack_148);
    return;
  }
  return;
}



/* Entry: 1072bfc4c; end: 1072bfd7b;  */

void FUN_1072bfc4c(undefined8 *param_1,double param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  long lStack_50;
  
  func_0x0001072cfbfc(&lStack_58,-1.0 - param_2);
  FUN_1072bfd7c();
  func_0x0001072cfbfc(&uStack_70,1.0 - param_2,param_2 + 2.0);
  func_0x0001072cfd8c();
  bVar1 = lStack_58 == lStack_50;
  if ((bVar1) && (func_0x0001072d013c(), bVar1)) {
    func_0x0001072cf0f0();
    FUN_1072c31c0();
  }
  else {
    func_0x0001072cfbfc(-param_2,param_2 + 1.0);
    func_0x0001072cfd8c(param_1);
    uVar2 = lStack_58 == lStack_50;
    if (!(bool)uVar2) {
      FUN_1072c314c(0x3ff0000000000000,&lStack_58);
      FUN_1072c31b0(param_1,*param_1,lStack_58,lStack_50);
    }
    func_0x0001072d013c();
    if (!(bool)uVar2) {
      FUN_1072c314c(0xbff0000000000000,&uStack_70);
      FUN_1072c31b0(param_1,param_1[1],uStack_70,uStack_68);
    }
  }
  func_0x0001072cf494();
  func_0x0001072c3ca8(&lStack_58);
  return;
}



/* Entry: 1072bfd7c; end: 1072bfeb3;  */

long * FUN_1072bfd7c(double param_1,double param_2,double param_3,double param_4,long *param_5,
                    long *param_6)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *unaff_x19;
  long lVar10;
  undefined8 *****unaff_x29;
  undefined8 ******ppppppuVar11;
  code *unaff_x30;
  code *pcVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double unaff_d8;
  double unaff_d9;
  undefined1 auStack_260 [8];
  long alStack_258 [15];
  long *plStack_1e0;
  undefined8 *****pppppuStack_1d0;
  code *pcStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  undefined1 uStack_1b0;
  long alStack_198 [4];
  undefined1 uStack_171;
  long alStack_170 [7];
  undefined8 uStack_138;
  double dStack_130;
  double dStack_128;
  undefined8 ****ppppuStack_f0;
  code *pcStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 uStack_d0;
  long alStack_b8 [4];
  undefined1 uStack_91;
  long alStack_90 [7];
  undefined8 uStack_58;
  
  pdVar3 = &dStack_e0;
  plVar7 = param_5;
  func_0x0001072ce294();
  uStack_91 = SUB81(param_6,0);
  bVar4 = false;
  bVar5 = false;
  if (param_1 <= param_3) {
    bVar4 = false;
    bVar5 = false;
    if (!NAN(param_4) && !NAN(param_2)) {
      bVar4 = param_4 < param_2;
      bVar5 = param_4 == param_2;
    }
  }
  if (bVar4) {
    func_0x0001072ce0cc(extraout_x8);
    dVar13 = param_1;
    dVar14 = param_2;
    if (!bVar5) goto LAB_1072bfe90;
    func_0x0001072cf0f0();
FUN_1072c31c0:
    unaff_x19 = *(long **)((long)pdVar3 + 200);
    *(undefined8 *)((long)pdVar3 + 0xc0) = *(undefined8 *)((long)pdVar3 + 0xc0);
    *(long **)((long)pdVar3 + 200) = unaff_x19;
    *(undefined8 ******)((long)pdVar3 + 0xd0) = unaff_x29;
    *(code **)((long)pdVar3 + 0xd8) = unaff_x30;
    func_0x0001072ce208();
    func_0x0001072cf108();
    FUN_1072c31e8();
  }
  else {
    dVar13 = param_1;
    dVar14 = param_2;
    uStack_58 = extraout_x8;
    func_0x0001072cf0fc();
    bVar4 = true;
    bVar5 = false;
    if (param_3 < dVar14) {
      bVar4 = false;
      bVar5 = false;
      if (!NAN(param_4) && !NAN(dVar13)) {
        bVar4 = param_4 < dVar13;
        bVar5 = param_4 == dVar13;
      }
    }
    if (!bVar4) {
      func_0x0001072cfa88(param_5[1]);
      func_0x0001072cfe18();
      lVar1 = param_5[1];
      for (lVar10 = *param_5; bVar5 = lVar10 == lVar1, !bVar5; lVar10 = lVar10 + 0xb0) {
        dVar13 = *(double *)(lVar10 + 0x88);
        dVar14 = *(double *)(lVar10 + 0x98);
        bVar4 = false;
        if ((param_1 <= dVar13) && (bVar4 = false, !NAN(dVar14) && !NAN(param_2))) {
          bVar4 = dVar14 < param_2;
        }
        if (bVar4) {
          func_0x0001072cef80();
          func_0x0001072c3ccc();
        }
        else {
          bVar4 = true;
          if ((dVar13 < param_2) && (bVar4 = false, !NAN(dVar14) && !NAN(param_1))) {
            bVar4 = dVar14 < param_1;
          }
          if (!bVar4) {
            uStack_d0 = uStack_91;
            dStack_e0 = param_1;
            dStack_d8 = param_2;
            FUN_1072c3da0(alStack_90,lVar10,&dStack_e0);
            func_0x0001072cf5b0();
            plVar7 = alStack_90;
            param_6 = alStack_b8;
            FUN_1072c3cfc(plVar7,param_6,&dStack_e0);
            func_0x0001072cf894();
          }
        }
      }
    }
    func_0x0001072ce0cc(uStack_58);
    unaff_d8 = param_2;
    unaff_d9 = param_1;
    if (bVar5) {
      return plVar7;
    }
LAB_1072bfe90:
    ___stack_chk_fail();
    func_0x0001072cf7f4();
    func_0x0001072ce94c();
    pdVar3 = &dStack_1c0;
    pdVar2 = &dStack_1c0;
    pcStack_e8 = FUN_1072bfeb4;
    ppppppuVar11 = (undefined8 ******)&ppppuStack_f0;
    plVar8 = plVar7;
    dStack_130 = unaff_d9;
    dStack_128 = unaff_d8;
    ppppuStack_f0 = (undefined8 ****)&stack0xfffffffffffffff0;
    func_0x0001072ce294();
    uStack_171 = SUB81(param_6,0);
    bVar4 = false;
    bVar5 = false;
    if (dVar13 <= param_3) {
      bVar4 = false;
      bVar5 = false;
      if (!NAN(param_4) && !NAN(dVar14)) {
        bVar4 = param_4 < dVar14;
        bVar5 = param_4 == dVar14;
      }
    }
    if (bVar4) {
      func_0x0001072ce0cc(extraout_x8_00);
      if (bVar5) {
        func_0x0001072cf0f0();
        unaff_x29 = (undefined8 *****)ppppuStack_f0;
        unaff_x30 = pcStack_e8;
        goto FUN_1072c31c0;
      }
    }
    else {
      dVar16 = dVar13;
      dVar15 = dVar14;
      uStack_138 = extraout_x8_00;
      func_0x0001072cf0fc();
      bVar4 = true;
      bVar5 = false;
      if (param_3 < dVar15) {
        bVar4 = false;
        bVar5 = false;
        if (!NAN(param_4) && !NAN(dVar16)) {
          bVar4 = param_4 < dVar16;
          bVar5 = param_4 == dVar16;
        }
      }
      if (!bVar4) {
        func_0x0001072cfa88(plVar7[1]);
        func_0x0001072cfe18();
        lVar1 = plVar7[1];
        for (lVar10 = *plVar7; bVar5 = lVar10 == lVar1, !bVar5; lVar10 = lVar10 + 0xb0) {
          dVar16 = *(double *)(lVar10 + 0xa0);
          bVar4 = false;
          if ((dVar13 <= *(double *)(lVar10 + 0x90)) &&
             (bVar4 = false, !NAN(dVar16) && !NAN(dVar14))) {
            bVar4 = dVar16 < dVar14;
          }
          if (bVar4) {
            func_0x0001072cef80();
            func_0x0001072c3ccc();
          }
          else {
            bVar4 = true;
            if ((*(double *)(lVar10 + 0x90) < dVar14) &&
               (bVar4 = false, !NAN(dVar16) && !NAN(dVar13))) {
              bVar4 = dVar16 < dVar13;
            }
            if (!bVar4) {
              uStack_1b0 = uStack_171;
              dStack_1c0 = dVar13;
              dStack_1b8 = dVar14;
              FUN_1072c4ee4(alStack_170,lVar10,&dStack_1c0);
              func_0x0001072cf5b0();
              plVar8 = alStack_170;
              param_6 = alStack_198;
              FUN_1072c4ec8(plVar8,param_6,&dStack_1c0);
              func_0x0001072cf894();
            }
          }
        }
      }
      func_0x0001072ce0cc(uStack_138);
      if (bVar5) {
        return plVar8;
      }
    }
    ___stack_chk_fail();
    plVar7 = plVar8;
    func_0x0001072cf7f4();
    pcVar12 = FUN_1072bffec;
    func_0x0001072ce94c();
    uVar6 = (int)*plVar7 == 2;
    plVar9 = extraout_x8_01;
    if ((bool)uVar6) {
      plVar9 = plVar7 + 1;
      pdVar2 = (double *)auStack_260;
      pcStack_1c8 = FUN_1072bffec;
      plStack_1e0 = plVar8;
      pppppuStack_1d0 = ppppppuVar11;
      func_0x0001072ce1d0(param_6,plVar9);
      FUN_1072c0094(alStack_258);
      func_0x0001072ce9c4();
      FUN_1072c00d0();
      plVar7 = alStack_258;
      FUN_107269394();
      func_0x0001072ce080();
      if ((bool)uVar6) {
        return plVar7;
      }
      ___stack_chk_fail();
      func_0x0001072ce934();
      FUN_107269394();
      pcVar12 = FUN_1072c006c;
      func_0x0001072ce900();
      param_6 = plVar9;
      plVar9 = extraout_x8_02;
      unaff_x19 = extraout_x8_01;
      ppppppuVar11 = &pppppuStack_1d0;
    }
    uVar6 = (int)*plVar7 == 1;
    if ((bool)uVar6) {
      *(long **)((long)pdVar2 + -0x20) = plVar8;
      *(long **)((long)pdVar2 + -0x18) = unaff_x19;
      *(undefined8 *******)((long)pdVar2 + -0x10) = ppppppuVar11;
      *(code **)((long)pdVar2 + -8) = pcVar12;
      ppppppuVar11 = (undefined8 ******)((long)pdVar2 + -0x10);
      func_0x0001072ce1d0(param_6,plVar7 + 1);
      FUN_10726933c((undefined1 *)((long)pdVar2 + -0x98));
      func_0x0001072ce9c4();
      FUN_1072c00d0();
      plVar7 = (long *)((long)pdVar2 + -0x98);
      FUN_107269394(plVar7);
      func_0x0001072ce080();
      if ((bool)uVar6) {
        return plVar7;
      }
      ___stack_chk_fail();
      func_0x0001072ce934();
      FUN_107269394();
      pcVar12 = FUN_1072c0298;
      func_0x0001072ce900();
      pdVar2 = (double *)((long)pdVar2 + -0xa0);
      unaff_x19 = plVar9;
    }
    *(long **)((long)pdVar2 + -0x20) = plVar8;
    *(long **)((long)pdVar2 + -0x18) = unaff_x19;
    *(undefined8 *******)((long)pdVar2 + -0x10) = ppppppuVar11;
    *(code **)((long)pdVar2 + -8) = pcVar12;
    func_0x0001072cfc8c();
    FUN_1072c02b8();
  }
  return unaff_x19;
}



/* Entry: 1072bfeb4; end: 1072bffeb;  */

long * FUN_1072bfeb4(double param_1,double param_2,double param_3,double param_4,long *param_5,
                    long *param_6)

{
  long lVar1;
  double *pdVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *unaff_x19;
  long lVar9;
  undefined8 ******ppppppuVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_180 [8];
  long alStack_178 [15];
  long *plStack_100;
  undefined8 *****pppppuStack_f0;
  code *pcStack_e8;
  double dStack_e0;
  double dStack_d8;
  undefined1 uStack_d0;
  long alStack_b8 [4];
  undefined1 uStack_91;
  long alStack_90 [7];
  undefined8 uStack_58;
  
  pdVar2 = &dStack_e0;
  ppppppuVar10 = (undefined8 ******)&stack0xfffffffffffffff0;
  plVar6 = param_5;
  func_0x0001072ce294();
  uStack_91 = SUB81(param_6,0);
  bVar3 = false;
  bVar4 = false;
  if (param_1 <= param_3) {
    bVar3 = false;
    bVar4 = false;
    if (!NAN(param_4) && !NAN(param_2)) {
      bVar3 = param_4 < param_2;
      bVar4 = param_4 == param_2;
    }
  }
  if (bVar3) {
    func_0x0001072ce0cc(extraout_x8);
    if (bVar4) {
      func_0x0001072cf0f0();
      func_0x0001072ce208();
      func_0x0001072cf108();
      FUN_1072c31e8();
      return unaff_x19;
    }
  }
  else {
    dVar13 = param_1;
    dVar12 = param_2;
    uStack_58 = extraout_x8;
    func_0x0001072cf0fc();
    bVar3 = true;
    bVar4 = false;
    if (param_3 < dVar12) {
      bVar3 = false;
      bVar4 = false;
      if (!NAN(param_4) && !NAN(dVar13)) {
        bVar3 = param_4 < dVar13;
        bVar4 = param_4 == dVar13;
      }
    }
    if (!bVar3) {
      func_0x0001072cfa88(param_5[1]);
      func_0x0001072cfe18();
      lVar1 = param_5[1];
      for (lVar9 = *param_5; bVar4 = lVar9 == lVar1, !bVar4; lVar9 = lVar9 + 0xb0) {
        dVar13 = *(double *)(lVar9 + 0xa0);
        bVar3 = false;
        if ((param_1 <= *(double *)(lVar9 + 0x90)) && (bVar3 = false, !NAN(dVar13) && !NAN(param_2))
           ) {
          bVar3 = dVar13 < param_2;
        }
        if (bVar3) {
          func_0x0001072cef80();
          func_0x0001072c3ccc();
        }
        else {
          bVar3 = true;
          if ((*(double *)(lVar9 + 0x90) < param_2) &&
             (bVar3 = false, !NAN(dVar13) && !NAN(param_1))) {
            bVar3 = dVar13 < param_1;
          }
          if (!bVar3) {
            uStack_d0 = uStack_91;
            dStack_e0 = param_1;
            dStack_d8 = param_2;
            FUN_1072c4ee4(alStack_90,lVar9,&dStack_e0);
            func_0x0001072cf5b0();
            plVar6 = alStack_90;
            param_6 = alStack_b8;
            FUN_1072c4ec8(plVar6,param_6,&dStack_e0);
            func_0x0001072cf894();
          }
        }
      }
    }
    func_0x0001072ce0cc(uStack_58);
    if (bVar4) {
      return plVar6;
    }
  }
  ___stack_chk_fail();
  plVar7 = plVar6;
  func_0x0001072cf7f4();
  pcVar11 = FUN_1072bffec;
  func_0x0001072ce94c();
  uVar5 = (int)*plVar7 == 2;
  plVar8 = extraout_x8_00;
  if ((bool)uVar5) {
    plVar8 = plVar7 + 1;
    pdVar2 = (double *)auStack_180;
    pcStack_e8 = FUN_1072bffec;
    plStack_100 = plVar6;
    pppppuStack_f0 = ppppppuVar10;
    func_0x0001072ce1d0(param_6,plVar8);
    FUN_1072c0094(alStack_178);
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    plVar7 = alStack_178;
    FUN_107269394();
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    pcVar11 = FUN_1072c006c;
    func_0x0001072ce900();
    param_6 = plVar8;
    plVar8 = extraout_x8_01;
    unaff_x19 = extraout_x8_00;
    ppppppuVar10 = &pppppuStack_f0;
  }
  uVar5 = (int)*plVar7 == 1;
  if ((bool)uVar5) {
    *(long **)((long)pdVar2 + -0x20) = plVar6;
    *(long **)((long)pdVar2 + -0x18) = unaff_x19;
    *(undefined8 *******)((long)pdVar2 + -0x10) = ppppppuVar10;
    *(code **)((long)pdVar2 + -8) = pcVar11;
    ppppppuVar10 = (undefined8 ******)((long)pdVar2 + -0x10);
    func_0x0001072ce1d0(param_6,plVar7 + 1);
    FUN_10726933c((undefined1 *)((long)pdVar2 + -0x98));
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    plVar7 = (long *)((long)pdVar2 + -0x98);
    FUN_107269394(plVar7);
    func_0x0001072ce080();
    if ((bool)uVar5) {
      return plVar7;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    pcVar11 = FUN_1072c0298;
    func_0x0001072ce900();
    pdVar2 = (double *)((long)pdVar2 + -0xa0);
    unaff_x19 = plVar8;
  }
  *(long **)((long)pdVar2 + -0x20) = plVar6;
  *(long **)((long)pdVar2 + -0x18) = unaff_x19;
  *(undefined8 *******)((long)pdVar2 + -0x10) = ppppppuVar10;
  *(code **)((long)pdVar2 + -8) = pcVar11;
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return unaff_x19;
}



/* Entry: 1072bffec; end: 1072c000f;  */

int * FUN_1072bffec(int *param_1,int *param_2,int *param_3)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  int *extraout_x8;
  int *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_a0 [8];
  int aiStack_98 [30];
  
  uVar1 = *param_2 == 2;
  piVar3 = param_1;
  if ((bool)uVar1) {
    piVar3 = param_2 + 2;
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0(param_3,piVar3);
    FUN_1072c0094(aiStack_98);
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    param_2 = aiStack_98;
    FUN_107269394();
    func_0x0001072ce080();
    if ((bool)uVar1) {
      return param_2;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    unaff_x30 = FUN_1072c006c;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    param_3 = piVar3;
    piVar3 = extraout_x8;
    unaff_x19 = param_1;
  }
  uVar1 = *param_2 == 1;
  if ((bool)uVar1) {
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x0001072ce1d0(param_3,param_2 + 2);
    FUN_10726933c((undefined1 *)((long)register0x00000008 + -0x98));
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    piVar2 = (int *)((long)register0x00000008 + -0x98);
    FUN_107269394(piVar2);
    func_0x0001072ce080();
    if ((bool)uVar1) {
      return piVar2;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    unaff_x30 = FUN_1072c0298;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
    unaff_x19 = piVar3;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(int **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return unaff_x19;
}



/* Entry: 1072c0010; end: 1072c006b;  */

int * FUN_1072c0010(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar2;
  int *piVar3;
  int *extraout_x8;
  undefined8 unaff_x20;
  undefined8 *******pppppppuVar4;
  code *pcVar5;
  undefined1 auStack_140 [8];
  int aiStack_138 [30];
  undefined8 ******ppppppuStack_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [8];
  int aiStack_98 [30];
  
  puVar1 = auStack_a0;
  pppppppuVar4 = (undefined8 *******)&stack0xfffffffffffffff0;
  func_0x0001072ce1d0();
  FUN_1072c0094(aiStack_98);
  func_0x0001072ce9c4();
  FUN_1072c00d0();
  piVar3 = aiStack_98;
  FUN_107269394();
  func_0x0001072ce080();
  if ((bool)in_ZR) {
    return piVar3;
  }
  ___stack_chk_fail();
  func_0x0001072ce934();
  FUN_107269394();
  pcVar5 = FUN_1072c006c;
  func_0x0001072ce900();
  uVar2 = *piVar3 == 1;
  if ((bool)uVar2) {
    puVar1 = auStack_140;
    pcStack_a8 = FUN_1072c006c;
    ppppppuStack_b0 = pppppppuVar4;
    func_0x0001072ce1d0(param_3,piVar3 + 2);
    FUN_10726933c(aiStack_138);
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    piVar3 = aiStack_138;
    FUN_107269394(piVar3);
    func_0x0001072ce080();
    if ((bool)uVar2) {
      return piVar3;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    pcVar5 = FUN_1072c0298;
    func_0x0001072ce900();
    param_1 = extraout_x8;
    pppppppuVar4 = &ppppppuStack_b0;
  }
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(int **)(puVar1 + -0x18) = param_1;
  *(undefined8 ********)(puVar1 + -0x10) = pppppppuVar4;
  *(code **)(puVar1 + -8) = pcVar5;
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return param_1;
}



/* Entry: 1072c006c; end: 1072c0093;  */

undefined1 * FUN_1072c006c(undefined1 *param_1,int *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [120];
  
  uVar1 = *param_2 == 1;
  if ((bool)uVar1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    func_0x0001072ce1d0(param_3,param_2 + 2);
    FUN_10726933c(auStack_98);
    func_0x0001072ce9c4();
    FUN_1072c00d0();
    puVar2 = auStack_98;
    FUN_107269394(puVar2);
    func_0x0001072ce080();
    if ((bool)uVar1) {
      return puVar2;
    }
    ___stack_chk_fail();
    func_0x0001072ce934();
    FUN_107269394();
    unaff_x30 = FUN_1072c0298;
    func_0x0001072ce900();
    register0x00000008 = (BADSPACEBASE *)auStack_a0;
    unaff_x19 = param_1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001072cfc8c();
  FUN_1072c02b8();
  return unaff_x19;
}



/* Entry: 1072c0094; end: 1072c00cf;  */

long FUN_1072c0094(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001072693c4();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  FUN_107269c1c();
  *(undefined4 *)(param_1 + 0x30) = 4;
  return param_1;
}



/* Entry: 1072c00d0; end: 1072c00ef;  */

void FUN_1072c00d0(void)

{
  func_0x0001072cfc8c();
  FUN_1072c00f0();
  return;
}



/* Entry: 1072c00f0; end: 1072c0133;  */

void FUN_1072c00f0(void)

{
  undefined1 auStack_38 [24];
  
  func_0x0001003ac6c4();
  FUN_1072c0134(auStack_38);
  FUN_107272b88();
  func_0x0001072cf424();
  return;
}



/* Entry: 1072c0134; end: 1072c0167;  */

undefined8 * FUN_1072c0134(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1072c0168(param_1,param_2,param_2 + param_3 * 0x70,param_3);
  return param_1;
}



/* Entry: 1072c0168; end: 1072c01af;  */

void FUN_1072c0168(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_107272a50();
    func_0x0001072ce35c();
    FUN_1072c01b0();
  }
  func_0x0001072ce630();
  FUN_107272b38();
  return;
}



/* Entry: 1072c01b0; end: 1072c01d7;  */

void FUN_1072c01b0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  FUN_1072c01d8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c01d8; end: 1072c01eb;  */

void FUN_1072c01d8(void)

{
  FUN_1072c01ec();
  return;
}



/* Entry: 1072c01ec; end: 1072c023b;  */

void FUN_1072c01ec(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_10726933c();
    func_0x0001072d01a8();
  }
  func_0x0001072ce708();
  FUN_10726da30();
  return;
}



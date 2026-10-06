/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004861f0; end: 00486333;  */

undefined8 FUN_004861f0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00486b00(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  func_0x00487270();
  func_0x004870f8();
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 00486334; end: 00486337;  */

long * FUN_00486334(long *param_1,int param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00486ce0();
  uStack_28 = extraout_x8;
  func_0x0048746c();
  uVar1 = (char)param_1[4] == '\x01';
  if ((bool)uVar1) {
    func_0x00486d98();
    func_0x00487480(unaff_x19[5],unaff_x19[7]);
    param_2 = (int)auStack_50;
    (**(code **)(extraout_x8_00 + 0x150))();
  }
  func_0x00486c9c(uStack_28);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  *param_1 = (long)&PTR_FUN_009e87a8;
  if ((int)param_1[7] == 0) {
    plVar2 = param_1;
    func_0x00486d98();
    (**(code **)(*plVar2 + 0xd8))();
  }
  FUN_00464a10(param_1 + 7);
  return param_1;
}



/* Entry: 00486338; end: 0048638f;  */

void FUN_00486338(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  undefined8 *unaff_x19;
  long alStack_50 [5];
  undefined8 uStack_28;
  
  plVar1 = alStack_50;
  func_0x00486ce0();
  uStack_28 = extraout_x8;
  func_0x00486d98();
  func_0x00487480(*unaff_x19,unaff_x19[2]);
  (**(code **)(extraout_x8_00 + 0x150))();
  func_0x00486c9c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if ((int)plVar1 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  func_0x00486dc8();
  func_0x0048746c();
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*plVar1 != 0) {
    func_0x00486eb0(plRam0000000000b65da0);
    func_0x0048744c();
    (*extraout_x8_01)();
  }
  plVar1 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0xf0))(plRam0000000000b65da0,0,0);
  func_0x004871f4();
  func_0x00469abc();
  unaff_x19[3] = plVar1 + 3;
  return;
}



/* Entry: 00486390; end: 00486417;  */

void FUN_00486390(long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  code *extraout_x8;
  long unaff_x19;
  
  func_0x00486dc8();
  func_0x0048746c();
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if (*param_2 != 0) {
    func_0x00486eb0(plRam0000000000b65da0);
    func_0x0048744c();
    (*extraout_x8)();
  }
  plVar1 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0xf0))(plRam0000000000b65da0,0,0);
  func_0x004871f4();
  func_0x00469abc();
  *(long **)(unaff_x19 + 0x18) = plVar1 + 3;
  return;
}



/* Entry: 00486418; end: 0048642b;  */

void FUN_00486418(void)

{
  FUN_0048670c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048642c; end: 004865cb;  */

long * FUN_0048642c(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 extraout_x8;
  long lVar6;
  code *extraout_x8_00;
  ulong uVar7;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined8 extraout_x8_03;
  code *extraout_x8_04;
  ulong uVar8;
  long extraout_x8_05;
  long lVar9;
  long unaff_x19;
  int *unaff_x20;
  long *plVar10;
  long *unaff_x21;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  func_0x0048705c();
  func_0x00486ce0();
  lVar9 = *(long *)(param_1 + 0x10);
  lVar6 = (long)*(int *)(param_1 + 0xc);
  uStack_48 = extraout_x8;
  if (lVar6 <= lVar9) {
    func_0x00486eb0(plRam0000000000b65da0);
    func_0x0048744c();
    (*extraout_x8_00)();
    lVar6 = (long)*(int *)(unaff_x19 + 0xc);
    lVar9 = *(long *)(unaff_x19 + 0x10);
  }
  uVar7 = lVar6 - lVar9;
  if (*(char *)(unaff_x19 + 0x20) == '\x01') {
    *(undefined8 *)(unaff_x19 + 0x50) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x19 + 0x48) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x58) = *(undefined8 *)(unaff_x19 + 0x38);
    *(undefined1 *)(unaff_x19 + 0x20) = 0;
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uVar1 = *(ulong *)(unaff_x19 + 0x50) == uVar7;
      if (uVar7 < *(ulong *)(unaff_x19 + 0x50)) {
        *(ulong *)(unaff_x19 + 0x50) = uVar7;
      }
      goto LAB_00486514;
    }
    uVar1 = uVar7 == *(byte *)(unaff_x19 + 0x50);
    if (uVar7 < *(byte *)(unaff_x19 + 0x50)) {
      *(char *)(unaff_x19 + 0x50) = (char)uVar7;
    }
LAB_0048652c:
    lVar6 = unaff_x19 + 0x51;
  }
  else {
    if ((ulong)(long)*(int *)(unaff_x19 + 8) <= uVar7) {
      uVar7 = (long)*(int *)(unaff_x19 + 8);
    }
    uVar1 = uVar7 == 0x18;
    if (uVar7 < 0x19) {
      uVar7 = 0x18;
    }
    (**(code **)(*plRam0000000000b65da0 + 0x148))(&uStack_70,plRam0000000000b65da0,uVar7);
    *(undefined8 *)(unaff_x19 + 0x50) = uStack_68;
    *(undefined8 *)(unaff_x19 + 0x48) = uStack_70;
    *(undefined8 *)(unaff_x19 + 0x60) = uStack_58;
    *(undefined8 *)(unaff_x19 + 0x58) = uStack_60;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_0048652c;
LAB_00486514:
    lVar6 = *(long *)(unaff_x19 + 0x58);
  }
  plVar3 = (long *)(unaff_x19 + 0x48);
  *unaff_x21 = lVar6;
  if (*plVar3 != 0) {
    uVar7 = *(ulong *)(unaff_x19 + 0x50);
    if (uVar7 >> 0x1f == 0) goto LAB_00486578;
    func_0x00486eb0(plRam0000000000b65da0);
    func_0x0048744c();
    (*extraout_x8_01)();
    if (*plVar3 != 0) {
      uVar7 = *(ulong *)(unaff_x19 + 0x50);
      goto LAB_00486578;
    }
  }
  uVar7 = (ulong)*(byte *)(unaff_x19 + 0x50);
LAB_00486578:
  *unaff_x20 = (int)uVar7;
  iVar4 = (int)*(undefined8 *)(unaff_x19 + 0x18);
  *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + (long)(int)uVar7;
  plVar2 = plRam0000000000b65da0;
  func_0x00487480(*plVar3,*(undefined8 *)(unaff_x19 + 0x58));
  (**(code **)(extraout_x8_02 + 0x180))();
  func_0x00486c9c(uStack_48);
  if ((bool)uVar1) {
    return (long *)((long)&MACH_HEADER.magic + 1);
  }
  ___stack_chk_fail();
  uStack_a0 = 0xb65da0;
  func_0x00486cf4();
  plVar3 = plVar2;
  uStack_a8 = extraout_x8_03;
  if (iVar4 != 0) {
    plVar10 = plVar2 + 9;
    if (*plVar10 == 0) {
      uVar5 = (uint)*(byte *)(plVar2 + 10);
    }
    else {
      uVar5 = (uint)plVar2[10];
    }
    if ((int)uVar5 < iVar4) {
      func_0x00486eb0(plRam0000000000b65da0);
      func_0x0048744c();
      (*extraout_x8_04)();
    }
    plVar3 = plRam0000000000b65da0;
    (**(code **)(*plRam0000000000b65da0 + 0x188))(plRam0000000000b65da0,plVar2[3]);
    uVar7 = (ulong)iVar4;
    if (plVar2[9] == 0) {
      uVar8 = (ulong)*(byte *)(plVar2 + 10);
    }
    else {
      uVar8 = plVar2[10];
    }
    if (uVar8 == uVar7) {
      plVar2[6] = plVar2[10];
      plVar2[5] = *plVar10;
      plVar2[8] = plVar2[0xc];
      plVar2[7] = plVar2[0xb];
    }
    else {
      (**(code **)(*plRam0000000000b65da0 + 0x160))
                (&lStack_d0,plRam0000000000b65da0,plVar10,uVar8 - uVar7);
      plVar2[6] = lStack_c8;
      plVar2[5] = lStack_d0;
      plVar2[8] = lStack_b8;
      plVar2[7] = lStack_c0;
      plVar3 = plRam0000000000b65da0;
      func_0x00487480(*plVar10,plVar2[0xb],plRam0000000000b65da0,plVar2[3]);
      (**(code **)(extraout_x8_05 + 0x178))();
    }
    uVar1 = plVar2[5] == 0;
    *(bool *)(plVar2 + 4) = !(bool)uVar1;
    plVar2[2] = plVar2[2] - uVar7;
  }
  func_0x00486c9c(uStack_a8);
  if ((bool)uVar1) {
    return plVar3;
  }
  ___stack_chk_fail();
  return (long *)plVar3[2];
}



/* Entry: 004865cc; end: 004866fb;  */

long * FUN_004865cc(long *param_1,int param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  uint uVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  ulong uVar3;
  long extraout_x8_01;
  long *plVar4;
  ulong uVar5;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_38;
  
  func_0x00486cf4();
  plVar1 = param_1;
  uStack_38 = extraout_x8;
  if (param_2 != 0) {
    plVar4 = param_1 + 9;
    if (*plVar4 == 0) {
      uVar2 = (uint)*(byte *)(param_1 + 10);
    }
    else {
      uVar2 = (uint)param_1[10];
    }
    if ((int)uVar2 < param_2) {
      func_0x00486eb0(plRam0000000000b65da0);
      func_0x0048744c();
      (*extraout_x8_00)();
    }
    plVar1 = plRam0000000000b65da0;
    (**(code **)(*plRam0000000000b65da0 + 0x188))(plRam0000000000b65da0,param_1[3]);
    uVar5 = (ulong)param_2;
    if (param_1[9] == 0) {
      uVar3 = (ulong)*(byte *)(param_1 + 10);
    }
    else {
      uVar3 = param_1[10];
    }
    if (uVar3 == uVar5) {
      param_1[6] = param_1[10];
      param_1[5] = *plVar4;
      param_1[8] = param_1[0xc];
      param_1[7] = param_1[0xb];
    }
    else {
      (**(code **)(*plRam0000000000b65da0 + 0x160))
                (&lStack_60,plRam0000000000b65da0,plVar4,uVar3 - uVar5);
      param_1[6] = lStack_58;
      param_1[5] = lStack_60;
      param_1[8] = lStack_48;
      param_1[7] = lStack_50;
      plVar1 = plRam0000000000b65da0;
      func_0x00487480(*plVar4,param_1[0xb],plRam0000000000b65da0,param_1[3]);
      (**(code **)(extraout_x8_01 + 0x178))();
    }
    in_ZR = param_1[5] == 0;
    *(bool *)(param_1 + 4) = !(bool)in_ZR;
    param_1[2] = param_1[2] - uVar5;
  }
  func_0x00486c9c(uStack_38);
  if ((bool)in_ZR) {
    return plVar1;
  }
  ___stack_chk_fail();
  return (long *)plVar1[2];
}



/* Entry: 004866fc; end: 0048670b;  */

undefined8 FUN_004866fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 0048670c; end: 00486777;  */

long * FUN_0048670c(long *param_1,int param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00486ce0();
  uStack_28 = extraout_x8;
  func_0x0048746c();
  uVar1 = (char)param_1[4] == '\x01';
  if ((bool)uVar1) {
    func_0x00486d98();
    func_0x00487480(unaff_x19[5],unaff_x19[7]);
    param_2 = (int)auStack_50;
    (**(code **)(extraout_x8_00 + 0x150))();
  }
  func_0x00486c9c(uStack_28);
  if ((bool)uVar1) {
    return unaff_x19;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x0040cf10();
  *param_1 = (long)&PTR_FUN_009e87a8;
  if ((int)param_1[7] == 0) {
    plVar2 = param_1;
    func_0x00486d98();
    (**(code **)(*plVar2 + 0xd8))();
  }
  FUN_00464a10(param_1 + 7);
  return param_1;
}



/* Entry: 00486778; end: 0048677b;  */

long * FUN_00486778(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_FUN_009e87a8;
  if ((int)param_1[7] == 0) {
    plVar1 = param_1;
    func_0x00486d98();
    (**(code **)(*plVar1 + 0xd8))();
  }
  FUN_00464a10(param_1 + 7);
  return param_1;
}



/* Entry: 0048677c; end: 0048683f;  */

long * FUN_0048677c(long *param_1,long *param_2)

{
  long *plVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_FUN_009e87a8;
  if (*param_2 != 0) {
    plVar1 = param_1;
    func_0x00486d98();
    (**(code **)(*plVar1 + 0xd0))();
    if ((int)plVar1 != 0) {
      return param_1;
    }
  }
  FUN_00425cb4(auStack_70,"Couldn\'t initialize byte buffer reader");
  FUN_0046e000(auStack_58,0xd,auStack_70);
  FUN_00469ae8(param_1 + 7,auStack_58);
  func_0x00487294();
  func_0x00486f6c();
  return param_1;
}



/* Entry: 00486840; end: 00486853;  */

void FUN_00486840(void)

{
  FUN_00486a78();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00486854; end: 00486993;  */

long * FUN_00486854(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar3;
  ulong uVar4;
  int *unaff_x20;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    return (long *)0x0;
  }
  func_0x0048705c();
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (0 < (long)uVar1) {
    plVar3 = *(long **)(param_1 + 0x30);
    if (*plVar3 == 0) {
      lVar2 = (long)plVar3 + 9;
      uVar4 = (ulong)*(byte *)(plVar3 + 1);
    }
    else {
      uVar4 = plVar3[1];
      lVar2 = plVar3[2];
    }
    *unaff_x21 = (lVar2 + uVar4) - uVar1;
    if (uVar1 >> 0x1f != 0) {
      func_0x00486d98();
      func_0x00486eb0();
      (*extraout_x8)();
      uVar1 = *(ulong *)(param_1 + 0x10);
    }
    *unaff_x20 = (int)uVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    goto LAB_00486988;
  }
  plVar3 = plRam0000000000b65da0;
  (**(code **)(*plRam0000000000b65da0 + 0xe8))(plRam0000000000b65da0,param_1 + 0x18,param_1 + 0x30);
  if ((int)plVar3 == 0) {
    return plVar3;
  }
  plVar3 = *(long **)(param_1 + 0x30);
  if (*plVar3 == 0) {
    lVar2 = (long)plVar3 + 9;
  }
  else {
    lVar2 = plVar3[2];
  }
  *unaff_x21 = lVar2;
  plVar3 = *(long **)(param_1 + 0x30);
  if (*plVar3 == 0) {
LAB_00486974:
    uVar1 = (ulong)*(byte *)(plVar3 + 1);
  }
  else {
    uVar1 = plVar3[1];
    if (uVar1 >> 0x1f != 0) {
      func_0x00486eb0(plRam0000000000b65da0);
      (*extraout_x8_00)();
      plVar3 = *(long **)(param_1 + 0x30);
      if (*plVar3 == 0) goto LAB_00486974;
      uVar1 = plVar3[1];
    }
  }
  *unaff_x20 = (int)uVar1;
  *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + (long)(int)uVar1;
LAB_00486988:
  return (long *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 00486994; end: 004869f7;  */

void FUN_00486994(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  code *extraout_x8;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if (*plVar2 == 0) {
    uVar1 = (uint)*(byte *)(plVar2 + 1);
  }
  else {
    uVar1 = (uint)plVar2[1];
  }
  if ((int)uVar1 < param_2) {
    func_0x00486d98();
    func_0x00486eb0();
    (*extraout_x8)();
  }
  *(long *)(param_1 + 0x10) = (long)param_2;
  return;
}



/* Entry: 004869f8; end: 00486a6b;  */

long * FUN_004869f8(long *param_1,int param_2)

{
  long *plVar1;
  code *extraout_x8;
  int iStack_3c;
  undefined1 auStack_38 [8];
  
  while( true ) {
    func_0x004871e8();
    plVar1 = param_1;
    (*extraout_x8)(param_1,auStack_38,&iStack_3c);
    if ((int)plVar1 == 0) {
      return plVar1;
    }
    if (param_2 <= iStack_3c) break;
    param_2 = param_2 - iStack_3c;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  return plVar1;
}



/* Entry: 00486a6c; end: 00486a77;  */

long FUN_00486a6c(long param_1)

{
  return *(long *)(param_1 + 8) - *(long *)(param_1 + 0x10);
}



/* Entry: 00486a78; end: 00486acf;  */

long * FUN_00486a78(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_FUN_009e87a8;
  if ((int)param_1[7] == 0) {
    plVar1 = param_1;
    func_0x00486d98();
    (**(code **)(*plVar1 + 0xd8))();
  }
  FUN_00464a10(param_1 + 7);
  return param_1;
}



/* Entry: 00486ad0; end: 00486b23;  */

undefined8 * FUN_00486ad0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a03c60;
  func_0x00485fd4(param_1 + 1);
  return param_1;
}



/* Entry: 00486b24; end: 00486b27;  */

void FUN_00486b24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8670;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00486b28; end: 00486b3b;  */

void FUN_00486b28(void)

{
  FUN_00486c6c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00486b3c; end: 00486b47;  */

void FUN_00486b3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00486f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 00486b48; end: 00486b5b;  */

void FUN_00486b48(void)

{
  FUN_00486ad0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00486b5c; end: 00486c6b;  */

void FUN_00486b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long *plVar1;
  long unaff_x20;
  long *plStack_148;
  long lStack_140;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00486ef0();
  uStack_38 = 0;
  uStack_40 = 0;
  ppuStack_48 = &PTR_FUN_009e9720;
  func_0x005ba47c(param_3,&ppuStack_48);
  if ((int)param_3 == 0) {
    plVar1 = *(long **)(unaff_x20 + 8);
    func_0x00487300();
    func_0x00487084();
    func_0x004870b0();
    func_0x00487148();
    func_0x00487014(*(undefined8 *)(*plVar1 + 0x30));
    func_0x00487140();
    func_0x00486dc0();
    func_0x00487160();
  }
  else {
    plVar1 = *(long **)(unaff_x20 + 8);
    lStack_140 = *(long *)(unaff_x20 + 0x10);
    plStack_148 = plVar1;
    if (lStack_140 != 0) {
      do {
        func_0x00486d10();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar1 + 0x38))();
    func_0x00464a3c(&plStack_148);
  }
  FUN_0048eaec(&ppuStack_48);
  return;
}



/* Entry: 00486c6c; end: 00486c77;  */

void FUN_00486c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e8670;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00486c78; end: 00486c9b;  */

void FUN_00486c78(long param_1)

{
  func_0x00486fa4();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00486c9c; end: 0048748b;  */

void FUN_00486c9c(void)

{
  return;
}



/* Entry: 0048748c; end: 0048754f;  */

undefined8 * FUN_0048748c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_009e8808;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_0054a3dc(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00487ab8(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00487aec(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = uVar2;
  if ((uVar1 >> 2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00487b20(param_2,*(undefined8 *)(param_3 + 0x28));
  }
  param_1[5] = uVar2;
  if ((uVar1 >> 3 & 1) == 0) {
    param_2 = 0;
  }
  else {
    func_0x00487b5c(param_2,*(undefined8 *)(param_3 + 0x30));
  }
  param_1[6] = param_2;
  return param_1;
}



/* Entry: 00487550; end: 0048757f;  */

long FUN_00487550(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00487590(param_1);
  return param_1;
}



/* Entry: 00487580; end: 0048758f;  */

void FUN_00487580(ulong *param_1)

{
  ulong uVar1;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  uVar1 = *param_1 & 0xfffffffffffffffe;
  if (uVar1 != 0) {
    if (*(char *)(uVar1 + 0x1f) < '\0') {
      __ZdlPv(*(undefined8 *)(uVar1 + 8));
    }
    __ZdlPv(uVar1);
  }
  *param_1 = 0;
  return;
}



/* Entry: 00487590; end: 004875e7;  */

void FUN_00487590(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_004916e4();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_0048d0bc();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_00488034();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_00490ea4();
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004875e8; end: 004875eb;  */

long FUN_004875e8(long param_1)

{
  FUN_00487580(param_1 + 8);
  FUN_00487590(param_1);
  return param_1;
}



/* Entry: 004875ec; end: 004875ff;  */

void FUN_004875ec(void)

{
  FUN_00487550();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00487600; end: 0048760b;  */

undefined ** FUN_00487600(void)

{
  return &PTR_DAT_009e8848;
}



/* Entry: 0048760c; end: 0048768f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_0048760c(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      FUN_00491768(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_0048d144(*(undefined8 *)(param_1 + 0x20));
    }
    if ((uVar1 >> 2 & 1) != 0) {
      FUN_004880c0(*(undefined8 *)(param_1 + 0x28));
    }
    if ((uVar1 >> 3 & 1) != 0) {
      FUN_00490f28(*(undefined8 *)(param_1 + 0x30));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if ((char)*(byte *)((long)puVar2 + 0x17) < '\0') {
    *(undefined1 *)*puVar2 = 0;
    puVar2[1] = 0;
    return;
  }
  *(byte *)puVar2 = 0;
  *(byte *)((long)puVar2 + 0x17) = 0;
  return;
}



/* Entry: 00487690; end: 0048775f;  */

/* WARNING: Type propagation algorithm not settling */

dword * FUN_00487690(long param_1,dword *param_2,dword *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_2 = (dword *)((long)&MACH_HEADER.magic + 1);
    func_0x00487bf0(1,*(long *)(param_1 + 0x18),*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_2 = (dword *)((long)&MACH_HEADER.magic + 2);
    func_0x00487bf0(2,*(long *)(param_1 + 0x20),*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x14));
  }
  if ((uVar2 >> 2 & 1) != 0) {
    param_2 = (dword *)((long)&MACH_HEADER.magic + 3);
    func_0x00487bf0(3,*(long *)(param_1 + 0x28),*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  }
  if ((uVar2 >> 3 & 1) != 0) {
    param_2 = &MACH_HEADER.cputype;
    func_0x00487bf0(4,*(long *)(param_1 + 0x30),*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
    if ((long)uVar4 < 0) {
      lVar3 = *(long *)(uVar5 + 8);
      uVar4 = *(ulong *)(uVar5 + 0x10);
    }
    else {
      lVar3 = uVar5 + 8;
    }
    if (*(long *)param_3 - (long)param_2 < (long)(int)uVar4) {
      while( true ) {
        iVar7 = ((int)*(undefined8 *)param_3 - (int)param_2) + 0x10;
        iVar6 = (int)uVar4;
        uVar4 = (ulong)(uint)(iVar6 - iVar7);
        if (iVar6 - iVar7 == 0 || iVar6 < iVar7) break;
        func_0x0054f690();
        puVar1 = (undefined1 *)((long)param_2 + (long)iVar7);
        param_2 = param_3;
        func_0x0054ed58(param_3,puVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_2 + (long)iVar6);
    }
    _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
    return (dword *)((long)param_2 + (long)(int)uVar4);
  }
  return param_2;
}



/* Entry: 00487760; end: 004877ab;  */

long FUN_00487760(long *param_1,undefined8 param_2,int param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  
  if (*param_1 - (long)param_4 < (long)param_3) {
    while( true ) {
      iVar2 = ((int)*param_1 - (int)param_4) + 0x10;
      if (param_3 - iVar2 == 0 || param_3 < iVar2) break;
      func_0x0054f690();
      lVar1 = (long)param_4 + (long)iVar2;
      param_4 = param_1;
      func_0x0054ed58(param_1,lVar1);
      param_3 = param_3 - iVar2;
    }
    func_0x0054f690();
    return (long)param_4 + (long)param_3;
  }
  _memcpy(param_4,param_2,param_3);
  return (long)param_4 + (long)param_3;
}



/* Entry: 004877ac; end: 00487863;  */

long FUN_004877ac(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 0xf) == 0) {
    lVar4 = 0;
  }
  else {
    if ((uVar1 & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x18);
      func_0x00487864();
      lVar4 = lVar4 + 1;
    }
    if ((uVar1 >> 1 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x0048787c();
      lVar4 = lVar4 + lVar2 + 1;
    }
    if ((uVar1 >> 2 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00487894();
      lVar4 = lVar4 + lVar2 + 1;
    }
    if ((uVar1 >> 3 & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      func_0x004878ac();
      lVar4 = lVar4 + lVar2 + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar2 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 00487864; end: 004878c3;  */

void FUN_00487864(void)

{
  func_0x004918b4();
  func_0x00487bc8();
  return;
}



/* Entry: 004878c4; end: 004878c7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004878c4(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00487ab8(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_0049196c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00487aec(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_0048d330();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00487b20(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_00488370();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00487b5c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_00491184();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004878c8; end: 004879f7;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004878c8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00487ab8(uVar3,*(undefined8 *)(param_2 + 0x18));
        *(ulong *)(param_1 + 0x18) = uVar2;
      }
      else {
        FUN_0049196c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(param_1 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00487aec(uVar3,*(undefined8 *)(param_2 + 0x20));
        *(ulong *)(param_1 + 0x20) = uVar2;
      }
      else {
        FUN_0048d330();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(param_1 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00487b20(uVar3,*(undefined8 *)(param_2 + 0x28));
        *(ulong *)(param_1 + 0x28) = uVar2;
      }
      else {
        FUN_00488370();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        func_0x00487b5c(uVar3,*(undefined8 *)(param_2 + 0x30));
        *(ulong *)(param_1 + 0x30) = uVar3;
      }
      else {
        FUN_00491184();
      }
    }
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar1;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004879f8; end: 00487a2b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004879f8(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  ulong uVar3;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00487bf8();
  FUN_0048760c();
  uVar3 = *(ulong *)(unaff_x20 + 8);
  if ((uVar3 & 1) != 0) {
    uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 0xf) != 0) {
    if ((uVar1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x18) == 0) {
        uVar2 = uVar3;
        func_0x00487ab8(uVar3,*(undefined8 *)(unaff_x19 + 0x18));
        *(ulong *)(unaff_x20 + 0x18) = uVar2;
      }
      else {
        FUN_0049196c();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x20) == 0) {
        uVar2 = uVar3;
        func_0x00487aec(uVar3,*(undefined8 *)(unaff_x19 + 0x20));
        *(ulong *)(unaff_x20 + 0x20) = uVar2;
      }
      else {
        FUN_0048d330();
      }
    }
    if ((uVar1 >> 2 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x28) == 0) {
        uVar2 = uVar3;
        func_0x00487b20(uVar3,*(undefined8 *)(unaff_x19 + 0x28));
        *(ulong *)(unaff_x20 + 0x28) = uVar2;
      }
      else {
        FUN_00488370();
      }
    }
    if ((uVar1 >> 3 & 1) != 0) {
      if (*(long *)(unaff_x20 + 0x30) == 0) {
        func_0x00487b5c(uVar3,*(undefined8 *)(unaff_x19 + 0x30));
        *(ulong *)(unaff_x20 + 0x30) = uVar3;
      }
      else {
        FUN_00491184();
      }
    }
  }
  *(uint *)(unaff_x20 + 0x10) = *(uint *)(unaff_x20 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00487a2c; end: 00487a6b;  */

undefined1  [16] FUN_00487a2c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  puVar4 = (undefined1 *)(param_2 + 0x18);
  puVar6 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x18); puVar3 != (undefined1 *)(param_1 + 0x38);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar6;
    *puVar6 = uVar2;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x38);
  return auVar7;
}



/* Entry: 00487a6c; end: 00487b97;  */

void FUN_00487a6c(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.vmaddr;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x38);
  }
  *pqVar1 = (qword)&PTR_FUN_009e8808;
  pqVar1[1] = (qword)param_1;
  pqVar1[3] = 0;
  pqVar1[2] = 0;
  pqVar1[5] = 0;
  pqVar1[4] = 0;
  pqVar1[6] = 0;
  return;
}



/* Entry: 00487b98; end: 00487d1b;  */

undefined1  [16] FUN_00487b98(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = *param_1;
    *param_1 = *puVar2;
    *puVar2 = uVar1;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 00487d1c; end: 00487f33;  */

void FUN_00487d1c(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0048c300();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00487d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00804df0)[extraout_x8] * 4 + 0x487d48))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00487f34; end: 00488033;  */

void FUN_00487f34(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *unaff_x19;
  
  lVar3 = param_3;
  func_0x0048c04c();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = param_2;
  *unaff_x19 = &PTR_DAT_009e8d68;
  if ((*(ulong *)(lVar3 + 8) & 1) != 0) {
    func_0x0048be84();
  }
  *(undefined4 *)(unaff_x19 + 3) = 0;
  uVar1 = *(undefined4 *)(param_3 + 0x1c);
  *(undefined4 *)((long)unaff_x19 + 0x1c) = uVar1;
  switch(uVar1) {
  case 1:
    func_0x0048c084();
    func_0x0048b79c();
    break;
  case 2:
    func_0x0048c084();
    func_0x0048b7f8();
    break;
  case 3:
    func_0x0048c084();
    func_0x0048b85c();
    break;
  case 4:
    func_0x0048c084();
    FUN_0048b8c8();
    break;
  case 5:
    func_0x0048c084();
    func_0x0048b96c();
    break;
  case 6:
    func_0x0048c084();
    func_0x0048b9d4();
    break;
  case 7:
    func_0x0048c084();
    func_0x0048ba3c();
    break;
  case 8:
    func_0x0048c084();
    FUN_0048baa4();
    break;
  case 9:
    func_0x0048c084();
    FUN_0048bb48();
    break;
  case 10:
    func_0x0048c084();
    FUN_0048bb9c();
    break;
  case 0xb:
    func_0x0048c084();
    FUN_0048bc20();
    break;
  case 0xc:
    func_0x0048c084();
    FUN_0048bca0();
    break;
  default:
    goto LAB_0048be24;
  }
  unaff_x19[2] = puVar2;
LAB_0048be24:
  return;
}



/* Entry: 00488034; end: 0048805f;  */

undefined8 FUN_00488034(undefined8 param_1)

{
  func_0x0048bf94();
  FUN_00488060(param_1);
  return param_1;
}



/* Entry: 00488060; end: 00488073;  */

void FUN_00488060(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  long unaff_x19;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return;
  }
  func_0x0048c300();
  if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00487d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_00804df0)[extraout_x8] * 4 + 0x487d48))();
    return;
  }
  *(undefined4 *)(unaff_x19 + 0x1c) = 0;
  return;
}



/* Entry: 00488074; end: 00488087;  */

void FUN_00488074(void)

{
  FUN_00488034();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00488088; end: 004880bf;  */

undefined8 FUN_00488088(undefined8 param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  func_0x0048c178();
  return param_1;
}



/* Entry: 004880c0; end: 0048824b;  */

void FUN_004880c0(long param_1)

{
  ulong *puVar1;
  
  FUN_00487d1c();
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 0048824c; end: 0048836b;  */

void FUN_0048824c(void)

{
  FUN_004890a0();
  FUN_0048bdf0();
  return;
}



/* Entry: 0048836c; end: 0048836f;  */

void FUN_0048836c(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0048bf3c();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_00487d1c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_0048863c();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b79c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_004886a8();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b7f8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488778();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b85c();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004887f4();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048b8c8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004888fc();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b96c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004889c0();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b9d4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488a84();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048ba3c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488abc();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048baa4();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488ba4();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bb48();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488bec();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bb9c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488c30();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bc20();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_0048c7e8();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bca0();
      break;
    default:
      goto LAB_00488620;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_00488620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00488370; end: 0048863b;  */

void FUN_00488370(ulong *param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  ulong *unaff_x21;
  
  func_0x0048bf3c();
  iVar1 = *(int *)(unaff_x20 + 0x1c);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x1c);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_00487d1c();
      }
      *(int *)((long)unaff_x21 + 0x1c) = iVar1;
    }
    switch(iVar1) {
    case 1:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_0048863c();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b79c();
      break;
    case 2:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_004886a8();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b7f8();
      break;
    case 3:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488778();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b85c();
      break;
    case 4:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004887f4();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048b8c8();
      break;
    case 5:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004888fc();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b96c();
      break;
    case 6:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x004889c0();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048b9d4();
      break;
    case 7:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488a84();
        goto LAB_00488620;
      }
      func_0x0048c070();
      func_0x0048ba3c();
      break;
    case 8:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_00488abc();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048baa4();
      break;
    case 9:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488ba4();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bb48();
      break;
    case 10:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488bec();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bb9c();
      break;
    case 0xb:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        func_0x00488c30();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bc20();
      break;
    case 0xc:
      if (iVar2 == iVar1) {
        func_0x0048beb4();
        FUN_0048c7e8();
        goto LAB_00488620;
      }
      func_0x0048c070();
      FUN_0048bca0();
      break;
    default:
      goto LAB_00488620;
    }
    unaff_x21[2] = (ulong)param_1;
  }
LAB_00488620:
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048863c; end: 004886a7;  */

void FUN_0048863c(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048be9c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c11c();
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c25c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004886a8; end: 00488777;  */

void FUN_004886a8(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x0048bf3c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c254();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_0048918c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    func_0x0048c098();
    if ((iVar1 == 3) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = extraout_x8_00;
      }
      uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x24) != iVar1) {
        uVar3 = extraout_x8_00;
      }
      param_1 = unaff_x21 + 3;
      func_0x00532e08(param_1,uVar3,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00488778; end: 004887f3;  */

void FUN_00488778(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_0048bcf4();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00652de8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*puVar2 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 004887f4; end: 00488a83;  */

void FUN_004887f4(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00489a14();
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4a) = 1;
  }
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x4b) = 1;
  }
  func_0x0048c2d4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0048bf4c();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00488a84; end: 00488abb;  */

void FUN_00488a84(long param_1)

{
  ulong *puVar1;
  long unaff_x20;
  
  func_0x0048c04c();
  puVar1 = (ulong *)(param_1 + 0x10);
  FUN_0048ab78();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00488abc; end: 00488ba3;  */

void FUN_00488abc(void)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = (ulong *)(unaff_x21 + 0x18);
  lVar3 = unaff_x20 + 0x18;
  FUN_00489a14();
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x30));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar3 + 8);
  }
  if (lVar4 != 0) {
    if ((*(ulong *)(unaff_x21 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    puVar2 = (ulong *)(unaff_x21 + 0x30);
    func_0x00532e08();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x38);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x38) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar2 = *(ulong **)(unaff_x21 + 0x40);
      if (puVar2 == (ulong *)0x0) {
        func_0x0048c15c();
        *(ulong **)(unaff_x21 + 0x40) = puVar2;
      }
      else {
        func_0x00652de8();
      }
    }
  }
  if (*(char *)(unaff_x20 + 0x48) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x48) = 1;
  }
  if (*(char *)(unaff_x20 + 0x49) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x49) = 1;
  }
  func_0x0048c2d4();
  if ((extraout_x8_00 & 1) == 0) {
    return;
  }
  func_0x0048bf4c();
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
  return;
}



/* Entry: 00488ba4; end: 00488ccf;  */

void FUN_00488ba4(ulong *param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048be9c();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c11c();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00488cd0; end: 00488d03;  */

long FUN_00488cd0(long param_1)

{
  func_0x0048bf94();
  FUN_0048b2d0(param_1 + 0x28);
  FUN_0048b2d0(param_1 + 0x10);
  return param_1;
}



/* Entry: 00488d04; end: 00488d17;  */

void FUN_00488d04(void)

{
  FUN_00488cd0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00488d18; end: 00488d3b;  */

undefined ** FUN_00488d18(void)

{
  return &PTR_DAT_009e8df0;
}



/* Entry: 00488d3c; end: 00488f03;  */

long * FUN_00488d3c(undefined1 *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  long *unaff_x19;
  long unaff_x20;
  ulong *puVar6;
  int iVar7;
  int iVar8;
  
  func_0x0048c024();
  uVar2 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar2) {
    func_0x0048c000();
    puVar4 = param_1 + 2;
    *param_1 = 0x12;
    while (0x7f < uVar2) {
      func_0x0048c29c();
    }
    puVar4[-1] = (char)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x18);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x10);
    do {
      func_0x0048c000();
      uVar5 = *puVar6;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar5) {
        func_0x0048c314();
        uVar5 = extraout_x8;
      }
      puVar6 = puVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (puVar6 < puVar1);
  }
  uVar2 = *(uint *)(unaff_x20 + 0x38);
  if (0 < (int)uVar2) {
    func_0x0048c000();
    puVar4 = param_1 + 2;
    *param_1 = 0x1a;
    while (0x7f < uVar2) {
      func_0x0048c29c();
    }
    puVar4[-1] = (char)uVar2;
    puVar6 = *(ulong **)(unaff_x20 + 0x30);
    puVar1 = puVar6 + *(int *)(unaff_x20 + 0x28);
    do {
      func_0x0048c000();
      uVar5 = *puVar6;
      param_4 = (long *)(param_1 + 1);
      while (0x7f < uVar5) {
        func_0x0048c314();
        uVar5 = extraout_x8_00;
      }
      puVar6 = puVar6 + 1;
      *(char *)((long)param_4 + -1) = (char)uVar5;
    } while (puVar6 < puVar1);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048c064();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_01 + 8);
      param_3 = *(ulong *)(extraout_x8_01 + 0x10);
    }
    else {
      lVar3 = extraout_x8_01 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar8 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar7 = (int)param_3;
        uVar2 = iVar7 - iVar8;
        param_3 = (ulong)uVar2;
        if (uVar2 == 0 || iVar7 < iVar8) break;
        func_0x0054f690();
        param_4 = unaff_x19;
        func_0x0054ed58();
      }
      func_0x0054f690();
      return (long *)((long)param_4 + (long)iVar7);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 00488f04; end: 00488f07;  */

void FUN_00488f04(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0048c04c();
  FUN_00488f08(param_1 + 0x10,param_2 + 0x10);
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_00488f08();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf5c();
    if ((*puVar1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00488f08; end: 00488f67;  */

undefined1  [16] FUN_00488f08(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar3 = *param_2;
  if (iVar3 != 0) {
    FUN_0048bcd8(param_1,*param_1 + iVar3);
    iVar1 = *param_1;
    *param_1 = iVar1 + iVar3;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + (long)iVar1 * 8);
    puVar2 = *(undefined8 **)(param_2 + 2);
    puVar5 = puVar2;
    puVar6 = puVar4;
    while (0 < iVar3) {
      *puVar6 = *puVar5;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    }
    auVar7._8_8_ = puVar4;
    auVar7._0_8_ = puVar2;
    return auVar7;
  }
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Entry: 00488f68; end: 00488f93;  */

undefined8 FUN_00488f68(undefined8 param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  func_0x0048c178();
  return param_1;
}



/* Entry: 00488f94; end: 00488fa7;  */

void FUN_00488f94(void)

{
  FUN_00488f68();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00488fa8; end: 00488fb3;  */

undefined ** FUN_00488fa8(void)

{
  return &PTR_DAT_009e8e38;
}



/* Entry: 00488fb4; end: 00488fe3;  */

void FUN_00488fb4(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  func_0x0048c264();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00488fe4; end: 0048909f;  */

long * FUN_00488fe4(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  long *plVar2;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar3;
  long *unaff_x22;
  int iVar4;
  
  func_0x0048c014();
  func_0x0048bfc0(param_1[2]);
  if (param_2 < 0) {
    param_2 = unaff_x22[1];
    if (param_2 != 0) {
      plVar2 = (long *)*unaff_x22;
      goto LAB_0048901c;
    }
  }
  else {
    plVar2 = unaff_x22;
    if ((int)param_2 != 0) {
LAB_0048901c:
      param_4 = "snapchat.notification.SpotlightGrowth.composite_story_id";
      func_0x0048bf8c();
      func_0x0048c164();
      func_0x0048bedc();
      param_1 = plVar2;
      unaff_x20 = plVar2;
    }
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x18));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0048906c;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_0048906c;
  param_4 = "snapchat.notification.SpotlightGrowth.media_download_url";
  func_0x0048bf8c();
  func_0x0048be30();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_0048906c:
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c1bc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar4 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar3 = (int)param_3;
      param_3 = (ulong)(uint)(iVar3 - iVar4);
      if (iVar3 - iVar4 == 0 || iVar3 < iVar4) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar4);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar3);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004890a0; end: 0048910b;  */

void FUN_004890a0(long param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  long unaff_x19;
  
  func_0x0048be44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048c328();
  }
  func_0x0048bf9c(*(undefined8 *)(unaff_x19 + 0x18));
  lVar1 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048bf00();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
  }
  func_0x0048c2f4();
  return;
}



/* Entry: 0048910c; end: 0048913f;  */

long FUN_0048910c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)*(byte *)(param_1 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x17);
  }
  return uVar1 + ((int)LZCOUNT((int)uVar1) * -9 + 0x160U >> 6);
}



/* Entry: 00489140; end: 00489177;  */

long FUN_00489140(long param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_0048918c(param_1);
  }
  return param_1;
}



/* Entry: 00489178; end: 0048918b;  */

void FUN_00489178(void)

{
  FUN_00489140();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048918c; end: 004891bb;  */

void FUN_0048918c(long param_1)

{
  if ((*(uint *)(param_1 + 0x24) | 2) == 3) {
    func_0x0048c178();
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* Entry: 004891bc; end: 004891c7;  */

undefined ** FUN_004891bc(void)

{
  return &PTR_DAT_009e8e80;
}



/* Entry: 004891c8; end: 004891fb;  */

void FUN_004891c8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  FUN_0048918c();
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 004891fc; end: 004892bf;  */

long * FUN_004891fc(long *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  undefined1 in_ZR;
  long extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  int iVar2;
  long *unaff_x22;
  int iVar3;
  
  func_0x0048c014();
  func_0x0048c1b0();
  if ((bool)in_ZR) {
    param_3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
    func_0x0048c164();
    FUN_00435e9c();
    param_4 = (char *)unaff_x20;
    unaff_x20 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x21 + 0x10));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_00489268;
    unaff_x22 = (long *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00489268;
  param_4 = "snapchat.notification.Memories.memories_collection_id";
  func_0x0048bf8c();
  func_0x0048be30();
  param_1 = unaff_x22;
  unaff_x20 = unaff_x22;
LAB_00489268:
  if (*(int *)(unaff_x21 + 0x24) == 3) {
    param_3 = *(ulong *)(unaff_x21 + 0x18) & 0xfffffffffffffffc;
    func_0x0048c2bc();
    FUN_00435e9c();
    param_4 = (char *)unaff_x20;
    unaff_x20 = param_1;
  }
  if ((*(ulong *)(unaff_x21 + 8) & 1) == 0) {
    return unaff_x20;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c1bc();
  if (*param_1 - (long)param_4 < (long)(int)param_3) {
    while( true ) {
      iVar3 = ((int)*param_1 - (int)param_4) + 0x10;
      iVar2 = (int)param_3;
      param_3 = (ulong)(uint)(iVar2 - iVar3);
      if (iVar2 - iVar3 == 0 || iVar2 < iVar3) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar3);
      param_4 = (char *)param_1;
      func_0x0054ed58(param_1,pcVar1);
    }
    func_0x0054f690();
    return (long *)((long)param_4 + (long)iVar2);
  }
  _memcpy(param_4);
  return (long *)((long)param_4 + (long)(int)param_3);
}



/* Entry: 004892c0; end: 00489333;  */

void FUN_004892c0(long param_1)

{
  long extraout_x8;
  long lVar1;
  long unaff_x19;
  
  func_0x0048be44();
  lVar1 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar1 = *(long *)(param_1 + 8);
  }
  if (lVar1 != 0) {
    FUN_0048c328();
  }
  if ((*(uint *)(unaff_x19 + 0x24) | 2) == 3) {
    func_0x00487c3c(*(ulong *)(unaff_x19 + 0x18) & 0xfffffffffffffffc);
    func_0x0048bfd4();
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
  }
  func_0x0048c2f4();
  return;
}



/* Entry: 00489334; end: 00489337;  */

void FUN_00489334(ulong *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long extraout_x8;
  long lVar4;
  ulong extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  ulong *unaff_x21;
  ulong uVar5;
  
  func_0x0048bf3c();
  uVar3 = *(ulong *)(unaff_x19 + 8);
  uVar5 = uVar3;
  if ((uVar3 & 1) != 0) {
    uVar5 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
  }
  func_0x0048bfb4(*(undefined8 *)(unaff_x20 + 0x10));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(param_2 + 8);
  }
  if (lVar4 != 0) {
    if ((uVar3 & 1) != 0) {
      func_0x0048bfa8();
    }
    func_0x0048c254();
  }
  iVar1 = *(int *)(unaff_x20 + 0x24);
  if (iVar1 != 0) {
    iVar2 = *(int *)((long)unaff_x21 + 0x24);
    if (iVar2 != iVar1) {
      if (iVar2 != 0) {
        param_1 = unaff_x21;
        FUN_0048918c();
      }
      *(int *)((long)unaff_x21 + 0x24) = iVar1;
    }
    func_0x0048c098();
    if ((iVar1 == 3) || (iVar1 == 1)) {
      if (iVar2 != iVar1) {
        unaff_x21[3] = extraout_x8_00;
      }
      uVar3 = *(ulong *)(unaff_x20 + 0x18) & 0xfffffffffffffffc;
      if (*(int *)(unaff_x20 + 0x24) != iVar1) {
        uVar3 = extraout_x8_00;
      }
      param_1 = unaff_x21 + 3;
      func_0x00532e08(param_1,uVar3,uVar5);
    }
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*param_1 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 00489338; end: 0048936b;  */

long FUN_00489338(long param_1)

{
  func_0x0048bf94();
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  return param_1;
}



/* Entry: 0048936c; end: 0048937f;  */

void FUN_0048936c(void)

{
  FUN_00489338();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00489380; end: 0048938b;  */

undefined ** FUN_00489380(void)

{
  return &PTR_DAT_009e8ec0;
}



/* Entry: 0048938c; end: 0048947f;  */

void FUN_0048938c(long param_1)

{
  ulong *puVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00652e04(*(undefined8 *)(param_1 + 0x18));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00489480; end: 00489497;  */

void FUN_00489480(void)

{
  FUN_00652e74();
  FUN_0048bdf0();
  return;
}



/* Entry: 00489498; end: 0048949b;  */

void FUN_00489498(void)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x0048bf3c();
  puVar2 = *(ulong **)(unaff_x19 + 8);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = *(ulong **)((ulong)puVar2 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    puVar3 = *(ulong **)(unaff_x21 + 0x18);
    if (puVar3 == (ulong *)0x0) {
      FUN_0048bcf4();
      *(ulong **)(unaff_x21 + 0x18) = puVar2;
    }
    else {
      func_0x00652de8();
      puVar2 = puVar3;
    }
  }
  *(uint *)(unaff_x21 + 0x10) = *(uint *)(unaff_x21 + 0x10) | uVar1;
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048bf4c();
    if ((*puVar2 & 1) == 0) {
      FUN_00538108();
    }
                    /* WARNING: Could not recover jumptable at 0x00779b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_009989a8)();
    return;
  }
  return;
}



/* Entry: 0048949c; end: 004894c3;  */

undefined8 FUN_0048949c(undefined8 param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  return param_1;
}



/* Entry: 004894c4; end: 004894c7;  */

undefined8 FUN_004894c4(undefined8 param_1)

{
  func_0x0048bf94();
  func_0x0048c090();
  return param_1;
}



/* Entry: 004894c8; end: 004894db;  */

void FUN_004894c8(void)

{
  FUN_0048949c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004894dc; end: 004894e7;  */

undefined ** FUN_004894dc(void)

{
  return &PTR_DAT_009e8f00;
}



/* Entry: 004894e8; end: 00489517;  */

void FUN_004894e8(void)

{
  long unaff_x19;
  ulong *puVar1;
  
  func_0x0048bef4();
  puVar1 = (ulong *)(unaff_x19 + 8);
  *(undefined8 *)(unaff_x19 + 0x18) = 0;
  *(undefined8 *)(unaff_x19 + 0x20) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 00489518; end: 004895e3;  */

dword * FUN_00489518(dword *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  dword *pdVar2;
  dword *pdVar3;
  long extraout_x8;
  long unaff_x20;
  dword *unaff_x21;
  int iVar4;
  dword *unaff_x22;
  int iVar5;
  
  func_0x0048c0c0();
  func_0x0048bfc0(*(undefined8 *)(param_1 + 4));
  if (param_2 < 0) {
    if (*(long *)(unaff_x22 + 2) == 0) goto LAB_00489568;
    unaff_x22 = *(dword **)unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_00489568;
  param_4 = "snapchat.notification.MessagingMedia.download_url";
  func_0x0048bf8c();
  func_0x0048c164();
  func_0x0048be58();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_00489568:
  pdVar2 = param_1;
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x0048be90();
    pdVar2 = &MACH_HEADER.ncmds;
    func_0x00487cbc(0x10,param_1);
    func_0x0048c278();
    unaff_x21 = pdVar2;
  }
  pdVar3 = pdVar2;
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    func_0x0048be90();
    pdVar3 = &MACH_HEADER.flags;
    func_0x00487cbc(0x18,pdVar2);
    func_0x0048c278();
    unaff_x21 = pdVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x0048c064();
    if ((long)param_3 < 0) {
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    func_0x0048c2c8();
    if (*(long *)pdVar3 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar5 = ((int)*(undefined8 *)pdVar3 - (int)param_4) + 0x10;
        iVar4 = (int)param_3;
        param_3 = (ulong)(uint)(iVar4 - iVar5);
        if (iVar4 - iVar5 == 0 || iVar4 < iVar5) break;
        func_0x0054f690();
        pcVar1 = (char *)((long)param_4 + (long)iVar5);
        param_4 = (char *)pdVar3;
        func_0x0054ed58(pdVar3,pcVar1);
      }
      func_0x0054f690();
      return (dword *)((long)param_4 + (long)iVar4);
    }
    _memcpy(param_4);
    return (dword *)((long)param_4 + (long)(int)param_3);
  }
  return unaff_x21;
}



/* Entry: 004895e4; end: 004896d7;  */

void FUN_004895e4(long param_1)

{
  int iVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x9;
  long unaff_x19;
  
  func_0x0048be44();
  lVar2 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar2 = *(long *)(param_1 + 8);
  }
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_0048910c();
    iVar1 = (int)param_1 + 1;
  }
  if (*(long *)(unaff_x19 + 0x18) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x18)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    iVar1 = ((int)LZCOUNT(*(long *)(unaff_x19 + 0x20)) * -9 + 0x2c0U >> 6) + iVar1;
  }
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x0048c1ec();
    lVar2 = extraout_x8_00;
    if (extraout_x8_00 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    iVar1 = (int)lVar2 + iVar1;
  }
  *(int *)(unaff_x19 + 0x28) = iVar1;
  return;
}



/* Entry: 004896d8; end: 00489727;  */

long FUN_004896d8(long param_1)

{
  func_0x0048bf94();
  func_0x0048c230();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00652d54();
  }
  __ZdlPv();
  FUN_0048b344(param_1 + 0x18);
  return param_1;
}



/* Entry: 00489728; end: 0048973b;  */

void FUN_00489728(void)

{
  FUN_004896d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0048973c; end: 00489747;  */

undefined ** FUN_0048973c(void)

{
  return &PTR_DAT_009e8f48;
}



/* Entry: 00489748; end: 004897ab;  */

void FUN_00489748(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  FUN_0048b788(param_1 + 0x18);
  func_0x0048c244();
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00652e04(*(undefined8 *)(param_1 + 0x38));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      func_0x00652e04(*(undefined8 *)(param_1 + 0x40));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_00538108();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 004897ac; end: 00489923;  */

qword * FUN_004897ac(qword *param_1,long param_2,ulong param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  qword *pqVar3;
  qword *pqVar4;
  long extraout_x8;
  long unaff_x20;
  qword *unaff_x21;
  int iVar5;
  qword *unaff_x22;
  int iVar6;
  
  func_0x0048c0c0();
  if (*(char *)(param_1 + 9) == '\x01') {
    func_0x0048be90();
    func_0x0048c180();
    func_0x0048bee8();
    unaff_x21 = param_1;
  }
  func_0x0048bfc0(*(undefined8 *)(unaff_x20 + 0x30));
  if (param_2 < 0) {
    if (unaff_x22[1] == 0) goto LAB_0048981c;
    unaff_x22 = (qword *)*unaff_x22;
  }
  else if ((int)param_2 == 0) goto LAB_0048981c;
  param_4 = "snapchat.notification.Chat.message_tracking_id";
  func_0x0048bf8c();
  func_0x0048c2bc();
  func_0x0048be58();
  param_1 = unaff_x22;
  unaff_x21 = unaff_x22;
LAB_0048981c:
  uVar2 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar2 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x38) + 0x18);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 1);
    func_0x0048bf18();
    unaff_x21 = param_1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x40) + 0x18);
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 2);
    func_0x0048bf18();
    unaff_x21 = param_1;
  }
  iVar6 = *(int *)(unaff_x20 + 0x20);
  for (iVar5 = 0; iVar6 != iVar5; iVar5 = iVar5 + 1) {
    func_0x0048c124();
    param_1 = (qword *)((long)&MACH_HEADER.cputype + 3);
    func_0x0048bf18();
    unaff_x21 = param_1;
  }
  pqVar3 = param_1;
  if ((*(byte *)(unaff_x20 + 0x49) & 1) != 0) {
    func_0x0048be90();
    pqVar3 = &segment_command_00000020.vmsize;
    func_0x00487cbc(0x40,param_1);
    func_0x0048bee8();
    unaff_x21 = pqVar3;
  }
  pqVar4 = pqVar3;
  if (*(char *)(unaff_x20 + 0x4a) == '\x01') {
    func_0x0048be90();
    pqVar4 = &segment_command_00000020.fileoff;
    func_0x00487cbc(0x48,pqVar3);
    func_0x0048bee8();
    unaff_x21 = pqVar4;
  }
  pqVar3 = pqVar4;
  if (*(char *)(unaff_x20 + 0x4b) == '\x01') {
    func_0x0048be90();
    pqVar3 = &segment_command_00000020.filesize;
    func_0x00487cbc(0x50,pqVar4);
    func_0x0048bee8();
    unaff_x21 = pqVar3;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) == 0) {
    return unaff_x21;
  }
  func_0x0048c064();
  if ((long)param_3 < 0) {
    param_3 = *(ulong *)(extraout_x8 + 0x10);
  }
  func_0x0048c2c8();
  if ((long)(*pqVar3 - (long)param_4) < (long)(int)param_3) {
    while( true ) {
      iVar6 = ((int)*pqVar3 - (int)param_4) + 0x10;
      iVar5 = (int)param_3;
      param_3 = (ulong)(uint)(iVar5 - iVar6);
      if (iVar5 - iVar6 == 0 || iVar5 < iVar6) break;
      func_0x0054f690();
      pcVar1 = (char *)((long)param_4 + (long)iVar6);
      param_4 = (char *)pqVar3;
      func_0x0054ed58(pqVar3,pcVar1);
    }
    func_0x0054f690();
    return (qword *)((long)param_4 + (long)iVar5);
  }
  _memcpy(param_4);
  return (qword *)((long)param_4 + (long)(int)param_3);
}



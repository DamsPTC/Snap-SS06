/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109371cf8; end: 109371fe3;  */

long * FUN_109371cf8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  ulong unaff_x23;
  undefined8 auStack_3f8 [2];
  char cStack_3e1;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  undefined *puStack_3c8;
  undefined1 auStack_3c0 [200];
  undefined1 auStack_2f8 [192];
  long lStack_238;
  long *plStack_230;
  long *plStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined1 auStack_1d0 [200];
  undefined1 auStack_108 [192];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar4 = param_1 + 2;
  *plVar4 = (long)(param_1 + 0x51);
  param_1[0x66] = param_2;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x52] = (long)&UNK_1081d50e4;
  param_1[0x53] = (long)&UNK_1081d5148;
  param_1[0x54] = (long)&UNK_1081d51c4;
  param_1[0x55] = (long)&UNK_1081d5294;
  plVar7 = param_1 + 0x67;
  *(undefined4 *)((long)param_1 + 0x304) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x62] = (long)&PTR_DAT_110a2f080;
  *(undefined4 *)(param_1 + 99) = 0x80;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[0x51] = (long)FUN_109371ce4;
  puVar2 = auStack_108;
  param_1[5] = (long)puVar2;
  _setjmp();
  if ((int)puVar2 != 0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,auStack_1d0);
    uVar5 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c31940(auStack_200,&UNK_10f566f58);
    FUN_109259240(auStack_1e8,auStack_200,auStack_1d0);
    FUN_1093712f4(uVar5,auStack_1e8);
    ___cxa_throw(uVar5,&PTR_DAT_110af4380,FUN_1093717d4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109371f58);
    (*pcVar1)();
  }
  func_0x0001081c63a4(plVar4,0x3e,0x278);
  lVar8 = param_1[0x66];
  plVar3 = plVar4;
  (**(code **)param_1[3])(plVar4,0,0x48);
  plVar3[2] = (long)FUN_109372190;
  plVar3[3] = (long)FUN_10937219c;
  plVar3[4] = (long)FUN_10937225c;
  plVar3[5] = (long)&UNK_1081ceb8c;
  plVar3[6] = (long)FUN_1093722ac;
  plVar3[7] = lVar8;
  param_1[7] = (long)plVar3;
  *plVar3 = (long)plVar3 + 0x41;
  plVar3[1] = 0;
  *(undefined1 *)(plVar3 + 8) = 0;
  puVar6 = (undefined *)0x1;
  func_0x0001081c654c(plVar4);
  plVar3 = plVar4;
  func_0x0001081c69c0();
  *param_1 = param_1[0x13];
  *(int *)(param_1 + 1) = (int)param_1[0x14];
  if ((int)param_1[0x14] == 1) {
    if (*(char *)((long)param_1 + 0x34f) < '\0') {
      param_1[0x68] = 0xd;
      plVar7 = (long *)param_1[0x67];
    }
    else {
      *(undefined1 *)((long)param_1 + 0x34f) = 0xd;
    }
    *plVar7 = 0x64656e6769736e75;
    *(undefined8 *)((long)plVar7 + 5) = 0x726168632064656e;
    *(undefined1 *)((long)plVar7 + 0xd) = 0;
  }
  else {
    puVar6 = &UNK_10f566f7c;
    plVar3 = plVar7;
    func_0x000107c2c4d8(plVar7,&UNK_10f566f7c,0x17);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    if (cStack_1d1 < '\0') {
      __ZdlPv(auStack_1e8[0]);
    }
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
    if ((unaff_x23 & 1) != 0) {
      ___cxa_free_exception(plVar4);
    }
    if (*(char *)((long)param_1 + 0x34f) < '\0') {
      __ZdlPv(*plVar7);
    }
    plVar4 = plVar3;
    __Unwind_Resume();
    pcStack_208 = FUN_109371fe4;
    lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar2 = auStack_2f8;
    plVar4[5] = (long)puVar2;
    puStack_3c8 = puVar6;
    plStack_230 = plVar3;
    plStack_228 = plVar3;
    plStack_220 = plVar7;
    plStack_218 = param_1;
    puStack_210 = &stack0xfffffffffffffff0;
    _setjmp();
    if ((int)puVar2 != 0) {
      (**(code **)(plVar4[2] + 0x18))(plVar4 + 2,auStack_3c0);
      uVar5 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(auStack_3f8,&UNK_10f566f58);
      FUN_109259240(auStack_3e0,auStack_3f8,auStack_3c0);
      FUN_1093712f4(uVar5,auStack_3e0);
      ___cxa_throw(uVar5,&PTR_DAT_110af4380,FUN_1093717d4);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1093720d0);
      (*pcVar1)();
    }
    plVar7 = plVar4 + 2;
    func_0x0001081c6dd0(plVar7,&puStack_3c8,1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_238) {
      ___stack_chk_fail();
      if (cStack_3c9 < '\0') {
        __ZdlPv(auStack_3e0[0]);
      }
      if (cStack_3e1 < '\0') {
        __ZdlPv(auStack_3f8[0]);
      }
      if (((ulong)plVar3 & 1) != 0) {
        ___cxa_free_exception(plVar4);
      }
      __Unwind_Resume();
      __Unwind_Resume();
      func_0x0001081c68b0(plVar7 + 2);
      if (plVar7[3] != 0) {
        (**(code **)(plVar7[3] + 0x50))(plVar7 + 2);
      }
      plVar7[3] = 0;
      *(undefined4 *)((long)plVar7 + 0x34) = 0;
      if (*(char *)((long)plVar7 + 0x34f) < '\0') {
        __ZdlPv(plVar7[0x67]);
      }
      return plVar7;
    }
    return plVar7;
  }
  return param_1;
}



/* Entry: 109371fe4; end: 10937213b;  */

long FUN_109371fe4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong unaff_x21;
  undefined8 auStack_1f8 [2];
  char cStack_1e1;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [200];
  undefined1 auStack_f8 [192];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = auStack_f8;
  *(undefined1 **)(param_1 + 0x28) = puVar2;
  uStack_1c8 = param_2;
  _setjmp();
  if ((int)puVar2 != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(param_1 + 0x10,auStack_1c0);
    uVar4 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c31940(auStack_1f8,&UNK_10f566f58);
    FUN_109259240(auStack_1e0,auStack_1f8,auStack_1c0);
    FUN_1093712f4(uVar4,auStack_1e0);
    ___cxa_throw(uVar4,&PTR_DAT_110af4380,FUN_1093717d4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1093720d0);
    (*pcVar1)();
  }
  lVar3 = param_1 + 0x10;
  func_0x0001081c6dd0(lVar3,&uStack_1c8,1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (cStack_1c9 < '\0') {
      __ZdlPv(auStack_1e0[0]);
    }
    if (cStack_1e1 < '\0') {
      __ZdlPv(auStack_1f8[0]);
    }
    if ((unaff_x21 & 1) != 0) {
      ___cxa_free_exception(param_1);
    }
    __Unwind_Resume();
    __Unwind_Resume();
    func_0x0001081c68b0(lVar3 + 0x10);
    if (*(long *)(lVar3 + 0x18) != 0) {
      (**(code **)(*(long *)(lVar3 + 0x18) + 0x50))(lVar3 + 0x10);
    }
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined4 *)(lVar3 + 0x34) = 0;
    if (*(char *)(lVar3 + 0x34f) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar3 + 0x338));
    }
    return lVar3;
  }
  return lVar3;
}



/* Entry: 10937213c; end: 10937218f;  */

long FUN_10937213c(long param_1)

{
  func_0x0001081c68b0(param_1 + 0x10);
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(param_1 + 0x18) + 0x50))(param_1 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(char *)(param_1 + 0x34f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x338));
  }
  return param_1;
}



/* Entry: 109372190; end: 10937219b;  */

void FUN_109372190(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
  return;
}



/* Entry: 10937219c; end: 10937225b;  */

undefined8 FUN_10937219c(long param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  byte *pbVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  puVar1 = (undefined1 *)((long)plVar4 + 0x41);
  *plVar4 = (long)puVar1;
  pbVar5 = (byte *)(plVar4 + 8);
  bVar2 = *pbVar5;
  while( true ) {
    if ((bVar2 & 1) != 0) {
      *(undefined2 *)((long)plVar4 + 0x41) = 0xd9ff;
      plVar4[1] = 2;
      return 1;
    }
    iVar3 = (int)plVar4[7];
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE3getEv();
    if (iVar3 == -1) {
      *pbVar5 = 1;
    }
    else {
      *puVar1 = (char)iVar3;
    }
    plVar4[1] = (ulong)(iVar3 != -1);
    if ((*(byte *)(plVar4[7] + *(long *)(*(long *)plVar4[7] + -0x18) + 0x20) >> 1 & 1) != 0) {
      *pbVar5 = 1;
    }
    if (iVar3 != -1) break;
    plVar4 = *(long **)(param_1 + 0x28);
    puVar1 = (undefined1 *)((long)plVar4 + 0x41);
    *plVar4 = (long)puVar1;
    pbVar5 = (byte *)(plVar4 + 8);
    bVar2 = *pbVar5;
  }
  return 1;
}



/* Entry: 10937225c; end: 1093722ab;  */

void FUN_10937225c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x28);
  lVar2 = plVar3[1];
  lVar1 = lVar2 - param_2;
  if (lVar2 < param_2) {
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6ignoreEli(plVar3[7],param_2 - lVar2,0xffffffff)
    ;
    lVar1 = 0;
  }
  else {
    *plVar3 = *plVar3 + param_2;
  }
  plVar3[1] = lVar1;
  return;
}



/* Entry: 1093722ac; end: 1093722af;  */

void FUN_1093722ac(void)

{
  return;
}



/* Entry: 1093722b0; end: 109372377;  */

void FUN_1093722b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_50,&DAT_10f566f6e);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566f94,auStack_50);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar1,">",1);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 109372378; end: 1093723af;  */

void FUN_109372378(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_1093723b0();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372394);
  (*pcVar1)();
}



/* Entry: 1093723b0; end: 109372447;  */

void FUN_1093723b0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566f9e);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372410);
  (*pcVar1)();
}



/* Entry: 109372448; end: 109372453;  */

void FUN_109372448(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_109372378();
  *param_1 = 0;
  FUN_10937248c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372470);
  (*pcVar1)();
}



/* Entry: 109372454; end: 10937248b;  */

void FUN_109372454(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_10937248c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372470);
  (*pcVar1)();
}



/* Entry: 10937248c; end: 109372523;  */

void FUN_10937248c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fa2);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093724ec);
  (*pcVar1)();
}



/* Entry: 109372524; end: 10937252f;  */

void FUN_109372524(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_109372454();
  *param_1 = 0;
  FUN_109372568();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937254c);
  (*pcVar1)();
}



/* Entry: 109372530; end: 109372567;  */

void FUN_109372530(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_109372568();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937254c);
  (*pcVar1)();
}



/* Entry: 109372568; end: 1093725ff;  */

void FUN_109372568(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fab);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093725c8);
  (*pcVar1)();
}



/* Entry: 109372600; end: 10937260b;  */

void FUN_109372600(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_109372530();
  *param_1 = 0;
  FUN_109372644();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372628);
  (*pcVar1)();
}



/* Entry: 10937260c; end: 109372643;  */

void FUN_10937260c(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_109372644();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372628);
  (*pcVar1)();
}



/* Entry: 109372644; end: 1093726db;  */

void FUN_109372644(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fb0);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093726a4);
  (*pcVar1)();
}



/* Entry: 1093726dc; end: 1093726e7;  */

void FUN_1093726dc(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_10937260c();
  *param_1 = 0;
  FUN_109372720();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372704);
  (*pcVar1)();
}



/* Entry: 1093726e8; end: 10937271f;  */

void FUN_1093726e8(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_109372720();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372704);
  (*pcVar1)();
}



/* Entry: 109372720; end: 1093727b7;  */

void FUN_109372720(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fb4);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x109372780);
  (*pcVar1)();
}



/* Entry: 1093727b8; end: 1093727c3;  */

void FUN_1093727b8(undefined8 *param_1)

{
  code *pcVar1;
  
  FUN_1093726e8();
  *param_1 = 0;
  FUN_1093727fc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093727e0);
  (*pcVar1)();
}



/* Entry: 1093727c4; end: 1093727fb;  */

void FUN_1093727c4(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = 0;
  FUN_1093727fc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1093727e0);
  (*pcVar1)();
}



/* Entry: 1093727fc; end: 109372893;  */

void FUN_1093727fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fb9);
  FUN_109371218(uVar2,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4368,FUN_1093717bc);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937285c);
  (*pcVar1)();
}



/* Entry: 109372894; end: 10937289f;  */

void FUN_109372894(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_1093727c4();
  if (-1 < param_1) {
    return;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_58,&UNK_10f566fbe);
  func_0x000107c31940(auStack_70,&UNK_10f566fc2);
  FUN_10937153c(uVar2,auStack_58,auStack_70);
  ___cxa_throw(uVar2,&PTR_DAT_110af43f8,FUN_10937184c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937292c);
  (*pcVar1)();
}



/* Entry: 1093728a0; end: 109372983;  */

void FUN_1093728a0(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (-1 < param_1) {
    return;
  }
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f566fbe);
  func_0x000107c31940(auStack_60,&UNK_10f566fc2);
  FUN_10937153c(uVar2,auStack_48,auStack_60);
  ___cxa_throw(uVar2,&PTR_DAT_110af43f8,FUN_10937184c);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937292c);
  (*pcVar1)();
}



/* Entry: 109372984; end: 1093730bf;  */

undefined8 **** FUN_109372984(undefined8 ****param_1,undefined8 ***param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *****pppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *****pppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 *****pppppuVar10;
  undefined **ppuVar11;
  undefined8 *****pppppuVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  uint uVar16;
  undefined1 *puVar17;
  code *pcVar18;
  int aiStack_98 [2];
  int iStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 uStack_84;
  undefined8 ****appppuStack_80 [2];
  char cStack_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  char cStack_51;
  long lStack_50;
  long lStack_48;
  
  puVar17 = &stack0xfffffffffffffff0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar3 = (undefined8 *****)(param_1 + 1);
  *param_1 = param_2;
  func_0x000107c31940(pppppuVar3,"");
  ppppuVar9 = param_1 + 6;
  param_1[7] = (undefined8 ***)0x0;
  *ppppuVar9 = (undefined8 ***)0x0;
  ppppuVar15 = param_1 + 8;
  param_1[9] = (undefined8 ***)0x0;
  *ppppuVar15 = (undefined8 ***)0x0;
  param_1[0xb] = (undefined8 ***)0x0;
  param_1[10] = (undefined8 ***)0x0;
  param_1[5] = (undefined8 ***)0x0;
  param_1[4] = (undefined8 ***)0x0;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(param_2,&lStack_50,8);
  if (lStack_50 != 0xa1a0a0d474e5089) {
    uVar7 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c31940(appppuStack_80,&UNK_10f566fd9);
    FUN_1093712f4(uVar7,appppuStack_80);
    ___cxa_throw(uVar7,&PTR_DAT_110af4380,FUN_1093717d4);
    goto LAB_109372f80;
  }
  ppppuVar14 = param_1 + 5;
  pppuVar4 = (undefined8 ***)&UNK_10f47cea1;
  FUN_109b6474c(&UNK_10f47cea1,0,0,0,0,0,0);
  *ppppuVar14 = pppuVar4;
  if (pppuVar4 == (undefined8 ***)0x0) {
    puVar6 = (undefined8 *)0x10;
    ___cxa_allocate_exception();
    __ZNSt13runtime_errorC2EPKc();
LAB_109372ebc:
    *puVar6 = &PTR_FUN_110af41c8;
    pcVar18 = FUN_109371200;
    ppuVar11 = &PTR_DAT_110af41f8;
  }
  else {
    if (pppuVar4[0x7d] == (undefined8 **)0x0) {
      pppuVar4 = (undefined8 ***)0x168;
      _malloc();
    }
    else {
      (*(code *)pppuVar4[0x7d])();
    }
    if (pppuVar4 == (undefined8 ***)0x0) {
      *ppppuVar9 = (undefined8 ***)0x0;
      FUN_109b65758(ppppuVar14,0,0);
      puVar6 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      goto LAB_109372ebc;
    }
    pppuVar4[0x2c] = (undefined8 **)0x0;
    pppuVar4[0x29] = (undefined8 **)0x0;
    pppuVar4[0x28] = (undefined8 **)0x0;
    pppuVar4[0x2b] = (undefined8 **)0x0;
    pppuVar4[0x2a] = (undefined8 **)0x0;
    pppuVar4[0x25] = (undefined8 **)0x0;
    pppuVar4[0x24] = (undefined8 **)0x0;
    pppuVar4[0x27] = (undefined8 **)0x0;
    pppuVar4[0x26] = (undefined8 **)0x0;
    pppuVar4[0x21] = (undefined8 **)0x0;
    pppuVar4[0x20] = (undefined8 **)0x0;
    pppuVar4[0x23] = (undefined8 **)0x0;
    pppuVar4[0x22] = (undefined8 **)0x0;
    pppuVar4[0x1d] = (undefined8 **)0x0;
    pppuVar4[0x1c] = (undefined8 **)0x0;
    pppuVar4[0x1f] = (undefined8 **)0x0;
    pppuVar4[0x1e] = (undefined8 **)0x0;
    pppuVar4[0x19] = (undefined8 **)0x0;
    pppuVar4[0x18] = (undefined8 **)0x0;
    pppuVar4[0x1b] = (undefined8 **)0x0;
    pppuVar4[0x1a] = (undefined8 **)0x0;
    pppuVar4[0x15] = (undefined8 **)0x0;
    pppuVar4[0x14] = (undefined8 **)0x0;
    pppuVar4[0x17] = (undefined8 **)0x0;
    pppuVar4[0x16] = (undefined8 **)0x0;
    pppuVar4[0x11] = (undefined8 **)0x0;
    pppuVar4[0x10] = (undefined8 **)0x0;
    pppuVar4[0x13] = (undefined8 **)0x0;
    pppuVar4[0x12] = (undefined8 **)0x0;
    pppuVar4[0xd] = (undefined8 **)0x0;
    pppuVar4[0xc] = (undefined8 **)0x0;
    pppuVar4[0xf] = (undefined8 **)0x0;
    pppuVar4[0xe] = (undefined8 **)0x0;
    pppuVar4[9] = (undefined8 **)0x0;
    pppuVar4[8] = (undefined8 **)0x0;
    pppuVar4[0xb] = (undefined8 **)0x0;
    pppuVar4[10] = (undefined8 **)0x0;
    pppuVar4[5] = (undefined8 **)0x0;
    pppuVar4[4] = (undefined8 **)0x0;
    pppuVar4[7] = (undefined8 **)0x0;
    pppuVar4[6] = (undefined8 **)0x0;
    pppuVar4[1] = (undefined8 **)0x0;
    *pppuVar4 = (undefined8 **)0x0;
    pppuVar4[3] = (undefined8 **)0x0;
    pppuVar4[2] = (undefined8 **)0x0;
    *ppppuVar9 = pppuVar4;
    pppuVar4 = *ppppuVar14;
    FUN_109b5f0b4();
    param_1[7] = pppuVar4;
    if (*ppppuVar9 == (undefined8 ***)0x0) {
      FUN_109b65758(ppppuVar14,ppppuVar9,0);
      puVar6 = (undefined8 *)0x10;
      ___cxa_allocate_exception();
      __ZNSt13runtime_errorC2EPKc();
      goto LAB_109372ebc;
    }
    pppuVar4 = *ppppuVar14;
    FUN_109b62cf4(pppuVar4,PTR__longjmp_11034c548,0xc0);
    iVar2 = (int)pppuVar4;
    _setjmp();
    if (iVar2 == 0) {
      pppuVar4 = *ppppuVar14;
      if (pppuVar4 == (undefined8 ***)0x0) {
LAB_109372b4c:
        pppuVar4 = (undefined8 ***)0x0;
      }
      else {
        pppuVar4[0x1b] = (undefined8 **)FUN_1093730c0;
        pppuVar4[0x1c] = (undefined8 **)0x1093730cc;
        pppuVar4[0x1d] = ppppuVar15;
        pppuVar4 = *ppppuVar14;
        if (pppuVar4 == (undefined8 ***)0x0) goto LAB_109372b4c;
        pppuVar13 = *param_1;
        pppuVar4[0x1f] = (undefined8 **)0x1093730d0;
        pppuVar4[0x20] = pppuVar13;
        if (pppuVar4[0x1e] != (undefined8 **)0x0) {
          pppuVar4[0x1e] = (undefined8 **)0x0;
          FUN_109b62608(pppuVar4,&UNK_10f59faa1);
        }
        pppuVar4[0x51] = (undefined8 **)0x0;
        if (*ppppuVar14 == (undefined8 ***)0x0) goto LAB_109372b4c;
        *(undefined1 *)((long)*ppppuVar14 + 0x265) = 8;
        pppuVar4 = *ppppuVar14;
      }
      FUN_109b647bc(pppuVar4,*ppppuVar9);
      FUN_109b62ed4(*ppppuVar14,*ppppuVar9,&uStack_84,&uStack_88,aiStack_98,&uStack_8c,&iStack_90);
      FUN_1093728a0(uStack_84);
      *(undefined4 *)(param_1 + 0xb) = uStack_84;
      FUN_1093728a0(uStack_88);
      *(uint *)((long)param_1 + 0x5c) = uStack_88;
      pppppuVar5 = pppppuVar3;
      if (aiStack_98[0] == 1) {
        pppuVar4 = *ppppuVar14;
        if ((pppuVar4 != (undefined8 ***)0x0) && (*(byte *)(pppuVar4 + 0x4c) < 8)) {
          *(uint *)((long)pppuVar4 + 300) = *(uint *)((long)pppuVar4 + 300) | 4;
          *(undefined1 *)((long)pppuVar4 + 0x261) = 8;
        }
        func_0x000107c31940(appppuStack_80,"bool");
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pppppuVar3,appppuStack_80);
      }
      else if (aiStack_98[0] < 9) {
        if (aiStack_98[0] != 8) {
          func_0x000109b65a8c(*ppppuVar14);
        }
        func_0x000107c31940(appppuStack_80,&DAT_10f566f6e);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pppppuVar3,appppuStack_80);
      }
      else {
        func_0x000107c31940(appppuStack_80,&DAT_10f567020);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (pppppuVar3,appppuStack_80);
      }
      if (cStack_69 < '\0') {
        pppppuVar5 = (undefined8 *****)appppuStack_80[0];
        __ZdlPv();
      }
      if (uStack_8c == 3) {
        func_0x000109b65a54(*ppppuVar14);
        pppppuVar5 = (undefined8 *****)*ppppuVar14;
        if (((pppppuVar5 != (undefined8 *****)0x0) && (*ppppuVar9 != (undefined8 ***)0x0)) &&
           ((*(byte *)(*ppppuVar9 + 1) >> 4 & 1) != 0)) {
          uStack_8c = uStack_8c | 4;
          func_0x000109b65abc();
        }
      }
      if ((uStack_8c >> 1 & 1) == 0) {
        uVar16 = uStack_88;
        if ((uStack_8c >> 2 & 1) != 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (appppuStack_80,&UNK_10f566ff4,pppppuVar3);
          pppppuVar5 = appppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar5,">",1);
          goto LAB_109372d34;
        }
      }
      else {
        if ((uStack_8c >> 2 & 1) == 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (appppuStack_80,&UNK_10f566f94,pppppuVar3);
          pppppuVar5 = appppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar5,">",1);
        }
        else {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (appppuStack_80,&UNK_10f566fe9,pppppuVar3);
          pppppuVar5 = appppuStack_80;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (pppppuVar5,">",1);
        }
LAB_109372d34:
        ppppuVar9 = *pppppuVar5;
        uStack_68 = SUB87(pppppuVar5[1],0);
        uStack_61 = (undefined1)((ulong)pppppuVar5[1] >> 0x38);
        uStack_61 = (undefined1)*(undefined8 *)((long)pppppuVar5 + 0xf);
        uStack_60 = (undefined7)((ulong)*(undefined8 *)((long)pppppuVar5 + 0xf) >> 8);
        bVar1 = *(byte *)((long)pppppuVar5 + 0x17);
        uVar16 = (uint)bVar1;
        pppppuVar5[1] = (undefined8 ****)0x0;
        pppppuVar5[2] = (undefined8 ****)0x0;
        *pppppuVar5 = (undefined8 ****)0x0;
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          pppppuVar5 = (undefined8 *****)*pppppuVar3;
          __ZdlPv();
        }
        param_1[1] = ppppuVar9;
        param_1[2] = (undefined8 ***)CONCAT17(uStack_61,uStack_68);
        *(ulong *)((long)param_1 + 0x17) = CONCAT71(uStack_60,uStack_61);
        *(byte *)((long)param_1 + 0x1f) = bVar1;
        if (cStack_69 < '\0') {
          pppppuVar5 = (undefined8 *****)appppuStack_80[0];
          __ZdlPv();
        }
      }
      if (iStack_90 == 0) {
        if (((aiStack_98[0] == 0x10) && (pppuVar4 = *ppppuVar14, pppuVar4 != (undefined8 ***)0x0))
           && (*(char *)(pppuVar4 + 0x4c) == '\x10')) {
          *(uint *)((long)pppuVar4 + 300) = *(uint *)((long)pppuVar4 + 300) | 0x10;
        }
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
          return param_1;
        }
        ___stack_chk_fail();
        if (cStack_51 < '\0') {
          __ZdlPv(CONCAT17(uStack_61,uStack_68));
        }
        if (cStack_69 < '\0') {
          __ZdlPv(appppuStack_80[0]);
        }
        pppppuVar12 = pppppuVar5;
        if ((uVar16 & 1) != 0) {
          ___cxa_free_exception(ppppuVar14);
        }
        if (*(char *)((long)param_1 + 0x57) < '\0') {
          __ZdlPv(*ppppuVar15);
        }
        if (*(char *)((long)param_1 + 0x1f) < '\0') {
          __ZdlPv(*pppppuVar3);
        }
        pppppuVar8 = pppppuVar5;
        __Unwind_Resume();
        ppppuVar9 = (undefined8 ****)0x0;
        if (pppppuVar8 != (undefined8 *****)0x0) {
          ppppuVar9 = pppppuVar8[0x1d];
        }
        pcVar18 = FUN_1093730c0;
        pppppuVar8 = pppppuVar12;
        func_0x000107c613d0();
        pppuVar4 = (undefined8 ***)(long)*(char *)((long)ppppuVar9 + 0x17);
        if ((long)pppuVar4 < 0) {
          pppppuVar10 = (undefined8 *****)(((ulong)ppppuVar9[2] & 0x7fffffffffffffff) - 1);
          if (pppppuVar8 <= pppppuVar10) {
            pppuVar4 = (undefined8 ***)((ulong)ppppuVar9[2] >> 0x38);
            ppppuVar14 = (undefined8 ****)*ppppuVar9;
            goto code_r0x000100042fa8;
          }
          pppuVar4 = ppppuVar9[1];
        }
        else {
          ppppuVar14 = ppppuVar9;
          if (pppppuVar8 < (undefined8 *****)0x17) {
code_r0x000100042fa8:
            uVar16 = (uint)pppuVar4;
            if (pppppuVar8 != (undefined8 *****)0x0) {
              func_0x000107c610b8(ppppuVar14,pppppuVar12,pppppuVar8);
              uVar16 = (uint)*(byte *)((long)ppppuVar9 + 0x17);
            }
            if ((uVar16 >> 7 & 1) != 0) {
              ppppuVar9[1] = pppppuVar8;
              *(undefined1 *)((long)ppppuVar14 + (long)pppppuVar8) = 0;
              return ppppuVar9;
            }
            *(byte *)((long)ppppuVar9 + 0x17) = (byte)pppppuVar8 & 0x7f;
            *(undefined1 *)((long)ppppuVar14 + (long)pppppuVar8) = 0;
            return ppppuVar9;
          }
          pppppuVar10 = (undefined8 *****)0x16;
        }
        func_0x000107c60c48(ppppuVar9,pppppuVar10,(long)pppppuVar8 - (long)pppppuVar10,pppuVar4,0,
                            pppuVar4,pppppuVar8,pppppuVar12,pppppuVar5,ppppuVar15,pppppuVar3,param_1
                            ,puVar17,pcVar18);
        return ppppuVar9;
      }
      uVar7 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(appppuStack_80,&UNK_10f566fbe);
      func_0x000107c31940(&uStack_68,&UNK_10f567004);
      FUN_10937153c(uVar7,appppuStack_80,&uStack_68);
      ___cxa_throw(uVar7,&PTR_DAT_110af43f8,FUN_10937184c);
      goto LAB_109372f80;
    }
    FUN_109b65758(ppppuVar14,ppppuVar9,param_1 + 7);
    puVar6 = (undefined8 *)0x10;
    ___cxa_allocate_exception(0x10);
    FUN_1093712f4();
    pcVar18 = FUN_1093717d4;
    ppuVar11 = &PTR_DAT_110af4380;
  }
  ___cxa_throw(puVar6,ppuVar11,pcVar18);
LAB_109372f80:
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x109372f84);
  (*pcVar18)();
}



/* Entry: 1093730c0; end: 1093730db;  */

undefined8 * FUN_1093730c0(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = (undefined8 *)0x0;
  if (param_1 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xe8);
  }
  uVar1 = param_2;
  func_0x000107c613d0();
  uVar5 = (ulong)*(char *)((long)puVar2 + 0x17);
  if ((long)uVar5 < 0) {
    uVar3 = (puVar2[2] & 0x7fffffffffffffff) - 1;
    if (uVar1 <= uVar3) {
      uVar5 = (ulong)puVar2[2] >> 0x38;
      puVar6 = (undefined8 *)*puVar2;
      goto code_r0x000100042fa8;
    }
    uVar5 = puVar2[1];
  }
  else {
    puVar6 = puVar2;
    if (uVar1 < 0x17) {
code_r0x000100042fa8:
      uVar4 = (uint)uVar5;
      if (uVar1 != 0) {
        func_0x000107c610b8(puVar6,param_2,uVar1);
        uVar4 = (uint)*(byte *)((long)puVar2 + 0x17);
      }
      if ((uVar4 >> 7 & 1) == 0) {
        *(byte *)((long)puVar2 + 0x17) = (byte)uVar1 & 0x7f;
        *(undefined1 *)((long)puVar6 + uVar1) = 0;
        return puVar2;
      }
      puVar2[1] = uVar1;
      *(undefined1 *)((long)puVar6 + uVar1) = 0;
      return puVar2;
    }
    uVar3 = 0x16;
  }
  func_0x000107c60c48(puVar2,uVar3,uVar1 - uVar3,uVar5,0,uVar5,uVar1);
  return puVar2;
}



/* Entry: 1093730dc; end: 10937315f;  */

long FUN_1093730dc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  FUN_109b62cf4(uVar2,PTR__longjmp_11034c548,0xc0);
  iVar1 = (int)uVar2;
  _setjmp();
  if (iVar1 == 0) {
    FUN_109b6522c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x38));
  }
  FUN_109b65758((undefined8 *)(param_1 + 0x28),param_1 + 0x30,param_1 + 0x38);
  if (*(char *)(param_1 + 0x57) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x1f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 8));
  }
  return param_1;
}



/* Entry: 109373160; end: 1093731b7;  */

undefined8 * FUN_109373160(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x60;
  __Znwm();
  FUN_109372984();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 1093731b8; end: 109373503;  */

void FUN_1093731b8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,"bool");
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_1093732f8;
LAB_109373288:
    if (bVar5) goto LAB_10937328c;
LAB_109373304:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_1093733c0;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_109373288;
LAB_1093732f8:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109373304;
LAB_10937328c:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_109373410;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_1093733c0:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,"bool");
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_109373410:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109373414);
  (*pcVar4)();
}



/* Entry: 109373504; end: 10937384f;  */

void FUN_109373504(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,&DAT_10f566f6e);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_109373644;
LAB_1093735d4:
    if (bVar5) goto LAB_1093735d8;
LAB_109373650:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_10937370c;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_1093735d4;
LAB_109373644:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109373650;
LAB_1093735d8:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_10937375c;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_10937370c:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,&DAT_10f566f6e);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_10937375c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109373760);
  (*pcVar4)();
}



/* Entry: 109373850; end: 109373b8b;  */

void FUN_109373850(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_1093722b0(&ppuStack_78);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_109373988;
LAB_109373918:
    if (bVar5) goto LAB_10937391c;
LAB_109373994:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_109373a50;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_109373918;
LAB_109373988:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109373994;
LAB_10937391c:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_109373a98;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_109373a50:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_1093722b0(&ppuStack_78);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_109373a98:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109373a9c);
  (*pcVar4)();
}



/* Entry: 109373b8c; end: 109373ec7;  */

void FUN_109373b8c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_10937488c(&ppuStack_78);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_109373cc4;
LAB_109373c54:
    if (bVar5) goto LAB_109373c58;
LAB_109373cd0:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_109373d8c;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_109373c54;
LAB_109373cc4:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109373cd0;
LAB_109373c58:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_109373dd4;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_109373d8c:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_10937488c(&ppuStack_78);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_109373dd4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109373dd8);
  (*pcVar4)();
}



/* Entry: 109373ec8; end: 109374213;  */

void FUN_109373ec8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,&DAT_10f567020);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_109374008;
LAB_109373f98:
    if (bVar5) goto LAB_109373f9c;
LAB_109374014:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_1093740d0;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_109373f98;
LAB_109374008:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109374014;
LAB_109373f9c:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_109374120;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_1093740d0:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  func_0x000107c31940(&ppuStack_78,&DAT_10f567020);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_109374120:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109374124);
  (*pcVar4)();
}



/* Entry: 109374214; end: 10937454f;  */

void FUN_109374214(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_109374954(&ppuStack_78);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_10937434c;
LAB_1093742dc:
    if (bVar5) goto LAB_1093742e0;
LAB_109374358:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_109374414;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_1093742dc;
LAB_10937434c:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109374358;
LAB_1093742e0:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_10937445c;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_109374414:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_109374954(&ppuStack_78);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_10937445c:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109374460);
  (*pcVar4)();
}



/* Entry: 109374550; end: 10937488b;  */

void FUN_109374550(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined8 uVar8;
  undefined1 auStack_90 [24];
  undefined8 **ppuStack_78;
  ulong uStack_70;
  byte bStack_61;
  undefined8 **ppuStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x1f) < '\0') {
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_109374a1c(&ppuStack_78);
  uVar3 = (uint)(char)uStack_50._7_1_;
  uVar1 = uStack_58;
  if (-1 < (int)uVar3) {
    uVar1 = (ulong)uStack_50._7_1_;
  }
  if (-1 < (char)bStack_61) {
    uStack_70 = (ulong)bStack_61;
  }
  if (uVar1 == uStack_70) {
    pppuVar7 = (undefined8 ***)ppuStack_60;
    if (-1 < (int)uVar3) {
      pppuVar7 = &ppuStack_60;
    }
    pppuVar2 = (undefined8 ***)ppuStack_78;
    if (-1 < (char)bStack_61) {
      pppuVar2 = &ppuStack_78;
    }
    _memcmp(pppuVar7,pppuVar2);
    bVar5 = (int)pppuVar7 == 0;
  }
  else {
    bVar5 = false;
  }
  if ((char)bStack_61 < '\0') {
    __ZdlPv(ppuStack_78);
    if (uStack_50 < 0) goto LAB_109374688;
LAB_109374618:
    if (bVar5) goto LAB_10937461c;
LAB_109374694:
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    if (-1 < *(char *)(param_1 + 0x1f)) goto LAB_109374750;
    func_0x000107c3192c(&ppuStack_60,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  else {
    if ((uVar3 >> 7 & 1) == 0) goto LAB_109374618;
LAB_109374688:
    __ZdlPv(ppuStack_60);
    if (!bVar5) goto LAB_109374694;
LAB_10937461c:
    if ((ulong)(long)*(int *)(param_1 + 0x5c) < *(ulong *)(param_1 + 0x20)) {
      uVar8 = 0x10;
      ___cxa_allocate_exception(0x10);
      func_0x000107c31940(&ppuStack_60,&UNK_10f56702f);
      func_0x000107c31940(auStack_90,&UNK_10f567033);
      FUN_10937167c(uVar8,&ppuStack_60,auStack_90);
      ___cxa_throw(uVar8,&PTR_DAT_110af4410,FUN_109371864);
      goto LAB_109374798;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    FUN_109b62cf4(uVar8,PTR__longjmp_11034c548,0xc0);
    iVar6 = (int)uVar8;
    _setjmp();
    if (iVar6 == 0) {
      if (*(long *)(param_1 + 0x28) != 0) {
        FUN_109b64d48(*(long *)(param_1 + 0x28),param_2,0);
      }
      return;
    }
    uVar8 = 0x10;
    ___cxa_allocate_exception(0x10);
    FUN_10937137c();
    ___cxa_throw(uVar8,&PTR_DAT_110af4380,FUN_1093717d4);
LAB_109374750:
    uStack_58 = *(ulong *)(param_1 + 0x10);
    ppuStack_60 = *(undefined8 ***)(param_1 + 8);
    uStack_50 = *(long *)(param_1 + 0x18);
  }
  FUN_109374a1c(&ppuStack_78);
  FUN_1093713f8(uVar8,&ppuStack_60,&ppuStack_78);
  ___cxa_throw(uVar8,&PTR_DAT_110af43e0,FUN_109371834);
LAB_109374798:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10937479c);
  (*pcVar4)();
}



/* Entry: 10937488c; end: 109374953;  */

void FUN_10937488c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_50,&DAT_10f566f6e);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566fe9,auStack_50);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar1,">",1);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 109374954; end: 109374a1b;  */

void FUN_109374954(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_50,&DAT_10f567020);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566f94,auStack_50);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar1,">",1);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 109374a1c; end: 109374ae3;  */

void FUN_109374a1c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  func_0x000107c31940(auStack_50,&DAT_10f567020);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f566fe9,auStack_50);
  puVar1 = auStack_38;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar1,">",1);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  if (cStack_39 < '\0') {
    __ZdlPv(auStack_50[0]);
  }
  return;
}



/* Entry: 109374ae4; end: 109374c4f;  */

void FUN_109374ae4(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_48 [24];
  
  iVar4 = (int)((double)*(int *)(param_1 + 0x14) / 2.0);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  if ((int)((double)*(int *)(param_1 + 0x10) / 2.0) == (int)uVar7 &&
      iVar4 == (int)((ulong)uVar7 >> 0x20)) {
    if (0 < iVar4) {
      iVar5 = 0;
      iVar4 = 0;
      iVar6 = 1;
      do {
        if (0 < (int)uVar7) {
          lVar8 = 0;
          lVar9 = 0;
          do {
            pbVar1 = (byte *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x18) * (long)iVar5
                             + lVar8);
            pbVar2 = (byte *)(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x18) * (long)iVar6
                             + lVar8);
            *(char *)(*(long *)(param_2 + 8) + (long)*(int *)(param_2 + 0x18) * (long)iVar4 + lVar9)
                 = (char)((uint)*pbVar2 + (uint)*pbVar1 + (uint)pbVar1[1] + (uint)pbVar2[1] >> 2);
            lVar9 = lVar9 + 1;
            uVar7 = *(undefined8 *)(param_2 + 0x10);
            lVar8 = lVar8 + 2;
          } while (lVar9 < (int)uVar7);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 2;
        iVar5 = iVar5 + 2;
      } while (iVar4 < (int)((ulong)uVar7 >> 0x20));
    }
    return;
  }
  uVar7 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,&UNK_10f56704b);
  FUN_109374c54(uVar7,auStack_48);
  ___cxa_throw(uVar7,&PTR_DAT_110af4468,FUN_109374c50);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x109374c18);
  (*pcVar3)();
}



/* Entry: 109374c50; end: 109374c53;  */

void FUN_109374c50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109374c54; end: 109374cdb;  */

undefined8 * FUN_109374c54(undefined8 *param_1)

{
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f567056);
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (param_1,auStack_38);
  *param_1 = &PTR_FUN_110af44b8;
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  *param_1 = &PTR_FUN_110af4490;
  return param_1;
}



/* Entry: 109374cdc; end: 109374cef;  */

void FUN_109374cdc(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109374cf0; end: 109374cf3;  */

void FUN_109374cf0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 109374cf4; end: 109374d5b;  */

void FUN_109374cf4(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109374d5c; end: 109374d5f;  */

void FUN_109374d5c(void)

{
  return;
}



/* Entry: 109374d60; end: 109374f27;  */

undefined * FUN_109374d60(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_58 [24];
  
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f567073,&UNK_10f5670e5,0x15,&UNK_10f56711a,in_x6,in_x7,param_1);
  }
  _objc_retain(param_1);
  puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  if (param_1 == 0) {
    _objc_alloc();
    func_0x00010bfefb80();
    if (puVar3 != (undefined *)0x0) goto LAB_109374e94;
    puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
    _objc_alloc();
    func_0x00010bfefb80();
  }
  else {
    _objc_alloc();
    func_0x00010bdc0d20(param_1);
    lVar2 = param_1;
    func_0x00010c22c520(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfefba0();
    _objc_release(lVar2);
  }
  if (puVar3 == (undefined *)0x0) {
    if ((bRam000000011330a9e8 & 1) != 0) {
      func_0x00010ae06f08(0,1,&UNK_10f567073,&UNK_10f5670e5,0x25,&UNK_10f56713d,in_x6,in_x7,param_1)
      ;
    }
    func_0x00010b0ae4b8(auStack_58,&UNK_10f567179,0x4a);
    func_0x000105687ee0(auStack_58);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109374e68);
    (*pcVar1)();
  }
LAB_109374e94:
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f567073,&UNK_10f5670e5,0x29,&UNK_10f5671c4,in_x6,in_x7,puVar3);
  }
  _objc_release(param_1);
  return puVar3;
}



/* Entry: 109374f28; end: 109374fdf;  */

void FUN_109374f28(long param_1)

{
  long lVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  lVar1 = param_1;
  FUN_109374fe0();
  if (lVar1 == param_1) {
    if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f567073,&UNK_10f5671e8,0x2f,&UNK_10f56720f);
    }
    FUN_109375044(0);
  }
  if ((bRam000000011330a9e8 >> 2 & 1) != 0) {
    func_0x00010ae06f08(1,4,&UNK_10f567073,&UNK_10f5671e8,0x32,&UNK_10f567244,in_x6,in_x7,param_1);
  }
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CFRelease_11034a768)(param_1);
    return;
  }
  return;
}



/* Entry: 109374fe0; end: 109375043;  */

undefined * FUN_109374fe0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___EAGLContext_1126d34e8;
  func_0x00010bf5e500();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    _objc_retain(puVar1);
    _CFRelease(puVar1);
  }
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 109375044; end: 1093750d3;  */

void FUN_109375044(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_38 [24];
  
  lVar2 = param_1;
  FUN_109374fe0();
  if ((lVar2 != param_1) &&
     (puVar3 = PTR__OBJC_CLASS___EAGLContext_1126d34e8, func_0x00010c187140(),
     ((ulong)puVar3 & 1) == 0)) {
    func_0x00010b0ae4b8(auStack_38,&UNK_10f567268,0x35);
    func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1093750b8);
    (*pcVar1)();
  }
  return;
}



/* Entry: 1093750d4; end: 109375133;  */

undefined8 * FUN_1093750d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x138;
  __Znwm();
  FUN_109375f7c();
  *param_1 = uVar1;
  return param_1;
}



/* Entry: 109375134; end: 109375167;  */

long * FUN_109375134(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010937996c(param_1);
  }
  return param_1;
}



/* Entry: 109375168; end: 109375f7b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109375168(undefined4 *param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  float ****ppppfVar2;
  float **ppfVar3;
  float **ppfVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  float fVar8;
  code *pcVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  float ****ppppfVar16;
  float ***pppfVar17;
  float ****ppppfVar18;
  float ****ppppfVar19;
  float ***pppfVar20;
  float ****ppppfVar21;
  long lVar22;
  ulong uVar23;
  float **ppfVar24;
  int *piVar25;
  float **ppfVar26;
  float ****ppppfVar27;
  float ****ppppfVar28;
  float ****ppppfVar29;
  float ****ppppfVar30;
  float ****ppppfVar31;
  long lVar32;
  float **ppfVar33;
  float fVar34;
  float ***pppfVar35;
  float ***pppfStack_218;
  float ***pppfStack_210;
  undefined7 uStack_208;
  char cStack_201;
  float ****ppppfStack_200;
  float ****ppppfStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [40];
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 uStack_138;
  undefined8 uStack_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  int iStack_118;
  int iStack_114;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  int *piStack_e0;
  undefined1 *puStack_d8;
  undefined1 auStack_d0 [16];
  float ****ppppfStack_c0;
  float ***pppfStack_b8;
  long lStack_b0;
  float ****ppppfStack_a8;
  float ***pppfStack_a0;
  long lStack_98;
  undefined1 uStack_89;
  float ****ppppfStack_88;
  float ****ppppfStack_80;
  float ****ppppfStack_78;
  float ****appppfStack_70 [2];
  
  lVar32 = *param_2;
  __ZNSt3__19to_stringEj(&pppfStack_218,param_5);
  if ((*(byte *)(lVar32 + 0x80) & 1) == 0) {
    uVar13 = 2;
  }
  else {
    if (*(long *)(param_3 + 0x10) != 0) {
      uVar14 = (ulong)*(uint *)(param_3 + 4);
      if ((int)*(uint *)(param_3 + 4) < 3) {
        lVar22 = (long)*(int *)(param_3 + 0xc) * (long)*(int *)(param_3 + 8);
      }
      else {
        lVar22 = 1;
        piVar25 = *(int **)(param_3 + 0x40);
        do {
          lVar22 = lVar22 * *piVar25;
          uVar14 = uVar14 - 1;
          piVar25 = piVar25 + 1;
        } while (uVar14 != 0);
      }
      if ((lVar22 != 0) && (*(int *)(param_4 + 0xc) * *(int *)(param_4 + 8) != 0)) {
        ppppfVar29 = (float ****)&uStack_120;
        FUN_10937d344(&uStack_120,param_3,param_4);
        if (lStack_110 == 0) {
LAB_1093754ac:
          *param_1 = 1;
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 2) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 6) = 0;
          param_1[10] = 0x3f800000;
        }
        else {
          uVar14 = (ulong)uStack_120._4_4_;
          if ((int)uStack_120._4_4_ < 3) {
            lVar22 = (long)iStack_114 * (long)iStack_118;
          }
          else {
            lVar22 = 1;
            piVar25 = piStack_e0;
            do {
              lVar22 = lVar22 * *piVar25;
              uVar14 = uVar14 - 1;
              piVar25 = piVar25 + 1;
            } while (uVar14 != 0);
          }
          if (lVar22 == 0) goto LAB_1093754ac;
          uStack_188 = *(undefined4 *)(lVar32 + 0xa0);
          uStack_184 = uStack_188;
          FUN_10937d3d0(&uStack_120,&uStack_188);
          iStack_128 = ((uint)uStack_120 >> 3 & 0x1ff) + 1;
          uStack_130 = NEON_rev64(CONCAT44(iStack_114,iStack_118),4);
          uStack_124 = 1;
          uStack_138 = 0x100000001;
          func_0x000109d0f600(&uStack_188,&uStack_130,&uStack_138,lStack_110);
          func_0x000109cdb2c4(auStack_1b0,lVar32,&uStack_188,1);
          ppppfStack_200 = *(float *****)(lVar32 + 0x120);
          puVar11 = auStack_1b0;
          FUN_10937a098(puVar11,ppppfStack_200,&UNK_10dd5b8f9,&ppppfStack_200,&ppppfStack_a8);
          if (*(int *)(puVar11 + 0x44) != 1) {
            ppppfVar29 = *(float *****)(lVar32 + 0x128);
            for (ppppfVar2 = *(float *****)(lVar32 + 0x120); ppppfVar2 != ppppfVar29;
                ppppfVar2 = ppppfVar2 + 3) {
              puVar11 = auStack_1b0;
              ppppfStack_a8 = ppppfVar2;
              FUN_10937a098(puVar11,ppppfVar2,&UNK_10dd5b8f9,&ppppfStack_a8,&ppppfStack_c0);
              func_0x000109d0e828(&ppppfStack_200,puVar11 + 0x28,&uStack_138,0);
              puVar11 = auStack_1b0;
              ppppfStack_a8 = ppppfVar2;
              FUN_10937a098(puVar11,ppppfVar2,&UNK_10dd5b8f9,&ppppfStack_a8,&ppppfStack_c0);
              ppppfVar18 = ppppfStack_1f8;
              *(undefined8 *)(puVar11 + 0x38) = uStack_1f0;
              *(float *****)(puVar11 + 0x30) = ppppfVar18;
              *(undefined8 *)(puVar11 + 0x40) = uStack_1e8;
              func_0x0001093783c0(puVar11 + 0x48,auStack_1e0);
              func_0x00010937843c(puVar11 + 0x58,auStack_1d0);
              func_0x000105675c90(&ppppfStack_200);
            }
          }
          *param_1 = 0;
          puVar15 = (undefined8 *)(param_1 + 2);
          *(undefined8 *)(param_1 + 4) = 0;
          *puVar15 = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 6) = 0;
          param_1[10] = 0x3f800000;
          ppppfVar2 = (float ****)(lVar32 + 0xd0);
          ppppfVar18 = ppppfVar2;
          func_0x000107c31944(ppppfVar2,&pppfStack_218);
          ppppfVar27 = *(float *****)(lVar32 + 0xd8);
          if (ppppfVar27 != (float ****)0x0) {
            uVar14 = (long)ppppfVar27 - 1;
            if (((ulong)ppppfVar27 & uVar14) == 0) {
              ppppfVar29 = (float ****)(uVar14 & (ulong)ppppfVar18);
            }
            else {
              ppppfVar29 = ppppfVar18;
              if (ppppfVar27 <= ppppfVar18) {
                uVar23 = 0;
                if (ppppfVar27 != (float ****)0x0) {
                  uVar23 = (ulong)ppppfVar18 / (ulong)ppppfVar27;
                }
                ppppfVar29 = (float ****)((long)ppppfVar18 - uVar23 * (long)ppppfVar27);
              }
            }
            if ((*ppppfVar2)[(long)ppppfVar29] != (float **)0x0) {
              for (ppppfVar31 = (float ****)*(*ppppfVar2)[(long)ppppfVar29];
                  ppppfVar31 != (float ****)0x0; ppppfVar31 = (float ****)*ppppfVar31) {
                ppppfVar16 = (float ****)ppppfVar31[1];
                if (ppppfVar16 == ppppfVar18) {
                  ppppfVar16 = ppppfVar2;
                  func_0x000104c4fbc4(ppppfVar2,ppppfVar31 + 2,&pppfStack_218);
                  if (((ulong)ppppfVar16 & 1) != 0) goto LAB_109375698;
                }
                else {
                  if (((ulong)ppppfVar27 & uVar14) == 0) {
                    ppppfVar16 = (float ****)((ulong)ppppfVar16 & uVar14);
                  }
                  else if (ppppfVar27 <= ppppfVar16) {
                    uVar23 = 0;
                    if (ppppfVar27 != (float ****)0x0) {
                      uVar23 = (ulong)ppppfVar16 / (ulong)ppppfVar27;
                    }
                    ppppfVar16 = (float ****)((long)ppppfVar16 - uVar23 * (long)ppppfVar27);
                  }
                  if (ppppfVar16 != ppppfVar29) break;
                }
              }
            }
          }
          ppppfVar31 = (float ****)0x50;
          __Znwm();
          uStack_1f0 = 0;
          *ppppfVar31 = (float ***)0x0;
          ppppfVar31[1] = (float ***)ppppfVar18;
          ppppfStack_200 = ppppfVar31;
          ppppfStack_1f8 = ppppfVar2;
          if (cStack_201 < '\0') {
            func_0x000107c3192c(ppppfVar31 + 2,pppfStack_218,pppfStack_210);
          }
          else {
            ppppfVar31[3] = pppfStack_210;
            ppppfVar31[2] = pppfStack_218;
            ppppfVar31[4] = (float ***)CONCAT17(cStack_201,uStack_208);
          }
          ppppfVar31[8] = (float ***)0x0;
          ppppfVar31[7] = (float ***)0x0;
          ppppfVar31[6] = (float ***)0x0;
          ppppfVar31[5] = (float ***)0x0;
          *(float *)(ppppfVar31 + 9) = 1.0;
          uStack_1f0 = CONCAT71(uStack_1f0._1_7_,1);
          fVar34 = (float)(*(long *)(lVar32 + 0xe8) + 1);
          if ((ppppfVar27 == (float ****)0x0) ||
             (*(float *)(lVar32 + 0xf0) * (float)ppppfVar27 < fVar34)) {
            uVar14 = 1;
            if ((float ****)0x2 < ppppfVar27) {
              uVar14 = (ulong)(((ulong)ppppfVar27 & (long)ppppfVar27 - 1U) != 0);
            }
            uVar14 = uVar14 | (long)ppppfVar27 << 1;
            uVar23 = (ulong)(fVar34 / *(float *)(lVar32 + 0xf0));
            if (uVar14 <= uVar23) {
              uVar14 = uVar23;
            }
            FUN_10937a630(ppppfVar2,uVar14);
            ppppfVar27 = *(float *****)(lVar32 + 0xd8);
            if (((ulong)ppppfVar27 & (long)ppppfVar27 - 1U) == 0) {
              ppppfVar29 = (float ****)((long)ppppfVar27 - 1U & (ulong)ppppfVar18);
            }
            else {
              ppppfVar29 = ppppfVar18;
              if (ppppfVar27 <= ppppfVar18) {
                uVar14 = 0;
                if (ppppfVar27 != (float ****)0x0) {
                  uVar14 = (ulong)ppppfVar18 / (ulong)ppppfVar27;
                }
                ppppfVar29 = (float ****)((long)ppppfVar18 - uVar14 * (long)ppppfVar27);
              }
            }
          }
          pppfVar17 = *ppppfVar2;
          ppfVar24 = pppfVar17[(long)ppppfVar29];
          if (ppfVar24 == (float **)0x0) {
            ppfVar24 = (float **)(lVar32 + 0xe0);
            *ppppfVar31 = (float ***)*ppfVar24;
            *ppfVar24 = (float *)ppppfVar31;
            pppfVar17[(long)ppppfVar29] = ppfVar24;
            if (*ppppfVar31 != (float ***)0x0) {
              ppppfVar18 = (float ****)(*ppppfVar31)[1];
              if (((ulong)ppppfVar27 & (long)ppppfVar27 - 1U) == 0) {
                ppppfVar18 = (float ****)((ulong)ppppfVar18 & (long)ppppfVar27 - 1U);
              }
              else if (ppppfVar27 <= ppppfVar18) {
                uVar14 = 0;
                if (ppppfVar27 != (float ****)0x0) {
                  uVar14 = (ulong)ppppfVar18 / (ulong)ppppfVar27;
                }
                ppppfVar18 = (float ****)((long)ppppfVar18 - uVar14 * (long)ppppfVar27);
              }
              (*ppppfVar2)[(long)ppppfVar18] = (float **)ppppfVar31;
            }
          }
          else {
            *ppppfVar31 = (float ***)*ppfVar24;
            *ppfVar24 = (float *)ppppfVar31;
          }
          *(long *)(lVar32 + 0xe8) = *(long *)(lVar32 + 0xe8) + 1;
LAB_109375698:
          pppfVar17 = ppppfVar31[7];
          if (pppfVar17 != (float ***)0x0) {
            ppppfVar2 = (float ****)(lVar32 + 0xf8);
            ppfVar24 = (float **)(lVar32 + 0x108);
            do {
              pppfStack_a0 = (float ***)0x0;
              lStack_98 = 0;
              ppfVar33 = pppfVar17[5];
              ppfVar3 = pppfVar17[6];
              ppppfStack_a8 = &pppfStack_a0;
              if (ppfVar33 != ppfVar3) {
                do {
                  puVar11 = auStack_1b0;
                  FUN_10937a848(puVar11,ppfVar33);
                  if (puVar11 == (undefined1 *)0x0) {
                    FUN_109262df8(&UNK_10f639994);
                    /* WARNING: Does not return */
                    pcVar9 = (code *)SoftwareBreakpoint(1,0x109375e4c);
                    (*pcVar9)();
                  }
                  if ((puVar11[0x70] & 1) == 0) {
                    uVar14 = (ulong)(uint)(*(int *)(puVar11 + 0x38) * *(int *)(puVar11 + 0x3c) *
                                           *(int *)(puVar11 + 0x34) * *(int *)(puVar11 + 0x30));
                  }
                  else {
                    uVar14 = 1;
                    for (piVar25 = *(int **)(puVar11 + 0x58); piVar25 != *(int **)(puVar11 + 0x60);
                        piVar25 = piVar25 + 1) {
                      uVar14 = (ulong)(uint)(*piVar25 * (int)uVar14);
                    }
                  }
                  ppppfStack_200 = (float ****)0x0;
                  ppppfStack_1f8 = (float ****)0x0;
                  uStack_1f0 = 0;
                  FUN_1092cc0dc(&ppppfStack_200,*(long *)(puVar11 + 0x48),
                                *(long *)(puVar11 + 0x48) + uVar14 * 4,uVar14);
                  ppppfVar18 = ppppfStack_200;
                  if (ppppfStack_200 == ppppfStack_1f8 ||
                      (float ****)((long)ppppfStack_200 + 4) == ppppfStack_1f8) {
                    ppppfVar16 = ppppfStack_200;
                    if (ppppfStack_200 != (float ****)0x0) goto LAB_1093757a4;
                  }
                  else {
                    fVar34 = *(float *)ppppfStack_200;
                    ppppfVar27 = (float ****)((long)ppppfStack_200 + 4);
                    ppppfVar31 = ppppfStack_200;
                    do {
                      ppppfVar30 = (float ****)((long)ppppfVar27 + 4);
                      ppppfVar16 = ppppfVar27;
                      fVar8 = *(float *)ppppfVar27;
                      if (*(float *)ppppfVar27 <= fVar34) {
                        ppppfVar16 = ppppfVar31;
                        fVar8 = fVar34;
                      }
                      fVar34 = fVar8;
                      ppppfVar27 = ppppfVar30;
                      ppppfVar31 = ppppfVar16;
                    } while (ppppfVar30 != ppppfStack_1f8);
LAB_1093757a4:
                    ppppfStack_1f8 = ppppfStack_200;
                    __ZdlPv(ppppfStack_200);
                  }
                  ppppfVar27 = ppppfVar2;
                  func_0x000107c31944(ppppfVar2,&pppfStack_218);
                  ppppfVar31 = *(float *****)(lVar32 + 0x100);
                  if (ppppfVar31 != (float ****)0x0) {
                    uVar14 = (long)ppppfVar31 - 1;
                    if (((ulong)ppppfVar31 & uVar14) == 0) {
                      ppppfVar29 = (float ****)(uVar14 & (ulong)ppppfVar27);
                    }
                    else {
                      ppppfVar29 = ppppfVar27;
                      if (ppppfVar31 <= ppppfVar27) {
                        uVar23 = 0;
                        if (ppppfVar31 != (float ****)0x0) {
                          uVar23 = (ulong)ppppfVar27 / (ulong)ppppfVar31;
                        }
                        ppppfVar29 = (float ****)((long)ppppfVar27 - uVar23 * (long)ppppfVar31);
                      }
                    }
                    if ((*ppppfVar2)[(long)ppppfVar29] != (float **)0x0) {
                      for (ppppfVar30 = (float ****)*(*ppppfVar2)[(long)ppppfVar29];
                          ppppfVar30 != (float ****)0x0; ppppfVar30 = (float ****)*ppppfVar30) {
                        ppppfVar19 = (float ****)ppppfVar30[1];
                        if (ppppfVar19 == ppppfVar27) {
                          ppppfVar19 = ppppfVar2;
                          func_0x000104c4fbc4(ppppfVar2,ppppfVar30 + 2,&pppfStack_218);
                          if (((ulong)ppppfVar19 & 1) != 0) goto LAB_1093759d8;
                        }
                        else {
                          if (((ulong)ppppfVar31 & uVar14) == 0) {
                            ppppfVar19 = (float ****)((ulong)ppppfVar19 & uVar14);
                          }
                          else if (ppppfVar31 <= ppppfVar19) {
                            uVar23 = 0;
                            if (ppppfVar31 != (float ****)0x0) {
                              uVar23 = (ulong)ppppfVar19 / (ulong)ppppfVar31;
                            }
                            ppppfVar19 = (float ****)((long)ppppfVar19 - uVar23 * (long)ppppfVar31);
                          }
                          if (ppppfVar19 != ppppfVar29) break;
                        }
                      }
                    }
                  }
                  ppppfVar30 = (float ****)0x50;
                  __Znwm();
                  uStack_1f0 = 0;
                  *ppppfVar30 = (float ***)0x0;
                  ppppfVar30[1] = (float ***)ppppfVar27;
                  ppppfStack_200 = ppppfVar30;
                  ppppfStack_1f8 = ppppfVar2;
                  if (cStack_201 < '\0') {
                    func_0x000107c3192c(ppppfVar30 + 2,pppfStack_218,pppfStack_210);
                  }
                  else {
                    ppppfVar30[3] = pppfStack_210;
                    ppppfVar30[2] = pppfStack_218;
                    ppppfVar30[4] = (float ***)CONCAT17(cStack_201,uStack_208);
                  }
                  ppppfVar30[8] = (float ***)0x0;
                  ppppfVar30[7] = (float ***)0x0;
                  ppppfVar30[6] = (float ***)0x0;
                  ppppfVar30[5] = (float ***)0x0;
                  *(float *)(ppppfVar30 + 9) = 1.0;
                  uStack_1f0 = CONCAT71(uStack_1f0._1_7_,1);
                  fVar34 = (float)(*(long *)(lVar32 + 0x110) + 1);
                  if ((ppppfVar31 == (float ****)0x0) ||
                     (*(float *)(lVar32 + 0x118) * (float)ppppfVar31 < fVar34)) {
                    uVar14 = 1;
                    if ((float ****)0x2 < ppppfVar31) {
                      uVar14 = (ulong)(((ulong)ppppfVar31 & (long)ppppfVar31 - 1U) != 0);
                    }
                    uVar14 = uVar14 | (long)ppppfVar31 << 1;
                    uVar23 = (ulong)(fVar34 / *(float *)(lVar32 + 0x118));
                    if (uVar14 <= uVar23) {
                      uVar14 = uVar23;
                    }
                    FUN_10937a92c(ppppfVar2,uVar14);
                    ppppfVar31 = *(float *****)(lVar32 + 0x100);
                    if (((ulong)ppppfVar31 & (long)ppppfVar31 - 1U) == 0) {
                      ppppfVar29 = (float ****)((long)ppppfVar31 - 1U & (ulong)ppppfVar27);
                    }
                    else {
                      ppppfVar29 = ppppfVar27;
                      if (ppppfVar31 <= ppppfVar27) {
                        uVar14 = 0;
                        if (ppppfVar31 != (float ****)0x0) {
                          uVar14 = (ulong)ppppfVar27 / (ulong)ppppfVar31;
                        }
                        ppppfVar29 = (float ****)((long)ppppfVar27 - uVar14 * (long)ppppfVar31);
                      }
                    }
                  }
                  pppfVar20 = *ppppfVar2;
                  ppfVar26 = pppfVar20[(long)ppppfVar29];
                  if (ppfVar26 == (float **)0x0) {
                    *ppppfVar30 = (float ***)*ppfVar24;
                    *ppfVar24 = (float *)ppppfVar30;
                    pppfVar20[(long)ppppfVar29] = ppfVar24;
                    if (*ppppfVar30 != (float ***)0x0) {
                      ppppfVar27 = (float ****)(*ppppfVar30)[1];
                      if (((ulong)ppppfVar31 & (long)ppppfVar31 - 1U) == 0) {
                        ppppfVar27 = (float ****)((ulong)ppppfVar27 & (long)ppppfVar31 - 1U);
                      }
                      else if (ppppfVar31 <= ppppfVar27) {
                        uVar14 = 0;
                        if (ppppfVar31 != (float ****)0x0) {
                          uVar14 = (ulong)ppppfVar27 / (ulong)ppppfVar31;
                        }
                        ppppfVar27 = (float ****)((long)ppppfVar27 - uVar14 * (long)ppppfVar31);
                      }
                      (*ppppfVar2)[(long)ppppfVar27] = (float **)ppppfVar30;
                    }
                  }
                  else {
                    *ppppfVar30 = (float ***)*ppfVar26;
                    *ppfVar26 = (float *)ppppfVar30;
                  }
                  *(long *)(lVar32 + 0x110) = *(long *)(lVar32 + 0x110) + 1;
LAB_1093759d8:
                  ppppfVar27 = ppppfVar30 + 5;
                  ppppfVar31 = ppppfVar27;
                  func_0x000107c31944(ppppfVar27,ppfVar33);
                  ppppfVar19 = (float ****)ppppfVar30[6];
                  if (ppppfVar19 != (float ****)0x0) {
                    uVar14 = (long)ppppfVar19 - 1;
                    if (((ulong)ppppfVar19 & uVar14) == 0) {
                      ppppfVar29 = (float ****)(uVar14 & (ulong)ppppfVar31);
                    }
                    else {
                      ppppfVar29 = ppppfVar31;
                      if (ppppfVar19 <= ppppfVar31) {
                        uVar23 = 0;
                        if (ppppfVar19 != (float ****)0x0) {
                          uVar23 = (ulong)ppppfVar31 / (ulong)ppppfVar19;
                        }
                        ppppfVar29 = (float ****)((long)ppppfVar31 - uVar23 * (long)ppppfVar19);
                      }
                    }
                    if ((*ppppfVar27)[(long)ppppfVar29] != (float **)0x0) {
                      for (ppppfVar28 = (float ****)*(*ppppfVar27)[(long)ppppfVar29];
                          ppppfVar28 != (float ****)0x0; ppppfVar28 = (float ****)*ppppfVar28) {
                        ppppfVar21 = (float ****)ppppfVar28[1];
                        if (ppppfVar21 == ppppfVar31) {
                          ppppfVar21 = ppppfVar27;
                          func_0x000104c4fbc4(ppppfVar27,ppppfVar28 + 2,ppfVar33);
                          if (((ulong)ppppfVar21 & 1) != 0) goto LAB_109375be0;
                        }
                        else {
                          if (((ulong)ppppfVar19 & uVar14) == 0) {
                            ppppfVar21 = (float ****)((ulong)ppppfVar21 & uVar14);
                          }
                          else if (ppppfVar19 <= ppppfVar21) {
                            uVar23 = 0;
                            if (ppppfVar19 != (float ****)0x0) {
                              uVar23 = (ulong)ppppfVar21 / (ulong)ppppfVar19;
                            }
                            ppppfVar21 = (float ****)((long)ppppfVar21 - uVar23 * (long)ppppfVar19);
                          }
                          if (ppppfVar21 != ppppfVar29) break;
                        }
                      }
                    }
                  }
                  ppppfVar28 = (float ****)0x40;
                  __Znwm();
                  uStack_1f0 = 0;
                  *ppppfVar28 = (float ***)0x0;
                  ppppfVar28[1] = (float ***)ppppfVar31;
                  ppppfStack_200 = ppppfVar28;
                  ppppfStack_1f8 = ppppfVar27;
                  if (*(char *)((long)ppfVar33 + 0x17) < '\0') {
                    func_0x000107c3192c(ppppfVar28 + 2,*ppfVar33,ppfVar33[1]);
                  }
                  else {
                    pppfVar35 = (float ***)ppfVar33[1];
                    pppfVar20 = (float ***)*ppfVar33;
                    ppppfVar28[4] = (float ***)ppfVar33[2];
                    ppppfVar28[3] = pppfVar35;
                    ppppfVar28[2] = pppfVar20;
                  }
                  ppppfVar28[5] = (float ***)0x0;
                  ppppfVar28[6] = (float ***)0x0;
                  ppppfVar28[7] = (float ***)0x0;
                  uStack_1f0 = CONCAT71(uStack_1f0._1_7_,1);
                  if ((ppppfVar19 == (float ****)0x0) ||
                     (*(float *)(ppppfVar30 + 9) * (float)ppppfVar19 <
                      (float)((long)ppppfVar30[8] + 1))) {
                    uVar14 = 1;
                    if ((float ****)0x2 < ppppfVar19) {
                      uVar14 = (ulong)(((ulong)ppppfVar19 & (long)ppppfVar19 - 1U) != 0);
                    }
                    uVar14 = uVar14 | (long)ppppfVar19 << 1;
                    uVar23 = (ulong)((float)((long)ppppfVar30[8] + 1) / *(float *)(ppppfVar30 + 9));
                    if (uVar14 <= uVar23) {
                      uVar14 = uVar23;
                    }
                    FUN_10937ab44(ppppfVar27,uVar14);
                    ppppfVar19 = (float ****)ppppfVar30[6];
                    if (((ulong)ppppfVar19 & (long)ppppfVar19 - 1U) == 0) {
                      ppppfVar29 = (float ****)((long)ppppfVar19 - 1U & (ulong)ppppfVar31);
                    }
                    else {
                      ppppfVar29 = ppppfVar31;
                      if (ppppfVar19 <= ppppfVar31) {
                        uVar14 = 0;
                        if (ppppfVar19 != (float ****)0x0) {
                          uVar14 = (ulong)ppppfVar31 / (ulong)ppppfVar19;
                        }
                        ppppfVar29 = (float ****)((long)ppppfVar31 - uVar14 * (long)ppppfVar19);
                      }
                    }
                  }
                  pppfVar20 = *ppppfVar27;
                  ppfVar26 = pppfVar20[(long)ppppfVar29];
                  if (ppfVar26 == (float **)0x0) {
                    ppppfVar31 = ppppfVar30 + 7;
                    *ppppfVar28 = *ppppfVar31;
                    *ppppfVar31 = (float ***)ppppfVar28;
                    pppfVar20[(long)ppppfVar29] = (float **)ppppfVar31;
                    if (*ppppfVar28 != (float ***)0x0) {
                      ppppfVar31 = (float ****)(*ppppfVar28)[1];
                      if (((ulong)ppppfVar19 & (long)ppppfVar19 - 1U) == 0) {
                        ppppfVar31 = (float ****)((ulong)ppppfVar31 & (long)ppppfVar19 - 1U);
                      }
                      else if (ppppfVar19 <= ppppfVar31) {
                        uVar14 = 0;
                        if (ppppfVar19 != (float ****)0x0) {
                          uVar14 = (ulong)ppppfVar31 / (ulong)ppppfVar19;
                        }
                        ppppfVar31 = (float ****)((long)ppppfVar31 - uVar14 * (long)ppppfVar19);
                      }
                      (*ppppfVar27)[(long)ppppfVar31] = (float **)ppppfVar28;
                    }
                  }
                  else {
                    *ppppfVar28 = (float ***)*ppfVar26;
                    *ppfVar26 = (float *)ppppfVar28;
                  }
                  ppppfVar30[8] = (float ***)((long)ppppfVar30[8] + 1);
LAB_109375be0:
                  ppfVar26 = ppppfVar28[5]
                             [(long)(int)((ulong)((long)ppppfVar16 - (long)ppppfVar18) >> 2) * 3];
                  ppfVar4 = (ppppfVar28[5] +
                            (long)(int)((ulong)((long)ppppfVar16 - (long)ppppfVar18) >> 2) * 3)[1];
                  ppppfStack_1f8 = (float ****)0x0;
                  uStack_1f0 = 0;
                  ppppfStack_200 = (float ****)&ppppfStack_1f8;
                  for (; ppfVar26 != ppfVar4; ppfVar26 = (float **)((long)ppfVar26 + 4)) {
                    func_0x000108a2a32c(&ppppfStack_200,&ppppfStack_1f8,ppfVar26,ppfVar26);
                  }
                  if (lStack_98 == 0) {
                    func_0x000108a29cd4(&ppppfStack_a8,ppppfStack_200,&ppppfStack_1f8);
                  }
                  else {
                    pppfStack_b8 = (float ***)0x0;
                    lStack_b0 = 0;
                    ppppfStack_78 = ppppfStack_200;
                    appppfStack_70[0] = ppppfStack_a8;
                    ppppfStack_88 = (float ****)&ppppfStack_c0;
                    uStack_89 = 0;
                    ppppfStack_c0 = &pppfStack_b8;
                    ppppfStack_80 = &pppfStack_b8;
                    while (ppppfVar18 = appppfStack_70[0],
                          (float *****)ppppfStack_78 != &ppppfStack_1f8) {
                      FUN_109378678(appppfStack_70[0],&pppfStack_a0,
                                    *(float *)((long)ppppfStack_78 + 0x1c));
                      FUN_109378848(appppfStack_70[0] == ppppfVar18,appppfStack_70,&ppppfStack_78,
                                    &ppppfStack_88,&uStack_89);
                      ppppfVar18 = ppppfStack_78;
                      if (appppfStack_70[0] == &pppfStack_a0) break;
                      FUN_109378678(ppppfStack_78,&ppppfStack_1f8,
                                    *(uint *)((long)appppfStack_70[0] + 0x1c));
                      FUN_109378848(ppppfStack_78 == ppppfVar18,appppfStack_70,&ppppfStack_78,
                                    &ppppfStack_88,&uStack_89);
                    }
                    func_0x000105340e88(&ppppfStack_a8,pppfStack_a0);
                    ppppfStack_a8 = ppppfStack_c0;
                    pppfStack_a0 = pppfStack_b8;
                    lStack_98 = lStack_b0;
                    ppppfVar18 = &pppfStack_a0;
                    if (lStack_b0 != 0) {
                      pppfStack_b8[2] = (float **)&pppfStack_a0;
                      pppfStack_b8 = (float ***)0x0;
                      ppppfStack_c0 = &pppfStack_b8;
                      ppppfVar18 = ppppfStack_a8;
                    }
                    ppppfStack_a8 = ppppfVar18;
                    func_0x000105340e88(&ppppfStack_c0,pppfStack_b8);
                  }
                  func_0x000105340e88(&ppppfStack_200,ppppfStack_1f8);
                  ppfVar33 = ppfVar33 + 3;
                } while (ppfVar33 != ppfVar3);
                if (lStack_98 != 0) {
                  uVar5 = *(uint *)((long)ppppfStack_a8 + 0x1c);
                  puVar12 = puVar15;
                  ppppfStack_200 = (float ****)(pppfVar17 + 2);
                  FUN_1092afa68(puVar15,pppfVar17 + 2,&UNK_10dd5b8f9,&ppppfStack_200,&ppppfStack_c0)
                  ;
                  *(uint *)(puVar12 + 5) = uVar5;
                }
              }
              func_0x000105340e88(&ppppfStack_a8,pppfStack_a0);
              pppfVar17 = (float ***)*pppfVar17;
            } while (pppfVar17 != (float ***)0x0);
          }
          func_0x000109379fe8(auStack_1b0);
          func_0x000105675c90(&uStack_188);
          param_5 = param_5 & 0xffffffff;
        }
        if (lStack_e8 != 0) {
          piVar25 = (int *)(lStack_e8 + 0x14);
          do {
            iVar1 = *piVar25;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar25,0x10);
            if (bVar7) {
              *piVar25 = iVar1 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar1 + -1 == 0) {
            func_0x000109a848d4(&uStack_120);
          }
        }
        lStack_e8 = 0;
        uStack_108 = 0;
        lStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        if (0 < (int)uStack_120._4_4_) {
          lVar32 = 0;
          do {
            piStack_e0[lVar32] = 0;
            lVar32 = lVar32 + 1;
          } while (lVar32 < (int)uStack_120._4_4_);
        }
        if (puStack_d8 != auStack_d0 && puStack_d8 != (undefined1 *)0x0) {
          _free(*(undefined8 *)(puStack_d8 + -8));
        }
        goto LAB_109375254;
      }
    }
    uVar13 = 1;
  }
  *param_1 = uVar13;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0x3f800000;
LAB_109375254:
  if (cStack_201 < '\0') {
    __ZdlPv(pppfStack_218);
  }
  func_0x000107c31940(&uStack_120,"gender");
  puVar10 = param_1 + 2;
  FUN_1093799d8(puVar10,&uStack_120,&uStack_120);
  puVar10[10] = (int)param_5;
  if (lStack_110 < 0) {
    __ZdlPv(CONCAT44(uStack_120._4_4_,(uint)uStack_120));
  }
  func_0x000107c31940(&uStack_120,"style");
  param_1 = param_1 + 2;
  FUN_1093799d8(param_1,&uStack_120,&uStack_120);
  param_1[10] = 5;
  if (lStack_110 < 0) {
    __ZdlPv(CONCAT44(uStack_120._4_4_,(uint)uStack_120));
  }
  return;
}



/* Entry: 109375f7c; end: 109377f9f;  */

void FUN_109375f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long ***ppplVar10;
  long ****pppplVar11;
  long ***ppplVar12;
  long ****pppplVar13;
  long ****pppplVar14;
  long ***ppplVar15;
  long ****pppplVar16;
  long ****pppplVar17;
  ulong uVar18;
  undefined1 uVar19;
  long *plVar20;
  long ***ppplVar21;
  undefined8 *puVar22;
  long **pplVar23;
  long **pplVar24;
  long ****unaff_x23;
  long **pplVar25;
  long **pplVar26;
  long ****unaff_x24;
  long ****pppplVar27;
  char *pcVar28;
  long ****unaff_x27;
  long ****pppplVar29;
  long ***ppplStack_410;
  long ***ppplStack_408;
  long **pplStack_400;
  long ***ppplStack_3f8;
  long ***ppplStack_3f0;
  long ***ppplStack_3e8;
  long ***ppplStack_3e0;
  undefined8 uStack_3d8;
  long lStack_3d0;
  undefined8 uStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined4 uStack_370;
  undefined8 auStack_360 [2];
  char cStack_349;
  long lStack_348;
  ulong uStack_340;
  long lStack_338;
  long lStack_330;
  undefined4 uStack_328;
  long **pplStack_320;
  undefined8 uStack_318;
  long **pplStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  long **pplStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  long ***appplStack_2c0 [2];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined4 uStack_290;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined4 uStack_260;
  long ***ppplStack_250;
  long **pplStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  long ***ppplStack_230;
  long ***ppplStack_228;
  long ***ppplStack_220;
  long lStack_218;
  float fStack_210;
  long ***ppplStack_200;
  long ***ppplStack_1f8;
  long ***ppplStack_1f0;
  long ***ppplStack_1e8;
  float fStack_1e0;
  long ***ppplStack_1d0;
  long ***ppplStack_1c8;
  long ***ppplStack_1c0;
  long ***ppplStack_1b8;
  float fStack_1b0;
  long ***ppplStack_1a0;
  long ***ppplStack_198;
  long ***ppplStack_190;
  long ***ppplStack_188;
  long ***ppplStack_180;
  long ***ppplStack_178;
  long ***ppplStack_170;
  long ***ppplStack_168;
  long ***ppplStack_160;
  long *plStack_150;
  undefined8 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  long ***ppplStack_110;
  long ***ppplStack_108;
  long ***ppplStack_100;
  long **pplStack_f0;
  long **pplStack_e8;
  long **pplStack_e0;
  long ***ppplStack_d0;
  long ***ppplStack_c8;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  undefined8 uStack_b0;
  long ***ppplStack_a0;
  long ***ppplStack_98;
  long ***ppplStack_90;
  long ***ppplStack_88;
  long ***ppplStack_80;
  
  uStack_3a0 = 0;
  ppplStack_408 = (long ***)0x0;
  ppplStack_410 = (long ***)0x0;
  pplStack_400 = (long **)0x0;
  ppplStack_3f8 = (long ***)0x3f800000;
  ppplStack_3f0 = (long ***)0x0;
  ppplStack_3e8 = (long ***)0x0;
  ppplStack_3e0 = (long ***)0x0;
  uStack_3d8 = 0x200;
  lStack_3d0 = 1;
  uStack_3c8 = 0x1010000010000;
  puStack_3c0 = &UNK_101000000;
  uStack_3b8 = 0x100;
  uStack_3b0 = 100000;
  uStack_3a8 = 0x100000000;
  func_0x000109cda3ec(param_1,&ppplStack_410);
  if ((long)ppplStack_3e0 < 0) {
    __ZdlPv(ppplStack_3f0);
  }
  if ((long ****)ppplStack_410 != (long ****)0x0) {
    ppplStack_408 = ppplStack_410;
    __ZdlPv();
  }
  func_0x000107c31940(param_1 + 0x88,&UNK_10f56729e);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  puVar9 = (undefined8 *)(param_1 + 0x120);
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  FUN_1093809c4(appplStack_2c0);
  FUN_109380d1c(appplStack_2c0,param_3);
  func_0x000107c31940(&ppplStack_410,&UNK_10f56734f);
  pppplVar14 = appplStack_2c0;
  FUN_1093781f4(pppplVar14,&ppplStack_410);
  if ((long)pplStack_400 < 0) {
    __ZdlPv(ppplStack_410);
  }
  if (((ulong)pppplVar14 & 1) != 0) {
    func_0x000107c31940(&ppplStack_410,&UNK_10f56734f);
    pppplVar14 = appplStack_2c0;
    func_0x0001093782cc(pppplVar14,&ppplStack_410,0);
    *(int *)(param_1 + 0xa0) = (int)pppplVar14;
    if ((long)pplStack_400 < 0) {
      __ZdlPv(ppplStack_410);
    }
    func_0x000107c31940(&ppplStack_410,&UNK_10f56735e);
    pppplVar14 = appplStack_2c0;
    FUN_1093781f4(pppplVar14,&ppplStack_410);
    if ((long)pplStack_400 < 0) {
      __ZdlPv(ppplStack_410);
    }
    if (((ulong)pppplVar14 & 1) != 0) {
      func_0x000107c31940(&ppplStack_1d0,&UNK_10f56735e);
      uStack_2e8 = 0;
      pplStack_2f0 = (long **)0x0;
      uStack_2d8 = 0;
      uStack_2e0 = 0;
      uStack_2d0 = 0x3f800000;
      ppplStack_d0 = appplStack_2c0[0];
      ppplStack_c8 = (long ***)0x0;
      ppplStack_c0 = (long ***)0x0;
      ppplStack_b8 = (long ***)0x8000000000000000;
      cVar2 = *(char *)appplStack_2c0[0];
      if (cVar2 == '\x01') {
        pppplVar14 = (long ****)appplStack_2c0[0][1];
        FUN_1093793a4(pppplVar14,&ppplStack_1d0);
        cVar2 = *(char *)appplStack_2c0[0];
        ppplStack_c8 = (long ***)pppplVar14;
LAB_1093761f0:
        ppplStack_3f0 = (long ***)CONCAT44(ppplStack_3f0._4_4_,0x3f800000);
        ppplStack_1a0 = appplStack_2c0[0];
        ppplStack_198 = (long ***)0x0;
        ppplStack_190 = (long ***)0x0;
        ppplStack_188 = (long ***)0x8000000000000000;
        if (cVar2 == '\x01') {
          ppplStack_198 = (long ***)(appplStack_2c0[0][1] + 1);
        }
        else {
          if (cVar2 == '\x02') {
            ppplStack_190 = (long ***)appplStack_2c0[0][1][1];
            goto LAB_10937622c;
          }
          ppplStack_188 = (long ***)0x1;
        }
      }
      else {
        if (cVar2 != '\x02') {
          ppplStack_b8 = (long ***)0x1;
          goto LAB_1093761f0;
        }
        ppplStack_190 = (long ***)appplStack_2c0[0][1][1];
        ppplStack_3f0 = (long ***)CONCAT44(ppplStack_3f0._4_4_,0x3f800000);
        ppplStack_c0 = ppplStack_190;
LAB_10937622c:
        ppplStack_188 = (long ***)0x8000000000000000;
        ppplStack_198 = (long ***)0x0;
        ppplStack_1a0 = appplStack_2c0[0];
      }
      ppplStack_3f8 = (long ***)0x0;
      pplStack_400 = (long **)0x0;
      ppplStack_408 = (long ***)0x0;
      ppplStack_410 = (long ***)0x0;
      pppplVar14 = &ppplStack_d0;
      appplStack_2c0[0] = ppplStack_1a0;
      FUN_109379420(pppplVar14,&ppplStack_1a0);
      if (((ulong)pppplVar14 & 1) == 0) {
        pppplVar14 = &ppplStack_d0;
        FUN_10937b950(pppplVar14);
        FUN_10937bd78(&ppplStack_1a0,pppplVar14);
        pppplVar14 = &ppplStack_410;
        func_0x00010937cd10(&ppplStack_410,&ppplStack_1a0);
        FUN_109379c18(&ppplStack_1a0);
      }
      else {
        pppplVar14 = (long ****)&pplStack_2f0;
      }
      FUN_10937c1f4(&ppplStack_a0,pppplVar14);
      FUN_109379c18(&ppplStack_410);
      func_0x00010937cd10((undefined8 *)(param_1 + 0xa8),&ppplStack_a0);
      FUN_109379c18(&ppplStack_a0);
      FUN_109379c18(&pplStack_2f0);
      if ((long)ppplStack_1c0 < 0) {
        __ZdlPv(ppplStack_1d0);
      }
      plVar20 = *(long **)(param_1 + 0xb8);
      ppplStack_408 = (long ***)0x0;
      ppplStack_410 = (long ***)0x0;
      ppplStack_3f8 = (long ***)0x0;
      pplStack_400 = (long **)0x0;
      ppplStack_3f0 = (long ***)CONCAT44(ppplStack_3f0._4_4_,0x3f800000);
      if (plVar20 == (long *)0x0) {
        ppplStack_a0 = (long ***)0x0;
        ppplStack_98 = (long ***)0x0;
        ppplStack_90 = (long ***)0x0;
      }
      else {
        do {
          lVar1 = plVar20[6];
          for (lVar7 = plVar20[5]; ppplVar21 = (long ***)pplStack_400, lVar7 != lVar1;
              lVar7 = lVar7 + 0x18) {
            func_0x000107c2827c(&ppplStack_410,lVar7,lVar7);
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        ppplStack_98 = (long ***)0x0;
        ppplStack_90 = (long ***)0x0;
        ppplStack_a0 = (long ***)0x0;
        if ((long ***)pplStack_400 != (long ***)0x0) {
          lVar7 = 0;
          ppplVar10 = (long ***)pplStack_400;
          do {
            lVar7 = lVar7 + 1;
            ppplVar10 = (long ***)*ppplVar10;
          } while (ppplVar10 != (long ***)0x0);
          ppplStack_c8 = (long ***)((ulong)ppplStack_c8 & 0xffffffffffffff00);
          ppplStack_d0 = (long ***)&ppplStack_a0;
          func_0x000104c60728(&ppplStack_a0,lVar7);
          ppplStack_1d0 = ppplStack_98;
          ppplStack_198 = (long ***)&ppplStack_1d0;
          ppplStack_190 = (long ***)&ppplStack_200;
          ppplStack_188 = (long ***)((ulong)ppplStack_188 & 0xffffffffffffff00);
          pppplVar14 = (long ****)ppplStack_98;
          ppplStack_1a0 = (long ***)&ppplStack_a0;
          do {
            ppplStack_200 = (long ***)pppplVar14;
            if (*(char *)((long)ppplVar21 + 0x27) < '\0') {
              func_0x000107c3192c(pppplVar14,ppplVar21[2],ppplVar21[3]);
            }
            else {
              ppplVar12 = (long ***)ppplVar21[3];
              ppplVar10 = (long ***)ppplVar21[2];
              pppplVar14[2] = (long ***)ppplVar21[4];
              pppplVar14[1] = ppplVar12;
              *pppplVar14 = ppplVar10;
            }
            ppplVar21 = (long ***)*ppplVar21;
            pppplVar14 = (long ****)(ppplStack_200 + 3);
          } while (ppplVar21 != (long ***)0x0);
          ppplStack_188 = (long ***)CONCAT71(ppplStack_188._1_7_,1);
          ppplStack_200 = (long ***)pppplVar14;
          FUN_1093798f4(&ppplStack_1a0);
          ppplStack_98 = (long ***)pppplVar14;
        }
      }
      func_0x000107c2826c(&ppplStack_410);
      func_0x000107c3193c(puVar9);
      *(long ****)(param_1 + 0x128) = ppplStack_98;
      *(long ****)(param_1 + 0x120) = ppplStack_a0;
      *(long ****)(param_1 + 0x130) = ppplStack_90;
      ppplStack_98 = (long ***)0x0;
      ppplStack_90 = (long ***)0x0;
      ppplStack_a0 = (long ***)0x0;
      ppplStack_410 = (long ***)&ppplStack_a0;
      func_0x000104c607c8(&ppplStack_410);
      func_0x000107c31940(&ppplStack_410,&UNK_10f567375);
      pppplVar14 = appplStack_2c0;
      FUN_1093781f4(pppplVar14,&ppplStack_410);
      if ((long)pplStack_400 < 0) {
        __ZdlPv(ppplStack_410);
      }
      if (((ulong)pppplVar14 & 1) != 0) {
        uStack_b0._4_4_ = (undefined4)((ulong)uStack_b0 >> 0x20);
        func_0x000107c31940(&lStack_280,&UNK_10f567375);
        uStack_318 = 0;
        pplStack_320 = (long **)0x0;
        uStack_308 = 0;
        pplStack_310 = (long **)0x0;
        uStack_300 = 0x3f800000;
        ppplStack_230 = appplStack_2c0[0];
        ppplStack_228 = (long ***)0x0;
        ppplStack_220 = (long ***)0x0;
        lStack_218 = -0x8000000000000000;
        cVar2 = *(char *)appplStack_2c0[0];
        if (cVar2 == '\x01') {
          pppplVar14 = (long ****)appplStack_2c0[0][1];
          FUN_1093793a4(pppplVar14,&lStack_280);
          cVar2 = *(char *)appplStack_2c0[0];
          ppplStack_228 = (long ***)pppplVar14;
LAB_1093764e0:
          uStack_b0 = (long ****)CONCAT44(uStack_b0._4_4_,0x3f800000);
          ppplStack_408 = (long ***)0x0;
          pplStack_400 = (long **)0x0;
          ppplStack_3f8 = (long ***)0x8000000000000000;
          if (cVar2 == '\x01') {
            ppplStack_408 = (long ***)(appplStack_2c0[0][1] + 1);
          }
          else {
            if (cVar2 == '\x02') {
              ppplVar21 = (long ***)appplStack_2c0[0][1];
              goto LAB_109376510;
            }
            ppplStack_3f8 = (long ***)0x1;
          }
        }
        else {
          if (cVar2 != '\x02') {
            lStack_218 = 1;
            goto LAB_1093764e0;
          }
          ppplVar21 = (long ***)appplStack_2c0[0][1];
          ppplStack_220 = (long ***)ppplVar21[1];
          uStack_b0 = (long ****)CONCAT44(uStack_b0._4_4_,0x3f800000);
LAB_109376510:
          ppplStack_3f8 = (long ***)0x8000000000000000;
          ppplStack_408 = (long ***)0x0;
          pplStack_400 = ppplVar21[1];
        }
        ppplStack_b8 = (long ***)0x0;
        ppplStack_c0 = (long ***)0x0;
        ppplStack_c8 = (long ***)0x0;
        ppplStack_d0 = (long ***)0x0;
        pppplVar14 = &ppplStack_230;
        ppplStack_410 = appplStack_2c0[0];
        FUN_109379420(pppplVar14,&ppplStack_410);
        if (((ulong)pppplVar14 & 1) == 0) {
          pppplVar14 = &ppplStack_230;
          FUN_10937b950();
          ppplStack_1c8 = (long ***)0x0;
          ppplStack_1d0 = (long ***)0x0;
          ppplStack_1b8 = (long ***)0x0;
          ppplStack_1c0 = (long ***)0x0;
          fStack_1b0 = 1.0;
          if (*(char *)pppplVar14 != '\x01') {
            uVar6 = 0x20;
            ___cxa_allocate_exception(0x20);
            FUN_10937bcec(pppplVar14);
            func_0x000107c31940(&ppplStack_1a0,pppplVar14);
            FUN_10928a5e0(&ppplStack_410,&UNK_10f56746f,&ppplStack_1a0);
            FUN_10937bbbc(uVar6,0x12e,&ppplStack_410);
            ___cxa_throw(uVar6,&PTR_DAT_110af4510,FUN_10937bd14);
            goto LAB_109377994;
          }
          ppplStack_98 = (long ***)0x0;
          ppplStack_a0 = (long ***)0x0;
          ppplStack_88 = (long ***)0x0;
          ppplStack_90 = (long ***)0x0;
          ppplStack_80 = (long ***)CONCAT44(ppplStack_80._4_4_,0x3f800000);
          pppplVar29 = (long ****)(pppplVar14[1] + 1);
          unaff_x27 = (long ****)*pppplVar14[1];
          if (unaff_x27 != pppplVar29) {
            do {
              FUN_10937bd78(&ppplStack_1a0,unaff_x27 + 7);
              if (*(char *)((long)unaff_x27 + 0x37) < '\0') {
                func_0x000107c3192c(&ppplStack_410,unaff_x27[4],unaff_x27[5]);
              }
              else {
                ppplStack_408 = unaff_x27[5];
                ppplStack_410 = unaff_x27[4];
                pplStack_400 = (long **)unaff_x27[6];
              }
              ppplStack_3f0 = ppplStack_198;
              ppplStack_3f8 = ppplStack_1a0;
              ppplStack_198 = (long ***)0x0;
              ppplStack_1a0 = (long ***)0x0;
              ppplStack_3e8 = ppplStack_190;
              ppplStack_3e0 = ppplStack_188;
              uStack_3d8 = CONCAT44(uStack_3d8._4_4_,ppplStack_180._0_4_);
              if ((long ****)ppplStack_188 != (long ****)0x0) {
                pppplVar14 = (long ****)ppplStack_190[1];
                if (((ulong)ppplStack_3f0 & (ulong)((long)ppplStack_3f0 + -1)) == 0) {
                  pppplVar14 = (long ****)((ulong)pppplVar14 & (ulong)((long)ppplStack_3f0 + -1));
                }
                else if (ppplStack_3f0 <= pppplVar14) {
                  uVar8 = 0;
                  if ((long ****)ppplStack_3f0 != (long ****)0x0) {
                    uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_3f0;
                  }
                  pppplVar14 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_3f0);
                }
                ppplStack_3f8[(long)pppplVar14] = (long **)&ppplStack_3e8;
                ppplStack_190 = (long ***)0x0;
                ppplStack_188 = (long ***)0x0;
              }
              FUN_109379c18(&ppplStack_1a0);
              pppplVar14 = &ppplStack_a0;
              func_0x000107c31944(pppplVar14,&ppplStack_410);
              unaff_x24 = (long ****)ppplStack_98;
              if ((long ****)ppplStack_98 != (long ****)0x0) {
                pcVar28 = (char *)((long)ppplStack_98 + -1);
                if (((ulong)ppplStack_98 & (ulong)pcVar28) == 0) {
                  unaff_x23 = (long ****)((ulong)pcVar28 & (ulong)pppplVar14);
                }
                else {
                  unaff_x23 = pppplVar14;
                  if (ppplStack_98 <= pppplVar14) {
                    uVar8 = 0;
                    if ((long ****)ppplStack_98 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_98;
                    }
                    unaff_x23 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_98);
                  }
                }
                if ((long ***)ppplStack_a0[(long)unaff_x23] != (long ***)0x0) {
                  for (pplVar26 = (long **)*ppplStack_a0[(long)unaff_x23]; pplVar26 != (long **)0x0;
                      pplVar26 = (long **)*pplVar26) {
                    pppplVar27 = (long ****)pplVar26[1];
                    if (pppplVar27 == pppplVar14) {
                      pppplVar27 = &ppplStack_a0;
                      func_0x000104c4fbc4(pppplVar27,pplVar26 + 2,&ppplStack_410);
                      if (((ulong)pppplVar27 & 1) != 0) goto LAB_109376844;
                    }
                    else {
                      if (((ulong)unaff_x24 & (ulong)pcVar28) == 0) {
                        pppplVar27 = (long ****)((ulong)pppplVar27 & (ulong)pcVar28);
                      }
                      else if (unaff_x24 <= pppplVar27) {
                        uVar8 = 0;
                        if (unaff_x24 != (long ****)0x0) {
                          uVar8 = (ulong)pppplVar27 / (ulong)unaff_x24;
                        }
                        pppplVar27 = (long ****)((long)pppplVar27 - uVar8 * (long)unaff_x24);
                      }
                      if (pppplVar27 != unaff_x23) break;
                    }
                  }
                }
              }
              pppplVar27 = (long ****)0x50;
              __Znwm();
              ppplStack_198 = (long ***)&ppplStack_a0;
              ppplStack_190 = (long ***)0x0;
              *pppplVar27 = (long ***)0x0;
              pppplVar27[1] = (long ***)pppplVar14;
              ppplStack_1a0 = (long ***)pppplVar27;
              if ((long)pplStack_400 < 0) {
                func_0x000107c3192c(pppplVar27 + 2,ppplStack_410,ppplStack_408);
              }
              else {
                pppplVar27[3] = ppplStack_408;
                pppplVar27[2] = ppplStack_410;
                pppplVar27[4] = (long ***)pplStack_400;
              }
              FUN_10937c1f4(pppplVar27 + 5,&ppplStack_3f8);
              ppplStack_190 = (long ***)CONCAT71(ppplStack_190._1_7_,1);
              if ((unaff_x24 == (long ****)0x0) ||
                 (ppplStack_80._0_4_ * (float)unaff_x24 < (float)(char *)((long)ppplStack_88 + 1)))
              {
                uVar8 = 1;
                if ((long ****)0x2 < unaff_x24) {
                  uVar8 = (ulong)(((ulong)unaff_x24 & (ulong)((long)unaff_x24 + -1)) != 0);
                }
                uVar8 = uVar8 | (long)unaff_x24 << 1;
                uVar18 = (ulong)((float)(char *)((long)ppplStack_88 + 1) / ppplStack_80._0_4_);
                if (uVar8 <= uVar18) {
                  uVar8 = uVar18;
                }
                FUN_10937a630(&ppplStack_a0,uVar8);
                unaff_x24 = (long ****)ppplStack_98;
                if (((ulong)ppplStack_98 & (ulong)((long)ppplStack_98 + -1)) == 0) {
                  unaff_x23 = (long ****)((ulong)((long)ppplStack_98 + -1) & (ulong)pppplVar14);
                }
                else {
                  unaff_x23 = pppplVar14;
                  if (ppplStack_98 <= pppplVar14) {
                    uVar8 = 0;
                    if ((long ****)ppplStack_98 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_98;
                    }
                    unaff_x23 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_98);
                  }
                }
              }
              ppplVar21 = (long ***)ppplStack_a0[(long)unaff_x23];
              if (ppplVar21 == (long ***)0x0) {
                *pppplVar27 = ppplStack_90;
                ppplStack_a0[(long)unaff_x23] = (long **)&ppplStack_90;
                ppplStack_90 = (long ***)pppplVar27;
                if (*pppplVar27 != (long ***)0x0) {
                  pppplVar14 = (long ****)(*pppplVar27)[1];
                  if (((ulong)unaff_x24 & (ulong)((long)unaff_x24 + -1)) == 0) {
                    pppplVar14 = (long ****)((ulong)pppplVar14 & (ulong)((long)unaff_x24 + -1));
                  }
                  else if (unaff_x24 <= pppplVar14) {
                    uVar8 = 0;
                    if (unaff_x24 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar14 / (ulong)unaff_x24;
                    }
                    pppplVar14 = (long ****)((long)pppplVar14 - uVar8 * (long)unaff_x24);
                  }
                  ppplStack_a0[(long)pppplVar14] = (long **)pppplVar27;
                }
              }
              else {
                *pppplVar27 = (long ***)*ppplVar21;
                *ppplVar21 = (long **)pppplVar27;
              }
              ppplStack_88 = (long ***)((long)ppplStack_88 + 1);
LAB_109376844:
              FUN_109379c18(&ppplStack_3f8);
              if ((long)pplStack_400 < 0) {
                __ZdlPv(ppplStack_410);
              }
              pppplVar14 = (long ****)unaff_x27[1];
              pppplVar27 = unaff_x27;
              if ((long ****)unaff_x27[1] == (long ****)0x0) {
                do {
                  unaff_x27 = (long ****)pppplVar27[2];
                  bVar5 = (long ****)*unaff_x27 != pppplVar27;
                  pppplVar27 = unaff_x27;
                } while (bVar5);
              }
              else {
                do {
                  unaff_x27 = pppplVar14;
                  pppplVar14 = (long ****)*unaff_x27;
                } while ((long ****)*unaff_x27 != (long ****)0x0);
              }
            } while (unaff_x27 != pppplVar29);
          }
          pppplVar14 = &ppplStack_c0;
          func_0x00010937cdb0(&ppplStack_1d0,&ppplStack_a0);
          func_0x000109379d18(&ppplStack_a0);
          pppplVar29 = &ppplStack_d0;
          func_0x00010937cdb0(&ppplStack_d0,&ppplStack_1d0);
          func_0x000109379d18(&ppplStack_1d0);
        }
        else {
          pppplVar14 = (long ****)&pplStack_310;
          pppplVar29 = (long ****)&pplStack_320;
        }
        pppplVar27 = (long ****)*pppplVar29;
        ppplVar21 = pppplVar29[1];
        *pppplVar29 = (long ***)0x0;
        pppplVar29[1] = (long ***)0x0;
        ppplStack_200 = (long ***)pppplVar27;
        ppplStack_1f8 = ppplVar21;
        ppplStack_1f0 = pppplVar29[2];
        ppplStack_1e8 = pppplVar29[3];
        fStack_1e0 = *(float *)(pppplVar29 + 4);
        if ((long ****)pppplVar29[3] != (long ****)0x0) {
          ppplVar10 = (long ***)pppplVar29[2][1];
          if (((ulong)ppplVar21 & (long)ppplVar21 - 1U) == 0) {
            ppplVar10 = (long ***)((ulong)ppplVar10 & (long)ppplVar21 - 1U);
          }
          else if (ppplVar21 <= ppplVar10) {
            uVar8 = 0;
            if (ppplVar21 != (long ***)0x0) {
              uVar8 = (ulong)ppplVar10 / (ulong)ppplVar21;
            }
            ppplVar10 = (long ***)((long)ppplVar10 - uVar8 * (long)ppplVar21);
          }
          pppplVar27[(long)ppplVar10] = (long ***)&ppplStack_1f0;
          *pppplVar14 = (long ***)0x0;
          pppplVar14[1] = (long ***)0x0;
        }
        func_0x000109379d18(&ppplStack_d0);
        func_0x00010937cdb0((undefined8 *)(param_1 + 0xd0),&ppplStack_200);
        func_0x000109379d18(&ppplStack_200);
        func_0x000109379d18(&pplStack_320);
        if (uStack_270._7_1_ < '\0') {
          __ZdlPv(lStack_280);
        }
        func_0x000107c31940(&ppplStack_410,&UNK_10f56739a);
        pppplVar14 = appplStack_2c0;
        FUN_1093781f4(pppplVar14,&ppplStack_410);
        if ((long)pplStack_400 < 0) {
          __ZdlPv(ppplStack_410);
        }
        if (((ulong)pppplVar14 & 1) != 0) {
          func_0x000107c31940(auStack_360,&UNK_10f56739a);
          uStack_388 = 0;
          lStack_390 = 0;
          uStack_378 = 0;
          uStack_380 = 0;
          uStack_370 = 0x3f800000;
          ppplStack_250 = appplStack_2c0[0];
          pplStack_248 = (long **)0x0;
          plStack_240 = (long *)0x0;
          uStack_238 = 0x8000000000000000;
          cVar2 = *(char *)appplStack_2c0[0];
          if (cVar2 == '\x01') {
            ppplVar21 = (long ***)appplStack_2c0[0][1];
            FUN_1093793a4(ppplVar21,auStack_360);
            cVar2 = *(char *)appplStack_2c0[0];
            pplStack_248 = (long **)ppplVar21;
LAB_109376a30:
            ppplStack_408 = (long ***)0x0;
            pplStack_400 = (long **)0x0;
            ppplStack_3f8 = (long ***)0x8000000000000000;
            ppplStack_410 = appplStack_2c0[0];
            if (cVar2 == '\x01') {
              ppplStack_408 = (long ***)(appplStack_2c0[0][1] + 1);
            }
            else {
              if (cVar2 == '\x02') {
                ppplVar21 = (long ***)appplStack_2c0[0][1];
                goto LAB_109376a60;
              }
              ppplStack_3f8 = (long ***)0x1;
            }
          }
          else {
            if (cVar2 != '\x02') {
              uStack_238 = 1;
              goto LAB_109376a30;
            }
            ppplVar21 = (long ***)appplStack_2c0[0][1];
            plStack_240 = (long *)ppplVar21[1];
            ppplStack_410 = appplStack_2c0[0];
LAB_109376a60:
            ppplStack_3f8 = (long ***)0x8000000000000000;
            ppplStack_408 = (long ***)0x0;
            pplStack_400 = ppplVar21[1];
          }
          uStack_260 = 0x3f800000;
          uStack_268 = 0;
          uStack_270 = 0;
          uStack_278 = 0;
          lStack_280 = 0;
          pppplVar14 = &ppplStack_250;
          FUN_109379420(pppplVar14,&ppplStack_410);
          if (((ulong)pppplVar14 & 1) == 0) {
            pppplVar14 = &ppplStack_250;
            FUN_10937b950();
            uStack_2a8 = 0;
            uStack_2b0 = 0;
            uStack_298 = 0;
            uStack_2a0 = 0;
            uStack_290 = 0x3f800000;
            if (*(char *)pppplVar14 != '\x01') {
              uVar6 = 0x20;
              ___cxa_allocate_exception(0x20);
              FUN_10937bcec(pppplVar14);
              func_0x000107c31940(&ppplStack_1a0,pppplVar14);
              FUN_10928a5e0(&ppplStack_410,&UNK_10f56746f,&ppplStack_1a0);
              FUN_10937bbbc(uVar6,0x12e,&ppplStack_410);
              ___cxa_throw(uVar6,&PTR_DAT_110af4510,FUN_10937bd14);
LAB_109377994:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x109377998);
              (*pcVar4)();
            }
            ppplStack_228 = (long ***)0x0;
            ppplStack_230 = (long ***)0x0;
            lStack_218 = 0;
            ppplStack_220 = (long ***)0x0;
            fStack_210 = 1.0;
            ppplVar10 = pppplVar14[1] + 1;
            ppplVar21 = (long ***)*pppplVar14[1];
            if (ppplVar21 != ppplVar10) {
              do {
                ppplStack_1f8 = (long ***)0x0;
                ppplStack_200 = (long ***)0x0;
                ppplStack_1e8 = (long ***)0x0;
                ppplStack_1f0 = (long ***)0x0;
                fStack_1e0 = 1.0;
                if (*(char *)(ppplVar21 + 7) != '\x01') {
                  uVar6 = 0x20;
                  ___cxa_allocate_exception(0x20);
                  ppplVar21 = ppplVar21 + 7;
                  FUN_10937bcec(ppplVar21);
                  func_0x000107c31940(&ppplStack_a0,ppplVar21);
                  FUN_10928a5e0(&ppplStack_1a0,&UNK_10f56746f,&ppplStack_a0);
                  FUN_10937bbbc(uVar6,0x12e,&ppplStack_1a0);
                  ___cxa_throw(uVar6,&PTR_DAT_110af4510,FUN_10937bd14);
                  goto LAB_109377994;
                }
                ppplStack_1c8 = (long ***)0x0;
                ppplStack_1d0 = (long ***)0x0;
                ppplStack_1b8 = (long ***)0x0;
                ppplStack_1c0 = (long ***)0x0;
                fStack_1b0 = 1.0;
                pplVar26 = ppplVar21[8] + 1;
                pplVar23 = (long **)*ppplVar21[8];
                if (pplVar23 == pplVar26) {
                  pppplVar14 = (long ****)0x0;
                  pppplVar29 = (long ****)0x0;
                }
                else {
                  do {
                    pplVar25 = pplVar23 + 7;
                    ppplStack_168 = (long ***)0x0;
                    ppplStack_170 = (long ***)0x0;
                    ppplStack_160 = (long ***)0x0;
                    if (*(char *)pplVar25 != '\x02') {
                      uVar6 = 0x20;
                      ___cxa_allocate_exception(0x20);
                      FUN_10937bcec(pplVar25);
                      pppplVar14 = &ppplStack_d0;
                      func_0x000107c31940(pppplVar14,pplVar25);
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                                ();
                      ppplStack_98 = pppplVar14[1];
                      ppplStack_a0 = *pppplVar14;
                      ppplStack_90 = pppplVar14[2];
                      pppplVar14[1] = (long ***)0x0;
                      pppplVar14[2] = (long ***)0x0;
                      *pppplVar14 = (long ***)0x0;
                      FUN_10937bbbc(uVar6,0x12e,&ppplStack_a0);
                      ___cxa_throw(uVar6,&PTR_DAT_110af4510,FUN_10937bd14);
                      goto LAB_109377994;
                    }
                    ppplStack_108 = (long ***)0x0;
                    ppplStack_100 = (long ***)0x0;
                    ppplStack_110 = (long ***)0x0;
                    plVar20 = pplVar23[8];
                    if (plVar20[1] - *plVar20 == 0) {
LAB_109376c58:
                      uStack_118 = 0x8000000000000000;
                      uStack_128 = 0;
                      lStack_120 = *plVar20;
                      puStack_148 = (long *)0x0;
                      uStack_138 = 0x8000000000000000;
                      lStack_140 = plVar20[1];
                    }
                    else {
                      uVar8 = plVar20[1] - *plVar20 >> 4;
                      if (0xaaaaaaaaaaaaaaa < uVar8) {
                        FUN_1092a9a64();
                        goto LAB_109377994;
                      }
                      ppplStack_80 = (long ***)&ppplStack_110;
                      pppplVar14 = &ppplStack_110;
                      FUN_1092a9a78();
                      pppplVar29 = (long ****)
                                   ((long)pppplVar14 - ((long)ppplStack_108 - (long)ppplStack_110));
                      _memcpy(pppplVar29);
                      ppplStack_90 = ppplStack_110;
                      ppplStack_88 = ppplStack_100;
                      ppplStack_a0 = ppplStack_110;
                      ppplStack_98 = ppplStack_110;
                      ppplStack_110 = (long ***)pppplVar29;
                      ppplStack_108 = (long ***)pppplVar14;
                      ppplStack_100 = (long ***)(pppplVar14 + uVar8 * 3);
                      func_0x00010937ce88(&ppplStack_a0);
                      cVar2 = *(char *)pplVar25;
                      uStack_128 = 0;
                      lStack_120 = 0;
                      uStack_118 = 0x8000000000000000;
                      if (cVar2 == '\0') {
                        uStack_118 = 1;
                      }
                      else {
                        if (cVar2 == '\x01') {
                          puStack_148 = pplVar23[8] + 1;
                          uStack_128 = *pplVar23[8];
                          uStack_138 = 0x8000000000000000;
                          lStack_140 = 0;
                          goto LAB_109376cbc;
                        }
                        if (cVar2 == '\x02') {
                          plVar20 = pplVar23[8];
                          goto LAB_109376c58;
                        }
                        uStack_118 = 0;
                      }
                      puStack_148 = (long *)0x0;
                      lStack_140 = 0;
                      uStack_138 = 1;
                    }
LAB_109376cbc:
                    pppplVar14 = (long ****)ppplStack_108;
                    plStack_150 = (long *)pplVar25;
                    plStack_130 = (long *)pplVar25;
                    while( true ) {
                      pplVar25 = &plStack_130;
                      FUN_10937c708(pplVar25,&plStack_150);
                      if (((ulong)pplVar25 & 1) != 0) break;
                      FUN_10937c560(&plStack_130);
                      FUN_10937cf14(&pplStack_f0);
                      pppplVar29 = (long ****)ppplStack_110;
                      if (ppplStack_108 < ppplStack_100) {
                        if (pppplVar14 == (long ****)ppplStack_108) {
                          *ppplStack_108 = (long **)0x0;
                          ppplStack_108[1] = (long **)0x0;
                          pplVar25 = pplStack_f0;
                          ppplStack_108[2] = (long **)0x0;
                          ppplStack_108[1] = pplStack_e8;
                          *ppplStack_108 = pplVar25;
                          ppplStack_108[2] = pplStack_e0;
                          ppplStack_108 = ppplStack_108 + 3;
                        }
                        else {
                          pppplVar27 = (long ****)(ppplStack_108 + -3);
                          pppplVar29 = (long ****)ppplStack_108;
                          if (pppplVar27 < ppplStack_108) {
                            *ppplStack_108 = (long **)0x0;
                            ppplStack_108[1] = (long **)0x0;
                            ppplStack_108[2] = (long **)0x0;
                            ppplStack_108[1] = ppplStack_108[-2];
                            *ppplStack_108 = (long **)*pppplVar27;
                            ppplStack_108[2] = ppplStack_108[-1];
                            *pppplVar27 = (long ***)0x0;
                            ppplStack_108[-2] = (long **)0x0;
                            ppplStack_108[-1] = (long **)0x0;
                            pppplVar29 = (long ****)(ppplStack_108 + 3);
                          }
                          bVar5 = (long ****)ppplStack_108 != pppplVar14 + 3;
                          pppplVar17 = pppplVar27;
                          ppplStack_108 = (long ***)pppplVar29;
                          if (bVar5) {
                            do {
                              pppplVar27 = pppplVar27 + -3;
                              func_0x00010869e720(pppplVar17,pppplVar27);
                              pppplVar17 = pppplVar17 + -3;
                            } while (pppplVar27 != pppplVar14);
                          }
                          if (*pppplVar14 != (long ***)0x0) {
                            pppplVar14[1] = *pppplVar14;
                            __ZdlPv();
                            *pppplVar14 = (long ***)0x0;
                            pppplVar14[1] = (long ***)0x0;
                            pppplVar14[2] = (long ***)0x0;
                          }
                          pppplVar14[1] = (long ***)pplStack_e8;
                          *pppplVar14 = (long ***)pplStack_f0;
                          pppplVar14[2] = (long ***)pplStack_e0;
                        }
                        pppplVar14 = pppplVar14 + 3;
                        pppplVar29 = unaff_x24;
                      }
                      else {
                        uVar8 = ((long)ppplStack_108 - (long)ppplStack_110 >> 3) *
                                -0x5555555555555555 + 1;
                        if (0xaaaaaaaaaaaaaaa < uVar8) {
                          FUN_1092a9a64();
                          goto LAB_109377994;
                        }
                        lVar7 = (long)ppplStack_100 - (long)ppplStack_110 >> 3;
                        uVar18 = lVar7 * 0x5555555555555556;
                        if (uVar18 < uVar8 || uVar18 - uVar8 == 0) {
                          uVar18 = uVar8;
                        }
                        if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
                          uVar18 = 0xaaaaaaaaaaaaaaa;
                        }
                        uStack_b0 = &ppplStack_110;
                        if (uVar18 == 0) {
                          pppplVar27 = (long ****)0x0;
                          uVar18 = 0;
                        }
                        else {
                          pppplVar27 = &ppplStack_110;
                          FUN_1092a9a78();
                          uVar18 = uVar18 * 0x18;
                        }
                        uVar8 = (long)pppplVar14 - (long)pppplVar29;
                        ppplStack_c8 = (long ***)((long)pppplVar27 + uVar8);
                        ppplStack_b8 = (long ***)((long)pppplVar27 + uVar18);
                        ppplStack_d0 = (long ***)pppplVar27;
                        ppplStack_c0 = ppplStack_c8;
                        if (uVar8 == uVar18) {
                          if ((long)uVar8 < 1) {
                            uVar18 = 1;
                            if (pppplVar14 != pppplVar29) {
                              uVar18 = (-uVar8 >> 3) * -0x5555555555555556;
                            }
                            ppplStack_80 = (long ***)&ppplStack_110;
                            pppplVar17 = &ppplStack_110;
                            uVar8 = uVar18;
                            FUN_1092a9a78();
                            pppplVar11 = pppplVar17 + (uVar18 >> 2) * 3;
                            pppplVar27 = pppplVar11;
                            if ((long)ppplStack_c0 - (long)ppplStack_c8 != 0) {
                              pppplVar27 = (long ****)
                                           ((long)pppplVar11 +
                                           ((long)ppplStack_c0 - (long)ppplStack_c8));
                              pppplVar13 = (long ****)ppplStack_c8;
                              pppplVar16 = pppplVar11;
                              do {
                                *pppplVar16 = (long ***)0x0;
                                pppplVar16[1] = (long ***)0x0;
                                pppplVar16[2] = (long ***)0x0;
                                ppplVar12 = *pppplVar13;
                                pppplVar16[1] = pppplVar13[1];
                                *pppplVar16 = ppplVar12;
                                pppplVar16[2] = pppplVar13[2];
                                *pppplVar13 = (long ***)0x0;
                                pppplVar13[1] = (long ***)0x0;
                                pppplVar13[2] = (long ***)0x0;
                                pppplVar16 = pppplVar16 + 3;
                                pppplVar13 = pppplVar13 + 3;
                              } while (pppplVar16 != pppplVar27);
                            }
                            ppplStack_a0 = ppplStack_d0;
                            ppplStack_88 = ppplStack_b8;
                            ppplStack_d0 = (long ***)pppplVar17;
                            ppplStack_98 = ppplStack_c8;
                            ppplStack_c8 = (long ***)pppplVar11;
                            ppplStack_90 = ppplStack_c0;
                            ppplStack_c0 = (long ***)pppplVar27;
                            ppplStack_b8 = (long ***)(pppplVar17 + uVar8 * 3);
                            func_0x00010937ce88(&ppplStack_a0);
                          }
                          else {
                            ppplStack_c8 = ppplStack_c8 +
                                           ((uVar8 >> 3) * -0x5555555555555555 + 1 >> 1) * -3;
                            ppplStack_c0 = ppplStack_c8;
                          }
                        }
                        ppplVar12 = ppplStack_c0;
                        *ppplStack_c0 = (long **)0x0;
                        ppplVar12[1] = (long **)0x0;
                        ppplVar12[2] = (long **)0x0;
                        ppplVar12[1] = pplStack_e8;
                        *ppplVar12 = pplStack_f0;
                        ppplVar12[2] = pplStack_e0;
                        ppplVar15 = ppplStack_c8;
                        pplStack_f0 = (long **)0x0;
                        pplStack_e8 = (long **)0x0;
                        pplStack_e0 = (long **)0x0;
                        pppplVar27 = (long ****)(ppplStack_c0 + 3);
                        lVar7 = (long)ppplStack_108 - (long)pppplVar14;
                        _memcpy(pppplVar27,pppplVar14,lVar7);
                        ppplStack_c0 = (long ***)((long)pppplVar27 + lVar7);
                        pppplVar27 = (long ****)
                                     ((long)ppplVar15 - ((long)pppplVar14 - (long)ppplStack_110));
                        ppplStack_108 = (long ***)pppplVar14;
                        _memcpy(pppplVar27);
                        ppplVar12 = ppplStack_100;
                        ppplStack_100 = ppplStack_b8;
                        ppplStack_108 = ppplStack_c0;
                        ppplStack_c0 = ppplStack_110;
                        ppplStack_b8 = ppplVar12;
                        ppplStack_d0 = ppplStack_110;
                        ppplStack_c8 = ppplStack_110;
                        ppplStack_110 = (long ***)pppplVar27;
                        func_0x00010937ce88(&ppplStack_d0);
                        pppplVar14 = (long ****)(ppplVar15 + 3);
                        if ((long ***)pplStack_f0 != (long ***)0x0) {
                          pplStack_e8 = pplStack_f0;
                          __ZdlPv();
                        }
                      }
                      FUN_10937c698(&plStack_130);
                      unaff_x24 = pppplVar29;
                    }
                    func_0x00010937d1e4(&ppplStack_170);
                    ppplStack_168 = ppplStack_108;
                    ppplStack_170 = ppplStack_110;
                    ppplStack_160 = ppplStack_100;
                    ppplStack_108 = (long ***)0x0;
                    ppplStack_100 = (long ***)0x0;
                    ppplStack_110 = (long ***)0x0;
                    ppplStack_a0 = (long ***)&ppplStack_110;
                    func_0x0001092a9abc(&ppplStack_a0);
                    if (*(char *)((long)pplVar23 + 0x37) < '\0') {
                      func_0x000107c3192c(&ppplStack_1a0,pplVar23[4],pplVar23[5]);
                    }
                    else {
                      ppplStack_198 = (long ***)pplVar23[5];
                      ppplStack_1a0 = (long ***)pplVar23[4];
                      ppplStack_190 = (long ***)pplVar23[6];
                    }
                    ppplStack_180 = ppplStack_168;
                    ppplStack_188 = ppplStack_170;
                    ppplStack_178 = ppplStack_160;
                    ppplStack_160 = (long ***)0x0;
                    ppplStack_168 = (long ***)0x0;
                    ppplStack_170 = (long ***)0x0;
                    ppplStack_a0 = (long ***)&ppplStack_170;
                    func_0x0001092a9abc(&ppplStack_a0);
                    pppplVar14 = &ppplStack_1d0;
                    func_0x000107c31944(pppplVar14,&ppplStack_1a0);
                    unaff_x27 = (long ****)ppplStack_1c8;
                    if ((long ****)ppplStack_1c8 != (long ****)0x0) {
                      pcVar28 = (char *)((long)ppplStack_1c8 + -1);
                      if (((ulong)ppplStack_1c8 & (ulong)pcVar28) == 0) {
                        unaff_x24 = (long ****)((ulong)pcVar28 & (ulong)pppplVar14);
                      }
                      else {
                        unaff_x24 = pppplVar14;
                        if (ppplStack_1c8 <= pppplVar14) {
                          uVar8 = 0;
                          if ((long ****)ppplStack_1c8 != (long ****)0x0) {
                            uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_1c8;
                          }
                          unaff_x24 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_1c8);
                        }
                      }
                      if ((long ***)ppplStack_1d0[(long)unaff_x24] != (long ***)0x0) {
                        for (pplVar25 = (long **)*ppplStack_1d0[(long)unaff_x24];
                            pplVar25 != (long **)0x0; pplVar25 = (long **)*pplVar25) {
                          pppplVar29 = (long ****)pplVar25[1];
                          if (pppplVar29 == pppplVar14) {
                            pppplVar29 = &ppplStack_1d0;
                            func_0x000104c4fbc4(pppplVar29,pplVar25 + 2,&ppplStack_1a0);
                            if (((ulong)pppplVar29 & 1) != 0) goto LAB_109377268;
                          }
                          else {
                            if (((ulong)unaff_x27 & (ulong)pcVar28) == 0) {
                              pppplVar29 = (long ****)((ulong)pppplVar29 & (ulong)pcVar28);
                            }
                            else if (unaff_x27 <= pppplVar29) {
                              uVar8 = 0;
                              if (unaff_x27 != (long ****)0x0) {
                                uVar8 = (ulong)pppplVar29 / (ulong)unaff_x27;
                              }
                              pppplVar29 = (long ****)((long)pppplVar29 - uVar8 * (long)unaff_x27);
                            }
                            if (pppplVar29 != unaff_x24) break;
                          }
                        }
                      }
                    }
                    pppplVar29 = (long ****)0x40;
                    __Znwm();
                    ppplStack_98 = (long ***)&ppplStack_1d0;
                    ppplStack_90 = (long ***)0x0;
                    *pppplVar29 = (long ***)0x0;
                    pppplVar29[1] = (long ***)pppplVar14;
                    ppplStack_a0 = (long ***)pppplVar29;
                    if ((long)ppplStack_190 < 0) {
                      func_0x000107c3192c(pppplVar29 + 2,ppplStack_1a0,ppplStack_198);
                    }
                    else {
                      pppplVar29[3] = ppplStack_198;
                      pppplVar29[2] = ppplStack_1a0;
                      pppplVar29[4] = ppplStack_190;
                    }
                    pppplVar29[6] = ppplStack_180;
                    pppplVar29[5] = ppplStack_188;
                    pppplVar29[7] = ppplStack_178;
                    ppplStack_180 = (long ***)0x0;
                    ppplStack_178 = (long ***)0x0;
                    ppplStack_188 = (long ***)0x0;
                    ppplStack_90 = (long ***)CONCAT71(ppplStack_90._1_7_,1);
                    if ((unaff_x27 == (long ****)0x0) ||
                       (fStack_1b0 * (float)unaff_x27 < (float)(char *)((long)ppplStack_1b8 + 1))) {
                      uVar8 = 1;
                      if ((long ****)0x2 < unaff_x27) {
                        uVar8 = (ulong)(((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) != 0);
                      }
                      uVar8 = uVar8 | (long)unaff_x27 << 1;
                      uVar18 = (ulong)((float)(char *)((long)ppplStack_1b8 + 1) / fStack_1b0);
                      if (uVar8 <= uVar18) {
                        uVar8 = uVar18;
                      }
                      FUN_10937ab44(&ppplStack_1d0,uVar8);
                      unaff_x27 = (long ****)ppplStack_1c8;
                      if (((ulong)ppplStack_1c8 & (ulong)((long)ppplStack_1c8 + -1)) == 0) {
                        unaff_x24 = (long ****)
                                    ((ulong)((long)ppplStack_1c8 + -1) & (ulong)pppplVar14);
                      }
                      else {
                        unaff_x24 = pppplVar14;
                        if (ppplStack_1c8 <= pppplVar14) {
                          uVar8 = 0;
                          if ((long ****)ppplStack_1c8 != (long ****)0x0) {
                            uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_1c8;
                          }
                          unaff_x24 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_1c8);
                        }
                      }
                    }
                    ppplVar12 = (long ***)ppplStack_1d0[(long)unaff_x24];
                    if (ppplVar12 == (long ***)0x0) {
                      *pppplVar29 = ppplStack_1c0;
                      ppplStack_1d0[(long)unaff_x24] = (long **)&ppplStack_1c0;
                      ppplStack_1c0 = (long ***)pppplVar29;
                      if (*pppplVar29 != (long ***)0x0) {
                        pppplVar14 = (long ****)(*pppplVar29)[1];
                        if (((ulong)unaff_x27 & (ulong)((long)unaff_x27 + -1)) == 0) {
                          pppplVar14 = (long ****)
                                       ((ulong)pppplVar14 & (ulong)((long)unaff_x27 + -1));
                        }
                        else if (unaff_x27 <= pppplVar14) {
                          uVar8 = 0;
                          if (unaff_x27 != (long ****)0x0) {
                            uVar8 = (ulong)pppplVar14 / (ulong)unaff_x27;
                          }
                          pppplVar14 = (long ****)((long)pppplVar14 - uVar8 * (long)unaff_x27);
                        }
                        ppplStack_1d0[(long)pppplVar14] = (long **)pppplVar29;
                      }
                    }
                    else {
                      *pppplVar29 = (long ***)*ppplVar12;
                      *ppplVar12 = (long **)pppplVar29;
                    }
                    ppplStack_1b8 = (long ***)((long)ppplStack_1b8 + 1);
LAB_109377268:
                    ppplStack_a0 = (long ***)&ppplStack_188;
                    func_0x0001092a9abc(&ppplStack_a0);
                    if ((long)ppplStack_190 < 0) {
                      __ZdlPv(ppplStack_1a0);
                    }
                    pplVar25 = (long **)pplVar23[1];
                    pplVar24 = pplVar23;
                    if ((long **)pplVar23[1] == (long **)0x0) {
                      do {
                        pplVar23 = (long **)pplVar24[2];
                        bVar5 = (long **)*pplVar23 != pplVar24;
                        pplVar24 = pplVar23;
                      } while (bVar5);
                    }
                    else {
                      do {
                        pplVar23 = pplVar25;
                        pplVar25 = (long **)*pplVar23;
                      } while ((long **)*pplVar23 != (long **)0x0);
                    }
                    pppplVar14 = (long ****)ppplStack_1d0;
                    pppplVar29 = (long ****)ppplStack_1c8;
                  } while (pplVar23 != pplVar26);
                }
                ppplStack_1e8 = ppplStack_1b8;
                ppplStack_1f0 = ppplStack_1c0;
                ppplStack_1c8 = (long ***)0x0;
                ppplStack_1d0 = (long ***)0x0;
                if ((long ****)ppplStack_1b8 != (long ****)0x0) {
                  pppplVar27 = (long ****)ppplStack_1c0[1];
                  if (((ulong)pppplVar29 & (ulong)((long)pppplVar29 + -1)) == 0) {
                    pppplVar27 = (long ****)((ulong)pppplVar27 & (ulong)((long)pppplVar29 + -1));
                  }
                  else if (pppplVar29 <= pppplVar27) {
                    uVar8 = 0;
                    if (pppplVar29 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar27 / (ulong)pppplVar29;
                    }
                    pppplVar27 = (long ****)((long)pppplVar27 - uVar8 * (long)pppplVar29);
                  }
                  pppplVar14[(long)pppplVar27] = (long ***)&ppplStack_1f0;
                  ppplStack_1c0 = (long ***)0x0;
                  ppplStack_1b8 = (long ***)0x0;
                }
                ppplStack_200 = (long ***)pppplVar14;
                ppplStack_1f8 = (long ***)pppplVar29;
                fStack_1e0 = fStack_1b0;
                func_0x000109379ee8(&ppplStack_1d0);
                if (*(char *)((long)ppplVar21 + 0x37) < '\0') {
                  func_0x000107c3192c(&ppplStack_410,ppplVar21[4],ppplVar21[5]);
                }
                else {
                  ppplStack_408 = (long ***)ppplVar21[5];
                  ppplStack_410 = (long ***)ppplVar21[4];
                  pplStack_400 = ppplVar21[6];
                }
                ppplStack_3f0 = ppplStack_1f8;
                ppplStack_3f8 = ppplStack_200;
                ppplStack_1f8 = (long ***)0x0;
                ppplStack_200 = (long ***)0x0;
                ppplStack_3e8 = ppplStack_1f0;
                ppplStack_3e0 = ppplStack_1e8;
                uStack_3d8 = CONCAT44(uStack_3d8._4_4_,fStack_1e0);
                if ((long ****)ppplStack_1e8 != (long ****)0x0) {
                  pppplVar14 = (long ****)ppplStack_1f0[1];
                  if (((ulong)ppplStack_3f0 & (ulong)((long)ppplStack_3f0 + -1)) == 0) {
                    pppplVar14 = (long ****)((ulong)pppplVar14 & (ulong)((long)ppplStack_3f0 + -1));
                  }
                  else if (ppplStack_3f0 <= pppplVar14) {
                    uVar8 = 0;
                    if ((long ****)ppplStack_3f0 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_3f0;
                    }
                    pppplVar14 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_3f0);
                  }
                  ppplStack_3f8[(long)pppplVar14] = (long **)&ppplStack_3e8;
                  ppplStack_1f0 = (long ***)0x0;
                  ppplStack_1e8 = (long ***)0x0;
                }
                func_0x000109379ee8(&ppplStack_200);
                pppplVar14 = &ppplStack_230;
                func_0x000107c31944(pppplVar14,&ppplStack_410);
                pppplVar29 = (long ****)ppplStack_228;
                if ((long ****)ppplStack_228 != (long ****)0x0) {
                  unaff_x24 = (long ****)((long)ppplStack_228 + -1);
                  if (((ulong)ppplStack_228 & (ulong)unaff_x24) == 0) {
                    unaff_x27 = (long ****)((ulong)unaff_x24 & (ulong)pppplVar14);
                  }
                  else {
                    unaff_x27 = pppplVar14;
                    if (ppplStack_228 <= pppplVar14) {
                      uVar8 = 0;
                      if ((long ****)ppplStack_228 != (long ****)0x0) {
                        uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_228;
                      }
                      unaff_x27 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_228);
                    }
                  }
                  if ((long ***)ppplStack_230[(long)unaff_x27] != (long ***)0x0) {
                    for (pplVar26 = (long **)*ppplStack_230[(long)unaff_x27];
                        pplVar26 != (long **)0x0; pplVar26 = (long **)*pplVar26) {
                      pppplVar27 = (long ****)pplVar26[1];
                      if (pppplVar27 == pppplVar14) {
                        pppplVar27 = &ppplStack_230;
                        func_0x000104c4fbc4(pppplVar27,pplVar26 + 2,&ppplStack_410);
                        if (((ulong)pppplVar27 & 1) != 0) goto LAB_10937763c;
                      }
                      else {
                        if (((ulong)pppplVar29 & (ulong)unaff_x24) == 0) {
                          pppplVar27 = (long ****)((ulong)pppplVar27 & (ulong)unaff_x24);
                        }
                        else if (pppplVar29 <= pppplVar27) {
                          uVar8 = 0;
                          if (pppplVar29 != (long ****)0x0) {
                            uVar8 = (ulong)pppplVar27 / (ulong)pppplVar29;
                          }
                          pppplVar27 = (long ****)((long)pppplVar27 - uVar8 * (long)pppplVar29);
                        }
                        if (pppplVar27 != unaff_x27) break;
                      }
                    }
                  }
                }
                pppplVar27 = (long ****)0x50;
                __Znwm();
                ppplStack_198 = (long ***)&ppplStack_230;
                ppplStack_190 = (long ***)0x0;
                *pppplVar27 = (long ***)0x0;
                pppplVar27[1] = (long ***)pppplVar14;
                ppplStack_1a0 = (long ***)pppplVar27;
                if ((long)pplStack_400 < 0) {
                  func_0x000107c3192c(pppplVar27 + 2,ppplStack_410,ppplStack_408);
                }
                else {
                  pppplVar27[3] = ppplStack_408;
                  pppplVar27[2] = ppplStack_410;
                  pppplVar27[4] = (long ***)pplStack_400;
                }
                ppplVar15 = ppplStack_3f0;
                ppplVar12 = ppplStack_3f8;
                pppplVar27[7] = ppplStack_3e8;
                ppplStack_3f8 = (long ***)0x0;
                ppplStack_3f0 = (long ***)0x0;
                pppplVar27[5] = ppplVar12;
                pppplVar27[6] = ppplVar15;
                pppplVar27[8] = ppplStack_3e0;
                *(undefined4 *)(pppplVar27 + 9) = (undefined4)uStack_3d8;
                if ((long ****)ppplStack_3e0 != (long ****)0x0) {
                  pppplVar17 = (long ****)ppplStack_3e8[1];
                  if (((ulong)ppplVar15 & (ulong)((long)ppplVar15 + -1)) == 0) {
                    pppplVar17 = (long ****)((ulong)pppplVar17 & (ulong)((long)ppplVar15 + -1));
                  }
                  else if (ppplVar15 <= pppplVar17) {
                    uVar8 = 0;
                    if ((long ****)ppplVar15 != (long ****)0x0) {
                      uVar8 = (ulong)pppplVar17 / (ulong)ppplVar15;
                    }
                    pppplVar17 = (long ****)((long)pppplVar17 - uVar8 * (long)ppplVar15);
                  }
                  ppplVar12[(long)pppplVar17] = (long **)(pppplVar27 + 7);
                  ppplStack_3e8 = (long ***)0x0;
                  ppplStack_3e0 = (long ***)0x0;
                }
                ppplStack_190 = (long ***)CONCAT71(ppplStack_190._1_7_,1);
                if ((pppplVar29 == (long ****)0x0) ||
                   (fStack_210 * (float)pppplVar29 < (float)(lStack_218 + 1))) {
                  uVar8 = 1;
                  if ((long ****)0x2 < pppplVar29) {
                    uVar8 = (ulong)(((ulong)pppplVar29 & (ulong)((long)pppplVar29 + -1)) != 0);
                  }
                  uVar8 = uVar8 | (long)pppplVar29 << 1;
                  uVar18 = (ulong)((float)(lStack_218 + 1) / fStack_210);
                  if (uVar8 <= uVar18) {
                    uVar8 = uVar18;
                  }
                  FUN_10937a92c(&ppplStack_230,uVar8);
                  pppplVar29 = (long ****)ppplStack_228;
                  if (((ulong)ppplStack_228 & (ulong)((long)ppplStack_228 + -1)) == 0) {
                    unaff_x27 = (long ****)((ulong)((long)ppplStack_228 + -1) & (ulong)pppplVar14);
                  }
                  else {
                    unaff_x27 = pppplVar14;
                    if (ppplStack_228 <= pppplVar14) {
                      uVar8 = 0;
                      if ((long ****)ppplStack_228 != (long ****)0x0) {
                        uVar8 = (ulong)pppplVar14 / (ulong)ppplStack_228;
                      }
                      unaff_x27 = (long ****)((long)pppplVar14 - uVar8 * (long)ppplStack_228);
                    }
                  }
                }
                ppplVar12 = (long ***)ppplStack_230[(long)unaff_x27];
                if (ppplVar12 == (long ***)0x0) {
                  *pppplVar27 = ppplStack_220;
                  ppplStack_230[(long)unaff_x27] = (long **)&ppplStack_220;
                  ppplStack_220 = (long ***)pppplVar27;
                  if (*pppplVar27 != (long ***)0x0) {
                    pppplVar14 = (long ****)(*pppplVar27)[1];
                    if (((ulong)pppplVar29 & (ulong)((long)pppplVar29 + -1)) == 0) {
                      pppplVar14 = (long ****)((ulong)pppplVar14 & (ulong)((long)pppplVar29 + -1));
                    }
                    else if (pppplVar29 <= pppplVar14) {
                      uVar8 = 0;
                      if (pppplVar29 != (long ****)0x0) {
                        uVar8 = (ulong)pppplVar14 / (ulong)pppplVar29;
                      }
                      pppplVar14 = (long ****)((long)pppplVar14 - uVar8 * (long)pppplVar29);
                    }
                    ppplStack_230[(long)pppplVar14] = (long **)pppplVar27;
                  }
                }
                else {
                  *pppplVar27 = (long ***)*ppplVar12;
                  *ppplVar12 = (long **)pppplVar27;
                }
                lStack_218 = lStack_218 + 1;
LAB_10937763c:
                func_0x000109379ee8(&ppplStack_3f8);
                if ((long)pplStack_400 < 0) {
                  __ZdlPv(ppplStack_410);
                }
                ppplVar12 = (long ***)ppplVar21[1];
                ppplVar15 = ppplVar21;
                if ((long ***)ppplVar21[1] == (long ***)0x0) {
                  do {
                    ppplVar21 = (long ***)ppplVar15[2];
                    bVar5 = (long ***)*ppplVar21 != ppplVar15;
                    ppplVar15 = ppplVar21;
                  } while (bVar5);
                }
                else {
                  do {
                    ppplVar21 = ppplVar12;
                    ppplVar12 = (long ***)*ppplVar21;
                  } while ((long ***)*ppplVar21 != (long ***)0x0);
                }
              } while (ppplVar21 != ppplVar10);
            }
            puVar22 = &uStack_270;
            func_0x00010937d21c(&uStack_2b0,&ppplStack_230);
            func_0x000109379e00(&ppplStack_230);
            plVar20 = &lStack_280;
            func_0x00010937d21c(&lStack_280,&uStack_2b0);
            func_0x000109379e00(&uStack_2b0);
          }
          else {
            puVar22 = &uStack_380;
            plVar20 = &lStack_390;
          }
          lVar7 = *plVar20;
          uVar8 = plVar20[1];
          *plVar20 = 0;
          plVar20[1] = 0;
          lStack_348 = lVar7;
          uStack_340 = uVar8;
          lStack_338 = plVar20[2];
          lStack_330 = plVar20[3];
          uStack_328 = (undefined4)plVar20[4];
          if (plVar20[3] != 0) {
            uVar18 = *(ulong *)(plVar20[2] + 8);
            if ((uVar8 & uVar8 - 1) == 0) {
              uVar18 = uVar18 & uVar8 - 1;
            }
            else if (uVar8 <= uVar18) {
              uVar3 = 0;
              if (uVar8 != 0) {
                uVar3 = uVar18 / uVar8;
              }
              uVar18 = uVar18 - uVar3 * uVar8;
            }
            *(long **)(lVar7 + uVar18 * 8) = &lStack_338;
            *puVar22 = 0;
            puVar22[1] = 0;
          }
          func_0x000109379e00(&lStack_280);
          func_0x00010937d21c((undefined8 *)(param_1 + 0xf8),&lStack_348);
          func_0x000109379e00(&lStack_348);
          func_0x000109379e00(&lStack_390);
          if (cStack_349 < '\0') {
            __ZdlPv(auStack_360[0]);
          }
          FUN_109380f8c(appplStack_2c0);
          ppplStack_198 = (long ***)0x0;
          ppplStack_1a0 = (long ***)0x0;
          FUN_109377fa0(&ppplStack_410,&ppplStack_1a0,param_1 + 0x88,puVar9);
          uVar19 = 1;
          func_0x000109cdaf68(param_1,param_2,1,&ppplStack_410);
          if (lStack_3d0 < 0) {
            __ZdlPv(ppplStack_3e0);
          }
          ppplStack_1a0 = (long ***)&ppplStack_3f8;
          FUN_109378cec(&ppplStack_1a0);
          ppplStack_1a0 = (long ***)&ppplStack_410;
          FUN_109378cec(&ppplStack_1a0);
          goto LAB_109377f40;
        }
      }
    }
  }
  FUN_109380f8c(appplStack_2c0);
  uVar19 = 0;
LAB_109377f40:
  *(undefined1 *)(param_1 + 0x80) = uVar19;
  return;
}



/* Entry: 109377fa0; end: 1093780df;  */

undefined ***
FUN_109377fa0(undefined ***param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined1 **ppuVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined1 auStack_210 [56];
  undefined8 uStack_1d8;
  char cStack_1c1;
  undefined **appuStack_1b0 [19];
  undefined1 **ppuStack_118;
  undefined4 uStack_110;
  undefined1 *puStack_108;
  code *pcStack_100;
  code *pcStack_f8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 **ppuStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_64;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 **ppuStack_50;
  byte bStack_40;
  long lStack_38;
  
  puVar3 = &uStack_b0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x000107c3192c(&ppuStack_90,*param_3,param_3[1]);
  }
  else {
    lStack_88 = param_3[1];
    ppuStack_90 = (undefined1 **)*param_3;
    lStack_80 = param_3[2];
  }
  uStack_70 = param_2[1];
  uStack_78 = *param_2;
  uStack_68 = 1;
  uStack_64 = 0;
  uStack_58 = 0;
  bStack_40 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  FUN_1093789c8(&uStack_b0,&ppuStack_90,&lStack_38,1);
  FUN_109378950(param_1,&uStack_b0,param_4);
  ppuVar1 = &puStack_98;
  puStack_98 = (undefined1 *)&uStack_b0;
  FUN_109378cec();
  if (((bStack_40 & 1) != 0) &&
     (ppuVar1 = (undefined1 **)CONCAT71(uStack_57,uStack_58), ppuVar1 != (undefined1 **)0x0)) {
    ppuStack_50 = ppuVar1;
    __ZdlPv();
  }
  if (lStack_80 < 0) {
    ppuVar1 = ppuStack_90;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume(ppuVar1);
  FUN_10926db08(&ppuStack_220);
  ppuStack_118 = &puStack_108;
  uStack_110 = 1;
  pcStack_100 = FUN_10937b8b8;
  pcStack_f8 = FUN_10937b948;
  puStack_108 = (undefined1 *)puVar3;
  FUN_10937ad5c(&ppuStack_220,ppuVar1,ppuStack_118,1);
  FUN_10926dc5c(extraout_x8,&ppuStack_218,&ppuStack_118);
  appuStack_1b0[0] = &PTR_DAT_11088d708;
  ppuStack_220 = &PTR_SUB_11088d6e0;
  ppuStack_218 = &PTR_DAT_11088d7b0;
  if (cStack_1c1 < '\0') {
    __ZdlPv(uStack_1d8);
  }
  ppuStack_218 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_210);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_220,&PTR_PTR_11088d720);
  pppuVar2 = appuStack_1b0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(pppuVar2);
  return pppuVar2;
}



/* Entry: 1093780e0; end: 1093781f3;  */

void FUN_1093780e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  code *pcStack_48;
  
  FUN_10926db08(&ppuStack_170);
  puStack_68 = &uStack_58;
  uStack_60 = 1;
  pcStack_50 = FUN_10937b8b8;
  pcStack_48 = FUN_10937b948;
  uStack_58 = param_3;
  FUN_10937ad5c(&ppuStack_170,param_2,puStack_68,1);
  FUN_10926dc5c(param_1,&ppuStack_168,&puStack_68);
  appuStack_100[0] = &PTR_DAT_11088d708;
  ppuStack_170 = &PTR_SUB_11088d6e0;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 1093781f4; end: 1093784d7;  */

uint FUN_1093781f4(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  char **ppcVar3;
  char *pcStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  pcStack_60 = (char *)*param_1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x8000000000000000;
  cVar1 = *pcStack_60;
  pcStack_40 = pcStack_60;
  if (cVar1 == '\x01') {
    uVar2 = *(undefined8 *)(pcStack_60 + 8);
    FUN_1093793a4();
    pcStack_60 = (char *)*param_1;
    cVar1 = *pcStack_60;
    uStack_38 = uVar2;
LAB_109378268:
    lStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x8000000000000000;
    if (cVar1 == '\x01') {
      lStack_58 = *(long *)(pcStack_60 + 8) + 8;
      goto LAB_1093782ac;
    }
    if (cVar1 != '\x02') {
      uStack_48 = 1;
      goto LAB_1093782ac;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
  }
  else {
    if (cVar1 != '\x02') {
      uStack_28 = 1;
      goto LAB_109378268;
    }
    uStack_50 = *(undefined8 *)(*(long *)(pcStack_60 + 8) + 8);
    uStack_30 = uStack_50;
  }
  uStack_48 = 0x8000000000000000;
  lStack_58 = 0;
LAB_1093782ac:
  ppcVar3 = &pcStack_40;
  FUN_109379420(ppcVar3,&pcStack_60);
  return (uint)ppcVar3 ^ 1;
}



/* Entry: 1093784d8; end: 1093785ff;  */

void FUN_1093784d8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = param_1[2];
  puVar6 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar3 - (long)puVar6) >> 2) < param_4) {
    puVar7 = param_1;
    lVar1 = param_2;
    lVar4 = param_3;
    uVar2 = param_4;
    if (puVar6 != (undefined8 *)0x0) {
      param_1[1] = puVar6;
      __ZdlPv();
      uVar3 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar7 = puVar6;
    }
    if (param_4 >> 0x3e != 0) {
      FUN_109231bc0();
      if (uVar2 != 0) {
        FUN_109265f60();
        lVar5 = puVar7[1];
        lVar4 = lVar4 - lVar1;
        if (lVar4 != 0) {
          _memmove(lVar5,lVar1,lVar4);
        }
        puVar7[1] = lVar5 + lVar4;
      }
      return;
    }
    uVar2 = (long)uVar3 >> 1;
    if ((ulong)((long)uVar3 >> 1) <= param_4) {
      uVar2 = param_4;
    }
    if (0x7ffffffffffffffb < uVar3) {
      uVar2 = 0x3fffffffffffffff;
    }
    FUN_109265f60(param_1,uVar2);
    lVar4 = param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar4,param_2,param_3);
    }
    lVar4 = lVar4 + param_3;
  }
  else {
    puVar7 = (undefined8 *)param_1[1];
    if ((ulong)((long)puVar7 - (long)puVar6 >> 2) < param_4) {
      lVar4 = param_2 + ((long)puVar7 - (long)puVar6);
      if (puVar7 != puVar6) {
        _memmove(puVar6,param_2);
        puVar7 = (undefined8 *)param_1[1];
      }
      param_3 = param_3 - lVar4;
      if (param_3 != 0) {
        _memmove(puVar7,lVar4,param_3);
      }
      lVar4 = (long)puVar7 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      if (param_3 != 0) {
        _memmove(puVar6,param_2,param_3);
      }
      lVar4 = (long)puVar6 + param_3;
    }
  }
  param_1[1] = lVar4;
  return;
}



/* Entry: 109378600; end: 109378677;  */

void FUN_109378600(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109265f60(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 109378678; end: 109378847;  */

long * FUN_109378678(long *param_1,long *param_2,int param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  
  plVar3 = param_2;
  if ((param_1 == param_2) || (plVar3 = param_1, param_3 <= *(int *)((long)param_1 + 0x1c))) {
    return plVar3;
  }
  uVar4 = 1;
  do {
    plVar3 = param_1;
    uVar5 = uVar4;
    plVar8 = param_1;
    if (uVar4 == 0) {
      uVar7 = 0;
      uVar10 = 0;
    }
    else {
      uVar6 = 0;
      do {
        uVar7 = uVar6;
        uVar10 = uVar4;
        if (plVar8 == param_2) break;
        plVar11 = (long *)plVar8[1];
        plVar9 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar9[2];
            bVar2 = (long *)*plVar8 != plVar9;
            plVar9 = plVar8;
          } while (bVar2);
        }
        else {
          do {
            plVar8 = plVar11;
            plVar11 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar4;
      } while (uVar6 != uVar4);
    }
LAB_109378768:
    param_1 = plVar8;
    if ((param_1 == param_2) || (param_3 <= *(int *)((long)param_1 + 0x1c))) {
      uVar5 = (uVar7 - uVar10) + uVar5;
      if (uVar5 == 0) {
        return plVar3;
      }
      if (uVar5 == 1) {
        return param_1;
      }
      do {
        uVar4 = uVar5 >> 1;
        plVar8 = plVar3;
        uVar7 = uVar4;
        plVar11 = plVar3;
        if (1 < uVar5) {
          do {
            plVar9 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) {
              do {
                plVar8 = (long *)plVar11[2];
                bVar2 = (long *)*plVar8 != plVar11;
                plVar11 = plVar8;
              } while (bVar2);
            }
            else {
              do {
                plVar8 = plVar9;
                plVar9 = (long *)*plVar8;
              } while ((long *)*plVar8 != (long *)0x0);
            }
            uVar10 = uVar7 - 1;
            bVar2 = 0 < (long)uVar7;
            uVar7 = uVar10;
            plVar11 = plVar8;
          } while (uVar10 != 0 && bVar2);
        }
        if (*(int *)((long)plVar8 + 0x1c) < param_3) {
          plVar11 = (long *)plVar8[1];
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar3 = (long *)plVar8[2];
              bVar2 = (long *)*plVar3 != plVar8;
              plVar8 = plVar3;
            } while (bVar2);
          }
          else {
            do {
              plVar3 = plVar11;
              plVar11 = (long *)*plVar3;
            } while ((long *)*plVar3 != (long *)0x0);
          }
          uVar4 = uVar5 + ~uVar4;
        }
        uVar5 = uVar4;
      } while (uVar5 != 0);
      return plVar3;
    }
    uVar4 = uVar5 * 2;
  } while ((uVar5 & 0x7fffffffffffffff) >> 0x3e == 0);
  uVar6 = 0;
  uVar10 = uVar5 * -2;
  uVar1 = 1;
  plVar8 = param_1;
  if (uVar4 != 0xffffffffffffffff && 0 < (long)uVar10) {
    uVar1 = uVar5 * -2;
  }
  do {
    plVar3 = param_1;
    uVar5 = uVar4;
    uVar7 = uVar6;
    if (plVar8 == param_2) break;
    plVar11 = (long *)*plVar8;
    if ((long *)*plVar8 == (long *)0x0) {
      do {
        plVar9 = (long *)plVar8[2];
        bVar2 = (long *)*plVar9 == plVar8;
        plVar8 = plVar9;
      } while (bVar2);
    }
    else {
      do {
        plVar9 = plVar11;
        plVar11 = (long *)plVar9[1];
      } while ((long *)plVar9[1] != (long *)0x0);
    }
    uVar6 = uVar6 + 1;
    uVar7 = uVar1;
    plVar8 = plVar9;
  } while (uVar6 != uVar1);
  goto LAB_109378768;
}



/* Entry: 109378848; end: 10937894f;  */

void FUN_109378848(int param_1,long *param_2,long *param_3,long *param_4,char *param_5)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  long *plVar5;
  
  if (param_1 == 0) {
    cVar4 = '\0';
  }
  else if (*param_5 == '\x01') {
    plVar2 = (long *)*param_4;
    func_0x000108a2a32c(plVar2,param_4[1],*param_2 + 0x1c,*param_2 + 0x1c);
    param_4[1] = (long)plVar2;
    plVar5 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = (long *)*plVar3 != plVar2;
        plVar2 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar5;
        plVar5 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
    param_4[1] = (long)plVar3;
    plVar5 = (long *)((long *)*param_2)[1];
    plVar2 = (long *)*param_2;
    if (plVar5 == (long *)0x0) {
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = (long *)*plVar3 != plVar2;
        plVar2 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar5;
        plVar5 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
    *param_2 = (long)plVar3;
    plVar5 = (long *)((long *)*param_3)[1];
    plVar2 = (long *)*param_3;
    if (plVar5 == (long *)0x0) {
      do {
        plVar3 = (long *)plVar2[2];
        bVar1 = (long *)*plVar3 != plVar2;
        plVar2 = plVar3;
      } while (bVar1);
    }
    else {
      do {
        plVar3 = plVar5;
        plVar5 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
    cVar4 = '\0';
    *param_3 = (long)plVar3;
  }
  else {
    cVar4 = '\x01';
  }
  *param_5 = cVar4;
  return;
}



/* Entry: 109378950; end: 1093789c7;  */

undefined8 FUN_109378950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [24];
  undefined1 *puStack_38;
  
  FUN_109378d5c(auStack_50,param_3);
  FUN_109379174(param_1,param_2,auStack_50);
  puStack_38 = auStack_50;
  FUN_109378cec(&puStack_38);
  return param_1;
}



/* Entry: 1093789c8; end: 109378a4b;  */

void FUN_1093789c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109378a4c(param_1,param_4);
    lVar1 = param_1;
    FUN_109378af4(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109378a4c; end: 109378a97;  */

undefined1  [16] FUN_109378a4c(long *param_1,ulong param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    plVar1 = param_1;
    FUN_109378aac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0xb);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = plVar1;
    return auVar4;
  }
  FUN_109378a98();
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_2 * 0x58;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  uVar3 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar3 = param_2;
    FUN_109378b78(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = param_4;
  return auVar6;
}



/* Entry: 109378a98; end: 109378aab;  */

undefined1  [16] FUN_109378a98(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  func_0x000104c4f6cc(&DAT_10f62a4d8);
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_109378b78(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109378aac; end: 109378af3;  */

undefined1  [16] FUN_109378aac(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 < 0x2e8ba2e8ba2e8bb) {
    lVar1 = param_2 * 0x58;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  uVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    uVar2 = param_2;
    FUN_109378b78(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = param_4;
  return auVar4;
}



/* Entry: 109378af4; end: 109378b77;  */

long FUN_109378af4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_109378b78(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  return param_4;
}



/* Entry: 109378b78; end: 109378bfb;  */

undefined8 * FUN_109378b78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x21) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  FUN_109378bfc(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 109378bfc; end: 109378c4f;  */

undefined1 * FUN_109378bfc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_109378c50();
  return param_1;
}



/* Entry: 109378c50; end: 109378ceb;  */

void FUN_109378c50(undefined8 *param_1,long *param_2)

{
  if ((char)param_2[3] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_109285684(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 2);
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 109378cec; end: 109378d5b;  */

void FUN_109378cec(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar2 = plVar3[1];
    lVar1 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x58;
        func_0x000109378c9c(lVar2);
      } while (lVar2 != lVar4);
      lVar1 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109378d5c; end: 109378e2b;  */

void FUN_109378d5c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109378e2c(param_1,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  lVar2 = *param_2;
  lVar1 = param_2[1];
  if (lVar2 != lVar1) {
    puVar3 = (undefined8 *)param_1[1];
    do {
      if (puVar3 < (undefined8 *)param_1[2]) {
        FUN_109379110(puVar3,lVar2);
        puVar3 = puVar3 + 0xb;
      }
      else {
        puVar3 = param_1;
        FUN_109378fd0(param_1,lVar2);
      }
      param_1[1] = puVar3;
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != lVar1);
  }
  return;
}



/* Entry: 109378e2c; end: 109378f0f;  */

void FUN_109378e2c(long *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar3 = *param_1;
  if ((undefined8 *)((param_1[2] - lVar3 >> 3) * 0x2e8ba2e8ba2e8ba3) < param_2) {
    if ((undefined8 *)0x2e8ba2e8ba2e8ba < param_2) {
      FUN_109378a98();
      func_0x0001056754bc(&plStack_58);
      __Unwind_Resume(param_1);
      if (param_2 != param_3) {
        puVar4 = (undefined8 *)(param_4 + 0x38);
        puVar6 = param_2 + 7;
        do {
          uVar8 = puVar6[-6];
          uVar7 = puVar6[-7];
          puVar4[-5] = puVar6[-5];
          puVar4[-6] = uVar8;
          puVar4[-7] = uVar7;
          puVar6[-6] = 0;
          puVar6[-5] = 0;
          puVar6[-7] = 0;
          uVar8 = puVar6[-3];
          uVar7 = puVar6[-4];
          uVar9 = *(undefined8 *)((long)puVar6 + -0x17);
          *(undefined8 *)((long)puVar4 + -0xf) = *(undefined8 *)((long)puVar6 + -0xf);
          *(undefined8 *)((long)puVar4 + -0x17) = uVar9;
          puVar4[-3] = uVar8;
          puVar4[-4] = uVar7;
          *(undefined1 *)puVar4 = 0;
          *(undefined1 *)(puVar4 + 3) = 0;
          if (*(char *)(puVar6 + 3) == '\x01') {
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            uVar7 = *puVar6;
            puVar4[1] = puVar6[1];
            *puVar4 = uVar7;
            puVar4[2] = puVar6[2];
            *puVar6 = 0;
            puVar6[1] = 0;
            puVar6[2] = 0;
            *(undefined1 *)(puVar4 + 3) = 1;
          }
          puVar4 = puVar4 + 0xb;
          puVar1 = puVar6 + 4;
          puVar6 = puVar6 + 0xb;
        } while (puVar1 != param_3);
        do {
          func_0x000109378c9c(param_2);
          param_2 = param_2 + 0xb;
        } while (param_2 != param_3);
      }
      return;
    }
    lVar5 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_109378aac();
    lVar3 = (long)plVar2 + (lVar5 - lVar3);
    lVar5 = lVar3 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar3;
    plStack_48 = (long *)lVar3;
    plStack_40 = plVar2 + (long)param_2 * 0xb;
    FUN_109378f10(param_1,*param_1,param_1[1],lVar5);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    param_1[1] = lVar3;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + (long)param_2 * 0xb);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x0001056754bc(&plStack_58);
  }
  return;
}



/* Entry: 109378f10; end: 109378fcf;  */

void FUN_109378f10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_2 != param_3) {
    puVar2 = (undefined8 *)(param_4 + 0x38);
    puVar3 = param_2 + 7;
    do {
      uVar5 = puVar3[-6];
      uVar4 = puVar3[-7];
      puVar2[-5] = puVar3[-5];
      puVar2[-6] = uVar5;
      puVar2[-7] = uVar4;
      puVar3[-6] = 0;
      puVar3[-5] = 0;
      puVar3[-7] = 0;
      uVar5 = puVar3[-3];
      uVar4 = puVar3[-4];
      uVar6 = *(undefined8 *)((long)puVar3 + -0x17);
      *(undefined8 *)((long)puVar2 + -0xf) = *(undefined8 *)((long)puVar3 + -0xf);
      *(undefined8 *)((long)puVar2 + -0x17) = uVar6;
      puVar2[-3] = uVar5;
      puVar2[-4] = uVar4;
      *(undefined1 *)puVar2 = 0;
      *(undefined1 *)(puVar2 + 3) = 0;
      if (*(char *)(puVar3 + 3) == '\x01') {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        uVar4 = *puVar3;
        puVar2[1] = puVar3[1];
        *puVar2 = uVar4;
        puVar2[2] = puVar3[2];
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined1 *)(puVar2 + 3) = 1;
      }
      puVar2 = puVar2 + 0xb;
      puVar1 = puVar3 + 4;
      puVar3 = puVar3 + 0xb;
    } while (puVar1 != param_3);
    do {
      func_0x000109378c9c(param_2);
      param_2 = param_2 + 0xb;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 109378fd0; end: 10937910f;  */

long * FUN_109378fd0(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar5 = param_1[1] - *param_1;
  uVar3 = (lVar5 >> 3) * 0x2e8ba2e8ba2e8ba3 + 1;
  if (uVar3 < 0x2e8ba2e8ba2e8bb) {
    lVar2 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar2 * 0x5d1745d1745d1746;
    if (uVar4 < uVar3 || uVar4 - uVar3 == 0) {
      uVar4 = uVar3;
    }
    if (0x1745d1745d1745c < (ulong)(lVar2 * 0x2e8ba2e8ba2e8ba3)) {
      uVar4 = 0x2e8ba2e8ba2e8ba;
    }
    plStack_38 = param_1;
    if (uVar4 == 0) {
      plVar1 = (long *)0x0;
    }
    else {
      plVar1 = param_1;
      FUN_109378aac();
    }
    lVar5 = (long)plVar1 + lVar5;
    plStack_40 = plVar1 + uVar4 * 0xb;
    plStack_58 = plVar1;
    plStack_50 = (long *)lVar5;
    plStack_48 = (long *)lVar5;
    FUN_109379110(lVar5,param_2);
    plStack_48 = (long *)(lVar5 + 0x58);
    lVar5 = lVar5 + (*param_1 - param_1[1]);
    FUN_109378f10(param_1,*param_1,param_1[1],lVar5);
    plVar1 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = lVar5;
    lVar5 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar5;
    func_0x0001056754bc(&plStack_58);
    return plVar1;
  }
  FUN_109378a98();
  func_0x0001056754bc(&plStack_58);
  __Unwind_Resume();
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    lVar2 = param_2[1];
    lVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = lVar2;
    *param_1 = lVar5;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109379110; end: 109379173;  */

undefined8 * FUN_109379110(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 1;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



/* Entry: 109379174; end: 109379217;  */

undefined8 * FUN_109379174(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_109379218(param_1,*param_2,param_2[1],(param_2[1] - *param_2 >> 3) * 0x2e8ba2e8ba2e8ba3);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_109379218();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return param_1;
}



/* Entry: 109379218; end: 10937929b;  */

void FUN_109379218(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109378a4c(param_1,param_4);
    lVar1 = param_1;
    FUN_10937929c(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 10937929c; end: 10937931f;  */

long FUN_10937929c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x58) {
    FUN_109379320(param_4,param_2);
    param_4 = param_4 + 0x58;
  }
  return param_4;
}



/* Entry: 109379320; end: 1093793a3;  */

undefined8 * FUN_109379320(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar3 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x21) = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  FUN_109378bfc(param_1 + 7,param_2 + 7);
  return param_1;
}



/* Entry: 1093793a4; end: 10937941f;  */

long * FUN_1093793a4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      func_0x000107c2abd4(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) &&
       (func_0x000107c2abd4(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 109379420; end: 10937951b;  */

bool FUN_109379420(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar4 = param_1[2];
      lVar5 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar4 = param_1[1];
      lVar5 = param_2[1];
    }
    else {
      lVar4 = param_1[3];
      lVar5 = param_2[3];
    }
    return lVar4 == lVar5;
  }
  uVar3 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f5673d2);
  FUN_10937951c(uVar3,0xd4,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1093794e4);
  (*pcVar2)();
}



/* Entry: 10937951c; end: 10937964b;  */

void FUN_10937951c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 auStack_80 [2];
  char cStack_69;
  long alStack_68 [2];
  char cStack_51;
  undefined8 **ppuStack_50;
  long lStack_48;
  long lStack_40;
  
  func_0x000107c31940(auStack_80,&UNK_10f567403);
  FUN_10937967c(alStack_68,auStack_80,param_2);
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  plVar4 = alStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar4,puVar3,uVar1);
  lStack_48 = plVar4[1];
  ppuStack_50 = (undefined8 **)*plVar4;
  lStack_40 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(alStack_68[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  pppuVar2 = (undefined8 ***)ppuStack_50;
  if (-1 < lStack_40) {
    pppuVar2 = &ppuStack_50;
  }
  FUN_109379804(param_1,param_2,pppuVar2);
  *param_1 = &PTR_FUN_110af4578;
  if (lStack_40 < 0) {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10937964c; end: 10937967b;  */

void FUN_10937964c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10937967c; end: 109379803;  */

/* WARNING: Removing unreachable block (ram,0x000109379754) */

void FUN_10937967c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_88,&UNK_10f567414,param_2);
  puVar2 = auStack_88;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&DAT_10f62a9de,1);
  uStack_68 = puVar2[1];
  uStack_70 = *puVar2;
  lStack_60 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__19to_stringEi(&puStack_a0,param_3);
  ppuVar1 = (undefined1 **)puStack_a0;
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    ppuVar1 = &puStack_a0;
  }
  puVar2 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,ppuVar1,uStack_98);
  uStack_48 = puVar2[1];
  uStack_50 = *puVar2;
  uStack_40 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = &uStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f4edf8b,2);
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((char)bStack_89 < '\0') {
    __ZdlPv(puStack_a0);
  }
  if (lStack_60 < 0) {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  return;
}



/* Entry: 109379804; end: 109379853;  */

undefined8 * FUN_109379804(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110af44f8;
  *(undefined4 *)(param_1 + 1) = param_2;
  __ZNSt13runtime_errorC1EPKc(param_1 + 2,param_3);
  return param_1;
}



/* Entry: 109379854; end: 109379887;  */

void FUN_109379854(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109379888; end: 10937988f;  */

void FUN_109379888(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNKSt13runtime_error4whatEv_110346040)(param_1 + 0x10);
  return;
}



/* Entry: 109379890; end: 1093798f3;  */

void FUN_109379890(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 1093798f4; end: 109379927;  */

long FUN_1093798f4(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_109379928(param_1);
  }
  return param_1;
}



/* Entry: 109379928; end: 1093799d7;  */

/* WARNING: Removing unreachable block (ram,0x000109379954) */

void FUN_109379928(long param_1)

{
  long lVar1;
  
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != **(long **)(param_1 + 8); lVar1 = lVar1 + -0x18
      ) {
  }
  return;
}



/* Entry: 1093799d8; end: 109379c17;  */

long * FUN_1093799d8(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *unaff_x25;
  ulong uVar7;
  
  plVar3 = param_1;
  func_0x000107c31944();
  plVar6 = (long *)param_1[1];
  if (plVar6 != (long *)0x0) {
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      unaff_x25 = (long *)(uVar7 & (ulong)plVar3);
    }
    else {
      unaff_x25 = plVar3;
      if (plVar6 <= plVar3) {
        uVar4 = 0;
        if (plVar6 != (long *)0x0) {
          uVar4 = (ulong)plVar3 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar3 - uVar4 * (long)plVar6);
      }
    }
    plVar1 = *(long **)(*param_1 + (long)unaff_x25 * 8);
    if (plVar1 != (long *)0x0) {
      for (plVar1 = (long *)*plVar1; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        plVar2 = (long *)plVar1[1];
        if (plVar2 == plVar3) {
          plVar2 = param_1;
          func_0x000104c4fbc4(param_1,plVar1 + 2,param_2);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar1;
          }
        }
        else {
          if (((ulong)plVar6 & uVar7) == 0) {
            plVar2 = (long *)((ulong)plVar2 & uVar7);
          }
          else if (plVar6 <= plVar2) {
            uVar4 = 0;
            if (plVar6 != (long *)0x0) {
              uVar4 = (ulong)plVar2 / (ulong)plVar6;
            }
            plVar2 = (long *)((long)plVar2 - uVar4 * (long)plVar6);
          }
          if (plVar2 != unaff_x25) break;
        }
      }
    }
  }
  plVar1 = (long *)0x30;
  __Znwm();
  *plVar1 = 0;
  plVar1[1] = (long)plVar3;
  lVar5 = *param_3;
  plVar1[3] = param_3[1];
  plVar1[2] = lVar5;
  plVar1[4] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(plVar1 + 5) = 0;
  if ((plVar6 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar6 < (float)(param_1[3] + 1))
     ) {
    uVar7 = 1;
    if ((long *)0x2 < plVar6) {
      uVar7 = (ulong)(((ulong)plVar6 & (long)plVar6 - 1U) != 0);
    }
    uVar7 = uVar7 | (long)plVar6 << 1;
    uVar4 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    FUN_1092afd6c(param_1,uVar7);
    plVar6 = (long *)param_1[1];
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar6 - 1U & (ulong)plVar3);
    }
    else {
      unaff_x25 = plVar3;
      if (plVar6 <= plVar3) {
        uVar7 = 0;
        if (plVar6 != (long *)0x0) {
          uVar7 = (ulong)plVar3 / (ulong)plVar6;
        }
        unaff_x25 = (long *)((long)plVar3 - uVar7 * (long)plVar6);
      }
    }
  }
  lVar5 = *param_1;
  plVar3 = *(long **)(lVar5 + (long)unaff_x25 * 8);
  if (plVar3 == (long *)0x0) {
    plVar3 = param_1 + 2;
    *plVar1 = *plVar3;
    *plVar3 = (long)plVar1;
    *(long **)(lVar5 + (long)unaff_x25 * 8) = plVar3;
    if (*plVar1 == 0) goto LAB_109379bd0;
    plVar3 = *(long **)(*plVar1 + 8);
    if (((ulong)plVar6 & (long)plVar6 - 1U) == 0) {
      plVar3 = (long *)((ulong)plVar3 & (long)plVar6 - 1U);
    }
    else if (plVar6 <= plVar3) {
      uVar7 = 0;
      if (plVar6 != (long *)0x0) {
        uVar7 = (ulong)plVar3 / (ulong)plVar6;
      }
      plVar3 = (long *)((long)plVar3 - uVar7 * (long)plVar6);
    }
    plVar3 = (long *)(*param_1 + (long)plVar3 * 8);
  }
  else {
    *plVar1 = *plVar3;
  }
  *plVar3 = (long)plVar1;
LAB_109379bd0:
  param_1[3] = param_1[3] + 1;
  return plVar1;
}



/* Entry: 109379c18; end: 10937a097;  */

long * FUN_109379c18(long *param_1)

{
  long lVar1;
  
  func_0x000109379c50(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10937a098; end: 10937a2e3;  */

undefined1  [16]
FUN_10937a098(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x27;
  ulong uVar9;
  undefined1 auVar10 [16];
  long *aplStack_78 [3];
  
  plVar6 = param_1;
  func_0x000107c31944();
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar9 = (long)plVar8 - 1;
    if (((ulong)plVar8 & uVar9) == 0) {
      unaff_x27 = (long *)(uVar9 & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar5 = 0;
        if (plVar8 != (long *)0x0) {
          uVar5 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar5 * (long)plVar8);
      }
    }
    puVar2 = *(undefined8 **)(*param_1 + (long)unaff_x27 * 8);
    if (puVar2 != (undefined8 *)0x0) {
      for (plVar7 = (long *)*puVar2; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
        plVar3 = (long *)plVar7[1];
        if (plVar3 == plVar6) {
          plVar3 = param_1;
          func_0x000104c4fbc4(param_1,plVar7 + 2,param_2);
          if (((ulong)plVar3 & 1) != 0) {
            uVar1 = 0;
            goto LAB_10937a2a0;
          }
        }
        else {
          if (((ulong)plVar8 & uVar9) == 0) {
            plVar3 = (long *)((ulong)plVar3 & uVar9);
          }
          else if (plVar8 <= plVar3) {
            uVar5 = 0;
            if (plVar8 != (long *)0x0) {
              uVar5 = (ulong)plVar3 / (ulong)plVar8;
            }
            plVar3 = (long *)((long)plVar3 - uVar5 * (long)plVar8);
          }
          if (plVar3 != unaff_x27) break;
        }
      }
    }
  }
  FUN_10937a2e4(aplStack_78,param_1,plVar6,param_3,param_4,param_5);
  if ((plVar8 == (long *)0x0) || (*(float *)(param_1 + 4) * (float)plVar8 < (float)(param_1[3] + 1))
     ) {
    uVar9 = 1;
    if ((long *)0x2 < plVar8) {
      uVar9 = (ulong)(((ulong)plVar8 & (long)plVar8 - 1U) != 0);
    }
    uVar9 = uVar9 | (long)plVar8 << 1;
    uVar5 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar9 <= uVar5) {
      uVar9 = uVar5;
    }
    FUN_10937a3dc(param_1,uVar9);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
      unaff_x27 = (long *)((long)plVar8 - 1U & (ulong)plVar6);
    }
    else {
      unaff_x27 = plVar6;
      if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        unaff_x27 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
    }
  }
  lVar4 = *param_1;
  plVar6 = *(long **)(lVar4 + (long)unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = param_1 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar4 + (long)unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      plVar6 = *(long **)(*aplStack_78[0] + 8);
      if (((ulong)plVar8 & (long)plVar8 - 1U) == 0) {
        plVar6 = (long *)((ulong)plVar6 & (long)plVar8 - 1U);
      }
      else if (plVar8 <= plVar6) {
        uVar9 = 0;
        if (plVar8 != (long *)0x0) {
          uVar9 = (ulong)plVar6 / (ulong)plVar8;
        }
        plVar6 = (long *)((long)plVar6 - uVar9 * (long)plVar8);
      }
      *(long **)(*param_1 + (long)plVar6 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar1 = 1;
  plVar7 = aplStack_78[0];
LAB_10937a2a0:
  auVar10._8_8_ = uVar1;
  auVar10._0_8_ = plVar7;
  return auVar10;
}



/* Entry: 10937a2e4; end: 10937a363;  */

void FUN_10937a2e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  puVar1 = (undefined8 *)0x78;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  uStack_38 = *param_5;
  FUN_10937a364(puVar1 + 2,&uStack_38,&uStack_39);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10937a364; end: 10937a3db;  */

undefined8 * FUN_10937a364(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = (undefined8 *)*param_2;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = &PTR_DAT_1108a5c28;
  param_1[6] = 0x100000001;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



/* Entry: 10937a3dc; end: 10937a4ab;  */

void FUN_10937a3dc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  uVar7 = param_1[1];
  if (uVar7 < param_2) {
LAB_10937a424:
    if (param_2 == 0) {
      uVar7 = *param_1;
      *param_1 = 0;
      if (uVar7 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if (param_2 >> 0x3d != 0) {
        func_0x000104c4f740();
        uVar7 = *param_1;
        *param_1 = param_2;
        if (uVar7 != 0) {
          if ((char)param_1[2] == '\x01') {
            func_0x00010937a05c(uVar7 + 0x10);
          }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(uVar7);
          return;
        }
        return;
      }
      uVar7 = param_2 << 3;
      __Znwm();
      uVar1 = *param_1;
      *param_1 = uVar7;
      if (uVar1 != 0) {
        __ZdlPv();
      }
      uVar7 = 0;
      param_1[1] = param_2;
      do {
        *(undefined8 *)(*param_1 + uVar7 * 8) = 0;
        uVar7 = uVar7 + 1;
      } while (param_2 != uVar7);
      plVar2 = (long *)param_1[2];
      if (plVar2 != (long *)0x0) {
        uVar7 = plVar2[1];
        uVar1 = param_2 - 1;
        if ((param_2 & uVar1) == 0) {
          uVar7 = uVar7 & uVar1;
        }
        else if (param_2 <= uVar7) {
          uVar5 = 0;
          if (param_2 != 0) {
            uVar5 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar5 * param_2;
        }
        *(ulong **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar3 = (long *)*plVar2;
        while (plVar3 != (long *)0x0) {
          uVar5 = plVar3[1];
          if ((param_2 & uVar1) == 0) {
            uVar5 = uVar5 & uVar1;
          }
          else if (param_2 <= uVar5) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar5 / param_2;
            }
            uVar5 = uVar5 - uVar6 * param_2;
          }
          plVar4 = plVar3;
          if (uVar5 != uVar7) {
            uVar6 = *param_1;
            if (*(long *)(uVar6 + uVar5 * 8) == 0) {
              *(long **)(uVar6 + uVar5 * 8) = plVar2;
              uVar7 = uVar5;
            }
            else {
              *plVar2 = *plVar3;
              *plVar3 = **(undefined8 **)(uVar6 + uVar5 * 8);
              **(long **)(uVar6 + uVar5 * 8) = (long)plVar3;
              plVar4 = plVar2;
            }
          }
          plVar2 = plVar4;
          plVar3 = (long *)*plVar4;
        }
      }
    }
    return;
  }
  if (param_2 < uVar7) {
    uVar1 = (ulong)((float)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if (1 < uVar1) {
      uVar1 = 1L << (-LZCOUNT(uVar1 - 1) & 0x3fU);
    }
    if (param_2 <= uVar1) {
      param_2 = uVar1;
    }
    if (param_2 < uVar7) goto LAB_10937a424;
  }
  return;
}



/* Entry: 10937a4ac; end: 10937a62f;  */

void FUN_10937a4ac(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    uVar1 = *param_1;
    *param_1 = 0;
    if (uVar1 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      func_0x000104c4f740();
      uVar1 = *param_1;
      *param_1 = param_2;
      if (uVar1 != 0) {
        if ((char)param_1[2] == '\x01') {
          func_0x00010937a05c(uVar1 + 0x10);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(uVar1);
        return;
      }
      return;
    }
    uVar1 = param_2 << 3;
    __Znwm();
    uVar2 = *param_1;
    *param_1 = uVar1;
    if (uVar2 != 0) {
      __ZdlPv();
    }
    uVar1 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar1 = plVar3[1];
      uVar2 = param_2 - 1;
      if ((param_2 & uVar2) == 0) {
        uVar1 = uVar1 & uVar2;
      }
      else if (param_2 <= uVar1) {
        uVar6 = 0;
        if (param_2 != 0) {
          uVar6 = uVar1 / param_2;
        }
        uVar1 = uVar1 - uVar6 * param_2;
      }
      *(ulong **)(*param_1 + uVar1 * 8) = param_1 + 2;
      plVar4 = (long *)*plVar3;
      while (plVar4 != (long *)0x0) {
        uVar6 = plVar4[1];
        if ((param_2 & uVar2) == 0) {
          uVar6 = uVar6 & uVar2;
        }
        else if (param_2 <= uVar6) {
          uVar7 = 0;
          if (param_2 != 0) {
            uVar7 = uVar6 / param_2;
          }
          uVar6 = uVar6 - uVar7 * param_2;
        }
        plVar5 = plVar4;
        if (uVar6 != uVar1) {
          uVar7 = *param_1;
          if (*(long *)(uVar7 + uVar6 * 8) == 0) {
            *(long **)(uVar7 + uVar6 * 8) = plVar3;
            uVar1 = uVar6;
          }
          else {
            *plVar3 = *plVar4;
            *plVar4 = **(undefined8 **)(uVar7 + uVar6 * 8);
            **(long **)(uVar7 + uVar6 * 8) = (long)plVar4;
            plVar5 = plVar3;
          }
        }
        plVar3 = plVar5;
        plVar4 = (long *)*plVar5;
      }
    }
  }
  return;
}



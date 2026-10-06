/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a576ce4; end: 10a576e4f;  */

ulong FUN_10a576ce4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a576e50(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a576e08);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a576ce4(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a576e50; end: 10a576e7f;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a576e50(ulong *param_1,long *param_2)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar5 = (ulong *)&UNK_10f6337b7;
    FUN_10a00946c();
    *puVar5 = (ulong)&PTR_FUN_110bf14c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
    return puVar5;
  }
  puVar5 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar5 == (ulong *)0x0) {
    puVar5 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar6 = puVar5;
    ___cxa_demangle(puVar5,0,0,&iStack_34);
    if (iStack_34 == 0) {
      func_0x000107c2b054(param_1,puVar6);
      _free(puVar6);
      return puVar6;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar6 = puVar5;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar6) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar6 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar6 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar5 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar5;
      }
    }
    return puVar6;
  }
  if (puVar6 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar6;
    puVar3 = param_1;
    if (puVar6 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar6 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar6 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar6;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar6);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar6) = 0;
  return param_1;
}



/* Entry: 10a576e80; end: 10a576e8f;  */

void FUN_10a576e80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf14c0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a576e90; end: 10a576eaf;  */

void FUN_10a576e90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bf14c0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a576eb0; end: 10a576ebf;  */

void FUN_10a576eb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a576eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a576ec0; end: 10a576f3f;  */

undefined8 * FUN_10a576ec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c41b28;
  puVar1[2] = &PTR_DAT_110c41bd0;
  puVar1[7] = &PTR_DAT_110c41c28;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a576f40; end: 10a576fbf;  */

undefined8 * FUN_10a576f40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c3ee00;
  puVar1[2] = &PTR_DAT_110c3eeb0;
  puVar1[7] = &PTR_DAT_110c3ef08;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a576fc0; end: 10a576fc7;  */

undefined8 * FUN_10a576fc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x260;
  __Znwm();
  puVar1[0x48] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x4b) = 0x100;
  puVar1[0x4a] = 0;
  puVar1[0x49] = 0;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110bd5040;
  puVar1[2] = &PTR_DAT_110bd5150;
  puVar1[7] = &PTR_DAT_110bd51a8;
  puVar1[0xd] = &PTR_DAT_110bd51c8;
  puVar1[0x48] = &PTR_DAT_110bd52c8;
  puVar1[0x16] = &PTR_DAT_110bd5238;
  puVar1[0x17] = &PTR_DAT_110bd5268;
  puVar1[0x3f] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x41] = 0;
  puVar1[0x40] = 0;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  puVar1[0x44] = 0;
  *(undefined4 *)(puVar1 + 0x45) = 0x3f800000;
  puVar1[0x47] = 0;
  puVar1[0x46] = 0;
  return puVar1;
}



/* Entry: 10a576fc8; end: 10a577077;  */

undefined8 * FUN_10a576fc8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x210;
  __Znwm();
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x3e] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x41) = 0x100;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110bd5358;
  puVar1[2] = &PTR_DAT_110bd5468;
  puVar1[7] = &PTR_DAT_110bd54c0;
  puVar1[0xd] = &PTR_DAT_110bd54e0;
  puVar1[0x3e] = &PTR_DAT_110bd55e0;
  puVar1[0x16] = &PTR_DAT_110bd5550;
  puVar1[0x17] = &PTR_DAT_110bd5580;
  return puVar1;
}



/* Entry: 10a577078; end: 10a5770cf;  */

undefined8 FUN_10a577078(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x268;
  __Znwm(0x268);
  FUN_10a64cc10();
  return uVar1;
}



/* Entry: 10a5770d0; end: 10a577193;  */

undefined *** FUN_10a5770d0(undefined8 param_1)

{
  undefined ***pppuVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a061484;
  ppuStack_60 = &PTR_DAT_110b9ec98;
  uStack_58 = 0x10a577198;
  puStack_78 = &UNK_10f65c897;
  uStack_70 = 0x19;
  FUN_10a57077c(param_1,&puStack_78,&pcStack_68,100,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return pppuVar1;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume(pppuVar1);
  pppuVar1 = (undefined ***)0x788;
  __Znwm(0x788);
  FUN_10a497f68();
  return pppuVar1;
}



/* Entry: 10a577194; end: 10a57719b;  */

undefined8 FUN_10a577194(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x788;
  __Znwm(0x788);
  FUN_10a497f68();
  return uVar1;
}



/* Entry: 10a57719c; end: 10a5771f3;  */

undefined8 FUN_10a57719c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3d8;
  __Znwm(0x3d8);
  FUN_10aa183a8();
  return uVar1;
}



/* Entry: 10a5771f4; end: 10a5771f7;  */

undefined8 FUN_10a5771f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6b0;
  __Znwm(0x6b0);
  FUN_10a5f278c();
  return uVar1;
}



/* Entry: 10a5771f8; end: 10a57724f;  */

undefined8 FUN_10a5771f8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x6b0;
  __Znwm(0x6b0);
  FUN_10a5f278c();
  return uVar1;
}



/* Entry: 10a577250; end: 10a5772cf;  */

undefined8 * FUN_10a577250(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c49058;
  puVar1[2] = &PTR_DAT_110c490f8;
  puVar1[7] = &PTR_DAT_110c49150;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a5772d0; end: 10a57734f;  */

undefined8 * FUN_10a5772d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_110c497a8;
  puVar1[2] = &PTR_DAT_110c49848;
  puVar1[7] = &PTR_DAT_110c498a0;
  return puVar1;
}



/* Entry: 10a577350; end: 10a5773e3;  */

undefined8 * FUN_10a577350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xd8;
  __Znwm();
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x17] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x1a) = 0x100;
  FUN_10a5773e4();
  *puVar1 = &PTR_DAT_110c67ae0;
  puVar1[2] = &PTR_FUN_110c67b88;
  puVar1[5] = &PTR_DAT_110c67bb8;
  puVar1[0x16] = 0;
  puVar1[0x17] = &PTR_DAT_110c67c40;
  puVar1[0x15] = 0;
  *(undefined4 *)((long)puVar1 + 0x74) = 0;
  return puVar1;
}



/* Entry: 10a5773e4; end: 10a5774a7;  */

long * FUN_10a5773e4(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bf31d0;
  plVar1[5] = (long)&PTR_DAT_110bf3200;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10a5774a8; end: 10a5774af;  */

void FUN_10a5774a8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5774ac);
  (*pcVar1)();
}



/* Entry: 10a5774b0; end: 10a5775ef;  */

long * FUN_10a5774b0(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x2;
  }
  do {
    plVar1 = param_1;
    (**(code **)(*param_1 + 0x80))();
    if ((int)plVar1 != 2) {
      return plVar1;
    }
    param_1 = (long *)param_1[0x13];
  } while (param_1 != (long *)0x0);
  return (long *)0x2;
}



/* Entry: 10a5775f0; end: 10a5775f7;  */

undefined4 FUN_10a5775f0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x74);
}



/* Entry: 10a5775f8; end: 10a577633;  */

void FUN_10a5775f8(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + -0x10);
  do {
    plVar1 = plVar2;
    (**(code **)(*plVar2 + 0x80))();
    if ((int)plVar1 != 2) {
      return;
    }
    plVar2 = (long *)plVar2[0x13];
  } while (plVar2 != (long *)0x0);
  return;
}



/* Entry: 10a577634; end: 10a57765b;  */

void FUN_10a577634(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a577638);
  (*pcVar1)();
}



/* Entry: 10a57765c; end: 10a5776b3;  */

long FUN_10a57765c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5776b4; end: 10a57781f;  */

ulong FUN_10a5776b4(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a577820(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a5777d8);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a5776b4(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a577820; end: 10a57784f;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */

ulong * FUN_10a577820(ulong *param_1,long *param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long lVar10;
  ulong *unaff_x19;
  ulong *unaff_x20;
  long *plVar11;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_40 [12];
  int iStack_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar8 = (ulong *)&UNK_10f6337b7;
    FUN_10a00946c();
    plVar11 = (long *)puVar8[1];
    if (plVar11 != (long *)0x0) {
      plVar1 = plVar11 + 1;
      do {
        lVar10 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
      }
    }
    return puVar8;
  }
  puVar8 = (ulong *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar2 = &stack0xfffffffffffffff0;
  if (puVar8 == (ulong *)0x0) {
    puVar8 = (ulong *)&UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar9 = puVar8;
    ___cxa_demangle(puVar8,0,0,&iStack_34);
    if (iStack_34 == 0) {
      func_0x000107c2b054(param_1,puVar9);
      _free(puVar9);
      return puVar9;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar8;
    unaff_x29 = puVar2;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar9 = puVar8;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar9) {
    func_0x000107c2b040();
    *(ulong **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar9 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar9 != 0) {
        puVar7 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar7;
        puVar7[1] = 0x434948504152475f;
        *puVar7 = 0x45524f43534e454c;
        puVar7[3] = 0x525f595a414c5f54;
        puVar7[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar7 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar7 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar7 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar8 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar8;
      }
    }
    return puVar9;
  }
  if (puVar9 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar9;
    puVar6 = param_1;
    if (puVar9 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar3 = (ulong *)0x19;
    if (((ulong)puVar9 | 7) != 0x17) {
      puVar3 = (ulong *)(((ulong)puVar9 | 7) + 1);
    }
    puVar6 = puVar3;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar9;
    param_1[2] = (ulong)puVar3 | 0x8000000000000000;
    *param_1 = (ulong)puVar6;
  }
  func_0x000107c610b8(puVar6,puVar8,puVar9);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar6 + (long)puVar9) = 0;
  return param_1;
}



/* Entry: 10a577850; end: 10a5778a7;  */

long FUN_10a577850(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10a5778a8; end: 10a5778ef;  */

undefined8 FUN_10a5778a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x110;
  __Znwm(0x110);
  FUN_10ac6215c();
  return uVar1;
}



/* Entry: 10a5778f0; end: 10a57796b;  */

undefined8 * FUN_10a5778f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xe0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110b9bf90;
  puVar1[2] = &PTR_FUN_110b9c030;
  puVar1[7] = &PTR_FUN_110b9c088;
  return puVar1;
}



/* Entry: 10a57796c; end: 10a577b8f;  */

void FUN_10a57796c(long *param_1,long ******param_2)

{
  byte bVar1;
  undefined8 ******ppppppuVar2;
  long ******pppppplVar3;
  long ******pppppplVar4;
  long *****ppppplVar5;
  long *****ppppplVar6;
  undefined8 *****pppppuStack_68;
  ulong uStack_60;
  byte bStack_51;
  long *****ppppplStack_50;
  long ****pppplStack_48;
  char cStack_39;
  undefined1 uStack_31;
  
  pppplStack_48 = (long ****)param_2[1];
  ppppplStack_50 = *param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    pppplStack_48 = (long ****)(ulong)*(byte *)((long)param_2 + 0x17);
    ppppplStack_50 = (long *****)param_2;
  }
  pppppplVar3 = &ppppplStack_50;
  FUN_10a0423ac(pppppplVar3,0,2,&UNK_10f636a83,2);
  if ((int)pppppplVar3 == 0) {
    if (-1 < *(char *)((long)param_2 + 0x17)) {
      ppppplVar6 = *param_2;
      param_1[1] = (long)param_2[1];
      *param_1 = (long)ppppplVar6;
      param_1[2] = (long)param_2[2];
      return;
    }
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
    return;
  }
  func_0x000107c2b054(&ppppplStack_50,"/");
  bVar1 = *(byte *)((long)param_2 + 0x17);
  ppppplVar6 = param_2[1];
  if (-1 < (char)bVar1) {
    ppppplVar6 = (long *****)(ulong)bVar1;
  }
  ppppplVar5 = (long *****)(long)cStack_39;
  if ((long)ppppplVar5 < 0) {
    pppppplVar3 = (long ******)ppppplStack_50;
    ppppplVar5 = (long *****)pppplStack_48;
    if (pppplStack_48 <= ppppplVar6) goto LAB_10a577a34;
    __ZdlPv();
  }
  else if (ppppplVar5 <= ppppplVar6) {
    pppppplVar3 = &ppppplStack_50;
LAB_10a577a34:
    pppppplVar4 = (long ******)*param_2;
    if (-1 < (char)bVar1) {
      pppppplVar4 = param_2;
    }
    _memcmp(pppppplVar3,pppppplVar4,ppppplVar5);
    if (cStack_39 < '\0') {
      __ZdlPv(ppppplStack_50);
    }
    if ((int)pppppplVar3 == 0) {
      cStack_39 = '\x02';
      ppppplStack_50._3_5_ = (undefined5)((ulong)ppppplStack_50 >> 0x18);
      ppppplStack_50 = (long *****)CONCAT53(ppppplStack_50._3_5_,0x2f7e);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                (&pppppuStack_68,param_2,1,0xffffffffffffffff,&uStack_31);
      ppppppuVar2 = (undefined8 ******)pppppuStack_68;
      if (-1 < (char)bStack_51) {
        uStack_60 = (ulong)bStack_51;
        ppppppuVar2 = &pppppuStack_68;
      }
      pppppplVar3 = &ppppplStack_50;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppplVar3,ppppppuVar2,uStack_60);
      ppppplVar5 = pppppplVar3[1];
      ppppplVar6 = *pppppplVar3;
      param_1[2] = (long)pppppplVar3[2];
      param_1[1] = (long)ppppplVar5;
      *param_1 = (long)ppppplVar6;
      pppppplVar3[1] = (long *****)0x0;
      pppppplVar3[2] = (long *****)0x0;
      *pppppplVar3 = (long *****)0x0;
      if ((char)bStack_51 < '\0') {
        __ZdlPv(pppppuStack_68);
      }
      goto LAB_10a577a9c;
    }
  }
  cStack_39 = '\x02';
  ppppplStack_50 = (long *****)CONCAT53(ppppplStack_50._3_5_,0x2f7e);
  ppppplVar6 = param_2[1];
  pppppplVar3 = (long ******)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    ppppplVar6 = (long *****)(ulong)*(byte *)((long)param_2 + 0x17);
    pppppplVar3 = param_2;
  }
  pppppplVar4 = &ppppplStack_50;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppplVar4,pppppplVar3,ppppplVar6);
  ppppplVar5 = pppppplVar4[1];
  ppppplVar6 = *pppppplVar4;
  param_1[2] = (long)pppppplVar4[2];
  param_1[1] = (long)ppppplVar5;
  *param_1 = (long)ppppplVar6;
  pppppplVar4[1] = (long *****)0x0;
  pppppplVar4[2] = (long *****)0x0;
  *pppppplVar4 = (long *****)0x0;
LAB_10a577a9c:
  if (cStack_39 < '\0') {
    __ZdlPv(ppppplStack_50);
  }
  return;
}



/* Entry: 10a577b90; end: 10a577de3;  */

void FUN_10a577b90(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*puVar2;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
    if ((undefined8 *)puVar2[1] != puVar3) {
      puVar1 = (undefined8 *)puVar2[1] + -7;
      do {
        puVar4 = puVar1 + -3;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -10;
      } while (puVar4 != puVar3);
      puVar1 = *(undefined8 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10a577de4; end: 10a577df7;  */

long * FUN_10a577de4(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar1 = plVar2[1];
  lVar3 = plVar2[2];
  while (lVar3 != lVar1) {
    puVar4 = *(undefined8 **)(lVar3 + -0x38);
    plVar2[2] = lVar3 + -0x50;
    (*(code *)*puVar4)();
    lVar3 = plVar2[2];
  }
  if (*plVar2 != 0) {
    __ZdlPv();
  }
  return plVar2;
}



/* Entry: 10a577df8; end: 10a577edb;  */

long * FUN_10a577df8(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar2 + -0x38);
    param_1[2] = lVar2 + -0x50;
    (*(code *)*puVar3)();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a577edc; end: 10a577f5f;  */

undefined8 * FUN_10a577edc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf8;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c3d5a0;
  puVar1[2] = &PTR_DAT_110c3d640;
  puVar1[7] = &PTR_DAT_110c3d698;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1c] = 0;
  return puVar1;
}



/* Entry: 10a577f60; end: 10a578007;  */

undefined8 * FUN_10a577f60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x180;
  __Znwm();
  FUN_10aa7093c();
  *(undefined4 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)(puVar1 + 0x28) = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x25) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x29] = 0;
  *puVar1 = &PTR_FUN_110bb2a10;
  puVar1[2] = &PTR_DAT_110bb2ab0;
  puVar1[7] = &PTR_DAT_110bb2b08;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  return puVar1;
}



/* Entry: 10a578008; end: 10a57801f;  */

undefined8 FUN_10a578008(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3a8;
  __Znwm(0x3a8);
  FUN_10a394788();
  return uVar1;
}



/* Entry: 10a578020; end: 10a578077;  */

undefined8 FUN_10a578020(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x558;
  __Znwm(0x558);
  FUN_10a5ff290();
  return uVar1;
}



/* Entry: 10a578078; end: 10a57807b;  */

undefined8 FUN_10a578078(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x250;
  __Znwm(0x250);
  FUN_10a3e1724();
  return uVar1;
}



/* Entry: 10a57807c; end: 10a57811b;  */

undefined8 * FUN_10a57807c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x2b0;
  __Znwm();
  puVar1[0x52] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x55) = 0x100;
  puVar1[0x54] = 0;
  puVar1[0x53] = 0;
  FUN_10a1da04c();
  *puVar1 = &PTR_DAT_110c5e9a0;
  puVar1[2] = &PTR_FUN_110c5ead0;
  puVar1[5] = &PTR_DAT_110c5eb00;
  puVar1[0x52] = &PTR_DAT_110c5eba8;
  puVar1[0x15] = &PTR_FUN_110c5eb58;
  *(undefined1 *)(puVar1 + 0x51) = 0;
  return puVar1;
}



/* Entry: 10a57811c; end: 10a578167;  */

undefined8 FUN_10a57811c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x398;
  __Znwm(0x398);
  FUN_10ac22d98();
  return uVar1;
}



/* Entry: 10a578168; end: 10a5781af;  */

undefined8 FUN_10a578168(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2a8;
  __Znwm(0x2a8);
  FUN_10ac6a0f0();
  return uVar1;
}



/* Entry: 10a5781b0; end: 10a5781f7;  */

undefined8 FUN_10a5781b0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x750;
  __Znwm(0x750);
  FUN_10ac2970c();
  return uVar1;
}



/* Entry: 10a5781f8; end: 10a5782b3;  */

undefined8 * FUN_10a5781f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x650;
  __Znwm();
  puVar1[0xc6] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xc9) = 0x100;
  puVar1[200] = 0;
  puVar1[199] = 0;
  FUN_10ac6adb8();
  *puVar1 = &PTR_FUN_110c674f8;
  puVar1[2] = &PTR_FUN_110c67658;
  puVar1[5] = &PTR_FUN_110c67688;
  puVar1[0xc6] = &PTR_DAT_110c677c8;
  puVar1[0x15] = &PTR_FUN_110c676e0;
  puVar1[0x51] = &PTR_FUN_110c67700;
  puVar1[0x52] = &PTR_FUN_110c67748;
  puVar1[0x9c] = &PTR_FUN_110c67770;
  *(undefined4 *)(puVar1 + 0xc5) = 1;
  return puVar1;
}



/* Entry: 10a5782b4; end: 10a5782fb;  */

undefined8 FUN_10a5782b4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x650;
  __Znwm(0x650);
  FUN_10ac6b030();
  return uVar1;
}



/* Entry: 10a5782fc; end: 10a578343;  */

undefined8 FUN_10a5782fc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x328;
  __Znwm(0x328);
  FUN_10ac25f14();
  return uVar1;
}



/* Entry: 10a578344; end: 10a5783ef;  */

undefined8 * FUN_10a578344(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x2c8;
  __Znwm();
  puVar1[0x55] = &PTR_FUN_110c383b8;
  puVar1[0x57] = 0;
  puVar1[0x56] = 0;
  *(undefined2 *)(puVar1 + 0x58) = 0x100;
  FUN_10a1da04c();
  *puVar1 = &PTR_FUN_110bb2f40;
  puVar1[2] = &PTR_FUN_110bb3078;
  puVar1[5] = &PTR_FUN_110bb30a8;
  puVar1[0x55] = &PTR_FUN_110bb3178;
  puVar1[0x15] = &PTR_FUN_110bb3100;
  puVar1[0x51] = &PTR_FUN_110bb3120;
  puVar1[0x53] = 0;
  puVar1[0x52] = 0;
  *(undefined1 *)(puVar1 + 0x54) = 0;
  return puVar1;
}



/* Entry: 10a5783f0; end: 10a578437;  */

undefined8 FUN_10a5783f0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2b8;
  __Znwm(0x2b8);
  FUN_10ac6ff88();
  return uVar1;
}



/* Entry: 10a578438; end: 10a5784db;  */

undefined8 * FUN_10a578438(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x2b8;
  __Znwm();
  puVar1[0x53] = &PTR_FUN_110c383b8;
  puVar1[0x55] = 0;
  puVar1[0x54] = 0;
  *(undefined2 *)(puVar1 + 0x56) = 0x100;
  FUN_10a1da04c();
  *puVar1 = &PTR_FUN_110bb3440;
  puVar1[2] = &PTR_FUN_110bb3570;
  puVar1[5] = &PTR_FUN_110bb35a0;
  puVar1[0x53] = &PTR_FUN_110bb3648;
  puVar1[0x15] = &PTR_FUN_110bb35f8;
  puVar1[0x52] = 0;
  puVar1[0x51] = 0;
  return puVar1;
}



/* Entry: 10a5784dc; end: 10a578523;  */

undefined8 FUN_10a5784dc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x158;
  __Znwm(0x158);
  FUN_10ac5ac90();
  return uVar1;
}



/* Entry: 10a578524; end: 10a57856b;  */

undefined8 FUN_10a578524(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_10ac5c0b8();
  return uVar1;
}



/* Entry: 10a57856c; end: 10a5785b7;  */

undefined8 FUN_10a57856c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x380;
  __Znwm(0x380);
  FUN_10ac5f784();
  return uVar1;
}



/* Entry: 10a5785b8; end: 10a5785ff;  */

undefined8 FUN_10a5785b8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x150;
  __Znwm(0x150);
  FUN_10ac5b2f0();
  return uVar1;
}



/* Entry: 10a578600; end: 10a57875f;  */

undefined8 * FUN_10a578600(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long *plStack_40;
  long *plStack_38;
  
  puVar4 = (undefined8 *)0xd8;
  __Znwm();
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x17] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar4 + 0x1a) = 0x100;
  FUN_10a5787b0();
  *puVar4 = &PTR_FUN_110bb2b30;
  puVar4[2] = &PTR_FUN_110bb2be0;
  puVar4[5] = &PTR_DAT_110bb2c10;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = &PTR_DAT_110bb2c98;
  plVar5 = (long *)0x90;
  __Znwm();
  plVar5[1] = 0;
  plVar5[2] = 0;
  *plVar5 = (long)&PTR_FUN_110bb36c0;
  *(undefined1 *)(plVar5 + 4) = 0;
  plStack_40 = plVar5 + 3;
  *plStack_40 = (long)&PTR_FUN_110c4dc68;
  plVar5[5] = (long)&PTR_DAT_110c4dcb8;
  plVar5[6] = 0;
  *(undefined4 *)(plVar5 + 7) = 0xffff;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0xf] = 0;
  plVar5[9] = 0;
  plVar5[8] = 0;
  plVar5[0xb] = 0;
  plVar5[10] = 0;
  plVar5[0xd] = 0;
  plVar5[0xc] = 0;
  *(undefined1 *)(plVar5 + 0xe) = 0;
  plStack_38 = plVar5;
  func_0x00010a1ebf9c(puVar4 + 0x15,&plStack_40);
  plVar5 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return puVar4;
}



/* Entry: 10a578760; end: 10a5787af;  */

long * FUN_10a578760(long *param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  param_1[2] = (long)&PTR_FUN_110bb3338;
  param_1[5] = (long)&PTR_DAT_110bb3368;
  *(undefined8 *)((long)param_1 + *(long *)(lVar1 + -0x18)) = *(undefined8 *)(param_2 + 0x10);
  FUN_10a1f534c(param_1 + 0x13);
  *param_1 = (long)&PTR_DAT_110c60a00;
  param_1[2] = (long)&PTR_DAT_110c60a88;
  param_1[5] = (long)&PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = (long)&PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = (long)&PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a5787b0; end: 10a578873;  */

long * FUN_10a5787b0(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = param_1;
  FUN_10ac63120(param_1,param_3);
  lVar2 = *param_2;
  *plVar1 = lVar2;
  plVar1[2] = (long)&PTR_FUN_110bb3338;
  plVar1[5] = (long)&PTR_DAT_110bb3368;
  *(long *)((long)plVar1 + *(long *)(lVar2 + -0x18)) = param_2[1];
  plVar1[0x13] = 0;
  plVar1[0x14] = 0;
  plVar1 = (long *)((long)plVar1 + *(long *)(*plVar1 + -0x18));
  if ((*(byte *)(plVar1 + 3) & 1) == 0) {
    *(undefined1 *)(plVar1 + 3) = 1;
    plVar1[2] = param_3;
    if (param_3 != 0) {
      plVar1[1] = *(long *)(*(long *)(param_3 + 0x850) + 0x2c);
    }
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10a578874; end: 10a578903;  */

undefined8 FUN_10a578874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  uVar1 = 0x110;
  __Znwm(0x110);
  FUN_10a1e3e54(auStack_58);
  FUN_10ac1ec64(uVar1,param_1,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return uVar1;
}



/* Entry: 10a578904; end: 10a5789eb;  */

undefined8 * FUN_10a578904(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  puVar1 = (undefined8 *)0x140;
  __Znwm();
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x24] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x27) = 0x100;
  FUN_10a1e3e54(auStack_58);
  FUN_10ac1e958(puVar1,&PTR_PTR_110c5edc0,param_1,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  *puVar1 = &PTR_FUN_110c5ec28;
  puVar1[2] = &PTR_FUN_110c5ecc8;
  puVar1[5] = &PTR_DAT_110c5ecf8;
  puVar1[0x24] = &PTR_DAT_110c5ed80;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  *(undefined8 *)((long)puVar1 + 0x111) = 0;
  *(undefined8 *)((long)puVar1 + 0x109) = 0;
  return puVar1;
}



/* Entry: 10a5789ec; end: 10a578a33;  */

undefined8 FUN_10a5789ec(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f8;
  __Znwm(0x3f8);
  FUN_10ac8bb68();
  return uVar1;
}



/* Entry: 10a578a34; end: 10a578a7b;  */

undefined8 FUN_10a578a34(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x308;
  __Znwm(0x308);
  FUN_10a1e03b4();
  return uVar1;
}



/* Entry: 10a578a7c; end: 10a578ac3;  */

undefined8 FUN_10a578a7c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x440;
  __Znwm(0x440);
  FUN_10ac21870();
  return uVar1;
}



/* Entry: 10a578ac4; end: 10a578b53;  */

undefined8 FUN_10a578ac4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  uVar1 = 0x318;
  __Znwm(0x318);
  FUN_10a1e3e54(auStack_58);
  FUN_10a1e3b70(uVar1,param_1,auStack_58);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return uVar1;
}



/* Entry: 10a578b54; end: 10a578ba3;  */

undefined8 FUN_10a578b54(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3d0;
  __Znwm(0x3d0);
  FUN_10a1dcc50();
  return uVar1;
}



/* Entry: 10a578ba4; end: 10a578c4b;  */

undefined8 * FUN_10a578ba4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x108;
  __Znwm();
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1d] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x20) = 0x100;
  FUN_10a1dbb98();
  puVar1[0x15] = 0xffffffffffffffff;
  puVar1[0x16] = 0xffffffffffffffff;
  *(undefined1 *)((long)puVar1 + 0xba) = 0;
  *(undefined2 *)(puVar1 + 0x17) = 0;
  *puVar1 = &PTR_FUN_110c67f60;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = &PTR_FUN_110c680e8;
  puVar1[0x1b] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  return puVar1;
}



/* Entry: 10a578c4c; end: 10a578c93;  */

undefined8 FUN_10a578c4c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x110;
  __Znwm(0x110);
  FUN_10ac28a40();
  return uVar1;
}



/* Entry: 10a578c94; end: 10a578cdb;  */

undefined8 FUN_10a578c94(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x4b8;
  __Znwm(0x4b8);
  FUN_10ac10eac();
  return uVar1;
}



/* Entry: 10a578cdc; end: 10a578ce3;  */

undefined8 FUN_10a578cdc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x590;
  __Znwm(0x590);
  FUN_10a2d3e60();
  return uVar1;
}



/* Entry: 10a578ce4; end: 10a578d3b;  */

undefined8 FUN_10a578ce4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x280;
  __Znwm(0x280);
  FUN_10a66b074();
  return uVar1;
}



/* Entry: 10a578d3c; end: 10a578dbf;  */

undefined8 * FUN_10a578d3c(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x100;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c1b600;
  puVar1[2] = &PTR_FUN_110c1b6a0;
  puVar1[7] = &PTR_FUN_110c1b6f8;
  puVar1[0x1c] = param_1;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return puVar1;
}



/* Entry: 10a578dc0; end: 10a578e1f;  */

undefined8 FUN_10a578dc0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x268;
  __Znwm(0x268);
  FUN_10ab20e84();
  return uVar1;
}



/* Entry: 10a578e20; end: 10a578e77;  */

undefined8 FUN_10a578e20(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x5b0;
  __Znwm(0x5b0);
  FUN_10a5ee6b8();
  return uVar1;
}



/* Entry: 10a578e78; end: 10a578ebf;  */

undefined8 FUN_10a578e78(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x348;
  __Znwm(0x348);
  FUN_10a6bf028();
  return uVar1;
}



/* Entry: 10a578ec0; end: 10a578f3f;  */

undefined8 * FUN_10a578ec0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  *puVar1 = &PTR_FUN_110c113c8;
  puVar1[2] = &PTR_DAT_110c11468;
  puVar1[7] = &PTR_DAT_110c114c0;
  return puVar1;
}



/* Entry: 10a578f40; end: 10a578f9f;  */

undefined8 FUN_10a578f40(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x218;
  __Znwm(0x218);
  FUN_10aaf08dc();
  return uVar1;
}



/* Entry: 10a578fa0; end: 10a578fff;  */

undefined8 FUN_10a578fa0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x120;
  __Znwm(0x120);
  FUN_10aaee9f0();
  return uVar1;
}



/* Entry: 10a579000; end: 10a579047;  */

undefined8 FUN_10a579000(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x338;
  __Znwm(0x338);
  FUN_10a00dd40();
  return uVar1;
}



/* Entry: 10a579048; end: 10a5790a7;  */

undefined8 FUN_10a579048(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x288;
  __Znwm(0x288);
  FUN_10a2ae034();
  return uVar1;
}



/* Entry: 10a5790a8; end: 10a579107;  */

undefined8 FUN_10a5790a8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x2b8;
  __Znwm(0x2b8);
  FUN_10a9c3e8c();
  return uVar1;
}



/* Entry: 10a579108; end: 10a579167;  */

undefined8 FUN_10a579108(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x288;
  __Znwm(0x288);
  FUN_10a9bd704();
  return uVar1;
}



/* Entry: 10a579168; end: 10a57916b;  */

undefined8 FUN_10a579168(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x578;
  __Znwm(0x578);
  FUN_10a2daf18();
  return uVar1;
}



/* Entry: 10a57916c; end: 10a5791eb;  */

undefined8 * FUN_10a57916c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110bc7d90;
  puVar1[2] = &PTR_DAT_110bc7e38;
  puVar1[7] = &PTR_DAT_110bc7e90;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  return puVar1;
}



/* Entry: 10a5791ec; end: 10a579283;  */

undefined8 * FUN_10a5791ec(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xf0;
  __Znwm();
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1a] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0x1d) = 0x100;
  FUN_10ac78280();
  *puVar1 = &PTR_FUN_110c5fc08;
  puVar1[2] = &PTR_FUN_110c5fca8;
  puVar1[5] = &PTR_DAT_110c5fcd8;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = &PTR_DAT_110c5fd60;
  return puVar1;
}



/* Entry: 10a579284; end: 10a5792cb;  */

undefined8 FUN_10a579284(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x350;
  __Znwm(0x350);
  FUN_10ac73d88();
  return uVar1;
}



/* Entry: 10a5792cc; end: 10a57935f;  */

undefined8 * FUN_10a5792cc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x138;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c48ea8;
  puVar1[2] = &PTR_FUN_110c48f48;
  puVar1[7] = &PTR_FUN_110c48fa0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  *(undefined4 *)(puVar1 + 0x22) = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  return puVar1;
}



/* Entry: 10a579360; end: 10a579457;  */

undefined8 * FUN_10a579360(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1d0;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1e] = 0;
  puVar1[0x1f] = &UNK_10e52b660;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = &UNK_10e52b660;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x27) = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  *(ushort *)((long)puVar1 + 0x139) = *(ushort *)((long)puVar1 + 0x139) & 0xfc00 | 1;
  *puVar1 = &PTR_DAT_110c48b00;
  puVar1[2] = &PTR_DAT_110c48ba0;
  puVar1[7] = &PTR_FUN_110c48bf8;
  puVar1[0x1c] = &PTR_FUN_110c48c18;
  puVar1[0x1d] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x36] = puVar1 + 0x37;
  if (sRam000000011330276a == -1) {
    sRam000000011330276a = 0x1b0;
  }
  puVar1[0x39] = 0;
  return puVar1;
}



/* Entry: 10a579458; end: 10a579543;  */

undefined8 * FUN_10a579458(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x1b8;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1e] = 0;
  puVar1[0x1f] = &UNK_10e52b660;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = &UNK_10e52b660;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x24] = 0;
  *(undefined1 *)(puVar1 + 0x27) = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x31] = 0;
  puVar1[0x30] = 0;
  *(ushort *)((long)puVar1 + 0x139) = *(ushort *)((long)puVar1 + 0x139) & 0xfc00 | 1;
  *puVar1 = &PTR_FUN_110c48c38;
  puVar1[2] = &PTR_DAT_110c48cd8;
  puVar1[7] = &PTR_FUN_110c48d30;
  puVar1[0x1c] = &PTR_FUN_110c48d50;
  puVar1[0x1d] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  if (sRam0000000113302768 == -1) {
    sRam0000000113302768 = 0x198;
  }
  puVar1[0x36] = 0;
  return puVar1;
}



/* Entry: 10a579544; end: 10a579547;  */

undefined8 * FUN_10a579544(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x560;
  __Znwm();
  puVar1[0xa8] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xab) = 0x100;
  puVar1[0xaa] = 0;
  puVar1[0xa9] = 0;
  FUN_10a3a32dc();
  *puVar1 = &PTR_FUN_110bfc268;
  puVar1[2] = &PTR_DAT_110bfc4b0;
  puVar1[7] = &PTR_DAT_110bfc508;
  puVar1[0xd] = &PTR_DAT_110bfc528;
  puVar1[0xa8] = &PTR_DAT_110bfc628;
  puVar1[0x16] = &PTR_DAT_110bfc598;
  puVar1[0x17] = &PTR_DAT_110bfc5c8;
  puVar1[0xa7] = 0;
  return puVar1;
}



/* Entry: 10a579548; end: 10a57960b;  */

undefined8 * FUN_10a579548(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x560;
  __Znwm();
  puVar1[0xa8] = &PTR_FUN_110c383b8;
  *(undefined2 *)(puVar1 + 0xab) = 0x100;
  puVar1[0xaa] = 0;
  puVar1[0xa9] = 0;
  FUN_10a3a32dc();
  *puVar1 = &PTR_FUN_110bfc268;
  puVar1[2] = &PTR_DAT_110bfc4b0;
  puVar1[7] = &PTR_DAT_110bfc508;
  puVar1[0xd] = &PTR_DAT_110bfc528;
  puVar1[0xa8] = &PTR_DAT_110bfc628;
  puVar1[0x16] = &PTR_DAT_110bfc598;
  puVar1[0x17] = &PTR_DAT_110bfc5c8;
  puVar1[0xa7] = 0;
  return puVar1;
}



/* Entry: 10a57960c; end: 10a57960f;  */

undefined8 FUN_10a57960c(void)

{
  undefined8 uVar1;
  
  uVar1 = 2000;
  __Znwm(2000);
  FUN_10a650104();
  return uVar1;
}



/* Entry: 10a579610; end: 10a579667;  */

undefined8 FUN_10a579610(void)

{
  undefined8 uVar1;
  
  uVar1 = 2000;
  __Znwm(2000);
  FUN_10a650104();
  return uVar1;
}



/* Entry: 10a579668; end: 10a57966b;  */

undefined8 FUN_10a579668(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x718;
  __Znwm(0x718);
  FUN_10a65e6c0();
  return uVar1;
}



/* Entry: 10a57966c; end: 10a5796c3;  */

undefined8 FUN_10a57966c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x718;
  __Znwm(0x718);
  FUN_10a65e6c0();
  return uVar1;
}



/* Entry: 10a5796c4; end: 10a57970b;  */

undefined8 FUN_10a5796c4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f8;
  __Znwm(0x3f8);
  FUN_10a1e7964();
  return uVar1;
}



/* Entry: 10a57970c; end: 10a57970f;  */

undefined8 * FUN_10a57970c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x228;
  __Znwm();
  puVar1[0x41] = &PTR_FUN_110c383b8;
  puVar1[0x43] = 0;
  puVar1[0x42] = 0;
  *(undefined2 *)(puVar1 + 0x44) = 0x100;
  FUN_10a3c575c();
  *puVar1 = &PTR_FUN_110bd4020;
  puVar1[2] = &PTR_FUN_110bd4130;
  puVar1[7] = &PTR_DAT_110bd4188;
  puVar1[0xd] = &PTR_DAT_110bd41a8;
  puVar1[0x41] = &PTR_DAT_110bd42a8;
  puVar1[0x16] = &PTR_DAT_110bd4218;
  puVar1[0x17] = &PTR_FUN_110bd4248;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x3e] = puVar1 + 0x3f;
  return puVar1;
}



/* Entry: 10a579710; end: 10a5797bb;  */

undefined8 * FUN_10a579710(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x178;
  __Znwm();
  FUN_10aa7093c();
  *puVar1 = &PTR_DAT_110c3da38;
  puVar1[2] = &PTR_DAT_110c3dae0;
  puVar1[7] = &PTR_DAT_110c3db38;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x28] = 1;
  puVar1[0x29] = puVar1 + 0x2a;
  puVar1[0x2a] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = puVar1 + 0x2d;
  return puVar1;
}



/* Entry: 10a5797bc; end: 10a5797c3;  */

undefined8 FUN_10a5797bc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3a8;
  __Znwm(0x3a8);
  FUN_10a40f08c();
  return uVar1;
}



/* Entry: 10a5797c4; end: 10a57985b;  */

undefined8 * FUN_10a5797c4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x118;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  *puVar1 = &PTR_DAT_110c41c48;
  puVar1[2] = &PTR_FUN_110c41cf8;
  puVar1[7] = &PTR_DAT_110c41d50;
  puVar1[0x1c] = &PTR_FUN_110c41d70;
  return puVar1;
}



/* Entry: 10a57985c; end: 10a5798f7;  */

undefined8 * FUN_10a57985c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x120;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x23] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  *puVar1 = &PTR_DAT_110c41da0;
  puVar1[2] = &PTR_FUN_110c41e50;
  puVar1[7] = &PTR_DAT_110c41ea8;
  puVar1[0x1c] = &PTR_FUN_110c41ec8;
  return puVar1;
}



/* Entry: 10a5798f8; end: 10a579993;  */

undefined8 * FUN_10a5798f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x120;
  __Znwm();
  FUN_10aa7093c();
  *(undefined4 *)(puVar1 + 0x23) = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  *puVar1 = &PTR_DAT_110c41ef8;
  puVar1[2] = &PTR_FUN_110c41fa8;
  puVar1[7] = &PTR_DAT_110c42000;
  puVar1[0x1c] = &PTR_FUN_110c42020;
  return puVar1;
}



/* Entry: 10a579994; end: 10a579a2f;  */

undefined8 * FUN_10a579994(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x120;
  __Znwm();
  FUN_10aa7093c();
  puVar1[0x23] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  *puVar1 = &PTR_DAT_110c42050;
  puVar1[2] = &PTR_FUN_110c42100;
  puVar1[7] = &PTR_DAT_110c42158;
  puVar1[0x1c] = &PTR_FUN_110c42178;
  return puVar1;
}



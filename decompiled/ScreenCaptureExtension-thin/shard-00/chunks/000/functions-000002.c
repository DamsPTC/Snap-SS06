/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10001c240; end: 10001c327;  */

void FUN_10001c240(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010001c88c();
  *(code **)(lVar1 + 0x38) = FUN_10001c328;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001bffc(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010001c314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_10001cd64(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x00010001c32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001c328; end: 10001c32f;  */

void FUN_10001c328(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001c32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001c330; end: 10001c43f;  */

void FUN_10001c330(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010001c88c();
  *(code **)(lVar1 + 0x38) = FUN_10001c440;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10001bffc(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 2) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    _swift_errorRetain(*(undefined8 *)
                        (param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8) + 0x10))
    ;
  }
  else {
    if (lVar2 != 1) {
      return;
    }
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x00010001c428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10001c440; end: 10001c45f;  */

void FUN_10001c440(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010001c44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 10001c460; end: 10001c71f;  */

/* WARNING: Possible PIC construction at 0x00010001c574: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001c578) */
/* WARNING: Removing unreachable block (ram,0x00010001c598) */
/* WARNING: Removing unreachable block (ram,0x00010001c584) */
/* WARNING: Removing unreachable block (ram,0x00010001c59c) */

void FUN_10001c460(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lStack_60;
  ulong uStack_58;
  
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar2 = *plVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar7 = (undefined8 *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (lStack_60 = lVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_10001c7a0(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x00010001cc10(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_10001cc1c(puVar7 + 1);
    }
    else {
      puVar7[3] = lVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        lVar2 = *plVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = lVar2 != lStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_10001c524;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10001c524:
    if (lVar2 == lStack_60 && uVar3 == uStack_58) {
      uVar6 = uStack_58 | 0x800;
      uVar3 = uVar6;
      if (((uint)uStack_58 >> 10 & 1) != 0) {
        uVar6 = uStack_58 & 0xfffffffffffffbff | 0x800;
        *(char *)(param_1 + 0x21) = (char)uStack_58;
        uVar3 = uVar6;
      }
      do {
        uStack_58 = uVar3;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_10001cc1c(0x10002a660);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 10001c720; end: 10001c79f;  */

void FUN_10001c720(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam000000010002a658 != -1) {
    FUN_10001c874();
  }
  if (pcRam000000010002a650 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001c750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000010002a650)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 10001c7a0; end: 10001c873;  */

/* WARNING: Possible PIC construction at 0x00010001c7f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001c800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010001c834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010001c838) */
/* WARNING: Removing unreachable block (ram,0x00010001c83c) */
/* WARNING: Removing unreachable block (ram,0x00010001c844) */
/* WARNING: Removing unreachable block (ram,0x00010001c84c) */
/* WARNING: Removing unreachable block (ram,0x00010001c7f4) */
/* WARNING: Removing unreachable block (ram,0x00010001c804) */
/* WARNING: Removing unreachable block (ram,0x00010001c82c) */
/* WARNING: Removing unreachable block (ram,0x00010001c818) */
/* WARNING: Removing unreachable block (ram,0x00010001c830) */

void FUN_10001c7a0(long param_1,long *param_2)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar2 = (long *)(param_1 + 0x50);
  FUN_10001cc1c(0x10002a660);
  do {
    lVar3 = *plVar2;
    lVar4 = *(long *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar3;
      *(long *)(param_1 + 0x58) = lVar4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *param_2 = lVar3;
  param_2[1] = lVar4;
  if ((((uint)lVar4 >> 9 & 1) != 0) && (lVar3 != 0)) {
    *(long *)(lVar3 + -0x10) = *(long *)(lVar3 + -0x10) + 1;
    unaff_x30 = 0x10001c7f4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x10002a660);
  return;
}



/* Entry: 10001c874; end: 10001c893;  */

void FUN_10001c874(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024098)(0x10002a658,0x10002a650,0x10001c770);
  return;
}



/* Entry: 10001c894; end: 10001c9a3;  */

undefined8 FUN_10001c894(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 10001c9a4; end: 10001c9db;  */

void FUN_10001c9a4(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam000000010002a670 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 10001c9dc; end: 10001cacf;  */

void FUN_10001c9dc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x10002a668,FUN_10001c9a4,0);
  if ((bRam000000010002a670 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam000000010002a680 != -1) {
      func_0x00010001caec();
    }
    iVar1 = (int)uVar2;
    if ((pcRam000000010002a678 == (code *)0x0) || ((*pcRam000000010002a678)(), iVar1 != 0)) {
      lVar3 = *(long *)(param_2 + 0x28);
      _voucher_adopt();
    }
    else {
      lVar3 = *(long *)(param_2 + 0x28);
    }
    *(undefined8 *)(param_2 + 0x28) = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 1) & 1) == 0) {
      *param_1 = lVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else if (1 < lVar3 + 1U) {
      _os_release();
    }
  }
  return;
}



/* Entry: 10001cad0; end: 10001caef;  */

void FUN_10001cad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024098)(0x10002a680,0x10002a678,0x10001caa0);
  return;
}



/* Entry: 10001caf0; end: 10001cbdf;  */

void FUN_10001caf0(undefined8 param_1)

{
  if (lRam000000010002a690 != -1) {
    FUN_10001cbe0();
  }
  if (pcRam000000010002a688 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001cb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000010002a688)(param_1);
    return;
  }
  return;
}



/* Entry: 10001cbe0; end: 10001cc1b;  */

void FUN_10001cbe0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024098)(0x10002a690,0x10002a688,0x10001cb80);
  return;
}



/* Entry: 10001cc1c; end: 10001cc43;  */

void FUN_10001cc1c(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 10001cc44; end: 10001cd33;  */

void FUN_10001cc44(undefined8 param_1)

{
  if (lRam000000010002a6b0 != -1) {
    FUN_10001cd34();
  }
  if (pcRam000000010002a6a8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010001cc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam000000010002a6a8)(param_1);
    return;
  }
  return;
}



/* Entry: 10001cd34; end: 10001cd63;  */

void FUN_10001cd34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010001d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_100024098)(0x10002a6b0,0x10002a6a8,0x10001ccd4);
  return;
}



/* Entry: 10001cd64; end: 10001cd6f;  */

void FUN_10001cd64(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010001cd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s10Foundation13__DataStorageC5bytes6length4copy11deallocator6offsetACSvSg_SiSbySv_SitcSgSitcfc_1000246c8
  )();
  return;
}



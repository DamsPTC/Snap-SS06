/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0076fa60; end: 0076fd07;  */

/* WARNING: Removing unreachable block (ram,0x0076fb00) */
/* WARNING: Removing unreachable block (ram,0x0076fc5c) */

undefined * _SCMapArray(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar4 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_opt_new();
  if (param_2 != 0) {
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00780ea0();
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        lVar4 = *(long *)(lVar7 * 8);
        lVar3 = param_2;
        (**(code **)(param_2 + 0x10))();
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          func_0x0077e720(puVar1);
        }
        _objc_release(lVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00780ea0();
    }
    _objc_release(param_1);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lVar5) {
    return puVar1;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  _objc_retain(lVar4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  if (lVar4 != 0) {
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    _objc_retain(param_1);
    lVar2 = param_1;
    func_0x00780ea0();
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        lVar3 = lVar4;
        (**(code **)(lVar4 + 0x10))(lVar4,*(undefined8 *)(lVar7 * 8));
        if ((int)lVar3 != 0) {
          func_0x0077e720(puVar1);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00780ea0();
    }
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar5) {
    ___stack_chk_fail();
    uVar6 = CONCAT17(in_register_00005007,
                     CONCAT16(in_register_00005006,
                              CONCAT15(in_register_00005005,
                                       CONCAT14(in_register_00005004,
                                                CONCAT13(in_register_00005003,
                                                         CONCAT12(in_register_00005002,
                                                                  CONCAT11(in_register_00005001,
                                                                           in_b0)))))));
    uVar6 = ~uVar6 + uVar6 * 0x40000;
    uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
    uVar6 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
    return (undefined *)(uVar6 ^ uVar6 >> 0x16);
  }
  return puVar1;
}



/* Entry: 0076fd08; end: 0076fd7f;  */

ulong _SCHashDouble(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = ~param_1 + param_1 * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return uVar1 ^ uVar1 >> 0x16;
}



/* Entry: 0076fd80; end: 0076feeb;  */

void _SCUUID(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUUID_00ac2fe0;
  func_0x0077bce0(PTR__OBJC_CLASS___NSUUID_00ac2fe0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0077bd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar2);
  return;
}



/* Entry: 0076feec; end: 0077012f;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0076feec(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar13 = 0;
  bVar6 = false;
  lVar3 = 0xc0;
  if ((*(uint *)(param_1 + 0x20) & 0x1000000) != 0) {
    lVar3 = 0xd0;
  }
  puVar2 = (ulong *)(param_1 + lVar3 + ((ulong)(*(uint *)(param_1 + 0x20) >> 0x17) & 8));
  plVar1 = (long *)(param_2 + 0x50);
  uVar10 = *puVar2;
LAB_0076ff70:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00770a28(param_2);
  }
  else if (uVar12 != 3) {
    FUN_007709e0(param_1);
    if (!bVar6) {
      return uVar12;
    }
    do {
      lVar3 = *plVar1;
      uVar13 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar13;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar13;
    while ((uVar9 >> 9 & 1) == 0) {
      uVar10 = uVar13 | 0x800;
      if (((uint)uVar13 >> 10 & 1) != 0) {
        uVar10 = uVar13 & 0xfffffffffffff9ff | 0x800;
        *(char *)(param_2 + 0x21) = (char)uVar13;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar11 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar11 != uVar13) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar11;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_007700cc;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_007700cc:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_007700f0;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00770350(param_2);
LAB_007700f0:
    func_0x007707b8(param_2);
    func_0x00770b34(param_2 + 0x80);
    return uVar12;
  }
  if (!bVar6) {
    param_3[3] = 0;
    param_3[4] = param_6;
    *param_3 = param_5;
    param_3[1] = param_4;
    do {
      lVar3 = *plVar1;
      uVar12 = *(ulong *)(param_2 + 0x58);
      cVar7 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar3;
        *(ulong *)(param_2 + 0x58) = uVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    uVar9 = (uint)uVar12;
    while ((uVar9 >> 9 & 1) == 0) {
      if (((uint)uVar12 >> 10 & 1) == 0) {
        uVar11 = uVar12 & 0xfffffffffffff5ff;
      }
      else {
        uVar11 = uVar12 & 0xfffffffffffff1ff;
        *(char *)(param_2 + 0x21) = (char)uVar12;
      }
      do {
        while( true ) {
          lVar4 = *plVar1;
          uVar5 = *(ulong *)(param_2 + 0x58);
          cVar7 = lVar4 != lVar3;
          if (uVar5 != uVar12) {
            cVar7 = cVar7 + '\x01';
          }
          if (cVar7 == '\0') break;
          cVar7 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar4;
            *(ulong *)(param_2 + 0x58) = uVar5;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_0076fff4;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_0076fff4:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_00770018;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x007704b0(param_2);
LAB_00770018:
    func_0x00770b7c(param_2 + 0x80);
    func_0x007707e4(param_2);
  }
  do {
    uVar12 = *(ulong *)(param_2 + 0x58);
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = *plVar1;
      *(ulong *)(param_2 + 0x58) = uVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  uVar12 = uVar12 & 0xff;
  if (uVar13 < uVar12) {
    FUN_00770610(param_1,uVar12);
    uVar13 = uVar12;
  }
  *(ulong *)(param_2 + 0x10) = uVar10 & 0xfffffffffffffffc;
  uVar12 = *puVar2;
  if (uVar12 == uVar10) {
    cVar7 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = param_2;
      cVar7 = ExclusiveMonitorsStatus();
    }
    bVar8 = cVar7 == '\0';
  }
  else {
    bVar8 = false;
    ClearExclusiveLocal();
  }
  bVar6 = true;
  uVar10 = uVar12;
  if (bVar8) {
    func_0x00770784();
    return 0;
  }
  goto LAB_0076ff70;
}



/* Entry: 00770130; end: 00770217;  */

void FUN_00770130(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x0077077c();
  *(code **)(lVar1 + 0x38) = FUN_00770218;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_0076feec(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00770204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_007774a8(0,&UNK_0091f59b);
                    /* WARNING: Could not recover jumptable at 0x0077021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00770218; end: 0077021f;  */

void FUN_00770218(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077021c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 00770220; end: 0077032f;  */

void FUN_00770220(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x0077077c();
  *(code **)(lVar1 + 0x38) = FUN_00770330;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_0076feec(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
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
                    /* WARNING: Could not recover jumptable at 0x00770318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 00770330; end: 0077034f;  */

void FUN_00770330(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0077033c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 00770350; end: 0077060f;  */

/* WARNING: Possible PIC construction at 0x00770464: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00770468) */
/* WARNING: Removing unreachable block (ram,0x00770488) */
/* WARNING: Removing unreachable block (ram,0x00770474) */
/* WARNING: Removing unreachable block (ram,0x0077048c) */

void FUN_00770350(long param_1)

{
  qword *pqVar1;
  qword qVar2;
  ulong uVar3;
  bool bVar4;
  char cVar5;
  ulong uVar6;
  segment_command *psVar7;
  uint uVar8;
  qword qStack_60;
  ulong uStack_58;
  
  pqVar1 = (qword *)(param_1 + 0x50);
  do {
    qVar2 = *pqVar1;
    uVar3 = *(ulong *)(param_1 + 0x58);
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
    if (bVar4) {
      *pqVar1 = qVar2;
      *(ulong *)(param_1 + 0x58) = uVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  psVar7 = (segment_command *)0x0;
  uVar8 = (uint)uVar3;
  do {
    while (qStack_60 = qVar2, uStack_58 = uVar3, (uVar8 >> 9 & 1) != 0) {
      FUN_00770690(param_1,&qStack_60);
      qVar2 = qStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (psVar7 == (segment_command *)0x0) {
      psVar7 = &segment_command_00000020;
      __Znwm();
      psVar7->cmd = 1;
      psVar7->cmdsize = 0;
      func_0x00770b00(psVar7->segname,0);
      psVar7->segname[8] = -0x40;
      psVar7->segname[9] = '\0';
      psVar7->segname[10] = '\0';
      psVar7->segname[0xb] = '\0';
      psVar7->segname[0xc] = '\0';
      psVar7->segname[0xd] = '\0';
      psVar7->segname[0xe] = '\0';
      psVar7->segname[0xf] = '\0';
      psVar7->vmaddr = qVar2;
      FUN_00770b0c(psVar7->segname);
    }
    else {
      psVar7->vmaddr = qVar2;
    }
    uVar6 = uVar3 | 0x200;
    do {
      while( true ) {
        qVar2 = *pqVar1;
        uVar3 = *(ulong *)(param_1 + 0x58);
        cVar5 = qVar2 != qStack_60;
        if (uVar3 != uStack_58) {
          cVar5 = cVar5 + '\x01';
        }
        if (cVar5 == '\0') break;
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
        if (bVar4) {
          *pqVar1 = qVar2;
          *(ulong *)(param_1 + 0x54) = uVar3;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') goto LAB_00770414;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
      if (bVar4) {
        *pqVar1 = (qword)(psVar7->segname + 8);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_00770414:
    if (qVar2 == qStack_60 && uVar3 == uStack_58) {
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
        bVar4 = (bool)ExclusiveMonitorPass(pqVar1,0x10);
        if (bVar4) {
          *pqVar1 = qStack_60;
          *(ulong *)(param_1 + 0x58) = uVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
        uVar3 = uStack_58;
      } while (cVar5 != '\0');
      FUN_00770b0c(0xb64718);
      _os_unfair_lock_unlock(psVar7->segname);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 00770610; end: 0077068f;  */

void FUN_00770610(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam0000000000b64710 != -1) {
    FUN_00770764();
  }
  if (pcRam0000000000b64708 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00770640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000b64708)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,&UNK_0091f5cb);
  *param_1 = uVar1;
  return;
}



/* Entry: 00770690; end: 00770763;  */

/* WARNING: Possible PIC construction at 0x007706e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x007706f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00770724: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00770728) */
/* WARNING: Removing unreachable block (ram,0x0077072c) */
/* WARNING: Removing unreachable block (ram,0x00770734) */
/* WARNING: Removing unreachable block (ram,0x0077073c) */
/* WARNING: Removing unreachable block (ram,0x007706e4) */
/* WARNING: Removing unreachable block (ram,0x007706f4) */
/* WARNING: Removing unreachable block (ram,0x0077071c) */
/* WARNING: Removing unreachable block (ram,0x00770708) */
/* WARNING: Removing unreachable block (ram,0x00770720) */

void FUN_00770690(long param_1,long *param_2)

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
  FUN_00770b0c(0xb64718);
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
    unaff_x30 = 0x7706e4;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0xb64718);
  return;
}



/* Entry: 00770764; end: 00770783;  */

void FUN_00770764(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb64710,0xb64708,0x770660);
  return;
}



/* Entry: 00770784; end: 00770893;  */

undefined8 FUN_00770784(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 00770894; end: 007708cb;  */

void FUN_00770894(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam0000000000b64728 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 007708cc; end: 007709bf;  */

void FUN_007708cc(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0xb64720,FUN_00770894,0);
  if ((bRam0000000000b64728 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam0000000000b64738 != -1) {
      func_0x007709dc();
    }
    iVar1 = (int)uVar2;
    if ((pcRam0000000000b64730 == (code *)0x0) || ((*pcRam0000000000b64730)(), iVar1 != 0)) {
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



/* Entry: 007709c0; end: 007709df;  */

void FUN_007709c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb64738,0xb64730,0x770990);
  return;
}



/* Entry: 007709e0; end: 00770acf;  */

void FUN_007709e0(undefined8 param_1)

{
  if (lRam0000000000b64748 != -1) {
    FUN_00770ad0();
  }
  if (pcRam0000000000b64740 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007709fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000b64740)(param_1);
    return;
  }
  return;
}



/* Entry: 00770ad0; end: 00770b0b;  */

void FUN_00770ad0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb64748,0xb64740,0x770a70);
  return;
}



/* Entry: 00770b0c; end: 00770b33;  */

void FUN_00770b0c(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 00770b34; end: 00770c23;  */

void FUN_00770b34(undefined8 param_1)

{
  if (lRam0000000000b64768 != -1) {
    FUN_00770c24();
  }
  if (pcRam0000000000b64760 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00770b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000000b64760)(param_1);
    return;
  }
  return;
}



/* Entry: 00770c24; end: 00770c53;  */

void FUN_00770c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb64768,0xb64760,0x770bc4);
  return;
}



/* Entry: 00770c54; end: 00770c7f; -[SCProcessedNotificationStorage init] */

void FUN_00770c54(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ProcessedNotificationServicesImplementation.ProcessedNotificationStorage",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x770c80);
  (*pcVar1)();
}



/* Entry: 00770c80; end: 0077114b; -[_TtC42SCNSEPrefetchedMediaServicesImplementation23NSEPrefetchedMediaStore init] */

void FUN_00770c80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCNSEPrefetchedMediaServicesImplementation.NSEPrefetchedMediaStore",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x770cac);
  (*pcVar1)();
}



/* Entry: 0077114c; end: 007711b7;  */

void FUN_0077114c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 *param_5)

{
  long extraout_x9;
  int extraout_w11;
  long *plVar1;
  
  FUN_0033e574();
  plVar1 = (long *)*param_2;
  if (plVar1 != (long *)0x0) {
    do {
      func_0x003401d4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  *param_5 = param_3;
  *(undefined4 *)(param_5 + 1) = param_4;
  return;
}



/* Entry: 007711b8; end: 007711ef;  */

void FUN_007711b8(undefined8 param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  do {
    func_0x003401d4();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x003401c4();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 007711f0; end: 00771493;  */

void FUN_007711f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  long extraout_x9;
  int extraout_w11;
  
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1dc,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1d9,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1ac,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x174,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1dc,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1d9,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x1ac,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.h"
                  ,0x174,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x8a,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x211,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x218,param_3,"assertion failed: %s");
  _abort();
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x211,param_3,"assertion failed: %s");
  _abort();
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
  ;
  func_0x003401bc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x218,param_3,"assertion failed: %s");
  _abort();
  do {
    func_0x003401d4();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x003401c4();
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar1);
  }
  return;
}



/* Entry: 00771494; end: 007714cb;  */

void FUN_00771494(undefined8 param_1)

{
  long extraout_x9;
  int extraout_w11;
  
  do {
    func_0x003401d4();
  } while (extraout_w11 != 0);
  if (extraout_x9 == 0) {
    func_0x003401c4();
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 007714cc; end: 007714d3;  */

void FUN_007714cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7714d0);
  (*pcVar1)();
}



/* Entry: 007714d4; end: 00771877;  */

void FUN_007714d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x6fc,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x3fa,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x3fb,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x622,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0xc60,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0xc5f,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x6ed,param_3,"assertion failed: %s");
  _abort();
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x820,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x80d,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x00357384();
  }
  return;
}



/* Entry: 00771878; end: 0077189f;  */

void FUN_00771878(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077189c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 007718a0; end: 007718cb;  */

void FUN_007718a0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    func_0x00357384();
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 007718cc; end: 00771997;  */

void FUN_007718cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x201,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
  ;
  func_0x0035737c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                  ,0x20d,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x00357384();
  }
  return;
}



/* Entry: 00771998; end: 007719bf;  */

void FUN_00771998(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007719bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 007719c0; end: 00771a67;  */

void FUN_007719c0(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
               ,0x55,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
               ,0x54,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 00771a68; end: 00771b0b;  */

void FUN_00771a68(long *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*param_1 + 8))();
    }
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 00771b0c; end: 00771bdf;  */

void FUN_00771b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  
  FUN_0035cd5c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
               ,0xf6,param_3,"assertion failed: %s");
  _abort();
  FUN_0035cd5c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
               ,0x7d);
  _abort();
  FUN_0035cd5c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/child_policy_handler.cc"
               ,0x78);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/grpclb/client_load_reporting_filter.cc"
  ;
  pcVar7 = "assertion failed: %s";
  uVar5 = 0x53;
  uVar6 = 2;
  FUN_00339074();
  _abort();
  plVar9 = *(long **)pcVar4;
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
  }
  *(undefined8 *)pcVar7 = uVar5;
  *(undefined4 *)(pcVar7 + 8) = uVar6;
  return;
}



/* Entry: 00771be0; end: 00771c4b;  */

void FUN_00771be0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
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
  *param_4 = param_2;
  *(undefined4 *)(param_4 + 1) = param_3;
  return;
}



/* Entry: 00771c4c; end: 00771e87;  */

void FUN_00771c4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x0035f994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                  ,0x1a6,param_3,"assertion failed: %s");
  _abort();
  func_0x0035f994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                  ,0x130,param_3,"assertion failed: %s");
  _abort();
  func_0x0035f994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                  ,0x133,param_3,"assertion failed: %s");
  _abort();
  func_0x0035f994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                  ,0x1e1,param_3,"assertion failed: %s");
  _abort();
  func_0x0035f994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/pick_first/pick_first.cc"
                  ,0x12f,param_3,"assertion failed: %s");
  _abort();
  FUN_003607d4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
               ,100,param_3,"assertion failed: %s");
  _abort();
  FUN_003607d4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
               ,0x6f,param_3,"assertion failed: %s");
  _abort();
  FUN_003607d4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
               ,0xac,param_3,"assertion failed: %s");
  _abort();
  FUN_00360994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
               ,0x25,param_3,"assertion failed: %s");
  _abort();
  FUN_00360994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
               ,0x30,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
  ;
  FUN_00360994("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/local_subchannel_pool.cc"
               ,0x31,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00362d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 0x10))();
  return;
}



/* Entry: 00771e88; end: 00771ea7;  */

void FUN_00771e88(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00362d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 00771ea8; end: 00772017;  */

void FUN_00771ea8(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  char *pcVar3;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/polling_resolver.cc"
               ,0x95,2,"assertion failed: %s");
  _abort();
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0x995);
  _abort();
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0x9e7);
  _abort();
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0x97);
  _abort();
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0x98);
  _abort();
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0xa38);
  _abort();
  pcVar3 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
  ;
  FUN_0036d8a8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/retry_filter.cc"
               ,0x430);
  _abort();
  do {
    func_0x003758f0();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (!(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00772040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar3 + 8))();
  return;
}



/* Entry: 00772018; end: 00772043;  */

void FUN_00772018(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x003758f0();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (!(bool)in_ZR) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00772040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 00772044; end: 007722b7;  */

void FUN_00772044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  func_0x003758e8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xfa,param_3,"assertion failed: %s");
  _abort();
  func_0x003758e8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xc2,param_3,"assertion failed: %s");
  _abort();
  func_0x003758e8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0xc1,param_3,"assertion failed: %s");
  _abort();
  func_0x003758e8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0x115,param_3,"assertion failed: %s");
  _abort();
  func_0x003758e8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                  ,0x11b,param_3,"assertion failed: %s");
  _abort();
  do {
    func_0x003758f0();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    func_0x003758dc();
  }
  return;
}



/* Entry: 007722b8; end: 0077232f;  */

void FUN_007722b8(long *param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  
  if (*param_1 != 0) {
    do {
      func_0x003758f0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x003758dc();
    }
  }
  if (*param_2 != 0) {
    do {
      func_0x003758f0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8_00,0x10);
      if (bVar2) {
        *extraout_x8_00 = extraout_x9_00;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x003758dc();
    }
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    __ZdlPv(*param_3);
  }
  return;
}



/* Entry: 00772330; end: 00772397;  */

void FUN_00772330(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x003758f0();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}



/* Entry: 00772398; end: 007723f3;  */

void FUN_00772398(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    do {
      func_0x003758f0();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x007723c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 007723f4; end: 0077263f;  */

void FUN_007723f4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
               ,0x6e,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel_stream_client.cc"
               ,0x1c8,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/deadline/deadline_filter.cc"
               ,0x7d,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/deadline/deadline_filter.cc"
               ,0xfa,2,"assertion failed: %s");
  _abort();
  FUN_0037c1a0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
               ,0x211);
  _abort();
  FUN_0037c1a0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
               ,0x218);
  _abort();
  func_0x0037cb18("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x211);
  _abort();
  func_0x0037cb18("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
                  ,0x218);
  _abort();
  func_0x0037d7fc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                  ,0x10c);
  _abort();
  func_0x0037d7fc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                  ,0xfb);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
  ;
  func_0x0037d7fc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/http/message_compress/message_compress_filter.cc"
                  ,0x4a);
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 == 0) {
    (**(code **)(*(long *)pcVar4 + 0x10))(pcVar4);
    __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar4);
  }
  return;
}



/* Entry: 00772640; end: 0077268b;  */

void FUN_00772640(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 0077268c; end: 0077289f;  */

void FUN_0077268c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_0037f44c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
               ,0x211,param_3,"assertion failed: %s");
  _abort();
  FUN_0037f44c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.h"
               ,0x218);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/message_size/message_size_filter.cc"
               ,0x149,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/alpn/alpn.cc"
               ,0x2b,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
               ,0x134,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/credentials.h"
               ,0x90,2,"assertion failed: %s");
  _abort();
  func_0x003827ec("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                  ,0xe3);
  _abort();
  func_0x003827ec("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/bin_encoder.cc"
                  ,0xe6);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
  ;
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x659);
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    func_0x0038bbe4();
  }
  return;
}



/* Entry: 007728a0; end: 007728e3;  */

void FUN_007728a0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  func_0x0038bbd4();
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(param_1);
  return;
}



/* Entry: 007728e4; end: 00772913;  */

void FUN_007728e4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x0038bbe4();
  }
  return;
}



/* Entry: 00772914; end: 00772957;  */

void FUN_00772914(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = (long *)(param_1 + 8);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 != 0) {
    return;
  }
  func_0x0038bbd4();
                    /* WARNING: Could not recover jumptable at 0x00779e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_00998b98)(param_1);
  return;
}



/* Entry: 00772958; end: 00773c7f;  */

void FUN_00772958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x304,param_3,"assertion failed: %s");
  _abort();
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x3b7,param_3,"assertion failed: %s");
  _abort();
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x3c8,param_3,"assertion failed: %s");
  _abort();
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x262,param_3,"assertion failed: %s");
  _abort();
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
               ,0x27f,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.h"
  ;
  FUN_0038bbc4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.h"
               ,0x37,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 00773c80; end: 00773c97;  */

void FUN_00773c80(long *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00773c98; end: 00774093;  */

void FUN_00773c98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  
  pcVar1 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/timer_manager.cc"
  ;
  FUN_003b6394("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/event_engine/iomgr_engine/timer_manager.cc"
               ,0x2f,param_3,"assertion failed: %s");
  _abort();
  if (pcVar1[0x17] < '\0') {
    __ZdlPv(*(undefined8 *)pcVar1);
  }
  return;
}



/* Entry: 00774094; end: 007740e3;  */

void FUN_00774094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_003c1728("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x595,param_3,"Attempted a blocking poll when declared non-polling.");
  FUN_003c1728("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_poll_posix.cc"
               ,0x596);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
               ,0x6f,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/exec_ctx.cc"
               ,0x56,2,"assertion failed: %s");
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x9e);
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x17f);
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x19a);
  _abort();
  FUN_003c2e14();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
               ,0x81,0,
               "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely")
  ;
  FUN_003c3100();
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
               ,0x56,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
               ,0xa0,2,
               "LockfreeEvent::NotifyOn: notify_on called with a previous callback still pending");
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x49);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x46);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x5d);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x5a);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/sockaddr_utils_posix.cc"
               ,0x3a,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
               ,0x189,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 007740e4; end: 00774427;  */

void FUN_007740e4(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/ev_posix.cc"
               ,0x6f,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/exec_ctx.cc"
               ,0x56,2,"assertion failed: %s");
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x9e);
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x17f);
  _abort();
  FUN_003c2cf8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/executor.cc"
               ,0x19a);
  _abort();
  FUN_003c2e14();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/iomgr.cc"
               ,0x81,0,
               "Failed to free %lu iomgr objects before shutdown deadline: memory leaks are likely")
  ;
  FUN_003c3100();
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
               ,0x56,2,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/lockfree_event.cc"
               ,0xa0,2,
               "LockfreeEvent::NotifyOn: notify_on called with a previous callback still pending");
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x49);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x46);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x5d);
  _abort();
  FUN_003c3e40("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/polling_entity.cc"
               ,0x5a);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/sockaddr_utils_posix.cc"
               ,0x3a,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/socket_utils_common_posix.cc"
               ,0x189,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 00774428; end: 00774473;  */

void FUN_00774428(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 00774474; end: 007747ef;  */

void FUN_00774474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  FUN_003cb940("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x207,param_3,"assertion failed: %s");
  _abort();
  FUN_003cb940("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x3c8);
  _abort();
  FUN_003cb940("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x5ee);
  _abort();
  FUN_003cb940("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x623);
  _abort();
  FUN_003cb940("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_posix.cc"
               ,0x1eb);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x20c);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x218);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x20f);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x20e);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x1ac);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0xae);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x9a);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x8e);
  _abort();
  FUN_003cd968("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/tcp_server_posix.cc"
               ,0x75);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/error.h"
               ,0xd5,2,"assertion failed: %s");
  _abort();
  FUN_003d05c0("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/iomgr/timer_manager.cc"
               ,0x53);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/json/json_reader.cc"
               ,0xdc,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7747f4);
  (*pcVar1)();
}



/* Entry: 007747f0; end: 007747f7;  */

void FUN_007747f0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7747f4);
  (*pcVar1)();
}



/* Entry: 007747f8; end: 0077482f;  */

void FUN_007747f8(void)

{
  code *pcVar1;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/promise/activity.cc"
               ,0x2f,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x774834);
  (*pcVar1)();
}



/* Entry: 00774830; end: 00774837;  */

void FUN_00774830(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x774834);
  (*pcVar1)();
}



/* Entry: 00774838; end: 007748df;  */

void FUN_00774838(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
               ,0x2b,2,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
  ;
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resolver/resolver_registry.cc"
               ,0x79,2,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 007748e0; end: 0077492b;  */

void FUN_007748e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 0077492c; end: 00774b37;  */

void FUN_0077492c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_003d90e4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0xbe,param_3,"assertion failed: %s");
  _abort();
  FUN_003d90e4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0xbf,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
  ;
  FUN_003d90e4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/resource_quota/memory_quota.cc"
               ,0x107,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 0x10))();
  }
  return;
}



/* Entry: 00774b38; end: 00774b5f;  */

void FUN_00774b38(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00774b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 00774b60; end: 00774c0b;  */

void FUN_00774b60(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/context/security_context.cc"
               ,0xc5,2,"assertion failed: %s");
  _abort();
  _abort();
  func_0x003dcb6c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                  ,0x89);
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
  ;
  func_0x003dcb6c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                  ,0x8a);
  _abort();
  plVar5 = *(long **)pcVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003dcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00774c0c; end: 00774c53;  */

void FUN_00774c0c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003dcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00774c54; end: 00774c87;  */

void FUN_00774c54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
  ;
  func_0x003dcb6c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/credentials/composite/composite_credentials.cc"
                  ,0x88,param_3,"assertion failed: %s");
  _abort();
  plVar5 = *(long **)pcVar4;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003dcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00774c88; end: 00774ccf;  */

void FUN_00774c88(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003dcb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 00774cd0; end: 00774d17;  */

void FUN_00774cd0(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (*param_1 != 0) {
    do {
      func_0x003dd688();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
      func_0x003dd67c();
    }
  }
  __ZdlPv(param_2);
  return;
}



/* Entry: 00774d18; end: 00774ed7;  */

void FUN_00774d18(void)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  do {
    func_0x003dd688();
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
    if (bVar2) {
      *extraout_x8 = extraout_x9;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((bool)in_ZR) {
    func_0x003dd67c();
  }
  return;
}



/* Entry: 00774ed8; end: 00774edf;  */

void FUN_00774ed8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x774edc);
  (*pcVar1)();
}



/* Entry: 00774ee0; end: 00775107;  */

void FUN_00774ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  func_0x003de970("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                  ,0x31,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
  ;
  func_0x003de970("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/security_connector.cc"
                  ,0x32,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)(pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    FUN_003df754();
  }
  return;
}



/* Entry: 00775108; end: 00775153;  */

void FUN_00775108(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 0x10))(param_1);
    __ZNSt3__119__shared_weak_count14__release_weakEv(param_1);
  }
  return;
}



/* Entry: 00775154; end: 0077575b;  */

void FUN_00775154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_003e89c8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
               ,0x14e,param_3,"assertion failed: %s");
  _abort();
  FUN_003e89c8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/transport/server_auth_filter.cc"
               ,0x14b,param_3,"assertion failed: %s");
  _abort();
  FUN_003eb9dc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/b64.cc"
               ,0x79,param_3,"assertion failed: %s");
  _abort();
  FUN_003eb9dc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/b64.cc"
               ,0x7a,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0xf2,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0xff,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0xf6,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0x133,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0x124,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0x15f,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0x169,param_3,"assertion failed: %s");
  _abort();
  func_0x003ec9f8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice.cc"
                  ,0x171,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x1b8,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x137,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x159,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x158,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x157,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x14c,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x137,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x159,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x158,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x157,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x152,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x169,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x183,param_3,"assertion failed: %s");
  _abort();
  FUN_003ede38("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/slice/slice_buffer.cc"
               ,0x194,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x1d6,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x1d7,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x271,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x274,param_3,"A pollset_set is already registered for this call.");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00775780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 8))();
  return;
}



/* Entry: 0077575c; end: 00775783;  */

void FUN_0077575c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00775780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 00775784; end: 00775c9f;  */

void FUN_00775784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x4e2,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x52e,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x69e,param_3,"assertion failed: %s");
  _abort();
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x6f8,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc";
  FUN_003f27b4("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/call.cc"
               ,0x707,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 == 0) {
    (**(code **)(*(long *)pcVar4 + 8))();
  }
  return;
}



/* Entry: 00775ca0; end: 00775cbf;  */

void FUN_00775ca0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003fa91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 00775cc0; end: 00775d27;  */

void FUN_00775cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  long lVar5;
  
  FUN_003fa90c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
               ,0x48e,param_3,"assertion failed: %s");
  _abort();
  pcVar4 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc";
  FUN_003fa90c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
               ,0x48f,param_3,"assertion failed: %s");
  _abort();
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003fa91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pcVar4 + 0x10))();
  return;
}



/* Entry: 00775d28; end: 00775d47;  */

void FUN_00775d28(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003fa91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 00775d48; end: 00775db3;  */

void FUN_00775d48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  FUN_003fa90c("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
               ,0x548,param_3,"assertion failed: %s");
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/bdp_estimator.cc"
               ,0x3a,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x775db8);
  (*pcVar1)();
}



/* Entry: 00775db4; end: 00775dbb;  */

void FUN_00775db4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x775db8);
  (*pcVar1)();
}



/* Entry: 00775dbc; end: 00776267;  */

void FUN_00775dbc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 1;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))();
  }
  return;
}



/* Entry: 00776268; end: 00776277;  */

void FUN_00776268(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x77626c);
  (*pcVar1)();
}



/* Entry: 00776278; end: 0077630f;  */

void FUN_00776278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00409ce8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
               ,0x95,param_3,"Name for compression algorithm \'%d\' unknown.");
  _abort();
  FUN_00409ce8("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/client/client_context.cc"
               ,0x99);
  _abort();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/cpp/common/channel_arguments.cc"
               ,0x87,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5d0,0,FUN_0040cb30);
  return;
}



/* Entry: 00776310; end: 00776353;  */

void FUN_00776310(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_0099a148)(0xb5f5d0,0,FUN_0040cb30);
  return;
}



/* Entry: 00776354; end: 0077636f;  */

void FUN_00776354(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_1f0 [16];
  undefined8 **ppuStack_1e0;
  undefined1 *puStack_1d8;
  undefined8 **ppuStack_1d0;
  code *pcStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [24];
  undefined8 **ppuStack_180;
  ulong uStack_178;
  byte bStack_169;
  char *pcStack_168;
  undefined8 uStack_160;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  char *pcStack_108;
  undefined8 uStack_100;
  char *pcStack_d8;
  undefined8 uStack_d0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_78;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  func_0x00546cd0();
  func_0x00546f60();
  func_0x00546618();
  pcStack_28 = FUN_00776370;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x00546cd0();
  func_0x00546f60();
  func_0x00546618();
  pcStack_48 = FUN_0077638c;
  ppuStack_50 = &puStack_30;
  func_0x0054adbc();
  uStack_78 = extraout_x8;
  func_0x0054aeb8();
  func_0x007766a0(auStack_1a8);
  pcVar2 = "Can\'t ";
  FUN_00532c74();
  pcStack_d8 = "parse";
  uStack_d0 = 5;
  pcVar3 = " message of type \"";
  pcStack_a8 = pcVar2;
  uStack_a0 = param_2;
  FUN_00532c74();
  pcStack_108 = pcVar3;
  uStack_100 = param_2;
  FUN_00549afc(&ppuStack_180,param_1);
  uVar1 = bStack_169 == 0;
  uStack_130 = uStack_178;
  ppuStack_138 = ppuStack_180;
  if (-1 < (char)bStack_169) {
    uStack_130 = (ulong)bStack_169;
    ppuStack_138 = &ppuStack_180;
  }
  pcVar2 = "\" because it is missing required fields: ";
  FUN_00532c74();
  pcStack_168 = pcVar2;
  uStack_160 = param_2;
  func_0x00549b4c(auStack_198,param_1);
  FUN_0054a558(auStack_1c0,&pcStack_a8,&pcStack_d8,&pcStack_108,&ppuStack_138,&pcStack_168,
               auStack_198);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_180);
  FUN_00555478(auStack_1a8,auStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
  puVar4 = auStack_1a8;
  FUN_007766a8();
  func_0x0054ad7c(uStack_78);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
    FUN_007766a8();
    func_0x0054ae04();
    pcStack_1c8 = FUN_007764ec;
    ppuStack_1e0 = &ppuStack_180;
    puStack_1d8 = puVar4;
    ppuStack_1d0 = &ppuStack_50;
    func_0x007766a0(auStack_1f0,"external/protobuf+/src/google/protobuf/io/coded_stream.cc",0xbb);
    FUN_0054e0dc(auStack_1f0,"A protocol message was rejected because it was too big (more than ");
    FUN_00537a7c();
    func_0x0054e0fc();
    FUN_007766a8(auStack_1f0);
    return;
  }
  return;
}



/* Entry: 00776370; end: 0077638b;  */

void FUN_00776370(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_1d0 [16];
  undefined8 **ppuStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 **ppuStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [24];
  undefined8 **ppuStack_160;
  ulong uStack_158;
  byte bStack_149;
  char *pcStack_148;
  undefined8 uStack_140;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  char *pcStack_e8;
  undefined8 uStack_e0;
  char *pcStack_b8;
  undefined8 uStack_b0;
  char *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_58;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  func_0x00546cd0();
  func_0x00546f60();
  func_0x00546618();
  pcStack_28 = FUN_0077638c;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x0054adbc();
  uStack_58 = extraout_x8;
  func_0x0054aeb8();
  func_0x007766a0(auStack_188);
  pcVar2 = "Can\'t ";
  FUN_00532c74();
  pcStack_b8 = "parse";
  uStack_b0 = 5;
  pcVar3 = " message of type \"";
  pcStack_88 = pcVar2;
  uStack_80 = param_2;
  FUN_00532c74();
  pcStack_e8 = pcVar3;
  uStack_e0 = param_2;
  FUN_00549afc(&ppuStack_160,param_1);
  uVar1 = bStack_149 == 0;
  uStack_110 = uStack_158;
  ppuStack_118 = ppuStack_160;
  if (-1 < (char)bStack_149) {
    uStack_110 = (ulong)bStack_149;
    ppuStack_118 = &ppuStack_160;
  }
  pcVar2 = "\" because it is missing required fields: ";
  FUN_00532c74();
  pcStack_148 = pcVar2;
  uStack_140 = param_2;
  func_0x00549b4c(auStack_178,param_1);
  FUN_0054a558(auStack_1a0,&pcStack_88,&pcStack_b8,&pcStack_e8,&ppuStack_118,&pcStack_148,
               auStack_178);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_160);
  FUN_00555478(auStack_188,auStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
  puVar4 = auStack_188;
  FUN_007766a8();
  func_0x0054ad7c(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    FUN_007766a8();
    func_0x0054ae04();
    pcStack_1a8 = FUN_007764ec;
    ppuStack_1c0 = &ppuStack_160;
    puStack_1b8 = puVar4;
    ppuStack_1b0 = &puStack_30;
    func_0x007766a0(auStack_1d0,"external/protobuf+/src/google/protobuf/io/coded_stream.cc",0xbb);
    FUN_0054e0dc(auStack_1d0,"A protocol message was rejected because it was too big (more than ");
    FUN_00537a7c();
    func_0x0054e0fc();
    FUN_007766a8(auStack_1d0);
    return;
  }
  return;
}



/* Entry: 0077638c; end: 007764eb;  */

void FUN_0077638c(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 auStack_1b0 [16];
  undefined8 **ppuStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [24];
  undefined8 **ppuStack_140;
  ulong uStack_138;
  byte bStack_129;
  char *pcStack_128;
  undefined8 uStack_120;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  char *pcStack_98;
  undefined8 uStack_90;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_38;
  
  func_0x0054adbc();
  uStack_38 = extraout_x8;
  func_0x0054aeb8();
  func_0x007766a0(auStack_168);
  pcVar2 = "Can\'t ";
  FUN_00532c74();
  pcStack_98 = "parse";
  uStack_90 = 5;
  pcVar3 = " message of type \"";
  pcStack_68 = pcVar2;
  uStack_60 = param_2;
  FUN_00532c74();
  pcStack_c8 = pcVar3;
  uStack_c0 = param_2;
  FUN_00549afc(&ppuStack_140,param_1);
  uVar1 = bStack_129 == 0;
  uStack_f0 = uStack_138;
  ppuStack_f8 = ppuStack_140;
  if (-1 < (char)bStack_129) {
    uStack_f0 = (ulong)bStack_129;
    ppuStack_f8 = &ppuStack_140;
  }
  pcVar2 = "\" because it is missing required fields: ";
  FUN_00532c74();
  pcStack_128 = pcVar2;
  uStack_120 = param_2;
  func_0x00549b4c(auStack_158,param_1);
  FUN_0054a558(auStack_180,&pcStack_68,&pcStack_98,&pcStack_c8,&ppuStack_f8,&pcStack_128,auStack_158
              );
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_140);
  FUN_00555478(auStack_168,auStack_180);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
  puVar4 = auStack_168;
  FUN_007766a8();
  func_0x0054ad7c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    FUN_007766a8();
    func_0x0054ae04();
    pcStack_188 = FUN_007764ec;
    ppuStack_1a0 = &ppuStack_140;
    puStack_198 = puVar4;
    puStack_190 = &stack0xfffffffffffffff0;
    func_0x007766a0(auStack_1b0,"external/protobuf+/src/google/protobuf/io/coded_stream.cc",0xbb);
    FUN_0054e0dc(auStack_1b0,"A protocol message was rejected because it was too big (more than ");
    FUN_00537a7c();
    func_0x0054e0fc();
    FUN_007766a8(auStack_1b0);
    return;
  }
  return;
}



/* Entry: 007764ec; end: 00776563;  */

void FUN_007764ec(void)

{
  undefined1 auStack_30 [16];
  
  func_0x007766a0(auStack_30,"external/protobuf+/src/google/protobuf/io/coded_stream.cc",0xbb);
  FUN_0054e0dc(auStack_30,"A protocol message was rejected because it was too big (more than ");
  FUN_00537a7c();
  func_0x0054e0fc();
  FUN_007766a8(auStack_30);
  return;
}



/* Entry: 00776564; end: 00776597;  */

char * FUN_00776564(void)

{
  qword *pqVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  qword qVar5;
  qword aqStack_20 [2];
  
  pqVar1 = aqStack_20;
  FUN_0077670c(aqStack_20,"external/protobuf+/src/google/protobuf/io/zero_copy_stream.cc",0x71);
  FUN_0054fb18(aqStack_20);
  FUN_005558a0();
  pcVar2 = segment_command_00000020.segname + 8;
  ___cxa_allocate_exception();
  qVar5 = *pqVar1;
  *pqVar1 = 0x36;
  *(undefined ***)pcVar2 = &PTR_FUN_00a01360;
  *(qword *)(pcVar2 + 8) = qVar5;
  *(undefined4 *)(pcVar2 + 0x10) = 0;
  *(qword *)(pcVar2 + 0x20) = 0;
  *(undefined8 *)(pcVar2 + 0x28) = 0;
  *(qword *)(pcVar2 + 0x18) = 0;
  ___cxa_throw();
  pcVar3 = pcVar2;
  ___error();
  *(undefined4 *)pcVar2 = *(undefined4 *)pcVar3;
  FUN_0056f18c();
  puVar4 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(pcVar2 + 8) = puVar4;
  *(undefined2 *)(puVar4 + 0x80) = 0;
  puVar4[0x82] = 0;
  return pcVar2;
}



/* Entry: 00776598; end: 007765e7;  */

char * FUN_00776598(qword *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  qword qVar4;
  
  pcVar1 = segment_command_00000020.segname + 8;
  ___cxa_allocate_exception();
  qVar4 = *param_1;
  *param_1 = 0x36;
  *(undefined ***)pcVar1 = &PTR_FUN_00a01360;
  *(qword *)(pcVar1 + 8) = qVar4;
  *(undefined4 *)(pcVar1 + 0x10) = 0;
  *(qword *)(pcVar1 + 0x20) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(qword *)(pcVar1 + 0x18) = 0;
  ___cxa_throw();
  pcVar2 = pcVar1;
  ___error();
  *(undefined4 *)pcVar1 = *(undefined4 *)pcVar2;
  FUN_0056f18c();
  puVar3 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(pcVar1 + 8) = puVar3;
  *(undefined2 *)(puVar3 + 0x80) = 0;
  puVar3[0x82] = 0;
  return pcVar1;
}



/* Entry: 007765e8; end: 00776697;  */

undefined4 * FUN_007765e8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  ___error();
  *param_1 = *puVar1;
  FUN_0056f18c();
  puVar2 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(param_1 + 2) = puVar2;
  *(undefined2 *)(puVar2 + 0x80) = 0;
  puVar2[0x82] = 0;
  return param_1;
}



/* Entry: 00776698; end: 007766a7;  */

undefined4 * FUN_00776698(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  ___error();
  *param_1 = *puVar1;
  FUN_0056f18c();
  puVar2 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(param_1 + 2) = puVar2;
  *(undefined2 *)(puVar2 + 0x80) = 0;
  puVar2[0x82] = 0;
  return param_1;
}



/* Entry: 007766a8; end: 007766e7;  */

undefined4 * FUN_007766a8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN_005550ec();
  puVar2 = param_1 + 2;
  FUN_00555060();
  uVar1 = *param_1;
  ___error();
  *puVar2 = uVar1;
  return param_1;
}



/* Entry: 007766e8; end: 0077670b;  */

undefined4 * FUN_007766e8(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0xb69480,0x10);
    if (bVar2) {
      uRam0000000000b69480 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  _abort();
  puVar3 = param_1;
  ___error();
  *param_1 = *puVar3;
  FUN_0056f18c();
  puVar4 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(param_1 + 2) = puVar4;
  *(undefined2 *)(puVar4 + 0x80) = 0;
  puVar4[0x82] = 0;
  return param_1;
}



/* Entry: 0077670c; end: 00776713;  */

undefined4 * FUN_0077670c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  puVar1 = param_1;
  ___error();
  *param_1 = *puVar1;
  FUN_0056f18c();
  puVar2 = &UNK_000076f8;
  __Znwm();
  FUN_00554e34();
  *(undefined **)(param_1 + 2) = puVar2;
  *(undefined2 *)(puVar2 + 0x80) = 0;
  puVar2[0x82] = 0;
  return param_1;
}



/* Entry: 00776714; end: 00776793;  */

undefined8
FUN_00776714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_007765e8();
  FUN_00554ab4();
  func_0x00554c74(param_1,param_4,param_5);
  FUN_00554ab4(param_1," ",1);
  return param_1;
}



/* Entry: 00776794; end: 00776797;  */

undefined8
FUN_00776794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_007765e8();
  FUN_00554ab4();
  func_0x00554c74(param_1,param_4,param_5);
  FUN_00554ab4(param_1," ",1);
  return param_1;
}



/* Entry: 00776798; end: 007767f3;  */

void FUN_00776798(ulong param_1)

{
  code *pcVar1;
  
  FUN_00567658();
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_00584c60(3,"mutex.cc",0x719,"Check %s failed: %s");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x7767f4);
  (*pcVar1)();
}



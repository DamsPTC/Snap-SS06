/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004a444c; end: 004a44e3;  */

undefined ** FUN_004a444c(void)

{
  return &PTR_DAT_00b09308;
}



/* Entry: 004a44e4; end: 004a4553;  */

void FUN_004a44e4(long param_1)

{
  undefined8 uVar1;
  
  if (cRam0000000000b66208 == '\x01') {
    FUN_004a43cc();
    *(undefined2 *)(param_1 + 0xf8) = uRam0000000000b661e8;
    *(undefined8 *)(param_1 + 0xf0) = uRam0000000000b661e0;
    uVar1 = uRam0000000000b661b0;
    *(undefined8 *)(param_1 + 200) = uRam0000000000b661b8;
    *(undefined8 *)(param_1 + 0xc0) = uVar1;
    uVar1 = uRam0000000000b661c8;
    *(undefined8 *)(param_1 + 0xe0) = uRam0000000000b661d0;
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    *(undefined2 *)(param_1 + 0xec) = uRam0000000000b661dc;
    *(undefined8 *)(param_1 + 0xd0) = uRam0000000000b661c0;
    *(undefined4 *)(param_1 + 0xe8) = uRam0000000000b661d8;
  }
  return;
}



/* Entry: 004a4554; end: 004a4597;  */

double FUN_004a4554(void)

{
  long lStack_20;
  int iStack_18;
  
  _gettimeofday(&lStack_20,0);
  return (double)iStack_18 / 1000000.0 + (double)lStack_20;
}



/* Entry: 004a4598; end: 004a460f;  */

undefined1 FUN_004a4598(void)

{
  return uRam0000000000b66208;
}



/* Entry: 004a4610; end: 004a4683;  */

void FUN_004a4610(void)

{
  if ((bRam0000000000b66209 & 1) == 0) {
    FUN_004a6c1c(0x4a4648);
    bRam0000000000b66209 = 1;
  }
  return;
}



/* Entry: 004a4684; end: 004a468f;  */

undefined ** FUN_004a4684(void)

{
  return &PTR_FUN_00b09320;
}



/* Entry: 004a4690; end: 004a4737;  */

void FUN_004a4690(long param_1)

{
  byte bVar1;
  code *pcVar2;
  
  if ((uint)bRam0000000000b60781 != (uint)param_1) {
    bVar1 = (byte)param_1;
    bRam0000000000b60781 = bVar1;
    if ((uint)param_1 == 0) {
      __ZSt13set_terminatePFvvE(pcRam0000000000b60788);
      bRam0000000000b60780 = bVar1;
    }
    else {
      if ((bRam0000000000b60782 & 1) == 0) {
        bRam0000000000b60782 = 1;
        FUN_004a4a90();
        *(code **)(param_1 + 0x40) = FUN_004ad4c4;
        *(undefined8 *)(param_1 + 0x30) = 0x4ad0e0;
        *(undefined8 *)(param_1 + 0x38) = 0x4ad0f0;
        func_0x004ad0e0();
      }
      FUN_004a84c8(0xb60790);
      pcVar2 = FUN_004a4744;
      __ZSt13set_terminatePFvvE();
      bRam0000000000b60780 = bVar1;
      pcRam0000000000b60788 = pcVar2;
    }
  }
  return;
}



/* Entry: 004a4738; end: 004a4743;  */

undefined1 FUN_004a4738(void)

{
  return uRam0000000000b60781;
}



/* Entry: 004a4744; end: 004a4a8f;  */

/* WARNING: Possible PIC construction at 0x004a48fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004a4900) */
/* WARNING: Removing unreachable block (ram,0x004a490c) */
/* WARNING: Removing unreachable block (ram,0x004a4918) */

void FUN_004a4744(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *unaff_x22;
  int iStack_44c;
  long *plStack_448;
  undefined1 auStack_440 [1000];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  ___cxa_current_exception_type();
  if ((param_1 == 0) || (uVar2 = *(ulong *)(param_1 + 8) & 0x7fffffffffffffff, uVar2 == 0)) {
    func_0x004a4aa0();
LAB_004a47fc:
    FUN_004a3b08(0);
    _bzero(0xb607b8,0x1e8);
    auStack_440[0] = 0;
    uRam0000000000b60780 = 0;
    ___cxa_rethrow();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x4a4828);
    (*pcVar1)();
  }
  FUN_004a8590(uVar2,"NSException",0xb);
  func_0x004a4aa0();
  if ((uVar2 & 1) == 0) goto LAB_004a47fc;
  FUN_004ab8c4();
  (*pcRam0000000000b60788)();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (iStack_44c == 0) {
    __Unwind_Resume();
    goto FUN_004a4a90;
  }
  if ((iStack_44c == 0x11) || (iStack_44c == 0x10)) {
    ___cxa_begin_catch();
    (**(code **)(*plStack_448 + 0x10))();
    _strncpy(auStack_440,plStack_448,1000);
  }
  else {
    if (iStack_44c == 0xf) {
      ___cxa_begin_catch();
LAB_004a48a4:
      pcVar3 = "%d";
    }
    else {
      if (iStack_44c == 0xe) {
        ___cxa_begin_catch();
        goto LAB_004a48a4;
      }
      if (iStack_44c == 0xd) {
        ___cxa_begin_catch();
        goto LAB_004a48a4;
      }
      if (iStack_44c == 0xc) {
        ___cxa_begin_catch();
        func_0x004a4ab4();
        pcVar3 = "%ld";
      }
      else if (iStack_44c == 0xb) {
        ___cxa_begin_catch();
        func_0x004a4ab4();
        pcVar3 = "%lld";
      }
      else {
        if (iStack_44c == 10) {
          ___cxa_begin_catch();
        }
        else if (iStack_44c == 9) {
          ___cxa_begin_catch();
        }
        else {
          if (iStack_44c != 8) {
            if (iStack_44c == 7) {
              ___cxa_begin_catch();
              func_0x004a4ab4();
              pcVar3 = "%lu";
            }
            else if (iStack_44c == 6) {
              ___cxa_begin_catch();
              func_0x004a4ab4();
              pcVar3 = "%llu";
            }
            else {
              if (iStack_44c == 5) {
                ___cxa_begin_catch();
              }
              else {
                if (iStack_44c != 4) {
                  if (iStack_44c == 3) {
                    ___cxa_begin_catch();
                    pcVar3 = "%Lf";
                  }
                  else {
                    ___cxa_begin_catch();
                    if (iStack_44c != 2) goto LAB_004a48c4;
                    pcVar3 = "%s";
                  }
                  goto LAB_004a48b0;
                }
                ___cxa_begin_catch();
              }
              pcVar3 = "%f";
            }
            goto LAB_004a48b0;
          }
          ___cxa_begin_catch();
        }
        pcVar3 = "%u";
      }
    }
LAB_004a48b0:
    _snprintf(auStack_440,1000,pcVar3);
  }
LAB_004a48c4:
  ___cxa_end_catch();
  *unaff_x22 = unaff_x22[1];
  (*(code *)PTR____chkstk_darwin_00999f48)();
  FUN_004ad8d8();
  FUN_004ab2c0();
FUN_004a4a90:
                    /* WARNING: Could not recover jumptable at 0x004a4a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_00b2c330)();
  return;
}



/* Entry: 004a4a90; end: 004a4acb;  */

void FUN_004a4a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x004a4a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___tlv_bootstrap_00b2c330)();
  return;
}



/* Entry: 004a4acc; end: 004a4d27;  */

void FUN_004a4acc(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar1 = (uint)bRam0000000000b609a0 == (uint)param_1;
  if (!(bool)uVar1) {
    bRam0000000000b609a0 = (byte)param_1;
    if ((uint)param_1 == 0) {
      func_0x004a5240(uStack_28);
      if ((bool)uVar1) {
        func_0x004a5098();
        iVar2 = (int)param_1;
        FUN_004ad8d8();
        if ((puRam0000000000b609b8 != (undefined1 *)0x0) && (iRam0000000000b609ac != iVar2)) {
          if (cRam0000000000b609a1 == '\x01') {
            _thread_terminate(iRam0000000000b609ac);
          }
          else {
            _pthread_cancel();
          }
          iRam0000000000b609ac = 0;
          puRam0000000000b609b8 = (undefined1 *)0x0;
        }
        if ((lRam0000000000b609b0 != 0) && (iRam0000000000b609a8 != iVar2)) {
          if (cRam0000000000b609a1 == '\x01') {
            _thread_terminate(iRam0000000000b609a8);
          }
          else {
            _pthread_cancel();
          }
          iRam0000000000b609a8 = 0;
          lRam0000000000b609b0 = 0;
        }
        iRam0000000000b609a4 = 0;
        return;
      }
      goto LAB_004a4d24;
    }
    FUN_004a84c8(0xb609c0);
    FUN_004a84c8(0xb609e5);
    puVar4 = (undefined1 *)(ulong)*(uint *)PTR__mach_task_self__0099a3c0;
    param_1 = puVar4;
    _task_get_exception_ports(puVar4,0x6e,0xb60a0c,0xb60aec,0xb60a44,0xb60a7c,0xb60ab4);
    if ((int)param_1 == 0) {
      if (iRam0000000000b609a4 == 0) {
        param_1 = puVar4;
        _mach_port_allocate(puVar4,1,0xb609a4);
        if ((int)param_1 == 0) {
          param_1 = puVar4;
          _mach_port_insert_right(puVar4,iRam0000000000b609a4,iRam0000000000b609a4,0x14);
          if ((int)param_1 == 0) goto LAB_004a4b90;
          _mach_error_string();
          func_0x004a5224();
          func_0x004a5254();
        }
        else {
          _mach_error_string();
          func_0x004a5224();
          func_0x004a5254();
        }
        goto LAB_004a4c7c;
      }
LAB_004a4b90:
      _task_set_exception_ports(puVar4,0x6e,iRam0000000000b609a4,0x80000001,5);
      if ((int)puVar4 != 0) {
        _mach_error_string();
        func_0x004a5224();
        func_0x004a5254();
        param_1 = puVar4;
        goto LAB_004a4c7c;
      }
      _pthread_attr_init(auStack_68);
      _pthread_attr_setdetachstate(auStack_68,2);
      iVar2 = 0xb609b0;
      _pthread_create(0xb609b0,auStack_68,0x4a4d70,"KSCrash Exception Handler (Secondary)");
      if (iVar2 == 0) {
        _pthread_mach_thread_np(lRam0000000000b609b0);
        func_0x004a5260();
        iVar2 = 0xb609b8;
        _pthread_create(0xb609b8,auStack_68,0x4a4d70,"KSCrash Exception Handler (Primary)");
        if (iVar2 == 0) {
          _pthread_attr_destroy(auStack_68);
          param_1 = puRam0000000000b609b8;
          _pthread_mach_thread_np();
          func_0x004a5260();
          goto LAB_004a4c84;
        }
        _strerror();
        func_0x004a5224();
        func_0x004a5254();
      }
      else {
        _strerror();
        func_0x004a5224();
        func_0x004a5254();
      }
      func_0x004ab038();
      param_1 = auStack_68;
      _pthread_attr_destroy();
    }
    else {
      _mach_error_string();
      func_0x004a5224();
      func_0x004a5254();
LAB_004a4c7c:
      func_0x004ab038();
    }
    FUN_004a5158();
  }
LAB_004a4c84:
  func_0x004a5240(uStack_28);
  if ((bool)uVar1) {
    return;
  }
LAB_004a4d24:
  ___stack_chk_fail();
  if (*(int *)(param_1 + 0x30) != 1) {
    if (*(int *)(param_1 + 0x30) == 2) {
      if (*(int *)(param_1 + 0x90) - 4U < 10) {
        uVar3 = *(undefined4 *)(&UNK_00805bc8 + (ulong)(*(int *)(param_1 + 0x90) - 4U) * 4);
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 10;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar3;
  }
  return;
}



/* Entry: 004a4d28; end: 004a4d6f;  */

void FUN_004a4d28(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x30) != 1) {
    if (*(int *)(param_1 + 0x30) == 2) {
      uVar1 = *(int *)(param_1 + 0x90) - 4;
      if (uVar1 < 10) {
        uVar2 = *(undefined4 *)(&UNK_00805bc8 + (ulong)uVar1 * 4);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 10;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  return;
}



/* Entry: 004a4d70; end: 004a5157;  */

/* WARNING: Possible PIC construction at 0x004a4e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x004a4e90) */

char * FUN_004a4d70(char *param_1)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  ulong extraout_x8;
  ulong uVar8;
  undefined8 unaff_x21;
  undefined8 uVar9;
  undefined4 *puVar10;
  char acStack_7a0 [1136];
  char *pcStack_330;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  uint uStack_280;
  undefined8 uStack_268;
  int iStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  _bzero(&uStack_29c,0x244);
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  _pthread_setname_np(param_1);
  uVar3 = param_1 == "KSCrash Exception Handler (Secondary)";
  if ((bool)uVar3) {
    FUN_004ad8d8();
    _thread_suspend();
    uVar9 = 0xb609e5;
  }
  else {
    uVar9 = 0xb609c0;
  }
  func_0x004a5284();
  while( true ) {
    puVar4 = &uStack_29c;
    func_0x004a5278(puVar4,2,0,0x244,uRam0000000000b609a4);
    if ((int)puVar4 == 0) break;
    _mach_error_string();
    func_0x004a526c(param_1);
  }
  if ((bRam0000000000b609a0 & 1) != 0) {
    uStack_2c8 = 0;
    uStack_2cc = 0;
    FUN_004ab534(&uStack_2c8,&uStack_2cc);
    unaff_x21 = 0xb609a1;
    uRam0000000000b609a1 = 1;
    pcVar5 = (char *)((long)&MACH_HEADER.magic + 1);
    FUN_004a3b08();
    FUN_004ad8d8();
    if (pcVar5 == (char *)(ulong)uRam0000000000b609ac) goto SUB_004a5098;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    param_1 = acStack_7a0;
    pcRam0000000000b60d18 = FUN_004ad4c4;
    uRam0000000000b60d10 = 0x4ad0f0;
    uRam0000000000b60d08 = 0x4ad0e0;
    pcRam0000000000b60b08 = param_1;
    func_0x004ad0e0(0xb60cd8);
    uVar6 = (ulong)uStack_280;
    FUN_004ab2c0(uVar6,param_1,1);
    if ((uVar6 & 1) != 0) {
      func_0x004ad1a0(0xb60cd8,500,param_1);
      lVar1 = 0x1a0;
      if (iStack_260 != 1) {
        lVar1 = 0x2b0;
      }
      uRam0000000000b60b18 = *(undefined8 *)(param_1 + lVar1);
    }
    uRam0000000000b60b20 = 1;
    puRam0000000000b60af8 = PTR_s_unavailable_00b09240;
    uRam0000000000b60b04 = 1;
    uRam0000000000b60b50 = uStack_250;
    lRam0000000000b60b48 = lStack_258;
    uRam0000000000b60b58 = 0xb6620a;
    if ((lStack_258 == 2) && ((bRam0000000000b60b05 & 1) != 0)) {
      lRam0000000000b60b48 = 1;
    }
    uVar3 = iStack_260 + -1 == 5;
    uRam0000000000b60b80 = 8;
    switch(iStack_260 + -1) {
    case 0:
      uVar3 = lRam0000000000b60b48 == 1;
      uRam0000000000b60b80 = 10;
      if ((bool)uVar3) {
        uRam0000000000b60b80 = 0xb;
      }
      break;
    case 1:
      uRam0000000000b60b80 = 4;
      break;
    case 2:
      break;
    case 3:
      uRam0000000000b60b80 = 7;
      break;
    case 4:
      uVar6 = lRam0000000000b60b48 - 0x10000;
      uVar3 = uVar6 == 4;
      if (3 < uVar6) goto LAB_004a4fec;
      uRam0000000000b60b80 = *(undefined4 *)(&UNK_00805bf0 + uVar6 * 4);
      break;
    case 5:
      uRam0000000000b60b80 = 5;
      break;
    default:
LAB_004a4fec:
      uRam0000000000b60b80 = 0;
    }
    uRam0000000000b60b38 = 0xb60cd8;
    uRam0000000000b60af0 = uVar9;
    iRam0000000000b60b40 = iStack_260;
    FUN_004a3b78(0xb60af0);
    uRam0000000000b609a1 = 0;
    FUN_004ab8c4(uStack_2c8,uStack_2cc);
  }
  uStack_2b8 = uStack_294;
  uStack_2c0 = uStack_29c;
  uStack_2b0 = uStack_28c;
  uStack_2a8 = uStack_268;
  uStack_2a0 = 5;
  pcVar5 = (char *)&uStack_2c0;
  func_0x004a5278(pcVar5,1,0x24,0,0);
  func_0x004a5240(uStack_58);
  if ((bool)uVar3) {
    return (char *)0x0;
  }
  ___stack_chk_fail();
SUB_004a5098:
  if (uRam0000000000b60aec != 0) {
    puVar10 = (undefined4 *)0xb60a44;
    uVar2 = *(uint *)PTR__mach_task_self__0099a3c0;
    func_0x004a5284();
    uVar8 = extraout_x8;
    for (uVar6 = 0; uVar6 < uVar8; uVar6 = uVar6 + 1) {
      pcVar7 = (char *)(ulong)uVar2;
      _task_set_exception_ports
                ((char *)(ulong)uVar2,puVar10[-0xe],*puVar10,puVar10[0xe],puVar10[0x1c]);
      pcVar5 = pcVar7;
      if ((int)pcVar7 != 0) {
        _mach_error_string();
        pcVar5 = param_1;
        pcStack_330 = pcVar7;
        func_0x004a526c(param_1,unaff_x21,0xc1);
      }
      uVar8 = (ulong)uRam0000000000b60aec;
      puVar10 = puVar10 + 1;
    }
    uRam0000000000b60aec = 0;
  }
  return pcVar5;
}



/* Entry: 004a5158; end: 004a5217;  */

void FUN_004a5158(int param_1)

{
  func_0x004a5098();
  FUN_004ad8d8();
  if ((lRam0000000000b609b8 != 0) && (iRam0000000000b609ac != param_1)) {
    if (cRam0000000000b609a1 == '\x01') {
      _thread_terminate(iRam0000000000b609ac);
    }
    else {
      _pthread_cancel();
    }
    iRam0000000000b609ac = 0;
    lRam0000000000b609b8 = 0;
  }
  if ((lRam0000000000b609b0 != 0) && (iRam0000000000b609a8 != param_1)) {
    if (cRam0000000000b609a1 == '\x01') {
      _thread_terminate(iRam0000000000b609a8);
    }
    else {
      _pthread_cancel();
    }
    iRam0000000000b609a8 = 0;
    lRam0000000000b609b0 = 0;
  }
  uRam0000000000b609a4 = 0;
  return;
}



/* Entry: 004a5218; end: 004a52a3;  */

undefined1 FUN_004a5218(void)

{
  return uRam0000000000b609a0;
}



/* Entry: 004a52a4; end: 004a52ef;  */

void FUN_004a52a4(code *param_1)

{
  code *pcVar1;
  
  if ((uint)bRam0000000000b61040 != (uint)param_1) {
    bRam0000000000b61040 = (byte)param_1;
    pcVar1 = pcRam0000000000b61048;
    if ((uint)param_1 != 0) {
      _NSGetUncaughtExceptionHandler();
      pcVar1 = FUN_004a52f0;
      pcRam0000000000b61048 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x007798bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__NSSetUncaughtExceptionHandler_00998f78)(pcVar1);
    return;
  }
  return;
}



/* Entry: 004a52f0; end: 004a52f3;  */

ulong FUN_004a52f0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auStack_900 [1216];
  ulong uStack_440;
  ulong uStack_428;
  ulong uStack_420;
  undefined1 auStack_418 [876];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_95 [37];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  if ((bRam0000000000b61040 & 1) != 0) {
    uVar1 = param_1;
    func_0x0077ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00780e80();
    lVar3 = uVar2 << 3;
    _malloc();
    for (uVar6 = 0; uVar2 != uVar6; uVar6 = uVar6 + 1) {
      uVar4 = uVar1;
      func_0x00789e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00793120();
      *(ulong *)(lVar3 + uVar6 * 8) = uVar4;
      func_0x004a5644();
    }
    uVar6 = param_1;
    func_0x00789760();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x0077bcc0();
    uStack_420 = uVar6;
    func_0x004a5644();
    uVar6 = param_1;
    func_0x0078afc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x0077bcc0();
    uStack_428 = uVar6;
    func_0x004a5644();
    uVar6 = param_1;
    func_0x00793400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar4 = param_1;
      func_0x00793400(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = 0;
      func_0x00781700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_a0;
      _objc_retain(uStack_a0);
      _objc_release(uVar4);
      if (uVar6 != 0) {
        uStack_440 = uVar6;
        FUN_004ab180("ERROR",
                     "Vendors/KSCrash/implementation/Recording/Monitors/KSCrashMonitor_NSException.m"
                     ,0x5d,"void handleException(NSException *__strong, BOOL)",
                     &PTR____CFConstantStringClassReference_00a27c60);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
      if (puVar5 == (undefined *)0x0) {
        uVar4 = param_1;
        func_0x00793400();
        _objc_retainAutoreleasedReturnValue();
        uStack_440 = uVar4;
        func_0x007921a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      else {
        _objc_alloc();
        func_0x007851e0();
      }
      _objc_retainAutorelease();
      func_0x0077bcc0();
      _objc_release(puVar5);
      _objc_release(uVar6);
      func_0x004a5644();
    }
    uStack_a8 = 0;
    uStack_ac = 0;
    FUN_004ab534(&uStack_a8,&uStack_ac);
    FUN_004a3b08(0);
    FUN_004a84c8(auStack_95);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    FUN_004ad8d8();
    FUN_004ab2c0();
    FUN_004ad0f8(auStack_418,lVar3,(long)(int)uVar2,0);
    _bzero(0xb61060,0x1d8);
    uRam0000000000b61080 = 8;
    puRam0000000000b61058 = PTR_s_unavailable_00b09240;
    uRam0000000000b610c0 = uStack_420;
    uRam0000000000b61088 = uStack_420;
    uRam0000000000b61090 = uStack_428;
    puRam0000000000b61050 = auStack_95;
    puRam0000000000b61068 = auStack_900;
    puRam0000000000b61098 = auStack_418;
    puRam0000000000b610c8 = puVar7;
    FUN_004a3b78();
    _free(lVar3);
    if (pcRam0000000000b61048 != (code *)0x0) {
      (*pcRam0000000000b61048)(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  return (ulong)bRam0000000000b61040;
}



/* Entry: 004a52f4; end: 004a5637;  */

ulong FUN_004a52f4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 auStack_900 [1216];
  ulong uStack_440;
  ulong uStack_428;
  ulong uStack_420;
  undefined1 auStack_418 [876];
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined1 auStack_95 [37];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain();
  if ((bRam0000000000b61040 & 1) != 0) {
    uVar1 = param_1;
    func_0x0077ff20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00780e80();
    lVar3 = uVar2 << 3;
    _malloc();
    for (uVar6 = 0; uVar2 != uVar6; uVar6 = uVar6 + 1) {
      uVar4 = uVar1;
      func_0x00789e20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00793120();
      *(ulong *)(lVar3 + uVar6 * 8) = uVar4;
      func_0x004a5644();
    }
    uVar6 = param_1;
    func_0x00789760();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x0077bcc0();
    uStack_420 = uVar6;
    func_0x004a5644();
    uVar6 = param_1;
    func_0x0078afc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x0077bcc0();
    uStack_428 = uVar6;
    func_0x004a5644();
    uVar6 = param_1;
    func_0x00793400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_00ac29a8;
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      uVar4 = param_1;
      func_0x00793400(param_1);
      _objc_retainAutoreleasedReturnValue();
      uStack_a0 = 0;
      func_0x00781700();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uStack_a0;
      _objc_retain(uStack_a0);
      _objc_release(uVar4);
      if (uVar6 != 0) {
        uStack_440 = uVar6;
        FUN_004ab180("ERROR",
                     "Vendors/KSCrash/implementation/Recording/Monitors/KSCrashMonitor_NSException.m"
                     ,0x5d,"void handleException(NSException *__strong, BOOL)",
                     &PTR____CFConstantStringClassReference_00a27c60);
      }
      puVar7 = PTR__OBJC_CLASS___NSString_00ac2988;
      if (puVar5 == (undefined *)0x0) {
        uVar4 = param_1;
        func_0x00793400();
        _objc_retainAutoreleasedReturnValue();
        uStack_440 = uVar4;
        func_0x007921a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      else {
        _objc_alloc();
        func_0x007851e0();
      }
      _objc_retainAutorelease();
      func_0x0077bcc0();
      _objc_release(puVar5);
      _objc_release(uVar6);
      func_0x004a5644();
    }
    uStack_a8 = 0;
    uStack_ac = 0;
    FUN_004ab534(&uStack_a8,&uStack_ac);
    FUN_004a3b08(0);
    FUN_004a84c8(auStack_95);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    FUN_004ad8d8();
    FUN_004ab2c0();
    FUN_004ad0f8(auStack_418,lVar3,(long)(int)uVar2,0);
    _bzero(0xb61060,0x1d8);
    uRam0000000000b61080 = 8;
    puRam0000000000b61058 = PTR_s_unavailable_00b09240;
    uRam0000000000b610c0 = uStack_420;
    uRam0000000000b61088 = uStack_420;
    uRam0000000000b61090 = uStack_428;
    puRam0000000000b61050 = auStack_95;
    puRam0000000000b61068 = auStack_900;
    puRam0000000000b61098 = auStack_418;
    puRam0000000000b610c8 = puVar7;
    FUN_004a3b78();
    _free(lVar3);
    if (pcRam0000000000b61048 != (code *)0x0) {
      (*pcRam0000000000b61048)(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  return (ulong)bRam0000000000b61040;
}



/* Entry: 004a5638; end: 004a5657;  */

undefined1 FUN_004a5638(void)

{
  return uRam0000000000b61040;
}



/* Entry: 004a5658; end: 004a586b;  */

void FUN_004a5658(ulong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_66 [30];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  uVar1 = (uint)bRam0000000000b61238 == (uint)param_1;
  if (!(bool)uVar1) {
    bRam0000000000b61238 = (byte)param_1;
    if ((param_1 & 1) == 0) {
      puVar3 = (uint *)&UNK_00806478;
      for (lVar6 = 0; lVar6 != 0x80; lVar6 = lVar6 + 0x10) {
        param_1 = (ulong)*puVar3;
        _sigaction(param_1,uRam0000000000b61240 + lVar6,0);
        puVar3 = puVar3 + 1;
      }
      uRam0000000000b61248 = 0;
      lRam0000000000b61250 = 0;
      uRam0000000000b61258 = 0;
      uVar1 = 1;
    }
    else {
      FUN_004a84c8(0xb61260);
      if (lRam0000000000b61250 == 0) {
        lRam0000000000b61250 = 0x20000;
        uVar2 = 0x20000;
        _malloc();
        uRam0000000000b61248 = uVar2;
      }
      param_1 = 0xb61248;
      _sigaltstack(0xb61248,0);
      if ((int)param_1 == 0) {
        if (uRam0000000000b61240 == 0) {
          param_1 = 0x80;
          _malloc();
          uRam0000000000b61240 = param_1;
        }
        uStack_70 = 0x24100000000;
        pcStack_78 = FUN_004a5888;
        lVar5 = -0x10;
        for (lVar6 = 0; uVar1 = lVar6 == 8, !(bool)uVar1; lVar6 = lVar6 + 1) {
          uVar4 = (ulong)*(uint *)(&UNK_00806478 + lVar6 * 4);
          param_1 = uVar4;
          _sigaction(uVar4,&pcStack_78,uRam0000000000b61240 + lVar5 + 0x10);
          if ((int)param_1 != 0) {
            func_0x004ad030();
            if (uVar4 == 0) {
              _snprintf(auStack_66,0x1e,"%d");
            }
            ___error();
            _strerror();
            func_0x004a59d8();
            param_1 = extraout_x8_00;
            func_0x004ab038();
            while( true ) {
              uVar1 = lVar6 + -1 == 0;
              if (lVar6 < 1) break;
              param_1 = (ulong)*(uint *)(&UNK_00806474 + lVar6 * 4);
              _sigaction(param_1,uRam0000000000b61240 + lVar5,0);
              lVar5 = lVar5 + -0x10;
              lVar6 = lVar6 + -1;
            }
            break;
          }
          lVar5 = lVar5 + 0x10;
        }
      }
      else {
        ___error();
        _strerror();
        func_0x004a59d8();
        param_1 = extraout_x8;
        func_0x004ab038();
      }
    }
  }
  func_0x004a59f4(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  if ((*(byte *)(param_1 + 0x30) & 3) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 6;
  return;
}



/* Entry: 004a586c; end: 004a5887;  */

void FUN_004a586c(long param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 3) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x90) = 6;
  return;
}



/* Entry: 004a5888; end: 004a59cb;  */

ulong FUN_004a5888(ulong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  undefined1 auStack_540 [1244];
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_00999f88;
  if ((bRam0000000000b61238 & 1) != 0) {
    uStack_60 = 0;
    uStack_64 = 0;
    FUN_004ab534(&uStack_60,&uStack_64);
    FUN_004a3b08(0);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    FUN_004ab47c(param_3,auStack_540);
    func_0x004ad1a0(0xb61470,500,auStack_540);
    _bzero(0xb61298,0x1d8);
    uRam0000000000b612b8 = 2;
    uRam0000000000b61288 = 0xb61260;
    puRam0000000000b61290 = PTR_s_unavailable_00b09240;
    uRam0000000000b6129c = 1;
    uRam0000000000b612b0 = *(undefined8 *)(param_2 + 6);
    uRam0000000000b61318 = *param_2;
    uRam0000000000b6131c = param_2[2];
    uRam0000000000b61320 = 0xb6620a;
    uRam0000000000b612d0 = 0xb61470;
    puRam0000000000b612a0 = auStack_540;
    uRam0000000000b61310 = param_3;
    FUN_004a3b78(0xb61288);
    FUN_004ab8c4(uStack_60,uStack_64);
  }
  _raise(param_1);
  func_0x004a59f4(uStack_58);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  return (ulong)bRam0000000000b61238;
}



/* Entry: 004a59cc; end: 004a5a07;  */

undefined1 FUN_004a59cc(void)

{
  return uRam0000000000b61238;
}



/* Entry: 004a5a08; end: 004a5a27;  */

void FUN_004a5a08(long param_1)

{
  if (param_1 != 0) {
    _objc_retainAutorelease();
    func_0x0077bcc0();
                    /* WARNING: Could not recover jumptable at 0x0077b0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__strdup_0099a720)();
    return;
  }
  return;
}



/* Entry: 004a5a28; end: 004a5a33;  */

undefined ** FUN_004a5a28(void)

{
  return &PTR_FUN_00b09380;
}



/* Entry: 004a5a34; end: 004a5fef;  */

void FUN_004a5a34(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined *puVar17;
  
  if (((bRam0000000000b617e0 == param_1) || (bRam0000000000b617e0 = (byte)param_1, param_1 == 0)) ||
     ((bRam0000000000b617e1 & 1) != 0)) {
    return;
  }
  bRam0000000000b617e1 = 1;
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar5;
  func_0x0077fd80();
  iVar1 = (int)puVar16;
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a440();
  _objc_retainAutoreleasedReturnValue();
  func_0x007878e0();
  FUN_004a6750();
  func_0x004a6760();
  puVar16 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_00ac2c38;
  if (iVar1 != 0) {
    func_0x0077fd80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077bb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077bb20();
    _objc_retainAutoreleasedReturnValue();
    func_0x0077fdc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a67bc();
    func_0x004a67b4();
    FUN_004a6750();
    func_0x00784940();
    _objc_retainAutoreleasedReturnValue();
    func_0x00789f00();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a6758();
    FUN_004a6750();
    func_0x004a6760();
    puVar7 = puVar16;
  }
  lVar8 = 0;
  __dyld_get_image_header();
  lVar9 = lVar8;
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  lRam0000000000b618c0 = lVar9;
  FUN_004a6750();
  puVar10 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007926a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_004a5a08();
  puRam0000000000b617f0 = puVar10;
  func_0x004a67b4();
  FUN_004a6750();
  puVar10 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x007926e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_004a5a08();
  puRam0000000000b617f8 = puVar10;
  func_0x004a67b4();
  FUN_004a6750();
  pcVar11 = "hw.machine";
  func_0x004a6434();
  pcVar12 = "hw.model";
  pcRam0000000000b61800 = pcVar11;
  func_0x004a6434();
  pcVar11 = "kern.version";
  pcRam0000000000b61808 = pcVar12;
  func_0x004a6434();
  pcVar12 = "kern.osversion";
  pcRam0000000000b61810 = pcVar11;
  func_0x004a6434();
  iVar1 = 0x8de521;
  pcRam0000000000b61818 = pcVar12;
  FUN_004a72ec("MobileSubstrate",0);
  uRam0000000000b61820 = iVar1 != -1;
  pcVar11 = "kern.boottime";
  func_0x004ad68c();
  FUN_004a649c();
  uVar13 = 0;
  pcRam0000000000b61828 = pcVar11;
  _time();
  FUN_004a649c();
  uRam0000000000b61830 = uVar13;
  FUN_004a64d4();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  uRam0000000000b61838 = uVar13;
  FUN_004a6750();
  puVar16 = puVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61840 = puVar16;
  FUN_004a6750();
  puVar16 = puVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61848 = puVar16;
  FUN_004a6750();
  puVar16 = puVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61850 = puVar16;
  FUN_004a6750();
  puVar16 = puVar6;
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61858 = puVar16;
  FUN_004a6750();
  func_0x00789f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61860 = puVar6;
  FUN_004a6750();
  FUN_004a64d4();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined8 *)0x0) {
    puVar16 = (undefined8 *)0x0;
    puVar15 = puVar6;
  }
  else {
    puVar14 = puVar6;
    _objc_retainAutorelease();
    func_0x0077bcc0();
    FUN_004a7364();
    if (puVar14 == (undefined8 *)0x0) {
      func_0x00788240();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x0077bcc0();
      FUN_004a7364();
      puVar15 = puVar6;
      func_0x004a67bc();
      puVar16 = (undefined8 *)0x0;
      puVar14 = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_004a5e1c;
    }
    uVar13 = 0;
    _CFUUIDCreateFromUUIDBytes(0,*puVar14,puVar14[1]);
    puVar16 = (undefined8 *)0x0;
    _CFUUIDCreateString(0,uVar13);
    _CFRelease(uVar13);
    FUN_004a5a08();
    puVar15 = puVar16;
    func_0x004a67bc();
  }
LAB_004a5e1c:
  FUN_004a6750();
  puRam0000000000b61868 = puVar16;
  FUN_004a66a0();
  puRam0000000000b61870 = puVar15;
  func_0x004a67dc();
  uVar2 = SUB84(puVar15,0);
  uRam0000000000b61878 = uVar2;
  func_0x004a67d0();
  uRam0000000000b61880 = *(undefined8 *)(lVar8 + 4);
  puVar10 = PTR__OBJC_CLASS___NSTimeZone_00ac2f88;
  uRam0000000000b6187c = uVar2;
  func_0x00788480();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077e180();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61888 = puVar10;
  FUN_004a6750();
  func_0x004a6760();
  puVar10 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078aa60();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6768();
  puRam0000000000b61890 = puVar10;
  FUN_004a6750();
  func_0x004a6760();
  puVar10 = PTR__OBJC_CLASS___NSProcessInfo_00ac2a20;
  func_0x0078aa40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078aa20();
  uRam0000000000b61898 = SUB84(puVar10,0);
  func_0x004a6760();
  _getppid();
  uRam0000000000b6189c = SUB84(puVar10,0);
  FUN_004a6580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00788240();
  _objc_retainAutoreleasedReturnValue();
  func_0x007878e0();
  puVar17 = puVar10;
  FUN_004a6750();
  func_0x004a6760();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_004a6580();
    _objc_retainAutoreleasedReturnValue();
    pcVar11 = "unknown";
    if (puVar17 != (undefined *)0x0) {
      func_0x00788240();
      uVar3 = (uint)puVar17;
      _objc_retainAutoreleasedReturnValue();
      func_0x007878e0();
      FUN_004a6750();
      puVar10 = PTR__OBJC_CLASS___NSFileManager_00ac2b30;
      func_0x00781c40();
      uVar4 = (uint)puVar10;
      _objc_retainAutoreleasedReturnValue();
      func_0x007833a0();
      FUN_004a6750();
      func_0x004a6760();
      pcVar11 = "app store";
      if ((uVar3 & uVar4 & 1) == 0) {
        pcVar11 = "unknown";
      }
    }
  }
  else {
    pcVar11 = "test";
  }
  pcVar12 = "hw.memsize";
  pcRam0000000000b618a0 = pcVar11;
  func_0x004ad59c();
  pcRam0000000000b618b0 = pcVar12;
  FUN_004a5a08();
  puRam0000000000b618b8 = puVar7;
  func_0x004a6758();
  func_0x004a6770();
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar5);
  return;
}



/* Entry: 004a5ff0; end: 004a60db;  */

void FUN_004a5ff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lStack_68;
  uint uStack_60;
  int iStack_5c;
  undefined8 uStack_58;
  
  uVar3 = uRam0000000000b61808;
  uVar2 = uRam0000000000b61800;
  uVar1 = uRam0000000000b617f0;
  iVar4 = (int)param_1;
  if ((bRam0000000000b617e0 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x108) = uRam0000000000b617f8;
    *(undefined8 *)(param_1 + 0x100) = uVar1;
    *(undefined8 *)(param_1 + 0x118) = uVar3;
    *(undefined8 *)(param_1 + 0x110) = uVar2;
    uVar1 = uRam0000000000b61810;
    *(undefined8 *)(param_1 + 0x128) = uRam0000000000b61818;
    *(undefined8 *)(param_1 + 0x120) = uVar1;
    *(undefined1 *)(param_1 + 0x130) = uRam0000000000b61820;
    uVar1 = uRam0000000000b61828;
    *(undefined8 *)(param_1 + 0x140) = uRam0000000000b61830;
    *(undefined8 *)(param_1 + 0x138) = uVar1;
    uVar1 = uRam0000000000b61838;
    *(undefined8 *)(param_1 + 0x150) = uRam0000000000b61840;
    *(undefined8 *)(param_1 + 0x148) = uVar1;
    uVar1 = uRam0000000000b61848;
    *(undefined8 *)(param_1 + 0x160) = uRam0000000000b61850;
    *(undefined8 *)(param_1 + 0x158) = uVar1;
    uVar1 = uRam0000000000b61858;
    *(undefined8 *)(param_1 + 0x170) = uRam0000000000b61860;
    *(undefined8 *)(param_1 + 0x168) = uVar1;
    uVar1 = uRam0000000000b61868;
    *(undefined8 *)(param_1 + 0x180) = uRam0000000000b61870;
    *(undefined8 *)(param_1 + 0x178) = uVar1;
    uVar1 = uRam0000000000b61878;
    *(undefined8 *)(param_1 + 400) = uRam0000000000b61880;
    *(undefined8 *)(param_1 + 0x188) = uVar1;
    uVar1 = uRam0000000000b61888;
    *(undefined8 *)(param_1 + 0x1a0) = uRam0000000000b61890;
    *(undefined8 *)(param_1 + 0x198) = uVar1;
    *(undefined8 *)(param_1 + 0x1a8) = uRam0000000000b61898;
    *(undefined8 *)(param_1 + 0x1b0) = uRam0000000000b618a0;
    uVar1 = uRam0000000000b618a8;
    *(undefined8 *)(param_1 + 0x1c0) = uRam0000000000b618b0;
    *(undefined8 *)(param_1 + 0x1b8) = uVar1;
    *(undefined8 *)(param_1 + 0x1d8) = uRam0000000000b618b8;
    func_0x004a67e8();
    lVar5 = lStack_68 * (ulong)uStack_60;
    if (iVar4 == 0) {
      lVar5 = 0;
    }
    *(long *)(param_1 + 0x1c8) = lVar5;
    func_0x004a67e8();
    lVar5 = 0;
    if (iVar4 != 0) {
      lVar5 = lStack_68 *
              (ulong)(uStack_60 + iStack_5c + (int)uStack_58 + (int)((ulong)uStack_58 >> 0x20));
    }
    *(long *)(param_1 + 0x1d0) = lVar5;
  }
  return;
}



/* Entry: 004a60dc; end: 004a6357;  */

undefined ** FUN_004a60dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined1 auStack_5c [20];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
  func_0x007812c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_respondsToSelector();
  func_0x004a6778();
  puVar2 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
  if (((ulong)puVar1 & 1) == 0) {
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _objc_retainAutorelease();
    func_0x007896e0();
    FUN_004ad6fc("en0",puVar1);
  }
  else {
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIDevice_00ac2f80;
    func_0x007812c0(PTR__OBJC_CLASS___UIDevice_00ac2f80);
    _objc_retainAutoreleasedReturnValue();
    func_0x007845c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x004a679c();
    func_0x007896e0();
    func_0x00784120(puVar1);
    func_0x004a6758();
    func_0x004a6770();
  }
  FUN_004a6358(&PTR____CFConstantStringClassReference_00a27ca0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007815a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a67a4();
  func_0x004a6758();
  func_0x004a6770();
  FUN_004a6358(&PTR____CFConstantStringClassReference_00a27cc0);
  _objc_retainAutoreleasedReturnValue();
  func_0x007815a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a67a4();
  func_0x004a6758();
  func_0x004a6770();
  FUN_004a66a0();
  _strlen();
  func_0x0077ee80(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fd20();
  _objc_retainAutoreleasedReturnValue();
  func_0x007815a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x004a6760();
  func_0x004a6758();
  if (puVar1 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x0077eea0(puVar2);
  }
  func_0x004a679c();
  func_0x0077fde0();
  func_0x007882e0(puVar2);
  _CC_SHA1(puVar3,puVar2,auStack_5c);
  ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSMutableString_00ac2cc0;
  func_0x00791e20();
  _objc_retainAutoreleasedReturnValue();
  for (lVar6 = 0; lVar6 != 0x14; lVar6 = lVar6 + 1) {
    func_0x0077eec0(ppuVar5);
  }
  FUN_004a5a08();
  ppuVar4 = ppuVar5;
  func_0x004a6758();
  func_0x004a6770();
  func_0x004a6778();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return ppuVar5;
  }
  ___stack_chk_fail();
  _objc_retain();
  func_0x004a679c();
  func_0x0077bcc0();
  func_0x004a67f4();
  if ((int)ppuVar4 < 1) {
    ppuVar5 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x004a679c();
    func_0x0077bcc0();
    puVar3 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x007896e0();
    func_0x004ad614(puVar2,puVar3,ppuVar4);
    ppuVar5 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    if ((int)puVar2 == 0) {
      ppuVar5 = (undefined **)0x0;
    }
    else {
      _objc_retainAutorelease(puVar1);
      func_0x007896e0();
      func_0x00792140(ppuVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(ppuVar5);
    func_0x004a6770();
    func_0x004a6758();
  }
  func_0x004a6778();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar5);
  return ppuVar5;
}



/* Entry: 004a6358; end: 004a649b;  */

void FUN_004a6358(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain();
  func_0x004a679c();
  func_0x0077bcc0();
  func_0x004a67f4();
  if ((int)param_1 < 1) {
    ppuVar4 = &PTR____CFConstantStringClassReference_00a212a0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableData_00ac2cc8;
    func_0x00781720();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x004a679c();
    func_0x0077bcc0();
    puVar3 = puVar1;
    _objc_retainAutorelease(puVar1);
    func_0x007896e0();
    func_0x004ad614(puVar2,puVar3,param_1);
    ppuVar4 = (undefined **)PTR__OBJC_CLASS___NSString_00ac2988;
    if ((int)puVar2 == 0) {
      ppuVar4 = (undefined **)0x0;
    }
    else {
      _objc_retainAutorelease(puVar1);
      func_0x007896e0();
      func_0x00792140(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(ppuVar4);
    func_0x004a6770();
    func_0x004a6758();
  }
  func_0x004a6778();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(ppuVar4);
  return;
}



/* Entry: 004a649c; end: 004a64d3;  */

undefined8 FUN_004a649c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x15;
  _malloc(0x15);
  FUN_004a7198(param_1,uVar1);
  return uVar1;
}



/* Entry: 004a64d4; end: 004a657f;  */

void FUN_004a64d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00784940();
  _objc_retainAutoreleasedReturnValue();
  func_0x0077fd60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00789f00(puVar2,param_2,&PTR____CFConstantStringClassReference_00a27d40);
  _objc_retainAutoreleasedReturnValue();
  func_0x00791e80(puVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6760();
  func_0x004a6758();
  func_0x004a6770();
  func_0x004a6778();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004a6580; end: 004a65db;  */

void FUN_004a6580(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_00ac2c38;
  func_0x00788c00(PTR__OBJC_CLASS___NSBundle_00ac2c38);
  _objc_retainAutoreleasedReturnValue();
  func_0x0077ee40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a400();
  _objc_retainAutoreleasedReturnValue();
  func_0x004a6770();
  func_0x004a6778();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 004a65dc; end: 004a65e7;  */

undefined1 FUN_004a65dc(void)

{
  return uRam0000000000b617e0;
}



/* Entry: 004a65e8; end: 004a669f;  */

bool FUN_004a65e8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uStack_34;
  
  uVar2 = param_1;
  _mach_host_self();
  uVar3 = uVar2;
  _host_page_size();
  if ((int)uVar3 == 0) {
    uStack_34 = 0xf;
    _host_statistics(uVar2,2,param_1,&uStack_34);
    bVar1 = (int)uVar2 == 0;
    if ((int)uVar2 != 0) {
      _mach_error_string();
      func_0x004a6780();
      FUN_004ab180(extraout_x8_00);
    }
  }
  else {
    _mach_error_string();
    func_0x004a6780();
    FUN_004ab180(extraout_x8);
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 004a66a0; end: 004a674f;  */

char * FUN_004a66a0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  
  func_0x004a67dc();
  puVar2 = param_1;
  func_0x004a67d0();
  iVar4 = (int)param_1;
  if (iVar4 == 7) {
    return "x86";
  }
  if (iVar4 == 0x100000c) {
    if ((int)puVar2 == 2) {
      return "arm64e";
    }
  }
  else {
    if (iVar4 == 0x1000007) {
      return "x86_64";
    }
    if (iVar4 != 0xc) {
      _NXGetLocalArchInfo();
      pcVar3 = (char *)0x0;
      if (puVar2 != (undefined8 *)0x0) {
        pcVar3 = (char *)*puVar2;
      }
      return pcVar3;
    }
    uVar1 = (int)puVar2 - 2;
    if (uVar1 < 0xb) {
      return (&PTR_s_arm64e_009ec2b8)[uVar1];
    }
  }
  return "arm64";
}



/* Entry: 004a6750; end: 004a67ff;  */

void FUN_004a6750(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)();
  return;
}



/* Entry: 004a6800; end: 004a699b;  */

undefined1 **
FUN_004a6800(undefined1 **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,int param_6,int param_7)

{
  undefined1 **ppuVar1;
  int iVar2;
  undefined1 auStack_f90 [1232];
  undefined1 auStack_ac0 [1216];
  undefined1 *puStack_600;
  undefined1 *puStack_5f8;
  undefined *puStack_5f0;
  undefined1 auStack_5e8 [4];
  undefined1 uStack_5e4;
  undefined1 uStack_5e2;
  undefined1 *puStack_5e0;
  undefined1 *puStack_5d8;
  undefined4 uStack_5c8;
  undefined8 uStack_5b8;
  undefined1 *puStack_5b0;
  undefined1 **ppuStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined1 auStack_410 [876];
  undefined4 uStack_a4;
  undefined1 **ppuStack_a0;
  undefined1 auStack_95 [37];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  ppuVar1 = param_1;
  if (cRam0000000000b6660a == '\x01') {
    ppuStack_a0 = (undefined1 **)0x0;
    uStack_a4 = 0;
    iVar2 = param_6;
    puStack_600 = (undefined1 *)&puStack_600;
    (*(code *)PTR____chkstk_darwin_00999f48)();
    if (iVar2 != 0) {
      FUN_004ab660(&ppuStack_a0,&uStack_a4,auStack_ac0);
    }
    if (param_7 != 0) {
      FUN_004a3b08(0);
    }
    FUN_004a84c8(auStack_95);
    (*(code *)PTR____chkstk_darwin_00999f48)();
    FUN_004ad8d8();
    FUN_004ab2c0();
    FUN_004ad334(auStack_410,0);
    _bzero(auStack_5e8,0x1d8);
    uStack_5c8 = 0x20;
    puStack_5f8 = auStack_95;
    puStack_5f0 = PTR_s_unavailable_00b09240;
    if (param_6 != 0) {
      puStack_5d8 = auStack_ac0;
    }
    uStack_5e4 = 0;
    puStack_5b0 = auStack_410;
    uStack_5e2 = (undefined1)param_6;
    ppuVar1 = &puStack_5f8;
    puStack_5e0 = auStack_f90;
    uStack_5b8 = param_2;
    ppuStack_558 = param_1;
    uStack_550 = param_3;
    uStack_548 = param_4;
    uStack_540 = param_5;
    (*pcRam0000000000b66190)(ppuVar1);
    if (param_6 != 0) {
      ppuVar1 = ppuStack_a0;
      FUN_004ab8c4(ppuStack_a0,uStack_a4);
    }
    if (param_7 != 0) goto LAB_004a6998;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return ppuVar1;
  }
  ___stack_chk_fail();
LAB_004a6998:
  _abort();
  return &PTR_DAT_00b09398;
}



/* Entry: 004a699c; end: 004a69bf;  */

undefined ** FUN_004a699c(void)

{
  return &PTR_DAT_00b09398;
}



/* Entry: 004a69c0; end: 004a69db;  */

void FUN_004a69c0(void)

{
  _NXGetLocalArchInfo();
  return;
}



/* Entry: 004a69dc; end: 004a6a9f;  */

bool FUN_004a69dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  _thread_get_state(param_1,param_3,param_2,&uStack_24);
  if ((int)param_1 != 0) {
    _mach_error_string();
    func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/Tools/KSCPU.c",0x3a,
                    "_Bool kscpu_i_fillState(const thread_t, const thread_state_t, const thread_state_flavor_t, const mach_msg_type_number_t)"
                    ,"thread_get_state: %s");
  }
  return (int)param_1 == 0;
}



/* Entry: 004a6aa0; end: 004a6beb;  */

ulong FUN_004a6aa0(long param_1,int param_2)

{
  if (0x1d < param_2) {
    switch(param_2) {
    case 0x1e:
      return *(ulong *)(param_1 + 0x298);
    case 0x1f:
      return *(ulong *)(param_1 + 0x2a0);
    case 0x20:
      return *(ulong *)(param_1 + 0x2a8);
    case 0x21:
      return *(ulong *)(param_1 + 0x2b0);
    case 0x22:
      return (ulong)*(uint *)(param_1 + 0x2b8);
    default:
      func_0x004a6bf4();
      func_0x004a6c08();
      func_0x004ab038();
      return 0;
    }
  }
  return *(ulong *)(param_1 + (long)param_2 * 8 + 0x1b0);
}



/* Entry: 004a6bec; end: 004a6c1b;  */

void FUN_004a6bec(void)

{
  return;
}



/* Entry: 004a6c1c; end: 004a6cbf;  */

undefined8 FUN_004a6c1c(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  lVar2 = param_1;
  if (lRam0000000000b66610 == 0) {
    uRam0000000000b66618 = 0x19;
    lVar2 = 400;
    _malloc();
    lRam0000000000b66610 = lVar2;
  }
  iVar1 = (int)lVar2;
  uRam0000000000b66620 = 0;
  if (lRam0000000000b66628 == 0) {
    lRam0000000000b66628 = param_1;
    __dyld_register_func_for_add_image(FUN_004a6cc0);
  }
  else {
    lRam0000000000b66628 = param_1;
    __dyld_image_count();
    uVar5 = 0;
    while (iVar4 = (int)uVar5, iVar1 != iVar4) {
      uVar3 = uVar5;
      __dyld_get_image_header(uVar5);
      __dyld_get_image_vmaddr_slide(uVar5);
      FUN_004a6cc0(uVar3,uVar5);
      uVar5 = (ulong)(iVar4 + 1);
    }
  }
  return 0;
}



/* Entry: 004a6cc0; end: 004a6deb;  */

void FUN_004a6cc0(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  lVar3 = param_1;
  _dladdr(param_1,auStack_60);
  if ((int)lVar3 != 0) {
    piVar4 = (int *)0x0;
    piVar5 = (int *)0x0;
    uStack_70 = 0;
    uStack_68 = 0;
    piVar1 = (int *)(param_1 + 0x20);
    for (iVar2 = *(int *)(param_1 + 0x10); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*piVar1 == 2) {
        puVar6 = &uStack_68;
        piVar4 = piVar1;
LAB_004a6d2c:
        *puVar6 = piVar1;
      }
      else if (*piVar1 == 0xb) {
        puVar6 = &uStack_70;
        piVar5 = piVar1;
        goto LAB_004a6d2c;
      }
      if (((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) && (piVar5[0xf] != 0)) {
        func_0x004a7184();
        func_0x004a7184();
        if ((lVar3 != 0) && (func_0x004a718c(), (int)lVar3 != 0)) {
          func_0x004a7164(0);
          lVar3 = 0;
          func_0x004a7164();
        }
        func_0x004a7184();
        if (lVar3 == 0) {
          return;
        }
        func_0x004a718c();
        if ((int)lVar3 == 0) {
          return;
        }
        func_0x004a7164(0);
        func_0x004a7164(0);
        return;
      }
      piVar1 = (int *)((long)piVar1 + (ulong)(uint)piVar1[1]);
    }
  }
  return;
}



/* Entry: 004a6dec; end: 004a6e9f;  */

bool FUN_004a6dec(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  lVar1 = param_1 + 8;
  _strcmp(lVar1,"__DATA");
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 8;
    _strcmp(lVar1,"__DATA_CONST");
    if ((int)lVar1 != 0) {
      return false;
    }
  }
  lVar3 = 0;
  lVar6 = 0;
  lVar1 = param_1 + 0x48;
  lVar5 = (ulong)*(uint *)(param_1 + 0x40) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      return false;
    }
    lVar2 = lVar6;
    lVar4 = lVar1;
    plVar7 = param_3;
    if ((*(char *)(lVar1 + 0x40) == '\x06') ||
       (lVar2 = lVar1, lVar4 = lVar3, plVar7 = param_2, *(char *)(lVar1 + 0x40) == '\a')) {
      *plVar7 = lVar1;
      lVar3 = lVar4;
      lVar6 = lVar2;
    }
    lVar1 = lVar1 + 0x50;
  } while ((lVar3 == 0) || (lVar6 == 0));
  return lVar5 != 0;
}



/* Entry: 004a6ea0; end: 004a7083;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004a6ea0(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  char *pcVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  long alStack_70 [2];
  
  uVar12 = param_1 + 0x10;
  _strcmp(uVar12,"__DATA_CONST");
  uVar2 = *(uint *)(param_1 + 0x44);
  param_2 = *(long *)(param_1 + 0x20) + param_2;
  if ((int)uVar12 == 0) {
    iVar6 = *(int *)PTR__mach_task_self__0099a3c0;
    alStack_70[1] = 0;
    uStack_78 = 9;
    alStack_70[0] = param_2;
    _vm_region_64(iVar6,alStack_70,alStack_70 + 1,9,auStack_a0,&uStack_78,auStack_74);
    _mprotect(param_2,*(undefined8 *)(param_1 + 0x28),3);
    uVar9 = auStack_a0[0] & 7;
    if (iVar6 != 0) {
      uVar9 = 1;
    }
  }
  else {
    uVar9 = 1;
  }
  uVar10 = 0;
  while( true ) {
    if (*(ulong *)(param_1 + 0x28) >> 3 <= uVar10) break;
    uVar3 = *(uint *)(param_5 + (ulong)uVar2 * 4 + uVar10 * 4);
    if (((((uVar3 != 0x80000000 && uVar3 != 0xc0000000) && uVar3 != 0x40000000) &&
         (pcVar7 = (char *)(param_4 + (ulong)*(uint *)(param_3 + (ulong)uVar3 * 0x10)),
         *pcVar7 != '\0')) && (pcVar7 = pcVar7 + 1, *pcVar7 != '\0')) &&
       (_strcmp(pcVar7,"__cxa_throw"), (int)pcVar7 == 0)) {
      lVar8 = param_1;
      _dladdr(param_1,auStack_a0);
      uVar5 = uStack_98;
      lVar4 = lRam0000000000b66620;
      if ((int)lVar8 != 0) {
        uVar11 = *(undefined8 *)(param_2 + uVar10 * 8);
        if (lRam0000000000b66620 == lRam0000000000b66618) {
          lRam0000000000b66618 = lRam0000000000b66620 << 1;
          _realloc(lRam0000000000b66610,lRam0000000000b66620 << 5);
        }
        lRam0000000000b66620 = lVar4 + 1;
        puVar1 = (undefined8 *)(lRam0000000000b66610 + lVar4 * 0x10);
        *puVar1 = uVar5;
        puVar1[1] = uVar11;
        uVar12 = uVar12 & 0xffffffff;
      }
      *(code **)(param_2 + uVar10 * 8) = FUN_004a7084;
    }
    uVar10 = (ulong)((int)uVar10 + 1);
  }
  if ((int)uVar12 == 0) {
    _mprotect(param_2,*(ulong *)(param_1 + 0x28),uVar9);
  }
  return;
}



/* Entry: 004a7084; end: 004a7163;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004a7084(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined1 *puVar13;
  uint auStack_110 [2];
  undefined8 uStack_108;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [4];
  long alStack_e0 [2];
  undefined1 auStack_68 [8];
  long lStack_60;
  undefined1 auStack_48 [8];
  undefined1 *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  (*pcRam0000000000b66628)();
  puVar8 = auStack_48;
  _backtrace(puVar8,2);
  if ((1 < (int)puVar8) &&
     (_dladdr(puStack_40,auStack_68), puVar8 = puStack_40, (int)puStack_40 != 0)) {
    puVar1 = (undefined8 *)(lRam0000000000b66610 + 8);
    for (lVar11 = lRam0000000000b66620; lVar11 != 0; lVar11 = lVar11 + -1) {
      if (puVar1[-1] == lStack_60) {
        if ((code *)*puVar1 != (code *)0x0) {
          puVar8 = param_1;
          (*(code *)*puVar1)(param_1,param_2,param_3);
        }
        break;
      }
      puVar1 = puVar1 + 2;
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_38) {
    ___stack_chk_fail();
    puVar13 = puVar8 + 0x10;
    _strcmp(puVar13,"__DATA_CONST");
    uVar2 = *(uint *)(puVar8 + 0x44);
    param_3 = *(long *)(puVar8 + 0x20) + param_3;
    if ((int)puVar13 == 0) {
      iVar5 = *(int *)PTR__mach_task_self__0099a3c0;
      alStack_e0[1] = 0;
      uStack_e8 = 9;
      alStack_e0[0] = param_3;
      _vm_region_64(iVar5,alStack_e0,alStack_e0 + 1,9,auStack_110,&uStack_e8,auStack_e4);
      _mprotect(param_3,*(undefined8 *)(puVar8 + 0x28),3);
      uVar9 = auStack_110[0] & 7;
      if (iVar5 != 0) {
        uVar9 = 1;
      }
    }
    else {
      uVar9 = 1;
    }
    uVar10 = 0;
    while( true ) {
      if (*(ulong *)(puVar8 + 0x28) >> 3 <= uVar10) break;
      uVar3 = *(uint *)(param_1 + uVar10 * 4 + (ulong)uVar2 * 4 + unaff_x24);
      if (((((uVar3 != 0x80000000 && uVar3 != 0xc0000000) && uVar3 != 0x40000000) &&
           (param_1[(ulong)*(uint *)(param_1 + (ulong)uVar3 * 0x10 + unaff_x22) + unaff_x23] != '\0'
           )) && (pcVar6 = param_1 + (ulong)*(uint *)(param_1 + (ulong)uVar3 * 0x10 + unaff_x22) +
                                     unaff_x23 + 1, *pcVar6 != '\0')) &&
         (_strcmp(pcVar6,"__cxa_throw"), (int)pcVar6 == 0)) {
        puVar7 = puVar8;
        _dladdr(puVar8,auStack_110);
        uVar4 = uStack_108;
        lVar11 = lRam0000000000b66620;
        if ((int)puVar7 != 0) {
          uVar12 = *(undefined8 *)(param_3 + uVar10 * 8);
          if (lRam0000000000b66620 == lRam0000000000b66618) {
            lRam0000000000b66618 = lRam0000000000b66620 << 1;
            _realloc(lRam0000000000b66610,lRam0000000000b66620 << 5);
          }
          lRam0000000000b66620 = lVar11 + 1;
          puVar1 = (undefined8 *)(lRam0000000000b66610 + lVar11 * 0x10);
          *puVar1 = uVar4;
          puVar1[1] = uVar12;
          puVar13 = (undefined1 *)((ulong)puVar13 & 0xffffffff);
        }
        *(code **)(param_3 + uVar10 * 8) = FUN_004a7084;
      }
      uVar10 = (ulong)((int)uVar10 + 1);
    }
    if ((int)puVar13 == 0) {
      _mprotect(param_3,*(ulong *)(puVar8 + 0x28),uVar9);
    }
    return;
  }
  return;
}



/* Entry: 004a7164; end: 004a7197;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_004a7164(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong uVar13;
  uint auStack_a0 [2];
  undefined8 uStack_98;
  undefined4 uStack_78;
  undefined1 auStack_74 [4];
  long alStack_70 [2];
  
  uVar13 = param_1 + 0x10;
  _strcmp(uVar13,"__DATA_CONST");
  uVar3 = *(uint *)(param_1 + 0x44);
  lVar1 = *(long *)(param_1 + 0x20) + unaff_x19;
  if ((int)uVar13 == 0) {
    iVar7 = *(int *)PTR__mach_task_self__0099a3c0;
    alStack_70[1] = 0;
    uStack_78 = 9;
    alStack_70[0] = lVar1;
    _vm_region_64(iVar7,alStack_70,alStack_70 + 1,9,auStack_a0,&uStack_78,auStack_74);
    _mprotect(lVar1,*(undefined8 *)(param_1 + 0x28),3);
    uVar10 = auStack_a0[0] & 7;
    if (iVar7 != 0) {
      uVar10 = 1;
    }
  }
  else {
    uVar10 = 1;
  }
  uVar11 = 0;
  while( true ) {
    if (*(ulong *)(param_1 + 0x28) >> 3 <= uVar11) break;
    uVar4 = *(uint *)(unaff_x21 + unaff_x24 + (ulong)uVar3 * 4 + uVar11 * 4);
    if (((((uVar4 != 0x80000000 && uVar4 != 0xc0000000) && uVar4 != 0x40000000) &&
         (pcVar8 = (char *)(unaff_x21 + unaff_x23 +
                           (ulong)*(uint *)(unaff_x21 + unaff_x22 + (ulong)uVar4 * 0x10)),
         *pcVar8 != '\0')) && (pcVar8 = pcVar8 + 1, *pcVar8 != '\0')) &&
       (_strcmp(pcVar8,"__cxa_throw"), (int)pcVar8 == 0)) {
      lVar9 = param_1;
      _dladdr(param_1,auStack_a0);
      uVar6 = uStack_98;
      lVar5 = lRam0000000000b66620;
      if ((int)lVar9 != 0) {
        uVar12 = *(undefined8 *)(lVar1 + uVar11 * 8);
        if (lRam0000000000b66620 == lRam0000000000b66618) {
          lRam0000000000b66618 = lRam0000000000b66620 << 1;
          _realloc(lRam0000000000b66610,lRam0000000000b66620 << 5);
        }
        lRam0000000000b66620 = lVar5 + 1;
        puVar2 = (undefined8 *)(lRam0000000000b66610 + lVar5 * 0x10);
        *puVar2 = uVar6;
        puVar2[1] = uVar12;
        uVar13 = uVar13 & 0xffffffff;
      }
      *(code **)(lVar1 + uVar11 * 8) = FUN_004a7084;
    }
    uVar11 = (ulong)((int)uVar11 + 1);
  }
  if ((int)uVar13 == 0) {
    _mprotect(lVar1,*(ulong *)(param_1 + 0x28),uVar10);
  }
  return;
}



/* Entry: 004a7198; end: 004a720f;  */

void FUN_004a7198(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_28 = param_1;
  _gmtime_r(&uStack_28,&uStack_60);
  _snprintf(param_2,0x15,"%04d-%02d-%02dT%02d:%02d:%02dZ");
  return;
}



/* Entry: 004a7210; end: 004a72eb;  */

char * FUN_004a7210(undefined4 param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 auStack_2b0 [33];
  byte bStack_28f;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_2c8 = 0x288;
  uStack_2c0 = 0xe00000001;
  uStack_2b8 = 1;
  uStack_2b4 = param_1;
  _getpid();
  puVar1 = &uStack_2c0;
  iVar4 = 4;
  _sysctl(puVar1,4,auStack_2b0,&uStack_2c8,0,0);
  if ((int)puVar1 == 0) {
    pcVar2 = (char *)(ulong)(bStack_28f >> 3 & 1);
  }
  else {
    ___error();
    _strerror();
    iVar4 = 0x8de90c;
    func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/Tools/KSDebug.c",0x33,
                    "_Bool ksdebug_isBeingTraced(void)","sysctl: %s");
    pcVar2 = (char *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_28) {
    ___stack_chk_fail();
    if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
      __dyld_image_count();
      for (pcVar5 = (char *)0x0; (int)pcVar2 != (int)pcVar5;
          pcVar5 = (char *)(ulong)((int)pcVar5 + 1)) {
        pcVar3 = pcVar5;
        __dyld_get_image_name();
        if (pcVar3 != (char *)0x0) {
          if (iVar4 == 0) {
            _strstr();
            if (pcVar3 != (char *)0x0) {
              return pcVar5;
            }
          }
          else {
            _strcmp();
            if ((int)pcVar3 == 0) {
              return pcVar5;
            }
          }
        }
      }
    }
    return (char *)0xffffffff;
  }
  return pcVar2;
}



/* Entry: 004a72ec; end: 004a7363;  */

ulong FUN_004a72ec(char *param_1,int param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    __dyld_image_count();
    for (uVar2 = 0; (int)param_1 != (int)uVar2; uVar2 = (ulong)((int)uVar2 + 1)) {
      uVar1 = uVar2;
      __dyld_get_image_name();
      if (uVar1 != 0) {
        if (param_2 == 0) {
          _strstr();
          if (uVar1 != 0) {
            return uVar2;
          }
        }
        else {
          _strcmp();
          if ((int)uVar1 == 0) {
            return uVar2;
          }
        }
      }
    }
  }
  return 0xffffffff;
}



/* Entry: 004a7364; end: 004a73cf;  */

void FUN_004a7364(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((((param_1 != (int *)0x0) && (FUN_004a72ec(), (int)param_1 != -1)) &&
      (__dyld_get_image_header(), param_1 != (int *)0x0)) &&
     (piVar2 = param_1, FUN_004a73d0(), piVar2 != (int *)0x0)) {
    iVar1 = param_1[4];
    for (; (iVar1 != 0 && (*piVar2 != 0x1b));
        piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1])) {
      iVar1 = iVar1 + -1;
    }
  }
  return;
}



/* Entry: 004a73d0; end: 004a7427;  */

int * FUN_004a73d0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != -0x31051202) {
    if (iVar1 == -0x30051202 || iVar1 == -0x1120531) {
      return param_1 + 8;
    }
    if (iVar1 != -0x1120532) {
      return (int *)0x0;
    }
  }
  return param_1 + 7;
}



/* Entry: 004a7428; end: 004a767b;  */

void FUN_004a7428(int *param_1,ulong *param_2)

{
  long lVar1;
  uint *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  uint *puVar13;
  int iVar14;
  ulong uVar15;
  int *unaff_x23;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  piVar7 = param_1;
  __dyld_image_count();
  uVar15 = 0;
  piVar8 = piVar7;
  do {
    iVar14 = (int)uVar15;
    if (iVar14 == (int)piVar7) {
      return;
    }
    func_0x004a78b4();
    piVar9 = (int *)0x0;
    if (piVar8 != (int *)0x0) {
      func_0x004a78a8();
      piVar9 = unaff_x23;
      FUN_004a73d0();
      if (piVar9 != (int *)0x0) {
        uVar10 = (long)param_1 - (long)piVar8;
        for (iVar4 = unaff_x23[4]; iVar4 != 0; iVar4 = iVar4 + -1) {
          if (*piVar9 == 0x19) {
            if (*(ulong *)(piVar9 + 6) <= uVar10) {
              uVar12 = *(long *)(piVar9 + 8) + *(ulong *)(piVar9 + 6);
              goto LAB_004a74cc;
            }
          }
          else if ((*piVar9 == 1) && ((uint)piVar9[6] <= uVar10)) {
            uVar12 = (ulong)(uint)(piVar9[7] + piVar9[6]);
LAB_004a74cc:
            if (uVar10 < uVar12) {
              if (iVar14 == -1) {
                return;
              }
              func_0x004a78b4();
              func_0x004a78a8();
              piVar8 = piVar9;
              func_0x004a78b4();
              piVar7 = piVar8;
              FUN_004a73d0();
              if (piVar7 == (int *)0x0) goto LAB_004a755c;
              iVar14 = piVar8[4];
              piVar8 = piVar7;
              goto joined_r0x004a7520;
            }
          }
          piVar9 = (int *)((long)piVar9 + (ulong)(uint)piVar9[1]);
        }
      }
    }
    uVar15 = (ulong)(iVar14 + 1);
    piVar8 = piVar9;
  } while( true );
joined_r0x004a7520:
  if (iVar14 == 0) {
LAB_004a755c:
    uVar10 = 0;
LAB_004a7560:
    lVar1 = uVar10 + (long)piVar9;
    if (lVar1 != 0) {
      __dyld_get_image_name();
      *param_2 = uVar15;
      param_2[1] = (ulong)unaff_x23;
      piVar7 = unaff_x23;
      FUN_004a73d0();
      if (piVar7 != (int *)0x0) {
        uVar15 = 0xffffffffffffffff;
        for (iVar14 = 0; iVar14 != unaff_x23[4]; iVar14 = iVar14 + 1) {
          if (*piVar7 == 2) {
            puVar13 = (uint *)0x0;
            puVar2 = (uint *)(lVar1 + (ulong)(uint)piVar7[2]);
            for (uVar10 = (ulong)(uint)piVar7[3]; uVar10 != 0; uVar10 = uVar10 - 1) {
              uVar12 = *(ulong *)(puVar2 + 2);
              if ((uVar12 != 0) &&
                 (uVar6 = ((long)param_1 - (long)piVar9) - uVar12,
                 uVar12 <= (ulong)((long)param_1 - (long)piVar9) && uVar6 <= uVar15)) {
                uVar15 = uVar6;
                puVar13 = puVar2;
              }
              puVar2 = puVar2 + 4;
            }
            if (puVar13 != (uint *)0x0) {
              uVar5 = piVar7[4];
              param_2[3] = *(long *)(puVar13 + 2) + (long)piVar9;
              if (*(short *)((long)puVar13 + 6) == 0x10) {
                pcVar11 = (char *)0x0;
              }
              else {
                pcVar3 = (char *)(lVar1 + (ulong)uVar5 + (ulong)*puVar13);
                param_2[2] = (ulong)pcVar3;
                pcVar11 = pcVar3 + 1;
                if (*pcVar3 != '_') {
                  return;
                }
              }
              param_2[2] = (ulong)pcVar11;
              return;
            }
          }
          piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
        }
      }
    }
    return;
  }
  if (*piVar7 == 0x19) {
    func_0x004a78d4();
    if ((int)piVar8 == 0) {
      uVar10 = *(long *)(piVar7 + 6) - *(long *)(piVar7 + 10);
      goto LAB_004a7560;
    }
  }
  else if ((*piVar7 == 1) && (func_0x004a78d4(), (int)piVar8 == 0)) {
    uVar10 = (ulong)(uint)(piVar7[6] - piVar7[8]);
    goto LAB_004a7560;
  }
  piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
  iVar14 = iVar14 + -1;
  goto joined_r0x004a7520;
}



/* Entry: 004a767c; end: 004a76cb;  */

bool FUN_004a767c(uint *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uStack_68;
  
  puVar5 = param_1;
  __dyld_get_image_header();
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  __dyld_get_image_name();
  puVar6 = puVar5;
  FUN_004a73d0();
  if (puVar6 != (uint *)0x0) {
    uVar9 = 0;
    puVar10 = (uint *)0x0;
    uVar12 = 0;
    uVar11 = 0;
    puVar1 = puVar6;
    puVar7 = puVar6;
    for (uVar2 = puVar5[4]; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar3 = *puVar1;
      if (uVar3 == 0x1b) {
        puVar10 = puVar1 + 2;
      }
      else if (uVar3 == 0xd) {
        uVar9 = (ulong)puVar1[4];
      }
      else if (uVar3 == 0x19) {
        func_0x004a78bc();
        if ((int)puVar7 == 0) {
          uVar12 = *(ulong *)(puVar1 + 6);
          uVar11 = *(ulong *)(puVar1 + 8);
        }
      }
      else if ((uVar3 == 1) && (func_0x004a78bc(), (int)puVar7 == 0)) {
        uVar12 = (ulong)puVar1[6];
        uVar11 = (ulong)puVar1[7];
      }
      puVar1 = (uint *)((long)puVar1 + (ulong)puVar1[1]);
    }
    *param_2 = puVar5;
    param_2[1] = uVar12;
    param_2[2] = uVar11;
    param_2[3] = param_1;
    param_2[4] = puVar10;
    param_2[5] = *(undefined8 *)(puVar5 + 1);
    param_2[6] = uVar9 >> 0x10;
    param_2[7] = uVar9 >> 8 & 0xff;
    param_2[8] = uVar9 & 0xff;
    uStack_68 = 0;
    _getsectiondata(puVar5,"__DATA","__crash_info",&uStack_68);
    if ((((puVar5 != (uint *)0x0) && (0x27 < uStack_68)) &&
        (puVar10 = puVar5, func_0x004abb1c(), (int)puVar10 != 0)) &&
       (((*puVar5 & 0xfffffffe) == 4 &&
        ((lVar8 = *(long *)(puVar5 + 2), lVar8 != 0 || (*(long *)(puVar5 + 8) != 0)))))) {
      FUN_004a7864();
      if ((int)lVar8 != 0) {
        param_2[9] = *(undefined8 *)(puVar5 + 2);
      }
      iVar4 = (int)*(undefined8 *)(puVar5 + 8);
      FUN_004a7864();
      if (iVar4 != 0) {
        param_2[10] = *(undefined8 *)(puVar5 + 8);
      }
    }
  }
  return puVar6 != (uint *)0x0;
}



/* Entry: 004a76cc; end: 004a7863;  */

bool FUN_004a76cc(uint *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_68;
  
  puVar5 = param_1;
  FUN_004a73d0();
  if (puVar5 != (uint *)0x0) {
    uVar8 = 0;
    puVar9 = (uint *)0x0;
    uVar11 = 0;
    uVar10 = 0;
    puVar1 = puVar5;
    puVar6 = puVar5;
    for (uVar2 = param_1[4]; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar3 = *puVar1;
      if (uVar3 == 0x1b) {
        puVar9 = puVar1 + 2;
      }
      else if (uVar3 == 0xd) {
        uVar8 = (ulong)puVar1[4];
      }
      else if (uVar3 == 0x19) {
        func_0x004a78bc();
        if ((int)puVar6 == 0) {
          uVar11 = *(ulong *)(puVar1 + 6);
          uVar10 = *(ulong *)(puVar1 + 8);
        }
      }
      else if ((uVar3 == 1) && (func_0x004a78bc(), (int)puVar6 == 0)) {
        uVar11 = (ulong)puVar1[6];
        uVar10 = (ulong)puVar1[7];
      }
      puVar1 = (uint *)((long)puVar1 + (ulong)puVar1[1]);
    }
    *param_3 = param_1;
    param_3[1] = uVar11;
    param_3[2] = uVar10;
    param_3[3] = param_2;
    param_3[4] = puVar9;
    param_3[5] = *(undefined8 *)(param_1 + 1);
    param_3[6] = uVar8 >> 0x10;
    param_3[7] = uVar8 >> 8 & 0xff;
    param_3[8] = uVar8 & 0xff;
    uStack_68 = 0;
    _getsectiondata(param_1,"__DATA","__crash_info",&uStack_68);
    if ((((param_1 != (uint *)0x0) && (0x27 < uStack_68)) &&
        (puVar9 = param_1, func_0x004abb1c(), (int)puVar9 != 0)) &&
       (((*param_1 & 0xfffffffe) == 4 &&
        ((lVar7 = *(long *)(param_1 + 2), lVar7 != 0 || (*(long *)(param_1 + 8) != 0)))))) {
      FUN_004a7864();
      if ((int)lVar7 != 0) {
        param_3[9] = *(undefined8 *)(param_1 + 2);
      }
      iVar4 = (int)*(undefined8 *)(param_1 + 8);
      FUN_004a7864();
      if (iVar4 != 0) {
        param_3[10] = *(undefined8 *)(param_1 + 8);
      }
    }
  }
  return puVar5 != (uint *)0x0;
}



/* Entry: 004a7864; end: 004a78a7;  */

void FUN_004a7864(char *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  ulong uVar5;
  
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
    FUN_004abaa8(param_1,0x401);
    uVar3 = (uint)pcVar4;
    if (uVar3 != 0) {
      uVar5 = (ulong)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
      do {
        bVar2 = uVar5 == 0;
        uVar5 = uVar5 - 1;
        if (bVar2) {
          return;
        }
        cVar1 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
    }
  }
  return;
}



/* Entry: 004a78a8; end: 004a78df;  */

void FUN_004a78a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a1d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___dyld_get_image_vmaddr_slide_00999fe8)();
  return;
}



/* Entry: 004a78e0; end: 004a7907;  */

long FUN_004a78e0(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  lVar1 = 0;
  if ((param_1 != 0) && (func_0x004a849c(), lVar1 = unaff_x19, param_1 != 0)) {
    lVar1 = param_1 + 1;
  }
  return lVar1;
}



/* Entry: 004a7908; end: 004a79ff;  */

bool FUN_004a7908(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  do {
    if (param_3 < 1) {
LAB_004a7974:
      return param_3 < 1;
    }
    uVar2 = param_1;
    _write(param_1,param_2,param_3);
    iVar1 = (int)uVar2;
    if (iVar1 == -1) {
      ___error();
      func_0x004a8460();
      func_0x004a843c();
      func_0x004a84a8();
      func_0x004ab038();
      goto LAB_004a7974;
    }
    param_3 = param_3 - iVar1;
    param_2 = param_2 + iVar1;
  } while( true );
}



/* Entry: 004a7a00; end: 004a7bb7;  */

int FUN_004a7a00(long param_1,ulong *param_2,undefined4 *param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_e0 [96];
  uint uStack_80;
  
  lVar1 = param_1;
  _stat(param_1,auStack_e0);
  if ((int)lVar1 < 0) {
    ___error();
    func_0x004a8460();
    func_0x004a843c();
    func_0x004a84bc();
    uVar2 = extraout_x8_00;
LAB_004a7b08:
    func_0x004ab038(uVar2);
    uVar4 = 0;
  }
  else {
    _open(param_1,0);
    if ((int)param_1 < 0) {
      ___error();
      func_0x004a8460();
      func_0x004a843c();
      func_0x004a84bc();
      uVar2 = extraout_x8_01;
      goto LAB_004a7b08;
    }
    iVar6 = (int)param_4;
    uVar5 = (ulong)uStack_80;
    if ((((iVar6 == 0) || ((int)uStack_80 <= iVar6)) || (uVar5 = param_4, iVar6 < 1)) ||
       (lVar1 = param_1, _lseek(param_1,(long)-iVar6,2), -1 < lVar1)) {
      uVar3 = (ulong)((int)uVar5 + 1);
      _malloc();
      if (uVar3 == 0) {
        func_0x004a8468();
        func_0x004a84bc();
        func_0x004ab038();
      }
      else {
        lVar1 = param_1;
        func_0x004a7984(param_1,uVar3,uVar5);
        if ((int)lVar1 != 0) {
          *(undefined1 *)(uVar3 + (long)(int)uVar5) = 0;
          iVar6 = 1;
          goto LAB_004a7b6c;
        }
      }
      iVar6 = 0;
      uVar5 = 0;
    }
    else {
      ___error();
      func_0x004a8460();
      func_0x004a843c();
      func_0x004a84bc();
      func_0x004ab038(extraout_x8);
      iVar6 = 0;
      uVar5 = 0;
      uVar3 = 0;
    }
LAB_004a7b6c:
    uVar4 = (undefined4)uVar5;
    _close(param_1);
    if ((iVar6 != 0) || (uVar3 == 0)) goto LAB_004a7b8c;
    _free(uVar3);
  }
  iVar6 = 0;
  uVar3 = 0;
LAB_004a7b8c:
  *param_2 = uVar3;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar4;
  }
  return iVar6;
}



/* Entry: 004a7bb8; end: 004a7cfb;  */

undefined8 FUN_004a7bb8(int *param_1)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  
  _strdup();
  lVar2 = 1;
  piVar1 = param_1;
  do {
    if (*(char *)((long)param_1 + lVar2) == '/') {
      *(undefined1 *)((long)param_1 + lVar2) = 0;
      func_0x004a8488();
      if (((int)piVar1 < 0) && (___error(), *piVar1 != 0x11)) goto LAB_004a7c44;
      *(undefined1 *)((long)param_1 + lVar2) = 0x2f;
    }
    else if (*(char *)((long)param_1 + lVar2) == '\0') {
      func_0x004a8488();
      if (((int)piVar1 < 0) && (___error(), *piVar1 != 0x11)) {
LAB_004a7c44:
        ___error();
        func_0x004a8460();
        func_0x004a843c();
        func_0x004a847c();
        func_0x004ab038();
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      _free(param_1);
      return uVar3;
    }
    lVar2 = lVar2 + 1;
  } while( true );
}



/* Entry: 004a7cfc; end: 004a7d87;  */

long FUN_004a7cfc(long param_1)

{
  long lVar1;
  dword *pdVar2;
  long lVar3;
  dword *pdVar4;
  long lVar5;
  dword *pdVar6;
  dword *pdVar7;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  
  lVar1 = param_1;
  func_0x004a7d30();
  if ((int)lVar1 == 0) {
    return lVar1;
  }
  _bzero(auStack_f8,0x90);
  lVar1 = param_1;
  _stat(param_1,auStack_f8);
  if ((int)lVar1 == 0) {
    if ((uStack_f4 & 0xf000) == 0x4000) {
      lVar1 = param_1;
      _opendir();
      if (lVar1 == 0) {
        ___error();
        func_0x004a8460();
        func_0x004a843c();
        func_0x004a847c();
        func_0x004ab038();
        pdVar4 = (dword *)0x0;
        pdVar6 = (dword *)0x0;
      }
      else {
        pdVar4 = (dword *)0xffffffffffffffff;
        do {
          lVar5 = lVar1;
          _readdir();
          pdVar4 = (dword *)((long)pdVar4 + 1);
        } while (lVar5 != 0);
        _closedir(lVar1);
        if ((int)pdVar4 != 0) {
          _opendir();
          if (param_1 != 0) {
            pdVar6 = pdVar4;
            _calloc(pdVar4,8);
            pdVar7 = pdVar4;
            pdVar2 = pdVar6;
            while (lVar1 = param_1, _readdir(), lVar1 != 0) {
              if (pdVar7 == (dword *)0x0) {
                func_0x004a8468();
                func_0x004ab038();
                break;
              }
              lVar1 = lVar1 + 0x15;
              _strdup();
              *(long *)pdVar2 = lVar1;
              pdVar7 = (dword *)((long)pdVar7 + -1);
              pdVar2 = pdVar2 + 2;
            }
            _closedir(param_1);
            goto LAB_004a7f3c;
          }
          ___error();
          func_0x004a8460();
          func_0x004a843c();
          func_0x004a847c();
          func_0x004ab038();
        }
        pdVar6 = (dword *)0x0;
      }
LAB_004a7f3c:
      pdVar2 = &section_000001a8.reserved3;
      _malloc(500);
      _snprintf();
      pdVar7 = pdVar2;
      _strlen(pdVar2);
      if (pdVar6 != (dword *)0x0) {
        for (lVar1 = 0; ((ulong)pdVar4 & 0xffffffff) << 3 != lVar1; lVar1 = lVar1 + 8) {
          lVar5 = *(long *)((long)pdVar6 + lVar1);
          if ((lVar5 != 0) && (lVar3 = lVar5, func_0x004a7d30(), (int)lVar3 != 0)) {
            _strncpy((long)pdVar2 + (long)pdVar7,lVar5,(long)(500 - (int)pdVar7));
            FUN_004a7d88(pdVar2,1);
          }
        }
        _free(pdVar2);
        for (lVar1 = 0; pdVar2 = pdVar6, ((ulong)pdVar4 & 0xffffffff) * 8 - lVar1 != 0;
            lVar1 = lVar1 + 8) {
          _free(*(undefined8 *)((long)pdVar6 + lVar1));
        }
      }
      _free(pdVar2);
    }
    else {
      if (-0x7001 < (short)uStack_f4) {
        func_0x004a8468();
        goto LAB_004a7df0;
      }
      func_0x004a7c84(param_1,0);
    }
    lVar1 = 1;
  }
  else {
    ___error();
    func_0x004a8460();
    func_0x004a843c();
    func_0x004a847c();
LAB_004a7df0:
    func_0x004ab038();
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 004a7d88; end: 004a802b;  */

undefined8 FUN_004a7d88(long param_1,ulong param_2)

{
  undefined8 uVar1;
  dword *pdVar2;
  long lVar3;
  dword *pdVar4;
  long lVar5;
  dword *pdVar6;
  dword *pdVar7;
  long lVar8;
  undefined1 auStack_f8 [4];
  ushort uStack_f4;
  
  _bzero(auStack_f8,0x90);
  lVar8 = param_1;
  _stat(param_1,auStack_f8);
  if ((int)lVar8 == 0) {
    if ((uStack_f4 & 0xf000) == 0x4000) {
      lVar8 = param_1;
      _opendir();
      if (lVar8 == 0) {
        ___error();
        func_0x004a8460();
        func_0x004a843c();
        func_0x004a847c();
        func_0x004ab038();
        pdVar4 = (dword *)0x0;
        pdVar6 = (dword *)0x0;
      }
      else {
        pdVar4 = (dword *)0xffffffffffffffff;
        do {
          lVar5 = lVar8;
          _readdir();
          pdVar4 = (dword *)((long)pdVar4 + 1);
        } while (lVar5 != 0);
        _closedir(lVar8);
        if ((int)pdVar4 != 0) {
          lVar8 = param_1;
          _opendir();
          if (lVar8 != 0) {
            pdVar6 = pdVar4;
            _calloc(pdVar4,8);
            pdVar7 = pdVar4;
            pdVar2 = pdVar6;
            while (lVar5 = lVar8, _readdir(), lVar5 != 0) {
              if (pdVar7 == (dword *)0x0) {
                func_0x004a8468();
                func_0x004ab038();
                break;
              }
              lVar5 = lVar5 + 0x15;
              _strdup();
              *(long *)pdVar2 = lVar5;
              pdVar7 = (dword *)((long)pdVar7 + -1);
              pdVar2 = pdVar2 + 2;
            }
            _closedir(lVar8);
            goto LAB_004a7f3c;
          }
          ___error();
          func_0x004a8460();
          func_0x004a843c();
          func_0x004a847c();
          func_0x004ab038();
        }
        pdVar6 = (dword *)0x0;
      }
LAB_004a7f3c:
      pdVar2 = &section_000001a8.reserved3;
      _malloc(500);
      _snprintf();
      pdVar7 = pdVar2;
      _strlen(pdVar2);
      if (pdVar6 != (dword *)0x0) {
        for (lVar8 = 0; ((ulong)pdVar4 & 0xffffffff) << 3 != lVar8; lVar8 = lVar8 + 8) {
          lVar5 = *(long *)((long)pdVar6 + lVar8);
          if ((lVar5 != 0) && (lVar3 = lVar5, func_0x004a7d30(), (int)lVar3 != 0)) {
            _strncpy((long)pdVar2 + (long)pdVar7,lVar5,(long)(500 - (int)pdVar7));
            FUN_004a7d88(pdVar2,1);
          }
        }
        _free(pdVar2);
        for (lVar8 = 0; pdVar2 = pdVar6, ((ulong)pdVar4 & 0xffffffff) * 8 - lVar8 != 0;
            lVar8 = lVar8 + 8) {
          _free(*(undefined8 *)((long)pdVar6 + lVar8));
        }
      }
      _free(pdVar2);
      if ((param_2 & 1) != 0) goto LAB_004a7ffc;
    }
    else {
      if (-0x7001 < (short)uStack_f4) {
        func_0x004a8468();
        goto LAB_004a7df0;
      }
LAB_004a7ffc:
      func_0x004a7c84(param_1,0);
    }
    uVar1 = 1;
  }
  else {
    ___error();
    func_0x004a8460();
    func_0x004a843c();
    func_0x004a847c();
LAB_004a7df0:
    func_0x004ab038();
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 004a802c; end: 004a80a7;  */

uint FUN_004a802c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  _open(param_2,0xa02);
  uVar1 = (uint)param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if ((int)uVar1 < 0) {
    ___error();
    func_0x004a8460();
    func_0x004a843c();
    func_0x004a847c();
    func_0x004ab038();
  }
  return ~uVar1 >> 0x1f;
}



/* Entry: 004a80a8; end: 004a8127;  */

void FUN_004a80a8(long param_1)

{
  if (0 < *(int *)(param_1 + 0x10)) {
    func_0x004a80e4();
    _close(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  return;
}



/* Entry: 004a8128; end: 004a81bb;  */

bool FUN_004a8128(long *param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 - *(int *)((long)param_1 + 0xc) < param_3) {
    func_0x004a80e4(param_1);
    iVar2 = (int)param_1[1];
  }
  if (param_3 <= iVar2) {
    _memcpy(*param_1 + (long)*(int *)((long)param_1 + 0xc),param_2,(long)param_3);
    *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + param_3;
    return true;
  }
  lVar1 = param_1[2];
  do {
    if (param_3 < 1) {
LAB_004a7974:
      return param_3 < 1;
    }
    iVar2 = (int)lVar1;
    _write((int)lVar1,param_2,param_3);
    if (iVar2 == -1) {
      ___error();
      func_0x004a8460();
      func_0x004a843c();
      func_0x004a84a8();
      func_0x004ab038();
      goto LAB_004a7974;
    }
    param_3 = param_3 - iVar2;
    param_2 = param_2 + iVar2;
  } while( true );
}



/* Entry: 004a81bc; end: 004a827f;  */

undefined8 FUN_004a81bc(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 extraout_x8;
  
  if (0 < (int)*(uint *)((long)param_1 + 0xc)) {
    _memmove(*param_1,*param_1 + (ulong)*(uint *)((long)param_1 + 0xc));
    lVar2 = (long)(int)param_1[2] - (long)*(int *)((long)param_1 + 0xc);
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(*param_1 + lVar2) = 0;
  }
  if (0 < (int)param_1[1] - (int)param_1[2]) {
    iVar1 = *(int *)((long)param_1 + 0x14);
    _read(iVar1,*param_1 + (long)(int)param_1[2]);
    if (iVar1 < 0) {
      ___error();
      func_0x004a8460();
      func_0x004a843c();
      func_0x004ab038(extraout_x8);
      return 0;
    }
    lVar2 = (long)(int)param_1[2] + (long)iVar1;
    *(int *)(param_1 + 2) = (int)lVar2;
    *(undefined1 *)(*param_1 + lVar2) = 0;
  }
  return 1;
}



/* Entry: 004a8280; end: 004a8373;  */

undefined8 FUN_004a8280(long *param_1,undefined8 param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = *param_4;
  do {
    if (iVar8 < 1) break;
    iVar3 = (int)param_1[2] - *(int *)((long)param_1 + 0xc);
    if (iVar8 <= iVar3) {
      iVar3 = iVar8;
    }
    lVar1 = *param_1 + (long)*(int *)((long)param_1 + 0xc);
    lVar5 = lVar1;
    _strchr(lVar1,param_2);
    iVar4 = (int)lVar5 - (int)lVar1;
    iVar2 = iVar3;
    if (iVar4 + 1 < iVar3) {
      iVar2 = iVar4 + 1;
    }
    if (lVar5 != 0) {
      iVar3 = iVar2;
    }
    _memcpy(param_3,lVar1,(long)iVar3);
    *(int *)((long)param_1 + 0xc) = iVar3 + *(int *)((long)param_1 + 0xc);
    iVar7 = iVar3 + iVar7;
    if (lVar5 != 0) {
      uVar6 = 1;
      goto LAB_004a8354;
    }
    param_3 = param_3 + iVar3;
    iVar8 = iVar8 - iVar3;
  } while ((iVar8 < 1) || (FUN_004a81bc(param_1), (int)param_1[2] != *(int *)((long)param_1 + 0xc)))
  ;
  uVar6 = 0;
LAB_004a8354:
  *param_4 = iVar7;
  return uVar6;
}



/* Entry: 004a8374; end: 004a8407;  */

uint FUN_004a8374(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  uint uVar1;
  
  *param_3 = 0;
  param_3[(long)param_4 + -1] = 0;
  *param_1 = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(int *)(param_1 + 1) = (int)((long)param_4 + -1);
  _open(param_2,0);
  uVar1 = (uint)param_2;
  *(uint *)((long)param_1 + 0x14) = uVar1;
  if ((int)uVar1 < 0) {
    ___error();
    func_0x004a8460();
    func_0x004a843c();
    func_0x004a847c();
    func_0x004ab038();
  }
  else {
    FUN_004a81bc(param_1);
  }
  return ~uVar1 >> 0x1f;
}



/* Entry: 004a8408; end: 004a843b;  */

void FUN_004a8408(long param_1)

{
  if (0 < *(int *)(param_1 + 0x14)) {
    _close();
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  }
  return;
}



/* Entry: 004a843c; end: 004a84c7;  */

void FUN_004a843c(void)

{
  return;
}



/* Entry: 004a84c8; end: 004a858f;  */

undefined * FUN_004a84c8(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined1 auStack_38 [16];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  _uuid_generate(auStack_38);
  pcVar3 = "%02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X";
  _sprintf();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar4 = (undefined *)0x0;
  if ((param_1 != (undefined *)0x0) && (pcVar3 != (char *)0x0)) {
    _strncmp();
    if ((int)param_1 == 0) {
      puVar4 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      _NSClassFromString();
      puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      _NSClassFromString();
      func_0x00787ea0(puVar4);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return puVar4;
}



/* Entry: 004a8590; end: 004a8663;  */

undefined * FUN_004a8590(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = (undefined *)0x0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _strncmp(param_1,param_2);
    if ((int)param_1 == 0) {
      puVar3 = (undefined *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      _NSClassFromString();
      puVar2 = PTR__OBJC_CLASS___NSString_00ac2988;
      func_0x00792220(PTR__OBJC_CLASS___NSString_00ac2988);
      _objc_retainAutoreleasedReturnValue();
      _NSClassFromString();
      func_0x00787ea0(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
    }
  }
  return puVar3;
}



/* Entry: 004a8664; end: 004a868b;  */

char * FUN_004a8664(int param_1)

{
  if (param_1 - 1U < 5) {
    return (&PTR_s_Invalid_character_009ec4d0)[param_1 - 1U];
  }
  return "(unknown error)";
}



/* Entry: 004a868c; end: 004a8807;  */

void FUN_004a868c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)((long)param_1 + 0xdc) == '\x01') {
    *(undefined1 *)((long)param_1 + 0xdc) = 0;
  }
  else {
    iVar5 = 0x8dee39;
    func_0x004a9cbc(*param_1,",",param_2,param_1[1]);
    if (iVar5 != 0) {
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 2);
  if (*(char *)((long)param_1 + 0xdd) == '\x01' && 0 < iVar5) {
    iVar5 = 0x8dee3b;
    func_0x004a9cbc(*param_1);
    if (iVar5 == 0) {
      iVar6 = -1;
      do {
        iVar5 = *(int *)(param_1 + 2);
        iVar6 = iVar6 + 1;
        if (iVar5 <= iVar6) goto LAB_004a86d8;
        iVar5 = 0x8dee3d;
        (*(code *)*param_1)("    ",4,param_1[1]);
      } while (iVar5 == 0);
    }
  }
  else {
LAB_004a86d8:
    if ((*(char *)((long)param_1 + (long)iVar5 + 0x14) == '\x01') && (param_2 != 0)) {
      lVar2 = param_2;
      _strlen(param_2);
      puVar3 = param_1;
      func_0x004a87a0(param_1,param_2,lVar2);
      if ((int)puVar3 == 0) {
        if (*(char *)((long)param_1 + 0xdd) == '\x01') {
          uVar1 = 0x8dee42;
          uVar4 = 2;
        }
        else {
          uVar1 = 0x8dee45;
          uVar4 = 1;
        }
        (*(code *)*param_1)(uVar1,uVar4,param_1[1]);
      }
    }
  }
  return;
}



/* Entry: 004a8808; end: 004a8857;  */

void FUN_004a8808(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  puVar1 = param_1;
  FUN_004a868c();
  if ((int)puVar1 == 0) {
    if (param_3 == 0) {
      pcVar2 = "false";
      uVar3 = 5;
    }
    else {
      pcVar2 = "true";
      uVar3 = 4;
    }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)(pcVar2,uVar3,param_1[1]);
    return;
  }
  return;
}



/* Entry: 004a8858; end: 004a88bf;  */

void FUN_004a8858(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  
  func_0x004a9c44();
  FUN_004a868c();
  if ((int)param_1 == 0) {
    func_0x004a9c6c();
    func_0x004a9ca0();
    func_0x004a9c5c();
  }
  func_0x004a9c24(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x004a9c44();
  FUN_004a868c();
  if ((int)param_1 == 0) {
    func_0x004a9c6c();
    func_0x004a9ca0();
    func_0x004a9c5c();
  }
  func_0x004a9c24(extraout_x8_00);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004a9c44();
    FUN_004a868c();
    if ((int)param_1 == 0) {
      func_0x004a9c6c();
      func_0x004a9ca0();
      func_0x004a9c5c();
    }
    func_0x004a9c24(extraout_x8_01);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = param_1;
      FUN_004a868c();
      if ((int)puVar1 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)("null",4,param_1[1]);
      return;
    }
  }
  return;
}



/* Entry: 004a88c0; end: 004a89af;  */

void FUN_004a88c0(undefined8 *param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  
  func_0x004a9c44();
  FUN_004a868c();
  if ((int)param_1 == 0) {
    func_0x004a9c6c();
    func_0x004a9ca0();
    func_0x004a9c5c();
  }
  func_0x004a9c24(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x004a9c44();
    FUN_004a868c();
    if ((int)param_1 == 0) {
      func_0x004a9c6c();
      func_0x004a9ca0();
      func_0x004a9c5c();
    }
    func_0x004a9c24(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar1 = param_1;
      FUN_004a868c();
      if ((int)puVar1 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)("null",4,param_1[1]);
      return;
    }
  }
  return;
}



/* Entry: 004a89b0; end: 004a8a27;  */

void FUN_004a89b0(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    FUN_004a868c();
    if ((int)puVar2 == 0) {
      if ((int)param_4 == -1) {
        param_4 = param_3;
        _strlen(param_3);
      }
      iVar1 = 0x8dee65;
      func_0x004a9cbc(*param_1,"\"",param_3,param_1[1]);
      if (iVar1 == 0) {
        FUN_004a8a54(param_1,param_3,param_4);
        func_0x004a9cbc(*param_1,"\"");
      }
    }
    return;
  }
  puVar2 = param_1;
  FUN_004a868c();
  if ((int)puVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)("null",4,param_1[1]);
  return;
}



/* Entry: 004a8a28; end: 004a8a53;  */

void FUN_004a8a28(int param_1,undefined8 param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  FUN_004a868c();
  if (param_1 == 0) {
    func_0x004a9d14();
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 004a8a54; end: 004a8bcb;  */

void FUN_004a8a54(undefined8 *param_1,long param_2,undefined8 param_3,code *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  ulong uVar12;
  byte abStack_270 [512];
  undefined8 uStack_70;
  
  iVar7 = (int)param_3;
  uVar12 = 0;
  func_0x004a9c44();
  uStack_70 = extraout_x8;
  do {
    iVar11 = (int)uVar12;
    uVar3 = iVar7 - iVar11;
    uVar4 = uVar3 == 0;
    if ((bool)uVar4 || iVar7 < iVar11) {
      lVar5 = 0;
      break;
    }
    if (0x100 < (int)uVar3) {
      uVar3 = 0x100;
    }
    pbVar8 = (byte *)(param_2 + uVar12);
    pbVar1 = pbVar8 + uVar3;
    pbVar9 = abStack_270;
    for (; (((pbVar8 < pbVar1 && (bVar2 = *pbVar8, bVar2 != 0x22)) && (bVar2 != 0x5c)) &&
           (0x1f < bVar2)); pbVar8 = pbVar8 + 1) {
      *pbVar9 = bVar2;
      pbVar9 = pbVar9 + 1;
    }
    for (; uVar4 = pbVar8 == pbVar1, pbVar8 < pbVar1; pbVar8 = pbVar8 + 1) {
      bVar2 = *pbVar8;
      switch(bVar2) {
      case 8:
        pbVar10 = pbVar9 + 2;
        pbVar9[0] = 0x5c;
        pbVar9[1] = 0x62;
        break;
      case 9:
        pbVar10 = pbVar9 + 2;
        pbVar9[0] = 0x5c;
        pbVar9[1] = 0x74;
        break;
      case 10:
        pbVar10 = pbVar9 + 2;
        pbVar9[0] = 0x5c;
        pbVar9[1] = 0x6e;
        break;
      case 0xb:
LAB_004a8b4c:
        uVar4 = bVar2 == 0x1f;
        if (bVar2 < 0x20) {
          lVar5 = 1;
          goto LAB_004a8ba8;
        }
        pbVar10 = pbVar9 + 1;
        *pbVar9 = bVar2;
        break;
      case 0xc:
        pbVar10 = pbVar9 + 2;
        pbVar9[0] = 0x5c;
        pbVar9[1] = 0x66;
        break;
      case 0xd:
        pbVar10 = pbVar9 + 2;
        pbVar9[0] = 0x5c;
        pbVar9[1] = 0x72;
        break;
      default:
        if ((bVar2 != 0x5c) && (bVar2 != 0x22)) goto LAB_004a8b4c;
        *pbVar9 = 0x5c;
        pbVar9[1] = bVar2;
        pbVar10 = pbVar9 + 2;
      }
      pbVar9 = pbVar10;
    }
    lVar5 = (long)pbVar9 - (long)(int)((long)pbVar9 - (long)abStack_270);
    param_3 = param_1[1];
    (*(code *)*param_1)(lVar5,(long)pbVar9 - (long)abStack_270,param_3);
    uVar12 = (ulong)(uVar3 + iVar11);
  } while ((int)lVar5 == 0);
LAB_004a8ba8:
  func_0x004a9c24(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = lVar5;
  UNRECOVERED_JUMPTABLE = param_4;
  FUN_004a8a28();
  if (((int)lVar6 == 0) && (func_0x004a8c18(lVar5,param_3,param_4), (int)lVar5 == 0)) {
    func_0x004a9d14();
                    /* WARNING: Could not recover jumptable at 0x004a9ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 004a8bcc; end: 004a8c93;  */

void FUN_004a8bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = param_1;
  UNRECOVERED_JUMPTABLE = param_4;
  FUN_004a8a28();
  if (((int)uVar1 == 0) && (func_0x004a8c18(param_1,param_3,param_4), (int)param_1 == 0)) {
    func_0x004a9d14();
                    /* WARNING: Could not recover jumptable at 0x004a9ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}



/* Entry: 004a8c94; end: 004a8d43;  */

void FUN_004a8c94(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long extraout_x8;
  
  iVar2 = *(int *)(param_1 + 2);
  if (-1 < iVar2) {
    puVar1 = param_1;
    FUN_004a868c();
    if ((int)puVar1 != 0) {
      return;
    }
    iVar2 = *(int *)(param_1 + 2);
  }
  func_0x004a9d28(iVar2);
  *(undefined1 *)(extraout_x8 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0xdc) = 1;
                    /* WARNING: Could not recover jumptable at 0x004a9cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)("[",1,param_1[1]);
  return;
}



/* Entry: 004a8d44; end: 004a8e07;  */

void FUN_004a8d44(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 2);
  if (0 < (int)uVar2) {
    cVar3 = *(char *)((long)param_1 + (ulong)uVar2 + 0x14);
    *(uint *)(param_1 + 2) = uVar2 - 1;
    if ((*(char *)((long)param_1 + 0xdd) != '\x01') || ((*(byte *)((long)param_1 + 0xdc) & 1) != 0))
    {
LAB_004a8d88:
      *(undefined1 *)((long)param_1 + 0xdc) = 0;
      pcVar1 = "}";
      if (cVar3 == '\0') {
        pcVar1 = "]";
      }
                    /* WARNING: Could not recover jumptable at 0x004a9ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*param_1)(pcVar1,1,param_1[1]);
      return;
    }
    iVar5 = 0x8dee3b;
    func_0x004a9cbc(*param_1,"\n",param_2,param_1[1]);
    if (iVar5 == 0) {
      iVar5 = -1;
      do {
        iVar5 = iVar5 + 1;
        if (*(int *)(param_1 + 2) <= iVar5) goto LAB_004a8d88;
        iVar4 = 0x8dee3d;
        (*(code *)*param_1)("    ",4,param_1[1]);
      } while (iVar4 == 0);
    }
  }
  return;
}



/* Entry: 004a8e08; end: 004a8e3b;  */

void FUN_004a8e08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  do {
    if (*(int *)(param_1 + 0x10) < 1) {
      return;
    }
    func_0x004a9ce4();
  } while ((int)lVar1 == 0);
  return;
}



/* Entry: 004a8e3c; end: 004a8ec7;  */

void FUN_004a8e3c(long param_1,int param_2,long param_3,int param_4,long param_5,undefined8 param_6,
                 undefined4 *param_7)

{
  int iVar1;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  int iStack_58;
  undefined4 uStack_54;
  long lStack_50;
  int iStack_48;
  undefined4 uStack_44;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_68 = param_1 + param_2;
  iStack_58 = param_4 / 4;
  uStack_54 = 0;
  lStack_50 = param_3 + iStack_58;
  iStack_48 = param_4 - iStack_58;
  uStack_44 = 0;
  iVar1 = 0;
  lStack_70 = param_1;
  lStack_60 = param_3;
  lStack_40 = param_5;
  uStack_38 = param_6;
  FUN_004a8ec8(0,&lStack_70);
  if (iVar1 == 0) {
    (**(code **)(param_5 + 0x40))();
    iVar1 = (int)param_6;
  }
  if ((param_7 != (undefined4 *)0x0) && (iVar1 != 0)) {
    *param_7 = 0;
  }
  return;
}



/* Entry: 004a8ec8; end: 004a93e7;  */

/* WARNING: Removing unreachable block (ram,0x004a9254) */

void FUN_004a8ec8(ulong param_1,ulong *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  bool bVar1;
  uint uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong *puVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar10;
  byte *extraout_x8;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  long lVar17;
  
  pbVar12 = (byte *)*param_2;
  pbVar3 = (byte *)param_2[1];
  lVar17 = (long)pbVar3 - (long)pbVar12;
  while( true ) {
    if (pbVar3 <= pbVar12) {
      return;
    }
    bVar5 = *pbVar12;
    iVar16 = (int)(char)bVar5;
    _isspace();
    if (iVar16 == 0) break;
    func_0x004a9ccc();
    lVar17 = lVar17 + -1;
  }
  uVar2 = (uint)bVar5;
  bVar7 = true;
  if (uVar2 - 0x30 < 10) {
    iVar16 = 1;
  }
  else {
    if (uVar2 == 0x22) {
      puVar8 = param_2;
      FUN_004a98e4(param_2,param_2[4],(int)param_2[5]);
      if ((int)puVar8 != 0) {
        return;
      }
      uVar9 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x20);
      uVar11 = param_2[4];
      goto LAB_004a92d0;
    }
    if (uVar2 != 0x2d) {
      if (uVar2 == 0x7b) {
        func_0x004a9d08();
        uVar11 = param_1;
        (**(code **)(param_2[6] + 0x28))(param_1,param_2[7]);
        if ((int)uVar11 != 0) {
          return;
        }
        uVar9 = *param_2;
        uVar13 = param_2[1];
        while( true ) {
          if (uVar13 <= uVar9) {
            return;
          }
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            func_0x004a9c7c();
            if ((int)uVar11 == 0) break;
            func_0x004a9ccc();
          }
          if (((uint)param_1 & 0xff) == 0x7d) break;
          puVar8 = param_2;
          FUN_004a98e4(param_2,param_2[2],(int)param_2[3]);
          if ((int)puVar8 != 0) {
            return;
          }
          pcVar15 = (char *)*param_2;
          pcVar4 = (char *)param_2[1];
          pcVar14 = pcVar15;
          while( true ) {
            pcVar14 = pcVar14 + 1;
            if (pcVar4 <= pcVar15) {
              return;
            }
            cVar6 = *pcVar15;
            iVar16 = (int)cVar6;
            _isspace();
            if (iVar16 == 0) break;
            pcVar15 = pcVar15 + 1;
            *param_2 = (ulong)pcVar15;
          }
          if (cVar6 != ':') {
            return;
          }
          do {
            *param_2 = (ulong)pcVar14;
            if (pcVar4 <= pcVar14) break;
            iVar16 = (int)*pcVar14;
            _isspace();
            pcVar14 = pcVar14 + 1;
          } while (iVar16 != 0);
          uVar11 = param_2[2];
          FUN_004a8ec8(uVar11,param_2);
          if ((int)uVar11 != 0) {
            return;
          }
          uVar9 = *param_2;
          uVar13 = param_2[1];
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            func_0x004a9c7c();
            if ((int)uVar11 == 0) break;
            func_0x004a9ccc();
          }
          param_1 = 0x3a;
        }
LAB_004a93bc:
        func_0x004a9d08();
                    /* WARNING: Could not recover jumptable at 0x004a93dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[6] + 0x38))(param_2[7]);
        return;
      }
      if (uVar2 == 0x66) {
        if (lVar17 < 5) {
          return;
        }
        if (pbVar12[1] != 0x61) {
          return;
        }
        if (pbVar12[2] != 0x6c) {
          return;
        }
        if (pbVar12[3] != 0x73) {
          return;
        }
        if (pbVar12[4] != 0x65) {
          return;
        }
        func_0x004a9cf4(pbVar12 + 5);
      }
      else {
        if (uVar2 == 0x6e) {
          if (lVar17 < 4) {
            return;
          }
          if (pbVar12[1] != 0x75) {
            return;
          }
          if (pbVar12[2] != 0x6c) {
            return;
          }
          if (pbVar12[3] != 0x6c) {
            return;
          }
          *param_2 = (ulong)(pbVar12 + 4);
                    /* WARNING: Could not recover jumptable at 0x004a9144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(param_2[6] + 0x18))(param_1,param_2[7]);
          return;
        }
        if (uVar2 != 0x74) {
          if (uVar2 != 0x5b) {
            return;
          }
          func_0x004a9d08();
          uVar11 = param_1;
          (**(code **)(param_2[6] + 0x30))(param_1,param_2[7]);
          if ((int)uVar11 != 0) {
            return;
          }
          uVar9 = *param_2;
          uVar13 = param_2[1];
          while( true ) {
            if (uVar13 <= uVar9) {
              return;
            }
            while( true ) {
              if (uVar13 <= uVar9) {
                return;
              }
              func_0x004a9c7c();
              if ((int)uVar11 == 0) break;
              func_0x004a9ccc();
            }
            if (((uint)param_1 & 0xff) == 0x5d) break;
            uVar11 = 0;
            FUN_004a8ec8(0,param_2);
            if ((int)uVar11 != 0) {
              return;
            }
            uVar9 = *param_2;
            uVar13 = param_2[1];
            while( true ) {
              if (uVar13 <= uVar9) {
                return;
              }
              func_0x004a9c7c();
              if ((int)uVar11 == 0) break;
              func_0x004a9ccc();
            }
            if (((uint)param_1 & 0xff) == 0x2c) {
              func_0x004a9ccc();
            }
          }
          goto LAB_004a93bc;
        }
        if (lVar17 < 4) {
          return;
        }
        if (pbVar12[1] != 0x72) {
          return;
        }
        if (pbVar12[2] != 0x75) {
          return;
        }
        if (pbVar12[3] != 0x65) {
          return;
        }
        func_0x004a9cf4(pbVar12 + 4);
      }
                    /* WARNING: Could not recover jumptable at 0x004a90ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x004a9d08();
    if ((int)(char)pbVar12[1] - 0x3aU < 0xfffffff6) {
      return;
    }
    bVar7 = false;
    iVar16 = -1;
    pbVar12 = extraout_x8;
  }
  lVar17 = 0;
  lVar10 = 0;
  uVar11 = 0;
  while( true ) {
    if (pbVar3 <= pbVar12 + lVar17) {
      return;
    }
    bVar5 = pbVar12[lVar17];
    uVar2 = (int)(char)bVar5 - 0x30;
    bVar1 = 9 < uVar2;
    if (0x1999999999999999 < uVar11 || 9 < uVar2) break;
    uVar11 = uVar11 * 10;
    if (CARRY8(uVar11,(ulong)uVar2)) {
      bVar1 = false;
      break;
    }
    uVar11 = uVar11 + uVar2;
    *param_2 = (ulong)(pbVar12 + lVar17 + 1);
    lVar10 = lVar10 + 0x100000000;
    lVar17 = lVar17 + 1;
  }
  uVar2 = bVar5 - 0x2b;
  if (uVar11 < 0x8000000000000001) {
    bVar7 = true;
  }
  if (((!bVar1) || (!bVar7)) ||
     (uVar2 < 0x3b && (0x3fffffffbff8012U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) {
    while( true ) {
      if (pbVar3 <= pbVar12 + lVar17) {
        return;
      }
      uVar2 = pbVar12[lVar17] - 0x2b;
      if (0x3a < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x400000004007fedU) == 0) break;
      *param_2 = (ulong)(pbVar12 + lVar17 + 1);
      lVar10 = lVar10 + 0x100000000;
      lVar17 = lVar17 + 1;
    }
    if ((int)param_2[5] <= (int)lVar17) {
      return;
    }
    _strncpy(param_2[4],pbVar12,lVar10 >> 0x20);
    *(undefined1 *)(param_2[4] + (lVar10 >> 0x20)) = 0;
    _sscanf(param_2[4],"%lg");
    (**(code **)(param_2[6] + 8))(param_1,param_2[7]);
    return;
  }
  uVar11 = uVar11 * (long)iVar16;
  uVar9 = param_2[7];
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x10);
LAB_004a92d0:
                    /* WARNING: Could not recover jumptable at 0x004a92e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar11,uVar9);
  return;
}



/* Entry: 004a93e8; end: 004a9533;  */

undefined8 FUN_004a93e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined1 **ppuVar3;
  qword *pqVar4;
  undefined8 extraout_x8;
  long lStack_768;
  undefined1 **ppuStack_760;
  undefined1 *puStack_758;
  undefined8 uStack_750;
  undefined4 uStack_748;
  undefined1 uStack_744;
  undefined1 uStack_743;
  undefined2 uStack_742;
  code *pcStack_740;
  undefined1 *puStack_738;
  undefined1 *puStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined1 *puStack_718;
  undefined8 uStack_710;
  undefined1 *puStack_708;
  long *plStack_700;
  undefined1 auStack_6f8 [76];
  undefined1 auStack_6ac [1000];
  undefined1 auStack_2c4 [500];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  
  func_0x004a9c44();
  pqVar4 = &segment_command_00000020.fileoff;
  uStack_68 = extraout_x8;
  _memcpy(auStack_6f8,&PTR_FUN_009ec440);
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  _bzero(auStack_2c4,500);
  _bzero(auStack_6ac,1000);
  uStack_720 = 100;
  uStack_710 = 500;
  uVar2 = param_3;
  puStack_730 = auStack_2c4;
  puStack_728 = &uStack_d0;
  puStack_718 = auStack_2c4;
  puStack_708 = auStack_6f8;
  _open(param_3,0);
  ppuStack_760 = &puStack_738;
  uStack_748 = (undefined4)uVar2;
  uStack_744 = 0;
  uStack_743 = (undefined1)param_4;
  uStack_742 = 0;
  pcStack_740 = FUN_004a96c8;
  plStack_700 = &lStack_768;
  iVar1 = *(int *)(param_1 + 0x10);
  lStack_768 = param_1;
  puStack_758 = auStack_6ac;
  uStack_750 = param_3;
  puStack_738 = auStack_2c4;
  FUN_004a96c8(&lStack_768);
  ppuVar3 = &puStack_738;
  FUN_004a8ec8(param_2,ppuVar3);
  _close(uVar2);
  if ((int)param_4 != 0) {
    while( true ) {
      in_ZR = *(int *)(param_1 + 0x10) == iVar1;
      if (*(int *)(param_1 + 0x10) <= iVar1) break;
      func_0x004a9ce4();
    }
  }
  func_0x004a9c24(uStack_68);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  FUN_004a8808(*pqVar4,uVar2,ppuVar3);
  func_0x004a9c14();
  return param_4;
}



/* Entry: 004a9534; end: 004a95db;  */

void FUN_004a9534(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  FUN_004a8808(*param_3,param_1,param_2);
  FUN_004a9c14();
  return;
}



/* Entry: 004a95dc; end: 004a9627;  */

undefined8 FUN_004a95dc(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  uVar1 = param_2;
  _strlen(param_2);
  FUN_004a89b0(uVar2,param_1,param_2,uVar1);
  FUN_004a9c14();
  return param_2;
}



/* Entry: 004a9628; end: 004a96bf;  */

void FUN_004a9628(void)

{
  func_0x004a9cac();
  func_0x004a8cec();
  func_0x004a9c14();
  return;
}



/* Entry: 004a96c0; end: 004a96c7;  */

undefined8 FUN_004a96c0(void)

{
  return 0;
}



/* Entry: 004a96c8; end: 004a979b;  */

void FUN_004a96c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    uVar1 = **(undefined8 **)(param_1 + 8);
    iVar5 = (int)(*(undefined8 **)(param_1 + 8))[1];
    iVar3 = iVar5 - (int)lVar2;
    iVar5 = iVar5 - (int)uVar1;
    if (iVar5 < iVar3 / 2) {
      iVar3 = iVar3 - iVar5;
      _memcpy(lVar2,uVar1,(long)iVar5);
      **(long **)(param_1 + 8) = lVar2;
      iVar4 = *(int *)(param_1 + 0x20);
      _read(iVar4,lVar2 + iVar5,iVar3);
      if (iVar4 < iVar3) {
        if (iVar4 < 0) {
          ___error();
          _strerror();
          func_0x004ab038("ERROR","Vendors/KSCrash/implementation/Recording/Tools/KSJSONCodec.c",
                          0x4be,"void updateDecoder_readFile(struct JSONFromFileContext *)",
                          "Error reading file %s: %s");
        }
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
  }
  return;
}



/* Entry: 004a979c; end: 004a98df;  */

undefined8 FUN_004a979c(long param_1,undefined8 param_2,long param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 in_ZR;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long lStack_1500;
  long *plStack_14f8;
  long lStack_14f0;
  undefined8 uStack_14e8;
  undefined4 uStack_14e0;
  undefined1 uStack_14dc;
  undefined1 uStack_14db;
  undefined2 uStack_14da;
  code *pcStack_14d8;
  long lStack_14d0;
  long lStack_14c8;
  undefined8 *puStack_14c0;
  undefined8 uStack_14b8;
  undefined1 *puStack_14b0;
  undefined8 uStack_14a8;
  undefined1 *puStack_14a0;
  undefined1 *puStack_1498;
  undefined1 auStack_1490 [72];
  undefined1 auStack_1448 [5000];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  
  (*(code *)PTR____chkstk_darwin_00999f48)();
  func_0x004a9c44();
  uStack_58 = extraout_x8;
  _memcpy(auStack_1490,&PTR_FUN_009ec488,0x48);
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  _bzero(auStack_1448,5000);
  lStack_14c8 = param_3 + param_4;
  puStack_14c0 = &uStack_c0;
  uStack_14b8 = 100;
  uStack_14a8 = 5000;
  plStack_14f8 = &lStack_14d0;
  uStack_14e8 = 0;
  uStack_14e0 = 0;
  uStack_14dc = 0;
  uStack_14db = (undefined1)param_5;
  uStack_14da = 0;
  pcStack_14d8 = FUN_004a98e0;
  iVar1 = *(int *)(param_1 + 0x10);
  lStack_1500 = param_1;
  lStack_14f0 = param_3;
  lStack_14d0 = param_3;
  puStack_14b0 = auStack_1448;
  puStack_14a0 = auStack_1490;
  puStack_1498 = (undefined1 *)&lStack_1500;
  FUN_004a8ec8(param_2,&lStack_14d0);
  uVar2 = param_2;
  if (param_5 != 0) {
    while( true ) {
      in_ZR = *(int *)(param_1 + 0x10) == iVar1;
      if (*(int *)(param_1 + 0x10) <= iVar1) break;
      func_0x004a9ce4();
    }
  }
  func_0x004a9c24(uStack_58);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  return uVar2;
}



/* Entry: 004a98e0; end: 004a98e3;  */

void FUN_004a98e0(void)

{
  return;
}



/* Entry: 004a98e4; end: 004a9c13;  */

undefined8 FUN_004a98e4(undefined8 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  
  *param_2 = 0;
  pbVar7 = (byte *)*param_1;
  if (*pbVar7 == 0x22) {
    bVar8 = true;
    pbVar10 = pbVar7;
    do {
      lVar6 = ((ulong)~(uint)pbVar7 << 0x20) + ((long)pbVar10 << 0x20);
      iVar11 = ~(uint)pbVar7 + (int)pbVar10;
      pbVar9 = pbVar10 + 1;
      do {
        if ((byte *)param_1[1] <= pbVar9) {
          return 4;
        }
        pbVar10 = pbVar9 + 1;
        bVar1 = *pbVar9;
        lVar6 = lVar6 + 0x100000000;
        iVar11 = iVar11 + 1;
        if (bVar1 == 0x22) {
          if (param_3 <= iVar11) {
            return 2;
          }
          pbVar7 = pbVar7 + 1;
          *param_1 = pbVar10;
          if (bVar8) {
            _memcpy(param_2,pbVar7,lVar6 >> 0x20);
            param_2[lVar6 >> 0x20] = 0;
            return 0;
          }
          goto LAB_004a99dc;
        }
        pbVar9 = pbVar10;
      } while (bVar1 != 0x5c);
      bVar8 = false;
    } while( true );
  }
LAB_004a9990:
  return 1;
LAB_004a99dc:
  if (pbVar9 <= pbVar7) {
    *param_2 = 0;
    return 0;
  }
  if (*pbVar7 == 0x5c) {
    pbVar10 = pbVar7 + 1;
    bVar1 = *pbVar10;
    switch(bVar1) {
    case 0x6e:
      *param_2 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto LAB_004a9990;
    case 0x72:
      *param_2 = 0xd;
      break;
    case 0x74:
      *param_2 = 9;
      break;
    case 0x75:
      if (pbVar9 < pbVar7 + 6) {
        return 4;
      }
      uVar4 = *(int *)(&UNK_00805c38 + (long)(char)pbVar7[3] * 4) << 8 |
              *(int *)(&UNK_00805c38 + (long)(char)pbVar7[2] * 4) << 0xc |
              *(int *)(&UNK_00805c38 + (long)(char)pbVar7[4] * 4) << 4 |
              *(uint *)(&UNK_00805c38 + (long)(char)pbVar7[5] * 4);
      if (uVar4 >> 0x10 != 0 || (uVar4 & 0xfc00) == 0xdc00) {
        return 1;
      }
      if ((uVar4 & 0xfc00) == 0xd800) {
        if (pbVar9 < pbVar7 + 0xc) {
          return 4;
        }
        if (pbVar7[6] != 0x5c) {
          return 1;
        }
        if (pbVar7[7] != 0x75) {
          return 1;
        }
        uVar2 = *(int *)(&UNK_00805c38 + (long)(char)pbVar7[9] * 4) << 8 |
                *(int *)(&UNK_00805c38 + (long)(char)pbVar7[8] * 4) << 0xc |
                *(int *)(&UNK_00805c38 + (long)(char)pbVar7[10] * 4) << 4 |
                *(uint *)(&UNK_00805c38 + (long)(char)pbVar7[0xb] * 4);
        if (uVar2 >> 10 != 0x37) {
          return 1;
        }
        uVar4 = uVar2 + uVar4 * 0x400 + 0xfc9f2400;
        lVar6 = 7;
      }
      else {
        lVar6 = 1;
      }
      if (uVar4 < 0x80) {
        *param_2 = (byte)uVar4;
        lVar5 = 1;
      }
      else {
        bVar1 = (byte)uVar4 & 0x3f | 0x80;
        if (uVar4 < 0x800) {
          *param_2 = (byte)(uVar4 >> 6) | 0xc0;
          param_2[1] = bVar1;
          lVar5 = 2;
        }
        else {
          bVar3 = (byte)(uVar4 >> 6) & 0x3f | 0x80;
          if (uVar4 >> 0x10 == 0) {
            *param_2 = (byte)(uVar4 >> 0xc) | 0xe0;
            param_2[1] = bVar3;
            param_2[2] = bVar1;
            lVar5 = 3;
          }
          else {
            *param_2 = (byte)(uVar4 >> 0x12) | 0xf0;
            param_2[1] = (byte)(uVar4 >> 0xc) & 0x3f | 0x80;
            param_2[2] = bVar3;
            param_2[3] = bVar1;
            lVar5 = 4;
          }
        }
      }
      pbVar12 = param_2 + lVar5;
      pbVar10 = pbVar7 + lVar6 + 4;
      goto LAB_004a99f4;
    default:
      if (bVar1 == 0x66) {
        *param_2 = 0xc;
      }
      else if (bVar1 == 0x2f) {
        *param_2 = 0x2f;
      }
      else if (bVar1 == 0x5c) {
        *param_2 = 0x5c;
      }
      else if (bVar1 == 0x62) {
        *param_2 = 8;
      }
      else {
        if (bVar1 != 0x22) {
          return 1;
        }
        *param_2 = 0x22;
      }
    }
    pbVar12 = param_2 + 1;
  }
  else {
    pbVar12 = param_2 + 1;
    *param_2 = *pbVar7;
    pbVar10 = pbVar7;
  }
LAB_004a99f4:
  pbVar7 = pbVar10 + 1;
  param_2 = pbVar12;
  goto LAB_004a99dc;
}



/* Entry: 004a9c14; end: 004a9d3b;  */

void FUN_004a9c14(void)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x004a9c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x19 + 0x28))();
  return;
}



/* Entry: 004a9d3c; end: 004a9d6b; +[KSJSONCodec codecWithEncodeOptions:decodeOptions:] */

void FUN_004a9d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc();
  func_0x00785460(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 004a9d6c; end: 004a9fcf; -[KSJSONCodec initWithEncodeOptions:decodeOptions:] */

undefined8 * FUN_004a9d6c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac3d90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0077f120(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
    _objc_retainAutoreleasedReturnValue();
    func_0x0078d680(puVar1);
    func_0x004aad54();
    _malloc(0x48);
    puVar2 = puVar1;
    func_0x0078d280();
    func_0x004aad4c();
    puVar2[6] = 0x4a9ec0;
    func_0x004aad4c();
    puVar2[5] = 0x4a9f1c;
    func_0x004aad4c();
    *puVar2 = 0x4a9f78;
    func_0x004aad4c();
    puVar2[7] = FUN_004a9fd0;
    func_0x004aad4c();
    puVar2[8] = FUN_004aa084;
    func_0x004aad4c();
    puVar2[1] = FUN_004aa08c;
    func_0x004aad4c();
    puVar2[2] = FUN_004aa0fc;
    func_0x004aad4c();
    puVar2[3] = 0x4aa154;
    func_0x004aad4c();
    puVar2[4] = 0x4aa204;
    func_0x0078f800(puVar1);
    func_0x00790600(puVar1);
    func_0x0078e600(puVar1);
    func_0x0078e620(puVar1);
  }
  return puVar1;
}



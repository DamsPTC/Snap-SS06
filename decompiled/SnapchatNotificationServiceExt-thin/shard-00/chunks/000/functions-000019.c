/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10006a058; end: 10006a0db; -[SCProcessedNotificationPersister notificationProcessed:] */

undefined * FUN_10006a058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000706e0();
  puVar2 = PTR__OBJC_CLASS___SCMutableSetReaderWriter_1000d23b0;
  func_0x000100073e40(PTR__OBJC_CLASS___SCMutableSetReaderWriter_1000d23b0,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10006a0dc; end: 10006a0f3; -[SCProcessedNotificationPersister saveProcessedNotificationId:] */

void FUN_10006a0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010006db50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (PTR__OBJC_CLASS___SCMutableSetReaderWriter_1000d23b0,
             PTR_s_addStringToSetAndSaveToFile_newS_1000cfec8,*(undefined8 *)(param_1 + 0x20),
             param_3);
  return;
}



/* Entry: 10006a0f4; end: 10006a28b; -[SCProcessedNotificationPersister cleanUpProcessedNotificationsFiles] */

void FUN_10006a0f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  long lVar9;
  long alStack_f0 [17];
  long lStack_68;
  ulong uVar8;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1000a0110;
  lVar2 = *(long *)(param_1 + 0x30);
  alStack_f0[0] = 0;
  func_0x00010006f4a0(lVar2,param_2,alStack_f0);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = alStack_f0[0];
  _objc_retain(alStack_f0[0]);
  _objc_retain(lVar2);
  lVar3 = lVar2;
  func_0x00010006e860();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar8 = *(ulong *)(lVar9 * 8);
      iVar7 = (int)uVar8;
      func_0x00010006e700();
      if (((iVar7 != 0) && (uVar4 = uVar8, func_0x000100071100(), (uVar4 & 1) == 0)) &&
         (func_0x000100071100(), (uVar8 & 1) == 0)) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        func_0x0001000739e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006ec40();
        _objc_release(uVar5);
      }
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar2;
    func_0x00010006e860();
  }
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release(lVar6);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar6 + 0x30,0);
  _objc_storeStrong(lVar6 + 0x28,0);
  _objc_storeStrong(lVar6 + 0x20,0);
  _objc_storeStrong(lVar6 + 0x18,0);
  _objc_storeStrong(lVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(lVar6 + 8,0);
  return;
}



/* Entry: 10006a28c; end: 10006a343; -[SCProcessedNotificationPersister .cxx_destruct] */

void FUN_10006a28c(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10006a344; end: 10006a587;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_10006a344(long param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
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
LAB_10006a3c8:
  uVar12 = uVar10 & 3;
  if (uVar12 == 0) {
    func_0x00010006ae80(param_2);
  }
  else if (uVar12 != 3) {
    FUN_10006ae38(param_1);
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
          if (cVar7 == '\0') goto LAB_10006a524;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar10;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10006a524:
      if (lVar4 == lVar3 && uVar11 == uVar13) goto LAB_10006a548;
      lVar3 = lVar4;
      uVar13 = uVar11;
      uVar9 = (uint)uVar11;
    }
    func_0x00010006a7a8(param_2);
LAB_10006a548:
    func_0x00010006ac10(param_2);
    func_0x00010006af8c(param_2 + 0x80);
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
          if (cVar7 == '\0') goto LAB_10006a44c;
        }
        cVar7 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *plVar1 = lVar3;
          *(ulong *)(param_2 + 0x58) = uVar11;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_10006a44c:
      if (lVar4 == lVar3 && uVar5 == uVar12) goto LAB_10006a470;
      lVar3 = lVar4;
      uVar12 = uVar5;
      uVar9 = (uint)uVar5;
    }
    func_0x00010006a908(param_2);
LAB_10006a470:
    func_0x00010006afd4(param_2 + 0x80);
    func_0x00010006ac3c(param_2);
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
    FUN_10006aa68(param_1,uVar12);
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
    func_0x00010006abdc();
    return 0;
  }
  goto LAB_10006a3c8;
}



/* Entry: 10006a588; end: 10006a66f;  */

void FUN_10006a588(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  lVar1 = param_1;
  func_0x00010006abd4();
  *(code **)(lVar1 + 0x38) = FUN_10006a670;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10006a344(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
  if (lVar2 == 1) {
    lVar1 = 0xc0;
    if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
      lVar1 = 0xd0;
    }
    lVar1 = param_2 + lVar1 + ((ulong)(*(uint *)(param_2 + 0x20) >> 0x17) & 8);
    lVar2 = *(long *)(*(long *)(lVar1 + 8) + -8);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
    (**(code **)(lVar2 + 0x10))(param_1,lVar1 + uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff));
                    /* WARNING: Could not recover jumptable at 0x00010006a65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (lVar2 != 2) {
    return;
  }
  FUN_10006b120(0,"future reported an error, but wait cannot throw");
                    /* WARNING: Could not recover jumptable at 0x00010006a674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10006a670; end: 10006a677;  */

void FUN_10006a670(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10006a678; end: 10006a787;  */

void FUN_10006a678(long param_1,long param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = param_1;
  func_0x00010006abd4();
  *(code **)(lVar1 + 0x38) = FUN_10006a788;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  lVar2 = param_2;
  FUN_10006a344(param_2,lVar1,param_4,UNRECOVERED_JUMPTABLE);
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
                    /* WARNING: Could not recover jumptable at 0x00010006a770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10006a788; end: 10006a7a7;  */

void FUN_10006a788(void)

{
  undefined8 *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010006a794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)unaff_x22[1])(*unaff_x22);
  return;
}



/* Entry: 10006a7a8; end: 10006aa67;  */

/* WARNING: Possible PIC construction at 0x00010006a8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006a8c0) */
/* WARNING: Removing unreachable block (ram,0x00010006a8e0) */
/* WARNING: Removing unreachable block (ram,0x00010006a8cc) */
/* WARNING: Removing unreachable block (ram,0x00010006a8e4) */

void FUN_10006a7a8(long param_1)

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
      FUN_10006aae8(param_1,&lStack_60);
      lVar2 = lStack_60;
      uVar3 = uStack_58;
      uVar8 = (uint)uStack_58;
    }
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x20;
      __Znwm();
      *puVar7 = 1;
      func_0x00010006af58(puVar7 + 1,0);
      puVar7[2] = 0xc0;
      puVar7[3] = lVar2;
      FUN_10006af64(puVar7 + 1);
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
        if (cVar5 == '\0') goto LAB_10006a86c;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = (long)(puVar7 + 2);
        *(ulong *)(param_1 + 0x54) = uVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10006a86c:
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
      FUN_10006af64(0x1000e9f10);
      _os_unfair_lock_unlock(puVar7 + 1);
      return;
    }
    uVar8 = (uint)uVar3;
  } while( true );
}



/* Entry: 10006aa68; end: 10006aae7;  */

void FUN_10006aa68(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (lRam00000001000e9f08 != -1) {
    FUN_10006abbc();
  }
  if (pcRam00000001000e9f00 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010006aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000e9f00)();
    return;
  }
  _abort(param_1,param_2);
  uVar1 = 0xfffffffffffffffe;
  _dlsym(0xfffffffffffffffe,"swift_task_escalate");
  *param_1 = uVar1;
  return;
}



/* Entry: 10006aae8; end: 10006abbb;  */

/* WARNING: Possible PIC construction at 0x00010006ab38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006ab48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006ab7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006ab80) */
/* WARNING: Removing unreachable block (ram,0x00010006ab84) */
/* WARNING: Removing unreachable block (ram,0x00010006ab8c) */
/* WARNING: Removing unreachable block (ram,0x00010006ab94) */
/* WARNING: Removing unreachable block (ram,0x00010006ab3c) */
/* WARNING: Removing unreachable block (ram,0x00010006ab4c) */
/* WARNING: Removing unreachable block (ram,0x00010006ab74) */
/* WARNING: Removing unreachable block (ram,0x00010006ab60) */
/* WARNING: Removing unreachable block (ram,0x00010006ab78) */

void FUN_10006aae8(long param_1,long *param_2)

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
  FUN_10006af64(0x1000e9f10);
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
    unaff_x30 = 0x10006ab3c;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
    unaff_x29 = puVar1;
  }
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  _os_unfair_lock_unlock(0x1000e9f10);
  return;
}



/* Entry: 10006abbc; end: 10006abdb;  */

void FUN_10006abbc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9f08,0x1000e9f00,0x10006aab8);
  return;
}



/* Entry: 10006abdc; end: 10006aceb;  */

undefined8 FUN_10006abdc(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x67;
  _pthread_getspecific(0x67);
  _pthread_setspecific(0x67,0);
  return uVar1;
}



/* Entry: 10006acec; end: 10006ad23;  */

void FUN_10006acec(void)

{
  long lStack_28;
  ulong uStack_20;
  
  __swift_stdlib_operatingSystemVersion(&lStack_28);
  uRam00000001000e9f20 = lStack_28 == 0xf && uStack_20 < 2;
  return;
}



/* Entry: 10006ad24; end: 10006ae17;  */

void FUN_10006ad24(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  _swift_once(0x1000e9f18,FUN_10006acec,0);
  if ((bRam00000001000e9f20 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    if (lRam00000001000e9f30 != -1) {
      func_0x00010006ae34();
    }
    iVar1 = (int)uVar2;
    if ((pcRam00000001000e9f28 == (code *)0x0) || ((*pcRam00000001000e9f28)(), iVar1 != 0)) {
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



/* Entry: 10006ae18; end: 10006ae37;  */

void FUN_10006ae18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9f30,0x1000e9f28,0x10006ade8);
  return;
}



/* Entry: 10006ae38; end: 10006af27;  */

void FUN_10006ae38(undefined8 param_1)

{
  if (lRam00000001000e9f40 != -1) {
    FUN_10006af28();
  }
  if (pcRam00000001000e9f38 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010006ae54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000e9f38)(param_1);
    return;
  }
  return;
}



/* Entry: 10006af28; end: 10006af63;  */

void FUN_10006af28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9f40,0x1000e9f38,0x10006aec8);
  return;
}



/* Entry: 10006af64; end: 10006af8b;  */

void FUN_10006af64(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 10006af8c; end: 10006b07b;  */

void FUN_10006af8c(undefined8 param_1)

{
  if (lRam00000001000e9f60 != -1) {
    FUN_10006b07c();
  }
  if (pcRam00000001000e9f58 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010006afa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam00000001000e9f58)(param_1);
    return;
  }
  return;
}



/* Entry: 10006b07c; end: 10006b0ab;  */

void FUN_10006b07c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9f60,0x1000e9f58,0x10006b01c);
  return;
}



/* Entry: 10006b0ac; end: 10006b0d7; -[_TtC36WidgetSuggestionNotificationModifier32WidgetSuggestionNotifTaskHandler init] */

void FUN_10006b0ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WidgetSuggestionNotificationModifier.WidgetSuggestionNotifTaskHandler",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006b0d8);
  (*pcVar1)();
}



/* Entry: 10006b0d8; end: 10006b103; -[SCNSENativeAckTaskHandler init] */

void FUN_10006b0d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("NSENativeAckTaskHandlerSwift.NSENativeAckTaskHandler",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10006b104);
  (*pcVar1)();
}



/* Entry: 10006b104; end: 10006b11f;  */

void FUN_10006b104(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_1000a0198)(0x1000e9408,0,FUN_1000213a8);
  return;
}



/* Entry: 10006b120; end: 10006b12b;  */

void FUN_10006b120(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x00010006b134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation11JSONDecoderC20DateDecodingStrategyOMa_1000a0a70)();
  return;
}



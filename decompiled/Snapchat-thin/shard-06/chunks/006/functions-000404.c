/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ada788; end: 104ada7df;  */

void FUN_104ada788(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x20) == param_1) {
    return;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                      ,0x11e,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104ada7dc);
  (*pcVar1)();
}



/* Entry: 104ada7e0; end: 104ada82f;  */

undefined8 FUN_104ada7e0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  plVar1 = (long *)(param_1 + 0x78);
  lVar5 = *plVar1;
  if (*plVar1 == 0) {
    return 0;
  }
  do {
    lVar4 = *plVar1;
    if (lVar4 == lVar5) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        return 1;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    lVar5 = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  } while( true );
}



/* Entry: 104ada830; end: 104adaa13;  */

/* WARNING: Possible PIC construction at 0x000104ada92c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104ada930) */
/* WARNING: Removing unreachable block (ram,0x000104ada938) */
/* WARNING: Removing unreachable block (ram,0x000104ada940) */
/* WARNING: Removing unreachable block (ram,0x000104ada944) */
/* WARNING: Removing unreachable block (ram,0x000104ada94c) */
/* WARNING: Removing unreachable block (ram,0x000104ada954) */
/* WARNING: Removing unreachable block (ram,0x000104ada970) */
/* WARNING: Removing unreachable block (ram,0x000104ada99c) */
/* WARNING: Removing unreachable block (ram,0x000104ada9a4) */
/* WARNING: Removing unreachable block (ram,0x000104ada9ac) */
/* WARNING: Removing unreachable block (ram,0x000104ada9b0) */
/* WARNING: Removing unreachable block (ram,0x000104ada9b8) */
/* WARNING: Removing unreachable block (ram,0x000104ada9bc) */

void FUN_104ada830(long param_1,long param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                  ulong param_6)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [8];
  
  puVar3 = auStack_60;
  puVar9 = &stack0xfffffffffffffff0;
  lVar6 = *param_3;
  *(long *)(param_6 + 8) = param_2;
  *(undefined8 *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_5;
  *(ulong *)(param_6 + 0x20) = (ulong)(lVar6 == 0) | param_1 + 0x48U;
  func_0x000100460448(*(undefined8 *)(param_1 + 8));
  plVar8 = (long *)(param_1 + 0x80);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = *plVar8 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  *(ulong *)(*(long *)(param_1 + 0x70) + 0x20) =
       *(ulong *)(*(long *)(param_1 + 0x70) + 0x20) & 1 | param_6;
  *(ulong *)(param_1 + 0x70) = param_6;
  plVar8 = (long *)(param_1 + 0x78);
  do {
    lVar6 = *plVar8;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar2) {
      *plVar8 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 + -1 == 0) {
    FUN_104adb0b8(param_1);
    iVar4 = (int)*(undefined8 *)(param_1 + 8);
    puVar3 = (undefined1 *)register0x00000008;
    puVar9 = unaff_x29;
  }
  else {
    uVar7 = (ulong)*(uint *)(param_1 + 0x8c);
    if (0 < (int)*(uint *)(param_1 + 0x8c)) {
      plVar8 = (long *)(param_1 + 0x98);
      do {
        if (*plVar8 == param_2) {
          uVar5 = *(undefined8 *)plVar8[-1];
          goto LAB_104ada910;
        }
        plVar8 = plVar8 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar5 = 0;
LAB_104ada910:
    (**(code **)(*(long *)(param_1 + 0x18) + 0x18))
              (auStack_38,param_1 + 0x48U + *(long *)(*(long *)(param_1 + 0x10) + 8),uVar5);
    iVar4 = (int)*(undefined8 *)(param_1 + 8);
    unaff_x30 = 0x104ada930;
  }
  *(undefined1 **)(puVar3 + -0x10) = puVar9;
  *(undefined8 *)(puVar3 + -8) = unaff_x30;
  func_0x000107c61268();
  if (iVar4 == 0) {
    return;
  }
  func_0x000107c2c138();
                    /* WARNING: Could not recover jumptable at 0x000100466ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puRam00000001136a2078)();
  return;
}



/* Entry: 104adaa14; end: 104adadaf;  */

undefined1  [16]
FUN_104adaa14(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  long lVar6;
  code *pcVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  int *piVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined ***pppuStack_118;
  undefined8 auStack_110 [2];
  char cStack_f9;
  undefined ***pppuStack_f8;
  undefined **appuStack_f0 [9];
  long *plStack_a8;
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  char cStack_78;
  undefined8 auStack_70 [2];
  
  auStack_70[0] = 0;
  if (param_5 == 0) {
    plVar1 = param_1 + 9;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
      if (bVar4) {
        *param_1 = *param_1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    func_0x000100460448(param_1[1]);
    func_0x000100491618(param_3,param_4);
    lStack_a0 = param_1[0x10];
    lStack_88 = 0;
    uVar14 = 1;
    cStack_78 = '\x01';
    pppuVar8 = appuStack_f0;
    plStack_98 = param_1;
    lStack_90 = param_3;
    lStack_80 = param_2;
    func_0x000100466e48(pppuVar8,0);
    plStack_a8 = &lStack_a0;
    appuStack_f0[0] = &PTR_FUN_1107c71f0;
    do {
      plVar13 = plVar1;
      if (lStack_88 != 0) {
        func_0x000100466b80(param_1[1]);
        lVar6 = lStack_88;
        lStack_88 = 0;
        param_2 = *(long *)(lVar6 + 8);
        uVar11 = *(ulong *)(lVar6 + 0x20);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 0x18));
LAB_104adac58:
        uVar11 = uVar11 & 1;
        uVar14 = 2;
        goto LAB_104adac60;
      }
      while( true ) {
        plVar12 = plVar13;
        plVar13 = (long *)(plVar12[4] & 0xfffffffffffffffe);
        if (plVar1 == plVar13) break;
        if (plVar13[1] == param_2) {
          plVar12[4] = plVar13[4] & 0xfffffffffffffffeU | plVar12[4] & 1U;
          if ((long *)param_1[0xe] == plVar13) {
            param_1[0xe] = (long)plVar12;
          }
          func_0x000100466b80(param_1[1]);
          param_2 = plVar13[1];
          uVar11 = plVar13[4];
          (*(code *)plVar13[2])(plVar13[3],plVar13);
          goto LAB_104adac58;
        }
      }
      if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
        func_0x000100466b80(param_1[1]);
        uVar14 = 0;
        break;
      }
      iVar2 = *(int *)((long)param_1 + 0x8c);
      if (iVar2 == 6) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                            ,0x502,0,
                            "Too many outstanding grpc_completion_queue_pluck calls: maximum is %d")
        ;
LAB_104adad0c:
        func_0x000100466b80(param_1[1]);
        uVar14 = 1;
        break;
      }
      param_1[(long)iVar2 * 2 + 0x12] = (long)auStack_70;
      (param_1 + (long)iVar2 * 2 + 0x12)[1] = param_2;
      *(int *)((long)param_1 + 0x8c) = iVar2 + 1;
      if (cStack_78 == '\0') {
        func_0x000100460dc4();
        ppuVar9 = *pppuVar8;
        func_0x0001004671a4();
        if (param_3 <= (long)ppuVar9) {
          func_0x000104adb104(param_1,param_2,auStack_70);
          goto LAB_104adad0c;
        }
      }
      *(int *)(param_1 + 8) = (int)param_1[8] + 1;
      (**(code **)(param_1[3] + 0x20))
                (&pppuStack_f8,(long)plVar1 + *(long *)(param_1[2] + 8),auStack_70,param_3);
      pppuVar5 = pppuStack_f8;
      if (pppuStack_f8 == (undefined ***)0x0) {
        cStack_78 = '\0';
        func_0x000104adb104(param_1,param_2,auStack_70);
      }
      else {
        func_0x000104adb104(param_1,param_2,auStack_70);
        func_0x000100466b80(param_1[1]);
        pppuStack_118 = pppuStack_f8;
        if (((ulong)pppuStack_f8 & 1) != 0) {
          piVar10 = (int *)((long)pppuStack_f8 + -1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar4) {
              *piVar10 = *piVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_104aba950(auStack_110,&pppuStack_118);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                            ,0x51c,2,"Completion queue pluck failed: %s");
        if (cStack_f9 < '\0') {
          __ZdlPv(auStack_110[0]);
        }
        if (((ulong)pppuStack_118 & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      pppuVar8 = pppuStack_f8;
      if (((ulong)pppuStack_f8 & 1) != 0) {
        func_0x00010084dad0();
      }
    } while (pppuVar5 == (undefined ***)0x0);
    uVar11 = 0;
LAB_104adac60:
    func_0x000100832ca0(param_1);
    if (lStack_88 == 0) {
      func_0x000100467a48(appuStack_f0);
      auVar15._0_8_ = uVar14 | uVar11 << 0x20;
      auVar15._8_8_ = param_2;
      return auVar15;
    }
  }
  else {
    func_0x00010bdadc3c();
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                      ,0x52b,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104adad54);
  (*pcVar7)();
}



/* Entry: 104adadb0; end: 104adadc3;  */

void FUN_104adadb0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = param_2;
  return;
}



/* Entry: 104adadc4; end: 104adae43;  */

void FUN_104adadc4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = *param_1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  func_0x000100460448(param_1[1]);
  if ((char)param_1[10] == '\0') {
    plVar1 = param_1 + 9;
    *(undefined1 *)(param_1 + 10) = 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    func_0x000100466b80(param_1[1]);
    if (lVar4 == 1) {
      FUN_104adb284(param_1);
    }
  }
  else {
    func_0x000100466b80(param_1[1]);
  }
  do {
    lVar4 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    (**(code **)(param_1[2] + 0x20))(param_1 + 9);
    (**(code **)(param_1[3] + 0x30))((long)(param_1 + 9) + *(long *)(param_1[2] + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(param_1);
    return;
  }
  return;
}



/* Entry: 104adae44; end: 104adae97;  */

void FUN_104adae44(void)

{
  return;
}



/* Entry: 104adae98; end: 104adafc7;  */

void FUN_104adae98(long *param_1,long *param_2,ulong *param_3,code *param_4,long *param_5,
                  undefined8 param_6,ulong param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 extraout_x8;
  ulong uStack_48;
  
  plVar1 = param_1 + 9;
  (*param_4)(param_5,param_6);
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
    FUN_104adb284();
    param_5 = param_1;
  }
  if (((param_7 & 1) != 0) || ((int)param_2[1] != 0)) {
    func_0x0001004b6294();
    if (*param_5 != 0) goto LAB_104adaf0c;
  }
  iVar4 = (int)param_5;
  func_0x000100836ca0();
  if (iVar4 == 0) {
    puVar5 = (undefined8 *)0x30;
    func_0x000100460200();
    *puVar5 = FUN_104adb398;
    puVar5[1] = param_2;
    puVar5[3] = &UNK_1004be1e0;
    puVar5[4] = puVar5;
    puVar5[5] = 0;
    uStack_48 = *param_3;
    if ((uStack_48 & 1) != 0) {
      piVar7 = (int *)(uStack_48 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001004c1168(puVar5 + 2,&uStack_48,0,0);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
LAB_104adaf0c:
  *(uint *)((long)param_2 + 0xc) = (uint)(*param_3 == 0);
  param_2[2] = 0;
  func_0x0001004b6294(param_2);
  lVar6 = *param_2;
  if (*(long *)(lVar6 + 8) == 0) {
    *(undefined8 *)(lVar6 + 8) = extraout_x8;
  }
  if (*(long *)(lVar6 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar6 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar6 + 0x10) = extraout_x8;
  return;
}



/* Entry: 104adafc8; end: 104adafcb;  */

undefined8 * FUN_104adafc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_1107c0ee8;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  func_0x000100467970();
  func_0x000100460dc4(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
    FUN_104a6f7dc();
  }
  return param_1;
}



/* Entry: 104adafcc; end: 104adafe3;  */

void FUN_104adafcc(void)

{
  code *pcVar1;
  
  func_0x000100467a48();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104adafe0);
  (*pcVar1)();
}



/* Entry: 104adafe4; end: 104adb0b7;  */

long * FUN_104adafe4(long *param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  uint extraout_w8;
  uint uVar4;
  ulong uVar5;
  long *extraout_x9;
  long *plVar6;
  long *extraout_x10;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uStack_31;
  
  plVar7 = (long *)param_1[9];
  if (plVar7[3] != 0) {
    func_0x00010bdadc70();
    if (*(char *)((long)param_1 + 0x89) == '\0') {
      func_0x00010bdadca4();
    }
    else if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x11) = 1;
      plVar7 = (long *)((long)param_1 + *(long *)(param_1[2] + 8) + 0x48);
                    /* WARNING: Could not recover jumptable at 0x000104adb0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[3] + 0x28))(plVar7,param_1 + 4);
      return plVar7;
    }
    func_0x00010bdadcd8();
    uVar4 = *(uint *)((long)param_1 + 0x8c);
    uVar5 = (ulong)uVar4;
    if (0 < (int)uVar4) {
      plVar7 = param_1 + 0x12;
      plVar6 = plVar7;
      do {
        if ((plVar6[1] == param_2) && (*plVar6 == param_3)) goto LAB_104adb164;
        plVar6 = plVar6 + 2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = (long *)&UNK_10f48d1b8;
    FUN_104a6e964(&UNK_10f48d1b8,
                  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                  ,0x488);
    plVar7 = extraout_x9;
    plVar6 = extraout_x10;
    uVar4 = extraout_w8;
LAB_104adb164:
    lVar3 = (long)(int)uVar4 + -1;
    *(int *)((long)param_1 + 0x8c) = (int)lVar3;
    lVar9 = plVar6[1];
    lVar8 = *plVar6;
    lVar10 = plVar7[lVar3 * 2];
    plVar6[1] = (plVar7 + lVar3 * 2)[1];
    *plVar6 = lVar10;
    (plVar7 + lVar3 * 2)[1] = lVar9;
    plVar7[lVar3 * 2] = lVar8;
    return param_1;
  }
  lVar3 = plVar7[1];
  if (*(long *)(lVar3 + 0xa8) != *plVar7) {
    plVar6 = (long *)(lVar3 + 0x48);
    *plVar7 = *(long *)(lVar3 + 0xa8);
    do {
      if (*plVar6 != 0) {
        ClearExclusiveLocal();
        goto LAB_104adb074;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    uStack_31 = 0;
    lVar8 = lVar3 + 0x50;
    func_0x0001004920d0(lVar8,&uStack_31);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    param_1 = (long *)0x0;
    if (lVar8 != 0) {
      plVar6 = (long *)(lVar3 + 0xa0);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar7[3] = lVar8;
      return (long *)0x1;
    }
LAB_104adb074:
    plVar7[3] = 0;
  }
  if ((char)plVar7[5] == '\0') {
    func_0x000100460dc4();
    lVar3 = *param_1;
    func_0x0001004671a4(lVar3);
    plVar7 = (long *)(ulong)(plVar7[2] < lVar3);
  }
  else {
    plVar7 = (long *)0x0;
  }
  return plVar7;
}



/* Entry: 104adb0b8; end: 104adb18b;  */

void FUN_104adb0b8(undefined *param_1,long param_2,long param_3)

{
  uint extraout_w8;
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *extraout_x9;
  long *plVar4;
  long *plVar5;
  long *extraout_x10;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (param_1[0x89] == '\0') {
    func_0x00010bdadca4();
  }
  else if ((param_1[0x88] & 1) == 0) {
    param_1[0x88] = 1;
                    /* WARNING: Could not recover jumptable at 0x000104adb0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x18) + 0x28))
              (param_1 + *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x48,param_1 + 0x20);
    return;
  }
  func_0x00010bdadcd8();
  uVar1 = *(uint *)(param_1 + 0x8c);
  uVar2 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar4 = (long *)(param_1 + 0x90);
    plVar5 = plVar4;
    do {
      if ((plVar5[1] == param_2) && (*plVar5 == param_3)) goto LAB_104adb164;
      plVar5 = plVar5 + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  param_1 = &UNK_10f48d1b8;
  FUN_104a6e964(&UNK_10f48d1b8,
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/completion_queue.cc"
                ,0x488);
  plVar4 = extraout_x9;
  plVar5 = extraout_x10;
  uVar1 = extraout_w8;
LAB_104adb164:
  lVar3 = (long)(int)uVar1 + -1;
  *(int *)(param_1 + 0x8c) = (int)lVar3;
  lVar7 = plVar5[1];
  lVar6 = *plVar5;
  lVar8 = plVar4[lVar3 * 2];
  plVar5[1] = (plVar4 + lVar3 * 2)[1];
  *plVar5 = lVar8;
  (plVar4 + lVar3 * 2)[1] = lVar7;
  plVar4[lVar3 * 2] = lVar6;
  return;
}



/* Entry: 104adb18c; end: 104adb18f;  */

undefined8 * FUN_104adb18c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  
  *param_1 = &PTR_FUN_1107c0ee8;
  param_1[5] = param_1[5] | 1;
  puVar1 = param_1;
  func_0x000100467970();
  func_0x000100460dc4(param_1[8]);
  *puVar1 = extraout_x8;
  if (((*(byte *)(param_1 + 5) >> 2 & 1) == 0) && ((bRam0000000113815bd8 & 1) != 0)) {
    FUN_104a6f7dc();
  }
  return param_1;
}



/* Entry: 104adb190; end: 104adb1a7;  */

void FUN_104adb190(void)

{
  code *pcVar1;
  
  func_0x000100467a48();
  _abort();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104adb1a4);
  (*pcVar1)();
}



/* Entry: 104adb1a8; end: 104adb283;  */

long * FUN_104adb1a8(long *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  code *pcVar9;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined8 ***pppuStack_40;
  code *pcStack_38;
  
  plVar5 = (long *)param_1[9];
  if (plVar5[3] != 0) {
    func_0x00010bdadd0c();
    puVar1 = auStack_60;
    pcStack_38 = FUN_104adb284;
    ppppuVar8 = &pppuStack_40;
    pppuStack_40 = (undefined8 ***)&stack0xfffffffffffffff0;
    if ((char)param_1[10] == '\0') {
      func_0x00010bdadd40();
      FUN_104bd46a0();
      func_0x0001004bdf74(&plStack_58);
      pcVar9 = FUN_104adb358;
      __Unwind_Resume();
    }
    else {
      plVar5 = (long *)param_1[0xb];
      lVar3 = (long)param_1 + *(long *)(param_1[2] + 8) + 0x48;
      (**(code **)(param_1[3] + 0x28))(lVar3,param_1 + 4);
      iVar2 = (int)lVar3;
      func_0x000100836ca0();
      if (iVar2 == 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000100460200();
        *puVar4 = FUN_104adb398;
        puVar4[1] = plVar5;
        puVar4[3] = &UNK_1004be1e0;
        puVar4[4] = puVar4;
        puVar4[5] = 0;
        plStack_58 = (long *)0x0;
        func_0x0001004c1168(puVar4 + 2,&plStack_58,0,0);
        if (((ulong)plStack_58 & 1) != 0) {
          func_0x00010084dad0();
        }
        return plStack_58;
      }
      param_2 = 1;
      puVar1 = &stack0xffffffffffffffd0;
      param_1 = plVar5;
      ppppuVar8 = (undefined8 ****)pppuStack_40;
      pcVar9 = pcStack_38;
    }
    *(undefined8 *****)(puVar1 + -0x10) = ppppuVar8;
    *(code **)(puVar1 + -8) = pcVar9;
    *(undefined4 *)((long)param_1 + 0xc) = param_2;
    param_1[2] = 0;
    func_0x0001004b6294(param_1);
    lVar3 = *param_1;
    if (*(long *)(lVar3 + 8) == 0) {
      *(undefined8 *)(lVar3 + 8) = extraout_x8;
    }
    if (*(long *)(lVar3 + 0x10) != 0) {
      *(undefined8 *)(*(long *)(lVar3 + 0x10) + 0x10) = extraout_x8;
    }
    *(undefined8 *)(lVar3 + 0x10) = extraout_x8;
    return param_1;
  }
  lVar3 = plVar5[1];
  if (*(long *)(lVar3 + 0x80) == *plVar5) {
LAB_104adb248:
    if ((char)plVar5[5] == '\0') {
      func_0x000100460dc4();
      lVar3 = *param_1;
      func_0x0001004671a4(lVar3);
      plVar5 = (long *)(ulong)(plVar5[2] < lVar3);
    }
    else {
      plVar5 = (long *)0x0;
    }
  }
  else {
    func_0x000100460448(*(undefined8 *)(lVar3 + 8));
    *plVar5 = *(long *)(lVar3 + 0x80);
    uVar7 = lVar3 + 0x48U;
    do {
      uVar6 = uVar7;
      uVar7 = *(ulong *)(uVar6 + 0x20) & 0xfffffffffffffffe;
      if (lVar3 + 0x48U == uVar7) {
        param_1 = *(long **)(lVar3 + 8);
        func_0x000100466b80();
        goto LAB_104adb248;
      }
    } while (*(long *)(uVar7 + 8) != plVar5[4]);
    *(ulong *)(uVar6 + 0x20) =
         *(ulong *)(uVar7 + 0x20) & 0xfffffffffffffffe | *(ulong *)(uVar6 + 0x20) & 1;
    if (*(ulong *)(lVar3 + 0x70) == uVar7) {
      *(ulong *)(lVar3 + 0x70) = uVar6;
    }
    func_0x000100466b80(*(undefined8 *)(lVar3 + 8));
    plVar5[3] = uVar7;
    plVar5 = (long *)0x1;
  }
  return plVar5;
}



/* Entry: 104adb284; end: 104adb357;  */

void FUN_104adb284(long *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  long *plVar5;
  undefined1 *unaff_x29;
  undefined1 *puVar6;
  code *unaff_x30;
  undefined1 auStack_30 [8];
  ulong uStack_28;
  
  puVar1 = auStack_30;
  puVar6 = &stack0xfffffffffffffff0;
  if ((char)param_1[10] == '\0') {
    func_0x00010bdadd40();
    FUN_104bd46a0();
    func_0x0001004bdf74(&uStack_28);
    unaff_x30 = FUN_104adb358;
    __Unwind_Resume();
  }
  else {
    plVar5 = (long *)param_1[0xb];
    lVar4 = (long)param_1 + *(long *)(param_1[2] + 8) + 0x48;
    (**(code **)(param_1[3] + 0x28))(lVar4,param_1 + 4);
    iVar2 = (int)lVar4;
    func_0x000100836ca0();
    if (iVar2 == 0) {
      puVar3 = (undefined8 *)0x30;
      func_0x000100460200();
      *puVar3 = FUN_104adb398;
      puVar3[1] = plVar5;
      puVar3[3] = &UNK_1004be1e0;
      puVar3[4] = puVar3;
      puVar3[5] = 0;
      uStack_28 = 0;
      func_0x0001004c1168(puVar3 + 2,&uStack_28,0,0);
      if ((uStack_28 & 1) != 0) {
        func_0x00010084dad0();
      }
      return;
    }
    param_2 = 1;
    puVar1 = (undefined1 *)register0x00000008;
    param_1 = plVar5;
    puVar6 = unaff_x29;
  }
  *(undefined1 **)(puVar1 + -0x10) = puVar6;
  *(code **)(puVar1 + -8) = unaff_x30;
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  func_0x0001004b6294(param_1);
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 8) == 0) {
    *(undefined8 *)(lVar4 + 8) = extraout_x8;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar4 + 0x10) = extraout_x8;
  return;
}



/* Entry: 104adb358; end: 104adb397;  */

void FUN_104adb358(long *param_1,undefined4 param_2)

{
  undefined8 extraout_x8;
  long lVar1;
  
  *(undefined4 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  func_0x0001004b6294(param_1);
  lVar1 = *param_1;
  if (*(long *)(lVar1 + 8) == 0) {
    *(undefined8 *)(lVar1 + 8) = extraout_x8;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10) = extraout_x8;
  }
  *(undefined8 *)(lVar1 + 0x10) = extraout_x8;
  return;
}



/* Entry: 104adb398; end: 104adb3b3;  */

void FUN_104adb398(undefined8 *param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104adb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_1,*param_2 == 0);
  return;
}



/* Entry: 104adb3b4; end: 104adb42b;  */

void FUN_104adb3b4(undefined8 param_1,undefined8 *param_2)

{
  func_0x000100460318();
  *param_2 = param_1;
  return;
}



/* Entry: 104adb42c; end: 104adb5db;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104adb42c(undefined8 *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int *piVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong *unaff_x21;
  ulong *unaff_x22;
  undefined8 uStack_168;
  ulong uStack_160;
  ulong auStack_158 [4];
  undefined1 uStack_131;
  ulong uStack_130;
  ulong *puStack_128;
  ulong *puStack_120;
  ulong *puStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f8;
  undefined1 **ppuStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  undefined1 uStack_d1;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 uStack_99;
  ulong uStack_98;
  ulong auStack_90 [6];
  char cStack_60;
  ulong *puStack_58;
  ulong *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_3;
  uStack_98 = param_4;
  if (param_2[10] == 0) {
    if ((char)param_2[8] == '\0') {
      func_0x000100460338(auStack_90);
      if (param_3 != (ulong *)0x0) {
        *param_3 = (ulong)auStack_90;
      }
      puVar5 = param_2 + 9;
      puStack_58 = (ulong *)*puVar5;
      if (puStack_58 == (ulong *)0x0) {
        puStack_58 = auStack_90;
        puVar7 = puVar5;
        puStack_50 = puStack_58;
      }
      else {
        puStack_50 = (ulong *)puStack_58[8];
        puStack_50[7] = (ulong)auStack_90;
        puVar7 = puStack_58 + 8;
      }
      *puVar7 = (ulong)auStack_90;
      cStack_60 = '\0';
      unaff_x22 = &uStack_98;
      puVar6 = (ulong *)0x0;
      func_0x00010047e56c();
      puVar4 = unaff_x22;
      puVar7 = puVar6;
      do {
        if (param_2[10] != 0 || cStack_60 != '\0') break;
        puVar4 = auStack_90;
        puVar7 = param_2;
        func_0x000100466590(puVar4,param_2,unaff_x22,puVar6);
      } while ((int)puVar4 == 0);
      func_0x000100460dc4();
      *(undefined1 *)(*puVar4 + 0x34) = 0;
      if ((auStack_90 == (ulong *)*puVar5) &&
         (*puVar5 = (ulong)puStack_58, auStack_90 == puStack_58)) {
        puVar7 = (ulong *)param_2[10];
        if (puVar7 != (ulong *)0x0) {
          uStack_a8 = 0;
          func_0x0001004bd7e8(&uStack_99,puVar7,&uStack_a8);
          func_0x0001004bdf74(&uStack_a8);
        }
        *puVar5 = 0;
      }
      unaff_x21 = (ulong *)(ulong)(param_3 == (ulong *)0x0);
      puStack_58[8] = (ulong)puStack_50;
      puStack_50[7] = (ulong)puStack_58;
      param_2 = auStack_90;
      func_0x000100832c44();
      unaff_x20 = param_3;
      if (param_3 != (ulong *)0x0) {
        *param_3 = 0;
      }
    }
    else {
      *(undefined1 *)(param_2 + 8) = 0;
      unaff_x21 = param_2;
    }
  }
  *param_1 = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001004bdf74(&uStack_a8);
  puVar5 = param_2;
  __Unwind_Resume();
  puStack_d0 = unaff_x20;
  puStack_c8 = param_2;
  puStack_c0 = &stack0xfffffffffffffff0;
  pcStack_b8 = FUN_104adb5dc;
  if (puVar7 != (ulong *)0x0) {
    puVar5[10] = (ulong)puVar7;
    uVar9 = puVar5[9];
    if (uVar9 == 0) {
      uStack_e0 = 0;
      func_0x0001004bd7e8(&uStack_d1);
      if ((uStack_e0 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      do {
        func_0x000100466b64(uVar9);
        uVar9 = *(ulong *)(uVar9 + 0x38);
      } while (uVar9 != puVar5[9]);
    }
    return;
  }
  func_0x00010bdadd74();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_e0);
  puVar4 = puVar5;
  __Unwind_Resume();
  pcStack_e8 = FUN_104adb664;
  ppuStack_f0 = &puStack_c0;
  func_0x000107c61258();
  if ((int)puVar4 == 0) {
    return;
  }
  func_0x000107c2c130();
  puStack_f8 = &UNK_1005a5f64;
  puStack_120 = unaff_x22;
  puStack_118 = unaff_x21;
  puStack_110 = unaff_x20;
  puStack_108 = puVar5;
  puStack_100 = (undefined1 *)&ppuStack_f0;
  func_0x000100460448(puVar4 + 2);
  if (*puVar7 == 0) {
    if ((char)puVar4[10] == '\0') {
      uVar9 = puVar4[0xb];
      if (uVar9 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                            ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar3)();
      }
      *(ulong *)puVar4[0x11] = uVar9;
      puVar4[0xb] = 0;
      if ((char)puVar4[0x12] != '\0') {
        func_0x0001005a6208(uVar9,puVar4[0xe]);
      }
      uStack_168 = 0;
      func_0x0001005a6218(puVar4,&uStack_168);
      goto code_r0x0001005a60e0;
    }
    auStack_158[2] = 0;
    auStack_158[3] = 0;
    auStack_158[1] = 0;
    FUN_104ab5920(&uStack_130,2,"tcp handshaker shutdown",0x17,&uStack_131,auStack_158 + 1);
    uVar9 = *puVar7;
    if (uStack_130 == uVar9) {
code_r0x0001005a5fec:
      if ((uVar9 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *puVar7 = uStack_130;
      uStack_130 = 0x36;
      if ((uVar9 & 1) != 0) {
        func_0x00010084dad0();
        uVar9 = uStack_130;
        goto code_r0x0001005a5fec;
      }
    }
    puStack_128 = auStack_158 + 1;
    func_0x000100482b64(&puStack_128);
  }
  uVar9 = puVar4[0xb];
  if (uVar9 != 0) {
    auStack_158[0] = *puVar7;
    if ((auStack_158[0] & 1) != 0) {
      piVar8 = (int *)(auStack_158[0] - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104aba5c4(uVar9,auStack_158);
    if ((auStack_158[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((char)puVar4[10] == '\0') {
    uVar9 = puVar4[0x11];
    puVar4[0xc] = *(ulong *)(uVar9 + 0x10);
    *(undefined8 *)(uVar9 + 0x10) = 0;
    func_0x00010048650c(*(undefined8 *)(uVar9 + 8));
    *(undefined8 *)(puVar4[0x11] + 8) = 0;
    *(undefined1 *)(puVar4 + 10) = 1;
    uVar9 = *puVar7;
    if ((uVar9 & 1) != 0) {
      piVar8 = (int *)(uVar9 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    uStack_160 = uVar9;
    func_0x0001005a6218(puVar4,&uStack_160);
    if ((uVar9 & 1) != 0) {
      func_0x00010084dad0(uVar9);
    }
  }
code_r0x0001005a60e0:
  func_0x000100466b80(puVar4 + 2);
  puVar7 = puVar4 + 1;
  do {
    uVar9 = *puVar7;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar2) {
      *puVar7 = uVar9 - 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (uVar9 - 1 == 0) {
    (**(code **)(*puVar4 + 8))(puVar4);
  }
  return;
}



/* Entry: 104adb5dc; end: 104adb663;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104adb5dc(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong auStack_a8 [4];
  undefined1 uStack_81;
  ulong uStack_80;
  ulong *puStack_78;
  ulong uStack_30;
  undefined1 uStack_21;
  
  if (param_2 != (ulong *)0x0) {
    param_1[10] = (long)param_2;
    lVar7 = param_1[9];
    if (lVar7 == 0) {
      uStack_30 = 0;
      func_0x0001004bd7e8(&uStack_21,param_2,&uStack_30);
      if ((uStack_30 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      do {
        func_0x000100466b64(lVar7);
        lVar7 = *(long *)(lVar7 + 0x38);
      } while (lVar7 != param_1[9]);
    }
    return;
  }
  func_0x00010bdadd74();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_30);
  __Unwind_Resume();
  func_0x000107c61258();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c130();
  func_0x000100460448(param_1 + 2);
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      lVar7 = param_1[0xb];
      if (lVar7 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                            ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar4)();
      }
      *(long *)param_1[0x11] = lVar7;
      param_1[0xb] = 0;
      if ((char)param_1[0x12] != '\0') {
        func_0x0001005a6208(lVar7,param_1[0xe]);
      }
      uStack_b8 = 0;
      func_0x0001005a6218(param_1,&uStack_b8);
      goto code_r0x0001005a60e0;
    }
    auStack_a8[2] = 0;
    auStack_a8[3] = 0;
    auStack_a8[1] = 0;
    FUN_104ab5920(&uStack_80,2,"tcp handshaker shutdown",0x17,&uStack_81,auStack_a8 + 1);
    uVar5 = *param_2;
    if (uStack_80 == uVar5) {
code_r0x0001005a5fec:
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = uStack_80;
      uStack_80 = 0x36;
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
        uVar5 = uStack_80;
        goto code_r0x0001005a5fec;
      }
    }
    puStack_78 = auStack_a8 + 1;
    func_0x000100482b64(&puStack_78);
  }
  lVar7 = param_1[0xb];
  if (lVar7 != 0) {
    auStack_a8[0] = *param_2;
    if ((auStack_a8[0] & 1) != 0) {
      piVar6 = (int *)(auStack_a8[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba5c4(lVar7,auStack_a8);
    if ((auStack_a8[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((char)param_1[10] == '\0') {
    lVar7 = param_1[0x11];
    param_1[0xc] = *(long *)(lVar7 + 0x10);
    *(undefined8 *)(lVar7 + 0x10) = 0;
    func_0x00010048650c(*(undefined8 *)(lVar7 + 8));
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_b0 = uVar5;
    func_0x0001005a6218(param_1,&uStack_b0);
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0(uVar5);
    }
  }
code_r0x0001005a60e0:
  func_0x000100466b80(param_1 + 2);
  plVar1 = param_1 + 1;
  do {
    lVar7 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar7 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar7 + -1 == 0) {
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 104adb664; end: 104adb66f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104adb664(long *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong auStack_78 [4];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  func_0x000107c61258();
  if ((int)param_1 == 0) {
    return;
  }
  func_0x000107c2c130();
  func_0x000100460448(param_1 + 2);
  if (*param_2 == 0) {
    if ((char)param_1[10] == '\0') {
      lVar6 = param_1[0xb];
      if (lVar6 == 0) {
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/tcp_connect_handshaker.cc"
                            ,0xc1,2,"assertion failed: %s");
        func_0x000107c60ebc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005a6158);
        (*pcVar4)();
      }
      *(long *)param_1[0x11] = lVar6;
      param_1[0xb] = 0;
      if ((char)param_1[0x12] != '\0') {
        func_0x0001005a6208(lVar6,param_1[0xe]);
      }
      uStack_88 = 0;
      func_0x0001005a6218(param_1,&uStack_88);
      goto code_r0x0001005a60e0;
    }
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[1] = 0;
    FUN_104ab5920(&uStack_50,2,"tcp handshaker shutdown",0x17,&uStack_51,auStack_78 + 1);
    uVar5 = *param_2;
    if (uStack_50 == uVar5) {
code_r0x0001005a5fec:
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = uStack_50;
      uStack_50 = 0x36;
      if ((uVar5 & 1) != 0) {
        func_0x00010084dad0();
        uVar5 = uStack_50;
        goto code_r0x0001005a5fec;
      }
    }
    puStack_48 = auStack_78 + 1;
    func_0x000100482b64(&puStack_48);
  }
  lVar6 = param_1[0xb];
  if (lVar6 != 0) {
    auStack_78[0] = *param_2;
    if ((auStack_78[0] & 1) != 0) {
      piVar7 = (int *)(auStack_78[0] - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba5c4(lVar6,auStack_78);
    if ((auStack_78[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  if ((char)param_1[10] == '\0') {
    lVar6 = param_1[0x11];
    param_1[0xc] = *(long *)(lVar6 + 0x10);
    *(undefined8 *)(lVar6 + 0x10) = 0;
    func_0x00010048650c(*(undefined8 *)(lVar6 + 8));
    *(undefined8 *)(param_1[0x11] + 8) = 0;
    *(undefined1 *)(param_1 + 10) = 1;
    uVar5 = *param_2;
    if ((uVar5 & 1) != 0) {
      piVar7 = (int *)(uVar5 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar3) {
          *piVar7 = *piVar7 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_80 = uVar5;
    func_0x0001005a6218(param_1,&uStack_80);
    if ((uVar5 & 1) != 0) {
      func_0x00010084dad0(uVar5);
    }
  }
code_r0x0001005a60e0:
  func_0x000100466b80(param_1 + 2);
  plVar1 = param_1 + 1;
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
    (**(code **)(*param_1 + 8))(param_1);
  }
  return;
}



/* Entry: 104adb670; end: 104adb70f;  */

undefined1  [16] FUN_104adb670(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_e8 [8];
  long lStack_a8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  puVar6 = &uStack_30;
  if (param_1 == 0) {
    uStack_28 = 0;
    uStack_30 = 1;
    uStack_20 = 0;
    ppuVar4 = &PTR_s_Default_Factory_1107c7220;
    (*(code *)PTR_DAT_1130a64a8)(&PTR_s_Default_Factory_1107c7220,&uStack_30);
    auVar11._8_8_ = puVar6;
    auVar11._0_8_ = ppuVar4;
    return auVar11;
  }
  func_0x00010bdadddc();
  puVar6 = &uStack_60;
  uStack_38 = 0x104adb6c0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (param_1 == 0) {
    uStack_58 = 0;
    uStack_60 = 0x100000001;
    uStack_50 = 0;
    ppuVar4 = &PTR_s_Default_Factory_1107c7220;
    (*(code *)PTR_DAT_1130a64a8)(&PTR_s_Default_Factory_1107c7220,&uStack_60);
    auVar12._8_8_ = puVar6;
    auVar12._0_8_ = ppuVar4;
    return auVar12;
  }
  func_0x00010bdade10();
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar5 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_e8;
    func_0x000107c616d0(plVar1,0x40,param_4,&uStack_60);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_e8;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar5 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    auVar8._8_8_ = uVar5;
    auVar8._0_8_ = plVar1;
    return auVar8;
  }
  func_0x000107c60e78();
  if (uVar5 >> 0x3d == 0) {
    lVar2 = uVar5 << 3;
    func_0x000107c60e20(lVar2);
    auVar9._8_8_ = uVar5;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar7 = plVar1[2];
  while (lVar7 != lVar2) {
    plVar1[2] = lVar7 + -8;
    plVar3 = *(long **)(lVar7 + -8);
    *(undefined8 *)(lVar7 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar7 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = plVar1;
  return auVar10;
}



/* Entry: 104adb710; end: 104adb717;  */

undefined1  [16]
FUN_104adb710(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104adb718; end: 104adb7b7;  */

undefined8 FUN_104adb718(long param_1)

{
  long lVar1;
  char *pcStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x38;
  pcStack_30 = "grpc.server_credentials";
  uStack_28 = 0x17;
  func_0x000100477d50(lVar1,&pcStack_30);
  if (lVar1 != 0) {
    func_0x000100560688(param_1,&PTR_DAT_1107c6b90);
  }
  return 1;
}



/* Entry: 104adb7b8; end: 104adb86b;  */

void FUN_104adb7b8(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [72];
  
  func_0x000100466e48(auStack_68,0);
  FUN_104abe204();
  FUN_104ac877c(0);
  if (-1 < (int)uRam00000001136a22ec) {
    puVar4 = (undefined8 *)((ulong)uRam00000001136a22ec * 0x10 + 0x1136a22f8);
    lVar3 = (ulong)uRam00000001136a22ec + 1;
    do {
      if ((code *)*puVar4 != (code *)0x0) {
        (*(code *)*puVar4)();
      }
      puVar4 = puVar4 + -2;
      lVar2 = lVar3 + -1;
      bVar1 = 0 < lVar3;
      lVar3 = lVar2;
    } while (lVar2 != 0 && bVar1);
  }
  FUN_104abdec8();
  FUN_104a6fc54();
  FUN_104ab1fc4();
  FUN_104a6f6dc();
  func_0x000100467a48(auStack_68);
  uRam00000001136a2af8 = 0;
  func_0x000104a6f52c(uRam00000001136a2b00);
  return;
}



/* Entry: 104adb86c; end: 104adb8cf;  */

void FUN_104adb86c(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001136a2af0;
  func_0x000100460448(uRam00000001136a2af0);
  iRam00000001136a22e8 = iRam00000001136a22e8 + -1;
  if (iRam00000001136a22e8 == 0) {
    FUN_104adb7b8();
  }
  func_0x000100466b80(uVar1);
  return;
}



/* Entry: 104adb8d0; end: 104adb8d7;  */

undefined1  [16]
FUN_104adb8d0(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104adb8d8; end: 104adb97b;  */

void FUN_104adb8d8(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_40;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100479434(param_2,"grpc.lame_filter_error",0x16);
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar3 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104adb9c8(&ppuStack_38,&uStack_40);
  param_1[2] = uStack_30;
  param_1[3] = uStack_28;
  *param_1 = 0;
  param_1[1] = &PTR_DAT_1107c72b0;
  ppuStack_38 = &PTR_DAT_1107c72b0;
  uStack_30 = 0x36;
  uStack_28 = 0;
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104adb97c; end: 104adb9c7;  */

undefined8 * FUN_104adb97c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_1107c72b0;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_104adbfc8();
  }
  if ((param_1[1] & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104adb9c8; end: 104adba6b;  */

undefined8 * FUN_104adb9c8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_1107c72b0;
  param_1[1] = *param_2;
  *param_2 = 0x36;
  lVar1 = 0x70;
  __Znwm();
  func_0x000100460318();
  *(char **)(lVar1 + 0x40) = "lame_client";
  *(undefined4 *)(lVar1 + 0x48) = 4;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 **)(lVar1 + 0x58) = (undefined8 *)(lVar1 + 0x60);
  param_1[2] = lVar1;
  return param_1;
}



/* Entry: 104adba6c; end: 104adbaf3;  */

void FUN_104adba6c(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uStack_28;
  
  FUN_104a91cc8(&uStack_28,param_2 + 8);
  ppuVar4 = &PTR___tlv_bootstrap_11340d8b8;
  (*(code *)PTR___tlv_bootstrap_11340d8b8)();
  puVar5 = (ulong *)*ppuVar4;
  do {
    uVar6 = *puVar5;
    uVar1 = uVar6 + 0x10;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar3) {
      *puVar5 = uVar1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar5[2] < uVar1) {
    func_0x0001004bbee0(puVar5,0x10);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar6 + 0x30);
  }
  *puVar5 = (ulong)&PTR_FUN_1107c3e30;
  puVar5[1] = uStack_28;
  *param_1 = puVar5;
  return;
}



/* Entry: 104adbaf4; end: 104adbafb;  */

undefined8 FUN_104adbaf4(void)

{
  return 1;
}



/* Entry: 104adbafc; end: 104adbd13;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_104adbafc(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong auStack_98 [5];
  ulong auStack_70 [3];
  undefined1 uStack_51;
  ulong uStack_50;
  undefined1 uStack_41;
  undefined8 *puStack_40;
  ulong *puStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100460448(uVar3);
  puVar1 = (undefined8 *)param_2[1];
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = *(long *)(param_1 + 0x10);
    param_2[1] = 0;
    puStack_40 = puVar1;
    func_0x0001008de004(lVar2 + 0x40,(int)param_2[2],&puStack_40);
    puVar1 = puStack_40;
    puStack_40 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  if (param_2[3] != 0) {
    FUN_104add5ec(*(long *)(param_1 + 0x10) + 0x40);
  }
  func_0x000100466b80(uVar3);
  lVar2 = param_2[0xe];
  if (lVar2 != 0) {
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[0] = 0;
    FUN_104ab5920(&uStack_50,2,"lame client channel",0x13,&uStack_51,auStack_70);
    func_0x0001004bd7e8(&uStack_41,lVar2,&uStack_50);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_38 = auStack_70;
    func_0x000100482b64(&puStack_38);
  }
  lVar2 = param_2[0xf];
  if (lVar2 != 0) {
    auStack_98[2] = 0;
    auStack_98[3] = 0;
    auStack_98[1] = 0;
    FUN_104ab5920(auStack_98 + 4,2,"lame client channel",0x13,&uStack_51,auStack_98 + 1);
    func_0x0001004bd7e8(&uStack_41,lVar2,auStack_98 + 4);
    if ((auStack_98[4] & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_38 = auStack_98 + 1;
    func_0x000100482b64(&puStack_38);
  }
  if (*param_2 != 0) {
    auStack_98[0] = 0;
    func_0x0001004bd7e8(&puStack_38,*param_2,auStack_98);
    if ((auStack_98[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  return 1;
}



/* Entry: 104adbd14; end: 104adbd2b;  */

void FUN_104adbd14(undefined4 *param_1,undefined8 param_2)

{
  *param_1 = 2;
  *(char **)(param_1 + 2) = "grpc.lame_filter_error";
  *(undefined8 *)(param_1 + 4) = param_2;
  *(undefined ***)(param_1 + 6) = &PTR_FUN_1107c72e0;
  return;
}



/* Entry: 104adbd2c; end: 104adbf7b;  */

long * FUN_104adbd2c(undefined8 param_1,int param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined4 uStack_a8;
  long lStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined1 auStack_78 [72];
  
  func_0x000100460de4(auStack_78);
  iVar3 = 2;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  if (lRam0000000113815be8 == 0) {
    func_0x000100472138();
  }
  func_0x000100477994(&lStack_a0);
  uVar8 = 8;
  __Znwm();
  uVar9 = param_3;
  _strlen(param_3);
  func_0x00010047ad8c(uVar8,iVar3,param_3,uVar9);
  ppuStack_b8 = &PTR_FUN_1107c72e0;
  uStack_a8 = 2;
  uStack_c0 = uVar8;
  func_0x000100477f30(&uStack_90,&lStack_a0,"grpc.lame_filter_error",0x16,&uStack_c0);
  func_0x000100478948(&uStack_c0);
  plVar6 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
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
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plStack_c8 = plStack_88;
  uStack_d0 = uStack_90;
  uStack_90 = 0;
  plStack_88 = (long *)0x0;
  func_0x00010047cc18(&lStack_a0,param_1,&uStack_d0,2,0);
  plVar6 = plStack_c8;
  if (plStack_c8 != (long *)0x0) {
    plVar1 = plStack_c8 + 1;
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
      (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  plVar6 = plStack_98;
  if (lStack_a0 == 0) {
    plStack_98 = (long *)0x0;
    func_0x000100487ea0(&lStack_a0);
    plVar1 = plStack_88;
    if (plStack_88 != (long *)0x0) {
      plVar2 = plStack_88 + 1;
      do {
        lVar10 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar10 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar10 == 0) {
        (**(code **)(*plStack_88 + 0x10))(plStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    func_0x000100467a48(auStack_78);
    return plVar6;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/lame_client.cc"
                      ,0x97,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x104adbf14);
  (*pcVar7)();
}



/* Entry: 104adbf7c; end: 104adbfc7;  */

void FUN_104adbf7c(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_DAT_1107c72b0;
  lVar1 = param_1[2];
  param_1[2] = 0;
  if (lVar1 != 0) {
    FUN_104adbfc8();
  }
  if ((param_1[1] & 1) != 0) {
    func_0x00010084dad0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104adbfc8; end: 104adc00b;  */

void FUN_104adbfc8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_104add5e8(param_2 + 0x40);
    func_0x0001005a5f48(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104adc00c; end: 104adc04f;  */

void FUN_104adc00c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  int *piVar5;
  
  puVar3 = (ulong *)0x8;
  __Znwm();
  uVar4 = *param_1;
  *puVar3 = uVar4;
  if ((uVar4 & 1) != 0) {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 104adc050; end: 104adc08f;  */

void FUN_104adc050(ulong *param_1)

{
  if (param_1 != (ulong *)0x0) {
    if ((*param_1 & 1) != 0) {
      func_0x00010084dad0();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 104adc090; end: 104adc0ab;  */

uint FUN_104adc090(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 < param_1);
  if (param_1 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Entry: 104adc0ac; end: 104adc1ab;  */

void FUN_104adc0ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = *(long **)(param_2 + 8);
  func_0x0001008dd084(alStack_68,param_5);
  (**(code **)(*plVar3 + 8))(param_1,plVar3,param_3,param_4,alStack_68);
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plVar3 = alStack_68;
LAB_104adc134:
    (**(code **)(*plVar3 + lVar2 * 8))();
  }
  else {
    plVar3 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      lVar2 = 5;
      goto LAB_104adc134;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if (plStack_50 == alStack_68) {
    lVar2 = 4;
    plStack_50 = alStack_68;
  }
  else {
    if (plStack_50 == (long *)0x0) goto LAB_104adc1a4;
    lVar2 = 5;
  }
  (**(code **)(*plStack_50 + lVar2 * 8))();
LAB_104adc1a4:
  __Unwind_Resume();
  plVar1 = (long *)plVar3[1];
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,param_3);
  return;
}



/* Entry: 104adc1ac; end: 104adc237;  */

void FUN_104adc1ac(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x10))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008db094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104adc238; end: 104adc23b;  */

undefined8 * FUN_104adc238(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_1107c4cb8;
  param_1[1] = &PTR_FUN_1107c4d10;
  if (param_1[0x16] == 0) {
    if ((param_1[0x14] & 1) != 0) {
      func_0x00010084dad0();
    }
    func_0x0001006153ac(param_1 + 0xc);
    (**(code **)(*(long *)param_1[0xb] + 8))();
    *param_1 = &PTR_FUN_1107c4c40;
    param_1[1] = &PTR_FUN_1107c4c98;
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/channel/promise_based_filter.cc"
                      ,0x1e5,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100837134);
  (*pcVar1)();
}



/* Entry: 104adc23c; end: 104adc24f;  */

void FUN_104adc23c(void)

{
  func_0x000100837090();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104adc250; end: 104adc257;  */

void FUN_104adc250(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  plVar3 = (long *)(lVar4 + 0x48);
  do {
    lVar6 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 == 0) {
    return;
  }
  func_0x000107c2c17c();
  lVar6 = *(long *)(lVar4 + 0x10);
  plVar3 = (long *)**(undefined8 **)(lVar4 + 8);
  lVar4 = param_2;
  func_0x000100611dc4();
  if (lVar4 == 0) {
    FUN_104abe96c();
    if (param_2 == 0) {
      return;
    }
    puVar5 = (undefined8 *)(*plVar3 + 0x28);
  }
  else {
    puVar5 = (undefined8 *)(*plVar3 + 0x20);
    param_2 = lVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100611e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(plVar3,lVar6 + 0x200,param_2);
  return;
}



/* Entry: 104adc258; end: 104adc2e7;  */

void FUN_104adc258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uStack_30;
  undefined1 uStack_21;
  
  plVar2 = *(long **)(param_1 + 0x10);
  puVar1 = (undefined8 *)plVar2[7];
  plVar2[7] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  (**(code **)(*plVar2 + 8))(plVar2);
  uStack_30 = 0;
  func_0x0001004bd7e8(&uStack_21,param_3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104adc2e8; end: 104adc30f;  */

void FUN_104adc2e8(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  FUN_104adc310(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 104adc310; end: 104adc453;  */

ulong * FUN_104adc310(undefined8 *param_1,ulong *param_2,long param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  long lVar9;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  ulong auStack_50 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_4 + 0x14) == 1) {
    func_0x000100560184(auStack_60,*(undefined8 *)(param_4 + 8));
    FUN_104adb8d8(auStack_50,auStack_60);
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar9 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
      }
    }
    uVar4 = uStack_38;
    puVar7 = *(undefined8 **)(param_3 + 8);
    if (auStack_50[0] == 0) {
      *puVar7 = &PTR_DAT_1107c72b0;
      puVar7[1] = uStack_40;
      uStack_40 = 0x36;
      uStack_38 = 0;
      puVar7[2] = uVar4;
      *param_1 = 0;
    }
    else {
      *puVar7 = &PTR_DAT_1107c0cf0;
      uStack_68 = auStack_50[0];
      if ((auStack_50[0] & 1) != 0) {
        piVar8 = (int *)(auStack_50[0] - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar8,0x10);
          if (bVar3) {
            *piVar8 = *piVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      FUN_104addba0(param_1,&uStack_68);
      if ((uStack_68 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    puVar5 = auStack_50;
    FUN_104adc454(puVar5);
    return puVar5;
  }
  func_0x00010bdadeac();
  FUN_104bd46a0();
  func_0x0001004bdf74(&uStack_68);
  FUN_104adc454(auStack_50);
  __Unwind_Resume();
  if (*param_2 == 0) {
    uVar6 = param_2[3];
    param_2[1] = (ulong)&PTR_DAT_1107c72b0;
    param_2[3] = 0;
    if (uVar6 != 0) {
      FUN_104adbfc8();
    }
    if ((param_2[2] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else if ((*param_2 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_2;
}



/* Entry: 104adc454; end: 104adc4bb;  */

ulong * FUN_104adc454(ulong *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    uVar1 = param_1[3];
    param_1[1] = (ulong)&PTR_DAT_1107c72b0;
    param_1[3] = 0;
    if (uVar1 != 0) {
      FUN_104adbfc8();
    }
    if ((param_1[2] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104adc4bc; end: 104adc4db;  */

void FUN_104adc4bc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000104adc4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_2 + 8))();
  return;
}



/* Entry: 104adc4dc; end: 104adc523;  */

void FUN_104adc4dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  (**(code **)(*plVar1 + 0x18))();
  if (((ulong)plVar1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104aab120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x58))((long *)(param_1 + 0x10),param_2);
  return;
}



/* Entry: 104adc524; end: 104adc53f;  */

void FUN_104adc524(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 104adc540; end: 104adc5ef;  */

void FUN_104adc540(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plStack_28;
  
  plStack_28 = *(long **)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar5 = *plStack_28;
  if (lVar5 == 0) {
    plStack_28 = (long *)0x0;
  }
  else {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plStack_28 = (long *)*plStack_28;
  }
  FUN_104adcae0(uVar2,param_2,param_3,&plStack_28);
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_28 + 0x10))();
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 104adc5f0; end: 104adc5f7;  */

long * FUN_104adc5f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((int)plVar5[2] != 1) {
    func_0x000100837a1c(plVar5 + 0x15);
    func_0x00010061cdc4(plVar5[0x10]);
    if ((plVar5[0x2a] & 1U) != 0) {
      func_0x00010084dad0();
    }
    if ((plVar5[0x23] & 1U) != 0) {
      func_0x00010084dad0();
    }
    if ((char)plVar5[0xc] != '\0') {
      func_0x0001004b6d90(plVar5 + 8);
    }
    if ((char)plVar5[7] != '\0') {
      func_0x0001004b6d90(plVar5 + 3);
    }
    plVar6 = (long *)*plVar5;
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    return plVar5;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                      ,0x4aa,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104add144);
  (*pcVar4)();
}



/* Entry: 104adc5f8; end: 104adc637;  */

long * FUN_104adc5f8(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (*(int *)(param_3 + 0x10) == 0) {
    func_0x00010bdadf04();
  }
  else if (*(int *)(param_3 + 0x14) == 0) {
    puVar9 = (undefined8 *)param_2[1];
    puVar9[9] = 0;
    puVar9[8] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[3] = 0;
    puVar9[2] = 0;
    *param_1 = 0;
    return param_2;
  }
  func_0x00010bdadf38();
  plVar5 = (long *)param_2[1];
  FUN_104adcaa0(plVar5 + 5,0);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    if ((*(long *)(lVar7 + 0x18) != 0) && (plVar5[0xb] != 0)) {
      FUN_104aacfe4();
      lVar7 = *plVar5;
    }
    func_0x000100460448(lVar7 + 0x60);
    if ((char)plVar5[4] != '\0') {
      lVar8 = *plVar5;
      plVar6 = (long *)plVar5[3];
      lVar2 = *plVar6;
      *(long *)(lVar2 + 8) = plVar6[1];
      *(long *)plVar6[1] = lVar2;
      *(long *)(lVar8 + 0x170) = *(long *)(lVar8 + 0x170) + -1;
      __ZdlPv();
      if ((char)plVar5[4] != '\0') {
        *(undefined1 *)(plVar5 + 4) = 0;
      }
    }
    FUN_104adc640(*plVar5);
    func_0x000100466b80(lVar7 + 0x60);
  }
  FUN_104adcaa0(plVar5 + 5,0);
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return plVar5;
}



/* Entry: 104adc638; end: 104adc63f;  */

long * FUN_104adc638(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = *(long **)(param_1 + 8);
  FUN_104adcaa0(plVar5 + 5,0);
  lVar7 = *plVar5;
  if (lVar7 != 0) {
    if ((*(long *)(lVar7 + 0x18) != 0) && (plVar5[0xb] != 0)) {
      FUN_104aacfe4();
      lVar7 = *plVar5;
    }
    func_0x000100460448(lVar7 + 0x60);
    if ((char)plVar5[4] != '\0') {
      lVar8 = *plVar5;
      plVar6 = (long *)plVar5[3];
      lVar2 = *plVar6;
      *(long *)(lVar2 + 8) = plVar6[1];
      *(long *)plVar6[1] = lVar2;
      *(long *)(lVar8 + 0x170) = *(long *)(lVar8 + 0x170) + -1;
      __ZdlPv();
      if ((char)plVar5[4] != '\0') {
        *(undefined1 *)(plVar5 + 4) = 0;
      }
    }
    FUN_104adc640(*plVar5);
    func_0x000100466b80(lVar7 + 0x60);
  }
  FUN_104adcaa0(plVar5 + 5,0);
  plVar6 = (long *)plVar5[1];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  plVar6 = (long *)*plVar5;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  return plVar5;
}



/* Entry: 104adc640; end: 104adc837;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_104adc640(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong auStack_78 [4];
  undefined1 uStack_51;
  ulong uStack_50;
  ulong *puStack_48;
  
  if ((*(int *)(param_1 + 0x138) == 0) && (*(char *)(param_1 + 0x13c) == '\0')) {
    func_0x000100460448(param_1 + 0xa0);
    auStack_78[2] = 0;
    auStack_78[3] = 0;
    auStack_78[1] = 0;
    FUN_104ab5920(&uStack_50,2,"Server Shutdown",0xf,&uStack_51,auStack_78 + 1);
    puVar7 = &uStack_50;
    FUN_104adc838(param_1);
    if ((uStack_50 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_48 = auStack_78 + 1;
    func_0x000100482b64(&puStack_48);
    func_0x000100466b80(param_1 + 0xa0);
    if ((*(long *)(param_1 + 0x170) == 0) &&
       (*(ulong *)(param_1 + 0x188) <= *(ulong *)(param_1 + 400))) {
      *(undefined1 *)(param_1 + 0x13c) = 1;
      puVar9 = *(undefined8 **)(param_1 + 0x140);
      puVar2 = *(undefined8 **)(param_1 + 0x148);
      if (puVar9 != puVar2) {
        plVar1 = (long *)(param_1 + 8);
        do {
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          auStack_78[0] = 0;
          func_0x0001008324d0(puVar9[1],*puVar9,auStack_78,FUN_104adc950,param_1,puVar9 + 2,0);
          if ((auStack_78[0] & 1) != 0) {
            func_0x00010084dad0();
          }
          puVar9 = puVar9 + 7;
        } while (puVar9 != puVar2);
      }
    }
    else {
      uVar5 = 1;
      func_0x000100467380();
      func_0x00010046778c();
      uVar6 = 1;
      uVar8 = 3;
      func_0x000104a6f56c(1,3);
      func_0x000100466678(uVar5,puVar7,uVar6,uVar8);
      if (-1 < (int)uVar5) {
        uVar6 = 1;
        func_0x000100467380();
        *(undefined8 *)(param_1 + 0x198) = uVar6;
        *(ulong **)(param_1 + 0x1a0) = puVar7;
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                            ,0x2db,0,
                            "Waiting for %lu channels and %lu/%lu listeners to be destroyed before shutting down server"
                           );
      }
    }
  }
  return;
}



/* Entry: 104adc838; end: 104adc94f;  */

void FUN_104adc838(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  ulong uStack_40;
  ulong uStack_38;
  
  if (*(char *)(param_1 + 0x58) != '\0') {
    plVar4 = *(long **)(param_1 + 0x130);
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar6 = (int *)(uStack_38 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar4 + 0x18))(plVar4,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    (**(code **)(**(long **)(param_1 + 0x130) + 0x10))();
    plVar1 = *(long **)(param_1 + 0x120);
    for (plVar4 = *(long **)(param_1 + 0x118); plVar4 != plVar1; plVar4 = plVar4 + 1) {
      plVar5 = *(long **)(*plVar4 + 0x38);
      uStack_40 = *param_2;
      if ((uStack_40 & 1) != 0) {
        piVar6 = (int *)(uStack_40 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
          if (bVar3) {
            *piVar6 = *piVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      (**(code **)(*plVar5 + 0x18))(plVar5,&uStack_40);
      if ((uStack_40 & 1) != 0) {
        func_0x00010084dad0();
      }
      (**(code **)(**(long **)(*plVar4 + 0x38) + 0x10))();
    }
  }
  return;
}



/* Entry: 104adc950; end: 104adc97b;  */

void FUN_104adc950(long *param_1)

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
  if (lVar4 + -1 != 0 || param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104adc978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 104adc97c; end: 104adca9f;  */

long * FUN_104adc97c(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  FUN_104adcaa0(param_1 + 5,0);
  lVar6 = *param_1;
  if (lVar6 != 0) {
    if ((*(long *)(lVar6 + 0x18) != 0) && (param_1[0xb] != 0)) {
      FUN_104aacfe4();
      lVar6 = *param_1;
    }
    func_0x000100460448(lVar6 + 0x60);
    if ((char)param_1[4] != '\0') {
      lVar7 = *param_1;
      plVar5 = (long *)param_1[3];
      lVar2 = *plVar5;
      *(long *)(lVar2 + 8) = plVar5[1];
      *(long *)plVar5[1] = lVar2;
      *(long *)(lVar7 + 0x170) = *(long *)(lVar7 + 0x170) + -1;
      __ZdlPv();
      if ((char)param_1[4] != '\0') {
        *(undefined1 *)(param_1 + 4) = 0;
      }
    }
    FUN_104adc640(*param_1);
    func_0x000100466b80(lVar6 + 0x60);
  }
  FUN_104adcaa0(param_1 + 5,0);
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 104adcaa0; end: 104adcadf;  */

void FUN_104adcaa0(long *param_1,long param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    lStack_28 = lVar1;
    FUN_104add1c8(&lStack_28);
    __ZdlPv(lVar1);
  }
  return;
}



/* Entry: 104adcae0; end: 104adcba7;  */

undefined8 * FUN_104adcae0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *param_1 = *param_4;
  *param_4 = 0;
  uVar1 = param_2;
  FUN_104ad8dd0();
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x2a] = 0;
  param_1[0xd] = 0x7fffffffffffffff;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x2f] = *(undefined8 *)(param_3 + 0x38);
  param_1[0x1f] = FUN_104adcba8;
  param_1[0x20] = param_2;
  param_1[0x21] = 0;
  param_1[0x26] = FUN_104adceb0;
  param_1[0x27] = param_2;
  param_1[0x28] = 0;
  return param_1;
}



/* Entry: 104adcba8; end: 104adceaf;  */

long * FUN_104adcba8(long param_1,ulong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong *puVar7;
  uint *puVar8;
  long lVar9;
  byte *pbVar10;
  int *piVar11;
  ulong uVar12;
  long *plVar13;
  ulong *puVar14;
  long lVar15;
  long *unaff_x22;
  long *plStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_d8;
  ulong *puStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  undefined1 uStack_99;
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar15 = *(long *)(param_1 + 0x10);
  if (*param_2 == 0) {
    puVar8 = *(uint **)(lVar15 + 0xe0);
    bVar1 = (*puVar8 & 1) != 0;
    if (bVar1) {
      uStack_88 = *(undefined8 *)(puVar8 + 0x76);
      plStack_90 = *(long **)(puVar8 + 0x74);
      uStack_78 = *(undefined8 *)(puVar8 + 0x7a);
      uStack_80 = *(undefined8 *)(puVar8 + 0x78);
      puVar8[0x76] = 0;
      puVar8[0x77] = 0;
      puVar8[0x74] = 0;
      puVar8[0x75] = 0;
      puVar8[0x7a] = 0;
      puVar8[0x7b] = 0;
      puVar8[0x78] = 0;
      puVar8[0x79] = 0;
      *puVar8 = *puVar8 & 0xfffffffe;
      func_0x0001004b6d90(puVar8 + 0x74);
    }
    else {
      plStack_90 = (long *)((ulong)plStack_90 & 0xffffffffffffff00);
    }
    cStack_70 = bVar1;
    func_0x0001004b75ec(lVar15 + 0x18,&plStack_90);
    if ((cStack_70 != '\0') && ((long *)0x1 < plStack_90)) {
      do {
        lVar9 = *plStack_90;
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(plStack_90,0x10);
        if (bVar1) {
          *plStack_90 = lVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar9 + -1 == 0) {
        (*(code *)plStack_90[1])();
      }
    }
    pbVar10 = *(byte **)(lVar15 + 0xe0);
    if ((*pbVar10 >> 1 & 1) != 0) {
      plVar13 = *(long **)(pbVar10 + 0x1b0);
      if ((long *)0x1 < plVar13) {
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar1) {
            *plVar13 = *plVar13 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar3 = (undefined8 *)(lVar15 + 0x40);
      uStack_88 = *(undefined8 *)(pbVar10 + 0x1b8);
      plStack_90 = *(long **)(pbVar10 + 0x1b0);
      uStack_78 = *(undefined8 *)(pbVar10 + 0x1c8);
      uStack_80 = *(undefined8 *)(pbVar10 + 0x1c0);
      if (*(char *)(lVar15 + 0x60) != '\0') {
        func_0x0001004b6d90();
        *(undefined1 *)(lVar15 + 0x60) = 0;
      }
      puVar3[1] = uStack_88;
      *puVar3 = plStack_90;
      puVar3[3] = uStack_78;
      puVar3[2] = uStack_80;
      *(undefined1 *)(lVar15 + 0x60) = 1;
    }
  }
  if ((*(byte *)(*(long *)(lVar15 + 0xe0) + 1) >> 3 & 1) != 0) {
    *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(*(long *)(lVar15 + 0xe0) + 0x180);
  }
  if ((*(char *)(lVar15 + 0x60) == '\0') || (*(char *)(lVar15 + 0x38) == '\0')) {
    plStack_90 = (long *)*param_2;
    if (((ulong)plStack_90 & 1) != 0) {
      piVar11 = (int *)((long)plStack_90 + -1);
      do {
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar1) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba878(&uStack_98,2,"Missing :authority or :path",0x1b,&uStack_99,1,&plStack_90);
    uVar4 = *param_2;
    if (uStack_98 == uVar4) {
LAB_104adcd40:
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    else {
      *param_2 = uStack_98;
      uStack_98 = 0x36;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
        uVar4 = uStack_98;
        goto LAB_104adcd40;
      }
    }
    uVar4 = *(ulong *)(lVar15 + 0x118);
    uVar12 = *param_2;
    if (uVar12 != uVar4) {
      if ((uVar12 & 1) != 0) {
        piVar11 = (int *)(uVar12 - 1);
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar1) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = *param_2;
      }
      *(ulong *)(lVar15 + 0x118) = uVar12;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    if (((ulong)plStack_90 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  puVar14 = *(ulong **)(lVar15 + 0x110);
  *(undefined8 *)(lVar15 + 0x110) = 0;
  if (*(char *)(lVar15 + 0x120) != '\0') {
    uVar5 = *(undefined8 *)(lVar15 + 0x178);
    uStack_a8 = *(ulong *)(lVar15 + 0x150);
    if ((uStack_a8 & 1) != 0) {
      piVar11 = (int *)(uStack_a8 - 1);
      do {
        cVar2 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar1) {
          *piVar11 = *piVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x0001004bd618(uVar5,lVar15 + 0x128,&uStack_a8,
                        "continue server recv_trailing_metadata_ready");
    if ((uStack_a8 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  plStack_b0 = (long *)*param_2;
  if (((ulong)plStack_b0 & 1) != 0) {
    piVar11 = (int *)((long)plStack_b0 - 1);
    do {
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar1) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar7 = puVar14;
  func_0x00010082b8d4(&plStack_90,puVar14,&plStack_b0);
  plVar13 = plStack_b0;
  if (((ulong)plStack_b0 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return plVar13;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&plStack_90);
  }
  plVar6 = plVar13;
  __Unwind_Resume();
  pcStack_b8 = FUN_104adceb0;
  lVar9 = plVar6[2];
  uStack_d8 = lVar15;
  puStack_d0 = puVar14;
  plStack_c8 = plVar13;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (*(long *)(lVar9 + 0x110) != 0) {
    uVar4 = *(ulong *)(lVar9 + 0x150);
    uVar12 = *puVar7;
    if (uVar12 != uVar4) {
      if ((uVar12 & 1) != 0) {
        piVar11 = (int *)(uVar12 - 1);
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar1) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = *puVar7;
      }
      *(ulong *)(lVar9 + 0x150) = uVar12;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(undefined1 *)(lVar9 + 0x120) = 1;
    *(code **)(lVar9 + 0x130) = FUN_104adceb0;
    *(long **)(lVar9 + 0x138) = plVar6;
    *(undefined8 *)(lVar9 + 0x140) = 0;
    plVar13 = *(long **)(lVar9 + 0x178);
    do {
      lVar9 = *plVar13;
      lVar15 = lVar9 + -1;
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar1) {
        *plVar13 = lVar15;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar15 != 0) {
      if (lVar9 == 0) {
        func_0x000107c2c340(plVar13,
                            "deferring server recv_trailing_metadata_ready until after recv_initial_metadata_ready"
                           );
        FUN_104bd46a0();
        FUN_104bd46a0();
        func_0x0001004bdf74(&uStack_e8);
        func_0x0001004bdf74(&stack0xffffffffffffff20);
        func_0x000107c60bd8(plVar13);
        return plRam0000000113815c70;
      }
      plVar13 = plVar13 + 1;
      plVar6 = plVar13;
      func_0x0001004920d0(plVar13,(long)&uStack_d8 + 7);
      while (plVar6 == (long *)0x0) {
        plVar6 = plVar13;
        func_0x0001004920d0(plVar13,(long)&uStack_d8 + 7);
      }
      func_0x0001004bd8dc(&stack0xffffffffffffff20,plVar6[3]);
      plVar6[3] = 0;
      if (((ulong)unaff_x22 & 1) != 0) {
        piVar11 = (int *)((long)unaff_x22 + -1);
        do {
          cVar2 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar1) {
            *piVar11 = *piVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x0001004bd778();
      if (((ulong)unaff_x22 & 1) != 0) {
        func_0x00010084dad0(unaff_x22);
      }
      plVar13 = unaff_x22;
      if (((ulong)unaff_x22 & 1) != 0) {
        func_0x00010084dad0();
        plVar13 = unaff_x22;
      }
    }
    return plVar13;
  }
  uStack_f0 = *puVar7;
  if ((uStack_f0 & 1) != 0) {
    piVar11 = (int *)(uStack_f0 - 1);
    do {
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar1) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_f8 = *(ulong *)(lVar9 + 0x118);
  if ((uStack_f8 & 1) != 0) {
    piVar11 = (int *)(uStack_f8 - 1);
    do {
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar1) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x0001008306c4(&uStack_e8,&uStack_f0,&uStack_f8);
  uVar4 = *puVar7;
  if (uStack_e8 != uVar4) {
    *puVar7 = uStack_e8;
    uStack_e8 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104adcfc8;
    func_0x00010084dad0();
    uVar4 = uStack_e8;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104adcfc8:
  if ((uStack_f8 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_f0 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar5 = *(undefined8 *)(lVar9 + 0x148);
  plStack_100 = (long *)*puVar7;
  if (((ulong)plStack_100 & 1) != 0) {
    piVar11 = (int *)((long)plStack_100 - 1);
    do {
      cVar2 = '\x01';
      bVar1 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar1) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x00010082b8d4(&uStack_e8,uVar5,&plStack_100);
  if (((ulong)plStack_100 & 1) != 0) {
    func_0x00010084dad0();
  }
  return plStack_100;
}



/* Entry: 104adceb0; end: 104add077;  */

long * FUN_104adceb0(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *unaff_x22;
  long *plStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar10 + 0x110) != 0) {
    uVar4 = *(ulong *)(lVar10 + 0x150);
    uVar8 = *param_2;
    if (uVar8 != uVar4) {
      if ((uVar8 & 1) != 0) {
        piVar9 = (int *)(uVar8 - 1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        uVar8 = *param_2;
      }
      *(ulong *)(lVar10 + 0x150) = uVar8;
      if ((uVar4 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    *(undefined1 *)(lVar10 + 0x120) = 1;
    *(code **)(lVar10 + 0x130) = FUN_104adceb0;
    *(long *)(lVar10 + 0x138) = param_1;
    *(undefined8 *)(lVar10 + 0x140) = 0;
    plVar5 = *(long **)(lVar10 + 0x178);
    do {
      lVar7 = *plVar5;
      lVar10 = lVar7 + -1;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar10;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar10 != 0) {
      if (lVar7 == 0) {
        func_0x000107c2c340(plVar5,
                            "deferring server recv_trailing_metadata_ready until after recv_initial_metadata_ready"
                           );
        FUN_104bd46a0();
        FUN_104bd46a0();
        func_0x0001004bdf74(&uStack_38);
        func_0x0001004bdf74(&stack0xffffffffffffffd0);
        func_0x000107c60bd8(plVar5);
        return plRam0000000113815c70;
      }
      plVar5 = plVar5 + 1;
      plVar3 = plVar5;
      func_0x0001004920d0(plVar5,&stack0xffffffffffffffdf);
      while (plVar3 == (long *)0x0) {
        plVar3 = plVar5;
        func_0x0001004920d0(plVar5,&stack0xffffffffffffffdf);
      }
      func_0x0001004bd8dc(&stack0xffffffffffffffd0,plVar3[3]);
      plVar3[3] = 0;
      if (((ulong)unaff_x22 & 1) != 0) {
        piVar9 = (int *)((long)unaff_x22 + -1);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      func_0x0001004bd778();
      if (((ulong)unaff_x22 & 1) != 0) {
        func_0x00010084dad0(unaff_x22);
      }
      plVar5 = unaff_x22;
      if (((ulong)unaff_x22 & 1) != 0) {
        func_0x00010084dad0();
        plVar5 = unaff_x22;
      }
    }
    return plVar5;
  }
  uStack_40 = *param_2;
  if ((uStack_40 & 1) != 0) {
    piVar9 = (int *)(uStack_40 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uStack_48 = *(ulong *)(lVar10 + 0x118);
  if ((uStack_48 & 1) != 0) {
    piVar9 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x0001008306c4(&uStack_38,&uStack_40,&uStack_48);
  uVar4 = *param_2;
  if (uStack_38 != uVar4) {
    *param_2 = uStack_38;
    uStack_38 = 0x36;
    if ((uVar4 & 1) == 0) goto LAB_104adcfc8;
    func_0x00010084dad0();
    uVar4 = uStack_38;
  }
  if ((uVar4 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104adcfc8:
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar6 = *(undefined8 *)(lVar10 + 0x148);
  plStack_50 = (long *)*param_2;
  if (((ulong)plStack_50 & 1) != 0) {
    piVar9 = (int *)((long)plStack_50 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar2) {
        *piVar9 = *piVar9 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x00010082b8d4(&uStack_38,uVar6,&plStack_50);
  if (((ulong)plStack_50 & 1) != 0) {
    func_0x00010084dad0();
  }
  return plStack_50;
}



/* Entry: 104add078; end: 104add15f;  */

long * FUN_104add078(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  if ((int)param_1[2] != 1) {
    func_0x000100837a1c(param_1 + 0x15);
    func_0x00010061cdc4(param_1[0x10]);
    if ((param_1[0x2a] & 1U) != 0) {
      func_0x00010084dad0();
    }
    if ((param_1[0x23] & 1U) != 0) {
      func_0x00010084dad0();
    }
    if ((char)param_1[0xc] != '\0') {
      func_0x0001004b6d90(param_1 + 8);
    }
    if ((char)param_1[7] != '\0') {
      func_0x0001004b6d90(param_1 + 3);
    }
    plVar5 = (long *)*param_1;
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
        (**(code **)(*plVar5 + 0x10))();
      }
    }
    return param_1;
  }
  func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/surface/server.cc"
                      ,0x4aa,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x104add144);
  (*pcVar4)();
}



/* Entry: 104add160; end: 104add1c7;  */

void FUN_104add160(undefined8 *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = *(byte *)(param_3 + 0x10);
  if ((bVar1 >> 3 & 1) != 0) {
    lVar2 = *(long *)(param_3 + 8);
    if (*(long *)(lVar2 + 0x40) != 0) {
      func_0x00010bdadf8c();
      if (*(long *)*param_1 != 0) {
        FUN_104add208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
        return;
      }
      return;
    }
    param_1[0x1c] = *(undefined8 *)(lVar2 + 0x38);
    param_1[0x22] = *(undefined8 *)(lVar2 + 0x48);
    *(undefined8 **)(lVar2 + 0x40) = param_1 + 0x1d;
    *(undefined8 **)(lVar2 + 0x48) = param_1 + 0x1e;
    bVar1 = *(byte *)(param_3 + 0x10);
  }
  if ((bVar1 >> 5 & 1) != 0) {
    lVar2 = *(long *)(param_3 + 8);
    param_1[0x29] = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 **)(lVar2 + 0x90) = param_1 + 0x25;
  }
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_2 + 0x18))((undefined8 *)(param_2 + 0x18),param_3);
  return;
}



/* Entry: 104add1c8; end: 104add207;  */

void FUN_104add1c8(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_104add208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 104add208; end: 104add25f;  */

void FUN_104add208(long param_1,long param_2)

{
  long lVar1;
  
  for (lVar1 = *(long *)(param_1 + 8); lVar1 != param_2; lVar1 = lVar1 + -0x50) {
    func_0x0001004b6d90(lVar1 + -0x20);
    func_0x0001004b6d90(lVar1 + -0x40);
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 104add260; end: 104add273;  */

undefined1  [16]
FUN_104add260(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104add274; end: 104add41b;  */

long * FUN_104add274(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  long *plStack_68;
  
  puVar4 = (ulong *)0x0;
  func_0x000100467380();
  func_0x00010046778c();
  dVar16 = (double)(long)puVar4 + (double)param_2 * 1e-09;
  dVar15 = 0.0;
  if (0.0 < dVar16) {
    dVar15 = (double)*(long *)(param_1 + 2) / dVar16;
  }
  if (*param_1 != 2) {
    func_0x00010bdadfc0();
    if (4 < (uint)puVar4) {
      pcVar7 = "return \"UNKNOWN\"";
      pcVar9 = 
      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
      ;
      uVar10 = 0x33;
      FUN_104a6e964("return \"UNKNOWN\"",
                    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
                    ,0x33);
      uVar8 = 0x38;
      __Znwm(0x38);
      plVar6 = (long *)((long)pcVar7 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_68 = (long *)pcVar7;
      FUN_104add614(uVar8,&plStack_68,pcVar9,uVar10,(long *)((long)pcVar7 + 0x10));
      if (plStack_68 != (long *)0x0) {
        plVar6 = plStack_68 + 1;
        do {
          lVar11 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar11 + -1 == 0) {
          (**(code **)(*plStack_68 + 0x10))();
        }
      }
      return plStack_68;
    }
    return (long *)(&PTR_DAT_1107c74d8)[(int)(uint)puVar4];
  }
  lVar14 = *(long *)(param_1 + 10);
  lVar11 = *(long *)(param_1 + 2);
  lVar12 = *(long *)(param_1 + 4) * 2;
  lVar13 = SUB168(SEXT816(lVar12) * SEXT816(0x5555555555555556),8);
  if ((lVar11 <= lVar13 - (lVar13 >> 0x3f)) || (dVar15 <= *(double *)(param_1 + 0xe))) {
    if ((9999 < lVar14) || (iVar1 = param_1[0xc], param_1[0xc] = iVar1 + 1, iVar1 < 1))
    goto LAB_104add39c;
    _rand();
    lVar11 = *(long *)(param_1 + 10) +
             (long)((int)(((double)(int)puVar4 * 100.0) / 2147483647.0) + 100);
  }
  else {
    if (lVar11 <= lVar12) {
      lVar11 = lVar12;
    }
    *(long *)(param_1 + 4) = lVar11;
    *(double *)(param_1 + 0xe) = dVar15;
    if (lVar14 == 0x7fffffffffffffff) {
      lVar11 = 0x7fffffffffffffff;
    }
    else {
      lVar11 = -0x8000000000000000;
      if (lVar14 != -0x8000000000000000) {
        lVar11 = lVar14;
        if (lVar14 < 0) {
          lVar11 = lVar14 + 1;
        }
        lVar11 = lVar11 >> 1;
      }
    }
  }
  *(long *)(param_1 + 10) = lVar11;
  if (lVar14 != lVar11) {
    param_1[0xc] = 0;
  }
LAB_104add39c:
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  func_0x000100460dc4();
  uVar5 = *puVar4;
  func_0x0001004671a4();
  plVar6 = (long *)0x7fffffffffffffff;
  if ((((uVar5 != 0x7fffffffffffffff) &&
       (lVar11 = *(long *)(param_1 + 10), lVar11 != 0x7fffffffffffffff)) &&
      (plVar6 = (long *)0x8000000000000000, uVar5 != 0x8000000000000000)) &&
     (lVar11 != -0x8000000000000000)) {
    if ((long)uVar5 < 1) {
      if (lVar11 < (long)(-0x8000000000000000 - uVar5)) {
        return (long *)0x8000000000000000;
      }
    }
    else if ((long)(uVar5 ^ 0x7fffffffffffffff) < lVar11) {
      return (long *)0x7fffffffffffffff;
    }
    plVar6 = (long *)(lVar11 + uVar5);
  }
  return plVar6;
}



/* Entry: 104add41c; end: 104add457;  */

long * FUN_104add41c(uint param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *plStack_48;
  
  if (param_1 < 5) {
    return (long *)(&PTR_DAT_1107c74d8)[(int)param_1];
  }
  pcVar4 = "return \"UNKNOWN\"";
  pcVar6 = 
  "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
  ;
  uVar7 = 0x33;
  FUN_104a6e964("return \"UNKNOWN\"",
                "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/connectivity_state.cc"
                ,0x33);
  uVar5 = 0x38;
  __Znwm(0x38);
  plVar1 = (long *)((long)pcVar4 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_48 = (long *)pcVar4;
  FUN_104add614(uVar5,&plStack_48,pcVar6,uVar7,(long *)((long)pcVar4 + 0x10));
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plStack_48 + 0x10))();
    }
  }
  return plStack_48;
}



/* Entry: 104add458; end: 104add517;  */

void FUN_104add458(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plStack_38;
  
  uVar4 = 0x38;
  __Znwm(0x38);
  plVar1 = param_1 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plStack_38 = param_1;
  FUN_104add614(uVar4,&plStack_38,param_2,param_3,param_1 + 2);
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))();
    }
  }
  return;
}



/* Entry: 104add518; end: 104add5e7;  */

long FUN_104add518(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 8) != 4) {
    plVar3 = *(long **)(param_1 + 0x18);
    while (plVar3 != (long *)(param_1 + 0x20)) {
      uStack_38 = 0;
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  FUN_104add940(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104add5e8; end: 104add5eb;  */

long FUN_104add5e8(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  ulong uStack_38;
  
  if (*(int *)(param_1 + 8) != 4) {
    plVar3 = *(long **)(param_1 + 0x18);
    while (plVar3 != (long *)(param_1 + 0x20)) {
      uStack_38 = 0;
      (**(code **)(*(long *)plVar3[5] + 0x18))((long *)plVar3[5],4,&uStack_38);
      if ((uStack_38 & 1) != 0) {
        func_0x00010084dad0();
      }
      plVar1 = (long *)plVar3[1];
      plVar4 = plVar3;
      if ((long *)plVar3[1] == (long *)0x0) {
        do {
          plVar3 = (long *)plVar4[2];
          bVar2 = (long *)*plVar3 != plVar4;
          plVar4 = plVar3;
        } while (bVar2);
      }
      else {
        do {
          plVar3 = plVar1;
          plVar1 = (long *)*plVar3;
        } while ((long *)*plVar3 != (long *)0x0);
      }
    }
  }
  FUN_104add940(param_1 + 0x18,*(undefined8 *)(param_1 + 0x20));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104add5ec; end: 104add613;  */

void FUN_104add5ec(long param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  FUN_104add9a4(param_1 + 0x18,&uStack_18);
  return;
}



/* Entry: 104add614; end: 104add7c3;  */

undefined8 *
FUN_104add614(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,ulong *param_4,
             long *param_5)

{
  undefined ***pppuVar1;
  char cVar2;
  bool bVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined ***pppuStack_68;
  undefined1 uStack_59;
  undefined **ppuStack_58;
  undefined8 *puStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  uVar8 = *param_4;
  param_1[2] = uVar8;
  if ((uVar8 & 1) != 0) {
    piVar9 = (int *)(uVar8 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*param_5 == 0) {
    puVar7 = param_1 + 3;
    param_1[4] = FUN_104add7c4;
    param_1[5] = param_1;
    param_1[6] = 0;
    pppuStack_68 = (undefined ***)0x0;
    func_0x0001004bd7e8(&uStack_59,puVar7,&pppuStack_68);
    iVar6 = (int)puVar7;
    pppuVar4 = pppuStack_68;
    if (((ulong)pppuStack_68 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    ppuStack_58 = &PTR_FUN_1107c7468;
    pppuVar4 = &ppuStack_58;
    puStack_50 = param_1;
    pppuStack_40 = &ppuStack_58;
    func_0x0001004be2c8(*param_5,pppuVar4,&uStack_59);
    iVar6 = (int)pppuVar4;
    if (pppuStack_40 == &ppuStack_58) {
      lVar10 = 4;
      pppuVar4 = &ppuStack_58;
    }
    else {
      pppuVar4 = pppuStack_40;
      if (pppuStack_40 == (undefined ***)0x0) goto LAB_104add6fc;
      lVar10 = 5;
    }
    (*(code *)(*pppuVar4)[lVar10])();
  }
LAB_104add6fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  if (iVar6 != 0) {
    FUN_104bd46a0();
    func_0x0001004bdf74(&pppuStack_68);
    func_0x0001004bdf74(param_1 + 2);
    pppuVar5 = (undefined ***)*param_1;
    if (pppuVar5 != (undefined ***)0x0) {
      pppuVar1 = pppuVar5 + 1;
      do {
        ppuVar11 = *pppuVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar3) {
          *pppuVar1 = (undefined **)((long)ppuVar11 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((undefined **)((long)ppuVar11 + -1) == (undefined **)0x0) goto LAB_104add7b4;
    }
  }
  do {
    pppuVar5 = pppuVar4;
    __Unwind_Resume();
LAB_104add7b4:
    (*(code *)(*pppuVar5)[2])();
  } while( true );
}



/* Entry: 104add7c4; end: 104add83b;  */

void FUN_104add7c4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,(int)param_1[1],param_1 + 2);
  if ((param_1[2] & 1U) != 0) {
    func_0x00010084dad0();
  }
  plVar4 = (long *)*param_1;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 104add83c; end: 104add843;  */

void FUN_104add83c(void)

{
  return;
}



/* Entry: 104add844; end: 104add877;  */

void FUN_104add844(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c7468;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104add878; end: 104add89b;  */

void FUN_104add878(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_1107c7468;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104add89c; end: 104add8d7;  */

long FUN_104add89c(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c74c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104add8d8; end: 104add8e3;  */

undefined ** FUN_104add8d8(void)

{
  return &PTR_DAT_1107c74c8;
}



/* Entry: 104add8e4; end: 104add93f;  */

void FUN_104add8e4(undefined8 *param_1)

{
  ulong uStack_28;
  
  uStack_28 = 0;
  FUN_104add7c4(*param_1,&uStack_28);
  if ((uStack_28 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104add940; end: 104add9a3;  */

void FUN_104add940(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    FUN_104add940(param_1,*param_2);
    FUN_104add940(param_1,param_2[1]);
    puVar1 = (undefined8 *)param_2[5];
    param_2[5] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104add9a4; end: 104adda07;  */

undefined8 FUN_104add9a4(long param_1,ulong *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    plVar2 = plVar3;
    do {
      plVar1 = plVar4 + 1;
      if (*param_2 <= (ulong)plVar4[4]) {
        plVar2 = plVar4;
        plVar1 = plVar4;
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
    if ((plVar2 != plVar3) && ((ulong)plVar2[4] <= *param_2)) {
      FUN_104adda08();
      return 1;
    }
  }
  return 0;
}



/* Entry: 104adda08; end: 104adda53;  */

undefined8 FUN_104adda08(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  FUN_104adda54();
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  __ZdlPv(param_2);
  return param_1;
}



/* Entry: 104adda54; end: 104addac3;  */

long * FUN_104adda54(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_104a7ee40(param_1[1]);
  return plVar4;
}



/* Entry: 104addac4; end: 104addb9f;  */

void FUN_104addac4(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 ***pppuVar4;
  int *piVar5;
  ulong uStack_48;
  undefined8 **ppuStack_40;
  ulong uStack_38;
  ulong uStack_30;
  undefined4 uStack_24;
  
  ppuStack_40 = (undefined8 ***)0x0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_48 = *param_2;
  if ((uStack_48 & 1) != 0) {
    piVar5 = (int *)(uStack_48 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  func_0x000100831658(&uStack_48,0x7fffffffffffffff,&uStack_24,&ppuStack_40,0,0);
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  uVar1 = uStack_38;
  pppuVar4 = (undefined8 ***)ppuStack_40;
  if (-1 < (long)uStack_30) {
    uVar1 = uStack_30 >> 0x38;
    pppuVar4 = &ppuStack_40;
  }
  func_0x00010047ad8c(param_1,uStack_24,pppuVar4,uVar1);
  if ((long)uStack_30 < 0) {
    __ZdlPv(ppuStack_40);
  }
  return;
}



/* Entry: 104addba0; end: 104addc9b;  */

void FUN_104addba0(undefined8 *param_1,ulong *param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  undefined1 *puStack_28;
  
  uVar3 = *param_2;
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else {
    if ((uVar3 & 1) == 0) {
      puVar2 = &UNK_10e52c0f3;
      bVar1 = (uVar3 & 3) != 2;
      if (bVar1) {
        puVar2 = (undefined *)0x0;
      }
      uVar3 = 0x1b;
      if (bVar1) {
        uVar3 = 0;
      }
    }
    else if ((char)*(byte *)(uVar3 + 0x1e) < '\0') {
      puVar2 = *(undefined **)(uVar3 + 7);
      uVar3 = *(ulong *)(uVar3 + 0xf);
    }
    else {
      puVar2 = (undefined *)(uVar3 + 7);
      uVar3 = (ulong)*(byte *)(uVar3 + 0x1e);
    }
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_50 = 0;
    FUN_104ab5920(&uStack_30,2,puVar2,uVar3,&uStack_31,&uStack_50);
    func_0x00010ae770f8(param_2);
    FUN_104abaa50(param_1,&uStack_30,3,(long)(int)param_2);
    if ((uStack_30 & 1) != 0) {
      func_0x00010084dad0();
    }
    puStack_28 = (undefined1 *)&uStack_50;
    func_0x000100482b64(&puStack_28);
  }
  return;
}



/* Entry: 104addc9c; end: 104adde07;  */

undefined1 * FUN_104addc9c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int *piVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uStack_70;
  ulong uStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
  ulong uStack_48;
  undefined1 auStack_40 [8];
  ulong **ppuStack_38;
  
  uStack_48 = *param_1;
  if ((uStack_48 & 1) != 0) {
    piVar4 = (int *)(uStack_48 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar3 = &uStack_48;
  func_0x00010084d7f0(puVar3,3,auStack_40);
  if ((uStack_48 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (((ulong)puVar3 & 1) == 0) {
    uStack_68 = *param_1;
    if ((uStack_68 & 1) != 0) {
      piVar4 = (int *)(uStack_68 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_104ab5ea4(&puStack_60,&uStack_68);
    if ((uStack_68 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar3 = puStack_60;
    if (puStack_60 == puStack_58) {
      puVar6 = (ulong *)0x0;
    }
    else {
      do {
        uVar7 = *puVar3;
        if ((uVar7 & 1) != 0) {
          piVar4 = (int *)(uVar7 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar2) {
              *piVar4 = *piVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        puVar6 = &uStack_70;
        uStack_70 = uVar7;
        FUN_104addc9c();
        if ((uVar7 & 1) != 0) {
          func_0x00010084dad0(uVar7);
        }
        puVar3 = puVar3 + 1;
        uVar5 = (uint)puVar6;
        if (puVar3 == puStack_58) {
          uVar5 = 1;
        }
      } while ((uVar5 & 1) == 0);
    }
    ppuStack_38 = &puStack_60;
    func_0x000100482b64(&ppuStack_38);
  }
  else {
    puVar6 = (ulong *)0x1;
  }
  return (undefined1 *)puVar6;
}



/* Entry: 104adde08; end: 104adde0b;  */

undefined8 * FUN_104adde08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107c7510;
  func_0x000100747bac(param_1 + 0xb);
  func_0x0001007483a4(param_1 + 0xb);
  func_0x0001005a5f48(param_1 + 2);
  return param_1;
}



/* Entry: 104adde0c; end: 104addee7;  */

void FUN_104adde0c(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *puVar5;
  ulong uStack_38;
  
  func_0x000100460448(param_1 + 0x10);
  if ((*(char *)(param_1 + 0x50) == '\0') && (*(long *)(param_1 + 0x70) != 0)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    puVar5 = (undefined8 *)(param_1 + 0x60);
    if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
      puVar5 = (undefined8 *)*puVar5;
    }
    plVar3 = (long *)puVar5[*(long *)(param_1 + 0x70) + -1];
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar4 = (int *)(uStack_38 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar3 + 0x10))(plVar3,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 104addee8; end: 104addf8b;  */

void FUN_104addee8(ulong *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  puVar7 = param_1 + 1;
  uVar5 = *param_1;
  puVar8 = puVar7;
  if ((uVar5 & 1) != 0) {
    puVar8 = (ulong *)*puVar7;
  }
  if (1 < uVar5) {
    uVar5 = uVar5 >> 1;
    do {
      while( true ) {
        uVar5 = uVar5 - 1;
        plVar4 = (long *)puVar8[uVar5];
        if (plVar4 != (long *)0x0) break;
LAB_104addf44:
        if (uVar5 == 0) goto LAB_104addf5c;
      }
      plVar1 = plVar4 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 + -1 != 0) goto LAB_104addf44;
      (**(code **)(*plVar4 + 8))();
    } while (uVar5 != 0);
LAB_104addf5c:
    uVar5 = *param_1;
  }
  if ((uVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar7);
  return;
}



/* Entry: 104addf8c; end: 104addfd3;  */

undefined1  [16] FUN_104addf8c(long param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar3 = *(long **)(param_1 + 8);
  plVar1 = (long *)((long)param_2 + ((long)plVar3 - param_4));
  plVar5 = plVar3;
  for (plVar2 = plVar1; plVar2 < param_3; plVar2 = plVar2 + 1) {
    lVar4 = *plVar2;
    *plVar2 = 0;
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  }
  *(long **)(param_1 + 8) = plVar5;
  plVar5 = plVar1;
  while (plVar5 != param_2) {
    plVar5 = plVar5 + -1;
    lVar4 = *plVar5;
    *plVar5 = 0;
    plVar3 = plVar3 + -1;
    plVar2 = (long *)*plVar3;
    *plVar3 = lVar4;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  auVar6._8_8_ = plVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 104addfd4; end: 104ade03b;  */

undefined1  [16] FUN_104addfd4(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = param_2;
  while (plVar3 != param_1) {
    plVar3 = plVar3 + -1;
    lVar2 = *plVar3;
    *plVar3 = 0;
    param_3 = param_3 + -1;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 104ade03c; end: 104ade04f;  */

undefined1  [16] FUN_104ade03c(undefined8 param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  plVar2 = plVar1;
  for (; plVar1 != param_2; plVar1 = plVar1 + 1) {
    lVar3 = *plVar1;
    *plVar1 = 0;
    plVar2 = (long *)*param_3;
    *param_3 = lVar3;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    param_3 = param_3 + 1;
    plVar2 = param_2;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 104ade050; end: 104ade0bf;  */

undefined1  [16] FUN_104ade050(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  plVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar2 = *param_1;
    *param_1 = 0;
    plVar1 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    param_3 = param_3 + 1;
    plVar1 = param_2;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 104ade0c0; end: 104ade0c7;  */

void FUN_104ade0c0(void)

{
  return;
}



/* Entry: 104ade0c8; end: 104ade1ab;  */

void FUN_104ade0c8(long param_1,ulong *param_2)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uStack_38;
  
  func_0x000100460448(param_1 + 0x10);
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    uVar4 = **(undefined8 **)(param_1 + 0x68);
    uStack_38 = *param_2;
    if ((uStack_38 & 1) != 0) {
      piVar5 = (int *)(uStack_38 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
        if (bVar3) {
          *piVar5 = *piVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_104aba5c4(uVar4,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x68);
    uVar4 = *puVar6;
    uVar1 = puVar6[1];
    *puVar6 = 0;
    uVar7 = puVar6[2];
    *(undefined8 *)(param_1 + 0x58) = uVar4;
    *(undefined8 *)(param_1 + 0x60) = uVar7;
    puVar6[2] = 0;
    func_0x00010048650c(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x68) + 8) = 0;
  }
  func_0x000100466b80(param_1 + 0x10);
  return;
}



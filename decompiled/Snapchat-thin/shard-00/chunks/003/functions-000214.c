/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004da0b0; end: 1004da137;  */

void FUN_1004da0b0(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong uStack_30;
  undefined1 uStack_21;
  
  *(code **)(param_1 + 0xa8) = FUN_1004df59c;
  *(undefined8 *)(param_1 + 0xb0) = param_2;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  uStack_30 = *param_3;
  if ((uStack_30 & 1) != 0) {
    piVar3 = (int *)(uStack_30 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_1004bd7e8(&uStack_21,param_1 + 0xa0,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004da138; end: 1004da1db;  */

void FUN_1004da138(undefined8 *param_1,long param_2,long param_3,char *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  char *pcVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    pcVar1 = "";
    uVar2 = 0;
    do {
      func_0x000107c60c5c(param_1,pcVar1,uVar2);
      FUN_1004da1dc(param_6,param_1,param_2);
      param_2 = param_2 + 8;
      pcVar1 = param_4;
      uVar2 = param_5;
    } while (param_2 != param_3);
  }
  return;
}



/* Entry: 1004da1dc; end: 1004da257;  */

void FUN_1004da1dc(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_58;
  long lStack_50;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *param_3;
  if (lVar3 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x000107c613d0();
  }
  plVar2 = &lStack_58;
  lStack_58 = lVar3;
  lStack_50 = lVar1;
  FUN_1004da258();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c60bd8();
  lVar3 = (long)*(char *)((long)param_2 + 0x17);
  if (lVar3 < 0) {
    lVar3 = param_2[1];
  }
  func_0x0001001a5774(param_2,plVar2[1] + lVar3);
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    param_2 = (undefined8 *)*param_2;
  }
  if (plVar2[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)((long)param_2 + lVar3,*plVar2);
    return;
  }
  return;
}



/* Entry: 1004da258; end: 1004da2c7;  */

void FUN_1004da258(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = (long)*(char *)((long)param_1 + 0x17);
  if (lVar1 < 0) {
    lVar1 = param_1[1];
  }
  func_0x0001001a5774(param_1,param_2[1] + lVar1);
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_2[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)((long)param_1 + lVar1,*param_2);
    return;
  }
  return;
}



/* Entry: 1004da2c8; end: 1004da3a7;  */

void FUN_1004da2c8(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)((long)param_2 + 0x17);
  if ((char)bVar1 < '\0') {
    uVar3 = param_2[1];
    if (0x17 < uVar3) {
      param_1[2] = *param_2;
      goto LAB_1004da33c;
    }
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)uVar3;
    param_2 = (undefined8 *)*param_2;
  }
  else {
    uVar3 = (ulong)bVar1;
    if (0x17 < bVar1) {
      param_1[2] = param_2;
LAB_1004da33c:
      param_1[1] = uVar3;
      puVar2 = (undefined8 *)0x28;
      func_0x000107c60e20();
      *puVar2 = 1;
      puVar2[1] = &UNK_104ad7a80;
      uVar4 = *param_2;
      puVar2[3] = param_2[1];
      puVar2[2] = uVar4;
      puVar2[4] = param_2[2];
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_1 = puVar2;
      return;
    }
    *param_1 = 0;
    *(byte *)(param_1 + 1) = bVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)((long)param_1 + 9,param_2);
  return;
}



/* Entry: 1004da3a8; end: 1004da3ef;  */

ulong * FUN_1004da3a8(ulong *param_1)

{
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1[2] = param_1[1];
      func_0x000107c60e14();
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_10084dad0();
  }
  return param_1;
}



/* Entry: 1004da3f0; end: 1004da3f3;  */

void FUN_1004da3f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1004da3f4; end: 1004da4eb;  */

void FUN_1004da3f4(long param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)(param_1 + 8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  ppuStack_48 = &PTR_DAT_1107c17e8;
  lStack_40 = param_1;
  pppuStack_30 = &ppuStack_48;
  FUN_1004be2c8(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x88) + 0x10) + 0x130),&ppuStack_48,
                &uStack_49);
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar5 = &ppuStack_48;
LAB_1004da478:
    (*(code *)(*pppuVar5)[lVar8])();
  }
  else {
    pppuVar5 = pppuStack_30;
    if (pppuStack_30 != (undefined ***)0x0) {
      lVar8 = 5;
      goto LAB_1004da478;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar6 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_1004da4e4;
    lVar8 = 5;
    pppuVar6 = pppuStack_30;
  }
  (*(code *)(*pppuVar6)[lVar8])();
LAB_1004da4e4:
  func_0x000107c60bd8();
  (**(code **)(**pppuVar5 + 0x10))();
  ppuVar7 = *pppuVar5;
  if (ppuVar7 != (undefined **)0x0) {
    ppuVar2 = ppuVar7 + 1;
    do {
      puVar9 = *ppuVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
      if (bVar4) {
        *ppuVar2 = puVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar9 + -1 == (undefined *)0x0) {
      (**(code **)(*ppuVar7 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(pppuVar5);
  return;
}



/* Entry: 1004da4ec; end: 1004da54b;  */

void FUN_1004da4ec(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*(long *)*param_1 + 0x10))();
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
      (**(code **)(*plVar4 + 8))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1004da54c; end: 1004da567;  */

void FUN_1004da54c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_1107c17e8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1004da568; end: 1004da65b;  */

void FUN_1004da568(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong uVar5;
  int *piVar6;
  
  FUN_100460448(param_2 + 0x10);
  if (*(long *)(param_2 + 0x78) != 0) {
    puVar1 = (undefined4 *)
             (*(long *)(*(long *)(param_2 + 0x58) +
                       (*(ulong *)(param_2 + 0x70) >> 5 & 0x7fffffffffffff8)) +
             (*(ulong *)(param_2 + 0x70) & 0xff) * 0x10);
    *param_1 = *puVar1;
    uVar5 = *(ulong *)(puVar1 + 2);
    *(ulong *)(param_1 + 2) = uVar5;
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
    FUN_1004da968(param_2 + 0x50);
    func_0x000100466b80(param_2 + 0x10);
    return;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                ,0x240,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004da62c);
  (*pcVar4)();
}



/* Entry: 1004da65c; end: 1004da8ef;  */

void FUN_1004da65c(long param_1)

{
  char cVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 ****ppppuVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uStack_90;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  byte bStack_71;
  undefined1 auStack_70 [16];
  char cStack_60;
  int aiStack_58 [2];
  ulong uStack_50;
  int iStack_44;
  
  FUN_1004da568(aiStack_58);
  func_0x0001004daa1c(auStack_70,&uStack_50,"grpc.internal.keepalive_throttling",0x22);
  if (cStack_60 != '\0') {
    FUN_10084de48(&pppuStack_88,auStack_70);
    ppppuVar6 = (undefined8 ****)pppuStack_88;
    if (-1 < (char)bStack_71) {
      uStack_80 = (ulong)bStack_71;
      ppppuVar6 = &pppuStack_88;
    }
    FUN_10082e12c(ppppuVar6,uStack_80,&iStack_44,10);
    if ((char)bStack_71 < '\0') {
      func_0x000107c60e14(pppuStack_88);
    }
    lVar10 = *(long *)(*(long *)(param_1 + 0x88) + 0x10);
    if ((int)ppppuVar6 == 0) {
      if (cStack_60 == '\0') {
        func_0x000104a783bc();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004da87c);
        (*pcVar4)();
      }
      FUN_10084de48(&pppuStack_88,auStack_70);
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/client_channel.cc"
                    ,0x28c,2,"chand=%p: Illegal keepalive throttling value %s");
      if ((char)bStack_71 < '\0') {
        func_0x000107c60e14(pppuStack_88);
      }
    }
    else if (*(int *)(lVar10 + 0x1d0) < iStack_44) {
      *(int *)(lVar10 + 0x1d0) = iStack_44;
      plVar8 = *(long **)(lVar10 + 0x1b8);
      while (plVar8 != (long *)(lVar10 + 0x1c0)) {
        FUN_1004d7234(*(undefined8 *)(plVar8[4] + 0x18),iStack_44);
        plVar3 = (long *)plVar8[1];
        plVar9 = plVar8;
        if ((long *)plVar8[1] == (long *)0x0) {
          do {
            plVar8 = (long *)plVar9[2];
            bVar5 = (long *)*plVar8 != plVar9;
            plVar9 = plVar8;
          } while (bVar5);
        }
        else {
          do {
            plVar8 = plVar3;
            plVar3 = (long *)*plVar8;
          } while ((long *)*plVar8 != (long *)0x0);
        }
      }
    }
  }
  uVar2 = uStack_50;
  plVar8 = *(long **)(param_1 + 0x80);
  if (plVar8 != (long *)0x0) {
    if (aiStack_58[0] == 3) {
      aiStack_58[0] = 3;
    }
    else {
      if (uStack_50 != 0) {
        uStack_50 = 0;
        pppuStack_88 = (undefined8 ****)0x36;
        if ((uVar2 & 1) != 0) {
          FUN_10084dad0(uVar2);
        }
      }
      plVar8 = *(long **)(param_1 + 0x80);
    }
    uStack_90 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar1 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar5) {
          *piVar7 = *piVar7 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    (**(code **)(*plVar8 + 0x10))(plVar8,aiStack_58[0],&uStack_90);
    if ((uStack_90 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (cStack_60 != '\0') {
    FUN_10084d204(auStack_70);
  }
  if ((uStack_50 & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004da8f0; end: 1004da947;  */

void FUN_1004da8f0(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  FUN_1004da65c(plVar5);
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
  if (lVar4 + -1 != 0 || plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004da944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 8))(plVar5);
  return;
}



/* Entry: 1004da948; end: 1004da967;  */

void FUN_1004da948(undefined8 param_1,long param_2)

{
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    FUN_10084dad0();
  }
  return;
}



/* Entry: 1004da968; end: 1004daacf;  */

bool FUN_1004da968(long param_1)

{
  bool bVar1;
  
  FUN_1004da948(param_1 + 0x28,
                *(long *)(*(long *)(param_1 + 8) +
                         (*(ulong *)(param_1 + 0x20) >> 5 & 0x7fffffffffffff8)) +
                (*(ulong *)(param_1 + 0x20) & 0xff) * 0x10);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x1ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    func_0x000107c60e14(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x100;
  }
  return bVar1;
}



/* Entry: 1004daad0; end: 1004daba3;  */

undefined1  [16] FUN_1004daad0(ulong *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  ulong *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (param_1 == (ulong *)0x0) {
    uVar2 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *param_1;
    if (1 < uVar5) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        puVar3 = param_1 + 1;
        if ((uVar5 & 1) != 0) {
          puVar3 = (ulong *)param_1[1];
        }
        plVar1 = (long *)((long)puVar3 + lVar7);
        lVar4 = (long)*(char *)((long)plVar1 + 0x17);
        if (lVar4 < 0) {
          lVar4 = plVar1[1];
          plVar1 = (long *)*plVar1;
        }
        if ((param_3 == lVar4) &&
           (uVar2 = param_2, func_0x000107c610b0(param_2,plVar1,param_3), (int)uVar2 == 0)) {
          uVar5 = uVar6 & 0x7fffffffffffff00;
          uVar6 = uVar6 & 0xff;
          uVar2 = 1;
          goto LAB_1004dab8c;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x28;
      } while (uVar5 >> 1 != uVar6);
    }
    uVar2 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
LAB_1004dab8c:
  auVar8._0_8_ = uVar5 | uVar6;
  auVar8._8_8_ = uVar2;
  return auVar8;
}



/* Entry: 1004daba4; end: 1004dad7b;  */

void FUN_1004daba4(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 auStack_78 [2];
  char cStack_61;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar7 + 0x18) != 0) {
    if (*(char *)(*(long *)(param_1 + 8) + 0x24) != '\0') {
      func_0x000104add41c();
    }
    func_0x000104add41c();
    func_0x000104a8472c(auStack_78,param_3,1);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                  ,0xfa,1,
                  "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): connectivity changed: old_state=%s, new_state=%s, status=%s, shutting_down=%d, pending_watcher=%p"
                 );
    if (cStack_61 < '\0') {
      func_0x000107c60e14(auStack_78[0]);
    }
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if ((*(char *)(lVar7 + 0x38) == '\0') &&
     (lVar7 = *(long *)(param_1 + 8), *(long *)(lVar7 + 0x18) != 0)) {
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    *(int *)(lVar7 + 0x20) = (int)param_2;
    *(undefined1 *)(lVar7 + 0x24) = 1;
    lVar7 = *(long *)(param_1 + 8);
    uVar3 = *(ulong *)(lVar7 + 0x28);
    uVar4 = *param_3;
    if (uVar4 != uVar3) {
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
        uVar4 = *param_3;
      }
      *(ulong *)(lVar7 + 0x28) = uVar4;
      if ((uVar3 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar6,param_2);
  }
  return;
}



/* Entry: 1004dad7c; end: 1004db737;  */

void FUN_1004dad7c(long ****param_1,ulong param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  long *******ppppppplVar7;
  undefined8 ******ppppppuVar8;
  long *plVar9;
  long ****pppplVar10;
  long ******pppppplVar11;
  int *piVar12;
  long ***ppplVar13;
  long ******pppppplVar14;
  long **pplVar15;
  long *****ppppplVar16;
  long lVar17;
  long *****ppppplVar18;
  ulong uVar19;
  ulong uVar20;
  long *****ppppplVar21;
  long ****pppplVar22;
  ulong uVar23;
  long ****pppplStack_110;
  long *****ppppplStack_108;
  long *plStack_100;
  long *plStack_f8;
  long *plStack_f0;
  long **pplStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 ******ppppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long ******pppppplStack_b0;
  undefined8 ******ppppppuStack_a8;
  ulong uStack_a0;
  long ******pppppplStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppplVar11 = (long ******)param_1[1];
  ppppplVar21 = pppppplVar11[2];
  ppppppplVar7 = (long *******)(ppppplVar21 + 0xf);
  pppppplVar14 = *ppppppplVar7;
  if ((pppppplVar11 != pppppplVar14) && (pppppplVar11 != (long ******)ppppplVar21[0x10])) {
    func_0x000107c2c1e0();
LAB_1004db564:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1004db568);
    (*pcVar6)();
  }
  if (param_3 == 4) {
    func_0x000107c2c1d4();
    goto LAB_1004db564;
  }
  if (ppppplVar21[0x11] == param_1) {
    if (pppppplVar11 != pppppplVar14) {
      func_0x000107c2c1d8();
      goto LAB_1004db564;
    }
    if (ppppplVar21[0x10] == (long ****)0x0) {
      (*(code *)(*ppppplVar21[5])[4])();
      *(undefined1 *)(ppppplVar21 + 0x12) = 1;
      ppppplVar21[0x11] = (long ****)0x0;
      pppplVar22 = ppppplVar21[0xf];
      ppppplVar21[0xf] = (long ****)0x0;
      if (pppplVar22 != (long ****)0x0) {
        (*(code *)**pppplVar22)();
      }
      pppplVar22 = ppppplVar21[5];
      pppppplStack_78 = (long ******)0x0;
      ppppplVar16 = ppppplVar21 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
        if (bVar3) {
          *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar9 = (long *)0x18;
      func_0x000107c60e20();
      *plVar9 = (long)&PTR_DAT_1107c21d0;
      plVar9[1] = (long)ppppplVar21;
      *(undefined1 *)(plVar9 + 2) = 0;
      plStack_100 = plVar9;
      (*(code *)(*pppplVar22)[3])(pppplVar22,0,&pppppplStack_78,&plStack_100);
      plVar9 = plStack_100;
      plStack_100 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 8))();
      }
      ppppppplVar7 = (long *******)pppppplStack_78;
      if (((ulong)pppppplStack_78 & 1) != 0) {
        FUN_10084dad0();
      }
    }
    else {
      ppppplVar21[0x11] = (long ****)0x0;
      FUN_1004d8960();
      if (*(char *)((long)ppppplVar21[0xf] + 0x39) == '\0') {
        pppplVar22 = ppppplVar21[5];
        pppppplStack_78 = (long ******)0x0;
        ppppplVar16 = ppppplVar21 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
          if (bVar3) {
            *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar9 = (long *)0x18;
        func_0x000107c60e20();
        *plVar9 = (long)&PTR_DAT_1107c21d0;
        plVar9[1] = (long)ppppplVar21;
        *(undefined1 *)(plVar9 + 2) = 0;
        plStack_f8 = plVar9;
        (*(code *)(*pppplVar22)[3])(pppplVar22,1,&pppppplStack_78,&plStack_f8);
        plVar9 = plStack_f8;
        plStack_f8 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        ppppppplVar7 = (long *******)pppppplStack_78;
        if (((ulong)pppppplStack_78 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      else {
        pppppplStack_78 = (long ******)0x10f2311a4;
        uStack_70 = 0x47;
        pplStack_e8 = ppppplVar21[0xf][5][5];
        if (((ulong)pplStack_e8 & 1) != 0) {
          piVar12 = (int *)((long)pplStack_e8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if ((long ***)pplStack_e8 == (long ***)0x0) {
          FUN_10002b024(&ppppppuStack_e0,"OK");
        }
        else {
          func_0x000107c2b9c0(&ppppppuStack_e0,&pplStack_e8,1);
        }
        uStack_a0 = uStack_d8;
        ppppppuStack_a8 = ppppppuStack_e0;
        if (-1 < (char)bStack_c9) {
          uStack_a0 = (ulong)bStack_c9;
          ppppppuStack_a8 = &ppppppuStack_e0;
        }
        FUN_10047c83c(&ppppppuStack_c8,&pppppplStack_78,&ppppppuStack_a8);
        pppppppuVar5 = (undefined8 *******)ppppppuStack_c8;
        if (-1 < (char)bStack_b1) {
          uStack_c0 = (ulong)bStack_b1;
          pppppppuVar5 = &ppppppuStack_c8;
        }
        func_0x000107c2b9cc(&pppppplStack_b0,pppppppuVar5,uStack_c0);
        if ((char)bStack_b1 < '\0') {
          func_0x000107c60e14(ppppppuStack_c8);
        }
        if ((char)bStack_c9 < '\0') {
          func_0x000107c60e14(ppppppuStack_e0);
        }
        if (((ulong)pplStack_e8 & 1) != 0) {
          FUN_10084dad0();
        }
        ppppplVar21 = (long *****)ppppplVar21[5];
        plVar9 = (long *)0x10;
        func_0x000107c60e20();
        if (((ulong)pppppplStack_b0 & 1) == 0) {
          *plVar9 = (long)&PTR_DAT_1107c1550;
          plVar9[1] = (long)pppppplStack_b0;
        }
        else {
          piVar12 = (int *)((long)pppppplStack_b0 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          *plVar9 = (long)&PTR_DAT_1107c1550;
          plVar9[1] = (long)pppppplStack_b0;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar3) {
              *piVar12 = *piVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_10084dad0();
        }
        plStack_f0 = plVar9;
        (*(code *)(*ppppplVar21)[3])(ppppplVar21,3,&pppppplStack_b0,&plStack_f0);
        plVar9 = plStack_f0;
        plStack_f0 = (long *)0x0;
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
        ppppppplVar7 = (long *******)pppppplStack_b0;
        if (((ulong)pppppplStack_b0 & 1) != 0) {
          FUN_10084dad0();
          ppppppplVar7 = (long *******)pppppplStack_b0;
        }
      }
    }
    goto LAB_1004db450;
  }
  if (param_3 == 2) {
    *(undefined1 *)((long)pppppplVar11 + 0x39) = 0;
    if (pppppplVar11 == pppppplVar14) {
      if (pppppplVar11 == (long ******)ppppplVar21[0x10]) goto LAB_1004dae04;
    }
    else {
      if (pppppplVar11 != (long ******)ppppplVar21[0x10]) {
        func_0x000107c2c1dc();
        goto LAB_1004db564;
      }
LAB_1004dae04:
      FUN_1004d8960();
    }
    ppppplVar21[0x11] = param_1;
    pppplVar22 = ppppplVar21[5];
    pppppplStack_78 = (long ******)0x0;
    ppppplVar21 = (long *****)param_1[2];
    ppppplVar16 = ppppplVar21 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
      if (bVar3) {
        *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    ppppppuVar8 = (undefined8 ******)0x10;
    func_0x000107c60e20();
    *ppppppuVar8 = (undefined8 *****)&PTR_DAT_1107c2698;
    ppppppuVar8[1] = ppppplVar21;
    ppppppuStack_a8 = ppppppuVar8;
    (*(code *)(*pppplVar22)[3])(pppplVar22,2,&pppppplStack_78,&ppppppuStack_a8);
    ppppppuVar8 = ppppppuStack_a8;
    ppppppuStack_a8 = (undefined8 *******)0x0;
    if (ppppppuVar8 != (undefined8 ******)0x0) {
      (*(code *)(*ppppppuVar8)[1])();
    }
    ppppppplVar7 = (long *******)pppppplStack_78;
    if (((ulong)pppppplStack_78 & 1) != 0) {
      FUN_10084dad0();
    }
    ppplVar13 = param_1[1];
    pplVar15 = ppplVar13[4];
    if (ppplVar13[5] != pplVar15) {
      ppppplVar21 = (long *****)0x0;
      uVar23 = 0;
      do {
        if (uVar23 != ((long)param_1 - (long)pplVar15 >> 4) * -0x5555555555555555) {
          ppppppplVar7 = (long *******)((long)pplVar15 + (long)ppppplVar21);
          func_0x000104a84748();
          ppplVar13 = param_1[1];
        }
        uVar23 = uVar23 + 1;
        pplVar15 = ppplVar13[4];
        ppppplVar21 = ppppplVar21 + 6;
      } while (uVar23 < (ulong)(((long)ppplVar13[5] - (long)pplVar15 >> 4) * -0x5555555555555555));
    }
  }
  else if ((param_2 & 0xff00000000) == 0) {
    ppppplVar16 = pppppplVar11[4];
    if ((long)pppppplVar11[5] - (long)ppppplVar16 == 0) {
LAB_1004db298:
      ppppppplVar7 = (long *******)ppppplVar16[2];
LAB_1004db510:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0001004db544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*ppppppplVar7)[4])();
        return;
      }
      goto LAB_1004db568;
    }
    uVar4 = ((long)pppppplVar11[5] - (long)ppppplVar16) / 0x30;
    uVar23 = uVar4;
    if (uVar4 < 2) {
      uVar23 = 1;
    }
    if (*(char *)((long)ppppplVar16 + 0x24) != '\0') {
      ppppplVar18 = ppppplVar16 + 10;
      uVar19 = 1;
      do {
        uVar20 = uVar19;
        if (uVar23 == uVar20) break;
        pcVar1 = (char *)((long)ppppplVar18 + 4);
        ppppplVar18 = ppppplVar18 + 6;
        uVar19 = uVar20 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 <= uVar20) goto LAB_1004db298;
    }
  }
  else {
    ppppplVar16 = pppppplVar11[4];
    lVar17 = ((long)param_1 - (long)ppppplVar16 >> 4) * -0x5555555555555555;
    if (lVar17 - (long)pppppplVar11[8] == 0) {
      if (param_3 == 0) {
        ppppppplVar7 = (long *******)param_1[2];
        goto LAB_1004db510;
      }
      if (param_3 == 1) {
        if ((pppppplVar11 == pppppplVar14) && (*(char *)((long)pppppplVar11 + 0x39) == '\0')) {
          pppplVar22 = ppppplVar21[5];
          pppppplStack_78 = (long ******)0x0;
          ppppplVar16 = ppppplVar21 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar16,0x10);
            if (bVar3) {
              *ppppplVar16 = (long ****)((long)*ppppplVar16 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pppplVar10 = (long ****)0x18;
          func_0x000107c60e20();
          *pppplVar10 = (long ***)&PTR_DAT_1107c21d0;
          pppplVar10[1] = (long ***)ppppplVar21;
          *(undefined1 *)(pppplVar10 + 2) = 0;
          pppplStack_110 = pppplVar10;
          (*(code *)(*pppplVar22)[3])(pppplVar22,1,&pppppplStack_78,&pppplStack_110);
          pppplVar22 = pppplStack_110;
          pppplStack_110 = (long ****)0x0;
          if (pppplVar22 != (long ****)0x0) {
            (*(code *)(*pppplVar22)[1])();
          }
          ppppppplVar7 = &pppppplStack_78;
          FUN_1004bdf74();
        }
      }
      else if (param_3 == 3) {
        uVar23 = lVar17 + 1;
        uVar19 = ((long)pppppplVar11[5] - (long)ppppplVar16 >> 4) * -0x5555555555555555;
        uVar4 = 0;
        if (uVar19 != 0) {
          uVar4 = uVar23 / uVar19;
        }
        ppppplVar18 = (long *****)(uVar23 - uVar4 * uVar19);
        pppppplVar11[8] = ppppplVar18;
        ppppplVar16 = ppppplVar16 + (long)ppppplVar18 * 6;
        if (ppppplVar16 == (long *****)ppppplVar16[1][4]) {
          *(undefined1 *)((long)pppppplVar11 + 0x39) = 1;
          if (pppppplVar11 == (long ******)ppppplVar21[0x10]) {
            ppppplVar21[0x11] = (long ****)0x0;
            FUN_1004d8960();
            pppppplVar11 = (long ******)param_1[1];
            pppppplVar14 = (long ******)ppppplVar21[0xf];
          }
          if (pppppplVar11 == pppppplVar14) {
            (*(code *)(*ppppplVar21[5])[4])();
            pppppplStack_78 = (long ******)0x10f2311ec;
            uStack_70 = 0x30;
            pplStack_e8 = (long **)param_1[5];
            if (((ulong)pplStack_e8 & 1) != 0) {
              piVar12 = (int *)((long)pplStack_e8 + -1);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar12,0x10);
                if (bVar3) {
                  *piVar12 = *piVar12 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            func_0x000104a8472c(&ppppppuStack_e0,&pplStack_e8,1);
            uStack_a0 = uStack_d8;
            ppppppuStack_a8 = ppppppuStack_e0;
            if (-1 < (char)bStack_c9) {
              uStack_a0 = (ulong)bStack_c9;
              ppppppuStack_a8 = &ppppppuStack_e0;
            }
            FUN_10047c83c(&ppppppuStack_c8,&pppppplStack_78,&ppppppuStack_a8);
            pppppppuVar5 = (undefined8 *******)ppppppuStack_c8;
            if (-1 < (char)bStack_b1) {
              uStack_c0 = (ulong)bStack_b1;
              pppppppuVar5 = &ppppppuStack_c8;
            }
            func_0x000107c2b9cc(&pppppplStack_b0,pppppppuVar5,uStack_c0);
            if ((char)bStack_b1 < '\0') {
              func_0x000107c60e14(ppppppuStack_c8);
            }
            if ((char)bStack_c9 < '\0') {
              func_0x000107c60e14(ppppppuStack_e0);
            }
            FUN_1004bdf74(&pplStack_e8);
            ppppplVar21 = (long *****)ppppplVar21[5];
            func_0x000104a84318(&pppppplStack_78,&pppppplStack_b0);
            ppppplStack_108 = (long *****)pppppplStack_78;
            pppppplStack_78 = (long ******)0x0;
            (*(code *)(*ppppplVar21)[3])(ppppplVar21,3,&pppppplStack_b0,&ppppplStack_108);
            ppppplVar18 = ppppplStack_108;
            ppppplStack_108 = (long *****)0x0;
            if ((long ******)ppppplVar18 != (long ******)0x0) {
              (*(code *)(*ppppplVar18)[1])();
            }
            pppppplVar11 = pppppplStack_78;
            pppppplStack_78 = (long ******)0x0;
            if (pppppplVar11 != (long ******)0x0) {
              (*(code *)(*pppppplVar11)[1])();
            }
            ppppppplVar7 = &pppppplStack_b0;
            FUN_1004bdf74();
          }
        }
        if (((ulong)ppppplVar16[4] & 0xff00000000) != 0 && ((ulong)ppppplVar16[4] & 0xffffffff) == 0
           ) {
          ppppppplVar7 = (long *******)ppppplVar16[2];
          (*(code *)(*ppppppplVar7)[4])();
        }
      }
    }
  }
LAB_1004db450:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_1004db568:
  func_0x000107c60e78();
  ppppplVar16 = (long *****)pppplStack_110;
  pppplStack_110 = (long ****)0x0;
  if (ppppplVar16 == (long *****)0x0) goto LAB_1004db714;
  ppplVar13 = (*ppppplVar16)[1];
  do {
    (*(code *)ppplVar13)(ppppplVar16);
LAB_1004db714:
    FUN_1004bdf74(&pppppplStack_78);
    func_0x000107c60bd8(ppppppplVar7);
    ppplVar13 = (*ppppplVar21)[1];
    ppppplVar16 = ppppplVar21;
  } while( true );
}



/* Entry: 1004db738; end: 1004db73f;  */

void FUN_1004db738(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  FUN_100460448(lVar1 + 400);
  if (*(int *)(lVar1 + 0x1d4) == 0) {
    FUN_1004db79c(lVar1);
  }
  func_0x000100466b80(lVar1 + 400);
  return;
}



/* Entry: 1004db740; end: 1004db79b;  */

void FUN_1004db740(long param_1)

{
  FUN_100460448(param_1 + 400);
  if (*(int *)(param_1 + 0x1d4) == 0) {
    FUN_1004db79c(param_1);
  }
  func_0x000100466b80(param_1 + 400);
  return;
}



/* Entry: 1004db79c; end: 1004db8b3;  */

void FUN_1004db79c(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar6 = param_1[0x29];
  puVar3 = param_1;
  func_0x000100460dc4();
  uVar4 = *puVar3;
  FUN_1004671a4();
  uVar5 = 0x7fffffffffffffff;
  if ((uVar6 != 0x7fffffffffffffff && uVar4 != 0x7fffffffffffffff) &&
     (uVar5 = 0x8000000000000000, uVar6 != 0x8000000000000000 && uVar4 != 0x8000000000000000)) {
    if ((long)uVar4 < 1) {
      if ((long)uVar6 < (long)(-0x8000000000000000 - uVar4)) goto LAB_1004db810;
    }
    else if ((long)(uVar4 ^ 0x7fffffffffffffff) < (long)uVar6) {
      uVar5 = 0x7fffffffffffffff;
      goto LAB_1004db810;
    }
    uVar5 = uVar4 + uVar6;
  }
LAB_1004db810:
  puVar3 = param_1 + 0x43;
  FUN_1004db8b4();
  param_1[0x6c] = (ulong)puVar3;
  puStack_50 = (ulong *)0x0;
  FUN_1004dbb24(param_1,1,&puStack_50);
  if (((ulong)puStack_50 & 1) != 0) {
    FUN_10084dad0();
  }
  puStack_50 = param_1 + 0x15;
  uStack_38 = param_1[0x26];
  uStack_48 = param_1[0x27];
  uStack_40 = param_1[0x6c];
  if ((long)param_1[0x6c] <= (long)uVar5) {
    uStack_40 = uVar5;
  }
  puVar3 = param_1 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = *puVar3 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  (**(code **)(*(long *)param_1[0x2a] + 0x18))
            ((long *)param_1[0x2a],&puStack_50,param_1 + 0x2b,param_1 + 0x2e);
  return;
}



/* Entry: 1004db8b4; end: 1004dbb23;  */

long FUN_1004db8b4(ulong *param_1)

{
  ulong uVar1;
  double *pdVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  pdVar2 = &dStack_60;
  if ((char)param_1[0x27] == '\0') {
    uVar1 = param_1[0x28];
    uVar5 = 0x8000000000000000;
    if (uVar1 == 0x8000000000000000) {
      uVar1 = 0x7fffffffffffffff;
LAB_1004db958:
      if (0.0 <= (double)param_1[1]) {
        uVar1 = uVar5;
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
      if (uVar1 == 0x7fffffffffffffff) {
        uVar1 = 0x8000000000000000;
        goto LAB_1004db958;
      }
      dVar7 = (((double)param_1[1] * (double)(long)uVar1) / 1000.0) * 1000.0;
      if (9.223372036854776e+18 <= dVar7) {
        uVar1 = 0x7fffffffffffffff;
      }
      else if (dVar7 <= -9.223372036854776e+18) {
        uVar1 = 0x8000000000000000;
      }
      else {
        uVar1 = (long)dVar7;
      }
    }
    uVar5 = param_1[3];
    if ((long)uVar1 <= (long)param_1[3]) {
      uVar5 = uVar1;
    }
    param_1[0x28] = uVar5;
    dVar7 = -((double)param_1[2] * ((double)(long)uVar5 / 1000.0));
    dVar8 = (double)param_1[2] * ((double)(long)uVar5 / 1000.0);
    puVar3 = param_1;
    if (dVar7 <= dVar8 && (ulong)ABS(dVar8 - dVar7) < 0x7ff0000000000000) {
      dStack_60 = dVar7;
      dStack_58 = dVar8;
      dStack_50 = dVar8 - dVar7;
      func_0x000104aa9bb4(&dStack_60,param_1 + 4,&dStack_60);
      puVar3 = (ulong *)pdVar2;
    }
    dVar7 = dVar7 * 1000.0;
    lVar6 = 0x7fffffffffffffff;
    if (dVar7 < 9.223372036854776e+18) {
      if (dVar7 <= -9.223372036854776e+18) {
        lVar6 = -0x8000000000000000;
      }
      else {
        lVar6 = (long)dVar7;
      }
    }
    func_0x000100460dc4();
    uVar1 = *puVar3;
    FUN_1004671a4();
    if (uVar1 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    uVar5 = param_1[0x28];
    if (uVar5 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    uVar4 = 0x8000000000000000;
    if ((uVar1 != 0x8000000000000000) && (uVar5 != 0x8000000000000000)) {
      if ((long)uVar1 < 1) {
        if ((long)uVar5 < (long)(-0x8000000000000000 - uVar1)) goto LAB_1004dbabc;
      }
      else if ((long)(uVar1 ^ 0x7fffffffffffffff) < (long)uVar5) {
        return 0x7fffffffffffffff;
      }
      uVar4 = uVar5 + uVar1;
    }
LAB_1004dbabc:
    if (lVar6 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (uVar4 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (lVar6 == -0x8000000000000000) {
      return -0x8000000000000000;
    }
    if (uVar4 == 0x8000000000000000) {
      return -0x8000000000000000;
    }
    if ((long)uVar4 < 1) {
      if (lVar6 < (long)(-0x8000000000000000 - uVar4)) {
        return -0x8000000000000000;
      }
    }
    else if ((long)(uVar4 ^ 0x7fffffffffffffff) < lVar6) goto LAB_1004db920;
    lVar6 = uVar4 + lVar6;
  }
  else {
    *(undefined1 *)(param_1 + 0x27) = 0;
    uVar5 = param_1[0x28];
    func_0x000100460dc4();
    uVar1 = *param_1;
    FUN_1004671a4();
    if (uVar5 == 0x7fffffffffffffff || uVar1 == 0x7fffffffffffffff) {
      return 0x7fffffffffffffff;
    }
    if (uVar5 == 0x8000000000000000 || uVar1 == 0x8000000000000000) {
      return -0x8000000000000000;
    }
    if ((long)uVar1 < 1) {
      if ((long)uVar5 < (long)(-0x8000000000000000 - uVar1)) {
        return -0x8000000000000000;
      }
LAB_1004db9b4:
      return uVar1 + uVar5;
    }
    if ((long)uVar5 <= (long)(uVar1 ^ 0x7fffffffffffffff)) goto LAB_1004db9b4;
LAB_1004db920:
    lVar6 = 0x7fffffffffffffff;
  }
  return lVar6;
}



/* Entry: 1004dbb24; end: 1004dbc37;  */

void FUN_1004dbb24(long param_1,undefined8 param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  undefined1 auStack_58 [32];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = (uint)param_2;
  *(uint *)(param_1 + 0x1d4) = uVar5;
  uVar3 = *(ulong *)(param_1 + 0x1d8);
  uVar7 = *param_3;
  if (uVar7 != uVar3) {
    if ((uVar7 & 1) != 0) {
      piVar8 = (int *)(uVar7 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar8,0x10);
        if (bVar2) {
          *piVar8 = *piVar8 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      uVar7 = *param_3;
    }
    *(ulong *)(param_1 + 0x1d8) = uVar7;
    if ((uVar3 & 1) != 0) {
      FUN_10084dad0();
    }
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    FUN_1004dbc38(*(long *)(param_1 + 0x140),param_2);
    if (4 < uVar5) goto LAB_1004dbc20;
    lVar9 = *(long *)(param_1 + 0x140);
    FUN_10047e7b4(auStack_58,(&PTR_s_Subchannel_state_change_to_IDLE_1107c34c8)[(int)uVar5]);
    FUN_10047e7e4(lVar9 + 0xc0,1,auStack_58);
  }
  FUN_1004dbc40(param_1 + 0x1e0,param_2,param_3);
  FUN_1004dbd58(param_1 + 0x1f8,param_2,param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
LAB_1004dbc20:
  pcVar4 = "return \"UNKNOWN\"";
  uVar6 = 0xf23288b;
  func_0x000104a6e964("return \"UNKNOWN\"",
                      "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/subchannel.cc"
                      ,0x365);
  *(undefined4 *)(pcVar4 + 0x38) = uVar6;
  return;
}



/* Entry: 1004dbc38; end: 1004dbc3f;  */

void FUN_1004dbc38(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



/* Entry: 1004dbc40; end: 1004dbd57;  */

void FUN_1004dbc40(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_48;
  
  plVar6 = (long *)*param_1;
  while (plVar6 != param_1 + 1) {
    uVar4 = 0x28;
    func_0x000107c60e20(0x28);
    plStack_48 = (long *)0x0;
    if (plVar6[5] != 0) {
      plVar1 = (long *)(plVar6[5] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plStack_48 = (long *)plVar6[5];
    }
    FUN_1004d7f6c(uVar4,&plStack_48,param_2,param_3);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 8))();
      }
    }
    plVar1 = (long *)plVar6[1];
    plVar7 = plVar6;
    if ((long *)plVar6[1] == (long *)0x0) {
      do {
        plVar6 = (long *)plVar7[2];
        bVar3 = (long *)*plVar6 != plVar7;
        plVar7 = plVar6;
      } while (bVar3);
    }
    else {
      do {
        plVar6 = plVar1;
        plVar1 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1004dbd58; end: 1004dbdd7;  */

void FUN_1004dbd58(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)*param_1;
  while (plVar3 != param_1 + 1) {
    func_0x000104a8e1fc(plVar3[7],param_2,param_3);
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
  return;
}



/* Entry: 1004dbdd8; end: 1004dc183;  */

/* WARNING: Removing unreachable block (ram,0x0001004dbebc) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_1004dbdd8(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong auStack_130 [4];
  undefined1 uStack_109;
  ulong uStack_108;
  long alStack_100 [4];
  ulong *apuStack_e0 [4];
  undefined1 auStack_c0 [32];
  byte bStack_a0;
  undefined7 uStack_9f;
  undefined8 *******pppppppuStack_98;
  byte bStack_89;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_100460448(param_1 + 0x10);
  plVar13 = (long *)(param_1 + 0x78);
  if (*plVar13 == 0) {
    uVar8 = *param_2;
    uVar14 = param_2[3];
    uVar9 = param_2[2];
    *(undefined8 *)(param_1 + 0x58) = param_2[1];
    *(undefined8 *)(param_1 + 0x50) = uVar8;
    *(undefined8 *)(param_1 + 0x68) = uVar14;
    *(undefined8 *)(param_1 + 0x60) = uVar9;
    *(undefined8 *)(param_1 + 0x70) = param_3;
    *(undefined8 *)(param_1 + 0x78) = param_4;
    if (*(long *)(param_1 + 0x88) == 0) {
      func_0x000100466b80(param_1 + 0x10);
      FUN_1004d4034(alStack_100,*param_2);
      if (alStack_100[0] == 0) {
        plVar13 = alStack_100;
        FUN_1004d5530();
        plVar1 = (long *)*plVar13;
        if (-1 < *(char *)((long)plVar13 + 0x17)) {
          plVar1 = plVar13;
        }
        func_0x0001004c9ae8(apuStack_e0,"grpc.internal.tcp_handshaker_resolved_address",plVar1);
        FUN_1004c86fc(auStack_c0,"grpc.internal.tcp_handshaker_bind_endpoint_to_pollset",1);
        FUN_1004c9a58(&bStack_a0,apuStack_e0,&bStack_a0,&uStack_108);
        uVar8 = *(undefined8 *)(param_1 + 0x68);
        pppppppuVar2 = &pppppppuStack_98;
        if ((bStack_a0 & 1) != 0) {
          pppppppuVar2 = pppppppuStack_98;
        }
        FUN_1004c87a4(uVar8,pppppppuVar2,CONCAT71(uStack_9f,bStack_a0) >> 1);
        uVar9 = 0x148;
        func_0x000107c60e20();
        FUN_1004dc184();
        plVar13 = *(long **)(param_1 + 0x118);
        if (plVar13 != (long *)0x0) {
          plVar1 = plVar13 + 1;
          do {
            lVar12 = *plVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 + -1 == 0) {
            (**(code **)(*plVar13 + 8))();
          }
        }
        *(undefined8 *)(param_1 + 0x118) = uVar9;
        lVar12 = lRam0000000113815be8;
        if (lRam0000000113815be8 == 0) {
          FUN_100472138();
        }
        FUN_1004dc310(lVar12 + 0x90,0,uVar8,*(undefined8 *)(param_1 + 0x58),
                      *(undefined8 *)(param_1 + 0x118));
        plVar13 = (long *)(param_1 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = *plVar13 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        iVar10 = 0;
        FUN_1004de154(*(undefined8 *)(param_1 + 0x118),0,uVar8,param_2[2],0,FUN_1007425bc,param_1);
        FUN_10048650c(uVar8);
        if ((bStack_a0 & 1) != 0) {
          func_0x000107c60e14(pppppppuStack_98);
        }
      }
      else {
        func_0x000107c2b9c0(&bStack_a0,alStack_100,1);
        pbVar5 = (byte *)CONCAT71(uStack_9f,bStack_a0);
        if (-1 < (char)bStack_89) {
          pppppppuStack_98 = (undefined8 *******)(ulong)bStack_89;
          pbVar5 = &bStack_a0;
        }
        auStack_130[2] = 0;
        auStack_130[3] = 0;
        auStack_130[1] = 0;
        func_0x000104ab5920(&uStack_108,2,pbVar5,pppppppuStack_98,&uStack_109,auStack_130 + 1);
        apuStack_e0[0] = auStack_130 + 1;
        func_0x000100482b64(apuStack_e0);
        uVar6 = uStack_108;
        auStack_130[0] = uStack_108;
        if ((uStack_108 & 1) != 0) {
          piVar11 = (int *)(uStack_108 - 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
            if (bVar4) {
              *piVar11 = *piVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_1008d9ad4(&bStack_a0,plVar13,auStack_130);
        iVar10 = (int)plVar13;
        if ((uVar6 & 1) != 0) {
          FUN_10084dad0(uVar6);
        }
        if ((uStack_108 & 1) != 0) {
          FUN_10084dad0();
        }
      }
      plVar13 = alStack_100;
      func_0x00010047c7d4();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
        func_0x000107c60e78();
        if (iVar10 == 0) {
          func_0x000107c60bd8(plVar13);
        }
        func_0x000104bd46a0();
        *plVar13 = (long)&PTR_DAT_1107c7510;
        plVar13[1] = 1;
        FUN_100460318(plVar13 + 2);
        *(undefined1 *)(plVar13 + 10) = 0;
        plVar13[0xb] = 0;
        plVar13[0xe] = 0;
        plVar13[0x24] = 0;
        plVar13[0x25] = 0;
        plVar13[0x23] = 0;
        *(undefined1 *)(plVar13 + 0x26) = 0;
        plVar13[0x27] = 0;
        plVar13[0x28] = 0;
        return plVar13;
      }
      return plVar13;
    }
    uVar8 = 0x6a;
  }
  else {
    uVar8 = 0x66;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/transport/chttp2/client/chttp2_connector.cc"
                ,uVar8,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1004dc0b8);
  (*pcVar7)();
}



/* Entry: 1004dc184; end: 1004dc1d3;  */

undefined8 * FUN_1004dc184(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1107c7510;
  param_1[1] = 1;
  FUN_100460318(param_1 + 2);
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  return param_1;
}



/* Entry: 1004dc1d4; end: 1004dc30f;  */

void FUN_1004dc1d4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plStack_38;
  
  plVar3 = (long *)0x138;
  func_0x000107c60e20();
  *plVar3 = (long)&PTR_FUN_1107c7660;
  plVar3[1] = 1;
  plVar4 = plVar3 + 2;
  FUN_100460318();
  *(undefined1 *)(plVar3 + 10) = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[0xb] = 0;
  FUN_10048099c();
  plVar3[0xe] = (long)plVar4;
  FUN_1004dc3b0();
  plVar3[0xf] = param_3;
  plVar3[0x10] = param_2;
  plVar3[0x11] = 0;
  *(undefined1 *)(plVar3 + 0x12) = 0;
  if (plVar3[0xe] != 0) {
    FUN_1004bdfa0(plVar3 + 0xf);
  }
  plVar3[0x24] = (long)FUN_1005a5f64;
  plVar3[0x25] = (long)plVar3;
  plVar3[0x26] = 0;
  plStack_38 = plVar3;
  FUN_1004dc3b8(param_4,&plStack_38);
  if (plStack_38 != (long *)0x0) {
    plVar4 = plStack_38 + 1;
    do {
      lVar5 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar5 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar5 + -1 == 0) {
      (**(code **)(*plStack_38 + 8))();
    }
  }
  return;
}



/* Entry: 1004dc310; end: 1004dc37b;  */

void FUN_1004dc310(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)(param_1 + (param_2 & 0xffffffff) * 0x18);
  puVar1 = (undefined8 *)plVar2[1];
  for (puVar3 = (undefined8 *)*plVar2; puVar3 != puVar1; puVar3 = puVar3 + 1) {
    (*(code *)**(undefined8 **)*puVar3)((undefined8 *)*puVar3,param_3,param_4,param_5);
  }
  return;
}



/* Entry: 1004dc37c; end: 1004dc3af;  */

void FUN_1004dc37c(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3aca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1004dc3b0; end: 1004dc3b7;  */

void FUN_1004dc3b0(void)

{
  return;
}



/* Entry: 1004dc3b8; end: 1004dc41b;  */

void FUN_1004dc3b8(long param_1,undefined8 param_2)

{
  FUN_100460448(param_1 + 0x10);
  FUN_1004dc41c(param_1 + 0x58,param_2);
  func_0x000100466b80(param_1 + 0x10);
  return;
}



/* Entry: 1004dc41c; end: 1004dc467;  */

ulong * FUN_1004dc41c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong **ppuVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puStack_50;
  ulong uStack_48;
  
  puVar7 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar11 = 2;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar11 = param_1[2];
  }
  if (uVar9 >> 1 != uVar11) {
    puVar7 = puVar7 + (uVar9 >> 1);
    *puVar7 = 0;
    *puVar7 = *param_2;
    *param_2 = 0;
    *param_1 = uVar9 + 2;
    return puVar7;
  }
  ppuVar5 = &puStack_50;
  puVar7 = param_1 + 1;
  uVar9 = *param_1;
  if ((uVar9 & 1) == 0) {
    uVar11 = 4;
  }
  else {
    puVar7 = (ulong *)param_1[1];
    uVar11 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_1004de120();
  uVar13 = uVar9 >> 1;
  puVar2 = (ulong *)(ppuVar5 + uVar13);
  puStack_50 = (ulong *)ppuVar5;
  uStack_48 = uVar11;
  *puVar2 = 0;
  *puVar2 = *param_2;
  *param_2 = 0;
  puVar8 = puStack_50;
  uVar11 = uVar13;
  puVar12 = puVar7;
  if (1 < uVar9) {
    do {
      *puVar8 = 0;
      *puVar8 = *puVar12;
      *puVar12 = 0;
      uVar11 = uVar11 - 1;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    } while (uVar11 != 0);
    do {
      while( true ) {
        uVar13 = uVar13 - 1;
        plVar6 = (long *)puVar7[uVar13];
        if (plVar6 != (long *)0x0) break;
LAB_1004de0c0:
        if (uVar13 == 0) goto LAB_1004de0c4;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar10 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar10 + -1 != 0) goto LAB_1004de0c0;
      (**(code **)(*plVar6 + 8))();
    } while (uVar13 != 0);
  }
LAB_1004de0c4:
  uVar9 = *param_1;
  if ((uVar9 & 1) != 0) {
    func_0x000107c60e14(param_1[1]);
    uVar9 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar9 | 1) + 2;
  return puVar2;
}



/* Entry: 1004dc468; end: 1004dc59f;  */

void FUN_1004dc468(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 in_x3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = (long *)0x1248;
  func_0x000107c60e20();
  *plVar3 = (long)&PTR_FUN_1107c75a0;
  plVar3[1] = 1;
  FUN_100460318(plVar3 + 2);
  *(undefined1 *)(plVar3 + 10) = 0;
  *(undefined4 *)(plVar3 + 0x242) = 0;
  plVar3[0x243] = 0;
  plVar3[0x245] = 0;
  plVar3[0x244] = 0;
  *(undefined4 *)(plVar3 + 0x246) = 0;
  plVar3[0x248] = 0;
  plVar3[0x247] = 0;
  plVar3[0xc] = 0;
  plVar3[0xb] = 0;
  plVar3[0xe] = 0;
  plVar3[0xd] = 0;
  func_0x0001004b800c(plVar3 + 0xf);
  FUN_1004dc5a0(plVar3 + 0x3c,0,plVar3 + 0x242);
  plStack_38 = plVar3;
  FUN_1004dc3b8(in_x3,&plStack_38);
  if (plStack_38 != (long *)0x0) {
    plVar3 = plStack_38 + 1;
    do {
      lVar4 = *plVar3;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = lVar4 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar4 + -1 == 0) {
      (**(code **)(*plStack_38 + 8))();
    }
  }
  return;
}



/* Entry: 1004dc5a0; end: 1004dc5e3;  */

void FUN_1004dc5a0(long param_1,undefined4 param_2,undefined8 param_3)

{
  func_0x000107c60ee4(param_1,0x1028);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x1028) = 2;
  return;
}



/* Entry: 1004dc5e4; end: 1004dc723; -[SCCameraViewfinderRenderAgentImpl _activateRenderModule:] */

void FUN_1004dc5e4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d974(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c4d9e8(uVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c50738(uVar3);
  lVar2 = param_1;
  func_0x000107c3c550();
  if ((int)lVar2 != 0) {
    func_0x000107c3cd28(param_1);
    func_0x000107c61144(auStack_38,param_1);
    func_0x000107c4db98(*(undefined8 *)(param_1 + 0x70));
    func_0x000107c3b3ec(param_1);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    func_0x000107c43084(param_1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1004dc724; end: 1004dc77f;  */

void FUN_1004dc724(undefined8 param_1,long *param_2)

{
  FUN_1004ca024();
  if (param_2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004dc76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x38))();
    return;
  }
  return;
}



/* Entry: 1004dc780; end: 1004dc88b;  */

void FUN_1004dc780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  plVar4 = (long *)(param_1 + 0x58);
  if (*(char *)(param_1 + 0x6f) < '\0') {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_1004dc7c4;
  }
  else {
    if (*(char *)(param_1 + 0x6f) != '\0') goto LAB_1004dc7d4;
LAB_1004dc7c4:
    plVar4 = (long *)(param_1 + 0x40);
    if (-1 < *(char *)(param_1 + 0x57)) goto LAB_1004dc7d4;
  }
  plVar4 = (long *)*plVar4;
LAB_1004dc7d4:
  FUN_1004dc88c(uVar3,plVar4,0,0,&uStack_38);
  if ((int)uVar3 == 0) {
    FUN_1004dde80(&plStack_40,uStack_38,param_1,param_2);
    FUN_1004dc3b8(param_4,&plStack_40);
    if (plStack_40 != (long *)0x0) {
      plVar4 = plStack_40 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_40 + 8))();
      }
    }
  }
  else {
    func_0x000104ae1b68();
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                  ,0x93,2,"Handshaker creation failed with error %s.");
  }
  return;
}



/* Entry: 1004dc88c; end: 1004dc8ab;  */

/* WARNING: Removing unreachable block (ram,0x0001004dca38) */

undefined8
FUN_1004dc88c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = uVar1;
  FUN_1001e5c08();
  uStack_68 = 0;
  uStack_60 = 0;
  *param_5 = 0;
  if (uVar1 == 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,0x692,2,"SSL Context is null. Should never happen.");
LAB_1004dcb34:
    uVar5 = 7;
  }
  else {
    if (uVar2 != 0) {
      FUN_1004dd120(uVar2,0x1004dd430);
      puVar4 = &uStack_60;
      FUN_1004dd128(puVar4,param_3,&uStack_68,param_4);
      if ((int)puVar4 != 0) {
        FUN_1004dd33c(uVar2,uStack_68,uStack_68);
        FUN_1004dd414();
        if ((param_2 == 0) || (uVar1 = uVar2, FUN_1001e6e18(uVar2,param_2), (int)uVar1 != 0)) {
          lVar7 = *(long *)(param_1 + 0x28);
          if ((lVar7 != 0) &&
             ((uVar1 = uVar2, func_0x000107c2b7ec(uVar2,0), uVar1 != 0 &&
              (func_0x000104ae10b0(&lStack_58,lVar7,uVar1), lStack_58 != 0)))) {
            func_0x000107c2b87c(uVar2);
            lVar7 = lStack_58;
            lStack_58 = 0;
            if (lVar7 != 0) {
              FUN_100229edc();
            }
          }
          FUN_1001e83a0();
          uVar1 = uVar2;
          FUN_1001e8bc0(uVar2);
          uVar3 = uVar2;
          FUN_1001f34c8(uVar2,uVar1);
          switch(uVar3 & 0xffffffff) {
          case 1:
            break;
          case 2:
            puVar4 = (undefined8 *)0x40;
            FUN_100460860();
            puVar4[2] = uVar2;
            puVar4[3] = uStack_60;
            *(undefined4 *)(puVar4 + 4) = 0xb;
            puVar4[6] = 0x400;
            uVar5 = 0x400;
            FUN_100460860();
            puVar4[5] = uVar5;
            *puVar4 = &UNK_1107c7820;
            if (param_1 != 0) {
              FUN_1004dde68(param_1 + 8,1);
            }
            puVar4[7] = param_1;
            *param_5 = puVar4;
            return 0;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
          }
          pcVar6 = "Unexpected error received from first SSL_do_handshake call: %s";
          uVar5 = 0x6b7;
        }
        else {
          pcVar6 = "Invalid server name indication %s.";
          uVar5 = 0x6a6;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,uVar5,2,pcVar6);
        FUN_1006fd5c8(uVar2);
        func_0x0001004d2e54(uStack_60);
        goto LAB_1004dcb34;
      }
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x69c,2,"BIO_new_bio_pair failed.");
      FUN_1006fd5c8(uVar2);
    }
    uVar5 = 0xc;
  }
  return uVar5;
}



/* Entry: 1004dc8ac; end: 1004dcb6f;  */

undefined8
FUN_1004dc8ac(ulong param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 *param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  uVar1 = param_1;
  FUN_1001e5c08();
  uStack_68 = 0;
  uStack_60 = 0;
  *param_7 = 0;
  if (param_1 == 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                  ,0x692,2,"SSL Context is null. Should never happen.");
LAB_1004dcb34:
    uVar5 = 7;
  }
  else {
    if (uVar1 != 0) {
      FUN_1004dd120(uVar1,0x1004dd430);
      puVar4 = &uStack_60;
      FUN_1004dd128(puVar4,param_4,&uStack_68,param_5);
      if ((int)puVar4 != 0) {
        FUN_1004dd33c(uVar1,uStack_68,uStack_68);
        if (param_2 == 0) {
          func_0x000107c2b7b4(uVar1);
code_r0x0001004dca3c:
          puVar4 = (undefined8 *)0x40;
          FUN_100460860();
          puVar4[2] = uVar1;
          puVar4[3] = uStack_60;
          *(undefined4 *)(puVar4 + 4) = 0xb;
          puVar4[6] = 0x400;
          uVar5 = 0x400;
          FUN_100460860();
          puVar4[5] = uVar5;
          *puVar4 = &UNK_1107c7820;
          if (param_6 != 0) {
            FUN_1004dde68(param_6 + 8,1);
          }
          puVar4[7] = param_6;
          *param_7 = puVar4;
          return 0;
        }
        FUN_1004dd414();
        if ((param_3 == 0) || (uVar2 = uVar1, FUN_1001e6e18(uVar1,param_3), (int)uVar2 != 0)) {
          lVar7 = *(long *)(param_6 + 0x28);
          if ((lVar7 != 0) &&
             ((uVar2 = uVar1, func_0x000107c2b7ec(uVar1,0), uVar2 != 0 &&
              (func_0x000104ae10b0(&lStack_58,lVar7,uVar2), lStack_58 != 0)))) {
            func_0x000107c2b87c(uVar1);
            lVar7 = lStack_58;
            lStack_58 = 0;
            if (lVar7 != 0) {
              FUN_100229edc();
            }
          }
          FUN_1001e83a0();
          uVar2 = uVar1;
          FUN_1001e8bc0(uVar1);
          uVar3 = uVar1;
          FUN_1001f34c8(uVar1,uVar2);
          switch(uVar3 & 0xffffffff) {
          case 1:
            break;
          case 2:
            goto code_r0x0001004dca3c;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          case 6:
            break;
          case 7:
            break;
          case 8:
          }
          pcVar6 = "Unexpected error received from first SSL_do_handshake call: %s";
          uVar5 = 0x6b7;
        }
        else {
          pcVar6 = "Invalid server name indication %s.";
          uVar5 = 0x6a6;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                      ,uVar5,2,pcVar6);
        FUN_1006fd5c8(uVar1);
        func_0x0001004d2e54(uStack_60);
        goto LAB_1004dcb34;
      }
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/tsi/ssl_transport_security.cc"
                    ,0x69c,2,"BIO_new_bio_pair failed.");
      FUN_1006fd5c8(uVar1);
    }
    uVar5 = 0xc;
  }
  return uVar5;
}



/* Entry: 1004dcb70; end: 1004dcb77; -[SCCameraViewfinderMetalRenderer resumeRendering] */

void FUN_1004dcb70(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea4110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setFrameRenderingEnabled__1125869e8,1);
  return;
}



/* Entry: 1004dcb78; end: 1004dcba7; -[SCCameraViewfinderMetalRenderer _setFrameRenderingEnabled:] */

void FUN_1004dcb78(long param_1,undefined8 param_2,undefined1 param_3)

{
  func_0x000107c611ec(param_1 + 0x4c);
  *(undefined1 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x4c);
  return;
}



/* Entry: 1004dcba8; end: 1004dcc1b; -[SCCameraViewfinderRenderAgentImpl _setCurrentlyActiveModule:] */

bool FUN_1004dcba8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c611ec(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 != param_3) {
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(long *)(param_1 + 8) = param_3;
    func_0x000107c61170(uVar1);
  }
  func_0x000107c611f0(param_1 + 0xc0);
  func_0x000107c61170(param_3);
  return lVar2 != param_3;
}



/* Entry: 1004dcc1c; end: 1004dcc6f;  */

void FUN_1004dcc1c(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  
  if (*(long *)(param_2 + 0x58) != 0) {
    piVar1 = (int *)(*(long *)(param_2 + 0x58) + 0x140);
    iVar5 = *piVar1;
    do {
      if (iVar5 == -1) break;
      iVar2 = *piVar1;
      if (iVar2 == iVar5) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        bVar4 = cVar3 == '\0';
      }
      else {
        bVar4 = false;
        ClearExclusiveLocal();
      }
      iVar5 = iVar2;
    } while (!bVar4);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  }
  return;
}



/* Entry: 1004dcc70; end: 1004dcce7; -[SCCameraViewfinderRenderAgentImpl _updateVideoOrientationForActiveRenderModule] */

/* WARNING: Possible PIC construction at 0x0001004dcc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001004dcc94) */
/* WARNING: Removing unreachable block (ram,0x0001004dcc98) */
/* WARNING: Removing unreachable block (ram,0x0001004dcca4) */
/* WARNING: Removing unreachable block (ram,0x0001004dccdc) */
/* WARNING: Removing unreachable block (ram,0x0001004dccac) */
/* WARNING: Removing unreachable block (ram,0x0001004dccb0) */

void FUN_1004dcc70(void)

{
  func_0x000107c3b3ec();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1004dcce8; end: 1004dcd23; -[SCCameraViewfinderRenderAgentImpl _currentlyActiveModule] */

void FUN_1004dcce8(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0xc0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
  func_0x000107c611f0(param_1 + 0xc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1004dcd24; end: 1004dcd2b; -[SCCameraViewfinderMetalRenderer setSampleBufferOrientation:] */

void FUN_1004dcd24(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 1004dcd2c; end: 1004dcdf7; -[SCCameraViewfinderMetalRenderer fetchDisplayLayer:] */

void FUN_1004dcd2c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x000107c43bf4(uVar1);
    func_0x000107c61180();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1008bbb74;
    puStack_40 = &UNK_110988f30;
    lVar2 = param_3;
    func_0x000107c61174(param_3);
    lStack_38 = param_3;
    FUN_100078e94();
    func_0x000107c61180();
    func_0x000107c5dc68(uVar1,param_2,&puStack_58,lVar2,1);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1004dcdf8; end: 1004dce43;  */

bool FUN_1004dcdf8(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1;
  func_0x0001004caedc();
  *(long **)(param_1[1] + 0x10) = plVar1;
  if (plVar1 != (long *)0x0) {
    FUN_1004dce44(plVar1,*(undefined8 *)(*(long *)(*param_1 + 0x68) + 0x1d0));
  }
  return plVar1 != (long *)0x0;
}



/* Entry: 1004dce44; end: 1004dd11f;  */

long FUN_1004dce44(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar8 = *(ulong *)(param_2 + 0x10) | *(ulong *)(param_1 + 0x10);
  uVar7 = (uint)uVar8;
  if ((uVar7 >> 4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if ((uVar7 >> 3 & 1) != 0) {
    return 1;
  }
  iVar4 = *(int *)(param_2 + 0x20);
  if ((uVar7 >> 1 & 1) == 0) {
    if (iVar4 == 0) {
LAB_1004dcec8:
      iVar4 = *(int *)(param_2 + 0x24);
      if (iVar4 != 0) {
        if ((uVar8 & 1) == 0) goto LAB_1004dced4;
LAB_1004dcedc:
        *(int *)(param_1 + 0x24) = iVar4;
      }
    }
    else {
      if (((uVar8 & 1) != 0) || (*(int *)(param_1 + 0x20) == 0)) {
        *(int *)(param_1 + 0x20) = iVar4;
        goto LAB_1004dcec8;
      }
      iVar4 = *(int *)(param_2 + 0x24);
      if (iVar4 != 0) {
LAB_1004dced4:
        if (*(int *)(param_1 + 0x24) == 0) goto LAB_1004dcedc;
      }
    }
    if ((*(int *)(param_2 + 0x28) != -1) && (((uVar8 & 1) != 0 || (*(int *)(param_1 + 0x28) == -1)))
       ) {
      *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
    }
    uVar5 = *(ulong *)(param_1 + 0x18);
    if (((uint)uVar5 >> 1 & 1) == 0) goto LAB_1004dcf08;
  }
  else {
    *(int *)(param_1 + 0x20) = iVar4;
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    uVar5 = *(ulong *)(param_1 + 0x18);
LAB_1004dcf08:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    uVar5 = uVar5 & 0xfffffffffffffffd;
    *(ulong *)(param_1 + 0x18) = uVar5;
  }
  if ((uVar7 >> 2 & 1) != 0) {
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_2 + 0x18) | uVar5;
  if ((uVar7 >> 1 & 1) == 0) {
    if (*(long *)(param_2 + 0x30) == 0) {
LAB_1004dcf70:
      if (*(long *)(param_2 + 0x38) != 0) {
        if ((uVar8 & 1) == 0) goto LAB_1004dcf7c;
        goto LAB_1004dcf84;
      }
    }
    else {
      if (((uVar8 & 1) != 0) || (*(long *)(param_1 + 0x30) == 0)) {
        lVar2 = param_1;
        func_0x000107c2b624();
        if ((int)lVar2 == 0) {
          return lVar2;
        }
        goto LAB_1004dcf70;
      }
      if (*(long *)(param_2 + 0x38) != 0) {
LAB_1004dcf7c:
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_1004dcf84;
      }
    }
LAB_1004dd034:
    if (*(long *)(param_2 + 0x50) == 0) {
LAB_1004dd064:
      if (*(long *)(param_2 + 0x60) != 0) {
        if ((uVar8 & 1) == 0) goto LAB_1004dd070;
        goto LAB_1004dd08c;
      }
    }
    else {
      if (((uVar8 & 1) != 0) || (*(long *)(param_1 + 0x50) == 0)) {
        lVar2 = param_1;
        func_0x000107c2b628(param_1,*(long *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
        if ((int)lVar2 == 0) {
          return lVar2;
        }
        goto LAB_1004dd064;
      }
      if (*(long *)(param_2 + 0x60) != 0) {
LAB_1004dd070:
        if (*(long *)(param_1 + 0x60) == 0) goto LAB_1004dd08c;
      }
    }
LAB_1004dd0b4:
    uVar3 = *(undefined1 *)(param_2 + 0x70);
    lVar2 = 1;
  }
  else {
    lVar2 = param_1;
    func_0x000107c2b624();
    if ((int)lVar2 == 0) {
      return lVar2;
    }
LAB_1004dcf84:
    puVar6 = *(ulong **)(param_1 + 0x38);
    if (puVar6 != (ulong *)0x0) {
      uVar5 = *puVar6;
      if (uVar5 != 0) {
        uVar9 = 0;
        do {
          if (*(long *)(puVar6[1] + uVar9 * 8) != 0) {
            FUN_1001e33e0();
            uVar5 = *puVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
      FUN_1001e33e0(puVar6[1]);
      FUN_1001e33e0(puVar6);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    puVar6 = *(ulong **)(param_2 + 0x38);
    if (puVar6 != (ulong *)0x0) {
      FUN_100229de4();
      if (puVar6 == (ulong *)0x0) {
LAB_1004dd104:
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 0;
      }
      uVar5 = *puVar6;
      if (uVar5 != 0) {
        uVar9 = 0;
        uVar1 = puVar6[1];
        do {
          lVar2 = *(long *)(uVar1 + uVar9 * 8);
          if (lVar2 != 0) {
            func_0x0001001e6ec8();
            *(long *)(puVar6[1] + uVar9 * 8) = lVar2;
            uVar1 = puVar6[1];
            if (*(long *)(uVar1 + uVar9 * 8) == 0) {
              if (uVar9 != 0) {
                uVar8 = 0;
                do {
                  if (*(long *)(puVar6[1] + uVar8 * 8) != 0) {
                    FUN_1001e33e0();
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar9 != uVar8);
                uVar1 = puVar6[1];
              }
              FUN_1001e33e0(uVar1);
              FUN_1001e33e0(puVar6);
              goto LAB_1004dd104;
            }
            uVar5 = *puVar6;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar5);
      }
      *(ulong **)(param_1 + 0x38) = puVar6;
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    }
    if ((uVar7 >> 1 & 1) == 0) goto LAB_1004dd034;
    lVar2 = param_1;
    func_0x000107c2b628(param_1,*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x58));
    if ((int)lVar2 == 0) {
      return lVar2;
    }
LAB_1004dd08c:
    if ((*(long *)(param_2 + 0x68) == 0x10) || (*(long *)(param_2 + 0x68) == 4)) {
      lVar2 = param_1 + 0x60;
      func_0x000107c2b630(lVar2,param_1 + 0x68,*(undefined8 *)(param_2 + 0x60));
      if ((int)lVar2 != 0) goto LAB_1004dd0b4;
    }
    else {
      lVar2 = 0;
    }
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x70) = uVar3;
  return lVar2;
}



/* Entry: 1004dd120; end: 1004dd127;  */

void FUN_1004dd120(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



/* Entry: 1004dd128; end: 1004dd2e3;  */

undefined8 FUN_1004dd128(undefined8 *param_1,ulong param_2,undefined8 *param_3,ulong param_4)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  
  puVar5 = &UNK_110c7bcd8;
  puVar4 = puVar5;
  FUN_1001e73a4();
  FUN_1001e73a4();
  if (puVar4 != (undefined *)0x0 && puVar5 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar4 + 0x20);
    if ((*plVar6 == 0) && (plVar7 = *(long **)(puVar5 + 0x20), *plVar7 == 0)) {
      if (plVar6[5] == 0) {
        if (param_2 == 0) {
          param_2 = plVar6[4];
        }
        else {
          plVar6[4] = param_2;
        }
        if (param_2 < 0xfffffffffffffff8) {
          puVar1 = (ulong *)(param_2 + 8);
          func_0x000107c610a0();
          if (puVar1 != (ulong *)0x0) {
            *puVar1 = param_2;
            plVar6[5] = (long)(puVar1 + 1);
            plVar6[2] = 0;
            plVar6[3] = 0;
            goto LAB_1004dd1f4;
          }
        }
        plVar6[5] = 0;
        uVar2 = 0x41;
        uVar3 = 0x140;
      }
      else {
LAB_1004dd1f4:
        if (plVar7[5] != 0) {
LAB_1004dd1fc:
          *plVar6 = (long)puVar5;
          *(undefined4 *)(plVar6 + 1) = 0;
          plVar6[6] = 0;
          *plVar7 = (long)puVar4;
          *(undefined4 *)(plVar7 + 1) = 0;
          plVar7[6] = 0;
          uVar2 = 1;
          *(undefined4 *)(puVar4 + 8) = 1;
          *(undefined4 *)(puVar5 + 8) = 1;
          goto LAB_1004dd1cc;
        }
        if (param_4 == 0) {
          param_4 = plVar7[4];
        }
        else {
          plVar7[4] = param_4;
        }
        if (param_4 < 0xfffffffffffffff8) {
          puVar1 = (ulong *)(param_4 + 8);
          func_0x000107c610a0();
          if (puVar1 != (ulong *)0x0) {
            *puVar1 = param_4;
            plVar7[5] = (long)(puVar1 + 1);
            plVar7[2] = 0;
            plVar7[3] = 0;
            goto LAB_1004dd1fc;
          }
        }
        plVar7[5] = 0;
        uVar2 = 0x41;
        uVar3 = 0x14d;
      }
    }
    else {
      uVar2 = 0x69;
      uVar3 = 0x136;
    }
    FUN_1004d2c58(0x11,0,uVar2,&UNK_10f6c52d7,uVar3);
  }
  func_0x0001004d2e54(puVar4);
  func_0x0001004d2e54(puVar5);
  puVar4 = (undefined *)0x0;
  puVar5 = (undefined *)0x0;
  uVar2 = 0;
LAB_1004dd1cc:
  *param_1 = puVar4;
  *param_3 = puVar5;
  return uVar2;
}



/* Entry: 1004dd2e4; end: 1004dd33b;  */

void FUN_1004dd2e4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c610a0();
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x38;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[7] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[5] = 0x4400;
    *(undefined8 **)(param_1 + 0x20) = puVar1 + 1;
  }
  return;
}



/* Entry: 1004dd33c; end: 1004dd413;  */

/* WARNING: Possible PIC construction at 0x0001004dd3dc: Changing call to branch */

long * FUN_1004dd33c(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  plVar6 = *(long **)(param_1 + 0x18);
  if ((plVar6 != param_2) || (*(long **)(param_1 + 0x20) != param_3)) {
    if ((param_2 != (long *)0x0) && (param_2 == param_3)) {
      piVar2 = (int *)((long)param_2 + 0x1c);
      iVar9 = *piVar2;
      do {
        if (iVar9 == -1) break;
        iVar3 = *piVar2;
        if (iVar3 == iVar9) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          bVar5 = cVar4 == '\0';
        }
        else {
          bVar5 = false;
          ClearExclusiveLocal();
        }
        iVar9 = iVar3;
      } while (!bVar5);
      plVar6 = *(long **)(param_1 + 0x18);
    }
    plVar8 = *(long **)(param_1 + 0x20);
    if (plVar6 != param_2) {
      *(long **)(param_1 + 0x18) = param_2;
      if (plVar6 != (long *)0x0) {
        unaff_x30 = 0x1004dd3e0;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
        plVar8 = plVar6;
        unaff_x19 = param_3;
        unaff_x20 = param_1;
        unaff_x29 = puVar1;
        goto SUB_1004d2e54;
      }
      if (plVar8 == param_3 && plVar6 != plVar8) {
        return (long *)0x0;
      }
      plVar8 = *(long **)(param_1 + 0x20);
    }
    *(long **)(param_1 + 0x20) = param_3;
    if (plVar8 != (long *)0x0) {
SUB_1004d2e54:
      if (plVar8 == (long *)0x0) {
        return (long *)0x1;
      }
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      do {
        plVar6 = (long *)((long)plVar8 + 0x1c);
        FUN_10021f0b0();
        if ((int)plVar6 == 0) {
          return plVar6;
        }
        plVar6 = (long *)plVar8[5];
        plVar8[5] = 0;
        if ((*plVar8 != 0) && (pcVar7 = *(code **)(*plVar8 + 0x40), pcVar7 != (code *)0x0)) {
          (*pcVar7)(plVar8);
        }
        FUN_1001e33e0(plVar8);
        plVar8 = plVar6;
      } while (plVar6 != (long *)0x0);
      return (long *)0x1;
    }
  }
  return plVar6;
}



/* Entry: 1004dd414; end: 1004dd453;  */

void FUN_1004dd414(long param_1)

{
  *(byte *)(param_1 + 0xa4) = *(byte *)(param_1 + 0xa4) & 0xfe;
  *(code **)(param_1 + 0x28) = FUN_1001e8f5c;
  return;
}



/* Entry: 1004dd454; end: 1004dd4d3;  */

undefined8 * FUN_1004dd454(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x20;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d0935,0xc6);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = puVar3 + 1;
    *puVar4 = &PTR_DAT_110c8a688;
    *puVar3 = 0x18;
    uVar1 = *param_1;
    uVar2 = *param_2;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = uVar1;
    *(short *)((long)puVar3 + 0x1c) = (short)uVar2;
  }
  return puVar4;
}



/* Entry: 1004dd4d4; end: 1004dd62f;  */

undefined8 FUN_1004dd4d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar1 = param_1;
  FUN_100225874();
  if (lVar1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_1002258d0();
    puVar2 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
    FUN_100410544();
    puVar3 = puVar2;
    FUN_10020254c();
    lVar4 = *(long *)(param_1 + 8);
    *(undefined8 **)(param_1 + 8) = puVar3;
    if (lVar4 != 0) {
      FUN_10021f3c8();
    }
    if (puVar2 == (undefined8 *)0x0) {
      param_2 = 0;
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      if (((lVar4 == 0) || (FUN_1004dd630(lVar4,1,puVar2 + 2), (int)lVar4 == 0)) ||
         (puVar3 = puVar2, FUN_100411cb8(), puVar3 == (undefined8 *)0x0)) {
        param_2 = 0;
      }
      else {
        puVar5 = puVar2;
        FUN_1004dd8a4(puVar2,puVar3,*(undefined8 *)(param_1 + 8),0,0,lVar1);
        if ((int)puVar5 == 0) {
          param_2 = 0;
        }
        else {
          func_0x0001004143d0(param_2,puVar2,puVar3,4,lVar1);
        }
        func_0x000100411da0(*puVar3);
        FUN_1001e33e0(puVar3);
      }
      func_0x000100411da0(puVar2);
    }
    if (*(char *)(lVar1 + 0x28) == '\0') {
      lVar4 = *(long *)(lVar1 + 0x10) + -1;
      *(long *)(lVar1 + 0x10) = lVar4;
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(*(long *)(lVar1 + 8) + lVar4 * 8);
    }
    FUN_100226a68(lVar1);
  }
  return param_2;
}



/* Entry: 1004dd630; end: 1004dd697;  */

void FUN_1004dd630(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  FUN_100202744(param_1,(long)*(int *)(param_3 + 1));
  if ((int)puVar1 != 0) {
    uVar2 = *param_1;
    FUN_1004dd720(uVar2,param_2,*param_3,(long)*(int *)(param_3 + 1),&UNK_10e5259b0);
    if ((int)uVar2 != 0) {
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
    }
  }
  return;
}



/* Entry: 1004dd698; end: 1004dd71f;  */

undefined8 FUN_1004dd698(long *param_1,ulong *param_2,ulong param_3,ulong *param_4,long param_5)

{
  ulong uVar1;
  
  do {
    if (param_5 == 0) {
LAB_1004dd6f0:
      FUN_1004d2c58(3,0,0x6c,&UNK_10f6c6b8c,0xe2);
      return 0;
    }
    uVar1 = param_4[param_5 + -1];
    if (uVar1 != 0) {
      if ((param_5 != 1) || (param_3 < *param_4)) {
        uVar1 = uVar1 | uVar1 >> 1;
        uVar1 = uVar1 | uVar1 >> 2;
        uVar1 = uVar1 | uVar1 >> 4;
        uVar1 = uVar1 | uVar1 >> 8;
        uVar1 = uVar1 | uVar1 >> 0x10;
        *param_1 = param_5;
        *param_2 = uVar1 | uVar1 >> 0x20;
        return 1;
      }
      goto LAB_1004dd6f0;
    }
    param_5 = param_5 + -1;
  } while( true );
}



/* Entry: 1004dd720; end: 1004dd81b;  */

void FUN_1004dd720(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ulong uStack_70;
  long lStack_68;
  
  plVar3 = &lStack_68;
  FUN_1004dd698(plVar3,&uStack_70,param_2,param_3,param_4);
  if ((int)plVar3 != 0) {
    lVar1 = param_1 + lStack_68 * 8;
    if ((param_4 - lStack_68 & 0x1fffffffffffffffU) != 0) {
      func_0x000107c60ee4(lVar1);
    }
    uVar5 = 0xffffff9c;
    do {
      bVar2 = 0xfffffffe < uVar5;
      uVar5 = uVar5 + 1;
      if (bVar2) {
        FUN_1004d2c58(3,0,0x73,&UNK_10f6c6b8c,0x10b);
        return;
      }
      FUN_1001e47a4(param_1,lStack_68 << 3,param_5);
      *(ulong *)(lVar1 + -8) = *(ulong *)(lVar1 + -8) & uStack_70;
      lVar4 = param_1;
      FUN_1004dd81c(param_1,param_2,param_3,lStack_68);
    } while ((int)lVar4 == 0);
  }
  return;
}



/* Entry: 1004dd81c; end: 1004dd8a3;  */

uint FUN_1004dd81c(ulong *param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0xffffffff;
  }
  else if (param_4 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = 0;
    puVar3 = param_1;
    lVar1 = param_4;
    while (lVar1 = lVar1 + -1, lVar1 != 0) {
      puVar3 = puVar3 + 1;
      uVar2 = *puVar3 | uVar2;
    }
    uVar4 = (uint)(*param_1 >> 0x20);
    uVar4 = ~((int)((uint)(uVar2 - 1 >> 0x20) & ((uint)(uVar2 >> 0x20) ^ 0xffffffff) &
                   (((uint)(*param_1 - param_2 >> 0x20) ^ uVar4 |
                    uVar4 ^ (uint)((ulong)param_2 >> 0x20)) ^ uVar4)) >> 0x1f);
  }
  FUN_100225a88(param_1,param_4);
  return uVar4 & (uint)param_1 >> 0x1f;
}



/* Entry: 1004dd8a4; end: 1004dda8f;  */

undefined8
FUN_1004dd8a4(long *param_1,undefined8 *param_2,long param_3,undefined8 *param_4,long param_5,
             long *param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [72];
  
  if (((param_4 == (undefined8 *)0x0) != (param_5 == 0)) || (param_3 == 0 && param_5 == 0)) {
    uVar2 = 0x43;
    uVar3 = 0x3ba;
LAB_1004dd940:
    FUN_1004d2c58(0xf,0,uVar2,&UNK_10f6c6f00,uVar3);
    return 0;
  }
  plVar4 = param_1;
  func_0x000100411ef4(param_1,*param_2);
  if (((int)plVar4 != 0) ||
     ((param_4 != (undefined8 *)0x0 &&
      (plVar4 = param_1, func_0x000100411ef4(param_1,*param_4), (int)plVar4 != 0)))) {
    uVar2 = 0x6a;
    uVar3 = 0x3c0;
    goto LAB_1004dd940;
  }
  if (param_6 == (long *)0x0) {
    FUN_100225874();
    param_6 = plVar4;
    if (plVar4 != (long *)0x0) goto LAB_1004dd998;
  }
  else {
    plVar4 = (long *)0x0;
LAB_1004dd998:
    if ((param_3 == 0) ||
       ((plVar1 = param_1, FUN_1004dda90(param_1,&uStack_170,param_3,param_6), (int)plVar1 != 0 &&
        (plVar1 = param_1, FUN_100412bb8(param_1,param_2 + 1,&uStack_170), (int)plVar1 != 0)))) {
      if (param_5 != 0) {
        plVar1 = param_1;
        FUN_1004dda90(param_1,auStack_98,param_5,param_6);
        if (((int)plVar1 == 0) ||
           (plVar1 = param_1, FUN_100727cfc(param_1,&uStack_170,param_4 + 1,auStack_98),
           (int)plVar1 == 0)) goto LAB_1004dda20;
        if (param_3 == 0) {
          param_2[0x16] = uStack_c8;
          param_2[0x15] = uStack_d0;
          param_2[0x18] = uStack_b8;
          param_2[0x17] = uStack_c0;
          param_2[0x1a] = uStack_a8;
          param_2[0x19] = uStack_b0;
          param_2[0xe] = uStack_108;
          param_2[0xd] = uStack_110;
          param_2[0x10] = uStack_f8;
          param_2[0xf] = uStack_100;
          param_2[0x12] = uStack_e8;
          param_2[0x11] = uStack_f0;
          param_2[0x14] = uStack_d8;
          param_2[0x13] = uStack_e0;
          param_2[6] = uStack_148;
          param_2[5] = uStack_150;
          param_2[8] = uStack_138;
          param_2[7] = uStack_140;
          param_2[10] = uStack_128;
          param_2[9] = uStack_130;
          param_2[0xc] = uStack_118;
          param_2[0xb] = uStack_120;
          param_2[2] = uStack_168;
          param_2[1] = uStack_170;
          param_2[0x1b] = uStack_a0;
          param_2[4] = uStack_158;
          param_2[3] = uStack_160;
        }
        else {
          (**(code **)(*param_1 + 0x28))(param_1,param_2 + 1,param_2 + 1,&uStack_170);
        }
      }
      uVar2 = 1;
      goto LAB_1004dda84;
    }
  }
LAB_1004dda20:
  uVar2 = 0;
LAB_1004dda84:
  FUN_100226a68(plVar4);
  return uVar2;
}



/* Entry: 1004dda90; end: 1004ddc3b;  */

void FUN_1004dda90(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1;
  FUN_1004124a4();
  if ((int)uVar1 == 0) {
    FUN_1001e83a0();
    FUN_1002258d0(param_4);
    lVar3 = param_4;
    FUN_100225974();
    if ((lVar3 != 0) && (lVar2 = lVar3, func_0x000107c2b364(), (int)lVar2 != 0)) {
      FUN_1004124a4(param_1,param_2,lVar3);
    }
    if (*(char *)(param_4 + 0x28) == '\0') {
      lVar3 = *(long *)(param_4 + 0x10) + -1;
      *(long *)(param_4 + 0x10) = lVar3;
      *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*(long *)(param_4 + 8) + lVar3 * 8);
    }
  }
  return;
}



/* Entry: 1004ddc3c; end: 1004ddd53;  */

ulong FUN_1004ddc3c(long param_1,int param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x20);
  if (param_2 < 0xd) {
    if (param_2 < 9) {
      if (param_2 == 2) {
        if (param_4 == 0) {
          return 1;
        }
        if (*(long *)(*(long *)(param_4 + 0x20) + 0x10) == 0) {
          return (ulong)(*(int *)(*(long *)(param_4 + 0x20) + 8) != 0);
        }
      }
      else if (param_2 == 8) {
        return (long)*(int *)(param_1 + 0xc);
      }
    }
    else {
      if (param_2 == 9) {
        *(undefined4 *)(param_1 + 0xc) = param_3;
        return 1;
      }
      if (param_2 == 10) {
        if (*plVar1 != 0) {
          plVar1 = *(long **)(*plVar1 + 0x20);
          goto LAB_1004ddd3c;
        }
      }
      else if (param_2 == 0xb) {
        return 1;
      }
    }
  }
  else if (param_2 < 0x8d) {
    if (param_2 == 0xd) {
      if (plVar1[5] != 0) {
LAB_1004ddd3c:
        return plVar1[2];
      }
    }
    else {
      if (param_2 == 0x89) {
        return plVar1[4];
      }
      if (((param_2 == 0x8c) && (*plVar1 != 0)) && ((int)plVar1[1] == 0)) {
        return plVar1[4] - plVar1[2];
      }
    }
  }
  else {
    if (param_2 == 0x8d) {
      return plVar1[6];
    }
    if (param_2 == 0x8e) {
      *(undefined4 *)(plVar1 + 1) = 1;
      return 1;
    }
    if (param_2 == 0x93) {
      plVar1[6] = 0;
      return 1;
    }
  }
  return 0;
}



/* Entry: 1004ddd54; end: 1004dde67;  */

ulong FUN_1004ddd54(long param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(uint *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    lVar8 = *(long *)(**(long **)(param_1 + 0x20) + 0x20);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    uVar7 = (ulong)param_3;
    uVar5 = *(ulong *)(lVar8 + 0x10);
    if (uVar5 != 0) {
      uVar3 = uVar5;
      if (uVar7 <= uVar5) {
        uVar3 = uVar7;
      }
      lVar6 = *(long *)(lVar8 + 0x18);
      uVar7 = uVar3;
      do {
        uVar4 = *(ulong *)(lVar8 + 0x20) - lVar6;
        if (uVar7 + lVar6 <= *(ulong *)(lVar8 + 0x20)) {
          uVar4 = uVar7;
        }
        if (uVar4 != 0) {
          func_0x000107c610b4(param_2,*(long *)(lVar8 + 0x28) + lVar6,uVar4);
          uVar5 = *(ulong *)(lVar8 + 0x10);
        }
        uVar5 = uVar5 - uVar4;
        *(ulong *)(lVar8 + 0x10) = uVar5;
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar1 = *(long *)(lVar8 + 0x18) + uVar4;
          lVar6 = 0;
          if (lVar1 != *(long *)(lVar8 + 0x20)) {
            lVar6 = lVar1;
          }
          param_2 = param_2 + uVar4;
        }
        *(long *)(lVar8 + 0x18) = lVar6;
        uVar7 = uVar7 - uVar4;
      } while (uVar7 != 0);
      return uVar3;
    }
    if (*(int *)(lVar8 + 8) == 0) {
      *(uint *)(param_1 + 0x10) = uVar2 | 9;
      uVar5 = *(ulong *)(lVar8 + 0x20);
      if (uVar7 <= *(ulong *)(lVar8 + 0x20)) {
        uVar5 = uVar7;
      }
      *(ulong *)(lVar8 + 0x30) = uVar5;
      return 0xffffffff;
    }
  }
  return 0;
}



/* Entry: 1004dde68; end: 1004dde7f;  */

void FUN_1004dde68(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + (long)param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}



/* Entry: 1004dde80; end: 1004ddff7;  */

void FUN_1004dde80(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    puVar4 = (undefined8 *)0x10;
    func_0x000107c60e20();
    *puVar4 = &PTR_DAT_1107c69f0;
    puVar4[1] = 1;
  }
  else {
    puVar4 = (undefined8 *)0x238;
    func_0x000107c60e20();
    *puVar4 = &PTR_FUN_1107c6a70;
    puVar4[1] = 1;
    puVar4[2] = param_2;
    plVar1 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[3] = param_3;
    FUN_100460318(puVar4 + 4);
    *(undefined1 *)(puVar4 + 0xc) = 0;
    puVar4[0xe] = 0;
    puVar4[0xd] = 0;
    puVar4[0x10] = 0;
    puVar4[0xf] = 0;
    puVar4[0x11] = 0x100;
    uVar5 = 0x100;
    FUN_100460200();
    puVar4[0x12] = uVar5;
    puVar4[0x45] = 0;
    puVar4[0x44] = 0;
    FUN_1004865ac(param_4,"grpc.tsi.max_frame_size",0,0x7fffffff);
    puVar4[0x46] = (long)(int)param_4;
    func_0x0001004b800c(puVar4 + 0x13);
    puVar4[0x41] = FUN_1007408d0;
    puVar4[0x42] = puVar4;
    puVar4[0x43] = 0;
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 1004ddff8; end: 1004de11f;  */

ulong * FUN_1004ddff8(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong **ppuVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puStack_50;
  ulong uStack_48;
  
  ppuVar5 = &puStack_50;
  puVar11 = param_1 + 1;
  uVar13 = *param_1;
  if ((uVar13 & 1) == 0) {
    uVar7 = 4;
  }
  else {
    puVar11 = (ulong *)param_1[1];
    uVar7 = param_1[2] << 1;
  }
  puStack_50 = (ulong *)0x0;
  uStack_48 = 0;
  FUN_1004de120();
  uVar12 = uVar13 >> 1;
  puVar2 = (ulong *)(ppuVar5 + uVar12);
  puStack_50 = (ulong *)ppuVar5;
  uStack_48 = uVar7;
  *puVar2 = 0;
  *puVar2 = *param_2;
  *param_2 = 0;
  puVar8 = puStack_50;
  uVar7 = uVar12;
  puVar10 = puVar11;
  if (1 < uVar13) {
    do {
      *puVar8 = 0;
      *puVar8 = *puVar10;
      *puVar10 = 0;
      uVar7 = uVar7 - 1;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 != 0);
    do {
      while( true ) {
        uVar12 = uVar12 - 1;
        plVar6 = (long *)puVar11[uVar12];
        if (plVar6 != (long *)0x0) break;
LAB_1004de0c0:
        if (uVar12 == 0) goto LAB_1004de0c4;
      }
      plVar1 = plVar6 + 1;
      do {
        lVar9 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 != 0) goto LAB_1004de0c0;
      (**(code **)(*plVar6 + 8))();
    } while (uVar12 != 0);
  }
LAB_1004de0c4:
  uVar13 = *param_1;
  if ((uVar13 & 1) != 0) {
    func_0x000107c60e14(param_1[1]);
    uVar13 = *param_1;
  }
  param_1[1] = (ulong)puStack_50;
  param_1[2] = uStack_48;
  *param_1 = (uVar13 | 1) + 2;
  return puVar2;
}



/* Entry: 1004de120; end: 1004de153;  */

void FUN_1004de120(long *param_1,ulong param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_78;
  
  if (param_2 >> 0x3d == 0) {
    func_0x000107c60e20(param_2 << 3);
    return;
  }
  func_0x000104a7757c();
  FUN_100460448(param_1 + 2);
  if (param_1[0xe] == 0) {
    param_1[0x23] = param_2;
    param_1[0x28] = param_4;
    FUN_1004bf248();
    param_1[0x24] = param_3;
    param_1[0x27] = param_7;
    lVar5 = 0x128;
    FUN_100460200();
    param_1[0x25] = lVar5;
    func_0x0001004b800c();
    if (((param_5 != 0) && (*(char *)(param_5 + 0x10) != '\0')) && (*(long *)(param_5 + 0x18) != 0))
    {
      FUN_1006148f8(param_1[0x25],*(long *)(param_5 + 0x18) + 0x18);
    }
    param_1[0x10] = (long)FUN_1005a62a8;
    param_1[0x11] = (long)param_1;
    param_1[0x12] = 0;
    param_1[0x13] = param_5;
    param_1[0x20] = param_6;
    param_1[0x21] = (long)(param_1 + 0x23);
    plVar1 = param_1 + 1;
    param_1[0x22] = 0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    param_1[0x1c] = (long)FUN_1007424e0;
    param_1[0x1d] = (long)param_1;
    param_1[0x1e] = 0;
    func_0x000100480ee4(param_1 + 0x14,param_4,param_1 + 0x1b);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uStack_78 = 0;
    plVar6 = param_1;
    FUN_1004de32c(param_1,&uStack_78);
    if ((uStack_78 & 1) != 0) {
      FUN_10084dad0();
    }
    func_0x000100466b80(param_1 + 2);
    if ((int)plVar6 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001004de2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 8))(param_1);
        return;
      }
    }
    return;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/handshaker.cc"
                ,0xb7,2,"assertion failed: %s");
  func_0x000107c60ebc();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1004de2d4);
  (*pcVar4)();
}



/* Entry: 1004de154; end: 1004de32b;  */

void FUN_1004de154(long *param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  ulong uStack_58;
  
  FUN_100460448(param_1 + 2);
  if (param_1[0xe] != 0) {
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/transport/handshaker.cc"
                  ,0xb7,2,"assertion failed: %s");
    func_0x000107c60ebc();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004de2d4);
    (*pcVar4)();
  }
  param_1[0x23] = param_2;
  param_1[0x28] = param_4;
  FUN_1004bf248();
  param_1[0x24] = param_3;
  param_1[0x27] = param_7;
  lVar5 = 0x128;
  FUN_100460200();
  param_1[0x25] = lVar5;
  func_0x0001004b800c();
  if (((param_5 != 0) && (*(char *)(param_5 + 0x10) != '\0')) && (*(long *)(param_5 + 0x18) != 0)) {
    FUN_1006148f8(param_1[0x25],*(long *)(param_5 + 0x18) + 0x18);
  }
  param_1[0x10] = (long)FUN_1005a62a8;
  param_1[0x11] = (long)param_1;
  param_1[0x12] = 0;
  param_1[0x13] = param_5;
  param_1[0x20] = param_6;
  param_1[0x21] = (long)(param_1 + 0x23);
  plVar1 = param_1 + 1;
  param_1[0x22] = 0;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x1c] = (long)FUN_1007424e0;
  param_1[0x1d] = (long)param_1;
  param_1[0x1e] = 0;
  func_0x000100480ee4(param_1 + 0x14,param_4,param_1 + 0x1b);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_58 = 0;
  plVar6 = param_1;
  FUN_1004de32c(param_1,&uStack_58);
  if ((uStack_58 & 1) != 0) {
    FUN_10084dad0();
  }
  func_0x000100466b80(param_1 + 2);
  if ((int)plVar6 != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001004de2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1004de32c; end: 1004de5bb;  */

/* WARNING: Removing unreachable block (ram,0x0001004dec9c) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_1004de32c(long param_1,ulong *param_2,undefined8 param_3,undefined8 *****param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  int iVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  char *pcVar18;
  ulong uVar19;
  int *piVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long *plVar23;
  int iStack_230;
  int iStack_22c;
  undefined8 *******pppppppuStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 *******pppppppuStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [8];
  undefined8 *******pppppppuStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined8 ******ppppppuStack_1c8;
  undefined1 *in_stack_fffffffffffffe40;
  long lStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ****ppppuStack_1a0;
  long *plStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  char acStack_180 [31];
  undefined1 uStack_161;
  ulong uStack_160;
  long lStack_158;
  undefined1 auStack_150 [144];
  char *pcStack_c0;
  char *pcStack_b8;
  long lStack_a8;
  undefined1 *puStack_70;
  code *pcStack_68;
  ulong uStack_60;
  ulong auStack_58 [4];
  undefined1 uStack_31;
  ulong uStack_30;
  ulong *puStack_28;
  
  uVar19 = *(ulong *)(param_1 + 0x70);
  uVar21 = *(ulong *)(param_1 + 0x58);
  if (uVar19 <= uVar21 >> 1) {
    if (*param_2 == 0) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        if (uVar19 != uVar21 >> 1 && *(char *)(param_1 + 0x130) == '\0') {
          puVar22 = (undefined8 *)(param_1 + 0x60);
          if ((uVar21 & 1) != 0) {
            puVar22 = (undefined8 *)*puVar22;
          }
          if (puVar22[uVar19] == 0) {
            plVar23 = (long *)0x0;
          }
          else {
            plVar23 = (long *)(puVar22[uVar19] + 8);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar4) {
                *plVar23 = *plVar23 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            plVar23 = (long *)puVar22[uVar19];
          }
          (**(code **)(*plVar23 + 0x18))
                    (plVar23,*(undefined8 *)(param_1 + 0x98),param_1 + 0x78,param_1 + 0x118);
          plVar12 = plVar23 + 1;
          do {
            lVar7 = *plVar12;
            cVar1 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar4) {
              *plVar12 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 + -1 == 0) {
            (**(code **)(*plVar23 + 8))(plVar23);
          }
          goto LAB_1004de3a8;
        }
      }
      else {
        auStack_58[2] = 0;
        auStack_58[3] = 0;
        auStack_58[1] = 0;
        func_0x000104ab5920(&uStack_30,2,"handshaker shutdown",0x13,&uStack_31,auStack_58 + 1);
        uVar19 = *param_2;
        if (uStack_30 == uVar19) {
LAB_1004de420:
          if ((uVar19 & 1) != 0) {
            FUN_10084dad0();
          }
        }
        else {
          *param_2 = uStack_30;
          uStack_30 = 0x36;
          if ((uVar19 & 1) != 0) {
            FUN_10084dad0();
            uVar19 = uStack_30;
            goto LAB_1004de420;
          }
        }
        puStack_28 = auStack_58 + 1;
        func_0x000100482b64(&puStack_28);
        lVar7 = *(long *)(param_1 + 0x118);
        if (lVar7 != 0) {
          auStack_58[0] = *param_2;
          if ((auStack_58[0] & 1) != 0) {
            piVar20 = (int *)(auStack_58[0] - 1);
            do {
              cVar1 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar4) {
                *piVar20 = *piVar20 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          func_0x000104aba5c4(lVar7,auStack_58);
          if ((auStack_58[0] & 1) != 0) {
            FUN_10084dad0();
          }
          func_0x000104aba638(*(undefined8 *)(param_1 + 0x118));
          *(undefined8 *)(param_1 + 0x118) = 0;
          FUN_10048650c(*(undefined8 *)(param_1 + 0x120));
          *(undefined8 *)(param_1 + 0x120) = 0;
          FUN_10061ce28(*(undefined8 *)(param_1 + 0x128));
          FUN_100460314(*(undefined8 *)(param_1 + 0x128));
          *(undefined8 *)(param_1 + 0x128) = 0;
        }
      }
    }
    FUN_1005a5960(param_1 + 0xa0);
    uStack_60 = *param_2;
    if ((uStack_60 & 1) != 0) {
      piVar20 = (int *)(uStack_60 - 1);
      do {
        cVar1 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar4) {
          *piVar20 = *piVar20 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    FUN_1004bd7e8(&puStack_28,param_1 + 0xf8,&uStack_60);
    if ((uStack_60 & 1) != 0) {
      FUN_10084dad0();
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
LAB_1004de3a8:
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    return (long *)(ulong)*(byte *)(param_1 + 0x50);
  }
  func_0x000107c2c42c();
  FUN_1004bdf74(&uStack_30);
  puStack_28 = auStack_58 + 1;
  func_0x000100482b64(&puStack_28);
  func_0x000107c60bd8();
  pcStack_68 = FUN_1004de5bc;
  lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = (undefined8 ****)(param_1 + 0x10);
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_100460448(ppppuVar11);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  func_0x000100466b80(ppppuVar11);
  if (*param_4 != (undefined8 ****)0x0) {
    func_0x000107c2c434();
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1004de778);
    (*pcVar3)();
  }
  *(undefined8 ******)(param_1 + 0x88) = param_4;
  ppppuVar8 = param_4[1];
  FUN_100481218(ppppuVar8,"grpc.internal.tcp_handshaker_resolved_address");
  ppppuVar9 = ppppuVar8;
  func_0x000107c613d0();
  FUN_10047ae00(&lStack_158,ppppuVar8,ppppuVar9);
  if (lStack_158 == 0) {
    puVar10 = auStack_150;
    FUN_1004de7ec(puVar10,param_1 + 0x94);
    if (((ulong)puVar10 & 1) == 0) goto LAB_1004de6d8;
    ppppuVar11 = param_4[1];
    FUN_100480b50(ppppuVar11,"grpc.internal.tcp_handshaker_bind_endpoint_to_pollset",0);
    *(char *)(param_1 + 0x90) = (char)ppppuVar11;
    pcStack_b8 = "grpc.internal.tcp_handshaker_bind_endpoint_to_pollset";
    pcStack_c0 = "grpc.internal.tcp_handshaker_resolved_address";
    ppppuVar11 = param_4[1];
    FUN_100486500(ppppuVar11,&pcStack_c0,2);
    FUN_10048650c(param_4[1]);
    param_4[1] = ppppuVar11;
    plVar23 = (long *)(param_1 + 8);
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar4) {
        *plVar23 = *plVar23 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar15 = (ulong *)(param_1 + 0x58);
    func_0x0001004ded20(param_1 + 0x118,puVar15,*(undefined8 *)(param_1 + 0x70),param_4[1],
                        param_1 + 0x94,param_4[5]);
  }
  else {
LAB_1004de6d8:
    FUN_100460448(ppppuVar11);
    acStack_180[8] = '\0';
    acStack_180[9] = '\0';
    acStack_180[10] = '\0';
    acStack_180[0xb] = '\0';
    acStack_180[0xc] = '\0';
    acStack_180[0xd] = '\0';
    acStack_180[0xe] = '\0';
    acStack_180[0xf] = '\0';
    acStack_180[0x10] = '\0';
    acStack_180[0x11] = '\0';
    acStack_180[0x12] = '\0';
    acStack_180[0x13] = '\0';
    acStack_180[0x14] = '\0';
    acStack_180[0x15] = '\0';
    acStack_180[0x16] = '\0';
    acStack_180[0x17] = '\0';
    acStack_180[0] = '\0';
    acStack_180[1] = '\0';
    acStack_180[2] = '\0';
    acStack_180[3] = '\0';
    acStack_180[4] = '\0';
    acStack_180[5] = '\0';
    acStack_180[6] = '\0';
    acStack_180[7] = '\0';
    func_0x000104ab5920(&uStack_160,2,"Resolved address in invalid format",0x22,&uStack_161,
                        acStack_180);
    puVar15 = &uStack_160;
    FUN_1005a6218(param_1);
    if ((uStack_160 & 1) != 0) {
      FUN_10084dad0();
    }
    pcStack_c0 = acStack_180;
    func_0x000100482b64(&pcStack_c0);
    func_0x000100466b80(ppppuVar11);
  }
  plVar23 = &lStack_158;
  FUN_10047cac8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a8) {
    return plVar23;
  }
  func_0x000107c60e78();
  if ((int)puVar15 != 0) {
    func_0x000104bd46a0();
  }
  plVar12 = plVar23;
  func_0x000107c60bd8();
  pcStack_188 = FUN_1004de7ec;
  cVar1 = *(char *)((long)plVar12 + 0x17);
  uStack_1d0 = plVar12;
  ppppuStack_1a0 = (undefined8 ****)plVar12;
  plStack_198 = plVar23;
  ppuStack_190 = &puStack_70;
  if (cVar1 < '\0') {
    ppppuStack_1a0 = (undefined8 ****)*plVar12;
    lVar7 = plVar12[1];
    if ((lVar7 != 4) || ((int)*ppppuStack_1a0 != 0x78696e75)) {
      if (lVar7 == 0xd) {
        if (*ppppuStack_1a0 == (undefined8 ***)0x7362612d78696e75 &&
            *(long *)((long)ppppuStack_1a0 + 5) == 0x7463617274736261) goto LAB_104aa8df4;
        ppppuStack_1a0 = (undefined8 ****)*plVar12;
        lVar7 = plVar12[1];
      }
      if (lVar7 != 4) goto LAB_1004de8b8;
LAB_1004de90c:
      ppppppuStack_1a8 = (undefined8 ******)param_4;
      if ((int)*ppppuStack_1a0 == 0x34767069) {
        pcStack_188 = FUN_1004de7ec;
        if (*(char *)((long)plVar12 + 0x17) < '\0') {
          ppppuStack_1a0 = (undefined8 ****)*plVar12;
          if ((plVar12[1] != 4) || ((int)*ppppuStack_1a0 != 0x34767069)) goto LAB_1004de9e0;
        }
        else {
          ppppuStack_1a0 = (undefined8 ****)plVar12;
          if (*(char *)((long)plVar12 + 0x17) != '\x04' || (int)*plVar12 != 0x34767069) {
LAB_1004de9e0:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xbe,2,"Expected \'ipv4\' scheme, got \'%s\'");
            return (long *)0x0;
          }
        }
        uVar19 = plVar12[7];
        plVar23 = (long *)plVar12[6];
        if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
          uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
          plVar23 = plVar12 + 6;
        }
        if (uVar19 == 0) {
          uVar19 = 0;
        }
        else if ((char)*plVar23 == '/') {
          plVar23 = (long *)((long)plVar23 + 1);
          uVar19 = uVar19 - 1;
        }
        pcStack_188 = FUN_1004de7ec;
        ppppppuStack_1c8 = (undefined8 ******)0x0;
        pppppppuStack_1e0 = (undefined8 *******)0x0;
        lStack_1d8 = 0;
        uStack_1d0 = (long *)0x0;
        plVar12 = plVar23;
        ppppuStack_1a0 = ppppuVar11;
        func_0x0001004c2450(plVar23,uVar19,&ppppppuStack_1c8,&pppppppuStack_1e0);
        if (((ulong)plVar12 & 1) == 0) {
          if (0x7ffffffffffffff7 < uVar19) {
            func_0x000104a6fa5c(&pppppppuStack_1f8);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1004decc8);
            (*pcVar3)();
          }
          if (uVar19 < 0x17) {
            uStack_1e8 = CONCAT17((char)uVar19,(undefined7)uStack_1e8);
            pppppppuVar13 = &pppppppuStack_1f8;
            if (uVar19 != 0) goto LAB_1004deb7c;
          }
          else {
            uVar21 = (uVar19 & 0xfffffffffffffff8) + 8;
            if ((uVar19 | 7) != 0x17) {
              uVar21 = uVar19 | 7;
            }
            pppppppuVar13 = (undefined8 *******)(uVar21 + 1);
            func_0x000107c60e20();
            uStack_1e8 = uVar21 + 1 | 0x8000000000000000;
            pppppppuStack_1f8 = pppppppuVar13;
            uStack_1f0 = uVar19;
LAB_1004deb7c:
            func_0x000107c610b8(pppppppuVar13,plVar23,uVar19);
          }
          *(undefined1 *)((long)pppppppuVar13 + uVar19) = 0;
          pppppppuStack_210 = pppppppuStack_1f8;
          if (-1 < (long)uStack_1e8) {
            pppppppuStack_210 = &pppppppuStack_1f8;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_1e8 < 0) {
            func_0x000107c60e14(pppppppuStack_1f8);
          }
        }
        else {
          puVar15[0xd] = 0;
          puVar15[0xc] = 0;
          puVar15[0xf] = 0;
          puVar15[0xe] = 0;
          puVar15[9] = 0;
          puVar15[8] = 0;
          puVar15[0xb] = 0;
          puVar15[10] = 0;
          puVar15[5] = 0;
          puVar15[4] = 0;
          puVar15[7] = 0;
          puVar15[6] = 0;
          puVar15[1] = 0;
          *puVar15 = 0;
          puVar15[3] = 0;
          puVar15[2] = 0;
          *(undefined4 *)(puVar15 + 0x10) = 0x10;
          *(undefined1 *)((long)puVar15 + 1) = 2;
          iVar6 = 2;
          func_0x0001004ded14(2,&ppppppuStack_1c8,(long)puVar15 + 4);
          if (iVar6 == 0) {
            pppppppuStack_210 = &ppppppuStack_1c8;
            pcVar18 = "invalid ipv4 address: \'%s\'";
            uVar17 = 0xa6;
          }
          else {
            if (-1 < (long)uStack_1d0) {
              if (uStack_1d0._7_1_ != '\0') {
                pppppppuVar13 = &pppppppuStack_1e0;
                goto LAB_1004debe4;
              }
code_r0x0001004dec28:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xac,2,"no port given for ipv4 scheme");
              goto LAB_1004dec80;
            }
            pppppppuVar13 = pppppppuStack_1e0;
            if (lStack_1d8 == 0) goto code_r0x0001004dec28;
LAB_1004debe4:
            pppppppuStack_210 = (undefined8 *******)(auStack_200 + 4);
            func_0x000107c613b4(pppppppuVar13,"%d");
            if ((((int)pppppppuVar13 == 1) && (-1 < (int)auStack_200._4_4_)) &&
               ((int)auStack_200._4_4_ < 0x10000)) {
              uVar5 = (undefined2)auStack_200._4_4_;
              func_0x0001004ded18();
              *(undefined2 *)((long)puVar15 + 2) = uVar5;
              plVar23 = (long *)0x1;
              goto LAB_1004dec84;
            }
            pppppppuStack_210 = pppppppuStack_1e0;
            if (-1 < (long)uStack_1d0) {
              pppppppuStack_210 = &pppppppuStack_1e0;
            }
            pcVar18 = "invalid ipv4 port: \'%s\'";
            uVar17 = 0xb2;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,uVar17,2,pcVar18);
        }
LAB_1004dec80:
        plVar23 = (long *)0x0;
LAB_1004dec84:
        if ((long)uStack_1d0 < 0) {
          func_0x000107c60e14(pppppppuStack_1e0);
        }
        return plVar23;
      }
      if (cVar1 < '\0') {
        ppppuStack_1a0 = (undefined8 ****)*plVar12;
        if (plVar12[1] != 4) goto LAB_1004de8b8;
        iVar6 = (int)*ppppuStack_1a0;
      }
      else {
        ppppuStack_1a0 = (undefined8 ****)plVar12;
        if (cVar1 != '\x04') goto LAB_1004de8b8;
        iVar6 = (int)*plVar12;
      }
      if (iVar6 != 0x36767069) {
LAB_1004de8b8:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x133,2,"Can\'t parse scheme \'%s\'");
        return (long *)0x0;
      }
      pcStack_188 = FUN_1004de7ec;
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        ppppuStack_1a0 = (undefined8 ****)*plVar12;
        if ((plVar12[1] != 4) || ((int)*ppppuStack_1a0 != 0x36767069)) goto code_r0x000104aa95fc;
      }
      else {
        ppppuStack_1a0 = (undefined8 ****)plVar12;
        if (*(char *)((long)plVar12 + 0x17) != '\x04' || (int)*plVar12 != 0x36767069) {
code_r0x000104aa95fc:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x11d,2,"Expected \'ipv6\' scheme, got \'%s\'");
          return (long *)0x0;
        }
      }
      uVar19 = plVar12[7];
      plVar23 = (long *)plVar12[6];
      if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
        uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
        plVar23 = plVar12 + 6;
      }
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else if ((char)*plVar23 == '/') {
        plVar23 = (long *)((long)plVar23 + 1);
        uVar19 = uVar19 - 1;
      }
      ppppppuStack_1c8 = *(undefined8 *******)PTR____stack_chk_guard_11034bdc0;
      pppppppuStack_210 = (undefined8 *******)0x0;
      uStack_208 = 0;
      auStack_200 = (undefined1  [8])0x0;
      pppppppuStack_228 = (undefined8 *******)0x0;
      lStack_220 = 0;
      uStack_218 = 0;
      plVar12 = plVar23;
      ppppuStack_1a0 = ppppuVar11;
      func_0x0001004c2450(plVar23,uVar19,&pppppppuStack_210,&pppppppuStack_228);
      if (((ulong)plVar12 & 1) == 0) {
        if (uVar19 < 0x7ffffffffffffff8) {
          if (uVar19 < 0x17) {
            uStack_1e8 = CONCAT17((char)uVar19,(undefined7)uStack_1e8);
            pppppppuVar13 = &pppppppuStack_1f8;
            if (uVar19 != 0) goto code_r0x000104aa92dc;
          }
          else {
            uVar21 = (uVar19 & 0xfffffffffffffff8) + 8;
            if ((uVar19 | 7) != 0x17) {
              uVar21 = uVar19 | 7;
            }
            pppppppuVar13 = (undefined8 *******)(uVar21 + 1);
            __Znwm();
            uStack_1e8 = uVar21 + 1 | 0x8000000000000000;
            pppppppuStack_1f8 = pppppppuVar13;
            uStack_1f0 = uVar19;
code_r0x000104aa92dc:
            _memmove(pppppppuVar13,plVar23,uVar19);
          }
          *(undefined1 *)((long)pppppppuVar13 + uVar19) = 0;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_1e8 < 0) {
            __ZdlPv(pppppppuStack_1f8);
          }
          goto code_r0x000104aa94bc;
        }
      }
      else {
        puVar15[0xd] = 0;
        puVar15[0xc] = 0;
        puVar15[0xf] = 0;
        puVar15[0xe] = 0;
        puVar15[9] = 0;
        puVar15[8] = 0;
        puVar15[0xb] = 0;
        puVar15[10] = 0;
        puVar15[5] = 0;
        puVar15[4] = 0;
        puVar15[7] = 0;
        puVar15[6] = 0;
        puVar15[1] = 0;
        *puVar15 = 0;
        puVar15[3] = 0;
        puVar15[2] = 0;
        *(undefined4 *)(puVar15 + 0x10) = 0x1c;
        *(undefined1 *)((long)puVar15 + 1) = 0x1e;
        uVar19 = uStack_208;
        pppppppuVar13 = pppppppuStack_210;
        if (-1 < (long)auStack_200) {
          uVar19 = (ulong)auStack_200 >> 0x38;
          pppppppuVar13 = &pppppppuStack_210;
        }
        func_0x000104a6f3e8(pppppppuVar13,0x25,uVar19);
        if (pppppppuVar13 == (undefined8 *******)0x0) {
          pppppppuVar13 = pppppppuStack_210;
          if (-1 < (long)auStack_200) {
            pppppppuVar13 = &pppppppuStack_210;
          }
          iVar6 = 0x1e;
          func_0x0001004ded14(0x1e,pppppppuVar13,puVar15 + 1);
          if (iVar6 == 0) {
            pcVar18 = "invalid ipv6 address: \'%s\'";
            uVar17 = 0x104;
code_r0x000104aa9484:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar17,2,pcVar18);
            goto code_r0x000104aa94bc;
          }
code_r0x000104aa93dc:
          if (uStack_218 < 0) {
            pppppppuVar13 = pppppppuStack_228;
            if (lStack_220 == 0) goto code_r0x000104aa9440;
          }
          else {
            if (uStack_218._7_1_ == '\0') {
code_r0x000104aa9440:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0x10b,2,"no port given for ipv6 scheme");
              goto code_r0x000104aa94bc;
            }
            pppppppuVar13 = &pppppppuStack_228;
          }
          _sscanf(pppppppuVar13,"%d");
          if ((((int)pppppppuVar13 != 1) || (iStack_230 < 0)) || (0xffff < iStack_230)) {
            pcVar18 = "invalid ipv6 port: \'%s\'";
            uVar17 = 0x111;
            goto code_r0x000104aa9484;
          }
          uVar5 = (undefined2)iStack_230;
          func_0x0001004ded18();
          *(undefined2 *)((long)puVar15 + 2) = uVar5;
          plVar23 = (long *)0x1;
        }
        else {
          if ((long)auStack_200 < 0) {
            uVar19 = (long)pppppppuVar13 - (long)pppppppuStack_210;
            if (pppppppuVar13 < pppppppuStack_210) goto code_r0x000104aa9514;
            pppppppuVar16 = pppppppuStack_210;
            if (0x2e < uVar19) goto code_r0x000104aa9210;
code_r0x000104aa9350:
            iStack_22c = 0;
            _strncpy(&pppppppuStack_1f8,pppppppuVar16,uVar19);
            *(undefined1 *)((long)&pppppppuStack_1f8 + uVar19) = 0;
            iVar6 = 0x1e;
            func_0x0001004ded14(0x1e,&pppppppuStack_1f8,puVar15 + 1);
            if (iVar6 != 0) {
              lVar7 = (long)pppppppuVar13 + 1;
              uVar21 = uStack_208;
              if (-1 < (long)auStack_200) {
                uVar21 = (ulong)auStack_200 >> 0x38;
              }
              lVar14 = lVar7;
              func_0x000104a6f15c(lVar7,uVar21 + ~uVar19,&iStack_22c);
              if ((int)lVar14 == 0) {
                func_0x000104abde24();
                iStack_22c = (int)lVar7;
                if (iStack_22c == 0) {
                  pcVar18 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex."
                  ;
                  uVar17 = 0xf8;
                  goto code_r0x000104aa94a8;
                }
              }
              *(int *)(puVar15 + 3) = iStack_22c;
              goto code_r0x000104aa93dc;
            }
            pcVar18 = "invalid ipv6 address: \'%s\'";
            uVar17 = 0xf0;
code_r0x000104aa94a8:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar17,2,pcVar18);
          }
          else {
            uVar19 = (long)pppppppuVar13 - (long)&pppppppuStack_210;
            if (pppppppuVar13 < &pppppppuStack_210) {
code_r0x000104aa9514:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xdc,2,"assertion failed: %s");
              _abort();
              goto code_r0x000104aa9550;
            }
            pppppppuVar16 = &pppppppuStack_210;
            if (uVar19 < 0x2f) goto code_r0x000104aa9350;
code_r0x000104aa9210:
            iStack_22c = 0;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xe4,2,
                          "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                         );
          }
code_r0x000104aa94bc:
          plVar23 = (long *)0x0;
        }
        if (uStack_218 < 0) {
          __ZdlPv(pppppppuStack_228);
        }
        if ((long)auStack_200 < 0) {
          __ZdlPv(pppppppuStack_210);
        }
        if (*(undefined8 *******)PTR____stack_chk_guard_11034bdc0 == ppppppuStack_1c8) {
          return plVar23;
        }
        ___stack_chk_fail();
      }
      func_0x000104a6fa5c(&pppppppuStack_1f8);
code_r0x000104aa9550:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104aa9554);
      (*pcVar3)();
    }
  }
  else {
    if (cVar1 != '\x04') {
      if ((cVar1 != '\r') ||
         (*plVar12 != 0x7362612d78696e75 || *(long *)((long)plVar12 + 5) != 0x7463617274736261))
      goto LAB_1004de8b8;
LAB_104aa8df4:
      pcStack_188 = FUN_1004de7ec;
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        uStack_1d0 = (long *)*plVar12;
        if ((plVar12[1] == 0xd) &&
           (*uStack_1d0 == 0x7362612d78696e75 &&
            *(long *)((long)uStack_1d0 + 5) == 0x7463617274736261)) goto code_r0x000104aa8ecc;
      }
      else if ((*(char *)((long)plVar12 + 0x17) == '\r') &&
              (*plVar12 == 0x7362612d78696e75 && *(long *)((long)plVar12 + 5) == 0x7463617274736261)
              ) {
code_r0x000104aa8ecc:
        uVar19 = plVar12[7];
        plVar23 = (long *)plVar12[6];
        if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
          uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
          plVar23 = plVar12 + 6;
        }
        ppppuStack_1a0 = ppppuVar11;
        func_0x000104aa8fc4(&ppppppuStack_1a8,plVar23,uVar19,puVar15);
        bVar4 = ppppppuStack_1a8 == (undefined8 ******)0x0;
        if (ppppppuStack_1a8 == (undefined8 ******)0x0) {
          return (long *)1;
        }
        ppppppuStack_1c8 = ppppppuStack_1a8;
        if (((ulong)ppppppuStack_1a8 & 1) != 0) {
          piVar20 = (int *)((long)ppppppuStack_1a8 - 1);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar2) {
              *piVar20 = *piVar20 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        func_0x000104aba950(&stack0xfffffffffffffe40,&ppppppuStack_1c8);
        uStack_1d0 = (long *)in_stack_fffffffffffffe40;
        if (-1 < lStack_1b0) {
          uStack_1d0 = (long *)&stack0xfffffffffffffe40;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x49,2,"%s");
        if (lStack_1b0 < 0) {
          __ZdlPv(in_stack_fffffffffffffe40);
        }
        if (((ulong)ppppppuStack_1c8 & 1) != 0) {
          FUN_10084dad0();
        }
        if (((ulong)ppppppuStack_1a8 & 1) == 0) {
          return (long *)(ulong)bVar4;
        }
        FUN_10084dad0();
        return (long *)(ulong)bVar4;
      }
      ppppuStack_1a0 = ppppuVar11;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                    ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
      return (long *)0x0;
    }
    if ((int)*plVar12 != 0x78696e75) goto LAB_1004de90c;
  }
  pcStack_188 = FUN_1004de7ec;
  if (*(char *)((long)plVar12 + 0x17) < '\0') {
    uStack_1d0 = (long *)*plVar12;
    if ((plVar12[1] == 4) && ((int)*uStack_1d0 == 0x78696e75)) goto code_r0x000104aa8b70;
  }
  else if (*(char *)((long)plVar12 + 0x17) == '\x04' && (int)*plVar12 == 0x78696e75) {
code_r0x000104aa8b70:
    uVar19 = plVar12[7];
    plVar23 = (long *)plVar12[6];
    if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
      uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
      plVar23 = plVar12 + 6;
    }
    ppppuStack_1a0 = ppppuVar11;
    func_0x000104aa8c68(&ppppppuStack_1a8,plVar23,uVar19,puVar15);
    bVar4 = ppppppuStack_1a8 == (undefined8 ******)0x0;
    if (ppppppuStack_1a8 == (undefined8 ******)0x0) {
      return (long *)1;
    }
    ppppppuStack_1c8 = ppppppuStack_1a8;
    if (((ulong)ppppppuStack_1a8 & 1) != 0) {
      piVar20 = (int *)((long)ppppppuStack_1a8 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar2) {
          *piVar20 = *piVar20 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104aba950(&stack0xfffffffffffffe40,&ppppppuStack_1c8);
    uStack_1d0 = (long *)in_stack_fffffffffffffe40;
    if (-1 < lStack_1b0) {
      uStack_1d0 = (long *)&stack0xfffffffffffffe40;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,0x38,2,"%s");
    if (lStack_1b0 < 0) {
      __ZdlPv(in_stack_fffffffffffffe40);
    }
    if (((ulong)ppppppuStack_1c8 & 1) != 0) {
      FUN_10084dad0();
    }
    if (((ulong)ppppppuStack_1a8 & 1) == 0) {
      return (long *)(ulong)bVar4;
    }
    FUN_10084dad0();
    return (long *)(ulong)bVar4;
  }
  ppppuStack_1a0 = ppppuVar11;
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 1004de5bc; end: 1004de7eb;  */

/* WARNING: Removing unreachable block (ram,0x0001004dec9c) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_1004de5bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *****param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined2 uVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  undefined8 *******pppppppuVar17;
  undefined8 uVar18;
  ulong uVar19;
  char *pcVar20;
  int *piVar21;
  long *plVar22;
  int iStack_1d0;
  int iStack_1cc;
  undefined8 *******pppppppuStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *******pppppppuStack_1b0;
  ulong uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined8 *******pppppppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 *******pppppppuStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 ******ppppppuStack_168;
  undefined1 *in_stack_fffffffffffffea0;
  long lStack_150;
  undefined8 ******ppppppuStack_148;
  undefined8 ****ppppuStack_140;
  long *plStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  char acStack_120 [31];
  undefined1 uStack_101;
  ulong uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [144];
  char *pcStack_60;
  char *pcStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = (undefined8 ****)(param_1 + 0x10);
  FUN_100460448(ppppuVar11);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  func_0x000100466b80(ppppuVar11);
  if (*param_4 != (undefined8 ****)0x0) {
    func_0x000107c2c434();
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1004de778);
    (*pcVar4)();
  }
  *(undefined8 ******)(param_1 + 0x88) = param_4;
  ppppuVar8 = param_4[1];
  FUN_100481218(ppppuVar8,"grpc.internal.tcp_handshaker_resolved_address");
  ppppuVar9 = ppppuVar8;
  func_0x000107c613d0();
  FUN_10047ae00(&lStack_f8,ppppuVar8,ppppuVar9);
  if (lStack_f8 == 0) {
    puVar10 = auStack_f0;
    FUN_1004de7ec(puVar10,param_1 + 0x94);
    if (((ulong)puVar10 & 1) == 0) goto LAB_1004de6d8;
    ppppuVar11 = param_4[1];
    FUN_100480b50(ppppuVar11,"grpc.internal.tcp_handshaker_bind_endpoint_to_pollset",0);
    *(char *)(param_1 + 0x90) = (char)ppppuVar11;
    pcStack_58 = "grpc.internal.tcp_handshaker_bind_endpoint_to_pollset";
    pcStack_60 = "grpc.internal.tcp_handshaker_resolved_address";
    ppppuVar11 = param_4[1];
    FUN_100486500(ppppuVar11,&pcStack_60,2);
    FUN_10048650c(param_4[1]);
    param_4[1] = ppppuVar11;
    plVar22 = (long *)(param_1 + 8);
    do {
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar5) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar16 = (ulong *)(param_1 + 0x58);
    func_0x0001004ded20(param_1 + 0x118,puVar16,*(undefined8 *)(param_1 + 0x70),param_4[1],
                        param_1 + 0x94,param_4[5]);
  }
  else {
LAB_1004de6d8:
    FUN_100460448(ppppuVar11);
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    func_0x000104ab5920(&uStack_100,2,"Resolved address in invalid format",0x22,&uStack_101,
                        acStack_120);
    puVar16 = &uStack_100;
    FUN_1005a6218(param_1);
    if ((uStack_100 & 1) != 0) {
      FUN_10084dad0();
    }
    pcStack_60 = acStack_120;
    func_0x000100482b64(&pcStack_60);
    func_0x000100466b80(ppppuVar11);
  }
  plVar22 = &lStack_f8;
  FUN_10047cac8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar22;
  }
  func_0x000107c60e78();
  if ((int)puVar16 != 0) {
    func_0x000104bd46a0();
  }
  plVar12 = plVar22;
  func_0x000107c60bd8();
  pcStack_128 = FUN_1004de7ec;
  cVar2 = *(char *)((long)plVar12 + 0x17);
  uStack_170 = plVar12;
  ppppuStack_140 = (undefined8 ****)plVar12;
  plStack_138 = plVar22;
  puStack_130 = &stack0xfffffffffffffff0;
  if (cVar2 < '\0') {
    ppppuStack_140 = (undefined8 ****)*plVar12;
    lVar15 = plVar12[1];
    if ((lVar15 != 4) || ((int)*ppppuStack_140 != 0x78696e75)) {
      if (lVar15 == 0xd) {
        if (*ppppuStack_140 == (undefined8 ***)0x7362612d78696e75 &&
            *(long *)((long)ppppuStack_140 + 5) == 0x7463617274736261) goto LAB_104aa8df4;
        ppppuStack_140 = (undefined8 ****)*plVar12;
        lVar15 = plVar12[1];
      }
      if (lVar15 != 4) goto LAB_1004de8b8;
LAB_1004de90c:
      ppppppuStack_148 = (undefined8 ******)param_4;
      if ((int)*ppppuStack_140 == 0x34767069) {
        pcStack_128 = FUN_1004de7ec;
        if (*(char *)((long)plVar12 + 0x17) < '\0') {
          ppppuStack_140 = (undefined8 ****)*plVar12;
          if ((plVar12[1] != 4) || ((int)*ppppuStack_140 != 0x34767069)) goto LAB_1004de9e0;
        }
        else {
          ppppuStack_140 = (undefined8 ****)plVar12;
          if (*(char *)((long)plVar12 + 0x17) != '\x04' || (int)*plVar12 != 0x34767069) {
LAB_1004de9e0:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xbe,2,"Expected \'ipv4\' scheme, got \'%s\'");
            return (long *)0x0;
          }
        }
        uVar19 = plVar12[7];
        plVar22 = (long *)plVar12[6];
        if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
          uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
          plVar22 = plVar12 + 6;
        }
        if (uVar19 == 0) {
          uVar19 = 0;
        }
        else if ((char)*plVar22 == '/') {
          plVar22 = (long *)((long)plVar22 + 1);
          uVar19 = uVar19 - 1;
        }
        pcStack_128 = FUN_1004de7ec;
        ppppppuStack_168 = (undefined8 ******)0x0;
        pppppppuStack_180 = (undefined8 *******)0x0;
        lStack_178 = 0;
        uStack_170 = (long *)0x0;
        plVar12 = plVar22;
        ppppuStack_140 = ppppuVar11;
        func_0x0001004c2450(plVar22,uVar19,&ppppppuStack_168,&pppppppuStack_180);
        if (((ulong)plVar12 & 1) == 0) {
          if (0x7ffffffffffffff7 < uVar19) {
            func_0x000104a6fa5c(&pppppppuStack_198);
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1004decc8);
            (*pcVar4)();
          }
          if (uVar19 < 0x17) {
            uStack_188 = CONCAT17((char)uVar19,(undefined7)uStack_188);
            pppppppuVar13 = &pppppppuStack_198;
            if (uVar19 != 0) goto LAB_1004deb7c;
          }
          else {
            uVar1 = (uVar19 & 0xfffffffffffffff8) + 8;
            if ((uVar19 | 7) != 0x17) {
              uVar1 = uVar19 | 7;
            }
            pppppppuVar13 = (undefined8 *******)(uVar1 + 1);
            func_0x000107c60e20();
            uStack_188 = uVar1 + 1 | 0x8000000000000000;
            pppppppuStack_198 = pppppppuVar13;
            uStack_190 = uVar19;
LAB_1004deb7c:
            func_0x000107c610b8(pppppppuVar13,plVar22,uVar19);
          }
          *(undefined1 *)((long)pppppppuVar13 + uVar19) = 0;
          pppppppuStack_1b0 = pppppppuStack_198;
          if (-1 < (long)uStack_188) {
            pppppppuStack_1b0 = &pppppppuStack_198;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_188 < 0) {
            func_0x000107c60e14(pppppppuStack_198);
          }
        }
        else {
          puVar16[0xd] = 0;
          puVar16[0xc] = 0;
          puVar16[0xf] = 0;
          puVar16[0xe] = 0;
          puVar16[9] = 0;
          puVar16[8] = 0;
          puVar16[0xb] = 0;
          puVar16[10] = 0;
          puVar16[5] = 0;
          puVar16[4] = 0;
          puVar16[7] = 0;
          puVar16[6] = 0;
          puVar16[1] = 0;
          *puVar16 = 0;
          puVar16[3] = 0;
          puVar16[2] = 0;
          *(undefined4 *)(puVar16 + 0x10) = 0x10;
          *(undefined1 *)((long)puVar16 + 1) = 2;
          iVar7 = 2;
          func_0x0001004ded14(2,&ppppppuStack_168,(long)puVar16 + 4);
          if (iVar7 == 0) {
            pppppppuStack_1b0 = &ppppppuStack_168;
            pcVar20 = "invalid ipv4 address: \'%s\'";
            uVar18 = 0xa6;
          }
          else {
            if (-1 < (long)uStack_170) {
              if (uStack_170._7_1_ != '\0') {
                pppppppuVar13 = &pppppppuStack_180;
                goto LAB_1004debe4;
              }
code_r0x0001004dec28:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xac,2,"no port given for ipv4 scheme");
              goto LAB_1004dec80;
            }
            pppppppuVar13 = pppppppuStack_180;
            if (lStack_178 == 0) goto code_r0x0001004dec28;
LAB_1004debe4:
            pppppppuStack_1b0 = (undefined8 *******)(auStack_1a0 + 4);
            func_0x000107c613b4(pppppppuVar13,"%d");
            if ((((int)pppppppuVar13 == 1) && (-1 < (int)auStack_1a0._4_4_)) &&
               ((int)auStack_1a0._4_4_ < 0x10000)) {
              uVar6 = (undefined2)auStack_1a0._4_4_;
              func_0x0001004ded18();
              *(undefined2 *)((long)puVar16 + 2) = uVar6;
              plVar22 = (long *)0x1;
              goto LAB_1004dec84;
            }
            pppppppuStack_1b0 = pppppppuStack_180;
            if (-1 < (long)uStack_170) {
              pppppppuStack_1b0 = &pppppppuStack_180;
            }
            pcVar20 = "invalid ipv4 port: \'%s\'";
            uVar18 = 0xb2;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,uVar18,2,pcVar20);
        }
LAB_1004dec80:
        plVar22 = (long *)0x0;
LAB_1004dec84:
        if ((long)uStack_170 < 0) {
          func_0x000107c60e14(pppppppuStack_180);
        }
        return plVar22;
      }
      if (cVar2 < '\0') {
        ppppuStack_140 = (undefined8 ****)*plVar12;
        if (plVar12[1] != 4) goto LAB_1004de8b8;
        iVar7 = (int)*ppppuStack_140;
      }
      else {
        ppppuStack_140 = (undefined8 ****)plVar12;
        if (cVar2 != '\x04') goto LAB_1004de8b8;
        iVar7 = (int)*plVar12;
      }
      if (iVar7 != 0x36767069) {
LAB_1004de8b8:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x133,2,"Can\'t parse scheme \'%s\'");
        return (long *)0x0;
      }
      pcStack_128 = FUN_1004de7ec;
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        ppppuStack_140 = (undefined8 ****)*plVar12;
        if ((plVar12[1] != 4) || ((int)*ppppuStack_140 != 0x36767069)) goto code_r0x000104aa95fc;
      }
      else {
        ppppuStack_140 = (undefined8 ****)plVar12;
        if (*(char *)((long)plVar12 + 0x17) != '\x04' || (int)*plVar12 != 0x36767069) {
code_r0x000104aa95fc:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x11d,2,"Expected \'ipv6\' scheme, got \'%s\'");
          return (long *)0x0;
        }
      }
      uVar19 = plVar12[7];
      plVar22 = (long *)plVar12[6];
      if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
        uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
        plVar22 = plVar12 + 6;
      }
      if (uVar19 == 0) {
        uVar19 = 0;
      }
      else if ((char)*plVar22 == '/') {
        plVar22 = (long *)((long)plVar22 + 1);
        uVar19 = uVar19 - 1;
      }
      ppppppuStack_168 = *(undefined8 *******)PTR____stack_chk_guard_11034bdc0;
      pppppppuStack_1b0 = (undefined8 *******)0x0;
      uStack_1a8 = 0;
      auStack_1a0 = (undefined1  [8])0x0;
      pppppppuStack_1c8 = (undefined8 *******)0x0;
      lStack_1c0 = 0;
      uStack_1b8 = 0;
      plVar12 = plVar22;
      ppppuStack_140 = ppppuVar11;
      func_0x0001004c2450(plVar22,uVar19,&pppppppuStack_1b0,&pppppppuStack_1c8);
      if (((ulong)plVar12 & 1) == 0) {
        if (uVar19 < 0x7ffffffffffffff8) {
          if (uVar19 < 0x17) {
            uStack_188 = CONCAT17((char)uVar19,(undefined7)uStack_188);
            pppppppuVar13 = &pppppppuStack_198;
            if (uVar19 != 0) goto code_r0x000104aa92dc;
          }
          else {
            uVar1 = (uVar19 & 0xfffffffffffffff8) + 8;
            if ((uVar19 | 7) != 0x17) {
              uVar1 = uVar19 | 7;
            }
            pppppppuVar13 = (undefined8 *******)(uVar1 + 1);
            __Znwm();
            uStack_188 = uVar1 + 1 | 0x8000000000000000;
            pppppppuStack_198 = pppppppuVar13;
            uStack_190 = uVar19;
code_r0x000104aa92dc:
            _memmove(pppppppuVar13,plVar22,uVar19);
          }
          *(undefined1 *)((long)pppppppuVar13 + uVar19) = 0;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_188 < 0) {
            __ZdlPv(pppppppuStack_198);
          }
          goto code_r0x000104aa94bc;
        }
      }
      else {
        puVar16[0xd] = 0;
        puVar16[0xc] = 0;
        puVar16[0xf] = 0;
        puVar16[0xe] = 0;
        puVar16[9] = 0;
        puVar16[8] = 0;
        puVar16[0xb] = 0;
        puVar16[10] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        puVar16[7] = 0;
        puVar16[6] = 0;
        puVar16[1] = 0;
        *puVar16 = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        *(undefined4 *)(puVar16 + 0x10) = 0x1c;
        *(undefined1 *)((long)puVar16 + 1) = 0x1e;
        uVar19 = uStack_1a8;
        pppppppuVar13 = pppppppuStack_1b0;
        if (-1 < (long)auStack_1a0) {
          uVar19 = (ulong)auStack_1a0 >> 0x38;
          pppppppuVar13 = &pppppppuStack_1b0;
        }
        func_0x000104a6f3e8(pppppppuVar13,0x25,uVar19);
        if (pppppppuVar13 == (undefined8 *******)0x0) {
          pppppppuVar13 = pppppppuStack_1b0;
          if (-1 < (long)auStack_1a0) {
            pppppppuVar13 = &pppppppuStack_1b0;
          }
          iVar7 = 0x1e;
          func_0x0001004ded14(0x1e,pppppppuVar13,puVar16 + 1);
          if (iVar7 == 0) {
            pcVar20 = "invalid ipv6 address: \'%s\'";
            uVar18 = 0x104;
code_r0x000104aa9484:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar18,2,pcVar20);
            goto code_r0x000104aa94bc;
          }
code_r0x000104aa93dc:
          if (uStack_1b8 < 0) {
            pppppppuVar13 = pppppppuStack_1c8;
            if (lStack_1c0 == 0) goto code_r0x000104aa9440;
          }
          else {
            if (uStack_1b8._7_1_ == '\0') {
code_r0x000104aa9440:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0x10b,2,"no port given for ipv6 scheme");
              goto code_r0x000104aa94bc;
            }
            pppppppuVar13 = &pppppppuStack_1c8;
          }
          _sscanf(pppppppuVar13,"%d");
          if ((((int)pppppppuVar13 != 1) || (iStack_1d0 < 0)) || (0xffff < iStack_1d0)) {
            pcVar20 = "invalid ipv6 port: \'%s\'";
            uVar18 = 0x111;
            goto code_r0x000104aa9484;
          }
          uVar6 = (undefined2)iStack_1d0;
          func_0x0001004ded18();
          *(undefined2 *)((long)puVar16 + 2) = uVar6;
          plVar22 = (long *)0x1;
        }
        else {
          if ((long)auStack_1a0 < 0) {
            uVar19 = (long)pppppppuVar13 - (long)pppppppuStack_1b0;
            if (pppppppuVar13 < pppppppuStack_1b0) goto code_r0x000104aa9514;
            pppppppuVar17 = pppppppuStack_1b0;
            if (0x2e < uVar19) goto code_r0x000104aa9210;
code_r0x000104aa9350:
            iStack_1cc = 0;
            _strncpy(&pppppppuStack_198,pppppppuVar17,uVar19);
            *(undefined1 *)((long)&pppppppuStack_198 + uVar19) = 0;
            iVar7 = 0x1e;
            func_0x0001004ded14(0x1e,&pppppppuStack_198,puVar16 + 1);
            if (iVar7 != 0) {
              lVar15 = (long)pppppppuVar13 + 1;
              uVar1 = uStack_1a8;
              if (-1 < (long)auStack_1a0) {
                uVar1 = (ulong)auStack_1a0 >> 0x38;
              }
              lVar14 = lVar15;
              func_0x000104a6f15c(lVar15,uVar1 + ~uVar19,&iStack_1cc);
              if ((int)lVar14 == 0) {
                func_0x000104abde24();
                iStack_1cc = (int)lVar15;
                if (iStack_1cc == 0) {
                  pcVar20 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex."
                  ;
                  uVar18 = 0xf8;
                  goto code_r0x000104aa94a8;
                }
              }
              *(int *)(puVar16 + 3) = iStack_1cc;
              goto code_r0x000104aa93dc;
            }
            pcVar20 = "invalid ipv6 address: \'%s\'";
            uVar18 = 0xf0;
code_r0x000104aa94a8:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar18,2,pcVar20);
          }
          else {
            uVar19 = (long)pppppppuVar13 - (long)&pppppppuStack_1b0;
            if (pppppppuVar13 < &pppppppuStack_1b0) {
code_r0x000104aa9514:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xdc,2,"assertion failed: %s");
              _abort();
              goto code_r0x000104aa9550;
            }
            pppppppuVar17 = &pppppppuStack_1b0;
            if (uVar19 < 0x2f) goto code_r0x000104aa9350;
code_r0x000104aa9210:
            iStack_1cc = 0;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xe4,2,
                          "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                         );
          }
code_r0x000104aa94bc:
          plVar22 = (long *)0x0;
        }
        if (uStack_1b8 < 0) {
          __ZdlPv(pppppppuStack_1c8);
        }
        if ((long)auStack_1a0 < 0) {
          __ZdlPv(pppppppuStack_1b0);
        }
        if (*(undefined8 *******)PTR____stack_chk_guard_11034bdc0 == ppppppuStack_168) {
          return plVar22;
        }
        ___stack_chk_fail();
      }
      func_0x000104a6fa5c(&pppppppuStack_198);
code_r0x000104aa9550:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x104aa9554);
      (*pcVar4)();
    }
  }
  else {
    if (cVar2 != '\x04') {
      if ((cVar2 != '\r') ||
         (*plVar12 != 0x7362612d78696e75 || *(long *)((long)plVar12 + 5) != 0x7463617274736261))
      goto LAB_1004de8b8;
LAB_104aa8df4:
      pcStack_128 = FUN_1004de7ec;
      if (*(char *)((long)plVar12 + 0x17) < '\0') {
        uStack_170 = (long *)*plVar12;
        if ((plVar12[1] == 0xd) &&
           (*uStack_170 == 0x7362612d78696e75 &&
            *(long *)((long)uStack_170 + 5) == 0x7463617274736261)) goto code_r0x000104aa8ecc;
      }
      else if ((*(char *)((long)plVar12 + 0x17) == '\r') &&
              (*plVar12 == 0x7362612d78696e75 && *(long *)((long)plVar12 + 5) == 0x7463617274736261)
              ) {
code_r0x000104aa8ecc:
        uVar19 = plVar12[7];
        plVar22 = (long *)plVar12[6];
        if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
          uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
          plVar22 = plVar12 + 6;
        }
        ppppuStack_140 = ppppuVar11;
        func_0x000104aa8fc4(&ppppppuStack_148,plVar22,uVar19,puVar16);
        bVar5 = ppppppuStack_148 == (undefined8 ******)0x0;
        if (ppppppuStack_148 == (undefined8 ******)0x0) {
          return (long *)0x1;
        }
        ppppppuStack_168 = ppppppuStack_148;
        if (((ulong)ppppppuStack_148 & 1) != 0) {
          piVar21 = (int *)((long)ppppppuStack_148 - 1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar3) {
              *piVar21 = *piVar21 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104aba950(&stack0xfffffffffffffea0,&ppppppuStack_168);
        uStack_170 = (long *)in_stack_fffffffffffffea0;
        if (-1 < lStack_150) {
          uStack_170 = (long *)&stack0xfffffffffffffea0;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x49,2,"%s");
        if (lStack_150 < 0) {
          __ZdlPv(in_stack_fffffffffffffea0);
        }
        if (((ulong)ppppppuStack_168 & 1) != 0) {
          FUN_10084dad0();
        }
        if (((ulong)ppppppuStack_148 & 1) == 0) {
          return (long *)(ulong)bVar5;
        }
        FUN_10084dad0();
        return (long *)(ulong)bVar5;
      }
      ppppuStack_140 = ppppuVar11;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                    ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
      return (long *)0x0;
    }
    if ((int)*plVar12 != 0x78696e75) goto LAB_1004de90c;
  }
  pcStack_128 = FUN_1004de7ec;
  if (*(char *)((long)plVar12 + 0x17) < '\0') {
    uStack_170 = (long *)*plVar12;
    if ((plVar12[1] == 4) && ((int)*uStack_170 == 0x78696e75)) goto code_r0x000104aa8b70;
  }
  else if (*(char *)((long)plVar12 + 0x17) == '\x04' && (int)*plVar12 == 0x78696e75) {
code_r0x000104aa8b70:
    uVar19 = plVar12[7];
    plVar22 = (long *)plVar12[6];
    if (-1 < (char)*(byte *)((long)plVar12 + 0x47)) {
      uVar19 = (ulong)*(byte *)((long)plVar12 + 0x47);
      plVar22 = plVar12 + 6;
    }
    ppppuStack_140 = ppppuVar11;
    func_0x000104aa8c68(&ppppppuStack_148,plVar22,uVar19,puVar16);
    bVar5 = ppppppuStack_148 == (undefined8 ******)0x0;
    if (ppppppuStack_148 == (undefined8 ******)0x0) {
      return (long *)0x1;
    }
    ppppppuStack_168 = ppppppuStack_148;
    if (((ulong)ppppppuStack_148 & 1) != 0) {
      piVar21 = (int *)((long)ppppppuStack_148 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar21,0x10);
        if (bVar3) {
          *piVar21 = *piVar21 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(&stack0xfffffffffffffea0,&ppppppuStack_168);
    uStack_170 = (long *)in_stack_fffffffffffffea0;
    if (-1 < lStack_150) {
      uStack_170 = (long *)&stack0xfffffffffffffea0;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,0x38,2,"%s");
    if (lStack_150 < 0) {
      __ZdlPv(in_stack_fffffffffffffea0);
    }
    if (((ulong)ppppppuStack_168 & 1) != 0) {
      FUN_10084dad0();
    }
    if (((ulong)ppppppuStack_148 & 1) == 0) {
      return (long *)(ulong)bVar5;
    }
    FUN_10084dad0();
    return (long *)(ulong)bVar5;
  }
  ppppuStack_140 = ppppuVar11;
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return (long *)0x0;
}



/* Entry: 1004de7ec; end: 1004dea5b;  */

/* WARNING: Removing unreachable block (ram,0x0001004dec9c) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_1004de7ec(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 *******pppppppuVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  int *piVar15;
  bool bVar16;
  int iStack_b0;
  int iStack_ac;
  undefined8 *******pppppppuStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *******pppppppuStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [8];
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 *******pppppppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 ******ppppppuStack_48;
  undefined1 *in_stack_ffffffffffffffc0;
  long in_stack_ffffffffffffffd0;
  undefined8 ******in_stack_ffffffffffffffd8;
  
  cVar2 = *(char *)((long)param_1 + 0x17);
  uStack_50 = param_1;
  ppppppuStack_48 = in_stack_ffffffffffffffd8;
  if (cVar2 < '\0') {
    plVar10 = (long *)*param_1;
    lVar9 = param_1[1];
    if ((lVar9 != 4) || ((int)*plVar10 != 0x78696e75)) {
      if (lVar9 == 0xd) {
        if (*plVar10 == 0x7362612d78696e75 && *(long *)((long)plVar10 + 5) == 0x7463617274736261)
        goto LAB_104aa8df4;
        plVar10 = (long *)*param_1;
        lVar9 = param_1[1];
      }
      if (lVar9 != 4) goto LAB_1004de8b8;
LAB_1004de90c:
      if ((int)*plVar10 == 0x34767069) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          if ((param_1[1] != 4) || (*(int *)*param_1 != 0x34767069)) goto LAB_1004de9e0;
        }
        else if (*(char *)((long)param_1 + 0x17) != '\x04' || (int)*param_1 != 0x34767069) {
LAB_1004de9e0:
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0xbe,2,"Expected \'ipv4\' scheme, got \'%s\'");
          return false;
        }
        uVar13 = param_1[7];
        plVar10 = (long *)param_1[6];
        if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
          uVar13 = (ulong)*(byte *)((long)param_1 + 0x47);
          plVar10 = param_1 + 6;
        }
        if (uVar13 == 0) {
          uVar13 = 0;
        }
        else if ((char)*plVar10 == '/') {
          plVar10 = (long *)((long)plVar10 + 1);
          uVar13 = uVar13 - 1;
        }
        ppppppuStack_48 = (undefined8 ******)0x0;
        pppppppuStack_60 = (undefined8 *******)0x0;
        lStack_58 = 0;
        uStack_50 = (long *)0x0;
        plVar6 = plVar10;
        func_0x0001004c2450(plVar10,uVar13,&ppppppuStack_48,&pppppppuStack_60);
        if (((ulong)plVar6 & 1) == 0) {
          if (0x7ffffffffffffff7 < uVar13) {
            func_0x000104a6fa5c(&pppppppuStack_78);
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1004decc8);
            (*pcVar3)();
          }
          if (uVar13 < 0x17) {
            uStack_68 = CONCAT17((char)uVar13,(undefined7)uStack_68);
            pppppppuVar7 = &pppppppuStack_78;
            if (uVar13 != 0) goto LAB_1004deb7c;
          }
          else {
            uVar1 = (uVar13 & 0xfffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar1 = uVar13 | 7;
            }
            pppppppuVar7 = (undefined8 *******)(uVar1 + 1);
            func_0x000107c60e20();
            uStack_68 = uVar1 + 1 | 0x8000000000000000;
            pppppppuStack_78 = pppppppuVar7;
            uStack_70 = uVar13;
LAB_1004deb7c:
            func_0x000107c610b8(pppppppuVar7,plVar10,uVar13);
          }
          *(undefined1 *)((long)pppppppuVar7 + uVar13) = 0;
          pppppppuStack_90 = pppppppuStack_78;
          if (-1 < (long)uStack_68) {
            pppppppuStack_90 = &pppppppuStack_78;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_68 < 0) {
            func_0x000107c60e14(pppppppuStack_78);
          }
        }
        else {
          param_2[0xd] = 0;
          param_2[0xc] = 0;
          param_2[0xf] = 0;
          param_2[0xe] = 0;
          param_2[9] = 0;
          param_2[8] = 0;
          param_2[0xb] = 0;
          param_2[10] = 0;
          param_2[5] = 0;
          param_2[4] = 0;
          param_2[7] = 0;
          param_2[6] = 0;
          param_2[1] = 0;
          *param_2 = 0;
          param_2[3] = 0;
          param_2[2] = 0;
          *(undefined4 *)(param_2 + 0x10) = 0x10;
          *(undefined1 *)((long)param_2 + 1) = 2;
          iVar5 = 2;
          FUN_1004ded14(2,&ppppppuStack_48,(long)param_2 + 4);
          if (iVar5 == 0) {
            pppppppuStack_90 = &ppppppuStack_48;
            pcVar14 = "invalid ipv4 address: \'%s\'";
            uVar12 = 0xa6;
          }
          else {
            if (-1 < (long)uStack_50) {
              if (uStack_50._7_1_ != '\0') {
                pppppppuVar7 = &pppppppuStack_60;
                goto LAB_1004debe4;
              }
code_r0x0001004dec28:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xac,2,"no port given for ipv4 scheme");
              goto LAB_1004dec80;
            }
            pppppppuVar7 = pppppppuStack_60;
            if (lStack_58 == 0) goto code_r0x0001004dec28;
LAB_1004debe4:
            pppppppuStack_90 = (undefined8 *******)(auStack_80 + 4);
            func_0x000107c613b4(pppppppuVar7,"%d");
            if ((((int)pppppppuVar7 == 1) && (-1 < (int)auStack_80._4_4_)) &&
               ((int)auStack_80._4_4_ < 0x10000)) {
              uVar4 = (undefined2)auStack_80._4_4_;
              FUN_1004ded14();
              *(undefined2 *)((long)param_2 + 2) = uVar4;
              bVar16 = true;
              goto LAB_1004dec84;
            }
            pppppppuStack_90 = pppppppuStack_60;
            if (-1 < (long)uStack_50) {
              pppppppuStack_90 = &pppppppuStack_60;
            }
            pcVar14 = "invalid ipv4 port: \'%s\'";
            uVar12 = 0xb2;
          }
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,uVar12,2,pcVar14);
        }
LAB_1004dec80:
        bVar16 = false;
LAB_1004dec84:
        if ((long)uStack_50 < 0) {
          func_0x000107c60e14(pppppppuStack_60);
        }
        return bVar16;
      }
      if (cVar2 < '\0') {
        if (param_1[1] != 4) goto LAB_1004de8b8;
        iVar5 = *(int *)*param_1;
      }
      else {
        if (cVar2 != '\x04') goto LAB_1004de8b8;
        iVar5 = (int)*param_1;
      }
      if (iVar5 != 0x36767069) {
LAB_1004de8b8:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x133,2,"Can\'t parse scheme \'%s\'");
        return false;
      }
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        if ((param_1[1] != 4) || (*(int *)*param_1 != 0x36767069)) goto code_r0x000104aa95fc;
      }
      else if (*(char *)((long)param_1 + 0x17) != '\x04' || (int)*param_1 != 0x36767069) {
code_r0x000104aa95fc:
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x11d,2,"Expected \'ipv6\' scheme, got \'%s\'");
        return false;
      }
      uVar13 = param_1[7];
      plVar10 = (long *)param_1[6];
      if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
        uVar13 = (ulong)*(byte *)((long)param_1 + 0x47);
        plVar10 = param_1 + 6;
      }
      if (uVar13 == 0) {
        uVar13 = 0;
      }
      else if ((char)*plVar10 == '/') {
        plVar10 = (long *)((long)plVar10 + 1);
        uVar13 = uVar13 - 1;
      }
      ppppppuStack_48 = *(undefined8 *******)PTR____stack_chk_guard_11034bdc0;
      pppppppuStack_90 = (undefined8 *******)0x0;
      uStack_88 = 0;
      auStack_80 = (undefined1  [8])0x0;
      pppppppuStack_a8 = (undefined8 *******)0x0;
      lStack_a0 = 0;
      uStack_98 = 0;
      plVar6 = plVar10;
      func_0x0001004c2450(plVar10,uVar13,&pppppppuStack_90,&pppppppuStack_a8);
      if (((ulong)plVar6 & 1) == 0) {
        if (uVar13 < 0x7ffffffffffffff8) {
          if (uVar13 < 0x17) {
            uStack_68 = CONCAT17((char)uVar13,(undefined7)uStack_68);
            pppppppuVar7 = &pppppppuStack_78;
            if (uVar13 != 0) goto code_r0x000104aa92dc;
          }
          else {
            uVar1 = (uVar13 & 0xfffffffffffffff8) + 8;
            if ((uVar13 | 7) != 0x17) {
              uVar1 = uVar13 | 7;
            }
            pppppppuVar7 = (undefined8 *******)(uVar1 + 1);
            __Znwm();
            uStack_68 = uVar1 + 1 | 0x8000000000000000;
            pppppppuStack_78 = pppppppuVar7;
            uStack_70 = uVar13;
code_r0x000104aa92dc:
            _memmove(pppppppuVar7,plVar10,uVar13);
          }
          *(undefined1 *)((long)pppppppuVar7 + uVar13) = 0;
          FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                        ,0xce,2,"Failed gpr_split_host_port(%s, ...)");
          if ((long)uStack_68 < 0) {
            __ZdlPv(pppppppuStack_78);
          }
          goto code_r0x000104aa94bc;
        }
      }
      else {
        param_2[0xd] = 0;
        param_2[0xc] = 0;
        param_2[0xf] = 0;
        param_2[0xe] = 0;
        param_2[9] = 0;
        param_2[8] = 0;
        param_2[0xb] = 0;
        param_2[10] = 0;
        param_2[5] = 0;
        param_2[4] = 0;
        param_2[7] = 0;
        param_2[6] = 0;
        param_2[1] = 0;
        *param_2 = 0;
        param_2[3] = 0;
        param_2[2] = 0;
        *(undefined4 *)(param_2 + 0x10) = 0x1c;
        *(undefined1 *)((long)param_2 + 1) = 0x1e;
        uVar13 = uStack_88;
        pppppppuVar7 = pppppppuStack_90;
        if (-1 < (long)auStack_80) {
          uVar13 = (ulong)auStack_80 >> 0x38;
          pppppppuVar7 = &pppppppuStack_90;
        }
        func_0x000104a6f3e8(pppppppuVar7,0x25,uVar13);
        if (pppppppuVar7 == (undefined8 *******)0x0) {
          pppppppuVar7 = pppppppuStack_90;
          if (-1 < (long)auStack_80) {
            pppppppuVar7 = &pppppppuStack_90;
          }
          iVar5 = 0x1e;
          FUN_1004ded14(0x1e,pppppppuVar7,param_2 + 1);
          if (iVar5 == 0) {
            pcVar14 = "invalid ipv6 address: \'%s\'";
            uVar12 = 0x104;
code_r0x000104aa9484:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar12,2,pcVar14);
            goto code_r0x000104aa94bc;
          }
code_r0x000104aa93dc:
          if (uStack_98 < 0) {
            pppppppuVar7 = pppppppuStack_a8;
            if (lStack_a0 == 0) goto code_r0x000104aa9440;
          }
          else {
            if (uStack_98._7_1_ == '\0') {
code_r0x000104aa9440:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0x10b,2,"no port given for ipv6 scheme");
              goto code_r0x000104aa94bc;
            }
            pppppppuVar7 = &pppppppuStack_a8;
          }
          _sscanf(pppppppuVar7,"%d");
          if ((((int)pppppppuVar7 != 1) || (iStack_b0 < 0)) || (0xffff < iStack_b0)) {
            pcVar14 = "invalid ipv6 port: \'%s\'";
            uVar12 = 0x111;
            goto code_r0x000104aa9484;
          }
          uVar4 = (undefined2)iStack_b0;
          FUN_1004ded14();
          *(undefined2 *)((long)param_2 + 2) = uVar4;
          bVar16 = true;
        }
        else {
          if ((long)auStack_80 < 0) {
            uVar13 = (long)pppppppuVar7 - (long)pppppppuStack_90;
            if (pppppppuVar7 < pppppppuStack_90) goto code_r0x000104aa9514;
            pppppppuVar11 = pppppppuStack_90;
            if (0x2e < uVar13) goto code_r0x000104aa9210;
code_r0x000104aa9350:
            iStack_ac = 0;
            _strncpy(&pppppppuStack_78,pppppppuVar11,uVar13);
            *(undefined1 *)((long)&pppppppuStack_78 + uVar13) = 0;
            iVar5 = 0x1e;
            FUN_1004ded14(0x1e,&pppppppuStack_78,param_2 + 1);
            if (iVar5 != 0) {
              lVar9 = (long)pppppppuVar7 + 1;
              uVar1 = uStack_88;
              if (-1 < (long)auStack_80) {
                uVar1 = (ulong)auStack_80 >> 0x38;
              }
              lVar8 = lVar9;
              func_0x000104a6f15c(lVar9,uVar1 + ~uVar13,&iStack_ac);
              if ((int)lVar8 == 0) {
                func_0x000104abde24();
                iStack_ac = (int)lVar9;
                if (iStack_ac == 0) {
                  pcVar14 = "Invalid interface name: \'%s\'. Non-numeric and failed if_nametoindex."
                  ;
                  uVar12 = 0xf8;
                  goto code_r0x000104aa94a8;
                }
              }
              *(int *)(param_2 + 3) = iStack_ac;
              goto code_r0x000104aa93dc;
            }
            pcVar14 = "invalid ipv6 address: \'%s\'";
            uVar12 = 0xf0;
code_r0x000104aa94a8:
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,uVar12,2,pcVar14);
          }
          else {
            uVar13 = (long)pppppppuVar7 - (long)&pppppppuStack_90;
            if (pppppppuVar7 < &pppppppuStack_90) {
code_r0x000104aa9514:
              FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                            ,0xdc,2,"assertion failed: %s");
              _abort();
              goto code_r0x000104aa9550;
            }
            pppppppuVar11 = &pppppppuStack_90;
            if (uVar13 < 0x2f) goto code_r0x000104aa9350;
code_r0x000104aa9210:
            iStack_ac = 0;
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xe4,2,
                          "invalid ipv6 address length %zu. Length cannot be greater than GRPC_INET6_ADDRSTRLEN i.e %d)"
                         );
          }
code_r0x000104aa94bc:
          bVar16 = false;
        }
        if (uStack_98 < 0) {
          __ZdlPv(pppppppuStack_a8);
        }
        if ((long)auStack_80 < 0) {
          __ZdlPv(pppppppuStack_90);
        }
        if (*(undefined8 *******)PTR____stack_chk_guard_11034bdc0 == ppppppuStack_48) {
          return bVar16;
        }
        ___stack_chk_fail();
      }
      func_0x000104a6fa5c(&pppppppuStack_78);
code_r0x000104aa9550:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x104aa9554);
      (*pcVar3)();
    }
  }
  else {
    if (cVar2 != '\x04') {
      if ((cVar2 != '\r') ||
         (*param_1 != 0x7362612d78696e75 || *(long *)((long)param_1 + 5) != 0x7463617274736261))
      goto LAB_1004de8b8;
LAB_104aa8df4:
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        uStack_50 = (long *)*param_1;
        if ((param_1[1] == 0xd) &&
           (*uStack_50 == 0x7362612d78696e75 && *(long *)((long)uStack_50 + 5) == 0x7463617274736261
           )) goto code_r0x000104aa8ecc;
      }
      else if ((*(char *)((long)param_1 + 0x17) == '\r') &&
              (*param_1 == 0x7362612d78696e75 && *(long *)((long)param_1 + 5) == 0x7463617274736261)
              ) {
code_r0x000104aa8ecc:
        uVar13 = param_1[7];
        plVar10 = (long *)param_1[6];
        if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
          uVar13 = (ulong)*(byte *)((long)param_1 + 0x47);
          plVar10 = param_1 + 6;
        }
        func_0x000104aa8fc4(&stack0xffffffffffffffd8,plVar10,uVar13,param_2);
        if (in_stack_ffffffffffffffd8 == (undefined8 ******)0x0) {
          return true;
        }
        if (((ulong)in_stack_ffffffffffffffd8 & 1) != 0) {
          piVar15 = (int *)((long)in_stack_ffffffffffffffd8 - 1);
          do {
            cVar2 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(piVar15,0x10);
            if (bVar16) {
              *piVar15 = *piVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        func_0x000104aba950(&stack0xffffffffffffffc0,&ppppppuStack_48);
        uStack_50 = (long *)in_stack_ffffffffffffffc0;
        if (-1 < in_stack_ffffffffffffffd0) {
          uStack_50 = (long *)&stack0xffffffffffffffc0;
        }
        FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                      ,0x49,2,"%s");
        if (in_stack_ffffffffffffffd0 < 0) {
          __ZdlPv(in_stack_ffffffffffffffc0);
        }
        if (((ulong)ppppppuStack_48 & 1) != 0) {
          FUN_10084dad0();
        }
        if (((ulong)in_stack_ffffffffffffffd8 & 1) == 0) {
          return in_stack_ffffffffffffffd8 == (undefined8 ******)0x0;
        }
        FUN_10084dad0();
        return in_stack_ffffffffffffffd8 == (undefined8 ******)0x0;
      }
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                    ,0x42,2,"Expected \'unix-abstract\' scheme, got \'%s\'");
      return false;
    }
    plVar10 = param_1;
    if ((int)*param_1 != 0x78696e75) goto LAB_1004de90c;
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    uStack_50 = (long *)*param_1;
    if ((param_1[1] == 4) && ((int)*uStack_50 == 0x78696e75)) goto code_r0x000104aa8b70;
  }
  else if (*(char *)((long)param_1 + 0x17) == '\x04' && (int)*param_1 == 0x78696e75) {
code_r0x000104aa8b70:
    uVar13 = param_1[7];
    plVar10 = (long *)param_1[6];
    if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
      uVar13 = (ulong)*(byte *)((long)param_1 + 0x47);
      plVar10 = param_1 + 6;
    }
    func_0x000104aa8c68(&stack0xffffffffffffffd8,plVar10,uVar13,param_2);
    if (in_stack_ffffffffffffffd8 == (undefined8 ******)0x0) {
      return true;
    }
    if (((ulong)in_stack_ffffffffffffffd8 & 1) != 0) {
      piVar15 = (int *)((long)in_stack_ffffffffffffffd8 - 1);
      do {
        cVar2 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar16) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104aba950(&stack0xffffffffffffffc0,&ppppppuStack_48);
    uStack_50 = (long *)in_stack_ffffffffffffffc0;
    if (-1 < in_stack_ffffffffffffffd0) {
      uStack_50 = (long *)&stack0xffffffffffffffc0;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,0x38,2,"%s");
    if (in_stack_ffffffffffffffd0 < 0) {
      __ZdlPv(in_stack_ffffffffffffffc0);
    }
    if (((ulong)ppppppuStack_48 & 1) != 0) {
      FUN_10084dad0();
    }
    if (((ulong)in_stack_ffffffffffffffd8 & 1) == 0) {
      return in_stack_ffffffffffffffd8 == (undefined8 ******)0x0;
    }
    FUN_10084dad0();
    return in_stack_ffffffffffffffd8 == (undefined8 ******)0x0;
  }
  FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                ,0x31,2,"Expected \'unix\' scheme, got \'%s\'");
  return false;
}



/* Entry: 1004dea5c; end: 1004ded13;  */

/* WARNING: Removing unreachable block (ram,0x0001004dec9c) */

undefined8 FUN_1004dea5c(ulong param_1,ulong param_2,undefined8 *param_3,int param_4)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 ****ppppuVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iStack_7c;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  pppuStack_60 = (undefined8 ****)0x0;
  lStack_58 = 0;
  uStack_50 = 0;
  uVar4 = param_1;
  func_0x0001004c2450(param_1,param_2,&uStack_48,&pppuStack_60);
  if ((uVar4 & 1) == 0) {
    if (param_4 != 0) {
      if (0x7ffffffffffffff7 < param_2) {
        func_0x000104a6fa5c(&pppuStack_78);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1004decc8);
        (*pcVar1)();
      }
      if (param_2 < 0x17) {
        uStack_68 = CONCAT17((char)param_2,(undefined7)uStack_68);
        ppppuVar5 = &pppuStack_78;
        if (param_2 != 0) goto LAB_1004deb7c;
      }
      else {
        uVar4 = (param_2 & 0xfffffffffffffff8) + 8;
        if ((param_2 | 7) != 0x17) {
          uVar4 = param_2 | 7;
        }
        ppppuVar5 = (undefined8 ****)(uVar4 + 1);
        func_0x000107c60e20();
        uStack_68 = uVar4 + 1 | 0x8000000000000000;
        pppuStack_78 = ppppuVar5;
        uStack_70 = param_2;
LAB_1004deb7c:
        func_0x000107c610b8(ppppuVar5,param_1,param_2);
      }
      *(undefined1 *)((long)ppppuVar5 + param_2) = 0;
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                    ,0x9a,2,"Failed gpr_split_host_port(%s, ...)");
      if ((long)uStack_68 < 0) {
        func_0x000107c60e14(pppuStack_78);
      }
    }
  }
  else {
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    *(undefined4 *)(param_3 + 0x10) = 0x10;
    *(undefined1 *)((long)param_3 + 1) = 2;
    iVar3 = 2;
    FUN_1004ded14(2,&uStack_48,(long)param_3 + 4);
    if (iVar3 == 0) {
      if (param_4 == 0) goto LAB_1004dec80;
      pcVar6 = "invalid ipv4 address: \'%s\'";
      uVar7 = 0xa6;
    }
    else {
      if (uStack_50 < 0) {
        ppppuVar5 = (undefined8 ****)pppuStack_60;
        if (lStack_58 == 0) goto LAB_1004dec24;
      }
      else {
        if (uStack_50._7_1_ == '\0') {
LAB_1004dec24:
          if (param_4 != 0) {
            FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                          ,0xac,2,"no port given for ipv4 scheme");
          }
          goto LAB_1004dec80;
        }
        ppppuVar5 = &pppuStack_60;
      }
      func_0x000107c613b4(ppppuVar5,"%d");
      if ((((int)ppppuVar5 == 1) && (-1 < iStack_7c)) && (iStack_7c < 0x10000)) {
        uVar2 = (undefined2)iStack_7c;
        FUN_1004ded14();
        *(undefined2 *)((long)param_3 + 2) = uVar2;
        uVar7 = 1;
        goto LAB_1004dec84;
      }
      if (param_4 == 0) goto LAB_1004dec80;
      pcVar6 = "invalid ipv4 port: \'%s\'";
      uVar7 = 0xb2;
    }
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/parse_address.cc"
                  ,uVar7,2,pcVar6);
  }
LAB_1004dec80:
  uVar7 = 0;
LAB_1004dec84:
  if (uStack_50 < 0) {
    func_0x000107c60e14(pppuStack_60);
  }
  return uVar7;
}



/* Entry: 1004ded14; end: 1004ded2f;  */

void FUN_1004ded14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbedc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inet_pton_11034c4b0)();
  return;
}



/* Entry: 1004ded30; end: 1004df0ab;  */

/* WARNING: Removing unreachable block (ram,0x0001004def54) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1004ded30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong auStack_d8 [8];
  ulong auStack_98 [3];
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 *******pppppppuStack_60;
  undefined8 ******ppppppuStack_58;
  undefined8 ******ppppppuStack_50;
  
  FUN_1004d4034(auStack_d8 + 4,param_5);
  if (auStack_d8[4] == 0) {
    puVar5 = (undefined8 *)0x110;
    func_0x000107c60e20();
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x21] = 0;
    puVar5[0x20] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1a] = 0;
    puVar5[0x1d] = 0;
    puVar5[0x1c] = 0;
    puVar5[0x17] = 0;
    puVar5[0x16] = 0;
    puVar5[0x19] = 0;
    puVar5[0x18] = 0;
    puVar5[0x13] = 0;
    puVar5[0x12] = 0;
    puVar5[0x15] = 0;
    puVar5[0x14] = 0;
    puVar5[0xf] = 0;
    puVar5[0xe] = 0;
    puVar5[0x11] = 0;
    puVar5[0x10] = 0;
    puVar5[0xb] = 0;
    puVar5[10] = 0;
    puVar5[0xd] = 0;
    puVar5[0xc] = 0;
    puVar5[7] = 0;
    puVar5[6] = 0;
    puVar5[9] = 0;
    puVar5[8] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar5[0x1c] = param_1;
    puVar5[0x1d] = param_2;
    puVar6 = auStack_d8 + 4;
    FUN_1004d5530(puVar6);
    func_0x000107c60ca4(puVar5 + 0x1f,puVar6);
    *(undefined4 *)(puVar5 + 0x1e) = 2;
    FUN_100480ed8(puVar5 + 8,1);
    FUN_100460318(puVar5);
    FUN_1004d466c(&pppppppuStack_80,param_5,1);
    pppppppuVar7 = &pppppppuStack_80;
    FUN_1004df0ac();
    ppppppuStack_58 = pppppppuVar7[1];
    pppppppuStack_60 = (undefined8 *******)*pppppppuVar7;
    ppppppuStack_50 = pppppppuVar7[2];
    pppppppuVar7[1] = (undefined8 ******)0x0;
    pppppppuVar7[2] = (undefined8 ******)0x0;
    *pppppppuVar7 = (undefined8 ******)0x0;
    func_0x00010047c7d4(&pppppppuStack_80);
    pppppppuStack_80 = (undefined8 *******)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    auStack_98[0] = 0;
    auStack_98[1] = 0;
    auStack_98[2] = 0;
    ppppppuVar2 = ppppppuStack_58;
    pppppppuVar7 = pppppppuStack_60;
    if (-1 < (long)ppppppuStack_50) {
      ppppppuVar2 = (undefined8 ******)((ulong)ppppppuStack_50 >> 0x38);
      pppppppuVar7 = &pppppppuStack_60;
    }
    func_0x0001004c2450(pppppppuVar7,ppppppuVar2,&pppppppuStack_80,auStack_98);
    pppppppuVar7 = pppppppuStack_80;
    if (-1 < (long)uStack_70) {
      pppppppuVar7 = &pppppppuStack_80;
    }
    uVar8 = 0;
    func_0x000107c60850(0,pppppppuVar7,0x8000100);
    FUN_1004df104(param_5);
    if ((long)auStack_98[2] < 0) {
      func_0x000107c60e14(auStack_98[0]);
    }
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppppuStack_80);
    }
    func_0x000107c6083c(0,uVar8,param_5,&uStack_e0,&uStack_e8);
    func_0x000107c607f0(uVar8);
    puVar5[9] = uStack_e0;
    puVar5[10] = uStack_e8;
    uVar8 = uStack_e0;
    FUN_1004df170();
    puVar5[0xb] = uVar8;
    puVar5[0x18] = FUN_1005a57c8;
    puVar5[0x19] = puVar5;
    puVar5[0x1a] = 0;
    FUN_1004df46c();
    puVar5[0x14] = FUN_1005a5d50;
    puVar5[0x15] = puVar5;
    puVar5[0x16] = 0;
    FUN_100460448(puVar5);
    func_0x000107c607e0(uStack_e0);
    func_0x000107c60874(uStack_e8);
    func_0x000100480ee4(puVar5 + 0xc,param_6,puVar5 + 0x13);
    func_0x000100466b80(puVar5);
  }
  else {
    func_0x000107c2b9c0(&pppppppuStack_80,auStack_d8 + 4,1);
    uVar1 = uStack_78;
    pppppppuVar7 = pppppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar1 = uStack_70 >> 0x38;
      pppppppuVar7 = &pppppppuStack_80;
    }
    auStack_d8[2] = 0;
    auStack_d8[3] = 0;
    auStack_d8[1] = 0;
    func_0x000104ab5920(auStack_98,2,pppppppuVar7,uVar1,&uStack_e0,auStack_d8 + 1);
    pppppppuStack_60 = (undefined8 *******)(auStack_d8 + 1);
    func_0x000100482b64(&pppppppuStack_60);
    if ((long)uStack_70 < 0) {
      func_0x000107c60e14(pppppppuStack_80);
    }
    auStack_d8[0] = auStack_98[0];
    if ((auStack_98[0] & 1) != 0) {
      piVar9 = (int *)(auStack_98[0] - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar4) {
          *piVar9 = *piVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_1004bd7e8(&pppppppuStack_80,param_1,auStack_d8);
    if ((auStack_d8[0] & 1) != 0) {
      FUN_10084dad0();
    }
    if ((auStack_98[0] & 1) != 0) {
      FUN_10084dad0();
    }
  }
  func_0x00010047c7d4(auStack_d8 + 4);
  return 0;
}



/* Entry: 1004df0ac; end: 1004df103;  */

long * FUN_1004df0ac(long *param_1)

{
  code *pcVar1;
  long lStack_28;
  
  lStack_28 = *param_1;
  if (lStack_28 == 0) {
    return param_1 + 1;
  }
  *param_1 = 0x36;
  func_0x000107c2b9ec(&lStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004df0f0);
  (*pcVar1)();
}



/* Entry: 1004df104; end: 1004df16f;  */

void FUN_1004df104(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 != '\x01') {
    if ((cVar1 == '\x1e') || (cVar1 == '\x02')) {
      FUN_1004d4a44(*(undefined2 *)(param_1 + 2));
    }
    else {
      FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/lib/address_utils/sockaddr_utils.cc"
                    ,0x13e,2,"Unknown socket family %d in grpc_sockaddr_get_port");
    }
  }
  return;
}



/* Entry: 1004df170; end: 1004df1c7;  */

undefined8 FUN_1004df170(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x30;
  func_0x000107c60e20(0x30);
  FUN_1004df1c8();
  return uVar1;
}



/* Entry: 1004df1c8; end: 1004df303;  */

undefined8 * FUN_1004df1c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  code *pcStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_DAT_1107c54a8;
  FUN_10045fe88();
  *param_1 = &PTR_DAT_1107c54c8;
  FUN_1004df304(param_1 + 1);
  FUN_1004df304(param_1 + 2);
  FUN_1004df304(param_1 + 3);
  FUN_100480ed8(param_1 + 5,1);
  func_0x0001004df30c(param_1 + 1);
  func_0x0001004df30c(param_1 + 2);
  func_0x0001004df30c(param_1 + 3);
  uVar1 = 0;
  func_0x000107c60f50(0,0);
  param_1[4] = uVar1;
  uStack_78 = 0;
  pcStack_68 = FUN_1004df314;
  pcStack_60 = FUN_1005a73ac;
  uStack_58 = 0;
  puStack_70 = param_1;
  func_0x000107c607ec(param_2,0x1b,FUN_1005a54e4,&uStack_78);
  func_0x000107c6087c(param_3,0x1d,FUN_1005a73f0,&uStack_78);
  FUN_1004df33c(param_2,param_1[4]);
  FUN_1004df3d4(param_3,param_1[4]);
  return param_1;
}



/* Entry: 1004df304; end: 1004df313;  */

void FUN_1004df304(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1004df314; end: 1004df33b;  */

long FUN_1004df314(long param_1)

{
  func_0x0001004811f0(param_1 + 0x28);
  return param_1;
}



/* Entry: 1004df33c; end: 1004df347;  */

void FUN_1004df33c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004df344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_DAT_1130a6040)();
  return;
}



/* Entry: 1004df348; end: 1004df3d3;  */

void FUN_1004df348(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam00000001136a1f68 + 0x60;
  FUN_100460448(lVar1);
  func_0x000107c607e8(param_1,*(undefined8 *)(lRam00000001136a1f68 + 0xa8),
                      *(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  lVar2 = lRam00000001136a1f68;
  *(undefined1 *)(lRam00000001136a1f68 + 0xa0) = 1;
  FUN_100466b64(lVar2 + 0x30);
  func_0x000100466b80(lVar1);
  return;
}



/* Entry: 1004df3d4; end: 1004df3df;  */

void FUN_1004df3d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004df3dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_DAT_1130a6048)();
  return;
}



/* Entry: 1004df3e0; end: 1004df46b;  */

void FUN_1004df3e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = lRam00000001136a1f68 + 0x60;
  FUN_100460448(lVar1);
  func_0x000107c60878(param_1,*(undefined8 *)(lRam00000001136a1f68 + 0xa8),
                      *(undefined8 *)PTR__kCFRunLoopDefaultMode_11034abe8);
  lVar2 = lRam00000001136a1f68;
  *(undefined1 *)(lRam00000001136a1f68 + 0xa0) = 1;
  FUN_100466b64(lVar2 + 0x30);
  func_0x000100466b80(lVar1);
  return;
}



/* Entry: 1004df46c; end: 1004df473;  */

void FUN_1004df46c(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  ulong uStack_28;
  
  puVar3 = (ulong *)(param_1 + 8);
  do {
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      while (*puVar3 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    else {
      if (uVar4 != 2) {
        if ((uVar4 & 1) != 0) {
          func_0x000104ab6ba8(&uStack_30,uVar4 & 0xfffffffffffffffe);
          func_0x000104aba878(&uStack_40,2,"FD Shutdown",0xb,&uStack_41,1,&uStack_30);
          FUN_1004bd7e8(&uStack_31,param_2,&uStack_40);
          if ((uStack_40 & 1) != 0) {
            FUN_10084dad0();
          }
          if ((uStack_30 & 1) != 0) {
            FUN_10084dad0();
          }
          return;
        }
        func_0x000107c2c36c();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&uStack_40);
        FUN_1004bdf74(&uStack_30);
        func_0x000107c60bd8(puVar3);
        return;
      }
      while (*puVar3 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar2) {
          *puVar3 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          uStack_28 = 0;
          FUN_1004bd7e8(&uStack_30,param_2,&uStack_28);
          if ((uStack_28 & 1) == 0) {
            return;
          }
          FUN_10084dad0();
          return;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1004df474; end: 1004df597;  */

void FUN_1004df474(ulong *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 uStack_41;
  ulong uStack_40;
  undefined1 uStack_31;
  ulong uStack_30;
  ulong uStack_28;
  
  do {
    uVar3 = *param_1;
    if (uVar3 == 0) {
      while (*param_1 == 0) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = param_2;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          return;
        }
      }
    }
    else {
      if (uVar3 != 2) {
        if ((uVar3 & 1) != 0) {
          func_0x000104ab6ba8(&uStack_30,uVar3 & 0xfffffffffffffffe);
          func_0x000104aba878(&uStack_40,2,"FD Shutdown",0xb,&uStack_41,1,&uStack_30);
          FUN_1004bd7e8(&uStack_31,param_2,&uStack_40);
          if ((uStack_40 & 1) != 0) {
            FUN_10084dad0();
          }
          if ((uStack_30 & 1) != 0) {
            FUN_10084dad0();
          }
          return;
        }
        func_0x000107c2c36c();
        func_0x000104bd46a0();
        func_0x000104bd46a0();
        FUN_1004bdf74(&uStack_40);
        FUN_1004bdf74(&uStack_30);
        func_0x000107c60bd8(param_1);
        return;
      }
      while (*param_1 == 2) {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar2) {
          *param_1 = 0;
          cVar1 = ExclusiveMonitorsStatus();
        }
        if (cVar1 == '\0') {
          uStack_28 = 0;
          FUN_1004bd7e8(&uStack_30,param_2,&uStack_28);
          if ((uStack_28 & 1) == 0) {
            return;
          }
          FUN_10084dad0();
          return;
        }
      }
    }
    ClearExclusiveLocal();
  } while( true );
}



/* Entry: 1004df598; end: 1004df59b;  */

void FUN_1004df598(void)

{
  return;
}



/* Entry: 1004df59c; end: 1004df62f;  */

void FUN_1004df59c(long param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x10);
  uVar8 = *param_2;
  if (uVar8 != 0) {
    if ((uVar8 & 1) != 0) {
      piVar6 = (int *)(uVar8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a76694(lVar4,param_2,&stack0xffffffffffffffd8,&UNK_104a768f8);
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0(uVar8);
    }
    return;
  }
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_90 = *(long **)(lVar4 + 0x108);
  *(undefined8 *)(lVar4 + 0x108) = 0;
  uStack_88 = *(undefined8 *)(lVar4 + 0x98);
  uStack_80 = *(undefined8 *)(lVar4 + 0x48);
  uStack_78 = *(undefined8 *)(lVar4 + 0x50);
  uStack_68 = *(undefined8 *)(lVar4 + 0x60);
  uStack_70 = *(undefined8 *)(lVar4 + 0x58);
  uStack_60 = *(undefined8 *)(lVar4 + 0x68);
  uStack_58 = *(undefined8 *)(lVar4 + 0x70);
  uStack_50 = *(undefined8 *)(lVar4 + 0x78);
  uStack_98 = 0;
  auVar9 = NEON_ext(*(undefined1 (*) [16])(lVar4 + 0x88),*(undefined1 (*) [16])(lVar4 + 0x88),8,1);
  uStack_40 = auVar9._8_8_;
  uStack_48 = auVar9._0_8_;
  FUN_1004df630(auStack_a0,plStack_90,&plStack_90,&uStack_98);
  iVar5 = (int)auStack_a0;
  FUN_1004dfd10(lVar4 + 0x110);
  FUN_1004dfd58(auStack_a0);
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 8))();
    }
  }
  uVar8 = uStack_98;
  if (uStack_98 == 0) {
    FUN_1004dfe14(lVar4);
    iVar5 = (int)param_1;
  }
  else {
    uStack_a8 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      piVar6 = (int *)(uStack_98 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a76694(lVar4);
    if ((uVar8 & 1) != 0) {
      FUN_10084dad0(uVar8);
    }
  }
  uVar8 = uStack_98;
  if ((uStack_98 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (iVar5 != 0) {
    func_0x000104bd46a0(uVar8);
    FUN_1004bdf74(&uStack_a8);
    FUN_1004bdf74(&uStack_98);
  }
  do {
    func_0x000107c60bd8(uVar8);
  } while( true );
}



/* Entry: 1004df630; end: 1004df76b;  */

void FUN_1004df630(long *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined1 auVar12 [16];
  ulong uStack_138;
  undefined1 auStack_130 [8];
  ulong uStack_128;
  long *plStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  iVar7 = (int)&plStack_90;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar8 = *(int *)(*(long *)(param_2 + 0x10) + 0x38);
  puVar3 = (ulong *)param_3[8];
  do {
    uVar9 = *puVar3;
    uVar6 = uVar9 + ((ulong)(iVar8 + 0x1f) & 0xfffffff0);
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar2) {
      *puVar3 = uVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (puVar3[2] < uVar6) {
    FUN_1004bbee0();
  }
  else {
    puVar3 = (ulong *)((long)puVar3 + uVar9 + 0x30);
  }
  plStack_90 = (long *)*param_3;
  *param_3 = 0;
  uStack_78 = param_3[3];
  uStack_70 = param_3[4];
  uStack_68 = param_3[5];
  uStack_60 = param_3[6];
  uStack_58 = param_3[7];
  uStack_50 = param_3[8];
  uStack_48 = param_3[9];
  uStack_40 = param_3[10];
  uStack_88 = param_3[1];
  uStack_80 = param_3[2];
  FUN_1004df90c(puVar3,&plStack_90,param_4);
  plVar4 = plStack_90;
  if (plStack_90 != (long *)0x0) {
    plVar5 = plStack_90 + 1;
    do {
      lVar11 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_90 + 8))();
    }
  }
  *param_1 = (long)puVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (plStack_90 != (long *)0x0) {
    func_0x000107c2c1bc();
  }
  plVar5 = plVar4;
  func_0x000107c60bd8();
  pcStack_98 = FUN_1004df76c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_120 = (long *)plVar5[0x21];
  plVar5[0x21] = 0;
  lStack_118 = plVar5[0x13];
  lStack_110 = plVar5[9];
  lStack_108 = plVar5[10];
  lStack_f8 = plVar5[0xc];
  lStack_100 = plVar5[0xb];
  lStack_f0 = plVar5[0xd];
  lStack_e8 = plVar5[0xe];
  lStack_e0 = plVar5[0xf];
  uStack_128 = 0;
  auVar12 = NEON_ext(*(undefined1 (*) [16])(plVar5 + 0x11),*(undefined1 (*) [16])(plVar5 + 0x11),8,1
                    );
  uStack_d0 = auVar12._8_8_;
  uStack_d8 = auVar12._0_8_;
  puStack_c0 = param_3;
  puStack_b8 = puVar3;
  uStack_b0 = param_4;
  plStack_a8 = plVar4;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_1004df630(auStack_130,plStack_120,&plStack_120,&uStack_128);
  iVar8 = (int)auStack_130;
  FUN_1004dfd10(plVar5 + 0x22);
  FUN_1004dfd58(auStack_130);
  if (plStack_120 != (long *)0x0) {
    plVar4 = plStack_120 + 1;
    do {
      lVar11 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar11 + -1 == 0) {
      (**(code **)(*plStack_120 + 8))();
    }
  }
  uVar6 = uStack_128;
  if (uStack_128 == 0) {
    iVar8 = iVar7;
    FUN_1004dfe14(plVar5);
  }
  else {
    uStack_138 = uStack_128;
    if ((uStack_128 & 1) != 0) {
      piVar10 = (int *)(uStack_128 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar2) {
          *piVar10 = *piVar10 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104a76694(plVar5);
    if ((uVar6 & 1) != 0) {
      FUN_10084dad0(uVar6);
    }
  }
  uVar6 = uStack_128;
  if ((uStack_128 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  func_0x000107c60e78();
  if (iVar8 != 0) {
    func_0x000104bd46a0(uVar6);
    FUN_1004bdf74(&uStack_138);
    FUN_1004bdf74(&uStack_128);
  }
  do {
    func_0x000107c60bd8(uVar6);
  } while( true );
}



/* Entry: 1004df76c; end: 1004df90b;  */

void FUN_1004df76c(long param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined1 auVar8 [16];
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_90 = *(long **)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  uStack_88 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = *(undefined8 *)(param_1 + 0x60);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  uStack_98 = 0;
  auVar8 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x88),*(undefined1 (*) [16])(param_1 + 0x88),8,
                    1);
  uStack_40 = auVar8._8_8_;
  uStack_48 = auVar8._0_8_;
  FUN_1004df630(auStack_a0,plStack_90,&plStack_90,&uStack_98);
  iVar5 = (int)auStack_a0;
  FUN_1004dfd10(param_1 + 0x110);
  FUN_1004dfd58(auStack_a0);
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
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
      (**(code **)(*plStack_90 + 8))();
    }
  }
  uVar4 = uStack_98;
  if (uStack_98 == 0) {
    iVar5 = param_2;
    FUN_1004dfe14(param_1);
  }
  else {
    uStack_a8 = uStack_98;
    if ((uStack_98 & 1) != 0) {
      piVar6 = (int *)(uStack_98 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar3) {
          *piVar6 = *piVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    func_0x000104a76694(param_1);
    if ((uVar4 & 1) != 0) {
      FUN_10084dad0(uVar4);
    }
  }
  uVar4 = uStack_98;
  if ((uStack_98 & 1) != 0) {
    FUN_10084dad0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  func_0x000107c60e78();
  if (iVar5 != 0) {
    func_0x000104bd46a0(uVar4);
    FUN_1004bdf74(&uStack_a8);
    FUN_1004bdf74(&uStack_98);
  }
  do {
    func_0x000107c60bd8(uVar4);
  } while( true );
}



/* Entry: 1004df90c; end: 1004dfad3;  */

long * FUN_1004df90c(long *param_1,long *param_2,ulong *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  ulong uStack_90;
  ulong auStack_88 [2];
  char cStack_71;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  plStack_58 = param_2 + 2;
  lStack_60 = param_2[9];
  lStack_38 = param_2[10];
  uStack_68 = 0;
  lStack_50 = param_2[6];
  lStack_40 = param_2[8];
  lStack_48 = param_2[7];
  plStack_70 = param_1 + 2;
  FUN_1004b8120(auStack_88,*(undefined8 *)(*param_1 + 0x10),1,&UNK_104a82138,param_1,&plStack_70);
  uStack_90 = auStack_88[0];
  uVar3 = *param_3;
  if (auStack_88[0] != uVar3) {
    *param_3 = auStack_88[0];
    auStack_88[0] = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_1004df9bc;
    FUN_10084dad0();
    uVar3 = auStack_88[0];
  }
  if ((uVar3 & 1) != 0) {
    FUN_10084dad0();
  }
  uStack_90 = *param_3;
LAB_1004df9bc:
  if (uStack_90 == 0) {
    FUN_1004b8648(param_1 + 2,param_2[1]);
  }
  else {
    if ((uStack_90 & 1) != 0) {
      piVar4 = (int *)(uStack_90 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    func_0x000104aba950(auStack_88,&uStack_90);
    FUN_1004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/dynamic_filters.cc"
                  ,0x45,2,"error: %s");
    if (cStack_71 < '\0') {
      func_0x000107c60e14(auStack_88[0]);
    }
    FUN_1004bdf74(&uStack_90);
  }
  return param_1;
}



/* Entry: 1004dfad4; end: 1004dfd03;  */

void FUN_1004dfad4(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uStack_50;
  double dStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_2 + 8);
  plVar2 = *(long **)(param_2 + 0x10);
  *plVar2 = lVar6;
  plVar2[2] = 0;
  lVar8 = 0;
  if (*(long *)(lVar6 + 0x10) != 0) {
    plVar9 = (long *)(*(long *)(lVar6 + 0x10) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar8 = *(long *)(lVar6 + 0x10);
  }
  plVar2[2] = lVar8;
  if (((param_3[2] == 0) || (lVar8 = *(long *)(param_3[2] + 0x40), lVar8 == 0)) ||
     (plVar9 = *(long **)(lVar8 + 8), plVar9 == (long *)0x0)) {
    plVar2[3] = 0;
  }
  else {
    lVar6 = *(long *)(*plVar9 + *(long *)(lVar6 + 0x18) * 8);
    plVar2[3] = lVar6;
    if (lVar6 != 0) {
      uStack_50 = *(undefined8 *)(lVar6 + 0x10);
      uStack_38 = *(undefined8 *)(lVar6 + 0x18);
      dStack_48 = (double)*(float *)(lVar6 + 0x20);
      goto LAB_1004dfb84;
    }
  }
  uStack_38 = 0;
  uStack_50 = 0;
  dStack_48 = 0.0;
LAB_1004dfb84:
  uStack_40 = 0x3fc999999999999a;
  func_0x0001004bf25c(plVar2 + 4,&uStack_50);
  plVar9 = (long *)param_3[3];
  plVar10 = (long *)*plVar9;
  if ((long *)0x1 < plVar10) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = *plVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar6 = *plVar9;
  lVar11 = plVar9[3];
  lVar8 = plVar9[2];
  plVar2[0x2e] = plVar9[1];
  plVar2[0x2d] = lVar6;
  plVar2[0x30] = lVar11;
  plVar2[0x2f] = lVar8;
  plVar2[0x31] = param_3[5];
  puVar5 = (ulong *)param_3[6];
  plVar2[0x32] = (long)puVar5;
  plVar2[0x33] = *param_3;
  plVar2[0x34] = param_3[7];
  plVar2[0x35] = param_3[2];
  plVar2[0x36] = 0;
  do {
    uVar7 = *puVar5;
    uVar1 = uVar7 + 0x20;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *puVar5 = uVar1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (puVar5[2] < uVar1) {
    FUN_1004bbee0(puVar5,0x20);
  }
  else {
    puVar5 = (ulong *)((long)puVar5 + uVar7 + 0x30);
  }
  *puVar5 = (ulong)&PTR_DAT_1107c30a0;
  puVar5[1] = 1;
  puVar5[2] = 0;
  plVar9 = plVar2 + 0x3b;
  plVar2[0x37] = (long)puVar5;
  plVar2[0x38] = 0;
  plVar2[0x39] = 0;
  plVar2[0x3a] = 0;
  do {
    *plVar9 = 0;
    *(undefined1 *)(plVar9 + 1) = 0;
    plVar9 = plVar9 + 2;
  } while (plVar9 != plVar2 + 0x47);
  *(byte *)(plVar2 + 0x47) = *(byte *)(plVar2 + 0x47) & 0x80;
  *(undefined4 *)((long)plVar2 + 0x23c) = 0;
  *(undefined1 *)(plVar2 + 0x53) = 0;
  *(undefined4 *)(plVar2 + 0x54) = 0;
  plVar2[0x92] = plVar2[0x32];
  plVar2[0x94] = 0;
  plVar2[0x93] = 0;
  plVar2[0x97] = 0;
  *(undefined1 *)(plVar2 + 0x9e) = 0;
  *(undefined4 *)(plVar2 + 0x9f) = 0;
  plVar2[0xdd] = plVar2[0x32];
  plVar2[0xdf] = 0;
  plVar2[0xde] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1004dfd04; end: 1004dfd0f;  */

void FUN_1004dfd04(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 8) = param_2;
  return;
}



/* Entry: 1004dfd10; end: 1004dfd57;  */

long * FUN_1004dfd10(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (*param_1 != 0) {
    func_0x000104a821d4();
  }
  *param_1 = lVar1;
  *param_2 = 0;
  return param_1;
}



/* Entry: 1004dfd58; end: 1004dfd87;  */

long * FUN_1004dfd58(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000104a821d4();
  }
  return param_1;
}



/* Entry: 1004dfd88; end: 1004dfe13;  */

ulong * FUN_1004dfd88(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 **ppuVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *puStack_60;
  ulong uStack_58;
  
  puVar3 = param_1 + 1;
  if ((*param_1 & 1) == 0) {
    uVar6 = 6;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar6 = param_1[2];
  }
  uVar5 = *param_1 >> 1;
  if (uVar5 != uVar6) {
    FUN_1004dff3c(param_1,puVar3 + uVar5 * 3,param_2,param_3,param_4);
    *param_1 = *param_1 + 2;
    return puVar3 + uVar5 * 3;
  }
  ppuVar2 = &puStack_60;
  puVar3 = param_1 + 1;
  uVar6 = *param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0xc;
  }
  else {
    puVar3 = (ulong *)param_1[1];
    uVar5 = param_1[2] << 1;
  }
  puStack_60 = (undefined1 *)0x0;
  uStack_58 = 0;
  func_0x000104a782dc();
  uVar8 = uVar6 >> 1;
  lVar1 = uVar8 * 0x18;
  puStack_60 = (undefined1 *)ppuVar2;
  uStack_58 = uVar5;
  FUN_1004dff3c(param_1,(ulong *)((long)ppuVar2 + lVar1),param_2,param_3,param_4);
  if (1 < uVar6) {
    puVar4 = (ulong *)(puStack_60 + 0x10);
    uVar6 = uVar8;
    puVar7 = puVar3;
    do {
      uVar5 = *puVar7;
      puVar4[-1] = puVar7[1];
      puVar4[-2] = uVar5;
      puVar7[1] = 0x36;
      *puVar4 = puVar7[2];
      puVar7 = puVar7 + 3;
      uVar6 = uVar6 - 1;
      puVar4 = puVar4 + 3;
    } while (uVar6 != 0);
    puVar3 = puVar3 + uVar8 * 3;
    do {
      puVar3 = puVar3 + -3;
      uVar8 = uVar8 - 1;
      FUN_1004e0174(param_1,puVar3);
    } while (uVar8 != 0);
  }
  uVar6 = *param_1;
  if ((uVar6 & 1) != 0) {
    __ZdlPv(param_1[1]);
    uVar6 = *param_1;
  }
  param_1[1] = (ulong)puStack_60;
  param_1[2] = uStack_58;
  *param_1 = (uVar6 | 1) + 2;
  return (ulong *)((long)ppuVar2 + lVar1);
}



/* Entry: 1004dfe14; end: 1004dff3b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004dfe14(long param_1,undefined8 param_2,ulong *param_3,char **param_4,ulong *param_5)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  char *pcVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  ulong uStack_108;
  char *pcStack_100;
  long alStack_f8 [20];
  long lStack_58;
  
  lVar11 = 0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  alStack_f8[1] = 0;
  lVar1 = param_1 + 0x118;
  do {
    if (*(long *)(lVar1 + lVar11) != 0) {
      *(undefined8 *)(*(long *)(lVar1 + lVar11) + 0x18) = param_2;
      lVar7 = *(long *)(lVar1 + lVar11);
      *(code **)(lVar7 + 0x28) = FUN_1004e01c8;
      *(long *)(lVar7 + 0x30) = lVar7;
      *(undefined8 *)(lVar7 + 0x38) = 0;
      uStack_108 = 0;
      pcStack_100 = "resuming pending batch from client channel call";
      alStack_f8[0] = *(long *)(lVar1 + lVar11) + 0x20;
      param_3 = &uStack_108;
      param_4 = &pcStack_100;
      FUN_1004dfd88(alStack_f8 + 1,alStack_f8);
      if ((uStack_108 & 1) != 0) {
        FUN_10084dad0();
      }
      *(undefined8 *)(lVar1 + lVar11) = 0;
    }
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x30);
  puVar6 = *(ulong **)(param_1 + 0x88);
  FUN_1004dffa0(alStack_f8 + 1);
  plVar4 = alStack_f8 + 1;
  FUN_1004e0194(plVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  FUN_1004e0194(alStack_f8 + 1);
  func_0x000107c60bd8(plVar4);
  uVar10 = *param_3;
  pcVar5 = *param_4;
  if (((ulong)pcVar5 & 1) == 0) {
    uVar8 = *param_5;
    *puVar6 = uVar10;
    puVar6[1] = (ulong)pcVar5;
    puVar6[2] = uVar8;
  }
  else {
    piVar9 = (int *)(pcVar5 + -1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar8 = *param_5;
    *puVar6 = uVar10;
    puVar6[1] = (ulong)pcVar5;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar3) {
        *piVar9 = *piVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6[2] = uVar8;
    FUN_10084dad0();
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0035db34; end: 0035db3f;  */

undefined * FUN_0035db34(void)

{
  return &UNK_007f40a0;
}



/* Entry: 0035db40; end: 0035dbd3;  */

void FUN_0035db40(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_40 [32];
  
  func_0x003a2ed0(auStack_40,"grpc.inhibit_health_checking",1);
  lVar1 = param_2[8];
  FUN_003a1ecc(lVar1,auStack_40,1);
  lVar2 = param_2[8];
  param_2[8] = lVar1;
  FUN_003a2a64(lVar2);
  if ((*param_2 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    func_0x0034a2ec(param_2,param_1 + 0x30);
  }
  FUN_0035b728(param_1 + 0x30,param_2);
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_0035dcd0(param_1);
  }
  return;
}



/* Entry: 0035dbd4; end: 0035dbef;  */

void FUN_0035dbd4(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  dword **ppdVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  dword *pdVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong uVar17;
  qword *pqVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  dword *pdStack_238;
  dword *pdStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  dword *pdStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_118;
  undefined8 uStack_110;
  long lStack_70;
  
  if ((*(char *)(param_1 + 0x91) != '\0') || (*(char *)(param_1 + 0x90) == '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x90) = 0;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  if (*(long *)(param_1 + 0x30) == 0 && &uStack_228 != (ulong *)(param_1 + 0x38)) {
    FUN_0035bd58(&uStack_228,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                 (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) * -0x30c30c30c30c30c3)
    ;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  pqVar18 = &segment_command_00000020.fileoff;
  __Znwm();
  uStack_1e8 = uStack_218;
  uVar6 = uStack_220;
  uVar14 = uStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  uStack_200 = 0;
  uStack_1f8 = uVar14;
  uStack_1f0 = uVar6;
  uStack_210 = 0;
  uStack_208 = 0;
  plVar22 = *(long **)(param_1 + 0x28);
  *pqVar18 = (qword)&PTR_FUN_009dd088;
  pqVar18[1] = 1;
  pqVar18[2] = param_1;
  pqVar18[4] = 0;
  pqVar18[3] = 0;
  pqVar18[6] = 0;
  pqVar18[5] = 0;
  *(undefined1 *)(pqVar18 + 7) = 0;
  if (uVar6 - uVar14 != 0) {
    lVar11 = (long)(uVar6 - uVar14) >> 3;
    if (0x555555555555555 < (ulong)(lVar11 * -0x30c30c30c30c30c3)) goto LAB_0035e49c;
    lVar8 = lVar11 * -0x2492492492492490;
    __Znwm();
    pqVar18[4] = lVar8;
    pqVar18[5] = lVar8;
    pqVar18[6] = lVar8 + lVar11 * -0x2492492492492490;
    do {
      FUN_003d5000(&puStack_118,uVar14);
      FUN_003d5000(&lStack_1c0,&puStack_118);
      (**(code **)(*plVar22 + 0x10))(&plStack_1c8,plVar22,&lStack_1c0,uVar20);
      FUN_0034a25c(&lStack_1c0);
      lVar11 = pqVar18[3];
      if (plStack_1c8 == (long *)0x0) {
        if (lVar11 != 0) {
          FUN_003d5204(&pdStack_1e0,&puStack_118);
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring");
          if ((char)bStack_1c9 < '\0') {
            __ZdlPv(pdStack_1e0);
          }
          goto LAB_0035dfe0;
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_003d5204(&pdStack_1e0,&puStack_118);
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x186,1,
                       "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s")
          ;
          if ((char)bStack_1c9 < '\0') {
            __ZdlPv(pdStack_1e0);
          }
        }
        puVar10 = (undefined8 *)pqVar18[5];
        if (puVar10 < (undefined8 *)pqVar18[6]) {
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar12 = puVar10 + 6;
          puVar10[1] = 0;
          *puVar10 = 0;
        }
        else {
          puVar23 = (undefined8 *)pqVar18[4];
          lVar11 = (long)puVar10 - (long)puVar23 >> 4;
          uVar1 = lVar11 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar1) {
            func_0x0035e948();
            goto LAB_0035e4a0;
          }
          lVar8 = (long)pqVar18[6] - (long)puVar23 >> 4;
          uVar17 = lVar8 * 0x5555555555555556;
          if (uVar17 < uVar1 || uVar17 - uVar1 == 0) {
            uVar17 = uVar1;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar17 = 0x555555555555555;
          }
          if (uVar17 == 0) {
            lVar8 = 0;
          }
          else {
            if (0x555555555555555 < uVar17) {
              FUN_00349558();
              goto LAB_0035e4a0;
            }
            lVar8 = uVar17 * 0x30;
            __Znwm();
          }
          puVar12 = (undefined8 *)(lVar8 + lVar11 * 0x10);
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar16 = puVar12;
          if (puVar10 != puVar23) {
            do {
              uVar25 = puVar10[-5];
              uVar24 = puVar10[-6];
              puVar4 = puVar10 + -3;
              uVar26 = puVar10[-4];
              uVar28 = puVar10[-1];
              uVar27 = puVar10[-2];
              puVar10 = puVar10 + -6;
              puVar16[-3] = *puVar4;
              puVar16[-4] = uVar26;
              puVar16[-1] = uVar28;
              puVar16[-2] = uVar27;
              puVar16[-5] = uVar25;
              puVar16[-6] = uVar24;
              puVar16 = puVar16 + -6;
            } while (puVar10 != puVar23);
            puVar10 = (undefined8 *)pqVar18[4];
          }
          puVar12 = puVar12 + 6;
          pqVar18[4] = (qword)puVar16;
          pqVar18[5] = (qword)puVar12;
          pqVar18[6] = lVar8 + uVar17 * 0x30;
          if (puVar10 != (undefined8 *)0x0) {
            __ZdlPv(puVar10);
          }
        }
        plVar21 = plStack_1c8;
        pqVar18[5] = (qword)puVar12;
        plStack_1c8 = (long *)0x0;
        puVar12[-4] = plVar21;
        puVar12[-3] = 0;
        *(undefined1 *)(puVar12 + -2) = 0;
        *(undefined1 *)((long)puVar12 + -0xc) = 0;
        puVar12[-1] = 0;
        puVar12[-6] = &PTR_FUN_009dd0b8;
        puVar12[-5] = pqVar18;
LAB_0035dfe0:
        if (plStack_1c8 != (long *)0x0) {
          plVar21 = plStack_1c8 + 1;
          do {
            lVar11 = *plVar21;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plStack_1c8 + 8))();
          }
        }
      }
      FUN_0034a25c(&puStack_118);
      uVar14 = uVar14 + 0xa8;
    } while (uVar14 != uVar6);
    lVar8 = pqVar18[5];
    for (lVar11 = pqVar18[4]; lVar11 != lVar8; lVar11 = lVar11 + 0x30) {
      if (*(long *)(*(long *)(lVar11 + 8) + 0x18) != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                     ,0x13f,1,
                     "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch");
      }
      if (*(long *)(lVar11 + 0x18) != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                     ,0x146,2,"assertion failed: %s");
        _abort();
        goto LAB_0035e4a0;
      }
      pdVar9 = &MACH_HEADER.flags;
      __Znwm();
      lVar13 = *(long *)(lVar11 + 8);
      plVar22 = (long *)(lVar13 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar3) {
          *plVar22 = *plVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined ***)pdVar9 = &PTR_FUN_009dd170;
      *(long *)(pdVar9 + 2) = lVar11;
      *(long *)(pdVar9 + 4) = lVar13;
      *(dword **)(lVar11 + 0x18) = pdVar9;
      pdStack_1e0 = pdVar9;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x10))(*(long **)(lVar11 + 0x10),&pdStack_1e0);
      pdVar9 = pdStack_1e0;
      pdStack_1e0 = (dword *)0x0;
      if (pdVar9 != (dword *)0x0) {
        (**(code **)(*(long *)pdVar9 + 8))();
      }
    }
  }
  puStack_118 = &uStack_1f8;
  FUN_0034a1ec(&puStack_118);
  *pqVar18 = (qword)&PTR_FUN_009dd010;
  *(undefined1 *)((long)pqVar18 + 0x39) = 0;
  pqVar18[8] = 0;
  plVar22 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar3) {
      *plVar22 = *plVar22 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_118 = &uStack_210;
  FUN_0034a1ec(&puStack_118);
  plVar21 = (long *)(param_1 + 0x80);
  puVar10 = (undefined8 *)*plVar21;
  *plVar21 = (long)pqVar18;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)();
    pqVar18 = (qword *)*plVar21;
  }
  if (pqVar18[5] == pqVar18[4]) {
    uVar14 = *(ulong *)(param_1 + 0x30);
    if (uVar14 == 0) {
      puStack_118 = (ulong *)0x8c0fcf;
      uStack_110 = 0x14;
      uStack_1b8 = *(ulong *)(param_1 + 0x60);
      lStack_1c0 = *(long *)(param_1 + 0x58);
      if (-1 < (char)*(byte *)(param_1 + 0x6f)) {
        uStack_1b8 = (ulong)*(byte *)(param_1 + 0x6f);
        lStack_1c0 = param_1 + 0x58;
      }
      FUN_00575d30(&pdStack_1e0,&puStack_118,&lStack_1c0);
      ppdVar5 = (dword **)pdStack_1e0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        ppdVar5 = &pdStack_1e0;
      }
      func_0x00553624(&uStack_1f8,ppdVar5,uStack_1d8);
      if ((char)bStack_1c9 < '\0') {
        __ZdlPv(pdStack_1e0);
      }
    }
    else {
      uStack_1f8 = uVar14;
      if ((uVar14 & 1) != 0) {
        piVar15 = (int *)(uVar14 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = *piVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    plVar22 = *(long **)(param_1 + 0x28);
    pdVar9 = &MACH_HEADER.ncmds;
    __Znwm();
    if ((uStack_1f8 & 1) == 0) {
      *(undefined ***)pdVar9 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar9 + 2) = uStack_1f8;
    }
    else {
      piVar15 = (int *)(uStack_1f8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined ***)pdVar9 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar9 + 2) = uStack_1f8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_0055293c();
    }
    pdStack_230 = pdVar9;
    (**(code **)(*plVar22 + 0x18))(plVar22,3,&uStack_1f8,&pdStack_230);
    pdVar9 = pdStack_230;
    pdStack_230 = (dword *)0x0;
    if (pdVar9 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar9 + 8))();
    }
    if ((uStack_1f8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    plVar19 = *(long **)(param_1 + 0x28);
    puStack_118 = (ulong *)0x0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdVar9 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined ***)pdVar9 = &PTR_FUN_009dcc68;
    *(long *)(pdVar9 + 2) = param_1;
    *(undefined1 *)(pdVar9 + 4) = 0;
    pdStack_238 = pdVar9;
    (**(code **)(*plVar19 + 0x18))(plVar19,1,&puStack_118,&pdStack_238);
    pdVar9 = pdStack_238;
    pdStack_238 = (dword *)0x0;
    if (pdVar9 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar9 + 8))();
    }
    if (((ulong)puStack_118 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(long *)(*plVar21 + 0x28) == *(long *)(*plVar21 + 0x20)) || (*(long *)(param_1 + 0x88) == 0)
     ) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_0035e66c(param_1 + 0x78,plVar21);
  }
  puStack_118 = &uStack_228;
  FUN_0034a1ec(&puStack_118);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_0035e49c:
  func_0x0035e948();
LAB_0035e4a0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x35e4a4);
  (*pcVar7)();
}



/* Entry: 0035dbf0; end: 0035dc73;  */

void FUN_0035dbf0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x28);
    for (lVar2 = *(long *)(lVar2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      if (*(long **)(lVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))();
      }
    }
  }
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + 0x28);
    for (lVar2 = *(long *)(lVar2 + 0x20); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
      if (*(long **)(lVar2 + 0x10) != (long *)0x0) {
        (**(code **)(**(long **)(lVar2 + 0x10) + 0x28))();
      }
    }
  }
  return;
}



/* Entry: 0035dc74; end: 0035dccf;  */

void FUN_0035dc74(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x91) = 1;
  puVar1 = *(undefined8 **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return;
}



/* Entry: 0035dcd0; end: 0035e66b;  */

void FUN_0035dcd0(long param_1)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  dword **ppdVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  dword *pdVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong uVar17;
  qword *pqVar18;
  long *plVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  dword *pdStack_238;
  dword *pdStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  undefined8 uStack_1e8;
  dword *pdStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  long *plStack_1c8;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong *puStack_118;
  undefined8 uStack_110;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_228 = 0;
  uStack_220 = 0;
  uStack_218 = 0;
  if (*(long *)(param_1 + 0x30) == 0 && &uStack_228 != (ulong *)(param_1 + 0x38)) {
    FUN_0035bd58(&uStack_228,*(long *)(param_1 + 0x38),*(long *)(param_1 + 0x40),
                 (*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 3) * -0x30c30c30c30c30c3)
    ;
  }
  uVar20 = *(undefined8 *)(param_1 + 0x70);
  pqVar18 = &segment_command_00000020.fileoff;
  __Znwm();
  uStack_1e8 = uStack_218;
  uVar6 = uStack_220;
  uVar14 = uStack_228;
  uStack_220 = 0;
  uStack_218 = 0;
  uStack_228 = 0;
  uStack_200 = 0;
  uStack_1f8 = uVar14;
  uStack_1f0 = uVar6;
  uStack_210 = 0;
  uStack_208 = 0;
  plVar22 = *(long **)(param_1 + 0x28);
  *pqVar18 = (qword)&PTR_FUN_009dd088;
  pqVar18[1] = 1;
  pqVar18[2] = param_1;
  pqVar18[4] = 0;
  pqVar18[3] = 0;
  pqVar18[6] = 0;
  pqVar18[5] = 0;
  *(undefined1 *)(pqVar18 + 7) = 0;
  if (uVar6 - uVar14 != 0) {
    lVar11 = (long)(uVar6 - uVar14) >> 3;
    if (0x555555555555555 < (ulong)(lVar11 * -0x30c30c30c30c30c3)) goto LAB_0035e49c;
    lVar8 = lVar11 * -0x2492492492492490;
    __Znwm();
    pqVar18[4] = lVar8;
    pqVar18[5] = lVar8;
    pqVar18[6] = lVar8 + lVar11 * -0x2492492492492490;
    do {
      FUN_003d5000(&puStack_118,uVar14);
      FUN_003d5000(&lStack_1c0,&puStack_118);
      (**(code **)(*plVar22 + 0x10))(&plStack_1c8,plVar22,&lStack_1c0,uVar20);
      FUN_0034a25c(&lStack_1c0);
      lVar11 = pqVar18[3];
      if (plStack_1c8 == (long *)0x0) {
        if (lVar11 != 0) {
          FUN_003d5204(&pdStack_1e0,&puStack_118);
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring");
          if ((char)bStack_1c9 < '\0') {
            __ZdlPv(pdStack_1e0);
          }
          goto LAB_0035dfe0;
        }
      }
      else {
        if (lVar11 != 0) {
          FUN_003d5204(&pdStack_1e0,&puStack_118);
          FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                       ,0x186,1,
                       "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s")
          ;
          if ((char)bStack_1c9 < '\0') {
            __ZdlPv(pdStack_1e0);
          }
        }
        puVar10 = (undefined8 *)pqVar18[5];
        if (puVar10 < (undefined8 *)pqVar18[6]) {
          puVar10[3] = 0;
          puVar10[2] = 0;
          puVar10[5] = 0;
          puVar10[4] = 0;
          puVar12 = puVar10 + 6;
          puVar10[1] = 0;
          *puVar10 = 0;
        }
        else {
          puVar23 = (undefined8 *)pqVar18[4];
          lVar11 = (long)puVar10 - (long)puVar23 >> 4;
          uVar1 = lVar11 * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar1) {
            func_0x0035e948();
            goto LAB_0035e4a0;
          }
          lVar8 = (long)pqVar18[6] - (long)puVar23 >> 4;
          uVar17 = lVar8 * 0x5555555555555556;
          if (uVar17 < uVar1 || uVar17 - uVar1 == 0) {
            uVar17 = uVar1;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar17 = 0x555555555555555;
          }
          if (uVar17 == 0) {
            lVar8 = 0;
          }
          else {
            if (0x555555555555555 < uVar17) {
              FUN_00349558();
              goto LAB_0035e4a0;
            }
            lVar8 = uVar17 * 0x30;
            __Znwm();
          }
          puVar12 = (undefined8 *)(lVar8 + lVar11 * 0x10);
          puVar12[3] = 0;
          puVar12[2] = 0;
          puVar12[5] = 0;
          puVar12[4] = 0;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar16 = puVar12;
          if (puVar10 != puVar23) {
            do {
              uVar25 = puVar10[-5];
              uVar24 = puVar10[-6];
              puVar4 = puVar10 + -3;
              uVar26 = puVar10[-4];
              uVar28 = puVar10[-1];
              uVar27 = puVar10[-2];
              puVar10 = puVar10 + -6;
              puVar16[-3] = *puVar4;
              puVar16[-4] = uVar26;
              puVar16[-1] = uVar28;
              puVar16[-2] = uVar27;
              puVar16[-5] = uVar25;
              puVar16[-6] = uVar24;
              puVar16 = puVar16 + -6;
            } while (puVar10 != puVar23);
            puVar10 = (undefined8 *)pqVar18[4];
          }
          puVar12 = puVar12 + 6;
          pqVar18[4] = (qword)puVar16;
          pqVar18[5] = (qword)puVar12;
          pqVar18[6] = lVar8 + uVar17 * 0x30;
          if (puVar10 != (undefined8 *)0x0) {
            __ZdlPv(puVar10);
          }
        }
        plVar21 = plStack_1c8;
        pqVar18[5] = (qword)puVar12;
        plStack_1c8 = (long *)0x0;
        puVar12[-4] = plVar21;
        puVar12[-3] = 0;
        *(undefined1 *)(puVar12 + -2) = 0;
        *(undefined1 *)((long)puVar12 + -0xc) = 0;
        puVar12[-1] = 0;
        puVar12[-6] = &PTR_FUN_009dd0b8;
        puVar12[-5] = pqVar18;
LAB_0035dfe0:
        if (plStack_1c8 != (long *)0x0) {
          plVar21 = plStack_1c8 + 1;
          do {
            lVar11 = *plVar21;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar3) {
              *plVar21 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 + -1 == 0) {
            (**(code **)(*plStack_1c8 + 8))();
          }
        }
      }
      FUN_0034a25c(&puStack_118);
      uVar14 = uVar14 + 0xa8;
    } while (uVar14 != uVar6);
    lVar8 = pqVar18[5];
    for (lVar11 = pqVar18[4]; lVar11 != lVar8; lVar11 = lVar11 + 0x30) {
      if (*(long *)(*(long *)(lVar11 + 8) + 0x18) != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                     ,0x13f,1,
                     "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch");
      }
      if (*(long *)(lVar11 + 0x18) != 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                     ,0x146,2,"assertion failed: %s");
        _abort();
        goto LAB_0035e4a0;
      }
      pdVar9 = &MACH_HEADER.flags;
      __Znwm();
      lVar13 = *(long *)(lVar11 + 8);
      plVar22 = (long *)(lVar13 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar3) {
          *plVar22 = *plVar22 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined ***)pdVar9 = &PTR_FUN_009dd170;
      *(long *)(pdVar9 + 2) = lVar11;
      *(long *)(pdVar9 + 4) = lVar13;
      *(dword **)(lVar11 + 0x18) = pdVar9;
      pdStack_1e0 = pdVar9;
      (**(code **)(**(long **)(lVar11 + 0x10) + 0x10))(*(long **)(lVar11 + 0x10),&pdStack_1e0);
      pdVar9 = pdStack_1e0;
      pdStack_1e0 = (dword *)0x0;
      if (pdVar9 != (dword *)0x0) {
        (**(code **)(*(long *)pdVar9 + 8))();
      }
    }
  }
  puStack_118 = &uStack_1f8;
  FUN_0034a1ec(&puStack_118);
  *pqVar18 = (qword)&PTR_FUN_009dd010;
  *(undefined1 *)((long)pqVar18 + 0x39) = 0;
  pqVar18[8] = 0;
  plVar22 = (long *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar3) {
      *plVar22 = *plVar22 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_118 = &uStack_210;
  FUN_0034a1ec(&puStack_118);
  plVar21 = (long *)(param_1 + 0x80);
  puVar10 = (undefined8 *)*plVar21;
  *plVar21 = (long)pqVar18;
  if (puVar10 != (undefined8 *)0x0) {
    (**(code **)*puVar10)();
    pqVar18 = (qword *)*plVar21;
  }
  if (pqVar18[5] == pqVar18[4]) {
    uVar14 = *(ulong *)(param_1 + 0x30);
    if (uVar14 == 0) {
      puStack_118 = (ulong *)0x8c0fcf;
      uStack_110 = 0x14;
      uStack_1b8 = *(ulong *)(param_1 + 0x60);
      lStack_1c0 = *(long *)(param_1 + 0x58);
      if (-1 < (char)*(byte *)(param_1 + 0x6f)) {
        uStack_1b8 = (ulong)*(byte *)(param_1 + 0x6f);
        lStack_1c0 = param_1 + 0x58;
      }
      FUN_00575d30(&pdStack_1e0,&puStack_118,&lStack_1c0);
      ppdVar5 = (dword **)pdStack_1e0;
      if (-1 < (char)bStack_1c9) {
        uStack_1d8 = (ulong)bStack_1c9;
        ppdVar5 = &pdStack_1e0;
      }
      func_0x00553624(&uStack_1f8,ppdVar5,uStack_1d8);
      if ((char)bStack_1c9 < '\0') {
        __ZdlPv(pdStack_1e0);
      }
    }
    else {
      uStack_1f8 = uVar14;
      if ((uVar14 & 1) != 0) {
        piVar15 = (int *)(uVar14 - 1);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = *piVar15 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    plVar22 = *(long **)(param_1 + 0x28);
    pdVar9 = &MACH_HEADER.ncmds;
    __Znwm();
    if ((uStack_1f8 & 1) == 0) {
      *(undefined ***)pdVar9 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar9 + 2) = uStack_1f8;
    }
    else {
      piVar15 = (int *)(uStack_1f8 - 1);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      *(undefined ***)pdVar9 = &PTR_FUN_009dbfe8;
      *(ulong *)(pdVar9 + 2) = uStack_1f8;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar3) {
          *piVar15 = *piVar15 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_0055293c();
    }
    pdStack_230 = pdVar9;
    (**(code **)(*plVar22 + 0x18))(plVar22,3,&uStack_1f8,&pdStack_230);
    pdVar9 = pdStack_230;
    pdStack_230 = (dword *)0x0;
    if (pdVar9 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar9 + 8))();
    }
    if ((uStack_1f8 & 1) != 0) {
      FUN_0055293c();
    }
  }
  else if (*(long *)(param_1 + 0x78) == 0) {
    plVar19 = *(long **)(param_1 + 0x28);
    puStack_118 = (ulong *)0x0;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar3) {
        *plVar22 = *plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdVar9 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined ***)pdVar9 = &PTR_FUN_009dcc68;
    *(long *)(pdVar9 + 2) = param_1;
    *(undefined1 *)(pdVar9 + 4) = 0;
    pdStack_238 = pdVar9;
    (**(code **)(*plVar19 + 0x18))(plVar19,1,&puStack_118,&pdStack_238);
    pdVar9 = pdStack_238;
    pdStack_238 = (dword *)0x0;
    if (pdVar9 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar9 + 8))();
    }
    if (((ulong)puStack_118 & 1) != 0) {
      FUN_0055293c();
    }
  }
  if ((*(long *)(*plVar21 + 0x28) == *(long *)(*plVar21 + 0x20)) || (*(long *)(param_1 + 0x88) == 0)
     ) {
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_0035e66c(param_1 + 0x78,plVar21);
  }
  puStack_118 = &uStack_228;
  FUN_0034a1ec(&puStack_118);
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_0035e49c:
  func_0x0035e948();
LAB_0035e4a0:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x35e4a4);
  (*pcVar7)();
}



/* Entry: 0035e66c; end: 0035e6af;  */

long * FUN_0035e66c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 0035e6b0; end: 0035e733;  */

void FUN_0035e6b0(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  ulong uVar4;
  int *piVar5;
  
  pdVar3 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar4 = *param_2;
  if ((uVar4 & 1) == 0) {
    *(undefined ***)pdVar3 = &PTR_FUN_009dbfe8;
    *(ulong *)(pdVar3 + 2) = uVar4;
    *param_1 = pdVar3;
  }
  else {
    piVar5 = (int *)(uVar4 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *(undefined ***)pdVar3 = &PTR_FUN_009dbfe8;
    *(ulong *)(pdVar3 + 2) = uVar4;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar2) {
        *piVar5 = *piVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    *param_1 = pdVar3;
    FUN_0055293c(uVar4);
  }
  return;
}



/* Entry: 0035e734; end: 0035e7df;  */

undefined8 * FUN_0035e734(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_009dd088;
  if (param_1[3] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x198,1,"[%s %p] Destroying subchannel_list %p");
  }
  puVar2 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 6;
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
    puVar2 = (undefined8 *)param_1[4];
  }
  if (puVar2 != (undefined8 *)0x0) {
    param_1[5] = puVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0035e7e0; end: 0035e893;  */

void FUN_0035e7e0(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x18))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0035e834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 0035e894; end: 0035e8a7;  */

void FUN_0035e894(void)

{
  func_0x0035e838();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0035e8a8; end: 0035e92f;  */

char * FUN_0035e8a8(char *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  
  pcVar4 = param_1;
  if (*(long *)(param_1 + 0x18) != 0) {
    pcVar4 = 
    "/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
    ;
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x1a3,1,"[%s %p] Shutting down subchannel_list %p");
  }
  if (param_1[0x38] != '\0') {
    FUN_00771c4c();
    *(undefined ***)pcVar4 = &PTR_FUN_009dd088;
    if (*(long *)(pcVar4 + 0x18) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                   ,0x198,1,"[%s %p] Destroying subchannel_list %p");
    }
    puVar3 = *(undefined8 **)(pcVar4 + 0x20);
    puVar1 = *(undefined8 **)(pcVar4 + 0x28);
    if (puVar3 != puVar1) {
      do {
        puVar6 = puVar3 + 6;
        (**(code **)*puVar3)(puVar3);
        puVar3 = puVar6;
      } while (puVar6 != puVar1);
      puVar3 = *(undefined8 **)(pcVar4 + 0x20);
    }
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 **)(pcVar4 + 0x28) = puVar3;
      __ZdlPv();
    }
    return pcVar4;
  }
  param_1[0x38] = '\x01';
  pcVar2 = *(char **)(param_1 + 0x28);
  for (pcVar5 = *(char **)(param_1 + 0x20); pcVar5 != pcVar2; pcVar5 = pcVar5 + 0x30) {
    pcVar4 = pcVar5;
    FUN_0035f49c(pcVar5);
  }
  return pcVar4;
}



/* Entry: 0035e930; end: 0035e933;  */

undefined8 * FUN_0035e930(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_009dd088;
  if (param_1[3] != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x198,1,"[%s %p] Destroying subchannel_list %p");
  }
  puVar2 = (undefined8 *)param_1[4];
  puVar1 = (undefined8 *)param_1[5];
  if (puVar2 != puVar1) {
    do {
      puVar3 = puVar2 + 6;
      (**(code **)*puVar2)(puVar2);
      puVar2 = puVar3;
    } while (puVar3 != puVar1);
    puVar2 = (undefined8 *)param_1[4];
  }
  if (puVar2 != (undefined8 *)0x0) {
    param_1[5] = puVar2;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 0035e934; end: 0035e95b;  */

void FUN_0035e934(void)

{
  FUN_0035e734();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0035e95c; end: 0035ea0b;  */

undefined8 * FUN_0035e95c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dd108;
  if (param_1[2] == 0) {
    if ((param_1[5] & 1) != 0) {
      FUN_0055293c();
      plVar5 = (long *)param_1[2];
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
    return param_1;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
               ,0x120,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x35e9f4);
  (*pcVar4)();
}



/* Entry: 0035ea0c; end: 0035eabb;  */

void FUN_0035ea0c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_009dd108;
  if (param_1[2] == 0) {
    if ((param_1[5] & 1) != 0) {
      FUN_0055293c();
      plVar5 = (long *)param_1[2];
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
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_1);
    return;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
               ,0x120,2,"assertion failed: %s");
  _abort();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x35eaa4);
  (*pcVar4)();
}



/* Entry: 0035eabc; end: 0035f477;  */

void FUN_0035eabc(long ****param_1,ulong param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *******pppppppuVar5;
  code *pcVar6;
  long *******ppppppplVar7;
  dword *pdVar8;
  long ******pppppplVar9;
  int *piVar10;
  long ***ppplVar11;
  long ******pppppplVar12;
  long **pplVar13;
  long *****ppppplVar14;
  long lVar15;
  long *****ppppplVar16;
  ulong uVar17;
  ulong uVar18;
  long *****ppppplVar19;
  long ****pppplVar20;
  ulong uVar21;
  dword *pdStack_110;
  long *****ppppplStack_108;
  dword *pdStack_100;
  dword *pdStack_f8;
  dword *pdStack_f0;
  long **pplStack_e8;
  undefined8 ******ppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 ******ppppppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  long ******pppppplStack_b0;
  dword *pdStack_a8;
  ulong uStack_a0;
  long ******pppppplStack_78;
  undefined8 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pppppplVar9 = (long ******)param_1[1];
  ppppplVar19 = pppppplVar9[2];
  ppppppplVar7 = (long *******)(ppppplVar19 + 0xf);
  pppppplVar12 = *ppppppplVar7;
  if ((pppppplVar9 != pppppplVar12) && (pppppplVar9 != (long ******)ppppplVar19[0x10])) {
    func_0x00771d1c();
LAB_0035f2a4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x35f2a8);
    (*pcVar6)();
  }
  if (param_3 == 4) {
    func_0x00771c80();
    goto LAB_0035f2a4;
  }
  if (ppppplVar19[0x11] == param_1) {
    if (pppppplVar9 != pppppplVar12) {
      func_0x00771cb4();
      goto LAB_0035f2a4;
    }
    if (ppppplVar19[0x10] == (long ****)0x0) {
      (*(code *)(*ppppplVar19[5])[4])();
      *(undefined1 *)(ppppplVar19 + 0x12) = 1;
      ppppplVar19[0x11] = (long ****)0x0;
      pppplVar20 = ppppplVar19[0xf];
      ppppplVar19[0xf] = (long ****)0x0;
      if (pppplVar20 != (long ****)0x0) {
        (*(code *)**pppplVar20)();
      }
      pppplVar20 = ppppplVar19[5];
      pppppplStack_78 = (long ******)0x0;
      ppppplVar14 = ppppplVar19 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
        if (bVar3) {
          *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      pdVar8 = &MACH_HEADER.flags;
      __Znwm();
      *(undefined ***)pdVar8 = &PTR_FUN_009dcc68;
      *(long ******)(pdVar8 + 2) = ppppplVar19;
      *(undefined1 *)(pdVar8 + 4) = 0;
      pdStack_100 = pdVar8;
      (*(code *)(*pppplVar20)[3])(pppplVar20,0,&pppppplStack_78,&pdStack_100);
      pdVar8 = pdStack_100;
      pdStack_100 = (dword *)0x0;
      if (pdVar8 != (dword *)0x0) {
        (**(code **)(*(long *)pdVar8 + 8))();
      }
      ppppppplVar7 = (long *******)pppppplStack_78;
      if (((ulong)pppppplStack_78 & 1) != 0) {
        FUN_0055293c();
      }
    }
    else {
      ppppplVar19[0x11] = (long ****)0x0;
      FUN_0035e66c();
      if (*(char *)((long)ppppplVar19[0xf] + 0x39) == '\0') {
        pppplVar20 = ppppplVar19[5];
        pppppplStack_78 = (long ******)0x0;
        ppppplVar14 = ppppplVar19 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
          if (bVar3) {
            *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        pdVar8 = &MACH_HEADER.flags;
        __Znwm();
        *(undefined ***)pdVar8 = &PTR_FUN_009dcc68;
        *(long ******)(pdVar8 + 2) = ppppplVar19;
        *(undefined1 *)(pdVar8 + 4) = 0;
        pdStack_f8 = pdVar8;
        (*(code *)(*pppplVar20)[3])(pppplVar20,1,&pppppplStack_78,&pdStack_f8);
        pdVar8 = pdStack_f8;
        pdStack_f8 = (dword *)0x0;
        if (pdVar8 != (dword *)0x0) {
          (**(code **)(*(long *)pdVar8 + 8))();
        }
        ppppppplVar7 = (long *******)pppppplStack_78;
        if (((ulong)pppppplStack_78 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        pppppplStack_78 = (long ******)0x8c11bf;
        uStack_70 = 0x47;
        pplStack_e8 = ppppplVar19[0xf][5][5];
        if (((ulong)pplStack_e8 & 1) != 0) {
          piVar10 = (int *)((long)pplStack_e8 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        if ((long ***)pplStack_e8 == (long ***)0x0) {
          FUN_00353254(&ppppppuStack_e0,"OK");
        }
        else {
          FUN_00552ec8(&ppppppuStack_e0,&pplStack_e8,1);
        }
        uStack_a0 = uStack_d8;
        pdStack_a8 = (dword *)ppppppuStack_e0;
        if (-1 < (char)bStack_c9) {
          uStack_a0 = (ulong)bStack_c9;
          pdStack_a8 = (dword *)&ppppppuStack_e0;
        }
        FUN_00575d30(&ppppppuStack_c8,&pppppplStack_78,&pdStack_a8);
        pppppppuVar5 = (undefined8 *******)ppppppuStack_c8;
        if (-1 < (char)bStack_b1) {
          uStack_c0 = (ulong)bStack_b1;
          pppppppuVar5 = &ppppppuStack_c8;
        }
        func_0x00553624(&pppppplStack_b0,pppppppuVar5,uStack_c0);
        if ((char)bStack_b1 < '\0') {
          __ZdlPv(ppppppuStack_c8);
        }
        if ((char)bStack_c9 < '\0') {
          __ZdlPv(ppppppuStack_e0);
        }
        if (((ulong)pplStack_e8 & 1) != 0) {
          FUN_0055293c();
        }
        ppppplVar19 = (long *****)ppppplVar19[5];
        pdVar8 = &MACH_HEADER.ncmds;
        __Znwm();
        if (((ulong)pppppplStack_b0 & 1) == 0) {
          *(undefined ***)pdVar8 = &PTR_FUN_009dbfe8;
          *(long *******)(pdVar8 + 2) = pppppplStack_b0;
        }
        else {
          piVar10 = (int *)((long)pppppplStack_b0 + -1);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          *(undefined ***)pdVar8 = &PTR_FUN_009dbfe8;
          *(long *******)(pdVar8 + 2) = pppppplStack_b0;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar3) {
              *piVar10 = *piVar10 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          FUN_0055293c();
        }
        pdStack_f0 = pdVar8;
        (*(code *)(*ppppplVar19)[3])(ppppplVar19,3,&pppppplStack_b0,&pdStack_f0);
        pdVar8 = pdStack_f0;
        pdStack_f0 = (dword *)0x0;
        if (pdVar8 != (dword *)0x0) {
          (**(code **)(*(long *)pdVar8 + 8))();
        }
        ppppppplVar7 = (long *******)pppppplStack_b0;
        if (((ulong)pppppplStack_b0 & 1) != 0) {
          FUN_0055293c();
          ppppppplVar7 = (long *******)pppppplStack_b0;
        }
      }
    }
    goto LAB_0035f190;
  }
  if (param_3 == 2) {
    *(undefined1 *)((long)pppppplVar9 + 0x39) = 0;
    if (pppppplVar9 == pppppplVar12) {
      if (pppppplVar9 == (long ******)ppppplVar19[0x10]) goto LAB_0035eb44;
    }
    else {
      if (pppppplVar9 != (long ******)ppppplVar19[0x10]) {
        func_0x00771ce8();
        goto LAB_0035f2a4;
      }
LAB_0035eb44:
      FUN_0035e66c();
    }
    ppppplVar19[0x11] = param_1;
    pppplVar20 = ppppplVar19[5];
    pppppplStack_78 = (long ******)0x0;
    ppppplVar19 = (long *****)param_1[2];
    ppppplVar14 = ppppplVar19 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
      if (bVar3) {
        *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    pdVar8 = &MACH_HEADER.ncmds;
    __Znwm();
    *(undefined ***)pdVar8 = &PTR_DAT_009dd130;
    *(long ******)(pdVar8 + 2) = ppppplVar19;
    pdStack_a8 = pdVar8;
    (*(code *)(*pppplVar20)[3])(pppplVar20,2,&pppppplStack_78,&pdStack_a8);
    pdVar8 = pdStack_a8;
    pdStack_a8 = (dword *)0x0;
    if (pdVar8 != (dword *)0x0) {
      (**(code **)(*(long *)pdVar8 + 8))();
    }
    ppppppplVar7 = (long *******)pppppplStack_78;
    if (((ulong)pppppplStack_78 & 1) != 0) {
      FUN_0055293c();
    }
    ppplVar11 = param_1[1];
    pplVar13 = ppplVar11[4];
    if (ppplVar11[5] != pplVar13) {
      ppppplVar19 = (long *****)0x0;
      uVar21 = 0;
      do {
        if (uVar21 != ((long)param_1 - (long)pplVar13 >> 4) * -0x5555555555555555) {
          ppppppplVar7 = (long *******)((long)pplVar13 + (long)ppppplVar19);
          FUN_0035f49c();
          ppplVar11 = param_1[1];
        }
        uVar21 = uVar21 + 1;
        pplVar13 = ppplVar11[4];
        ppppplVar19 = ppppplVar19 + 6;
      } while (uVar21 < (ulong)(((long)ppplVar11[5] - (long)pplVar13 >> 4) * -0x5555555555555555));
    }
  }
  else if ((param_2 & 0xff00000000) == 0) {
    ppppplVar14 = pppppplVar9[4];
    if ((long)pppppplVar9[5] - (long)ppppplVar14 == 0) {
LAB_0035efd8:
      ppppppplVar7 = (long *******)ppppplVar14[2];
LAB_0035f250:
      if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x0035f284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(*ppppppplVar7)[4])();
        return;
      }
      goto LAB_0035f2a8;
    }
    uVar4 = ((long)pppppplVar9[5] - (long)ppppplVar14) / 0x30;
    uVar21 = uVar4;
    if (uVar4 < 2) {
      uVar21 = 1;
    }
    if (*(char *)((long)ppppplVar14 + 0x24) != '\0') {
      ppppplVar16 = ppppplVar14 + 10;
      uVar17 = 1;
      do {
        uVar18 = uVar17;
        if (uVar21 == uVar18) break;
        pcVar1 = (char *)((long)ppppplVar16 + 4);
        ppppplVar16 = ppppplVar16 + 6;
        uVar17 = uVar18 + 1;
      } while (*pcVar1 != '\0');
      if (uVar4 <= uVar18) goto LAB_0035efd8;
    }
  }
  else {
    ppppplVar14 = pppppplVar9[4];
    lVar15 = ((long)param_1 - (long)ppppplVar14 >> 4) * -0x5555555555555555;
    if (lVar15 - (long)pppppplVar9[8] == 0) {
      if (param_3 == 0) {
        ppppppplVar7 = (long *******)param_1[2];
        goto LAB_0035f250;
      }
      if (param_3 == 1) {
        if ((pppppplVar9 == pppppplVar12) && (*(char *)((long)pppppplVar9 + 0x39) == '\0')) {
          pppplVar20 = ppppplVar19[5];
          pppppplStack_78 = (long ******)0x0;
          ppppplVar14 = ppppplVar19 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppppplVar14,0x10);
            if (bVar3) {
              *ppppplVar14 = (long ****)((long)*ppppplVar14 + 1);
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          pdVar8 = &MACH_HEADER.flags;
          __Znwm();
          *(undefined ***)pdVar8 = &PTR_FUN_009dcc68;
          *(long ******)(pdVar8 + 2) = ppppplVar19;
          *(undefined1 *)(pdVar8 + 4) = 0;
          pdStack_110 = pdVar8;
          (*(code *)(*pppplVar20)[3])(pppplVar20,1,&pppppplStack_78,&pdStack_110);
          pdVar8 = pdStack_110;
          pdStack_110 = (dword *)0x0;
          if (pdVar8 != (dword *)0x0) {
            (**(code **)(*(long *)pdVar8 + 8))();
          }
          ppppppplVar7 = &pppppplStack_78;
          FUN_0033c494();
        }
      }
      else if (param_3 == 3) {
        uVar21 = lVar15 + 1;
        uVar17 = ((long)pppppplVar9[5] - (long)ppppplVar14 >> 4) * -0x5555555555555555;
        uVar4 = 0;
        if (uVar17 != 0) {
          uVar4 = uVar21 / uVar17;
        }
        ppppplVar16 = (long *****)(uVar21 - uVar4 * uVar17);
        pppppplVar9[8] = ppppplVar16;
        ppppplVar14 = ppppplVar14 + (long)ppppplVar16 * 6;
        if (ppppplVar14 == (long *****)ppppplVar14[1][4]) {
          *(undefined1 *)((long)pppppplVar9 + 0x39) = 1;
          if (pppppplVar9 == (long ******)ppppplVar19[0x10]) {
            ppppplVar19[0x11] = (long ****)0x0;
            FUN_0035e66c();
            pppppplVar9 = (long ******)param_1[1];
            pppppplVar12 = (long ******)ppppplVar19[0xf];
          }
          if (pppppplVar9 == pppppplVar12) {
            (*(code *)(*ppppplVar19[5])[4])();
            pppppplStack_78 = (long ******)0x8c1207;
            uStack_70 = 0x30;
            pplStack_e8 = (long **)param_1[5];
            if (((ulong)pplStack_e8 & 1) != 0) {
              piVar10 = (int *)((long)pplStack_e8 + -1);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar10,0x10);
                if (bVar3) {
                  *piVar10 = *piVar10 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            func_0x0035f480(&ppppppuStack_e0,&pplStack_e8,1);
            uStack_a0 = uStack_d8;
            pdStack_a8 = (dword *)ppppppuStack_e0;
            if (-1 < (char)bStack_c9) {
              uStack_a0 = (ulong)bStack_c9;
              pdStack_a8 = (dword *)&ppppppuStack_e0;
            }
            FUN_00575d30(&ppppppuStack_c8,&pppppplStack_78,&pdStack_a8);
            pppppppuVar5 = (undefined8 *******)ppppppuStack_c8;
            if (-1 < (char)bStack_b1) {
              uStack_c0 = (ulong)bStack_b1;
              pppppppuVar5 = &ppppppuStack_c8;
            }
            func_0x00553624(&pppppplStack_b0,pppppppuVar5,uStack_c0);
            if ((char)bStack_b1 < '\0') {
              __ZdlPv(ppppppuStack_c8);
            }
            if ((char)bStack_c9 < '\0') {
              __ZdlPv(ppppppuStack_e0);
            }
            FUN_0033c494(&pplStack_e8);
            ppppplVar19 = (long *****)ppppplVar19[5];
            FUN_0035e6b0(&pppppplStack_78,&pppppplStack_b0);
            ppppplStack_108 = (long *****)pppppplStack_78;
            pppppplStack_78 = (long ******)0x0;
            (*(code *)(*ppppplVar19)[3])(ppppplVar19,3,&pppppplStack_b0,&ppppplStack_108);
            ppppplVar16 = ppppplStack_108;
            ppppplStack_108 = (long *****)0x0;
            if ((long ******)ppppplVar16 != (long ******)0x0) {
              (*(code *)(*ppppplVar16)[1])();
            }
            pppppplVar9 = pppppplStack_78;
            pppppplStack_78 = (long ******)0x0;
            if (pppppplVar9 != (long ******)0x0) {
              (*(code *)(*pppppplVar9)[1])();
            }
            ppppppplVar7 = &pppppplStack_b0;
            FUN_0033c494();
          }
        }
        if (((ulong)ppppplVar14[4] & 0xff00000000) != 0 && ((ulong)ppppplVar14[4] & 0xffffffff) == 0
           ) {
          ppppppplVar7 = (long *******)ppppplVar14[2];
          (*(code *)(*ppppppplVar7)[4])();
        }
      }
    }
  }
LAB_0035f190:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
LAB_0035f2a8:
  ___stack_chk_fail();
  ppppplVar14 = (long *****)pdStack_110;
  pdStack_110 = (dword *)0x0;
  if (ppppplVar14 == (long *****)0x0) goto LAB_0035f454;
  ppplVar11 = (*ppppplVar14)[1];
  do {
    (*(code *)ppplVar11)(ppppplVar14);
LAB_0035f454:
    FUN_0033c494(&pppppplStack_78);
    __Unwind_Resume(ppppppplVar7);
    ppplVar11 = (*ppppplVar19)[1];
    ppppplVar14 = ppppplVar19;
  } while( true );
}



/* Entry: 0035f478; end: 0035f49b;  */

void FUN_0035f478(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x35f47c);
  (*pcVar1)();
}



/* Entry: 0035f49c; end: 0035f6af;  */

void FUN_0035f49c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if (*(long *)(*(long *)(param_1 + 8) + 0x18) != 0) {
      FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                   ,0x153,1,
                   "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): canceling connectivity watch (%s)"
                  );
      lVar5 = *(long *)(param_1 + 0x18);
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar5);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  plVar4 = *(long **)(param_1 + 0x10);
  if (plVar4 == (long *)0x0) {
    return;
  }
  if (*(long *)(*(long *)(param_1 + 8) + 0x18) != 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0x128,1,
                 "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): unreffing subchannel (%s)"
                );
    plVar4 = *(long **)(param_1 + 0x10);
    if (plVar4 == (long *)0x0) goto LAB_0035f504;
  }
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
LAB_0035f504:
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 0035f6b0; end: 0035f6db;  */

void FUN_0035f6b0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (*(long *)(param_2 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_2 + 8) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *(undefined8 *)(param_2 + 8);
  }
  *param_1 = uVar4;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 0035f6dc; end: 0035f797;  */

undefined8 * FUN_0035f6dc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dd170;
  plVar4 = (long *)param_1[2];
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
  param_1[2] = 0;
  return param_1;
}



/* Entry: 0035f798; end: 0035f96f;  */

void FUN_0035f798(long param_1,undefined8 param_2,ulong *param_3)

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
      FUN_003fae60();
    }
    FUN_003fae60();
    func_0x0035f480(auStack_78,param_3,1);
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                 ,0xfa,1,
                 "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): connectivity changed: old_state=%s, new_state=%s, status=%s, shutting_down=%d, pending_watcher=%p"
                );
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
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
        FUN_0055293c();
      }
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x10))(*(long **)(param_1 + 8),uVar6,param_2);
  }
  return;
}



/* Entry: 0035f970; end: 0035f99b;  */

undefined8 FUN_0035f970(long param_1)

{
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x20);
}



/* Entry: 0035f99c; end: 0035fa17;  */

void FUN_0035f99c(void)

{
  dword *pdVar1;
  
  if (pdRam0000000000b5e700 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)pdVar1 = 0;
    pdRam0000000000b5e700 = pdVar1;
  }
  return;
}



/* Entry: 0035fa18; end: 0035fc1f;  */

void FUN_0035fa18(long *param_1)

{
  code *pcVar1;
  dword *pdVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  if (pdRam0000000000b5e700 == (dword *)0x0) {
    pdVar2 = &MACH_HEADER.flags;
    __Znwm();
    *(long *)(pdVar2 + 2) = 0;
    *(long *)(pdVar2 + 4) = 0;
    *(long *)pdVar2 = 0;
    pdRam0000000000b5e700 = pdVar2;
  }
  pdVar2 = pdRam0000000000b5e700;
  plVar9 = (long *)*param_1;
  *param_1 = 0;
  (**(code **)(*plVar9 + 0x18))();
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
               ,0x30,0,"registering LB policy factory for \"%s\"");
  plVar4 = *(long **)pdVar2;
  plVar3 = *(long **)(pdVar2 + 2);
  lVar7 = 0;
  if (plVar3 != plVar4) {
    uVar11 = 0;
    do {
      plVar3 = *(long **)((long)plVar4 + uVar11 * 8);
      (**(code **)(*plVar3 + 0x18))();
      plVar4 = plVar9;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      _strcmp(plVar3,plVar4);
      if ((int)plVar3 == 0) {
        FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy_registry.cc"
                     ,0x33,2,"assertion failed: %s");
        _abort();
        goto LAB_0035fbfc;
      }
      uVar11 = uVar11 + 1;
      plVar4 = *(long **)pdVar2;
      plVar3 = *(long **)(pdVar2 + 2);
      lVar7 = (long)plVar3 - (long)plVar4;
    } while (uVar11 < (ulong)(lVar7 >> 3));
  }
  plVar5 = (long *)(pdVar2 + 4);
  if (plVar3 < (long *)*plVar5) {
    plVar10 = plVar3 + 1;
    *plVar3 = (long)plVar9;
  }
  else {
    uVar11 = (lVar7 >> 3) + 1;
    if (uVar11 >> 0x3d != 0) {
      FUN_00360550(pdVar2);
LAB_0035fbfc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x35fc00);
      (*pcVar1)();
    }
    uVar6 = *plVar5 - (long)plVar4;
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar5;
    if (uVar8 == 0) {
      plVar5 = (long *)0x0;
    }
    else {
      FUN_00360564();
    }
    plVar4 = plVar5 + (lVar7 >> 3);
    plVar10 = plVar4 + 1;
    *plVar4 = (long)plVar9;
    plVar3 = *(long **)pdVar2;
    plStack_48 = *(long **)(pdVar2 + 2);
    plStack_58 = plStack_48;
    if (plStack_48 != plVar3) {
      do {
        plStack_48 = plStack_48 + -1;
        lVar7 = *plStack_48;
        *plStack_48 = 0;
        plVar4 = plVar4 + -1;
        *plVar4 = lVar7;
      } while (plStack_48 != plVar3);
      plStack_48 = *(long **)(pdVar2 + 2);
      plStack_58 = *(long **)pdVar2;
    }
    *(long **)pdVar2 = plVar4;
    *(long **)(pdVar2 + 2) = plVar10;
    lStack_40 = *(long *)(pdVar2 + 4);
    *(long **)(pdVar2 + 4) = plVar5 + uVar8;
    plStack_50 = plStack_58;
    func_0x00360598(&plStack_58);
  }
  *(long **)(pdVar2 + 2) = plVar10;
  return;
}



/* Entry: 0035fc20; end: 0035fd0b;  */

long * FUN_0035fc20(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uStack_40;
  long *plStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  if (plRam0000000000b5e700 != (long *)0x0) {
    plVar5 = plRam0000000000b5e700;
    FUN_0035fd0c();
    if (plVar5 == (long *)0x0) {
      *param_1 = 0;
      plVar5 = (long *)0x0;
    }
    else {
      plStack_38 = (long *)param_3[1];
      uStack_40 = *param_3;
      uStack_28 = param_3[3];
      plStack_30 = (long *)param_3[2];
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      (**(code **)(*plVar5 + 0x10))(param_1);
      plVar5 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 8))();
      }
      plVar4 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
          plVar5 = plVar4;
        }
      }
    }
    return plVar5;
  }
  plVar4 = plRam0000000000b5e700;
  func_0x00771d50();
  plVar5 = plStack_30;
  plStack_30 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_0033d36c(&uStack_40);
  __Unwind_Resume();
  lVar7 = *plVar4;
  if (plVar4[1] != lVar7) {
    uVar8 = 0;
    do {
      plVar5 = *(long **)(lVar7 + uVar8 * 8);
      (**(code **)(*plVar5 + 0x18))();
      uVar6 = param_2;
      _strcmp(param_2,plVar5);
      if ((int)uVar6 == 0) {
        return *(long **)(*plVar4 + uVar8 * 8);
      }
      uVar8 = uVar8 + 1;
      lVar7 = *plVar4;
    } while (uVar8 < (ulong)(plVar4[1] - lVar7 >> 3));
  }
  return (long *)0x0;
}



/* Entry: 0035fd0c; end: 0035fd87;  */

undefined8 FUN_0035fd0c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *param_1;
  if (param_1[1] != lVar3) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(lVar3 + uVar4 * 8);
      (**(code **)(*plVar1 + 0x18))();
      uVar2 = param_2;
      _strcmp(param_2,plVar1);
      if ((int)uVar2 == 0) {
        return *(undefined8 *)(*param_1 + uVar4 * 8);
      }
      uVar4 = uVar4 + 1;
      lVar3 = *param_1;
    } while (uVar4 < (ulong)(param_1[1] - lVar3 >> 3));
  }
  return 0;
}



/* Entry: 0035fd88; end: 0035feb7;  */

bool FUN_0035fd88(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *unaff_x19;
  undefined8 **unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long *plStack_48;
  ulong uStack_40;
  undefined8 *puStack_38;
  
  if (plRam0000000000b5e700 == (long *)0x0) {
    plVar3 = plRam0000000000b5e700;
    func_0x00771d84(0,param_1);
LAB_0035fe88:
    (**(code **)(*plVar3 + 8))();
  }
  else {
    unaff_x19 = plRam0000000000b5e700;
    FUN_0035fd0c();
    if ((param_2 == 0) || (unaff_x19 == (long *)0x0)) goto LAB_0035fe68;
    uStack_40 = 0;
    puStack_80 = &uStack_78;
    lStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    (**(code **)(*unaff_x19 + 0x20))(&plStack_48,unaff_x19,&uStack_a0,&uStack_40);
    unaff_x21 = &puStack_80;
    unaff_x22 = &uStack_68;
    *(bool *)param_2 = plStack_48 == (long *)0x0;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar4 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar3 = plStack_48;
      if (lVar4 + -1 == 0) goto LAB_0035fe88;
    }
  }
  puStack_38 = unaff_x22;
  FUN_0034a050(&puStack_38);
  func_0x003499b4(unaff_x21,uStack_78);
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  if ((uStack_40 & 1) != 0) {
    FUN_0055293c();
  }
LAB_0035fe68:
  return unaff_x19 != (long *)0x0;
}



/* Entry: 0035feb8; end: 003604d3;  */

/* WARNING: Removing unreachable block (ram,0x003603b8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0035feb8(undefined8 *param_1,int *param_2,ulong *param_3)

{
  char ******ppppppcVar1;
  int *piVar2;
  char *******pppppppcVar3;
  char *pcVar4;
  char *pcVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *******pppppppuVar8;
  ulong uVar9;
  long *plVar10;
  char *pcVar11;
  char ******ppppppcVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  undefined8 uVar18;
  char ******ppppppcStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong auStack_148 [4];
  undefined1 uStack_121;
  char *******pppppppcStack_120;
  code *pcStack_118;
  byte bStack_109;
  undefined8 *******pppppppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 *******pppppppuStack_e0;
  ulong *puStack_d8;
  char *******pppppppcStack_d0;
  code *pcStack_c8;
  char *******pppppppcStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  if (plRam0000000000b5e700 == (long *)0x0) {
    func_0x00771db8();
    goto LAB_003603d8;
  }
  if (*param_2 == 6) {
    pcStack_f0 = (char *)0x0;
    pcStack_e8 = (char *)0x0;
    pppppppuStack_e0 = (undefined8 *******)0x0;
    piVar17 = *(int **)(param_2 + 0xe);
    piVar2 = *(int **)(param_2 + 0x10);
    if (piVar17 != piVar2) {
      do {
        if (*piVar17 != 5) {
          uStack_98 = 0;
          uStack_90 = 0;
          pppppppcStack_a0 = (char *******)0x0;
          FUN_003b646c(auStack_148,2,"child entry should be of type object",0x24,&pppppppuStack_108,
                       &pppppppcStack_a0);
LAB_00360234:
          pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
          FUN_0033d548(&pppppppcStack_d0);
          lVar15 = 0;
          goto LAB_00360250;
        }
        if (*(long *)(piVar17 + 0xc) != 1) {
          if (*(long *)(piVar17 + 0xc) == 0) {
            uStack_98 = 0;
            uStack_90 = 0;
            pppppppcStack_a0 = (char *******)0x0;
            FUN_003b646c(auStack_148,2,"no policy found in child entry",0x1e,&pppppppuStack_108,
                         &pppppppcStack_a0);
          }
          else {
            uStack_98 = 0;
            uStack_90 = 0;
            pppppppcStack_a0 = (char *******)0x0;
            FUN_003b646c(auStack_148,2,"oneOf violation",0xf,&pppppppuStack_108,&pppppppcStack_a0);
          }
          pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
          FUN_0033d548(&pppppppcStack_d0);
          goto LAB_00360200;
        }
        lVar15 = *(long *)(piVar17 + 8);
        if (*(int *)(lVar15 + 0x38) != 5) {
          uStack_98 = 0;
          uStack_90 = 0;
          pppppppcStack_a0 = (char *******)0x0;
          FUN_003b646c(auStack_148,2,"child entry should be of type object",0x24,&pppppppuStack_108,
                       &pppppppcStack_a0);
          goto LAB_00360234;
        }
        plVar10 = (long *)(lVar15 + 0x20);
        plVar7 = plVar10;
        if (*(char *)(lVar15 + 0x37) < '\0') {
          plVar7 = (long *)*plVar10;
        }
        FUN_0035fd88(plVar7,0);
        if ((int)plVar7 != 0) {
          auStack_148[0] = 0;
          goto LAB_00360250;
        }
        if ((char)*(byte *)(lVar15 + 0x37) < '\0') {
          plVar10 = *(long **)(lVar15 + 0x20);
          uVar16 = *(ulong *)(lVar15 + 0x28);
        }
        else {
          uVar16 = (ulong)*(byte *)(lVar15 + 0x37);
        }
        if (pcStack_e8 < pppppppuStack_e0) {
          *(long **)pcStack_e8 = plVar10;
          *(ulong *)(pcStack_e8 + 8) = uVar16;
          pcVar11 = pcStack_e8 + 0x10;
        }
        else {
          lVar15 = (long)pcStack_e8 - (long)pcStack_f0 >> 4;
          uVar9 = lVar15 + 1;
          if (uVar9 >> 0x3c != 0) goto LAB_003603d0;
          uVar13 = (long)pppppppuStack_e0 - (long)pcStack_f0 >> 3;
          if (uVar13 <= uVar9) {
            uVar13 = uVar9;
          }
          if (0x7fffffffffffffef < (ulong)((long)pppppppuStack_e0 - (long)pcStack_f0)) {
            uVar13 = 0xfffffffffffffff;
          }
          if (uVar13 == 0) {
            pppppppuVar8 = (undefined8 *******)0x0;
          }
          else {
            pppppppuVar8 = &pppppppuStack_e0;
            FUN_0035b554();
          }
          pcVar5 = pcStack_f0;
          pcVar11 = (char *)(pppppppuVar8 + lVar15 * 2);
          *(long **)pcVar11 = plVar10;
          *(ulong *)(pcVar11 + 8) = uVar16;
          pcVar14 = pcVar11;
          pcVar4 = pcStack_e8;
          for (; pcStack_e8 != pcVar5; pcStack_e8 = pcStack_e8 + -0x10) {
            uVar18 = *(undefined8 *)(pcStack_e8 + -0x10);
            *(undefined8 *)(pcVar14 + -8) = *(undefined8 *)(pcStack_e8 + -8);
            *(undefined8 *)(pcVar14 + -0x10) = uVar18;
            pcVar14 = pcVar14 + -0x10;
            pcVar4 = pcStack_f0;
          }
          pppppppuStack_e0 = pppppppuVar8 + uVar13 * 2;
          pcVar11 = pcVar11 + 0x10;
          pcStack_f0 = pcVar14;
          if (pcVar4 != (char *)0x0) {
            pcStack_e8 = pcVar11;
            __ZdlPv(pcVar4);
          }
        }
        piVar17 = piVar17 + 0x14;
        pcStack_e8 = pcVar11;
      } while (piVar17 != piVar2);
    }
    pppppppcStack_a0 = (char *******)0x8c15ca;
    uStack_98 = 0x1b;
    FUN_003605f8(&pppppppcStack_120,pcStack_f0,pcStack_e8," ",1);
    pcStack_c8 = pcStack_118;
    pppppppcStack_d0 = pppppppcStack_120;
    if (-1 < (char)bStack_109) {
      pcStack_c8 = (code *)(ulong)bStack_109;
      pppppppcStack_d0 = (char *******)&pppppppcStack_120;
    }
    FUN_00575d30(&pppppppuStack_108,&pppppppcStack_a0,&pppppppcStack_d0);
    pppppppuVar8 = pppppppuStack_108;
    if (-1 < (char)bStack_f1) {
      uStack_100 = (ulong)bStack_f1;
      pppppppuVar8 = &pppppppuStack_108;
    }
    auStack_148[2] = 0;
    auStack_148[3] = 0;
    auStack_148[1] = 0;
    FUN_003b646c(auStack_148,2,pppppppuVar8,uStack_100,&uStack_121,auStack_148 + 1);
    puStack_d8 = auStack_148 + 1;
    FUN_0033d548(&puStack_d8);
    if ((char)bStack_f1 < '\0') {
      __ZdlPv(pppppppuStack_108);
    }
    if ((char)bStack_109 < '\0') {
      __ZdlPv(pppppppcStack_120);
    }
LAB_00360200:
    lVar15 = 0;
LAB_00360250:
    if (pcStack_f0 != (char *)0x0) {
      pcStack_e8 = pcStack_f0;
      __ZdlPv();
    }
  }
  else {
    uStack_98 = 0;
    uStack_90 = 0;
    pppppppcStack_a0 = (char *******)0x0;
    FUN_003b646c(auStack_148,2,"type should be array",0x14,&pcStack_f0,&pppppppcStack_a0);
    pppppppcStack_d0 = (char *******)&pppppppcStack_a0;
    FUN_0033d548(&pppppppcStack_d0);
    lVar15 = 0;
  }
  uVar16 = auStack_148[0];
  uVar9 = *param_3;
  if (auStack_148[0] == uVar9) {
LAB_00360288:
    if ((uVar9 & 1) != 0) {
      FUN_0055293c();
    }
    uVar16 = *param_3;
  }
  else {
    *param_3 = auStack_148[0];
    auStack_148[0] = 0x36;
    if ((uVar9 & 1) != 0) {
      FUN_0055293c();
      uVar9 = auStack_148[0];
      goto LAB_00360288;
    }
  }
  if (uVar16 == 0) {
    ppppppcVar1 = (char ******)(lVar15 + 0x20);
    ppppppcVar12 = ppppppcVar1;
    if (*(char *)(lVar15 + 0x37) < '\0') {
      ppppppcVar12 = (char ******)*ppppppcVar1;
    }
    plVar10 = plRam0000000000b5e700;
    FUN_0035fd0c(plRam0000000000b5e700,ppppppcVar12);
    if (plVar10 == (long *)0x0) {
      pcStack_c8 = FUN_00561110;
      pppppppcStack_d0 = (char *******)ppppppcVar1;
      FUN_0056189c(&pppppppcStack_a0,"Factory not found for policy \"%s\"",0x21,&pppppppcStack_d0,1)
      ;
      uVar16 = uStack_98;
      pppppppcVar3 = pppppppcStack_a0;
      if (-1 < (long)uStack_90) {
        uVar16 = uStack_90 >> 0x38;
        pppppppcVar3 = (char *******)&pppppppcStack_a0;
      }
      uStack_158 = 0;
      uStack_150 = 0;
      ppppppcStack_160 = (char ******)0x0;
      FUN_003b646c(&pcStack_f0,2,pppppppcVar3,uVar16,&pppppppuStack_108,&ppppppcStack_160);
      pcVar11 = (char *)*param_3;
      if (pcStack_f0 == pcVar11) {
LAB_00360398:
        if (((ulong)pcVar11 & 1) != 0) {
          FUN_0055293c();
        }
      }
      else {
        *param_3 = (ulong)pcStack_f0;
        pcStack_f0 = segment_command_00000020.segname + 0xe;
        if (((ulong)pcVar11 & 1) != 0) {
          FUN_0055293c();
          pcVar11 = pcStack_f0;
          goto LAB_00360398;
        }
      }
      pppppppcStack_d0 = &ppppppcStack_160;
      FUN_0033d548(&pppppppcStack_d0);
      goto LAB_00360298;
    }
    (**(code **)(*plVar10 + 0x20))(param_1);
  }
  else {
LAB_00360298:
    *param_1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_003603d0:
  FUN_0035b540(&pcStack_f0);
LAB_003603d8:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3603dc);
  (*pcVar6)();
}



/* Entry: 003604d4; end: 0036054f;  */

void FUN_003604d4(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 00360550; end: 00360563;  */

undefined1  [16] FUN_00360550(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  FUN_00349558();
  lVar2 = *(long *)((long)pcVar1 + 8);
  lVar4 = *(long *)((long)pcVar1 + 0x10);
  while (lVar4 != lVar2) {
    *(long *)((long)pcVar1 + 0x10) = lVar4 + -8;
    plVar3 = *(long **)(lVar4 + -8);
    *(undefined8 *)(lVar4 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar4 = *(long *)((long)pcVar1 + 0x10);
  }
  if (*(long *)pcVar1 != 0) {
    __ZdlPv();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar1;
  return auVar6;
}



/* Entry: 00360564; end: 003605f7;  */

undefined1  [16] FUN_00360564(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  FUN_00349558();
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 003605f8; end: 003606f7;  */

void FUN_003605f8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != param_3) {
    lVar2 = param_2[1];
    puVar3 = param_2 + 2;
    for (puVar1 = puVar3; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar2 = lVar2 + param_5 + puVar1[1];
    }
    if (lVar2 != 0) {
      FUN_003606f8(param_1);
      puVar1 = (undefined8 *)*param_1;
      if (-1 < *(char *)((long)param_1 + 0x17)) {
        puVar1 = param_1;
      }
      _memcpy(puVar1,*param_2,param_2[1]);
      if (puVar3 != param_3) {
        lVar2 = (long)puVar1 + param_2[1];
        do {
          _memcpy(lVar2,param_4,param_5);
          _memcpy(lVar2 + param_5,*puVar3,puVar3[1]);
          lVar2 = lVar2 + param_5 + puVar3[1];
          puVar3 = puVar3 + 2;
        } while (puVar3 != param_3);
      }
    }
  }
  return;
}



/* Entry: 003606f8; end: 003607d3;  */

void FUN_003606f8(undefined8 *param_1,ulong param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  bVar1 = *(byte *)((long)param_1 + 0x17);
  uVar3 = (uint)(char)bVar1;
  if ((char)bVar1 < '\0') {
    uVar5 = param_1[1];
    uVar6 = param_2 - uVar5;
    if (uVar5 <= param_2 && uVar6 != 0) {
      if (uVar6 == 0) {
        return;
      }
      lVar2 = (param_1[2] & 0x7fffffffffffffff) - 1;
      uVar3 = (uint)(byte)((ulong)param_1[2] >> 0x38);
      goto LAB_0036074c;
    }
    param_1[1] = param_2;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    uVar5 = (ulong)bVar1;
    uVar6 = param_2 - uVar5;
    if (uVar5 <= param_2 && uVar6 != 0) {
      if (uVar6 == 0) {
        return;
      }
      lVar2 = 0x16;
LAB_0036074c:
      if (lVar2 - uVar5 < uVar6) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9__grow_byEmmmmmm
                  (param_1,lVar2,(uVar6 - lVar2) + uVar5,uVar5,uVar5,0,0);
        param_1[1] = uVar5;
        uVar3 = (uint)*(byte *)((long)param_1 + 0x17);
      }
      if ((uVar3 >> 7 & 1) == 0) {
        *(byte *)((long)param_1 + 0x17) = (char)uVar5 + (char)uVar6 & 0x7f;
      }
      else {
        param_1[1] = uVar5 + uVar6;
        param_1 = (undefined8 *)*param_1;
      }
      puVar4 = (undefined1 *)((long)param_1 + uVar5 + uVar6);
      goto LAB_003607c0;
    }
    *(byte *)((long)param_1 + 0x17) = (byte)param_2 & 0x7f;
  }
  puVar4 = (undefined1 *)((long)param_1 + param_2);
LAB_003607c0:
  *puVar4 = 0;
  return;
}



/* Entry: 003607d4; end: 003607db;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_003607d4(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 003607dc; end: 0036086b;  */

void FUN_003607dc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  long lVar6;
  undefined8 uVar7;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  lVar6 = param_2 + 0x10;
  lVar4 = lVar6;
  puVar5 = param_4;
  FUN_003593c8();
  if (param_2 + 0x18 == lVar4) {
    uVar7 = *param_4;
    uStack_48 = param_3;
    FUN_00359440(lVar6,param_3,&UNK_008000a0,&uStack_48,&uStack_49);
    *(undefined8 *)(lVar6 + 0xb0) = uVar7;
    *param_1 = *param_4;
    *param_4 = 0;
    return;
  }
  func_0x00771dec();
  lVar6 = lVar4 + 0x10;
  FUN_003593c8();
  if (lVar4 + 0x18 == lVar6) {
    func_0x00771e20();
  }
  else if (*(undefined8 **)(lVar6 + 0xb0) == puVar5) {
    func_0x00359680(lVar4 + 0x10,lVar6);
    FUN_00375958(lVar6 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar6);
    return;
  }
  func_0x00771e54();
  lVar4 = lVar6 + 0x10;
  FUN_003593c8();
  if (lVar6 + 0x18 == lVar4) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar6 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar6;
  return;
}



/* Entry: 0036086c; end: 003608df;  */

void FUN_0036086c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *extraout_x8;
  long lVar5;
  
  lVar5 = param_1 + 0x10;
  FUN_003593c8();
  if (param_1 + 0x18 == lVar5) {
    func_0x00771e20();
  }
  else if (*(long *)(lVar5 + 0xb0) == param_3) {
    func_0x00359680(param_1 + 0x10,lVar5);
    FUN_00375958(lVar5 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar5);
    return;
  }
  func_0x00771e54();
  lVar4 = lVar5 + 0x10;
  FUN_003593c8();
  if (lVar5 + 0x18 == lVar4) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *extraout_x8 = lVar5;
  return;
}



/* Entry: 003608e0; end: 00360993;  */

void FUN_003608e0(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  lVar4 = param_2 + 0x10;
  FUN_003593c8();
  if (param_2 + 0x18 == lVar4) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0xb0);
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 0x100000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 00360994; end: 0036099b;  */

/* WARNING: Removing unreachable block (ram,0x00339344) */

byte * FUN_00360994(undefined8 param_1,ulong param_2,undefined8 param_3,byte *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined7 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  char *pcVar8;
  uint uVar9;
  ulong *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *apbStack_1d8 [2];
  char cStack_1c1;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  ulong auStack_138 [2];
  undefined7 *puStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  code *pcStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  byte abStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pbVar7 = (byte *)((long)&MACH_HEADER.magic + 2);
  uVar12 = param_2;
  FUN_00338e58();
  if ((int)pbVar7 != 0) {
    pbVar7 = abStack_88;
    _vsnprintf(pbVar7,0x40,param_4,&stack0x00000000);
    if ((int)(uint)pbVar7 < 0) {
      unaff_x23 = (byte *)0x0;
      param_4 = (byte *)0x0;
    }
    else {
      unaff_x24 = pbVar7;
      if ((uint)pbVar7 < 0x40) {
        param_4 = (byte *)0x0;
        unaff_x23 = abStack_88;
      }
      else {
        param_4 = (byte *)(((ulong)pbVar7 & 0xffffffff) + 1);
        FUN_00338c74();
        _vsnprintf();
        unaff_x23 = param_4;
      }
    }
    uVar12 = param_2;
    FUN_00338e80(param_1,param_2,2,unaff_x23);
    pbVar7 = param_4;
    FUN_00338cb8();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return pbVar7;
  }
  ___stack_chk_fail();
  uStack_a8 = 2;
  pcStack_98 = FUN_00339178;
  lStack_d8 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar1 = 1;
  pbStack_d0 = unaff_x24;
  pbStack_c8 = unaff_x23;
  pbStack_c0 = param_4;
  uStack_b8 = param_1;
  uStack_b0 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_0033a598();
  lVar14 = *(long *)pbVar7;
  lVar2 = lVar14;
  uStack_188 = uVar1;
  _strrchr(lVar14,0x2f);
  if (lVar2 != 0) {
    lVar14 = lVar2 + 1;
  }
  puVar3 = &uStack_188;
  _localtime_r(puVar3,auStack_1c0);
  if (puVar3 == (undefined8 *)0x0) {
    uStack_178 = 0x656d69746c6163;
    uStack_171 = 0;
    uStack_180 = 0x6c3a726f727265;
    uStack_179 = 0x6f;
  }
  else {
    puVar4 = &uStack_180;
    _strftime(puVar4,0x40,"%m%d %H:%M:%S",auStack_1c0);
    if (puVar4 == (undefined7 *)0x0) {
      uStack_180 = 0x733a726f727265;
      uStack_179 = 0x74;
      uStack_178 = 0x656d69746672;
    }
  }
  uVar5 = (ulong)*(uint *)(pbVar7 + 0xc);
  func_0x00338e1c();
  uVar6 = uVar5;
  _pthread_self();
  auStack_138[1] = 0x560e98;
  puStack_128 = &uStack_180;
  uStack_120 = 0x560e98;
  uStack_118 = uVar12 & 0xffffffff;
  uStack_110 = 0x5606ac;
  pcStack_100 = FUN_00560738;
  uStack_f0 = 0x560e98;
  uStack_e8 = (ulong)*(uint *)(pbVar7 + 8);
  uStack_e0 = 0x5606ac;
  puVar10 = auStack_138;
  auStack_138[0] = uVar5;
  uStack_108 = uVar6;
  lStack_f8 = lVar14;
  FUN_0056189c(apbStack_1d8,"%s%s.%09d %7ld %s:%d]",0x15,puVar10,6);
  uVar9 = *(uint *)(pbVar7 + 0xc);
  func_0x00338e6c();
  if (uVar9 == 0) {
    auStack_138[0] = auStack_138[0] & 0xffffffffffffff00;
    uStack_120 = uStack_120 & 0xffffffffffffff00;
LAB_00339300:
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n";
  }
  else {
    FUN_0033a7d8(auStack_138);
    if ((char)uStack_120 == '\0') goto LAB_00339300;
    pbVar7 = *(byte **)PTR____stderrp_00999f90;
    pcVar8 = "%-70s %s\n%s\n";
  }
  _fprintf();
  if (cStack_1c1 < '\0') {
    pbVar7 = apbStack_1d8[0];
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_d8) {
    return pbVar7;
  }
  ___stack_chk_fail();
  if (cStack_1c1 < '\0') {
    __ZdlPv(apbStack_1d8[0]);
  }
  __Unwind_Resume();
  uVar9 = (uint)puVar10;
  if ((char *)0x3 < pcVar8) {
    uVar12 = (ulong)pcVar8 >> 2;
    pbVar13 = pbVar7;
    do {
      uVar9 = (*(int *)pbVar13 * 0x16a88000 | (uint)(*(int *)pbVar13 * -0x3361d2af) >> 0x11) *
              0x1b873593 ^ (uint)puVar10;
      uVar9 = (uVar9 >> 0x13 | uVar9 << 0xd) * 5 + 0xe6546b64;
      puVar10 = (ulong *)(ulong)uVar9;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
    pbVar7 = pbVar7 + ((ulong)pcVar8 & 0xfffffffffffffffc);
  }
  uVar11 = 0;
  uVar12 = (ulong)pcVar8 & 3;
  if (uVar12 != 1) {
    if (uVar12 != 2) {
      if (uVar12 != 3) goto LAB_00339464;
      uVar11 = (uint)pbVar7[2] << 0x10;
    }
    uVar11 = uVar11 | (uint)pbVar7[1] << 8;
  }
  uVar9 = ((uVar11 ^ *pbVar7) * 0x16a88000 | (uVar11 ^ *pbVar7) * -0x3361d2af >> 0x11) * 0x1b873593
          ^ uVar9;
LAB_00339464:
  uVar9 = uVar9 ^ (uint)pcVar8;
  uVar9 = (uVar9 ^ uVar9 >> 0x10) * -0x7a143595;
  uVar9 = (uVar9 ^ uVar9 >> 0xd) * -0x3d4d51cb;
  return (byte *)(ulong)(uVar9 ^ uVar9 >> 0x10);
}



/* Entry: 0036099c; end: 00360a17;  */

void FUN_0036099c(void)

{
  dword *pdVar1;
  
  if (pdRam0000000000b5e708 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)pdVar1 = 0;
    pdRam0000000000b5e708 = pdVar1;
  }
  return;
}



/* Entry: 00360a18; end: 00360b83;  */

dword * FUN_00360a18(int param_1,dword *param_2,dword *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  dword *pdVar4;
  dword *pdVar5;
  long *plVar6;
  dword *pdVar7;
  dword *pdVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  dword *unaff_x19;
  dword *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar14;
  undefined8 unaff_x23;
  ulong *puVar15;
  undefined8 unaff_x24;
  ulong *puVar16;
  undefined1 *unaff_x29;
  undefined1 *puVar17;
  code *unaff_x30;
  undefined1 auStack_60 [8];
  undefined8 *puStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  dword *pdStack_38;
  
  puVar3 = auStack_60;
  puVar17 = &stack0xfffffffffffffff0;
  uVar14 = 0xb5e000;
  pdVar7 = pdRam0000000000b5e708;
  pdVar8 = param_2;
  if (pdRam0000000000b5e708 == (dword *)0x0) {
    pdVar7 = &MACH_HEADER.flags;
    __Znwm();
    *(long *)(pdVar7 + 2) = 0;
    *(long *)(pdVar7 + 4) = 0;
    *(long *)pdVar7 = 0;
  }
  pdVar5 = pdVar7;
  pdRam0000000000b5e708 = pdVar7;
  if (param_1 != 0) {
    pdVar8 = *(dword **)pdVar7;
    puVar3 = (undefined1 *)register0x00000008;
    param_3 = param_2;
    param_2 = unaff_x20;
    uVar14 = unaff_x22;
    puVar17 = unaff_x29;
code_r0x00360b84:
    *(undefined8 *)(puVar3 + -0x30) = uVar14;
    *(long *)(puVar3 + -0x28) = unaff_x21;
    *(dword **)(puVar3 + -0x20) = param_2;
    *(dword **)(puVar3 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar3 + -0x10) = puVar17;
    *(code **)(puVar3 + -8) = unaff_x30;
    plVar9 = *(long **)(pdVar5 + 2);
    plVar6 = (long *)(pdVar5 + 4);
    if (plVar9 < (long *)*plVar6) {
      if (pdVar8 == (dword *)plVar9) {
        lVar10 = *(long *)param_3;
        *(long *)param_3 = 0;
        *(long *)pdVar8 = lVar10;
        *(dword **)(pdVar5 + 2) = pdVar8 + 2;
        pdVar5 = pdVar8;
      }
      else {
        FUN_00360ea4(pdVar5,pdVar8,plVar9,pdVar8 + 2);
        lVar10 = *(long *)param_3;
        *(long *)param_3 = 0;
        plVar6 = *(long **)pdVar8;
        *(long *)pdVar8 = lVar10;
        pdVar5 = pdVar8;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
    }
    else {
      lVar10 = *(long *)pdVar5;
      uVar1 = ((long)plVar9 - lVar10 >> 3) + 1;
      if (uVar1 >> 0x3d != 0) {
        pdVar7 = pdVar5;
        FUN_00361110();
        FUN_003611c8(puVar3 + -0x58);
        pdVar4 = pdVar7;
        __Unwind_Resume(pdVar7);
        *(undefined8 *)(puVar3 + -0xa0) = unaff_x24;
        *(undefined8 *)(puVar3 + -0x98) = unaff_x23;
        *(undefined8 *)(puVar3 + -0x90) = uVar14;
        *(dword **)(puVar3 + -0x88) = param_3;
        *(dword **)(puVar3 + -0x80) = pdVar5;
        *(dword **)(puVar3 + -0x78) = pdVar7;
        *(undefined1 **)(puVar3 + -0x70) = puVar3 + -0x10;
        *(code **)(puVar3 + -0x68) = FUN_00360cc8;
        if (pdRam0000000000b5e708 == (dword *)0x0) {
          pdVar7 = &MACH_HEADER.flags;
          __Znwm();
          puVar12 = (ulong *)0x0;
          *(long *)(pdVar7 + 2) = 0;
          *(long *)(pdVar7 + 4) = 0;
          *(long *)pdVar7 = 0;
          pdRam0000000000b5e708 = pdVar7;
        }
        else {
          puVar12 = *(ulong **)pdRam0000000000b5e708;
        }
        puVar15 = *(ulong **)(pdRam0000000000b5e708 + 2);
        if (puVar12 == puVar15) {
          pdVar7 = (dword *)0x0;
        }
        else {
          do {
            puVar16 = puVar12 + 1;
            pdVar7 = (dword *)*puVar12;
            (**(code **)(*(long *)pdVar7 + 0x10))(pdVar7,pdVar4,pdVar8,plVar9,param_4);
            if (((ulong)pdVar7 & 1) != 0) {
              return pdVar7;
            }
            puVar12 = puVar16;
          } while (puVar16 != puVar15);
        }
        return pdVar7;
      }
      uVar11 = *plVar6 - lVar10;
      uVar13 = (long)uVar11 >> 2;
      if (uVar13 <= uVar1) {
        uVar13 = uVar1;
      }
      if (0x7ffffffffffffff7 < uVar11) {
        uVar13 = 0x1fffffffffffffff;
      }
      *(long **)(puVar3 + -0x38) = plVar6;
      if (uVar13 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        FUN_00361124();
      }
      *(long **)(puVar3 + -0x58) = plVar6;
      *(long **)(puVar3 + -0x50) = plVar6 + ((long)pdVar8 - lVar10 >> 3);
      *(long **)(puVar3 + -0x48) = plVar6 + ((long)pdVar8 - lVar10 >> 3);
      *(long **)(puVar3 + -0x40) = plVar6 + uVar13;
      FUN_00360eec(puVar3 + -0x58,param_3);
      FUN_0036100c(pdVar5,puVar3 + -0x58,pdVar8);
      FUN_003611c8(puVar3 + -0x58);
    }
    return pdVar5;
  }
  pdVar4 = pdVar7 + 4;
  plVar6 = *(long **)(pdVar7 + 2);
  if (plVar6 < *(long **)pdVar4) {
    lVar10 = *(long *)param_2;
    *(long *)param_2 = 0;
    plVar9 = plVar6 + 1;
    *plVar6 = lVar10;
  }
  else {
    unaff_x21 = (long)plVar6 - *(long *)pdVar7 >> 3;
    uVar1 = unaff_x21 + 1;
    if (uVar1 >> 0x3d != 0) {
      unaff_x30 = FUN_00360b84;
      FUN_00361110();
      unaff_x19 = pdVar7;
      goto code_r0x00360b84;
    }
    uVar11 = (long)*(long **)pdVar4 - *(long *)pdVar7;
    uVar13 = (long)uVar11 >> 2;
    if (uVar13 <= uVar1) {
      uVar13 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar11) {
      uVar13 = 0x1fffffffffffffff;
    }
    pdStack_38 = pdVar4;
    if (uVar13 == 0) {
      pdVar4 = (dword *)0x0;
    }
    else {
      FUN_00361124();
    }
    pdVar8 = pdVar4 + unaff_x21 * 2;
    lVar10 = *(long *)param_2;
    *(long *)param_2 = 0;
    plVar9 = (long *)(pdVar8 + 2);
    *(long *)pdVar8 = lVar10;
    puVar2 = *(undefined8 **)pdVar7;
    puStack_48 = *(undefined8 **)(pdVar7 + 2);
    puStack_58 = puStack_48;
    if (puStack_48 != puVar2) {
      do {
        puStack_48 = puStack_48 + -1;
        uVar14 = *puStack_48;
        *puStack_48 = 0;
        pdVar8 = pdVar8 + -2;
        *(undefined8 *)pdVar8 = uVar14;
      } while (puStack_48 != puVar2);
      puStack_48 = *(undefined8 **)(pdVar7 + 2);
      puStack_58 = *(undefined8 **)pdVar7;
    }
    *(dword **)pdVar7 = pdVar8;
    *(long **)(pdVar7 + 2) = plVar9;
    lStack_40 = *(long *)(pdVar7 + 4);
    *(dword **)(pdVar7 + 4) = pdVar4 + uVar13 * 2;
    pdVar4 = (dword *)&puStack_58;
    puStack_50 = puStack_58;
    FUN_003611c8(pdVar4);
  }
  *(long **)(pdVar7 + 2) = plVar9;
  return pdVar4;
}



/* Entry: 00360b84; end: 00360cc7;  */

long * FUN_00360b84(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  dword *pdVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = (long *)param_1[1];
  plVar2 = param_1 + 2;
  if (plVar4 < (long *)*plVar2) {
    if (param_2 == plVar4) {
      lVar5 = *param_3;
      *param_3 = 0;
      *param_2 = lVar5;
      param_1[1] = (long)(param_2 + 1);
      param_1 = param_2;
    }
    else {
      FUN_00360ea4(param_1,param_2,plVar4,param_2 + 1);
      lVar5 = *param_3;
      *param_3 = 0;
      plVar2 = (long *)*param_2;
      *param_2 = lVar5;
      param_1 = param_2;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
  }
  else {
    lVar5 = *param_1;
    uVar1 = ((long)plVar4 - lVar5 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_00361110();
      FUN_003611c8(&plStack_58);
      __Unwind_Resume(param_1);
      if (pdRam0000000000b5e708 == (dword *)0x0) {
        pdVar3 = &MACH_HEADER.flags;
        __Znwm();
        puVar7 = (ulong *)0x0;
        *(undefined8 *)(pdVar3 + 2) = 0;
        *(undefined8 *)(pdVar3 + 4) = 0;
        *(undefined8 *)pdVar3 = 0;
        pdRam0000000000b5e708 = pdVar3;
      }
      else {
        puVar7 = *(ulong **)pdRam0000000000b5e708;
      }
      puVar9 = *(ulong **)(pdRam0000000000b5e708 + 2);
      if (puVar7 == puVar9) {
        plVar2 = (long *)0x0;
      }
      else {
        do {
          puVar10 = puVar7 + 1;
          plVar2 = (long *)*puVar7;
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,plVar4,param_4);
          if (((ulong)plVar2 & 1) != 0) {
            return plVar2;
          }
          puVar7 = puVar10;
        } while (puVar10 != puVar9);
      }
      return plVar2;
    }
    uVar6 = *plVar2 - lVar5;
    uVar8 = (long)uVar6 >> 2;
    if (uVar8 <= uVar1) {
      uVar8 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar8 = 0x1fffffffffffffff;
    }
    plStack_38 = plVar2;
    if (uVar8 == 0) {
      plStack_58 = (long *)0x0;
    }
    else {
      FUN_00361124();
      plStack_58 = plVar2;
    }
    plStack_50 = plStack_58 + ((long)param_2 - lVar5 >> 3);
    plStack_40 = plStack_58 + uVar8;
    plStack_48 = plStack_50;
    FUN_00360eec(&plStack_58,param_3);
    FUN_0036100c(param_1,&plStack_58,param_2);
    FUN_003611c8(&plStack_58);
  }
  return param_1;
}



/* Entry: 00360cc8; end: 00360e27;  */

void FUN_00360cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  dword *pdVar1;
  long *plVar2;
  ulong *puVar3;
  ulong *puVar4;
  
  if (pdRam0000000000b5e708 == (dword *)0x0) {
    pdVar1 = &MACH_HEADER.flags;
    __Znwm();
    puVar3 = (ulong *)0x0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
    *(undefined8 *)pdVar1 = 0;
    pdRam0000000000b5e708 = pdVar1;
  }
  else {
    puVar3 = *(ulong **)pdRam0000000000b5e708;
  }
  puVar4 = *(ulong **)(pdRam0000000000b5e708 + 2);
  do {
    if (puVar3 == puVar4) {
      return;
    }
    plVar2 = (long *)*puVar3;
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3,param_4);
    puVar3 = puVar3 + 1;
  } while (((ulong)plVar2 & 1) == 0);
  return;
}



/* Entry: 00360e28; end: 00360ea3;  */

void FUN_00360e28(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (long *)*puVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = (long *)puVar2[1];
    plVar1 = plVar3;
    if (plVar4 != plVar3) {
      do {
        plVar4 = plVar4 + -1;
        plVar1 = (long *)*plVar4;
        *plVar4 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar4 != plVar3);
      plVar1 = *(long **)*param_1;
    }
    puVar2[1] = plVar3;
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(plVar1);
    return;
  }
  return;
}



/* Entry: 00360ea4; end: 00360eeb;  */

undefined1  [16] FUN_00360ea4(long param_1,long *param_2,long *param_3,long param_4)

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
      (**(code **)(*plVar2 + 8))();
    }
  }
  auVar6._8_8_ = plVar3;
  auVar6._0_8_ = plVar1;
  return auVar6;
}



/* Entry: 00360eec; end: 0036100b;  */

void FUN_00360eec(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar4 = (undefined8 *)param_1[2];
  if (puVar4 == (undefined8 *)param_1[3]) {
    uVar1 = *param_1;
    uVar6 = param_1[1];
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = (long)((long)puVar4 - uVar1) >> 2;
      if ((long)puVar4 - uVar1 == 0) {
        uVar6 = 1;
      }
      uVar2 = param_1[4];
      uVar3 = uVar6;
      uStack_38 = uVar2;
      FUN_00361124();
      puVar4 = (undefined8 *)(uVar2 + (uVar6 >> 2) * 8);
      puStack_50 = (undefined8 *)param_1[1];
      uVar1 = param_1[2] - (long)puStack_50;
      puVar8 = puVar4;
      puStack_48 = puStack_50;
      if (uVar1 != 0) {
        lVar5 = ((long)uVar1 >> 3) << 3;
        do {
          uVar7 = *puStack_50;
          *puStack_50 = 0;
          *puVar8 = uVar7;
          lVar5 = lVar5 + -8;
          puStack_50 = puStack_50 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar5 != 0);
        puStack_50 = (undefined8 *)param_1[1];
        puVar8 = (undefined8 *)((long)puVar4 + (uVar1 & 0xfffffffffffffff8));
        puStack_48 = (undefined8 *)param_1[2];
      }
      uStack_58 = *param_1;
      *param_1 = uVar2;
      param_1[1] = (ulong)puVar4;
      uStack_40 = param_1[3];
      param_1[2] = (ulong)puVar8;
      param_1[3] = uVar2 + uVar3 * 8;
      FUN_003611c8(&uStack_58);
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      lVar5 = (long)(uVar6 - uVar1) >> 3;
      uVar1 = lVar5 + 2;
      if (-2 < lVar5) {
        uVar1 = lVar5 + 1;
      }
      FUN_00361158(uVar6,puVar4,uVar6 + (uVar1 >> 1) * -8);
      param_1[1] = param_1[1] + (uVar1 >> 1) * -8;
      param_1[2] = (ulong)puVar4;
    }
  }
  uVar7 = *param_2;
  *param_2 = 0;
  *puVar4 = uVar7;
  param_1[2] = param_1[2] + 8;
  return;
}



/* Entry: 0036100c; end: 003610a7;  */

void FUN_0036100c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)param_2[1];
  puVar2 = (undefined8 *)*param_1;
  puVar3 = param_3;
  while (puVar2 != puVar3) {
    puVar3 = puVar3 + -1;
    uVar6 = *puVar3;
    *puVar3 = 0;
    puVar1 = puVar1 + -1;
    *puVar1 = uVar6;
  }
  param_2[1] = puVar1;
  puVar5 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_2[2];
  puVar3 = puVar2;
  if (puVar5 != param_3) {
    do {
      uVar6 = *param_3;
      puVar1 = param_3 + 1;
      *param_3 = 0;
      puVar2 = puVar3 + 1;
      *puVar3 = uVar6;
      param_3 = puVar1;
      puVar3 = puVar2;
    } while (puVar1 != puVar5);
    puVar1 = (undefined8 *)param_2[1];
  }
  param_2[2] = puVar2;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  param_2[1] = lVar4;
  lVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar4;
  lVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 003610a8; end: 0036110f;  */

undefined1  [16] FUN_003610a8(long *param_1,long *param_2,long *param_3)

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
      (**(code **)(*plVar1 + 8))();
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = param_2;
  return auVar4;
}



/* Entry: 00361110; end: 00361123;  */

undefined1  [16] FUN_00361110(undefined8 param_1,long *param_2,long *param_3)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  pcVar1 = "vector";
  FUN_0033b32c();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_00349558();
  plVar3 = (long *)pcVar1;
  for (; (long *)pcVar1 != param_2; pcVar1 = (char *)((long)pcVar1 + 8)) {
    lVar2 = *(long *)pcVar1;
    *(long *)pcVar1 = 0;
    plVar3 = (long *)*param_3;
    *param_3 = lVar2;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    param_3 = param_3 + 1;
    plVar3 = param_2;
  }
  auVar5._8_8_ = param_3;
  auVar5._0_8_ = plVar3;
  return auVar5;
}



/* Entry: 00361124; end: 00361157;  */

undefined1  [16] FUN_00361124(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar1 = (long)param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_00349558();
  plVar2 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    *param_1 = 0;
    plVar2 = (long *)*param_3;
    *param_3 = lVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    param_3 = param_3 + 1;
    plVar2 = param_2;
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = plVar2;
  return auVar4;
}



/* Entry: 00361158; end: 003611c7;  */

undefined1  [16] FUN_00361158(long *param_1,long *param_2,long *param_3)

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
      (**(code **)(*plVar1 + 8))();
    }
    param_3 = param_3 + 1;
    plVar1 = param_2;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = plVar1;
  return auVar3;
}



/* Entry: 003611c8; end: 00361227;  */

long * FUN_003611c8(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    param_1[2] = lVar3 + -8;
    plVar2 = *(long **)(lVar3 + -8);
    *(undefined8 *)(lVar3 + -8) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 00361228; end: 0036123f;  */

void FUN_00361228(void)

{
  return;
}



/* Entry: 00361240; end: 003613e7;  */

void FUN_00361240(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  dword *pdVar5;
  dword *pdStack_48;
  dword *pdStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000000b5e718 & 1) == 0) {
    iVar2 = 0xb5e718;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x00361234(&uStack_38);
      uVar3 = uStack_38;
      uStack_38 = 0;
      FUN_0033904c(&uStack_38,0);
      uRam0000000000b5e710 = uVar3;
      ___cxa_guard_release(0xb5e718);
    }
  }
  uVar3 = uRam0000000000b5e710;
  FUN_00339a78(uRam0000000000b5e710,"native");
  if ((int)uVar3 == 0) {
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                 ,0xbd,0,"Using native dns resolver");
    pdVar5 = &MACH_HEADER.cpusubtype;
    __Znwm();
    *(undefined ***)pdVar5 = &PTR_FUN_009dd258;
    pdStack_40 = pdVar5;
    func_0x003d3fe8(param_1 + 0xf0,&pdStack_40);
    pdVar5 = pdStack_40;
    pdStack_40 = (dword *)0x0;
  }
  else {
    uVar1 = param_1 + 0xf0;
    uVar4 = uVar1;
    func_0x003d4040(uVar1,"dns",3);
    if ((uVar4 & 1) != 0) {
      return;
    }
    FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                 ,0xc2,0,"Using native dns resolver");
    pdVar5 = &MACH_HEADER.cpusubtype;
    __Znwm();
    *(undefined ***)pdVar5 = &PTR_FUN_009dd258;
    pdStack_48 = pdVar5;
    func_0x003d3fe8(uVar1,&pdStack_48);
    pdVar5 = pdStack_48;
    pdStack_48 = (dword *)0x0;
  }
  if (pdVar5 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar5 + 8))();
  }
  return;
}



/* Entry: 003613e8; end: 003613ff;  */

void FUN_003613e8(void)

{
  return;
}



/* Entry: 00361400; end: 0036149b;  */

undefined8 FUN_00361400(undefined8 param_1,long param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  if (uVar1 == 0) {
    bVar2 = *(byte *)(param_2 + 0x47);
    uVar1 = *(ulong *)(param_2 + 0x38);
    if (-1 < (char)bVar2) {
      uVar1 = (ulong)bVar2;
    }
    if (uVar1 != 0) {
      pcVar4 = *(char **)(param_2 + 0x30);
      if (-1 < (char)bVar2) {
        pcVar4 = (char *)(param_2 + 0x30);
      }
      if (*pcVar4 != '/' || uVar1 != 1) {
        return 1;
      }
    }
    pcVar4 = "no server name supplied in dns URI";
    uVar3 = 0xa9;
  }
  else {
    pcVar4 = "authority based dns uri\'s not supported";
    uVar3 = 0xa5;
  }
  FUN_00339074("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
               ,uVar3,2,pcVar4);
  return 0;
}



/* Entry: 0036149c; end: 00361697;  */

void FUN_0036149c(undefined8 *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  dword *pdVar3;
  undefined8 uVar4;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
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
  long *plStack_c8;
  long lStack_c0;
  long lStack_b8;
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
  undefined8 uStack_60;
  
  (**(code **)(*param_2 + 0x18))();
  if ((int)param_2 == 0) {
    pdVar3 = (dword *)0x0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x90);
    pdVar3 = &section_000001f8.reserved2;
    __Znwm();
    FUN_0035ae18(&uStack_1e8,param_3);
    uStack_98 = uStack_170;
    uStack_a0 = uStack_178;
    uStack_d0 = uStack_1a8;
    uStack_150 = *(undefined8 *)(param_3 + 0x98);
    uStack_158 = *(undefined8 *)(param_3 + 0x90);
    uStack_70 = *(undefined8 *)(param_3 + 0xa0);
    uStack_68 = *(undefined8 *)(param_3 + 0xa8);
    uStack_60 = *(undefined8 *)(param_3 + 0xb0);
    *(undefined8 *)(param_3 + 0xa8) = 0;
    *(undefined8 *)(param_3 + 0xb0) = 0;
    *(undefined8 *)(param_3 + 0xa0) = 0;
    uStack_108 = uStack_1e0;
    uStack_110 = uStack_1e8;
    uStack_1e8 = 0;
    uStack_1e0 = 0;
    uStack_f0 = uStack_1c8;
    uStack_f8 = uStack_1d0;
    uStack_100 = uStack_1d8;
    uStack_e8 = uStack_1c0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    uStack_1c0 = 0;
    uStack_d8 = uStack_1b0;
    uStack_e0 = uStack_1b8;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    plStack_c8 = plStack_1a0;
    lStack_c0 = lStack_198;
    lStack_b8 = lStack_190;
    plVar1 = &lStack_c0;
    if (lStack_190 != 0) {
      plStack_1a0 = &lStack_198;
      *(long **)(lStack_198 + 0x10) = &lStack_c0;
      lStack_198 = 0;
      lStack_190 = 0;
      plVar1 = plStack_c8;
    }
    plStack_c8 = plVar1;
    uStack_a8 = uStack_180;
    uStack_b0 = uStack_188;
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    uStack_90 = uStack_168;
    uStack_88 = uStack_160;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uVar2 = uVar4;
    uStack_80 = uStack_158;
    uStack_78 = uStack_150;
    func_0x003a2d4c(uVar4,"grpc.dns_min_time_between_resolutions_ms",&UNK_00007530,0x7fffffff);
    uStack_120 = 0x3fc999999999999a;
    uStack_128 = 0x3ff999999999999a;
    uStack_130 = 1000;
    uStack_118 = 120000;
    FUN_00362d04(pdVar3,&uStack_110,uVar4,(long)(int)uVar2,&uStack_130,0xb5e720);
    FUN_00361fc0(&uStack_110);
    *(undefined ***)pdVar3 = &PTR_FUN_009dd2c0;
    FUN_00361fc0(&uStack_1e8);
  }
  *param_1 = pdVar3;
  return;
}



/* Entry: 00361698; end: 0036176f;  */

void FUN_00361698(ulong *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong *puVar6;
  ulong uVar7;
  
  bVar3 = *(byte *)(param_3 + 0x47);
  uVar7 = *(ulong *)(param_3 + 0x38);
  if (-1 < (char)bVar3) {
    uVar7 = (ulong)bVar3;
  }
  if (uVar7 == 0) {
    uVar7 = 0;
    *(undefined1 *)((long)param_1 + 0x17) = 0;
  }
  else {
    plVar1 = (long *)*(long *)(param_3 + 0x30);
    if (-1 < (char)bVar3) {
      plVar1 = (long *)(param_3 + 0x30);
    }
    bVar5 = (char)*plVar1 == '/';
    if (bVar5) {
      plVar1 = (long *)((long)plVar1 + 1);
    }
    uVar7 = uVar7 - bVar5;
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x0033b318();
      puVar6 = param_1 + 1;
      (**(code **)(*param_1 + 0x30))();
      do {
        uVar7 = *puVar6;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar7 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (uVar7 - 1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003617c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x10))(param_1);
        return;
      }
      return;
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x17) = (char)uVar7;
      puVar6 = param_1;
      if (uVar7 == 0) goto LAB_00361754;
    }
    else {
      uVar2 = (uVar7 & 0xfffffffffffffff8) + 8;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = uVar7 | 7;
      }
      puVar6 = (ulong *)(uVar2 + 1);
      __Znwm();
      param_1[1] = uVar7;
      param_1[2] = uVar2 + 1 | 0x8000000000000000;
      *param_1 = (ulong)puVar6;
    }
    _memmove(puVar6,plVar1,uVar7);
    param_1 = puVar6;
  }
LAB_00361754:
  *(undefined1 *)((long)param_1 + uVar7) = 0;
  return;
}



/* Entry: 00361770; end: 003617c7;  */

void FUN_00361770(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x30))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003617c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 003617c8; end: 003617d7;  */

undefined8 * FUN_003617c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_009dd2c0;
  *param_1 = &PTR_FUN_009dd5e0;
  FUN_003a2a64(param_1[8]);
  puVar1 = (undefined8 *)param_1[0xf];
  param_1[0xf] = 0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  plVar2 = (long *)param_1[0xb];
  param_1[0xb] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_0033d36c(param_1 + 9);
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    __ZdlPv(param_1[2]);
  }
  return param_1;
}



/* Entry: 003617d8; end: 003617f7;  */

void FUN_003617d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009dd2c0;
  FUN_00362f80();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 003617f8; end: 00361987;  */

dword * FUN_003617f8(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  long *****ppppplVar4;
  undefined *puVar5;
  long ****pppplVar6;
  long *plVar7;
  undefined *puVar8;
  segment_command *psVar9;
  dword *pdVar10;
  long *****ppppplVar11;
  undefined8 uVar12;
  dword *pdVar13;
  long *****ppppplVar14;
  undefined1 *puVar15;
  long *****ppppplVar16;
  long lVar17;
  ulong uVar18;
  dword *pdVar19;
  long *****ppppplVar20;
  long *****ppppplVar21;
  long lVar22;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  long ****pppplStack_2f0;
  dword *pdStack_2e8;
  undefined1 ***pppuStack_2e0;
  code *pcStack_2d8;
  dword *pdStack_2c8;
  dword *pdStack_2c0;
  dword *pdStack_2b8;
  dword *pdStack_2b0;
  dword *pdStack_2a8;
  undefined *puStack_2a0;
  long ****pppplStack_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  long ****pppplStack_280;
  dword *pdStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined1 auStack_260 [80];
  undefined8 ****ppppuStack_210;
  ulong uStack_208;
  byte bStack_1f9;
  long ****pppplStack_1f8;
  ulong uStack_1f0;
  byte bStack_1e1;
  ulong uStack_1e0;
  dword adStack_1d8 [8];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 ****ppppuStack_188;
  ulong uStack_180;
  long ***ppplStack_158;
  undefined8 uStack_150;
  long ****pppplStack_128;
  ulong uStack_120;
  long ***ppplStack_f8;
  long ****pppplStack_f0;
  long ****apppplStack_e8 [4];
  long lStack_c8;
  undefined *puStack_c0;
  long ****pppplStack_b8;
  long ****pppplStack_b0;
  long *plStack_a8;
  segment_command *psStack_a0;
  dword *pdStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  long alStack_78 [3];
  segment_command *psStack_60;
  qword qStack_58;
  
  qStack_58 = *(qword *)PTR____stack_chk_guard_00999f88;
  plVar7 = param_2 + 1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar7 = param_2;
  func_0x003c3f4c();
  puVar5 = PTR_DAT_00afaf28;
  if ((char)*(byte *)((long)param_2 + 0x3f) < '\0') {
    ppppplVar11 = (long *****)param_2[5];
    ppppplVar21 = (long *****)param_2[6];
  }
  else {
    ppppplVar11 = (long *****)(param_2 + 5);
    ppppplVar21 = (long *****)(ulong)*(byte *)((long)param_2 + 0x3f);
  }
  puVar8 = PTR_DAT_00afaf28;
  _strlen(PTR_DAT_00afaf28);
  lVar22 = param_2[0xd];
  psVar9 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar9 = &PTR_FUN_009dd328;
  *(code **)psVar9->segname = FUN_00361988;
  psVar9->segname[8] = '\0';
  psVar9->segname[9] = '\0';
  psVar9->segname[10] = '\0';
  psVar9->segname[0xb] = '\0';
  psVar9->segname[0xc] = '\0';
  psVar9->segname[0xd] = '\0';
  psVar9->segname[0xe] = '\0';
  psVar9->segname[0xf] = '\0';
  psVar9->vmaddr = (qword)param_2;
  ppppplVar14 = ppppplVar11;
  ppppplVar16 = ppppplVar21;
  psStack_60 = psVar9;
  (**(code **)(*plVar7 + 0x10))(plVar7,ppppplVar11,ppppplVar21,puVar5,puVar8,lVar22,alStack_78);
  if (psStack_60 == (segment_command *)alStack_78) {
    lVar22 = 4;
    psVar9 = (segment_command *)alStack_78;
  }
  else {
    if (psStack_60 == (segment_command *)0x0) goto LAB_003618f8;
    lVar22 = 5;
    psVar9 = psStack_60;
  }
  (**(code **)(*(long *)psVar9 + lVar22 * 8))();
LAB_003618f8:
  pdVar19 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar19 = &PTR_FUN_009dd3b8;
  *param_1 = pdVar19;
  if (*(qword *)PTR____stack_chk_guard_00999f88 == qStack_58) {
    return pdVar19;
  }
  ___stack_chk_fail();
  pdVar10 = pdVar19;
  __Unwind_Resume();
  puVar15 = auStack_260;
  puStack_c0 = puVar5;
  pcStack_88 = FUN_00361988;
  lStack_c8 = *(long *)PTR____stack_chk_guard_00999f88;
  pppplStack_b8 = (long ****)ppppplVar21;
  pppplStack_b0 = (long ****)ppppplVar11;
  plStack_a8 = plVar7;
  psStack_a0 = (segment_command *)alStack_78;
  pdStack_98 = pdVar19;
  puStack_90 = &stack0xfffffffffffffff0;
  FUN_0034a0d4(adStack_1d8);
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  if (*ppppplVar14 == (long ****)0x0) {
    ppplStack_f8 = (long ***)0x0;
    pppplStack_f0 = (long ****)0x0;
    apppplStack_e8[0] = (long ****)0x0;
    ppppplVar20 = (long *****)ppppplVar14[1];
    ppppplVar21 = (long *****)ppppplVar14[2];
    if (ppppplVar20 != ppppplVar21) {
      ppppplVar14 = apppplStack_e8;
      do {
        pppplVar6 = pppplStack_f0;
        pppplStack_128 = (long ****)0x0;
        if (pppplStack_f0 < apppplStack_e8[0]) {
          ppppplVar16 = ppppplVar20;
          FUN_00361dc0(ppppplVar14,pppplStack_f0,ppppplVar20,&pppplStack_128);
          ppppplVar11 = (long *****)(pppplVar6 + 0x15);
        }
        else {
          ppppplVar11 = (long *****)&ppplStack_f8;
          ppppplVar16 = &pppplStack_128;
          FUN_00361c8c(ppppplVar11,ppppplVar20,ppppplVar16);
        }
        ppppplVar20 = (long *****)((long)ppppplVar20 + 0x84);
        pppplStack_f0 = (long ****)ppppplVar11;
      } while (ppppplVar20 != ppppplVar21);
    }
    ppppplVar20 = (long *****)&ppplStack_f8;
    FUN_0034a334(adStack_1d8,&ppplStack_f8);
    pppplStack_128 = (long ****)ppppplVar20;
    FUN_0034a1ec(&pppplStack_128);
  }
  else {
    ppplStack_f8 = (long ***)0x8c17c9;
    pppplStack_f0 = (long ****)((long)&MACH_HEADER.flags + 2);
    uStack_120 = *(ulong *)(pdVar10 + 0xc);
    pppplStack_128 = (long ****)*(long ******)(pdVar10 + 10);
    if (-1 < (char)*(byte *)((long)pdVar10 + 0x3f)) {
      uStack_120 = (ulong)*(byte *)((long)pdVar10 + 0x3f);
      pppplStack_128 = (long ****)(pdVar10 + 10);
    }
    ppplStack_158 = (long ***)0x8b9090;
    uStack_150 = 2;
    FUN_00552ec8(&ppppuStack_210,ppppplVar14,1);
    uStack_180 = uStack_208;
    ppppuStack_188 = ppppuStack_210;
    if (-1 < (char)bStack_1f9) {
      uStack_180 = (ulong)bStack_1f9;
      ppppuStack_188 = &ppppuStack_210;
    }
    ppppplVar20 = &pppplStack_1f8;
    ppppplVar16 = (long *****)&ppplStack_158;
    FUN_00575ebc(&pppplStack_1f8,&ppplStack_f8,&pppplStack_128,ppppplVar16,&ppppuStack_188);
    ppppplVar4 = (long *****)pppplStack_1f8;
    if (-1 < (char)bStack_1e1) {
      uStack_1f0 = (ulong)bStack_1e1;
      ppppplVar4 = ppppplVar20;
    }
    func_0x00553624(&uStack_1e0,ppppplVar4,uStack_1f0);
    FUN_0034a3d4(adStack_1d8,&uStack_1e0);
    if ((uStack_1e0 & 1) != 0) {
      FUN_0055293c();
    }
    if ((char)bStack_1e1 < '\0') {
      __ZdlPv(pppplStack_1f8);
    }
    if ((char)bStack_1f9 < '\0') {
      __ZdlPv(ppppuStack_210);
    }
  }
  uVar12 = *(undefined8 *)(pdVar10 + 0x10);
  FUN_003a277c();
  uStack_190 = uVar12;
  func_0x003d3ad8(auStack_260,adStack_1d8);
  FUN_003634bc(pdVar10);
  FUN_003d3950(auStack_260);
  pdVar19 = pdVar10 + 2;
  do {
    lVar22 = *(long *)pdVar19;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pdVar19,0x10);
    if (bVar3) {
      *(long *)pdVar19 = lVar22 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar22 + -1 == 0) {
    (**(code **)(*(long *)pdVar10 + 0x10))(pdVar10);
  }
  pdVar19 = adStack_1d8;
  FUN_003d3950();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_c8) {
    ___stack_chk_fail();
    if ((int)puVar15 != 0) {
      func_0x0040cf10();
      pppplStack_128 = &ppplStack_f8;
      FUN_0034a1ec(&pppplStack_128);
      FUN_003d3950(adStack_1d8);
    }
    pdVar10 = pdVar19;
    __Unwind_Resume();
    puStack_2a0 = puVar5;
    pcStack_268 = FUN_00361c8c;
    lVar22 = *(long *)(pdVar10 + 2) - *(long *)pdVar10 >> 3;
    uVar1 = lVar22 * -0x30c30c30c30c30c3 + 1;
    pppplStack_298 = (long ****)ppppplVar21;
    pppplStack_290 = (long ****)ppppplVar11;
    pppplStack_288 = (long ****)ppppplVar14;
    pppplStack_280 = (long ****)ppppplVar20;
    pdStack_278 = pdVar19;
    ppuStack_270 = &puStack_90;
    if (0x186186186186186 < uVar1) {
      FUN_0035baac();
      FUN_0035d2ac(&pdStack_2c8);
      __Unwind_Resume(pdVar10);
      pcStack_2d8 = FUN_00361dc0;
      uStack_300 = 0;
      uStack_2f8 = 0;
      puStack_308 = &uStack_300;
      pppplStack_2f0 = (long ****)ppppplVar20;
      pdStack_2e8 = pdVar10;
      pppuStack_2e0 = &ppuStack_270;
      FUN_003d4e10(puVar15,ppppplVar16,0,&puStack_308);
      pdVar19 = (dword *)&puStack_308;
      FUN_0034a294(pdVar19,uStack_300);
      return pdVar19;
    }
    pdVar19 = pdVar10 + 4;
    lVar17 = *(long *)pdVar19 - *(long *)pdVar10 >> 3;
    uVar18 = lVar17 * -0x6186186186186186;
    if (uVar18 < uVar1 || uVar18 - uVar1 == 0) {
      uVar18 = uVar1;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar17 * -0x30c30c30c30c30c3)) {
      uVar18 = 0x186186186186186;
    }
    pdStack_2a8 = pdVar19;
    if (uVar18 == 0) {
      pdVar13 = (dword *)0x0;
    }
    else {
      pdVar13 = pdVar19;
      FUN_0035bac0();
    }
    pdStack_2c0 = pdVar13 + lVar22 * 2;
    pdStack_2b0 = pdVar13 + uVar18 * 0x2a;
    pdStack_2c8 = pdVar13;
    pdStack_2b8 = pdStack_2c0;
    FUN_00361dc0(pdVar19,pdStack_2c0,puVar15,ppppplVar16);
    pdStack_2b8 = pdStack_2b8 + 0x2a;
    FUN_0035d228(pdVar10,&pdStack_2c8);
    pdVar19 = *(dword **)(pdVar10 + 2);
    FUN_0035d2ac(&pdStack_2c8);
    return pdVar19;
  }
  return pdVar19;
}



/* Entry: 00361988; end: 00361c8b;  */

undefined8 ** FUN_00361988(long *param_1,long *param_2,long ***param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 **ppuVar3;
  long ***ppplVar4;
  char cVar5;
  bool bVar6;
  char **ppcVar7;
  long **pplVar8;
  long lVar9;
  undefined8 **ppuVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 **ppuVar14;
  long ***ppplVar15;
  undefined8 *puStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long **pplStack_270;
  undefined8 **ppuStack_268;
  undefined1 **ppuStack_260;
  code *pcStack_258;
  undefined8 **ppuStack_248;
  undefined8 **ppuStack_240;
  undefined8 **ppuStack_238;
  undefined8 **ppuStack_230;
  undefined8 **ppuStack_228;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [80];
  undefined8 **ppuStack_190;
  ulong uStack_188;
  byte bStack_179;
  long **pplStack_178;
  ulong uStack_170;
  byte bStack_161;
  ulong uStack_160;
  undefined8 *apuStack_158 [4];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  long *plStack_d8;
  undefined8 uStack_d0;
  long **pplStack_a8;
  ulong uStack_a0;
  long *plStack_78;
  char **ppcStack_70;
  char **appcStack_68 [4];
  long lStack_48;
  
  puVar11 = auStack_1e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  FUN_0034a0d4(apuStack_158);
  uStack_120 = 0;
  uStack_128 = 0;
  lStack_110 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  if (*param_2 == 0) {
    plStack_78 = (long *)0x0;
    ppcStack_70 = (char **)0x0;
    appcStack_68[0] = (char **)0x0;
    ppplVar15 = (long ***)param_2[1];
    ppplVar4 = (long ***)param_2[2];
    if (ppplVar15 != ppplVar4) {
      do {
        ppcVar7 = ppcStack_70;
        pplStack_a8 = (long **)0x0;
        if (ppcStack_70 < appcStack_68[0]) {
          param_3 = ppplVar15;
          FUN_00361dc0(appcStack_68,ppcStack_70,ppplVar15,&pplStack_a8);
          pplVar8 = (long **)(ppcVar7 + 0x15);
        }
        else {
          pplVar8 = &plStack_78;
          param_3 = &pplStack_a8;
          FUN_00361c8c(pplVar8,ppplVar15,param_3);
        }
        ppplVar15 = (long ***)((long)ppplVar15 + 0x84);
        ppcStack_70 = (char **)pplVar8;
      } while (ppplVar15 != ppplVar4);
    }
    ppplVar15 = (long ***)&plStack_78;
    FUN_0034a334(apuStack_158,&plStack_78);
    pplStack_a8 = (long **)ppplVar15;
    FUN_0034a1ec(&pplStack_a8);
  }
  else {
    plStack_78 = (long *)0x8c17c9;
    ppcStack_70 = (char **)((long)&MACH_HEADER.flags + 2);
    uStack_a0 = param_1[6];
    pplStack_a8 = (long **)param_1[5];
    if (-1 < (char)*(byte *)((long)param_1 + 0x3f)) {
      uStack_a0 = (ulong)*(byte *)((long)param_1 + 0x3f);
      pplStack_a8 = (long **)(param_1 + 5);
    }
    plStack_d8 = (long *)0x8b9090;
    uStack_d0 = 2;
    FUN_00552ec8(&ppuStack_190,param_2,1);
    uStack_100 = uStack_188;
    ppuStack_108 = ppuStack_190;
    if (-1 < (char)bStack_179) {
      uStack_100 = (ulong)bStack_179;
      ppuStack_108 = &ppuStack_190;
    }
    ppplVar15 = &pplStack_178;
    param_3 = (long ***)&plStack_d8;
    FUN_00575ebc(&pplStack_178,&plStack_78,&pplStack_a8,param_3,&ppuStack_108);
    ppplVar4 = (long ***)pplStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      ppplVar4 = ppplVar15;
    }
    func_0x00553624(&uStack_160,ppplVar4,uStack_170);
    FUN_0034a3d4(apuStack_158,&uStack_160);
    if ((uStack_160 & 1) != 0) {
      FUN_0055293c();
    }
    if ((char)bStack_161 < '\0') {
      __ZdlPv(pplStack_178);
    }
    if ((char)bStack_179 < '\0') {
      __ZdlPv(ppuStack_190);
    }
  }
  lVar9 = param_1[8];
  FUN_003a277c();
  lStack_110 = lVar9;
  func_0x003d3ad8(auStack_1e0,apuStack_158);
  FUN_003634bc(param_1);
  FUN_003d3950(auStack_1e0);
  plVar1 = param_1 + 1;
  do {
    lVar9 = *plVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar9 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar9 + -1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  ppuVar14 = apuStack_158;
  FUN_003d3950();
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if ((int)puVar11 != 0) {
      func_0x0040cf10();
      pplStack_a8 = &plStack_78;
      FUN_0034a1ec(&pplStack_a8);
      FUN_003d3950(apuStack_158);
    }
    __Unwind_Resume();
    pcStack_1e8 = FUN_00361c8c;
    lVar9 = (long)ppuVar14[1] - (long)*ppuVar14 >> 3;
    uVar2 = lVar9 * -0x30c30c30c30c30c3 + 1;
    puStack_1f0 = &stack0xfffffffffffffff0;
    if (0x186186186186186 < uVar2) {
      FUN_0035baac();
      FUN_0035d2ac(&ppuStack_248);
      __Unwind_Resume(ppuVar14);
      pcStack_258 = FUN_00361dc0;
      uStack_280 = 0;
      uStack_278 = 0;
      puStack_288 = &uStack_280;
      pplStack_270 = (long **)ppplVar15;
      ppuStack_268 = ppuVar14;
      ppuStack_260 = &puStack_1f0;
      FUN_003d4e10(puVar11,param_3,0,&puStack_288);
      ppuVar14 = &puStack_288;
      FUN_0034a294(ppuVar14,uStack_280);
      return ppuVar14;
    }
    ppuVar3 = ppuVar14 + 2;
    lVar12 = (long)*ppuVar3 - (long)*ppuVar14 >> 3;
    uVar13 = lVar12 * -0x6186186186186186;
    if (uVar13 < uVar2 || uVar13 - uVar2 == 0) {
      uVar13 = uVar2;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar12 * -0x30c30c30c30c30c3)) {
      uVar13 = 0x186186186186186;
    }
    ppuStack_228 = ppuVar3;
    if (uVar13 == 0) {
      ppuVar10 = (undefined8 **)0x0;
    }
    else {
      ppuVar10 = ppuVar3;
      FUN_0035bac0();
    }
    ppuStack_240 = ppuVar10 + lVar9;
    ppuStack_230 = ppuVar10 + uVar13 * 0x15;
    ppuStack_248 = ppuVar10;
    ppuStack_238 = ppuStack_240;
    FUN_00361dc0(ppuVar3,ppuStack_240,puVar11,param_3);
    ppuStack_238 = ppuStack_238 + 0x15;
    FUN_0035d228(ppuVar14,&ppuStack_248);
    ppuVar14 = (undefined8 **)ppuVar14[1];
    FUN_0035d2ac(&ppuStack_248);
    return ppuVar14;
  }
  return ppuVar14;
}



/* Entry: 00361c8c; end: 00361dbf;  */

undefined8 ** FUN_00361c8c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 **ppuVar7;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  uVar1 = lVar5 * -0x30c30c30c30c30c3 + 1;
  if (uVar1 < 0x186186186186187) {
    plVar2 = param_1 + 2;
    lVar4 = *plVar2 - *param_1 >> 3;
    uVar6 = lVar4 * -0x6186186186186186;
    if (uVar6 < uVar1 || uVar6 - uVar1 == 0) {
      uVar6 = uVar1;
    }
    if (0xc30c30c30c30c2 < (ulong)(lVar4 * -0x30c30c30c30c30c3)) {
      uVar6 = 0x186186186186186;
    }
    plStack_48 = plVar2;
    if (uVar6 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar2;
      FUN_0035bac0();
    }
    plStack_60 = plVar3 + lVar5;
    plStack_50 = plVar3 + uVar6 * 0x15;
    plStack_68 = plVar3;
    plStack_58 = plStack_60;
    FUN_00361dc0(plVar2,plStack_60,param_2,param_3);
    plStack_58 = plStack_58 + 0x15;
    FUN_0035d228(param_1,&plStack_68);
    ppuVar7 = (undefined8 **)param_1[1];
    FUN_0035d2ac(&plStack_68);
    return ppuVar7;
  }
  FUN_0035baac();
  FUN_0035d2ac(&plStack_68);
  __Unwind_Resume(param_1);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &uStack_a0;
  FUN_003d4e10(param_2,param_3,0,&puStack_a8);
  ppuVar7 = &puStack_a8;
  FUN_0034a294(ppuVar7,uStack_a0);
  return ppuVar7;
}



/* Entry: 00361dc0; end: 00361e27;  */

void FUN_00361dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0;
  puStack_38 = &uStack_30;
  FUN_003d4e10(param_2,param_3,0,&puStack_38);
  FUN_0034a294(&puStack_38,uStack_30);
  return;
}



/* Entry: 00361e28; end: 00361e2f;  */

void FUN_00361e28(void)

{
  return;
}



/* Entry: 00361e30; end: 00361e6f;  */

void FUN_00361e30(long param_1)

{
  segment_command *psVar1;
  undefined8 uVar2;
  
  psVar1 = &segment_command_00000020;
  __Znwm();
  *(undefined ***)psVar1 = &PTR_FUN_009dd328;
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(psVar1->segname + 8) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)psVar1->segname = uVar2;
  psVar1->vmaddr = *(qword *)(param_1 + 0x18);
  return;
}



/* Entry: 00361e70; end: 00361e97;  */

void FUN_00361e70(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_009dd328;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00361e98; end: 00361f23;  */

void FUN_00361e98(long param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  pcVar2 = *(code **)(param_1 + 8);
  plVar1 = (long *)(*(long *)(param_1 + 0x18) + ((long)*(ulong *)(param_1 + 0x10) >> 1));
  if ((*(ulong *)(param_1 + 0x10) & 1) != 0) {
    pcVar2 = *(code **)(*plVar1 + ((ulong)pcVar2 & 0xffffffff));
  }
  lStack_40 = *param_2;
  if (lStack_40 == 0) {
    lStack_30 = param_2[2];
    lStack_38 = param_2[1];
    lStack_28 = param_2[3];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0x36;
  }
  (*pcVar2)(plVar1,&lStack_40);
  FUN_00361f6c(&lStack_40);
  return;
}



/* Entry: 00361f24; end: 00361f5f;  */

long FUN_00361f24(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dd398);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00361f60; end: 00361f6b;  */

undefined ** FUN_00361f60(void)

{
  return &PTR_DAT_009dd398;
}



/* Entry: 00361f6c; end: 00361fb3;  */

ulong * FUN_00361f6c(ulong *param_1)

{
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      param_1[2] = param_1[1];
      __ZdlPv();
    }
  }
  else if ((*param_1 & 1) != 0) {
    FUN_0055293c();
  }
  return param_1;
}



/* Entry: 00361fb4; end: 00361fbf;  */

void FUN_00361fb4(void)

{
  return;
}



/* Entry: 00361fc0; end: 00362063;  */

undefined8 * FUN_00361fc0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puStack_28;
  
  plVar1 = (long *)param_1[0x16];
  param_1[0x16] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_0033d36c(param_1 + 0x14);
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  puStack_28 = param_1 + 0xc;
  FUN_0035af5c(&puStack_28);
  FUN_0035ad28(param_1 + 9,param_1[10]);
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    __ZdlPv(param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 00362064; end: 00362277;  */

long * FUN_00362064(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *extraout_x8;
  long *plStack_58;
  char *pcStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  plVar4 = param_1;
  func_0x003d38f8();
  *plVar4 = (long)&PTR_FUN_009dd3f8;
  plVar4[2] = 0;
  lVar7 = *(long *)(param_2 + 0xa0);
  plVar4[4] = *(long *)(param_2 + 0xa8);
  plVar4[3] = lVar7;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  lVar7 = *(long *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  plVar4[5] = lVar7;
  FUN_00362278(plVar4 + 6,*(undefined8 *)(param_2 + 0x90));
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_0034a0d4(param_1 + 8);
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  FUN_0034a0d4(param_1 + 0x13);
  *(int *)(param_1 + 0x1d) = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  pcStack_50 = "grpc.fake_resolver.response_generator";
  lVar7 = *(long *)(param_2 + 0x90);
  FUN_003a26f0(lVar7,&pcStack_50,1);
  param_1[2] = lVar7;
  plVar5 = (long *)0x0;
  if (param_1[6] != 0) {
    plVar5 = param_1 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plStack_58 = param_1;
    FUN_003622d8(param_1[6],&plStack_58);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_00999f88 != lStack_48) {
    ___stack_chk_fail();
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plStack_58 + 0x10))();
      }
    }
    FUN_003d3950(param_1 + 0x13);
    FUN_003d3950(param_1 + 8);
    plVar6 = (long *)plVar4[6];
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
        (**(code **)(*plVar6 + 8))();
      }
    }
    plVar6 = (long *)param_1[5];
    param_1[5] = 0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    FUN_0033d36c(plVar4 + 3);
    __Unwind_Resume();
    FUN_003a28d0();
    if ((plVar5 == (long *)0x0) || ((int)*plVar5 != 2)) {
      lVar7 = 0;
    }
    else {
      lVar7 = plVar5[2];
      if (lVar7 != 0) {
        plVar4 = (long *)(lVar7 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
    }
    *extraout_x8 = lVar7;
    return plVar5;
  }
  return param_1;
}



/* Entry: 00362278; end: 003622d7;  */

void FUN_00362278(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  FUN_003a28d0(param_2,"grpc.fake_resolver.response_generator");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 003622d8; end: 0036249b;  */

undefined8 * FUN_003622d8(long param_1,undefined ***param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  dword *pdVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 uStack_a9;
  undefined1 auStack_a8 [80];
  undefined **ppuStack_58;
  dword *pdStack_50;
  undefined ***pppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x00339d8c(puVar1);
  ppuVar10 = *param_2;
  plVar5 = *(long **)(param_1 + 0x50);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined ***)(param_1 + 0x50) = ppuVar10;
  *param_2 = (undefined **)0x0;
  lVar9 = *(long *)(param_1 + 0x50);
  if ((lVar9 != 0) && (*(char *)(param_1 + 0xa8) != '\0')) {
    pdVar6 = &segment_command_00000020.nsects;
    __Znwm();
    plVar5 = (long *)(lVar9 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    func_0x003d3ad8(auStack_a8,param_1 + 0x58);
    *(undefined8 *)pdVar6 = uVar11;
    func_0x003d3ad8(pdVar6 + 2,auStack_a8);
    *(undefined2 *)(pdVar6 + 0x16) = 0x100;
    FUN_003d3950(auStack_a8);
    ppuStack_58 = &PTR_FUN_009dd508;
    param_2 = &ppuStack_58;
    pdStack_50 = pdVar6;
    pppuStack_40 = param_2;
    FUN_003d0dec(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x18),&ppuStack_58,&uStack_a9);
    if (pppuStack_40 == param_2) {
      lVar9 = 4;
      pppuVar7 = &ppuStack_58;
LAB_003623e4:
      (*(code *)(*pppuVar7)[lVar9])();
    }
    else if (pppuStack_40 != (undefined ***)0x0) {
      lVar9 = 5;
      pppuVar7 = pppuStack_40;
      goto LAB_003623e4;
    }
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  puVar8 = puVar1;
  func_0x00339da8();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return puVar8;
  }
  ___stack_chk_fail();
  if (pppuStack_40 == param_2) {
    lVar9 = 4;
    pppuVar7 = &ppuStack_58;
  }
  else {
    if (pppuStack_40 == (undefined ***)0x0) goto LAB_00362474;
    lVar9 = 5;
    pppuVar7 = pppuStack_40;
  }
  (*(code *)(*pppuVar7)[lVar9])();
LAB_00362474:
  func_0x00339da8(puVar1);
  __Unwind_Resume(puVar8);
  func_0x0040cf10();
  *puVar8 = &PTR_FUN_009dd3f8;
  FUN_003a2a64(puVar8[2]);
  FUN_003d3950(puVar8 + 0x13);
  FUN_003d3950(puVar8 + 8);
  plVar5 = (long *)puVar8[6];
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
    do {
      lVar9 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  plVar5 = (long *)puVar8[5];
  puVar8[5] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  FUN_0033d36c(puVar8 + 3);
  return puVar8;
}



/* Entry: 0036249c; end: 00362533;  */

undefined8 * FUN_0036249c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dd3f8;
  FUN_003a2a64(param_1[2]);
  FUN_003d3950(param_1 + 0x13);
  FUN_003d3950(param_1 + 8);
  plVar4 = (long *)param_1[6];
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
  plVar4 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_0033d36c(param_1 + 3);
  return param_1;
}



/* Entry: 00362534; end: 00362537;  */

undefined8 * FUN_00362534(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_009dd3f8;
  FUN_003a2a64(param_1[2]);
  FUN_003d3950(param_1 + 0x13);
  FUN_003d3950(param_1 + 8);
  plVar4 = (long *)param_1[6];
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
  plVar4 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  FUN_0033d36c(param_1 + 3);
  return param_1;
}



/* Entry: 00362538; end: 0036254b;  */

void FUN_00362538(void)

{
  FUN_0036249c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0036254c; end: 00362557;  */

void FUN_0036254c(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *(undefined1 *)(param_1 + 0xe8) = 1;
  if ((*(char *)(param_1 + 0xe8) != '\0') && (*(char *)(param_1 + 0xe9) == '\0')) {
    if (*(char *)(param_1 + 0xea) == '\0') {
      if (*(char *)(param_1 + 0x38) != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x88);
        FUN_003a2790(uVar1,*(undefined8 *)(param_1 + 0x10));
        FUN_003a2a64(*(undefined8 *)(param_1 + 0x88));
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = *(long **)(param_1 + 0x28);
        func_0x003d3ad8(auStack_128,param_1 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2,auStack_128);
        FUN_003d3950(auStack_128);
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      FUN_0034a0d4(auStack_80);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      func_0x00553624(&uStack_88,"Resolver transient failure",0x1a);
      FUN_0034a3d4(auStack_80,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_00362ab4(&uStack_60,auStack_80);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      FUN_003a277c();
      plVar2 = *(long **)(param_1 + 0x28);
      uStack_38 = uVar1;
      func_0x003d3ad8(auStack_d8,auStack_80);
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d8);
      FUN_003d3950(auStack_d8);
      *(undefined1 *)(param_1 + 0xea) = 0;
      FUN_003d3950(auStack_80);
    }
  }
  return;
}



/* Entry: 00362558; end: 003626d7;  */

void FUN_00362558(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined1 auStack_128 [80];
  undefined1 auStack_d8 [80];
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((*(char *)(param_1 + 0xe8) != '\0') && (*(char *)(param_1 + 0xe9) == '\0')) {
    if (*(char *)(param_1 + 0xea) == '\0') {
      if (*(char *)(param_1 + 0x38) != '\0') {
        uVar1 = *(undefined8 *)(param_1 + 0x88);
        FUN_003a2790(uVar1,*(undefined8 *)(param_1 + 0x10));
        FUN_003a2a64(*(undefined8 *)(param_1 + 0x88));
        *(undefined8 *)(param_1 + 0x88) = uVar1;
        plVar2 = *(long **)(param_1 + 0x28);
        func_0x003d3ad8(auStack_128,param_1 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2,auStack_128);
        FUN_003d3950(auStack_128);
        *(undefined1 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      FUN_0034a0d4(auStack_80);
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      func_0x00553624(&uStack_88,"Resolver transient failure",0x1a);
      FUN_0034a3d4(auStack_80,&uStack_88);
      if ((uStack_88 & 1) != 0) {
        FUN_0055293c();
      }
      FUN_00362ab4(&uStack_60,auStack_80);
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      FUN_003a277c();
      plVar2 = *(long **)(param_1 + 0x28);
      uStack_38 = uVar1;
      func_0x003d3ad8(auStack_d8,auStack_80);
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_d8);
      FUN_003d3950(auStack_d8);
      *(undefined1 *)(param_1 + 0xea) = 0;
      FUN_003d3950(auStack_80);
    }
  }
  return;
}



/* Entry: 003626d8; end: 003627f7;  */

void FUN_003626d8(undefined ***param_1)

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
  long *plStack_78;
  undefined1 uStack_49;
  undefined **ppuStack_48;
  undefined ***pppuStack_40;
  undefined ***pppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_00999f88;
  if ((*(char *)(param_1 + 0x12) != '\0') ||
     (pppuVar5 = param_1, *(char *)((long)param_1 + 0xea) != '\0')) {
    pppuVar5 = param_1 + 8;
    FUN_003d3adc(pppuVar5,param_1 + 0x13);
    *(undefined1 *)(param_1 + 7) = 1;
    if (*(char *)((long)param_1 + 0xeb) == '\0') {
      *(undefined1 *)((long)param_1 + 0xeb) = 1;
      pppuVar5 = param_1 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar5,0x10);
        if (bVar4) {
          *pppuVar5 = (undefined **)((long)*pppuVar5 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppuStack_48 = &PTR_DAT_009dd488;
      pppuStack_40 = param_1;
      pppuStack_30 = &ppuStack_48;
      FUN_003d0dec(param_1[3],&ppuStack_48,&uStack_49);
      if (pppuStack_30 == &ppuStack_48) {
        lVar8 = 4;
        pppuVar5 = &ppuStack_48;
      }
      else {
        pppuVar5 = pppuStack_30;
        if (pppuStack_30 == (undefined ***)0x0) goto LAB_00362790;
        lVar8 = 5;
      }
      (*(code *)(*pppuVar5)[lVar8])();
    }
  }
LAB_00362790:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if (pppuStack_30 == &ppuStack_48) {
    lVar8 = 4;
    pppuVar6 = &ppuStack_48;
  }
  else {
    if (pppuStack_30 == (undefined ***)0x0) goto LAB_003627f0;
    lVar8 = 5;
    pppuVar6 = pppuStack_30;
  }
  (*(code *)(*pppuVar6)[lVar8])();
LAB_003627f0:
  __Unwind_Resume();
  *(undefined1 *)((long)pppuVar5 + 0xe9) = 1;
  if (pppuVar5[6] != (undefined **)0x0) {
    plStack_78 = (long *)0x0;
    FUN_003622d8(pppuVar5[6],&plStack_78);
    if (plStack_78 != (long *)0x0) {
      plVar1 = plStack_78 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plStack_78 + 0x10))();
      }
    }
    ppuVar7 = pppuVar5[6];
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
    pppuVar5[6] = (undefined **)0x0;
  }
  return;
}



/* Entry: 003627f8; end: 003628b3;  */

void FUN_003627f8(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_28;
  
  *(undefined1 *)(param_1 + 0xe9) = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    plStack_28 = (long *)0x0;
    FUN_003622d8(*(long *)(param_1 + 0x30),&plStack_28);
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 + -1 == 0) {
        (**(code **)(*plStack_28 + 0x10))();
      }
    }
    plVar4 = *(long **)(param_1 + 0x30);
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
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 003628b4; end: 00362933;  */

void FUN_003628b4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (*(char *)(*param_1 + 0xe9) == '\0') {
    FUN_003d3b3c(*param_1 + 0x40,param_1 + 1);
    *(undefined1 *)(*param_1 + 0x38) = 1;
    FUN_00362558();
  }
  FUN_003d3950(param_1 + 1);
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
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_1);
  return;
}



/* Entry: 00362934; end: 003629b7;  */

void FUN_00362934(long param_1)

{
  dword *pdVar1;
  dword *pdStack_28;
  
  pdVar1 = &MACH_HEADER.cpusubtype;
  __Znwm();
  *(undefined ***)pdVar1 = &PTR_DAT_009dd588;
  pdStack_28 = pdVar1;
  FUN_003d3fe8(param_1 + 0xf0,&pdStack_28);
  pdVar1 = pdStack_28;
  pdStack_28 = (dword *)0x0;
  if (pdVar1 != (dword *)0x0) {
    (**(code **)(*(long *)pdVar1 + 8))();
  }
  return;
}



/* Entry: 003629b8; end: 003629c3;  */

void FUN_003629b8(void)

{
  return;
}



/* Entry: 003629c4; end: 003629f7;  */

void FUN_003629c4(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_DAT_009dd488;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 003629f8; end: 00362a13;  */

void FUN_003629f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_DAT_009dd488;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00362a14; end: 00362aa7;  */

void FUN_00362a14(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  *(undefined1 *)((long)plVar5 + 0xeb) = 0;
  FUN_00362558(plVar5);
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
  if (lVar4 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00362a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5);
  return;
}



/* Entry: 00362aa8; end: 00362ab3;  */

undefined ** FUN_00362aa8(void)

{
  return &PTR_DAT_009dd4e8;
}



/* Entry: 00362ab4; end: 00362b97;  */

void FUN_00362ab4(ulong *param_1,ulong *param_2)

{
  char *pcVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  char *pcVar8;
  int *piVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulong *puStack_30;
  char *pcStack_28;
  
  if ((*param_1 == 0) && (plVar6 = (long *)param_1[1], plVar6 != (long *)0x0)) {
    plVar2 = plVar6 + 1;
    do {
      lVar13 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar13 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar13 + -1 == 0) {
      puStack_30 = param_2;
      (**(code **)(*plVar6 + 8))();
      param_2 = puStack_30;
    }
  }
  uVar7 = *param_2;
  if ((uVar7 & 1) != 0) {
    piVar9 = (int *)(uVar7 - 1);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
      if (bVar5) {
        *piVar9 = *piVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar10 = *param_1;
  if (uVar7 == uVar10) {
    if ((uVar7 & 1) != 0) {
      FUN_0055293c();
    }
LAB_00362b3c:
    uVar7 = *param_1;
  }
  else {
    *param_1 = uVar7;
    pcStack_28 = "";
    if ((uVar10 & 1) != 0) {
      FUN_0055293c(uVar10);
      goto LAB_00362b3c;
    }
  }
  if (uVar7 != 0) {
    return;
  }
  puStack_30 = (ulong *)0x8e44ab;
  pcStack_28 = "An OK status is not a valid constructor argument to StatusOr<T>";
  uStack_38 = 0x4a;
  uStack_34 = 2;
  FUN_0055159c(&PTR_FUN_00b1e660,&uStack_34,&puStack_30,&uStack_38,&pcStack_28);
  pcVar1 = pcStack_28;
  pcVar8 = pcStack_28;
  _strlen(pcStack_28);
  FUN_005529d0(&puStack_30,0xd,pcVar1,pcVar8);
  puVar11 = (ulong *)*param_1;
  puVar12 = puVar11;
  if (puStack_30 != puVar11) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (ulong *)0x36;
    if (((ulong)puVar11 & 1) == 0) {
      return;
    }
    piVar9 = (int *)((long)puVar11 - 1);
    if (*piVar9 != 1) {
      do {
        iVar3 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      puVar12 = puStack_30;
      if (iVar3 + -1 != 0) goto LAB_00551520;
    }
    plVar6 = *(long **)((long)puVar11 + 0x1f);
    pcVar1 = (char *)((long)puVar11 + 0x1f);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)((long)puVar11 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar11 + 7));
    }
    __ZdlPv(piVar9);
    puVar12 = puStack_30;
  }
LAB_00551520:
  if (((ulong)puVar12 & 1) != 0) {
    piVar9 = (int *)((long)puVar12 - 1);
    if (*piVar9 != 1) {
      do {
        iVar3 = *piVar9;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar5) {
          *piVar9 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 != 0) {
        return;
      }
    }
    plVar6 = *(long **)((long)puVar12 + 0x1f);
    pcVar1 = (char *)((long)puVar12 + 0x1f);
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    if (plVar6 != (long *)0x0) {
      if (*plVar6 != 0) {
        FUN_00553a40(plVar6);
      }
      __ZdlPv(plVar6);
    }
    if (*(char *)((long)puVar12 + 0x1e) < '\0') {
      __ZdlPv(*(undefined8 *)((long)puVar12 + 7));
    }
    __ZdlPv(piVar9);
  }
  return;
}



/* Entry: 00362b98; end: 00362b9f;  */

void FUN_00362b98(void)

{
  return;
}



/* Entry: 00362ba0; end: 00362bd3;  */

void FUN_00362ba0(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009dd508;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 00362bd4; end: 00362bf7;  */

void FUN_00362bd4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009dd508;
  param_2[1] = uVar1;
  return;
}



/* Entry: 00362bf8; end: 00362c33;  */

long FUN_00362bf8(long param_1,undefined8 param_2)

{
  FUN_0033ff44(param_2,&PTR_DAT_009dd568);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00362c34; end: 00362c5f;  */

undefined ** FUN_00362c34(void)

{
  return &PTR_DAT_009dd568;
}



/* Entry: 00362c60; end: 00362cf7;  */

void FUN_00362c60(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [144];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0xf0;
  __Znwm();
  FUN_0035ae18(auStack_e8,param_3);
  uStack_50 = *(undefined8 *)(param_3 + 0x98);
  uStack_58 = *(undefined8 *)(param_3 + 0x90);
  uStack_40 = *(undefined8 *)(param_3 + 0xa8);
  uStack_48 = *(undefined8 *)(param_3 + 0xa0);
  *(undefined8 *)(param_3 + 0xa0) = 0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  uStack_38 = *(undefined8 *)(param_3 + 0xb0);
  *(undefined8 *)(param_3 + 0xb0) = 0;
  FUN_00362064(uVar1,auStack_e8);
  FUN_00361fc0(auStack_e8);
  *param_1 = uVar1;
  return;
}



/* Entry: 00362cf8; end: 00362d03;  */

void FUN_00362cf8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00362d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 00362d04; end: 00362f43;  */

undefined8 *
FUN_00362d04(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  char *pcVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  puVar4 = param_1;
  func_0x003d38f8();
  *puVar4 = &PTR_FUN_009dd5e0;
  if (*(char *)(param_2 + 0x2f) < '\0') {
    FUN_002971d4(puVar4 + 2,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    puVar4[4] = *(undefined8 *)(param_2 + 0x28);
    puVar4[3] = uVar8;
    puVar4[2] = uVar6;
  }
  if ((char)*(byte *)(param_2 + 0x47) < '\0') {
    pcVar5 = *(char **)(param_2 + 0x30);
    uVar7 = *(ulong *)(param_2 + 0x38);
  }
  else {
    pcVar5 = (char *)(param_2 + 0x30);
    uVar7 = (ulong)*(byte *)(param_2 + 0x47);
  }
  puVar4 = param_1 + 5;
  if (uVar7 == 0) {
    uVar7 = 0;
    *(undefined1 *)((long)param_1 + 0x3f) = 0;
  }
  else {
    pcVar1 = pcVar5;
    if (*pcVar5 == '/') {
      pcVar1 = pcVar5 + 1;
    }
    uVar7 = uVar7 - (*pcVar5 == '/');
    if (0x7ffffffffffffff7 < uVar7) {
      func_0x0033b318(puVar4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x362ee0);
      (*pcVar3)();
    }
    if (uVar7 < 0x17) {
      *(char *)((long)param_1 + 0x3f) = (char)uVar7;
      if (uVar7 == 0) goto LAB_00362e54;
    }
    else {
      uVar2 = (uVar7 & 0xfffffffffffffff8) + 8;
      if ((uVar7 | 7) != 0x17) {
        uVar2 = uVar7 | 7;
      }
      puVar4 = (undefined8 *)(uVar2 + 1);
      __Znwm();
      param_1[6] = uVar7;
      param_1[7] = uVar2 + 1 | 0x8000000000000000;
      param_1[5] = puVar4;
    }
    _memmove(puVar4,pcVar1,uVar7);
  }
LAB_00362e54:
  *(undefined1 *)((long)puVar4 + uVar7) = 0;
  FUN_003a277c();
  param_1[8] = param_3;
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  param_1[10] = *(undefined8 *)(param_2 + 0xa8);
  param_1[9] = uVar6;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  *(undefined8 *)(param_2 + 0xa8) = 0;
  uVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_2 + 0xb0) = 0;
  param_1[0xf] = 0;
  param_1[0xb] = uVar6;
  param_1[0xc] = param_6;
  param_1[0xd] = *(undefined8 *)(param_2 + 0x98);
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x1c] = param_4;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  func_0x003a15f0(param_1 + 0x1f,param_5);
  return param_1;
}



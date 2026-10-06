/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ad5ce50; end: 10ad5ce63;  */

undefined1  [16] FUN_10ad5ce50(void)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  int iStack_50;
  undefined4 uStack_4c;
  ulong uStack_48;
  
  puVar3 = &DAT_10f62a4d8;
  FUN_109ffde64();
  uStack_4c = 0;
  (**(code **)(puVar3 + 0x48))(1,&uStack_4c);
  (**(code **)(puVar3 + 0x70))(uStack_4c,0x8e28);
  uVar5 = 0;
  iStack_50 = 0;
  do {
    (**(code **)(puVar3 + 0x88))(uStack_4c,0x8867,&iStack_50);
    uStack_48 = 100000;
    puVar4 = &uStack_48;
    __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(puVar4)
    ;
    if (iStack_50 != 0) break;
    bVar2 = uVar5 < 0xff;
    uVar5 = uVar5 + 1;
  } while (bVar2);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_48 = uStack_48 & 0xffffffff00000000;
  _glGetIntegerv(0x8fbb,&uStack_48);
  iVar1 = (int)uStack_48;
  uStack_48 = 0;
  (**(code **)(puVar3 + 0x98))(uStack_4c,0x8866,&uStack_48);
  (**(code **)(puVar3 + 0x50))(1,&uStack_4c);
  if (iVar1 != 0) {
    puVar4 = (ulong *)0xffffffffffffffff;
    uStack_48 = 0xffffffffffffffff;
  }
  auVar6._8_8_ = uStack_48;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Entry: 10ad5ce64; end: 10ad5d0eb;  */

undefined1  [16] FUN_10ad5ce64(long param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  int iStack_40;
  undefined4 uStack_3c;
  ulong uStack_38;
  
  uStack_3c = 0;
  (**(code **)(param_1 + 0x48))(1,&uStack_3c);
  (**(code **)(param_1 + 0x70))(uStack_3c,0x8e28);
  uVar4 = 0;
  iStack_40 = 0;
  do {
    (**(code **)(param_1 + 0x88))(uStack_3c,0x8867,&iStack_40);
    uStack_38 = 100000;
    puVar3 = &uStack_38;
    __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE(puVar3)
    ;
    if (iStack_40 != 0) break;
    bVar2 = uVar4 < 0xff;
    uVar4 = uVar4 + 1;
  } while (bVar2);
  __ZNSt3__16chrono12steady_clock3nowEv();
  uStack_38 = uStack_38 & 0xffffffff00000000;
  _glGetIntegerv(0x8fbb,&uStack_38);
  iVar1 = (int)uStack_38;
  uStack_38 = 0;
  (**(code **)(param_1 + 0x98))(uStack_3c,0x8866,&uStack_38);
  (**(code **)(param_1 + 0x50))(1,&uStack_3c);
  if (iVar1 != 0) {
    puVar3 = (ulong *)0xffffffffffffffff;
    uStack_38 = 0xffffffffffffffff;
  }
  auVar5._8_8_ = uStack_38;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Entry: 10ad5d0ec; end: 10ad5d13b;  */

void FUN_10ad5d0ec(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad5d0ec(param_1,*param_2);
    FUN_10ad5d0ec(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad5d13c; end: 10ad5d163;  */

void FUN_10ad5d13c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    __ZNSt3__115__thread_structD1Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10ad5d164; end: 10ad5d2d3;  */

undefined8 * FUN_10ad5d164(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_1 + 1;
  func_0x00010ad5d1d8(param_1,param_2,*puVar4,puVar4);
  if (puVar4 != param_1) {
    uVar3 = *param_2;
    uVar1 = param_1[5];
    puVar2 = (undefined8 *)param_1[4];
    if (-1 < (char)*(byte *)((long)param_1 + 0x37)) {
      uVar1 = (ulong)*(byte *)((long)param_1 + 0x37);
      puVar2 = param_1 + 4;
    }
    FUN_10a003d5c(uVar3,param_2[1],puVar2,uVar1);
    if (((uint)uVar3 >> 7 & 1) == 0) {
      return param_1;
    }
  }
  return puVar4;
}



/* Entry: 10ad5d2d4; end: 10ad5d327;  */

void FUN_10ad5d2d4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10ad5d328; end: 10ad5d35b;  */

void FUN_10ad5d328(long param_1)

{
  FUN_10ad5d35c();
  FUN_10ad5dc0c(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1);
  return;
}



/* Entry: 10ad5d35c; end: 10ad5d403;  */

void FUN_10ad5d35c(long param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  __ZNSt3__15mutex4lockEv();
  plVar3 = *(long **)(param_1 + 0x40);
  while (plVar3 != (long *)(param_1 + 0x48)) {
    FUN_10ad5db44(plVar3[6]);
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
  FUN_10ad5dc0c((long *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(long **)(param_1 + 0x40) = (long *)(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1);
  return;
}



/* Entry: 10ad5d404; end: 10ad5dad3;  */

/* WARNING: Removing unreachable block (ram,0x00010ad5d5d4) */
/* WARNING: Removing unreachable block (ram,0x00010ad5d7d8) */
/* WARNING: Removing unreachable block (ram,0x00010ad5d7ec) */
/* WARNING: Removing unreachable block (ram,0x00010ad5d7f4) */
/* WARNING: Removing unreachable block (ram,0x00010ad5d7fc) */

void FUN_10ad5d404(long param_1,long param_2,long param_3,undefined8 param_4,ulong ***param_5,
                  long param_6,long param_7)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  ulong ****ppppuVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 *****pppppuVar11;
  undefined8 *****pppppuVar12;
  ulong *****pppppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  long *plVar16;
  ulong *****pppppuVar17;
  undefined **ppuVar18;
  int *piVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong ****ppppuVar23;
  ulong ***pppuVar24;
  undefined8 *puVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 ****ppppuStack_130;
  ulong ***pppuStack_128;
  ulong ***pppuStack_120;
  long lStack_110;
  long lStack_108;
  ulong ****ppppuStack_100;
  undefined8 ****ppppuStack_f8;
  ulong ****ppppuStack_f0;
  undefined8 ****ppppuStack_e8;
  ulong **ppuStack_e0;
  byte bStack_d1;
  ulong ****ppppuStack_d0;
  ulong ***pppuStack_c8;
  undefined8 ***pppuStack_c0;
  undefined4 uStack_a8;
  undefined8 ****ppppuStack_98;
  ulong **ppuStack_90;
  undefined8 uStack_88;
  undefined8 ***pppuStack_80;
  ulong **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_110 = param_2;
  lStack_108 = param_3;
  __ZNSt3__15mutex4lockEv();
  puVar27 = (undefined8 *)(param_1 + 0x48);
  puVar20 = (undefined8 *)*puVar27;
  puVar25 = puVar27;
  if (puVar20 == (undefined8 *)0x0) {
LAB_10ad5d4d4:
    if (param_5 < (ulong ***)0x7ffffffffffffff8) {
      if (param_5 < (ulong ***)0x17) {
        uStack_88 = (ulong ***)CONCAT17((char)param_5,(undefined7)uStack_88);
        pppppuVar11 = &ppppuStack_98;
        if (param_5 != (ulong ***)0x0) goto LAB_10ad5d524;
      }
      else {
        pppppuVar12 = (undefined8 *****)0x19;
        if (((ulong)param_5 | 7) != 0x17) {
          pppppuVar12 = (undefined8 *****)(((ulong)param_5 | 7) + 1);
        }
        pppppuVar11 = pppppuVar12;
        __Znwm();
        uStack_88 = (ulong ***)((ulong)pppppuVar12 | 0x8000000000000000);
        ppppuStack_98 = pppppuVar11;
        ppuStack_90 = (ulong **)param_5;
LAB_10ad5d524:
        _memmove(pppppuVar11,param_4,param_5);
      }
      *(undefined1 *)((long)pppppuVar11 + (long)param_5) = 0;
      pppppuVar12 = &ppppuStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar12,":",1);
      pppuStack_c8 = (ulong ***)pppppuVar12[1];
      ppppuStack_d0 = *pppppuVar12;
      pppuStack_c0 = pppppuVar12[2];
      pppppuVar12[1] = (undefined8 ****)0x0;
      pppppuVar12[2] = (undefined8 ****)0x0;
      *pppppuVar12 = (undefined8 ****)0x0;
      FUN_10a0ffca4(&ppppuStack_e8,&lStack_110);
      pppuVar24 = (ulong ***)ppuStack_e0;
      pppppuVar12 = (undefined8 *****)ppppuStack_e8;
      if (-1 < (char)bStack_d1) {
        pppuVar24 = (ulong ***)(ulong)bStack_d1;
        pppppuVar12 = &ppppuStack_e8;
      }
      pppppuVar13 = &ppppuStack_d0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppuVar13,pppppuVar12,pppuVar24);
      pppuStack_128 = (ulong ***)pppppuVar13[1];
      ppppuStack_130 = *pppppuVar13;
      pppuStack_120 = (ulong ***)pppppuVar13[2];
      pppppuVar13[1] = (ulong ****)0x0;
      pppppuVar13[2] = (ulong ****)0x0;
      *pppppuVar13 = (ulong ****)0x0;
      if ((char)bStack_d1 < '\0') {
        __ZdlPv(ppppuStack_e8);
      }
      if ((long)pppuStack_c0 < 0) {
        __ZdlPv(ppppuStack_d0);
      }
      puVar9 = PTR___tlv_bootstrap_11340d750;
      ppuVar18 = &PTR___tlv_bootstrap_11340d750;
      ppuVar14 = ppuVar18;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar15 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar14 & 1) == 0) {
        ppuVar14 = ppuVar15;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar14,0x100000000);
        (*(code *)puVar9)();
        *(undefined1 *)ppuVar18 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      pppuVar24 = pppuStack_120;
      ppppuVar23 = (ulong ****)pppuStack_128;
      pppppuVar12 = (undefined8 *****)ppppuStack_130;
      puVar25 = (undefined8 *)ppuVar15[2];
      ppppuVar8 = (ulong ****)((ulong)pppuStack_120 >> 0x38);
      plVar16 = (long *)0x28;
      __Znwm();
      if (-1 < (long)pppuVar24) {
        ppppuVar23 = ppppuVar8;
        pppppuVar12 = &ppppuStack_130;
      }
      *plVar16 = (long)pppppuVar12;
      plVar16[1] = (long)ppppuVar23;
      plVar16[2] = param_6;
      plVar16[3] = param_7;
      *(undefined4 *)(plVar16 + 4) = 2;
      if ((puVar25 == (undefined8 *)0x0) ||
         (((*(byte *)(puVar25[1] + 0x43) & 1) == 0 && (*(char *)(puVar25[1] + 0x42) != '\x01')))) {
LAB_10ad5d878:
        uVar22 = 0;
      }
      else {
        piVar19 = (int *)puVar25[3];
        do {
          iVar5 = *piVar19;
          cVar7 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar1) {
            *piVar19 = iVar5 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        uVar6 = *(undefined4 *)((long)puVar25 + 0x34);
        ppppuVar23 = (ulong ****)puVar25[2];
        pppppuVar13 = &ppppuStack_d0;
        pppuStack_c8 = (ulong ***)ppppuVar23;
        FUN_10a3f0238(pppppuVar13,1);
        *pppppuVar13 = (ulong ****)0x0;
        pppppuVar13[1] = (ulong ****)0x0;
        pppppuVar13[2] = (ulong ****)0x0;
        pppppuVar13[4] = ppppuVar23;
        FUN_10a3f013c();
        ppuStack_e0 = (ulong **)puVar25[2];
        pppuVar24 = (ulong ***)plVar16[1];
        ppuStack_78 = ppuStack_e0;
        if ((ulong ***)0x7ffffffffffffff7 < pppuVar24) {
          FUN_10a3a815c();
          goto LAB_10ad5d9e4;
        }
        lVar26 = *plVar16;
        if (pppuVar24 < (ulong ***)0x17) {
          uStack_88 = (ulong ***)CONCAT17((char)pppuVar24,(undefined7)uStack_88);
          pppppuVar12 = &ppppuStack_98;
          if (pppuVar24 != (ulong ***)0x0) goto LAB_10ad5d720;
        }
        else {
          uVar21 = 0x19;
          if (((ulong)pppuVar24 | 7) != 0x17) {
            uVar21 = ((ulong)pppuVar24 | 7) + 1;
          }
          pppppuVar12 = (undefined8 *****)&pppuStack_80;
          FUN_10a3a8170(pppppuVar12,uVar21);
          uStack_88 = (ulong ***)(uVar21 | 0x8000000000000000);
          ppppuStack_98 = pppppuVar12;
          ppuStack_90 = (ulong **)pppuVar24;
LAB_10ad5d720:
          _memmove(pppppuVar12,lVar26,pppuVar24);
        }
        *(undefined1 *)((long)pppppuVar12 + (long)pppuVar24) = 0;
        ppppuStack_d0 = (ulong ****)0x0;
        uStack_a8 = 0;
        ppppuStack_100 = (ulong ****)&ppppuStack_d0;
        ppppuStack_f8 = &ppppuStack_e8;
        if (*(uint *)(plVar16 + 4) == 0xffffffff) {
          FUN_10a0d459c();
          goto LAB_10ad5d9e4;
        }
        ppppuStack_f0 = (ulong ****)&ppppuStack_100;
        (*(code *)(&PTR_DAT_110c70f00)[*(uint *)(plVar16 + 4)])(&ppppuStack_f0,plVar16 + 2);
        ppppuVar23 = pppppuVar13[1];
        if (ppppuVar23 < pppppuVar13[2]) {
          ppppuVar23[2] = uStack_88;
          ppppuVar23[1] = (ulong ***)ppuStack_90;
          *ppppuVar23 = (ulong ***)ppppuStack_98;
          ppppuVar23[4] = (ulong ***)ppuStack_78;
          ppuStack_90 = (ulong **)0x0;
          uStack_88 = (ulong ***)0x0;
          ppppuStack_98 = (undefined8 *****)0x0;
          FUN_10a3f0510(ppppuVar23 + 5,&ppppuStack_d0);
          pppppuVar17 = (ulong *****)(ppppuVar23 + 0xb);
        }
        else {
          pppppuVar17 = pppppuVar13;
          FUN_10a3f0658(pppppuVar13,&ppppuStack_98,&ppppuStack_d0);
        }
        pppppuVar13[1] = (ulong ****)pppppuVar17;
        FUN_10a133060(&ppppuStack_d0);
        puVar20 = puVar25;
        FUN_10a1333cc();
        if (puVar20 == (undefined8 *)0x0) {
          lVar26 = puVar25[2];
          ppppuStack_d0 = (ulong ****)pppppuVar13;
          FUN_10a132f70(&ppppuStack_d0);
          plVar2 = (long *)(lVar26 + 8);
          do {
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar1) {
              *plVar2 = *plVar2 + -0x28;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          __ZdlPv(pppppuVar13);
          goto LAB_10ad5d878;
        }
        uVar22 = CONCAT44(uVar6,iVar5);
        *(undefined1 *)((long)puVar20 + 0x1e) = 1;
        *puVar20 = uVar22;
        puVar20[1] = pppppuVar13;
        puVar20[2] = 0;
        *(undefined4 *)(puVar20 + 3) = 0;
        *(undefined2 *)((long)puVar20 + 0x1c) = 0;
        if ((*(byte *)(puVar25 + 0x38) & 1) == 0) goto LAB_10ad5d9e4;
        puVar25[0x18] = puVar25[0x18] + 1;
      }
      __ZdlPv(plVar16);
      puVar25 = (undefined8 *)*puVar27;
      puVar20 = puVar27;
      if ((undefined8 *)*puVar27 != (undefined8 *)0x0) {
        do {
          while (puVar27 = puVar25, lVar26 = puVar27[4], lStack_110 != lVar26) {
            if (lVar26 <= lStack_110) {
              if (lVar26 < lStack_110) goto LAB_10ad5d8e8;
              goto LAB_10ad5d940;
            }
LAB_10ad5d8cc:
            puVar25 = (undefined8 *)*puVar27;
            puVar20 = puVar27;
            if ((undefined8 *)*puVar27 == (undefined8 *)0x0) goto LAB_10ad5d8f4;
          }
          lVar26 = puVar27[5];
          if (lStack_108 < lVar26) goto LAB_10ad5d8cc;
          if (lVar26 == lStack_108 || lStack_108 <= lVar26) goto LAB_10ad5d940;
LAB_10ad5d8e8:
          puVar25 = (undefined8 *)puVar27[1];
        } while ((undefined8 *)puVar27[1] != (undefined8 *)0x0);
        puVar20 = puVar27 + 1;
      }
LAB_10ad5d8f4:
      puVar25 = (undefined8 *)0x38;
      __Znwm();
      puVar25[5] = lStack_108;
      puVar25[4] = lStack_110;
      puVar25[6] = uVar22;
      *puVar25 = 0;
      puVar25[1] = 0;
      puVar25[2] = puVar27;
      *puVar20 = puVar25;
      if (**(long **)(param_1 + 0x40) != 0) {
        *(long *)(param_1 + 0x40) = **(long **)(param_1 + 0x40);
        puVar25 = (undefined8 *)*puVar20;
      }
      func_0x000107c2b058(*(undefined8 *)(param_1 + 0x48),puVar25);
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
LAB_10ad5d940:
      if ((long)pppuStack_120 < 0) {
        __ZdlPv(ppppuStack_130);
      }
      goto LAB_10ad5d950;
    }
  }
  else {
    do {
      uVar21 = 0xff;
      if (param_2 <= (long)puVar20[4]) {
        uVar21 = 0;
      }
      if (puVar20[4] == param_2) {
        uVar4 = 0xff;
        if (param_3 <= (long)puVar20[5]) {
          uVar4 = 0;
        }
        uVar21 = 0;
        if (puVar20[5] != param_3) {
          uVar21 = uVar4;
        }
      }
      puVar3 = puVar20;
      if ((uVar21 & 0x80) != 0) {
        puVar3 = puVar25;
      }
      puVar20 = *(undefined8 **)((long)puVar20 + ((uVar21 & 0x80) >> 4));
      puVar25 = puVar3;
    } while (puVar20 != (undefined8 *)0x0);
    if (puVar27 == puVar3) goto LAB_10ad5d4d4;
    bVar1 = param_2 < (long)puVar3[4];
    if (param_2 == puVar3[4]) {
      bVar1 = param_3 != puVar3[5] && param_3 < (long)puVar3[5];
    }
    if (bVar1) goto LAB_10ad5d4d4;
LAB_10ad5d950:
    __ZNSt3__15mutex6unlockEv(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  func_0x000109ffde50();
LAB_10ad5d9e4:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad5d9e8);
  (*pcVar10)();
}



/* Entry: 10ad5dad4; end: 10ad5db43;  */

undefined8 FUN_10ad5dad4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_2;
  uStack_28 = param_3;
  __ZNSt3__15mutex4lockEv();
  lVar1 = param_1 + 0x40;
  FUN_10ad5de40(lVar1,&uStack_30);
  if (param_1 + 0x48 == lVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
  }
  __ZNSt3__15mutex6unlockEv(param_1);
  return uVar2;
}



/* Entry: 10ad5db44; end: 10ad5dc0b;  */

void FUN_10ad5db44(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined **ppuVar6;
  long *plVar7;
  
  puVar1 = PTR___tlv_bootstrap_11340d750;
  ppuVar6 = &PTR___tlv_bootstrap_11340d750;
  ppuVar3 = ppuVar6;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar4 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar3 & 1) == 0) {
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar3,0x100000000);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar6 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar5 = (long *)ppuVar4[2];
  if (plVar5 != (long *)0x0) {
    if ((*(byte *)(plVar5[1] + 0x43) & 1) == 0) {
      if (*(char *)(plVar5[1] + 0x42) == '\x01' && param_1 != 0) goto FUN_10ad5def4;
    }
    else if (param_1 != 0) {
FUN_10ad5def4:
      if ((*(int *)((long)plVar5 + 0x34) == (int)((ulong)param_1 >> 0x20)) &&
         (plVar7 = plVar5, FUN_10a1333cc(), plVar7 != (long *)0x0)) {
        *(undefined1 *)((long)plVar7 + 0x1e) = 2;
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = param_1;
        *(undefined8 *)((long)plVar7 + 0x16) = 0;
        if ((*(byte *)(plVar5 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad5df5c);
          (*pcVar2)();
        }
        plVar5[0x18] = plVar5[0x18] + 1;
      }
      return;
    }
  }
  return;
}



/* Entry: 10ad5dc0c; end: 10ad5dce3;  */

void FUN_10ad5dc0c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10ad5dc0c(param_1,*param_2);
    FUN_10ad5dc0c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10ad5dce4; end: 10ad5de3f;  */

void FUN_10ad5dce4(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long **pplVar6;
  ulong uVar7;
  long *plVar8;
  long **pplVar9;
  long *plStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  pplVar6 = &plStack_70;
  pplVar9 = &plStack_70;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = (undefined8 *)*param_1;
  uVar3 = *param_2;
  uVar7 = param_2[1];
  lStack_50 = *(long *)(param_1[1] + 8);
  if (0x7ffffffffffffff7 < uVar7) {
    FUN_10a3a815c();
    goto LAB_10ad5de38;
  }
  if (uVar7 < 0x17) {
    uStack_60 = CONCAT17((char)uVar7,(undefined7)uStack_60);
    if (uVar7 != 0) goto LAB_10ad5dd74;
  }
  else {
    uVar2 = 0x19;
    if ((uVar7 | 7) != 0x17) {
      uVar2 = (uVar7 | 7) + 1;
    }
    pplVar6 = (long **)&lStack_58;
    FUN_10a3a8170(pplVar6,uVar2);
    uStack_60 = uVar2 | 0x8000000000000000;
    plStack_70 = (long *)pplVar6;
    uStack_68 = uVar7;
LAB_10ad5dd74:
    _memmove(pplVar6,uVar3,uVar7);
    pplVar9 = pplVar6;
  }
  *(undefined1 *)((long)pplVar9 + uVar7) = 0;
  plVar8 = (long *)*param_1;
  if ((int)plVar8[5] == 2) {
    if (*(char *)((long)plVar8 + 0x17) < '\0') {
      uVar7 = plVar8[2];
      plVar1 = (long *)(plVar8[4] + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 - (uVar7 & 0x7fffffffffffffff);
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      __ZdlPv();
    }
    plVar8[2] = uStack_60;
    plVar8[1] = uStack_68;
    *plVar8 = (long)plStack_70;
  }
  else {
    FUN_10a133060();
    plVar8[2] = uStack_60;
    plVar8[1] = uStack_68;
    *plVar8 = (long)plStack_70;
    plVar8[4] = lStack_50;
    *(undefined4 *)(plVar8 + 5) = 2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
LAB_10ad5de38:
  ___stack_chk_fail();
  __Unwind_Resume();
  FUN_10ad5deac();
  return;
}



/* Entry: 10ad5de40; end: 10ad5deab;  */

void FUN_10ad5de40(long param_1,undefined8 param_2)

{
  FUN_10ad5deac(param_1,param_2,*(undefined8 *)(param_1 + 8),(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10ad5deac; end: 10ad5def3;  */

long FUN_10ad5deac(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    lVar2 = param_4;
    do {
      uVar3 = 0xff;
      if (*param_2 <= *(long *)(param_3 + 0x20)) {
        uVar3 = 0;
      }
      if (*(long *)(param_3 + 0x20) == *param_2) {
        uVar1 = 0xff;
        if (param_2[1] <= *(long *)(param_3 + 0x28)) {
          uVar1 = 0;
        }
        uVar3 = 0;
        if (*(long *)(param_3 + 0x28) != param_2[1]) {
          uVar3 = uVar1;
        }
      }
      param_4 = param_3;
      if ((uVar3 & 0x80) != 0) {
        param_4 = lVar2;
      }
      param_3 = *(long *)(param_3 + ((uVar3 & 0x80) >> 4));
      lVar2 = param_4;
    } while (param_3 != 0);
  }
  return param_4;
}



/* Entry: 10ad5def4; end: 10ad5df5b;  */

void FUN_10ad5def4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  if ((*(int *)((long)param_1 + 0x34) == (int)((ulong)param_2 >> 0x20)) &&
     (puVar2 = param_1, FUN_10a1333cc(), puVar2 != (undefined8 *)0x0)) {
    *(undefined1 *)((long)puVar2 + 0x1e) = 2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = param_2;
    *(undefined8 *)((long)puVar2 + 0x16) = 0;
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad5df5c);
      (*pcVar1)();
    }
    param_1[0x18] = param_1[0x18] + 1;
  }
  return;
}



/* Entry: 10ad5df5c; end: 10ad5dfcb;  */

void FUN_10ad5df5c(long *param_1)

{
  undefined8 uStack_20;
  undefined1 uStack_11;
  
  if (*param_1 != 0) {
    uStack_20 = 0;
    FUN_10ad5f678(&uStack_11,&uStack_20);
    uStack_20 = 0;
    FUN_10ad5f894(&uStack_11,&uStack_20);
    uStack_20 = 0;
    FUN_10ad5fab0(&uStack_11,&uStack_20);
    uStack_20 = 0;
    FUN_10ad5fccc(&uStack_11,&uStack_20);
    uStack_20 = 0;
    FUN_10ad5fee8(&uStack_11,&uStack_20);
  }
  return;
}



/* Entry: 10ad5dfcc; end: 10ad5e1e3;  */

long FUN_10ad5dfcc(long param_1)

{
  if (*(long *)(param_1 + 0x1a0) != 0) {
    *(long *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a0);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x188) != 0) {
    *(long *)(param_1 + 400) = *(long *)(param_1 + 0x188);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x170) != 0) {
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x170);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x158) != 0) {
    *(long *)(param_1 + 0x160) = *(long *)(param_1 + 0x158);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x140) != 0) {
    *(long *)(param_1 + 0x148) = *(long *)(param_1 + 0x140);
    __ZdlPv();
  }
  func_0x00010a09dc14(param_1 + 0x10);
  return param_1;
}



/* Entry: 10ad5e1e4; end: 10ad5e217;  */

void FUN_10ad5e1e4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  undefined *puVar15;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  ushort uVar22;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar21;
  
  if ((((int)param_1[4] == 0) || (*param_1 == 0)) || ((int)param_1[5] != 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  ppuVar12 = (undefined **)(param_1 + 0xe);
  ppuVar11 = (undefined **)(param_1 + 0x28);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar11;
  if (((*(byte *)((long)param_1 + 0x71) & 1) == 0) &&
     (*(undefined1 *)((long)param_1 + 0x71) = 1, unaff_x19 = ppuVar12, *(char *)ppuVar12 == '\x01'))
  {
    *(undefined1 *)ppuVar12 = 0;
    puVar15 = PTR___tlv_bootstrap_11340d750;
    ppuVar16 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar16;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar13 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
      (*(code *)puVar15)();
      *(undefined1 *)ppuVar16 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar12[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (param_1[0x11] != 0) {
        puVar15 = unaff_x20[1];
        if ((((puVar15[0x42] | puVar15[0x43]) & 1) != 0) || (puVar15[0x3f] == '\x01')) {
          uVar8 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar17 = (undefined *)cntvct_el0;
          if (uVar8 != 1000000000) {
            uVar6 = 0;
            if (uVar8 != 0) {
              uVar6 = (ulong)puVar17 / uVar8;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (((long)puVar17 - uVar6 * uVar8) * 1000000000) / uVar8;
            }
            puVar17 = (undefined *)(uVar7 + uVar6 * 1000000000);
          }
          if (((puVar15[0x42] | puVar15[0x43]) & 1) != 0) {
            uVar18 = (undefined4)param_1[0x10];
            uVar22 = *(ushort *)((long)param_1 + 0x72);
            puVar15 = (undefined *)param_1[0xf];
            puVar20 = (undefined8 *)*ppuVar11;
            puVar2 = (undefined8 *)param_1[0x29];
            if (puVar2 == puVar20) {
              ppuVar12 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar12 != (undefined **)0x0) {
                ppuVar16 = (undefined **)0x0;
                ppuVar11 = ppuVar12;
                goto LAB_10ad5e3a0;
              }
            }
            else {
              uStack_80 = (uint)uVar22;
              puVar19 = unaff_x20[2];
              ppuVar12 = &puStack_78;
              uStack_7c = uVar18;
              puStack_70 = puVar19;
              FUN_10ad605e8();
              *ppuVar12 = (undefined *)0x0;
              ppuVar12[1] = (undefined *)0x0;
              ppuVar12[2] = (undefined *)0x0;
              ppuVar12[4] = puVar19;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar21 = puVar20 + 1;
                puStack_78 = (undefined *)*puVar20;
                ppuVar13 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar13 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar12);
                puVar20 = puVar21;
              } while (puVar21 != puVar2);
              ppuVar11 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar11 == (undefined **)0x0) {
                puVar17 = unaff_x20[2];
                puVar15 = *ppuVar12;
                if (puVar15 != (undefined *)0x0) {
                  ppuVar12[1] = puVar15;
                  puVar19 = ppuVar12[2];
                  plVar1 = (long *)(ppuVar12[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 - ((long)puVar19 - (long)puVar15);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar17 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              else {
                uVar22 = (ushort)uStack_80;
                ppuVar16 = ppuVar12;
                uVar18 = uStack_7c;
LAB_10ad5e3a0:
                ppuVar12 = ppuVar11;
                uVar14 = 6;
                if (ppuVar16 != (undefined **)0x0) {
                  uVar14 = 0xe;
                }
                *ppuVar12 = puVar15;
                ppuVar12[1] = (undefined *)ppuVar16;
                ppuVar12[2] = puVar17;
                *(undefined4 *)(ppuVar12 + 3) = uVar18;
                *(ushort *)((long)ppuVar12 + 0x1c) = uVar22;
                *(undefined1 *)((long)ppuVar12 + 0x1e) = uVar14;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad5e50c);
                  (*pcVar9)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && ((char)param_1[0x13] == '\x01')) &&
         (ppuVar12 = (undefined **)unaff_x20[0xb], ppuVar12 != (undefined **)0x0)) {
        ppuVar13 = (undefined **)param_1[0x12];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar12 + 0x30))();
          return;
        }
        goto LAB_10ad5e50c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5e50c:
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(int *)(ppuVar12 + 4) != 0) {
    pcStack_88 = FUN_10ad5e514;
    if ((*ppuVar12 != (undefined *)0x0) && (*(int *)((long)ppuVar12 + 0x2c) == 0)) {
      *(undefined4 *)((long)ppuVar12 + 0x2c) = 1;
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10ad61728(ppuVar12[2]);
      ppuVar12[0x2c] = ppuVar12[0x2b];
      puVar15 = ppuVar12[1];
      if ((puVar15 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar15,ppuVar13[3],ppuVar13[4]), uStack_c0 = puVar15,
         puVar15 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar12 + 0x2b,&uStack_c0);
      }
      FUN_10ad60210(&uStack_c0);
      *(undefined4 *)(ppuVar12 + 0x14) = (undefined4)uStack_c0;
      *(undefined4 *)((long)ppuVar12 + 0xa4) = uStack_c0._4_4_;
      ppuVar12[0x16] = puStack_b0;
      ppuVar12[0x15] = puStack_b8;
      *(undefined1 *)(ppuVar12 + 0x17) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10ad5e218; end: 10ad5e513;  */

void FUN_10ad5e218(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined1 uVar13;
  undefined *puVar14;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined4 uVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  ushort uVar21;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar20;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar10 = param_1;
  ppuVar12 = param_2;
  if ((((ulong)*param_1 & 0x100) == 0) &&
     (*(undefined1 *)((long)param_1 + 1) = 1, unaff_x19 = param_1, *(char *)param_1 == '\x01')) {
    *(undefined1 *)param_1 = 0;
    puVar14 = PTR___tlv_bootstrap_11340d750;
    ppuVar11 = &PTR___tlv_bootstrap_11340d750;
    ppuVar15 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar10 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar15 & 1) == 0) {
      ppuVar12 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar12,0x100000000);
      (*(code *)puVar14)();
      *(undefined1 *)ppuVar11 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar10[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (param_1[3] != (undefined *)0x0) {
        puVar14 = unaff_x20[1];
        if ((((puVar14[0x42] | puVar14[0x43]) & 1) != 0) || (puVar14[0x3f] == '\x01')) {
          uVar8 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar16 = (undefined *)cntvct_el0;
          if (uVar8 != 1000000000) {
            uVar6 = 0;
            if (uVar8 != 0) {
              uVar6 = (ulong)puVar16 / uVar8;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (((long)puVar16 - uVar6 * uVar8) * 1000000000) / uVar8;
            }
            puVar16 = (undefined *)(uVar7 + uVar6 * 1000000000);
          }
          if (((puVar14[0x42] | puVar14[0x43]) & 1) != 0) {
            uVar17 = *(undefined4 *)(param_1 + 2);
            uVar21 = *(ushort *)((long)param_1 + 2);
            puVar14 = param_1[1];
            puVar19 = (undefined8 *)*param_2;
            puVar2 = (undefined8 *)param_2[1];
            if (puVar2 == puVar19) {
              ppuVar10 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar10 != (undefined **)0x0) {
                ppuVar15 = (undefined **)0x0;
                ppuVar11 = ppuVar10;
                goto LAB_10ad5e3a0;
              }
            }
            else {
              uStack_80 = (uint)uVar21;
              puVar18 = unaff_x20[2];
              ppuVar10 = &puStack_78;
              uStack_7c = uVar17;
              puStack_70 = puVar18;
              FUN_10ad605e8();
              *ppuVar10 = (undefined *)0x0;
              ppuVar10[1] = (undefined *)0x0;
              ppuVar10[2] = (undefined *)0x0;
              ppuVar10[4] = puVar18;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar20 = puVar19 + 1;
                puStack_78 = (undefined *)*puVar19;
                ppuVar12 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar12 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar10);
                puVar19 = puVar20;
              } while (puVar20 != puVar2);
              ppuVar11 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar11 == (undefined **)0x0) {
                puVar16 = unaff_x20[2];
                puVar14 = *ppuVar10;
                if (puVar14 != (undefined *)0x0) {
                  ppuVar10[1] = puVar14;
                  puVar18 = ppuVar10[2];
                  plVar1 = (long *)(ppuVar10[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 - ((long)puVar18 - (long)puVar14);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar16 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              else {
                uVar21 = (ushort)uStack_80;
                ppuVar15 = ppuVar10;
                uVar17 = uStack_7c;
LAB_10ad5e3a0:
                ppuVar10 = ppuVar11;
                uVar13 = 6;
                if (ppuVar15 != (undefined **)0x0) {
                  uVar13 = 0xe;
                }
                *ppuVar10 = puVar14;
                ppuVar10[1] = (undefined *)ppuVar15;
                ppuVar10[2] = puVar16;
                *(undefined4 *)(ppuVar10 + 3) = uVar17;
                *(ushort *)((long)ppuVar10 + 0x1c) = uVar21;
                *(undefined1 *)((long)ppuVar10 + 0x1e) = uVar13;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad5e50c);
                  (*pcVar9)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && (*(char *)(param_1 + 5) == '\x01')) &&
         (ppuVar10 = (undefined **)unaff_x20[0xb], ppuVar10 != (undefined **)0x0)) {
        ppuVar12 = (undefined **)param_1[4];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar10 + 0x30))();
          return;
        }
        goto LAB_10ad5e50c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5e50c:
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(int *)(ppuVar10 + 4) != 0) {
    pcStack_88 = FUN_10ad5e514;
    if ((*ppuVar10 != (undefined *)0x0) && (*(int *)((long)ppuVar10 + 0x2c) == 0)) {
      *(undefined4 *)((long)ppuVar10 + 0x2c) = 1;
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10ad61728(ppuVar10[2]);
      ppuVar10[0x2c] = ppuVar10[0x2b];
      puVar14 = ppuVar10[1];
      if ((puVar14 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar14,ppuVar12[3],ppuVar12[4]), uStack_c0 = puVar14,
         puVar14 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar10 + 0x2b,&uStack_c0);
      }
      FUN_10ad60210(&uStack_c0);
      *(undefined4 *)(ppuVar10 + 0x14) = (undefined4)uStack_c0;
      *(undefined4 *)((long)ppuVar10 + 0xa4) = uStack_c0._4_4_;
      ppuVar10[0x16] = puStack_b0;
      ppuVar10[0x15] = puStack_b8;
      *(undefined1 *)(ppuVar10 + 0x17) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10ad5e514; end: 10ad5e64f;  */

void FUN_10ad5e514(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  if ((int)param_1[4] != 0) {
    if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x2c) == 0)) {
      *(undefined4 *)((long)param_1 + 0x2c) = 1;
      FUN_10ad61728(param_1[2]);
      param_1[0x2c] = param_1[0x2b];
      lVar1 = param_1[1];
      if ((lVar1 != 0) &&
         (FUN_10ad5dad4(lVar1,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20)),
         uStack_40 = lVar1, lVar1 != 0)) {
        FUN_10ad60104(param_1 + 0x2b,&uStack_40);
      }
      FUN_10ad60210(&uStack_40);
      *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_40;
      *(undefined4 *)((long)param_1 + 0xa4) = uStack_40._4_4_;
      param_1[0x16] = lStack_30;
      param_1[0x15] = lStack_38;
      *(undefined1 *)(param_1 + 0x17) = uStack_28;
    }
  }
  return;
}



/* Entry: 10ad5e650; end: 10ad5e6cf;  */

void FUN_10ad5e650(long *param_1,undefined8 param_2,mach_header *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  dword *pdVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  undefined **ppuVar25;
  ulong uVar26;
  mach_header *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined **unaff_x27;
  ulong unaff_x28;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  mach_header *pmStack_b8;
  undefined **ppuStack_b0;
  mach_header *pmStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  if (((((int)param_1[4] == 0) || (*param_1 == 0)) || (*(int *)((long)param_1 + 0x2c) != 1)) ||
     ((int)param_1[7] != 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  ppuVar13 = (undefined **)(param_1 + 0x24);
  ppuVar25 = (undefined **)(param_1 + 0x34);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar17 = ppuVar25;
  if ((*(byte *)((long)param_1 + 0x121) & 1) == 0) {
    *(undefined1 *)((long)param_1 + 0x121) = 1;
    unaff_x19 = ppuVar13;
    if (*(char *)ppuVar13 == '\x01') {
      *(undefined1 *)ppuVar13 = 0;
      unaff_x23 = (mach_header *)PTR___tlv_bootstrap_11340d750;
      unaff_x21 = &PTR___tlv_bootstrap_11340d750;
      ppuVar12 = unaff_x21;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar13 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar12 & 1) == 0) {
        ppuVar17 = ppuVar13;
        (*(code *)PTR___tlv_bootstrap_11340d738)();
        UNRECOVERED_JUMPTABLE = &MACH_HEADER;
        __tlv_atexit(0x10a132a8c);
        ppuVar12 = unaff_x21;
        (*(code *)unaff_x23)();
        *(undefined1 *)ppuVar12 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      unaff_x20 = (undefined **)ppuVar13[2];
      unaff_x22 = ppuVar25;
      if (unaff_x20 != (undefined **)0x0) {
        if (param_1[0x25] != 0) {
          puVar20 = unaff_x20[1];
          if (((((puVar20[0x42] | puVar20[0x43]) & 1) != 0) || ((puVar20[0x40] & 1) != 0)) ||
             (puVar20[0x3f] == '\x01')) {
            uVar26 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            unaff_x21 = (undefined **)cntvct_el0;
            if (uVar26 != 1000000000) {
              uVar18 = 0;
              if (uVar26 != 0) {
                uVar18 = (ulong)unaff_x21 / uVar26;
              }
              uVar24 = 0;
              if (uVar26 != 0) {
                uVar24 = (((long)unaff_x21 - uVar18 * uVar26) * 1000000000) / uVar26;
              }
              unaff_x21 = (undefined **)(uVar24 + uVar18 * 1000000000);
            }
            if (((puVar20[0x42] | puVar20[0x43]) & 1) != 0) {
              unaff_x23 = (mach_header *)(ulong)*(uint *)((long)param_1 + 0x124);
              uVar8 = *(ushort *)((long)param_1 + 0x122);
              unaff_x24 = (ulong)uVar8;
              unaff_x25 = (undefined8 *)*ppuVar25;
              unaff_x26 = (undefined8 *)param_1[0x35];
              ppuVar13 = unaff_x20;
              if (unaff_x26 == unaff_x25) {
                FUN_10a1333cc();
                unaff_x28 = 0;
                if (ppuVar13 != (undefined **)0x0) {
                  ppuVar25 = (undefined **)0x0;
                  goto LAB_10ad5f0c0;
                }
              }
              else {
                puVar20 = unaff_x20[2];
                unaff_x27 = &puStack_78;
                ppuVar25 = &puStack_78;
                uStack_7c = *(uint *)((long)param_1 + 0x124);
                puStack_70 = puVar20;
                FUN_10ad605e8();
                *ppuVar25 = (undefined *)0x0;
                ppuVar25[1] = (undefined *)0x0;
                ppuVar25[2] = (undefined *)0x0;
                ppuVar25[4] = puVar20;
                func_0x00010ad60458();
                uVar7 = *(uint *)((long)unaff_x20 + 0x34);
                unaff_x28 = (ulong)uVar7;
                puVar19 = unaff_x25;
                do {
                  unaff_x25 = puVar19 + 1;
                  puStack_78 = (undefined *)*puVar19;
                  ppuVar17 = unaff_x27;
                  if (uVar7 != (uint)((ulong)puStack_78 >> 0x20)) {
                    ppuVar17 = (undefined **)&UNK_10e510508;
                  }
                  func_0x00010ad60504(ppuVar25);
                  puVar19 = unaff_x25;
                } while (unaff_x25 != unaff_x26);
                FUN_10a1333cc();
                if (ppuVar13 == (undefined **)0x0) {
                  unaff_x23 = (mach_header *)unaff_x20[2];
                  puVar20 = *ppuVar25;
                  if (puVar20 != (undefined *)0x0) {
                    ppuVar25[1] = puVar20;
                    puVar16 = ppuVar25[2];
                    plVar1 = (long *)(ppuVar25[4] + 8);
                    do {
                      cVar9 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar10) {
                        *plVar1 = *plVar1 - ((long)puVar16 - (long)puVar20);
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    __ZdlPv();
                  }
                  pdVar2 = &unaff_x23->cpusubtype;
                  do {
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(pdVar2,0x10);
                    if (bVar10) {
                      *(long *)pdVar2 = *(long *)pdVar2 + -0x28;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  ppuVar13 = ppuVar25;
                  __ZdlPv();
                }
                else {
                  unaff_x23 = (mach_header *)(ulong)uStack_7c;
LAB_10ad5f0c0:
                  uVar21 = 6;
                  if (ppuVar25 != (undefined **)0x0) {
                    uVar21 = 0xe;
                  }
                  *ppuVar13 = &UNK_10f6a8886;
                  ppuVar13[1] = (undefined *)ppuVar25;
                  ppuVar13[2] = (undefined *)unaff_x21;
                  *(int *)(ppuVar13 + 3) = (int)unaff_x23;
                  *(ushort *)((long)ppuVar13 + 0x1c) = uVar8;
                  *(undefined1 *)((long)ppuVar13 + 0x1e) = uVar21;
                  if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10ad5f27c);
                    (*pcVar11)();
                  }
                  unaff_x20[0x18] = unaff_x20[0x18] + 1;
                }
              }
            }
            if (unaff_x20[1][0x40] == '\x01') {
              unaff_x23 = (mach_header *)param_1[0x25];
              unaff_x24 = (long)unaff_x21 - (long)unaff_x23;
              if (unaff_x23 <= unaff_x21) {
                ppuVar25 = (undefined **)*unaff_x20;
                __ZNSt3__15mutex4lockEv(ppuVar25 + 0x50);
                ppuVar17 = ppuVar25 + 0x50;
                UNRECOVERED_JUMPTABLE = unaff_x23;
                FUN_10a15387c((double)unaff_x24,ppuVar25,ppuVar17,unaff_x23,unaff_x21);
                ppuVar13 = ppuVar25 + 0x50;
                __ZNSt3__15mutex6unlockEv();
              }
            }
          }
        }
        unaff_x22 = ppuVar25;
        if (((unaff_x20[1][0x41] == '\x01') && ((char)param_1[0x27] == '\x01')) &&
           (ppuVar13 = (undefined **)unaff_x20[0xb], ppuVar13 != (undefined **)0x0)) {
          ppuVar17 = (undefined **)param_1[0x26];
          UNRECOVERED_JUMPTABLE = *(mach_header **)(*ppuVar13 + 0x30);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5f204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)UNRECOVERED_JUMPTABLE)();
            return;
          }
          goto LAB_10ad5f27c;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5f27c:
  ___stack_chk_fail();
  if ((int)ppuVar17 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_10ad5f28c;
  if ((((*(int *)(ppuVar13 + 4) != 0) && (*ppuVar13 != (undefined *)0x0)) &&
      (ppuVar13[1] != (undefined *)0x0)) && (*(int *)(ppuVar13 + 7) == 1)) {
    puVar20 = *(undefined **)UNRECOVERED_JUMPTABLE;
    puVar15 = *(undefined **)&UNRECOVERED_JUMPTABLE->cpusubtype;
    puVar16 = *(undefined **)&UNRECOVERED_JUMPTABLE->flags;
    puVar5 = *(undefined **)(UNRECOVERED_JUMPTABLE + 1);
    lVar3 = *(long *)&UNRECOVERED_JUMPTABLE[1].ncmds;
    lVar6 = *(long *)&UNRECOVERED_JUMPTABLE[1].flags;
    lVar22 = *(long *)&UNRECOVERED_JUMPTABLE[2].ncmds;
    lVar23 = *(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype;
    uStack_e0 = unaff_x28;
    ppuStack_d8 = unaff_x27;
    puStack_d0 = unaff_x26;
    puStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    pmStack_b8 = unaff_x23;
    ppuStack_b0 = unaff_x22;
    pmStack_a8 = (mach_header *)unaff_x21;
    ppuStack_a0 = unaff_x20;
    ppuStack_98 = unaff_x19;
    puStack_90 = &stack0xfffffffffffffff0;
    if (puVar15 != puVar20) {
      uVar26 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE->cpusubtype -
                   (long)*(undefined **)UNRECOVERED_JUMPTABLE) <= uVar26) goto LAB_10ad5f50c;
        uVar18 = (ulong)(byte)(*(undefined **)UNRECOVERED_JUMPTABLE)[uVar26];
        puVar4 = ppuVar17[0x24];
        uVar24 = ((long)ppuVar17[0x25] - (long)puVar4 >> 4) * -0x30c30c30c30c30c3;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar14 = ppuVar13[1];
        FUN_10ad5dad4(puVar14,*(undefined8 *)(puVar4 + uVar18 * 0x150 + 0x58),
                      *(undefined8 *)(puVar4 + uVar18 * 0x150 + 0x60));
        puStack_e8 = puVar14;
        if (puVar14 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar26 = uVar26 + 1;
      } while ((long)puVar15 - (long)puVar20 != uVar26);
    }
    if (puVar5 != puVar16) {
      uVar26 = 0;
      do {
        if ((ulong)((long)*(undefined **)(UNRECOVERED_JUMPTABLE + 1) -
                   *(long *)&UNRECOVERED_JUMPTABLE->flags) <= uVar26) goto LAB_10ad5f50c;
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE->flags + uVar26);
        puVar20 = ppuVar17[0x27];
        uVar24 = ((long)ppuVar17[0x28] - (long)puVar20 >> 3) * -0x7063e7063e7063e7;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar15 = ppuVar13[1];
        FUN_10ad5dad4(puVar15,*(undefined8 *)(puVar20 + uVar18 * 0x148 + 0x138),
                      *(undefined8 *)(puVar20 + uVar18 * 0x148 + 0x140));
        puStack_e8 = puVar15;
        if (puVar15 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar26 = uVar26 + 1;
      } while ((long)puVar5 - (long)puVar16 != uVar26);
    }
    if (lVar6 != lVar3) {
      uVar26 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE[1].flags -
                   *(long *)&UNRECOVERED_JUMPTABLE[1].ncmds) <= uVar26) goto LAB_10ad5f50c;
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE[1].ncmds + uVar26);
        puVar20 = ppuVar17[0x2a];
        uVar24 = ((long)ppuVar17[0x2b] - (long)puVar20 >> 3) * -0xf0f0f0f0f0f0f0f;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar16 = ppuVar13[1];
        FUN_10ad5dad4(puVar16,*(undefined8 *)(puVar20 + uVar18 * 0x88 + 0x78),
                      *(undefined8 *)(puVar20 + uVar18 * 0x88 + 0x80));
        puStack_e8 = puVar16;
        if (puVar16 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar26 = uVar26 + 1;
      } while (lVar6 - lVar3 != uVar26);
    }
    if (lVar22 != lVar23) {
      uVar26 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE[2].ncmds -
                   *(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype) <= uVar26) {
LAB_10ad5f50c:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10ad5f510);
          (*pcVar11)();
        }
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype + uVar26);
        uVar24 = ((long)ppuVar17[0x2e] - (long)ppuVar17[0x2d] >> 4) * -0x5555555555555555;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar19 = (undefined8 *)(ppuVar17[0x2d] + uVar18 * 0x30);
        puVar20 = ppuVar13[1];
        FUN_10ad5dad4(puVar20,*puVar19,puVar19[1]);
        puStack_e8 = puVar20;
        if (puVar20 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar26 = uVar26 + 1;
      } while (lVar22 - lVar23 != uVar26);
    }
  }
  return;
}



/* Entry: 10ad5e6d0; end: 10ad5ea27;  */

void FUN_10ad5e6d0(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 uVar17;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined8 *puVar21;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined4 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar22;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar12 = param_1;
  ppuVar14 = param_2;
  if ((((ulong)*param_1 & 0x100) == 0) &&
     (*(undefined1 *)((long)param_1 + 1) = 1, unaff_x19 = param_1, *(char *)param_1 == '\x01')) {
    *(undefined1 *)param_1 = 0;
    puVar16 = PTR___tlv_bootstrap_11340d750;
    ppuVar13 = &PTR___tlv_bootstrap_11340d750;
    ppuVar11 = ppuVar13;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar11 & 1) == 0) {
      ppuVar14 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar14,0x100000000);
      (*(code *)puVar16)();
      *(undefined1 *)ppuVar13 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar12[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (param_1[1] != (undefined *)0x0) {
        puVar16 = unaff_x20[1];
        if (((((puVar16[0x42] | puVar16[0x43]) & 1) != 0) || ((puVar16[0x40] & 1) != 0)) ||
           (puVar16[0x3f] == '\x01')) {
          uVar9 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar18 = (undefined *)cntvct_el0;
          if (uVar9 != 1000000000) {
            uVar7 = 0;
            if (uVar9 != 0) {
              uVar7 = (ulong)puVar18 / uVar9;
            }
            uVar8 = 0;
            if (uVar9 != 0) {
              uVar8 = (((long)puVar18 - uVar7 * uVar9) * 1000000000) / uVar9;
            }
            puVar18 = (undefined *)(uVar8 + uVar7 * 1000000000);
          }
          if (((puVar16[0x42] | puVar16[0x43]) & 1) != 0) {
            uVar20 = *(undefined4 *)((long)param_1 + 4);
            uVar4 = *(undefined2 *)((long)param_1 + 2);
            puVar21 = (undefined8 *)*param_2;
            puVar2 = (undefined8 *)param_2[1];
            if (puVar2 == puVar21) {
              ppuVar12 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar12 != (undefined **)0x0) {
                ppuVar13 = ppuVar12;
                ppuVar11 = (undefined **)0x0;
                goto LAB_10ad5e85c;
              }
            }
            else {
              puVar16 = unaff_x20[2];
              ppuVar12 = &puStack_78;
              uStack_7c = uVar20;
              puStack_70 = puVar16;
              FUN_10ad605e8();
              *ppuVar12 = (undefined *)0x0;
              ppuVar12[1] = (undefined *)0x0;
              ppuVar12[2] = (undefined *)0x0;
              ppuVar12[4] = puVar16;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar22 = puVar21 + 1;
                puStack_78 = (undefined *)*puVar21;
                ppuVar14 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar14 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar12);
                puVar21 = puVar22;
              } while (puVar22 != puVar2);
              ppuVar13 = unaff_x20;
              FUN_10a1333cc();
              ppuVar11 = ppuVar12;
              uVar20 = uStack_7c;
              if (ppuVar13 == (undefined **)0x0) {
                puVar19 = unaff_x20[2];
                puVar16 = *ppuVar12;
                if (puVar16 != (undefined *)0x0) {
                  ppuVar12[1] = puVar16;
                  puVar15 = ppuVar12[2];
                  plVar1 = (long *)(ppuVar12[4] + 8);
                  do {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar6) {
                      *plVar1 = *plVar1 - ((long)puVar15 - (long)puVar16);
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar5 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar19 + 8);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar6) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                __ZdlPv();
              }
              else {
LAB_10ad5e85c:
                ppuVar12 = ppuVar13;
                uVar17 = 6;
                if (ppuVar11 != (undefined **)0x0) {
                  uVar17 = 0xe;
                }
                *ppuVar12 = &UNK_10f6a887b;
                ppuVar12[1] = (undefined *)ppuVar11;
                ppuVar12[2] = puVar18;
                *(undefined4 *)(ppuVar12 + 3) = uVar20;
                *(undefined2 *)((long)ppuVar12 + 0x1c) = uVar4;
                *(undefined1 *)((long)ppuVar12 + 0x1e) = uVar17;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10ad5ea18);
                  (*pcVar10)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
          if (unaff_x20[1][0x40] == '\x01') {
            puVar16 = param_1[1];
            if (puVar16 <= puVar18) {
              puVar19 = *unaff_x20;
              __ZNSt3__15mutex4lockEv(puVar19 + 0x380);
              ppuVar14 = (undefined **)(puVar19 + 0x380);
              FUN_10a15387c((double)(ulong)((long)puVar18 - (long)puVar16),puVar19,ppuVar14,puVar16,
                            puVar18);
              ppuVar12 = (undefined **)(puVar19 + 0x380);
              __ZNSt3__15mutex6unlockEv();
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && (*(char *)(param_1 + 3) == '\x01')) &&
         (ppuVar12 = (undefined **)unaff_x20[0xb], ppuVar12 != (undefined **)0x0)) {
        ppuVar14 = (undefined **)param_1[2];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar12 + 0x30))();
          return;
        }
        goto LAB_10ad5ea18;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5ea18:
  ___stack_chk_fail();
  if ((int)ppuVar14 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  if (*(int *)(ppuVar12 + 4) != 0) {
    pcStack_88 = FUN_10ad5ea28;
    if (((*ppuVar12 != (undefined *)0x0) && (*(int *)(ppuVar12 + 6) == 0)) &&
       ((*(undefined4 *)(ppuVar12 + 6) = 1, ppuVar14 != (undefined **)0x0 &&
        (puVar16 = ppuVar14[0x35], puVar16 != (undefined *)0x0)))) {
      ppuVar12[0x2f] = ppuVar12[0x2e];
      puVar18 = ppuVar12[1];
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      if ((puVar18 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar18,*(undefined8 *)(puVar16 + 0x40),*(undefined8 *)(puVar16 + 0x48)),
         puStack_d0 = puVar18, puVar18 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar12 + 0x2e,&puStack_d0);
      }
      FUN_10ac04884(&puStack_d0,&UNK_10f6a8815);
      *(undefined4 *)(ppuVar12 + 0x18) = puStack_d0._0_4_;
      ppuVar12[0x19] = puStack_c8;
      *(undefined4 *)(ppuVar12 + 0x1a) = uStack_c0;
      ppuVar12[0x1c] = puStack_b0;
      ppuVar12[0x1b] = puStack_b8;
      *(undefined1 *)(ppuVar12 + 0x1d) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10ad5ea28; end: 10ad5eadf;  */

void FUN_10ad5ea28(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  if ((int)param_1[4] != 0) {
    if ((((*param_1 != 0) && ((int)param_1[6] == 0)) &&
        (*(undefined4 *)(param_1 + 6) = 1, param_2 != 0)) &&
       (lVar2 = *(long *)(param_2 + 0x1a8), lVar2 != 0)) {
      param_1[0x2f] = param_1[0x2e];
      lVar1 = param_1[1];
      if ((lVar1 != 0) &&
         (FUN_10ad5dad4(lVar1,*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x48)),
         lStack_50 = lVar1, lVar1 != 0)) {
        FUN_10ad60104(param_1 + 0x2e,&lStack_50);
      }
      FUN_10ac04884(&lStack_50,&UNK_10f6a8815);
      *(undefined4 *)(param_1 + 0x18) = (undefined4)lStack_50;
      param_1[0x19] = lStack_48;
      *(undefined4 *)(param_1 + 0x1a) = uStack_40;
      param_1[0x1c] = lStack_30;
      param_1[0x1b] = lStack_38;
      *(undefined1 *)(param_1 + 0x1d) = uStack_28;
    }
  }
  return;
}



/* Entry: 10ad5eae0; end: 10ad5ec0b;  */

void FUN_10ad5eae0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  if ((int)param_1[4] != 0) {
    if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x34) == 0)) {
      *(undefined4 *)((long)param_1 + 0x34) = 1;
      param_1[0x32] = param_1[0x31];
      lVar1 = param_1[1];
      if (lVar1 != 0) {
        lVar3 = *(long *)(param_2 + 0xe8);
        if (*(long *)(param_2 + 0xf0) != lVar3) {
          lVar1 = 0;
          uVar4 = 0;
          do {
            lVar2 = param_1[1];
            FUN_10ad5dad4(lVar2,*(undefined8 *)(lVar3 + lVar1 + 0x20),
                          *(undefined8 *)(lVar3 + lVar1 + 0x28));
            lStack_70 = lVar2;
            if (lVar2 != 0) {
              FUN_10ad60104(param_1 + 0x31,&lStack_70);
            }
            uVar4 = uVar4 + 1;
            lVar3 = *(long *)(param_2 + 0xe8);
            lVar1 = lVar1 + 0x68;
          } while (uVar4 < (ulong)((*(long *)(param_2 + 0xf0) - lVar3 >> 3) * 0x4ec4ec4ec4ec4ec5));
          lVar1 = param_1[1];
        }
        FUN_10ad5dad4(lVar1,*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_2 + 0x170));
        lStack_70 = lVar1;
        if (lVar1 != 0) {
          FUN_10ad60104(param_1 + 0x31,&lStack_70);
        }
      }
      FUN_10ac04884(&lStack_70,&UNK_10f6a881c);
      *(undefined4 *)(param_1 + 0x1e) = (undefined4)lStack_70;
      param_1[0x1f] = lStack_68;
      *(undefined4 *)(param_1 + 0x20) = uStack_60;
      param_1[0x22] = lStack_50;
      param_1[0x21] = lStack_58;
      *(undefined1 *)(param_1 + 0x23) = uStack_48;
    }
  }
  return;
}



/* Entry: 10ad5ec0c; end: 10ad5ec3f;  */

void FUN_10ad5ec0c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined1 uVar14;
  undefined *puVar15;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  ushort uVar22;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 uStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 *puVar21;
  
  if ((((int)param_1[4] == 0) || (*param_1 == 0)) || (*(int *)((long)param_1 + 0x34) != 1)) {
    return;
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  ppuVar12 = (undefined **)(param_1 + 0x1e);
  ppuVar11 = (undefined **)(param_1 + 0x31);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = ppuVar11;
  if (((*(byte *)((long)param_1 + 0xf1) & 1) == 0) &&
     (*(undefined1 *)((long)param_1 + 0xf1) = 1, unaff_x19 = ppuVar12, *(char *)ppuVar12 == '\x01'))
  {
    *(undefined1 *)ppuVar12 = 0;
    puVar15 = PTR___tlv_bootstrap_11340d750;
    ppuVar16 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar16;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar13 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      __tlv_atexit(0x10a132a8c,ppuVar13,0x100000000);
      (*(code *)puVar15)();
      *(undefined1 *)ppuVar16 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    unaff_x20 = (undefined **)ppuVar12[2];
    if (unaff_x20 != (undefined **)0x0) {
      if (param_1[0x21] != 0) {
        puVar15 = unaff_x20[1];
        if ((((puVar15[0x42] | puVar15[0x43]) & 1) != 0) || (puVar15[0x3f] == '\x01')) {
          uVar8 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          puVar17 = (undefined *)cntvct_el0;
          if (uVar8 != 1000000000) {
            uVar6 = 0;
            if (uVar8 != 0) {
              uVar6 = (ulong)puVar17 / uVar8;
            }
            uVar7 = 0;
            if (uVar8 != 0) {
              uVar7 = (((long)puVar17 - uVar6 * uVar8) * 1000000000) / uVar8;
            }
            puVar17 = (undefined *)(uVar7 + uVar6 * 1000000000);
          }
          if (((puVar15[0x42] | puVar15[0x43]) & 1) != 0) {
            uVar18 = (undefined4)param_1[0x20];
            uVar22 = *(ushort *)((long)param_1 + 0xf2);
            puVar15 = (undefined *)param_1[0x1f];
            puVar20 = (undefined8 *)*ppuVar11;
            puVar2 = (undefined8 *)param_1[0x32];
            if (puVar2 == puVar20) {
              ppuVar12 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar12 != (undefined **)0x0) {
                ppuVar16 = (undefined **)0x0;
                ppuVar11 = ppuVar12;
                goto LAB_10ad5e3a0;
              }
            }
            else {
              uStack_80 = (uint)uVar22;
              puVar19 = unaff_x20[2];
              ppuVar12 = &puStack_78;
              uStack_7c = uVar18;
              puStack_70 = puVar19;
              FUN_10ad605e8();
              *ppuVar12 = (undefined *)0x0;
              ppuVar12[1] = (undefined *)0x0;
              ppuVar12[2] = (undefined *)0x0;
              ppuVar12[4] = puVar19;
              func_0x00010ad60458();
              iVar3 = *(int *)((long)unaff_x20 + 0x34);
              do {
                puVar21 = puVar20 + 1;
                puStack_78 = (undefined *)*puVar20;
                ppuVar13 = &puStack_78;
                if (iVar3 != (int)((ulong)puStack_78 >> 0x20)) {
                  ppuVar13 = (undefined **)&UNK_10e510508;
                }
                func_0x00010ad60504(ppuVar12);
                puVar20 = puVar21;
              } while (puVar21 != puVar2);
              ppuVar11 = unaff_x20;
              FUN_10a1333cc();
              if (ppuVar11 == (undefined **)0x0) {
                puVar17 = unaff_x20[2];
                puVar15 = *ppuVar12;
                if (puVar15 != (undefined *)0x0) {
                  ppuVar12[1] = puVar15;
                  puVar19 = ppuVar12[2];
                  plVar1 = (long *)(ppuVar12[4] + 8);
                  do {
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                    if (bVar5) {
                      *plVar1 = *plVar1 - ((long)puVar19 - (long)puVar15);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  __ZdlPv();
                }
                plVar1 = (long *)(puVar17 + 8);
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                  if (bVar5) {
                    *plVar1 = *plVar1 + -0x28;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                __ZdlPv();
              }
              else {
                uVar22 = (ushort)uStack_80;
                ppuVar16 = ppuVar12;
                uVar18 = uStack_7c;
LAB_10ad5e3a0:
                ppuVar12 = ppuVar11;
                uVar14 = 6;
                if (ppuVar16 != (undefined **)0x0) {
                  uVar14 = 0xe;
                }
                *ppuVar12 = puVar15;
                ppuVar12[1] = (undefined *)ppuVar16;
                ppuVar12[2] = puVar17;
                *(undefined4 *)(ppuVar12 + 3) = uVar18;
                *(ushort *)((long)ppuVar12 + 0x1c) = uVar22;
                *(undefined1 *)((long)ppuVar12 + 0x1e) = uVar14;
                if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10ad5e50c);
                  (*pcVar9)();
                }
                unaff_x20[0x18] = unaff_x20[0x18] + 1;
              }
            }
          }
        }
      }
      if (((unaff_x20[1][0x41] == '\x01') && ((char)param_1[0x23] == '\x01')) &&
         (ppuVar12 = (undefined **)unaff_x20[0xb], ppuVar12 != (undefined **)0x0)) {
        ppuVar13 = (undefined **)param_1[0x22];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5e494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*ppuVar12 + 0x30))();
          return;
        }
        goto LAB_10ad5e50c;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5e50c:
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(int *)(ppuVar12 + 4) != 0) {
    pcStack_88 = FUN_10ad5e514;
    if ((*ppuVar12 != (undefined *)0x0) && (*(int *)((long)ppuVar12 + 0x2c) == 0)) {
      *(undefined4 *)((long)ppuVar12 + 0x2c) = 1;
      ppuStack_a0 = unaff_x20;
      ppuStack_98 = unaff_x19;
      puStack_90 = &stack0xfffffffffffffff0;
      FUN_10ad61728(ppuVar12[2]);
      ppuVar12[0x2c] = ppuVar12[0x2b];
      puVar15 = ppuVar12[1];
      if ((puVar15 != (undefined *)0x0) &&
         (FUN_10ad5dad4(puVar15,ppuVar13[3],ppuVar13[4]), uStack_c0 = puVar15,
         puVar15 != (undefined *)0x0)) {
        FUN_10ad60104(ppuVar12 + 0x2b,&uStack_c0);
      }
      FUN_10ad60210(&uStack_c0);
      *(undefined4 *)(ppuVar12 + 0x14) = (undefined4)uStack_c0;
      *(undefined4 *)((long)ppuVar12 + 0xa4) = uStack_c0._4_4_;
      ppuVar12[0x16] = puStack_b0;
      ppuVar12[0x15] = puStack_b8;
      *(undefined1 *)(ppuVar12 + 0x17) = uStack_a8;
    }
  }
  return;
}



/* Entry: 10ad5ec40; end: 10ad5ef33;  */

void FUN_10ad5ec40(long *param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined1 uVar17;
  undefined2 uVar18;
  undefined8 *puVar19;
  long *plVar20;
  int iVar21;
  ulong uVar22;
  long lStack_48;
  
  if ((((int)param_1[4] != 0) && (*param_1 != 0)) && ((int)param_1[7] == 0)) {
    *(undefined4 *)(param_1 + 7) = 1;
    param_1[0x35] = param_1[0x34];
    lVar9 = param_1[1];
    if (lVar9 != 0) {
      lVar16 = *(long *)(param_2 + 0xe8);
      if (*(long *)(param_2 + 0xf0) != lVar16) {
        lVar9 = 0;
        uVar22 = 0;
        do {
          lVar10 = param_1[1];
          FUN_10ad5dad4(lVar10,*(undefined8 *)(lVar16 + lVar9 + 0x20),
                        *(undefined8 *)(lVar16 + lVar9 + 0x28));
          lStack_48 = lVar10;
          if (lVar10 != 0) {
            FUN_10ad60104(param_1 + 0x34,&lStack_48);
          }
          uVar22 = uVar22 + 1;
          lVar16 = *(long *)(param_2 + 0xe8);
          lVar9 = lVar9 + 0x68;
        } while (uVar22 < (ulong)((*(long *)(param_2 + 0xf0) - lVar16 >> 3) * 0x4ec4ec4ec4ec4ec5));
        lVar9 = param_1[1];
      }
      FUN_10ad5dad4(lVar9,*(undefined8 *)(param_2 + 0x168),*(undefined8 *)(param_2 + 0x170));
      lStack_48 = lVar9;
      if (lVar9 != 0) {
        FUN_10ad60104(param_1 + 0x34,&lStack_48);
      }
    }
    puVar6 = PTR___tlv_bootstrap_11340d750;
    ppuVar15 = &PTR___tlv_bootstrap_11340d750;
    ppuVar11 = ppuVar15;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar12 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar11 & 1) == 0) {
      ppuVar11 = ppuVar12;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
      (*(code *)puVar6)();
      *(undefined1 *)ppuVar15 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    puVar19 = (undefined8 *)ppuVar12[2];
    if (puVar19 == (undefined8 *)0x0) {
      uVar17 = 0;
      uVar18 = 0;
      iVar21 = 0;
      uVar22 = 0;
      plVar14 = (long *)0x0;
      bVar8 = false;
    }
    else {
      cVar1 = *(char *)(puVar19[1] + 0x23);
      ppuVar15 = &PTR___tlv_bootstrap_11340dd08;
      (*(code *)PTR___tlv_bootstrap_11340dd08)();
      iVar21 = *(int *)ppuVar15;
      if (iVar21 == 0) {
        lStack_48 = 0;
        _pthread_threadid_np(0,&lStack_48);
        *(int *)ppuVar15 = (int)lStack_48;
        iVar21 = (int)lStack_48;
      }
      if (cVar1 == '\0') {
        uVar17 = 0;
        uVar22 = 0;
        plVar14 = (long *)0x0;
        bVar8 = false;
        uVar18 = 0x13;
      }
      else {
        lVar9 = puVar19[1];
        bVar5 = *(byte *)(lVar9 + 0x42) | *(byte *)(lVar9 + 0x43);
        if ((((bVar5 & 1) == 0) && ((*(byte *)(lVar9 + 0x40) & 1) == 0)) &&
           (*(char *)(lVar9 + 0x3f) != '\x01')) {
          uVar22 = 0;
        }
        else {
          uVar4 = cntfrq_el0;
          InstructionSynchronizationBarrier();
          uVar22 = cntvct_el0;
          if (uVar4 != 1000000000) {
            uVar2 = 0;
            if (uVar4 != 0) {
              uVar2 = uVar22 / uVar4;
            }
            uVar3 = 0;
            if (uVar4 != 0) {
              uVar3 = ((uVar22 - uVar2 * uVar4) * 1000000000) / uVar4;
            }
            uVar22 = uVar3 + uVar2 * 1000000000;
          }
          if (((bVar5 & 1) != 0) &&
             (puVar13 = puVar19, FUN_10a1333cc(), puVar13 != (undefined8 *)0x0)) {
            *puVar13 = &UNK_10f6a8886;
            puVar13[1] = 0;
            puVar13[2] = uVar22;
            *(int *)(puVar13 + 3) = iVar21;
            *(undefined2 *)((long)puVar13 + 0x1c) = 0x13;
            *(undefined1 *)((long)puVar13 + 0x1e) = 3;
            if ((*(byte *)(puVar19 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad5ef34);
              (*pcVar7)();
            }
            puVar19[0x18] = puVar19[0x18] + 1;
          }
        }
        if (*(char *)(puVar19[1] + 0x41) == '\x01') {
          plVar20 = (long *)puVar19[0xb];
          if (plVar20 == (long *)0x0) {
            plVar14 = (long *)0x0;
          }
          else {
            plVar14 = plVar20;
            (**(code **)(*plVar20 + 0x28))(plVar20,&UNK_10f6a8886);
          }
          bVar8 = plVar20 != (long *)0x0;
        }
        else {
          plVar14 = (long *)0x0;
          bVar8 = false;
        }
        uVar18 = 0x13;
        uVar17 = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x24) = uVar17;
    *(undefined1 *)((long)param_1 + 0x121) = 0;
    *(undefined2 *)((long)param_1 + 0x122) = uVar18;
    *(int *)((long)param_1 + 0x124) = iVar21;
    param_1[0x25] = uVar22;
    param_1[0x26] = (long)plVar14;
    *(bool *)(param_1 + 0x27) = bVar8;
  }
  return;
}



/* Entry: 10ad5ef34; end: 10ad5f28b;  */

void FUN_10ad5ef34(undefined **param_1,undefined **param_2,mach_header *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  dword *pdVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  ushort uVar8;
  char cVar9;
  bool bVar10;
  code *pcVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  undefined **unaff_x19;
  undefined **unaff_x20;
  undefined **unaff_x21;
  undefined **unaff_x22;
  ulong uVar25;
  mach_header *unaff_x23;
  ulong unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined **unaff_x27;
  ulong unaff_x28;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  ulong uStack_c0;
  mach_header *pmStack_b8;
  undefined **ppuStack_b0;
  mach_header *pmStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  uint uStack_7c;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = param_1;
  ppuVar17 = param_2;
  if (((ulong)*param_1 & 0x100) == 0) {
    *(undefined1 *)((long)param_1 + 1) = 1;
    unaff_x19 = param_1;
    if (*(char *)param_1 == '\x01') {
      *(undefined1 *)param_1 = 0;
      unaff_x23 = (mach_header *)PTR___tlv_bootstrap_11340d750;
      unaff_x21 = &PTR___tlv_bootstrap_11340d750;
      ppuVar12 = unaff_x21;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar13 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar12 & 1) == 0) {
        ppuVar17 = ppuVar13;
        (*(code *)PTR___tlv_bootstrap_11340d738)();
        UNRECOVERED_JUMPTABLE = &MACH_HEADER;
        __tlv_atexit(0x10a132a8c);
        ppuVar12 = unaff_x21;
        (*(code *)unaff_x23)();
        *(undefined1 *)ppuVar12 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      unaff_x20 = (undefined **)ppuVar13[2];
      unaff_x22 = param_2;
      if (unaff_x20 != (undefined **)0x0) {
        if (param_1[1] != (undefined *)0x0) {
          puVar20 = unaff_x20[1];
          if (((((puVar20[0x42] | puVar20[0x43]) & 1) != 0) || ((puVar20[0x40] & 1) != 0)) ||
             (puVar20[0x3f] == '\x01')) {
            uVar25 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            unaff_x21 = (undefined **)cntvct_el0;
            if (uVar25 != 1000000000) {
              uVar18 = 0;
              if (uVar25 != 0) {
                uVar18 = (ulong)unaff_x21 / uVar25;
              }
              uVar24 = 0;
              if (uVar25 != 0) {
                uVar24 = (((long)unaff_x21 - uVar18 * uVar25) * 1000000000) / uVar25;
              }
              unaff_x21 = (undefined **)(uVar24 + uVar18 * 1000000000);
            }
            if (((puVar20[0x42] | puVar20[0x43]) & 1) != 0) {
              unaff_x23 = (mach_header *)(ulong)*(uint *)((long)param_1 + 4);
              uVar8 = *(ushort *)((long)param_1 + 2);
              unaff_x24 = (ulong)uVar8;
              unaff_x25 = (undefined8 *)*param_2;
              unaff_x26 = (undefined8 *)param_2[1];
              ppuVar13 = unaff_x20;
              if (unaff_x26 == unaff_x25) {
                FUN_10a1333cc();
                unaff_x28 = 0;
                if (ppuVar13 != (undefined **)0x0) {
                  param_2 = (undefined **)0x0;
                  goto LAB_10ad5f0c0;
                }
              }
              else {
                puVar20 = unaff_x20[2];
                unaff_x27 = &puStack_78;
                param_2 = &puStack_78;
                uStack_7c = *(uint *)((long)param_1 + 4);
                puStack_70 = puVar20;
                FUN_10ad605e8();
                *param_2 = (undefined *)0x0;
                param_2[1] = (undefined *)0x0;
                param_2[2] = (undefined *)0x0;
                param_2[4] = puVar20;
                func_0x00010ad60458();
                uVar7 = *(uint *)((long)unaff_x20 + 0x34);
                unaff_x28 = (ulong)uVar7;
                puVar19 = unaff_x25;
                do {
                  unaff_x25 = puVar19 + 1;
                  puStack_78 = (undefined *)*puVar19;
                  ppuVar17 = unaff_x27;
                  if (uVar7 != (uint)((ulong)puStack_78 >> 0x20)) {
                    ppuVar17 = (undefined **)&UNK_10e510508;
                  }
                  func_0x00010ad60504(param_2);
                  puVar19 = unaff_x25;
                } while (unaff_x25 != unaff_x26);
                FUN_10a1333cc();
                if (ppuVar13 == (undefined **)0x0) {
                  unaff_x23 = (mach_header *)unaff_x20[2];
                  puVar20 = *param_2;
                  if (puVar20 != (undefined *)0x0) {
                    param_2[1] = puVar20;
                    puVar16 = param_2[2];
                    plVar1 = (long *)(param_2[4] + 8);
                    do {
                      cVar9 = '\x01';
                      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                      if (bVar10) {
                        *plVar1 = *plVar1 - ((long)puVar16 - (long)puVar20);
                        cVar9 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar9 != '\0');
                    __ZdlPv();
                  }
                  pdVar2 = &unaff_x23->cpusubtype;
                  do {
                    cVar9 = '\x01';
                    bVar10 = (bool)ExclusiveMonitorPass(pdVar2,0x10);
                    if (bVar10) {
                      *(long *)pdVar2 = *(long *)pdVar2 + -0x28;
                      cVar9 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar9 != '\0');
                  ppuVar13 = param_2;
                  __ZdlPv();
                }
                else {
                  unaff_x23 = (mach_header *)(ulong)uStack_7c;
LAB_10ad5f0c0:
                  uVar21 = 6;
                  if (param_2 != (undefined **)0x0) {
                    uVar21 = 0xe;
                  }
                  *ppuVar13 = &UNK_10f6a8886;
                  ppuVar13[1] = (undefined *)param_2;
                  ppuVar13[2] = (undefined *)unaff_x21;
                  *(int *)(ppuVar13 + 3) = (int)unaff_x23;
                  *(ushort *)((long)ppuVar13 + 0x1c) = uVar8;
                  *(undefined1 *)((long)ppuVar13 + 0x1e) = uVar21;
                  if (((ulong)unaff_x20[0x38] & 1) == 0) {
                    /* WARNING: Does not return */
                    pcVar11 = (code *)SoftwareBreakpoint(1,0x10ad5f27c);
                    (*pcVar11)();
                  }
                  unaff_x20[0x18] = unaff_x20[0x18] + 1;
                }
              }
            }
            if (unaff_x20[1][0x40] == '\x01') {
              unaff_x23 = (mach_header *)param_1[1];
              unaff_x24 = (long)unaff_x21 - (long)unaff_x23;
              if (unaff_x23 <= unaff_x21) {
                param_2 = (undefined **)*unaff_x20;
                __ZNSt3__15mutex4lockEv(param_2 + 0x50);
                ppuVar17 = param_2 + 0x50;
                UNRECOVERED_JUMPTABLE = unaff_x23;
                FUN_10a15387c((double)unaff_x24,param_2,ppuVar17,unaff_x23,unaff_x21);
                ppuVar13 = param_2 + 0x50;
                __ZNSt3__15mutex6unlockEv();
              }
            }
          }
        }
        unaff_x22 = param_2;
        if (((unaff_x20[1][0x41] == '\x01') && (*(char *)(param_1 + 3) == '\x01')) &&
           (ppuVar13 = (undefined **)unaff_x20[0xb], ppuVar13 != (undefined **)0x0)) {
          ppuVar17 = (undefined **)param_1[2];
          UNRECOVERED_JUMPTABLE = *(mach_header **)(*ppuVar13 + 0x30);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5f204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)UNRECOVERED_JUMPTABLE)();
            return;
          }
          goto LAB_10ad5f27c;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
LAB_10ad5f27c:
  ___stack_chk_fail();
  if ((int)ppuVar17 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  pcStack_88 = FUN_10ad5f28c;
  if (((*(int *)(ppuVar13 + 4) != 0) && (*ppuVar13 != (undefined *)0x0)) &&
     ((ppuVar13[1] != (undefined *)0x0 && (*(int *)(ppuVar13 + 7) == 1)))) {
    puVar20 = *(undefined **)UNRECOVERED_JUMPTABLE;
    puVar15 = *(undefined **)&UNRECOVERED_JUMPTABLE->cpusubtype;
    puVar16 = *(undefined **)&UNRECOVERED_JUMPTABLE->flags;
    puVar5 = *(undefined **)(UNRECOVERED_JUMPTABLE + 1);
    lVar3 = *(long *)&UNRECOVERED_JUMPTABLE[1].ncmds;
    lVar6 = *(long *)&UNRECOVERED_JUMPTABLE[1].flags;
    lVar22 = *(long *)&UNRECOVERED_JUMPTABLE[2].ncmds;
    lVar23 = *(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype;
    uStack_e0 = unaff_x28;
    ppuStack_d8 = unaff_x27;
    puStack_d0 = unaff_x26;
    puStack_c8 = unaff_x25;
    uStack_c0 = unaff_x24;
    pmStack_b8 = unaff_x23;
    ppuStack_b0 = unaff_x22;
    pmStack_a8 = (mach_header *)unaff_x21;
    ppuStack_a0 = unaff_x20;
    ppuStack_98 = unaff_x19;
    puStack_90 = &stack0xfffffffffffffff0;
    if (puVar15 != puVar20) {
      uVar25 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE->cpusubtype -
                   (long)*(undefined **)UNRECOVERED_JUMPTABLE) <= uVar25) goto LAB_10ad5f50c;
        uVar18 = (ulong)(byte)(*(undefined **)UNRECOVERED_JUMPTABLE)[uVar25];
        puVar4 = ppuVar17[0x24];
        uVar24 = ((long)ppuVar17[0x25] - (long)puVar4 >> 4) * -0x30c30c30c30c30c3;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar14 = ppuVar13[1];
        FUN_10ad5dad4(puVar14,*(undefined8 *)(puVar4 + uVar18 * 0x150 + 0x58),
                      *(undefined8 *)(puVar4 + uVar18 * 0x150 + 0x60));
        puStack_e8 = puVar14;
        if (puVar14 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar25 = uVar25 + 1;
      } while ((long)puVar15 - (long)puVar20 != uVar25);
    }
    if (puVar5 != puVar16) {
      uVar25 = 0;
      do {
        if ((ulong)((long)*(undefined **)(UNRECOVERED_JUMPTABLE + 1) -
                   *(long *)&UNRECOVERED_JUMPTABLE->flags) <= uVar25) goto LAB_10ad5f50c;
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE->flags + uVar25);
        puVar20 = ppuVar17[0x27];
        uVar24 = ((long)ppuVar17[0x28] - (long)puVar20 >> 3) * -0x7063e7063e7063e7;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar15 = ppuVar13[1];
        FUN_10ad5dad4(puVar15,*(undefined8 *)(puVar20 + uVar18 * 0x148 + 0x138),
                      *(undefined8 *)(puVar20 + uVar18 * 0x148 + 0x140));
        puStack_e8 = puVar15;
        if (puVar15 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar25 = uVar25 + 1;
      } while ((long)puVar5 - (long)puVar16 != uVar25);
    }
    if (lVar6 != lVar3) {
      uVar25 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE[1].flags -
                   *(long *)&UNRECOVERED_JUMPTABLE[1].ncmds) <= uVar25) goto LAB_10ad5f50c;
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE[1].ncmds + uVar25);
        puVar20 = ppuVar17[0x2a];
        uVar24 = ((long)ppuVar17[0x2b] - (long)puVar20 >> 3) * -0xf0f0f0f0f0f0f0f;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar16 = ppuVar13[1];
        FUN_10ad5dad4(puVar16,*(undefined8 *)(puVar20 + uVar18 * 0x88 + 0x78),
                      *(undefined8 *)(puVar20 + uVar18 * 0x88 + 0x80));
        puStack_e8 = puVar16;
        if (puVar16 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar25 = uVar25 + 1;
      } while (lVar6 - lVar3 != uVar25);
    }
    if (lVar22 != lVar23) {
      uVar25 = 0;
      do {
        if ((ulong)(*(long *)&UNRECOVERED_JUMPTABLE[2].ncmds -
                   *(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype) <= uVar25) {
LAB_10ad5f50c:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10ad5f510);
          (*pcVar11)();
        }
        uVar18 = (ulong)*(byte *)(*(long *)&UNRECOVERED_JUMPTABLE[2].cpusubtype + uVar25);
        uVar24 = ((long)ppuVar17[0x2e] - (long)ppuVar17[0x2d] >> 4) * -0x5555555555555555;
        if (uVar24 < uVar18 || uVar24 - uVar18 == 0) goto LAB_10ad5f50c;
        puVar19 = (undefined8 *)(ppuVar17[0x2d] + uVar18 * 0x30);
        puVar20 = ppuVar13[1];
        FUN_10ad5dad4(puVar20,*puVar19,puVar19[1]);
        puStack_e8 = puVar20;
        if (puVar20 != (undefined *)0x0) {
          FUN_10ad60104(ppuVar13 + 0x34,&puStack_e8);
        }
        uVar25 = uVar25 + 1;
      } while (lVar22 - lVar23 != uVar25);
    }
  }
  return;
}



/* Entry: 10ad5f28c; end: 10ad5f50f;  */

void FUN_10ad5f28c(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_68;
  
  if (((((int)param_1[4] != 0) && (*param_1 != 0)) && (param_1[1] != 0)) && ((int)param_1[7] == 1))
  {
    lVar6 = *param_3;
    lVar9 = param_3[1];
    lVar10 = param_3[3];
    lVar2 = param_3[4];
    lVar1 = param_3[6];
    lVar3 = param_3[7];
    lVar12 = param_3[10];
    lVar13 = param_3[9];
    if (lVar9 != lVar6) {
      uVar15 = 0;
      do {
        if ((ulong)(param_3[1] - *param_3) <= uVar15) goto LAB_10ad5f50c;
        uVar7 = (ulong)*(byte *)(*param_3 + uVar15);
        uVar14 = (*(long *)(param_2 + 0x128) - *(long *)(param_2 + 0x120) >> 4) *
                 -0x30c30c30c30c30c3;
        if (uVar14 < uVar7 || uVar14 - uVar7 == 0) goto LAB_10ad5f50c;
        lVar8 = *(long *)(param_2 + 0x120) + uVar7 * 0x150;
        lVar5 = param_1[1];
        FUN_10ad5dad4(lVar5,*(undefined8 *)(lVar8 + 0x58),*(undefined8 *)(lVar8 + 0x60));
        lStack_68 = lVar5;
        if (lVar5 != 0) {
          FUN_10ad60104(param_1 + 0x34,&lStack_68);
        }
        uVar15 = uVar15 + 1;
      } while (lVar9 - lVar6 != uVar15);
    }
    if (lVar2 != lVar10) {
      uVar15 = 0;
      do {
        if ((ulong)(param_3[4] - param_3[3]) <= uVar15) goto LAB_10ad5f50c;
        uVar7 = (ulong)*(byte *)(param_3[3] + uVar15);
        uVar14 = (*(long *)(param_2 + 0x140) - *(long *)(param_2 + 0x138) >> 3) *
                 -0x7063e7063e7063e7;
        if (uVar14 < uVar7 || uVar14 - uVar7 == 0) goto LAB_10ad5f50c;
        lVar9 = *(long *)(param_2 + 0x138) + uVar7 * 0x148;
        lVar6 = param_1[1];
        FUN_10ad5dad4(lVar6,*(undefined8 *)(lVar9 + 0x138),*(undefined8 *)(lVar9 + 0x140));
        lStack_68 = lVar6;
        if (lVar6 != 0) {
          FUN_10ad60104(param_1 + 0x34,&lStack_68);
        }
        uVar15 = uVar15 + 1;
      } while (lVar2 - lVar10 != uVar15);
    }
    if (lVar3 != lVar1) {
      uVar15 = 0;
      do {
        if ((ulong)(param_3[7] - param_3[6]) <= uVar15) goto LAB_10ad5f50c;
        uVar7 = (ulong)*(byte *)(param_3[6] + uVar15);
        uVar14 = (*(long *)(param_2 + 0x158) - *(long *)(param_2 + 0x150) >> 3) * -0xf0f0f0f0f0f0f0f
        ;
        if (uVar14 < uVar7 || uVar14 - uVar7 == 0) goto LAB_10ad5f50c;
        lVar10 = *(long *)(param_2 + 0x150) + uVar7 * 0x88;
        lVar6 = param_1[1];
        FUN_10ad5dad4(lVar6,*(undefined8 *)(lVar10 + 0x78),*(undefined8 *)(lVar10 + 0x80));
        lStack_68 = lVar6;
        if (lVar6 != 0) {
          FUN_10ad60104(param_1 + 0x34,&lStack_68);
        }
        uVar15 = uVar15 + 1;
      } while (lVar3 - lVar1 != uVar15);
    }
    if (lVar12 != lVar13) {
      uVar15 = 0;
      do {
        if ((ulong)(param_3[10] - param_3[9]) <= uVar15) {
LAB_10ad5f50c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad5f510);
          (*pcVar4)();
        }
        uVar7 = (ulong)*(byte *)(param_3[9] + uVar15);
        uVar14 = (*(long *)(param_2 + 0x170) - *(long *)(param_2 + 0x168) >> 4) *
                 -0x5555555555555555;
        if (uVar14 < uVar7 || uVar14 - uVar7 == 0) goto LAB_10ad5f50c;
        puVar11 = (undefined8 *)(*(long *)(param_2 + 0x168) + uVar7 * 0x30);
        lVar6 = param_1[1];
        FUN_10ad5dad4(lVar6,*puVar11,puVar11[1]);
        lStack_68 = lVar6;
        if (lVar6 != 0) {
          FUN_10ad60104(param_1 + 0x34,&lStack_68);
        }
        uVar15 = uVar15 + 1;
      } while (lVar12 - lVar13 != uVar15);
    }
  }
  return;
}



/* Entry: 10ad5f510; end: 10ad5f56f;  */

void FUN_10ad5f510(long *param_1)

{
  long lVar1;
  long lStack_28;
  
  if (((((int)param_1[4] != 0) && (*param_1 != 0)) && (lVar1 = param_1[1], lVar1 != 0)) &&
     (((int)param_1[7] == 1 && (FUN_10ad5dad4(), lVar1 != 0)))) {
    lStack_28 = lVar1;
    FUN_10ad60104(param_1 + 0x34,&lStack_28);
  }
  return;
}



/* Entry: 10ad5f570; end: 10ad5f677;  */

void FUN_10ad5f570(undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uStack_20;
  undefined1 uStack_11;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (param_2 == 0) {
      iVar3 = piVar1[1];
      iVar2 = *piVar1 + 1;
      *piVar1 = iVar2;
    }
    else {
      iVar2 = *piVar1;
      iVar3 = piVar1[1] + 1;
      piVar1[1] = iVar3;
    }
    uStack_20 = (ulong)(uint)(iVar3 + iVar2);
    FUN_10ad5f678(&uStack_11,&uStack_20);
  }
  return;
}



/* Entry: 10ad5f678; end: 10ad5f72f;  */

void FUN_10ad5f678(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR___tlv_bootstrap_11340d750;
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar4)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar8 = (long *)ppuVar7[2];
  if ((plVar8 == (long *)0x0) || (*(char *)(plVar8[1] + 0x23) != '\x01')) {
    return;
  }
  lVar11 = *param_2;
  if (plVar8 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar13 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar13 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar13 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar13 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(plVar8[1] + 0x42) | *(byte *)(plVar8[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(plVar8,0x90c70f19,&DAT_10f6a882d);
      plVar10 = plVar8;
      FUN_10a1333cc();
      if (plVar10 != (long *)0x0) {
        plVar10[1] = lVar11;
        plVar10[2] = uVar13;
        *(undefined4 *)(plVar10 + 3) = 0x90c70f19;
        *(undefined4 *)((long)plVar10 + 0x1c) = 0x2090013;
        *plVar10 = (long)&DAT_10f6a882d;
        if ((*(byte *)(plVar8 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad5f890);
          (*pcVar5)();
        }
        plVar8[0x18] = plVar8[0x18] + 1;
      }
    }
    lVar12 = plVar8[1];
    if (*(char *)(lVar12 + 0x40) == '\x01') {
      lVar12 = *plVar8;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x1580);
      FUN_10a15387c((double)lVar11,lVar12,lVar12 + 0x1580,uVar13,uVar13);
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x1580);
      lVar12 = plVar8[1];
    }
    if ((*(char *)(lVar12 + 0x41) == '\x01') &&
       (plVar8 = (long *)plVar8[0xb], plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_10f6a882d,lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10ad5f730; end: 10ad5f893;  */

void FUN_10ad5f730(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar7 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar7 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar7 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(param_1[1] + 0x42) | *(byte *)(param_1[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(param_1,0x90c70f19,&DAT_10f6a882d);
      plVar5 = param_1;
      FUN_10a1333cc();
      if (plVar5 != (long *)0x0) {
        plVar5[1] = param_2;
        plVar5[2] = uVar7;
        *(undefined4 *)(plVar5 + 3) = 0x90c70f19;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0x2090013;
        *plVar5 = (long)&DAT_10f6a882d;
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad5f890);
          (*pcVar4)();
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      lVar6 = *param_1;
      __ZNSt3__15mutex4lockEv(lVar6 + 0x1580);
      FUN_10a15387c((double)param_2,lVar6,lVar6 + 0x1580,uVar7,uVar7);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x1580);
      lVar6 = param_1[1];
    }
    if ((*(char *)(lVar6 + 0x41) == '\x01') &&
       (plVar5 = (long *)param_1[0xb], plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5f874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_10f6a882d,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ad5f894; end: 10ad5f94b;  */

void FUN_10ad5f894(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR___tlv_bootstrap_11340d750;
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar4)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar8 = (long *)ppuVar7[2];
  if ((plVar8 == (long *)0x0) || (*(char *)(plVar8[1] + 0x23) != '\x01')) {
    return;
  }
  lVar11 = *param_2;
  if (plVar8 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar13 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar13 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar13 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar13 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(plVar8[1] + 0x42) | *(byte *)(plVar8[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(plVar8,0x90c70f29,&DAT_10f6a8839);
      plVar10 = plVar8;
      FUN_10a1333cc();
      if (plVar10 != (long *)0x0) {
        plVar10[1] = lVar11;
        plVar10[2] = uVar13;
        *(undefined4 *)(plVar10 + 3) = 0x90c70f29;
        *(undefined4 *)((long)plVar10 + 0x1c) = 0x2090013;
        *plVar10 = (long)&DAT_10f6a8839;
        if ((*(byte *)(plVar8 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad5faac);
          (*pcVar5)();
        }
        plVar8[0x18] = plVar8[0x18] + 1;
      }
    }
    lVar12 = plVar8[1];
    if (*(char *)(lVar12 + 0x40) == '\x01') {
      lVar12 = *plVar8;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x1500);
      FUN_10a15387c((double)lVar11,lVar12,lVar12 + 0x1500,uVar13,uVar13);
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x1500);
      lVar12 = plVar8[1];
    }
    if ((*(char *)(lVar12 + 0x41) == '\x01') &&
       (plVar8 = (long *)plVar8[0xb], plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_10f6a8839,lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10ad5f94c; end: 10ad5faaf;  */

void FUN_10ad5f94c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar7 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar7 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar7 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(param_1[1] + 0x42) | *(byte *)(param_1[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(param_1,0x90c70f29,&DAT_10f6a8839);
      plVar5 = param_1;
      FUN_10a1333cc();
      if (plVar5 != (long *)0x0) {
        plVar5[1] = param_2;
        plVar5[2] = uVar7;
        *(undefined4 *)(plVar5 + 3) = 0x90c70f29;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0x2090013;
        *plVar5 = (long)&DAT_10f6a8839;
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad5faac);
          (*pcVar4)();
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      lVar6 = *param_1;
      __ZNSt3__15mutex4lockEv(lVar6 + 0x1500);
      FUN_10a15387c((double)param_2,lVar6,lVar6 + 0x1500,uVar7,uVar7);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x1500);
      lVar6 = param_1[1];
    }
    if ((*(char *)(lVar6 + 0x41) == '\x01') &&
       (plVar5 = (long *)param_1[0xb], plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_10f6a8839,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ad5fab0; end: 10ad5fb67;  */

void FUN_10ad5fab0(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR___tlv_bootstrap_11340d750;
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar4)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar8 = (long *)ppuVar7[2];
  if ((plVar8 == (long *)0x0) || (*(char *)(plVar8[1] + 0x23) != '\x01')) {
    return;
  }
  lVar11 = *param_2;
  if (plVar8 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar13 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar13 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar13 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar13 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(plVar8[1] + 0x42) | *(byte *)(plVar8[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(plVar8,0x90c70f39,&DAT_10f6a8846);
      plVar10 = plVar8;
      FUN_10a1333cc();
      if (plVar10 != (long *)0x0) {
        plVar10[1] = lVar11;
        plVar10[2] = uVar13;
        *(undefined4 *)(plVar10 + 3) = 0x90c70f39;
        *(undefined4 *)((long)plVar10 + 0x1c) = 0x2090013;
        *plVar10 = (long)&DAT_10f6a8846;
        if ((*(byte *)(plVar8 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad5fcc8);
          (*pcVar5)();
        }
        plVar8[0x18] = plVar8[0x18] + 1;
      }
    }
    lVar12 = plVar8[1];
    if (*(char *)(lVar12 + 0x40) == '\x01') {
      lVar12 = *plVar8;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x1680);
      FUN_10a15387c((double)lVar11,lVar12,lVar12 + 0x1680,uVar13,uVar13);
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x1680);
      lVar12 = plVar8[1];
    }
    if ((*(char *)(lVar12 + 0x41) == '\x01') &&
       (plVar8 = (long *)plVar8[0xb], plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_10f6a8846,lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10ad5fb68; end: 10ad5fccb;  */

void FUN_10ad5fb68(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar7 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar7 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar7 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(param_1[1] + 0x42) | *(byte *)(param_1[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(param_1,0x90c70f39,&DAT_10f6a8846);
      plVar5 = param_1;
      FUN_10a1333cc();
      if (plVar5 != (long *)0x0) {
        plVar5[1] = param_2;
        plVar5[2] = uVar7;
        *(undefined4 *)(plVar5 + 3) = 0x90c70f39;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0x2090013;
        *plVar5 = (long)&DAT_10f6a8846;
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad5fcc8);
          (*pcVar4)();
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      lVar6 = *param_1;
      __ZNSt3__15mutex4lockEv(lVar6 + 0x1680);
      FUN_10a15387c((double)param_2,lVar6,lVar6 + 0x1680,uVar7,uVar7);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x1680);
      lVar6 = param_1[1];
    }
    if ((*(char *)(lVar6 + 0x41) == '\x01') &&
       (plVar5 = (long *)param_1[0xb], plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_10f6a8846,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ad5fccc; end: 10ad5fd83;  */

void FUN_10ad5fccc(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR___tlv_bootstrap_11340d750;
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar4)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar8 = (long *)ppuVar7[2];
  if ((plVar8 == (long *)0x0) || (*(char *)(plVar8[1] + 0x23) != '\x01')) {
    return;
  }
  lVar11 = *param_2;
  if (plVar8 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar13 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar13 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar13 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar13 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(plVar8[1] + 0x42) | *(byte *)(plVar8[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(plVar8,0x90c70f49,&DAT_10f6a8854);
      plVar10 = plVar8;
      FUN_10a1333cc();
      if (plVar10 != (long *)0x0) {
        plVar10[1] = lVar11;
        plVar10[2] = uVar13;
        *(undefined4 *)(plVar10 + 3) = 0x90c70f49;
        *(undefined4 *)((long)plVar10 + 0x1c) = 0x2090013;
        *plVar10 = (long)&DAT_10f6a8854;
        if ((*(byte *)(plVar8 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad5fee4);
          (*pcVar5)();
        }
        plVar8[0x18] = plVar8[0x18] + 1;
      }
    }
    lVar12 = plVar8[1];
    if (*(char *)(lVar12 + 0x40) == '\x01') {
      lVar12 = *plVar8;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x1700);
      FUN_10a15387c((double)lVar11,lVar12,lVar12 + 0x1700,uVar13,uVar13);
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x1700);
      lVar12 = plVar8[1];
    }
    if ((*(char *)(lVar12 + 0x41) == '\x01') &&
       (plVar8 = (long *)plVar8[0xb], plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_10f6a8854,lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10ad5fd84; end: 10ad5fee7;  */

void FUN_10ad5fd84(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar7 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar7 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar7 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(param_1[1] + 0x42) | *(byte *)(param_1[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(param_1,0x90c70f49,&DAT_10f6a8854);
      plVar5 = param_1;
      FUN_10a1333cc();
      if (plVar5 != (long *)0x0) {
        plVar5[1] = param_2;
        plVar5[2] = uVar7;
        *(undefined4 *)(plVar5 + 3) = 0x90c70f49;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0x2090013;
        *plVar5 = (long)&DAT_10f6a8854;
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad5fee4);
          (*pcVar4)();
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      lVar6 = *param_1;
      __ZNSt3__15mutex4lockEv(lVar6 + 0x1700);
      FUN_10a15387c((double)param_2,lVar6,lVar6 + 0x1700,uVar7,uVar7);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x1700);
      lVar6 = param_1[1];
    }
    if ((*(char *)(lVar6 + 0x41) == '\x01') &&
       (plVar5 = (long *)param_1[0xb], plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad5fec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_10f6a8854,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ad5fee8; end: 10ad5ff9f;  */

void FUN_10ad5fee8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined **ppuVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  puVar4 = PTR___tlv_bootstrap_11340d750;
  ppuVar9 = &PTR___tlv_bootstrap_11340d750;
  ppuVar6 = ppuVar9;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar7 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar6 & 1) == 0) {
    ppuVar6 = ppuVar7;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar6,0x100000000);
    (*(code *)puVar4)();
    *(undefined1 *)ppuVar9 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  plVar8 = (long *)ppuVar7[2];
  if ((plVar8 == (long *)0x0) || (*(char *)(plVar8[1] + 0x23) != '\x01')) {
    return;
  }
  lVar11 = *param_2;
  if (plVar8 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar13 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar13 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar13 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar13 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(plVar8[1] + 0x42) | *(byte *)(plVar8[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(plVar8,0x90c70f59,&DAT_10f6a8863);
      plVar10 = plVar8;
      FUN_10a1333cc();
      if (plVar10 != (long *)0x0) {
        plVar10[1] = lVar11;
        plVar10[2] = uVar13;
        *(undefined4 *)(plVar10 + 3) = 0x90c70f59;
        *(undefined4 *)((long)plVar10 + 0x1c) = 0x2090013;
        *plVar10 = (long)&DAT_10f6a8863;
        if ((*(byte *)(plVar8 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10ad60100);
          (*pcVar5)();
        }
        plVar8[0x18] = plVar8[0x18] + 1;
      }
    }
    lVar12 = plVar8[1];
    if (*(char *)(lVar12 + 0x40) == '\x01') {
      lVar12 = *plVar8;
      __ZNSt3__15mutex4lockEv(lVar12 + 0x1780);
      FUN_10a15387c((double)lVar11,lVar12,lVar12 + 0x1780,uVar13,uVar13);
      __ZNSt3__15mutex6unlockEv(lVar12 + 0x1780);
      lVar12 = plVar8[1];
    }
    if ((*(char *)(lVar12 + 0x41) == '\x01') &&
       (plVar8 = (long *)plVar8[0xb], plVar8 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad600e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x20))(plVar8,&DAT_10f6a8863,lVar11);
      return;
    }
  }
  return;
}



/* Entry: 10ad5ffa0; end: 10ad60103;  */

void FUN_10ad5ffa0(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_1 != (long *)0x0) {
    uVar3 = cntfrq_el0;
    InstructionSynchronizationBarrier();
    uVar7 = cntvct_el0;
    if (uVar3 != 1000000000) {
      uVar1 = 0;
      if (uVar3 != 0) {
        uVar1 = uVar7 / uVar3;
      }
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = ((uVar7 - uVar1 * uVar3) * 1000000000) / uVar3;
      }
      uVar7 = uVar2 + uVar1 * 1000000000;
    }
    if (((*(byte *)(param_1[1] + 0x42) | *(byte *)(param_1[1] + 0x43)) & 1) != 0) {
      FUN_10a192960(param_1,0x90c70f59,&DAT_10f6a8863);
      plVar5 = param_1;
      FUN_10a1333cc();
      if (plVar5 != (long *)0x0) {
        plVar5[1] = param_2;
        plVar5[2] = uVar7;
        *(undefined4 *)(plVar5 + 3) = 0x90c70f59;
        *(undefined4 *)((long)plVar5 + 0x1c) = 0x2090013;
        *plVar5 = (long)&DAT_10f6a8863;
        if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad60100);
          (*pcVar4)();
        }
        param_1[0x18] = param_1[0x18] + 1;
      }
    }
    lVar6 = param_1[1];
    if (*(char *)(lVar6 + 0x40) == '\x01') {
      lVar6 = *param_1;
      __ZNSt3__15mutex4lockEv(lVar6 + 0x1780);
      FUN_10a15387c((double)param_2,lVar6,lVar6 + 0x1780,uVar7,uVar7);
      __ZNSt3__15mutex6unlockEv(lVar6 + 0x1780);
      lVar6 = param_1[1];
    }
    if ((*(char *)(lVar6 + 0x41) == '\x01') &&
       (plVar5 = (long *)param_1[0xb], plVar5 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad600e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x20))(plVar5,&DAT_10f6a8863,param_2);
      return;
    }
  }
  return;
}



/* Entry: 10ad60104; end: 10ad601c7;  */

undefined1  [16] FUN_10ad60104(long *param_1,undefined **param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  byte *extraout_x8;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_a8;
  
  puVar14 = (undefined8 *)param_1[1];
  if (puVar14 < (undefined8 *)param_1[2]) {
    puVar13 = puVar14 + 1;
    *puVar14 = *param_2;
    plVar8 = param_1;
    ppuVar11 = param_2;
  }
  else {
    lVar19 = (long)puVar14 - *param_1;
    uVar1 = (lVar19 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10ad601c8();
      FUN_109ffde64(&UNK_10f6a8826);
      if ((ulong)param_2 >> 0x3d == 0) {
        lVar19 = (long)param_2 << 3;
        __Znwm(lVar19);
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = lVar19;
        return auVar21;
      }
      func_0x000109ffded8();
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar9 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar10 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar9 & 1) == 0) {
        param_2 = ppuVar10;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,param_2,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      puVar14 = (undefined8 *)ppuVar10[2];
      if (puVar14 != (undefined8 *)0x0) {
        bVar3 = *(byte *)(puVar14[1] + 0x23);
        puVar13 = (undefined8 *)(ulong)bVar3;
        *extraout_x8 = bVar3;
        extraout_x8[1] = 0;
        extraout_x8[2] = 0x13;
        extraout_x8[3] = 0;
        ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
        (*(code *)PTR___tlv_bootstrap_11340dd08)();
        iVar16 = *(int *)ppuVar11;
        if (*(int *)ppuVar11 == 0) {
          uStack_a8 = 0;
          puVar13 = &uStack_a8;
          _pthread_threadid_np(0,puVar13);
          *(int *)ppuVar11 = (int)uStack_a8;
          iVar16 = (int)uStack_a8;
        }
        *(ulong *)(extraout_x8 + 8) = 0;
        *(int *)(extraout_x8 + 4) = iVar16;
        extraout_x8[0x10] = 0;
        extraout_x8[0x11] = 0;
        extraout_x8[0x12] = 0;
        extraout_x8[0x13] = 0;
        extraout_x8[0x14] = 0;
        extraout_x8[0x15] = 0;
        extraout_x8[0x16] = 0;
        extraout_x8[0x17] = 0;
        extraout_x8[0x18] = 0;
        if ((bVar3 != 0) && (puVar14 != (undefined8 *)0x0)) {
          lVar19 = puVar14[1];
          bVar3 = *(byte *)(lVar19 + 0x42) | *(byte *)(lVar19 + 0x43);
          if (((bVar3 & 1) != 0) ||
             (((*(byte *)(lVar19 + 0x40) & 1) != 0 || (*(char *)(lVar19 + 0x3f) == '\x01')))) {
            uVar1 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar17 = cntvct_el0;
            if (uVar1 != 1000000000) {
              uVar15 = 0;
              if (uVar1 != 0) {
                uVar15 = uVar17 / uVar1;
              }
              uVar5 = 0;
              if (uVar1 != 0) {
                uVar5 = ((uVar17 - uVar15 * uVar1) * 1000000000) / uVar1;
              }
              uVar17 = uVar5 + uVar15 * 1000000000;
            }
            *(ulong *)(extraout_x8 + 8) = uVar17;
            if ((bVar3 & 1) != 0) {
              uVar2 = *(undefined4 *)(extraout_x8 + 4);
              uVar4 = *(undefined2 *)(extraout_x8 + 2);
              puVar12 = puVar14;
              FUN_10a1333cc();
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = &UNK_10f6a887b;
                puVar12[1] = 0;
                puVar12[2] = uVar17;
                *(undefined4 *)(puVar12 + 3) = uVar2;
                *(undefined2 *)((long)puVar12 + 0x1c) = uVar4;
                *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad60458);
                  (*pcVar7)();
                }
                puVar14[0x18] = puVar14[0x18] + 1;
              }
            }
          }
          if (*(char *)(puVar14[1] + 0x41) == '\x01') {
            plVar18 = (long *)puVar14[0xb];
            if (plVar18 != (long *)0x0) {
              puVar13 = (undefined8 *)&UNK_10f6a887b;
              plVar8 = plVar18;
              (**(code **)(*plVar18 + 0x28))(plVar18,&UNK_10f6a887b);
              *(long **)(extraout_x8 + 0x10) = plVar8;
            }
            extraout_x8[0x18] = plVar18 != (long *)0x0;
          }
        }
        auVar23._8_8_ = puVar13;
        auVar23._0_8_ = extraout_x8;
        return auVar23;
      }
      extraout_x8[8] = 0;
      extraout_x8[9] = 0;
      extraout_x8[10] = 0;
      extraout_x8[0xb] = 0;
      extraout_x8[0xc] = 0;
      extraout_x8[0xd] = 0;
      extraout_x8[0xe] = 0;
      extraout_x8[0xf] = 0;
      extraout_x8[0] = 0;
      extraout_x8[1] = 0;
      extraout_x8[2] = 0;
      extraout_x8[3] = 0;
      extraout_x8[4] = 0;
      extraout_x8[5] = 0;
      extraout_x8[6] = 0;
      extraout_x8[7] = 0;
      extraout_x8[0x18] = 0;
      extraout_x8[0x19] = 0;
      extraout_x8[0x1a] = 0;
      extraout_x8[0x1b] = 0;
      extraout_x8[0x1c] = 0;
      extraout_x8[0x1d] = 0;
      extraout_x8[0x1e] = 0;
      extraout_x8[0x1f] = 0;
      extraout_x8[0x10] = 0;
      extraout_x8[0x11] = 0;
      extraout_x8[0x12] = 0;
      extraout_x8[0x13] = 0;
      extraout_x8[0x14] = 0;
      extraout_x8[0x15] = 0;
      extraout_x8[0x16] = 0;
      extraout_x8[0x17] = 0;
      auVar22._8_8_ = param_2;
      auVar22._0_8_ = ppuVar10;
      return auVar22;
    }
    uVar15 = param_1[2] - *param_1;
    uVar17 = (long)uVar15 >> 2;
    if (uVar17 <= uVar1) {
      uVar17 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      uVar17 = 0x1fffffffffffffff;
    }
    plVar18 = param_1;
    FUN_10ad601dc();
    ppuVar11 = (undefined **)*param_1;
    puVar14 = (undefined8 *)((long)plVar18 + lVar19);
    lVar19 = (long)puVar14 - (param_1[1] - (long)ppuVar11);
    puVar13 = puVar14 + 1;
    *puVar14 = *param_2;
    _memcpy(lVar19,ppuVar11);
    plVar8 = (long *)*param_1;
    *param_1 = lVar19;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)(plVar18 + uVar17);
    if (plVar8 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  auVar20._8_8_ = ppuVar11;
  auVar20._0_8_ = plVar8;
  return auVar20;
}



/* Entry: 10ad601c8; end: 10ad601db;  */

undefined1  [16] FUN_10ad601c8(undefined8 param_1,undefined **param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *extraout_x8;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_78;
  
  FUN_109ffde64(&UNK_10f6a8826);
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar9 = (long)param_2 << 3;
    __Znwm(lVar9);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar9;
    return auVar20;
  }
  func_0x000109ffded8();
  puVar7 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar10 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar10 & 1) == 0) {
    param_2 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,param_2,0x100000000);
    (*(code *)puVar7)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar16 = (undefined8 *)ppuVar11[2];
  if (puVar16 != (undefined8 *)0x0) {
    bVar2 = *(byte *)(puVar16[1] + 0x23);
    puVar15 = (undefined8 *)(ulong)bVar2;
    *extraout_x8 = bVar2;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0x13;
    extraout_x8[3] = 0;
    ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar17 = *(int *)ppuVar12;
    if (*(int *)ppuVar12 == 0) {
      uStack_78 = 0;
      puVar15 = &uStack_78;
      _pthread_threadid_np(0,puVar15);
      *(int *)ppuVar12 = (int)uStack_78;
      iVar17 = (int)uStack_78;
    }
    *(ulong *)(extraout_x8 + 8) = 0;
    *(int *)(extraout_x8 + 4) = iVar17;
    extraout_x8[0x10] = 0;
    extraout_x8[0x11] = 0;
    extraout_x8[0x12] = 0;
    extraout_x8[0x13] = 0;
    extraout_x8[0x14] = 0;
    extraout_x8[0x15] = 0;
    extraout_x8[0x16] = 0;
    extraout_x8[0x17] = 0;
    extraout_x8[0x18] = 0;
    if ((bVar2 != 0) && (puVar16 != (undefined8 *)0x0)) {
      lVar9 = puVar16[1];
      bVar2 = *(byte *)(lVar9 + 0x42) | *(byte *)(lVar9 + 0x43);
      if (((bVar2 & 1) != 0) ||
         (((*(byte *)(lVar9 + 0x40) & 1) != 0 || (*(char *)(lVar9 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar19 = cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar19 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((uVar19 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          uVar19 = uVar5 + uVar4 * 1000000000;
        }
        *(ulong *)(extraout_x8 + 8) = uVar19;
        if ((bVar2 & 1) != 0) {
          uVar1 = *(undefined4 *)(extraout_x8 + 4);
          uVar3 = *(undefined2 *)(extraout_x8 + 2);
          puVar13 = puVar16;
          FUN_10a1333cc();
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = &UNK_10f6a887b;
            puVar13[1] = 0;
            puVar13[2] = uVar19;
            *(undefined4 *)(puVar13 + 3) = uVar1;
            *(undefined2 *)((long)puVar13 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar13 + 0x1e) = 3;
            if ((*(byte *)(puVar16 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad60458);
              (*pcVar8)();
            }
            puVar16[0x18] = puVar16[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar16[1] + 0x41) == '\x01') {
        plVar18 = (long *)puVar16[0xb];
        if (plVar18 != (long *)0x0) {
          puVar15 = (undefined8 *)&UNK_10f6a887b;
          plVar14 = plVar18;
          (**(code **)(*plVar18 + 0x28))(plVar18,&UNK_10f6a887b);
          *(long **)(extraout_x8 + 0x10) = plVar14;
        }
        extraout_x8[0x18] = plVar18 != (long *)0x0;
      }
    }
    auVar22._8_8_ = puVar15;
    auVar22._0_8_ = extraout_x8;
    return auVar22;
  }
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x1a] = 0;
  extraout_x8[0x1b] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x1e] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = ppuVar11;
  return auVar21;
}



/* Entry: 10ad601dc; end: 10ad6020f;  */

undefined1  [16] FUN_10ad601dc(undefined8 param_1,undefined **param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *extraout_x8;
  int iVar17;
  long *plVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uStack_68;
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar9 = (long)param_2 << 3;
    __Znwm(lVar9);
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = lVar9;
    return auVar20;
  }
  func_0x000109ffded8();
  puVar7 = PTR___tlv_bootstrap_11340d750;
  ppuVar12 = &PTR___tlv_bootstrap_11340d750;
  ppuVar10 = ppuVar12;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar10 & 1) == 0) {
    param_2 = ppuVar11;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,param_2,0x100000000);
    (*(code *)puVar7)();
    *(undefined1 *)ppuVar12 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar16 = (undefined8 *)ppuVar11[2];
  if (puVar16 != (undefined8 *)0x0) {
    bVar2 = *(byte *)(puVar16[1] + 0x23);
    puVar15 = (undefined8 *)(ulong)bVar2;
    *extraout_x8 = bVar2;
    extraout_x8[1] = 0;
    extraout_x8[2] = 0x13;
    extraout_x8[3] = 0;
    ppuVar12 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar17 = *(int *)ppuVar12;
    if (*(int *)ppuVar12 == 0) {
      uStack_68 = 0;
      puVar15 = &uStack_68;
      _pthread_threadid_np(0,puVar15);
      *(int *)ppuVar12 = (int)uStack_68;
      iVar17 = (int)uStack_68;
    }
    *(ulong *)(extraout_x8 + 8) = 0;
    *(int *)(extraout_x8 + 4) = iVar17;
    extraout_x8[0x10] = 0;
    extraout_x8[0x11] = 0;
    extraout_x8[0x12] = 0;
    extraout_x8[0x13] = 0;
    extraout_x8[0x14] = 0;
    extraout_x8[0x15] = 0;
    extraout_x8[0x16] = 0;
    extraout_x8[0x17] = 0;
    extraout_x8[0x18] = 0;
    if ((bVar2 != 0) && (puVar16 != (undefined8 *)0x0)) {
      lVar9 = puVar16[1];
      bVar2 = *(byte *)(lVar9 + 0x42) | *(byte *)(lVar9 + 0x43);
      if (((bVar2 & 1) != 0) ||
         (((*(byte *)(lVar9 + 0x40) & 1) != 0 || (*(char *)(lVar9 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar19 = cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = uVar19 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = ((uVar19 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          uVar19 = uVar5 + uVar4 * 1000000000;
        }
        *(ulong *)(extraout_x8 + 8) = uVar19;
        if ((bVar2 & 1) != 0) {
          uVar1 = *(undefined4 *)(extraout_x8 + 4);
          uVar3 = *(undefined2 *)(extraout_x8 + 2);
          puVar13 = puVar16;
          FUN_10a1333cc();
          if (puVar13 != (undefined8 *)0x0) {
            *puVar13 = &UNK_10f6a887b;
            puVar13[1] = 0;
            puVar13[2] = uVar19;
            *(undefined4 *)(puVar13 + 3) = uVar1;
            *(undefined2 *)((long)puVar13 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar13 + 0x1e) = 3;
            if ((*(byte *)(puVar16 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad60458);
              (*pcVar8)();
            }
            puVar16[0x18] = puVar16[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar16[1] + 0x41) == '\x01') {
        plVar18 = (long *)puVar16[0xb];
        if (plVar18 != (long *)0x0) {
          puVar15 = (undefined8 *)&UNK_10f6a887b;
          plVar14 = plVar18;
          (**(code **)(*plVar18 + 0x28))(plVar18,&UNK_10f6a887b);
          *(long **)(extraout_x8 + 0x10) = plVar14;
        }
        extraout_x8[0x18] = plVar18 != (long *)0x0;
      }
    }
    auVar22._8_8_ = puVar15;
    auVar22._0_8_ = extraout_x8;
    return auVar22;
  }
  extraout_x8[8] = 0;
  extraout_x8[9] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0] = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  extraout_x8[3] = 0;
  extraout_x8[4] = 0;
  extraout_x8[5] = 0;
  extraout_x8[6] = 0;
  extraout_x8[7] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x1a] = 0;
  extraout_x8[0x1b] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x1e] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x12] = 0;
  extraout_x8[0x13] = 0;
  extraout_x8[0x14] = 0;
  extraout_x8[0x15] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x17] = 0;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = ppuVar11;
  return auVar21;
}



/* Entry: 10ad60210; end: 10ad602c7;  */

undefined ** FUN_10ad60210(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x23);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x13';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a887b;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad60458);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a887b);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad602c8; end: 10ad605e7;  */

undefined1 * FUN_10ad602c8(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x13;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a887b;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad60458);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a887b);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad605e8; end: 10ad606e7;  */

void FUN_10ad605e8(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_28;
  
  puVar4 = *(ulong **)(param_1 + 8);
  uVar5 = puVar4[1] + 0x28;
  if (uVar5 <= *puVar4) {
    puVar1 = puVar4 + 1;
    uVar7 = puVar4[1];
    do {
      uVar6 = *puVar1;
      if (uVar6 == uVar7) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10ad60688;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar5 = uVar6 + 0x28;
      uVar7 = uVar6;
    } while (uVar5 <= *puVar4);
  }
  uStack_28 = 0x28;
  func_0x0001098c692c(&uStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10ad60688:
  __Znwm(0x28);
  return;
}



/* Entry: 10ad606e8; end: 10ad606fb;  */

void FUN_10ad606e8(undefined8 param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lStack_38;
  
  puVar5 = &UNK_10f6a8826;
  FUN_109ffde64();
  puVar6 = *(ulong **)(puVar5 + 8);
  lVar10 = (long)param_2 * 8;
  uVar7 = puVar6[1] + (long)param_2 * 8;
  if (uVar7 <= *puVar6) {
    puVar1 = puVar6 + 1;
    uVar9 = puVar6[1];
    do {
      uVar8 = *puVar1;
      if (uVar8 == uVar9) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10ad6079c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar7 = uVar8 + lVar10;
      uVar9 = uVar8;
    } while (uVar7 <= *puVar6);
  }
  lStack_38 = lVar10;
  func_0x0001098c692c(&lStack_38);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10ad6079c:
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm(lVar10);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad607f4);
  (*pcVar4)();
}



/* Entry: 10ad606fc; end: 10ad60807;  */

void FUN_10ad606fc(long param_1,undefined *param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_28;
  
  puVar5 = *(ulong **)(param_1 + 8);
  lVar9 = (long)param_2 * 8;
  uVar6 = puVar5[1] + (long)param_2 * 8;
  if (uVar6 <= *puVar5) {
    puVar1 = puVar5 + 1;
    uVar8 = puVar5[1];
    do {
      uVar7 = *puVar1;
      if (uVar7 == uVar8) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar6;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') goto LAB_10ad6079c;
      }
      else {
        ClearExclusiveLocal();
      }
      uVar6 = uVar7 + lVar9;
      uVar8 = uVar7;
    } while (uVar6 <= *puVar5);
  }
  lStack_28 = lVar9;
  func_0x0001098c692c(&lStack_28);
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  param_2 = PTR___ZTISt9bad_alloc_110346a68;
  ___cxa_throw();
LAB_10ad6079c:
  if ((ulong)param_2 >> 0x3d == 0) {
    __Znwm(lVar9);
    return;
  }
  func_0x000109ffded8();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10ad607f4);
  (*pcVar4)();
}



/* Entry: 10ad60808; end: 10ad60873;  */

long * FUN_10ad60808(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  lVar5 = param_1[2];
  if (lVar5 != param_1[1]) {
    param_1[2] = lVar5 + ((param_1[1] - lVar5) + 7U & 0xfffffffffffffff8);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    lVar2 = param_1[3];
    plVar1 = (long *)(*(long *)(param_1[4] + 8) + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 - (lVar2 - lVar5);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad60874; end: 10ad60947;  */

void FUN_10ad60874(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x10) = 0;
    *(undefined4 *)((long)param_1 + lVar1 + 0x18) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x20) = 0;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x60);
  lVar1 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((long)param_1 + 0x16e) = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar1 + 0x1d0) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x1d8) = 0;
    *(undefined8 *)((long)param_1 + lVar1 + 0x1c8) = 0xffffffffffffffff;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x3000);
  param_1[0x639] = 0;
  lVar1 = 0xc0;
  puVar2 = param_1 + 0x63d;
  do {
    puVar2[-3] = 0;
    *(undefined1 *)(puVar2 + -2) = 0;
    *(undefined1 *)(puVar2 + -1) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = 0;
    lVar1 = lVar1 + -0x30;
    puVar2 = puVar2 + 6;
  } while (lVar1 != 0);
  param_1[0x652] = 0;
  *(undefined4 *)(param_1 + 0x653) = 0xffffffff;
  return;
}



/* Entry: 10ad60948; end: 10ad60a03;  */

long FUN_10ad60948(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0;
  do {
    lVar4 = *(long *)(param_1 + lVar5 + 0x3278);
    if (lVar4 != 0) {
      *(long *)(param_1 + lVar5 + 0x3280) = lVar4;
      __ZdlPv();
    }
    lVar5 = lVar5 + -0x30;
  } while (lVar5 != -0xc0);
  func_0x00010ad6287c(param_1 + 0x1c0,0);
  if (*(long *)(param_1 + 0x1b8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  lVar5 = *(long *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x198) = 0;
  if (lVar5 != 0) {
    __ZdaPv();
  }
  if (*(long *)(param_1 + 0x180) != 0) {
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x180);
    __ZdlPv();
  }
  lVar5 = 0;
  do {
    lVar4 = param_1 + lVar5;
    if (*(long *)(lVar4 + 0x158) != 0) {
      *(long *)(lVar4 + 0x160) = *(long *)(lVar4 + 0x158);
      __ZdlPv();
    }
    if (*(long *)(lVar4 + 0x140) != 0) {
      *(long *)(param_1 + lVar5 + 0x148) = *(long *)(lVar4 + 0x140);
      __ZdlPv();
    }
    lVar5 = lVar5 + -0x40;
  } while (lVar5 != -0x100);
  plVar6 = *(long **)(param_1 + 8);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return param_1;
}



/* Entry: 10ad60a04; end: 10ad60a9b;  */

void FUN_10ad60a04(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar4 = 0x2078;
  __Znwm(0x2078);
  FUN_10ad5c5f8();
  lVar5 = param_1 + 0x1c0;
  func_0x00010ad6287c(lVar5,uVar4);
  uVar3 = cntfrq_el0;
  InstructionSynchronizationBarrier();
  uVar6 = cntvct_el0;
  if (uVar3 != 1000000000) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar6 / uVar3;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = ((uVar6 - uVar1 * uVar3) * 1000000000) / uVar3;
    }
    uVar6 = uVar2 + uVar1 * 1000000000;
  }
  __ZNSt3__16chrono12steady_clock3nowEv();
  *(ulong *)(param_1 + 0x31c8) = uVar6 - lVar5;
  return;
}



/* Entry: 10ad60a9c; end: 10ad60c8b;  */

void FUN_10ad60a9c(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  if ((*param_1 == 0) || (*(long **)(*param_1 + 0x18) != param_2)) {
    uStack_34 = 0x200;
    (**(code **)(*param_2 + 0x58))(&lStack_80,param_2,&uStack_34);
    plVar5 = plStack_78;
    lVar4 = lStack_80;
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
    plVar6 = (long *)param_1[1];
    param_1[1] = (long)plVar5;
    *param_1 = lVar4;
    if (plVar6 != (long *)0x0) {
      plVar5 = plVar6 + 1;
      do {
        lVar4 = *plVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar2) {
          *plVar5 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    plVar5 = plStack_78;
    if (plStack_78 != (long *)0x0) {
      plVar6 = plStack_78 + 1;
      do {
        lVar4 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_78 + 0x10))(plStack_78);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (*param_1 == 0) {
      if ((bRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f6a888f,&UNK_10f6a88c1,0x4f,&UNK_10f6a88fe);
      }
    }
    else {
      lVar4 = 0;
      plVar5 = param_1 + 4;
      do {
        *(int *)(plVar5 + -2) = (int)lVar4;
        *(undefined8 *)((long)plVar5 + -0xc) = 0x80;
        *plVar5 = 0;
        lVar4 = lVar4 + 0x80;
        plVar5 = plVar5 + 3;
      } while (lVar4 != 0x200);
      lVar4 = 0;
      *(int *)(param_1 + 0x2e) = (int)param_1[2];
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      plStack_78 = (long *)0x0;
      lStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      do {
        plVar5 = (long *)((long)param_1 + lVar4 + 0x70);
        plVar5[1] = (long)plStack_78;
        *plVar5 = lStack_80;
        plVar5[3] = plVar5[2];
        FUN_10a0cf2cc(plVar5 + 5,0,0,0);
        lVar4 = lVar4 + 0x40;
      } while (lVar4 != 0x100);
      FUN_10acef158(param_1 + 0x30,0x80);
      puVar3 = (undefined8 *)0x80;
      __Znam();
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[0xb] = 0;
      puVar3[10] = 0;
      puVar3[0xd] = 0;
      puVar3[0xc] = 0;
      puVar3[0xf] = 0;
      puVar3[0xe] = 0;
      lVar4 = param_1[0x33];
      param_1[0x33] = (long)puVar3;
      if (lVar4 != 0) {
        __ZdaPv();
      }
      *(undefined1 *)(param_1 + 0x34) = 0;
      param_1[0x35] = 0;
    }
  }
  return;
}



/* Entry: 10ad60c8c; end: 10ad60d3f;  */

long FUN_10ad60c8c(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x10);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad60d40; end: 10ad613d7;  */

void FUN_10ad60d40(long *param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long lStack_170;
  int iStack_168;
  int iStack_164;
  ulong *puStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  long *plStack_118;
  long *plStack_110;
  long lStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong auStack_e0 [2];
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  ulong uStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  
  if (*param_1 != 0) {
    plVar9 = param_1 + 2;
    plStack_110 = param_1 + 0xe;
    lVar12 = 3;
    plStack_118 = plVar9;
    do {
      plVar13 = plVar9 + lVar12 * 3;
      if ((plVar13[2] != 0) && (uVar14 = (ulong)*(uint *)(plVar13 + 1), *(uint *)(plVar13 + 1) != 0)
         ) {
        lVar16 = param_1[0x30];
        lVar15 = param_1[0x33];
        plVar7 = (long *)*param_1;
        (**(code **)(*plVar7 + 0x38))(plVar7,(int)*plVar13,uVar14,lVar16,uVar14,lVar15,uVar14);
        if ((int)plVar7 == 0) {
          plVar18 = *(long **)(*param_1 + 0x18);
          lStack_108 = lVar16;
          if ((plVar18 != (long *)0x0) && ((*(byte *)(param_1 + 0x34) & 1) == 0)) {
            plVar17 = plVar18;
            (**(code **)(*plVar18 + 0x10))(plVar18,0,0);
            plStack_c0 = (long *)CONCAT44(plStack_c0._4_4_,2);
            plVar7 = plVar18;
            (**(code **)(*plVar18 + 0x58))(&plStack_98,plVar18,&plStack_c0);
            if (plVar17 == (long *)0x0) {
              plStack_a8 = (long *)0x0;
              plStack_a0 = (long *)0x0;
LAB_10ad61104:
              plStack_d0 = (long *)0x0;
              plStack_c8 = (long *)0x0;
            }
            else {
              plStack_b8 = (long *)0x1;
              uStack_b0 = uStack_b0 & 0xffffffff00000000;
              plVar7 = plVar18;
              plStack_c0 = plVar17;
              (**(code **)(*plVar18 + 0x48))(&plStack_a8,plVar18,&plStack_c0);
              if (plStack_a8 == (long *)0x0) goto LAB_10ad61104;
              plStack_c0 = plStack_a8;
              plStack_b8 = plStack_98;
              uStack_b0 = 0x100000000;
              plVar7 = plVar18;
              (**(code **)(*plVar18 + 0x40))(&plStack_d0,plVar18,&plStack_c0);
              if ((plStack_98 != (long *)0x0) && (plStack_d0 != (long *)0x0)) {
                auStack_e0[1] = 0x6000000f0;
                auStack_e0[0] = 0x100;
                (**(code **)(*plVar18 + 0x70))(&lStack_f0,plVar18,auStack_e0);
                (**(code **)(*plVar18 + 0x70))(&lStack_100,plVar18,auStack_e0);
                (**(code **)(*plStack_d0 + 0x38))(plStack_d0,plStack_98,0,2);
                plVar7 = plStack_d0;
                (**(code **)(*plStack_d0 + 0x48))();
                (**(code **)(*plVar7 + 0x48))();
                if ((lStack_f0 != 0) && (lStack_100 != 0)) {
                  plStack_c0 = (long *)0x0;
                  plStack_b8 = (long *)0x0;
                  uStack_b0 = auStack_e0[0];
                  (**(code **)(*plVar7 + 0x58))(plVar7,lStack_f0,lStack_100,&plStack_c0,1);
                }
                (**(code **)(*plVar7 + 0x40))(plVar7);
                plStack_c0 = plStack_d0;
                lStack_140 = 0;
                lStack_138 = 0;
                uStack_128 = 0;
                uStack_130 = 2;
                (**(code **)(*plVar17 + 0x30))(plVar17,0,0,0,0,&plStack_c0,1);
                plStack_c0 = (long *)0x0;
                plStack_b8 = (long *)0x0;
                plVar7 = plStack_98;
                (**(code **)(*plStack_98 + 0x30))(plStack_98,0,2,&plStack_c0,2);
                plVar18 = plStack_f8;
                uVar11 = cntfrq_el0;
                InstructionSynchronizationBarrier();
                uVar10 = cntvct_el0;
                if (uVar11 != 1000000000) {
                  uVar4 = 0;
                  if (uVar11 != 0) {
                    uVar4 = uVar10 / uVar11;
                  }
                  uVar5 = 0;
                  if (uVar11 != 0) {
                    uVar5 = ((uVar10 - uVar4 * uVar11) * 1000000000) / uVar11;
                  }
                  uVar10 = uVar5 + uVar4 * 1000000000;
                }
                if ((int)plVar7 == 0) {
                  param_1[0x35] = uVar10 - (long)plStack_b8;
                  *(undefined1 *)(param_1 + 0x34) = 1;
                }
                if (plStack_f8 != (long *)0x0) {
                  plVar17 = plStack_f8 + 1;
                  do {
                    lVar16 = *plVar17;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar3) {
                      *plVar17 = lVar16 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_f8 + 0x10))(plStack_f8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar7 = plVar18;
                  }
                }
                plVar18 = plStack_e8;
                if (plStack_e8 != (long *)0x0) {
                  plVar17 = plStack_e8 + 1;
                  do {
                    lVar16 = *plVar17;
                    cVar2 = '\x01';
                    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                    if (bVar3) {
                      *plVar17 = lVar16 + -1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar2 != '\0');
                  if (lVar16 == 0) {
                    (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
                    __ZNSt3__119__shared_weak_count14__release_weakEv();
                    plVar7 = plVar18;
                  }
                }
              }
            }
            plVar18 = plStack_c8;
            if (plStack_c8 != (long *)0x0) {
              plVar17 = plStack_c8 + 1;
              do {
                lVar16 = *plVar17;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *plVar17 = lVar16 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_c8 + 0x10))(plStack_c8);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                plVar7 = plVar18;
              }
            }
            plVar18 = plStack_a0;
            if (plStack_a0 != (long *)0x0) {
              plVar17 = plStack_a0 + 1;
              do {
                lVar16 = *plVar17;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *plVar17 = lVar16 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                plVar7 = plVar18;
              }
            }
            plVar18 = plStack_90;
            if (plStack_90 != (long *)0x0) {
              plVar17 = plStack_90 + 1;
              do {
                lVar16 = *plVar17;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar3) {
                  *plVar17 = lVar16 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar16 == 0) {
                (**(code **)(*plStack_90 + 0x10))(plStack_90);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                plVar7 = plVar18;
              }
            }
          }
          puVar1 = (ulong *)(plStack_110 + (plVar13[2] & 3U) * 8);
          *puVar1 = plVar13[2];
          *(int *)(puVar1 + 1) = (int)*plVar13;
          plVar17 = (long *)(ulong)*(uint *)(plVar13 + 1);
          *(uint *)((long)puVar1 + 0xc) = *(uint *)(plVar13 + 1);
          puVar8 = puVar1 + 2;
          plVar18 = (long *)*puVar8;
          uVar11 = puVar1[4];
          if ((long *)((long)(uVar11 - (long)plVar18) >> 3) < plVar17) {
            plStack_158 = plVar7;
            if (plVar18 != (long *)0x0) {
              puVar1[3] = (ulong)plVar18;
              __ZdlPv();
              uVar11 = 0;
              *puVar8 = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              plStack_158 = plVar18;
            }
            plVar7 = (long *)((long)uVar11 >> 2);
            if ((long *)((long)uVar11 >> 2) <= plVar17) {
              plVar7 = plVar17;
            }
            if (0x7ffffffffffffff7 < uVar11) {
              plVar7 = (long *)0x1fffffffffffffff;
            }
            if ((ulong)plVar7 >> 0x3d != 0) {
              FUN_10a94fa30();
              func_0x00010a045fb4(&lStack_100);
              func_0x00010a045fb4(&lStack_f0);
              func_0x00010a054cfc(&plStack_d0);
              FUN_10a043fd8(&plStack_a8);
              FUN_10ad62824(&plStack_98);
              plVar9 = plStack_158;
              __Unwind_Resume();
              if (*(char *)((long)plVar9 + 0x174) == '\x01') {
                pcStack_148 = FUN_10ad613d8;
                if ((((plVar9[0x38] == 0) && (plVar7 != (long *)0x0)) && (-1 < (int)plVar9[0x653]))
                   && ((((*(byte *)((long)plVar9 + 0x175) & 1) == 0 &&
                        (lVar12 = plVar7[3], lVar12 != 0)) &&
                       ((*(int *)(lVar12 + 400) != 0 &&
                        ((*(char *)(lVar12 + 0x168) == '\x01' &&
                         (puStack_160 = puVar8, puStack_150 = &stack0xfffffffffffffff0,
                         FUN_10ad60a9c(plVar9), *plVar9 != 0)))))))) {
                  if (plVar9[4] != plVar9[0x652]) {
                    func_0x00010ad60ccc(plVar9);
                  }
                  iStack_168 = (int)plVar9[0x2e];
                  if (iStack_168 + 2U <= (uint)(*(int *)((long)plVar9 + 0x14) + (int)plVar9[2])) {
                    *(int *)(plVar9 + 0x2f) = iStack_168;
                    iStack_164 = iStack_168 + 1;
                    lStack_170 = *plVar9;
                    (**(code **)(*plVar7 + 0x30))(plVar7,&lStack_170);
                    (**(code **)(*plVar7 + 0x38))(plVar7,*plVar9,(int)plVar9[0x2f],2);
                    *(undefined1 *)((long)plVar9 + 0x175) = 1;
                  }
                }
              }
              return;
            }
            FUN_10a94fa44();
            puVar1[2] = (ulong)puVar8;
            puVar1[4] = (ulong)(puVar8 + (long)plVar7);
            _bzero();
            puVar1[3] = (ulong)(puVar8 + (long)plVar17);
            plVar17 = (long *)(ulong)*(uint *)(plVar13 + 1);
          }
          else {
            uVar11 = puVar1[3];
            lVar16 = uVar11 - (long)plVar18;
            plVar7 = (long *)(lVar16 >> 3);
            plVar9 = plVar7;
            if (plVar17 <= plVar7) {
              plVar9 = plVar17;
            }
            if (plVar9 != (long *)0x0) {
              lStack_120 = lVar16;
              _bzero(plVar18,(long)plVar9 << 3);
              lVar16 = lStack_120;
            }
            if (plVar17 < plVar7 || (long)plVar17 - (long)plVar7 == 0) {
              plVar18 = plVar18 + (long)plVar17;
            }
            else {
              _bzero(uVar11,(long)plVar17 * 8 - lVar16);
              plVar18 = (long *)(uVar11 + ((long)plVar17 - (long)plVar7) * 8);
            }
            puVar1[3] = (ulong)plVar18;
            plVar9 = plStack_118;
          }
          plStack_c0 = (long *)((ulong)plStack_c0 & 0xffffffffffffff00);
          func_0x000108a39c34(puVar1 + 5,plVar17,&plStack_c0);
          uVar11 = (ulong)*(uint *)(plVar13 + 1);
          if (*(uint *)(plVar13 + 1) != 0) {
            uVar10 = 0;
            do {
              if (uVar14 == uVar10) goto LAB_10ad61370;
              if (*(char *)(lVar15 + uVar10) == '\x01') {
                if ((ulong)((long)(puVar1[3] - puVar1[2]) >> 3) <= uVar10) {
LAB_10ad61370:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ad61374);
                  (*pcVar6)();
                }
                *(long *)(puVar1[2] + uVar10 * 8) =
                     *(long *)(lStack_108 + uVar10 * 8) + param_1[0x35];
                if (puVar1[6] - puVar1[5] <= uVar10) goto LAB_10ad61370;
                *(undefined1 *)(puVar1[5] + uVar10) = 1;
                uVar11 = (ulong)*(uint *)(plVar13 + 1);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar11);
          }
        }
        else if ((((int)plVar7 == 2) &&
                 (lVar15 = lRam00000001137ecea8 + 1,
                 uVar14 = lRam00000001137ecea8 * -0x1111111111111111, lRam00000001137ecea8 = lVar15,
                 (uVar14 >> 1 | uVar14 << 0x3f) < 0x888888888888889)) &&
                ((bRam000000011330a9e8 >> 1 & 1) != 0)) {
          lStack_140 = plVar13[2];
          lStack_138 = lVar15;
          func_0x00010ae06f08(1,2,&UNK_10f6a888f,&UNK_10f6a8947,0x83,&UNK_10f6a8973);
        }
      }
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



/* Entry: 10ad613d8; end: 10ad61557;  */

void FUN_10ad613d8(long *param_1,long *param_2)

{
  long lVar1;
  long lStack_30;
  int iStack_28;
  int iStack_24;
  
  if ((((((*(char *)((long)param_1 + 0x174) == '\x01') && (param_1[0x38] == 0)) &&
        (param_2 != (long *)0x0)) &&
       ((-1 < (int)param_1[0x653] && ((*(byte *)((long)param_1 + 0x175) & 1) == 0)))) &&
      ((lVar1 = param_2[3], lVar1 != 0 &&
       ((*(int *)(lVar1 + 400) != 0 && (*(char *)(lVar1 + 0x168) == '\x01')))))) &&
     (FUN_10ad60a9c(param_1), *param_1 != 0)) {
    if (param_1[4] != param_1[0x652]) {
      func_0x00010ad60ccc(param_1);
    }
    iStack_28 = (int)param_1[0x2e];
    if (iStack_28 + 2U <= (uint)(*(int *)((long)param_1 + 0x14) + (int)param_1[2])) {
      *(int *)(param_1 + 0x2f) = iStack_28;
      iStack_24 = iStack_28 + 1;
      lStack_30 = *param_1;
      (**(code **)(*param_2 + 0x30))(param_2,&lStack_30);
      (**(code **)(*param_2 + 0x38))(param_2,*param_1,(int)param_1[0x2f],2);
      *(undefined1 *)((long)param_1 + 0x175) = 1;
    }
  }
  return;
}



/* Entry: 10ad61558; end: 10ad61727;  */

void FUN_10ad61558(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar11[2] = param_2[2];
    puVar11[1] = uVar13;
    *puVar11 = uVar12;
    puVar11 = puVar11 + 3;
  }
  else {
    lVar10 = (long)puVar11 - *param_1;
    uVar8 = (lVar10 >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      FUN_10ad62760();
      if (((*(byte *)((long)param_1 + 0x174) & 1) != 0) || (param_1[0x38] != 0)) {
        uVar8 = param_1[0x652] + 1;
        param_1[0x652] = uVar8;
        uVar9 = uVar8 & 3;
        param_1[uVar9 * 6 + 0x63a] = uVar8;
        if ((char)param_1[uVar9 * 6 + 0x63c] == '\x01') {
          *(undefined1 *)(param_1 + uVar9 * 6 + 0x63c) = 0;
        }
        plVar6 = (long *)param_1[0x37];
        if ((plVar6 != (long *)0x0) &&
           (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0)) {
          lVar10 = param_1[0x36];
          if (lVar10 != 0) {
            uVar3 = *(ulong *)(lVar10 + 0x1d0);
            if ((uVar3 & 1) != 0) {
              *(undefined1 *)(lVar10 + 0x1d0) = 0;
            }
            param_1[uVar9 * 6 + 0x63b] = *(long *)(lVar10 + 0x1c8);
            *(char *)(param_1 + uVar9 * 6 + 0x63c) = (char)uVar3;
          }
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
          }
        }
        param_1[uVar9 * 6 + 0x63e] = param_1[uVar9 * 6 + 0x63d];
        *(uint *)(param_1 + 0x653) = (uint)uVar8 & 3;
      }
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 3;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
      uVar9 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0xaaaaaaaaaaaaaaa;
    }
    plVar6 = param_1;
    FUN_10ad62774();
    puVar2 = (undefined8 *)((long)plVar6 + lVar10);
    uVar13 = param_2[1];
    uVar12 = *param_2;
    puVar2[2] = param_2[2];
    puVar2[1] = uVar13;
    *puVar2 = uVar12;
    puVar11 = puVar2 + 3;
    lVar7 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lVar10 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar11;
    param_1[2] = (long)(plVar6 + uVar9 * 3);
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar11;
  return;
}



/* Entry: 10ad61728; end: 10ad617df;  */

void FUN_10ad61728(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x1c0);
  if (((lVar2 != 0) && (-1 < *(int *)(param_1 + 0x3298))) &&
     (uVar3 = *(ulong *)(lVar2 + 0x2008), uVar3 < 0x200)) {
    *(ulong *)(lVar2 + 0x2008) = uVar3 + 1;
    uVar3 = *(ulong *)(lVar2 + uVar3 * 8 + 0x1008);
    if (((long)uVar3 < 0x200) && (FUN_10ad5cb68(lVar2 + 0x2018,uVar3), uVar3 < 0x200)) {
      lVar2 = param_1 + uVar3 * 0x18;
      *(undefined8 *)(lVar2 + 0x1d0) = 0;
      *(undefined8 *)(lVar2 + 0x1d8) = 0;
      *(undefined8 *)(lVar2 + 0x1c8) = 0xffffffffffffffff;
      if (3 < *(uint *)(param_1 + 0x3298)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10ad617e0);
        (*pcVar1)();
      }
      param_1 = param_1 + (ulong)*(uint *)(param_1 + 0x3298) * 0x30;
      uStack_38 = *(undefined8 *)(param_1 + 0x31d0);
      uStack_30 = 0;
      uStack_28 = uVar3;
      FUN_10ad61558(param_1 + 0x31e8,&uStack_38);
    }
  }
  return;
}



/* Entry: 10ad617e0; end: 10ad6182f;  */

void FUN_10ad617e0(long param_1)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x1c0);
  if ((lVar5 != 0) && (uVar1 = *(uint *)(param_1 + 0x3298), -1 < (int)uVar1)) {
    if (3 < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad61830);
      (*pcVar3)();
    }
    param_1 = param_1 + (ulong)uVar1 * 0x30;
    lVar6 = *(long *)(param_1 + 0x31f0);
    if ((*(long *)(param_1 + 0x31e8) != lVar6) && (uVar4 = *(ulong *)(lVar6 + -8), uVar4 < 0x200)) {
      uVar7 = *(ulong *)(lVar5 + 0x2058);
      lVar6 = *(long *)(lVar5 + 0x2020);
      lVar2 = 0;
      if (lVar6 != 0) {
        lVar2 = (long)(uVar7 + 1) / lVar6;
      }
      *(ulong *)(lVar5 + 0x2058) = (uVar7 + 1) - lVar2 * lVar6;
      if (uVar7 < (ulong)(*(long *)(lVar5 + 0x2030) - *(long *)(lVar5 + 0x2028) >> 2)) {
        (**(code **)(*(long *)(lVar5 + 0x2018) + 0x70))
                  (*(undefined4 *)(*(long *)(lVar5 + 0x2028) + uVar7 * 4),0x8e28);
        if (uVar7 < (ulong)(*(long *)(lVar5 + 0x2048) - *(long *)(lVar5 + 0x2040) >> 3)) {
          *(ulong *)(*(long *)(lVar5 + 0x2040) + uVar7 * 8) = uVar4;
          return;
        }
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad5cbe4);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10ad61830; end: 10ad62257;  */

void FUN_10ad61830(ulong param_1)

{
  bool bVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  code *pcVar7;
  long lVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 in_x6;
  undefined8 in_x7;
  int extraout_w8;
  undefined4 uVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  uint *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  undefined4 uStack_9c;
  ulong uStack_80;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  lVar8 = *(long *)(param_1 + 0x1c0);
  if ((*(byte *)(param_1 + 0x174) & 1) == 0) {
    if (lVar8 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3298) = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x3298) = 0xffffffff;
    if (lVar8 == 0) goto LAB_10ad61998;
  }
  uStack_80 = uStack_80 & 0xffffffffffffff00;
  FUN_10ad5c708(&puStack_78,lVar8,&uStack_80);
  uVar25 = uStack_80;
  if ((char)uStack_80 == '\x01') {
    lVar8 = 0;
    do {
      puVar24 = (undefined8 *)(param_1 + 0x31d0 + lVar8);
      *puVar24 = 0;
      *(undefined1 *)(puVar24 + 1) = 0;
      *(undefined1 *)(puVar24 + 2) = 0;
      puVar24[4] = puVar24[3];
      lVar8 = lVar8 + 0x30;
    } while (lVar8 != 0xc0);
    lVar8 = 0;
    do {
      puVar24 = (undefined8 *)(param_1 + 0x1c8 + lVar8);
      puVar24[1] = 0;
      puVar24[2] = 0;
      *puVar24 = 0xffffffffffffffff;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0x3000);
    *(undefined4 *)(param_1 + 0x3298) = 0xffffffff;
  }
  else if (puStack_78 != puStack_70) {
    puVar18 = puStack_78;
    do {
      if ((puVar18[1] < 2) && (uVar19 = *puVar18, uVar19 < 0x200)) {
        puVar20 = (ulong *)(param_1 + 0x1c8 + uVar19 * 0x18);
        uVar13 = puVar18[3];
        uVar26 = puVar18[2];
        lVar8 = *(long *)(param_1 + 0x31c8);
        *puVar20 = uVar19;
        puVar20[2] = uVar13 + lVar8;
        puVar20[1] = uVar26 + lVar8;
      }
      puVar18 = puVar18 + 4;
    } while (puVar18 != puStack_70);
  }
  if (puStack_78 != (ulong *)0x0) {
    puStack_70 = puStack_78;
    __ZdlPv();
  }
  if ((uVar25 & 1) != 0) {
    return;
  }
LAB_10ad61998:
  puVar4 = PTR___tlv_bootstrap_11340d738;
  lVar8 = 0x31d0;
  puVar23 = (uint *)(param_1 + 0x31d0);
  ppuVar9 = &PTR___tlv_bootstrap_11340d738;
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  uStack_9c = 0x90c70f69;
  do {
    lVar21 = *(long *)puVar23;
    if (lVar21 != 0) {
      puVar18 = (ulong *)(puVar23 + 6);
      uVar25 = *puVar18;
      uVar19 = *(ulong *)(puVar23 + 8);
      if (uVar25 == uVar19) {
LAB_10ad61adc:
        if (*(ulong *)(param_1 + 0x3290) < lVar21 + 3U) goto LAB_10ad620d4;
      }
      else {
        uVar13 = uVar19 - 0x18;
        uVar26 = param_1;
        func_0x00010ad6231c();
        if ((uVar13 & 1) == 0) goto LAB_10ad61adc;
        if (*(long *)(param_1 + 0x1c0) == 0) {
          puStack_78 = (ulong *)0x0;
          puStack_70 = (ulong *)0x0;
          uStack_68 = 0;
          func_0x000107c28300(&puStack_78,((long)(uVar19 - uVar25) >> 3) * -0x5555555555555555);
          uVar25 = *(ulong *)(puVar23 + 6);
          uVar19 = *(ulong *)(puVar23 + 8);
          if (uVar25 != uVar19) {
            lVar21 = 0;
            do {
              uVar13 = param_1;
              uVar14 = uVar25;
              func_0x00010ad62258();
              uVar10 = param_1;
              uVar15 = uVar25;
              func_0x00010ad6231c();
              if (((uVar14 & 1) != 0) && ((uVar15 & 1) != 0)) {
                if ((long)uVar10 < (long)uVar13) {
                  if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
                    func_0x00010ae06f08(1,2,&UNK_10f6a888f,&UNK_10f6a89e9,0x1c4,&UNK_10f6a8a38,in_x6
                                        ,in_x7,uVar13,uVar10,*(undefined8 *)puVar23);
                  }
                }
                else {
                  uStack_80 = uVar10 - uVar13;
                  func_0x00010a3c4fb0(&puStack_78,&uStack_80);
                  lVar21 = uStack_80 + lVar21;
                }
              }
              puVar5 = PTR___tlv_bootstrap_11340d750;
              uVar25 = uVar25 + 0x18;
            } while (uVar25 != uVar19);
            if ((lVar21 != 0) && ((puVar23[4] & 1) != 0)) {
              lVar22 = *(long *)(puVar23 + 2);
              ppuVar11 = &PTR___tlv_bootstrap_11340d750;
              (*(code *)PTR___tlv_bootstrap_11340d750)();
              if (((ulong)*ppuVar11 & 1) == 0) {
                ppuVar11 = &PTR___tlv_bootstrap_11340d738;
                (*(code *)puVar4)(&PTR___tlv_bootstrap_11340d738);
                __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
                ppuVar11 = &PTR___tlv_bootstrap_11340d750;
                (*(code *)puVar5)();
                *(undefined1 *)ppuVar11 = 1;
              }
              puVar24 = (undefined8 *)ppuVar9[2];
              puVar20 = puStack_78;
              puVar2 = puStack_70;
              if (((puVar24 != (undefined8 *)0x0) &&
                  (lVar17 = puVar24[1], *(char *)(lVar17 + 0x17) == '\x01')) &&
                 (((*(byte *)(lVar17 + 0x42) | *(byte *)(lVar17 + 0x43)) & 1) != 0)) {
                FUN_10a192960(puVar24,0x90c70fa9,&DAT_10f6a8bf4);
                puVar12 = puVar24;
                FUN_10a1333cc();
                if (puVar12 != (undefined8 *)0x0) {
                  *puVar12 = &UNK_10f6a8a97;
                  puVar12[1] = 0;
                  puVar12[2] = lVar22;
                  *(undefined4 *)(puVar12 + 3) = 0x90c70fa9;
                  *(undefined2 *)((long)puVar12 + 0x1c) = 7;
                  *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                  if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                  puVar24[0x18] = puVar24[0x18] + 1;
                }
                puVar12 = puVar24;
                FUN_10a1333cc();
                puVar20 = puStack_78;
                puVar2 = puStack_70;
                if (puVar12 != (undefined8 *)0x0) {
                  *puVar12 = &UNK_10f6a8a97;
                  puVar12[1] = 0;
                  puVar12[2] = lVar22 + lVar21;
                  *(undefined4 *)(puVar12 + 3) = 0x90c70fa9;
                  *(undefined2 *)((long)puVar12 + 0x1c) = 7;
                  *(undefined1 *)((long)puVar12 + 0x1e) = 6;
                  if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                  puVar24[0x18] = puVar24[0x18] + 1;
                }
              }
              for (; puVar6 = puStack_70, bVar1 = puVar20 != puStack_70, puStack_70 = puVar2, bVar1;
                  puVar20 = puVar20 + 1) {
                uVar25 = *puVar20;
                FUN_10ad623e0(&UNK_10f6a8aa0,lVar22,uVar25 + lVar22);
                lVar22 = uVar25 + lVar22;
                puVar2 = puStack_70;
                puStack_70 = puVar6;
              }
            }
          }
          if (puStack_78 != (ulong *)0x0) {
            puStack_70 = puStack_78;
            __ZdlPv(puStack_78);
          }
        }
        else {
          uVar13 = param_1;
          uVar10 = uVar25;
          func_0x00010ad62258(param_1);
          if ((uVar10 & 1) != 0) {
            FUN_10ad623e0(&UNK_10f6a89d3,uVar13,uVar26);
            uVar25 = *(ulong *)(puVar23 + 6);
            uVar19 = *(ulong *)(puVar23 + 8);
          }
          for (; uVar25 != uVar19; uVar25 = uVar25 + 0x18) {
            uVar13 = param_1;
            uVar14 = uVar25;
            func_0x00010ad62258(param_1);
            uVar10 = param_1;
            uVar15 = uVar25;
            func_0x00010ad6231c(param_1);
            if (((uVar14 & 1) != 0) && ((uVar15 & 1) != 0)) {
              FUN_10ad623e0(&UNK_10f6a89dd,uVar13,uVar10);
            }
          }
        }
        puVar5 = PTR___tlv_bootstrap_11340d750;
        if ((char)puVar23[4] == '\x01') {
          uVar25 = *(ulong *)(puVar23 + 2);
          if (uVar25 < uVar26 || uVar25 - uVar26 == 0) {
            ppuVar11 = &PTR___tlv_bootstrap_11340d750;
            (*(code *)PTR___tlv_bootstrap_11340d750)();
            puVar3 = *ppuVar11;
            if (extraout_w8 < 2) {
              if (extraout_w8 == 0) {
                if (((ulong)puVar3 & 1) == 0) {
                  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar4)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
                  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
                  (*(code *)puVar5)();
                  *(undefined1 *)ppuVar11 = 1;
                }
                puVar24 = (undefined8 *)ppuVar9[2];
                if ((puVar24 != (undefined8 *)0x0) &&
                   (lVar21 = puVar24[1], *(char *)(lVar21 + 0x12) == '\x01')) {
                  if (((*(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43)) & 1) != 0) {
                    FUN_10a192960(puVar24,0x90c70f69,&DAT_10f6a8b82);
                    puVar12 = puVar24;
                    FUN_10a1333cc();
                    if (puVar12 != (undefined8 *)0x0) {
                      *puVar12 = &UNK_10f6a8b99;
                      puVar12[1] = 0;
                      puVar12[2] = uVar25;
                      *(undefined4 *)(puVar12 + 3) = 0x90c70f69;
                      *(undefined2 *)((long)puVar12 + 0x1c) = 2;
                      *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                      if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                      puVar24[0x18] = puVar24[0x18] + 1;
                    }
                    puVar12 = puVar24;
                    FUN_10a1333cc();
                    if (puVar12 != (undefined8 *)0x0) {
                      *puVar12 = &UNK_10f6a8b99;
                      puVar12[1] = 0;
                      puVar12[2] = uVar26;
                      uVar16 = uStack_9c;
LAB_10ad6205c:
                      *(undefined4 *)(puVar12 + 3) = uVar16;
                      *(undefined2 *)((long)puVar12 + 0x1c) = 2;
                      *(undefined1 *)((long)puVar12 + 0x1e) = 6;
                      if ((*(byte *)(puVar24 + 0x38) & 1) == 0) {
LAB_10ad62228:
                    /* WARNING: Does not return */
                        pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad6222c);
                        (*pcVar7)();
                      }
                      puVar24[0x18] = puVar24[0x18] + 1;
                    }
                  }
LAB_10ad62088:
                  if (*(char *)(puVar24[1] + 0x40) == '\x01') {
                    FUN_10ad627b8(*puVar24,uVar25,uVar26);
                  }
                }
              }
              else {
                if (((ulong)puVar3 & 1) == 0) {
                  ppuVar11 = &PTR___tlv_bootstrap_11340d738;
                  (*(code *)puVar4)(&PTR___tlv_bootstrap_11340d738);
                  __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
                  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
                  (*(code *)puVar5)();
                  *(undefined1 *)ppuVar11 = 1;
                }
                puVar24 = (undefined8 *)ppuVar9[2];
                if ((puVar24 != (undefined8 *)0x0) &&
                   (lVar21 = puVar24[1], *(char *)(lVar21 + 0x12) == '\x01')) {
                  if (((*(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43)) & 1) != 0) {
                    FUN_10a192960(puVar24,0x90c70f79,&DAT_10f6a8baf);
                    puVar12 = puVar24;
                    FUN_10a1333cc();
                    if (puVar12 != (undefined8 *)0x0) {
                      *puVar12 = &UNK_10f6a8b99;
                      puVar12[1] = 0;
                      puVar12[2] = uVar25;
                      *(undefined4 *)(puVar12 + 3) = 0x90c70f79;
                      *(undefined2 *)((long)puVar12 + 0x1c) = 2;
                      *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                      if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                      puVar24[0x18] = puVar24[0x18] + 1;
                    }
                    puVar12 = puVar24;
                    FUN_10a1333cc();
                    if (puVar12 != (undefined8 *)0x0) {
                      *puVar12 = &UNK_10f6a8b99;
                      puVar12[1] = 0;
                      puVar12[2] = uVar26;
                      uVar16 = 0x90c70f79;
                      goto LAB_10ad6205c;
                    }
                  }
                  goto LAB_10ad62088;
                }
              }
            }
            else if (extraout_w8 == 2) {
              if (((ulong)puVar3 & 1) == 0) {
                ppuVar11 = &PTR___tlv_bootstrap_11340d738;
                (*(code *)puVar4)(&PTR___tlv_bootstrap_11340d738);
                __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
                ppuVar11 = &PTR___tlv_bootstrap_11340d750;
                (*(code *)puVar5)();
                *(undefined1 *)ppuVar11 = 1;
              }
              puVar24 = (undefined8 *)ppuVar9[2];
              if ((puVar24 != (undefined8 *)0x0) &&
                 (lVar21 = puVar24[1], *(char *)(lVar21 + 0x12) == '\x01')) {
                if (((*(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43)) & 1) != 0) {
                  FUN_10a192960(puVar24,0x90c70f89,&DAT_10f6a8bc6);
                  puVar12 = puVar24;
                  FUN_10a1333cc();
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = &UNK_10f6a8b99;
                    puVar12[1] = 0;
                    puVar12[2] = uVar25;
                    *(undefined4 *)(puVar12 + 3) = 0x90c70f89;
                    *(undefined2 *)((long)puVar12 + 0x1c) = 2;
                    *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                    if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                    puVar24[0x18] = puVar24[0x18] + 1;
                  }
                  puVar12 = puVar24;
                  FUN_10a1333cc();
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = &UNK_10f6a8b99;
                    puVar12[1] = 0;
                    puVar12[2] = uVar26;
                    uVar16 = 0x90c70f89;
                    goto LAB_10ad6205c;
                  }
                }
                goto LAB_10ad62088;
              }
            }
            else {
              if (((ulong)puVar3 & 1) == 0) {
                ppuVar11 = &PTR___tlv_bootstrap_11340d738;
                (*(code *)puVar4)(&PTR___tlv_bootstrap_11340d738);
                __tlv_atexit(0x10a132a8c,ppuVar11,0x100000000);
                ppuVar11 = &PTR___tlv_bootstrap_11340d750;
                (*(code *)puVar5)();
                *(undefined1 *)ppuVar11 = 1;
              }
              puVar24 = (undefined8 *)ppuVar9[2];
              if ((puVar24 != (undefined8 *)0x0) &&
                 (lVar21 = puVar24[1], *(char *)(lVar21 + 0x12) == '\x01')) {
                if (((*(byte *)(lVar21 + 0x42) | *(byte *)(lVar21 + 0x43)) & 1) != 0) {
                  FUN_10a192960(puVar24,0x90c70f99,&DAT_10f6a8bdd);
                  puVar12 = puVar24;
                  FUN_10a1333cc();
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = &UNK_10f6a8b99;
                    puVar12[1] = 0;
                    puVar12[2] = uVar25;
                    *(undefined4 *)(puVar12 + 3) = 0x90c70f99;
                    *(undefined2 *)((long)puVar12 + 0x1c) = 2;
                    *(undefined1 *)((long)puVar12 + 0x1e) = 3;
                    if ((*(byte *)(puVar24 + 0x38) & 1) == 0) goto LAB_10ad62228;
                    puVar24[0x18] = puVar24[0x18] + 1;
                  }
                  puVar12 = puVar24;
                  FUN_10a1333cc();
                  if (puVar12 != (undefined8 *)0x0) {
                    *puVar12 = &UNK_10f6a8b99;
                    puVar12[1] = 0;
                    puVar12[2] = uVar26;
                    uVar16 = 0x90c70f99;
                    goto LAB_10ad6205c;
                  }
                }
                goto LAB_10ad62088;
              }
            }
          }
          else if ((bRam000000011330a9e8 >> 1 & 1) != 0) {
            func_0x00010ae06f08(1,2,&UNK_10f6a888f,&UNK_10f6a8aba,0x27,&UNK_10f6a8b2e,in_x6,in_x7,
                                *puVar23 & 3,uVar25,uVar26,uVar25 - uVar26);
          }
        }
        uVar25 = *puVar18;
      }
      puVar23[0] = 0;
      puVar23[1] = 0;
      *(undefined1 *)(puVar23 + 2) = 0;
      *(undefined1 *)(puVar23 + 4) = 0;
      if (uVar25 != 0) {
        *(ulong *)(puVar23 + 8) = uVar25;
        __ZdlPv(uVar25);
      }
      *puVar18 = 0;
      puVar23[8] = 0;
      puVar23[9] = 0;
      puVar23[10] = 0;
      puVar23[0xb] = 0;
    }
LAB_10ad620d4:
    lVar8 = lVar8 + 0x30;
    puVar23 = (uint *)(param_1 + lVar8);
    if (lVar8 == 0x3290) {
      return;
    }
  } while( true );
}



/* Entry: 10ad62258; end: 10ad623df;  */

undefined1  [16] FUN_10ad62258(long param_1,ulong *param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  if (*(long *)(param_1 + 0x1c0) == 0) {
    param_1 = param_1 + (*param_2 & 3) * 0x40;
    if (*(ulong *)(param_1 + 0x70) == *param_2) {
      uVar1 = (uint)param_2[1];
      uVar2 = *(uint *)(param_1 + 0x78);
      uVar5 = (ulong)(uVar1 - uVar2);
      if ((uVar2 <= uVar1) && (uVar1 < *(int *)(param_1 + 0x7c) + uVar2)) {
        if ((ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98)) <= uVar5) {
LAB_10ad62318:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10ad6231c);
          (*pcVar3)();
        }
        if (*(char *)(*(long *)(param_1 + 0x98) + uVar5) != '\0') {
          if ((ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 3) <= uVar5)
          goto LAB_10ad62318;
          puVar6 = (ulong *)(*(long *)(param_1 + 0x80) + uVar5 * 8);
          goto LAB_10ad62288;
        }
      }
    }
  }
  else {
    uVar5 = param_2[2];
    if ((uVar5 < 0x200) && (param_1 = param_1 + uVar5 * 0x18, *(ulong *)(param_1 + 0x1c8) == uVar5))
    {
      puVar6 = (ulong *)(param_1 + 0x1d0);
LAB_10ad62288:
      uVar5 = *puVar6 & 0xffffffffffffff00;
      uVar7 = *puVar6 & 0xff;
      uVar4 = 1;
      goto LAB_10ad62310;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
  uVar7 = 0;
LAB_10ad62310:
  auVar8._0_8_ = uVar7 | uVar5;
  auVar8._8_8_ = uVar4;
  return auVar8;
}



/* Entry: 10ad623e0; end: 10ad6254f;  */

void FUN_10ad623e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR___tlv_bootstrap_11340d750;
  ppuVar6 = &PTR___tlv_bootstrap_11340d750;
  ppuVar3 = ppuVar6;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar4 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar3 & 1) == 0) {
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar3,0x100000000);
    (*(code *)puVar1)();
    *(undefined1 *)ppuVar6 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar8 = (undefined8 *)ppuVar4[2];
  if (((puVar8 != (undefined8 *)0x0) && (lVar7 = puVar8[1], *(char *)(lVar7 + 0x12) == '\x01')) &&
     (((*(byte *)(lVar7 + 0x42) | *(byte *)(lVar7 + 0x43)) & 1) != 0)) {
    FUN_10a192960(puVar8,0x90c70fa9,&DAT_10f6a8bf4);
    puVar5 = puVar8;
    FUN_10a1333cc();
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_1;
      puVar5[1] = 0;
      puVar5[2] = param_2;
      *(undefined4 *)(puVar5 + 3) = 0x90c70fa9;
      *(undefined2 *)((long)puVar5 + 0x1c) = 2;
      *(undefined1 *)((long)puVar5 + 0x1e) = 3;
      if ((*(byte *)(puVar8 + 0x38) & 1) == 0) goto LAB_10ad6254c;
      puVar8[0x18] = puVar8[0x18] + 1;
    }
    puVar5 = puVar8;
    FUN_10a1333cc();
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = param_1;
      puVar5[1] = 0;
      puVar5[2] = param_3;
      *(undefined4 *)(puVar5 + 3) = 0x90c70fa9;
      *(undefined2 *)((long)puVar5 + 0x1c) = 2;
      *(undefined1 *)((long)puVar5 + 0x1e) = 6;
      if ((*(byte *)(puVar8 + 0x38) & 1) == 0) {
LAB_10ad6254c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ad62550);
        (*pcVar2)();
      }
      puVar8[0x18] = puVar8[0x18] + 1;
    }
  }
  return;
}



/* Entry: 10ad62550; end: 10ad6275f;  */

void FUN_10ad62550(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if ((long)param_3 - (long)param_5 == 0) {
    *param_1 = (long)param_6;
    param_1[1] = (long)param_7;
  }
  else if ((long)param_5 - (long)param_7 == 0) {
    *param_1 = (long)param_2;
    param_1[1] = (long)param_3;
    param_7 = param_5;
  }
  else {
    puVar2 = param_3 + -3;
    if (puVar2 == param_5) {
      uVar15 = param_3[-2];
      uVar9 = param_3[-3];
      uVar5 = param_3[-1];
      do {
        puVar10 = puVar2;
        uVar16 = param_5[-2];
        uVar14 = param_5[-3];
        puVar2 = param_5 + -1;
        param_5 = param_5 + -3;
        puVar10[2] = *puVar2;
        puVar10[1] = uVar16;
        *puVar10 = uVar14;
        param_3 = param_3 + -3;
        puVar2 = puVar10 + -3;
      } while (param_5 != param_7);
      puVar10[-2] = uVar15;
      puVar10[-3] = uVar9;
      puVar10[-1] = uVar5;
      param_4 = param_2;
      param_5 = param_3;
    }
    else {
      puVar10 = param_5 + -3;
      if (puVar10 == param_7) {
        uVar15 = param_7[1];
        uVar9 = *param_7;
        uVar5 = param_7[2];
        puVar10 = param_7;
        param_5 = param_7;
        puVar2 = param_7;
        while (puVar2 = puVar2 + 3, puVar2 != param_3) {
          uVar16 = puVar2[1];
          uVar14 = *puVar2;
          puVar10[2] = puVar2[2];
          puVar10[1] = uVar16;
          *puVar10 = uVar14;
          param_5 = param_5 + 3;
          puVar10 = puVar10 + 3;
        }
        param_3[-2] = uVar15;
        param_3[-3] = uVar9;
        param_3[-1] = uVar5;
        param_4 = param_6;
      }
      else {
        lVar6 = (long)param_3 - (long)param_5 >> 3;
        lVar8 = lVar6 * -0x5555555555555555;
        lVar7 = (long)param_5 - (long)param_7 >> 3;
        lVar4 = lVar7 * -0x5555555555555555;
        lVar12 = lVar8;
        if (lVar8 + lVar7 * 0x5555555555555555 == 0) {
          do {
            uVar5 = puVar2[2];
            uVar14 = puVar2[1];
            uVar15 = *puVar2;
            uVar9 = puVar10[2];
            uVar16 = *puVar10;
            puVar2[1] = puVar10[1];
            *puVar2 = uVar16;
            puVar2[2] = uVar9;
            puVar10[1] = uVar14;
            *puVar10 = uVar15;
            puVar10[2] = uVar5;
            if (puVar2 == param_5) break;
            puVar2 = puVar2 + -3;
            bVar1 = puVar10 != param_7;
            puVar10 = puVar10 + -3;
          } while (bVar1);
        }
        else {
          do {
            lVar3 = lVar4;
            lVar4 = 0;
            if (lVar3 != 0) {
              lVar4 = lVar12 / lVar3;
            }
            lVar4 = lVar12 - lVar4 * lVar3;
            lVar12 = lVar3;
          } while (lVar4 != 0);
          puVar2 = param_3 + lVar3 * -3;
          do {
            uVar15 = puVar2[1];
            uVar9 = *puVar2;
            uVar5 = puVar2[2];
            puVar2 = puVar2 + 3;
            puVar11 = puVar2;
            puVar10 = puVar2 + -lVar6;
            do {
              puVar13 = puVar10;
              uVar16 = puVar13[-2];
              uVar14 = puVar13[-3];
              puVar11[-1] = puVar13[-1];
              puVar11[-2] = uVar16;
              puVar11[-3] = uVar14;
              lVar12 = ((long)puVar13 - (long)param_7 >> 3) * -0x5555555555555555;
              lVar4 = lVar12 + lVar6 * 0x5555555555555555;
              puVar10 = puVar13 + -lVar6;
              if (lVar4 == 0 || lVar12 < lVar8) {
                puVar10 = param_3 + lVar4 * 3;
              }
              puVar11 = puVar13;
            } while (puVar10 != puVar2);
            puVar13[-1] = uVar5;
            puVar13[-2] = uVar15;
            puVar13[-3] = uVar9;
          } while (puVar2 != param_3);
          param_4 = param_3 + -lVar7;
          param_5 = param_4;
        }
      }
    }
    *param_1 = (long)param_4;
    param_1[1] = (long)param_5;
  }
  param_1[2] = (long)param_6;
  param_1[3] = (long)param_7;
  return;
}



/* Entry: 10ad62760; end: 10ad62773;  */

void FUN_10ad62760(undefined8 param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f6a8ab3;
  FUN_109ffde64(&UNK_10f6a8ab3);
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (param_3 < param_2) {
    return;
  }
  __ZNSt3__15mutex4lockEv(puVar1 + 0x600);
  FUN_10a15387c((double)(param_3 - param_2),puVar1,puVar1 + 0x600,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(puVar1 + 0x600);
  return;
}



/* Entry: 10ad62774; end: 10ad627b7;  */

void FUN_10ad62774(long param_1,ulong param_2,ulong param_3)

{
  if (param_2 < 0xaaaaaaaaaaaaaab) {
    __Znwm(param_2 * 0x18);
    return;
  }
  func_0x000109ffded8();
  if (param_3 < param_2) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x600);
  FUN_10a15387c((double)(param_3 - param_2),param_1,param_1 + 0x600,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x600);
  return;
}



/* Entry: 10ad627b8; end: 10ad62823;  */

void FUN_10ad627b8(long param_1,ulong param_2,ulong param_3)

{
  if (param_3 < param_2) {
    return;
  }
  __ZNSt3__15mutex4lockEv(param_1 + 0x600);
  FUN_10a15387c((double)(param_3 - param_2),param_1,param_1 + 0x600,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0x600);
  return;
}



/* Entry: 10ad62824; end: 10ad628bb;  */

long FUN_10ad62824(long param_1)

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



/* Entry: 10ad628bc; end: 10ad62a83;  */

long * FUN_10ad628bc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = param_2;
  plVar6 = param_1 + 1;
  *plVar6 = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((*(long *)(param_2 + 0x100) != 0) && (*(long *)(*(long *)(param_2 + 0x100) + 0x250) != 0)) {
    FUN_10a5acda4(&plStack_50);
    plStack_40 = (long *)0x0;
    plStack_38 = (long *)0x0;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48;
      __ZNSt3__119__shared_weak_count4lockEv();
      plStack_38 = plVar4;
      if (plVar4 != (long *)0x0) {
        plStack_40 = plStack_50;
      }
    }
    FUN_10ad62a84(plVar6,&plStack_40);
    plVar4 = plStack_38;
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
      if (lVar5 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (plStack_48 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    lVar5 = *plVar6;
    if (lVar5 != 0) goto LAB_10ad62a44;
  }
  plVar4 = (long *)0x110;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  plStack_40 = plVar4 + 3;
  *(undefined4 *)plStack_40 = 0;
  *plVar4 = (long)&PTR_FUN_110c70fc8;
  *(undefined4 *)((long)plVar4 + 0x1c) = 0;
  *(undefined4 *)(plVar4 + 4) = 0;
  plVar4[5] = 0;
  plVar4[6] = 0;
  plVar4[0x14] = 0;
  plVar4[0x13] = 0;
  plVar4[0x16] = 0;
  plVar4[0x15] = 0;
  plVar4[0x18] = 0;
  plVar4[0x17] = 0;
  plVar4[0x1a] = 0;
  plVar4[0x19] = 0;
  plVar4[0x1b] = 0;
  *(undefined4 *)(plVar4 + 0x1c) = 0x3f800000;
  plVar4[0x1e] = 0;
  plVar4[0x1d] = 0;
  plVar4[0x20] = 0;
  plVar4[0x1f] = 0;
  *(undefined4 *)(plVar4 + 0x21) = 0x3f800000;
  *(undefined8 *)((long)plVar4 + 0x8c) = 0;
  *(undefined8 *)((long)plVar4 + 0x84) = 0;
  plVar4[0x10] = 0;
  plVar4[0xf] = 0;
  plVar4[0xe] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[7] = 0;
  plStack_38 = plVar4;
  FUN_10ad62a84(plVar6,&plStack_40);
  plVar4 = plStack_38;
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
    if (lVar5 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  lVar5 = *plVar6;
LAB_10ad62a44:
  param_1[3] = lVar5;
  *(undefined4 *)(param_1 + 4) = 1;
  return param_1;
}



/* Entry: 10ad62a84; end: 10ad62ae7;  */

undefined8 * FUN_10ad62a84(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10ad62ae8; end: 10ad62e87;  */

/* WARNING: Possible PIC construction at 0x00010ad62b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad62bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad62c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad62d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad62d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010ad62e30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad62d98) */
/* WARNING: Removing unreachable block (ram,0x00010ad62da0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62db0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62db4) */
/* WARNING: Removing unreachable block (ram,0x00010ad62db8) */
/* WARNING: Removing unreachable block (ram,0x00010ad62dec) */
/* WARNING: Removing unreachable block (ram,0x00010ad62e00) */
/* WARNING: Removing unreachable block (ram,0x00010ad62e04) */
/* WARNING: Removing unreachable block (ram,0x00010ad62e08) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d08) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d10) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d24) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d28) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d2c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d30) */
/* WARNING: Removing unreachable block (ram,0x00010ad62d64) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c6c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c74) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c84) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c88) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c8c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62cc0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62cd4) */
/* WARNING: Removing unreachable block (ram,0x00010ad62cd8) */
/* WARNING: Removing unreachable block (ram,0x00010ad62cdc) */
/* WARNING: Removing unreachable block (ram,0x00010ad62bc8) */
/* WARNING: Removing unreachable block (ram,0x00010ad62bd0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62be8) */
/* WARNING: Removing unreachable block (ram,0x00010ad62bec) */
/* WARNING: Removing unreachable block (ram,0x00010ad62bf0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62bf4) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c28) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c38) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c3c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62c40) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b3c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b44) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b64) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b4c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b5c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62b6c) */
/* WARNING: Removing unreachable block (ram,0x00010ad62ba0) */
/* WARNING: Removing unreachable block (ram,0x00010ad62e34) */
/* WARNING: Removing unreachable block (ram,0x00010ad62e50) */

void FUN_10ad62ae8(long param_1)

{
  undefined1 auStack_40 [16];
  
  if ((*(long *)(param_1 + 0x18) != 0) && ((bRam000000011330a9e8 >> 2 & 1) != 0)) {
    FUN_10ae06f30(1,4,&UNK_10f6a8bf8,&UNK_10f6a8c37,0x59,&UNK_10f6a8c87,auStack_40);
    return;
  }
  return;
}



/* Entry: 10ad62e88; end: 10ad62f3f;  */

void FUN_10ad62e88(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x20) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad63028(lStack_30);
    func_0x00010ad6306c(lStack_30);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad62f40; end: 10ad63027;  */

void FUN_10ad62f40(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((((param_2 == 0) || (lVar6 = *(long *)(param_2 + 0x100), lVar6 == 0)) ||
      (*(long *)(lVar6 + 0x250) == 0)) ||
     (func_0x00010a152370(&lStack_40), plStack_38 == (long *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  plVar4 = plStack_38;
  __ZNSt3__119__shared_weak_count4lockEv();
  lVar3 = lStack_40;
  if (plStack_38 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if ((plVar4 == (long *)0x0) || (lVar3 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    func_0x00010a5a3574(&lStack_40,*(undefined8 *)(lVar6 + 0x250));
    *param_1 = 0;
    param_1[1] = 0;
    if (plStack_38 != (long *)0x0) {
      plVar5 = plStack_38;
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1[1] = (long)plVar5;
      if (plVar5 != (long *)0x0) {
        *param_1 = lStack_40;
      }
      if (plStack_38 != (long *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  plVar5 = plVar4 + 1;
  do {
    lVar6 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar6 != 0) {
    return;
  }
  (**(code **)(*plVar4 + 0x10))(plVar4);
  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
  return;
}



/* Entry: 10ad63028; end: 10ad630b7;  */

void FUN_10ad63028(long param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010ad63914(&uStack_40);
  *(undefined4 *)(param_1 + 0xc0) = uStack_40;
  *(undefined4 *)(param_1 + 0xc4) = uStack_3c;
  *(undefined8 *)(param_1 + 0xd0) = uStack_30;
  *(undefined8 *)(param_1 + 200) = uStack_38;
  *(undefined1 *)(param_1 + 0xd8) = uStack_28;
  return;
}



/* Entry: 10ad630b8; end: 10ad63167;  */

void FUN_10ad630b8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x28) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad63da4(lStack_30 + 0xc0);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad63168; end: 10ad63213;  */

void FUN_10ad63168(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x30) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad63214();
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad63214; end: 10ad63257;  */

void FUN_10ad63214(long param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10ad63fa4(&uStack_40);
  *(undefined4 *)(param_1 + 0xe0) = uStack_40;
  *(undefined4 *)(param_1 + 0xe4) = uStack_3c;
  *(undefined8 *)(param_1 + 0xf0) = uStack_30;
  *(undefined8 *)(param_1 + 0xe8) = uStack_38;
  *(undefined1 *)(param_1 + 0xf8) = uStack_28;
  return;
}



/* Entry: 10ad63258; end: 10ad63307;  */

void FUN_10ad63258(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x38) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad641ec(lStack_30 + 0xe0);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad63308; end: 10ad633c7;  */

void FUN_10ad63308(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x40) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad633c8(lStack_30);
    func_0x00010ad63414(lStack_30);
    func_0x00010ad63460(lStack_30);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad633c8; end: 10ad634ab;  */

void FUN_10ad633c8(long param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10ad643ec(&uStack_40);
  *(undefined4 *)(param_1 + 0x100) = uStack_40;
  *(undefined4 *)(param_1 + 0x104) = uStack_3c;
  *(undefined8 *)(param_1 + 0x110) = uStack_30;
  *(undefined8 *)(param_1 + 0x108) = uStack_38;
  *(undefined1 *)(param_1 + 0x118) = uStack_28;
  return;
}



/* Entry: 10ad634ac; end: 10ad6355b;  */

void FUN_10ad634ac(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x48) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad64ac4(lStack_30 + 0x100);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad6355c; end: 10ad6360b;  */

void FUN_10ad6355c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x50) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad64cd4(lStack_30 + 0x120);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad6360c; end: 10ad636bb;  */

void FUN_10ad6360c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x58) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad64ee4(lStack_30 + 0x140);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad636bc; end: 10ad63767;  */

void FUN_10ad636bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x60) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad63768();
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad63768; end: 10ad637b3;  */

void FUN_10ad63768(long param_1)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_10ad650f4(&uStack_40);
  *(undefined4 *)(param_1 + 0x160) = uStack_40;
  *(undefined4 *)(param_1 + 0x164) = uStack_3c;
  *(undefined8 *)(param_1 + 0x170) = uStack_30;
  *(undefined8 *)(param_1 + 0x168) = uStack_38;
  *(undefined1 *)(param_1 + 0x178) = uStack_28;
  return;
}



/* Entry: 10ad637b4; end: 10ad6387b;  */

void FUN_10ad637b4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (param_1[3] != 0) {
    puVar4 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x68) = (double)(long)puVar4;
    __ZNSt3__16chrono12steady_clock3nowEv();
    *(double *)(param_1[3] + 0x70) = (double)(long)puVar4;
  }
  FUN_10ad62f40(&lStack_30,*param_1);
  if (lStack_30 != 0) {
    FUN_10ad6533c(lStack_30 + 0x160);
    FUN_10ad6554c(lStack_30 + 0x180);
  }
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_28);
      return;
    }
  }
  return;
}



/* Entry: 10ad6387c; end: 10ad639cb;  */

long * FUN_10ad6387c(long *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)param_1[2];
  param_1[5] = 0;
  lVar3 = (long)puVar1 - (long)puVar4;
  while (uVar2 = lVar3 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar4);
    puVar1 = (undefined8 *)param_1[2];
    puVar4 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar4;
    lVar3 = (long)puVar1 - (long)puVar4;
  }
  if (uVar2 == 1) {
    lVar3 = 0x100;
  }
  else {
    if (uVar2 != 2) goto LAB_10ad638f8;
    lVar3 = 0x200;
  }
  param_1[4] = lVar3;
LAB_10ad638f8:
  for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    __ZdlPv(*puVar4);
  }
  func_0x000108a9fa1c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ad639cc; end: 10ad63b5b;  */

undefined1 * FUN_10ad639cc(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8e80;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad63b5c);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8e80);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad63b5c; end: 10ad63c13;  */

undefined ** FUN_10ad63b5c(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8e93;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad63da4);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8e93);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad63c14; end: 10ad63da3;  */

undefined1 * FUN_10ad63c14(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8e93;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad63da4);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8e93);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad63da4; end: 10ad63fa3;  */

void FUN_10ad63da4(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8e80;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad63fa0);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0xf80);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0xf80,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0xf80);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad63f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad63fa4; end: 10ad6405b;  */

undefined ** FUN_10ad63fa4(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8eb5;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad641ec);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8eb5);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad6405c; end: 10ad641eb;  */

undefined1 * FUN_10ad6405c(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8eb5;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad641ec);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8eb5);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad641ec; end: 10ad643eb;  */

void FUN_10ad641ec(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  
  if ((param_1[1] & 1U) == 0) {
    param_1[1] = '\x01';
    if (*param_1 == '\x01') {
      *param_1 = '\0';
      puVar6 = PTR___tlv_bootstrap_11340d750;
      ppuVar11 = &PTR___tlv_bootstrap_11340d750;
      ppuVar8 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d750)();
      ppuVar9 = &PTR___tlv_bootstrap_11340d738;
      if (((ulong)*ppuVar8 & 1) == 0) {
        ppuVar8 = ppuVar9;
        (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
        __tlv_atexit(0x10a132a8c,ppuVar8,0x100000000);
        (*(code *)puVar6)();
        *(undefined1 *)ppuVar11 = 1;
      }
      (*(code *)PTR___tlv_bootstrap_11340d738)();
      plVar13 = (long *)ppuVar9[2];
      if (plVar13 != (long *)0x0) {
        if (*(long *)(param_1 + 8) != 0) {
          lVar12 = plVar13[1];
          bVar5 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
          if ((((bVar5 & 1) != 0) || ((*(byte *)(lVar12 + 0x40) & 1) != 0)) ||
             (*(char *)(lVar12 + 0x3f) == '\x01')) {
            uVar15 = cntfrq_el0;
            InstructionSynchronizationBarrier();
            uVar14 = cntvct_el0;
            if (uVar15 != 1000000000) {
              uVar3 = 0;
              if (uVar15 != 0) {
                uVar3 = uVar14 / uVar15;
              }
              uVar4 = 0;
              if (uVar15 != 0) {
                uVar4 = ((uVar14 - uVar3 * uVar15) * 1000000000) / uVar15;
              }
              uVar14 = uVar4 + uVar3 * 1000000000;
            }
            if ((bVar5 & 1) != 0) {
              uVar1 = *(undefined4 *)(param_1 + 4);
              uVar2 = *(undefined2 *)(param_1 + 2);
              plVar10 = plVar13;
              FUN_10a1333cc();
              if (plVar10 != (long *)0x0) {
                *plVar10 = (long)&UNK_10f6a8eb5;
                plVar10[1] = 0;
                plVar10[2] = uVar14;
                *(undefined4 *)(plVar10 + 3) = uVar1;
                *(undefined2 *)((long)plVar10 + 0x1c) = uVar2;
                *(undefined1 *)((long)plVar10 + 0x1e) = 6;
                if ((*(byte *)(plVar13 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad643e8);
                  (*pcVar7)();
                }
                plVar13[0x18] = plVar13[0x18] + 1;
              }
            }
            if (*(char *)(plVar13[1] + 0x40) == '\x01') {
              uVar15 = *(ulong *)(param_1 + 8);
              if (uVar15 <= uVar14) {
                lVar12 = *plVar13;
                __ZNSt3__15mutex4lockEv(lVar12 + 0x1000);
                FUN_10a15387c((double)(uVar14 - uVar15),lVar12,lVar12 + 0x1000,uVar15,uVar14);
                __ZNSt3__15mutex6unlockEv(lVar12 + 0x1000);
              }
            }
          }
        }
        if (((*(char *)(plVar13[1] + 0x41) == '\x01') && (param_1[0x18] == '\x01')) &&
           (plVar13 = (long *)plVar13[0xb], plVar13 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010ad64394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar13 + 0x30))(plVar13,*(undefined8 *)(param_1 + 0x10));
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10ad643ec; end: 10ad644a3;  */

undefined ** FUN_10ad643ec(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8ecd;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad64634);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8ecd);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad644a4; end: 10ad64633;  */

undefined1 * FUN_10ad644a4(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8ecd;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad64634);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8ecd);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad64634; end: 10ad646eb;  */

undefined ** FUN_10ad64634(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8ee5;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad6487c);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8ee5);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad646ec; end: 10ad6487b;  */

undefined1 * FUN_10ad646ec(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8ee5;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad6487c);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8ee5);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



/* Entry: 10ad6487c; end: 10ad64933;  */

undefined ** FUN_10ad6487c(undefined **param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined2 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  long *plVar17;
  undefined *puVar18;
  undefined8 uStack_48;
  
  puVar18 = PTR___tlv_bootstrap_11340d750;
  ppuVar11 = &PTR___tlv_bootstrap_11340d750;
  ppuVar9 = ppuVar11;
  (*(code *)PTR___tlv_bootstrap_11340d750)();
  ppuVar10 = &PTR___tlv_bootstrap_11340d738;
  if (((ulong)*ppuVar9 & 1) == 0) {
    ppuVar9 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
    __tlv_atexit(0x10a132a8c,ppuVar9,0x100000000);
    (*(code *)puVar18)();
    *(undefined1 *)ppuVar11 = 1;
  }
  (*(code *)PTR___tlv_bootstrap_11340d738)();
  puVar14 = (undefined8 *)ppuVar10[2];
  if (puVar14 != (undefined8 *)0x0) {
    cVar2 = *(char *)(puVar14[1] + 0x1e);
    *(char *)param_1 = cVar2;
    *(char *)((long)param_1 + 1) = '\0';
    ((char *)((long)param_1 + 2))[0] = '\x0e';
    ((char *)((long)param_1 + 2))[1] = '\0';
    ppuVar11 = &PTR___tlv_bootstrap_11340dd08;
    (*(code *)PTR___tlv_bootstrap_11340dd08)();
    iVar15 = *(int *)ppuVar11;
    if (*(int *)ppuVar11 == 0) {
      uStack_48 = 0;
      _pthread_threadid_np(0,&uStack_48);
      *(int *)ppuVar11 = (int)uStack_48;
      iVar15 = (int)uStack_48;
    }
    param_1[1] = (undefined *)0x0;
    *(int *)((long)param_1 + 4) = iVar15;
    param_1[2] = (undefined *)0x0;
    *(char *)(param_1 + 3) = '\0';
    if ((cVar2 != '\0') && (puVar14 != (undefined8 *)0x0)) {
      lVar16 = puVar14[1];
      bVar7 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar7 & 1) != 0) ||
         (((*(byte *)(lVar16 + 0x40) & 1) != 0 || (*(char *)(lVar16 + 0x3f) == '\x01')))) {
        uVar6 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        puVar18 = (undefined *)cntvct_el0;
        if (uVar6 != 1000000000) {
          uVar4 = 0;
          if (uVar6 != 0) {
            uVar4 = (ulong)puVar18 / uVar6;
          }
          uVar5 = 0;
          if (uVar6 != 0) {
            uVar5 = (((long)puVar18 - uVar4 * uVar6) * 1000000000) / uVar6;
          }
          puVar18 = (undefined *)(uVar5 + uVar4 * 1000000000);
        }
        param_1[1] = puVar18;
        if ((bVar7 & 1) != 0) {
          uVar1 = *(undefined4 *)((long)param_1 + 4);
          uVar3 = *(undefined2 *)((long)param_1 + 2);
          puVar12 = puVar14;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            *puVar12 = &UNK_10f6a8efc;
            puVar12[1] = 0;
            puVar12[2] = puVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar3;
            *(undefined1 *)((long)puVar12 + 0x1e) = 3;
            if ((*(byte *)(puVar14 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10ad64ac4);
              (*pcVar8)();
            }
            puVar14[0x18] = puVar14[0x18] + 1;
          }
        }
      }
      if (*(char *)(puVar14[1] + 0x41) == '\x01') {
        plVar17 = (long *)puVar14[0xb];
        if (plVar17 != (long *)0x0) {
          plVar13 = plVar17;
          (**(code **)(*plVar17 + 0x28))(plVar17,&UNK_10f6a8efc);
          param_1[2] = (undefined *)plVar13;
        }
        *(bool *)(param_1 + 3) = plVar17 != (long *)0x0;
      }
    }
    return param_1;
  }
  param_1[1] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  return ppuVar10;
}



/* Entry: 10ad64934; end: 10ad64ac3;  */

undefined1 * FUN_10ad64934(undefined1 *param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uStack_48;
  
  *param_1 = (char)param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0xe;
  ppuVar8 = &PTR___tlv_bootstrap_11340dd08;
  (*(code *)PTR___tlv_bootstrap_11340dd08)();
  iVar11 = *(int *)ppuVar8;
  if (*(int *)ppuVar8 == 0) {
    uStack_48 = 0;
    _pthread_threadid_np(0,&uStack_48);
    *(int *)ppuVar8 = (int)uStack_48;
    iVar11 = (int)uStack_48;
  }
  *(ulong *)(param_1 + 8) = 0;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x18] = 0;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar12 = param_3[1];
    bVar6 = *(byte *)(lVar12 + 0x42) | *(byte *)(lVar12 + 0x43);
    if (((bVar6 & 1) != 0) ||
       (((*(byte *)(lVar12 + 0x40) & 1) != 0 || (*(char *)(lVar12 + 0x3f) == '\x01')))) {
      uVar5 = cntfrq_el0;
      InstructionSynchronizationBarrier();
      uVar14 = cntvct_el0;
      if (uVar5 != 1000000000) {
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar14 / uVar5;
        }
        uVar4 = 0;
        if (uVar5 != 0) {
          uVar4 = ((uVar14 - uVar3 * uVar5) * 1000000000) / uVar5;
        }
        uVar14 = uVar4 + uVar3 * 1000000000;
      }
      *(ulong *)(param_1 + 8) = uVar14;
      if ((bVar6 & 1) != 0) {
        uVar1 = *(undefined4 *)(param_1 + 4);
        uVar2 = *(undefined2 *)(param_1 + 2);
        puVar9 = param_3;
        FUN_10a1333cc();
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &UNK_10f6a8efc;
          puVar9[1] = 0;
          puVar9[2] = uVar14;
          *(undefined4 *)(puVar9 + 3) = uVar1;
          *(undefined2 *)((long)puVar9 + 0x1c) = uVar2;
          *(undefined1 *)((long)puVar9 + 0x1e) = 3;
          if ((*(byte *)(param_3 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10ad64ac4);
            (*pcVar7)();
          }
          param_3[0x18] = param_3[0x18] + 1;
        }
      }
    }
    if (*(char *)(param_3[1] + 0x41) == '\x01') {
      plVar13 = (long *)param_3[0xb];
      if (plVar13 != (long *)0x0) {
        plVar10 = plVar13;
        (**(code **)(*plVar13 + 0x28))(plVar13,&UNK_10f6a8efc);
        *(long **)(param_1 + 0x10) = plVar10;
      }
      param_1[0x18] = plVar13 != (long *)0x0;
    }
  }
  return param_1;
}



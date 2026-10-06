/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 007179c0; end: 00717a23; -[DJPromise setException:] */

void FUN_007179c0(void)

{
  FUN_00717a5c();
  func_0x00717a90();
  func_0x00717aa0();
  func_0x00717b14();
  func_0x00717a7c();
  func_0x00717a6c();
  return;
}



/* Entry: 00717a24; end: 00717a2f;  */

void FUN_00717a24(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0078ddf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_2,PTR_s_setException__00abe488,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 00717a30; end: 00717a5b; -[DJPromise .cxx_destruct] */

void FUN_00717a30(long param_1)

{
  func_0x00717b0c(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00717a5c; end: 00717b4f;  */

void FUN_00717a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)(param_3);
  return;
}



/* Entry: 00717b50; end: 00717bef;  */

void FUN_00717b50(void)

{
  code *pcVar1;
  
  ___cxa_rethrow();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x717bcc);
  (*pcVar1)();
}



/* Entry: 00717bf0; end: 0071805f;  */

void FUN_00717bf0(qword *param_1,long *param_2,qword *param_3,undefined8 *param_4,code *param_5)

{
  char cVar1;
  qword qVar2;
  qword qVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  code *pcVar10;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  undefined8 *puVar13;
  code *pcVar14;
  code *pcVar15;
  code *extraout_x11;
  code *pcVar16;
  code *pcVar17;
  long *plVar18;
  qword qStack_a0;
  qword qStack_98;
  qword qStack_90;
  qword qStack_88;
  qword qStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  char *pcStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plStack_78 = param_2 + 5;
  uStack_70 = 1;
  __ZNSt3__15mutex4lockEv();
  plStack_60 = (long *)*param_4;
  pcStack_68 = (char *)*param_3;
  plVar18 = param_2;
  FUN_00718618(param_2,&pcStack_68);
  if (plVar18 != (long *)0x0) {
    FUN_007186e8(param_1,plVar18 + 4);
    if (*param_1 != 0) goto LAB_00717ff0;
    func_0x00718724(param_2,plVar18);
    FUN_0047df30(param_1);
  }
  (*param_5)(&qStack_90,param_4);
  qStack_a0 = *param_3;
  qStack_98 = qStack_80;
  pcVar6 = *(code **)(qStack_a0 + 8);
  func_0x00718160();
  pcVar17 = (code *)param_2[1];
  if (pcVar17 != (code *)0x0) {
    pcVar16 = pcVar17 + -1;
    if (((ulong)pcVar17 & (ulong)pcVar16) == 0) {
      param_5 = (code *)((ulong)pcVar16 & (ulong)pcVar6);
    }
    else {
      param_5 = pcVar6;
      if (pcVar17 <= pcVar6) {
        uVar7 = 0;
        if (pcVar17 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar17;
        }
        param_5 = pcVar6 + -(uVar7 * (long)pcVar17);
      }
    }
    plVar18 = *(long **)(*param_2 + (long)param_5 * 8);
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_00717d30;
          pcVar10 = (code *)plVar18[1];
          if (pcVar10 != pcVar6) break;
          uVar7 = (ulong)(plVar18 + 2);
          FUN_007181a8(uVar7,&qStack_a0);
          if ((uVar7 & 1) != 0) goto LAB_00717fc8;
        }
        if (((ulong)pcVar17 & (ulong)pcVar16) == 0) {
          pcVar10 = (code *)((ulong)pcVar10 & (ulong)pcVar16);
        }
        else if (pcVar17 <= pcVar10) {
          uVar7 = 0;
          if (pcVar17 != (code *)0x0) {
            uVar7 = (ulong)pcVar10 / (ulong)pcVar17;
          }
          pcVar10 = pcVar10 + -(uVar7 * (long)pcVar17);
        }
      } while (pcVar10 == param_5);
    }
  }
LAB_00717d30:
  qVar3 = qStack_88;
  qVar2 = qStack_90;
  pcVar8 = segment_command_00000020.segname + 8;
  __Znwm();
  plVar18 = param_2 + 2;
  uStack_58 = 1;
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  pcVar8[4] = '\0';
  pcVar8[5] = '\0';
  pcVar8[6] = '\0';
  pcVar8[7] = '\0';
  *(code **)(pcVar8 + 8) = pcVar6;
  *(qword *)(pcVar8 + 0x18) = qStack_98;
  *(qword *)(pcVar8 + 0x10) = qStack_a0;
  *(qword *)(pcVar8 + 0x28) = qVar3;
  *(qword *)(pcVar8 + 0x20) = qVar2;
  if (qVar3 != 0) {
    plVar11 = (long *)(qVar3 + 0x10);
    do {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_68 = pcVar8;
  plStack_60 = plVar18;
  if ((pcVar17 == (code *)0x0) ||
     (*(float *)(param_2 + 4) * (float)pcVar17 < (float)(param_2[3] + 1))) {
    bVar4 = (code *)((long)&MACH_HEADER.magic + 2) < pcVar17;
    bVar5 = pcVar17 == (code *)((long)&MACH_HEADER.magic + 3);
    func_0x007193d4((long)pcVar17 << 1);
    pcVar16 = extraout_x8;
    if (!bVar4 || bVar5) {
      pcVar16 = extraout_x9;
    }
    if (pcVar16 + -1 == (code *)0x0) {
      pcVar16 = (code *)((long)&MACH_HEADER.magic + 2);
    }
    else if (((ulong)pcVar16 & (ulong)(pcVar16 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pcVar17 = (code *)param_2[1];
    if (pcVar17 < pcVar16) {
LAB_00717df0:
      if ((ulong)pcVar16 >> 0x3d != 0) {
        FUN_0040cee8();
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x71801c);
        (*pcVar17)();
      }
      lVar9 = (long)pcVar16 << 3;
      __Znwm(lVar9);
      FUN_007188ec(param_2,lVar9);
      param_2[1] = (long)pcVar16;
      lVar9 = *param_2;
      for (pcVar17 = (code *)0x0; pcVar16 != pcVar17; pcVar17 = pcVar17 + 1) {
        *(undefined8 *)(lVar9 + (long)pcVar17 * 8) = 0;
      }
      plVar11 = (long *)*plVar18;
      pcVar17 = pcVar16;
      if (plVar11 != (long *)0x0) {
        pcVar14 = (code *)plVar11[1];
        pcVar10 = pcVar16 + -1;
        uVar7 = 0;
        if (pcVar16 != (code *)0x0) {
          uVar7 = (ulong)pcVar14 / (ulong)pcVar16;
        }
        pcVar15 = pcVar14;
        if (pcVar16 <= pcVar14) {
          pcVar15 = pcVar14 + -(uVar7 * (long)pcVar16);
        }
        if (((ulong)pcVar16 & (ulong)pcVar10) == 0) {
          pcVar15 = (code *)((ulong)pcVar14 & (ulong)pcVar10);
        }
        *(long **)(lVar9 + (long)pcVar15 * 8) = plVar18;
        while (plVar12 = plVar11, plVar11 = (long *)*plVar12, plVar11 != (long *)0x0) {
          pcVar14 = (code *)plVar11[1];
          if (((ulong)pcVar16 & (ulong)pcVar10) == 0) {
            pcVar14 = (code *)((ulong)pcVar14 & (ulong)pcVar10);
          }
          else if (pcVar16 <= pcVar14) {
            uVar7 = 0;
            if (pcVar16 != (code *)0x0) {
              uVar7 = (ulong)pcVar14 / (ulong)pcVar16;
            }
            pcVar14 = pcVar14 + -(uVar7 * (long)pcVar16);
          }
          if (pcVar14 != pcVar15) {
            if (*(long *)(lVar9 + (long)pcVar14 * 8) == 0) {
              *(long **)(lVar9 + (long)pcVar14 * 8) = plVar12;
              pcVar15 = pcVar14;
            }
            else {
              func_0x00719338();
              lVar9 = extraout_x8_00;
              pcVar10 = extraout_x9_00;
              plVar11 = extraout_x10;
              pcVar15 = extraout_x11;
            }
          }
        }
      }
    }
    else if (pcVar16 < pcVar17) {
      pcVar10 = (code *)(long)((float)(ulong)param_2[3] / *(float *)(param_2 + 4));
      if ((pcVar17 < (code *)((long)&MACH_HEADER.magic + 3)) ||
         (((ulong)pcVar17 & (ulong)(pcVar17 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00719318();
      }
      if (pcVar16 <= pcVar10) {
        pcVar16 = pcVar10;
      }
      if (pcVar16 < pcVar17) {
        if (pcVar16 != (code *)0x0) goto LAB_00717df0;
        FUN_007188ec(param_2,0);
        param_2[1] = 0;
        pcVar17 = (code *)0x0;
      }
      else {
        pcVar17 = (code *)param_2[1];
      }
    }
    if (((ulong)pcVar17 & (ulong)(pcVar17 + -1)) == 0) {
      param_5 = (code *)((ulong)(pcVar17 + -1) & (ulong)pcVar6);
    }
    else {
      param_5 = pcVar6;
      if (pcVar17 <= pcVar6) {
        uVar7 = 0;
        if (pcVar17 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar17;
        }
        param_5 = pcVar6 + -(uVar7 * (long)pcVar17);
      }
    }
  }
  lVar9 = *param_2;
  puVar13 = *(undefined8 **)(lVar9 + (long)param_5 * 8);
  if (puVar13 == (undefined8 *)0x0) {
    *(long *)pcStack_68 = *plVar18;
    *plVar18 = (long)pcStack_68;
    *(long **)(lVar9 + (long)param_5 * 8) = plVar18;
    if (*(long *)pcStack_68 != 0) {
      pcVar6 = *(code **)(*(long *)pcStack_68 + 8);
      if (((ulong)pcVar17 & (ulong)(pcVar17 + -1)) == 0) {
        pcVar6 = (code *)((ulong)pcVar6 & (ulong)(pcVar17 + -1));
      }
      else if (pcVar17 <= pcVar6) {
        uVar7 = 0;
        if (pcVar17 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar17;
        }
        pcVar6 = pcVar6 + -(uVar7 * (long)pcVar17);
      }
      *(char **)(lVar9 + (long)pcVar6 * 8) = pcStack_68;
    }
  }
  else {
    *(undefined8 *)pcStack_68 = *puVar13;
    *puVar13 = pcStack_68;
  }
  pcStack_68 = (char *)0x0;
  param_2[3] = param_2[3] + 1;
  FUN_00718848(&pcStack_68);
LAB_00717fc8:
  param_1[1] = qStack_88;
  *param_1 = qStack_90;
  if (qStack_88 != 0) {
    plVar18 = (long *)(qStack_88 + 8);
    do {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *plVar18 = *plVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x007193ac();
LAB_00717ff0:
  FUN_0040d514(&plStack_78);
  return;
}



/* Entry: 00718060; end: 00718123;  */

void FUN_00718060(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x00719410();
  __ZNSt3__15mutex4lockEv();
  uStack_60 = *param_2;
  uStack_58 = *param_3;
  lVar1 = param_1;
  FUN_00718618(param_1,&uStack_60);
  if (lVar1 != 0) {
    FUN_007186e8(&uStack_60,lVar1 + 0x20);
    FUN_00718124(&uStack_40,&uStack_60);
    FUN_0047df30(&uStack_60);
    if ((*(long *)(lVar1 + 0x28) == 0) || (*(long *)(*(long *)(lVar1 + 0x28) + 8) == -1)) {
      func_0x00718724(param_1,lVar1);
    }
  }
  func_0x00719358();
  func_0x007193ac();
  return;
}



/* Entry: 00718124; end: 00718183;  */

undefined8 * FUN_00718124(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_0047df30(&uStack_30);
  return param_1;
}



/* Entry: 00718184; end: 007181a7;  */

ulong FUN_00718184(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if ((long)param_1 < 0) {
    pbVar3 = (byte *)(param_1 & 0x7fffffffffffffff);
    uVar2 = 0x1505;
    do {
      param_1 = uVar2;
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      uVar2 = param_1 * 0x21 ^ (ulong)bVar1;
    } while ((ulong)bVar1 != 0);
  }
  return param_1;
}



/* Entry: 007181a8; end: 007181c7;  */

void FUN_007181a8(void)

{
  func_0x00719304();
  func_0x007193fc();
  return;
}



/* Entry: 007181c8; end: 0071820f;  */

void FUN_007181c8(qword *param_1,qword *param_2,undefined8 *param_3,code *param_4)

{
  char cVar1;
  qword qVar2;
  qword qVar3;
  bool bVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  qword *pqVar10;
  long *plVar11;
  code *pcVar12;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  long *plVar13;
  long *plVar14;
  long *extraout_x10;
  undefined8 *puVar15;
  code *pcVar16;
  code *pcVar17;
  code *extraout_x11;
  code *pcVar18;
  code *pcVar19;
  long *plVar20;
  qword qStack_a0;
  qword qStack_98;
  qword qStack_90;
  qword qStack_88;
  qword qStack_80;
  long *plStack_78;
  undefined1 uStack_70;
  char *pcStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  pqVar10 = param_2;
  FUN_00718210();
  plVar11 = (long *)*pqVar10;
  plStack_78 = plVar11 + 5;
  uStack_70 = 1;
  __ZNSt3__15mutex4lockEv();
  plStack_60 = (long *)*param_3;
  pcStack_68 = (char *)*param_2;
  plVar20 = plVar11;
  FUN_00718618(plVar11,&pcStack_68);
  if (plVar20 != (long *)0x0) {
    FUN_007186e8(param_1,plVar20 + 4);
    if (*param_1 != 0) goto LAB_00717ff0;
    func_0x00718724(plVar11,plVar20);
    FUN_0047df30(param_1);
  }
  (*param_4)(&qStack_90,param_3);
  qStack_a0 = *param_2;
  qStack_98 = qStack_80;
  pcVar6 = *(code **)(qStack_a0 + 8);
  func_0x00718160();
  pcVar19 = (code *)plVar11[1];
  if (pcVar19 != (code *)0x0) {
    pcVar18 = pcVar19 + -1;
    if (((ulong)pcVar19 & (ulong)pcVar18) == 0) {
      param_4 = (code *)((ulong)pcVar18 & (ulong)pcVar6);
    }
    else {
      param_4 = pcVar6;
      if (pcVar19 <= pcVar6) {
        uVar7 = 0;
        if (pcVar19 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar19;
        }
        param_4 = pcVar6 + -(uVar7 * (long)pcVar19);
      }
    }
    plVar20 = *(long **)(*plVar11 + (long)param_4 * 8);
    if (plVar20 != (long *)0x0) {
      do {
        while( true ) {
          plVar20 = (long *)*plVar20;
          if (plVar20 == (long *)0x0) goto LAB_00717d30;
          pcVar12 = (code *)plVar20[1];
          if (pcVar12 != pcVar6) break;
          uVar7 = (ulong)(plVar20 + 2);
          FUN_007181a8(uVar7,&qStack_a0);
          if ((uVar7 & 1) != 0) goto LAB_00717fc8;
        }
        if (((ulong)pcVar19 & (ulong)pcVar18) == 0) {
          pcVar12 = (code *)((ulong)pcVar12 & (ulong)pcVar18);
        }
        else if (pcVar19 <= pcVar12) {
          uVar7 = 0;
          if (pcVar19 != (code *)0x0) {
            uVar7 = (ulong)pcVar12 / (ulong)pcVar19;
          }
          pcVar12 = pcVar12 + -(uVar7 * (long)pcVar19);
        }
      } while (pcVar12 == param_4);
    }
  }
LAB_00717d30:
  qVar3 = qStack_88;
  qVar2 = qStack_90;
  pcVar8 = segment_command_00000020.segname + 8;
  __Znwm();
  plVar20 = plVar11 + 2;
  uStack_58 = 1;
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  pcVar8[4] = '\0';
  pcVar8[5] = '\0';
  pcVar8[6] = '\0';
  pcVar8[7] = '\0';
  *(code **)(pcVar8 + 8) = pcVar6;
  *(qword *)(pcVar8 + 0x18) = qStack_98;
  *(qword *)(pcVar8 + 0x10) = qStack_a0;
  *(qword *)(pcVar8 + 0x28) = qVar3;
  *(qword *)(pcVar8 + 0x20) = qVar2;
  if (qVar3 != 0) {
    plVar13 = (long *)(qVar3 + 0x10);
    do {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = *plVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  pcStack_68 = pcVar8;
  plStack_60 = plVar20;
  if ((pcVar19 == (code *)0x0) ||
     (*(float *)(plVar11 + 4) * (float)pcVar19 < (float)(plVar11[3] + 1))) {
    bVar4 = (code *)((long)&MACH_HEADER.magic + 2) < pcVar19;
    bVar5 = pcVar19 == (code *)((long)&MACH_HEADER.magic + 3);
    func_0x007193d4((long)pcVar19 << 1);
    pcVar18 = extraout_x8;
    if (!bVar4 || bVar5) {
      pcVar18 = extraout_x9;
    }
    if (pcVar18 + -1 == (code *)0x0) {
      pcVar18 = (code *)((long)&MACH_HEADER.magic + 2);
    }
    else if (((ulong)pcVar18 & (ulong)(pcVar18 + -1)) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    pcVar19 = (code *)plVar11[1];
    if (pcVar19 < pcVar18) {
LAB_00717df0:
      if ((ulong)pcVar18 >> 0x3d != 0) {
        FUN_0040cee8();
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x71801c);
        (*pcVar19)();
      }
      lVar9 = (long)pcVar18 << 3;
      __Znwm(lVar9);
      FUN_007188ec(plVar11,lVar9);
      plVar11[1] = (long)pcVar18;
      lVar9 = *plVar11;
      for (pcVar19 = (code *)0x0; pcVar18 != pcVar19; pcVar19 = pcVar19 + 1) {
        *(undefined8 *)(lVar9 + (long)pcVar19 * 8) = 0;
      }
      plVar13 = (long *)*plVar20;
      pcVar19 = pcVar18;
      if (plVar13 != (long *)0x0) {
        pcVar16 = (code *)plVar13[1];
        pcVar12 = pcVar18 + -1;
        uVar7 = 0;
        if (pcVar18 != (code *)0x0) {
          uVar7 = (ulong)pcVar16 / (ulong)pcVar18;
        }
        pcVar17 = pcVar16;
        if (pcVar18 <= pcVar16) {
          pcVar17 = pcVar16 + -(uVar7 * (long)pcVar18);
        }
        if (((ulong)pcVar18 & (ulong)pcVar12) == 0) {
          pcVar17 = (code *)((ulong)pcVar16 & (ulong)pcVar12);
        }
        *(long **)(lVar9 + (long)pcVar17 * 8) = plVar20;
        while (plVar14 = plVar13, plVar13 = (long *)*plVar14, plVar13 != (long *)0x0) {
          pcVar16 = (code *)plVar13[1];
          if (((ulong)pcVar18 & (ulong)pcVar12) == 0) {
            pcVar16 = (code *)((ulong)pcVar16 & (ulong)pcVar12);
          }
          else if (pcVar18 <= pcVar16) {
            uVar7 = 0;
            if (pcVar18 != (code *)0x0) {
              uVar7 = (ulong)pcVar16 / (ulong)pcVar18;
            }
            pcVar16 = pcVar16 + -(uVar7 * (long)pcVar18);
          }
          if (pcVar16 != pcVar17) {
            if (*(long *)(lVar9 + (long)pcVar16 * 8) == 0) {
              *(long **)(lVar9 + (long)pcVar16 * 8) = plVar14;
              pcVar17 = pcVar16;
            }
            else {
              func_0x00719338();
              lVar9 = extraout_x8_00;
              pcVar12 = extraout_x9_00;
              plVar13 = extraout_x10;
              pcVar17 = extraout_x11;
            }
          }
        }
      }
    }
    else if (pcVar18 < pcVar19) {
      pcVar12 = (code *)(long)((float)(ulong)plVar11[3] / *(float *)(plVar11 + 4));
      if ((pcVar19 < (code *)((long)&MACH_HEADER.magic + 3)) ||
         (((ulong)pcVar19 & (ulong)(pcVar19 + -1)) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else {
        func_0x00719318();
      }
      if (pcVar18 <= pcVar12) {
        pcVar18 = pcVar12;
      }
      if (pcVar18 < pcVar19) {
        if (pcVar18 != (code *)0x0) goto LAB_00717df0;
        FUN_007188ec(plVar11,0);
        plVar11[1] = 0;
        pcVar19 = (code *)0x0;
      }
      else {
        pcVar19 = (code *)plVar11[1];
      }
    }
    if (((ulong)pcVar19 & (ulong)(pcVar19 + -1)) == 0) {
      param_4 = (code *)((ulong)(pcVar19 + -1) & (ulong)pcVar6);
    }
    else {
      param_4 = pcVar6;
      if (pcVar19 <= pcVar6) {
        uVar7 = 0;
        if (pcVar19 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar19;
        }
        param_4 = pcVar6 + -(uVar7 * (long)pcVar19);
      }
    }
  }
  lVar9 = *plVar11;
  puVar15 = *(undefined8 **)(lVar9 + (long)param_4 * 8);
  if (puVar15 == (undefined8 *)0x0) {
    *(long *)pcStack_68 = *plVar20;
    *plVar20 = (long)pcStack_68;
    *(long **)(lVar9 + (long)param_4 * 8) = plVar20;
    if (*(long *)pcStack_68 != 0) {
      pcVar6 = *(code **)(*(long *)pcStack_68 + 8);
      if (((ulong)pcVar19 & (ulong)(pcVar19 + -1)) == 0) {
        pcVar6 = (code *)((ulong)pcVar6 & (ulong)(pcVar19 + -1));
      }
      else if (pcVar19 <= pcVar6) {
        uVar7 = 0;
        if (pcVar19 != (code *)0x0) {
          uVar7 = (ulong)pcVar6 / (ulong)pcVar19;
        }
        pcVar6 = pcVar6 + -(uVar7 * (long)pcVar19);
      }
      *(char **)(lVar9 + (long)pcVar6 * 8) = pcStack_68;
    }
  }
  else {
    *(undefined8 *)pcStack_68 = *puVar15;
    *puVar15 = pcStack_68;
  }
  pcStack_68 = (char *)0x0;
  plVar11[3] = plVar11[3] + 1;
  FUN_00718848(&pcStack_68);
LAB_00717fc8:
  param_1[1] = qStack_88;
  *param_1 = qStack_90;
  if (qStack_88 != 0) {
    plVar20 = (long *)(qStack_88 + 8);
    do {
      cVar1 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar5) {
        *plVar20 = *plVar20 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  func_0x007193ac();
LAB_00717ff0:
  FUN_0040d514(&plStack_78);
  return;
}



/* Entry: 00718210; end: 0071828b;  */

undefined8 FUN_00718210(void)

{
  int iVar1;
  
  if ((bRam0000000000b2a938 & 1) == 0) {
    iVar1 = 0xb2a938;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __Znwm(0x68);
      func_0x007192c4();
      FUN_00718904(0xb2a928);
      ___cxa_guard_release(0xb2a938);
    }
  }
  return 0xb2a928;
}



/* Entry: 0071828c; end: 007182b3;  */

void FUN_0071828c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_00718060(*param_1,param_2,&uStack_18);
  return;
}



/* Entry: 007182b4; end: 007183c3;  */

void FUN_007182b4(long param_1,long *param_2,undefined8 *param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  lStack_50 = param_1 + 0x28;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_58 = *param_3;
  lStack_60 = *param_2;
  lVar1 = param_1;
  FUN_00718ab4(param_1,&lStack_60);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    FUN_007183c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_00718378;
    FUN_00718b7c(param_1,lVar1);
  }
  (*param_4)(&lStack_60,param_3);
  lStack_70 = *param_2;
  uStack_68 = uStack_58;
  FUN_007183e8(param_1,&lStack_70,&lStack_60);
  lVar2 = lStack_60;
  _objc_retain(lStack_60);
  _objc_release(lVar2);
LAB_00718378:
  FUN_0040d514(&lStack_50);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 007183c4; end: 007183e7;  */

void FUN_007183c4(undefined8 param_1)

{
  _objc_retain();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_1);
  return;
}



/* Entry: 007183e8; end: 007183ff;  */

void FUN_007183e8(void)

{
  FUN_00718d14();
  return;
}



/* Entry: 00718400; end: 007184c7;  */

void FUN_00718400(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x00719410();
  __ZNSt3__15mutex4lockEv();
  uStack_50 = *param_2;
  uStack_48 = *param_3;
  lVar1 = param_1;
  FUN_00718ab4(param_1,&uStack_50);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1 + 0x20;
    _objc_loadWeakRetained(lVar3);
    FUN_007183c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    _objc_release();
    if (lVar2 == 0) {
      FUN_00718b7c(param_1,lVar1);
    }
  }
  func_0x00719358();
  _objc_release(lVar3);
  return;
}



/* Entry: 007184c8; end: 007184eb;  */

ulong FUN_007184c8(ulong param_1)

{
  ulong unaff_x20;
  
  FUN_00718184();
  func_0x007193c0();
  return param_1 ^ unaff_x20;
}



/* Entry: 007184ec; end: 00718513;  */

void FUN_007184ec(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_004597ec(&uStack_18,8);
  return;
}



/* Entry: 00718514; end: 00718533;  */

void FUN_00718514(void)

{
  func_0x00719304();
  func_0x007193fc();
  return;
}



/* Entry: 00718534; end: 00718573;  */

void FUN_00718534(long *param_1,undefined8 *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar3 = param_1;
  FUN_00718574();
  lVar4 = *plVar3;
  lStack_50 = lVar4 + 0x28;
  uStack_48 = 1;
  __ZNSt3__15mutex4lockEv();
  uStack_58 = *param_2;
  lStack_60 = *param_1;
  lVar1 = lVar4;
  FUN_00718ab4(lVar4,&lStack_60);
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x20;
    _objc_loadWeakRetained();
    FUN_007183c4();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto LAB_00718378;
    FUN_00718b7c(lVar4,lVar1);
  }
  (*param_3)(&lStack_60,param_2);
  lStack_70 = *param_1;
  uStack_68 = uStack_58;
  FUN_007183e8(lVar4,&lStack_70,&lStack_60);
  lVar2 = lStack_60;
  _objc_retain(lStack_60);
  _objc_release(lVar2);
LAB_00718378:
  FUN_0040d514(&lStack_50);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar2);
  return;
}



/* Entry: 00718574; end: 007185ef;  */

undefined8 FUN_00718574(void)

{
  int iVar1;
  
  if ((bRam0000000000b2a950 & 1) == 0) {
    iVar1 = 0xb2a950;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      __Znwm(0x68);
      func_0x007192c4();
      FUN_007190d8(0xb2a940);
      ___cxa_guard_release(0xb2a950);
    }
  }
  return 0xb2a940;
}



/* Entry: 007185f0; end: 00718617;  */

void FUN_007185f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_00718400(*param_1,param_2,&uStack_18);
  return;
}



/* Entry: 00718618; end: 007186e7;  */

long FUN_00718618(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1[1];
  if ((uVar6 != 0) && (param_1[3] != 0)) {
    uVar2 = *(ulong *)(*param_2 + 8);
    func_0x00718160(uVar2,param_2[1]);
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar2 & uVar7;
    }
    else {
      uVar8 = uVar2;
      if (uVar6 <= uVar2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar2 / uVar6;
        }
        uVar8 = uVar2 - uVar8 * uVar6;
      }
    }
    plVar5 = *(long **)(*param_1 + uVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar5[1];
        if (uVar4 != uVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_007181a8(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar4 = uVar4 & uVar7;
      }
      else if (uVar6 <= uVar4) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar4 / uVar6;
        }
        uVar4 = uVar4 - uVar1 * uVar6;
      }
    } while (uVar4 == uVar8);
  }
  return 0;
}



/* Entry: 007186e8; end: 00718753;  */

void FUN_007186e8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 00718754; end: 00718847;  */

void FUN_00718754(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00718808;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00718808;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_00718808:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 00718848; end: 00718867;  */

void FUN_00718848(void)

{
  func_0x00719370();
  FUN_00718868();
  return;
}



/* Entry: 00718868; end: 0071887f;  */

void FUN_00718868(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    func_0x007188c4(lVar1 + 0x20);
  }
  else if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(lVar1);
  return;
}



/* Entry: 00718880; end: 007188eb;  */

void FUN_00718880(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x007188c4(param_2 + 0x20);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)(param_2);
  return;
}



/* Entry: 007188ec; end: 00718903;  */

void FUN_007188ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00718904; end: 0071894b;  */

void FUN_00718904(void)

{
  func_0x007193e8();
  __Znwm(0x20);
  func_0x0071937c(&PTR_FUN_00a1f030);
  FUN_00718a7c();
  return;
}



/* Entry: 0071894c; end: 0071894f;  */

void FUN_0071894c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00718950; end: 00718963;  */

void FUN_00718950(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00718964; end: 0071896b;  */

void FUN_00718964(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_007189c4(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071896c; end: 007189a3;  */

long FUN_0071896c(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_00a1f070);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 007189a4; end: 007189a7;  */

void FUN_007189a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 007189a8; end: 007189c3;  */

void FUN_007189a8(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_007189c4(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 007189c4; end: 00718a63;  */

undefined8 FUN_007189c4(void)

{
  undefined8 unaff_x19;
  
  func_0x007193a0();
  func_0x00718a0c();
  func_0x00719370();
  FUN_00718a64();
  return unaff_x19;
}



/* Entry: 00718a64; end: 00718a7b;  */

void FUN_00718a64(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00718a7c; end: 00718a9b;  */

void FUN_00718a7c(void)

{
  func_0x00719370();
  FUN_00718a9c();
  return;
}



/* Entry: 00718a9c; end: 00718ab3;  */

void FUN_00718a9c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_007189c4(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00718ab4; end: 00718b7b;  */

long FUN_00718ab4(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (param_1[3] != 0)) {
    plVar2 = param_1;
    func_0x007193b4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar4 != plVar2) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00718514(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 00718b7c; end: 00718ba7;  */

undefined8 FUN_00718b7c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_2;
  FUN_00718ba8(auStack_38);
  func_0x007193cc();
  return uVar1;
}



/* Entry: 00718ba8; end: 00718c9b;  */

void FUN_00718ba8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00718c5c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_00718c5c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_00718c5c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 00718c9c; end: 00718cbb;  */

void FUN_00718c9c(void)

{
  func_0x00719370();
  FUN_00718cbc();
  return;
}



/* Entry: 00718cbc; end: 00718cd3;  */

void FUN_00718cbc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  if ((char)param_1[2] == '\x01') {
    _objc_destroyWeak(lVar1 + 0x20);
  }
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00718cd4; end: 00718d13;  */

void FUN_00718cd4(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    _objc_destroyWeak(param_2 + 0x20);
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(param_2);
    return;
  }
  return;
}



/* Entry: 00718d14; end: 00718d33;  */

void FUN_00718d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00718d34(param_1,param_2,param_2,param_3);
  return;
}



/* Entry: 00718d34; end: 007190bf;  */

undefined1  [16] FUN_00718d34(long *param_1,undefined8 param_2,qword *param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  qword *pqVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *extraout_x8;
  long extraout_x8_00;
  long *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *extraout_x10;
  long *plVar13;
  long *plVar14;
  long *extraout_x11;
  long *plVar15;
  char *pcVar16;
  long *plVar17;
  long *unaff_x26;
  undefined1 *puVar18;
  qword qVar19;
  undefined1 auVar20 [16];
  
  plVar11 = param_1;
  func_0x007193b4();
  plVar17 = (long *)param_1[1];
  if (plVar17 != (long *)0x0) {
    puVar18 = (undefined1 *)((long)plVar17 + -1);
    if (((ulong)plVar17 & (ulong)puVar18) == 0) {
      unaff_x26 = (long *)((ulong)puVar18 & (ulong)plVar11);
    }
    else {
      unaff_x26 = plVar11;
      if (plVar17 <= plVar11) {
        uVar1 = 0;
        if (plVar17 != (long *)0x0) {
          uVar1 = (ulong)plVar11 / (ulong)plVar17;
        }
        unaff_x26 = (long *)((long)plVar11 - uVar1 * (long)plVar17);
      }
    }
    pcVar16 = *(char **)(*param_1 + (long)unaff_x26 * 8);
    if (pcVar16 != (char *)0x0) {
      do {
        while( true ) {
          pcVar16 = *(char **)pcVar16;
          if (pcVar16 == (char *)0x0) goto LAB_00718dfc;
          plVar9 = *(long **)(pcVar16 + 8);
          if (plVar9 != plVar11) break;
          pqVar5 = (qword *)(pcVar16 + 0x10);
          FUN_00718514(pqVar5,param_2);
          if (((ulong)pqVar5 & 1) != 0) {
            uVar8 = 0;
            goto LAB_00719088;
          }
        }
        if (((ulong)plVar17 & (ulong)puVar18) == 0) {
          plVar9 = (long *)((ulong)plVar9 & (ulong)puVar18);
        }
        else if (plVar17 <= plVar9) {
          uVar1 = 0;
          if (plVar17 != (long *)0x0) {
            uVar1 = (ulong)plVar9 / (ulong)plVar17;
          }
          plVar9 = (long *)((long)plVar9 - uVar1 * (long)plVar17);
        }
      } while (plVar9 == unaff_x26);
    }
  }
LAB_00718dfc:
  uVar8 = *param_4;
  plVar9 = param_1 + 2;
  pcVar16 = segment_command_00000020.segname;
  __Znwm();
  pcVar16[0] = '\0';
  pcVar16[1] = '\0';
  pcVar16[2] = '\0';
  pcVar16[3] = '\0';
  pcVar16[4] = '\0';
  pcVar16[5] = '\0';
  pcVar16[6] = '\0';
  pcVar16[7] = '\0';
  *(long **)(pcVar16 + 8) = plVar11;
  qVar19 = *param_3;
  *(qword *)(pcVar16 + 0x18) = param_3[1];
  *(qword *)(pcVar16 + 0x10) = qVar19;
  _objc_initWeak(pcVar16 + 0x20,uVar8);
  if ((plVar17 != (long *)0x0) &&
     ((float)(param_1[3] + 1) <= *(float *)(param_1 + 4) * (float)plVar17)) goto LAB_0071900c;
  bVar3 = (long *)((long)&MACH_HEADER.magic + 2) < plVar17;
  bVar4 = plVar17 == (long *)((long)&MACH_HEADER.magic + 3);
  func_0x007193d4((long)plVar17 << 1);
  plVar6 = extraout_x8;
  if (!bVar3 || bVar4) {
    plVar6 = extraout_x9;
  }
  if ((undefined1 *)((long)plVar6 - 1U) == (undefined1 *)0x0) {
    plVar6 = (long *)((long)&MACH_HEADER.magic + 2);
  }
  else if (((ulong)plVar6 & (long)plVar6 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
  }
  plVar17 = (long *)param_1[1];
  if (plVar17 < plVar6) {
LAB_00718ea8:
    if ((ulong)plVar6 >> 0x3d != 0) {
      FUN_0040cee8();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x7190b4);
      (*pcVar2)();
    }
    lVar7 = (long)plVar6 << 3;
    __Znwm(lVar7);
    FUN_007190c0(param_1,lVar7);
    param_1[1] = (long)plVar6;
    lVar7 = *param_1;
    for (plVar17 = (long *)0x0; plVar6 != plVar17; plVar17 = (long *)((long)plVar17 + 1)) {
      *(undefined8 *)(lVar7 + (long)plVar17 * 8) = 0;
    }
    plVar12 = (long *)*plVar9;
    plVar17 = plVar6;
    if (plVar12 != (long *)0x0) {
      plVar13 = (long *)plVar12[1];
      puVar18 = (undefined1 *)((long)plVar6 + -1);
      uVar1 = 0;
      if (plVar6 != (long *)0x0) {
        uVar1 = (ulong)plVar13 / (ulong)plVar6;
      }
      plVar14 = plVar13;
      if (plVar6 <= plVar13) {
        plVar14 = (long *)((long)plVar13 - uVar1 * (long)plVar6);
      }
      if (((ulong)plVar6 & (ulong)puVar18) == 0) {
        plVar14 = (long *)((ulong)plVar13 & (ulong)puVar18);
      }
      *(long **)(lVar7 + (long)plVar14 * 8) = plVar9;
      while (plVar13 = plVar12, plVar12 = (long *)*plVar13, plVar12 != (long *)0x0) {
        plVar15 = (long *)plVar12[1];
        if (((ulong)plVar6 & (ulong)puVar18) == 0) {
          plVar15 = (long *)((ulong)plVar15 & (ulong)puVar18);
        }
        else if (plVar6 <= plVar15) {
          uVar1 = 0;
          if (plVar6 != (long *)0x0) {
            uVar1 = (ulong)plVar15 / (ulong)plVar6;
          }
          plVar15 = (long *)((long)plVar15 - uVar1 * (long)plVar6);
        }
        if (plVar15 != plVar14) {
          if (*(long *)(lVar7 + (long)plVar15 * 8) == 0) {
            *(long **)(lVar7 + (long)plVar15 * 8) = plVar13;
            plVar14 = plVar15;
          }
          else {
            func_0x00719338();
            lVar7 = extraout_x8_00;
            puVar18 = extraout_x9_00;
            plVar12 = extraout_x10;
            plVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (plVar6 < plVar17) {
    plVar12 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar17 < (long *)((long)&MACH_HEADER.magic + 3)) ||
       (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00719318();
    }
    if (plVar6 <= plVar12) {
      plVar6 = plVar12;
    }
    if (plVar6 < plVar17) {
      if (plVar6 != (long *)0x0) goto LAB_00718ea8;
      FUN_007190c0(param_1,0);
      param_1[1] = 0;
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)param_1[1];
    }
  }
  if (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0) {
    unaff_x26 = (long *)((ulong)((long)plVar17 + -1) & (ulong)plVar11);
  }
  else {
    unaff_x26 = plVar11;
    if (plVar17 <= plVar11) {
      uVar1 = 0;
      if (plVar17 != (long *)0x0) {
        uVar1 = (ulong)plVar11 / (ulong)plVar17;
      }
      unaff_x26 = (long *)((long)plVar11 - uVar1 * (long)plVar17);
    }
  }
LAB_0071900c:
  lVar7 = *param_1;
  puVar10 = *(undefined8 **)(lVar7 + (long)unaff_x26 * 8);
  if (puVar10 == (undefined8 *)0x0) {
    *(long *)pcVar16 = *plVar9;
    *plVar9 = (long)pcVar16;
    *(long **)(lVar7 + (long)unaff_x26 * 8) = plVar9;
    if (*(long *)pcVar16 != 0) {
      plVar11 = *(long **)(*(long *)pcVar16 + 8);
      if (((ulong)plVar17 & (ulong)((long)plVar17 + -1)) == 0) {
        plVar11 = (long *)((ulong)plVar11 & (ulong)((long)plVar17 + -1));
      }
      else if (plVar17 <= plVar11) {
        uVar1 = 0;
        if (plVar17 != (long *)0x0) {
          uVar1 = (ulong)plVar11 / (ulong)plVar17;
        }
        plVar11 = (long *)((long)plVar11 - uVar1 * (long)plVar17);
      }
      *(char **)(lVar7 + (long)plVar11 * 8) = pcVar16;
    }
  }
  else {
    *(undefined8 *)pcVar16 = *puVar10;
    *puVar10 = pcVar16;
  }
  param_1[3] = param_1[3] + 1;
  func_0x007193cc();
  uVar8 = 1;
LAB_00719088:
  auVar20._8_8_ = uVar8;
  auVar20._0_8_ = pcVar16;
  return auVar20;
}



/* Entry: 007190c0; end: 007190d7;  */

void FUN_007190c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 007190d8; end: 0071911f;  */

void FUN_007190d8(void)

{
  func_0x007193e8();
  __Znwm(0x20);
  func_0x0071937c(&PTR_FUN_00a1f0a8);
  FUN_00719250();
  return;
}



/* Entry: 00719120; end: 00719123;  */

void FUN_00719120(void)

{
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 00719124; end: 00719137;  */

void FUN_00719124(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00719138; end: 0071913f;  */

void FUN_00719138(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_00719198(*(long *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00719140; end: 00719177;  */

long FUN_00719140(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_00a1f0e8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 00719178; end: 0071917b;  */

void FUN_00719178(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 0071917c; end: 00719197;  */

void FUN_0071917c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00719198(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00719198; end: 00719237;  */

undefined8 FUN_00719198(void)

{
  undefined8 unaff_x19;
  
  func_0x007193a0();
  func_0x007191e0();
  func_0x00719370();
  FUN_00719238();
  return unaff_x19;
}



/* Entry: 00719238; end: 0071924f;  */

void FUN_00719238(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00719250; end: 0071926f;  */

void FUN_00719250(void)

{
  func_0x00719370();
  func_0x00719270();
  return;
}



/* Entry: 00719270; end: 00719423;  */

void FUN_00719270(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_00719198(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00719424; end: 00719497; -[DJOutcome initWithResult:] */

undefined1 * FUN_00719424(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x00719c54();
  func_0x00719d28();
  puVar1 = auStack_30;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00719d18();
    func_0x00719ccc();
    func_0x00719d64();
    func_0x00719d08();
    func_0x00719d00();
  }
  func_0x00719c64();
  return puVar1;
}



/* Entry: 00719498; end: 007194c3;  */

void FUN_00719498(long param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 007194c4; end: 00719537; -[DJOutcome initWithError:] */

undefined1 * FUN_007194c4(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  func_0x00719c54();
  func_0x00719d28();
  puVar1 = auStack_30;
  _objc_msgSendSuper2();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00719d18();
    func_0x00719ccc();
    func_0x00719d64();
    func_0x00719d08();
    func_0x00719d00();
  }
  func_0x00719c64();
  return puVar1;
}



/* Entry: 00719538; end: 0071955f;  */

void FUN_00719538(long param_1,undefined8 param_2,long param_3)

{
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00719560; end: 00719597; +[DJOutcome fromResult:] */

void FUN_00719560(void)

{
  func_0x00719d58();
  func_0x00719d84();
  _objc_alloc();
  func_0x00786660();
  func_0x00719c48();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00719598; end: 007195cf; +[DJOutcome fromError:] */

void FUN_00719598(void)

{
  func_0x00719d58();
  func_0x00719d84();
  _objc_alloc();
  func_0x007854a0();
  func_0x00719c48();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 007195d0; end: 007195fb; -[DJOutcome matchResult:Error:] */

void FUN_007195d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 007195fc; end: 00719617; -[DJOutcome result] */

void FUN_007195fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00719614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_00a1f140,
             &PTR___NSConcreteGlobalBlock_00a1f160);
  return;
}



/* Entry: 00719618; end: 00719637;  */

void FUN_00719618(undefined8 param_1,undefined8 param_2)

{
  func_0x00719cbc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 00719638; end: 0071963f;  */

undefined8 FUN_00719638(void)

{
  return 0;
}



/* Entry: 00719640; end: 007196db; -[DJOutcome resultOr:] */

void FUN_00719640(void)

{
  long unaff_x20;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  
  func_0x00719c54();
  lVar1 = *(long *)(unaff_x20 + 8);
  func_0x00719d18();
  uStack_50 = 0xc2000000;
  uStack_48 = 0x7196fc;
  puStack_40 = &UNK_00a1f1a0;
  pcVar2 = *(code **)(lVar1 + 0x10);
  func_0x00719ccc();
  (*pcVar2)(lVar1,&PTR___NSConcreteGlobalBlock_00a1f180,auStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00719d00();
  func_0x00719c64();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(lVar1);
  return;
}



/* Entry: 007196dc; end: 0071971b;  */

void FUN_007196dc(undefined8 param_1,undefined8 param_2)

{
  func_0x00719cbc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 0071971c; end: 0071973f; -[DJOutcome error] */

void FUN_0071971c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00719734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_00a1f1d0,
             &PTR___NSConcreteGlobalBlock_00a1f1f0);
  return;
}



/* Entry: 00719740; end: 0071975f;  */

void FUN_00719740(undefined8 param_1,undefined8 param_2)

{
  func_0x00719cbc();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(param_2);
  return;
}



/* Entry: 00719760; end: 0071977b; -[DJOutcome description] */

void FUN_00719760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00719778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_00a1f230,
             &PTR___NSConcreteGlobalBlock_00a1f250);
  return;
}



/* Entry: 0071977c; end: 007197eb;  */

void FUN_0071977c(undefined8 param_1,undefined8 param_2)

{
  func_0x007921a0(PTR__OBJC_CLASS___NSString_00ac2988,param_2,
                  &PTR____CFConstantStringClassReference_00a490e0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 007197ec; end: 007198e7; -[DJOutcome isEqualToOutcome:] */

long FUN_007197ec(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  
  func_0x00719c54();
  puVar1 = PTR___NSConcreteStackBlock_00999f30;
  lVar3 = *(long *)(unaff_x20 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_007198e8;
  puStack_50 = &UNK_00a1f270;
  func_0x00719ccc();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_0071995c;
  puStack_78 = &UNK_00a1f270;
  func_0x00719ccc();
  (**(code **)(lVar3 + 0x10))(lVar3,&puStack_68,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x0077fbc0();
  _objc_release(lVar3);
  _objc_release(unaff_x19);
  _objc_release(unaff_x19);
  func_0x00719c64();
  return lVar2;
}



/* Entry: 007198e8; end: 0071995b;  */

void FUN_007198e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x00719d90();
  func_0x00719cbc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x0078bb20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00719cf0();
  func_0x00789be0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00719c6c();
  func_0x00719c64();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 0071995c; end: 007199cf;  */

void FUN_0071995c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x00719d90();
  func_0x00719cbc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_00ac29d8;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x00782d80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00719cf0();
  func_0x00789be0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00719c6c();
  func_0x00719c64();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
  return;
}



/* Entry: 007199d0; end: 00719a3f; -[DJOutcome isEqual:] */

ulong FUN_007199d0(void)

{
  ulong unaff_x19;
  ulong unaff_x20;
  
  func_0x00719c54();
  if (unaff_x19 == unaff_x20) {
    unaff_x20 = 1;
  }
  else {
    if (unaff_x19 != 0) {
      _objc_opt_class();
      _objc_opt_isKindOfClass();
      if ((unaff_x19 & 1) != 0) {
        func_0x007878c0();
        goto LAB_00719a24;
      }
    }
    unaff_x20 = 0;
  }
LAB_00719a24:
  func_0x00719c64();
  return unaff_x20;
}



/* Entry: 00719a40; end: 00719b0b; -[DJOutcome hash] */

undefined8 * FUN_00719a40(long param_1)

{
  long lVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  lVar1 = param_1;
  puStack_38 = &uStack_40;
  _objc_opt_class();
  func_0x007843a0();
  puStack_68 = PTR___NSConcreteStackBlock_00999f30;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_00719b0c;
  puStack_50 = &UNK_00a1f2a0;
  puStack_90 = PTR___NSConcreteStackBlock_00999f30;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_00719b68;
  puStack_78 = &UNK_00a1f2a0;
  puStack_70 = &uStack_40;
  puStack_48 = &uStack_40;
  lStack_28 = lVar1;
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),&puStack_68,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  func_0x00793100();
  func_0x00719c48();
  func_0x00719d40();
  return &uStack_40;
}



/* Entry: 00719b0c; end: 00719b67;  */

void FUN_00719b0c(void)

{
  func_0x00719d90();
  func_0x00719cbc();
  func_0x00719cd4();
  func_0x00719d70();
  func_0x007843a0();
  func_0x00719c8c();
  func_0x00789d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00719c48();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00719b68; end: 00719bbf;  */

void FUN_00719b68(void)

{
  func_0x00719d90();
  func_0x00719cbc();
  func_0x00719cd4();
  func_0x00719d70();
  func_0x007843a0();
  func_0x00719c8c();
  func_0x00789d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00719c48();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00719bc0; end: 00719c3b; -[DJOutcome copyWithZone:] */

void FUN_00719bc0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 8) + 0x10))
            (*(long *)(param_1 + 8),&PTR___NSConcreteGlobalBlock_00a1f2f0,
             &PTR___NSConcreteGlobalBlock_00a1f310);
  _objc_retainAutoreleasedReturnValue();
  return;
}



/* Entry: 00719c3c; end: 00719d9b; -[DJOutcome .cxx_destruct] */

void FUN_00719c3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00719d9c; end: 00719ddb; +[DJProvider providerWithBlock:] */

void FUN_00719d9c(void)

{
  func_0x00719e90();
  _objc_alloc();
  func_0x00784d80();
  func_0x00719e84();
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00719ddc; end: 00719e6b; -[DJProvider initWithBlock:] */

undefined1 * FUN_00719ddc(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00719e90();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_00abbf70);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00780e20();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  _objc_release();
  return puVar1;
}



/* Entry: 00719e6c; end: 00719e77; -[DJProvider get] */

void FUN_00719e6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00719e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 00719e78; end: 00719e9f; -[DJProvider .cxx_destruct] */

void FUN_00719e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00719ea0; end: 00719edb;  */

void FUN_00719ea0(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x0071a594();
  FUN_00719edc(auStack_38,auStack_28);
  func_0x0071a588();
  func_0x0071a5ac();
  return;
}



/* Entry: 00719edc; end: 00719efb;  */

void FUN_00719edc(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0071a140(&uStack_11,param_1);
  return;
}



/* Entry: 00719efc; end: 00719f3f;  */

undefined8 * FUN_00719efc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_0040ce68(&uStack_30);
  return param_1;
}



/* Entry: 00719f40; end: 00719f7b;  */

void FUN_00719f40(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x0071a594();
  FUN_00719f7c(auStack_38,auStack_28);
  func_0x0071a588();
  func_0x0071a5ac();
  return;
}



/* Entry: 00719f7c; end: 00719f9b;  */

void FUN_00719f7c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0071a360(&uStack_11,param_1);
  return;
}



/* Entry: 00719f9c; end: 00719fd7;  */

void FUN_00719f9c(void)

{
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  
  func_0x0071a594();
  FUN_00719fd8(auStack_38,auStack_28);
  func_0x0071a588();
  func_0x0071a5ac();
  return;
}



/* Entry: 00719fd8; end: 00719ff7;  */

void FUN_00719fd8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_0071a41c(&uStack_11,param_1);
  return;
}



/* Entry: 00719ff8; end: 0071a0c3;  */

void FUN_00719ff8(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long alStack_30 [2];
  
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  if (param_1[1] != 0) {
    plVar1 = (long *)(param_1[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_0071a0c4(alStack_30,&uStack_40);
  FUN_0040ce68(&uStack_40);
  if (alStack_30[0] != 0) {
    uVar5 = *(undefined8 *)(alStack_30[0] + 8);
    _objc_retain(uVar5);
    FUN_0071a338(alStack_30);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar5);
    return;
  }
  uVar5 = 0x10;
  ___cxa_allocate_exception(0x10);
  FUN_0071a11c();
  ___cxa_throw(uVar5,PTR___ZTISt16invalid_argument_0099c610,
               PTR___ZNSt16invalid_argumentD1Ev_00998938);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x71a0a4);
  (*pcVar4)();
}



/* Entry: 0071a0c4; end: 0071a11b;  */

void FUN_0071a0c4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && (___dynamic_cast(lVar1,&PTR_DAT_009e2c38,&PTR_DAT_00a1f3b8,0), lVar1 != 0)) {
    lVar2 = param_2[1];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1 = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 0071a11c; end: 0071a13f;  */

void FUN_0071a11c(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt16invalid_argument_00998e08 + 0x10);
  return;
}



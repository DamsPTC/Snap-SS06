/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a20eb44; end: 10a20edb3;  */

undefined1  [16] FUN_10a20eb44(long *param_1,ulong *param_2,long *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong unaff_x24;
  long lVar14;
  undefined1 auVar15 [16];
  
  uVar5 = *param_2;
  uVar9 = ((ulong)(uint)((int)uVar5 << 3) + 8 ^ uVar5 >> 0x20) * -0x622015f714c7d297;
  uVar9 = (uVar5 >> 0x20 ^ uVar9 >> 0x2f ^ uVar9) * -0x622015f714c7d297;
  uVar13 = (uVar9 ^ uVar9 >> 0x2f) * -0x622015f714c7d297;
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar8 = uVar9 - 1;
    if ((uVar9 & uVar8) == 0) {
      unaff_x24 = uVar13 & uVar8;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar9 <= uVar13) {
        uVar11 = 0;
        if (uVar9 != 0) {
          uVar11 = uVar13 / uVar9;
        }
        unaff_x24 = uVar13 - uVar11 * uVar9;
      }
    }
    puVar10 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar10 != (undefined8 *)0x0) {
      for (plVar12 = (long *)*puVar10; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
        uVar11 = plVar12[1];
        if (uVar11 == uVar13) {
          if (plVar12[2] == uVar5) {
            uVar4 = 0;
            goto LAB_10a20ed78;
          }
        }
        else {
          if ((uVar9 & uVar8) == 0) {
            uVar11 = uVar11 & uVar8;
          }
          else if (uVar9 <= uVar11) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar11 / uVar9;
            }
            uVar11 = uVar11 - uVar3 * uVar9;
          }
          if (uVar11 != unaff_x24) break;
        }
      }
    }
  }
  plVar12 = (long *)0x20;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar13;
  lVar6 = param_3[1];
  lVar14 = *param_3;
  plVar12[3] = param_3[1];
  plVar12[2] = lVar14;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar5 = 1;
    if (2 < uVar9) {
      uVar5 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar5 = uVar5 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar5 <= uVar9) {
      uVar5 = uVar9;
    }
    FUN_10a20e938(param_1,uVar5);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x24 = uVar9 - 1 & uVar13;
    }
    else {
      unaff_x24 = uVar13;
      if (uVar9 <= uVar13) {
        uVar5 = 0;
        if (uVar9 != 0) {
          uVar5 = uVar13 / uVar9;
        }
        unaff_x24 = uVar13 - uVar5 * uVar9;
      }
    }
  }
  lVar6 = *param_1;
  plVar7 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar12 = *plVar7;
    *plVar7 = (long)plVar12;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar7;
    if (*plVar12 == 0) goto LAB_10a20ed68;
    uVar5 = *(ulong *)(*plVar12 + 8);
    if ((uVar9 & uVar9 - 1) == 0) {
      uVar5 = uVar5 & uVar9 - 1;
    }
    else if (uVar9 <= uVar5) {
      uVar13 = 0;
      if (uVar9 != 0) {
        uVar13 = uVar5 / uVar9;
      }
      uVar5 = uVar5 - uVar13 * uVar9;
    }
    plVar7 = (long *)(*param_1 + uVar5 * 8);
  }
  else {
    *plVar12 = *plVar7;
  }
  *plVar7 = (long)plVar12;
LAB_10a20ed68:
  param_1[3] = param_1[3] + 1;
  uVar4 = 1;
LAB_10a20ed78:
  auVar15._8_8_ = uVar4;
  auVar15._0_8_ = plVar12;
  return auVar15;
}



/* Entry: 10a20edb4; end: 10a20edfb;  */

void FUN_10a20edb4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010a042cd8(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10a20edfc; end: 10a20ee0b;  */

void FUN_10a20edfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2408;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a20ee0c; end: 10a20ee2b;  */

void FUN_10a20ee0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2408;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20ee2c; end: 10a20ee5b;  */

void FUN_10a20ee2c(long param_1)

{
  func_0x00010a0d9378(param_1 + 0x68);
  func_0x00010a0d92c8(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutexD1Ev_110346798)(param_1 + 0x18);
  return;
}



/* Entry: 10a20ee5c; end: 10a20ee5f;  */

void FUN_10a20ee5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20ee60; end: 10a20f43f;  */

void FUN_10a20ee60(long param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_38;
  
  uVar2 = 0;
  lVar1 = -0x238;
  if (cRam00000001137eab34 == '\0') {
    lVar1 = -0xffff;
  }
  lVar1 = param_1 + lVar1;
  if ((*(ushort *)(lVar1 + 0x101) >> 8 & 1) == 0) {
    if (((*(long *)(lVar1 + 0xd8) != 0) || ((*(ushort *)(lVar1 + 0x101) >> 9 & 1) != 0)) ||
       (*(long *)(lVar1 + 0xf8) != 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) != 0) {
        return;
      }
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      ppuStack_38 = &PTR_DAT_110bb2448;
      uVar2 = (ulong)&uStack_90 | 8;
      FUN_10a0dad0c(uVar2,&ppuStack_38);
      uVar3 = 0x238;
      if (cRam00000001137eab34 == '\0') {
        uVar3 = 0xffff;
      }
      lVar1 = 0x238;
      if (cRam00000001137eab34 == '\0') {
        lVar1 = 0xffff;
      }
      if ((*(ushort *)((param_1 - lVar1) + 0x101) >> 8 & 1) != 0) {
        FUN_10a1bd5e0();
        uVar3 = 0x238;
        if (cRam00000001137eab34 == '\0') {
          uVar3 = 0xffff;
        }
        if (uVar2 != 0) {
          FUN_10a1bd648();
          uVar3 = 0x238;
          if (cRam00000001137eab34 == '\0') {
            uVar3 = 0xffff;
          }
        }
      }
      FUN_10a1c054c((param_1 - (ulong)uVar3) + 0xa8,&uStack_90);
      return;
    }
    *(long *)(lVar1 + 0xb8) = *(long *)(lVar1 + 0xb8) + 1;
  }
  if ((*(undefined ***)(lVar1 + 0x108) != &PTR_DAT_110bb2448) && (FUN_10a1bd5e0(), param_1 != 0)) {
    FUN_10a1bd648();
    *(undefined ***)(lVar1 + 0x108) = &PTR_DAT_110bb2448;
  }
  return;
}



/* Entry: 10a20f440; end: 10a20f49f;  */

undefined8 FUN_10a20f440(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long alStack_38 [2];
  char cStack_28;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    FUN_10a20f4a0(alStack_38);
    lVar1 = alStack_38[0];
    alStack_38[0] = 0;
    if (lVar1 != 0) {
      if (cStack_28 == '\x01') {
        func_0x00010a042cd8(lVar1 + 0x10);
      }
      __ZdlPv(lVar1);
    }
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a20f4a0);
  (*pcVar2)();
}



/* Entry: 10a20f4a0; end: 10a20f5bf;  */

void FUN_10a20f4a0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar5 = uVar4 - 1;
  if ((uVar4 & uVar5) == 0) {
    uVar3 = uVar5 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  plVar2 = *(long **)(*param_2 + uVar3 * 8);
  do {
    plVar7 = plVar2;
    plVar2 = (long *)*plVar7;
  } while ((long *)*plVar7 != param_3);
  if (plVar7 != param_2 + 2) {
    uVar8 = plVar7[1];
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a20f554;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10a20f554;
  }
  *(undefined8 *)(*param_2 + uVar3 * 8) = 0;
LAB_10a20f554:
  lVar6 = *param_3;
  if (lVar6 != 0) {
    uVar8 = *(ulong *)(lVar6 + 8);
    if ((uVar4 & uVar5) == 0) {
      uVar8 = uVar8 & uVar5;
    }
    else if (uVar4 <= uVar8) {
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar5 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(*param_2 + uVar8 * 8) = plVar7;
      lVar6 = *param_3;
    }
  }
  *plVar7 = lVar6;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10a20f5c0; end: 10a20f613;  */

void FUN_10a20f5c0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    func_0x00010a042c9c(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}



/* Entry: 10a20f614; end: 10a20f763;  */

void FUN_10a20f614(undefined4 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  if ((*(byte *)(plVar3 + 0x3c) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a20f750);
    (*pcVar1)();
  }
  puVar4 = (undefined8 *)0x58;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110bb24a0;
  puVar4[3] = &PTR_DAT_110bb1ac8;
  puVar4[10] = 0;
  puVar4[7] = 0;
  puVar4[6] = 0;
  puVar4[9] = 0;
  puVar4[8] = 0;
  puVar4[5] = 0;
  puVar4[4] = 0;
  *(undefined1 *)(puVar4 + 10) = 1;
  plVar13 = (long *)plVar3[4];
  if (plVar13 == (long *)0x0) {
    func_0x000109899fd8(plVar3);
    plVar13 = (long *)plVar3[4];
  }
  plVar3[4] = *plVar13;
  *plVar13 = (long)&PTR_DAT_110b17478;
  plVar13[1] = (long)(puVar4 + 3);
  plVar13[2] = (long)puVar4;
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2);
  (**(code **)(*param_2 + 0x2f8))(param_1 + 2,param_2,plVar13,plVar5,&UNK_10989ba24,param_3);
  *param_1 = 7;
  plVar13 = plVar3 + 0x4b;
  lVar6 = plVar3[0x59];
  uVar7 = lVar6 - 1;
  plVar3[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar13[lVar6 + 2];
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar7) {
      return;
    }
  }
  lVar6 = *plVar13;
  lVar11 = plVar3[0x4c];
  lVar9 = lVar11 - lVar6;
  uVar14 = lVar9 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar12 = plVar3[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar6 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar6)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar13;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar15 * 0x10);
          lVar10 = lVar11 + uVar14 * -0x10;
          _memcpy(lVar10,lVar6,lVar9);
          *plVar13 = lVar10;
          plVar3[0x4c] = lVar11 + uVar15 * 0x10;
          plVar3[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar12;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar15 * 0x10);
    plVar3[0x4c] = lVar11 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar6 = lVar6 + uVar7 * 0x10;
    while (lVar11 != lVar6) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar3[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar7;
  return;
}



/* Entry: 10a20f764; end: 10a20f773;  */

void FUN_10a20f764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb24a0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a20f774; end: 10a20f793;  */

void FUN_10a20f774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb24a0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a20f794; end: 10a20f7a3;  */

void FUN_10a20f794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a20f79c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a20f7a4; end: 10a20f7fb;  */

long FUN_10a20f7a4(long param_1)

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



/* Entry: 10a20f7fc; end: 10a20f8ab;  */

void FUN_10a20f7fc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20f964(param_1,param_2,FUN_10a1ede20,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20f8ac; end: 10a20f963;  */

void FUN_10a20f8ac(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20fb0c(param_1,param_2,0x10a1ede48,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20f964; end: 10a20fa1f;  */

void FUN_10a20f964(undefined8 param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  lVar4 = param_2;
  FUN_10a20fa20(param_2,param_5);
  FUN_10a052e3c(param_6);
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*(long *)(lVar4 + ((long)param_4 >> 1)) + ((ulong)param_3 & 0xffffffff));
  }
  (*param_3)(auStack_50);
  func_0x00010a20fa88(param_1,param_2,auStack_50);
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
    }
  }
  return;
}



/* Entry: 10a20fa20; end: 10a20fb0b;  */

void FUN_10a20fa20(undefined **param_1,undefined **param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long *plVar6;
  
  ppuVar4 = param_1;
  func_0x000109898688();
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar4;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  func_0x00010988bd28(&UNK_10f68f52e);
  plVar6 = (long *)param_2[1];
  *param_2 = (undefined *)0x0;
  param_2[1] = (undefined *)0x0;
  func_0x000109899de4();
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
  return;
}



/* Entry: 10a20fb0c; end: 10a20fc37;  */

void FUN_10a20fb0c(undefined4 *param_1,long param_2,code *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  lVar5 = param_2;
  FUN_10a20fc38(param_2,param_5);
  FUN_10a20fca0(param_7);
  FUN_10a20fcc4(&uStack_70,param_2,param_6);
  plVar2 = (long *)(lVar5 + ((long)param_4 >> 1));
  if ((param_4 & 1) != 0) {
    param_3 = *(code **)(*plVar2 + ((ulong)param_3 & 0xffffffff));
  }
  plStack_58 = plStack_68;
  uStack_60 = uStack_70;
  uStack_70 = 0;
  plStack_68 = (long *)0x0;
  (*param_3)(plVar2,&uStack_60);
  plVar2 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 10a20fc38; end: 10a20fc9f;  */

void FUN_10a20fc38(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  int *piVar4;
  long *extraout_x8;
  
  lVar3 = param_1;
  func_0x000109898688();
  if (lVar3 != 0) {
    FUN_10a053854(param_1,lVar3);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  puVar2 = &UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)puVar2 == 1) {
    return;
  }
  lVar3 = 1;
  piVar4 = (int *)0x0;
  FUN_10a052ee0(1,0,puVar2);
  if (*piVar4 != 1) {
    func_0x000109898688();
    if (lVar3 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a20fd3c(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a20fd28);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a20fca0; end: 10a20fcc3;  */

void FUN_10a20fca0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *extraout_x8;
  
  if ((int)param_1 == 1) {
    return;
  }
  lVar2 = 1;
  piVar3 = (int *)0x0;
  FUN_10a052ee0(1,0,param_1);
  if (*piVar3 != 1) {
    func_0x000109898688();
    if (lVar2 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      FUN_10a20fd3c(extraout_x8);
      if (*extraout_x8 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a20fd28);
    (*pcVar1)();
  }
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  return;
}



/* Entry: 10a20fcc4; end: 10a20fd3b;  */

void FUN_10a20fcc4(long *param_1,long param_2,int *param_3)

{
  code *pcVar1;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688();
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    FUN_10a20fd3c(param_1);
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a20fd28);
  (*pcVar1)();
}



/* Entry: 10a20fd3c; end: 10a20fdd3;  */

void FUN_10a20fd3c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c6c210,0), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a20fdd4; end: 10a20fe83;  */

void FUN_10a20fdd4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20f964(param_1,param_2,FUN_10a1edeb4,0,param_3,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20fe84; end: 10a20ff3b;  */

void FUN_10a20fe84(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20fb0c(param_1,param_2,0x10a1ededc,0,param_3,param_4,param_5);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20ff3c; end: 10a20fff3;  */

void FUN_10a20ff3c(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a20fa20(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[7];
  *param_1 = 2;
  *(char *)(param_1 + 2) = (char)lVar5;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a20fff4; end: 10a2100b3;  */

void FUN_10a20fff4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a20fc38(param_2,param_3);
  FUN_10a065020(param_5);
  func_0x00010989847c(param_2,param_4);
  *(char *)(plVar4 + 7) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a2100b4; end: 10a2101c7;  */

void FUN_10a2100b4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffb8;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = param_2;
  FUN_10a2101c8(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1ee68c(&stack0xffffffffffffffb8,plVar7);
  FUN_10a13e614(param_1,param_2,&stack0xffffffffffffffb8);
  if (in_stack_ffffffffffffffb8 != (long *)0x0) {
    puVar1 = (ulong *)(in_stack_ffffffffffffffb8 + 1);
    do {
      uVar10 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar10 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar10 & 0x1fffffffc) == 4) {
      do {
        uVar10 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar10 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar10 - 1 == 0) {
        (**(code **)(*in_stack_ffffffffffffffb8 + 8))();
      }
    }
  }
  plVar7 = plVar6 + 0x4b;
  lVar8 = plVar6[0x59];
  uVar10 = lVar8 - 1;
  plVar6[0x59] = uVar10;
  if (uVar10 < 8) {
    uVar10 = plVar7[lVar8 + 2];
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  else {
    uVar10 = *(ulong *)(plVar6[0x57] + -8);
    plVar6[0x57] = plVar6[0x57] + -8;
    if (plVar6[0x5a] == uVar10) {
      return;
    }
  }
  lVar8 = *plVar7;
  lVar13 = plVar6[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar10) {
    uVar16 = uVar10 - uVar15;
    lVar14 = plVar6[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar10 >> 0x3c == 0) {
        uVar9 = lVar14 - lVar8 >> 3;
        if (uVar9 <= uVar10) {
          uVar9 = uVar10;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_68 = plVar7;
        if (uVar9 >> 0x3c == 0) {
          lVar5 = uVar9 << 4;
          __Znwm();
          lVar13 = lVar5 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar7 = lVar12;
          plVar6[0x4c] = lVar13 + uVar16 * 0x10;
          plVar6[0x4d] = lVar5 + uVar9 * 0x10;
          lStack_88 = lVar8;
          lStack_80 = lVar8;
          lStack_78 = lVar8;
          lStack_70 = lVar14;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar4)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar6[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar10 < uVar15) {
    lVar8 = lVar8 + uVar10 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar6[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar6[0x5a] = uVar10;
  return;
}



/* Entry: 10a2101c8; end: 10a21022f;  */

void FUN_10a2101c8(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *extraout_x8;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  
  ppuVar3 = param_1;
  func_0x000109898688();
  if (ppuVar3 != (undefined **)0x0) {
    FUN_10a053854(param_1,ppuVar3);
    param_2 = ppuVar3;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar4 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  FUN_10a2102f0(plVar4,param_2);
  FUN_10a052e3c(param_4);
  lVar7 = plVar4[0x23];
  *extraout_x8 = 2;
  *(bool *)(extraout_x8 + 2) = lVar7 != 0;
  plVar4 = plVar5 + 0x4b;
  lVar7 = plVar5[0x59];
  uVar6 = lVar7 - 1;
  plVar5[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar7 + 2];
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar6) {
      return;
    }
  }
  lVar7 = *plVar4;
  lVar11 = plVar5[0x4c];
  lVar9 = lVar11 - lVar7;
  uVar13 = lVar9 >> 4;
  if (uVar13 < uVar6) {
    uVar14 = uVar6 - uVar13;
    lVar12 = plVar5[0x4d];
    if ((ulong)(lVar12 - lVar11 >> 4) < uVar14) {
      if (uVar6 >> 0x3c == 0) {
        uVar8 = lVar12 - lVar7 >> 3;
        if (uVar8 <= uVar6) {
          uVar8 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar12 - lVar7)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_88 = plVar4;
        if (uVar8 >> 0x3c == 0) {
          lVar2 = uVar8 << 4;
          __Znwm();
          lVar11 = lVar2 + lVar9;
          _bzero(lVar11,uVar14 * 0x10);
          lVar10 = lVar11 + uVar13 * -0x10;
          _memcpy(lVar10,lVar7,lVar9);
          *plVar4 = lVar10;
          plVar5[0x4c] = lVar11 + uVar14 * 0x10;
          plVar5[0x4d] = lVar2 + uVar8 * 0x10;
          lStack_a8 = lVar7;
          lStack_a0 = lVar7;
          lStack_98 = lVar7;
          lStack_90 = lVar12;
          func_0x00010988c1b8(&lStack_a8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar11,uVar14 * 0x10);
    plVar5[0x4c] = lVar11 + uVar14 * 0x10;
  }
  else if (uVar6 < uVar13) {
    lVar7 = lVar7 + uVar6 * 0x10;
    while (lVar11 != lVar7) {
      lVar11 = lVar11 + -0x10;
      func_0x00010988c204(lVar11);
    }
    plVar5[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar6;
  return;
}



/* Entry: 10a210230; end: 10a2102ef;  */

void FUN_10a210230(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a2102f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar6 = param_2[0x23];
  *param_1 = 2;
  *(bool *)(param_1 + 2) = lVar6 != 0;
  plVar1 = plVar4 + 0x4b;
  lVar6 = plVar4[0x59];
  uVar5 = lVar6 - 1;
  plVar4[0x59] = uVar5;
  if (uVar5 < 8) {
    uVar5 = plVar1[lVar6 + 2];
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  else {
    uVar5 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar5) {
      return;
    }
  }
  lVar6 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar6;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar5) {
    uVar13 = uVar5 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar5 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar6 >> 3;
        if (uVar7 <= uVar5) {
          uVar7 = uVar5;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar6)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar6,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar6;
          lStack_80 = lVar6;
          lStack_78 = lVar6;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar5 < uVar12) {
    lVar6 = lVar6 + uVar5 * 0x10;
    while (lVar10 != lVar6) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar6;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar5;
  return;
}



/* Entry: 10a2102f0; end: 10a210357;  */

void FUN_10a2102f0(undefined **param_1,undefined **param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_x8;
  undefined8 uStack_68;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c(param_1,ppuVar1);
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      param_4 = 0x10;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  plVar2 = (long *)&UNK_10f68f52e;
  func_0x00010988bd28();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = plVar2;
  FUN_10a2102f0(plVar2,param_2);
  FUN_10a052e3c(param_4);
  uStack_68 = NEON_ucvtf(plVar4[0x1f],4);
  FUN_10a07ff64(extraout_x8,plVar2,&uStack_68);
  func_0x00010988c170(plVar3 + 0x4b);
  return;
}



/* Entry: 10a210358; end: 10a210427;  */

void FUN_10a210358(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  undefined8 uStack_48;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar1[0x59] < 8) {
    plVar1[plVar1[0x59] + 0x4e] = plVar1[0x5a];
    plVar1[0x59] = plVar1[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar1 + 0x4b);
  }
  plVar2 = param_2;
  FUN_10a2102f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  uStack_48 = NEON_ucvtf(plVar2[0x1f],4);
  FUN_10a07ff64(param_1,param_2,&uStack_48);
  func_0x00010988c170(plVar1 + 0x4b);
  return;
}



/* Entry: 10a210428; end: 10a21050b;  */

void FUN_10a210428(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2102f0(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1f6274(&stack0xffffffffffffffa8,plVar4 + 0x20);
  FUN_10a210610(param_1,param_2,&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&stack0xffffffffffffffa8);
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a21050c; end: 10a21060f;  */

void FUN_10a21050c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2101c8(param_2,param_3);
  FUN_10a210794(param_5);
  if (1 < *param_4) {
    FUN_10a2107b8(&lStack_70,param_2,param_4);
  }
  FUN_10a1f5b9c(&stack0xffffffffffffffa8,&lStack_70);
  FUN_10a1ee3c0(plVar4,&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&lStack_70);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a210610; end: 10a21065b;  */

void FUN_10a210610(undefined8 param_1,long param_2)

{
  undefined4 *extraout_x8;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)&uStack_20;
  if (*(uint *)(param_2 + 0x10) != 0xffffffff) {
    uStack_20 = param_1;
    (*(code *)(&PTR_FUN_110bb24e0)[*(uint *)(param_2 + 0x10)])(&puStack_18);
    return;
  }
  func_0x00010988bd28(&UNK_10f634b57);
  *extraout_x8 = 1;
  return;
}



/* Entry: 10a21065c; end: 10a21068b;  */

void FUN_10a21065c(undefined4 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 10a21068c; end: 10a210793;  */

void FUN_10a21068c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_2[1];
  uStack_30 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_10a052f68(param_1,&uStack_30);
  plVar1 = plStack_28;
  if (plStack_28 != (long *)0x0) {
    plVar2 = plStack_28 + 1;
    do {
      lVar5 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
    }
  }
  return;
}



/* Entry: 10a210794; end: 10a2107b7;  */

void FUN_10a210794(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  long *extraout_x8_00;
  long lVar6;
  long *plVar7;
  long lStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_1 == 1) {
    return;
  }
  uVar3 = 1;
  uVar5 = 0;
  FUN_10a052ee0(1,0,param_1);
  pcStack_18 = FUN_10a2107b8;
  uVar4 = uVar3;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10a210834();
  if ((int)uVar4 != 0) {
    FUN_10a204940(&uStack_50,uVar3,uVar5);
    extraout_x8[1] = uStack_48;
    *extraout_x8 = uStack_50;
    *(undefined4 *)(extraout_x8 + 2) = 1;
    return;
  }
  uVar4 = uVar3;
  func_0x00010a2109c4();
  if ((int)uVar4 != 0) {
    FUN_10a210a40(&uStack_50,uVar3,uVar5);
    extraout_x8[1] = uStack_48;
    *extraout_x8 = uStack_50;
    *(undefined4 *)(extraout_x8 + 2) = 2;
    return;
  }
  uVar4 = uVar3;
  FUN_10a211000();
  if ((int)uVar4 != 0) {
    FUN_10a21107c(&uStack_50,uVar3,uVar5);
    extraout_x8[1] = uStack_48;
    *extraout_x8 = uStack_50;
    *(undefined4 *)(extraout_x8 + 2) = 3;
    return;
  }
  func_0x00010988bd28(&UNK_10f634795);
  pcStack_58 = FUN_10a210be4;
  uStack_70 = uVar5;
  ppuStack_60 = &puStack_20;
  func_0x00010989879c(&lStack_80);
  plVar7 = extraout_x8_00;
  if ((lStack_80 != 0) &&
     (___dynamic_cast(lStack_80,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10), plVar7 = extraout_x8_00
     , lStack_80 != 0)) {
    *extraout_x8_00 = lStack_80;
    extraout_x8_00[1] = (long)plStack_78;
    plVar7 = &lStack_80;
  }
  *plVar7 = 0;
  plVar7[1] = 0;
  if (plStack_78 != (long *)0x0) {
    plVar7 = plStack_78 + 1;
    do {
      lVar6 = *plVar7;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
    }
  }
  return;
}



/* Entry: 10a2107b8; end: 10a210833;  */

void FUN_10a2107b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *extraout_x8;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_2;
  FUN_10a210834();
  if ((int)uVar3 != 0) {
    FUN_10a204940(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 1;
    return;
  }
  uVar3 = param_2;
  func_0x00010a2109c4();
  if ((int)uVar3 != 0) {
    FUN_10a210a40(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 2;
    return;
  }
  uVar3 = param_2;
  FUN_10a211000();
  if ((int)uVar3 != 0) {
    FUN_10a21107c(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 3;
    return;
  }
  func_0x00010988bd28(&UNK_10f634795);
  pcStack_48 = FUN_10a210be4;
  uStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010989879c(&lStack_70);
  plVar5 = extraout_x8;
  if ((lStack_70 != 0) &&
     (___dynamic_cast(lStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10), plVar5 = extraout_x8,
     lStack_70 != 0)) {
    *extraout_x8 = lStack_70;
    extraout_x8[1] = (long)plStack_68;
    plVar5 = &lStack_70;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a210834; end: 10a2108af;  */

bool FUN_10a210834(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  func_0x000109898688();
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    FUN_10a21092c(&lStack_30);
    bVar4 = lStack_30 != 0;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a2108b0; end: 10a21092b;  */

void FUN_10a2108b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *extraout_x8;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_2;
  func_0x00010a2109c4();
  if ((int)uVar3 != 0) {
    FUN_10a210a40(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 2;
    return;
  }
  uVar3 = param_2;
  FUN_10a211000();
  if ((int)uVar3 != 0) {
    FUN_10a21107c(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 3;
    return;
  }
  func_0x00010988bd28(&UNK_10f634795);
  pcStack_48 = FUN_10a210be4;
  uStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010989879c(&lStack_70);
  plVar5 = extraout_x8;
  if ((lStack_70 != 0) &&
     (___dynamic_cast(lStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10), plVar5 = extraout_x8,
     lStack_70 != 0)) {
    *extraout_x8 = lStack_70;
    extraout_x8[1] = (long)plStack_68;
    plVar5 = &lStack_70;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a21092c; end: 10a210a3f;  */

void FUN_10a21092c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c48e80,0x10), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a210a40; end: 10a210b7b;  */

void FUN_10a210a40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a210b5c);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a210c7c(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a210b7c; end: 10a210be3;  */

void FUN_10a210b7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  long *extraout_x8;
  long lVar4;
  long *plVar5;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = param_2;
  FUN_10a211000();
  if ((int)uVar3 != 0) {
    FUN_10a21107c(&uStack_40,param_2,param_3);
    param_1[1] = uStack_38;
    *param_1 = uStack_40;
    *(undefined4 *)(param_1 + 2) = 3;
    return;
  }
  func_0x00010988bd28(&UNK_10f634795);
  pcStack_48 = FUN_10a210be4;
  uStack_60 = param_3;
  puStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x00010989879c(&lStack_70);
  plVar5 = extraout_x8;
  if ((lStack_70 != 0) &&
     (___dynamic_cast(lStack_70,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10), plVar5 = extraout_x8,
     lStack_70 != 0)) {
    *extraout_x8 = lStack_70;
    extraout_x8[1] = (long)plStack_68;
    plVar5 = &lStack_70;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  if (plStack_68 != (long *)0x0) {
    plVar5 = plStack_68 + 1;
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
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10a210be4; end: 10a210c7b;  */

void FUN_10a210be4(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c47f08,0x10), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a210c7c; end: 10a210fff;  */

void FUN_10a210c7c(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a211000; end: 10a21107b;  */

bool FUN_10a211000(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  func_0x000109898688();
  if (param_1 == 0) {
    bVar4 = false;
  }
  else {
    FUN_10a2111b8(&lStack_30);
    bVar4 = lStack_30 != 0;
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
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
  }
  return bVar4;
}



/* Entry: 10a21107c; end: 10a2111b7;  */

void FUN_10a21107c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  func_0x000109898610(&lStack_40);
  if (lStack_40 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    ___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110c47f58,0x10);
    if (lStack_40 == 0) {
      plVar5 = &lStack_50;
    }
    else {
      plStack_48 = plStack_38;
      plVar5 = &lStack_40;
      lStack_50 = lStack_40;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    if (lStack_50 == 0) {
      func_0x00010988bd28(&UNK_10f685500);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a211198);
      (*pcVar4)();
    }
    uStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10a211250(param_1,&lStack_50,&uStack_60);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
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
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  if (plStack_38 != (long *)0x0) {
    plVar5 = plStack_38 + 1;
    do {
      lVar6 = *plVar5;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10a2111b8; end: 10a21124f;  */

void FUN_10a2111b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  func_0x00010989879c(&lStack_30);
  if ((lStack_30 != 0) &&
     (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110c47f58,0x10), lStack_30 != 0)) {
    *param_1 = lStack_30;
    param_1[1] = (long)plStack_28;
    param_1 = &lStack_30;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_28 != (long *)0x0) {
    plVar1 = plStack_28 + 1;
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
      (**(code **)(*plStack_28 + 0x10))(plStack_28);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
    }
  }
  return;
}



/* Entry: 10a211250; end: 10a2115d3;  */

void FUN_10a211250(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined *extraout_x8;
  long lVar8;
  undefined *puVar9;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long lStack_40;
  long *plStack_38;
  
  FUN_10a0533bc(&plStack_50,*param_2);
  if (plStack_50 == (long *)0x0) {
    lVar8 = *param_3;
    func_0x0001098849a4(&lStack_40,lVar8,param_3[1]);
    plVar5 = (long *)0x30;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    *plVar5 = (long)&PTR_DAT_110b174d8;
    plStack_60 = plVar5 + 3;
    if ((int)lStack_40 == 3) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 3;
      plVar5[5] = (long)plStack_38;
    }
    else if ((int)lStack_40 == 2) {
      plVar5[3] = lVar8;
      *(undefined4 *)(plVar5 + 4) = 2;
      *(undefined1 *)(plVar5 + 5) = plStack_38._0_1_;
    }
    else if ((int)lStack_40 < 4) {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
    }
    else {
      plVar5[3] = lVar8;
      *(int *)(plVar5 + 4) = (int)lStack_40;
      plVar5[5] = (long)plStack_38;
    }
    lVar8 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar6 = (long *)(lVar2 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = *plVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar6 = (long *)0x90;
    plStack_58 = plVar5;
    lStack_40 = lVar8;
    plStack_38 = (long *)lVar2;
    __Znwm();
    plVar5 = plStack_48;
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = (long)&PTR_FUN_110b9fe30;
    plStack_50 = plVar6 + 3;
    *plStack_50 = lVar8;
    lStack_40 = 0;
    plStack_38 = (long *)0x0;
    plVar6[4] = lVar2;
    plVar6[5] = 0;
    plVar6[6] = 0;
    plVar6[7] = 0x32aaaba7;
    plVar6[9] = 0;
    plVar6[8] = 0;
    plVar6[0xb] = 0;
    plVar6[10] = 0;
    plVar6[0xd] = 0;
    plVar6[0xc] = 0;
    plVar6[0xf] = 0;
    plVar6[0xe] = 0;
    plVar6[0x11] = 0;
    plVar6[0x10] = 0;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar8 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        lVar8 = *plStack_48;
        plStack_48 = plVar6;
        (**(code **)(lVar8 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        plVar6 = plStack_48;
      }
    }
    plStack_48 = plVar6;
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a04a7fc(plStack_50 + 2,&plStack_60);
    lStack_40 = *param_2;
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_48;
    if (plStack_48 == (long *)0x0) {
      plStack_38 = (long *)0x0;
    }
    else {
      plVar5 = plStack_48 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plStack_38 = plStack_48;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = *plVar5 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010a053e8c(plStack_50,&lStack_40);
    plVar5 = plStack_38;
    if (plStack_38 != (long *)0x0) {
      plVar6 = plStack_38 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_38 + 0x10))(plStack_38);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010a053ee8(*param_2,&plStack_50);
    ppuVar7 = &PTR___tlv_bootstrap_11340df48;
    (*(code *)PTR___tlv_bootstrap_11340df48)(*(undefined8 *)(*param_2 + 0x50));
    puVar9 = *ppuVar7;
    if (extraout_x8 != (undefined *)0x0) {
      puVar9 = extraout_x8;
    }
    FUN_10aa89b3c(*(undefined8 *)(puVar9 + 0x870),&plStack_50);
    plVar5 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar6 = plStack_58 + 1;
      do {
        lVar8 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar8 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a053e40(&lStack_40);
    param_1[1] = (long)plStack_38;
    *param_1 = lStack_40;
  }
  plVar5 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar6 = plStack_48 + 1;
    do {
      lVar8 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return;
}



/* Entry: 10a2115d4; end: 10a211873;  */

void FUN_10a2115d4(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  undefined1 auStack_138 [8];
  long alStack_130 [3];
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  long lStack_f0;
  char cStack_d8;
  undefined1 uStack_d0;
  long lStack_c0;
  char cStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a211874(param_2,param_3);
  FUN_10a2118dc(param_5);
  FUN_10a211900(&lStack_148,param_2,param_4);
  FUN_10a2119fc(&lStack_158,param_2,param_4 + 0x10);
  func_0x00010a068bd8(param_2,param_4 + 0x20);
  if (lStack_148 == 0) {
    puVar7 = &UNK_10f64502a;
  }
  else {
    if (lStack_158 != 0) {
      auStack_138[0] = 0;
      alStack_130[1] = 0;
      alStack_130[2] = 0;
      alStack_130[0] = 0;
      uStack_118 = 0xff000000;
      uStack_114 = 0;
      uStack_110 = 0;
      cStack_d8 = '\0';
      uStack_d0 = 0;
      cStack_a0 = '\0';
      uStack_98 = 0;
      plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
      uStack_60 = 0;
      uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
      if (alStack_130 != (long *)(lStack_148 + 0x18)) {
        FUN_10a1f6490();
      }
      FUN_10a1ef368(lStack_158,auStack_138);
      uStack_114 = SUB81(param_2,0);
      FUN_10a1ef404(plVar6 + 4,auStack_138);
      if (((char)plStack_68 == '\x01') && (uStack_88._7_1_ < '\0')) {
        __ZdlPv(CONCAT71(uStack_97,uStack_98));
      }
      if ((cStack_a0 == '\x01') && (lStack_c0 != 0)) {
        __ZdlPv();
      }
      if ((cStack_d8 == '\x01') && (lStack_f0 != 0)) {
        __ZdlPv();
      }
      if (alStack_130[0] != 0) {
        __ZdlPv();
      }
      if (plStack_150 != (long *)0x0) {
        plVar6 = plStack_150 + 1;
        do {
          lVar10 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
        }
      }
      if (plStack_140 != (long *)0x0) {
        plVar6 = plStack_140 + 1;
        do {
          lVar10 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar10 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar10 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar10 = plVar5[0x59];
      uVar8 = lVar10 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar6[lVar10 + 2];
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      lVar10 = *plVar6;
      lVar13 = plVar5[0x4c];
      lVar11 = lVar13 - lVar10;
      uVar15 = lVar11 >> 4;
      if (uVar15 < uVar8) {
        uVar16 = uVar8 - uVar15;
        lVar14 = plVar5[0x4d];
        if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
          if (uVar8 >> 0x3c == 0) {
            uVar9 = lVar14 - lVar10 >> 3;
            if (uVar9 <= uVar8) {
              uVar9 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar14 - lVar10)) {
              uVar9 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar9 >> 0x3c == 0) {
              lVar4 = uVar9 << 4;
              __Znwm();
              lVar13 = lVar4 + lVar11;
              _bzero(lVar13,uVar16 * 0x10);
              lVar12 = lVar13 + uVar15 * -0x10;
              _memcpy(lVar12,lVar10,lVar11);
              *plVar6 = lVar12;
              plVar5[0x4c] = lVar13 + uVar16 * 0x10;
              plVar5[0x4d] = lVar4 + uVar9 * 0x10;
              uStack_88 = lVar10;
              lStack_80 = lVar10;
              lStack_78 = lVar10;
              lStack_70 = lVar14;
              func_0x00010988c1b8(&uStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar13,uVar16 * 0x10);
        plVar5[0x4c] = lVar13 + uVar16 * 0x10;
      }
      else if (uVar8 < uVar15) {
        lVar10 = lVar10 + uVar8 * 0x10;
        while (lVar13 != lVar10) {
          lVar13 = lVar13 + -0x10;
          func_0x00010988c204(lVar13);
        }
        plVar5[0x4c] = lVar10;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f645059;
  }
  FUN_10a00946c(puVar7);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a211830);
  (*pcVar3)();
}



/* Entry: 10a211874; end: 10a2118db;  */

void FUN_10a211874(long param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  int *piVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lStack_60;
  long *plStack_58;
  
  lVar6 = param_1;
  func_0x000109898688();
  if (lVar6 != 0) {
    FUN_10a053854(param_1,lVar6);
    if ((param_1 != 0) && (___dynamic_cast(), param_1 != 0)) {
      return;
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar4 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar4 == 3) {
    return;
  }
  plVar5 = (long *)0x3;
  lVar6 = 0;
  FUN_10a052ee0();
  if (*piVar4 != 1) {
    func_0x000109898688(lVar6,piVar4);
    if (lVar6 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_60);
      plVar7 = plVar5;
      if ((lStack_60 != 0) &&
         (___dynamic_cast(lStack_60,&PTR_DAT_110b178e0,&PTR_DAT_110bb1bb8,0), lStack_60 != 0)) {
        *plVar5 = lStack_60;
        plVar5[1] = (long)plStack_58;
        plVar7 = &lStack_60;
      }
      *plVar7 = 0;
      plVar7[1] = 0;
      if (plStack_58 != (long *)0x0) {
        plVar7 = plStack_58 + 1;
        do {
          lVar6 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_58);
        }
      }
      if (*plVar5 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2119e8);
    (*pcVar3)();
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  return;
}



/* Entry: 10a2118dc; end: 10a2118ff;  */

void FUN_10a2118dc(int *param_1)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 3) {
    return;
  }
  plVar4 = (long *)0x3;
  lVar5 = 0;
  FUN_10a052ee0();
  if (*param_1 != 1) {
    func_0x000109898688(lVar5,param_1);
    if (lVar5 == 0) {
      func_0x00010988bd28(&UNK_10f68f52e);
    }
    else {
      func_0x00010989879c(&lStack_40);
      plVar6 = plVar4;
      if ((lStack_40 != 0) &&
         (___dynamic_cast(lStack_40,&PTR_DAT_110b178e0,&PTR_DAT_110bb1bb8,0), lStack_40 != 0)) {
        *plVar4 = lStack_40;
        plVar4[1] = (long)plStack_38;
        plVar6 = &lStack_40;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plStack_38 != (long *)0x0) {
        plVar6 = plStack_38 + 1;
        do {
          lVar5 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
        }
      }
      if (*plVar4 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2119e8);
    (*pcVar3)();
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  return;
}



/* Entry: 10a211900; end: 10a2119fb;  */

void FUN_10a211900(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110bb1bb8,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2119e8);
  (*pcVar3)();
}



/* Entry: 10a2119fc; end: 10a211af7;  */

void FUN_10a2119fc(long *param_1,long param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lStack_30;
  long *plStack_28;
  
  if (*param_3 == 1) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x000109898688(param_2,param_3);
  if (param_2 == 0) {
    func_0x00010988bd28(&UNK_10f68f52e);
  }
  else {
    func_0x00010989879c(&lStack_30);
    plVar4 = param_1;
    if ((lStack_30 != 0) &&
       (___dynamic_cast(lStack_30,&PTR_DAT_110b178e0,&PTR_DAT_110bb1ba0,0), lStack_30 != 0)) {
      *param_1 = lStack_30;
      param_1[1] = (long)plStack_28;
      plVar4 = &lStack_30;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    if (plStack_28 != (long *)0x0) {
      plVar4 = plStack_28 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_28);
      }
    }
    if (*param_1 != 0) {
      return;
    }
  }
  func_0x00010988bd28(&UNK_10f58251f);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a211ae4);
  (*pcVar3)();
}



/* Entry: 10a211af8; end: 10a211ba7;  */

long FUN_10a211af8(long param_1)

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



/* Entry: 10a211ba8; end: 10a211feb;  */

void FUN_10a211ba8(undefined4 *param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_168;
  long *plStack_160;
  long lStack_158;
  long *plStack_150;
  long lStack_148;
  long *plStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined1 uStack_114;
  undefined1 uStack_110;
  long lStack_f0;
  long lStack_e8;
  char cStack_d8;
  ulong uStack_d0;
  undefined4 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  char cStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a211874(param_2,param_3);
  FUN_10a211fec(param_5);
  FUN_10a211900(&lStack_148,param_2,param_4);
  FUN_10a2119fc(&lStack_158,param_2,param_4 + 0x10);
  if (*(int *)(param_4 + 0x20) == 1) {
    lStack_168 = 0;
    plStack_160 = (long *)0x0;
  }
  else {
    func_0x000109898688(param_2,(int *)(param_4 + 0x20));
    if (param_2 == (long *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a211f90;
    }
    func_0x00010989879c(&lStack_138);
    lVar11 = CONCAT71(lStack_138._1_7_,(undefined1)lStack_138);
    if ((lVar11 == 0) ||
       (___dynamic_cast(lVar11,&PTR_DAT_110b178e0,&PTR_DAT_110c6a278,0), lVar11 == 0)) {
      plVar9 = &lStack_168;
    }
    else {
      plStack_160 = plStack_130;
      plVar9 = &lStack_138;
      lStack_168 = lVar11;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    if (plStack_130 != (long *)0x0) {
      plVar9 = plStack_130 + 1;
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plStack_130 + 0x10))(plStack_130);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_130);
      }
    }
    if (lStack_168 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a211f90;
    }
  }
  lVar11 = lStack_168;
  if (lStack_148 == 0) {
    puVar7 = &UNK_10f645089;
  }
  else if (lStack_158 == 0) {
    puVar7 = &UNK_10f6450ba;
  }
  else {
    if (lStack_168 != 0) {
      plStack_130 = (long *)0x0;
      plStack_128 = (long *)0x0;
      uStack_120 = 0;
      uStack_118 = 0xff000000;
      uStack_114 = 0;
      uStack_110 = 0;
      cStack_d8 = '\0';
      uStack_d0 = uStack_d0 & 0xffffffffffffff00;
      cStack_a0 = '\0';
      uStack_98 = 0;
      plStack_68 = (long *)((ulong)plStack_68 & 0xffffffffffffff00);
      uStack_60 = 0;
      lStack_138._0_1_ = 1;
      uStack_58 = (ulong)uStack_58._4_4_ << 0x20;
      if (&plStack_130 != (long **)(lStack_148 + 0x18)) {
        FUN_10a1f6490();
      }
      FUN_10a1ef368(lStack_158,&lStack_138);
      uStack_d0 = *(ulong *)(lVar11 + 0x18);
      uStack_c8 = *(undefined4 *)(lVar11 + 0x20);
      if (cStack_a0 == '\x01') {
        if (&uStack_d0 != (ulong *)(lVar11 + 0x18)) {
          func_0x00010a14ddc8(&lStack_c0,*(long *)(lVar11 + 0x28),*(long *)(lVar11 + 0x30),
                              *(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x28) >> 2);
        }
        uStack_a8 = *(undefined4 *)(lVar11 + 0x40);
      }
      else {
        lStack_c0 = 0;
        lStack_b8 = 0;
        uStack_b0 = 0;
        FUN_10a0ca588(&lStack_c0,*(long *)(lVar11 + 0x28),*(long *)(lVar11 + 0x30),
                      *(long *)(lVar11 + 0x30) - *(long *)(lVar11 + 0x28) >> 2);
        uStack_a8 = *(undefined4 *)(lVar11 + 0x40);
        cStack_a0 = '\x01';
      }
      FUN_10a1ef404(plVar6 + 4,&lStack_138);
      if (((char)plStack_68 == '\x01') && (uStack_88._7_1_ < '\0')) {
        __ZdlPv(CONCAT71(uStack_97,uStack_98));
      }
      if ((cStack_a0 == '\x01') && (lStack_c0 != 0)) {
        lStack_b8 = lStack_c0;
        __ZdlPv();
      }
      if ((cStack_d8 == '\x01') && (lStack_f0 != 0)) {
        lStack_e8 = lStack_f0;
        __ZdlPv();
      }
      if (plStack_130 != (long *)0x0) {
        plStack_128 = plStack_130;
        __ZdlPv();
      }
      plVar6 = plStack_160;
      if (plStack_160 != (long *)0x0) {
        plVar9 = plStack_160 + 1;
        do {
          lVar11 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_160 + 0x10))(plStack_160);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      if (plStack_150 != (long *)0x0) {
        plVar6 = plStack_150 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_150 + 0x10))(plStack_150);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_150);
        }
      }
      if (plStack_140 != (long *)0x0) {
        plVar6 = plStack_140 + 1;
        do {
          lVar11 = *plVar6;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_140 + 0x10))(plStack_140);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_140);
        }
      }
      *param_1 = 0;
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar8 = lVar11 - 1;
      plVar5[0x59] = uVar8;
      if (uVar8 < 8) {
        uVar8 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      else {
        uVar8 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar8) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar8) {
        uVar17 = uVar8 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar8 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar8) {
              uVar10 = uVar8;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              uStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&uStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar8 < uVar16) {
        lVar11 = lVar11 + uVar8 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar8;
      return;
    }
    puVar7 = &UNK_10f6450ec;
  }
  FUN_10a00946c(puVar7);
LAB_10a211f90:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a211f94);
  (*pcVar3)();
}



/* Entry: 10a211fec; end: 10a21200f;  */

long FUN_10a211fec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 3) {
    return param_1;
  }
  lVar4 = 3;
  FUN_10a052ee0(3,0,param_1);
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a212010; end: 10a212067;  */

long FUN_10a212010(long param_1)

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



/* Entry: 10a212068; end: 10a2124cf;  */

void FUN_10a212068(undefined4 *param_1,uint *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  long *plStack_150;
  long *plStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined1 uStack_134;
  undefined1 uStack_130;
  long lStack_110;
  long lStack_108;
  char cStack_f8;
  undefined1 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  char cStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar8 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(puVar8 + 0xb2) < 8) {
    *(long *)(puVar8 + *(ulong *)(puVar8 + 0xb2) * 2 + 0x9c) = *(long *)(puVar8 + 0xb4);
    *(long *)(puVar8 + 0xb2) = *(long *)(puVar8 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(puVar8 + 0x96);
  }
  puVar9 = param_2;
  FUN_10a211874(param_2,param_3);
  FUN_10a2124d0(param_5);
  if (*param_4 == 1) {
    lStack_168 = 0;
    plStack_160 = (long *)0x0;
  }
  else {
    puVar10 = param_2;
    func_0x000109898688(param_2,param_4);
    if (puVar10 == (uint *)0x0) {
      func_0x00010988bd28(&UNK_10f68f52e);
      goto LAB_10a212480;
    }
    func_0x00010989879c(&uStack_158);
    lVar16 = CONCAT71(uStack_157,uStack_158);
    if ((lVar16 == 0) ||
       (___dynamic_cast(lVar16,&PTR_DAT_110b178e0,&PTR_DAT_110c6a290,0), lVar16 == 0)) {
      plVar13 = &lStack_168;
    }
    else {
      plStack_160 = plStack_150;
      plVar13 = (long *)&uStack_158;
      lStack_168 = lVar16;
    }
    *plVar13 = 0;
    plVar13[1] = 0;
    plVar13 = plStack_150;
    if (plStack_150 != (long *)0x0) {
      plVar1 = plStack_150 + 1;
      do {
        lVar16 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plStack_150 + 0x10))(plStack_150);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
      }
    }
    if (lStack_168 == 0) {
      func_0x00010988bd28(&UNK_10f58251f);
      goto LAB_10a212480;
    }
  }
  lVar16 = lStack_168;
  FUN_10a2119fc(&lStack_178,param_2,param_4 + 4);
  FUN_10a05a42c(param_2,param_4 + 8);
  if (param_4[0xc] == 3) {
    fVar20 = (float)*(double *)(param_4 + 0xe);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0xe))) {
      fVar20 = 0.0;
    }
    if (lVar16 == 0) {
      puVar14 = &UNK_10f64511f;
    }
    else if (lStack_178 == 0) {
      puVar14 = &UNK_10f64514e;
    }
    else {
      lVar17 = *(long *)param_2;
      puVar14 = &UNK_10f64517e;
      if (((uint)ABS(fVar20) < 0x7f800000 && (*param_2 & 0x7fffffff) < 0x7f800000) &&
         ((param_2[1] & 0x7fffffff) < 0x7f800000)) {
        plStack_150 = (long *)0x0;
        plStack_148 = (long *)0x0;
        uStack_140 = 0;
        uStack_138 = 0xff000000;
        uStack_134 = 0;
        uStack_130 = 0;
        cStack_f8 = '\0';
        uStack_f0 = 0;
        cStack_c0 = '\0';
        uStack_b8 = uStack_b8 & 0xffffffffffffff00;
        uStack_88 = uStack_88 & 0xffffffffffffff00;
        uStack_80 = 0;
        uStack_78 = uStack_78 & 0xffffffff00000000;
        uStack_158 = 2;
        FUN_10a1ef368(lStack_178,&uStack_158);
        if (cStack_f8 == '\x01') {
          FUN_10a00946c(&UNK_10f6451c5);
          goto LAB_10a212480;
        }
        if ((char)uStack_88 == '\x01') {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&uStack_b8,lVar16 + 0x18);
          uStack_98 = *(undefined8 *)(lVar16 + 0x38);
          uStack_a0 = *(undefined8 *)(lVar16 + 0x30);
          uStack_90 = *(undefined1 *)(lVar16 + 0x40);
        }
        else {
          if (*(char *)(lVar16 + 0x2f) < '\0') {
            func_0x000107c3192c(&uStack_b8,*(undefined8 *)(lVar16 + 0x18),
                                *(undefined8 *)(lVar16 + 0x20));
          }
          else {
            uStack_b0 = *(undefined8 *)(lVar16 + 0x20);
            uStack_b8 = *(ulong *)(lVar16 + 0x18);
            lStack_a8 = *(long *)(lVar16 + 0x28);
          }
          uStack_98 = *(undefined8 *)(lVar16 + 0x38);
          uStack_a0 = *(undefined8 *)(lVar16 + 0x30);
          uStack_90 = *(undefined1 *)(lVar16 + 0x40);
          uStack_88 = CONCAT71(uStack_88._1_7_,1);
        }
        uStack_78 = CONCAT44(uStack_78._4_4_,fVar20);
        uStack_80 = lVar17;
        FUN_10a1ef404(puVar9 + 8,&uStack_158);
        if (((char)uStack_88 == '\x01') && (lStack_a8 < 0)) {
          __ZdlPv(uStack_b8);
        }
        if ((cStack_c0 == '\x01') && (lStack_e0 != 0)) {
          lStack_d8 = lStack_e0;
          __ZdlPv();
        }
        if ((cStack_f8 == '\x01') && (lStack_110 != 0)) {
          lStack_108 = lStack_110;
          __ZdlPv();
        }
        if (plStack_150 != (long *)0x0) {
          plStack_148 = plStack_150;
          __ZdlPv();
        }
        if (plStack_170 != (long *)0x0) {
          plVar13 = plStack_170 + 1;
          do {
            lVar16 = *plVar13;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_170 + 0x10))(plStack_170);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_170);
          }
        }
        plVar13 = plStack_160;
        if (plStack_160 != (long *)0x0) {
          plVar1 = plStack_160 + 1;
          do {
            lVar16 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar16 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar16 == 0) {
            (**(code **)(*plStack_160 + 0x10))(plStack_160);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
          }
        }
        *param_1 = 0;
        puVar2 = (ulong *)(puVar8 + 0x96);
        lVar16 = *(long *)(puVar8 + 0xb2);
        uVar12 = lVar16 - 1;
        *(ulong *)(puVar8 + 0xb2) = uVar12;
        if (uVar12 < 8) {
          uVar12 = puVar2[lVar16 + 2];
          if (*(ulong *)(puVar8 + 0xb4) == uVar12) {
            return;
          }
        }
        else {
          uVar12 = *(ulong *)(*(long *)(puVar8 + 0xae) + -8);
          *(ulong **)(puVar8 + 0xae) = (ulong *)(*(long *)(puVar8 + 0xae) + -8);
          if (*(ulong *)(puVar8 + 0xb4) == uVar12) {
            return;
          }
        }
        uVar3 = *puVar2;
        lVar16 = *(long *)(puVar8 + 0x98);
        lVar17 = lVar16 - uVar3;
        uVar18 = lVar17 >> 4;
        if (uVar18 < uVar12) {
          uVar19 = uVar12 - uVar18;
          if ((ulong)(*(long *)(puVar8 + 0x9a) - lVar16 >> 4) < uVar19) {
            if (uVar12 >> 0x3c == 0) {
              uVar11 = *(long *)(puVar8 + 0x9a) - uVar3;
              uVar15 = (long)uVar11 >> 3;
              if (uVar15 <= uVar12) {
                uVar15 = uVar12;
              }
              if (0x7fffffffffffffef < uVar11) {
                uVar15 = 0xfffffffffffffff;
              }
              if (uVar15 >> 0x3c == 0) {
                lVar7 = uVar15 << 4;
                __Znwm();
                lVar16 = lVar7 + lVar17;
                _bzero(lVar16,uVar19 * 0x10);
                uVar18 = lVar16 + uVar18 * -0x10;
                _memcpy(uVar18,uVar3,lVar17);
                *puVar2 = uVar18;
                *(ulong *)(puVar8 + 0x98) = lVar16 + uVar19 * 0x10;
                *(ulong *)(puVar8 + 0x9a) = lVar7 + uVar15 * 0x10;
                uStack_88 = uVar3;
                uStack_80 = uVar3;
                uStack_78 = uVar3;
                func_0x00010988c1b8(&uStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar6)();
          }
          _bzero(lVar16,uVar19 * 0x10);
          *(ulong *)(puVar8 + 0x98) = lVar16 + uVar19 * 0x10;
        }
        else if (uVar12 < uVar18) {
          lVar17 = uVar3 + uVar12 * 0x10;
          while (lVar16 != lVar17) {
            lVar16 = lVar16 + -0x10;
            func_0x00010988c204(lVar16);
          }
          *(long *)(puVar8 + 0x98) = lVar17;
        }
code_r0x00010988c138:
        *(ulong *)(puVar8 + 0xb4) = uVar12;
        return;
      }
    }
    FUN_10a00946c(puVar14);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
LAB_10a212480:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a212484);
  (*pcVar6)();
}



/* Entry: 10a2124d0; end: 10a2124f3;  */

long FUN_10a2124d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if ((int)param_1 == 4) {
    return param_1;
  }
  lVar4 = 4;
  FUN_10a052ee0(4,0,param_1);
  plVar6 = *(long **)(lVar4 + 8);
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
  return lVar4;
}



/* Entry: 10a2124f4; end: 10a21254b;  */

long FUN_10a2124f4(long param_1)

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



/* Entry: 10a21254c; end: 10a212653;  */

void FUN_10a21254c(undefined4 *param_1,long *param_2,undefined8 param_3,uint *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a211874(param_2,param_3);
  FUN_10a210794(param_5);
  if (1 < *param_4) {
    FUN_10a2107b8(&lStack_70,param_2,param_4);
  }
  FUN_10a1f5b9c(&stack0xffffffffffffffa8,&lStack_70);
  FUN_10a1f6844(plVar4 + 7,&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&stack0xffffffffffffffa8);
  FUN_10a1f57fc(&lStack_70);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a212654; end: 10a2127b3;  */

void FUN_10a212654(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  long *in_stack_ffffffffffffffa8;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  FUN_10a211874(param_2,param_3);
  FUN_10a052e3c(param_5);
  FUN_10a1ef5ec(&stack0xffffffffffffffa0,plVar6);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = *plVar6 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_10a052f68(param_1,param_2,&stack0xffffffffffffffb0);
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  if (in_stack_ffffffffffffffa8 != (long *)0x0) {
    plVar6 = in_stack_ffffffffffffffa8 + 1;
    do {
      lVar9 = *plVar6;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar2) {
        *plVar6 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x10))(in_stack_ffffffffffffffa8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(in_stack_ffffffffffffffa8);
    }
  }
  plVar6 = plVar5 + 0x4b;
  lVar9 = plVar5[0x59];
  uVar7 = lVar9 - 1;
  plVar5[0x59] = uVar7;
  if (uVar7 < 8) {
    uVar7 = plVar6[lVar9 + 2];
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  else {
    uVar7 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar7) {
      return;
    }
  }
  lVar9 = *plVar6;
  lVar12 = plVar5[0x4c];
  lVar10 = lVar12 - lVar9;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar7) {
    uVar15 = uVar7 - uVar14;
    lVar13 = plVar5[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar7 >> 0x3c == 0) {
        uVar8 = lVar13 - lVar9 >> 3;
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar9)) {
          uVar8 = 0xfffffffffffffff;
        }
        plStack_68 = plVar6;
        if (uVar8 >> 0x3c == 0) {
          lVar4 = uVar8 << 4;
          __Znwm();
          lVar12 = lVar4 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar9,lVar10);
          *plVar6 = lVar11;
          plVar5[0x4c] = lVar12 + uVar15 * 0x10;
          plVar5[0x4d] = lVar4 + uVar8 * 0x10;
          lStack_88 = lVar9;
          lStack_80 = lVar9;
          lStack_78 = lVar9;
          lStack_70 = lVar13;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar3)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar5[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar7 < uVar14) {
    lVar9 = lVar9 + uVar7 * 0x10;
    while (lVar12 != lVar9) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar5[0x4c] = lVar9;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar7;
  return;
}



/* Entry: 10a2127b4; end: 10a21292f;  */

void FUN_10a2127b4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined **ppuStack_58;
  long *plStack_50;
  long *plStack_48;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a212930(param_5);
  plVar5 = param_2;
  func_0x00010a137904(param_2,param_4);
  plVar6 = param_2;
  func_0x00010a137904(param_2,param_4 + 0x10);
  if (((int)plVar5 != 0) && ((int)plVar6 != 0)) {
    plVar7 = (long *)0x68;
    __Znwm();
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)&PTR_FUN_110bb2510;
    plStack_50 = plVar7 + 3;
    *plStack_50 = (long)&PTR_FUN_110bafd60;
    plVar7[4] = 0;
    plVar7[5] = 0;
    *(int *)(plVar7 + 6) = (int)plVar5;
    *(int *)((long)plVar7 + 0x34) = (int)plVar6;
    plVar7[8] = 0;
    plVar7[9] = 0;
    plVar7[7] = 0;
    *(undefined4 *)(plVar7 + 0xc) = 0;
    ppuStack_58 = &PTR_DAT_110bb1b58;
    plStack_48 = plVar7;
    func_0x000109899de4(param_1,param_2,&plStack_50,&ppuStack_58,0,0);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar8 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    func_0x00010988c170(plVar4 + 0x4b);
    return;
  }
  FUN_10a00946c(&UNK_10f644fec);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a21291c);
  (*pcVar3)();
}



/* Entry: 10a212930; end: 10a212953;  */

void FUN_10a212930(undefined8 param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1 == 2) {
    return;
  }
  puVar1 = (undefined8 *)0x2;
  FUN_10a052ee0(2,0,param_1);
  *puVar1 = &PTR_FUN_110bb2510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a212954; end: 10a212963;  */

void FUN_10a212954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2510;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a212964; end: 10a212983;  */

void FUN_10a212964(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb2510;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a212984; end: 10a2129a3;  */

void FUN_10a212984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a21298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2129a4; end: 10a2129c3;  */

void FUN_10a2129a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110bb2560;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a2129c4; end: 10a2129d3;  */

void FUN_10a2129c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a2129cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a2129d4; end: 10a212a2b;  */

long FUN_10a2129d4(long param_1)

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



/* Entry: 10a212a2c; end: 10a212b13;  */

void FUN_10a212a2c(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  code *pcVar1;
  int aiStack_20 [2];
  undefined8 *puStack_18;
  
  if (param_1[2] != param_1[3]) {
    aiStack_20[0] = 3;
    puStack_18 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,param_2,aiStack_20);
    if ((3 < aiStack_20[0]) && (puStack_18 != (undefined8 *)0x0)) {
      (**(code **)*puStack_18)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a212aa0);
  (*pcVar1)();
}



/* Entry: 10a212b14; end: 10a212c0f;  */

undefined1  [16] FUN_10a212b14(ulong param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110bb1b70;
  puVar1 = &UNK_10f643dac;
  if ((undefined *)*param_2 != (undefined *)0x0) {
    puVar1 = (undefined *)*param_2;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,puVar1);
  ppuStack_a8 = (undefined **)*param_2;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = (undefined4)param_3;
  uStack_8c = param_2[1];
  uStack_84 = *(undefined4 *)(param_2 + 2);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = param_2[7];
  uStack_58 = *(undefined4 *)(param_2 + 8);
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a8);
  uVar2 = param_1;
  FUN_10a0051e8(param_1,param_3,*(undefined4 *)(param_2 + 1),*(undefined4 *)(param_2 + 8),
                *(undefined4 *)((long)param_2 + 0xc),*(undefined4 *)(param_2 + 2));
  if ((uVar2 & 1) == 0) {
    ppuStack_40 = &PTR_DAT_110bb1b70;
    uStack_38 = 0;
    ppuStack_a8 = &PTR_DAT_110b178e0;
    uStack_a0 = 0;
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001098949cc(param_1,*param_2,&ppuStack_40,&ppuStack_a8);
  }
  auVar3._8_8_ = param_3 & 0xffffffff | (ulong)*(uint *)(param_2 + 1) << 0x20;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a212c10; end: 10a212c63;  */

ulong FUN_10a212c10(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a212c64,0);
  }
  return param_1;
}



/* Entry: 10a212c64; end: 10a212d1f;  */

void FUN_10a212c64(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a212d20(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)(param_2 + 3));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a212d20; end: 10a212ddb;  */

undefined ** FUN_10a212d20(undefined **param_1,undefined **param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = param_1;
  func_0x000109898688();
  if (ppuVar1 != (undefined **)0x0) {
    FUN_10a052c2c();
    param_2 = ppuVar1;
    if (param_1 != (undefined **)0x0) {
      param_2 = &PTR_DAT_110b178e0;
      ___dynamic_cast();
      if (param_1 != (undefined **)0x0) {
        return param_1;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  ppuVar1 = (undefined **)&UNK_10f68f52e;
  func_0x00010988bd28();
  ppuVar2 = ppuVar1;
  FUN_10a0051e8();
  if (((ulong)ppuVar2 & 1) == 0) {
    FUN_10a0605c4(ppuVar1,*param_2,FUN_10a212ddc,0);
  }
  return ppuVar1;
}



/* Entry: 10a212ddc; end: 10a212e9f;  */

void FUN_10a212ddc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a212d20(param_2,param_3);
  FUN_10a052e3c(param_5);
  lVar5 = param_2[7];
  lVar10 = param_2[8];
  *param_1 = 3;
  *(double *)(param_1 + 2) = (double)(int)((ulong)(lVar10 - lVar5) >> 3);
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a212ea0; end: 10a212ef3;  */

ulong FUN_10a212ea0(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10a0605c4(param_1,*param_2,FUN_10a212ef4,0);
  }
  return param_1;
}



/* Entry: 10a212ef4; end: 10a212faf;  */

void FUN_10a212ef4(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar4 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  FUN_10a212d20(param_2,param_3);
  FUN_10a052e3c(param_5);
  *param_1 = 3;
  uVar14 = NEON_ucvtf((ulong)*(byte *)((long)param_2 + 0x19));
  *(undefined8 *)(param_1 + 2) = uVar14;
  plVar1 = plVar4 + 0x4b;
  lVar5 = plVar4[0x59];
  uVar6 = lVar5 - 1;
  plVar4[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar1[lVar5 + 2];
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar1;
  lVar10 = plVar4[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar4[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar1;
        if (uVar7 >> 0x3c == 0) {
          lVar3 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar3 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar1 = lVar9;
          plVar4[0x4c] = lVar10 + uVar13 * 0x10;
          plVar4[0x4d] = lVar3 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar2)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar4[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar4[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar6;
  return;
}



/* Entry: 10a212fb0; end: 10a21306b;  */

void FUN_10a212fb0(ulong param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar1 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar1) {
    uStack_88 = *(undefined8 *)(lVar1 + -0x60);
    uStack_90 = *(undefined8 *)(lVar1 + -0x68);
    uStack_68 = *(undefined8 *)(lVar1 + -0x40);
    uVar6 = *(ulong *)(lVar1 + -0x48);
    uVar7 = *(ulong *)(lVar1 + -0x50);
    uStack_80 = *(undefined8 *)(lVar1 + -0x58);
    uStack_58 = *(undefined8 *)(lVar1 + -0x30);
    uStack_60 = *(undefined8 *)(lVar1 + -0x38);
    uStack_48 = *(undefined8 *)(lVar1 + -0x20);
    uStack_50 = *(undefined8 *)(lVar1 + -0x28);
    uStack_30 = *(undefined8 *)(lVar1 + -8);
    uStack_38 = *(undefined8 *)(lVar1 + -0x10);
    uStack_40 = *(ulong *)(lVar1 + -0x18);
    *(long *)(param_1 + 0x170) = lVar1 + -0x68;
    uStack_78._4_4_ = (undefined4)(uVar7 >> 0x20);
    uVar2 = uStack_78._4_4_;
    uStack_70._4_4_ = (undefined4)(uVar6 >> 0x20);
    uVar3 = uStack_70._4_4_;
    uVar5 = param_1;
    uStack_78 = uVar7;
    uStack_70 = uVar6;
    FUN_10a0051e8(param_1,uVar7 & 0xffffffff,uVar2,uStack_40 & 0xffffffff,uVar6 & 0xffffffff,uVar3);
    if ((uVar5 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&uStack_90,param_1 + 0x1b8,&UNK_10f645c92,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a21306c);
  (*pcVar4)();
}



/* Entry: 10a21306c; end: 10a2131eb;  */

void FUN_10a21306c(undefined4 *param_1,uint *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  float fVar2;
  code *pcVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  uint *puStack_68;
  
  puVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(puVar5 + 0xb2) < 8) {
    *(long *)(puVar5 + *(ulong *)(puVar5 + 0xb2) * 2 + 0x9c) = *(long *)(puVar5 + 0xb4);
    *(long *)(puVar5 + 0xb2) = *(long *)(puVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(puVar5 + 0x96);
  }
  puVar6 = param_2;
  FUN_10a2131ec(param_2,param_3);
  FUN_10a213254(param_5);
  FUN_10a05a42c(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    fVar2 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar2 = 0.0;
    }
    if ((char)puVar6[6] == '\x01') {
      uVar16 = param_2[1];
      if (((uint)ABS(fVar2) < 0x7f800000 && (*param_2 & 0x7fffffff) < 0x7f800000) &&
          (uVar16 & 0x7fffffff) < 0x7f800000) {
        if (0.0 <= fVar2) {
          puVar6[9] = *param_2;
          puVar6[10] = uVar16;
          puVar6[0xc] = (uint)fVar2;
          puVar6 = puVar5 + 0x96;
          *param_1 = 0;
          uVar8 = *(long *)(puVar5 + 0xb2) - 1;
          *(ulong *)(puVar5 + 0xb2) = uVar8;
          if (uVar8 < 8) {
            uVar8 = *(ulong *)(puVar6 + uVar8 * 2 + 6);
            if (*(ulong *)(puVar5 + 0xb4) == uVar8) {
              return;
            }
          }
          else {
            uVar8 = *(ulong *)(*(long *)(puVar5 + 0xae) + -8);
            *(ulong **)(puVar5 + 0xae) = (ulong *)(*(long *)(puVar5 + 0xae) + -8);
            if (*(ulong *)(puVar5 + 0xb4) == uVar8) {
              return;
            }
          }
          lVar1 = *(long *)puVar6;
          lVar12 = *(long *)(puVar5 + 0x98);
          lVar10 = lVar12 - lVar1;
          uVar14 = lVar10 >> 4;
          if (uVar14 < uVar8) {
            uVar15 = uVar8 - uVar14;
            lVar13 = *(long *)(puVar5 + 0x9a);
            if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
              if (uVar8 >> 0x3c == 0) {
                uVar9 = lVar13 - lVar1 >> 3;
                if (uVar9 <= uVar8) {
                  uVar9 = uVar8;
                }
                if (0x7fffffffffffffef < (ulong)(lVar13 - lVar1)) {
                  uVar9 = 0xfffffffffffffff;
                }
                puStack_68 = puVar6;
                if (uVar9 >> 0x3c == 0) {
                  lVar4 = uVar9 << 4;
                  __Znwm();
                  lVar12 = lVar4 + lVar10;
                  _bzero(lVar12,uVar15 * 0x10);
                  lVar11 = lVar12 + uVar14 * -0x10;
                  _memcpy(lVar11,lVar1,lVar10);
                  *(long *)puVar6 = lVar11;
                  *(ulong *)(puVar5 + 0x98) = lVar12 + uVar15 * 0x10;
                  *(ulong *)(puVar5 + 0x9a) = lVar4 + uVar9 * 0x10;
                  lStack_88 = lVar1;
                  lStack_80 = lVar1;
                  lStack_78 = lVar1;
                  lStack_70 = lVar13;
                  func_0x00010988c1b8(&lStack_88);
                  goto code_r0x00010988c138;
                }
                func_0x000104c4f740();
              }
              else {
                func_0x00010988c1a4();
              }
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
              (*pcVar3)();
            }
            _bzero(lVar12,uVar15 * 0x10);
            *(ulong *)(puVar5 + 0x98) = lVar12 + uVar15 * 0x10;
          }
          else if (uVar8 < uVar14) {
            lVar1 = lVar1 + uVar8 * 0x10;
            while (lVar12 != lVar1) {
              lVar12 = lVar12 + -0x10;
              func_0x00010988c204(lVar12);
            }
            *(long *)(puVar5 + 0x98) = lVar1;
          }
code_r0x00010988c138:
          *(ulong *)(puVar5 + 0xb4) = uVar8;
          return;
        }
        puVar7 = &UNK_10f645452;
      }
      else {
        puVar7 = &UNK_10f645409;
      }
    }
    else {
      puVar7 = &UNK_10f6453c7;
    }
    FUN_10a00946c(puVar7);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a2131d8);
  (*pcVar3)();
}



/* Entry: 10a2131ec; end: 10a213253;  */

void FUN_10a2131ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  double dVar18;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long *plStack_98;
  
  lVar8 = param_1;
  func_0x000109898688();
  if (lVar8 != 0) {
    FUN_10a053854(param_1,lVar8);
    if (param_1 != 0) {
      param_4 = 0;
      ___dynamic_cast();
      if (param_1 != 0) {
        return;
      }
    }
    func_0x00010988bd28(&UNK_10f685496);
  }
  piVar3 = (int *)&UNK_10f68f52e;
  func_0x00010988bd28();
  if ((int)piVar3 == 2) {
    return;
  }
  plVar4 = (long *)0x2;
  uVar7 = 0;
  FUN_10a052ee0(2,0);
  plVar5 = plVar4;
  (**(code **)(*plVar4 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = plVar4;
  FUN_10a2131ec(plVar4,uVar7);
  FUN_10a213388(param_4);
  if (*piVar3 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a213374);
    (*pcVar1)();
  }
  dVar18 = *(double *)(piVar3 + 2);
  func_0x00010a1fba38(plVar4,piVar3 + 4);
  fVar17 = (float)dVar18;
  if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
    fVar17 = 0.0;
  }
  FUN_10a1f0f18(fVar17,(int)*plVar4,*(undefined4 *)((long)plVar4 + 4),(int)plVar4[1],
                *(undefined4 *)((long)plVar4 + 0xc),plVar6);
  *extraout_x8 = 0;
  plVar4 = plVar5 + 0x4b;
  lVar8 = plVar5[0x59];
  uVar9 = lVar8 - 1;
  plVar5[0x59] = uVar9;
  if (uVar9 < 8) {
    uVar9 = plVar4[lVar8 + 2];
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  else {
    uVar9 = *(ulong *)(plVar5[0x57] + -8);
    plVar5[0x57] = plVar5[0x57] + -8;
    if (plVar5[0x5a] == uVar9) {
      return;
    }
  }
  lVar8 = *plVar4;
  lVar13 = plVar5[0x4c];
  lVar11 = lVar13 - lVar8;
  uVar15 = lVar11 >> 4;
  if (uVar15 < uVar9) {
    uVar16 = uVar9 - uVar15;
    lVar14 = plVar5[0x4d];
    if ((ulong)(lVar14 - lVar13 >> 4) < uVar16) {
      if (uVar9 >> 0x3c == 0) {
        uVar10 = lVar14 - lVar8 >> 3;
        if (uVar10 <= uVar9) {
          uVar10 = uVar9;
        }
        if (0x7fffffffffffffef < (ulong)(lVar14 - lVar8)) {
          uVar10 = 0xfffffffffffffff;
        }
        plStack_98 = plVar4;
        if (uVar10 >> 0x3c == 0) {
          lVar2 = uVar10 << 4;
          __Znwm();
          lVar13 = lVar2 + lVar11;
          _bzero(lVar13,uVar16 * 0x10);
          lVar12 = lVar13 + uVar15 * -0x10;
          _memcpy(lVar12,lVar8,lVar11);
          *plVar4 = lVar12;
          plVar5[0x4c] = lVar13 + uVar16 * 0x10;
          plVar5[0x4d] = lVar2 + uVar10 * 0x10;
          lStack_b8 = lVar8;
          lStack_b0 = lVar8;
          lStack_a8 = lVar8;
          lStack_a0 = lVar14;
          func_0x00010988c1b8(&lStack_b8);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar13,uVar16 * 0x10);
    plVar5[0x4c] = lVar13 + uVar16 * 0x10;
  }
  else if (uVar9 < uVar15) {
    lVar8 = lVar8 + uVar9 * 0x10;
    while (lVar13 != lVar8) {
      lVar13 = lVar13 + -0x10;
      func_0x00010988c204(lVar13);
    }
    plVar5[0x4c] = lVar8;
  }
code_r0x00010988c138:
  plVar5[0x5a] = uVar9;
  return;
}



/* Entry: 10a213254; end: 10a213277;  */

void FUN_10a213254(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  double dVar17;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a2131ec(plVar3,uVar6);
  FUN_10a213388(param_4);
  if (*param_1 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a213374);
    (*pcVar1)();
  }
  dVar17 = *(double *)(param_1 + 2);
  func_0x00010a1fba38(plVar3,param_1 + 4);
  fVar16 = (float)dVar17;
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
    fVar16 = 0.0;
  }
  FUN_10a1f0f18(fVar16,(int)*plVar3,*(undefined4 *)((long)plVar3 + 4),(int)plVar3[1],
                *(undefined4 *)((long)plVar3 + 0xc),plVar5);
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a213278; end: 10a213387;  */

void FUN_10a213278(undefined4 *param_1,long *param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  double dVar15;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2131ec(param_2,param_3);
  FUN_10a213388(param_5);
  if (*param_4 != 3) {
    func_0x00010988bd28(&UNK_10f68f550);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10a213374);
    (*pcVar1)();
  }
  dVar15 = *(double *)(param_4 + 2);
  func_0x00010a1fba38(param_2,param_4 + 4);
  fVar14 = (float)dVar15;
  if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
    fVar14 = 0.0;
  }
  FUN_10a1f0f18(fVar14,(int)*param_2,*(undefined4 *)((long)param_2 + 4),(int)param_2[1],
                *(undefined4 *)((long)param_2 + 0xc),plVar4);
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a213388; end: 10a2133ab;  */

void FUN_10a213388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 2) {
    return;
  }
  plVar3 = (long *)0x2;
  uVar6 = 0;
  FUN_10a052ee0(2,0,param_1);
  plVar4 = plVar3;
  (**(code **)(*plVar3 + 0x58))();
  if ((ulong)plVar4[0x59] < 8) {
    plVar4[plVar4[0x59] + 0x4e] = plVar4[0x5a];
    plVar4[0x59] = plVar4[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar4 + 0x4b);
  }
  plVar5 = plVar3;
  FUN_10a2131ec(plVar3,uVar6);
  FUN_10a21346c(param_4);
  func_0x00010a068bd8(plVar3,param_1);
  *(char *)((long)plVar5 + 0x19) = (char)plVar3;
  *extraout_x8 = 0;
  plVar3 = plVar4 + 0x4b;
  lVar7 = plVar4[0x59];
  uVar8 = lVar7 - 1;
  plVar4[0x59] = uVar8;
  if (uVar8 < 8) {
    uVar8 = plVar3[lVar7 + 2];
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  else {
    uVar8 = *(ulong *)(plVar4[0x57] + -8);
    plVar4[0x57] = plVar4[0x57] + -8;
    if (plVar4[0x5a] == uVar8) {
      return;
    }
  }
  lVar7 = *plVar3;
  lVar12 = plVar4[0x4c];
  lVar10 = lVar12 - lVar7;
  uVar14 = lVar10 >> 4;
  if (uVar14 < uVar8) {
    uVar15 = uVar8 - uVar14;
    lVar13 = plVar4[0x4d];
    if ((ulong)(lVar13 - lVar12 >> 4) < uVar15) {
      if (uVar8 >> 0x3c == 0) {
        uVar9 = lVar13 - lVar7 >> 3;
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
        if (0x7fffffffffffffef < (ulong)(lVar13 - lVar7)) {
          uVar9 = 0xfffffffffffffff;
        }
        plStack_78 = plVar3;
        if (uVar9 >> 0x3c == 0) {
          lVar2 = uVar9 << 4;
          __Znwm();
          lVar12 = lVar2 + lVar10;
          _bzero(lVar12,uVar15 * 0x10);
          lVar11 = lVar12 + uVar14 * -0x10;
          _memcpy(lVar11,lVar7,lVar10);
          *plVar3 = lVar11;
          plVar4[0x4c] = lVar12 + uVar15 * 0x10;
          plVar4[0x4d] = lVar2 + uVar9 * 0x10;
          lStack_98 = lVar7;
          lStack_90 = lVar7;
          lStack_88 = lVar7;
          lStack_80 = lVar13;
          func_0x00010988c1b8(&lStack_98);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar12,uVar15 * 0x10);
    plVar4[0x4c] = lVar12 + uVar15 * 0x10;
  }
  else if (uVar8 < uVar14) {
    lVar7 = lVar7 + uVar8 * 0x10;
    while (lVar12 != lVar7) {
      lVar12 = lVar12 + -0x10;
      func_0x00010988c204(lVar12);
    }
    plVar4[0x4c] = lVar7;
  }
code_r0x00010988c138:
  plVar4[0x5a] = uVar8;
  return;
}



/* Entry: 10a2133ac; end: 10a21346b;  */

void FUN_10a2133ac(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar3[0x59] < 8) {
    plVar3[plVar3[0x59] + 0x4e] = plVar3[0x5a];
    plVar3[0x59] = plVar3[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar3 + 0x4b);
  }
  plVar4 = param_2;
  FUN_10a2131ec(param_2,param_3);
  FUN_10a21346c(param_5);
  func_0x00010a068bd8(param_2,param_4);
  *(char *)((long)plVar4 + 0x19) = (char)param_2;
  *param_1 = 0;
  plVar4 = plVar3 + 0x4b;
  lVar5 = plVar3[0x59];
  uVar6 = lVar5 - 1;
  plVar3[0x59] = uVar6;
  if (uVar6 < 8) {
    uVar6 = plVar4[lVar5 + 2];
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  else {
    uVar6 = *(ulong *)(plVar3[0x57] + -8);
    plVar3[0x57] = plVar3[0x57] + -8;
    if (plVar3[0x5a] == uVar6) {
      return;
    }
  }
  lVar5 = *plVar4;
  lVar10 = plVar3[0x4c];
  lVar8 = lVar10 - lVar5;
  uVar12 = lVar8 >> 4;
  if (uVar12 < uVar6) {
    uVar13 = uVar6 - uVar12;
    lVar11 = plVar3[0x4d];
    if ((ulong)(lVar11 - lVar10 >> 4) < uVar13) {
      if (uVar6 >> 0x3c == 0) {
        uVar7 = lVar11 - lVar5 >> 3;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        if (0x7fffffffffffffef < (ulong)(lVar11 - lVar5)) {
          uVar7 = 0xfffffffffffffff;
        }
        plStack_68 = plVar4;
        if (uVar7 >> 0x3c == 0) {
          lVar2 = uVar7 << 4;
          __Znwm();
          lVar10 = lVar2 + lVar8;
          _bzero(lVar10,uVar13 * 0x10);
          lVar9 = lVar10 + uVar12 * -0x10;
          _memcpy(lVar9,lVar5,lVar8);
          *plVar4 = lVar9;
          plVar3[0x4c] = lVar10 + uVar13 * 0x10;
          plVar3[0x4d] = lVar2 + uVar7 * 0x10;
          lStack_88 = lVar5;
          lStack_80 = lVar5;
          lStack_78 = lVar5;
          lStack_70 = lVar11;
          func_0x00010988c1b8(&lStack_88);
          goto code_r0x00010988c138;
        }
        func_0x000104c4f740();
      }
      else {
        func_0x00010988c1a4();
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10988c16c);
      (*pcVar1)();
    }
    _bzero(lVar10,uVar13 * 0x10);
    plVar3[0x4c] = lVar10 + uVar13 * 0x10;
  }
  else if (uVar6 < uVar12) {
    lVar5 = lVar5 + uVar6 * 0x10;
    while (lVar10 != lVar5) {
      lVar10 = lVar10 + -0x10;
      func_0x00010988c204(lVar10);
    }
    plVar3[0x4c] = lVar5;
  }
code_r0x00010988c138:
  plVar3[0x5a] = uVar6;
  return;
}



/* Entry: 10a21346c; end: 10a21348f;  */

void FUN_10a21346c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long *plStack_78;
  
  if ((int)param_1 == 1) {
    return;
  }
  plVar5 = (long *)0x1;
  uVar10 = 0;
  FUN_10a052ee0(1,0,param_1);
  plVar6 = plVar5;
  (**(code **)(*plVar5 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  plVar7 = plVar5;
  func_0x000109898688(plVar5,uVar10);
  if (plVar7 == (long *)0x0) {
    puVar9 = &UNK_10f68f52e;
  }
  else {
    plVar8 = plVar5;
    FUN_10a052c2c(plVar5,plVar7);
    if ((plVar8 != (long *)0x0) && (___dynamic_cast(), plVar8 != (long *)0x0)) {
      FUN_10a052e3c(param_4);
      FUN_10a1f1084(&lStack_80,plVar8);
      plVar7 = plStack_78;
      lStack_80 = 0;
      plStack_78 = (long *)0x0;
      func_0x000109899de4(extraout_x8,plVar5,&stack0xffffffffffffffa0,&stack0xffffffffffffff98,0,0);
      if (plVar7 != (long *)0x0) {
        plVar5 = plVar7 + 1;
        do {
          lVar13 = *plVar5;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
        }
      }
      plVar5 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar7 = plStack_78 + 1;
        do {
          lVar13 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar13 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar13 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
      plVar5 = plVar6 + 0x4b;
      lVar13 = plVar6[0x59];
      uVar11 = lVar13 - 1;
      plVar6[0x59] = uVar11;
      if (uVar11 < 8) {
        uVar11 = plVar5[lVar13 + 2];
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      else {
        uVar11 = *(ulong *)(plVar6[0x57] + -8);
        plVar6[0x57] = plVar6[0x57] + -8;
        if (plVar6[0x5a] == uVar11) {
          return;
        }
      }
      lVar13 = *plVar5;
      lVar16 = plVar6[0x4c];
      lVar14 = lVar16 - lVar13;
      uVar18 = lVar14 >> 4;
      if (uVar18 < uVar11) {
        uVar19 = uVar11 - uVar18;
        lVar17 = plVar6[0x4d];
        if ((ulong)(lVar17 - lVar16 >> 4) < uVar19) {
          if (uVar11 >> 0x3c == 0) {
            uVar12 = lVar17 - lVar13 >> 3;
            if (uVar12 <= uVar11) {
              uVar12 = uVar11;
            }
            if (0x7fffffffffffffef < (ulong)(lVar17 - lVar13)) {
              uVar12 = 0xfffffffffffffff;
            }
            plStack_78 = plVar5;
            if (uVar12 >> 0x3c == 0) {
              lVar4 = uVar12 << 4;
              __Znwm();
              lVar16 = lVar4 + lVar14;
              _bzero(lVar16,uVar19 * 0x10);
              lVar15 = lVar16 + uVar18 * -0x10;
              _memcpy(lVar15,lVar13,lVar14);
              *plVar5 = lVar15;
              plVar6[0x4c] = lVar16 + uVar19 * 0x10;
              plVar6[0x4d] = lVar4 + uVar12 * 0x10;
              lStack_98 = lVar13;
              lStack_90 = lVar13;
              lStack_88 = lVar13;
              lStack_80 = lVar17;
              func_0x00010988c1b8(&lStack_98);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar16,uVar19 * 0x10);
        plVar6[0x4c] = lVar16 + uVar19 * 0x10;
      }
      else if (uVar11 < uVar18) {
        lVar13 = lVar13 + uVar11 * 0x10;
        while (lVar16 != lVar13) {
          lVar16 = lVar16 + -0x10;
          func_0x00010988c204(lVar16);
        }
        plVar6[0x4c] = lVar13;
      }
code_r0x00010988c138:
      plVar6[0x5a] = uVar11;
      return;
    }
    puVar9 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar9);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a213628);
  (*pcVar3)();
}



/* Entry: 10a213490; end: 10a21363b;  */

void FUN_10a213490(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar5 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar5[0x59] < 8) {
    plVar5[plVar5[0x59] + 0x4e] = plVar5[0x5a];
    plVar5[0x59] = plVar5[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar5 + 0x4b);
  }
  plVar6 = param_2;
  func_0x000109898688(param_2,param_3);
  if (plVar6 == (long *)0x0) {
    puVar8 = &UNK_10f68f52e;
  }
  else {
    plVar7 = param_2;
    FUN_10a052c2c(param_2,plVar6);
    if ((plVar7 != (long *)0x0) && (___dynamic_cast(), plVar7 != (long *)0x0)) {
      FUN_10a052e3c(param_5);
      FUN_10a1f1084(&lStack_70,plVar7);
      plVar6 = plStack_68;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      func_0x000109899de4(param_1,param_2,&stack0xffffffffffffffb0,&stack0xffffffffffffffa8,0,0);
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar6 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar7 = plStack_68 + 1;
        do {
          lVar11 = *plVar7;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar2) {
            *plVar7 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
        }
      }
      plVar6 = plVar5 + 0x4b;
      lVar11 = plVar5[0x59];
      uVar9 = lVar11 - 1;
      plVar5[0x59] = uVar9;
      if (uVar9 < 8) {
        uVar9 = plVar6[lVar11 + 2];
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      else {
        uVar9 = *(ulong *)(plVar5[0x57] + -8);
        plVar5[0x57] = plVar5[0x57] + -8;
        if (plVar5[0x5a] == uVar9) {
          return;
        }
      }
      lVar11 = *plVar6;
      lVar14 = plVar5[0x4c];
      lVar12 = lVar14 - lVar11;
      uVar16 = lVar12 >> 4;
      if (uVar16 < uVar9) {
        uVar17 = uVar9 - uVar16;
        lVar15 = plVar5[0x4d];
        if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
          if (uVar9 >> 0x3c == 0) {
            uVar10 = lVar15 - lVar11 >> 3;
            if (uVar10 <= uVar9) {
              uVar10 = uVar9;
            }
            if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
              uVar10 = 0xfffffffffffffff;
            }
            plStack_68 = plVar6;
            if (uVar10 >> 0x3c == 0) {
              lVar4 = uVar10 << 4;
              __Znwm();
              lVar14 = lVar4 + lVar12;
              _bzero(lVar14,uVar17 * 0x10);
              lVar13 = lVar14 + uVar16 * -0x10;
              _memcpy(lVar13,lVar11,lVar12);
              *plVar6 = lVar13;
              plVar5[0x4c] = lVar14 + uVar17 * 0x10;
              plVar5[0x4d] = lVar4 + uVar10 * 0x10;
              lStack_88 = lVar11;
              lStack_80 = lVar11;
              lStack_78 = lVar11;
              lStack_70 = lVar15;
              func_0x00010988c1b8(&lStack_88);
              goto code_r0x00010988c138;
            }
            func_0x000104c4f740();
          }
          else {
            func_0x00010988c1a4();
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
          (*pcVar3)();
        }
        _bzero(lVar14,uVar17 * 0x10);
        plVar5[0x4c] = lVar14 + uVar17 * 0x10;
      }
      else if (uVar9 < uVar16) {
        lVar11 = lVar11 + uVar9 * 0x10;
        while (lVar14 != lVar11) {
          lVar14 = lVar14 + -0x10;
          func_0x00010988c204(lVar14);
        }
        plVar5[0x4c] = lVar11;
      }
code_r0x00010988c138:
      plVar5[0x5a] = uVar9;
      return;
    }
    puVar8 = &UNK_10f685496;
  }
  func_0x00010988bd28(puVar8);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a213628);
  (*pcVar3)();
}



/* Entry: 10a21363c; end: 10a213693;  */

long FUN_10a21363c(long param_1)

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



/* Entry: 10a213694; end: 10a213893;  */

void FUN_10a213694(undefined8 param_1,long *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long *plStack_68;
  
  plVar6 = param_2;
  (**(code **)(*param_2 + 0x58))();
  if ((ulong)plVar6[0x59] < 8) {
    plVar6[plVar6[0x59] + 0x4e] = plVar6[0x5a];
    plVar6[0x59] = plVar6[0x59] + 1;
  }
  else {
    func_0x00010988bfcc(plVar6 + 0x4b);
  }
  FUN_10a213894(param_5);
  plVar7 = param_2;
  FUN_10a05a42c(param_2,param_4);
  lStack_70 = *plVar7;
  plStack_68 = (long *)0x0;
  fVar18 = *(float *)((long)plVar7 + 4);
  plVar7 = param_2;
  FUN_10a05a42c(param_2,param_4 + 0x10);
  if ((uint)ABS((float)lStack_70) < 0x7f800000 && (uint)ABS(fVar18) < 0x7f800000) {
    lStack_80 = *plVar7;
    lStack_78 = 0;
    puVar8 = &UNK_10f6452de;
    if (((uint)ABS((float)lStack_80) < 0x7f800000) &&
       ((uint)ABS(*(float *)((long)plVar7 + 4)) < 0x7f800000)) {
      if (((float)lStack_70 != (float)lStack_80) || (fVar18 != *(float *)((long)plVar7 + 4))) {
        plVar7 = (long *)0x68;
        __Znwm();
        plVar7[1] = 0;
        plVar7[2] = 0;
        *plVar7 = (long)&PTR_FUN_110bb25b0;
        plVar7[7] = 0;
        plVar7[6] = 0;
        plVar7[9] = 0;
        plVar7[8] = 0;
        plVar7[5] = 0;
        plVar7[4] = 0;
        plVar7[3] = (long)&PTR_FUN_110bafe10;
        plVar7[0xb] = 0;
        plVar7[0xc] = 0;
        plVar7[10] = 0;
        *(long *)((long)plVar7 + 0x3c) = lStack_80;
        *(long *)((long)plVar7 + 0x34) = lStack_70;
        FUN_10a2138b8(param_1,param_2,&stack0xffffffffffffffa0);
        if (plVar7 != (long *)0x0) {
          plVar1 = plVar7 + 1;
          do {
            lVar11 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
        plVar7 = plVar6 + 0x4b;
        lVar11 = plVar6[0x59];
        uVar9 = lVar11 - 1;
        plVar6[0x59] = uVar9;
        if (uVar9 < 8) {
          uVar9 = plVar7[lVar11 + 2];
          if (plVar6[0x5a] == uVar9) {
            return;
          }
        }
        else {
          uVar9 = *(ulong *)(plVar6[0x57] + -8);
          plVar6[0x57] = plVar6[0x57] + -8;
          if (plVar6[0x5a] == uVar9) {
            return;
          }
        }
        lVar11 = *plVar7;
        lVar14 = plVar6[0x4c];
        lVar12 = lVar14 - lVar11;
        uVar16 = lVar12 >> 4;
        if (uVar16 < uVar9) {
          uVar17 = uVar9 - uVar16;
          lVar15 = plVar6[0x4d];
          if ((ulong)(lVar15 - lVar14 >> 4) < uVar17) {
            if (uVar9 >> 0x3c == 0) {
              uVar10 = lVar15 - lVar11 >> 3;
              if (uVar10 <= uVar9) {
                uVar10 = uVar9;
              }
              if (0x7fffffffffffffef < (ulong)(lVar15 - lVar11)) {
                uVar10 = 0xfffffffffffffff;
              }
              plStack_68 = plVar7;
              if (uVar10 >> 0x3c == 0) {
                lVar5 = uVar10 << 4;
                __Znwm();
                lVar14 = lVar5 + lVar12;
                _bzero(lVar14,uVar17 * 0x10);
                lVar13 = lVar14 + uVar16 * -0x10;
                _memcpy(lVar13,lVar11,lVar12);
                *plVar7 = lVar13;
                plVar6[0x4c] = lVar14 + uVar17 * 0x10;
                plVar6[0x4d] = lVar5 + uVar10 * 0x10;
                lStack_88 = lVar11;
                lStack_80 = lVar11;
                lStack_78 = lVar11;
                lStack_70 = lVar15;
                func_0x00010988c1b8(&lStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar4)();
          }
          _bzero(lVar14,uVar17 * 0x10);
          plVar6[0x4c] = lVar14 + uVar17 * 0x10;
        }
        else if (uVar9 < uVar16) {
          lVar11 = lVar11 + uVar9 * 0x10;
          while (lVar14 != lVar11) {
            lVar14 = lVar14 + -0x10;
            func_0x00010988c204(lVar14);
          }
          plVar6[0x4c] = lVar11;
        }
code_r0x00010988c138:
        plVar6[0x5a] = uVar9;
        return;
      }
      puVar8 = &UNK_10f645317;
    }
  }
  else {
    puVar8 = &UNK_10f6452de;
  }
  FUN_10a00946c(puVar8);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a213880);
  (*pcVar4)();
}



/* Entry: 10a213894; end: 10a2138b7;  */

void FUN_10a213894(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  if ((int)param_1 == 2) {
    return;
  }
  uVar5 = 2;
  uVar6 = 0;
  FUN_10a052ee0(2,0);
  plStack_38 = (long *)param_1[1];
  uStack_40 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  ppuStack_48 = &PTR_DAT_110bb1b88;
  func_0x000109899de4(uVar5,uVar6,&uStack_40,&ppuStack_48,0,0);
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
    }
  }
  return;
}



/* Entry: 10a2138b8; end: 10a213947;  */

void FUN_10a2138b8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined **ppuStack_38;
  undefined8 uStack_30;
  long *plStack_28;
  
  plStack_28 = (long *)param_3[1];
  uStack_30 = *param_3;
  *param_3 = 0;
  param_3[1] = 0;
  ppuStack_38 = &PTR_DAT_110bb1b88;
  func_0x000109899de4(param_1,param_2,&uStack_30,&ppuStack_38,0,0);
  plVar4 = plStack_28;
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
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return;
}



/* Entry: 10a213948; end: 10a213b3f;  */

void FUN_10a213948(undefined8 param_1,uint *param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  float fVar17;
  uint uVar18;
  uint uVar19;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  uint *puStack_70;
  uint *puStack_68;
  
  puVar5 = param_2;
  (**(code **)(*(long *)param_2 + 0x58))();
  if (*(ulong *)(puVar5 + 0xb2) < 8) {
    *(long *)(puVar5 + *(ulong *)(puVar5 + 0xb2) * 2 + 0x9c) = *(long *)(puVar5 + 0xb4);
    *(long *)(puVar5 + 0xb2) = *(long *)(puVar5 + 0xb2) + 1;
  }
  else {
    func_0x00010988bfcc(puVar5 + 0x96);
  }
  FUN_10a213254(param_5);
  puVar6 = param_2;
  FUN_10a05a42c(param_2,param_4);
  if (*(int *)(param_4 + 0x10) == 3) {
    uVar19 = *puVar6;
    uVar18 = puVar6[1];
    fVar17 = (float)*(double *)(param_4 + 0x18);
    if (0x7fefffffffffffff < (ulong)ABS(*(double *)(param_4 + 0x18))) {
      fVar17 = 0.0;
    }
    puVar7 = &UNK_10f645357;
    if ((((uVar19 & 0x7fffffff) < 0x7f800000) && ((uVar18 & 0x7fffffff) < 0x7f800000)) &&
       (puVar7 = &UNK_10f645357, (uint)ABS(fVar17) < 0x7f800000)) {
      if (0.0 < fVar17) {
        puVar6 = (uint *)0x68;
        __Znwm();
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined ***)puVar6 = &PTR_FUN_110bb25b0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        puVar6[0x12] = 0;
        puVar6[0x13] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puStack_70 = puVar6 + 6;
        *(undefined ***)puStack_70 = &PTR_FUN_110bafe10;
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x18] = 0;
        puVar6[0x19] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        *(undefined1 *)(puVar6 + 0xc) = 1;
        puVar6[0xd] = uVar19;
        puVar6[0xe] = uVar18;
        puVar6[0xf] = uVar19;
        puVar6[0x10] = uVar18;
        puVar6[0x11] = (uint)fVar17;
        puStack_68 = puVar6;
        FUN_10a2138b8(param_1,param_2,&puStack_70);
        puVar6 = puStack_68;
        if (puStack_68 != (uint *)0x0) {
          puVar14 = puStack_68 + 2;
          do {
            lVar10 = *(long *)puVar14;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(puVar14,0x10);
            if (bVar2) {
              *(long *)puVar14 = lVar10 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar10 == 0) {
            (**(code **)(*(long *)puStack_68 + 0x10))(puStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(puVar6);
          }
        }
        puVar6 = puVar5 + 0x96;
        uVar8 = *(long *)(puVar5 + 0xb2) - 1;
        *(ulong *)(puVar5 + 0xb2) = uVar8;
        if (uVar8 < 8) {
          uVar8 = *(ulong *)(puVar6 + uVar8 * 2 + 6);
          if (*(ulong *)(puVar5 + 0xb4) == uVar8) {
            return;
          }
        }
        else {
          uVar8 = *(ulong *)(*(long *)(puVar5 + 0xae) + -8);
          *(ulong **)(puVar5 + 0xae) = (ulong *)(*(long *)(puVar5 + 0xae) + -8);
          if (*(ulong *)(puVar5 + 0xb4) == uVar8) {
            return;
          }
        }
        lVar10 = *(long *)puVar6;
        lVar13 = *(long *)(puVar5 + 0x98);
        lVar11 = lVar13 - lVar10;
        uVar15 = lVar11 >> 4;
        if (uVar15 < uVar8) {
          uVar16 = uVar8 - uVar15;
          puVar14 = *(uint **)(puVar5 + 0x9a);
          if ((ulong)((long)puVar14 - lVar13 >> 4) < uVar16) {
            if (uVar8 >> 0x3c == 0) {
              uVar9 = (long)puVar14 - lVar10 >> 3;
              if (uVar9 <= uVar8) {
                uVar9 = uVar8;
              }
              if (0x7fffffffffffffef < (ulong)((long)puVar14 - lVar10)) {
                uVar9 = 0xfffffffffffffff;
              }
              puStack_68 = puVar6;
              if (uVar9 >> 0x3c == 0) {
                lVar4 = uVar9 << 4;
                __Znwm();
                lVar13 = lVar4 + lVar11;
                _bzero(lVar13,uVar16 * 0x10);
                lVar12 = lVar13 + uVar15 * -0x10;
                _memcpy(lVar12,lVar10,lVar11);
                *(long *)puVar6 = lVar12;
                *(ulong *)(puVar5 + 0x98) = lVar13 + uVar16 * 0x10;
                *(ulong *)(puVar5 + 0x9a) = lVar4 + uVar9 * 0x10;
                lStack_88 = lVar10;
                lStack_80 = lVar10;
                lStack_78 = lVar10;
                puStack_70 = puVar14;
                func_0x00010988c1b8(&lStack_88);
                goto code_r0x00010988c138;
              }
              func_0x000104c4f740();
            }
            else {
              func_0x00010988c1a4();
            }
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10988c16c);
            (*pcVar3)();
          }
          _bzero(lVar13,uVar16 * 0x10);
          *(ulong *)(puVar5 + 0x98) = lVar13 + uVar16 * 0x10;
        }
        else if (uVar8 < uVar15) {
          lVar10 = lVar10 + uVar8 * 0x10;
          while (lVar13 != lVar10) {
            lVar13 = lVar13 + -0x10;
            func_0x00010988c204(lVar13);
          }
          *(long *)(puVar5 + 0x98) = lVar10;
        }
code_r0x00010988c138:
        *(ulong *)(puVar5 + 0xb4) = uVar8;
        return;
      }
      puVar7 = &UNK_10f645394;
    }
    FUN_10a00946c(puVar7);
  }
  else {
    func_0x00010988bd28(&UNK_10f68f550);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10a213b2c);
  (*pcVar3)();
}



/* Entry: 10a213b40; end: 10a213b4f;  */

void FUN_10a213b40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb25b0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a213b50; end: 10a213b6f;  */

void FUN_10a213b50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bb25b0;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a213b70; end: 10a213b7f;  */

void FUN_10a213b70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a213b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a213b80; end: 10a213d83;  */

void FUN_10a213b80(float *param_1,float *param_2,ulong param_3,float *param_4,long param_5)

{
  undefined8 *puVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  float *pfVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  float *pfVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  
  if (1 < param_3) {
    if (param_3 == 2) {
      if (param_2[-2] < *param_1) {
        uVar8 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar8;
      }
    }
    else if ((long)param_3 < 0x81) {
      if ((param_1 != param_2) && (param_1 + 2 != param_2)) {
        lVar9 = 0;
        pfVar6 = param_1 + 2;
        pfVar10 = param_1;
        do {
          pfVar11 = pfVar6;
          fVar25 = *pfVar11;
          if (fVar25 < *pfVar10) {
            fVar2 = pfVar10[3];
            lVar24 = lVar9;
            do {
              lVar22 = lVar24;
              puVar1 = (undefined8 *)((long)param_1 + lVar22);
              puVar1[1] = *puVar1;
              pfVar6 = param_1;
              if (lVar22 == 0) goto LAB_10a213c5c;
              lVar24 = lVar22 + -8;
            } while (fVar25 < *(float *)(puVar1 + -1));
            pfVar6 = (float *)((long)param_1 + lVar22);
LAB_10a213c5c:
            *pfVar6 = fVar25;
            pfVar6[1] = fVar2;
          }
          lVar9 = lVar9 + 8;
          pfVar6 = pfVar11 + 2;
          pfVar10 = pfVar11;
        } while (pfVar11 + 2 != param_2);
      }
    }
    else {
      uVar23 = param_3 >> 1;
      pfVar6 = param_1 + uVar23 * 2;
      lVar9 = param_3 - (param_3 >> 1);
      if (param_5 < (long)param_3) {
        FUN_10a213b80();
        FUN_10a213b80(pfVar6,param_2,lVar9,param_4,param_5);
        do {
          if (lVar9 == 0) {
            return;
          }
          if (((long)uVar23 <= param_5) || (lVar9 <= param_5)) {
            if ((long)uVar23 <= lVar9) {
              if (pfVar6 == param_1) {
                return;
              }
              lVar9 = -(long)param_4;
              pfVar10 = param_4;
              pfVar11 = param_1;
              do {
                pfVar20 = pfVar11 + 2;
                pfVar21 = pfVar10 + 2;
                *(undefined8 *)pfVar10 = *(undefined8 *)pfVar11;
                lVar9 = lVar9 + -8;
                pfVar10 = pfVar21;
                pfVar11 = pfVar20;
              } while (pfVar20 != pfVar6);
              do {
                if (pfVar6 == param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR__memmove_11034c660)(param_1,param_4,-((long)param_4 + lVar9));
                  return;
                }
                bVar5 = *param_4 <= *pfVar6;
                pfVar10 = pfVar6;
                if (bVar5) {
                  pfVar10 = param_4;
                }
                lVar24 = 8;
                if (bVar5) {
                  lVar24 = 0;
                }
                pfVar6 = (float *)((long)pfVar6 + lVar24);
                lVar24 = 0;
                if (bVar5) {
                  lVar24 = 8;
                }
                param_4 = (float *)((long)param_4 + lVar24);
                *(undefined8 *)param_1 = *(undefined8 *)pfVar10;
                param_1 = param_1 + 2;
              } while (pfVar21 != param_4);
              return;
            }
            if (pfVar6 != param_2) {
              lVar9 = 0;
              do {
                *(undefined8 *)((long)param_4 + lVar9) = *(undefined8 *)((long)pfVar6 + lVar9);
                lVar9 = lVar9 + 8;
              } while ((float *)((long)pfVar6 + lVar9) != param_2);
              pfVar10 = (float *)((long)param_4 + lVar9);
              do {
                if (pfVar6 == param_1) {
                  if (pfVar10 == param_4) {
                    return;
                  }
                  lVar9 = -8;
                  do {
                    pfVar10 = pfVar10 + -2;
                    *(undefined8 *)((long)param_2 + lVar9) = *(undefined8 *)pfVar10;
                    lVar9 = lVar9 + -8;
                  } while (pfVar10 != param_4);
                  return;
                }
                pfVar11 = pfVar10;
                pfVar20 = pfVar6 + -2;
                pfVar21 = pfVar6;
                if (pfVar6[-2] <= pfVar10[-2]) {
                  pfVar11 = pfVar10 + -2;
                  pfVar20 = pfVar6;
                  pfVar21 = pfVar10;
                }
                pfVar6 = pfVar20;
                param_2 = param_2 + -2;
                *(undefined8 *)param_2 = *(undefined8 *)(pfVar21 + -2);
                pfVar10 = pfVar11;
              } while (pfVar11 != param_4);
              return;
            }
            return;
          }
          if (uVar23 == 0) {
            return;
          }
          lVar24 = 0;
          lVar22 = -uVar23;
          while (*(float *)((long)param_1 + lVar24) <= *pfVar6) {
            lVar24 = lVar24 + 8;
            bVar5 = lVar22 == -1;
            lVar22 = lVar22 + 1;
            if (bVar5) {
              return;
            }
          }
          if (-lVar22 < lVar9) {
            lVar7 = lVar9 / 2;
            pfVar10 = pfVar6 + lVar7 * 2;
            lVar3 = (long)pfVar6 + (-lVar24 - (long)param_1);
            pfVar11 = pfVar6;
            if (lVar3 != 0) {
              uVar23 = lVar3 >> 3;
              pfVar11 = (float *)((long)param_1 + lVar24);
              do {
                uVar12 = uVar23 >> 1;
                uVar13 = uVar23 + (uVar23 >> 1 ^ 0xffffffffffffffff);
                uVar23 = uVar12;
                if (pfVar11[uVar12 * 2] <= *pfVar10) {
                  uVar23 = uVar13;
                  pfVar11 = pfVar11 + uVar12 * 2 + 2;
                }
              } while (uVar23 != 0);
            }
            uVar23 = (long)pfVar11 + (-lVar24 - (long)param_1) >> 3;
          }
          else {
            if (lVar22 == -1) {
              uVar8 = *(undefined8 *)((long)param_1 + lVar24);
              *(undefined8 *)((long)param_1 + lVar24) = *(undefined8 *)pfVar6;
              *(undefined8 *)pfVar6 = uVar8;
              return;
            }
            uVar23 = -lVar22 / 2;
            pfVar10 = pfVar6;
            if (pfVar6 != param_2) {
              uVar13 = (long)param_2 - (long)pfVar6 >> 3;
              pfVar11 = pfVar6;
              do {
                uVar12 = uVar13 >> 1;
                pfVar10 = pfVar11 + uVar12 * 2 + 2;
                uVar13 = uVar13 + (uVar13 >> 1 ^ 0xffffffffffffffff);
                if (*(float *)((long)param_1 + lVar24 + uVar23 * 8) <= pfVar11[uVar12 * 2]) {
                  pfVar10 = pfVar11;
                  uVar13 = uVar12;
                }
                pfVar11 = pfVar10;
              } while (uVar13 != 0);
            }
            lVar7 = (long)pfVar10 - (long)pfVar6 >> 3;
            pfVar11 = (float *)((long)param_1 + lVar24 + uVar23 * 8);
          }
          lVar3 = (long)pfVar6 - (long)pfVar11;
          pfVar21 = pfVar10;
          if ((lVar3 != 0) && (lVar4 = (long)pfVar10 - (long)pfVar6, pfVar21 = pfVar11, lVar4 != 0))
          {
            if (pfVar11 + 2 == pfVar6) {
              uVar8 = *(undefined8 *)pfVar11;
              _memmove(pfVar11,pfVar6,lVar4);
              *(undefined8 *)((long)pfVar11 + lVar4) = uVar8;
              pfVar21 = (float *)((long)pfVar11 + lVar4);
            }
            else if (pfVar6 + 2 == pfVar10) {
              pfVar6 = pfVar10 + -2;
              uVar8 = *(undefined8 *)pfVar6;
              pfVar21 = (float *)((long)pfVar10 - ((long)pfVar6 - (long)pfVar11));
              if ((long)pfVar6 - (long)pfVar11 != 0) {
                _memmove(pfVar21,pfVar11,(long)pfVar6 - (long)pfVar11);
              }
              *(undefined8 *)pfVar11 = uVar8;
            }
            else {
              lVar14 = lVar3 >> 3;
              lVar17 = lVar4 >> 3;
              lVar18 = lVar14;
              pfVar20 = pfVar11;
              pfVar19 = pfVar6;
              if (lVar14 == lVar4 >> 3) {
                do {
                  pfVar15 = pfVar19 + 2;
                  uVar8 = *(undefined8 *)pfVar20;
                  *(undefined8 *)pfVar20 = *(undefined8 *)pfVar19;
                  *(undefined8 *)pfVar19 = uVar8;
                  pfVar21 = pfVar6;
                  if (pfVar20 + 2 == pfVar6) break;
                  pfVar20 = pfVar20 + 2;
                  pfVar19 = pfVar15;
                } while (pfVar15 != pfVar10);
              }
              else {
                do {
                  lVar16 = lVar17;
                  lVar17 = 0;
                  if (lVar16 != 0) {
                    lVar17 = lVar18 / lVar16;
                  }
                  lVar17 = lVar18 - lVar17 * lVar16;
                  lVar18 = lVar16;
                } while (lVar17 != 0);
                pfVar6 = pfVar11 + lVar16 * 2;
                do {
                  pfVar6 = pfVar6 + -2;
                  uVar8 = *(undefined8 *)pfVar6;
                  pfVar21 = (float *)(lVar3 + (long)pfVar6);
                  pfVar20 = pfVar6;
                  do {
                    pfVar19 = pfVar21;
                    *(undefined8 *)pfVar20 = *(undefined8 *)pfVar19;
                    lVar17 = (long)pfVar10 - (long)pfVar19 >> 3;
                    pfVar21 = (float *)((long)pfVar19 + lVar3);
                    if (lVar17 <= lVar14) {
                      pfVar21 = pfVar11 + (lVar14 - lVar17) * 2;
                    }
                    pfVar20 = pfVar19;
                  } while (pfVar21 != pfVar6);
                  *(undefined8 *)pfVar19 = uVar8;
                } while (pfVar6 != pfVar11);
                pfVar21 = (float *)(lVar4 + (long)pfVar11);
              }
            }
          }
          if ((long)(uVar23 + lVar7) < (long)((lVar9 - (uVar23 + lVar7)) - lVar22)) {
            FUN_10a213f30((long)param_1 + lVar24,pfVar11,pfVar21);
            uVar23 = -(uVar23 + lVar22);
            pfVar6 = pfVar10;
            lVar9 = lVar9 - lVar7;
            param_1 = pfVar21;
          }
          else {
            FUN_10a213f30(pfVar21,pfVar10,param_2,-(uVar23 + lVar22),lVar9 - lVar7);
            pfVar6 = pfVar11;
            lVar9 = lVar7;
            param_2 = pfVar21;
            param_1 = (float *)((long)param_1 + lVar24);
          }
        } while( true );
      }
      FUN_10a213d84(param_1,pfVar6,uVar23);
      pfVar10 = param_4 + uVar23 * 2;
      FUN_10a213d84(pfVar6,param_2,lVar9,pfVar10);
      pfVar6 = param_4 + param_3 * 2;
      pfVar11 = pfVar10;
      do {
        if (pfVar11 == pfVar6) {
          for (; param_4 != pfVar10; param_4 = param_4 + 2) {
            *(undefined8 *)param_1 = *(undefined8 *)param_4;
            param_1 = param_1 + 2;
          }
          return;
        }
        bVar5 = *param_4 <= *pfVar11;
        pfVar21 = pfVar11;
        if (bVar5) {
          pfVar21 = param_4;
        }
        lVar9 = 0;
        if (bVar5) {
          lVar9 = 8;
        }
        param_4 = (float *)((long)param_4 + lVar9);
        lVar9 = 8;
        if (bVar5) {
          lVar9 = 0;
        }
        pfVar11 = (float *)((long)pfVar11 + lVar9);
        pfVar20 = param_1 + 2;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar21;
        param_1 = pfVar20;
      } while (param_4 != pfVar10);
      for (; pfVar11 != pfVar6; pfVar11 = pfVar11 + 2) {
        *(undefined8 *)pfVar20 = *(undefined8 *)pfVar11;
        pfVar20 = pfVar20 + 2;
      }
    }
  }
  return;
}



/* Entry: 10a213d84; end: 10a213f2f;  */

void FUN_10a213d84(float *param_1,float *param_2,ulong param_3,float *param_4)

{
  bool bVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  
  if (param_3 == 0) {
    return;
  }
  pfVar4 = param_4;
  if (param_3 != 1) {
    if (param_3 != 2) {
      if (8 < (long)param_3) {
        uVar8 = param_3 >> 1;
        pfVar4 = param_1 + uVar8 * 2;
        FUN_10a213b80(param_1,pfVar4,uVar8,param_4,uVar8);
        lVar2 = param_3 - (param_3 >> 1);
        FUN_10a213b80(pfVar4,param_2,lVar2,param_4 + uVar8 * 2,lVar2);
        pfVar3 = pfVar4;
        do {
          if (pfVar3 == param_2) {
            for (; param_1 != pfVar4; param_1 = param_1 + 2) {
              *(undefined8 *)param_4 = *(undefined8 *)param_1;
              param_4 = param_4 + 2;
            }
            return;
          }
          bVar1 = *param_1 <= *pfVar3;
          pfVar5 = pfVar3;
          if (bVar1) {
            pfVar5 = param_1;
          }
          lVar2 = 8;
          if (bVar1) {
            lVar2 = 0;
          }
          pfVar3 = (float *)((long)pfVar3 + lVar2);
          lVar2 = 0;
          if (bVar1) {
            lVar2 = 8;
          }
          param_1 = (float *)((long)param_1 + lVar2);
          pfVar7 = param_4 + 2;
          *(undefined8 *)param_4 = *(undefined8 *)pfVar5;
          param_4 = pfVar7;
        } while (param_1 != pfVar4);
        for (; pfVar3 != param_2; pfVar3 = pfVar3 + 2) {
          *(undefined8 *)pfVar7 = *(undefined8 *)pfVar3;
          pfVar7 = pfVar7 + 2;
        }
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      *(undefined8 *)param_4 = *(undefined8 *)param_1;
      if (param_1 + 2 == param_2) {
        return;
      }
      lVar2 = 0;
      pfVar3 = param_1 + 2;
      do {
        pfVar5 = pfVar4 + 2;
        if ((*pfVar3 < *pfVar4) &&
           (*(undefined8 *)(pfVar4 + 2) = *(undefined8 *)pfVar4, pfVar5 = param_4, lVar6 = lVar2,
           pfVar4 != param_4)) {
          do {
            pfVar5 = (float *)((long)param_4 + lVar6);
            if (pfVar5[-2] <= *pfVar3) break;
            *(undefined8 *)pfVar5 = *(undefined8 *)(pfVar5 + -2);
            lVar6 = lVar6 + -8;
            pfVar5 = param_4;
          } while (lVar6 != 0);
        }
        pfVar7 = pfVar3 + 2;
        *(undefined8 *)pfVar5 = *(undefined8 *)pfVar3;
        lVar2 = lVar2 + 8;
        pfVar4 = pfVar4 + 2;
        pfVar3 = pfVar7;
        if (pfVar7 == param_2) {
          return;
        }
      } while( true );
    }
    param_2 = param_2 + -2;
    fVar9 = *param_2;
    fVar10 = *param_1;
    pfVar3 = param_2;
    if (fVar10 <= fVar9) {
      pfVar3 = param_1;
    }
    pfVar4 = param_4 + 2;
    *(undefined8 *)param_4 = *(undefined8 *)pfVar3;
    if (fVar10 <= fVar9) {
      param_1 = param_2;
    }
  }
  *(undefined8 *)pfVar4 = *(undefined8 *)param_1;
  return;
}



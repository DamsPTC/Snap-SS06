/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109381528; end: 10938153b;  */

void FUN_109381528(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  func_0x000104c4f6cc(&UNK_10f567814);
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        FUN_109380ffc(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 10938153c; end: 1093815df;  */

void FUN_10938153c(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  
  if ((ulong)param_2 >> 0x3c != 0) {
    func_0x000104c4f740();
    puVar1 = param_2;
    if (param_2 != param_3) {
      do {
        *param_4 = *puVar1;
        *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar1 + 8);
        *puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar1 = puVar1 + 0x10;
        param_4 = param_4 + 0x10;
      } while (puVar1 != param_3);
      do {
        puVar1 = param_2 + 0x10;
        FUN_109380ffc(param_2 + 8,*param_2);
        param_2 = puVar1;
      } while (puVar1 != param_3);
    }
    return;
  }
  __Znwm((long)param_2 << 4);
  return;
}



/* Entry: 1093815e0; end: 109381643;  */

long FUN_1093815e0(long param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    puVar2 = (undefined1 *)**(undefined8 **)(param_1 + 8);
    if ((undefined1 *)**(undefined8 **)(param_1 + 0x10) != puVar2) {
      puVar1 = (undefined1 *)**(undefined8 **)(param_1 + 0x10) + -8;
      do {
        puVar3 = puVar1 + -8;
        FUN_109380ffc(puVar1,*puVar3);
        puVar1 = puVar1 + -0x10;
      } while (puVar3 != puVar2);
    }
  }
  return param_1;
}



/* Entry: 109381644; end: 109381693;  */

long * FUN_109381644(long *param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  
  lVar1 = param_1[1];
  lVar3 = param_1[2];
  while (lVar3 != lVar1) {
    uVar2 = *(undefined1 *)(lVar3 + -0x10);
    param_1[2] = lVar3 + -0x10;
    FUN_109380ffc(lVar3 + -8,uVar2);
    lVar3 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109381694; end: 10938179b;  */

long * FUN_109381694(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar7 = param_1[1] - *param_1;
  uVar1 = (lVar7 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar6 == 0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = param_1;
      FUN_10938153c();
    }
    plStack_50 = (long *)((long)plVar4 + lVar7);
    *(char *)plStack_50 = (char)*param_2;
    *(long *)((long)plStack_50 + 8) = param_2[1];
    *(undefined1 *)param_2 = 0;
    param_2[1] = 0;
    plVar2 = (long *)((long)plStack_50 + 0x10);
    puVar3 = (undefined1 *)((long)plStack_50 + (*param_1 - param_1[1]));
    plStack_58 = plVar4;
    plStack_48 = plVar2;
    plStack_40 = plVar4 + uVar6 * 2;
    func_0x000109381570(param_1,*param_1,param_1[1],puVar3);
    plStack_58 = (long *)*param_1;
    *param_1 = (long)puVar3;
    param_1[1] = (long)plVar2;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar4 + uVar6 * 2);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    FUN_109381644(&plStack_58);
    return plVar2;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume(param_1);
  if (param_2 != (long *)0x0) {
    FUN_10938179c();
    FUN_10938179c(param_1,param_2[1]);
    FUN_109380ffc(param_2 + 8,(char)param_2[7]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      __ZdlPv(param_2[4]);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return param_2;
  }
  return param_1;
}



/* Entry: 10938179c; end: 109381837;  */

void FUN_10938179c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10938179c(param_1,*param_2);
    FUN_10938179c(param_1,param_2[1]);
    FUN_109380ffc(param_2 + 8,*(undefined1 *)(param_2 + 7));
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



/* Entry: 109381838; end: 1093818bf;  */

void FUN_109381838(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined1 *)*puVar2;
  if (puVar3 != (undefined1 *)0x0) {
    puVar1 = puVar3;
    if ((undefined1 *)puVar2[1] != puVar3) {
      puVar1 = (undefined1 *)puVar2[1] + -8;
      do {
        puVar4 = puVar1 + -8;
        FUN_109380ffc(puVar1,*puVar4);
        puVar1 = puVar1 + -0x10;
      } while (puVar4 != puVar3);
      puVar1 = *(undefined1 **)*param_1;
    }
    puVar2[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 1093818c0; end: 109381917;  */

long FUN_1093818c0(long param_1)

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



/* Entry: 109381918; end: 109381927;  */

void FUN_109381918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4800;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109381928; end: 109381947;  */

void FUN_109381928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4800;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109381948; end: 109381957;  */

void FUN_109381948(long param_1)

{
  ulong *puVar1;
  long lVar2;
  byte bVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  bool bVar8;
  undefined8 *****pppppuVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 ***pppuVar13;
  long *plVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ***pppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  
  bVar3 = *(byte *)(param_1 + 0x18);
  puVar1 = (ulong *)(param_1 + 0x20);
  ppppuStack_68 = (undefined8 *****)0x0;
  ppppuStack_60 = (undefined8 *****)0x0;
  ppppuStack_58 = (undefined8 *****)0x0;
  if (bVar3 == 1) {
    FUN_109381340(&ppppuStack_68,*(undefined8 *)(*puVar1 + 0x10));
    plVar12 = (long *)*puVar1;
    plVar10 = (long *)*plVar12;
    while (plVar10 != plVar12 + 1) {
      if (ppppuStack_60 < ppppuStack_58) {
        *(undefined1 *)ppppuStack_60 = *(undefined1 *)(plVar10 + 7);
        ppppuStack_60[1] = (undefined8 ****)plVar10[8];
        *(undefined1 *)(plVar10 + 7) = 0;
        plVar10[8] = 0;
        pppppuVar9 = (undefined8 *****)(ppppuStack_60 + 2);
      }
      else {
        pppppuVar9 = &ppppuStack_68;
        FUN_109381694(pppppuVar9,plVar10 + 7);
      }
      plVar7 = (long *)plVar10[1];
      plVar14 = plVar10;
      ppppuStack_60 = pppppuVar9;
      if ((long *)plVar10[1] == (long *)0x0) {
        do {
          plVar10 = (long *)plVar14[2];
          bVar8 = (long *)*plVar10 != plVar14;
          plVar14 = plVar10;
        } while (bVar8);
      }
      else {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
    }
  }
  else if (bVar3 == 2) {
    FUN_109381340(&ppppuStack_68,((long *)*puVar1)[1] - *(long *)*puVar1 >> 4);
    lVar2 = ((long *)*puVar1)[1];
    for (lVar11 = *(long *)*puVar1; lVar11 != lVar2; lVar11 = lVar11 + 0x10) {
      FUN_1093813f8(&ppppuStack_68,lVar11);
    }
  }
  if (ppppuStack_68 != ppppuStack_60) {
    do {
      ppppuStack_78 =
           (undefined8 ****)CONCAT71(ppppuStack_78._1_7_,*(undefined1 *)(ppppuStack_60 + -2));
      pppuStack_70 = ppppuStack_60[-1];
      *(undefined1 *)(ppppuStack_60 + -2) = 0;
      ppppuStack_60[-1] = (undefined8 ****)0x0;
      pppppuVar9 = (undefined8 *****)(ppppuStack_60 + -2);
      FUN_109380ffc(ppppuStack_60 + -1,*(undefined1 *)pppppuVar9);
      ppppuStack_60 = pppppuVar9;
      if ((char)ppppuStack_78 == '\x01') {
        ppppuVar16 = (undefined8 ****)(pppuStack_70 + 1);
        ppppuVar18 = (undefined8 ****)*pppuStack_70;
        ppppuVar4 = (undefined8 ****)pppuStack_70;
        while (pppuStack_70 = ppppuVar4, ppppuVar18 != ppppuVar16) {
          if (ppppuStack_60 < ppppuStack_58) {
            *(undefined1 *)ppppuStack_60 = *(undefined1 *)(ppppuVar18 + 7);
            ppppuStack_60[1] = ppppuVar18[8];
            *(undefined1 *)(ppppuVar18 + 7) = 0;
            ppppuVar18[8] = (undefined8 ***)0x0;
            pppppuVar9 = (undefined8 *****)(ppppuStack_60 + 2);
          }
          else {
            pppppuVar9 = &ppppuStack_68;
            FUN_109381694(pppppuVar9,ppppuVar18 + 7);
          }
          ppppuVar6 = (undefined8 ****)ppppuVar18[1];
          ppppuVar19 = ppppuVar18;
          ppppuStack_60 = pppppuVar9;
          ppppuVar4 = (undefined8 ****)pppuStack_70;
          if ((undefined8 ****)ppppuVar18[1] == (undefined8 ****)0x0) {
            do {
              ppppuVar18 = (undefined8 ****)ppppuVar19[2];
              bVar8 = (undefined8 ****)*ppppuVar18 != ppppuVar19;
              ppppuVar19 = ppppuVar18;
            } while (bVar8);
          }
          else {
            do {
              ppppuVar18 = ppppuVar6;
              ppppuVar6 = (undefined8 ****)*ppppuVar18;
            } while ((undefined8 ****)*ppppuVar18 != (undefined8 ****)0x0);
          }
        }
        ppppuVar18 = ppppuVar4 + 1;
        FUN_10938179c(ppppuVar4,*ppppuVar18);
        *ppppuVar4 = ppppuVar18;
        ppppuVar4[2] = (undefined8 ***)0x0;
        *ppppuVar18 = (undefined8 ***)0x0;
      }
      else if ((char)ppppuStack_78 == '\x02') {
        pppuVar13 = (undefined8 ***)*pppuStack_70;
        pppuVar15 = (undefined8 ***)pppuStack_70[1];
        if (pppuVar13 != pppuVar15) {
          do {
            FUN_1093813f8(&ppppuStack_68,pppuVar13);
            pppuVar13 = pppuVar13 + 2;
          } while (pppuVar13 != pppuVar15);
          pppuVar13 = (undefined8 ***)*pppuStack_70;
          pppuVar15 = (undefined8 ***)pppuStack_70[1];
        }
        pppuVar5 = pppuStack_70;
        if (pppuVar15 != pppuVar13) {
          pppuVar15 = pppuVar15 + -1;
          do {
            pppuVar17 = pppuVar15 + -1;
            FUN_109380ffc(pppuVar15,*(undefined1 *)pppuVar17);
            pppuVar15 = pppuVar15 + -2;
          } while (pppuVar17 != pppuVar13);
        }
        pppuVar5[1] = pppuVar13;
      }
      FUN_109380ffc(&pppuStack_70,(ulong)ppppuStack_78 & 0xff);
    } while (ppppuStack_68 != ppppuStack_60);
  }
  if (bVar3 < 3) {
    if (bVar3 == 1) {
      FUN_10938179c(*puVar1,*(undefined8 *)(*puVar1 + 8));
    }
    else {
      if (bVar3 != 2) goto LAB_109381300;
      ppppuStack_78 = (undefined8 ****)*puVar1;
      FUN_109381838(&ppppuStack_78);
    }
LAB_1093812f8:
    plVar10 = (long *)*puVar1;
  }
  else if (bVar3 == 3) {
    plVar10 = (long *)*puVar1;
    if (*(char *)((long)plVar10 + 0x17) < '\0') {
      lVar11 = *plVar10;
LAB_1093812f4:
      __ZdlPv(lVar11);
      goto LAB_1093812f8;
    }
  }
  else {
    if (bVar3 != 8) goto LAB_109381300;
    plVar10 = (long *)*puVar1;
    lVar11 = *plVar10;
    if (lVar11 != 0) {
      plVar10[1] = lVar11;
      goto LAB_1093812f4;
    }
  }
  __ZdlPv(plVar10);
LAB_109381300:
  ppppuStack_78 = &ppppuStack_68;
  FUN_109381838(&ppppuStack_78);
  return;
}



/* Entry: 109381958; end: 109381a37;  */

undefined8 * FUN_109381958(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (param_2 < 4) {
    if (param_2 < 2) {
      if ((param_2 == 0) || (param_2 != 1)) goto LAB_109381a04;
      pcVar1 = (char *)0x18;
      __Znwm();
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar2 = pcVar1 + 8;
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      *(char **)pcVar1 = pcVar2;
    }
    else if (param_2 == 2) {
      pcVar1 = (char *)0x18;
      __Znwm();
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
    }
    else {
      if (param_2 != 3) goto LAB_109381a04;
      pcVar1 = "";
      FUN_109381a38();
    }
LAB_109381a1c:
    *param_1 = pcVar1;
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
    }
    else if (((param_2 != 6) && (param_2 != 7)) && (param_2 == 8)) {
      pcVar1 = (char *)0x20;
      __Znwm();
      pcVar1[8] = '\0';
      pcVar1[9] = '\0';
      pcVar1[10] = '\0';
      pcVar1[0xb] = '\0';
      pcVar1[0xc] = '\0';
      pcVar1[0xd] = '\0';
      pcVar1[0xe] = '\0';
      pcVar1[0xf] = '\0';
      pcVar1[0x10] = '\0';
      pcVar1[0x11] = '\0';
      pcVar1[0x12] = '\0';
      pcVar1[0x13] = '\0';
      pcVar1[0x14] = '\0';
      pcVar1[0x15] = '\0';
      pcVar1[0x16] = '\0';
      pcVar1[0x17] = '\0';
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1[0x18] = '\0';
      pcVar1[0x19] = '\0';
      goto LAB_109381a1c;
    }
LAB_109381a04:
    *param_1 = 0;
  }
  return param_1;
}



/* Entry: 109381a38; end: 109381a7f;  */

undefined8 FUN_109381a38(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  func_0x000107c31940();
  return uVar1;
}



/* Entry: 109381a80; end: 109381ad7;  */

void FUN_109381a80(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x28;
  __Znwm();
  FUN_109381ad8();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 109381ad8; end: 109381b1f;  */

undefined8 * FUN_109381ad8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110af4800;
  FUN_109381b20(param_1 + 3);
  return param_1;
}



/* Entry: 109381b20; end: 109381be7;  */

byte * FUN_109381b20(byte *param_1,byte *param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = *param_2;
  *param_1 = bVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (bVar1 < 5) {
    if (bVar1 < 3) {
      if (bVar1 == 1) {
        uVar2 = *(ulong *)(param_2 + 8);
        FUN_109381be8();
      }
      else {
        if (bVar1 != 2) {
          return param_1;
        }
        uVar2 = *(ulong *)(param_2 + 8);
        FUN_109382100();
      }
    }
    else if (bVar1 == 3) {
      uVar2 = *(ulong *)(param_2 + 8);
      FUN_10938229c();
    }
    else {
      if (bVar1 != 4) {
        return param_1;
      }
      uVar2 = (ulong)param_2[8];
    }
  }
  else {
    if (bVar1 < 7) {
      if ((bVar1 != 5) && (bVar1 != 6)) {
        return param_1;
      }
    }
    else if (bVar1 != 7) {
      if (bVar1 != 8) {
        return param_1;
      }
      uVar2 = *(ulong *)(param_2 + 8);
      FUN_109382304();
      goto LAB_109381bd4;
    }
    uVar2 = *(ulong *)(param_2 + 8);
  }
LAB_109381bd4:
  *(ulong *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Entry: 109381be8; end: 109381c2f;  */

undefined8 FUN_109381be8(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x18;
  __Znwm(0x18);
  FUN_109381c30();
  return uVar1;
}



/* Entry: 109381c30; end: 109381c83;  */

undefined8 * FUN_109381c30(undefined8 *param_1,undefined8 *param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  FUN_109381c84(param_1,*param_2,param_2 + 1);
  return param_1;
}



/* Entry: 109381c84; end: 109381d83;  */

void FUN_109381c84(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  
  while (param_2 != param_3) {
    func_0x000109381d04(param_1,param_1 + 8,param_2 + 4,param_2 + 4);
    plVar1 = (long *)param_2[1];
    plVar3 = param_2;
    if ((long *)param_2[1] == (long *)0x0) {
      do {
        param_2 = (long *)plVar3[2];
        bVar2 = (long *)*param_2 != plVar3;
        plVar3 = param_2;
      } while (bVar2);
    }
    else {
      do {
        param_2 = plVar1;
        plVar1 = (long *)*param_2;
      } while ((long *)*param_2 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 109381d84; end: 109381f03;  */

long * FUN_109381d84(long *param_1,long *param_2,long *param_3,long *param_4,undefined8 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  if ((param_1 + 1 == param_2) ||
     (uVar2 = param_5, func_0x000107c2abd4(param_5,param_2 + 4), ((uint)uVar2 >> 7 & 1) != 0)) {
    plVar6 = param_2;
    if ((long *)*param_1 != param_2) {
      plVar4 = param_2;
      plVar3 = (long *)*param_2;
      if ((long *)*param_2 == (long *)0x0) {
        do {
          plVar6 = (long *)plVar4[2];
          bVar1 = (long *)*plVar6 == plVar4;
          plVar4 = plVar6;
        } while (bVar1);
      }
      else {
        do {
          plVar6 = plVar3;
          plVar3 = (long *)plVar6[1];
        } while ((long *)plVar6[1] != (long *)0x0);
      }
      plVar4 = plVar6 + 4;
      func_0x000107c2abd4(plVar4,param_5);
      if (((uint)plVar4 >> 7 & 1) == 0) {
FUN_109381fc0:
        param_1 = param_1 + 1;
        plVar4 = (long *)*param_1;
        plVar6 = param_1;
        while (plVar4 != (long *)0x0) {
          while (plVar6 = plVar4, uVar2 = param_5, func_0x000107c2abd4(param_5,plVar6 + 4),
                ((uint)uVar2 >> 7 & 1) != 0) {
            plVar4 = (long *)*plVar6;
            param_1 = plVar6;
            if ((long *)*plVar6 == (long *)0x0) goto LAB_10938202c;
          }
          plVar4 = plVar6 + 4;
          func_0x000107c2abd4(plVar4,param_5);
          if (((uint)plVar4 >> 7 & 1) == 0) break;
          param_1 = plVar6 + 1;
          plVar4 = (long *)*param_1;
        }
LAB_10938202c:
        *param_3 = (long)plVar6;
        return param_1;
      }
    }
    if (*param_2 == 0) {
      *param_3 = (long)param_2;
    }
    else {
      *param_3 = (long)plVar6;
      param_2 = plVar6 + 1;
    }
  }
  else {
    plVar6 = param_2 + 4;
    func_0x000107c2abd4(plVar6,param_5);
    if (((uint)plVar6 >> 7 & 1) == 0) {
      *param_3 = (long)param_2;
      *param_4 = (long)param_2;
      param_2 = param_4;
    }
    else {
      plVar5 = param_2 + 1;
      plVar3 = (long *)*plVar5;
      plVar6 = param_2;
      plVar4 = plVar3;
      if (plVar3 == (long *)0x0) {
        do {
          plVar7 = (long *)plVar6[2];
          bVar1 = (long *)*plVar7 != plVar6;
          plVar6 = plVar7;
        } while (bVar1);
      }
      else {
        do {
          plVar7 = plVar4;
          plVar4 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
      if (plVar7 != param_1 + 1) {
        uVar2 = param_5;
        func_0x000107c2abd4(param_5,plVar7 + 4);
        if (((uint)uVar2 >> 7 & 1) == 0) goto FUN_109381fc0;
        plVar3 = (long *)*plVar5;
      }
      if (plVar3 == (long *)0x0) {
        *param_3 = (long)param_2;
        param_2 = plVar5;
      }
      else {
        *param_3 = (long)plVar7;
        param_2 = plVar7;
      }
    }
  }
  return param_2;
}



/* Entry: 109381f04; end: 109381f6b;  */

void FUN_109381f04(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  FUN_109382044(lVar1 + 0x20,param_3);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109381f6c; end: 109381fbf;  */

void FUN_109381f6c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 109381fc0; end: 109382043;  */

long * FUN_109381fc0(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar2 = (long *)*plVar3;
  plVar4 = plVar3;
  while (plVar2 != (long *)0x0) {
    while (plVar4 = plVar2, uVar1 = param_3, func_0x000107c2abd4(param_3,plVar4 + 4),
          ((uint)uVar1 >> 7 & 1) != 0) {
      plVar2 = (long *)*plVar4;
      plVar3 = plVar4;
      if ((long *)*plVar4 == (long *)0x0) goto LAB_10938202c;
    }
    plVar2 = plVar4 + 4;
    func_0x000107c2abd4(plVar2,param_3);
    if (((uint)plVar2 >> 7 & 1) == 0) break;
    plVar3 = plVar4 + 1;
    plVar2 = (long *)*plVar3;
  }
LAB_10938202c:
  *param_2 = plVar4;
  return plVar3;
}



/* Entry: 109382044; end: 1093820b7;  */

undefined8 * FUN_109382044(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000107c3192c(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  FUN_109381b20(param_1 + 3,param_2 + 3);
  return param_1;
}



/* Entry: 1093820b8; end: 1093820ff;  */

void FUN_1093820b8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x0001093817f8(lVar1 + 0x20);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 109382100; end: 109382157;  */

undefined8 * FUN_109382100(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109382158();
  return puVar1;
}



/* Entry: 109382158; end: 1093821db;  */

void FUN_109382158(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1093821dc(param_1,param_4);
    lVar1 = param_1;
    FUN_109382214(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1093821dc; end: 109382213;  */

long * FUN_1093821dc(long *param_1,ulong param_2,ulong param_3,long *param_4)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10938153c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 2);
    return plVar1;
  }
  FUN_109381528();
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_109381b20(param_4,param_2);
    param_4 = param_4 + 2;
  }
  return param_4;
}



/* Entry: 109382214; end: 10938229b;  */

long FUN_109382214(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_109381b20(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 10938229c; end: 109382303;  */

undefined8 * FUN_10938229c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    func_0x000107c3192c(puVar1,*param_1,param_1[1]);
  }
  else {
    uVar2 = *param_1;
    puVar1[1] = param_1[1];
    *puVar1 = uVar2;
    puVar1[2] = param_1[2];
  }
  return puVar1;
}



/* Entry: 109382304; end: 10938235f;  */

undefined8 * FUN_109382304(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_1092bfde0();
  *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(param_1 + 0x18);
  return puVar1;
}



/* Entry: 109382360; end: 1093824c3;  */

undefined1 * FUN_109382360(undefined1 *param_1,ulong param_2,long param_3,ulong param_4,int param_5)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  long lStack_60;
  ulong auStack_58 [3];
  ulong uVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  lVar1 = param_2 + param_3 * 0x20;
  uVar4 = param_2;
  FUN_1093825f0(param_2,lVar1,auStack_58,&lStack_60);
  uVar3 = (uint)uVar4;
  if ((param_4 & 1) == 0) {
    if (param_5 == 1 && (uVar4 & 1) == 0) {
      uVar7 = 0x20;
      ___cxa_allocate_exception(0x20);
      func_0x000107c31940(auStack_58,&UNK_10f56781b);
      FUN_10937bbbc(uVar7,0x12d,auStack_58);
      ___cxa_throw(uVar7,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10938248c);
      (*pcVar2)();
    }
    uVar3 = param_5 != 2 & uVar3;
  }
  if (uVar3 == 0) {
    *param_1 = 2;
    puVar6 = auStack_58;
    lStack_60 = lVar1;
    auStack_58[0] = param_2;
    FUN_109382588(puVar6,&lStack_60);
    *(ulong **)(param_1 + 8) = puVar6;
  }
  else {
    *param_1 = 1;
    puVar5 = (undefined8 *)0x18;
    __Znwm();
    puVar5[2] = 0;
    puVar5[1] = 0;
    *puVar5 = puVar5 + 1;
    *(undefined8 **)(param_1 + 8) = puVar5;
    FUN_1093824c4(param_2,lVar1,param_1);
  }
  return param_1;
}



/* Entry: 1093824c4; end: 109382587;  */

long FUN_1093824c4(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  long *plStack_38;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    puVar1 = *(undefined1 **)(param_1 + 0x10);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      auStack_40[0] = *puVar1;
      plStack_38 = *(long **)(puVar1 + 8);
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
    }
    else {
      FUN_109381b20(auStack_40);
    }
    uVar2 = *(undefined8 *)(*plStack_38 + 8);
    FUN_109382774(*(undefined8 *)(param_3 + 8),uVar2,uVar2,*plStack_38 + 0x10);
    FUN_109380ffc(&plStack_38,auStack_40[0]);
  }
  return param_3;
}



/* Entry: 109382588; end: 1093825ef;  */

undefined8 * FUN_109382588(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  FUN_109382828();
  return puVar1;
}



/* Entry: 1093825f0; end: 10938266f;  */

undefined8 FUN_1093825f0(long param_1,long param_2)

{
  char *pcVar1;
  
  if (param_1 == param_2) {
    return 1;
  }
  while (((pcVar1 = *(char **)(param_1 + 0x10), *pcVar1 == '\x02' &&
          ((*(long **)(pcVar1 + 8))[1] - **(long **)(pcVar1 + 8) == 0x20)) &&
         (FUN_109382670(pcVar1,0), *pcVar1 == '\x03'))) {
    param_1 = param_1 + 0x20;
    if (param_1 == param_2) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 109382670; end: 109382773;  */

long FUN_109382670(char *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x02') {
    return **(long **)(param_1 + 8) + param_2 * 0x10;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(auStack_60,param_1);
  FUN_10928a5e0(auStack_48,&UNK_10f567846,auStack_60);
  FUN_10937bbbc(uVar2,0x131,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10938271c);
  (*pcVar1)();
}



/* Entry: 109382774; end: 109382827;  */

undefined1  [16]
FUN_109382774(long *param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_109381fc0(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    lVar3 = 0x48;
    __Znwm();
    uVar4 = *param_3;
    *(undefined8 *)(lVar3 + 0x28) = param_3[1];
    *(undefined8 *)(lVar3 + 0x20) = uVar4;
    *(undefined8 *)(lVar3 + 0x30) = param_3[2];
    param_3[1] = 0;
    param_3[2] = 0;
    *param_3 = 0;
    *(undefined1 *)(lVar3 + 0x38) = *param_4;
    *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)(param_4 + 8);
    *param_4 = 0;
    *(undefined8 *)(param_4 + 8) = 0;
    FUN_109381f6c(param_1,uStack_48,plVar2,lVar3);
  }
  auVar5[8] = bVar1;
  auVar5._0_8_ = lVar3;
  auVar5._9_7_ = 0;
  return auVar5;
}



/* Entry: 109382828; end: 1093828ab;  */

void FUN_109382828(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1093821dc(param_1,param_4);
    lVar1 = param_1;
    FUN_1093828ac(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 1093828ac; end: 109382933;  */

long FUN_1093828ac(undefined8 param_1,long param_2,long param_3,long param_4)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    FUN_109382934(param_4,param_2);
    param_4 = param_4 + 0x10;
  }
  return param_4;
}



/* Entry: 109382934; end: 1093829af;  */

undefined1 * FUN_109382934(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  puVar1 = *(undefined1 **)(param_2 + 0x10);
  if (*(char *)(param_2 + 0x18) == '\x01') {
    auStack_30[0] = *puVar1;
    uStack_28 = *(undefined8 *)(puVar1 + 8);
    *puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
  }
  else {
    FUN_109381b20(auStack_30);
  }
  *param_1 = auStack_30[0];
  *(undefined8 *)(param_1 + 8) = uStack_28;
  auStack_30[0] = 0;
  uStack_28 = 0;
  FUN_109380ffc(&uStack_28,0);
  return param_1;
}



/* Entry: 1093829b0; end: 109382a9b;  */

undefined ****
FUN_1093829b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined ****ppppuVar1;
  undefined ***pppuVar2;
  undefined ****ppppuVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined **ppuStack_228;
  undefined1 uStack_220;
  undefined **ppuStack_218;
  char cStack_210;
  undefined **ppuStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **appuStack_1b0 [2];
  undefined1 auStack_1a0 [24];
  undefined8 auStack_188 [2];
  char cStack_171;
  long alStack_170 [3];
  long *plStack_158;
  undefined ***pppuStack_150;
  undefined ***pppuStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  char cStack_128;
  undefined1 uStack_127;
  char cStack_f8;
  long lStack_b8;
  undefined **appuStack_68 [3];
  undefined ***pppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109382f8c(appuStack_68);
  pppuVar2 = appuStack_68;
  FUN_109382ff0(param_1,param_2,pppuVar2,param_4,param_5);
  iVar5 = (int)param_2;
  ppppuVar3 = (undefined ****)pppuStack_50;
  if (pppuStack_50 == appuStack_68) {
    lVar6 = 0x20;
LAB_109382a28:
    (**(code **)((long)*pppuStack_50 + lVar6))();
  }
  else if ((undefined ****)pppuStack_50 != (undefined ****)0x0) {
    lVar6 = 0x28;
    goto LAB_109382a28;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppppuVar3;
  }
  ___stack_chk_fail();
  if (pppuStack_50 == appuStack_68) {
    lVar6 = 0x20;
LAB_109382a88:
    (**(code **)((long)*pppuStack_50 + lVar6))();
  }
  else if ((undefined ****)pppuStack_50 != (undefined ****)0x0) {
    lVar6 = 0x28;
    goto LAB_109382a88;
  }
  __Unwind_Resume();
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (ppppuVar3[3] == (undefined ***)0x0) {
    uStack_127 = *(undefined1 *)(ppppuVar3 + 0x17);
    pppuStack_140 = (undefined ***)0x0;
    pppuStack_148 = (undefined ***)0x0;
    uStack_130 = 0;
    uStack_138 = 0;
    cStack_128 = '\0';
    pppuStack_150 = pppuVar2;
    FUN_109385138(ppppuVar3,&pppuStack_150);
    if (iVar5 != 0) {
      iVar5 = (int)ppppuVar3 + 0x28;
      FUN_109383160();
      *(int *)(ppppuVar3 + 4) = iVar5;
      if (iVar5 != 0xf) {
        pppuVar7 = ppppuVar3[9];
        FUN_109384978(auStack_188,ppppuVar3 + 5);
        ppuStack_1c8 = (undefined **)ppppuVar3[10];
        ppuStack_1d0 = (undefined **)ppppuVar3[9];
        ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
        func_0x000107c31940(auStack_200,"value");
        FUN_109384cec(auStack_1e8,ppppuVar3,0xf,auStack_200);
        FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
        ppppuVar3 = (undefined ****)appuStack_1b0;
        FUN_109385a70(&pppuStack_150,pppuVar7,auStack_188,appuStack_1b0);
        appuStack_1b0[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_1a0);
        __ZNSt9exceptionD2Ev(appuStack_1b0);
        if (cStack_1d1 < '\0') {
          __ZdlPv(auStack_1e8[0]);
        }
        if (cStack_1e9 < '\0') {
          __ZdlPv(auStack_200[0]);
        }
        if (cStack_171 < '\0') {
          __ZdlPv(auStack_188[0]);
        }
      }
    }
    if (cStack_128 == '\x01') {
      *(char *)pppuVar2 = '\t';
      ppuStack_228 = pppuVar2[1];
      pppuVar2[1] = (undefined **)0x0;
      FUN_109380ffc(&ppuStack_228);
    }
    ppppuVar1 = (undefined ****)pppuStack_148;
    if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
      pppuStack_140 = pppuStack_148;
      __ZdlPv();
    }
    goto LAB_109382dc4;
  }
  FUN_1093830cc(alStack_170,ppppuVar3);
  FUN_109385ac0(&pppuStack_150,pppuVar2,alStack_170,*(undefined1 *)(ppppuVar3 + 0x17));
  if (plStack_158 == alStack_170) {
    lVar6 = 0x20;
LAB_109382c64:
    (**(code **)(*plStack_158 + lVar6))();
  }
  else if (plStack_158 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_109382c64;
  }
  FUN_109384028(ppppuVar3,&pppuStack_150);
  if (iVar5 != 0) {
    iVar5 = (int)ppppuVar3 + 0x28;
    FUN_109383160();
    *(int *)(ppppuVar3 + 4) = iVar5;
    if (iVar5 != 0xf) {
      pppuVar7 = ppppuVar3[9];
      FUN_109384978(auStack_188,ppppuVar3 + 5);
      ppuStack_1c8 = (undefined **)ppppuVar3[10];
      ppuStack_1d0 = (undefined **)ppppuVar3[9];
      ppuStack_1c0 = (undefined **)ppppuVar3[0xb];
      func_0x000107c31940(auStack_200,"value");
      FUN_109384cec(auStack_1e8,ppppuVar3,0xf,auStack_200);
      FUN_109384a64(appuStack_1b0,0x65,&ppuStack_1d0,auStack_1e8);
      ppppuVar3 = (undefined ****)appuStack_1b0;
      FUN_109384928(&pppuStack_150,pppuVar7,auStack_188,appuStack_1b0);
      appuStack_1b0[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_1a0);
      __ZNSt9exceptionD2Ev(appuStack_1b0);
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      if (cStack_1e9 < '\0') {
        __ZdlPv(auStack_200[0]);
      }
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
    }
  }
  if (cStack_f8 == '\x01') {
    cStack_210 = *(char *)pppuVar2;
    *(char *)pppuVar2 = '\t';
    ppuStack_208 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_208;
    cVar4 = cStack_210;
LAB_109382db8:
    FUN_109380ffc(pppuVar2,cVar4);
  }
  else if (*(char *)pppuVar2 == '\t') {
    *(char *)pppuVar2 = '\0';
    uStack_220 = 9;
    ppuStack_218 = pppuVar2[1];
    pppuVar2[1] = (undefined **)0x0;
    pppuVar2 = &ppuStack_218;
    cVar4 = '\t';
    goto LAB_109382db8;
  }
  ppppuVar1 = &pppuStack_150;
  FUN_109387a34();
LAB_109382dc4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return ppppuVar1;
  }
  ___stack_chk_fail();
  appuStack_1b0[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(ppppuVar3 + 2);
  __ZNSt9exceptionD2Ev(appuStack_1b0);
  if (cStack_1d1 < '\0') {
    __ZdlPv(auStack_1e8[0]);
  }
  if (cStack_1e9 < '\0') {
    __ZdlPv(auStack_200[0]);
  }
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  if ((undefined ****)pppuStack_148 != (undefined ****)0x0) {
    pppuStack_140 = pppuStack_148;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_109383fe8(ppppuVar1 + 5);
  ppppuVar3 = (undefined ****)ppppuVar1[3];
  if (ppppuVar3 == ppppuVar1) {
    lVar6 = 0x20;
  }
  else {
    if (ppppuVar3 == (undefined ****)0x0) {
      return ppppuVar1;
    }
    lVar6 = 0x28;
  }
  (**(code **)((long)*ppppuVar3 + lVar6))();
  return ppppuVar1;
}



/* Entry: 109382a9c; end: 109382f3b;  */

char ** FUN_109382a9c(undefined ***param_1,int param_2,char *param_3)

{
  int iVar1;
  char **ppcVar2;
  undefined8 *puVar3;
  char **ppcVar4;
  char cVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined8 uStack_198;
  undefined8 auStack_190 [2];
  char cStack_179;
  undefined8 auStack_178 [2];
  char cStack_161;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined **appuStack_140 [2];
  undefined1 auStack_130 [24];
  undefined8 auStack_118 [2];
  char cStack_101;
  long alStack_100 [3];
  long *plStack_e8;
  char *pcStack_e0;
  char **ppcStack_d8;
  char **ppcStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  char cStack_b8;
  undefined1 uStack_b7;
  char cStack_88;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1[3] == (undefined **)0x0) {
    uStack_b7 = *(undefined1 *)(param_1 + 0x17);
    ppcStack_d0 = (char **)0x0;
    ppcStack_d8 = (char **)0x0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    cStack_b8 = '\0';
    pcStack_e0 = param_3;
    FUN_109385138(param_1,&pcStack_e0);
    if (param_2 != 0) {
      iVar1 = (int)param_1 + 0x28;
      FUN_109383160();
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0xf) {
        ppuVar7 = param_1[9];
        FUN_109384978(auStack_118,param_1 + 5);
        ppuStack_158 = param_1[10];
        ppuStack_160 = param_1[9];
        ppuStack_150 = param_1[0xb];
        func_0x000107c31940(auStack_190,"value");
        FUN_109384cec(auStack_178,param_1,0xf,auStack_190);
        FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
        param_1 = appuStack_140;
        FUN_109385a70(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
        appuStack_140[0] = &PTR_FUN_110af44f8;
        __ZNSt13runtime_errorD1Ev(auStack_130);
        __ZNSt9exceptionD2Ev(appuStack_140);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_179 < '\0') {
          __ZdlPv(auStack_190[0]);
        }
        if (cStack_101 < '\0') {
          __ZdlPv(auStack_118[0]);
        }
      }
    }
    if (cStack_b8 == '\x01') {
      *param_3 = '\t';
      uStack_1b8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      FUN_109380ffc(&uStack_1b8);
    }
    ppcVar2 = ppcStack_d8;
    if (ppcStack_d8 != (char **)0x0) {
      ppcStack_d0 = ppcStack_d8;
      __ZdlPv();
    }
    goto LAB_109382dc4;
  }
  FUN_1093830cc(alStack_100,param_1);
  FUN_109385ac0(&pcStack_e0,param_3,alStack_100,*(undefined1 *)(param_1 + 0x17));
  if (plStack_e8 == alStack_100) {
    lVar6 = 0x20;
LAB_109382c64:
    (**(code **)(*plStack_e8 + lVar6))();
  }
  else if (plStack_e8 != (long *)0x0) {
    lVar6 = 0x28;
    goto LAB_109382c64;
  }
  FUN_109384028(param_1,&pcStack_e0);
  if (param_2 != 0) {
    iVar1 = (int)param_1 + 0x28;
    FUN_109383160();
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0xf) {
      ppuVar7 = param_1[9];
      FUN_109384978(auStack_118,param_1 + 5);
      ppuStack_158 = param_1[10];
      ppuStack_160 = param_1[9];
      ppuStack_150 = param_1[0xb];
      func_0x000107c31940(auStack_190,"value");
      FUN_109384cec(auStack_178,param_1,0xf,auStack_190);
      FUN_109384a64(appuStack_140,0x65,&ppuStack_160,auStack_178);
      param_1 = appuStack_140;
      FUN_109384928(&pcStack_e0,ppuVar7,auStack_118,appuStack_140);
      appuStack_140[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_130);
      __ZNSt9exceptionD2Ev(appuStack_140);
      if (cStack_161 < '\0') {
        __ZdlPv(auStack_178[0]);
      }
      if (cStack_179 < '\0') {
        __ZdlPv(auStack_190[0]);
      }
      if (cStack_101 < '\0') {
        __ZdlPv(auStack_118[0]);
      }
    }
  }
  if (cStack_88 == '\x01') {
    cStack_1a0 = *param_3;
    *param_3 = '\t';
    uStack_198 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_198;
    cVar5 = cStack_1a0;
LAB_109382db8:
    FUN_109380ffc(puVar3,cVar5);
  }
  else if (*param_3 == '\t') {
    *param_3 = '\0';
    uStack_1b0 = 9;
    uStack_1a8 = *(undefined8 *)(param_3 + 8);
    param_3[8] = '\0';
    param_3[9] = '\0';
    param_3[10] = '\0';
    param_3[0xb] = '\0';
    param_3[0xc] = '\0';
    param_3[0xd] = '\0';
    param_3[0xe] = '\0';
    param_3[0xf] = '\0';
    puVar3 = &uStack_1a8;
    cVar5 = '\t';
    goto LAB_109382db8;
  }
  ppcVar2 = &pcStack_e0;
  FUN_109387a34();
LAB_109382dc4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return ppcVar2;
  }
  ___stack_chk_fail();
  appuStack_140[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
  __ZNSt9exceptionD2Ev(appuStack_140);
  if (cStack_161 < '\0') {
    __ZdlPv(auStack_178[0]);
  }
  if (cStack_179 < '\0') {
    __ZdlPv(auStack_190[0]);
  }
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  if (ppcStack_d8 != (char **)0x0) {
    ppcStack_d0 = ppcStack_d8;
    __ZdlPv();
  }
  __Unwind_Resume();
  FUN_109383fe8(ppcVar2 + 5);
  ppcVar4 = (char **)ppcVar2[3];
  if (ppcVar4 == ppcVar2) {
    lVar6 = 0x20;
  }
  else {
    if (ppcVar4 == (char **)0x0) {
      return ppcVar2;
    }
    lVar6 = 0x28;
  }
  (**(code **)(*ppcVar4 + lVar6))();
  return ppcVar2;
}



/* Entry: 109382f3c; end: 109382f8b;  */

long * FUN_109382f3c(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_109383fe8(param_1 + 5);
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 109382f8c; end: 109382fef;  */

long FUN_109382f8c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 0x18);
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x18);
  }
  else {
    if (lVar2 == param_2) {
      *(long *)(param_1 + 0x18) = param_1;
      (**(code **)(*(long *)*plVar1 + 0x18))((long *)*plVar1,param_1);
      return param_1;
    }
    *(long *)(param_1 + 0x18) = lVar2;
  }
  *plVar1 = 0;
  return param_1;
}



/* Entry: 109382ff0; end: 1093830cb;  */

long FUN_109382ff0(long param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1;
  FUN_1093830cc(param_1,param_3);
  uVar4 = *param_2;
  puVar3 = (undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x30) = param_2[1];
  *puVar3 = uVar4;
  *(undefined4 *)(lVar1 + 0x20) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(lVar1 + 0x38) = param_5;
  *(undefined4 *)(lVar1 + 0x3c) = 0xffffffff;
  *(undefined1 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x70) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined8 *)(lVar1 + 0x78) = 0;
  *(undefined8 *)(lVar1 + 0x88) = 0;
  *(char **)(lVar1 + 0x90) = "";
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  lVar2 = lVar1;
  FUN_109383130();
  *(int *)(lVar1 + 0xb0) = (int)lVar2;
  *(undefined1 *)(lVar1 + 0xb8) = param_4;
  FUN_109383160();
  *(int *)(param_1 + 0x20) = (int)puVar3;
  return param_1;
}



/* Entry: 1093830cc; end: 10938312f;  */

long FUN_1093830cc(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 109383130; end: 10938315f;  */

int FUN_109383130(undefined8 *param_1)

{
  char cVar1;
  
  _localeconv();
  if ((char *)*param_1 == (char *)0x0) {
    cVar1 = '.';
  }
  else {
    cVar1 = *(char *)*param_1;
  }
  return (int)cVar1;
}



/* Entry: 109383160; end: 1093833f3;  */

undefined4 * FUN_109383160(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined4 *unaff_x19;
  undefined4 *unaff_x20;
  long lVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined *unaff_x21;
  undefined *unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((*(long *)(param_2 + 8) == 0) && (puVar5 = param_2, FUN_1093833f4(), ((ulong)puVar5 & 1) == 0)
     ) {
    puVar12 = &UNK_10f56787a;
    goto LAB_109383278;
  }
  do {
    FUN_109383cd8(param_2);
    uVar2 = param_2[5];
    uVar11 = (ulong)uVar2;
  } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
  cVar1 = *(char *)(param_2 + 4);
  while ((cVar1 == '\x01' && (uVar2 = (uint)uVar11, uVar2 == 0x2f))) {
    puVar5 = param_2;
    func_0x000109383454();
    if ((int)puVar5 == 0) {
      return (undefined4 *)0xe;
    }
    do {
      FUN_109383cd8(param_2);
      uVar2 = param_2[5];
      uVar11 = (ulong)uVar2;
    } while (uVar2 < 0x21 && (1L << (uVar11 & 0x3f) & 0x100002600U) != 0);
    cVar1 = *(char *)(param_2 + 4);
  }
  if ((int)uVar2 < 0x3a) {
    if ((int)uVar2 < 0x2d) {
      if (uVar2 + 1 < 2) {
        return (undefined4 *)0xf;
      }
      if (uVar2 == 0x22) {
        unaff_x29 = &stack0xfffffffffffffff0;
        lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
        FUN_109383e28();
        unaff_x21 = &UNK_10f567b51;
        unaff_x22 = &UNK_10dfc7e08;
code_r0x000109383544:
        puVar5 = param_2;
        FUN_109383cd8();
        puVar6 = (undefined4 *)0x4;
        puVar12 = unaff_x21;
        puVar14 = unaff_x20;
        switch((int)puVar5) {
        case 0:
          puVar12 = &UNK_10f567a2d;
          break;
        case 1:
          puVar12 = &UNK_10f567a76;
          break;
        case 2:
          puVar12 = &UNK_10f567abf;
          break;
        case 3:
          puVar12 = &UNK_10f567b08;
          break;
        case 4:
          break;
        case 5:
          puVar12 = &UNK_10f567b9a;
          break;
        case 6:
          puVar12 = &UNK_10f567be3;
          break;
        case 7:
          puVar12 = &UNK_10f567c2c;
          break;
        case 8:
          puVar12 = &UNK_10f567c75;
          break;
        case 9:
          puVar12 = &UNK_10f567cc3;
          break;
        case 10:
          puVar12 = &UNK_10f567d11;
          break;
        case 0xb:
          puVar12 = &UNK_10f567d5f;
          break;
        case 0xc:
          puVar12 = &UNK_10f567da7;
          break;
        case 0xd:
          puVar12 = &UNK_10f567df5;
          break;
        case 0xe:
          puVar12 = &UNK_10f567e43;
          break;
        case 0xf:
          puVar12 = &UNK_10f567e8b;
          break;
        case 0x10:
          puVar12 = &UNK_10f567ed3;
          break;
        case 0x11:
          puVar12 = &UNK_10f567f1c;
          break;
        case 0x12:
          puVar12 = &UNK_10f567f65;
          break;
        case 0x13:
          puVar12 = &UNK_10f567fae;
          break;
        case 0x14:
          puVar12 = &UNK_10f567ff7;
          break;
        case 0x15:
          puVar12 = &UNK_10f568040;
          break;
        case 0x16:
          puVar12 = &UNK_10f568089;
          break;
        case 0x17:
          puVar12 = &UNK_10f5680d2;
          break;
        case 0x18:
          puVar12 = &UNK_10f56811b;
          break;
        case 0x19:
          puVar12 = &UNK_10f568164;
          break;
        case 0x1a:
          puVar12 = &UNK_10f5681ac;
          break;
        case 0x1b:
          puVar12 = &UNK_10f5681f5;
          break;
        case 0x1c:
          puVar12 = &UNK_10f56823e;
          break;
        case 0x1d:
          puVar12 = &UNK_10f568286;
          break;
        case 0x1e:
          puVar12 = &UNK_10f5682ce;
          break;
        case 0x1f:
          puVar12 = &UNK_10f568316;
          break;
        case 0x20:
        case 0x21:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x54:
        case 0x55:
        case 0x56:
        case 0x57:
        case 0x58:
        case 0x59:
        case 0x5a:
        case 0x5b:
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 0x62:
        case 99:
        case 100:
        case 0x65:
        case 0x66:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6e:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
          uVar2 = param_2[5];
          goto code_r0x000109383574;
        case 0x22:
          goto code_r0x000109383980;
        case 0x5c:
          puVar5 = param_2;
          FUN_109383cd8();
          puVar12 = &UNK_10f5679f9;
          iVar4 = (int)puVar5;
          if (iVar4 < 0x66) {
            if (iVar4 < 0x5c) {
              if (iVar4 == 0x22) {
                uVar2 = 0x22;
              }
              else {
                if (iVar4 != 0x2f) break;
                uVar2 = 0x2f;
              }
            }
            else if (iVar4 == 0x5c) {
              uVar2 = 0x5c;
            }
            else {
              if (iVar4 != 0x62) break;
              uVar2 = 8;
            }
          }
          else if (iVar4 < 0x72) {
            if (iVar4 == 0x66) {
              uVar2 = 0xc;
            }
            else {
              if (iVar4 != 0x6e) break;
              uVar2 = 10;
            }
          }
          else if (iVar4 == 0x72) {
            uVar2 = 0xd;
          }
          else {
            if (iVar4 != 0x74) {
              if (iVar4 == 0x75) {
                puVar14 = param_2;
                FUN_109383e7c();
                uVar2 = (uint)puVar14;
                if (uVar2 == 0xffffffff) {
code_r0x0001093839b0:
                  puVar12 = &UNK_10f567933;
                }
                else {
                  unaff_x20 = puVar14;
                  if ((uVar2 & 0xfffffc00) == 0xd800) {
                    puVar5 = param_2;
                    FUN_109383cd8();
                    if (((int)puVar5 == 0x5c) &&
                       (puVar5 = param_2, FUN_109383cd8(), (int)puVar5 == 0x75)) {
                      puVar5 = param_2;
                      FUN_109383e7c();
                      uVar3 = (uint)puVar5;
                      if (uVar3 == 0xffffffff) goto code_r0x0001093839b0;
                      if (uVar3 >> 10 == 0x37) {
                        puVar14 = (undefined4 *)(ulong)(uVar3 + uVar2 * 0x400 + 0xfca02400);
code_r0x000109383688:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,
                                   (uint)((ulong)puVar14 >> 0x12) & 0x3fff | 0xfffffff0);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 0xc & 0x3f | 0xffffff80);
code_r0x0001093836ac:
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,(uint)puVar14 >> 6 & 0x3f | 0xffffff80);
                        goto code_r0x0001093836bc;
                      }
                    }
                    puVar12 = &UNK_10f567969;
                  }
                  else {
                    if ((uVar2 & 0xfffffc00) != 0xdc00) {
                      if (0x7f < (int)uVar2) {
                        if (0x7ff < uVar2) {
                          if (uVar2 >> 0x10 != 0) goto code_r0x000109383688;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                    (param_2 + 0x14,uVar2 >> 0xc | 0xffffffe0);
                          goto code_r0x0001093836ac;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                                  (param_2 + 0x14,uVar2 >> 6 | 0xffffffc0);
code_r0x0001093836bc:
                        uVar2 = (uint)puVar14 & 0x3f | 0xffffff80;
                      }
                      goto code_r0x000109383574;
                    }
                    puVar12 = &UNK_10f5679b5;
                  }
                }
              }
              break;
            }
            uVar2 = 9;
          }
code_r0x000109383574:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2 + 0x14,(int)(char)uVar2);
          unaff_x20 = puVar14;
          goto code_r0x000109383544;
        default:
          puVar12 = &UNK_10f56835e;
          break;
        case 0xc2:
        case 0xc3:
        case 0xc4:
        case 0xc5:
        case 0xc6:
        case 199:
        case 200:
        case 0xc9:
        case 0xca:
        case 0xcb:
        case 0xcc:
        case 0xcd:
        case 0xce:
        case 0xcf:
        case 0xd0:
        case 0xd1:
        case 0xd2:
        case 0xd3:
        case 0xd4:
        case 0xd5:
        case 0xd6:
        case 0xd7:
        case 0xd8:
        case 0xd9:
        case 0xda:
        case 0xdb:
        case 0xdc:
        case 0xdd:
        case 0xde:
        case 0xdf:
          uStack_60 = 0xbf00000080;
          uVar10 = 2;
          goto code_r0x000109383704;
        case 0xe0:
          uStack_60 = 0xbf000000a0;
          goto code_r0x0001093835a8;
        case 0xe1:
        case 0xe2:
        case 0xe3:
        case 0xe4:
        case 0xe5:
        case 0xe6:
        case 0xe7:
        case 0xe8:
        case 0xe9:
        case 0xea:
        case 0xeb:
        case 0xec:
        case 0xee:
        case 0xef:
          uStack_60 = 0xbf00000080;
          goto code_r0x0001093835a8;
        case 0xed:
          uStack_60 = 0x9f00000080;
code_r0x0001093835a8:
          uStack_58 = 0xbf00000080;
          uVar10 = 4;
code_r0x000109383704:
          puVar5 = param_2;
          param_1 = uStack_60;
          FUN_109383f54(param_2,&uStack_60,uVar10);
          if (((ulong)puVar5 & 1) == 0) goto code_r0x00010938397c;
          goto code_r0x000109383544;
        case 0xf0:
          puVar7 = (undefined8 *)&UNK_10dfc80d4;
          goto code_r0x0001093836f0;
        case 0xf1:
        case 0xf2:
        case 0xf3:
          puVar7 = (undefined8 *)&UNK_10dfc80ec;
          goto code_r0x0001093836f0;
        case 0xf4:
          puVar7 = (undefined8 *)&UNK_10dfc8104;
code_r0x0001093836f0:
          uStack_50 = 0xbf00000080;
          uStack_58 = puVar7[1];
          uStack_60 = *puVar7;
          uVar10 = 6;
          goto code_r0x000109383704;
        case -1:
          puVar12 = &UNK_10f56790d;
        }
        *(undefined **)(param_2 + 0x1a) = puVar12;
        goto code_r0x00010938397c;
      }
      if (uVar2 == 0x2c) {
        return (undefined4 *)0xd;
      }
    }
    else {
      puVar6 = param_2;
      if ((uVar2 - 0x30 < 10) || (uVar2 == 0x2d)) goto code_r0x0001093839d8;
    }
  }
  else if ((int)uVar2 < 0x6e) {
    if ((int)uVar2 < 0x5d) {
      if (uVar2 == 0x3a) {
        return (undefined4 *)0xc;
      }
      if (uVar2 == 0x5b) {
        return (undefined4 *)0x8;
      }
    }
    else {
      if (uVar2 == 0x5d) {
        return (undefined4 *)0xa;
      }
      if (uVar2 == 0x66) {
        lVar13 = 0;
        while (puVar5 = param_2, FUN_109383cd8(),
              (uint)(byte)(&UNK_10dfc80ce)[lVar13] == ((uint)puVar5 & 0xff)) {
          lVar13 = lVar13 + 1;
          if (lVar13 == 4) {
            return (undefined4 *)0x2;
          }
        }
      }
    }
  }
  else if ((int)uVar2 < 0x7b) {
    if (uVar2 == 0x6e) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_109383cd8(),
            (uint)(byte)(&stack0xffffffffffffffc8)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x3;
        }
      }
    }
    else if (uVar2 == 0x74) {
      lVar13 = 1;
      while (puVar5 = param_2, FUN_109383cd8(),
            (uint)(byte)(&stack0xffffffffffffffcc)[lVar13] == ((uint)puVar5 & 0xff)) {
        lVar13 = lVar13 + 1;
        if (lVar13 == 4) {
          return (undefined4 *)0x1;
        }
      }
    }
  }
  else {
    if (uVar2 == 0x7b) {
      return (undefined4 *)0x9;
    }
    if (uVar2 == 0x7d) {
      return (undefined4 *)0xb;
    }
  }
  puVar12 = &UNK_10f5678a7;
LAB_109383278:
  *(undefined **)(param_2 + 0x1a) = puVar12;
  return (undefined4 *)0xe;
code_r0x00010938397c:
  puVar6 = (undefined4 *)0xe;
code_r0x000109383980:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  unaff_x30 = FUN_1093839d8;
  ___stack_chk_fail();
  register0x00000008 = (BADSPACEBASE *)&uStack_60;
  unaff_x19 = param_2;
code_r0x0001093839d8:
  *(undefined **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined4 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined4 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  FUN_109383e28();
  iVar4 = puVar6[5];
  if (iVar4 - 0x31U < 9) {
    iVar15 = 5;
LAB_109383a08:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(int)(char)iVar4);
      puVar5 = puVar6;
      FUN_109383cd8();
      iVar4 = (int)puVar5;
      if (9 < iVar4 - 0x30U) break;
      iVar4 = puVar6[5];
    }
    if (iVar4 != 0x2e) {
      if ((iVar4 != 0x45) && (iVar4 != 0x65)) {
LAB_109383bf0:
        puVar5 = puVar6;
        FUN_109383d64();
        *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
        ___error();
        *puVar5 = 0;
        piVar8 = puVar6 + 0x14;
        if (iVar15 == 5) {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar6 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,(undefined1 *)((long)register0x00000008 + -0x38),10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar6 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109383ac4;
      }
      goto LAB_109383a4c;
    }
LAB_109383b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 0x22));
    puVar5 = puVar6;
    FUN_109383cd8();
    if (9 < (int)puVar5 - 0x30U) {
      puVar12 = &UNK_10f5683ad;
      goto LAB_109383cb8;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109383cd8();
      iVar4 = (int)puVar5;
    } while (iVar4 - 0x30U < 10);
    if ((iVar4 == 0x65) || (iVar4 == 0x45)) goto LAB_109383a4c;
  }
  else {
    if (iVar4 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,0x30);
      iVar15 = 5;
    }
    else {
      if (iVar4 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar6 + 0x14,0x2d);
      }
      puVar5 = puVar6;
      FUN_109383cd8();
      if ((int)puVar5 - 0x31U < 9) {
        iVar4 = puVar6[5];
        iVar15 = 6;
        goto LAB_109383a08;
      }
      if ((int)puVar5 != 0x30) {
        puVar12 = &UNK_10f568384;
        goto LAB_109383cb8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      iVar15 = 6;
    }
    puVar5 = puVar6;
    FUN_109383cd8();
    iVar4 = (int)puVar5;
    if ((iVar4 != 0x65) && (iVar4 != 0x45)) {
      if (iVar4 != 0x2e) goto LAB_109383bf0;
      goto LAB_109383b98;
    }
LAB_109383a4c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_109383cd8();
    iVar4 = (int)puVar5;
    if (9 < iVar4 - 0x30U) {
      if ((iVar4 != 0x2d) && (iVar4 != 0x2b)) {
        puVar12 = &UNK_10f5683d6;
LAB_109383cb8:
        *(undefined **)(puVar6 + 0x1a) = puVar12;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109383cd8();
      if (9 < (int)puVar5 - 0x30U) {
        puVar12 = &UNK_10f568411;
        goto LAB_109383cb8;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
    puVar5 = puVar6;
    FUN_109383cd8();
    iVar4 = (int)puVar5;
    while (iVar4 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar6 + 0x14,(long)*(char *)(puVar6 + 5));
      puVar5 = puVar6;
      FUN_109383cd8();
      iVar4 = (int)puVar5;
    }
  }
  puVar5 = puVar6;
  FUN_109383d64();
  *(undefined8 *)((long)register0x00000008 + -0x38) = 0;
  ___error();
  *puVar5 = 0;
LAB_109383ac4:
  puVar7 = (undefined8 *)(puVar6 + 0x14);
  if (*(char *)((long)puVar6 + 0x67) < '\0') {
    puVar7 = (undefined8 *)*puVar7;
  }
  _strtod(puVar7,(undefined1 *)((long)register0x00000008 + -0x38));
  *(undefined8 *)(puVar6 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 1093833f4; end: 109383503;  */

bool FUN_1093833f4(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  FUN_109383cd8();
  if ((int)uVar2 == 0xef) {
    uVar2 = param_1;
    FUN_109383cd8();
    if ((int)uVar2 == 0xbb) {
      FUN_109383cd8(param_1);
      bVar1 = (int)param_1 == 0xbf;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    FUN_109383d64(param_1);
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 109383504; end: 1093839d7;  */

undefined4 * FUN_109383504(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong unaff_x20;
  ulong uVar12;
  int iVar13;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_109383e28();
code_r0x000109383544:
  uVar4 = param_2;
  FUN_109383cd8();
  puVar5 = (undefined4 *)0x4;
  puVar11 = &UNK_10f567b51;
  uVar12 = unaff_x20;
  switch((int)uVar4) {
  case 0:
    puVar11 = &UNK_10f567a2d;
    break;
  case 1:
    puVar11 = &UNK_10f567a76;
    break;
  case 2:
    puVar11 = &UNK_10f567abf;
    break;
  case 3:
    puVar11 = &UNK_10f567b08;
    break;
  case 4:
    break;
  case 5:
    puVar11 = &UNK_10f567b9a;
    break;
  case 6:
    puVar11 = &UNK_10f567be3;
    break;
  case 7:
    puVar11 = &UNK_10f567c2c;
    break;
  case 8:
    puVar11 = &UNK_10f567c75;
    break;
  case 9:
    puVar11 = &UNK_10f567cc3;
    break;
  case 10:
    puVar11 = &UNK_10f567d11;
    break;
  case 0xb:
    puVar11 = &UNK_10f567d5f;
    break;
  case 0xc:
    puVar11 = &UNK_10f567da7;
    break;
  case 0xd:
    puVar11 = &UNK_10f567df5;
    break;
  case 0xe:
    puVar11 = &UNK_10f567e43;
    break;
  case 0xf:
    puVar11 = &UNK_10f567e8b;
    break;
  case 0x10:
    puVar11 = &UNK_10f567ed3;
    break;
  case 0x11:
    puVar11 = &UNK_10f567f1c;
    break;
  case 0x12:
    puVar11 = &UNK_10f567f65;
    break;
  case 0x13:
    puVar11 = &UNK_10f567fae;
    break;
  case 0x14:
    puVar11 = &UNK_10f567ff7;
    break;
  case 0x15:
    puVar11 = &UNK_10f568040;
    break;
  case 0x16:
    puVar11 = &UNK_10f568089;
    break;
  case 0x17:
    puVar11 = &UNK_10f5680d2;
    break;
  case 0x18:
    puVar11 = &UNK_10f56811b;
    break;
  case 0x19:
    puVar11 = &UNK_10f568164;
    break;
  case 0x1a:
    puVar11 = &UNK_10f5681ac;
    break;
  case 0x1b:
    puVar11 = &UNK_10f5681f5;
    break;
  case 0x1c:
    puVar11 = &UNK_10f56823e;
    break;
  case 0x1d:
    puVar11 = &UNK_10f568286;
    break;
  case 0x1e:
    puVar11 = &UNK_10f5682ce;
    break;
  case 0x1f:
    puVar11 = &UNK_10f568316;
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar1 = *(uint *)(param_2 + 0x14);
    goto code_r0x000109383574;
  case 0x22:
    goto code_r0x000109383980;
  case 0x5c:
    uVar4 = param_2;
    FUN_109383cd8();
    puVar11 = &UNK_10f5679f9;
    iVar3 = (int)uVar4;
    if (iVar3 < 0x66) {
      if (iVar3 < 0x5c) {
        if (iVar3 == 0x22) {
          uVar1 = 0x22;
        }
        else {
          if (iVar3 != 0x2f) break;
          uVar1 = 0x2f;
        }
      }
      else if (iVar3 == 0x5c) {
        uVar1 = 0x5c;
      }
      else {
        if (iVar3 != 0x62) break;
        uVar1 = 8;
      }
    }
    else if (iVar3 < 0x72) {
      if (iVar3 == 0x66) {
        uVar1 = 0xc;
      }
      else {
        if (iVar3 != 0x6e) break;
        uVar1 = 10;
      }
    }
    else if (iVar3 == 0x72) {
      uVar1 = 0xd;
    }
    else {
      if (iVar3 != 0x74) {
        if (iVar3 == 0x75) {
          uVar12 = param_2;
          FUN_109383e7c();
          uVar1 = (uint)uVar12;
          if (uVar1 == 0xffffffff) {
code_r0x0001093839b0:
            puVar11 = &UNK_10f567933;
          }
          else {
            unaff_x20 = uVar12;
            if ((uVar1 & 0xfffffc00) == 0xd800) {
              uVar4 = param_2;
              FUN_109383cd8();
              if (((int)uVar4 == 0x5c) && (uVar4 = param_2, FUN_109383cd8(), (int)uVar4 == 0x75)) {
                uVar4 = param_2;
                FUN_109383e7c();
                uVar2 = (uint)uVar4;
                if (uVar2 == 0xffffffff) goto code_r0x0001093839b0;
                if (uVar2 >> 10 == 0x37) {
                  uVar12 = (ulong)(uVar2 + uVar1 * 0x400 + 0xfca02400);
code_r0x000109383688:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)(uVar12 >> 0x12) & 0x3fff | 0xfffffff0);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 0xc & 0x3f | 0xffffff80);
code_r0x0001093836ac:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,(uint)uVar12 >> 6 & 0x3f | 0xffffff80);
                  goto code_r0x0001093836bc;
                }
              }
              puVar11 = &UNK_10f567969;
            }
            else {
              if ((uVar1 & 0xfffffc00) != 0xdc00) {
                if (0x7f < (int)uVar1) {
                  if (0x7ff < uVar1) {
                    if (uVar1 >> 0x10 != 0) goto code_r0x000109383688;
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2 + 0x50,uVar1 >> 0xc | 0xffffffe0);
                    goto code_r0x0001093836ac;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2 + 0x50,uVar1 >> 6 | 0xffffffc0);
code_r0x0001093836bc:
                  uVar1 = (uint)uVar12 & 0x3f | 0xffffff80;
                }
                goto code_r0x000109383574;
              }
              puVar11 = &UNK_10f5679b5;
            }
          }
        }
        break;
      }
      uVar1 = 9;
    }
code_r0x000109383574:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x50,(int)(char)uVar1);
    unaff_x20 = uVar12;
    goto code_r0x000109383544;
  default:
    puVar11 = &UNK_10f56835e;
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    uStack_60 = 0xbf00000080;
    uVar10 = 2;
    goto code_r0x000109383704;
  case 0xe0:
    uStack_60 = 0xbf000000a0;
    goto code_r0x0001093835a8;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    uStack_60 = 0xbf00000080;
    goto code_r0x0001093835a8;
  case 0xed:
    uStack_60 = 0x9f00000080;
code_r0x0001093835a8:
    uStack_58 = 0xbf00000080;
    uVar10 = 4;
code_r0x000109383704:
    uVar4 = param_2;
    param_1 = uStack_60;
    FUN_109383f54(param_2,&uStack_60,uVar10);
    if ((uVar4 & 1) == 0) goto code_r0x00010938397c;
    goto code_r0x000109383544;
  case 0xf0:
    puVar6 = (undefined8 *)&UNK_10dfc80d4;
    goto code_r0x0001093836f0;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    puVar6 = (undefined8 *)&UNK_10dfc80ec;
    goto code_r0x0001093836f0;
  case 0xf4:
    puVar6 = (undefined8 *)&UNK_10dfc8104;
code_r0x0001093836f0:
    uStack_50 = 0xbf00000080;
    uStack_58 = puVar6[1];
    uStack_60 = *puVar6;
    uVar10 = 6;
    goto code_r0x000109383704;
  case -1:
    puVar11 = &UNK_10f56790d;
  }
  *(undefined **)(param_2 + 0x68) = puVar11;
code_r0x00010938397c:
  puVar5 = (undefined4 *)0xe;
code_r0x000109383980:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar5;
  }
  ___stack_chk_fail();
  puStack_90 = &UNK_10dfc7e08;
  puStack_88 = &UNK_10f567b51;
  pcStack_68 = FUN_1093839d8;
  uStack_80 = unaff_x20;
  uStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  FUN_109383e28();
  iVar3 = puVar5[5];
  if (iVar3 - 0x31U < 9) {
    iVar13 = 5;
LAB_109383a08:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(int)(char)iVar3);
      puVar7 = puVar5;
      FUN_109383cd8();
      iVar3 = (int)puVar7;
      if (9 < iVar3 - 0x30U) break;
      iVar3 = puVar5[5];
    }
    if (iVar3 != 0x2e) {
      if ((iVar3 != 0x45) && (iVar3 != 0x65)) {
LAB_109383bf0:
        puVar7 = puVar5;
        FUN_109383d64();
        uStack_98 = 0;
        ___error();
        *puVar7 = 0;
        piVar8 = puVar5 + 0x14;
        if (iVar13 == 5) {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoull(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1e) = piVar8;
            return (undefined4 *)0x5;
          }
        }
        else {
          if (*(char *)((long)puVar5 + 0x67) < '\0') {
            piVar8 = *(int **)piVar8;
          }
          _strtoll(piVar8,&uStack_98,10);
          piVar9 = piVar8;
          ___error();
          if (*piVar9 == 0) {
            *(int **)(puVar5 + 0x1c) = piVar8;
            return (undefined4 *)0x6;
          }
        }
        goto LAB_109383ac4;
      }
      goto LAB_109383a4c;
    }
LAB_109383b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 0x22));
    puVar7 = puVar5;
    FUN_109383cd8();
    if (9 < (int)puVar7 - 0x30U) {
      puVar11 = &UNK_10f5683ad;
      goto LAB_109383cb8;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109383cd8();
      iVar3 = (int)puVar7;
    } while (iVar3 - 0x30U < 10);
    if ((iVar3 == 0x65) || (iVar3 == 0x45)) goto LAB_109383a4c;
  }
  else {
    if (iVar3 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,0x30);
      iVar13 = 5;
    }
    else {
      if (iVar3 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (puVar5 + 0x14,0x2d);
      }
      puVar7 = puVar5;
      FUN_109383cd8();
      if ((int)puVar7 - 0x31U < 9) {
        iVar3 = puVar5[5];
        iVar13 = 6;
        goto LAB_109383a08;
      }
      if ((int)puVar7 != 0x30) {
        puVar11 = &UNK_10f568384;
        goto LAB_109383cb8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      iVar13 = 6;
    }
    puVar7 = puVar5;
    FUN_109383cd8();
    iVar3 = (int)puVar7;
    if ((iVar3 != 0x65) && (iVar3 != 0x45)) {
      if (iVar3 != 0x2e) goto LAB_109383bf0;
      goto LAB_109383b98;
    }
LAB_109383a4c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_109383cd8();
    iVar3 = (int)puVar7;
    if (9 < iVar3 - 0x30U) {
      if ((iVar3 != 0x2d) && (iVar3 != 0x2b)) {
        puVar11 = &UNK_10f5683d6;
LAB_109383cb8:
        *(undefined **)(puVar5 + 0x1a) = puVar11;
        return (undefined4 *)0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109383cd8();
      if (9 < (int)puVar7 - 0x30U) {
        puVar11 = &UNK_10f568411;
        goto LAB_109383cb8;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
    puVar7 = puVar5;
    FUN_109383cd8();
    iVar3 = (int)puVar7;
    while (iVar3 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (puVar5 + 0x14,(long)*(char *)(puVar5 + 5));
      puVar7 = puVar5;
      FUN_109383cd8();
      iVar3 = (int)puVar7;
    }
  }
  puVar7 = puVar5;
  FUN_109383d64();
  uStack_98 = 0;
  ___error();
  *puVar7 = 0;
LAB_109383ac4:
  puVar6 = (undefined8 *)(puVar5 + 0x14);
  if (*(char *)((long)puVar5 + 0x67) < '\0') {
    puVar6 = (undefined8 *)*puVar6;
  }
  _strtod(puVar6,&uStack_98);
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  return (undefined4 *)0x7;
}



/* Entry: 1093839d8; end: 109383cd7;  */

undefined8 FUN_1093839d8(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uStack_38;
  
  FUN_109383e28();
  iVar1 = param_2[5];
  if (iVar1 - 0x31U < 9) {
    iVar7 = 5;
LAB_109383a08:
    while( true ) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(int)(char)iVar1);
      puVar3 = param_2;
      FUN_109383cd8();
      iVar1 = (int)puVar3;
      if (9 < iVar1 - 0x30U) break;
      iVar1 = param_2[5];
    }
    if (iVar1 != 0x2e) {
      if ((iVar1 != 0x45) && (iVar1 != 0x65)) {
LAB_109383bf0:
        puVar3 = param_2;
        FUN_109383d64();
        uStack_38 = 0;
        ___error();
        *puVar3 = 0;
        piVar4 = param_2 + 0x14;
        if (iVar7 == 5) {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoull(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1e) = piVar4;
            return 5;
          }
        }
        else {
          if (*(char *)((long)param_2 + 0x67) < '\0') {
            piVar4 = *(int **)piVar4;
          }
          _strtoll(piVar4,&uStack_38,10);
          piVar5 = piVar4;
          ___error();
          if (*piVar5 == 0) {
            *(int **)(param_2 + 0x1c) = piVar4;
            return 6;
          }
        }
        goto LAB_109383ac4;
      }
      goto LAB_109383a4c;
    }
LAB_109383b98:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 0x22));
    puVar3 = param_2;
    FUN_109383cd8();
    if (9 < (int)puVar3 - 0x30U) {
      puVar6 = &UNK_10f5683ad;
      goto LAB_109383cb8;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109383cd8();
      iVar1 = (int)puVar3;
    } while (iVar1 - 0x30U < 10);
    if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_109383a4c;
  }
  else {
    if (iVar1 == 0x30) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,0x30);
      iVar7 = 5;
    }
    else {
      if (iVar1 == 0x2d) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2 + 0x14,0x2d);
      }
      puVar3 = param_2;
      FUN_109383cd8();
      if ((int)puVar3 - 0x31U < 9) {
        iVar1 = param_2[5];
        iVar7 = 6;
        goto LAB_109383a08;
      }
      if ((int)puVar3 != 0x30) {
        puVar6 = &UNK_10f568384;
        goto LAB_109383cb8;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      iVar7 = 6;
    }
    puVar3 = param_2;
    FUN_109383cd8();
    iVar1 = (int)puVar3;
    if ((iVar1 != 0x65) && (iVar1 != 0x45)) {
      if (iVar1 != 0x2e) goto LAB_109383bf0;
      goto LAB_109383b98;
    }
LAB_109383a4c:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_109383cd8();
    iVar1 = (int)puVar3;
    if (9 < iVar1 - 0x30U) {
      if ((iVar1 != 0x2d) && (iVar1 != 0x2b)) {
        puVar6 = &UNK_10f5683d6;
LAB_109383cb8:
        *(undefined **)(param_2 + 0x1a) = puVar6;
        return 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109383cd8();
      if (9 < (int)puVar3 - 0x30U) {
        puVar6 = &UNK_10f568411;
        goto LAB_109383cb8;
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (param_2 + 0x14,(long)*(char *)(param_2 + 5));
    puVar3 = param_2;
    FUN_109383cd8();
    iVar1 = (int)puVar3;
    while (iVar1 - 0x30U < 10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_2 + 0x14,(long)*(char *)(param_2 + 5));
      puVar3 = param_2;
      FUN_109383cd8();
      iVar1 = (int)puVar3;
    }
  }
  puVar3 = param_2;
  FUN_109383d64();
  uStack_38 = 0;
  ___error();
  *puVar3 = 0;
LAB_109383ac4:
  puVar2 = (undefined8 *)(param_2 + 0x14);
  if (*(char *)((long)param_2 + 0x67) < '\0') {
    puVar2 = (undefined8 *)*puVar2;
  }
  _strtod(puVar2,&uStack_38);
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return 7;
}



/* Entry: 109383cd8; end: 109383d63;  */

void FUN_109383cd8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 uStack_21;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    iVar1 = *(int *)(param_1 + 0x14);
  }
  else {
    lVar2 = param_1;
    FUN_109383db4();
    iVar1 = (int)lVar2;
    *(int *)(param_1 + 0x14) = iVar1;
  }
  if (iVar1 != -1) {
    uStack_21 = (undefined1)iVar1;
    FUN_1092d2eec(param_1 + 0x38,&uStack_21);
    if (*(int *)(param_1 + 0x14) == 10) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    }
  }
  return;
}



/* Entry: 109383d64; end: 109383db3;  */

void FUN_109383d64(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  lVar2 = *plVar1;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (lVar2 == 0) {
    plVar1 = (long *)(param_1 + 0x30);
    lVar2 = *plVar1;
    if (lVar2 == 0) goto LAB_109383d98;
  }
  *plVar1 = lVar2 + -1;
LAB_109383d98:
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  return;
}



/* Entry: 109383db4; end: 109383e27;  */

void FUN_109383db4(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  if (plVar2[3] == plVar2[4]) {
    (**(code **)(*plVar2 + 0x50))();
    if ((int)plVar2 == -1) {
      lVar1 = *param_1 + *(long *)(*(long *)*param_1 + -0x18);
      __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) | 2);
    }
  }
  else {
    plVar2[3] = plVar2[3] + 1;
  }
  return;
}



/* Entry: 109383e28; end: 109383e7b;  */

void FUN_109383e28(long param_1)

{
  undefined1 uStack_11;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x38);
  uStack_11 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  FUN_1092d2eec((undefined8 *)(param_1 + 0x38),&uStack_11);
  return;
}



/* Entry: 109383e7c; end: 109383f53;  */

int FUN_109383e7c(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint auStack_60 [6];
  long lStack_48;
  
  iVar6 = 0;
  lVar7 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  auStack_60[2] = 4;
  auStack_60[3] = 0;
  auStack_60[0] = 0xc;
  auStack_60[1] = 8;
  do {
    uVar3 = *(uint *)((long)auStack_60 + lVar7);
    lVar4 = param_1;
    FUN_109383cd8();
    iVar2 = *(int *)(param_1 + 0x14);
    uVar5 = iVar2 - 0x30;
    if (9 < uVar5) {
      if (iVar2 - 0x41U < 6) {
        uVar5 = iVar2 - 0x37;
      }
      else {
        if (5 < iVar2 - 0x61U) {
          iVar6 = -1;
          break;
        }
        uVar5 = iVar2 - 0x57;
      }
    }
    iVar6 = (uVar5 << (ulong)(uVar3 & 0x1f)) + iVar6;
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return iVar6;
  }
  ___stack_chk_fail();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (lVar4 + 0x50,(long)*(char *)(lVar4 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109383cd8(lVar4);
      iVar6 = *(int *)(lVar4 + 0x14);
      if ((iVar6 < *param_2) || (param_2[1] < iVar6)) {
        *(undefined **)(lVar4 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (lVar4 + 0x50,(int)(char)iVar6);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 109383f54; end: 109383fe7;  */

undefined8 FUN_109383f54(long param_1,int *param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (param_1 + 0x50,(long)*(char *)(param_1 + 0x14));
  if (param_3 != 0) {
    piVar1 = param_2 + param_3;
    do {
      FUN_109383cd8(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
      if ((iVar2 < *param_2) || (param_2[1] < iVar2)) {
        *(undefined **)(param_1 + 0x68) = &UNK_10f56835e;
        return 0;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1 + 0x50,(int)(char)iVar2);
      param_2 = param_2 + 2;
    } while (param_2 != piVar1);
  }
  return 1;
}



/* Entry: 109383fe8; end: 109384027;  */

long * FUN_109383fe8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  if (param_1[7] != 0) {
    param_1[8] = param_1[7];
    __ZdlPv();
  }
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar1 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar1,*(uint *)(lVar1 + 0x20) & 2);
  }
  return param_1;
}



/* Entry: 109384028; end: 109384927;  */

/* WARNING: Removing unreachable block (ram,0x000109384434) */

ulong FUN_109384028(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  undefined8 auStack_c8 [2];
  char cStack_b1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined **appuStack_98 [2];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_58 = 0;
  lStack_50 = 0;
  uStack_48 = 0;
code_r0x000109384060:
  iVar2 = (int)param_1;
  uVar4 = param_2;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 2:
    appuStack_98[0] = (undefined **)((ulong)appuStack_98[0]._1_7_ << 8);
    FUN_109386fe4(param_2,appuStack_98,0);
    break;
  case 3:
    appuStack_98[0] = (undefined **)0x0;
    FUN_109387184(param_2,appuStack_98,0);
    break;
  case 4:
    FUN_1093874bc(param_2,param_1 + 0x78,0);
    break;
  case 5:
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109387664(param_2,appuStack_98,0);
    break;
  case 6:
    appuStack_98[0] = *(undefined ***)(param_1 + 0x98);
    FUN_10938731c(param_2,appuStack_98,0);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(auStack_70,param_1 + 0x28);
      FUN_109384978(auStack_e0,param_1 + 0x28);
      FUN_10928a5e0(auStack_c8,&UNK_10f568460,auStack_e0);
      FUN_109259240(&uStack_b0,auStack_c8,&DAT_10f638984);
      FUN_109386318(appuStack_98,0x196,&uStack_b0);
      func_0x0001093862c8(param_2,uVar5,auStack_70,appuStack_98);
      appuStack_98[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_88);
      __ZNSt9exceptionD2Ev(appuStack_98);
      if (lStack_a0 < 0) {
        __ZdlPv(uStack_b0);
      }
      goto code_r0x00010938440c;
    }
    appuStack_98[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109386e44(param_2,appuStack_98,0);
    break;
  case 8:
    uVar3 = param_2;
    FUN_10938603c(param_2,0xffffffffffffffff);
    if ((int)uVar3 == 0) {
code_r0x000109384440:
      param_2 = 0;
      goto LAB_1093842d8;
    }
    iVar1 = iVar2 + 0x28;
    FUN_109383160();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 10) {
      FUN_1093861c4();
code_r0x000109384140:
      if ((uVar4 & 1) != 0) break;
      goto code_r0x000109384440;
    }
    appuStack_98[0] = (undefined **)CONCAT71(appuStack_98[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_58,appuStack_98);
    goto code_r0x000109384060;
  case 9:
    uVar3 = param_2;
    FUN_109385bcc(param_2,0xffffffffffffffff);
    if ((uVar3 & 1) == 0) goto code_r0x000109384440;
    iVar1 = iVar2 + 0x28;
    FUN_109383160();
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 == 0xb) {
      FUN_109385d54();
      goto code_r0x000109384140;
    }
    if (iVar1 == 4) {
      FUN_109385f0c(param_2,param_1 + 0x78);
      if ((int)uVar4 == 0) goto code_r0x000109384440;
      iVar1 = iVar2 + 0x28;
      FUN_109383160();
      *(int *)(param_1 + 0x20) = iVar1;
      if (iVar1 == 0xc) {
        appuStack_98[0] = (undefined **)((ulong)appuStack_98[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_58,appuStack_98);
        iVar2 = iVar2 + 0x28;
        FUN_109383160();
        goto code_r0x000109384270;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f56844f);
      FUN_109384cec(auStack_c8,param_1,0xc,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(auStack_70,param_1 + 0x28);
      uStack_a8 = *(undefined8 *)(param_1 + 0x50);
      uStack_b0 = *(undefined8 *)(param_1 + 0x48);
      lStack_a0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_e0,&UNK_10f568444);
      FUN_109384cec(auStack_c8,param_1,4,auStack_e0);
      FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
      FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    }
    goto code_r0x0001093843ec;
  default:
    goto LAB_109384378;
  case 0xe:
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    FUN_109384978(auStack_70,param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x50);
    uStack_b0 = *(undefined8 *)(param_1 + 0x48);
    lStack_a0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_e0,"value");
    FUN_109384cec(auStack_c8,param_1,0,auStack_e0);
    FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
    FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
    goto code_r0x0001093843ec;
  }
  if (lStack_50 != 0) {
    do {
      uVar4 = param_2;
      if ((*(ulong *)(lStack_58 + (lStack_50 - 1U >> 6) * 8) >> (lStack_50 - 1U & 0x3f) & 1) == 0) {
        iVar1 = iVar2 + 0x28;
        FUN_109383160();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) {
          iVar1 = iVar2 + 0x28;
          FUN_109383160();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 4) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_109384978(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f568444);
            FUN_109384cec(auStack_c8,param_1,4,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x0001093843ec;
          }
          FUN_109385f0c(param_2,param_1 + 0x78);
          if ((int)uVar4 == 0) goto code_r0x000109384440;
          iVar1 = iVar2 + 0x28;
          FUN_109383160();
          *(int *)(param_1 + 0x20) = iVar1;
          if (iVar1 != 0xc) {
            uVar5 = *(undefined8 *)(param_1 + 0x48);
            FUN_109384978(auStack_70,param_1 + 0x28);
            uStack_a8 = *(undefined8 *)(param_1 + 0x50);
            uStack_b0 = *(undefined8 *)(param_1 + 0x48);
            lStack_a0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_e0,&UNK_10f56844f);
            FUN_109384cec(auStack_c8,param_1,0xc,auStack_e0);
            FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
            FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
            goto code_r0x0001093843ec;
          }
          iVar2 = iVar2 + 0x28;
          FUN_109383160();
          goto code_r0x000109384270;
        }
        if (iVar1 != 0xb) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_109384978(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,&DAT_10f365d6f);
          FUN_109384cec(auStack_c8,param_1,0xb,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x0001093843ec;
        }
        FUN_109385d54();
      }
      else {
        iVar1 = iVar2 + 0x28;
        FUN_109383160();
        *(int *)(param_1 + 0x20) = iVar1;
        if (iVar1 == 0xd) goto code_r0x000109384224;
        if (iVar1 != 10) {
          uVar5 = *(undefined8 *)(param_1 + 0x48);
          FUN_109384978(auStack_70,param_1 + 0x28);
          uStack_a8 = *(undefined8 *)(param_1 + 0x50);
          uStack_b0 = *(undefined8 *)(param_1 + 0x48);
          lStack_a0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_e0,"array");
          FUN_109384cec(auStack_c8,param_1,10,auStack_e0);
          FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
          FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
          goto code_r0x0001093843ec;
        }
        FUN_1093861c4();
      }
      if ((uVar4 & 1) == 0) goto code_r0x000109384440;
      lStack_50 = lStack_50 + -1;
      if (lStack_50 == 0) break;
    } while( true );
  }
  param_2 = 1;
  goto LAB_1093842d8;
code_r0x000109384224:
  iVar2 = iVar2 + 0x28;
  FUN_109383160();
code_r0x000109384270:
  *(int *)(param_1 + 0x20) = iVar2;
  goto code_r0x000109384060;
LAB_109384378:
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  FUN_109384978(auStack_70,param_1 + 0x28);
  uStack_a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_b0 = *(undefined8 *)(param_1 + 0x48);
  lStack_a0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_e0,"value");
  FUN_109384cec(auStack_c8,param_1,0x10,auStack_e0);
  FUN_109384a64(appuStack_98,0x65,&uStack_b0,auStack_c8);
  FUN_109384928(param_2,uVar5,auStack_70,appuStack_98);
code_r0x0001093843ec:
  appuStack_98[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_88);
  __ZNSt9exceptionD2Ev(appuStack_98);
code_r0x00010938440c:
  if (cStack_b1 < '\0') {
    __ZdlPv(auStack_c8[0]);
  }
  if (cStack_c9 < '\0') {
    __ZdlPv(auStack_e0[0]);
  }
LAB_1093842d8:
  if (lStack_58 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 109384928; end: 109384977;  */

/* WARNING: Removing unreachable block (ram,0x000109384b90) */
/* WARNING: Removing unreachable block (ram,0x000109384c24) */

undefined8 * FUN_109384928(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 *****pppppuVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined *puVar9;
  undefined8 ****ppppuStack_178;
  ulong uStack_170;
  byte bStack_161;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 auStack_148 [2];
  char cStack_131;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_68;
  undefined1 uStack_60;
  long lStack_58;
  
  *(undefined1 *)(param_1 + 0x58) = 1;
  if (*(char *)(param_1 + 0x80) != '\x01') {
    return (undefined8 *)0x0;
  }
  puVar5 = (undefined8 *)0x28;
  ___cxa_allocate_exception();
  FUN_109387804();
  ppuVar8 = &PTR_DAT_110af4880;
  pcVar6 = FUN_109385108;
  ___cxa_throw();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *extraout_x8 = 0;
  extraout_x8[1] = 0;
  extraout_x8[2] = 0;
  pbVar2 = (byte *)puVar5[8];
  for (pbVar1 = (byte *)puVar5[7]; pbVar1 != pbVar2; pbVar1 = pbVar1 + 1) {
    puVar5 = extraout_x8;
    if (*pbVar1 < 0x20) {
      uStack_60 = 0;
      puStack_68 = (undefined *)0x0;
      _snprintf(&puStack_68,9,&UNK_10f568509);
      pcVar6 = (code *)&puStack_68;
      _strlen();
      ppuVar8 = &puStack_68;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    }
    else {
      ppuVar8 = (undefined **)(ulong)(uint)(int)(char)*pbVar1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (*(char *)((long)extraout_x8 + 0x17) < '\0') {
      __ZdlPv(*extraout_x8);
    }
    __Unwind_Resume(puVar5);
    func_0x000107c31940(auStack_160,&DAT_10f3506b0);
    FUN_10937967c(auStack_148,auStack_160,puVar5);
    puVar7 = auStack_148;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,&UNK_10f568512,0xb);
    uStack_128 = puVar7[1];
    uStack_130 = *puVar7;
    lStack_120 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    FUN_109387890(&ppppuStack_178,ppuVar8);
    pppppuVar3 = (undefined8 *****)ppppuStack_178;
    if (-1 < (char)bStack_161) {
      uStack_170 = (ulong)bStack_161;
      pppppuVar3 = &ppppuStack_178;
    }
    puVar7 = &uStack_130;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,pppppuVar3,uStack_170);
    uStack_108 = puVar7[1];
    uStack_110 = *puVar7;
    lStack_100 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar7 = &uStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar7,": ",2);
    uStack_e8 = puVar7[1];
    uStack_f0 = *puVar7;
    uStack_e0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    puVar9 = *(undefined **)((long)pcVar6 + 8);
    ppuVar4 = *(undefined ***)pcVar6;
    if (-1 < (char)*(code *)((long)pcVar6 + 0x17)) {
      puVar9 = (undefined *)(ulong)(byte)*(code *)((long)pcVar6 + 0x17);
      ppuVar4 = (undefined **)pcVar6;
    }
    puVar7 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar7,ppuVar4,puVar9);
    uStack_c8 = puVar7[1];
    uStack_d0 = *puVar7;
    uStack_c0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
    if ((char)bStack_161 < '\0') {
      __ZdlPv(ppppuStack_178);
    }
    if (lStack_120 < 0) {
      __ZdlPv(uStack_130);
    }
    if (cStack_131 < '\0') {
      __ZdlPv(auStack_148[0]);
    }
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
    puVar9 = *ppuVar8;
    puVar7 = extraout_x8_00;
    FUN_109379804(extraout_x8_00,puVar5,&uStack_d0);
    *extraout_x8_00 = &PTR_FUN_110af48a8;
    extraout_x8_00[4] = puVar9;
    return puVar7;
  }
  return puVar5;
}



/* Entry: 109384978; end: 109384a63;  */

/* WARNING: Removing unreachable block (ram,0x000109384b90) */
/* WARNING: Removing unreachable block (ram,0x000109384c24) */

void FUN_109384978(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *****pppppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *extraout_x8;
  undefined8 uVar7;
  undefined8 ****ppppuStack_158;
  ulong uStack_150;
  byte bStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 auStack_128 [2];
  char cStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_48;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar3 = (byte *)param_2[8];
  for (pbVar2 = (byte *)param_2[7]; pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
    param_2 = param_1;
    if (*pbVar2 < 0x20) {
      uStack_40 = 0;
      uStack_48 = 0;
      _snprintf(&uStack_48,9,&UNK_10f568509);
      param_4 = &uStack_48;
      _strlen();
      param_3 = &uStack_48;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm();
    }
    else {
      param_3 = (undefined8 *)(ulong)(uint)(int)(char)*pbVar2;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    if (*(char *)((long)param_1 + 0x17) < '\0') {
      __ZdlPv(*param_1);
    }
    __Unwind_Resume(param_2);
    func_0x000107c31940(auStack_140,&DAT_10f3506b0);
    FUN_10937967c(auStack_128,auStack_140,param_2);
    puVar5 = auStack_128;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,&UNK_10f568512,0xb);
    uStack_108 = puVar5[1];
    uStack_110 = *puVar5;
    lStack_100 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    FUN_109387890(&ppppuStack_158,param_3);
    pppppuVar4 = (undefined8 *****)ppppuStack_158;
    if (-1 < (char)bStack_141) {
      uStack_150 = (ulong)bStack_141;
      pppppuVar4 = &ppppuStack_158;
    }
    puVar5 = &uStack_110;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar5,pppppuVar4,uStack_150);
    uStack_e8 = puVar5[1];
    uStack_f0 = *puVar5;
    lStack_e0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5 = &uStack_f0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar5,": ",2);
    uStack_c8 = puVar5[1];
    uStack_d0 = *puVar5;
    uStack_c0 = puVar5[2];
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    uVar1 = param_4[1];
    puVar5 = (undefined8 *)*param_4;
    if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
      puVar5 = param_4;
    }
    puVar6 = &uStack_d0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar6,puVar5,uVar1);
    uStack_a8 = puVar6[1];
    uStack_b0 = *puVar6;
    uStack_a0 = puVar6[2];
    puVar6[1] = 0;
    puVar6[2] = 0;
    *puVar6 = 0;
    if (lStack_e0 < 0) {
      __ZdlPv(uStack_f0);
    }
    if ((char)bStack_141 < '\0') {
      __ZdlPv(ppppuStack_158);
    }
    if (lStack_100 < 0) {
      __ZdlPv(uStack_110);
    }
    if (cStack_111 < '\0') {
      __ZdlPv(auStack_128[0]);
    }
    if (cStack_129 < '\0') {
      __ZdlPv(auStack_140[0]);
    }
    uVar7 = *param_3;
    FUN_109379804(extraout_x8,param_2,&uStack_b0);
    *extraout_x8 = &PTR_FUN_110af48a8;
    extraout_x8[4] = uVar7;
    return;
  }
  return;
}



/* Entry: 109384a64; end: 109384ceb;  */

/* WARNING: Removing unreachable block (ram,0x000109384b90) */
/* WARNING: Removing unreachable block (ram,0x000109384c24) */

void FUN_109384a64(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  byte bStack_f1;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c31940(auStack_f0,&DAT_10f3506b0);
  FUN_10937967c(auStack_d8,auStack_f0,param_2);
  puVar3 = auStack_d8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,&UNK_10f568512,0xb);
  uStack_b8 = puVar3[1];
  uStack_c0 = *puVar3;
  lStack_b0 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  FUN_109387890(&ppuStack_108,param_3);
  pppuVar2 = (undefined8 ***)ppuStack_108;
  if (-1 < (char)bStack_f1) {
    uStack_100 = (ulong)bStack_f1;
    pppuVar2 = &ppuStack_108;
  }
  puVar3 = &uStack_c0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar3,pppuVar2,uStack_100);
  uStack_98 = puVar3[1];
  uStack_a0 = *puVar3;
  lStack_90 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  puVar3 = &uStack_a0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3,": ",2);
  uStack_78 = puVar3[1];
  uStack_80 = *puVar3;
  uStack_70 = puVar3[2];
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  uVar1 = param_4[1];
  puVar3 = (undefined8 *)*param_4;
  if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_4 + 0x17);
    puVar3 = param_4;
  }
  puVar4 = &uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar4,puVar3,uVar1);
  uStack_58 = puVar4[1];
  uStack_60 = *puVar4;
  uStack_50 = puVar4[2];
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  if ((char)bStack_f1 < '\0') {
    __ZdlPv(ppuStack_108);
  }
  if (lStack_b0 < 0) {
    __ZdlPv(uStack_c0);
  }
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  uVar5 = *param_3;
  FUN_109379804(param_1,param_2,&uStack_60);
  *param_1 = &PTR_FUN_110af48a8;
  param_1[4] = uVar5;
  return;
}



/* Entry: 109384cec; end: 109385107;  */

/* WARNING: Removing unreachable block (ram,0x000109384f68) */
/* WARNING: Removing unreachable block (ram,0x000109384da4) */
/* WARNING: Removing unreachable block (ram,0x000109384eb4) */
/* WARNING: Removing unreachable block (ram,0x000109384ffc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_109384cec(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *******pppppppuVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 auStack_a8 [2];
  char cStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *******pppppppuStack_50;
  ulong uStack_48;
  ulong uStack_40;
  
  func_0x000107c31940(param_1,&UNK_10f568528);
  uVar4 = *(ulong *)(param_4 + 8);
  if (-1 < (char)*(byte *)(param_4 + 0x17)) {
    uVar4 = (ulong)*(byte *)(param_4 + 0x17);
  }
  if (uVar4 != 0) {
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&uStack_70,&UNK_10f568536,param_4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar3," ",1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_1,&DAT_10f568545,2);
  uVar4 = (ulong)*(uint *)(param_2 + 0x20);
  if (*(uint *)(param_2 + 0x20) == 0xe) {
    func_0x000107c31940(auStack_a8,*(undefined8 *)(param_2 + 0x90));
    puVar3 = auStack_a8;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&UNK_10f568548,0xe);
    uStack_88 = puVar3[1];
    uStack_90 = *puVar3;
    lStack_80 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    FUN_109384978(&puStack_c0,param_2 + 0x28);
    ppuVar2 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar2 = &puStack_c0;
    }
    puVar3 = &uStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,ppuVar2,uStack_b8);
    uStack_68 = puVar3[1];
    uStack_70 = *puVar3;
    lStack_60 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (puVar3,&DAT_10f638984,1);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
    if (lStack_80 < 0) {
      __ZdlPv(uStack_90);
    }
    if (-1 < cStack_91) goto joined_r0x000109384f78;
  }
  else {
    FUN_109387a10();
    func_0x000107c31940(&uStack_70,uVar4);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568557,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    auStack_a8[0] = uStack_70;
    if (-1 < lStack_60) goto joined_r0x000109384f78;
  }
  __ZdlPv(auStack_a8[0]);
joined_r0x000109384f78:
  if ((int)param_3 != 0) {
    FUN_109387a10(param_3);
    func_0x000107c31940(&uStack_70,param_3);
    puVar3 = &uStack_70;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
              (puVar3,0,&UNK_10f568563,0xb);
    uStack_48 = puVar3[1];
    pppppppuStack_50 = (undefined8 *******)*puVar3;
    uStack_40 = puVar3[2];
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    uVar4 = uStack_48;
    pppppppuVar1 = pppppppuStack_50;
    if (-1 < (long)uStack_40) {
      uVar4 = uStack_40 >> 0x38;
      pppppppuVar1 = &pppppppuStack_50;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_1,pppppppuVar1,uVar4);
    if (lStack_60 < 0) {
      __ZdlPv(uStack_70);
    }
  }
  return;
}



/* Entry: 109385108; end: 109385137;  */

void FUN_109385108(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 109385138; end: 109385a6f;  */

undefined ** FUN_109385138(long param_1,undefined **param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_f0 [2];
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined **appuStack_a8 [2];
  undefined1 auStack_98 [24];
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char cStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  ppuVar1 = (undefined **)(param_1 + 0x78);
code_r0x000109385184:
  iVar3 = (int)param_1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 2:
    appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0]._1_7_ << 8);
    FUN_109388000(param_2,appuStack_a8);
    break;
  case 3:
    appuStack_a8[0] = (undefined **)0x0;
    FUN_109388200(param_2,appuStack_a8);
    break;
  case 4:
    FUN_1093885d4(param_2,ppuVar1);
    break;
  case 5:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa0);
    FUN_109388804(param_2,appuStack_a8);
    break;
  case 6:
    appuStack_a8[0] = *(undefined ***)(param_1 + 0x98);
    FUN_1093883d4(param_2,appuStack_a8);
    break;
  case 7:
    if (0x7fefffffffffffff < ((ulong)*(undefined ***)(param_1 + 0xa8) & 0x7fffffffffffffff)) {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(&uStack_80,param_1 + 0x28);
      FUN_109384978(auStack_f0,param_1 + 0x28);
      FUN_10928a5e0(auStack_d8,&UNK_10f568460,auStack_f0);
      FUN_109259240(&uStack_c0,auStack_d8,&DAT_10f638984);
      FUN_109386318(appuStack_a8,0x196,&uStack_c0);
      func_0x000109387ab4(param_2,uVar6,&uStack_80,appuStack_a8);
      appuStack_a8[0] = &PTR_FUN_110af44f8;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(appuStack_a8);
      if (lStack_b0 < 0) {
        __ZdlPv(uStack_c0);
      }
      goto code_r0x00010938555c;
    }
    appuStack_a8[0] = *(undefined ***)(param_1 + 0xa8);
    FUN_109387e00(param_2,appuStack_a8);
    break;
  case 8:
    uStack_80 = 2;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_109383160();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 10) {
code_r0x000109385274:
      param_2[2] = param_2[2] + -8;
      break;
    }
    appuStack_a8[0] = (undefined **)CONCAT71(appuStack_a8[0]._1_7_,1);
    func_0x0001078db3d4(&lStack_68,appuStack_a8);
    goto code_r0x000109385184;
  case 9:
    uStack_80 = 1;
    ppuVar4 = param_2;
    FUN_109387bc8(param_2,&uStack_80);
    appuStack_a8[0] = ppuVar4;
    FUN_109387b04(param_2 + 1,appuStack_a8);
    iVar2 = iVar3 + 0x28;
    FUN_109383160();
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) goto code_r0x000109385274;
    if (iVar2 == 4) {
      lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
      appuStack_a8[0] = ppuVar1;
      FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
      param_2[4] = (undefined *)(lVar5 + 0x38);
      iVar2 = iVar3 + 0x28;
      FUN_109383160();
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 == 0xc) {
        appuStack_a8[0] = (undefined **)((ulong)appuStack_a8[0] & 0xffffffffffffff00);
        func_0x0001078db3d4(&lStack_68,appuStack_a8);
        iVar3 = iVar3 + 0x28;
        FUN_109383160();
        goto code_r0x0001093853b4;
      }
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f56844f);
      FUN_109384cec(auStack_d8,param_1,0xc,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      FUN_109384978(&uStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      uStack_c0 = *(undefined8 *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x000107c31940(auStack_f0,&UNK_10f568444);
      FUN_109384cec(auStack_d8,param_1,4,auStack_f0);
      FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
      FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    }
    goto code_r0x00010938553c;
  default:
    goto LAB_1093854c8;
  case 0xe:
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    FUN_109384978(&uStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    uStack_c0 = *(undefined8 *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    func_0x000107c31940(auStack_f0,"value");
    FUN_109384cec(auStack_d8,param_1,0,auStack_f0);
    FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
    FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
    goto code_r0x00010938553c;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = iVar3 + 0x28;
        FUN_109383160();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = iVar3 + 0x28;
          FUN_109383160();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            uVar6 = *(undefined8 *)(param_1 + 0x48);
            FUN_109384978(&uStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            uStack_c0 = *(undefined8 *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x000107c31940(auStack_f0,&UNK_10f568444);
            FUN_109384cec(auStack_d8,param_1,4,auStack_f0);
            FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
            FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
            goto code_r0x00010938553c;
          }
          lVar5 = *(long *)(*(long *)(param_2[2] + -8) + 8);
          appuStack_a8[0] = ppuVar1;
          FUN_109386c9c(lVar5,ppuVar1,&UNK_10dd5b8f9,appuStack_a8,&uStack_80);
          param_2[4] = (undefined *)(lVar5 + 0x38);
          iVar2 = iVar3 + 0x28;
          FUN_109383160();
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 == 0xc) {
            iVar3 = iVar3 + 0x28;
            FUN_109383160();
            goto code_r0x0001093853b4;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109384978(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&UNK_10f56844f);
          FUN_109384cec(auStack_d8,param_1,0xc,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010938553c;
        }
        if (iVar2 != 0xb) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109384978(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,&DAT_10f365d6f);
          FUN_109384cec(auStack_d8,param_1,0xb,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010938553c;
        }
      }
      else {
        iVar2 = iVar3 + 0x28;
        FUN_109383160();
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto code_r0x00010938534c;
        if (iVar2 != 10) {
          uVar6 = *(undefined8 *)(param_1 + 0x48);
          FUN_109384978(&uStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          uStack_c0 = *(undefined8 *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x000107c31940(auStack_f0,"array");
          FUN_109384cec(auStack_d8,param_1,10,auStack_f0);
          FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
          FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
          goto code_r0x00010938553c;
        }
      }
      param_2[2] = param_2[2] + -8;
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
    } while( true );
  }
  param_2 = (undefined **)0x1;
  goto LAB_109385424;
code_r0x00010938534c:
  iVar3 = iVar3 + 0x28;
  FUN_109383160();
code_r0x0001093853b4:
  *(int *)(param_1 + 0x20) = iVar3;
  goto code_r0x000109385184;
LAB_1093854c8:
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  FUN_109384978(&uStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  uStack_c0 = *(undefined8 *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  func_0x000107c31940(auStack_f0,"value");
  FUN_109384cec(auStack_d8,param_1,0x10,auStack_f0);
  FUN_109384a64(appuStack_a8,0x65,&uStack_c0,auStack_d8);
  FUN_109385a70(param_2,uVar6,&uStack_80,appuStack_a8);
code_r0x00010938553c:
  appuStack_a8[0] = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(appuStack_a8);
code_r0x00010938555c:
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(auStack_f0[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(CONCAT71(uStack_7f,uStack_80));
  }
LAB_109385424:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return param_2;
}



/* Entry: 109385a70; end: 109385abf;  */

undefined8 * FUN_109385a70(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  code *pcVar3;
  undefined1 uStack_61;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(char *)(param_1 + 0x29) != '\x01') {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)0x28;
  ___cxa_allocate_exception();
  FUN_109387804();
  ppuVar2 = &PTR_DAT_110af4880;
  pcVar3 = FUN_109385108;
  ___cxa_throw();
  *puVar1 = ppuVar2;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[10] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 0xb) = 0;
  FUN_1093830cc(puVar1 + 0xc,pcVar3);
  puVar1[0x12] = 0;
  *(undefined1 *)(puVar1 + 0x10) = param_4;
  *(undefined1 *)(puVar1 + 0x11) = 9;
  uStack_61 = 1;
  func_0x0001078db3d4(puVar1 + 4,&uStack_61);
  return puVar1;
}



/* Entry: 109385ac0; end: 109385bcb;  */

undefined8 *
FUN_109385ac0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 uStack_41;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_1093830cc(param_1 + 0xc,param_3);
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x10) = param_4;
  *(undefined1 *)(param_1 + 0x11) = 9;
  uStack_41 = 1;
  func_0x0001078db3d4(param_1 + 4,&uStack_41);
  return param_1;
}



/* Entry: 109385bcc; end: 109385d53;  */

undefined8 FUN_109385bcc(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined1 *puStack_40;
  undefined1 uStack_31;
  
  lVar2 = param_1 + 0x60;
  FUN_109386478(lVar2,(ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3,0,
                param_1 + 0x88);
  uStack_31 = (undefined1)lVar2;
  func_0x0001078db3d4(param_1 + 0x20,&uStack_31);
  auStack_60[0] = 1;
  puVar4 = auStack_60;
  lVar2 = param_1;
  FUN_1093864b8(param_1,puVar4,1);
  lStack_48 = lVar2;
  puStack_40 = puVar4;
  FUN_10938665c((long *)(param_1 + 8),&puStack_40);
  if ((param_2 != 0xffffffffffffffff) &&
     (pbVar5 = *(byte **)(*(long *)(param_1 + 0x10) + -8), pbVar5 != (byte *)0x0)) {
    uVar6 = (ulong)*pbVar5;
    if (uVar6 < 3) {
      uVar6 = *(ulong *)(&UNK_10dfc8160 + uVar6 * 8);
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 < param_2) {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      __ZNSt3__19to_stringEm(auStack_78,param_2);
      FUN_10928a5e0(auStack_60,&UNK_10f56847a,auStack_78);
      FUN_109386318(uVar3,0x198,auStack_60);
      ___cxa_throw(uVar3,&PTR_DAT_110af4840,FUN_109386448);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x109385cfc);
      (*pcVar1)();
    }
  }
  return 1;
}



/* Entry: 109385d54; end: 109385f0b;  */

undefined8 FUN_109385d54(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  byte **ppbVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [32];
  byte *pbStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *apbStack_70 [4];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
    uVar3 = param_1 + 0x60;
    FUN_109386478(uVar3,(int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1
                  ,1);
    if ((uVar3 & 1) == 0) {
      FUN_109381b20(auStack_50,param_1 + 0x88);
      puVar5 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar2 = *puVar5;
      *puVar5 = auStack_50[0];
      uVar7 = *(undefined8 *)(puVar5 + 8);
      *(undefined8 *)(puVar5 + 8) = uStack_48;
      auStack_50[0] = uVar2;
      uStack_48 = uVar7;
      FUN_109380ffc(&uStack_48);
    }
  }
  lVar1 = *(long *)(param_1 + 0x10);
  lVar6 = lVar1 + -8;
  *(long *)(param_1 + 0x10) = lVar6;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  if (((*(long *)(param_1 + 8) != lVar6) &&
      (apbStack_70[0] = *(byte **)(lVar1 + -0x10), apbStack_70[0] != (byte *)0x0)) &&
     (*apbStack_70[0] - 1 < 2)) {
    apbStack_70[1] = (byte *)0x0;
    apbStack_70[2] = (byte *)0x0;
    apbStack_70[3] = (byte *)0x8000000000000000;
    lVar1 = 8;
    if (*apbStack_70[0] != 1) {
      lVar1 = 0x10;
    }
    *(undefined8 *)((long)apbStack_70 + lVar1) = **(undefined8 **)(apbStack_70[0] + 8);
    while( true ) {
      pbStack_90 = *(byte **)(lVar6 + -8);
      lStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0x8000000000000000;
      if (*pbStack_90 == 2) {
        uStack_80 = *(undefined8 *)(*(long *)(pbStack_90 + 8) + 8);
      }
      else if (*pbStack_90 == 1) {
        lStack_88 = *(long *)(pbStack_90 + 8) + 8;
      }
      else {
        uStack_78 = 1;
      }
      ppbVar4 = apbStack_70;
      FUN_109379420(ppbVar4,&pbStack_90);
      if (((ulong)ppbVar4 & 1) != 0) {
        return 1;
      }
      ppbVar4 = apbStack_70;
      FUN_109386768();
      if (*(char *)ppbVar4 == '\t') break;
      FUN_109386b30(apbStack_70);
      lVar6 = *(long *)(param_1 + 0x10);
    }
    pbStack_90 = apbStack_70[0];
    uStack_80 = apbStack_70[2];
    lStack_88 = (long)apbStack_70[1];
    uStack_78 = apbStack_70[3];
    FUN_109386850(auStack_b0,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),&pbStack_90);
  }
  return 1;
}



/* Entry: 109385f0c; end: 10938603b;  */

undefined8 FUN_109385f0c(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  char cStack_51;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  auStack_50[0] = 3;
  uVar4 = param_2;
  FUN_10938229c();
  lVar2 = param_1 + 0x60;
  uStack_48 = uVar4;
  FUN_109386478(lVar2,(ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3,4,auStack_50)
  ;
  cStack_51 = (char)lVar2;
  func_0x0001078db3d4(param_1 + 0x38,&cStack_51);
  if ((cStack_51 == '\x01') && (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0)) {
    FUN_109381b20(auStack_68,param_1 + 0x88);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + -8) + 8);
    uStack_38 = param_2;
    FUN_109386c9c(lVar2,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
    puVar3 = (undefined1 *)(lVar2 + 0x38);
    uVar1 = *puVar3;
    *puVar3 = auStack_68[0];
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined8 *)(lVar2 + 0x40) = uStack_60;
    *(undefined1 **)(param_1 + 0x50) = puVar3;
    auStack_68[0] = uVar1;
    uStack_60 = uVar4;
    FUN_109380ffc(&uStack_60);
  }
  FUN_109380ffc(&uStack_48,auStack_50[0]);
  return 1;
}



/* Entry: 10938603c; end: 1093861c3;  */

undefined8 FUN_10938603c(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  undefined1 *puStack_40;
  undefined1 uStack_31;
  
  lVar2 = param_1 + 0x60;
  FUN_109386478(lVar2,(ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3,2,
                param_1 + 0x88);
  uStack_31 = (undefined1)lVar2;
  func_0x0001078db3d4(param_1 + 0x20,&uStack_31);
  auStack_60[0] = 2;
  puVar4 = auStack_60;
  lVar2 = param_1;
  FUN_1093864b8(param_1,puVar4,1);
  lStack_48 = lVar2;
  puStack_40 = puVar4;
  FUN_10938665c((long *)(param_1 + 8),&puStack_40);
  if ((param_2 != 0xffffffffffffffff) &&
     (pbVar5 = *(byte **)(*(long *)(param_1 + 0x10) + -8), pbVar5 != (byte *)0x0)) {
    uVar6 = (ulong)*pbVar5;
    if (uVar6 < 3) {
      uVar6 = *(ulong *)(&UNK_10dfc8160 + uVar6 * 8);
    }
    else {
      uVar6 = 1;
    }
    if (uVar6 < param_2) {
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      __ZNSt3__19to_stringEm(auStack_78,param_2);
      FUN_10928a5e0(auStack_60,&UNK_10f5684e5,auStack_78);
      FUN_109386318(uVar3,0x198,auStack_60);
      ___cxa_throw(uVar3,&PTR_DAT_110af4840,FUN_109386448);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10938616c);
      (*pcVar1)();
    }
  }
  return 1;
}



/* Entry: 1093861c4; end: 109386317;  */

undefined8 FUN_1093861c4(long param_1)

{
  undefined1 uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_30 [8];
  undefined8 uStack_28;
  
  plVar5 = (long *)(*(long *)(param_1 + 0x10) + -8);
  if (*plVar5 == 0) {
    *(long **)(param_1 + 0x10) = plVar5;
  }
  else {
    uVar2 = param_1 + 0x60;
    FUN_109386478(uVar2,(int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8)) >> 3) + -1
                  ,3);
    if ((uVar2 & 1) == 0) {
      FUN_109381b20(auStack_30,param_1 + 0x88);
      puVar3 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = *puVar3;
      *puVar3 = auStack_30[0];
      uVar6 = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar3 + 8) = uStack_28;
      auStack_30[0] = uVar1;
      uStack_28 = uVar6;
      FUN_109380ffc(&uStack_28);
      lVar8 = *(long *)(param_1 + 0x10);
      lVar7 = lVar8 + -8;
      *(long *)(param_1 + 0x10) = lVar7;
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      if (*(long *)(param_1 + 8) == lVar7) {
        return 1;
      }
      pcVar4 = *(char **)(lVar8 + -0x10);
      if (*pcVar4 != '\x02') {
        return 1;
      }
      lVar8 = *(long *)(pcVar4 + 8);
      lVar7 = *(long *)(lVar8 + 8);
      puVar3 = (undefined1 *)(lVar7 + -0x10);
      FUN_109380ffc(lVar7 + -8,*puVar3);
      *(undefined1 **)(lVar8 + 8) = puVar3;
      return 1;
    }
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  return 1;
}



/* Entry: 109386318; end: 109386447;  */

void FUN_109386318(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 auStack_80 [2];
  char cStack_69;
  long alStack_68 [2];
  char cStack_51;
  undefined8 **ppuStack_50;
  long lStack_48;
  long lStack_40;
  
  func_0x000107c31940(auStack_80,&UNK_10f5684fc);
  FUN_10937967c(alStack_68,auStack_80,param_2);
  uVar1 = param_3[1];
  puVar3 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar3 = param_3;
  }
  plVar4 = alStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(plVar4,puVar3,uVar1);
  lStack_48 = plVar4[1];
  ppuStack_50 = (undefined8 **)*plVar4;
  lStack_40 = plVar4[2];
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = 0;
  if (cStack_51 < '\0') {
    __ZdlPv(alStack_68[0]);
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  pppuVar2 = (undefined8 ***)ppuStack_50;
  if (-1 < lStack_40) {
    pppuVar2 = &ppuStack_50;
  }
  FUN_109379804(param_1,param_2,pppuVar2);
  *param_1 = &PTR_FUN_110af4868;
  if (lStack_40 < 0) {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 109386448; end: 109386477;  */

void FUN_109386448(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 109386478; end: 1093864b7;  */

undefined1  [16] FUN_109386478(long param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined1 uStack_15;
  undefined4 uStack_14;
  
  uStack_14 = SUB84(param_2,0);
  uStack_15 = (undefined1)param_3;
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    puVar4 = &uStack_14;
    (**(code **)(*plVar2 + 0x30))(plVar2,puVar4,&uStack_15);
    auVar11._8_8_ = puVar4;
    auVar11._0_8_ = plVar2;
    return auVar11;
  }
  func_0x000104c501e4();
  if ((*(ulong *)(plVar2[4] + (plVar2[5] - 1U >> 6) * 8) >> (plVar2[5] - 1U & 0x3f) & 1) == 0) {
    uVar9 = 0;
    lVar10 = 0;
    goto LAB_109386628;
  }
  auStack_60[0] = *param_2;
  FUN_109381958(&uStack_58);
  if ((param_3 & 1) == 0) {
    plVar3 = plVar2 + 0xc;
    FUN_109386478(plVar3,(ulong)(plVar2[2] - plVar2[1]) >> 3,5,auStack_60);
    if (((ulong)plVar3 & 1) != 0) goto LAB_109386524;
LAB_109386614:
    uVar9 = 0;
    lVar10 = 0;
  }
  else {
LAB_109386524:
    uVar9 = uStack_58;
    uVar1 = auStack_60[0];
    if (plVar2[1] == plVar2[2]) {
      auStack_60[0] = 0;
      uStack_58 = 0;
      puVar8 = (undefined1 *)*plVar2;
      uStack_70 = *puVar8;
      *puVar8 = uVar1;
      uStack_68 = *(undefined8 *)(puVar8 + 8);
      *(undefined8 *)(puVar8 + 8) = uVar9;
      FUN_109380ffc(&uStack_68);
      lVar10 = *plVar2;
    }
    else {
      pcVar5 = *(char **)(plVar2[2] + -8);
      if (pcVar5 == (char *)0x0) goto LAB_109386614;
      if (*pcVar5 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar5 + 8),auStack_60);
        lVar10 = *(long *)(*(long *)(*(long *)(plVar2[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar6 = plVar2[8] - 1;
        uVar7 = *(ulong *)(plVar2[7] + (uVar6 >> 6) * 8);
        plVar2[8] = uVar6;
        if ((uVar7 >> (uVar6 & 0x3f) & 1) == 0) goto LAB_109386614;
        auStack_60[0] = 0;
        uStack_58 = 0;
        puVar8 = (undefined1 *)plVar2[10];
        *puVar8 = uVar1;
        uStack_78 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uVar9;
        FUN_109380ffc(&uStack_78);
        lVar10 = plVar2[10];
      }
    }
    uVar9 = 1;
  }
  FUN_109380ffc(&uStack_58,auStack_60[0]);
LAB_109386628:
  auVar12._8_8_ = lVar10;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



/* Entry: 1093864b8; end: 10938665b;  */

undefined1  [16] FUN_1093864b8(long *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_109386628;
  }
  auStack_40[0] = *param_2;
  FUN_109381958(&uStack_38);
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_109386524;
LAB_109386614:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_109386524:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_109386614;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_109386614;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_109386628:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 10938665c; end: 10938671f;  */

undefined1  [16] FUN_10938665c(ulong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong *puVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_a8 [24];
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    puVar12 = puVar1 + 1;
    *puVar1 = *param_2;
    puVar4 = param_1;
  }
  else {
    lVar11 = (long)puVar1 - *param_1;
    uVar10 = (lVar11 >> 3) + 1;
    if (uVar10 >> 0x3d != 0) {
      FUN_109386720();
      plVar5 = (long *)&UNK_10f567814;
      func_0x000104c4f6cc();
      if ((ulong)param_2 >> 0x3d == 0) {
        lVar11 = (long)param_2 << 3;
        __Znwm(lVar11);
        auVar14._8_8_ = param_2;
        auVar14._0_8_ = lVar11;
        return auVar14;
      }
      func_0x000104c4f740();
      pcVar6 = (char *)*plVar5;
      if (*pcVar6 == '\x02') {
        pcVar6 = (char *)plVar5[2];
      }
      else if (*pcVar6 == '\x01') {
        pcVar6 = (char *)(plVar5[1] + 0x38);
      }
      else if (plVar5[3] != 0) {
        uVar7 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_a8,&UNK_10f567425);
        FUN_10937951c(uVar7,0xd6,auStack_a8);
        ___cxa_throw(uVar7,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x109386818);
        (*pcVar2)();
      }
      auVar15._8_8_ = param_2;
      auVar15._0_8_ = pcVar6;
      return auVar15;
    }
    uVar8 = (long)param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 2;
    if (uVar9 <= uVar10) {
      uVar9 = uVar10;
    }
    if (0x7ffffffffffffff7 < uVar8) {
      uVar9 = 0x1fffffffffffffff;
    }
    puVar3 = param_1;
    FUN_109386734();
    puVar1 = (undefined8 *)((long)puVar3 + lVar11);
    puVar12 = puVar1 + 1;
    *puVar1 = *param_2;
    param_2 = (undefined8 *)*param_1;
    uVar10 = (long)puVar1 - (param_1[1] - (long)param_2);
    _memcpy(uVar10);
    puVar4 = (ulong *)*param_1;
    *param_1 = uVar10;
    param_1[1] = (ulong)puVar12;
    param_1[2] = (ulong)(puVar3 + uVar9);
    if (puVar4 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (ulong)puVar12;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Entry: 109386720; end: 109386733;  */

undefined1  [16] FUN_109386720(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_78 [24];
  
  plVar2 = (long *)&UNK_10f567814;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    lVar3 = param_2 << 3;
    __Znwm(lVar3);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar3;
    return auVar6;
  }
  func_0x000104c4f740();
  pcVar4 = (char *)*plVar2;
  if (*pcVar4 == '\x02') {
    pcVar4 = (char *)plVar2[2];
  }
  else if (*pcVar4 == '\x01') {
    pcVar4 = (char *)(plVar2[1] + 0x38);
  }
  else if (plVar2[3] != 0) {
    uVar5 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_78,&UNK_10f567425);
    FUN_10937951c(uVar5,0xd6,auStack_78);
    ___cxa_throw(uVar5,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109386818);
    (*pcVar1)();
  }
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = pcVar4;
  return auVar7;
}



/* Entry: 109386734; end: 109386767;  */

undefined1  [16] FUN_109386734(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_68 [24];
  
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000104c4f740();
  pcVar3 = (char *)*param_1;
  if (*pcVar3 == '\x02') {
    pcVar3 = (char *)param_1[2];
  }
  else if (*pcVar3 == '\x01') {
    pcVar3 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar4 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_68,&UNK_10f567425);
    FUN_10937951c(uVar4,0xd6,auStack_68);
    ___cxa_throw(uVar4,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109386818);
    (*pcVar1)();
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = pcVar3;
  return auVar6;
}



/* Entry: 109386768; end: 10938684f;  */

char * FUN_109386768(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
  else if (param_1[3] != 0) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_48,&UNK_10f567425);
    FUN_10937951c(uVar3,0xd6,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109386818);
    (*pcVar1)();
  }
  return pcVar2;
}



/* Entry: 109386850; end: 109386b2f;  */

void FUN_109386850(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if ((byte *)*param_3 != param_2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_58,&UNK_10f568492);
    FUN_10937951c(uVar3,0xca,auStack_58);
    ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
LAB_109386ab4:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x109386ab8);
    (*pcVar2)();
  }
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  bVar1 = *param_2;
  if (bVar1 == 2) {
    lVar9 = *(long *)(param_2 + 8);
    lVar7 = param_3[2];
    puVar5 = (undefined1 *)(lVar7 + 0x10);
    FUN_109386c10(auStack_58,puVar5,*(undefined8 *)(lVar9 + 8),lVar7);
    if (*(undefined1 **)(lVar9 + 8) != puVar5) {
      puVar8 = *(undefined1 **)(lVar9 + 8) + -8;
      do {
        puVar10 = puVar8 + -8;
        FUN_109380ffc(puVar8,*puVar10);
        puVar8 = puVar8 + -0x10;
      } while (puVar10 != puVar5);
    }
    *(undefined1 **)(lVar9 + 8) = puVar5;
    param_1[2] = lVar7;
    return;
  }
  if (bVar1 == 1) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    lVar7 = param_3[1];
    FUN_109386ba0(uVar3,lVar7);
    func_0x0001093817f8(lVar7 + 0x20);
    __ZdlPv(lVar7);
    param_1[1] = uVar3;
    return;
  }
  param_1[3] = 1;
  uVar6 = (uint)bVar1;
  if (5 < uVar6 - 3) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_2);
    func_0x000107c31940(auStack_70,param_2);
    FUN_10928a5e0(auStack_58,&UNK_10f5684cc,auStack_70);
    FUN_10937bbbc(uVar3,0x133,auStack_58);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
    goto LAB_109386ab4;
  }
  if (param_3[3] != 0) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    func_0x000107c31940(auStack_58,&UNK_10f5684b6);
    FUN_10937951c(uVar3,0xcd,auStack_58);
    ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
    goto LAB_109386ab4;
  }
  if (uVar6 == 8) {
    plVar4 = *(long **)(param_2 + 8);
    lVar7 = *plVar4;
    if (lVar7 != 0) {
      plVar4[1] = lVar7;
LAB_109386980:
      __ZdlPv(lVar7);
      plVar4 = *(long **)(param_2 + 8);
    }
  }
  else {
    if (uVar6 != 3) goto LAB_109386994;
    plVar4 = *(long **)(param_2 + 8);
    if (*(char *)((long)plVar4 + 0x17) < '\0') {
      lVar7 = *plVar4;
      goto LAB_109386980;
    }
  }
  __ZdlPv(plVar4);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
LAB_109386994:
  *param_2 = 0;
  return;
}



/* Entry: 109386b30; end: 109386b9f;  */

void FUN_109386b30(undefined8 *param_1)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  if (*(char *)*param_1 == '\x02') {
    param_1[2] = param_1[2] + 0x10;
    return;
  }
  if (*(char *)*param_1 != '\x01') {
    param_1[3] = param_1[3] + 1;
    return;
  }
  plVar4 = (long *)((long *)param_1[1])[1];
  plVar3 = (long *)param_1[1];
  if (plVar4 == (long *)0x0) {
    do {
      plVar2 = (long *)plVar3[2];
      bVar1 = (long *)*plVar2 != plVar3;
      plVar3 = plVar2;
    } while (bVar1);
  }
  else {
    do {
      plVar2 = plVar4;
      plVar4 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  param_1[1] = plVar2;
  return;
}



/* Entry: 109386ba0; end: 109386c0f;  */

long * FUN_109386ba0(long *param_1,long *param_2)

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
  func_0x000104c611f0(param_1[1]);
  return plVar4;
}



/* Entry: 109386c10; end: 109386c9b;  */

undefined1  [16]
FUN_109386c10(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  
  puVar2 = param_2;
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    uVar1 = *param_2;
    uVar3 = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *param_4 = uVar1;
    uStack_38 = *(undefined8 *)(param_4 + 8);
    *(undefined8 *)(param_4 + 8) = uVar3;
    FUN_109380ffc(&uStack_38);
    param_4 = param_4 + 0x10;
    puVar2 = param_3;
  }
  auVar4._8_8_ = param_4;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 109386c9c; end: 109386d2f;  */

undefined1  [16]
FUN_109386c9c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_109381fc0(param_1,&uStack_48,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_109386d30(alStack_60,param_1,param_3,param_4,param_5);
    FUN_109381f6c(param_1,uStack_48,plVar2,alStack_60[0]);
    lVar3 = alStack_60[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 109386d30; end: 109386dc3;  */

void FUN_109386d30(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x48;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_4 = (undefined8 *)*param_4;
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    func_0x000107c3192c(lVar1 + 0x20,*param_4,param_4[1]);
  }
  else {
    uVar3 = param_4[1];
    uVar2 = *param_4;
    *(undefined8 *)(lVar1 + 0x30) = param_4[2];
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  *(undefined1 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 109386dc4; end: 109386e43;  */

undefined8 * FUN_109386dc4(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110af44f8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt13runtime_errorC1ERKS_(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_110af4868;
  return param_1;
}



/* Entry: 109386e44; end: 109386fe3;  */

undefined1  [16] FUN_109386e44(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_109386fb0;
  }
  uStack_38 = *param_2;
  auStack_40[0] = 7;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_109386eac;
LAB_109386f9c:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_109386eac:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_109386f9c;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_109386f9c;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_109386fb0:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 109386fe4; end: 109387183;  */

undefined1  [16] FUN_109386fe4(long *param_1,byte *param_2,ulong param_3)

{
  undefined1 uVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  ulong uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar8 = 0;
    lVar9 = 0;
    goto LAB_109387150;
  }
  uStack_38 = (ulong)*param_2;
  auStack_40[0] = 4;
  if ((param_3 & 1) == 0) {
    plVar3 = param_1 + 0xc;
    FUN_109386478(plVar3,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar3 & 1) != 0) goto LAB_10938704c;
LAB_10938713c:
    uVar8 = 0;
    lVar9 = 0;
  }
  else {
LAB_10938704c:
    uVar2 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar7 = (undefined1 *)*param_1;
      uStack_50 = *puVar7;
      *puVar7 = uVar1;
      uStack_48 = *(undefined8 *)(puVar7 + 8);
      *(ulong *)(puVar7 + 8) = uVar2;
      FUN_109380ffc(&uStack_48);
      lVar9 = *param_1;
    }
    else {
      pcVar4 = *(char **)(param_1[2] + -8);
      if (pcVar4 == (char *)0x0) goto LAB_10938713c;
      if (*pcVar4 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar4 + 8),auStack_40);
        lVar9 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar5 = param_1[8] - 1;
        uVar6 = *(ulong *)(param_1[7] + (uVar5 >> 6) * 8);
        param_1[8] = uVar5;
        if ((uVar6 >> (uVar5 & 0x3f) & 1) == 0) goto LAB_10938713c;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar7 = (undefined1 *)param_1[10];
        *puVar7 = uVar1;
        uStack_58 = *(undefined8 *)(puVar7 + 8);
        *(ulong *)(puVar7 + 8) = uVar2;
        FUN_109380ffc(&uStack_58);
        lVar9 = param_1[10];
      }
    }
    uVar8 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_109387150:
  auVar10._8_8_ = lVar9;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 109387184; end: 10938731b;  */

undefined1  [16] FUN_109387184(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_1093872e8;
  }
  auStack_40[0] = 0;
  uStack_38 = 0;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_1093871e4;
LAB_1093872d4:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_1093871e4:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_1093872d4;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_1093872d4;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_1093872e8:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 10938731c; end: 1093874bb;  */

undefined1  [16] FUN_10938731c(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_109387488;
  }
  uStack_38 = *param_2;
  auStack_40[0] = 5;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_109387384;
LAB_109387474:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_109387384:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_109387474;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_109387474;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_109387488:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 1093874bc; end: 109387663;  */

undefined1  [16] FUN_1093874bc(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_109387630;
  }
  auStack_40[0] = 3;
  FUN_10938229c();
  uStack_38 = param_2;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_10938752c;
LAB_10938761c:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_10938752c:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_10938761c;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_10938761c;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_109387630:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 109387664; end: 109387803;  */

undefined1  [16] FUN_109387664(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  if ((*(ulong *)(param_1[4] + (param_1[5] - 1U >> 6) * 8) >> (param_1[5] - 1U & 0x3f) & 1) == 0) {
    uVar7 = 0;
    lVar8 = 0;
    goto LAB_1093877d0;
  }
  uStack_38 = *param_2;
  auStack_40[0] = 6;
  if ((param_3 & 1) == 0) {
    plVar2 = param_1 + 0xc;
    FUN_109386478(plVar2,(ulong)(param_1[2] - param_1[1]) >> 3,5,auStack_40);
    if (((ulong)plVar2 & 1) != 0) goto LAB_1093876cc;
LAB_1093877bc:
    uVar7 = 0;
    lVar8 = 0;
  }
  else {
LAB_1093876cc:
    uVar7 = uStack_38;
    uVar1 = auStack_40[0];
    if (param_1[1] == param_1[2]) {
      auStack_40[0] = 0;
      uStack_38 = 0;
      puVar6 = (undefined1 *)*param_1;
      uStack_50 = *puVar6;
      *puVar6 = uVar1;
      uStack_48 = *(undefined8 *)(puVar6 + 8);
      *(undefined8 *)(puVar6 + 8) = uVar7;
      FUN_109380ffc(&uStack_48);
      lVar8 = *param_1;
    }
    else {
      pcVar3 = *(char **)(param_1[2] + -8);
      if (pcVar3 == (char *)0x0) goto LAB_1093877bc;
      if (*pcVar3 == '\x02') {
        FUN_1093813f8(*(undefined8 *)(pcVar3 + 8),auStack_40);
        lVar8 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
      }
      else {
        uVar4 = param_1[8] - 1;
        uVar5 = *(ulong *)(param_1[7] + (uVar4 >> 6) * 8);
        param_1[8] = uVar4;
        if ((uVar5 >> (uVar4 & 0x3f) & 1) == 0) goto LAB_1093877bc;
        auStack_40[0] = 0;
        uStack_38 = 0;
        puVar6 = (undefined1 *)param_1[10];
        *puVar6 = uVar1;
        uStack_58 = *(undefined8 *)(puVar6 + 8);
        *(undefined8 *)(puVar6 + 8) = uVar7;
        FUN_109380ffc(&uStack_58);
        lVar8 = param_1[10];
      }
    }
    uVar7 = 1;
  }
  FUN_109380ffc(&uStack_38,auStack_40[0]);
LAB_1093877d0:
  auVar9._8_8_ = lVar8;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 109387804; end: 10938788f;  */

undefined8 * FUN_109387804(undefined8 *param_1,long param_2)

{
  *param_1 = &PTR_FUN_110af44f8;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  __ZNSt13runtime_errorC1ERKS_(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_110af48a8;
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 109387890; end: 109387a0f;  */

/* WARNING: Removing unreachable block (ram,0x000109387974) */

void FUN_109387890(undefined8 *param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puStack_90;
  ulong uStack_88;
  byte bStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  __ZNSt3__19to_stringEm(auStack_78,*(long *)(param_2 + 0x10) + 1);
  puVar2 = auStack_78;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
            (puVar2,0,&UNK_10f56851e,9);
  uStack_58 = puVar2[1];
  uStack_60 = *puVar2;
  lStack_50 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  puVar2 = &uStack_60;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,&UNK_10f551595,9);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_30 = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  __ZNSt3__19to_stringEm(&puStack_90,*(undefined8 *)(param_2 + 8));
  ppuVar1 = (undefined1 **)puStack_90;
  if (-1 < (char)bStack_79) {
    uStack_88 = (ulong)bStack_79;
    ppuVar1 = &puStack_90;
  }
  puVar2 = &uStack_40;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar2,ppuVar1,uStack_88);
  uVar3 = *puVar2;
  param_1[1] = puVar2[1];
  *param_1 = uVar3;
  param_1[2] = puVar2[2];
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  if ((char)bStack_79 < '\0') {
    __ZdlPv(puStack_90);
  }
  if (lStack_50 < 0) {
    __ZdlPv(uStack_60);
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  return;
}



/* Entry: 109387a10; end: 109387a33;  */

undefined * FUN_109387a10(uint param_1)

{
  if (param_1 < 0x11) {
    return (&PTR_DAT_110af48c0)[param_1];
  }
  return &UNK_10f5685fb;
}



/* Entry: 109387a34; end: 109387b03;  */

long FUN_109387a34(long param_1)

{
  long *plVar1;
  long lVar2;
  
  FUN_109380ffc(param_1 + 0x90,*(undefined1 *)(param_1 + 0x88));
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 == (long *)(param_1 + 0x60)) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109387a7c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109387a7c:
  if (*(long *)(param_1 + 0x38) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 8);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109387b04; end: 109387bc7;  */

long * FUN_109387b04(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
    plVar5 = param_1;
  }
  else {
    lVar12 = (long)puVar2 - *param_1;
    uVar1 = (lVar12 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109386720();
      if (param_1[1] == param_1[2]) {
        uStack_70 = *(undefined1 *)param_2;
        FUN_109381958(&uStack_68);
        puVar8 = (undefined1 *)*param_1;
        uVar3 = *puVar8;
        *puVar8 = uStack_70;
        uVar10 = *(undefined8 *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = uStack_68;
        uStack_70 = uVar3;
        uStack_68 = uVar10;
        FUN_109380ffc(&uStack_68);
        param_1 = (long *)*param_1;
      }
      else {
        pcVar7 = *(char **)(param_1[2] + -8);
        if (*pcVar7 == '\x02') {
          puVar11 = *(undefined1 **)(pcVar7 + 8);
          puVar8 = *(undefined1 **)(puVar11 + 8);
          if (puVar8 < *(undefined1 **)(puVar11 + 0x10)) {
            *puVar8 = *(undefined1 *)param_2;
            FUN_109381958(puVar8 + 8);
            puVar8 = puVar8 + 0x10;
            *(undefined1 **)(puVar11 + 8) = puVar8;
          }
          else {
            puVar8 = puVar11;
            FUN_109387cf4();
          }
          *(undefined1 **)(puVar11 + 8) = puVar8;
          param_1 = (long *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
        }
        else {
          uVar3 = *(undefined1 *)param_2;
          FUN_109381958(&uStack_78);
          puVar8 = (undefined1 *)param_1[4];
          *puVar8 = uVar3;
          uVar10 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 8) = uStack_78;
          uStack_78 = uVar10;
          FUN_109380ffc(&uStack_78);
          param_1 = (long *)param_1[4];
        }
      }
      return param_1;
    }
    uVar6 = param_1[2] - *param_1;
    uVar9 = (long)uVar6 >> 2;
    if (uVar9 <= uVar1) {
      uVar9 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar9 = 0x1fffffffffffffff;
    }
    plVar4 = param_1;
    FUN_109386734();
    puVar2 = (undefined8 *)((long)plVar4 + lVar12);
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
    lVar12 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar12);
    plVar5 = (long *)*param_1;
    *param_1 = lVar12;
    param_1[1] = (long)puVar13;
    param_1[2] = (long)(plVar4 + uVar9);
    if (plVar5 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar13;
  return plVar5;
}



/* Entry: 109387bc8; end: 109387cf3;  */

long FUN_109387bc8(long *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined8 uStack_38;
  
  if (param_1[1] == param_1[2]) {
    uStack_40 = *param_2;
    FUN_109381958(&uStack_38);
    puVar4 = (undefined1 *)*param_1;
    uVar1 = *puVar4;
    *puVar4 = uStack_40;
    uVar5 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uStack_38;
    uStack_40 = uVar1;
    uStack_38 = uVar5;
    FUN_109380ffc(&uStack_38);
    lVar2 = *param_1;
  }
  else {
    pcVar3 = *(char **)(param_1[2] + -8);
    if (*pcVar3 == '\x02') {
      puVar6 = *(undefined1 **)(pcVar3 + 8);
      puVar4 = *(undefined1 **)(puVar6 + 8);
      if (puVar4 < *(undefined1 **)(puVar6 + 0x10)) {
        *puVar4 = *param_2;
        FUN_109381958(puVar4 + 8);
        puVar4 = puVar4 + 0x10;
        *(undefined1 **)(puVar6 + 8) = puVar4;
      }
      else {
        puVar4 = puVar6;
        FUN_109387cf4();
      }
      *(undefined1 **)(puVar6 + 8) = puVar4;
      lVar2 = *(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10;
    }
    else {
      uVar1 = *param_2;
      FUN_109381958(&uStack_48);
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = uVar1;
      uVar5 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uStack_48;
      uStack_48 = uVar5;
      FUN_109380ffc(&uStack_48);
      lVar2 = param_1[4];
    }
  }
  return lVar2;
}



/* Entry: 109387cf4; end: 109387dff;  */

undefined1 * FUN_109387cf4(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar9 = param_1[1] - *param_1;
  uVar1 = (lVar9 >> 4) + 1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    plStack_38 = param_1;
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10938153c();
    }
    puVar4 = (undefined1 *)((long)plVar3 + lVar9);
    plStack_40 = plVar3 + uVar7 * 2;
    *puVar4 = *(undefined1 *)param_2;
    plStack_58 = plVar3;
    plStack_50 = (long *)puVar4;
    plStack_48 = (long *)puVar4;
    FUN_109381958(puVar4 + 8);
    plStack_48 = (long *)(puVar4 + 0x10);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    func_0x000109381570(param_1,lVar9,lVar2,puVar4 + (lVar9 - lVar2));
    plVar3 = plStack_48;
    plStack_58 = (long *)*param_1;
    *param_1 = (long)(puVar4 + (lVar9 - lVar2));
    lVar9 = param_1[2];
    param_1[2] = (long)plStack_40;
    param_1[1] = (long)plStack_48;
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    plStack_40 = (long *)lVar9;
    FUN_109381644(&plStack_58);
    return (undefined1 *)plVar3;
  }
  FUN_109381528();
  FUN_109381644(&plStack_58);
  __Unwind_Resume();
  if (param_1[1] == param_1[2]) {
    uVar10 = *param_2;
    puVar4 = (undefined1 *)*param_1;
    uStack_a0 = *puVar4;
    *puVar4 = 7;
    uStack_98 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar4 + 8) = uVar10;
    FUN_109380ffc(&uStack_98);
    puVar4 = (undefined1 *)*param_1;
  }
  else {
    pcVar6 = *(char **)(param_1[2] + -8);
    if (*pcVar6 == '\x02') {
      puVar8 = *(undefined1 **)(pcVar6 + 8);
      puVar4 = *(undefined1 **)(puVar8 + 8);
      if (puVar4 < *(undefined1 **)(puVar8 + 0x10)) {
        *(undefined8 *)(puVar4 + 8) = 0;
        uVar10 = *param_2;
        *puVar4 = 7;
        *(undefined8 *)(puVar4 + 8) = uVar10;
        puVar4 = puVar4 + 0x10;
      }
      else {
        puVar4 = puVar8;
        FUN_109387efc();
      }
      *(undefined1 **)(puVar8 + 8) = puVar4;
      puVar4 = (undefined1 *)(*(long *)(*(long *)(*(long *)(param_1[2] + -8) + 8) + 8) + -0x10);
    }
    else {
      uVar10 = *param_2;
      puVar4 = (undefined1 *)param_1[4];
      *puVar4 = 7;
      uStack_a8 = *(undefined8 *)(puVar4 + 8);
      *(undefined8 *)(puVar4 + 8) = uVar10;
      FUN_109380ffc(&uStack_a8);
      puVar4 = (undefined1 *)param_1[4];
    }
  }
  return puVar4;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 006ce2d0; end: 006ce3bb;  */

undefined8 FUN_006ce2d0(int *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 < 0) {
    if (param_2 == 0) {
      return 0;
    }
    lVar2 = param_2;
    _strlen();
    param_3 = (int)lVar2;
  }
  lVar2 = *(long *)(param_1 + 2);
  if (param_3 < *param_1) {
    if (lVar2 != 0) goto LAB_006ce358;
LAB_006ce33c:
    lVar1 = (long)(param_3 + 1);
    FUN_00701e90();
    lVar3 = 0;
  }
  else {
    if (lVar2 == 0) goto LAB_006ce33c;
    lVar1 = lVar2;
    FUN_00701f14(lVar2,(long)(param_3 + 1));
    lVar3 = lVar2;
  }
  *(long *)(param_1 + 2) = lVar1;
  lVar2 = lVar1;
  if (lVar1 == 0) {
    FUN_006ce55c(0xc,0,0x41);
    *(long *)(param_1 + 2) = lVar3;
    return 0;
  }
LAB_006ce358:
  *param_1 = param_3;
  if (param_2 != 0) {
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,(long)param_3);
      lVar2 = *(long *)(param_1 + 2);
    }
    *(undefined1 *)(lVar2 + param_3) = 0;
  }
  return 1;
}



/* Entry: 006ce3bc; end: 006ce407;  */

long FUN_006ce3bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_006ce408();
    if (lVar1 == 0) {
      return 0;
    }
    lVar2 = lVar1;
    FUN_006ce280(lVar1,param_1);
    if ((int)lVar2 != 0) {
      return lVar1;
    }
    FUN_006ce410(lVar1);
  }
  return 0;
}



/* Entry: 006ce408; end: 006ce40f;  */

dword * FUN_006ce408(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    FUN_006ce55c(0xc,0,0x41);
  }
  else {
    *pdVar1 = 0;
    pdVar1[1] = 4;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
  }
  return pdVar1;
}



/* Entry: 006ce410; end: 006ce48b;  */

/* WARNING: Possible PIC construction at 0x006ce428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006ce42c) */

void FUN_006ce410(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 8) + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 006ce48c; end: 006ce55b;  */

void FUN_006ce48c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uStack_42;
  
  iVar3 = *param_2;
  uStack_42 = 0;
  iVar2 = *param_1;
  if (param_1[1] == 3) {
    piVar1 = param_1;
    FUN_006cb1ec(param_1,(long)&uStack_42 + 1);
    iVar2 = (int)piVar1;
  }
  if (param_2[1] == 3) {
    piVar1 = param_2;
    FUN_006cb1ec(param_2,&uStack_42);
    iVar3 = (int)piVar1;
  }
  if ((iVar3 <= iVar2) && (iVar2 <= iVar3)) {
    if ((uStack_42._1_1_ <= (byte)uStack_42) &&
       (((byte)uStack_42 <= uStack_42._1_1_ && (iVar2 != 0)))) {
      _memcmp(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2),(long)iVar2);
    }
  }
  return;
}



/* Entry: 006ce55c; end: 006ce59f;  */

void FUN_006ce55c(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006ce5a0; end: 006ce6db;  */

uint FUN_006ce5a0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  if (param_2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar2 = param_1;
    if ((*(byte *)((long)param_2 + 5) & 1) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
      func_0x006d199c(param_1,&UNK_00916164,1);
      if ((int)uVar2 != 1) {
        return 0xffffffff;
      }
    }
    iVar1 = (int)uVar2;
    iVar3 = *param_2;
    if (iVar3 == 0) {
      FUN_006ce6dc();
      uVar4 = uVar4 | 2;
      if (iVar1 != 2) {
        uVar4 = 0xffffffff;
      }
    }
    else {
      for (uVar5 = 0; (long)uVar5 < (long)iVar3; uVar5 = uVar5 + 1) {
        if ((uVar5 != 0) && ((int)(uVar5 / 0x23) * 0x23 == (int)uVar5)) {
          uVar2 = param_1;
          func_0x006d199c(param_1,&UNK_00916169,2);
          if ((int)uVar2 != 2) {
            return 0xffffffff;
          }
          uVar4 = uVar4 + 2;
        }
        FUN_006ce6dc();
        if ((int)uVar2 != 2) {
          return 0xffffffff;
        }
        uVar4 = uVar4 + 2;
        iVar3 = *param_2;
      }
    }
  }
  return uVar4;
}



/* Entry: 006ce6dc; end: 006ce6e7;  */

/* WARNING: Removing unreachable block (ram,0x006d1a0c) */

void FUN_006ce6dc(void)

{
  long *plVar1;
  long *unaff_x20;
  
  if (((unaff_x20 == (long *)0x0) || (*unaff_x20 == 0)) || (*(long *)(*unaff_x20 + 0x10) == 0)) {
    func_0x006d1db8();
  }
  else {
    if ((int)unaff_x20[1] != 0) {
      plVar1 = unaff_x20;
      func_0x006d1de8();
      if ((int)plVar1 < 1) {
        return;
      }
      unaff_x20[7] = unaff_x20[7] + ((ulong)plVar1 & 0xffffffff);
      return;
    }
    func_0x006d1dc8();
  }
  func_0x006d1dac();
  return;
}



/* Entry: 006ce6e8; end: 006ce747;  */

undefined8 FUN_006ce6e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_48 = 0;
  puVar1 = &uStack_48;
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  uStack_40 = 0;
  puVar2 = puVar1;
  FUN_006ce748();
  if ((int)puVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  return uVar3;
}



/* Entry: 006ce748; end: 006ce767;  */

void FUN_006ce748(void)

{
  FUN_006ce768();
  return;
}



/* Entry: 006ce768; end: 006cede3;  */

void FUN_006ce768(dword *param_1,long *param_2,char *param_3,char *param_4,ulong param_5,
                 uint param_6,int param_7,undefined1 *param_8,uint param_9)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  dword *pdVar4;
  undefined1 **ppuVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  long lVar14;
  code *extraout_x8;
  ulong uVar15;
  undefined1 **ppuVar16;
  byte *pbVar17;
  long *plVar18;
  dword *pdVar19;
  code *pcVar20;
  dword *pdVar21;
  uint uVar22;
  char *pcVar23;
  undefined8 unaff_x30;
  byte *pbStack_148;
  undefined4 uStack_140;
  char cStack_139;
  undefined1 *puStack_138;
  uint uStack_12c;
  undefined8 uStack_128;
  char *pcStack_120;
  long in_stack_fffffffffffffee8;
  code *pcStack_90;
  uint uStack_78;
  char cStack_71;
  char *pcStack_70;
  char *pcStack_68;
  
  pcVar23 = (char *)(ulong)param_9;
  pcStack_68 = param_3;
  if (param_1 == (dword *)0x0) goto LAB_006ce894;
  if (0x3fffffff < (long)param_3) {
    pcStack_68 = (char *)0x3fffffff;
  }
  pcVar2 = pcStack_68;
  if (0x1d < (int)param_9) {
    func_0x006cf654();
    goto code_r0x006ce7d4;
  }
  pdVar19 = (dword *)0x0;
  iVar11 = (int)param_5;
  switch(*param_4) {
  case '\0':
    puVar10 = *(uint **)(param_4 + 0x10);
    if (puVar10 != (uint *)0x0) {
      if ((iVar11 == -1) && (param_7 == 0)) {
        uVar15 = (ulong)(param_9 + 1);
        func_0x006cf688();
        uVar3 = 0;
        func_0x006cf6c4();
        if (pdVar19 == (dword *)0x0) {
          return;
        }
        pcStack_120 = (char *)*param_2;
        if ((*puVar10 >> 4 & 1) != 0) {
          uStack_140 = CONCAT31(uStack_140._1_3_,(char)uVar3);
          iVar11 = (int)&stack0xfffffffffffffee8;
          puStack_138 = param_8;
          func_0x006cf6f8();
          func_0x006cf2a0();
          pcVar23 = pcStack_120;
          if (iVar11 == -1) {
            return;
          }
          if (((iVar11 != 0) && (uStack_128._7_1_ != '\0')) &&
             (FUN_006cf444(pdVar19,&pcStack_120,in_stack_fffffffffffffee8,puVar10,0,param_8,uVar15),
             (int)pdVar19 != 0)) {
            if (pcVar23 + (in_stack_fffffffffffffee8 - (long)pcStack_120) != (char *)0x0) {
              func_0x006cf654();
              func_0x006cf648();
              func_0x006cf698();
              FUN_006d0498();
              return;
            }
            *param_2 = (long)pcStack_120;
            return;
          }
          func_0x006cf654();
          func_0x006cf648();
          return;
        }
        uVar12 = *puVar10;
        uVar22 = uVar12 & 0xc0;
        pcStack_120 = (char *)*param_2;
        if ((uVar12 & 6) == 0) {
          if ((uVar12 >> 3 & 1) == 0) {
            uVar22 = uVar12 & 0x400;
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = puVar10[2];
          }
          uStack_140 = (int)uVar15;
          FUN_006ce768(pdVar19,&pcStack_120,param_3,*(undefined8 *)(puVar10 + 8),uVar12,uVar22,uVar3
                       ,param_8);
          if ((int)pdVar19 == -1) {
            return;
          }
          if ((int)pdVar19 != 0) goto LAB_006cf5fc;
          func_0x006cf654();
        }
        else {
          uStack_140 = CONCAT31(uStack_140._1_3_,(char)uVar3);
          puVar7 = &stack0xfffffffffffffee8;
          puStack_138 = param_8;
          func_0x006cf6f8();
          func_0x006cf2a0();
          if ((int)puVar7 == -1) {
            return;
          }
          if ((int)puVar7 == 0) {
            func_0x006cf654();
            func_0x006cf648();
            return;
          }
          plVar18 = *(long **)pdVar19;
          if (plVar18 == (long *)0x0) {
            FUN_00705ed8();
            *(undefined1 **)pdVar19 = puVar7;
          }
          else {
            while (*plVar18 != 0) {
              plVar6 = plVar18;
              func_0x00706270();
              uStack_128 = (byte *)plVar6;
              func_0x006cf6e0();
            }
            puVar7 = *(undefined1 **)pdVar19;
          }
          if (puVar7 != (undefined1 *)0x0) {
            for (; pcVar23 = pcStack_120, 0 < (long)param_3;
                param_3 = pcVar23 + ((long)param_3 - (long)pcVar2)) {
              if (((param_3 != (char *)0x1) && (*pcStack_120 == '\0')) && (pcStack_120[1] == '\0'))
              {
                pcStack_120 = pcStack_120 + 2;
LAB_006cf61c:
                func_0x006cf654();
                goto LAB_006cf620;
              }
              uStack_128 = (byte *)0x0;
              puVar8 = &uStack_128;
              uStack_140 = (int)uVar15;
              FUN_006ce768(puVar8,&pcStack_120,param_3,*(undefined8 *)(puVar10 + 8),0xffffffff,0,0,
                           param_8);
              pcVar2 = pcStack_120;
              if ((int)puVar8 == 0) goto LAB_006cf61c;
              lVar13 = *(long *)pdVar19;
              func_0x00706268(lVar13,uStack_128);
              if (lVar13 == 0) {
                func_0x006cf6e0();
                goto LAB_006cf61c;
              }
            }
LAB_006cf5fc:
            *param_2 = (long)pcStack_120;
            return;
          }
          func_0x006cf654();
        }
LAB_006cf620:
        func_0x006cf648();
        func_0x006cf698();
        FUN_006d0498();
        return;
      }
      func_0x006cf654();
      break;
    }
    func_0x006cf688();
    func_0x006cf6c4(unaff_x30);
    uVar22 = (uint)param_5;
    pcStack_120 = pcVar23;
    if (*param_4 == '\x05') {
      uStack_12c = uVar22;
      if (uVar22 != 0xfffffffc) goto LAB_006cefac;
LAB_006cef94:
      if (param_7 != 0) {
        func_0x006cf654();
        goto LAB_006ceff4;
      }
      pbStack_148 = (byte *)*param_2;
      iVar11 = 0;
      func_0x006cf6ec(0,&uStack_12c,&uStack_128,0,&pbStack_148,param_3);
      if (iVar11 != 0) {
        if ((char)uStack_128 == '\0') {
          param_5 = (ulong)uStack_12c;
        }
        else {
          param_5 = 0xfffffffd;
          uStack_12c = 0xfffffffd;
        }
        goto LAB_006cefac;
      }
LAB_006cefec:
      func_0x006cf654();
LAB_006ceff4:
      func_0x006cf648();
      return;
    }
    uStack_12c = *(uint *)(param_4 + 8);
    param_5 = (ulong)uStack_12c;
    if (uStack_12c == 0xfffffffc) {
      if (-1 < (int)uVar22) {
        func_0x006cf654();
        goto LAB_006ceff4;
      }
      goto LAB_006cef94;
    }
LAB_006cefac:
    uVar22 = (uint)param_5;
    pbStack_148 = (byte *)*param_2;
    ppuVar5 = &puStack_138;
    func_0x006cf6f8();
    func_0x006cf2a0();
    if ((int)ppuVar5 == -1) {
      return;
    }
    if ((int)ppuVar5 == 0) goto LAB_006cefec;
    if (uVar22 - 0x10 < 2) {
      if (cStack_139 == '\0') {
        func_0x006cf654();
        goto LAB_006ceff4;
      }
LAB_006cf090:
      pbVar17 = (byte *)*param_2;
      puVar7 = puStack_138 + ((long)pbStack_148 - *param_2);
    }
    else {
      if (uVar22 == 0xfffffffd) {
        if (param_8 != (undefined1 *)0x0) {
          *param_8 = 0;
        }
        goto LAB_006cf090;
      }
      pbVar17 = pbStack_148;
      puVar7 = puStack_138;
      if (cStack_139 != '\0') {
        func_0x006cf654();
        goto LAB_006ceff4;
      }
    }
    pbStack_148 = pbStack_148 + (long)puStack_138;
    uStack_128 = pbVar17;
    if (*(long *)(param_4 + 8) == -4) {
      ppuVar16 = *(undefined1 ***)pdVar19;
      if (*(undefined1 ***)pdVar19 == (undefined1 **)0x0) {
        func_0x006d0ac4();
        ppuVar16 = ppuVar5;
        if (ppuVar5 == (undefined1 **)0x0) {
          pdVar21 = (dword *)0x0;
          goto LAB_006cf28c;
        }
        *(undefined1 ***)pdVar19 = ppuVar5;
      }
      if (uVar22 != *(uint *)ppuVar16) {
        ppuVar5 = ppuVar16;
        func_0x006cd77c(ppuVar16,param_5,0);
      }
      pdVar4 = (dword *)(ppuVar16 + 1);
      pdVar21 = pdVar19;
    }
    else {
      ppuVar16 = (undefined1 **)0x0;
      pdVar21 = (dword *)0x0;
      pdVar4 = pdVar19;
    }
    switch(uVar22) {
    case 1:
      if ((int)puVar7 == 1) {
        *pdVar4 = (uint)*pbVar17;
        goto LAB_006cf270;
      }
      func_0x006cf654();
      break;
    case 2:
    case 10:
      func_0x006cf6b4();
      FUN_006cbd60();
      if (ppuVar5 == (undefined1 **)0x0) goto LAB_006cf28c;
      *(uint *)(*(long *)pdVar4 + 4) = *(uint *)(*(long *)pdVar4 + 4) & 0x100 | uVar22;
code_r0x006cf260:
      if ((uVar22 == 5) && (ppuVar16 != (undefined1 **)0x0)) {
        ppuVar16[1] = (undefined1 *)0x0;
      }
      goto LAB_006cf270;
    case 3:
      func_0x006cf6b4();
      func_0x006cb354();
      goto joined_r0x006cf1c4;
    case 4:
    case 7:
    case 8:
    case 9:
LAB_006cf1f0:
      uVar15 = *(ulong *)pdVar4;
      if (uVar15 == 0) {
        func_0x006ce440();
        if (param_5 == 0) {
          func_0x006cf654();
          break;
        }
        *(ulong *)pdVar4 = param_5;
      }
      else {
        *(uint *)(uVar15 + 4) = uVar22;
        param_5 = uVar15;
      }
      uVar15 = param_5;
      FUN_006ce2d0(param_5,pbVar17,puVar7);
      if ((int)uVar15 == 0) {
        func_0x006cf654();
        func_0x006cf648();
        FUN_006ce410(param_5);
        *(long *)pdVar4 = 0;
        goto LAB_006cf28c;
      }
      goto LAB_006cf270;
    case 5:
      if ((int)puVar7 == 0) {
        *(long *)pdVar4 = 1;
        goto code_r0x006cf260;
      }
      func_0x006cf654();
      break;
    case 6:
      func_0x006cf6b4();
      FUN_006cc7c0();
joined_r0x006cf1c4:
      if (ppuVar5 != (undefined1 **)0x0) {
LAB_006cf270:
        *param_2 = (long)pbStack_148;
        return;
      }
      goto LAB_006cf28c;
    default:
      if (uVar22 == 0x1c) {
        if (((ulong)puVar7 & 3) == 0) goto LAB_006cf1f0;
        func_0x006cf654();
      }
      else {
        if ((uVar22 != 0x1e) || (((ulong)puVar7 & 1) == 0)) goto LAB_006cf1f0;
        func_0x006cf654();
      }
    }
    func_0x006cf648();
LAB_006cf28c:
    func_0x006d0ad0(ppuVar16);
    if (pdVar21 == (dword *)0x0) {
      return;
    }
    *(long *)pdVar21 = 0;
    return;
  case '\x01':
    pcStack_70 = (char *)*param_2;
    pdVar19 = (dword *)&pcStack_68;
    func_0x006cf6f8();
    func_0x006cf2a0();
    if ((int)pdVar19 == -1) goto LAB_006ce894;
    if ((int)pdVar19 == 0) {
code_r0x006ceb04:
      func_0x006cf654();
    }
    else {
      if ((char)uStack_78 == '\0') {
        func_0x006cf654();
        break;
      }
      if (*(long *)param_1 == 0) {
        func_0x006cf698();
        FUN_006d0644();
        if ((int)pdVar19 == 0) goto code_r0x006ceb04;
      }
      if ((*(long *)(param_4 + 0x20) == 0) ||
         (pcStack_90 = *(code **)(*(long *)(param_4 + 0x20) + 0x10), pcStack_90 == (code *)0x0)) {
        pcStack_90 = (code *)0x0;
        bVar1 = true;
code_r0x006ceb30:
        lVar9 = *(long *)(param_4 + 0x10);
        for (lVar13 = 0; lVar14 = *(long *)(param_4 + 0x18), lVar13 < lVar14; lVar13 = lVar13 + 1) {
          if (((*(byte *)(lVar9 + 1) & 3) != 0) &&
             (pdVar19 = param_1, FUN_006d0d2c(param_1,lVar9,0), pdVar19 != (dword *)0x0)) {
            pdVar4 = param_1;
            if ((*(byte *)((long)pdVar19 + 1) >> 2 & 1) == 0) {
              pdVar4 = (dword *)(*(long *)param_1 + *(long *)(pdVar19 + 4));
            }
            pdVar19 = pdVar4;
            FUN_006d0498();
          }
          lVar9 = lVar9 + 0x28;
        }
        pcVar23 = pcStack_68;
        for (uVar15 = 0; (long)uVar15 < lVar14; uVar15 = uVar15 + 1) {
          func_0x006cf6a4();
          pcVar2 = pcStack_70;
          if (pdVar19 == (dword *)0x0) goto code_r0x006ce7dc;
          pdVar4 = param_1;
          if (((uint)*(undefined8 *)pdVar19 >> 10 & 1) == 0) {
            pdVar4 = (dword *)(*(long *)param_1 + *(long *)(pdVar19 + 4));
          }
          if (pcVar23 == (char *)0x0) goto code_r0x006ced0c;
          if (((1 < (long)pcVar23) && (*pcStack_70 == '\0')) && (pcStack_70[1] == '\0')) {
            func_0x006cf654();
            goto code_r0x006ce7d4;
          }
          uVar22 = 0;
          if (uVar15 != *(long *)(param_4 + 0x18) - 1U) {
            uVar22 = (uint)*(undefined8 *)pdVar19 & 1;
          }
          pdVar21 = pdVar4;
          FUN_006cede4(pdVar4,&pcStack_70,pcVar23,pdVar19,uVar22,param_8,param_9 + 1);
          if ((int)pdVar21 == -1) {
            FUN_006d0498(pdVar4,pdVar19);
          }
          else {
            if ((int)pdVar21 == 0) goto code_r0x006ce7dc;
            pcVar23 = pcVar2 + ((long)pcVar23 - (long)pcStack_70);
            pdVar4 = pdVar21;
          }
          lVar14 = *(long *)(param_4 + 0x18);
          pdVar19 = pdVar4;
        }
        if (pcVar23 != (char *)0x0) {
          func_0x006cf654();
          break;
        }
code_r0x006ced0c:
        uVar15 = uVar15 & 0xffffffff;
code_r0x006ced14:
        pcVar23 = pcStack_70;
        if ((long)uVar15 < *(long *)(param_4 + 0x18)) {
          func_0x006cf6a4();
          if (pdVar19 != (dword *)0x0) {
            if ((*(ulong *)pdVar19 & 1) != 0) goto code_r0x006ced34;
            func_0x006cf654();
code_r0x006ceb1c:
            func_0x006cf648();
          }
          goto code_r0x006ce7dc;
        }
        FUN_006d0c1c(param_1,*param_2,(int)pcStack_70 - (int)*param_2,param_4);
        if ((int)param_1 != 0) {
          if (!bVar1) {
            iVar11 = 5;
            func_0x006cf660();
            (*pcStack_90)();
            if (iVar11 == 0) goto code_r0x006cedb4;
          }
          *param_2 = (long)pcVar23;
          goto LAB_006ce894;
        }
      }
      else {
        pdVar19 = &MACH_HEADER.cputype;
        func_0x006cf660();
        (*pcStack_90)();
        if ((int)pdVar19 != 0) {
          bVar1 = false;
          goto code_r0x006ceb30;
        }
      }
code_r0x006cedb4:
      func_0x006cf654();
    }
    break;
  case '\x02':
    if (iVar11 == -1) {
      if (*(long *)(param_4 + 0x20) == 0) {
        pcVar20 = (code *)0x0;
code_r0x006cea24:
        bVar1 = true;
      }
      else {
        pcVar20 = *(code **)(*(long *)(param_4 + 0x20) + 0x10);
        if (pcVar20 == (code *)0x0) goto code_r0x006cea24;
        pdVar19 = &MACH_HEADER.cputype;
        func_0x006cf660();
        (*pcVar20)();
        if ((int)pdVar19 == 0) goto code_r0x006cedb4;
        bVar1 = false;
      }
      iVar11 = (int)pdVar19;
      lVar13 = *(long *)param_1;
      if (lVar13 == 0) {
        func_0x006cf698();
        FUN_006d0644();
        if (iVar11 == 0) goto code_r0x006ceb04;
      }
      else {
        uVar22 = *(uint *)(lVar13 + *(long *)(param_4 + 8));
        if ((-1 < (int)uVar22) && ((long)(ulong)uVar22 < *(long *)(param_4 + 0x18))) {
          lVar9 = *(long *)(param_4 + 0x10) + (ulong)uVar22 * 0x28;
          pdVar19 = param_1;
          if ((*(byte *)(lVar9 + 1) >> 2 & 1) == 0) {
            pdVar19 = (dword *)(lVar13 + *(long *)(lVar9 + 0x10));
          }
          FUN_006d0498(pdVar19);
          *(undefined4 *)(*(long *)param_1 + *(long *)(param_4 + 8)) = 0xffffffff;
        }
      }
      pcStack_70 = (char *)*param_2;
      pdVar19 = *(dword **)(param_4 + 0x10);
      for (lVar13 = 0; lVar9 = *(long *)(param_4 + 0x18), lVar13 < lVar9; lVar13 = lVar13 + 1) {
        pdVar4 = param_1;
        if ((*(byte *)((long)pdVar19 + 1) >> 2 & 1) == 0) {
          pdVar4 = (dword *)(*(long *)param_1 + *(long *)(pdVar19 + 4));
        }
        FUN_006cede4(pdVar4,&pcStack_70,pcVar2,pdVar19,1,param_8,param_9 + 1);
        if ((int)pdVar4 != -1) {
          if ((int)pdVar4 == 0) {
            func_0x006cf654();
            goto code_r0x006ceb1c;
          }
          lVar9 = *(long *)(param_4 + 0x18);
          break;
        }
        pdVar19 = pdVar19 + 10;
      }
      if (lVar9 != lVar13) {
        *(int *)(*(long *)param_1 + *(long *)(param_4 + 8)) = (int)lVar13;
        if (!bVar1) {
          iVar11 = 5;
          func_0x006cf660(pcVar20);
          (*extraout_x8)();
          if (iVar11 == 0) goto code_r0x006cedb4;
        }
        *param_2 = (long)pcStack_70;
        goto LAB_006ce894;
      }
      if (param_7 != 0) {
        func_0x006cf698();
        FUN_006d0490();
        goto LAB_006ce894;
      }
      func_0x006cf654();
    }
    else {
code_r0x006ce998:
      func_0x006cf654();
    }
    break;
  default:
    goto LAB_006ce894;
  case '\x04':
    func_0x006cf688(*(undefined8 *)(*(long *)(param_4 + 0x20) + 0x20));
    func_0x006cf6c4();
                    /* WARNING: Could not recover jumptable at 0x006ce98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case '\x05':
    if (iVar11 != -1) goto code_r0x006ce998;
    pcStack_70 = (char *)*param_2;
    iVar11 = 0;
    func_0x006cf6ec(0,&uStack_78,&cStack_71,0,&pcStack_70,pcStack_68);
    if (iVar11 == 0) goto code_r0x006ceb04;
    if (cStack_71 == '\0') {
      if (uStack_78 < 0x1f) {
        uVar15 = *(ulong *)(&UNK_0082d240 + (ulong)uStack_78 * 8);
      }
      else {
        uVar15 = 0;
      }
      if ((*(ulong *)(param_4 + 8) & uVar15) != 0) {
        func_0x006cf688();
        FUN_006cef14();
        goto LAB_006ce894;
      }
      if (param_7 != 0) goto LAB_006ce894;
      func_0x006cf654();
    }
    else {
      if (param_7 != 0) goto LAB_006ce894;
      func_0x006cf654();
    }
  }
code_r0x006ce7d4:
  func_0x006cf648();
  pdVar19 = (dword *)0x0;
code_r0x006ce7dc:
  if ((param_6 >> 10 & 1) == 0) {
    func_0x006cf698();
    FUN_006d0490();
  }
  if (pdVar19 == (dword *)0x0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 4;
  }
  FUN_006de97c(uVar3);
LAB_006ce894:
  func_0x006cf6c4();
  return;
code_r0x006ced34:
  pdVar4 = param_1;
  if (((uint)*(ulong *)pdVar19 >> 10 & 1) == 0) {
    pdVar4 = (dword *)(*(long *)param_1 + *(long *)(pdVar19 + 4));
  }
  FUN_006d0498(pdVar4,pdVar19);
  uVar15 = uVar15 + 1;
  pdVar19 = pdVar4;
  goto code_r0x006ced14;
}



/* Entry: 006cede4; end: 006cef13;  */

void FUN_006cede4(long *param_1,long *param_2,char *param_3,uint *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  long *plVar4;
  char **ppcVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  char *pcVar11;
  undefined8 uStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcStack_60 = (char *)*param_2;
  if ((*param_4 >> 4 & 1) != 0) {
    iVar3 = (int)&pcStack_58;
    func_0x006cf6f8();
    func_0x006cf2a0();
    pcVar11 = pcStack_60;
    if (iVar3 == -1) {
      return;
    }
    if (((iVar3 != 0) && (uStack_68._7_1_ != '\0')) &&
       (FUN_006cf444(param_1,&pcStack_60,pcStack_58,param_4,0,param_6,param_7), (int)param_1 != 0))
    {
      if (pcVar11 + ((long)pcStack_58 - (long)pcStack_60) != (char *)0x0) {
        func_0x006cf654();
        func_0x006cf648();
        func_0x006cf698();
        FUN_006d0498();
        return;
      }
      *param_2 = (long)pcStack_60;
      return;
    }
    func_0x006cf654();
    func_0x006cf648();
    return;
  }
  uVar8 = *param_4;
  uVar9 = uVar8 & 0xc0;
  pcStack_60 = (char *)*param_2;
  pcStack_58 = param_3;
  if ((uVar8 & 6) == 0) {
    if ((uVar8 >> 3 & 1) == 0) {
      uVar9 = uVar8 & 0x400;
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = param_4[2];
    }
    FUN_006ce768(param_1,&pcStack_60,param_3,*(undefined8 *)(param_4 + 8),uVar8,uVar9,param_5,
                 param_6,(int)param_7);
    if ((int)param_1 == -1) {
      return;
    }
    if ((int)param_1 != 0) goto LAB_006cf5fc;
    func_0x006cf654();
  }
  else {
    ppcVar5 = &pcStack_58;
    func_0x006cf6f8();
    func_0x006cf2a0();
    if ((int)ppcVar5 == -1) {
      return;
    }
    if ((int)ppcVar5 == 0) {
      func_0x006cf654();
      func_0x006cf648();
      return;
    }
    plVar10 = (long *)*param_1;
    if (plVar10 == (long *)0x0) {
      FUN_00705ed8();
      *param_1 = (long)ppcVar5;
      pcVar11 = pcStack_58;
    }
    else {
      while (*plVar10 != 0) {
        plVar4 = plVar10;
        func_0x00706270();
        uStack_68 = plVar4;
        func_0x006cf6e0();
      }
      ppcVar5 = (char **)*param_1;
      pcVar11 = pcStack_58;
    }
    pcStack_58 = pcVar11;
    if (ppcVar5 != (char **)0x0) {
      for (; pcVar1 = pcStack_60, 0 < (long)pcVar11;
          pcVar11 = pcVar1 + ((long)pcVar11 - (long)pcVar2)) {
        if (((pcVar11 != (char *)0x1) && (*pcStack_60 == '\0')) && (pcStack_60[1] == '\0')) {
          pcStack_60 = pcStack_60 + 2;
LAB_006cf61c:
          func_0x006cf654();
          goto LAB_006cf620;
        }
        uStack_68 = (long *)0x0;
        puVar6 = &uStack_68;
        FUN_006ce768(puVar6,&pcStack_60,pcVar11,*(undefined8 *)(param_4 + 8),0xffffffff,0,0,param_6,
                     (int)param_7);
        pcVar2 = pcStack_60;
        if ((int)puVar6 == 0) goto LAB_006cf61c;
        lVar7 = *param_1;
        func_0x00706268(lVar7,uStack_68);
        if (lVar7 == 0) {
          func_0x006cf6e0();
          goto LAB_006cf61c;
        }
      }
LAB_006cf5fc:
      *param_2 = (long)pcStack_60;
      return;
    }
    func_0x006cf654();
  }
LAB_006cf620:
  func_0x006cf648();
  func_0x006cf698();
  FUN_006d0498();
  return;
}



/* Entry: 006cef14; end: 006cf443;  */

void FUN_006cef14(byte **param_1,undefined8 *param_2,undefined8 param_3,char *param_4,byte *param_5,
                 undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  int iVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte **ppbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte **ppbVar8;
  uint uVar9;
  byte *pbStack_88;
  char cStack_79;
  byte *pbStack_78;
  uint uStack_6c;
  byte *pbStack_68;
  
  uVar9 = (uint)param_5;
  if (*param_4 == '\x05') {
    uStack_6c = uVar9;
    if (uVar9 != 0xfffffffc) goto LAB_006cefac;
LAB_006cef94:
    if ((int)param_7 != 0) {
      func_0x006cf654();
      goto LAB_006ceff4;
    }
    pbStack_88 = (byte *)*param_2;
    iVar1 = 0;
    func_0x006cf6ec(0,&uStack_6c,&pbStack_68,0,&pbStack_88,param_3,param_7,param_8,0);
    if (iVar1 != 0) {
      if ((char)pbStack_68 == '\0') {
        param_5 = (byte *)(ulong)uStack_6c;
      }
      else {
        param_5 = (byte *)0xfffffffd;
        uStack_6c = 0xfffffffd;
      }
      goto LAB_006cefac;
    }
LAB_006cefec:
    func_0x006cf654();
LAB_006ceff4:
    func_0x006cf648();
    return;
  }
  uStack_6c = *(uint *)(param_4 + 8);
  param_5 = (byte *)(ulong)uStack_6c;
  if (uStack_6c == 0xfffffffc) {
    if (-1 < (int)uVar9) {
      func_0x006cf654();
      goto LAB_006ceff4;
    }
    goto LAB_006cef94;
  }
LAB_006cefac:
  uVar9 = (uint)param_5;
  pbStack_88 = (byte *)*param_2;
  ppbVar2 = &pbStack_78;
  func_0x006cf6f8();
  func_0x006cf2a0();
  if ((int)ppbVar2 == -1) {
    return;
  }
  if ((int)ppbVar2 == 0) goto LAB_006cefec;
  if (uVar9 - 0x10 < 2) {
    if (cStack_79 == '\0') {
      func_0x006cf654();
      goto LAB_006ceff4;
    }
LAB_006cf090:
    pbVar5 = (byte *)*param_2;
    pbVar6 = pbStack_88 + ((long)pbStack_78 - (long)*param_2);
  }
  else {
    if (uVar9 == 0xfffffffd) {
      if (param_8 != (undefined1 *)0x0) {
        *param_8 = 0;
      }
      goto LAB_006cf090;
    }
    pbVar5 = pbStack_88;
    pbVar6 = pbStack_78;
    if (cStack_79 != '\0') {
      func_0x006cf654();
      goto LAB_006ceff4;
    }
  }
  pbStack_88 = pbStack_88 + (long)pbStack_78;
  pbStack_68 = pbVar5;
  if (*(long *)(param_4 + 8) == -4) {
    ppbVar4 = (byte **)*param_1;
    if ((byte **)*param_1 == (byte **)0x0) {
      func_0x006d0ac4();
      ppbVar4 = ppbVar2;
      if (ppbVar2 == (byte **)0x0) {
        ppbVar8 = (byte **)0x0;
        goto LAB_006cf28c;
      }
      *param_1 = (byte *)ppbVar2;
    }
    if (uVar9 != *(uint *)ppbVar4) {
      ppbVar2 = ppbVar4;
      func_0x006cd77c(ppbVar4,param_5,0);
    }
    ppbVar3 = ppbVar4 + 1;
    ppbVar8 = param_1;
  }
  else {
    ppbVar4 = (byte **)0x0;
    ppbVar8 = (byte **)0x0;
    ppbVar3 = param_1;
  }
  switch(uVar9) {
  case 1:
    if ((int)pbVar6 == 1) {
      *(uint *)ppbVar3 = (uint)*pbVar5;
      goto LAB_006cf270;
    }
    func_0x006cf654();
    break;
  case 2:
  case 10:
    func_0x006cf6b4();
    FUN_006cbd60();
    if (ppbVar2 == (byte **)0x0) goto LAB_006cf28c;
    *(uint *)(*ppbVar3 + 4) = *(uint *)(*ppbVar3 + 4) & 0x100 | uVar9;
code_r0x006cf260:
    if ((uVar9 == 5) && (ppbVar4 != (byte **)0x0)) {
      ppbVar4[1] = (byte *)0x0;
    }
    goto LAB_006cf270;
  case 3:
    func_0x006cf6b4();
    func_0x006cb354();
    goto joined_r0x006cf1c4;
  case 4:
  case 7:
  case 8:
  case 9:
LAB_006cf1f0:
    pbVar7 = *ppbVar3;
    if (pbVar7 == (byte *)0x0) {
      func_0x006ce440();
      if (param_5 == (byte *)0x0) {
        func_0x006cf654();
        break;
      }
      *ppbVar3 = param_5;
    }
    else {
      *(uint *)(pbVar7 + 4) = uVar9;
      param_5 = pbVar7;
    }
    pbVar7 = param_5;
    FUN_006ce2d0(param_5,pbVar5,pbVar6);
    if ((int)pbVar7 == 0) {
      func_0x006cf654();
      func_0x006cf648();
      FUN_006ce410(param_5);
      *ppbVar3 = (byte *)0x0;
      goto LAB_006cf28c;
    }
    goto LAB_006cf270;
  case 5:
    if ((int)pbVar6 == 0) {
      *ppbVar3 = (byte *)0x1;
      goto code_r0x006cf260;
    }
    func_0x006cf654();
    break;
  case 6:
    func_0x006cf6b4();
    FUN_006cc7c0();
joined_r0x006cf1c4:
    if (ppbVar2 != (byte **)0x0) {
LAB_006cf270:
      *param_2 = pbStack_88;
      return;
    }
    goto LAB_006cf28c;
  default:
    if (uVar9 == 0x1c) {
      if (((ulong)pbVar6 & 3) == 0) goto LAB_006cf1f0;
      func_0x006cf654();
    }
    else {
      if ((uVar9 != 0x1e) || (((ulong)pbVar6 & 1) == 0)) goto LAB_006cf1f0;
      func_0x006cf654();
    }
  }
  func_0x006cf648();
LAB_006cf28c:
  func_0x006d0ad0(ppbVar4);
  if (ppbVar8 == (byte **)0x0) {
    return;
  }
  *ppbVar8 = (byte *)0x0;
  return;
}



/* Entry: 006cf444; end: 006cf647;  */

void FUN_006cf444(long *param_1,long *param_2,char *param_3,uint *param_4,undefined8 param_5,
                 undefined8 param_6,undefined4 param_7)

{
  char *pcVar1;
  char *pcVar2;
  long *plVar3;
  char **ppcVar4;
  long **pplVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  char *pcVar10;
  long *plStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  uVar7 = *param_4;
  uVar8 = uVar7 & 0xc0;
  pcStack_60 = (char *)*param_2;
  pcStack_58 = param_3;
  if ((uVar7 & 6) == 0) {
    if ((uVar7 >> 3 & 1) == 0) {
      uVar8 = uVar7 & 0x400;
      uVar7 = 0xffffffff;
    }
    else {
      uVar7 = param_4[2];
    }
    FUN_006ce768(param_1,&pcStack_60,param_3,*(undefined8 *)(param_4 + 8),uVar7,uVar8,param_5,
                 param_6,param_7);
    if ((int)param_1 == -1) {
      return;
    }
    if ((int)param_1 != 0) goto LAB_006cf5fc;
    func_0x006cf654();
  }
  else {
    ppcVar4 = &pcStack_58;
    func_0x006cf6f8();
    func_0x006cf2a0();
    if ((int)ppcVar4 == -1) {
      return;
    }
    if ((int)ppcVar4 == 0) {
      func_0x006cf654();
      func_0x006cf648();
      return;
    }
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      FUN_00705ed8();
      *param_1 = (long)ppcVar4;
      pcVar10 = pcStack_58;
    }
    else {
      while (*plVar9 != 0) {
        plVar3 = plVar9;
        func_0x00706270();
        plStack_68 = plVar3;
        func_0x006cf6e0();
      }
      ppcVar4 = (char **)*param_1;
      pcVar10 = pcStack_58;
    }
    pcStack_58 = pcVar10;
    if (ppcVar4 != (char **)0x0) {
      for (; pcVar1 = pcStack_60, 0 < (long)pcVar10;
          pcVar10 = pcVar1 + ((long)pcVar10 - (long)pcVar2)) {
        if (((pcVar10 != (char *)0x1) && (*pcStack_60 == '\0')) && (pcStack_60[1] == '\0')) {
          pcStack_60 = pcStack_60 + 2;
LAB_006cf61c:
          func_0x006cf654();
          goto LAB_006cf620;
        }
        plStack_68 = (long *)0x0;
        pplVar5 = &plStack_68;
        FUN_006ce768(pplVar5,&pcStack_60,pcVar10,*(undefined8 *)(param_4 + 8),0xffffffff,0,0,param_6
                     ,param_7);
        pcVar2 = pcStack_60;
        if ((int)pplVar5 == 0) goto LAB_006cf61c;
        lVar6 = *param_1;
        func_0x00706268(lVar6,plStack_68);
        if (lVar6 == 0) {
          func_0x006cf6e0();
          goto LAB_006cf61c;
        }
      }
LAB_006cf5fc:
      *param_2 = (long)pcStack_60;
      return;
    }
    func_0x006cf654();
  }
LAB_006cf620:
  func_0x006cf648();
  func_0x006cf698();
  FUN_006d0498();
  return;
}



/* Entry: 006cf648; end: 006cf703;  */

void FUN_006cf648(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006cf704; end: 006cf7bf;  */

undefined8 * FUN_006cf704(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  if ((param_2 == (ulong *)0x0) || (*param_2 != 0)) {
    puVar3 = &uStack_38;
    FUN_006d01cc(puVar3,param_2,param_3);
  }
  else {
    puVar1 = &uStack_38;
    FUN_006d01cc(puVar1,0,param_3);
    puVar3 = puVar1;
    if (0 < (int)puVar1) {
      uVar2 = (ulong)puVar1 & 0xffffffff;
      FUN_00701e90();
      if (uVar2 == 0) {
        func_0x006d01f0();
        func_0x006d01d8();
        puVar3 = (undefined8 *)0xffffffff;
      }
      else {
        puVar3 = &uStack_38;
        uStack_40 = uVar2;
        FUN_006d01cc(puVar3,&uStack_40,param_3);
        if (0 < (int)puVar3) {
          *param_2 = uVar2;
          puVar3 = puVar1;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 006cf7c0; end: 006cf7c7;  */

/* WARNING: Possible PIC construction at 0x006cfc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cf9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfa90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cf9d4) */
/* WARNING: Removing unreachable block (ram,0x006cf9dc) */
/* WARNING: Removing unreachable block (ram,0x006cf9e0) */
/* WARNING: Removing unreachable block (ram,0x006cf9e4) */
/* WARNING: Removing unreachable block (ram,0x006cfc60) */
/* WARNING: Removing unreachable block (ram,0x006cfc68) */
/* WARNING: Removing unreachable block (ram,0x006cfc70) */
/* WARNING: Removing unreachable block (ram,0x006cfc94) */
/* WARNING: Removing unreachable block (ram,0x006cfcbc) */
/* WARNING: Removing unreachable block (ram,0x006cfcc4) */
/* WARNING: Removing unreachable block (ram,0x006cfd3c) */
/* WARNING: Removing unreachable block (ram,0x006cfccc) */
/* WARNING: Removing unreachable block (ram,0x006cfc1c) */
/* WARNING: Removing unreachable block (ram,0x006cfc28) */
/* WARNING: Removing unreachable block (ram,0x006cfcac) */
/* WARNING: Removing unreachable block (ram,0x006cfc2c) */
/* WARNING: Removing unreachable block (ram,0x006cfc30) */
/* WARNING: Removing unreachable block (ram,0x006cfcdc) */
/* WARNING: Removing unreachable block (ram,0x006cfcf8) */
/* WARNING: Removing unreachable block (ram,0x006cfd44) */
/* WARNING: Removing unreachable block (ram,0x006cfd58) */
/* WARNING: Removing unreachable block (ram,0x006cfd78) */
/* WARNING: Removing unreachable block (ram,0x006cfdc8) */
/* WARNING: Removing unreachable block (ram,0x006cfd7c) */
/* WARNING: Removing unreachable block (ram,0x006cfd88) */
/* WARNING: Removing unreachable block (ram,0x006cfde8) */
/* WARNING: Removing unreachable block (ram,0x006cfe0c) */
/* WARNING: Removing unreachable block (ram,0x006cfe40) */
/* WARNING: Removing unreachable block (ram,0x006cfe18) */
/* WARNING: Removing unreachable block (ram,0x006cfd94) */
/* WARNING: Removing unreachable block (ram,0x006cfdc4) */
/* WARNING: Removing unreachable block (ram,0x006cfdd4) */
/* WARNING: Removing unreachable block (ram,0x006cfd4c) */
/* WARNING: Removing unreachable block (ram,0x006cfd04) */
/* WARNING: Removing unreachable block (ram,0x006cfd08) */
/* WARNING: Removing unreachable block (ram,0x006cfd14) */
/* WARNING: Removing unreachable block (ram,0x006cfd38) */
/* WARNING: Removing unreachable block (ram,0x006cfa94) */
/* WARNING: Removing unreachable block (ram,0x006cfa98) */

ulong * FUN_006cf7c0(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,ulong param_5)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong *puVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  code *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint uVar14;
  undefined8 unaff_x22;
  ulong unaff_x23;
  uint uVar15;
  undefined8 unaff_x24;
  ulong *puVar16;
  ulong *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong uVar17;
  undefined8 unaff_x28;
  ulong *puVar18;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar19;
  
  uVar3 = 0;
  puVar1 = (undefined1 *)register0x00000008;
code_r0x006cf7c8:
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(ulong *)(puVar1 + -0x50) = unaff_x26;
  *(ulong **)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(ulong *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  puVar7 = puVar1 + -0x10;
  puVar6 = param_1;
  puVar16 = param_1;
  plVar8 = param_2;
  puVar18 = param_4;
  uVar17 = param_5;
  if ((char)*param_3 != '\0') {
    uVar13 = *param_1;
    if (uVar13 == 0) {
      if (uVar3 != 0) {
        param_4 = (ulong *)0x0;
        goto LAB_006cf950;
      }
      func_0x006d01f0();
    }
    else {
      uVar9 = (uint)param_4;
      switch((char)*param_3) {
      case '\x01':
        puVar5 = puVar1 + -100;
        puVar18 = param_3;
        uVar17 = param_5;
        FUN_006d0cb8(puVar5,param_2,param_1);
        uVar3 = (uint)uVar17;
        if ((int)puVar5 != 0) {
          param_4 = (ulong *)(ulong)*(uint *)(puVar1 + -100);
          goto LAB_006cf950;
        }
        unaff_x23 = 0;
        unaff_x27 = 0;
        *(undefined4 *)(puVar1 + -100) = 0;
        uVar15 = 0;
        if (uVar9 != 0xffffffff) {
          uVar15 = (uint)param_5;
        }
        param_5 = (ulong)uVar15;
        uVar15 = 0x10;
        if (uVar9 != 0xffffffff) {
          uVar15 = uVar9;
        }
        unaff_x25 = (ulong *)(ulong)uVar15;
        unaff_x26 = param_3[2];
        puVar10 = param_1;
        if ((long)param_3[3] < 1) {
          param_4 = (ulong *)((long)&MACH_HEADER.magic + 1);
          func_0x006ce210(1,0,unaff_x25);
          if ((param_2 == (long *)0x0) || ((int)param_4 == -1)) goto LAB_006cf950;
          func_0x006d0218();
          puVar18 = unaff_x25;
          func_0x006ce110();
          uVar3 = (uint)param_5;
          param_5 = 0;
          unaff_x23 = param_3[2];
          if ((long)param_3[3] < 1) goto LAB_006cf950;
          FUN_006d0d2c(param_1,unaff_x23,1);
          if (puVar10 != (ulong *)0x0) {
            if ((*(byte *)((long)puVar10 + 1) >> 2 & 1) == 0) {
              puVar16 = (ulong *)(*param_1 + puVar10[2]);
            }
            func_0x006d01e4();
            uVar19 = 0x6cfa94;
            goto LAB_006cfaa4;
          }
          goto code_r0x006cf94c;
        }
        FUN_006d0d2c(param_1,unaff_x26,1);
        if (puVar10 == (ulong *)0x0) goto code_r0x006cf94c;
        if ((*(byte *)((long)puVar10 + 1) >> 2 & 1) == 0) {
          puVar16 = (ulong *)(*param_1 + puVar10[2]);
        }
        param_4 = (ulong *)0xffffffff;
        plVar8 = (long *)0x0;
        func_0x006d01e4();
        uVar19 = 0x6cf9d4;
LAB_006cfaa4:
        *(undefined8 *)(puVar1 + -0xd0) = unaff_x28;
        *(undefined8 *)(puVar1 + -200) = unaff_x27;
        *(ulong *)(puVar1 + -0xc0) = unaff_x26;
        *(ulong **)(puVar1 + -0xb8) = unaff_x25;
        *(ulong *)(puVar1 + -0xb0) = param_5;
        *(ulong *)(puVar1 + -0xa8) = unaff_x23;
        *(ulong **)(puVar1 + -0xa0) = param_4;
        *(ulong **)(puVar1 + -0x98) = param_3;
        *(ulong **)(puVar1 + -0x90) = param_1;
        *(long **)(puVar1 + -0x88) = param_2;
        *(undefined1 **)(puVar1 + -0x80) = puVar7;
        *(undefined8 *)(puVar1 + -0x78) = uVar19;
        uVar9 = (uint)*puVar10;
        if ((uVar9 & 0x18) == 0) {
          param_4 = puVar18;
          uVar15 = 0;
          if ((int)puVar18 != -1) {
            uVar15 = uVar3 & 0xc0;
          }
        }
        else {
          if ((int)puVar18 != -1) {
            func_0x006d01f0();
            goto LAB_006cfaf0;
          }
          param_4 = (ulong *)(ulong)(uint)puVar10[1];
          uVar15 = uVar9 & 0xc0;
        }
        param_5 = (ulong)uVar15;
        uVar3 = uVar9 & 1;
        if ((uVar9 & 6) != 0) {
          puVar18 = (ulong *)*puVar16;
          if (puVar18 == (ulong *)0x0) {
            if (uVar3 != 0) {
              return (ulong *)0x0;
            }
            func_0x006d01f0();
LAB_006cfaf0:
            func_0x006d01d8();
            return (ulong *)0xffffffff;
          }
          uVar17 = 0;
          puVar16 = (ulong *)0x0;
          uVar14 = (uint)param_4;
          bVar2 = (uVar9 & 0x10) != 0;
          uVar3 = 0x10;
          if ((uVar9 & 2) != 0) {
            uVar3 = 0x11;
          }
          uVar9 = uVar14;
          if (bVar2 || uVar14 == 0xffffffff) {
            uVar9 = uVar3;
          }
          param_4 = (ulong *)(ulong)uVar9;
          if (bVar2 || uVar14 == 0xffffffff) {
            uVar15 = 0;
          }
          *(uint *)(puVar1 + -0xec) = uVar15;
          for (; uVar17 < *puVar18; uVar17 = uVar17 + 1) {
            *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar18[1] + uVar17 * 8);
            puVar7 = puVar1 + -0xe8;
            func_0x006d01cc(puVar7,0,puVar10[4]);
            uVar3 = (uint)puVar7;
            if (uVar3 == 0xffffffff || (int)(uVar3 ^ 0x7fffffff) < (int)puVar16) {
              return (ulong *)0xffffffff;
            }
            puVar16 = (ulong *)(ulong)(uVar3 + (int)puVar16);
          }
          iVar4 = 1;
          goto SUB_006ce210;
        }
        param_3 = (ulong *)puVar10[4];
        if ((uVar9 >> 4 & 1) == 0) goto code_r0x006cfbcc;
        func_0x006d01e4(puVar16,0);
        FUN_006cf7c8();
        if ((int)puVar16 < 1) {
          return puVar16;
        }
        iVar4 = 1;
SUB_006ce210:
        uVar3 = (uint)puVar16;
        if (-1 < (int)uVar3) {
          iVar12 = 1;
          if (0x1e < (int)param_4) {
            do {
              iVar12 = iVar12 + 1;
              uVar9 = (uint)param_4;
              param_4 = (ulong *)((ulong)param_4 >> 7 & 0x1ffffff);
            } while (0x7f < uVar9);
          }
          if (iVar4 == 2) {
            iVar12 = iVar12 + 3;
          }
          else {
            iVar12 = iVar12 + 1;
            if (0x7f < uVar3) {
              for (; 0 < (int)puVar16; puVar16 = (ulong *)((ulong)puVar16 >> 8 & 0xffffff)) {
                iVar12 = iVar12 + 1;
              }
            }
          }
          uVar9 = iVar12 + uVar3;
          if ((int)(uVar3 ^ 0x7fffffff) <= iVar12) {
            uVar9 = 0xffffffff;
          }
          return (ulong *)(ulong)uVar9;
        }
        return (ulong *)0xffffffff;
      case '\x02':
        if (uVar9 == 0xffffffff) {
          uVar3 = *(uint *)(uVar13 + param_3[1]);
          if (((int)uVar3 < 0) || ((long)param_3[3] <= (long)(ulong)uVar3)) {
            func_0x006d01f0();
            goto LAB_006cf948;
          }
          puVar10 = (ulong *)(param_3[2] + (ulong)uVar3 * 0x28);
          if ((*puVar10 & 1) == 0) {
            if (((uint)*puVar10 >> 10 & 1) == 0) {
              param_1 = (ulong *)(uVar13 + puVar10[2]);
            }
            puVar16 = param_1;
            func_0x006d01e4();
            goto code_r0x006cf870;
          }
        }
        break;
      case '\x04':
        func_0x006d01fc(*(undefined8 *)(param_3[4] + 0x28));
        (*extraout_x8)();
        param_4 = param_1;
        if ((int)param_1 != 0) goto LAB_006cf950;
        func_0x006d01f0();
        goto LAB_006cf948;
      case '\x05':
        if (uVar9 == 0xffffffff) {
          puVar10 = param_3;
          func_0x006d01fc();
          func_0x006d01e4();
          goto code_r0x006cf89c;
        }
      }
LAB_006cf940:
      func_0x006d01f0();
    }
LAB_006cf948:
    func_0x006d01d8();
code_r0x006cf94c:
    param_4 = (ulong *)0xffffffff;
LAB_006cf950:
    func_0x006d0224(param_4,*(undefined8 *)(puVar1 + -8));
    return param_4;
  }
  puVar10 = (ulong *)param_3[2];
  if (puVar10 != (ulong *)0x0) {
    if ((*puVar10 & 1) == 0) {
code_r0x006cf870:
      uVar3 = (uint)uVar17;
      puVar7 = *(undefined1 **)(puVar1 + -0x10);
      uVar19 = *(undefined8 *)(puVar1 + -8);
      func_0x006d0224();
      goto LAB_006cfaa4;
    }
    goto LAB_006cf940;
  }
  func_0x006d01fc();
code_r0x006cf89c:
  uVar9 = (uint)puVar18;
  uVar19 = *(undefined8 *)(puVar1 + -0x10);
  uVar11 = *(undefined8 *)(puVar1 + -8);
  func_0x006d0224();
  *(ulong *)(puVar1 + -0xc0) = unaff_x26;
  *(ulong **)(puVar1 + -0xb8) = unaff_x25;
  *(ulong *)(puVar1 + -0xb0) = param_5;
  *(ulong *)(puVar1 + -0xa8) = unaff_x23;
  *(ulong **)(puVar1 + -0xa0) = param_4;
  *(ulong **)(puVar1 + -0x98) = param_3;
  *(ulong **)(puVar1 + -0x90) = param_1;
  *(long **)(puVar1 + -0x88) = param_2;
  *(undefined8 *)(puVar1 + -0x80) = uVar19;
  *(undefined8 *)(puVar1 + -0x78) = uVar11;
  *(int *)(puVar1 + -200) = (int)puVar10[1];
  puVar16 = puVar6;
  FUN_006cfffc();
  if (-1 < (int)puVar16) {
    if (*(int *)(puVar1 + -0xc4) == 0) {
      uVar15 = *(uint *)(puVar1 + -200);
      uVar3 = uVar15;
      if (uVar9 != 0xffffffff) {
        uVar3 = uVar9;
      }
      param_4 = (ulong *)(ulong)uVar3;
      if (plVar8 != (long *)0x0) {
        if (0x14 < uVar15 + 3 || (1 << (ulong)(uVar15 + 3 & 0x1f) & 0x180001U) == 0) {
          func_0x006ce110(plVar8,0,puVar16,param_4,uVar17);
        }
        FUN_006cfffc(puVar6,*plVar8,puVar1 + -0xc4,puVar1 + -200,puVar10);
        if ((int)puVar6 < 0) {
          return (ulong *)0xffffffff;
        }
        *plVar8 = *plVar8 + ((ulong)puVar16 & 0xffffffff);
      }
      if (uVar15 + 3 < 0x15 && (1 << (ulong)(uVar15 + 3 & 0x1f) & 0x180001U) != 0) {
        return puVar16;
      }
      iVar4 = 0;
      goto SUB_006ce210;
    }
    if (uVar3 != 0) {
      return (ulong *)0x0;
    }
    func_0x006d01f0();
    func_0x006d01d8();
  }
  return (ulong *)0xffffffff;
code_r0x006cfbcc:
  unaff_x29 = *(undefined8 *)(puVar1 + -0x80);
  unaff_x30 = *(undefined8 *)(puVar1 + -0x78);
  unaff_x20 = *(undefined8 *)(puVar1 + -0x90);
  unaff_x19 = *(undefined8 *)(puVar1 + -0x88);
  unaff_x22 = *(undefined8 *)(puVar1 + -0xa0);
  unaff_x21 = *(undefined8 *)(puVar1 + -0x98);
  unaff_x24 = *(undefined8 *)(puVar1 + -0xb0);
  unaff_x23 = *(ulong *)(puVar1 + -0xa8);
  unaff_x26 = *(ulong *)(puVar1 + -0xc0);
  unaff_x25 = *(ulong **)(puVar1 + -0xb8);
  unaff_x28 = *(undefined8 *)(puVar1 + -0xd0);
  unaff_x27 = *(undefined8 *)(puVar1 + -200);
  puVar1 = puVar1 + -0x70;
  param_1 = puVar16;
  param_2 = plVar8;
  goto code_r0x006cf7c8;
}



/* Entry: 006cf7c8; end: 006cfe57;  */

/* WARNING: Possible PIC construction at 0x006cfc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cf9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfa90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cf9d4) */
/* WARNING: Removing unreachable block (ram,0x006cf9dc) */
/* WARNING: Removing unreachable block (ram,0x006cf9e0) */
/* WARNING: Removing unreachable block (ram,0x006cf9e4) */
/* WARNING: Removing unreachable block (ram,0x006cfc60) */
/* WARNING: Removing unreachable block (ram,0x006cfc68) */
/* WARNING: Removing unreachable block (ram,0x006cfc70) */
/* WARNING: Removing unreachable block (ram,0x006cfc94) */
/* WARNING: Removing unreachable block (ram,0x006cfcbc) */
/* WARNING: Removing unreachable block (ram,0x006cfcc4) */
/* WARNING: Removing unreachable block (ram,0x006cfd3c) */
/* WARNING: Removing unreachable block (ram,0x006cfccc) */
/* WARNING: Removing unreachable block (ram,0x006cfc1c) */
/* WARNING: Removing unreachable block (ram,0x006cfc28) */
/* WARNING: Removing unreachable block (ram,0x006cfcac) */
/* WARNING: Removing unreachable block (ram,0x006cfc2c) */
/* WARNING: Removing unreachable block (ram,0x006cfc30) */
/* WARNING: Removing unreachable block (ram,0x006cfcdc) */
/* WARNING: Removing unreachable block (ram,0x006cfcf8) */
/* WARNING: Removing unreachable block (ram,0x006cfd44) */
/* WARNING: Removing unreachable block (ram,0x006cfd58) */
/* WARNING: Removing unreachable block (ram,0x006cfd78) */
/* WARNING: Removing unreachable block (ram,0x006cfdc8) */
/* WARNING: Removing unreachable block (ram,0x006cfd7c) */
/* WARNING: Removing unreachable block (ram,0x006cfd88) */
/* WARNING: Removing unreachable block (ram,0x006cfde8) */
/* WARNING: Removing unreachable block (ram,0x006cfe0c) */
/* WARNING: Removing unreachable block (ram,0x006cfe40) */
/* WARNING: Removing unreachable block (ram,0x006cfe18) */
/* WARNING: Removing unreachable block (ram,0x006cfd94) */
/* WARNING: Removing unreachable block (ram,0x006cfdc4) */
/* WARNING: Removing unreachable block (ram,0x006cfdd4) */
/* WARNING: Removing unreachable block (ram,0x006cfd4c) */
/* WARNING: Removing unreachable block (ram,0x006cfd04) */
/* WARNING: Removing unreachable block (ram,0x006cfd08) */
/* WARNING: Removing unreachable block (ram,0x006cfd14) */
/* WARNING: Removing unreachable block (ram,0x006cfd38) */
/* WARNING: Removing unreachable block (ram,0x006cfa94) */
/* WARNING: Removing unreachable block (ram,0x006cfa98) */

ulong * FUN_006cf7c8(ulong *param_1,long *param_2,ulong *param_3,ulong *param_4,ulong param_5,
                    uint param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  uint uVar8;
  ulong *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulong uVar12;
  code *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint uVar13;
  undefined8 unaff_x22;
  ulong unaff_x23;
  uint uVar14;
  undefined8 unaff_x24;
  ulong *puVar15;
  ulong *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong uVar16;
  undefined8 unaff_x28;
  ulong *puVar17;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar18;
  
code_r0x006cf7c8:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(ulong **)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar6 = (undefined1 *)((long)register0x00000008 + -0x10);
  puVar5 = param_1;
  puVar15 = param_1;
  plVar7 = param_2;
  puVar17 = param_4;
  uVar16 = param_5;
  if ((char)*param_3 != '\0') {
    uVar12 = *param_1;
    if (uVar12 == 0) {
      if (param_6 != 0) {
        param_4 = (ulong *)0x0;
        goto LAB_006cf950;
      }
      func_0x006d01f0();
    }
    else {
      uVar2 = (uint)param_4;
      switch((char)*param_3) {
      case '\x01':
        puVar4 = (undefined1 *)((long)register0x00000008 + -100);
        puVar17 = param_3;
        uVar16 = param_5;
        FUN_006d0cb8(puVar4,param_2,param_1);
        uVar8 = (uint)uVar16;
        if ((int)puVar4 != 0) {
          param_4 = (ulong *)(ulong)*(uint *)((long)register0x00000008 + -100);
          goto LAB_006cf950;
        }
        unaff_x23 = 0;
        unaff_x27 = 0;
        *(undefined4 *)((long)register0x00000008 + -100) = 0;
        uVar14 = 0;
        if (uVar2 != 0xffffffff) {
          uVar14 = (uint)param_5;
        }
        param_5 = (ulong)uVar14;
        uVar14 = 0x10;
        if (uVar2 != 0xffffffff) {
          uVar14 = uVar2;
        }
        unaff_x25 = (ulong *)(ulong)uVar14;
        unaff_x26 = param_3[2];
        puVar9 = param_1;
        if ((long)param_3[3] < 1) {
          param_4 = (ulong *)((long)&MACH_HEADER.magic + 1);
          func_0x006ce210(1,0,unaff_x25);
          if ((param_2 == (long *)0x0) || ((int)param_4 == -1)) goto LAB_006cf950;
          func_0x006d0218();
          puVar17 = unaff_x25;
          func_0x006ce110();
          uVar8 = (uint)param_5;
          param_5 = 0;
          unaff_x23 = param_3[2];
          if ((long)param_3[3] < 1) goto LAB_006cf950;
          FUN_006d0d2c(param_1,unaff_x23,1);
          if (puVar9 != (ulong *)0x0) {
            if ((*(byte *)((long)puVar9 + 1) >> 2 & 1) == 0) {
              puVar15 = (ulong *)(*param_1 + puVar9[2]);
            }
            func_0x006d01e4();
            uVar18 = 0x6cfa94;
            goto LAB_006cfaa4;
          }
          goto code_r0x006cf94c;
        }
        FUN_006d0d2c(param_1,unaff_x26,1);
        if (puVar9 == (ulong *)0x0) goto code_r0x006cf94c;
        if ((*(byte *)((long)puVar9 + 1) >> 2 & 1) == 0) {
          puVar15 = (ulong *)(*param_1 + puVar9[2]);
        }
        param_4 = (ulong *)0xffffffff;
        plVar7 = (long *)0x0;
        func_0x006d01e4();
        uVar18 = 0x6cf9d4;
LAB_006cfaa4:
        *(undefined8 *)((long)register0x00000008 + -0xd0) = unaff_x28;
        *(undefined8 *)((long)register0x00000008 + -200) = unaff_x27;
        *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x26;
        *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
        *(ulong *)((long)register0x00000008 + -0xb0) = param_5;
        *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
        *(ulong **)((long)register0x00000008 + -0xa0) = param_4;
        *(ulong **)((long)register0x00000008 + -0x98) = param_3;
        *(ulong **)((long)register0x00000008 + -0x90) = param_1;
        *(long **)((long)register0x00000008 + -0x88) = param_2;
        *(undefined1 **)((long)register0x00000008 + -0x80) = puVar6;
        *(undefined8 *)((long)register0x00000008 + -0x78) = uVar18;
        uVar2 = (uint)*puVar9;
        if ((uVar2 & 0x18) == 0) {
          param_4 = puVar17;
          uVar14 = 0;
          if ((int)puVar17 != -1) {
            uVar14 = uVar8 & 0xc0;
          }
        }
        else {
          if ((int)puVar17 != -1) {
            func_0x006d01f0();
            goto LAB_006cfaf0;
          }
          param_4 = (ulong *)(ulong)(uint)puVar9[1];
          uVar14 = uVar2 & 0xc0;
        }
        param_5 = (ulong)uVar14;
        param_6 = uVar2 & 1;
        if ((uVar2 & 6) != 0) {
          puVar17 = (ulong *)*puVar15;
          if (puVar17 == (ulong *)0x0) {
            if (param_6 != 0) {
              return (ulong *)0x0;
            }
            func_0x006d01f0();
LAB_006cfaf0:
            func_0x006d01d8();
            return (ulong *)0xffffffff;
          }
          uVar16 = 0;
          puVar15 = (ulong *)0x0;
          uVar13 = (uint)param_4;
          bVar1 = (uVar2 & 0x10) != 0;
          uVar8 = 0x10;
          if ((uVar2 & 2) != 0) {
            uVar8 = 0x11;
          }
          uVar2 = uVar13;
          if (bVar1 || uVar13 == 0xffffffff) {
            uVar2 = uVar8;
          }
          param_4 = (ulong *)(ulong)uVar2;
          if (bVar1 || uVar13 == 0xffffffff) {
            uVar14 = 0;
          }
          *(uint *)((long)register0x00000008 + -0xec) = uVar14;
          for (; uVar16 < *puVar17; uVar16 = uVar16 + 1) {
            *(undefined8 *)((long)register0x00000008 + -0xe8) =
                 *(undefined8 *)(puVar17[1] + uVar16 * 8);
            puVar6 = (undefined1 *)((long)register0x00000008 + -0xe8);
            func_0x006d01cc(puVar6,0,puVar9[4]);
            uVar2 = (uint)puVar6;
            if (uVar2 == 0xffffffff || (int)(uVar2 ^ 0x7fffffff) < (int)puVar15) {
              return (ulong *)0xffffffff;
            }
            puVar15 = (ulong *)(ulong)(uVar2 + (int)puVar15);
          }
          iVar3 = 1;
          goto SUB_006ce210;
        }
        param_3 = (ulong *)puVar9[4];
        if ((uVar2 >> 4 & 1) == 0) goto code_r0x006cfbcc;
        func_0x006d01e4(puVar15,0);
        FUN_006cf7c8();
        if ((int)puVar15 < 1) {
          return puVar15;
        }
        iVar3 = 1;
SUB_006ce210:
        uVar2 = (uint)puVar15;
        if (-1 < (int)uVar2) {
          iVar11 = 1;
          if (0x1e < (int)param_4) {
            do {
              iVar11 = iVar11 + 1;
              uVar8 = (uint)param_4;
              param_4 = (ulong *)((ulong)param_4 >> 7 & 0x1ffffff);
            } while (0x7f < uVar8);
          }
          if (iVar3 == 2) {
            iVar11 = iVar11 + 3;
          }
          else {
            iVar11 = iVar11 + 1;
            if (0x7f < uVar2) {
              for (; 0 < (int)puVar15; puVar15 = (ulong *)((ulong)puVar15 >> 8 & 0xffffff)) {
                iVar11 = iVar11 + 1;
              }
            }
          }
          uVar8 = iVar11 + uVar2;
          if ((int)(uVar2 ^ 0x7fffffff) <= iVar11) {
            uVar8 = 0xffffffff;
          }
          return (ulong *)(ulong)uVar8;
        }
        return (ulong *)0xffffffff;
      case '\x02':
        if (uVar2 == 0xffffffff) {
          uVar2 = *(uint *)(uVar12 + param_3[1]);
          if (((int)uVar2 < 0) || ((long)param_3[3] <= (long)(ulong)uVar2)) {
            func_0x006d01f0();
            goto LAB_006cf948;
          }
          puVar9 = (ulong *)(param_3[2] + (ulong)uVar2 * 0x28);
          if ((*puVar9 & 1) == 0) {
            if (((uint)*puVar9 >> 10 & 1) == 0) {
              param_1 = (ulong *)(uVar12 + puVar9[2]);
            }
            puVar15 = param_1;
            func_0x006d01e4();
            goto code_r0x006cf870;
          }
        }
        break;
      case '\x04':
        func_0x006d01fc(*(undefined8 *)(param_3[4] + 0x28));
        (*extraout_x8)();
        param_4 = param_1;
        if ((int)param_1 != 0) goto LAB_006cf950;
        func_0x006d01f0();
        goto LAB_006cf948;
      case '\x05':
        if (uVar2 == 0xffffffff) {
          puVar9 = param_3;
          func_0x006d01fc();
          func_0x006d01e4();
          goto code_r0x006cf89c;
        }
      }
LAB_006cf940:
      func_0x006d01f0();
    }
LAB_006cf948:
    func_0x006d01d8();
code_r0x006cf94c:
    param_4 = (ulong *)0xffffffff;
LAB_006cf950:
    func_0x006d0224(param_4,*(undefined8 *)((long)register0x00000008 + -8));
    return param_4;
  }
  puVar9 = (ulong *)param_3[2];
  if (puVar9 != (ulong *)0x0) {
    if ((*puVar9 & 1) == 0) {
code_r0x006cf870:
      uVar8 = (uint)uVar16;
      puVar6 = *(undefined1 **)((long)register0x00000008 + -0x10);
      uVar18 = *(undefined8 *)((long)register0x00000008 + -8);
      func_0x006d0224();
      goto LAB_006cfaa4;
    }
    goto LAB_006cf940;
  }
  func_0x006d01fc();
code_r0x006cf89c:
  uVar2 = (uint)puVar17;
  uVar18 = *(undefined8 *)((long)register0x00000008 + -0x10);
  uVar10 = *(undefined8 *)((long)register0x00000008 + -8);
  func_0x006d0224();
  *(ulong *)((long)register0x00000008 + -0xc0) = unaff_x26;
  *(ulong **)((long)register0x00000008 + -0xb8) = unaff_x25;
  *(ulong *)((long)register0x00000008 + -0xb0) = param_5;
  *(ulong *)((long)register0x00000008 + -0xa8) = unaff_x23;
  *(ulong **)((long)register0x00000008 + -0xa0) = param_4;
  *(ulong **)((long)register0x00000008 + -0x98) = param_3;
  *(ulong **)((long)register0x00000008 + -0x90) = param_1;
  *(long **)((long)register0x00000008 + -0x88) = param_2;
  *(undefined8 *)((long)register0x00000008 + -0x80) = uVar18;
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar10;
  *(int *)((long)register0x00000008 + -200) = (int)puVar9[1];
  puVar15 = puVar5;
  FUN_006cfffc();
  if (-1 < (int)puVar15) {
    if (*(int *)((long)register0x00000008 + -0xc4) == 0) {
      uVar14 = *(uint *)((long)register0x00000008 + -200);
      uVar8 = uVar14;
      if (uVar2 != 0xffffffff) {
        uVar8 = uVar2;
      }
      param_4 = (ulong *)(ulong)uVar8;
      if (plVar7 != (long *)0x0) {
        if (0x14 < uVar14 + 3 || (1 << (ulong)(uVar14 + 3 & 0x1f) & 0x180001U) == 0) {
          func_0x006ce110(plVar7,0,puVar15,param_4,uVar16);
        }
        FUN_006cfffc(puVar5,*plVar7,(undefined1 *)((long)register0x00000008 + -0xc4),
                     (undefined1 *)((long)register0x00000008 + -200),puVar9);
        if ((int)puVar5 < 0) {
          return (ulong *)0xffffffff;
        }
        *plVar7 = *plVar7 + ((ulong)puVar15 & 0xffffffff);
      }
      if (uVar14 + 3 < 0x15 && (1 << (ulong)(uVar14 + 3 & 0x1f) & 0x180001U) != 0) {
        return puVar15;
      }
      iVar3 = 0;
      goto SUB_006ce210;
    }
    if (param_6 != 0) {
      return (ulong *)0x0;
    }
    func_0x006d01f0();
    func_0x006d01d8();
  }
  return (ulong *)0xffffffff;
code_r0x006cfbcc:
  unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x80);
  unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x78);
  unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x90);
  unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x88);
  unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xa0);
  unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x98);
  unaff_x24 = *(undefined8 *)((long)register0x00000008 + -0xb0);
  unaff_x23 = *(ulong *)((long)register0x00000008 + -0xa8);
  unaff_x26 = *(ulong *)((long)register0x00000008 + -0xc0);
  unaff_x25 = *(ulong **)((long)register0x00000008 + -0xb8);
  unaff_x28 = *(undefined8 *)((long)register0x00000008 + -0xd0);
  unaff_x27 = *(undefined8 *)((long)register0x00000008 + -200);
  register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x70);
  param_1 = puVar15;
  param_2 = plVar7;
  goto code_r0x006cf7c8;
}



/* Entry: 006cfe58; end: 006cffab;  */

/* WARNING: Removing unreachable block (ram,0x006ce238) */

ulong FUN_006cfe58(ulong param_1,long *param_2,long param_3,uint param_4,undefined8 param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint uStack_58;
  int iStack_54;
  
  uStack_58 = (uint)*(undefined8 *)(param_3 + 8);
  uVar5 = param_1;
  FUN_006cfffc(param_1,0,&iStack_54,&uStack_58,param_3);
  uVar3 = uStack_58;
  uVar2 = (uint)uVar5;
  if (-1 < (int)uVar2) {
    if (iStack_54 == 0) {
      uVar1 = uStack_58;
      if (param_4 != 0xffffffff) {
        uVar1 = param_4;
      }
      uVar6 = (ulong)uVar1;
      if (param_2 != (long *)0x0) {
        if (0x14 < uStack_58 + 3 || (1 << (ulong)(uStack_58 + 3 & 0x1f) & 0x180001U) == 0) {
          FUN_006ce110(param_2,0,uVar5,uVar6,param_5);
        }
        FUN_006cfffc(param_1,*param_2,&iStack_54,&uStack_58,param_3);
        if ((int)param_1 < 0) {
          return 0xffffffff;
        }
        *param_2 = *param_2 + (uVar5 & 0xffffffff);
      }
      if (uVar3 + 3 < 0x15 && (1 << (ulong)(uVar3 + 3 & 0x1f) & 0x180001U) != 0) {
        return uVar5;
      }
      if ((int)uVar2 < 0) {
        return 0xffffffff;
      }
      iVar4 = 1;
      if (0x1e < (int)uVar1) {
        do {
          iVar4 = iVar4 + 1;
          uVar3 = (uint)uVar6;
          uVar6 = uVar6 >> 7;
        } while (0x7f < uVar3);
      }
      iVar4 = iVar4 + 1;
      if (0x7f < uVar2) {
        for (; 0 < (int)uVar5; uVar5 = uVar5 >> 8 & 0xffffff) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar3 = iVar4 + uVar2;
      if ((int)(uVar2 ^ 0x7fffffff) <= iVar4) {
        uVar3 = 0xffffffff;
      }
      return (ulong)uVar3;
    }
    if (param_6 != 0) {
      return 0;
    }
    func_0x006d01f0();
    func_0x006d01d8();
  }
  return 0xffffffff;
}



/* Entry: 006cffac; end: 006cffef;  */

void FUN_006cffac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 1);
  if (*(int *)(param_2 + 1) <= *(int *)(param_1 + 1)) {
    iVar1 = *(int *)(param_2 + 1);
  }
  if (iVar1 != 0) {
    _memcmp(*param_1,*param_2,(long)iVar1);
  }
  return;
}



/* Entry: 006cfff0; end: 006cfffb;  */

void FUN_006cfff0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006cfffc; end: 006d01cb;  */

int FUN_006cfffc(long *param_1,long param_2,undefined4 *param_3,int *param_4,char *param_5)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  char cStack_29;
  long lStack_28;
  
  *param_3 = 0;
  lStack_28 = param_2;
  if (*param_5 == '\0') {
    lVar7 = *(long *)(param_5 + 8);
    if (lVar7 != 1) {
      piVar4 = (int *)*param_1;
      if (piVar4 == (int *)0x0) goto LAB_006d01ac;
LAB_006d0078:
      if (lVar7 == -4) {
        iVar6 = *piVar4;
        if ((iVar6 < 0) && (iVar6 != -3)) {
LAB_006d0090:
          func_0x006d01f0();
          goto code_r0x006d0098;
        }
        *param_4 = iVar6;
        param_1 = (long *)(piVar4 + 2);
        goto LAB_006d00a8;
      }
    }
    iVar6 = *param_4;
  }
  else {
    piVar4 = (int *)*param_1;
    if (piVar4 == (int *)0x0) goto LAB_006d01ac;
    if (*param_5 != '\x05') {
      lVar7 = *(long *)(param_5 + 8);
      goto LAB_006d0078;
    }
    iVar3 = piVar4[1];
    if ((iVar3 < 0) && (iVar3 != -3)) goto LAB_006d0090;
    iVar1 = 10;
    if (iVar3 != 0x10a) {
      iVar1 = iVar3;
    }
    iVar6 = 2;
    if (iVar3 != 0x102) {
      iVar6 = iVar1;
    }
    *param_4 = iVar6;
  }
LAB_006d00a8:
  iVar3 = 0;
  switch(iVar6) {
  case 1:
    iVar3 = (int)*param_1;
    if (iVar3 == -1) goto LAB_006d01ac;
    if (*(long *)(param_5 + 8) != -4) {
      if (iVar3 == 0) {
        if (*(long *)(param_5 + 0x28) == 0) goto LAB_006d01ac;
      }
      else if (0 < *(long *)(param_5 + 0x28)) {
LAB_006d01ac:
        *param_3 = 1;
        return 0;
      }
    }
    cStack_29 = -(iVar3 != 0);
    iVar3 = 1;
    pcVar5 = &cStack_29;
    if (param_2 == 0) {
      return 1;
    }
    goto LAB_006d0150;
  case 2:
  case 10:
    lVar7 = *param_1;
    plVar2 = (long *)0x0;
    if (param_2 != 0) {
      plVar2 = &lStack_28;
    }
    FUN_006cbb9c(lVar7,plVar2);
    iVar3 = (int)lVar7;
    break;
  case 3:
    lVar7 = *param_1;
    plVar2 = (long *)0x0;
    if (param_2 != 0) {
      plVar2 = &lStack_28;
    }
    FUN_006cb2a4(lVar7,plVar2);
    iVar3 = (int)lVar7;
    break;
  default:
    pcVar5 = *(char **)((int *)*param_1 + 2);
    iVar3 = *(int *)*param_1;
    goto joined_r0x006d0104;
  case 5:
    goto LAB_006d01b8;
  case 6:
    iVar3 = *(int *)(*param_1 + 0x14);
    if (iVar3 == 0) {
      func_0x006d01f0();
code_r0x006d0098:
      func_0x006d01d8();
      return -1;
    }
    pcVar5 = *(char **)(*param_1 + 0x18);
joined_r0x006d0104:
    if (param_2 != 0) {
LAB_006d0150:
      if (iVar3 != 0) {
        FUN_006cfff0(param_2,pcVar5,(long)iVar3);
      }
    }
    goto LAB_006d01b8;
  }
  if (iVar3 < 1) {
    iVar3 = -1;
  }
LAB_006d01b8:
  return iVar3;
}



/* Entry: 006d01cc; end: 006d023f;  */

/* WARNING: Possible PIC construction at 0x006cfc18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfcb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfc5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cf9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x006cfa90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x006cf9d4) */
/* WARNING: Removing unreachable block (ram,0x006cf9dc) */
/* WARNING: Removing unreachable block (ram,0x006cf9e0) */
/* WARNING: Removing unreachable block (ram,0x006cf9e4) */
/* WARNING: Removing unreachable block (ram,0x006cfc60) */
/* WARNING: Removing unreachable block (ram,0x006cfc68) */
/* WARNING: Removing unreachable block (ram,0x006cfc70) */
/* WARNING: Removing unreachable block (ram,0x006cfc94) */
/* WARNING: Removing unreachable block (ram,0x006cfcbc) */
/* WARNING: Removing unreachable block (ram,0x006cfcc4) */
/* WARNING: Removing unreachable block (ram,0x006cfd3c) */
/* WARNING: Removing unreachable block (ram,0x006cfccc) */
/* WARNING: Removing unreachable block (ram,0x006cfc1c) */
/* WARNING: Removing unreachable block (ram,0x006cfc28) */
/* WARNING: Removing unreachable block (ram,0x006cfcac) */
/* WARNING: Removing unreachable block (ram,0x006cfc2c) */
/* WARNING: Removing unreachable block (ram,0x006cfc30) */
/* WARNING: Removing unreachable block (ram,0x006cfcdc) */
/* WARNING: Removing unreachable block (ram,0x006cfcf8) */
/* WARNING: Removing unreachable block (ram,0x006cfd44) */
/* WARNING: Removing unreachable block (ram,0x006cfd58) */
/* WARNING: Removing unreachable block (ram,0x006cfd78) */
/* WARNING: Removing unreachable block (ram,0x006cfdc8) */
/* WARNING: Removing unreachable block (ram,0x006cfd7c) */
/* WARNING: Removing unreachable block (ram,0x006cfd88) */
/* WARNING: Removing unreachable block (ram,0x006cfde8) */
/* WARNING: Removing unreachable block (ram,0x006cfe0c) */
/* WARNING: Removing unreachable block (ram,0x006cfe40) */
/* WARNING: Removing unreachable block (ram,0x006cfe18) */
/* WARNING: Removing unreachable block (ram,0x006cfd94) */
/* WARNING: Removing unreachable block (ram,0x006cfdc4) */
/* WARNING: Removing unreachable block (ram,0x006cfdd4) */
/* WARNING: Removing unreachable block (ram,0x006cfd4c) */
/* WARNING: Removing unreachable block (ram,0x006cfd04) */
/* WARNING: Removing unreachable block (ram,0x006cfd08) */
/* WARNING: Removing unreachable block (ram,0x006cfd14) */
/* WARNING: Removing unreachable block (ram,0x006cfd38) */
/* WARNING: Removing unreachable block (ram,0x006cfa94) */
/* WARNING: Removing unreachable block (ram,0x006cfa98) */

ulong * FUN_006d01cc(ulong *param_1,long *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  ulong uVar16;
  code *extraout_x8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  uint uVar17;
  undefined8 unaff_x22;
  ulong unaff_x23;
  uint uVar18;
  ulong *puVar19;
  undefined8 unaff_x24;
  ulong *unaff_x25;
  ulong unaff_x26;
  undefined8 unaff_x27;
  ulong *puVar20;
  undefined8 unaff_x28;
  undefined8 unaff_x29;
  undefined8 uVar21;
  undefined8 unaff_x30;
  
  puVar11 = (ulong *)0xffffffff;
  uVar13 = 0;
  uVar3 = 0;
  puVar1 = (undefined1 *)register0x00000008;
code_r0x006cf7c8:
  *(undefined8 *)(puVar1 + -0x60) = unaff_x28;
  *(undefined8 *)(puVar1 + -0x58) = unaff_x27;
  *(ulong *)(puVar1 + -0x50) = unaff_x26;
  *(ulong **)(puVar1 + -0x48) = unaff_x25;
  *(undefined8 *)(puVar1 + -0x40) = unaff_x24;
  *(ulong *)(puVar1 + -0x38) = unaff_x23;
  *(undefined8 *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar1 + -0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + -0x18) = unaff_x19;
  *(undefined8 *)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  puVar7 = puVar1 + -0x10;
  puVar6 = param_1;
  puVar19 = param_1;
  plVar8 = param_2;
  puVar20 = puVar11;
  uVar12 = uVar13;
  if ((char)*param_3 != '\0') {
    uVar16 = *param_1;
    if (uVar16 == 0) {
      if (uVar3 != 0) {
        puVar11 = (ulong *)0x0;
        goto LAB_006cf950;
      }
      func_0x006d01f0();
    }
    else {
      uVar9 = (uint)puVar11;
      switch((char)*param_3) {
      case '\x01':
        puVar5 = puVar1 + -100;
        puVar20 = param_3;
        uVar12 = uVar13;
        FUN_006d0cb8(puVar5,param_2,param_1);
        uVar3 = (uint)uVar12;
        if ((int)puVar5 != 0) {
          puVar11 = (ulong *)(ulong)*(uint *)(puVar1 + -100);
          goto LAB_006cf950;
        }
        unaff_x23 = 0;
        unaff_x27 = 0;
        *(undefined4 *)(puVar1 + -100) = 0;
        uVar18 = 0;
        if (uVar9 != 0xffffffff) {
          uVar18 = (uint)uVar13;
        }
        uVar13 = (ulong)uVar18;
        uVar18 = 0x10;
        if (uVar9 != 0xffffffff) {
          uVar18 = uVar9;
        }
        unaff_x25 = (ulong *)(ulong)uVar18;
        unaff_x26 = param_3[2];
        puVar10 = param_1;
        if ((long)param_3[3] < 1) {
          puVar11 = (ulong *)((long)&MACH_HEADER.magic + 1);
          func_0x006ce210(1,0,unaff_x25);
          if ((param_2 == (long *)0x0) || ((int)puVar11 == -1)) goto LAB_006cf950;
          func_0x006d0218();
          puVar20 = unaff_x25;
          func_0x006ce110();
          uVar3 = (uint)uVar13;
          uVar13 = 0;
          unaff_x23 = param_3[2];
          if ((long)param_3[3] < 1) goto LAB_006cf950;
          FUN_006d0d2c(param_1,unaff_x23,1);
          if (puVar10 != (ulong *)0x0) {
            if ((*(byte *)((long)puVar10 + 1) >> 2 & 1) == 0) {
              puVar19 = (ulong *)(*param_1 + puVar10[2]);
            }
            func_0x006d01e4();
            uVar21 = 0x6cfa94;
            goto LAB_006cfaa4;
          }
          goto code_r0x006cf94c;
        }
        FUN_006d0d2c(param_1,unaff_x26,1);
        if (puVar10 == (ulong *)0x0) goto code_r0x006cf94c;
        if ((*(byte *)((long)puVar10 + 1) >> 2 & 1) == 0) {
          puVar19 = (ulong *)(*param_1 + puVar10[2]);
        }
        puVar11 = (ulong *)0xffffffff;
        plVar8 = (long *)0x0;
        func_0x006d01e4();
        uVar21 = 0x6cf9d4;
LAB_006cfaa4:
        *(undefined8 *)(puVar1 + -0xd0) = unaff_x28;
        *(undefined8 *)(puVar1 + -200) = unaff_x27;
        *(ulong *)(puVar1 + -0xc0) = unaff_x26;
        *(ulong **)(puVar1 + -0xb8) = unaff_x25;
        *(ulong *)(puVar1 + -0xb0) = uVar13;
        *(ulong *)(puVar1 + -0xa8) = unaff_x23;
        *(ulong **)(puVar1 + -0xa0) = puVar11;
        *(ulong **)(puVar1 + -0x98) = param_3;
        *(ulong **)(puVar1 + -0x90) = param_1;
        *(long **)(puVar1 + -0x88) = param_2;
        *(undefined1 **)(puVar1 + -0x80) = puVar7;
        *(undefined8 *)(puVar1 + -0x78) = uVar21;
        uVar9 = (uint)*puVar10;
        if ((uVar9 & 0x18) == 0) {
          puVar11 = puVar20;
          uVar18 = 0;
          if ((int)puVar20 != -1) {
            uVar18 = uVar3 & 0xc0;
          }
        }
        else {
          if ((int)puVar20 != -1) {
            func_0x006d01f0();
            goto LAB_006cfaf0;
          }
          puVar11 = (ulong *)(ulong)(uint)puVar10[1];
          uVar18 = uVar9 & 0xc0;
        }
        uVar13 = (ulong)uVar18;
        uVar3 = uVar9 & 1;
        if ((uVar9 & 6) != 0) {
          puVar20 = (ulong *)*puVar19;
          if (puVar20 == (ulong *)0x0) {
            if (uVar3 != 0) {
              return (ulong *)0x0;
            }
            func_0x006d01f0();
LAB_006cfaf0:
            func_0x006d01d8();
            return (ulong *)0xffffffff;
          }
          uVar13 = 0;
          puVar19 = (ulong *)0x0;
          uVar17 = (uint)puVar11;
          bVar2 = (uVar9 & 0x10) != 0;
          uVar3 = 0x10;
          if ((uVar9 & 2) != 0) {
            uVar3 = 0x11;
          }
          uVar9 = uVar17;
          if (bVar2 || uVar17 == 0xffffffff) {
            uVar9 = uVar3;
          }
          puVar11 = (ulong *)(ulong)uVar9;
          if (bVar2 || uVar17 == 0xffffffff) {
            uVar18 = 0;
          }
          *(uint *)(puVar1 + -0xec) = uVar18;
          for (; uVar13 < *puVar20; uVar13 = uVar13 + 1) {
            *(undefined8 *)(puVar1 + -0xe8) = *(undefined8 *)(puVar20[1] + uVar13 * 8);
            puVar7 = puVar1 + -0xe8;
            FUN_006d01cc(puVar7,0,puVar10[4]);
            uVar3 = (uint)puVar7;
            if (uVar3 == 0xffffffff || (int)(uVar3 ^ 0x7fffffff) < (int)puVar19) {
              return (ulong *)0xffffffff;
            }
            puVar19 = (ulong *)(ulong)(uVar3 + (int)puVar19);
          }
          iVar4 = 1;
          goto SUB_006ce210;
        }
        param_3 = (ulong *)puVar10[4];
        if ((uVar9 >> 4 & 1) == 0) goto code_r0x006cfbcc;
        func_0x006d01e4(puVar19,0);
        FUN_006cf7c8();
        if ((int)puVar19 < 1) {
          return puVar19;
        }
        iVar4 = 1;
SUB_006ce210:
        uVar3 = (uint)puVar19;
        if (-1 < (int)uVar3) {
          iVar15 = 1;
          if (0x1e < (int)puVar11) {
            do {
              iVar15 = iVar15 + 1;
              uVar9 = (uint)puVar11;
              puVar11 = (ulong *)((ulong)puVar11 >> 7 & 0x1ffffff);
            } while (0x7f < uVar9);
          }
          if (iVar4 == 2) {
            iVar15 = iVar15 + 3;
          }
          else {
            iVar15 = iVar15 + 1;
            if (0x7f < uVar3) {
              for (; 0 < (int)puVar19; puVar19 = (ulong *)((ulong)puVar19 >> 8 & 0xffffff)) {
                iVar15 = iVar15 + 1;
              }
            }
          }
          uVar9 = iVar15 + uVar3;
          if ((int)(uVar3 ^ 0x7fffffff) <= iVar15) {
            uVar9 = 0xffffffff;
          }
          return (ulong *)(ulong)uVar9;
        }
        return (ulong *)0xffffffff;
      case '\x02':
        if (uVar9 == 0xffffffff) {
          uVar3 = *(uint *)(uVar16 + param_3[1]);
          if (((int)uVar3 < 0) || ((long)param_3[3] <= (long)(ulong)uVar3)) {
            func_0x006d01f0();
            goto LAB_006cf948;
          }
          puVar10 = (ulong *)(param_3[2] + (ulong)uVar3 * 0x28);
          if ((*puVar10 & 1) == 0) {
            if (((uint)*puVar10 >> 10 & 1) == 0) {
              param_1 = (ulong *)(uVar16 + puVar10[2]);
            }
            puVar19 = param_1;
            func_0x006d01e4();
            goto code_r0x006cf870;
          }
        }
        break;
      case '\x04':
        func_0x006d01fc(*(undefined8 *)(param_3[4] + 0x28));
        (*extraout_x8)();
        puVar11 = param_1;
        if ((int)param_1 != 0) goto LAB_006cf950;
        func_0x006d01f0();
        goto LAB_006cf948;
      case '\x05':
        if (uVar9 == 0xffffffff) {
          puVar10 = param_3;
          func_0x006d01fc();
          func_0x006d01e4();
          goto code_r0x006cf89c;
        }
      }
LAB_006cf940:
      func_0x006d01f0();
    }
LAB_006cf948:
    func_0x006d01d8();
code_r0x006cf94c:
    puVar11 = (ulong *)0xffffffff;
LAB_006cf950:
    func_0x006d0224(puVar11,*(undefined8 *)(puVar1 + -8));
    return puVar11;
  }
  puVar10 = (ulong *)param_3[2];
  if (puVar10 != (ulong *)0x0) {
    if ((*puVar10 & 1) == 0) {
code_r0x006cf870:
      uVar3 = (uint)uVar12;
      puVar7 = *(undefined1 **)(puVar1 + -0x10);
      uVar21 = *(undefined8 *)(puVar1 + -8);
      func_0x006d0224();
      goto LAB_006cfaa4;
    }
    goto LAB_006cf940;
  }
  func_0x006d01fc();
code_r0x006cf89c:
  uVar9 = (uint)puVar20;
  uVar21 = *(undefined8 *)(puVar1 + -0x10);
  uVar14 = *(undefined8 *)(puVar1 + -8);
  func_0x006d0224();
  *(ulong *)(puVar1 + -0xc0) = unaff_x26;
  *(ulong **)(puVar1 + -0xb8) = unaff_x25;
  *(ulong *)(puVar1 + -0xb0) = uVar13;
  *(ulong *)(puVar1 + -0xa8) = unaff_x23;
  *(ulong **)(puVar1 + -0xa0) = puVar11;
  *(ulong **)(puVar1 + -0x98) = param_3;
  *(ulong **)(puVar1 + -0x90) = param_1;
  *(long **)(puVar1 + -0x88) = param_2;
  *(undefined8 *)(puVar1 + -0x80) = uVar21;
  *(undefined8 *)(puVar1 + -0x78) = uVar14;
  *(int *)(puVar1 + -200) = (int)puVar10[1];
  puVar19 = puVar6;
  FUN_006cfffc();
  if (-1 < (int)puVar19) {
    if (*(int *)(puVar1 + -0xc4) == 0) {
      uVar18 = *(uint *)(puVar1 + -200);
      uVar3 = uVar18;
      if (uVar9 != 0xffffffff) {
        uVar3 = uVar9;
      }
      puVar11 = (ulong *)(ulong)uVar3;
      if (plVar8 != (long *)0x0) {
        if (0x14 < uVar18 + 3 || (1 << (ulong)(uVar18 + 3 & 0x1f) & 0x180001U) == 0) {
          func_0x006ce110(plVar8,0,puVar19,puVar11,uVar12);
        }
        FUN_006cfffc(puVar6,*plVar8,puVar1 + -0xc4,puVar1 + -200,puVar10);
        if ((int)puVar6 < 0) {
          return (ulong *)0xffffffff;
        }
        *plVar8 = *plVar8 + ((ulong)puVar19 & 0xffffffff);
      }
      if (uVar18 + 3 < 0x15 && (1 << (ulong)(uVar18 + 3 & 0x1f) & 0x180001U) != 0) {
        return puVar19;
      }
      iVar4 = 0;
      goto SUB_006ce210;
    }
    if (uVar3 != 0) {
      return (ulong *)0x0;
    }
    func_0x006d01f0();
    func_0x006d01d8();
  }
  return (ulong *)0xffffffff;
code_r0x006cfbcc:
  unaff_x29 = *(undefined8 *)(puVar1 + -0x80);
  unaff_x30 = *(undefined8 *)(puVar1 + -0x78);
  unaff_x20 = *(undefined8 *)(puVar1 + -0x90);
  unaff_x19 = *(undefined8 *)(puVar1 + -0x88);
  unaff_x22 = *(undefined8 *)(puVar1 + -0xa0);
  unaff_x21 = *(undefined8 *)(puVar1 + -0x98);
  unaff_x24 = *(undefined8 *)(puVar1 + -0xb0);
  unaff_x23 = *(ulong *)(puVar1 + -0xa8);
  unaff_x26 = *(ulong *)(puVar1 + -0xc0);
  unaff_x25 = *(ulong **)(puVar1 + -0xb8);
  unaff_x28 = *(undefined8 *)(puVar1 + -0xd0);
  unaff_x27 = *(undefined8 *)(puVar1 + -200);
  puVar1 = puVar1 + -0x70;
  param_1 = puVar19;
  param_2 = plVar8;
  goto code_r0x006cf7c8;
}



/* Entry: 006d0240; end: 006d025f;  */

void FUN_006d0240(void)

{
  func_0x006d05f8();
  return;
}



/* Entry: 006d0260; end: 006d048f;  */

void FUN_006d0260(long *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  bool bVar11;
  long *plVar3;
  
  do {
    if (param_1 == (long *)0x0) {
      return;
    }
    if (*param_2 != '\0') {
      lVar7 = *param_1;
      if (lVar7 == 0) {
        return;
      }
      switch(*param_2) {
      case '\x01':
        plVar3 = param_1;
        func_0x006d0604();
        iVar2 = (int)plVar3;
        FUN_006d0b48();
        if (iVar2 == 0) {
          return;
        }
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d03ec:
          bVar11 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d03ec;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar11 = false;
        }
        func_0x006d0604();
        FUN_006d0bcc();
        lVar6 = *(long *)(param_2 + 0x18);
        lVar8 = *(long *)(param_2 + 0x10) + lVar6 * 0x28;
        for (lVar7 = 0; lVar8 = lVar8 + -0x28, lVar7 < lVar6; lVar7 = lVar7 + 1) {
          plVar3 = param_1;
          FUN_006d0d2c(param_1,lVar8,0);
          if (plVar3 != (long *)0x0) {
            plVar4 = param_1;
            if ((*(byte *)((long)plVar3 + 1) >> 2 & 1) == 0) {
              plVar4 = (long *)(*param_1 + plVar3[2]);
            }
            FUN_006d0498(plVar4);
          }
          lVar6 = *(long *)(param_2 + 0x18);
        }
        if (!bVar11) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
        break;
      case '\x02':
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d0394:
          bVar11 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d0394;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar11 = false;
          lVar7 = *param_1;
        }
        uVar1 = *(uint *)(lVar7 + *(long *)(param_2 + 8));
        if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(param_2 + 0x18))) {
          lVar6 = *(long *)(param_2 + 0x10) + (ulong)uVar1 * 0x28;
          plVar3 = param_1;
          if ((*(byte *)(lVar6 + 1) >> 2 & 1) == 0) {
            plVar3 = (long *)(lVar7 + *(long *)(lVar6 + 0x10));
          }
          FUN_006d0498(plVar3);
        }
        if (!bVar11) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
        break;
      default:
        return;
      case '\x04':
        if (*(long *)(param_2 + 0x20) == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          func_0x006d0604();
                    /* WARNING: Could not recover jumptable at 0x006d038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      case '\x05':
        goto LAB_006d0318;
      }
      if (param_3 == 0) {
        func_0x00701ed0(*param_1);
        *param_1 = 0;
        return;
      }
      return;
    }
    puVar5 = *(ulong **)(param_2 + 0x10);
    param_2 = (char *)0x0;
    if (puVar5 == (ulong *)0x0) {
LAB_006d0318:
      func_0x006d0604();
      if (param_2 == (char *)0x0) {
        piVar9 = (int *)*param_1;
        param_1 = (long *)(piVar9 + 2);
        iVar2 = *piVar9;
        if (iVar2 == 1) {
          iVar2 = -1;
LAB_006d0588:
          *(int *)param_1 = iVar2;
          return;
        }
LAB_006d0590:
        if (*param_1 == 0) {
          return;
        }
        if (iVar2 == -4) {
          FUN_006d0534(param_1,0);
          func_0x00701ed0(*param_1);
          goto LAB_006d05c0;
        }
        if (iVar2 == 5) goto LAB_006d05c0;
        if (iVar2 == 6) {
          func_0x006cc9a8();
          goto LAB_006d05c0;
        }
      }
      else {
        if (*param_2 != '\x05') {
          iVar2 = *(int *)(param_2 + 8);
          if (iVar2 == 1) {
            iVar2 = *(int *)(param_2 + 0x28);
            goto LAB_006d0588;
          }
          goto LAB_006d0590;
        }
        if (*param_1 == 0) {
          return;
        }
      }
      FUN_006ce410();
      *param_1 = 0;
LAB_006d05c0:
      *param_1 = 0;
      return;
    }
    if ((*puVar5 & 6) != 0) {
      puVar5 = (ulong *)*param_1;
      if (puVar5 != (ulong *)0x0) {
        for (uVar10 = 0; uVar10 < *puVar5; uVar10 = uVar10 + 1) {
          func_0x006d05f8();
        }
      }
      FUN_00705f10(puVar5);
      *param_1 = 0;
      return;
    }
    param_2 = (char *)puVar5[4];
    param_3 = (uint)*puVar5 & 0x400;
  } while( true );
}



/* Entry: 006d0490; end: 006d0497;  */

void FUN_006d0490(long *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  long lVar9;
  int *piVar10;
  ulong uVar11;
  bool bVar12;
  long *plVar3;
  
  uVar7 = 0;
  do {
    if (param_1 == (long *)0x0) {
      return;
    }
    if (*param_2 != '\0') {
      lVar8 = *param_1;
      if (lVar8 == 0) {
        return;
      }
      switch(*param_2) {
      case '\x01':
        plVar3 = param_1;
        func_0x006d0604();
        iVar2 = (int)plVar3;
        FUN_006d0b48();
        if (iVar2 == 0) {
          return;
        }
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d03ec:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d03ec;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar12 = false;
        }
        func_0x006d0604();
        FUN_006d0bcc();
        lVar6 = *(long *)(param_2 + 0x18);
        lVar9 = *(long *)(param_2 + 0x10) + lVar6 * 0x28;
        for (lVar8 = 0; lVar9 = lVar9 + -0x28, lVar8 < lVar6; lVar8 = lVar8 + 1) {
          plVar3 = param_1;
          FUN_006d0d2c(param_1,lVar9,0);
          if (plVar3 != (long *)0x0) {
            plVar4 = param_1;
            if ((*(byte *)((long)plVar3 + 1) >> 2 & 1) == 0) {
              plVar4 = (long *)(*param_1 + plVar3[2]);
            }
            FUN_006d0498(plVar4);
          }
          lVar6 = *(long *)(param_2 + 0x18);
        }
        if (!bVar12) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
        break;
      case '\x02':
        if (*(long *)(param_2 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d0394:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d0394;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar12 = false;
          lVar8 = *param_1;
        }
        uVar1 = *(uint *)(lVar8 + *(long *)(param_2 + 8));
        if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(param_2 + 0x18))) {
          lVar6 = *(long *)(param_2 + 0x10) + (ulong)uVar1 * 0x28;
          plVar3 = param_1;
          if ((*(byte *)(lVar6 + 1) >> 2 & 1) == 0) {
            plVar3 = (long *)(lVar8 + *(long *)(lVar6 + 0x10));
          }
          FUN_006d0498(plVar3);
        }
        if (!bVar12) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
        break;
      default:
        return;
      case '\x04':
        if (*(long *)(param_2 + 0x20) == 0) {
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x10);
        if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
          func_0x006d0604();
                    /* WARNING: Could not recover jumptable at 0x006d038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        return;
      case '\x05':
        goto LAB_006d0318;
      }
      if (uVar7 == 0) {
        func_0x00701ed0(*param_1);
        *param_1 = 0;
        return;
      }
      return;
    }
    puVar5 = *(ulong **)(param_2 + 0x10);
    param_2 = (char *)0x0;
    if (puVar5 == (ulong *)0x0) {
LAB_006d0318:
      func_0x006d0604();
      if (param_2 == (char *)0x0) {
        piVar10 = (int *)*param_1;
        param_1 = (long *)(piVar10 + 2);
        iVar2 = *piVar10;
        if (iVar2 == 1) {
          iVar2 = -1;
LAB_006d0588:
          *(int *)param_1 = iVar2;
          return;
        }
LAB_006d0590:
        if (*param_1 == 0) {
          return;
        }
        if (iVar2 == -4) {
          FUN_006d0534(param_1,0);
          func_0x00701ed0(*param_1);
          goto LAB_006d05c0;
        }
        if (iVar2 == 5) goto LAB_006d05c0;
        if (iVar2 == 6) {
          func_0x006cc9a8();
          goto LAB_006d05c0;
        }
      }
      else {
        if (*param_2 != '\x05') {
          iVar2 = *(int *)(param_2 + 8);
          if (iVar2 == 1) {
            iVar2 = *(int *)(param_2 + 0x28);
            goto LAB_006d0588;
          }
          goto LAB_006d0590;
        }
        if (*param_1 == 0) {
          return;
        }
      }
      FUN_006ce410();
      *param_1 = 0;
LAB_006d05c0:
      *param_1 = 0;
      return;
    }
    if ((*puVar5 & 6) != 0) {
      puVar5 = (ulong *)*param_1;
      if (puVar5 != (ulong *)0x0) {
        for (uVar11 = 0; uVar11 < *puVar5; uVar11 = uVar11 + 1) {
          func_0x006d05f8();
        }
      }
      FUN_00705f10(puVar5);
      *param_1 = 0;
      return;
    }
    param_2 = (char *)puVar5[4];
    uVar7 = (uint)*puVar5 & 0x400;
  } while( true );
}



/* Entry: 006d0498; end: 006d0533;  */

void FUN_006d0498(long *param_1,ulong *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar4;
  long lVar5;
  char *pcVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  ulong uVar8;
  long lVar9;
  int *piVar10;
  ulong *puVar11;
  bool bVar12;
  long *plVar3;
  
  do {
    uVar8 = *param_2;
    if ((uVar8 & 6) != 0) {
      puVar11 = (ulong *)*param_1;
      if (puVar11 != (ulong *)0x0) {
        for (uVar8 = 0; uVar8 < *puVar11; uVar8 = uVar8 + 1) {
          func_0x006d05f8();
        }
      }
      FUN_00705f10(puVar11);
      *param_1 = 0;
      return;
    }
    pcVar6 = (char *)param_2[4];
    if (param_1 == (long *)0x0) {
      return;
    }
    if (*pcVar6 != '\0') {
      lVar7 = *param_1;
      if (lVar7 == 0) {
        return;
      }
      switch(*pcVar6) {
      case '\x01':
        plVar3 = param_1;
        func_0x006d0604();
        iVar2 = (int)plVar3;
        FUN_006d0b48();
        if (iVar2 == 0) {
          return;
        }
        if (*(long *)(pcVar6 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d03ec:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar6 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d03ec;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar12 = false;
        }
        func_0x006d0604();
        FUN_006d0bcc();
        lVar5 = *(long *)(pcVar6 + 0x18);
        lVar9 = *(long *)(pcVar6 + 0x10) + lVar5 * 0x28;
        for (lVar7 = 0; lVar9 = lVar9 + -0x28, lVar7 < lVar5; lVar7 = lVar7 + 1) {
          plVar3 = param_1;
          FUN_006d0d2c(param_1,lVar9,0);
          if (plVar3 != (long *)0x0) {
            plVar4 = param_1;
            if ((*(byte *)((long)plVar3 + 1) >> 2 & 1) == 0) {
              plVar4 = (long *)(*param_1 + plVar3[2]);
            }
            FUN_006d0498(plVar4);
          }
          lVar5 = *(long *)(pcVar6 + 0x18);
        }
        if (!bVar12) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
code_r0x006d0468:
        if ((uVar8 & 0x400) == 0) {
          func_0x00701ed0(*param_1);
          *param_1 = 0;
        }
LAB_006d0478:
        return;
      case '\x02':
        if (*(long *)(pcVar6 + 0x20) == 0) {
          UNRECOVERED_JUMPTABLE = (code *)0x0;
code_r0x006d0394:
          bVar12 = true;
        }
        else {
          UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar6 + 0x20) + 0x10);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) goto code_r0x006d0394;
          iVar2 = 2;
          func_0x006d05e8();
          (*UNRECOVERED_JUMPTABLE)();
          if (iVar2 == 2) {
            return;
          }
          bVar12 = false;
          lVar7 = *param_1;
        }
        uVar1 = *(uint *)(lVar7 + *(long *)(pcVar6 + 8));
        if ((-1 < (int)uVar1) && ((long)(ulong)uVar1 < *(long *)(pcVar6 + 0x18))) {
          lVar5 = *(long *)(pcVar6 + 0x10) + (ulong)uVar1 * 0x28;
          plVar3 = param_1;
          if ((*(byte *)(lVar5 + 1) >> 2 & 1) == 0) {
            plVar3 = (long *)(lVar7 + *(long *)(lVar5 + 0x10));
          }
          FUN_006d0498(plVar3);
        }
        if (!bVar12) {
          func_0x006d05e8(3);
          (*UNRECOVERED_JUMPTABLE)();
        }
        goto code_r0x006d0468;
      default:
        goto LAB_006d0478;
      case '\x04':
        if ((*(long *)(pcVar6 + 0x20) != 0) &&
           (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(pcVar6 + 0x20) + 0x10),
           UNRECOVERED_JUMPTABLE != (code *)0x0)) {
          func_0x006d0604();
                    /* WARNING: Could not recover jumptable at 0x006d038c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        goto LAB_006d0478;
      case '\x05':
        goto LAB_006d0318;
      }
    }
    param_2 = *(ulong **)(pcVar6 + 0x10);
    pcVar6 = (char *)0x0;
  } while (param_2 != (ulong *)0x0);
LAB_006d0318:
  func_0x006d0604();
  if (pcVar6 == (char *)0x0) {
    piVar10 = (int *)*param_1;
    param_1 = (long *)(piVar10 + 2);
    iVar2 = *piVar10;
    if (iVar2 == 1) {
      iVar2 = -1;
LAB_006d0588:
      *(int *)param_1 = iVar2;
      return;
    }
LAB_006d0590:
    if (*param_1 == 0) {
      return;
    }
    if (iVar2 == -4) {
      FUN_006d0534(param_1,0);
      func_0x00701ed0(*param_1);
      goto LAB_006d05c0;
    }
    if (iVar2 == 5) goto LAB_006d05c0;
    if (iVar2 == 6) {
      func_0x006cc9a8();
      goto LAB_006d05c0;
    }
  }
  else {
    if (*pcVar6 != '\x05') {
      iVar2 = *(int *)(pcVar6 + 8);
      if (iVar2 == 1) {
        iVar2 = *(int *)(pcVar6 + 0x28);
        goto LAB_006d0588;
      }
      goto LAB_006d0590;
    }
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_006ce410();
  *param_1 = 0;
LAB_006d05c0:
  *param_1 = 0;
  return;
}



/* Entry: 006d0534; end: 006d05e7;  */

void FUN_006d0534(long *param_1,char *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (char *)0x0) {
    piVar2 = (int *)*param_1;
    param_1 = (long *)(piVar2 + 2);
    iVar1 = *piVar2;
    if (iVar1 == 1) {
      iVar1 = -1;
LAB_006d0588:
      *(int *)param_1 = iVar1;
      return;
    }
LAB_006d0590:
    if (*param_1 == 0) {
      return;
    }
    if (iVar1 == -4) {
      FUN_006d0534(param_1,0);
      func_0x00701ed0(*param_1);
      goto LAB_006d05c0;
    }
    if (iVar1 == 5) goto LAB_006d05c0;
    if (iVar1 == 6) {
      func_0x006cc9a8();
      goto LAB_006d05c0;
    }
  }
  else {
    if (*param_2 != '\x05') {
      iVar1 = *(int *)(param_2 + 8);
      if (iVar1 == 1) {
        iVar1 = *(int *)(param_2 + 0x28);
        goto LAB_006d0588;
      }
      goto LAB_006d0590;
    }
    if (*param_1 == 0) {
      return;
    }
  }
  FUN_006ce410();
  *param_1 = 0;
LAB_006d05c0:
  *param_1 = 0;
  return;
}



/* Entry: 006d05e8; end: 006d060f;  */

void FUN_006d05e8(void)

{
  return;
}



/* Entry: 006d0610; end: 006d0643;  */

undefined8 FUN_006d0610(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  FUN_006d0644(puVar2,param_1);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 006d0644; end: 006d064b;  */

/* WARNING: Removing unreachable block (ram,0x006d07bc) */

undefined8 FUN_006d0644(long *param_1,undefined1 *param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  code *extraout_x8;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  
  uVar4 = 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 0x10) == 0) goto code_r0x006d06b0;
    func_0x006d0864();
    iVar1 = (int)param_1;
    break;
  case 1:
    if ((*(long *)(param_2 + 0x20) != 0) && (*(long *)(*(long *)(param_2 + 0x20) + 0x10) != 0)) {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 != 0) {
        bVar5 = false;
        if (iVar1 == 2) {
          return 1;
        }
        goto code_r0x006d0740;
      }
code_r0x006d085c:
      uVar4 = 0x65;
      goto code_r0x006d082c;
    }
    bVar5 = true;
code_r0x006d0740:
    lVar3 = *(long *)(param_2 + 0x28);
    FUN_00701e90();
    *param_1 = lVar3;
    if (lVar3 != 0) {
      func_0x006d0a04();
      func_0x006d0a50();
      FUN_006d0af4();
      func_0x006d0a50();
      func_0x006d0b6c();
      lVar3 = *(long *)(param_2 + 0x10);
      for (lVar6 = 0; lVar6 < *(long *)(param_2 + 0x18); lVar6 = lVar6 + 1) {
        plVar2 = param_1;
        if ((*(byte *)(lVar3 + 1) >> 2 & 1) == 0) {
          plVar2 = (long *)(*param_1 + *(long *)(lVar3 + 0x10));
        }
        func_0x006d0864(plVar2,lVar3);
        if ((int)plVar2 == 0) {
          uVar4 = 0x41;
          goto code_r0x006d07e4;
        }
        lVar3 = lVar3 + 0x28;
      }
      if (bVar5) {
        return 1;
      }
      goto code_r0x006d07c8;
    }
    goto code_r0x006d0828;
  case 2:
    if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x10) == 0)) {
      bVar5 = true;
    }
    else {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 == 0) goto code_r0x006d085c;
      bVar5 = false;
      if (iVar1 == 2) {
        return 1;
      }
    }
    lVar3 = *(long *)(param_2 + 0x28);
    FUN_00701e90();
    *param_1 = lVar3;
    if (lVar3 == 0) goto code_r0x006d0828;
    func_0x006d0a04();
    *(undefined4 *)(lVar3 + *(long *)(param_2 + 8)) = 0xffffffff;
    if (bVar5) {
      return 1;
    }
code_r0x006d07c8:
    iVar1 = 1;
    func_0x006d0a40();
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0x65;
code_r0x006d07e4:
    func_0x006d0a50();
    FUN_006d0260();
    goto code_r0x006d082c;
  default:
    goto LAB_006d0840;
  case 4:
    if (*(long *)(param_2 + 0x20) == 0) {
      return 1;
    }
    if (*(long *)(*(long *)(param_2 + 0x20) + 8) == 0) {
      return 1;
    }
    func_0x006d0a50();
    iVar1 = (int)param_1;
    (*extraout_x8)();
    break;
  case 5:
code_r0x006d06b0:
    func_0x006d0a50();
    iVar1 = (int)param_1;
    func_0x006d094c();
  }
  if (iVar1 == 0) {
code_r0x006d0828:
    uVar4 = 0x41;
code_r0x006d082c:
    func_0x006d0a5c(0xc,0,uVar4);
    uVar4 = 0;
  }
LAB_006d0840:
  return uVar4;
}



/* Entry: 006d064c; end: 006d0863;  */

undefined8 FUN_006d064c(long *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  code *extraout_x8;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  
  uVar3 = 1;
  switch(*param_2) {
  case 0:
    if (*(long *)(param_2 + 0x10) == 0) goto code_r0x006d06b0;
    func_0x006d0864();
    iVar1 = (int)param_1;
    break;
  case 1:
    if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x10) == 0)) {
      bVar5 = true;
code_r0x006d0740:
      if (param_3 == 0) {
        lVar4 = *(long *)(param_2 + 0x28);
        FUN_00701e90();
        *param_1 = lVar4;
        if (lVar4 == 0) goto code_r0x006d0828;
        func_0x006d0a04();
        func_0x006d0a50();
        FUN_006d0af4();
        func_0x006d0a50();
        func_0x006d0b6c();
      }
      lVar4 = *(long *)(param_2 + 0x10);
      for (lVar6 = 0; lVar6 < *(long *)(param_2 + 0x18); lVar6 = lVar6 + 1) {
        plVar2 = param_1;
        if ((*(byte *)(lVar4 + 1) >> 2 & 1) == 0) {
          plVar2 = (long *)(*param_1 + *(long *)(lVar4 + 0x10));
        }
        func_0x006d0864(plVar2,lVar4);
        if ((int)plVar2 == 0) {
          uVar3 = 0x41;
          goto code_r0x006d07e4;
        }
        lVar4 = lVar4 + 0x28;
      }
      if (bVar5) {
        return 1;
      }
code_r0x006d07c8:
      iVar1 = 1;
      func_0x006d0a40();
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = 0x65;
code_r0x006d07e4:
      func_0x006d0a50();
      FUN_006d0260();
    }
    else {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 != 0) {
        bVar5 = false;
        if (iVar1 == 2) {
          return 1;
        }
        goto code_r0x006d0740;
      }
code_r0x006d085c:
      uVar3 = 0x65;
    }
    goto code_r0x006d082c;
  case 2:
    if ((*(long *)(param_2 + 0x20) == 0) || (*(long *)(*(long *)(param_2 + 0x20) + 0x10) == 0)) {
      bVar5 = true;
    }
    else {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 == 0) goto code_r0x006d085c;
      bVar5 = false;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if (param_3 != 0) {
      lVar4 = *param_1;
code_r0x006d0810:
      *(undefined4 *)(lVar4 + *(long *)(param_2 + 8)) = 0xffffffff;
      if (bVar5) {
        return 1;
      }
      goto code_r0x006d07c8;
    }
    lVar4 = *(long *)(param_2 + 0x28);
    FUN_00701e90();
    *param_1 = lVar4;
    if (lVar4 != 0) {
      func_0x006d0a04();
      goto code_r0x006d0810;
    }
    goto code_r0x006d0828;
  default:
    goto LAB_006d0840;
  case 4:
    if (*(long *)(param_2 + 0x20) == 0) {
      return 1;
    }
    if (*(long *)(*(long *)(param_2 + 0x20) + 8) == 0) {
      return 1;
    }
    func_0x006d0a50();
    iVar1 = (int)param_1;
    (*extraout_x8)();
    break;
  case 5:
code_r0x006d06b0:
    func_0x006d0a50();
    iVar1 = (int)param_1;
    func_0x006d094c();
  }
  if (iVar1 == 0) {
code_r0x006d0828:
    uVar3 = 0x41;
code_r0x006d082c:
    func_0x006d0a5c(0xc,0,uVar3);
    uVar3 = 0;
  }
LAB_006d0840:
  return uVar3;
}



/* Entry: 006d0864; end: 006d0a03;  */

undefined8 FUN_006d0864(long *param_1,ulong *param_2)

{
  int iVar1;
  long *plVar2;
  undefined1 *puVar3;
  code *extraout_x8;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  
  uVar5 = *param_2;
  if ((uVar5 & 1) != 0) {
code_r0x006d08a8:
    if ((*param_2 & 0x306) != 0) goto LAB_006d0888;
    puVar3 = (undefined1 *)param_2[4];
    switch(*puVar3) {
    case 0:
      goto code_r0x006d08d4;
    case 1:
    case 2:
      goto LAB_006d0888;
    default:
      return 1;
    case 4:
      if ((*(long *)(puVar3 + 0x20) != 0) &&
         (pcVar4 = *(code **)(*(long *)(puVar3 + 0x20) + 0x18), pcVar4 != (code *)0x0)) {
        (*pcVar4)(param_1);
        return 1;
      }
      goto LAB_006d0888;
    case 5:
      goto code_r0x006d08dc;
    }
  }
  if ((uVar5 & 0x300) != 0) {
LAB_006d0888:
    *param_1 = 0;
    return 1;
  }
  if ((uVar5 & 6) != 0) {
    plVar2 = param_1;
    FUN_00705ed8();
    if (plVar2 == (long *)0x0) {
      func_0x006d0a5c(0xc,0,0x41);
      return 0;
    }
    *param_1 = (long)plVar2;
    return 1;
  }
  puVar3 = (undefined1 *)param_2[4];
  uVar6 = 1;
  switch(*puVar3) {
  case 0:
    if (*(long *)(puVar3 + 0x10) == 0) goto code_r0x006d06b0;
    FUN_006d0864();
    iVar1 = (int)param_1;
    break;
  case 1:
    if ((*(long *)(puVar3 + 0x20) == 0) || (*(long *)(*(long *)(puVar3 + 0x20) + 0x10) == 0)) {
      bVar8 = true;
code_r0x006d0740:
      if ((uVar5 & 0x400) == 0) {
        lVar7 = *(long *)(puVar3 + 0x28);
        FUN_00701e90();
        *param_1 = lVar7;
        if (lVar7 == 0) goto code_r0x006d0828;
        func_0x006d0a04();
        func_0x006d0a50();
        FUN_006d0af4();
        func_0x006d0a50();
        func_0x006d0b6c();
      }
      lVar7 = *(long *)(puVar3 + 0x10);
      for (lVar9 = 0; lVar9 < *(long *)(puVar3 + 0x18); lVar9 = lVar9 + 1) {
        plVar2 = param_1;
        if ((*(byte *)(lVar7 + 1) >> 2 & 1) == 0) {
          plVar2 = (long *)(*param_1 + *(long *)(lVar7 + 0x10));
        }
        FUN_006d0864(plVar2,lVar7);
        if ((int)plVar2 == 0) {
          uVar6 = 0x41;
          goto code_r0x006d07e4;
        }
        lVar7 = lVar7 + 0x28;
      }
      if (bVar8) {
        return 1;
      }
code_r0x006d07c8:
      iVar1 = 1;
      func_0x006d0a40();
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = 0x65;
code_r0x006d07e4:
      func_0x006d0a50();
      FUN_006d0260();
    }
    else {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 != 0) {
        bVar8 = false;
        if (iVar1 == 2) {
          return 1;
        }
        goto code_r0x006d0740;
      }
code_r0x006d085c:
      uVar6 = 0x65;
    }
    goto code_r0x006d082c;
  case 2:
    if ((*(long *)(puVar3 + 0x20) == 0) || (*(long *)(*(long *)(puVar3 + 0x20) + 0x10) == 0)) {
      bVar8 = true;
    }
    else {
      iVar1 = 0;
      func_0x006d0a40();
      if (iVar1 == 0) goto code_r0x006d085c;
      bVar8 = false;
      if (iVar1 == 2) {
        return 1;
      }
    }
    if ((uVar5 & 0x400) != 0) {
      lVar7 = *param_1;
code_r0x006d0810:
      *(undefined4 *)(lVar7 + *(long *)(puVar3 + 8)) = 0xffffffff;
      if (bVar8) {
        return 1;
      }
      goto code_r0x006d07c8;
    }
    lVar7 = *(long *)(puVar3 + 0x28);
    FUN_00701e90();
    *param_1 = lVar7;
    if (lVar7 != 0) {
      func_0x006d0a04();
      goto code_r0x006d0810;
    }
    goto code_r0x006d0828;
  default:
    goto LAB_006d0840;
  case 4:
    if (*(long *)(puVar3 + 0x20) == 0) {
      return 1;
    }
    if (*(long *)(*(long *)(puVar3 + 0x20) + 8) == 0) {
      return 1;
    }
    func_0x006d0a50();
    iVar1 = (int)param_1;
    (*extraout_x8)();
    break;
  case 5:
code_r0x006d06b0:
    func_0x006d0a50();
    iVar1 = (int)param_1;
    func_0x006d094c();
  }
  if (iVar1 == 0) {
code_r0x006d0828:
    uVar6 = 0x41;
code_r0x006d082c:
    func_0x006d0a5c(0xc,0,uVar6);
    uVar6 = 0;
  }
LAB_006d0840:
  return uVar6;
code_r0x006d08d4:
  param_2 = *(ulong **)(puVar3 + 0x10);
  if (param_2 == (ulong *)0x0) {
code_r0x006d08dc:
    func_0x006d0a10(param_1);
    return 1;
  }
  goto code_r0x006d08a8;
}



/* Entry: 006d0a04; end: 006d0af3;  */

void FUN_006d0a04(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__bzero_0099a088)();
    return;
  }
  return;
}



/* Entry: 006d0af4; end: 006d0b13;  */

void FUN_006d0af4(undefined4 *param_1)

{
  FUN_006d0b14();
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 1;
  }
  return;
}



/* Entry: 006d0b14; end: 006d0b47;  */

long FUN_006d0b14(long *param_1,char *param_2)

{
  long lVar1;
  
  if (((*param_2 == '\x01') && (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 8) & 1) != 0)) {
    return *param_1 + (long)*(int *)(lVar1 + 0xc);
  }
  return 0;
}



/* Entry: 006d0b48; end: 006d0b9b;  */

/* WARNING: Possible PIC construction at 0x00705ad4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705ad8) */

ulong FUN_006d0b48(ulong param_1)

{
  int iVar1;
  undefined1 **ppuVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int *unaff_x19;
  undefined8 unaff_x20;
  undefined1 **ppuVar6;
  undefined8 uVar7;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  FUN_006d0b14();
  if (param_1 == 0) {
    return 1;
  }
  ppuVar2 = (undefined1 **)&stack0xffffffffffffffe0;
  ppuVar6 = (undefined1 **)&stack0xfffffffffffffff0;
  FUN_00705aec();
  iVar1 = *unaff_x19;
  if (iVar1 == -1) {
    param_1 = 0;
  }
  else {
    if (iVar1 == 0) {
      _abort();
      uVar3 = 0xb29fb0;
      pcStack_28 = FUN_00705aec;
      puStack_30 = (undefined1 *)ppuVar6;
      _pthread_rwlock_wrlock();
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      _abort();
      ppuVar2 = &puStack_40;
      ppuVar6 = &puStack_40;
      uStack_38 = 0x70650c;
      puStack_40 = (undefined1 *)&puStack_30;
      _pthread_rwlock_unlock();
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      uVar7 = 0x706528;
      _abort();
      goto SUB_00706528;
    }
    *unaff_x19 = iVar1 + -1;
    param_1 = (ulong)(iVar1 + -1 == 0);
  }
  uVar3 = 0xb29fb0;
  uVar7 = 0x705ad8;
SUB_00706528:
  *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar6;
  *(undefined8 *)((long)ppuVar2 + -8) = uVar7;
  _pthread_rwlock_unlock();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  _abort();
  *(undefined1 **)((long)ppuVar2 + -0x20) = (undefined1 *)((long)ppuVar2 + -0x10);
  *(undefined8 *)((long)ppuVar2 + -0x18) = 0x706544;
  _pthread_once();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  _abort();
  *(undefined8 *)((long)ppuVar2 + -0x40) = unaff_x20;
  *(ulong *)((long)ppuVar2 + -0x38) = param_1;
  *(undefined1 **)((long)ppuVar2 + -0x30) = (undefined1 *)((long)ppuVar2 + -0x20);
  *(code **)((long)ppuVar2 + -0x28) = FUN_00706560;
  FUN_0070673c();
  if (iRam0000000000b6cdd0 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = lRam0000000000b6cdd8;
    _pthread_getspecific();
    uVar5 = 0;
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(lVar4 + (uVar3 & 0xffffffff) * 8);
    }
  }
  return uVar5;
}



/* Entry: 006d0b9c; end: 006d0bcb;  */

long FUN_006d0b9c(long *param_1,long param_2)

{
  long lVar1;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) >> 1 & 1) != 0)) {
    return *param_1 + (long)*(int *)(lVar1 + 0x18);
  }
  return 0;
}



/* Entry: 006d0bcc; end: 006d0c1b;  */

void FUN_006d0bcc(long *param_1)

{
  FUN_006d0b9c();
  if (param_1 != (long *)0x0) {
    if ((*param_1 != 0) && ((*(byte *)((long)param_1 + 0x14) & 1) == 0)) {
      func_0x00701ed0();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xfc;
    *(undefined4 *)(param_1 + 2) = 1;
  }
  return;
}



/* Entry: 006d0c1c; end: 006d0cab;  */

void FUN_006d0c1c(long *param_1,long param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  long lVar2;
  
  FUN_006d0b9c(param_1,param_4);
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)((long)param_1 + 0x14);
    if ((bVar1 & 1) == 0) {
      func_0x00701ed0(*param_1);
      bVar1 = *(byte *)((long)param_1 + 0x14);
    }
    *(byte *)((long)param_1 + 0x14) = bVar1 & 0xfc | bVar1 >> 1 & 1;
    if ((bVar1 >> 1 & 1) == 0) {
      lVar2 = (long)param_3;
      func_0x00701e90();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return;
      }
      FUN_006d0cac();
    }
    else {
      *param_1 = param_2;
    }
    param_1[1] = (long)param_3;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 006d0cac; end: 006d0cb7;  */

void FUN_006d0cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006d0cb8; end: 006d0d2b;  */

void FUN_006d0cb8(undefined4 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  FUN_006d0b9c(param_3,param_4);
  if ((param_3 != (undefined8 *)0x0) && (*(int *)(param_3 + 2) == 0)) {
    if (param_2 != (long *)0x0) {
      FUN_006d0cac(*param_2,*param_3,param_3[1]);
      *param_2 = *param_2 + param_3[1];
    }
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = (int)param_3[1];
    }
  }
  return;
}



/* Entry: 006d0d2c; end: 006d0dcb;  */

long FUN_006d0d2c(long *param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(byte *)(param_2 + 1) & 3) != 0) {
    lVar4 = *(long *)(param_2 + 0x20);
    lVar2 = *(long *)(*param_1 + *(long *)(lVar4 + 8));
    if (lVar2 == 0) {
      param_2 = *(long *)(lVar4 + 0x30);
    }
    else {
      FUN_00702384();
      lVar1 = *(long *)(lVar4 + 0x18) + 8;
      for (uVar3 = *(ulong *)(lVar4 + 0x20) &
                   ((long)*(ulong *)(lVar4 + 0x20) >> 0x3f ^ 0xffffffffffffffffU); uVar3 != 0;
          uVar3 = uVar3 - 1) {
        if (*(int *)(lVar1 + -8) == (int)lVar2) {
          return lVar1;
        }
        lVar1 = lVar1 + 0x30;
      }
      param_2 = *(long *)(lVar4 + 0x28);
    }
    if (param_2 == 0) {
      if (param_3 != 0) {
        FUN_006de8e4(0xc,0,0xba,0,0);
      }
      param_2 = 0;
    }
  }
  return param_2;
}



/* Entry: 006d0dcc; end: 006d0dd7;  */

void FUN_006d0dcc(void)

{
  return;
}



/* Entry: 006d0dd8; end: 006d0eff;  */

void FUN_006d0dd8(int *param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  long lStack_30;
  int iStack_24;
  
  piVar6 = param_1;
  FUN_006d0f00();
  if ((int)piVar6 != 0) {
    lVar4 = ((lStack_30 + 0x10bd9) * 4) / 0x23ab1;
    lVar2 = (lVar4 * 0x23ab1 + 3) / -4 + lStack_30 + 0x10bd9;
    lVar5 = (lVar2 * 4000 + 4000) / 0x164b09;
    lVar2 = lVar2 + (lVar5 * 0x5b5) / -4 + 0x1f;
    lVar7 = lVar2 * 0x50;
    iVar3 = (int)(lVar7 / 0x6925);
    iVar1 = (int)lVar5 + (int)lVar4 * 100 + iVar3;
    if (0xffffe05b < iVar1 - 0x3a34U) {
      lVar7 = lVar7 / 0x98f;
      param_1[4] = (int)lVar7 + iVar3 * -0xc + 1;
      param_1[5] = iVar1 + -0x1a90;
      param_1[2] = iStack_24 / 0xe10;
      param_1[3] = (int)((lVar7 * 0x98f) / -0x50) + (int)lVar2;
      *param_1 = iStack_24 % 0x3c;
      param_1[1] = (iStack_24 / 0x3c) % 0x3c;
    }
  }
  return;
}



/* Entry: 006d0f00; end: 006d1003;  */

undefined8 FUN_006d0f00(int *param_1,int param_2,long param_3,long *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(param_3 / 0x15180);
  param_2 = param_2 + iVar4;
  iVar4 = (int)param_3 + iVar4 * -0x15180 + param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1;
  if (iVar4 < 0x15180) {
    if (iVar4 < 0) {
      param_2 = param_2 + -1;
      iVar4 = iVar4 + 0x15180;
    }
  }
  else {
    param_2 = param_2 + 1;
    iVar4 = iVar4 + -0x15180;
  }
  iVar3 = (param_1[4] + -0xd) / 0xc;
  iVar2 = param_1[5] + iVar3;
  lVar1 = (long)(param_1[3] + ((iVar2 + 0x76c) * 0x5b5 + 0x6b01c0) / 4 +
                 ((param_1[4] + iVar3 * -0xc) * 0x16f + -0x16f) / 0xc + -0x7d4b +
                (((iVar2 + 0x1a90) / 100) * 3) / -4) + (long)param_2;
  if (lVar1 < 0) {
    return 0;
  }
  *param_4 = lVar1;
  *param_5 = iVar4;
  return 1;
}



/* Entry: 006d1004; end: 006d10cb;  */

void FUN_006d1004(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lStack_48;
  long lStack_40;
  int iStack_38;
  int iStack_34;
  
  FUN_006d10cc();
  if ((param_3 != 0) && (FUN_006d10cc(), param_4 != 0)) {
    iVar3 = iStack_38 - iStack_34;
    uVar1 = (uint)((lStack_48 - lStack_40 != 0 && lStack_40 <= lStack_48) && iVar3 < 0);
    iVar2 = iVar3 + 0x15180;
    if (uVar1 == 0) {
      iVar2 = iVar3;
    }
    lVar4 = (lStack_48 - lStack_40) - (ulong)uVar1;
    iVar3 = iVar2 + -0x15180;
    if (lVar4 >= 0 || 0 >= iVar2) {
      iVar3 = iVar2;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = (int)lVar4 + (uint)(lVar4 < 0 && 0 < iVar2);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
    }
  }
  return;
}



/* Entry: 006d10cc; end: 006d10d7;  */

undefined8
FUN_006d10cc(int *param_1,undefined8 param_2,undefined8 param_3,long *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1;
  if (iVar5 < 0x15180) {
    if (iVar5 < 0) {
      iVar4 = -1;
      iVar5 = iVar5 + 0x15180;
    }
  }
  else {
    iVar4 = 1;
    iVar5 = iVar5 + -0x15180;
  }
  iVar3 = (param_1[4] + -0xd) / 0xc;
  iVar2 = param_1[5] + iVar3;
  lVar1 = (long)(param_1[3] + ((iVar2 + 0x76c) * 0x5b5 + 0x6b01c0) / 4 +
                 ((param_1[4] + iVar3 * -0xc) * 0x16f + -0x16f) / 0xc + -0x7d4b +
                (((iVar2 + 0x1a90) / 100) * 3) / -4) + (long)iVar4;
  if (lVar1 < 0) {
    return 0;
  }
  *param_4 = lVar1;
  *param_5 = iVar5;
  return 1;
}



/* Entry: 006d10d8; end: 006d1217;  */

void FUN_006d10d8(uint *param_1,long param_2,undefined4 *param_3,long param_4,ulong param_5)

{
  undefined2 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  
  *param_3 = 0;
  if (param_5 != 0) {
    uVar3 = (ulong)*param_1;
    uVar5 = 0x30 - uVar3;
    if (param_5 < uVar5) {
      func_0x006d17b4((long)param_1 + uVar3 + 4);
      *param_1 = *param_1 + (int)param_5;
    }
    else {
      if (*param_1 == 0) {
        uVar3 = 0;
      }
      else {
        FUN_006d1218((long)(param_1 + 1) + uVar3,param_4,uVar5);
        param_4 = param_4 + uVar5;
        lVar2 = param_2;
        FUN_006d1224(param_2,param_1 + 1,0x30);
        *param_1 = 0;
        puVar1 = (undefined2 *)(param_2 + lVar2);
        param_2 = (long)puVar1 + 1;
        *puVar1 = 10;
        uVar3 = lVar2 + 1;
        param_5 = param_5 - uVar5;
      }
      while (0x2f < param_5) {
        lVar2 = param_2;
        FUN_006d1224(param_2,param_4,0x30);
        puVar1 = (undefined2 *)(param_2 + lVar2);
        param_2 = (long)puVar1 + 1;
        *puVar1 = 10;
        if (-lVar2 - 2U < uVar3) {
          *param_3 = 0;
          return;
        }
        param_4 = param_4 + 0x30;
        uVar3 = uVar3 + lVar2 + 1;
        param_5 = param_5 - 0x30;
      }
      if (param_5 != 0) {
        func_0x006d17b4(param_1 + 1);
      }
      *param_1 = (uint)param_5;
      uVar4 = 0;
      if (uVar3 >> 0x1f == 0) {
        uVar4 = (undefined4)uVar3;
      }
      *param_3 = uVar4;
    }
  }
  return;
}



/* Entry: 006d1218; end: 006d1223;  */

void FUN_006d1218(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006d1224; end: 006d132b;  */

long FUN_006d1224(long param_1,long param_2,ulong param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  puVar1 = (undefined1 *)(param_1 + 1);
  pbVar2 = (byte *)(param_2 + 1);
  lVar8 = 3;
  while (param_3 != 0) {
    uVar9 = (uint)pbVar2[-1] << 0x10;
    uVar7 = param_3 - 3;
    if (param_3 < 3) {
      if (param_3 == 2) {
        uVar9 = uVar9 | (uint)*pbVar2 << 8;
      }
      uVar5 = (undefined1)(uVar9 >> 0x12);
      FUN_006d1388();
      puVar1[-1] = uVar5;
      uVar5 = (undefined1)(uVar9 >> 0xc);
      FUN_006d1388();
      *puVar1 = uVar5;
      if (param_3 == 1) {
        uVar5 = 0x3d;
      }
      else {
        uVar5 = (undefined1)(uVar9 >> 6);
        FUN_006d1388();
      }
      uVar7 = 0;
      puVar1[1] = uVar5;
      puVar1[2] = 0x3d;
    }
    else {
      bVar3 = *pbVar2;
      bVar6 = pbVar2[1];
      bVar4 = pbVar2[-1] >> 2;
      FUN_006d1388();
      puVar1[-1] = bVar4;
      uVar5 = (undefined1)((uVar9 | (uint)bVar3 << 8) >> 0xc);
      FUN_006d1388();
      *puVar1 = uVar5;
      uVar5 = (undefined1)(CONCAT11(bVar3,bVar6) >> 6);
      FUN_006d1388();
      puVar1[1] = uVar5;
      FUN_006d1388();
      puVar1[2] = bVar6;
    }
    lVar8 = lVar8 + 4;
    puVar1 = puVar1 + 4;
    pbVar2 = pbVar2 + 3;
    param_3 = uVar7;
  }
  puVar1[-1] = 0;
  return lVar8 + -3;
}



/* Entry: 006d132c; end: 006d1387;  */

void FUN_006d132c(int *param_1,long param_2,int *param_3)

{
  long lVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_006d1224(param_2,param_1 + 1);
    iVar2 = (int)lVar1 + 1;
    *(undefined2 *)(param_2 + lVar1) = 10;
    *param_1 = 0;
  }
  *param_3 = iVar2;
  return;
}



/* Entry: 006d1388; end: 006d13d7;  */

uint FUN_006d1388(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 & 0x3f;
  uVar1 = (uint)((long)((ulong)(param_1 ^ 0x3e) - 1) >> 0x3f);
  uVar1 = (uVar1 ^ 0xffffffff) & 0x2f | uVar1 & 0x2b;
  if (param_1 < 0x3e) {
    uVar1 = param_1 - 4;
  }
  if (param_1 < 0x34) {
    uVar1 = param_1 + 0x47;
  }
  if (param_1 < 0x1a) {
    uVar1 = param_1 + 0x41;
  }
  return uVar1 & 0xff;
}



/* Entry: 006d13d8; end: 006d1647;  */

ulong FUN_006d13d8(uint *param_1,long param_2,undefined4 *param_3,byte *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong uStack_68;
  
  *param_3 = 0;
  if (*(char *)((long)param_1 + 0x35) != '\0') {
    return 0xffffffff;
  }
  uVar5 = 0;
  do {
    if (param_5 == 0) {
      if (uVar5 >> 0x1f == 0) {
        *param_3 = (int)uVar5;
        uVar5 = (ulong)((char)param_1[0xd] == '\0');
      }
      else {
        *(undefined1 *)((long)param_1 + 0x35) = 1;
        *param_3 = 0;
LAB_006d14e8:
        uVar5 = 0xffffffff;
      }
      return uVar5;
    }
    bVar3 = *param_4;
    if (0x20 < bVar3 || (1L << ((ulong)bVar3 & 0x3f) & 0x100002600U) == 0) {
      if ((char)param_1[0xd] != '\0') {
LAB_006d14e0:
        *(undefined1 *)((long)param_1 + 0x35) = 1;
        goto LAB_006d14e8;
      }
      uVar2 = *param_1;
      uVar1 = uVar2 + 1;
      *param_1 = uVar1;
      *(byte *)((long)(param_1 + 1) + (ulong)uVar2) = bVar3;
      if (uVar1 == 4) {
        lVar4 = param_2;
        func_0x006d150c(param_2,&uStack_68,param_1 + 1);
        if ((int)lVar4 == 0) goto LAB_006d14e0;
        *param_1 = 0;
        if (uStack_68 < 3) {
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
        uVar5 = uStack_68 + uVar5;
        param_2 = param_2 + uStack_68;
      }
    }
    param_4 = param_4 + 1;
    param_5 = param_5 + -1;
  } while( true );
}



/* Entry: 006d1648; end: 006d170f;  */

long FUN_006d1648(long param_1,long *param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_58;
  
  *param_2 = 0;
  if ((param_5 & 3) != 0) {
    return 0;
  }
  if (param_3 < (param_5 >> 1) + (param_5 >> 2)) {
LAB_006d168c:
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    for (uVar3 = 0; uVar3 < param_5; uVar3 = uVar3 + 4) {
      lVar2 = param_1;
      func_0x006d150c(param_1,&lStack_58,param_4);
      if ((int)lVar2 == 0) {
        return lVar2;
      }
      if (param_5 - 4 != uVar3 && lStack_58 != 3) goto LAB_006d168c;
      param_1 = param_1 + lStack_58;
      lVar1 = lStack_58 + lVar1;
      param_4 = param_4 + 4;
    }
    *param_2 = lVar1;
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 006d1710; end: 006d17d3;  */

uint FUN_006d1710(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar2 = param_1 - 0x41;
  uVar7 = (ulong)param_1;
  uVar3 = param_1 - 0x47;
  bVar6 = 0x19 < (param_1 - 0x61 & 0xff);
  if (bVar6) {
    uVar3 = 0;
  }
  uVar8 = (uint)((long)((uVar7 ^ 0x3d) - 1) >> 0x3f);
  if ((!bVar6 || (uVar2 & 0xff) < 0x1a) || (param_1 - 0x30 & 0xff) < 10) {
    uVar8 = 0xffffffff;
  }
  if (0x19 < uVar2) {
    uVar2 = 0;
  }
  uVar1 = param_1 + 4;
  if (9 < param_1 - 0x30) {
    uVar1 = 0;
  }
  uVar4 = (uint)((uVar7 ^ 0x2b) - 1 >> 0x20);
  uVar5 = (uint)((uVar7 ^ 0x2f) - 1 >> 0x20);
  return (uVar3 | uVar2 | uVar1 | (int)uVar4 >> 0x1f & 0x3eU | (int)uVar5 >> 0x1f & 0x3fU |
         (uVar8 | (int)(uVar4 | uVar5) >> 0x1f) ^ 0xffffffff) & 0xff;
}



/* Entry: 006d17d4; end: 006d1a47;  */

qword * FUN_006d17d4(qword param_1)

{
  qword *pqVar1;
  qword *pqVar2;
  
  pqVar2 = &segment_command_00000020.vmsize;
  FUN_00701e90();
  if (pqVar2 == (qword *)0x0) {
    func_0x006d1dc8();
    func_0x006d1dac();
  }
  else {
    pqVar2[1] = 0;
    *pqVar2 = 0;
    pqVar2[3] = 0;
    pqVar2[2] = 0;
    pqVar2[5] = 0;
    pqVar2[4] = 0;
    pqVar2[7] = 0;
    pqVar2[6] = 0;
    *pqVar2 = param_1;
    *(undefined4 *)((long)pqVar2 + 0xc) = 1;
    *(dword *)((long)pqVar2 + 0x1c) = 1;
    if ((*(code **)(param_1 + 0x38) != (code *)0x0) &&
       (pqVar1 = pqVar2, (**(code **)(param_1 + 0x38))(), (int)pqVar1 == 0)) {
      func_0x00701ed0(pqVar2);
      pqVar2 = (qword *)0x0;
    }
  }
  return pqVar2;
}



/* Entry: 006d1a48; end: 006d1a93;  */

void FUN_006d1a48(undefined8 param_1)

{
  func_0x006d1df0(param_1,0xb);
  return;
}



/* Entry: 006d1a94; end: 006d1a9f;  */

uint FUN_006d1a94(long param_1)

{
  return *(uint *)(param_1 + 0x10) & 8;
}



/* Entry: 006d1aa0; end: 006d1abb;  */

ulong FUN_006d1aa0(ulong param_1)

{
  func_0x006d1df0(param_1,10);
  return param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 006d1abc; end: 006d1d13;  */

undefined8 FUN_006d1abc(undefined8 param_1,ulong *param_2,ulong *param_3,char *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  int iStack_5c;
  undefined2 uStack_56;
  byte abStack_54 [4];
  
  uVar3 = param_1;
  FUN_006d1d14(param_1,&uStack_56,&iStack_5c,2);
  if ((int)uVar3 == 0) {
    if (iStack_5c != 0) {
      func_0x006d1dd4();
      goto LAB_006d1ce8;
    }
    goto LAB_006d1ce0;
  }
  if ((((byte)uStack_56 ^ 0xff) & 0x1f) == 0) goto LAB_006d1b0c;
  uVar7 = (ulong)uStack_56._1_1_;
  if (-1 < (short)uStack_56) {
    lVar9 = 2;
LAB_006d1b38:
    if ((uVar7 >> 0x1f == 0) && (puVar4 = (undefined1 *)(lVar9 + uVar7), puVar4 <= param_4)) {
      *param_3 = (ulong)puVar4;
      FUN_00701e90();
      *param_2 = (ulong)puVar4;
      if (puVar4 != (undefined1 *)0x0) {
        _memcpy();
        FUN_006d1d14(param_1,puVar4 + lVar9,0,uVar7);
        if ((int)param_1 == 0) {
          func_0x006d1dd4();
          func_0x006d1dac();
          func_0x00701ed0(*param_2);
          return 0;
        }
        return 1;
      }
      func_0x006d1dd4();
    }
    else {
      func_0x006d1dd4();
    }
    goto LAB_006d1ce8;
  }
  if ((((byte)uStack_56 >> 5 & 1) == 0) || ((uStack_56 & 0x7f00) != 0)) {
    uVar10 = uVar7 & 0x7f;
    if (0xfb < ((int)uVar10 - 5U & 0xff)) {
      uVar3 = param_1;
      FUN_006d1d14(param_1,abStack_54,0,uVar10);
      if ((int)uVar3 == 0) goto LAB_006d1ce0;
      uVar7 = 0;
      uVar6 = uVar10;
      pbVar11 = abStack_54;
      if ((uStack_56 & 0x7f00) != 0) {
        do {
          uVar7 = (ulong)((uint)*pbVar11 | (int)uVar7 << 8);
          uVar6 = uVar6 - 1;
          pbVar11 = pbVar11 + 1;
        } while (uVar6 != 0);
      }
      if ((0x7f < (uint)uVar7) &&
         ((uint)uVar7 >> (ulong)((uStack_56._1_1_ & 0x1f) * 8 - 8 & 0x1f) != 0)) {
        lVar9 = uVar10 + 2;
        goto LAB_006d1b38;
      }
    }
LAB_006d1b0c:
    func_0x006d1dd4();
  }
  else {
    pcVar8 = param_4;
    if (section_00000ff8.sectname + 9 < param_4) {
      pcVar8 = section_00000ff8.sectname + 10;
    }
    if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < param_4) {
      pcVar5 = pcVar8;
      FUN_00701e90();
      *param_2 = (ulong)pcVar5;
      if (pcVar5 != (char *)0x0) {
        *(ushort *)pcVar5 = uStack_56;
        puVar4 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
        while (pcVar8 != puVar4) {
          uVar3 = param_1;
          func_0x006d18ac(param_1,puVar4 + *param_2,(int)pcVar8 - (int)puVar4);
          iVar2 = (int)uVar3;
          if (iVar2 == -1) break;
          if (iVar2 == 0) {
            *param_3 = (ulong)puVar4;
            return 1;
          }
          puVar4 = puVar4 + iVar2;
          if ((pcVar8 < param_4) && ((ulong)((long)pcVar8 - (long)puVar4) < 0x800)) {
            pcVar5 = pcVar8 + 0x1000;
            if (param_4 <= pcVar8 + 0x1000) {
              pcVar5 = param_4;
            }
            bVar1 = pcVar8 < (char *)0xfffffffffffff000;
            pcVar8 = param_4;
            if (bVar1) {
              pcVar8 = pcVar5;
            }
            uVar7 = *param_2;
            FUN_00701f14(uVar7,pcVar8);
            if (uVar7 == 0) break;
            *param_2 = uVar7;
          }
        }
        func_0x00701ed0(*param_2);
      }
    }
LAB_006d1ce0:
    func_0x006d1dd4();
  }
LAB_006d1ce8:
  func_0x006d1dac();
  return 0;
}



/* Entry: 006d1d14; end: 006d1dab;  */

undefined8 FUN_006d1d14(ulong param_1,long param_2,uint *param_3,ulong param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 1;
  while( true ) {
    if (param_4 == 0) {
      return 1;
    }
    uVar2 = (undefined4)param_4;
    if (param_4 >> 0x1f != 0) {
      uVar2 = 0x7fffffff;
    }
    uVar1 = param_1;
    func_0x006d18ac(param_1,param_2,uVar2);
    if ((int)uVar1 < 1) break;
    uVar3 = 0;
    param_2 = param_2 + (uVar1 & 0xffffffff);
    param_4 = param_4 - (uVar1 & 0xffffffff);
  }
  if (param_3 == (uint *)0x0) {
    return 0;
  }
  *param_3 = uVar3 & (int)uVar1 == 0;
  return 0;
}



/* Entry: 006d1dac; end: 006d1dfb;  */

void FUN_006d1dac(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006d1dfc; end: 006d1e77;  */

void FUN_006d1dfc(ulong param_1,uint param_2)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong uVar3;
  
  if ((int)param_2 < 0) {
    uVar3 = param_1;
    _strlen();
  }
  else {
    uVar3 = (ulong)param_2;
    if ((param_1 == 0) && (param_2 != 0)) {
      func_0x006d2234(0x11,0,0x6f);
      return;
    }
  }
  puVar1 = &UNK_00a11558;
  FUN_006d17d4();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = *(ulong **)(puVar1 + 0x20);
    *puVar2 = uVar3;
    puVar2[1] = param_1;
    puVar2[2] = uVar3;
    *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 0x200;
    *(undefined4 *)(puVar1 + 0x18) = 0;
  }
  return;
}



/* Entry: 006d1e78; end: 006d1e93;  */

undefined * FUN_006d1e78(void)

{
  return &UNK_00a11558;
}



/* Entry: 006d1e94; end: 006d1fe3;  */

undefined8 FUN_006d1e94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1 + 0x10) >> 9 & 1) == 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffdf0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar4 = (uint)*puVar3;
    iVar2 = (int)param_3;
    if (iVar2 <= (int)(uVar4 ^ 0x7fffffff)) {
      puVar1 = puVar3;
      func_0x006d34ac(puVar3,(long)(int)(iVar2 + uVar4));
      if (puVar1 == (undefined8 *)((long)(int)uVar4 + (long)iVar2)) {
        FUN_006d2228(puVar3[1] + (long)(int)uVar4,param_2,(long)iVar2);
        return param_3;
      }
    }
  }
  else {
    func_0x006d2234(0x11,0,0x74);
  }
  return 0xffffffff;
}



/* Entry: 006d1fe4; end: 006d208b;  */

void FUN_006d1fe4(ulong param_1,undefined1 *param_2,int param_3)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  uVar1 = **(uint **)(param_1 + 0x20);
  if ((int)(param_3 - 1U) <= (int)uVar1) {
    uVar1 = param_3 - 1U;
  }
  if ((int)uVar1 < 1) {
    if (0 < param_3) {
      *param_2 = 0;
    }
  }
  else {
    uVar4 = 1;
    uVar5 = (ulong)uVar1;
    pcVar2 = *(char **)(*(uint **)(param_1 + 0x20) + 2);
    while ((uVar3 = (ulong)uVar1, uVar5 != 0 && (uVar3 = uVar4, *pcVar2 != '\n'))) {
      uVar4 = (ulong)((int)uVar4 + 1);
      uVar5 = uVar5 - 1;
      pcVar2 = pcVar2 + 1;
    }
    func_0x006d1f2c(param_1,param_2,uVar3);
    if (0 < (int)param_1) {
      param_2[param_1 & 0xffffffff] = 0;
    }
  }
  return;
}



/* Entry: 006d208c; end: 006d219f;  */

ulong FUN_006d208c(long param_1,int param_2,undefined4 param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = *(ulong **)(param_1 + 0x20);
  uVar1 = 1;
  switch(param_2) {
  case 1:
    if (puVar3[1] != 0) {
      uVar1 = puVar3[2];
      if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
        if (uVar1 != 0) {
          _bzero();
        }
        *puVar3 = 0;
      }
      else {
        uVar2 = *puVar3;
        *puVar3 = uVar1;
        puVar3[1] = puVar3[1] + (uVar2 - uVar1);
      }
    }
    goto LAB_006d218c;
  case 2:
    uVar1 = (ulong)(*puVar3 == 0);
    break;
  case 3:
    uVar1 = *puVar3;
    if (param_4 != (ulong *)0x0) {
      *param_4 = puVar3[1];
    }
    break;
  case 4:
  case 5:
  case 6:
  case 7:
LAB_006d2118:
    uVar1 = 0;
    break;
  case 8:
    uVar1 = (ulong)*(int *)(param_1 + 0xc);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0xc) = param_3;
    goto LAB_006d218c;
  case 10:
    uVar1 = *puVar3;
    break;
  case 0xb:
    break;
  default:
    if (param_2 == 0x72) {
      func_0x006d21dc(param_1);
      *(undefined4 *)(param_1 + 0xc) = param_3;
      *(ulong **)(param_1 + 0x20) = param_4;
    }
    else if (param_2 == 0x73) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = (ulong)puVar3;
      }
    }
    else {
      if (param_2 != 0x82) goto LAB_006d2118;
      *(undefined4 *)(param_1 + 0x18) = param_3;
    }
LAB_006d218c:
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 006d21a0; end: 006d2227;  */

void FUN_006d21a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_006d33c4();
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 8) = 0x100000001;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    *(long *)(param_1 + 0x20) = lVar1;
  }
  return;
}



/* Entry: 006d2228; end: 006d224b;  */

void FUN_006d2228(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006d224c; end: 006d2333;  */

void FUN_006d224c(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  _fopen();
  if (param_1 == 0) {
    piVar2 = (int *)((long)&MACH_HEADER.magic + 2);
    FUN_006d26ac(2,0,0);
    func_0x006d26b8();
    ___error();
    if (*piVar2 == 2) {
      uVar3 = 0x6e;
    }
    else {
      uVar3 = 0x70;
    }
    FUN_006d26ac(0x11,0,uVar3);
  }
  else {
    lVar1 = param_1;
    func_0x006d22e4();
    if (lVar1 == 0) {
      _fclose(param_1);
    }
  }
  return;
}



/* Entry: 006d2334; end: 006d2373;  */

void FUN_006d2334(undefined8 param_1,undefined8 param_2,int param_3)

{
  func_0x006d1a60(param_1,0x6a,(long)param_3,param_2);
  return;
}



/* Entry: 006d2374; end: 006d247f;  */

int FUN_006d2374(long param_1,undefined8 param_2,int param_3)

{
  if (*(int *)(param_1 + 8) != 0) {
    _fwrite(param_2,(long)param_3,1,*(undefined8 *)(param_1 + 0x20));
    if ((int)param_2 < 1) {
      param_3 = (int)param_2;
    }
    return param_3;
  }
  return 0;
}



/* Entry: 006d2480; end: 006d2667;  */

ulong FUN_006d2480(long param_1,int param_2,ulong param_3,ulong *param_4)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  undefined1 auStack_34 [4];
  
  uVar2 = 0;
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar6 = (uint)param_3;
  switch(param_2) {
  case 1:
    param_3 = 0;
    goto LAB_006d2514;
  case 2:
    _feof(uVar5);
    iVar1 = (int)uVar5;
    goto LAB_006d2538;
  case 3:
_ftell:
                    /* WARNING: Could not recover jumptable at 0x0077a63c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__ftell_0099a290)(uVar5);
    return uVar5;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
    break;
  case 8:
    uVar2 = (ulong)*(int *)(param_1 + 0xc);
    break;
  case 9:
    *(uint *)(param_1 + 0xc) = uVar6;
LAB_006d2580:
    uVar2 = 1;
    break;
  case 0xb:
    _fflush(uVar5);
    uVar2 = (ulong)((int)uVar5 == 0);
    break;
  default:
    if (param_2 == 0x6a) {
      FUN_006d2668(param_1);
      *(ulong **)(param_1 + 0x20) = param_4;
      *(undefined4 *)(param_1 + 8) = 1;
      *(uint *)(param_1 + 0xc) = uVar6 & 1;
      return 1;
    }
    if (param_2 == 0x6b) {
      if (param_4 != (ulong *)0x0) {
        *param_4 = uVar5;
      }
      goto LAB_006d2580;
    }
    if (param_2 == 0x6c) {
      FUN_006d2668(param_1);
      *(uint *)(param_1 + 0xc) = uVar6 & 1;
      if ((uVar6 >> 3 & 1) == 0) {
        if ((param_3 & 6) == 6) {
          pcVar3 = "r+";
        }
        else {
          pcVar3 = "r";
          if ((param_3 & 4) != 0) {
            pcVar3 = "w";
          }
          if ((param_3 & 6) == 0) {
            uVar4 = 100;
            goto LAB_006d2658;
          }
        }
      }
      else {
        pcVar3 = "a";
        if ((param_3 & 2) != 0) {
          pcVar3 = "a+";
        }
      }
      FUN_00702124(auStack_34,pcVar3,4);
      _fopen(param_4,auStack_34);
      if (param_4 != (ulong *)0x0) {
        *(ulong **)(param_1 + 0x20) = param_4;
        *(undefined4 *)(param_1 + 8) = 1;
        return 1;
      }
      FUN_006d26ac(2,0,0);
      func_0x006d26b8();
      uVar4 = 2;
LAB_006d2658:
      FUN_006d26ac(0x11,0,uVar4);
      return 0;
    }
    if (param_2 != 0x80) {
      if (param_2 != 0x85) {
        return 0;
      }
      goto _ftell;
    }
LAB_006d2514:
    _fseek(uVar5,param_3,0);
    iVar1 = (int)uVar5;
LAB_006d2538:
    uVar2 = (ulong)iVar1;
  }
  return uVar2;
}



/* Entry: 006d2668; end: 006d26ab;  */

undefined8 FUN_006d2668(long param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((*(int *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x20) != 0)) {
      _fclose();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return 1;
}



/* Entry: 006d26ac; end: 006d26ef;  */

void FUN_006d26ac(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006d26f0; end: 006d282b;  */

undefined8 FUN_006d26f0(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  
  puVar3 = &UNK_00a115f8;
  puVar2 = puVar3;
  FUN_006d17d4();
  FUN_006d17d4();
  if ((puVar2 != (undefined *)0x0) && (puVar3 != (undefined *)0x0)) {
    plVar4 = *(long **)(puVar2 + 0x20);
    if ((*plVar4 == 0) && (plVar5 = *(long **)(puVar3 + 0x20), *plVar5 == 0)) {
      if (plVar4[5] != 0) {
LAB_006d27d0:
        if (plVar5[5] == 0) {
          if (param_4 == 0) {
            param_4 = plVar5[4];
          }
          else {
            plVar5[4] = param_4;
          }
          FUN_00701e90();
          plVar5[5] = param_4;
          if (param_4 == 0) goto LAB_006d2824;
          plVar5[2] = 0;
          plVar5[3] = 0;
        }
        *plVar4 = (long)puVar3;
        *(undefined4 *)(plVar4 + 1) = 0;
        plVar4[6] = 0;
        *plVar5 = (long)puVar2;
        *(undefined4 *)(plVar5 + 1) = 0;
        plVar5[6] = 0;
        uVar1 = 1;
        *(undefined4 *)(puVar2 + 8) = 1;
        *(undefined4 *)(puVar3 + 8) = 1;
        goto LAB_006d2784;
      }
      if (param_2 == 0) {
        param_2 = plVar4[4];
      }
      else {
        plVar4[4] = param_2;
      }
      FUN_00701e90();
      plVar4[5] = param_2;
      if (param_2 != 0) {
        plVar4[2] = 0;
        plVar4[3] = 0;
        goto LAB_006d27d0;
      }
LAB_006d2824:
      uVar1 = 0x41;
    }
    else {
      uVar1 = 0x69;
    }
    func_0x006d2bc0(0x11,0,uVar1);
  }
  func_0x006d1850(puVar2);
  func_0x006d1850(puVar3);
  puVar2 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
  uVar1 = 0;
LAB_006d2784:
  *param_1 = puVar2;
  *param_3 = puVar3;
  return uVar1;
}



/* Entry: 006d282c; end: 006d2a0f;  */

ulong FUN_006d282c(long param_1,long param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = 0;
  uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffff0;
  *(uint *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (((param_3 != 0) && (param_2 != 0)) && (*(int *)(param_1 + 8) != 0)) {
    lVar8 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(lVar8 + 0x30) = 0;
    if (*(int *)(lVar8 + 8) == 0) {
      lVar5 = *(long *)(lVar8 + 0x10);
      uVar7 = *(long *)(lVar8 + 0x20) - lVar5;
      if (uVar7 != 0) {
        uVar6 = (ulong)param_3;
        uVar2 = uVar7;
        if (uVar6 <= uVar7) {
          uVar7 = uVar6;
          uVar2 = uVar6;
        }
        do {
          uVar4 = *(ulong *)(lVar8 + 0x20);
          uVar6 = *(long *)(lVar8 + 0x18) + lVar5;
          uVar3 = 0;
          if (uVar4 <= uVar6) {
            uVar3 = uVar4;
          }
          lVar5 = uVar6 - uVar3;
          uVar6 = uVar4 - lVar5;
          if (lVar5 + uVar7 <= uVar4) {
            uVar6 = uVar7;
          }
          func_0x006d2ba4(*(long *)(lVar8 + 0x28) + lVar5,param_2,uVar6);
          lVar5 = uVar6 + *(long *)(lVar8 + 0x10);
          *(long *)(lVar8 + 0x10) = lVar5;
          param_2 = param_2 + uVar6;
          uVar7 = uVar7 - uVar6;
        } while (uVar7 != 0);
        return uVar2;
      }
      *(uint *)(param_1 + 0x10) = uVar1 | 10;
    }
    else {
      func_0x006d2bc0(0x11,0,0x65);
    }
    uVar7 = 0xffffffff;
  }
  return uVar7;
}



/* Entry: 006d2a10; end: 006d2b07;  */

ulong FUN_006d2a10(long param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x20);
  uVar1 = 1;
  switch(param_2) {
  case 2:
    if (param_4 == 0) {
      return 1;
    }
    if (*(long *)(*(long *)(param_4 + 0x20) + 0x10) == 0) {
      return (ulong)(*(int *)(*(long *)(param_4 + 0x20) + 8) != 0);
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xc:
    break;
  case 8:
    return (long)*(int *)(param_1 + 0xc);
  case 9:
    *(undefined4 *)(param_1 + 0xc) = param_3;
    return 1;
  case 10:
    if (*plVar2 != 0) {
      return *(ulong *)(*(long *)(*plVar2 + 0x20) + 0x10);
    }
    break;
  case 0xb:
    goto code_r0x006d2ad4;
  case 0xd:
    if (plVar2[5] != 0) {
      return plVar2[2];
    }
    break;
  default:
    switch(param_2) {
    case 0x89:
      return plVar2[4];
    case 0x8c:
      if ((*plVar2 != 0) && ((int)plVar2[1] == 0)) {
        return plVar2[4] - plVar2[2];
      }
      break;
    case 0x8d:
      return plVar2[6];
    case 0x8e:
      *(undefined4 *)(plVar2 + 1) = 1;
      return 1;
    case 0x93:
      plVar2[6] = 0;
      return 1;
    }
  }
  uVar1 = 0;
code_r0x006d2ad4:
  return uVar1;
}



/* Entry: 006d2b08; end: 006d2ba3;  */

void FUN_006d2b08(long param_1)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.vmaddr;
  FUN_00701e90();
  if (pqVar1 != (qword *)0x0) {
    pqVar1[3] = 0;
    pqVar1[2] = 0;
    pqVar1[5] = 0;
    pqVar1[4] = 0;
    pqVar1[6] = 0;
    pqVar1[1] = 0;
    *pqVar1 = 0;
    pqVar1[4] = (qword)&UNK_00004400;
    *(qword **)(param_1 + 0x20) = pqVar1;
  }
  return;
}



/* Entry: 006d2ba4; end: 006d2bcb;  */

void FUN_006d2ba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_0099a3f8)();
    return;
  }
  return;
}



/* Entry: 006d2bcc; end: 006d2cdb;  */

dword * FUN_006d2bcc(dword *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  dword *pdVar3;
  long *plVar4;
  dword *pdVar5;
  dword *unaff_x20;
  dword *pdVar6;
  int iStack_184;
  long lStack_180;
  undefined8 uStack_178;
  dword *pdStack_170;
  dword *pdStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  dword adStack_148 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  pdVar3 = adStack_148;
  pdVar5 = &section_000000b8.reserved2;
  _vsnprintf(pdVar3,0x100,param_2,&stack0x00000000);
  uVar1 = (uint)pdVar3;
  if ((int)uVar1 < 0) {
LAB_006d2ca0:
    param_1 = (dword *)0xffffffff;
  }
  else {
    unaff_x20 = pdVar3;
    if (uVar1 < 0x100) {
      pdVar6 = adStack_148;
    }
    else {
      pdVar6 = (dword *)(ulong)(uVar1 + 1);
      func_0x00701e90();
      if (pdVar6 == (dword *)0x0) {
        pdVar3 = (dword *)((long)&MACH_HEADER.ncmds + 1);
        pdVar5 = (dword *)0x0;
        FUN_006de8e4(0x11,0,0x41,0,0);
        goto LAB_006d2ca0;
      }
      pdVar3 = pdVar6;
      _vsnprintf();
    }
    pdVar5 = pdVar6;
    func_0x006d199c(param_1,pdVar6,pdVar3);
    pdVar3 = param_1;
    if (0xff < uVar1) {
      func_0x00701ed0();
      pdVar3 = pdVar6;
    }
  }
  iVar2 = (int)pdVar3;
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_158 = FUN_006d2cdc;
  pdStack_170 = unaff_x20;
  pdStack_168 = param_1;
  puStack_160 = &stack0xfffffffffffffff0;
  FUN_006d4564();
  if (iVar2 != 0) {
    plVar4 = &lStack_180;
    FUN_006d4770(plVar4,&iStack_184);
    if ((int)plVar4 != 0) {
      if (iStack_184 == 0) {
        FUN_006e405c(lStack_180,uStack_178,pdVar5);
        return (dword *)(ulong)(lStack_180 != 0);
      }
      func_0x006d2e10();
      goto LAB_006d2d2c;
    }
  }
  func_0x006d2e10();
LAB_006d2d2c:
  func_0x006d2e04();
  return (dword *)0x0;
}



/* Entry: 006d2cdc; end: 006d2df7;  */

bool FUN_006d2cdc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  int iStack_34;
  long lStack_30;
  undefined8 uStack_28;
  
  FUN_006d4564(param_1,&lStack_30,2);
  if ((int)param_1 != 0) {
    plVar1 = &lStack_30;
    FUN_006d4770(plVar1,&iStack_34);
    if ((int)plVar1 != 0) {
      if (iStack_34 == 0) {
        FUN_006e405c(lStack_30,uStack_28,param_2);
        return lStack_30 != 0;
      }
      func_0x006d2e10();
      goto LAB_006d2d2c;
    }
  }
  func_0x006d2e10();
LAB_006d2d2c:
  func_0x006d2e04();
  return false;
}



/* Entry: 006d2df8; end: 006d2e1b;  */

void FUN_006d2df8(void)

{
  return;
}



/* Entry: 006d2e1c; end: 006d2e63;  */

void FUN_006d2e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  FUN_006d3bbc(param_1,&uStack_28,param_2);
  if ((int)param_1 != 0) {
    FUN_006e4138(uStack_28,param_2,param_3);
  }
  return;
}



/* Entry: 006d2e64; end: 006d2f57;  */

undefined1 * FUN_006d2e64(long *param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  
  plVar3 = param_1;
  FUN_006e3c4c();
  puVar4 = (undefined1 *)(long)(int)((int)plVar3 << 4 | 3);
  FUN_00701e90();
  if (puVar4 == (undefined1 *)0x0) {
    FUN_006d33b8(3,0,0x41);
  }
  else {
    puVar9 = puVar4;
    if ((int)param_1[2] != 0) {
      puVar9 = puVar4 + 1;
      *puVar4 = 0x2d;
    }
    plVar5 = param_1;
    FUN_006e3858();
    puVar10 = puVar9;
    if ((int)plVar5 != 0) {
      puVar10 = puVar9 + 1;
      *puVar9 = 0x30;
    }
    bVar1 = false;
    uVar6 = (ulong)plVar3 & 0xffffffff;
    while (0 < (int)uVar6) {
      uVar6 = uVar6 - 1;
      uVar7 = 0x38;
      do {
        uVar8 = *(ulong *)(*param_1 + uVar6 * 8) >> (uVar7 & 0x3f);
        bVar1 = bVar1 || (uVar8 & 0xff) != 0;
        if (bVar1) {
          *puVar10 = (&UNK_0082d38d)[((uint)uVar8 & 0xff) >> 4];
          puVar10[1] = (&UNK_0082d38d)[uVar8 & 0xf];
          puVar10 = puVar10 + 2;
        }
        uVar2 = (int)uVar7 - 8;
        uVar7 = (ulong)uVar2;
      } while (-1 < (int)uVar2);
    }
    *puVar10 = 0;
  }
  return puVar4;
}



/* Entry: 006d2f58; end: 006d2f6b;  */

int FUN_006d2f58(ulong *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = PTR__isxdigit_0099a348;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      return 0;
    }
    uVar7 = 0;
    if (cVar2 == '-') {
      param_2 = param_2 + 1;
    }
    uVar1 = (uint)(cVar2 == '-');
    iVar6 = 1;
    do {
      uVar5 = (ulong)(byte)param_2[uVar7];
      (*(code *)puVar3)();
      bVar4 = ((ulong)uVar1 ^ 0x7fffffff) != uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + -1;
    } while ((int)uVar5 != 0 && bVar4);
    if (param_1 == (ulong *)0x0) {
      return uVar1 - iVar6;
    }
    uVar7 = *param_1;
    if (uVar7 == 0) {
      FUN_006e3c80();
      if (uVar5 == 0) {
        return 0;
      }
    }
    else {
      *(undefined4 *)(uVar7 + 0x10) = 0;
      *(undefined4 *)(uVar7 + 8) = 0;
      uVar5 = uVar7;
    }
    uVar7 = uVar5;
    FUN_006d3060(uVar5,param_2,-iVar6);
    if ((int)uVar7 != 0) {
      FUN_006e374c(uVar5);
      uVar7 = uVar5;
      FUN_006e3858();
      if ((int)uVar7 == 0) {
        *(uint *)(uVar5 + 0x10) = uVar1;
      }
      *param_1 = uVar5;
      return uVar1 - iVar6;
    }
    if (*param_1 == 0) {
      FUN_006e3cd0(uVar5);
    }
  }
  return 0;
}



/* Entry: 006d2f6c; end: 006d305f;  */

int FUN_006d2f6c(ulong *param_1,char *param_2,code *param_3,code *param_4)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      return 0;
    }
    uVar6 = 0;
    if (cVar2 == '-') {
      param_2 = param_2 + 1;
    }
    uVar1 = (uint)(cVar2 == '-');
    iVar5 = 1;
    do {
      uVar4 = (ulong)(byte)param_2[uVar6];
      (*param_4)();
      bVar3 = ((ulong)uVar1 ^ 0x7fffffff) != uVar6;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + -1;
    } while ((int)uVar4 != 0 && bVar3);
    if (param_1 == (ulong *)0x0) {
      return uVar1 - iVar5;
    }
    uVar6 = *param_1;
    if (uVar6 == 0) {
      FUN_006e3c80();
      if (uVar4 == 0) {
        return 0;
      }
    }
    else {
      *(undefined4 *)(uVar6 + 0x10) = 0;
      *(undefined4 *)(uVar6 + 8) = 0;
      uVar4 = uVar6;
    }
    uVar6 = uVar4;
    (*param_3)(uVar4,param_2,-iVar5);
    if ((int)uVar6 != 0) {
      FUN_006e374c(uVar4);
      uVar6 = uVar4;
      FUN_006e3858();
      if ((int)uVar6 == 0) {
        *(uint *)(uVar4 + 0x10) = uVar1;
      }
      *param_1 = uVar4;
      return uVar1 - iVar5;
    }
    if (*param_1 == 0) {
      FUN_006e3cd0(uVar4);
    }
  }
  return 0;
}



/* Entry: 006d3060; end: 006d3147;  */

void FUN_006d3060(long *param_1,long param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  
  if ((int)param_3 < 0x20000000) {
    plVar4 = param_1;
    FUN_006e3f98(param_1,(long)(int)(param_3 << 2));
    if ((int)plVar4 != 0) {
      lVar5 = 0;
      while (0 < (int)param_3) {
        uVar7 = 0;
        uVar6 = param_3;
        if (0xf < param_3) {
          uVar6 = 0x10;
        }
        pcVar9 = (char *)((param_2 - (ulong)uVar6) + (ulong)param_3);
        uVar8 = (ulong)uVar6;
        while (0 < (long)uVar8) {
          cVar1 = *pcVar9;
          uVar2 = (int)cVar1 - 0x30;
          iVar10 = (int)cVar1;
          uVar6 = iVar10 - 0x37;
          if (5 < iVar10 - 0x41U) {
            uVar6 = 0;
          }
          if ((int)cVar1 - 0x61U < 6) {
            uVar6 = iVar10 - 0x57;
          }
          if (uVar2 < 10) {
            uVar6 = uVar2;
          }
          uVar7 = (ulong)uVar6 | uVar7 << 4;
          pcVar9 = pcVar9 + 1;
          uVar8 = uVar8 - 1;
        }
        *(ulong *)(*param_1 + lVar5 * 8) = uVar7;
        lVar5 = lVar5 + 1;
        bVar3 = 0xf < param_3;
        uVar6 = param_3 - 0x10;
        param_3 = 0;
        if (bVar3) {
          param_3 = uVar6;
        }
      }
      *(int *)(param_1 + 1) = (int)lVar5;
    }
  }
  else {
    FUN_006d33b8(3,0,0x66);
  }
  return;
}



/* Entry: 006d3148; end: 006d32eb;  */

long FUN_006d3148(ulong param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  puVar2 = auStack_70;
  FUN_006d35b0(puVar2,0x10);
  if ((int)puVar2 == 0) {
LAB_006d3204:
    uVar5 = 0;
  }
  else {
    puVar2 = auStack_70;
    FUN_006d3a70(puVar2,0);
    if ((int)puVar2 == 0) goto LAB_006d3204;
    uVar5 = param_1;
    FUN_006e3858();
    if ((int)uVar5 == 0) {
      uVar5 = param_1;
      func_0x006e3d14();
      if (uVar5 == 0) goto LAB_006d3218;
      while (uVar3 = uVar5, FUN_006e3858(), (int)uVar3 == 0) {
        uVar3 = uVar5;
        FUN_006e522c(uVar5,10000000000000000000);
        if (uVar3 == 0xffffffffffffffff) goto LAB_006d3218;
        uVar4 = uVar5;
        FUN_006e3858();
        uVar6 = 0;
        while( true ) {
          if ((0x12 < uVar6) || ((int)uVar4 != 0 && uVar3 == 0)) break;
          puVar2 = auStack_70;
          FUN_006d3a70(puVar2,(int)uVar3 + (int)(uVar3 / 10) * -10 & 0xffU | 0x30);
          if ((int)puVar2 == 0) goto LAB_006d3208;
          uVar6 = uVar6 + 1;
          uVar3 = uVar3 / 10;
        }
      }
LAB_006d31a8:
      if (*(int *)(param_1 + 0x10) != 0) {
        puVar2 = auStack_70;
        FUN_006d3a70(puVar2,0x2d);
        if ((int)puVar2 == 0) goto LAB_006d3208;
      }
      puVar2 = auStack_70;
      FUN_006d36d4(puVar2,&lStack_78,&uStack_80);
      if ((int)puVar2 != 0) {
        uVar4 = uStack_80 >> 1;
        for (uVar3 = 0; uStack_80 = uStack_80 - 1, uVar4 != uVar3; uVar3 = uVar3 + 1) {
          uVar1 = *(undefined1 *)(lStack_78 + uVar3);
          *(undefined1 *)(lStack_78 + uVar3) = *(undefined1 *)(lStack_78 + uStack_80);
          *(undefined1 *)(lStack_78 + uStack_80) = uVar1;
        }
        FUN_006e3cd0(uVar5);
        return lStack_78;
      }
    }
    else {
      puVar2 = auStack_70;
      FUN_006d3a70(puVar2,0x30);
      uVar5 = 0;
      if ((int)puVar2 != 0) goto LAB_006d31a8;
    }
  }
LAB_006d3208:
  FUN_006d33b8(3,0,0x41);
LAB_006d3218:
  FUN_006e3cd0(uVar5);
  func_0x006d3688(auStack_70);
  return 0;
}



/* Entry: 006d32ec; end: 006d32ff;  */

int FUN_006d32ec(ulong *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  
  puVar3 = PTR__isdigit_0099a338;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      return 0;
    }
    uVar7 = 0;
    if (cVar2 == '-') {
      param_2 = param_2 + 1;
    }
    uVar1 = (uint)(cVar2 == '-');
    iVar6 = 1;
    do {
      uVar5 = (ulong)(byte)param_2[uVar7];
      (*(code *)puVar3)();
      bVar4 = ((ulong)uVar1 ^ 0x7fffffff) != uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + -1;
    } while ((int)uVar5 != 0 && bVar4);
    if (param_1 == (ulong *)0x0) {
      return uVar1 - iVar6;
    }
    uVar7 = *param_1;
    if (uVar7 == 0) {
      FUN_006e3c80();
      if (uVar5 == 0) {
        return 0;
      }
    }
    else {
      *(undefined4 *)(uVar7 + 0x10) = 0;
      *(undefined4 *)(uVar7 + 8) = 0;
      uVar5 = uVar7;
    }
    uVar7 = uVar5;
    FUN_006d3300(uVar5,param_2,-iVar6);
    if ((int)uVar7 != 0) {
      FUN_006e374c(uVar5);
      uVar7 = uVar5;
      FUN_006e3858();
      if ((int)uVar7 == 0) {
        *(uint *)(uVar5 + 0x10) = uVar1;
      }
      *param_1 = uVar5;
      return uVar1 - iVar6;
    }
    if (*param_1 == 0) {
      FUN_006e3cd0(uVar5);
    }
  }
  return 0;
}



/* Entry: 006d3300; end: 006d33b7;  */

void FUN_006d3300(undefined8 param_1,char *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = 0;
  iVar1 = 0;
  if ((int)param_3 % 0x13 != 0) {
    iVar1 = 0x13 - (int)param_3 % 0x13;
  }
  uVar4 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar4 == 0) {
      return;
    }
    lVar3 = (long)*param_2 + lVar3 * 10 + -0x30;
    iVar1 = iVar1 + 1;
    if (iVar1 == 0x13) {
      uVar2 = param_1;
      FUN_006e8720(param_1,10000000000000000000);
      if ((int)uVar2 == 0) {
        return;
      }
      uVar2 = param_1;
      FUN_006e3774(param_1,lVar3);
      iVar1 = 0;
      if ((int)uVar2 == 0) {
        return;
      }
      lVar3 = 0;
    }
    param_2 = param_2 + 1;
    uVar4 = uVar4 - 1;
  } while( true );
}



/* Entry: 006d33b8; end: 006d33c3;  */

void FUN_006d33b8(uint *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar3 = param_1;
  FUN_006de604();
  if (puVar3 != (uint *)0x0) {
    if (((int)param_1 == 2) && (param_3 == 0)) {
      puVar4 = puVar3;
      ___error();
      param_3 = *puVar4;
    }
    uVar2 = puVar3[0x60];
    uVar1 = uVar2 + 1 & 0xf;
    puVar3[0x60] = uVar1;
    if (uVar1 == puVar3[0x61]) {
      puVar3[0x61] = uVar2 + 2 & 0xf;
    }
    puVar3 = puVar3 + (ulong)uVar1 * 6;
    func_0x006de65c(puVar3);
    puVar3[0] = 0;
    puVar3[1] = 0;
    *(undefined2 *)(puVar3 + 5) = 0;
    puVar3[4] = param_3 & 0xfff | (int)param_1 << 0x18;
  }
  return;
}



/* Entry: 006d33c4; end: 006d34fb;  */

dword * FUN_006d33c4(void)

{
  dword *pdVar1;
  
  pdVar1 = &MACH_HEADER.flags;
  FUN_00701e90();
  if (pdVar1 == (dword *)0x0) {
    FUN_006d358c();
  }
  else {
    *(undefined8 *)pdVar1 = 0;
    *(undefined8 *)(pdVar1 + 2) = 0;
    *(undefined8 *)(pdVar1 + 4) = 0;
  }
  return pdVar1;
}



/* Entry: 006d34fc; end: 006d358b;  */

ulong * FUN_006d34fc(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_3 != 0) {
    uVar1 = *param_1 + param_3;
    if (CARRY8(*param_1,param_3)) {
      FUN_006de8e4(7,0,0x45,0,0);
      puVar2 = (ulong *)0x0;
    }
    else {
      puVar2 = param_1;
      func_0x006d3430(param_1,uVar1);
      if ((int)puVar2 != 0) {
        _memcpy(param_1[1] + *param_1,param_2,param_3);
        *param_1 = uVar1;
        puVar2 = (ulong *)((long)&MACH_HEADER.magic + 1);
      }
    }
    return puVar2;
  }
  return (ulong *)((long)&MACH_HEADER.magic + 1);
}



/* Entry: 006d358c; end: 006d35af;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_006d358c(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 7;
  FUN_006de604(7,0);
  if (lVar3 != 0) {
    iVar2 = *(int *)(lVar3 + 0x180);
    uVar1 = iVar2 + 1U & 0xf;
    *(uint *)(lVar3 + 0x180) = uVar1;
    if (uVar1 == *(uint *)(lVar3 + 0x184)) {
      *(uint *)(lVar3 + 0x184) = iVar2 + 2U & 0xf;
    }
    puVar4 = (undefined8 *)(lVar3 + (ulong)uVar1 * 0x18);
    func_0x006de65c(puVar4);
    *puVar4 = 0;
    *(undefined2 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0x7000041;
  }
  return;
}



/* Entry: 006d35b0; end: 006d3653;  */

undefined8 FUN_006d35b0(undefined8 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  lVar2 = param_2;
  FUN_00701e90();
  if ((param_2 == 0) || (lVar2 != 0)) {
    func_0x006d4130();
    iVar1 = (int)param_1;
    func_0x006d3610();
    if (iVar1 != 0) {
      return 1;
    }
    func_0x00701ed0(lVar2);
  }
  return 0;
}



/* Entry: 006d3654; end: 006d36d3;  */

void FUN_006d3654(long *param_1)

{
  long *plVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  plVar1 = param_1;
  func_0x006d3610();
  if ((int)plVar1 != 0) {
    *(undefined1 *)(*param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 006d36d4; end: 006d3747;  */

long FUN_006d36d4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  
  if (*(char *)(param_1 + 0x1a) != '\0') {
    return 0;
  }
  func_0x006d40c8();
  FUN_006d3748();
  if ((int)param_1 == 0) {
    return param_1;
  }
  puVar1 = (undefined8 *)*unaff_x19;
  if (*(char *)(puVar1 + 3) == '\0') {
    if (unaff_x21 == (undefined8 *)0x0) goto LAB_006d3724;
  }
  else {
    if (unaff_x21 == (undefined8 *)0x0) {
      return 0;
    }
    if (unaff_x20 == (undefined8 *)0x0) {
      return 0;
    }
  }
  *unaff_x21 = *puVar1;
LAB_006d3724:
  if (unaff_x20 != (undefined8 *)0x0) {
    *unaff_x20 = puVar1[1];
  }
  *puVar1 = 0;
  func_0x006d3688();
  return 1;
}



/* Entry: 006d3748; end: 006d38df;  */

undefined8 FUN_006d3748(long *param_1)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  if (*param_1 == 0) {
    return 0;
  }
  if (*(char *)(*param_1 + 0x19) != '\0') {
    return 0;
  }
  lVar2 = param_1[1];
  if ((lVar2 == 0) || (bVar1 = *(byte *)(lVar2 + 0x18), (ulong)bVar1 == 0)) {
LAB_006d38c4:
    uVar4 = 1;
  }
  else {
    lVar10 = *(long *)(lVar2 + 0x10);
    FUN_006d3748();
    if ((int)lVar2 != 0) {
      uVar8 = lVar10 + (ulong)bVar1;
      puVar5 = (undefined8 *)param_1[1];
      uVar7 = puVar5[2];
      if (uVar7 <= uVar8) {
        plVar3 = (long *)*param_1;
        uVar9 = plVar3[1] - uVar8;
        if (uVar8 <= (ulong)plVar3[1]) {
          if (*(char *)((long)puVar5 + 0x19) == '\0') {
            uVar6 = (ulong)*(byte *)(puVar5 + 3);
            uVar8 = uVar6;
          }
          else {
            if (0xfffffffe < uVar9) goto LAB_006d38a8;
            if (uVar9 >> 0x18 == 0) {
              if (uVar9 >> 0x10 != 0) {
                uVar11 = 0x83;
                uVar6 = 3;
                goto LAB_006d3824;
              }
              if (0xff < uVar9) {
                uVar11 = 0x82;
                uVar6 = 2;
                goto LAB_006d3824;
              }
              if (0x7f < uVar9) {
                uVar11 = 0x81;
                uVar6 = 1;
                goto LAB_006d3824;
              }
              uVar6 = 0;
              uVar8 = 0;
            }
            else {
              uVar11 = 0x84;
              uVar6 = 4;
LAB_006d3824:
              FUN_006d38e0(plVar3,0,uVar6);
              if ((int)plVar3 == 0) goto LAB_006d38a8;
              _memmove(*(long *)*param_1 + uVar8 + uVar6,*(long *)*param_1 + uVar8,uVar9);
              plVar3 = (long *)*param_1;
              puVar5 = (undefined8 *)param_1[1];
              uVar7 = puVar5[2];
              uVar8 = uVar9;
              uVar9 = uVar11;
            }
            lVar2 = *plVar3;
            puVar5[2] = uVar7 + 1;
            *(char *)(lVar2 + uVar7) = (char)uVar9;
            puVar5 = (undefined8 *)param_1[1];
            *(char *)(puVar5 + 3) = (char)uVar6;
            uVar9 = uVar8;
            uVar8 = uVar6;
          }
          while (uVar8 = uVar8 - 1, uVar8 < uVar6) {
            *(char *)(*(long *)*param_1 + puVar5[2] + uVar8) = (char)uVar9;
            puVar5 = (undefined8 *)param_1[1];
            uVar9 = uVar9 >> 8;
            uVar6 = (ulong)*(byte *)(puVar5 + 3);
          }
          if (uVar9 == 0) {
            *puVar5 = 0;
            param_1[1] = 0;
            goto LAB_006d38c4;
          }
        }
      }
    }
LAB_006d38a8:
    uVar4 = 0;
    *(undefined1 *)(*param_1 + 0x19) = 1;
  }
  return uVar4;
}



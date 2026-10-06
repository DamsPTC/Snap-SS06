/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 0070d9b4; end: 0070d9e7;  */

void FUN_0070d9b4(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 0070d9e8; end: 0070da27;  */

void FUN_0070d9e8(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 0070da28; end: 0070dad7;  */

qword * FUN_0070da28(void)

{
  qword *pqVar1;
  
  pqVar1 = &segment_command_00000020.vmsize;
  FUN_00701e90();
  if (pqVar1 == (qword *)0x0) {
    FUN_006de8e4(0xb,0,0x41,0,0);
  }
  else {
    *(undefined4 *)(pqVar1 + 6) = 0;
    pqVar1[7] = 0;
    pqVar1[1] = 0;
    *pqVar1 = 0;
    pqVar1[3] = 0;
    pqVar1[2] = 0;
  }
  return pqVar1;
}



/* Entry: 0070dad8; end: 0070db3f;  */

undefined8 FUN_0070dad8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  FUN_006d0644(puVar2,&DAT_00a1c718);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 0070db40; end: 0070dc0f;  */

undefined8 FUN_0070db40(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = segment_command_00000020.segname;
  FUN_00701e90();
  if (pcVar1 == (char *)0x0) {
    func_0x0070e2a4();
  }
  else {
    pcVar2 = pcVar1;
    FUN_00705ed8();
    *(char **)pcVar1 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      FUN_006d33c4();
      *(char **)(pcVar1 + 0x10) = pcVar2;
      if (pcVar2 != (char *)0x0) {
        *(qword *)(pcVar1 + 0x18) = 0;
        *(undefined4 *)(pcVar1 + 0x20) = 0;
        pcVar1[8] = '\x01';
        pcVar1[9] = '\0';
        pcVar1[10] = '\0';
        pcVar1[0xb] = '\0';
        *param_1 = pcVar1;
        return 1;
      }
    }
    FUN_0070e2a0();
    if (*(long *)pcVar1 != 0) {
      FUN_00705f10();
    }
    func_0x00701ed0(pcVar1);
  }
  return 0;
}



/* Entry: 0070dc10; end: 0070df0b;  */

void FUN_0070dc10(long *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong **ppuVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long *plStack_68;
  ulong *puStack_60;
  long lStack_58;
  
  lVar8 = *param_2;
  puStack_60 = (ulong *)0x0;
  if (0xfffff < param_3) {
    param_3 = 0x100000;
  }
  ppuVar3 = &puStack_60;
  lStack_58 = lVar8;
  FUN_006ce748(ppuVar3,&lStack_58,param_3,&UNK_00a1c7d8);
  puVar1 = puStack_60;
  if (0 < (int)ppuVar3) {
    if (*param_1 != 0) {
      func_0x0070dbc0(param_1);
    }
    plStack_68 = (long *)0x0;
    iVar2 = (int)&plStack_68;
    func_0x0070db40();
    plVar7 = plStack_68;
    if (iVar2 == 0) {
      plVar7 = (long *)0x0;
    }
    else {
      lVar4 = plStack_68[2];
      func_0x006d34ac(lVar4,lStack_58 - lVar8);
      if (lVar4 != 0) {
        func_0x0070df24(*(undefined8 *)(plVar7[2] + 8),lVar8,lStack_58 - lVar8);
        if (puVar1 != (ulong *)0x0) {
          for (uVar9 = 0; uVar9 < *puVar1; uVar9 = uVar9 + 1) {
            puVar10 = *(ulong **)(puVar1[1] + uVar9 * 8);
            if (puVar10 != (ulong *)0x0) {
              uVar6 = *puVar10;
              for (uVar11 = 0; uVar11 < uVar6; uVar11 = uVar11 + 1) {
                *(int *)(*(long *)(puVar10[1] + uVar11 * 8) + 0x10) = (int)uVar9;
                lVar8 = *plVar7;
                func_0x00706268();
                if (lVar8 == 0) goto LAB_0070dd28;
                uVar6 = *puVar10;
                if (uVar11 < uVar6) {
                  *(undefined8 *)(puVar10[1] + uVar11 * 8) = 0;
                }
              }
            }
          }
        }
        plVar5 = plVar7;
        FUN_0070df30();
        if ((int)plVar5 != 0) {
          func_0x0070e2bc();
          *(undefined4 *)(plVar7 + 1) = 0;
          *param_1 = (long)plVar7;
          *param_2 = lStack_58;
          return;
        }
      }
    }
LAB_0070dd28:
    func_0x0070db24(plVar7);
    FUN_0070e200(puVar1,0x70e214);
    FUN_006de8e4(0xb,0,0xc,0,0);
  }
  return;
}



/* Entry: 0070df0c; end: 0070df2f;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070df0c(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      (*(code *)0x70df20)(0x70dae4);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070df30; end: 0070e1ff;  */

undefined8 FUN_0070df30(long *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  ulong *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  uint *puVar12;
  uint *unaff_x24;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  byte *unaff_x27;
  uint unaff_w28;
  int iStack_6c;
  ulong uStack_68;
  
  puVar4 = (uint *)param_1[3];
  if (puVar4 != (uint *)0x0) {
    func_0x00701ed0();
    param_1[3] = 0;
  }
  if (((long *)*param_1 == (long *)0x0) || (*(long *)*param_1 == 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar6 = 1;
  }
  else {
    FUN_00705ed8();
    if (puVar4 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar15 = 0;
      iStack_6c = -1;
      puVar7 = puVar4;
      func_0x0070e2f0();
      do {
        puVar8 = (ulong *)*param_1;
        if ((puVar8 == (ulong *)0x0) || (*puVar8 <= uVar15)) {
          puVar7 = puVar4;
          FUN_0070e218(puVar4,0);
          if ((int)puVar7 < 0) goto LAB_0070e1c8;
          *(int *)(param_1 + 4) = (int)puVar7;
          uVar15 = (ulong)puVar7 & 0xffffffff;
          func_0x00701e90();
          uStack_68 = uVar15;
          if (uVar15 == 0) goto LAB_0070e1c8;
          param_1[3] = uVar15;
          FUN_0070e218(puVar4,&uStack_68);
          uVar6 = 1;
          goto LAB_0070e1cc;
        }
        puVar11 = *(undefined8 **)(puVar8[1] + uVar15 * 8);
        puVar5 = puVar7;
        if (*(int *)(puVar11 + 2) != iStack_6c) {
          FUN_00705ed8();
          if (puVar7 == (uint *)0x0) goto LAB_0070e1c8;
          puVar5 = puVar4;
          func_0x00706268(puVar4,puVar7);
          if (puVar5 == (uint *)0x0) {
            FUN_00705f10(puVar7);
            goto LAB_0070e1c8;
          }
          iStack_6c = *(int *)(puVar11 + 2);
        }
        FUN_0070dad8();
        if (puVar5 == (uint *)0x0) goto LAB_0070e1c8;
        uVar6 = *puVar11;
        FUN_0070224c();
        *(undefined8 *)puVar5 = uVar6;
        puVar12 = *(uint **)(puVar5 + 2);
        if (*(uint *)(puVar11[1] + 4) < 0x1f &&
            ((long)unaff_x24 << ((ulong)*(uint *)(puVar11[1] + 4) & 0x3f) & (ulong)unaff_x27) == 0)
        {
          puVar12[1] = unaff_w28;
          puVar7 = puVar12 + 2;
          FUN_006cceb8();
          uVar3 = (uint)puVar7;
          *puVar12 = uVar3;
          if (uVar3 == 0xffffffff) break;
          unaff_x27 = *(byte **)(puVar12 + 2);
          pbVar10 = unaff_x27;
          puVar14 = puVar7;
          while (((puVar13 = (uint *)(ulong)(uVar3 & (int)uVar3 >> 0x1f), 0 < (int)puVar14 &&
                  (puVar7 = (uint *)(long)(char)*pbVar10, puVar13 = puVar14, -1 < (char)*pbVar10))
                 && (_isspace(), (int)puVar7 != 0))) {
            pbVar10 = pbVar10 + 1;
            puVar14 = (uint *)(ulong)((int)puVar14 - 1);
          }
          uVar3 = (uint)puVar13;
          lVar9 = (long)(int)uVar3;
          while( true ) {
            unaff_x24 = puVar13;
            lVar9 = lVar9 + -1;
            if ((int)unaff_x24 < 1) break;
            puVar7 = (uint *)(long)(char)pbVar10[lVar9];
            if (((char)pbVar10[lVar9] < '\0') ||
               (_isspace(), puVar13 = (uint *)(ulong)((int)unaff_x24 - 1), (int)puVar7 == 0))
            goto LAB_0070e0c4;
          }
          unaff_x24 = (uint *)(ulong)(uVar3 & (int)uVar3 >> 0x1f);
LAB_0070e0c4:
          unaff_w28 = 0;
          while ((int)unaff_w28 < (int)unaff_x24) {
            bVar2 = *pbVar10;
            puVar14 = (uint *)(ulong)bVar2;
            if ((char)bVar2 < '\0') {
              *unaff_x27 = bVar2;
LAB_0070e140:
              pbVar10 = pbVar10 + 1;
              unaff_w28 = unaff_w28 + 1;
            }
            else {
              _isspace();
              if ((int)puVar14 == 0) {
                bVar1 = bVar2 | 0x20;
                if (0x19 < bVar2 - 0x41) {
                  bVar1 = bVar2;
                }
                *unaff_x27 = bVar1;
                puVar7 = puVar14;
                goto LAB_0070e140;
              }
              *unaff_x27 = 0x20;
              do {
                pbVar10 = pbVar10 + 1;
                unaff_w28 = unaff_w28 + 1;
                puVar7 = (uint *)(long)(char)*pbVar10;
                if ((char)*pbVar10 < '\0') break;
                _isspace();
              } while ((int)puVar7 != 0);
            }
            unaff_x27 = unaff_x27 + 1;
          }
          *puVar12 = (int)unaff_x27 - puVar12[2];
          func_0x0070e2f0();
        }
        else {
          FUN_006ce280();
          puVar7 = puVar12;
          if ((int)puVar12 == 0) break;
        }
        func_0x0070e2e4();
        uVar15 = uVar15 + 1;
      } while (puVar7 != (uint *)0x0);
      func_0x0070dae4(puVar5);
LAB_0070e1c8:
      uVar6 = 0;
LAB_0070e1cc:
      FUN_0070e200(puVar4,0x70e214);
    }
  }
  return uVar6;
}



/* Entry: 0070e200; end: 0070e217;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070e200(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      FUN_0070e2a0(param_2);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070e218; end: 0070e29f;  */

undefined8 * FUN_0070e218(ulong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uStack_48;
  
  puVar2 = (undefined8 *)0x0;
  uVar3 = 0;
  while( true ) {
    if (*param_1 <= uVar3) {
      return puVar2;
    }
    uStack_48 = *(undefined8 *)(param_1[1] + uVar3 * 8);
    puVar1 = &uStack_48;
    func_0x0070e2cc(puVar1,param_2,&DAT_00a1c778);
    if ((int)puVar1 < 0) break;
    puVar2 = (undefined8 *)(ulong)(uint)((int)puVar1 + (int)puVar2);
    uVar3 = uVar3 + 1;
  }
  return puVar1;
}



/* Entry: 0070e2a0; end: 0070e303;  */

void FUN_0070e2a0(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070e2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070e304; end: 0070e3df;  */

qword * FUN_0070e304(void)

{
  qword *pqVar1;
  qword *pqVar2;
  
  pqVar1 = &segment_command_00000020.filesize;
  FUN_00701e90();
  if (pqVar1 == (qword *)0x0) {
    FUN_006de8e4(0xb,0,0x41,0,0);
  }
  else {
    pqVar1[7] = 0;
    pqVar1[6] = 0;
    pqVar1[9] = 0;
    pqVar1[8] = 0;
    pqVar1[3] = 0;
    pqVar1[2] = 0;
    pqVar1[5] = 0;
    pqVar1[4] = 0;
    pqVar1[1] = 0;
    *pqVar1 = 0;
    pqVar2 = pqVar1;
    func_0x0070d194();
    pqVar1[1] = (qword)pqVar2;
    if (pqVar2 != (qword *)0x0) {
      func_0x006d0a68();
      pqVar1[2] = (qword)pqVar2;
      if (pqVar2 != (qword *)0x0) {
        return pqVar1;
      }
    }
    func_0x0070e380(pqVar1);
  }
  return (qword *)0x0;
}



/* Entry: 0070e3e0; end: 0070e3eb;  */

undefined8 * FUN_0070e3e0(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_1;
  if ((param_2 == (ulong *)0x0) || (*param_2 != 0)) {
    puVar3 = &uStack_38;
    FUN_006d01cc(puVar3,param_2,&DAT_00a1c8d0);
  }
  else {
    puVar1 = &uStack_38;
    FUN_006d01cc(puVar1,0,&DAT_00a1c8d0);
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
        FUN_006d01cc(puVar3,&uStack_40,&DAT_00a1c8d0);
        if (0 < (int)puVar3) {
          *param_2 = uVar2;
          puVar3 = puVar1;
        }
      }
    }
  }
  return puVar3;
}



/* Entry: 0070e3ec; end: 0070e4fb;  */

undefined8 * FUN_0070e3ec(ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_1 != 0) {
    func_0x007064d4(0xb2a510);
    lVar3 = *(long *)(param_1 + 0x10);
    func_0x0070650c(0xb2a510);
    if (lVar3 != 0) {
      FUN_00705a60(*(undefined8 *)(param_1 + 0x10));
      return *(undefined8 **)(param_1 + 0x10);
    }
    uVar1 = param_1;
    FUN_0070e3e0(param_1,&uStack_38);
    if (-1 < (int)uVar1) {
      uStack_40 = uVar1 & 0xffffffff;
      uStack_48 = uStack_38;
      puVar2 = &uStack_48;
      FUN_006df594();
      if ((puVar2 != (undefined8 *)0x0) && (uStack_40 == 0)) {
        func_0x007064f0(0xb2a510);
        if (*(long *)(param_1 + 0x10) == 0) {
          *(undefined8 **)(param_1 + 0x10) = puVar2;
          func_0x0070e530();
        }
        else {
          func_0x0070e530();
          func_0x006df294(puVar2);
          puVar2 = *(undefined8 **)(param_1 + 0x10);
        }
        func_0x00701ed0(uStack_38);
        FUN_00705a60(puVar2);
        return puVar2;
      }
      func_0x0070e524(0xb,0,0x7d);
      goto LAB_0070e4a0;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_0070e4a0:
  func_0x00701ed0(uStack_38);
  func_0x006df294(puVar2);
  return (undefined8 *)0x0;
}



/* Entry: 0070e4fc; end: 0070e523;  */

undefined8 FUN_0070e4fc(int param_1,long *param_2)

{
  if (param_1 == 3) {
    func_0x006df294(*(undefined8 *)(*param_2 + 0x10));
  }
  return 1;
}



/* Entry: 0070e524; end: 0070e58f;  */

void FUN_0070e524(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 0070e590; end: 0070e637;  */

undefined1 * FUN_0070e590(long *param_1)

{
  long *plVar1;
  long **pplVar2;
  long *plStack_30;
  long lStack_28;
  
  pplVar2 = &plStack_30;
  if (param_1[2] < 0) {
    FUN_0070e85c(0x10,0,0x45);
  }
  else {
    plVar1 = param_1;
    func_0x0070e578();
    if (plVar1 != (long *)0x0) {
      *(byte *)(*plVar1 + 100) = *(byte *)(*plVar1 + 100) | 2;
      lStack_28 = param_1[1];
      plStack_30 = plVar1;
      func_0x0070e560(&plStack_30,&lStack_28,param_1[2]);
      if ((pplVar2 != (long **)0x0) && (lStack_28 - param_1[1] == param_1[2])) {
        FUN_00705a60(param_1 + 3);
        *(long **)((long)pplVar2 + 0xa8) = param_1;
        return (undefined1 *)pplVar2;
      }
      func_0x0070e584(plStack_30);
    }
  }
  return (undefined1 *)0x0;
}



/* Entry: 0070e638; end: 0070e703;  */

long * FUN_0070e638(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lStack_48;
  
  lStack_48 = *param_2;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar1 = param_1;
  func_0x0070e560(param_1,&lStack_48,param_3);
  if (plVar1 != (long *)0x0) {
    if (0 < (*param_2 - lStack_48) + param_3) {
      plVar2 = plVar1 + 0x14;
      func_0x0070e868(plVar2,&lStack_48);
      if (plVar2 == (long *)0x0) {
        if ((!bVar3) && (func_0x0070e584(plVar1), param_1 != (long *)0x0)) {
          *param_1 = 0;
          return (long *)0x0;
        }
        return (long *)0x0;
      }
    }
    *param_2 = lStack_48;
  }
  return plVar1;
}



/* Entry: 0070e704; end: 0070e70f;  */

void FUN_0070e704(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == 0)) {
    func_0x007027dc();
    func_0x00702810();
    _bsearch(lVar1,&UNK_00838b7a,0x371,2,FUN_007023dc);
    if (lVar1 != 0) {
      func_0x007027c0();
    }
  }
  return;
}



/* Entry: 0070e710; end: 0070e85b;  */

undefined8 FUN_0070e710(int param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  uVar1 = 1;
  if (4 < param_1 - 1U) {
    return 1;
  }
  param_2 = (undefined8 *)*param_2;
  switch(param_1) {
  case 1:
    param_2[7] = 0;
    param_2[0xe] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[4] = 0;
    param_2[5] = 0xffffffffffffffff;
    FUN_00706444(param_2 + 0x16);
    break;
  case 2:
    goto LAB_0070e850;
  case 3:
    _pthread_rwlock_destroy(param_2 + 0x16);
    FUN_006e29e4(0xb2a5d8,param_2,param_2 + 4);
    func_0x0070e874(param_2[0x14]);
    FUN_006ce410(param_2[0xb]);
    func_0x0071001c(param_2[0xc]);
    func_0x00711d64(param_2[0xe]);
    FUN_0070e880(param_2[0xd]);
    func_0x00712984(param_2[0xf]);
    FUN_0071338c(param_2[0x10]);
    FUN_0070585c(param_2[0x15]);
    break;
  case 4:
    FUN_0070585c(param_2[0x15]);
    param_2[0x15] = 0;
    break;
  case 5:
    puVar3 = (ulong *)*param_2;
    uVar2 = *puVar3;
    if (uVar2 == 0) {
code_r0x0070e824:
      if ((puVar3[7] == 0) && (puVar3[8] == 0)) {
code_r0x0070e834:
        if (puVar3[9] == 0) break;
      }
      uVar1 = 0x8b;
    }
    else {
      FUN_006cbec4();
      if (uVar2 < 3) {
        if (uVar2 == 0) {
          puVar3 = (ulong *)*param_2;
          goto code_r0x0070e824;
        }
        if (uVar2 == 2) break;
        puVar3 = (ulong *)*param_2;
        goto code_r0x0070e834;
      }
      uVar1 = 0x8c;
    }
    FUN_0070e85c(0xb,0,uVar1);
    uVar1 = 0;
    goto LAB_0070e850;
  }
  uVar1 = 1;
LAB_0070e850:
  return uVar1;
}



/* Entry: 0070e85c; end: 0070e87f;  */

void FUN_0070e85c(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 0070e880; end: 0070e8bf;  */

void FUN_0070e880(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return;
  }
  if (*param_1 != 0) {
    FUN_0070ece0();
  }
  if (param_1[1] != 0) {
    FUN_0070e8c0();
  }
  if (param_1 != (long *)0x0) {
    param_1 = param_1 + -1;
    FUN_00701f08(param_1,*param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 0070e8c0; end: 0070e8d3;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070e8c0(ulong *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      (*(code *)0x70ec24)(FUN_0070ece0);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070e8d4; end: 0070ebab;  */

long FUN_0070e8d4(long param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  qword *pqVar4;
  code *pcVar5;
  long lVar6;
  qword *pqVar7;
  qword *pqVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  int iStack_64;
  
  func_0x007064d4(0xb2a6b0);
  lVar9 = *(long *)(param_1 + 0x68);
  func_0x0070650c(0xb2a6b0);
  if (lVar9 != 0) {
    return lVar9;
  }
  func_0x007064f0(0xb2a6b0);
  lVar9 = *(long *)(param_1 + 0x68);
  if (lVar9 != 0) goto LAB_0070eb6c;
  pcVar3 = segment_command_00000020.segname;
  FUN_00701e90();
  if (pcVar3 != (char *)0x0) {
    pqVar8 = (qword *)(pcVar3 + 0x10);
    *pqVar8 = 0xffffffffffffffff;
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3[4] = '\0';
    pcVar3[5] = '\0';
    pcVar3[6] = '\0';
    pcVar3[7] = '\0';
    pcVar3[8] = '\0';
    pcVar3[9] = '\0';
    pcVar3[10] = '\0';
    pcVar3[0xb] = '\0';
    pcVar3[0xc] = '\0';
    pcVar3[0xd] = '\0';
    pcVar3[0xe] = '\0';
    pcVar3[0xf] = '\0';
    pqVar4 = (qword *)(pcVar3 + 0x18);
    *pqVar4 = 0xffffffffffffffff;
    pqVar7 = (qword *)(pcVar3 + 0x20);
    *pqVar7 = 0xffffffffffffffff;
    *(char **)(param_1 + 0x68) = pcVar3;
    func_0x0070ecd4();
    func_0x0070ecc0();
    if (pcVar3 == (char *)0x0) {
      pqVar7 = (qword *)0x0;
      if (iStack_64 == -1) goto LAB_0070e9ac;
LAB_0070eb40:
      lVar9 = 0;
LAB_0070eb44:
      *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 0x800;
    }
    else {
      if ((((*(long *)pcVar3 == 0) && (*(long *)(pcVar3 + 8) == 0)) ||
          (FUN_0070ec28(), (int)pqVar4 == 0)) ||
         (FUN_0070ec28(pqVar7,*(undefined8 *)(pcVar3 + 8)), (int)pqVar7 == 0)) goto LAB_0070eb40;
LAB_0070e9ac:
      func_0x0070ecd4();
      func_0x0070ecc0();
      if (pqVar7 == (qword *)0x0) {
        if (iStack_64 == -1) goto LAB_0070eb68;
        goto LAB_0070eb40;
      }
      plVar10 = *(long **)(param_1 + 0x68);
      if (*pqVar7 == 0) {
LAB_0070ea68:
        iStack_64 = 0;
LAB_0070eaac:
        bVar1 = true;
      }
      else {
        pcVar5 = FUN_0070ec74;
        FUN_00705e78();
        plVar10[1] = (long)pcVar5;
        if (pcVar5 == (code *)0x0) goto LAB_0070ea68;
        for (uVar11 = 0; bVar1 = uVar11 < *pqVar7, bVar1; uVar11 = uVar11 + 1) {
          lVar9 = *(long *)(pqVar7[1] + uVar11 * 8);
          FUN_0070ed40(lVar9,0,iStack_64);
          if (lVar9 == 0) {
            iStack_64 = 0;
            goto LAB_0070eab0;
          }
          func_0x00706308(plVar10[1]);
          iVar2 = (int)*(undefined8 *)(lVar9 + 8);
          FUN_00702384();
          if (iVar2 != 0x2ea) {
            lVar6 = plVar10[1];
            FUN_0070ec18(lVar6,0,lVar9);
            if ((int)lVar6 != 0) goto LAB_0070ea8c;
            lVar6 = plVar10[1];
            func_0x00706268(lVar6,lVar9);
            if (lVar6 != 0) goto LAB_0070ea60;
            iStack_64 = 0;
LAB_0070eaa4:
            FUN_0070ece0(lVar9);
            goto LAB_0070eaac;
          }
          if (*plVar10 != 0) {
LAB_0070ea8c:
            *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 0x800;
            iStack_64 = -1;
            goto LAB_0070eaa4;
          }
          *plVar10 = lVar9;
LAB_0070ea60:
        }
        iStack_64 = 1;
      }
LAB_0070eab0:
      FUN_00705f40(pqVar7,0x70ec88,0x711950);
      if (bVar1) {
        pqVar7 = (qword *)plVar10[1];
        FUN_0070e8c0();
        plVar10[1] = 0;
      }
      if (iStack_64 < 1) goto LAB_0070eb68;
      func_0x0070ecd4();
      func_0x0070ecc0();
      if (pqVar7 == (qword *)0x0) {
        lVar9 = 0;
        if (iStack_64 != -1) goto LAB_0070eb40;
      }
      else {
        lVar9 = param_1;
        FUN_0070ee38(param_1,pqVar7);
        iStack_64 = (int)lVar9;
        if (iStack_64 < 1) goto LAB_0070eb40;
      }
      func_0x0070ecd4();
      func_0x0070ecc0();
      if (lVar9 != 0) {
        FUN_0070ec28(pqVar8,lVar9);
        if ((int)pqVar8 != 0) goto LAB_0070eb50;
        goto LAB_0070eb44;
      }
      if (iStack_64 != -1) goto LAB_0070eb44;
    }
LAB_0070eb50:
    if (pcVar3 != (char *)0x0) {
      FUN_00714398(pcVar3);
    }
    if (lVar9 != 0) {
      FUN_006ce410(lVar9);
    }
  }
LAB_0070eb68:
  lVar9 = *(long *)(param_1 + 0x68);
LAB_0070eb6c:
  func_0x00706528(0xb2a6b0);
  return lVar9;
}



/* Entry: 0070ebac; end: 0070ec17;  */

undefined8 FUN_0070ebac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  ulong uStack_28;
  
  uStack_40 = param_2;
  func_0x00706308(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_0070ec18(uVar1,&uStack_28,auStack_48);
  if ((((int)uVar1 == 0) || (puVar2 = *(ulong **)(param_1 + 8), puVar2 == (ulong *)0x0)) ||
     (*puVar2 <= uStack_28)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(puVar2[1] + uStack_28 * 8);
  }
  return uVar1;
}



/* Entry: 0070ec18; end: 0070ec27;  */

undefined8 FUN_0070ec18(ulong *param_1,ulong *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != (ulong *)0x0) {
    if (param_1[4] == 0) {
      for (uVar4 = 0; *param_1 != uVar4; uVar4 = uVar4 + 1) {
        if (*(long *)(param_1[1] + uVar4 * 8) == param_3) {
          if (param_2 == (ulong *)0x0) {
            return 1;
          }
          *param_2 = uVar4;
          return 1;
        }
      }
    }
    else if (param_3 != 0) {
      if ((int)param_1[2] == 0) {
        puVar3 = param_1;
        for (uVar4 = 0; uVar4 < *param_1; uVar4 = uVar4 + 1) {
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar4 * 8));
          if ((int)puVar3 == 0) {
            if (param_2 == (ulong *)0x0) {
              return 1;
            }
            *param_2 = uVar4;
            return 1;
          }
        }
      }
      else {
        uVar4 = 0;
        puVar3 = param_1;
        uVar5 = *param_1;
        while (lVar2 = uVar5 - uVar4, uVar4 <= uVar5 && lVar2 != 0) {
          uVar1 = uVar4 + (lVar2 - 1U >> 1);
          FUN_00706414(*(undefined8 *)(param_1[1] + uVar1 * 8));
          if ((int)puVar3 < 1) {
            uVar5 = uVar1;
            if (-1 < (int)puVar3) {
              if (lVar2 == 1) {
                if (param_2 != (ulong *)0x0) {
                  *param_2 = uVar1;
                }
                return 1;
              }
              uVar5 = uVar1 + 1;
            }
          }
          else {
            uVar4 = uVar1 + 1;
          }
        }
      }
    }
  }
  return 0;
}



/* Entry: 0070ec28; end: 0070ec73;  */

undefined8 FUN_0070ec28(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return 1;
  }
  if (*(int *)(param_2 + 4) == 0x102) {
    return 0;
  }
  FUN_006cbec4();
  *param_1 = param_2;
  return 1;
}



/* Entry: 0070ec74; end: 0070ec8b;  */

ulong FUN_0070ec74(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 8) + 0x14);
  uVar2 = iVar1 - *(int *)(*(long *)(*param_2 + 8) + 0x14);
  if (uVar2 != 0) {
    return (ulong)uVar2;
  }
  uVar3 = *(ulong *)(*(long *)(*param_1 + 8) + 0x18);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077a84c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcmp_0099a3f0)(uVar3,*(undefined8 *)(*(long *)(*param_2 + 8) + 0x18));
    return uVar3;
  }
  return 0;
}



/* Entry: 0070ec8c; end: 0070ecbf;  */

void FUN_0070ec8c(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 0070ecc0; end: 0070ecdf;  */

/* WARNING: Removing unreachable block (ram,0x00713128) */
/* WARNING: Removing unreachable block (ram,0x007130c8) */
/* WARNING: Removing unreachable block (ram,0x0071313c) */

long FUN_0070ecc0(long *param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar3 = *(ulong **)(*param_1 + 0x48);
  if (puVar3 != (ulong *)0x0) {
    puVar8 = (undefined8 *)0x0;
    for (uVar9 = 0; uVar9 < *puVar3; uVar9 = uVar9 + 1) {
      puVar10 = *(undefined8 **)(puVar3[1] + uVar9 * 8);
      iVar2 = (int)*puVar10;
      FUN_00702384();
      if ((iVar2 == param_2) && (bVar1 = puVar8 != (undefined8 *)0x0, puVar8 = puVar10, bVar1)) {
        if (param_3 == (uint *)0x0) {
          return 0;
        }
        uVar5 = 0xfffffffe;
        goto LAB_0071317c;
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      if (param_3 != (uint *)0x0) {
        *param_3 = (uint)(0 < *(int *)(puVar8 + 1));
      }
      puVar10 = puVar8;
      FUN_00712fb4();
      lVar4 = 0;
      if (puVar10 != (undefined8 *)0x0) {
        piVar6 = (int *)puVar8[2];
        lVar7 = *(long *)(piVar6 + 2);
        if (puVar10[1] == 0) {
          lVar4 = 0;
          (*(code *)puVar10[4])(0,&stack0xffffffffffffffd8,(long)*piVar6);
        }
        else {
          lVar4 = 0;
          FUN_006ce6e8(0,&stack0xffffffffffffffd8,(long)*piVar6);
        }
        if ((lVar4 != 0) && (lVar7 != *(long *)((int *)puVar8[2] + 2) + (long)*(int *)puVar8[2])) {
          if (puVar10[1] == 0) {
            (*(code *)puVar10[3])();
          }
          else {
            FUN_006d0240();
          }
          FUN_0071319c(0x14,0,0xa4);
          lVar4 = 0;
        }
      }
      return lVar4;
    }
  }
  if (param_3 != (uint *)0x0) {
    uVar5 = 0xffffffff;
LAB_0071317c:
    *param_3 = uVar5;
  }
  return 0;
}



/* Entry: 0070ece0; end: 0070ed3f;  */

void FUN_0070ece0(byte *param_1)

{
  func_0x006cc9a8(*(undefined8 *)(param_1 + 8));
  if ((*param_1 >> 2 & 1) == 0) {
    FUN_00705f40(*(undefined8 *)(param_1 + 0x10),FUN_0070ee24,0x711968);
  }
  FUN_00705f40(*(undefined8 *)(param_1 + 0x18),0x70ee28,0x6cc9a8);
  if (param_1 != (byte *)0x0) {
    param_1 = param_1 + -8;
    FUN_00701f08(param_1,*(long *)param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(param_1);
    return;
  }
  return;
}



/* Entry: 0070ed40; end: 0070ee23;  */

segment_command * FUN_0070ed40(undefined8 *param_1,long param_2,int param_3)

{
  segment_command *psVar1;
  segment_command *psVar2;
  dword dVar3;
  
  if (param_1 != (undefined8 *)0x0 || param_2 != 0) {
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      FUN_0070224c();
      if (param_2 == 0) {
        return (segment_command *)0x0;
      }
    }
    psVar1 = &segment_command_00000020;
    FUN_00701e90();
    if (psVar1 == (segment_command *)0x0) {
      FUN_006de8e4(0x14,0,0x41,0,0);
      func_0x006cc9a8(param_2);
      return (segment_command *)0x0;
    }
    psVar2 = psVar1;
    FUN_00705ed8();
    psVar1->vmaddr = (qword)psVar2;
    if (psVar2 != (segment_command *)0x0) {
      dVar3 = 0;
      if (param_3 != 0) {
        dVar3 = 0x10;
      }
      psVar1->cmd = dVar3;
      if (param_2 == 0) {
        *(undefined8 *)psVar1->segname = *param_1;
        *param_1 = 0;
      }
      else {
        *(long *)psVar1->segname = param_2;
        if (param_1 == (undefined8 *)0x0) {
          psVar1->segname[8] = '\0';
          psVar1->segname[9] = '\0';
          psVar1->segname[10] = '\0';
          psVar1->segname[0xb] = '\0';
          psVar1->segname[0xc] = '\0';
          psVar1->segname[0xd] = '\0';
          psVar1->segname[0xe] = '\0';
          psVar1->segname[0xf] = '\0';
          return psVar1;
        }
      }
      *(undefined8 *)(psVar1->segname + 8) = param_1[1];
      param_1[1] = 0;
      return psVar1;
    }
    func_0x00701ed0(psVar1);
    func_0x006cc9a8(param_2);
  }
  return (segment_command *)0x0;
}



/* Entry: 0070ee24; end: 0070ee37;  */

void FUN_0070ee24(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070ee34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070ee38; end: 0070ef7b;  */

undefined8 FUN_0070ee38(long param_1,ulong *param_2)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  if ((param_2 == (ulong *)0x0) || (uVar4 = *param_2, uVar4 == 0)) {
LAB_0070ef24:
    *(ulong *)(param_1 + 0x38) = *(ulong *)(param_1 + 0x38) | 0x800;
    uVar5 = 0xffffffff;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x68);
    for (uVar7 = 0; uVar7 < uVar4; uVar7 = uVar7 + 1) {
      puVar8 = *(undefined8 **)(param_2[1] + uVar7 * 8);
      iVar1 = (int)puVar8[1];
      FUN_00702384();
      if (iVar1 == 0x2ea) goto LAB_0070ef24;
      iVar1 = (int)*puVar8;
      FUN_00702384();
      if (iVar1 == 0x2ea) goto LAB_0070ef24;
      puVar2 = puVar6;
      FUN_0070ebac(puVar6,*puVar8);
      if (puVar2 == (uint *)0x0) {
        if (*(uint **)puVar6 != (uint *)0x0) {
          puVar2 = (uint *)0x0;
          FUN_0070ed40(0,*puVar8,**(uint **)puVar6 & 0x10);
          if (puVar2 != (uint *)0x0) {
            lVar3 = *(long *)(puVar6 + 2);
            *(long *)(puVar2 + 4) = *(long *)(*(long *)puVar6 + 0x10);
            *puVar2 = *puVar2 | 6;
            func_0x00706268(lVar3,puVar2);
            if (lVar3 != 0) goto LAB_0070ef04;
            FUN_0070ece0(puVar2);
          }
          goto LAB_0070ef74;
        }
      }
      else {
        *puVar2 = *puVar2 | 1;
LAB_0070ef04:
        lVar3 = *(long *)(puVar2 + 6);
        func_0x00706268(lVar3,puVar8[1]);
        if (lVar3 == 0) {
LAB_0070ef74:
          uVar5 = 0;
          goto LAB_0070ef34;
        }
        puVar8[1] = 0;
      }
      uVar4 = *param_2;
    }
    uVar5 = 1;
  }
LAB_0070ef34:
  FUN_00705f40(param_2,FUN_0070ef7c,FUN_007145a0);
  return uVar5;
}



/* Entry: 0070ef7c; end: 0070efaf;  */

void FUN_0070ef7c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070ef84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070efb0; end: 0070f023;  */

undefined8 FUN_0070efb0(ulong *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uStack_60;
  undefined1 *apuStack_58 [3];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  apuStack_58[0] = auStack_40;
  uStack_38 = param_2;
  func_0x00706308();
  puVar1 = param_1;
  FUN_00706128(param_1,&uStack_60,apuStack_58,FUN_0070f1f0);
  if ((((int)puVar1 == 0) || (param_1 == (ulong *)0x0)) || (*param_1 <= uStack_60)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1[1] + uStack_60 * 8);
  }
  return uVar2;
}



/* Entry: 0070f024; end: 0070f163;  */

long * FUN_0070f024(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    for (lVar4 = 0; lVar5 != lVar4; lVar4 = lVar4 + 1) {
      plVar2 = *(long **)(plVar3[1] + lVar4 * 8);
      if (plVar2[1] == param_2) {
        iVar1 = (int)*(undefined8 *)(*plVar2 + 8);
        func_0x0070f234();
        if (iVar1 == 0) {
          return plVar2;
        }
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 0070f164; end: 0070f167;  */

void FUN_0070f164(long param_1)

{
  long *plVar1;
  
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 0070f168; end: 0070f1ef;  */

bool FUN_0070f168(long param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  pbVar4 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) >> 2 & 1) == 0) && ((*pbVar4 & 3) != 0)) {
    plVar5 = *(long **)(pbVar4 + 0x18);
    if (plVar5 == (long *)0x0) {
LAB_0070f1dc:
      bVar1 = false;
    }
    else {
      lVar6 = 0;
      lVar7 = *plVar5;
      do {
        if (lVar7 == lVar6) goto LAB_0070f1dc;
        iVar2 = (int)*(undefined8 *)(plVar5[1] + lVar6 * 8);
        func_0x0070f234();
        lVar6 = lVar6 + 1;
      } while (iVar2 != 0);
      bVar1 = true;
    }
  }
  else {
    uVar3 = *(undefined8 *)(pbVar4 + 8);
    func_0x0070f234(uVar3);
    bVar1 = (int)uVar3 == 0;
  }
  return bVar1;
}



/* Entry: 0070f1f0; end: 0070f223;  */

void FUN_0070f1f0(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 0070f224; end: 0070f23b;  */

void FUN_0070f224(void)

{
  return;
}



/* Entry: 0070f23c; end: 0070f2f7;  */

/* WARNING: Possible PIC construction at 0x0070f2ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0070f2dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0070f2e0) */

void FUN_0070f23c(long *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  FUN_00705f10(param_1[3]);
  FUN_0070f2f8(param_1[4],0x70f308);
  plVar3 = (long *)*param_1;
  for (iVar2 = 0; iVar2 < (int)param_1[1]; iVar2 = iVar2 + 1) {
    if (*plVar3 != 0) {
      func_0x0070e584();
    }
    if (plVar3[1] != 0) {
      FUN_0070f2f8(plVar3[1],FUN_0070f164);
    }
    lVar1 = plVar3[2];
    if (lVar1 != 0) goto SUB_00701ed0;
    plVar3 = plVar3 + 4;
  }
  if (param_1[2] != 0) {
    FUN_00705f40(param_1[2],0x70fadc,FUN_0070ece0);
  }
  lVar1 = *param_1;
SUB_00701ed0:
  if (lVar1 == 0) {
    return;
  }
  plVar3 = (long *)(lVar1 + -8);
  FUN_00701f08(plVar3,*plVar3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(plVar3);
  return;
}



/* Entry: 0070f2f8; end: 0070f31f;  */

/* WARNING: Possible PIC construction at 0x00705f28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00705f2c) */

void FUN_0070f2f8(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  
  if (param_1 == (ulong *)0x0) {
    return;
  }
  for (uVar2 = 0; uVar2 < *param_1; uVar2 = uVar2 + 1) {
    if (*(long *)(param_1[1] + uVar2 * 8) != 0) {
      FUN_0070fad8(param_2);
    }
  }
  if (param_1 != (ulong *)0x0) {
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] - 8);
      FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__free_0099a260)(plVar1);
      return;
    }
    return;
  }
  return;
}



/* Entry: 0070f320; end: 0070fad7;  */

undefined4 FUN_0070f320(undefined8 *param_1,int *param_2,ulong *param_3,ulong *param_4,uint param_5)

{
  uint *puVar1;
  long lVar2;
  qword *pqVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  qword *pqVar9;
  qword *pqVar10;
  undefined4 *puVar11;
  qword qVar12;
  uint uVar13;
  uint uVar14;
  ulong *puVar15;
  bool bVar16;
  int iVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  char *pcVar22;
  long lVar23;
  qword qVar24;
  ulong uVar25;
  long *plVar26;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  uint uVar30;
  qword qStack_68;
  
  qStack_68 = 0;
  *param_1 = 0;
  *param_2 = 0;
  if (param_3 == (ulong *)0x0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *param_3;
  }
  iVar29 = 0;
  iVar17 = (int)uVar19;
  if ((param_5 & 0x200) == 0) {
    iVar29 = iVar17 + 1;
  }
  iVar27 = 0;
  if ((param_5 & 0x400) == 0) {
    iVar27 = iVar17 + 1;
  }
  if (iVar17 == 1) {
    return 1;
  }
  uVar30 = iVar17 + 1;
  if ((param_5 & 0x100) != 0) {
    uVar30 = 0;
  }
  iVar21 = 1;
  uVar4 = iVar17 - 2;
  for (uVar14 = uVar4; -1 < (int)uVar14; uVar14 = uVar14 - 1) {
    if ((param_3 == (ulong *)0x0) || (*param_3 <= (ulong)uVar14)) {
      lVar23 = 0;
    }
    else {
      lVar23 = *(long *)(param_3[1] + (ulong)uVar14 * 8);
    }
    func_0x00714664(lVar23);
    lVar20 = lVar23;
    FUN_0070e8d4();
    if (lVar20 == 0) {
      return 0;
    }
    uVar13 = (uint)*(undefined8 *)(lVar23 + 0x38);
    if ((uVar13 >> 0xb & 1) == 0) {
      if ((iVar21 == 1) && (iVar21 = 1, *(long *)(lVar20 + 8) == 0)) {
        iVar21 = 2;
      }
    }
    else {
      iVar21 = -1;
    }
    if (0 < (int)uVar30) {
      uVar13 = (uVar30 + (uVar13 >> 5 & 1)) - 1;
      lVar23 = *(long *)(lVar20 + 0x18);
      uVar30 = (uint)lVar23;
      if ((long)(ulong)uVar13 <= lVar23 || lVar23 == -1) {
        uVar30 = uVar13;
      }
    }
  }
  if (iVar21 == 1) {
    pcVar22 = segment_command_00000020.segname + 8;
    FUN_00701e90();
    if (pcVar22 == (char *)0x0) {
      return 0;
    }
    *(dword *)(pcVar22 + 0x28) = 0;
    uVar25 = -(uVar19 >> 0x1f & 1) & 0xffffffe000000000 | (uVar19 & 0xffffffff) << 5;
    uVar18 = uVar25;
    FUN_00701e90();
    *(ulong *)pcVar22 = uVar18;
    *(undefined4 *)(pcVar22 + 8) = 0;
    *(qword *)(pcVar22 + 0x18) = 0;
    *(qword *)(pcVar22 + 0x20) = 0;
    *(qword *)(pcVar22 + 0x10) = 0;
    if (uVar18 == 0) {
      func_0x00701ed0(pcVar22);
      return 0;
    }
    if ((uVar19 & 0xffffffff) != 0) {
      _bzero(uVar18,uVar25);
    }
    *(int *)(pcVar22 + 8) = iVar17;
    uVar5 = 0x2ea;
    func_0x00702528(0x2ea);
    lVar23 = 0;
    FUN_0070ed40(0,uVar5,0);
    if ((lVar23 != 0) && (uVar19 = uVar18, func_0x0070f094(uVar18,lVar23,0,pcVar22), uVar19 != 0)) {
      puVar1 = (uint *)(uVar18 + 0x38);
      for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
        if ((param_3 == (ulong *)0x0) || (*param_3 <= (ulong)uVar4)) {
          plVar26 = (long *)0x0;
        }
        else {
          plVar26 = *(long **)(param_3[1] + (ulong)uVar4 * 8);
        }
        plVar6 = plVar26;
        FUN_0070e8d4();
        FUN_00705a60(plVar26 + 3);
        *(long **)(puVar1 + -6) = plVar26;
        if (*plVar6 == 0) {
          *puVar1 = *puVar1 | 0x200;
        }
        uVar14 = (uint)plVar26[7];
        if (iVar29 == 0) {
          if ((uVar4 == 0) || ((uVar14 >> 5 & 1) == 0)) {
            *puVar1 = *puVar1 | 0x200;
            iVar29 = 0;
            goto joined_r0x0070f568;
          }
          iVar29 = 0;
          if (iVar27 != 0) goto LAB_0070f56c;
LAB_0070f548:
          *puVar1 = *puVar1 | 0x400;
        }
        else {
          iVar17 = iVar29 + (uVar14 >> 5 & 1) + -1;
          uVar19 = plVar6[2];
          iVar29 = (int)uVar19;
          if ((long)iVar17 <= (long)uVar19 || 0x7fffffffffffffff < uVar19) {
            iVar29 = iVar17;
          }
joined_r0x0070f568:
          if (iVar27 == 0) goto LAB_0070f548;
LAB_0070f56c:
          iVar17 = iVar27 + (uVar14 >> 5 & 1) + -1;
          uVar19 = plVar6[4];
          iVar27 = (int)uVar19;
          if ((long)iVar17 <= (long)uVar19 || 0x7fffffffffffffff < uVar19) {
            iVar27 = iVar17;
          }
        }
        puVar1 = puVar1 + 8;
      }
      if (uVar30 == 0) {
        *param_2 = 1;
      }
      lVar23 = *(long *)pcVar22;
      lVar20 = lVar23;
      for (iVar29 = 1; iVar29 < (int)*(qword *)(pcVar22 + 8); iVar29 = iVar29 + 1) {
        lVar2 = lVar20 + 0x20;
        puVar7 = *(undefined8 **)(lVar20 + 0x20);
        FUN_0070e8d4();
        for (uVar19 = 0;
            (puVar15 = (ulong *)puVar7[1], puVar15 != (ulong *)0x0 && (uVar19 < *puVar15));
            uVar19 = uVar19 + 1) {
          bVar16 = false;
          lVar23 = *(long *)(puVar15[1] + uVar19 * 8);
          for (uVar18 = 0;
              (puVar15 = *(ulong **)(lVar20 + 8), puVar15 != (ulong *)0x0 && (uVar18 < *puVar15));
              uVar18 = uVar18 + 1) {
            uVar5 = *(undefined8 *)(puVar15[1] + uVar18 * 8);
            lVar8 = lVar20;
            FUN_0070f168(lVar20,uVar5,*(undefined8 *)(lVar23 + 8));
            if ((int)lVar8 != 0) {
              lVar8 = lVar2;
              func_0x0070fc68(lVar2,lVar23,uVar5);
              if (lVar8 == 0) goto LAB_0070f88c;
              bVar16 = true;
            }
          }
          if (((!bVar16) && (*(long *)(lVar20 + 0x10) != 0)) &&
             (lVar8 = lVar2, func_0x0070fc68(lVar2,lVar23), lVar8 == 0)) goto LAB_0070f88c;
        }
        if ((*(byte *)(lVar20 + 0x39) >> 1 & 1) == 0) {
          for (uVar19 = 0;
              (puVar15 = *(ulong **)(lVar20 + 8), puVar15 != (ulong *)0x0 && (uVar19 < *puVar15));
              uVar19 = uVar19 + 1) {
            puVar28 = *(undefined8 **)(puVar15[1] + uVar19 * 8);
            if (((*(byte *)(lVar20 + 0x19) >> 2 & 1) == 0) && ((*(byte *)*puVar28 & 1) != 0)) {
              puVar15 = *(ulong **)((byte *)*puVar28 + 0x18);
              if ((puVar15 != (ulong *)0x0) && (*puVar15 != (long)*(int *)(puVar28 + 2))) {
                for (uVar18 = 0; uVar18 < *puVar15; uVar18 = uVar18 + 1) {
                  uVar5 = *(undefined8 *)(puVar15[1] + uVar18 * 8);
                  lVar23 = lVar2;
                  func_0x0070f024(lVar2,puVar28,uVar5);
                  if ((lVar23 == 0) &&
                     (lVar23 = lVar2, func_0x0070fc5c(lVar2,puVar7,uVar5), (int)lVar23 == 0))
                  goto LAB_0070f88c;
                }
              }
            }
            else if ((*(int *)(puVar28 + 2) == 0) &&
                    (lVar23 = lVar2, func_0x0070fc5c(lVar2,puVar7,0), (int)lVar23 == 0))
            goto LAB_0070f88c;
          }
          if ((*(long *)(lVar20 + 0x10) != 0) &&
             (lVar23 = lVar2, func_0x0070fc68(lVar2,*puVar7), lVar23 == 0)) goto LAB_0070f88c;
        }
        lVar8 = lVar2;
        if ((*(byte *)(lVar20 + 0x39) >> 2 & 1) != 0) {
          plVar26 = *(long **)(lVar20 + 0x28);
          if (plVar26 == (long *)0x0) {
            lVar23 = 0;
          }
          else {
            lVar23 = *plVar26;
          }
          uVar19 = lVar23 - 1;
          iVar17 = (int)uVar19;
          while (-1 < iVar17) {
            if ((*(byte *)**(undefined8 **)(plVar26[1] + (uVar19 & 0x7fffffff) * 8) & 3) != 0) {
              func_0x0070fc30();
              func_0x0070fc44();
            }
            uVar19 = uVar19 - 1;
            iVar17 = (int)uVar19;
          }
        }
        do {
          while( true ) {
            plVar26 = *(long **)(lVar8 + -0x18);
            if (plVar26 == (long *)0x0) {
              lVar23 = 0;
            }
            else {
              lVar23 = *plVar26;
            }
            uVar19 = lVar23 - 1;
            iVar17 = (int)uVar19;
            while (-1 < iVar17) {
              if (*(int *)(*(long *)(plVar26[1] + (uVar19 & 0x7fffffff) * 8) + 0x10) == 0) {
                func_0x0070fc30();
                func_0x0070fc44();
              }
              uVar19 = uVar19 - 1;
              iVar17 = (int)uVar19;
            }
            lVar20 = lVar8 + -0x20;
            lVar23 = *(long *)(lVar8 + -0x10);
            if (lVar23 != 0) break;
LAB_0070f820:
            lVar8 = lVar20;
            if (lVar20 == *(long *)pcVar22) {
              FUN_0070f23c(pcVar22);
              if (*param_2 != 0) {
                return 0xfffffffe;
              }
              return 1;
            }
          }
          if (*(int *)(lVar23 + 0x10) == 0) {
            lVar23 = *(long *)(lVar23 + 8);
            if (lVar23 != 0) {
              *(int *)(lVar23 + 0x10) = *(int *)(lVar23 + 0x10) + -1;
            }
            func_0x00701ed0();
            *(undefined8 *)(lVar8 + -0x10) = 0;
            goto LAB_0070f820;
          }
          lVar23 = *(long *)pcVar22;
          lVar8 = lVar20;
        } while (lVar20 != lVar23);
        lVar20 = lVar2;
      }
      pqVar3 = (qword *)(pcVar22 + 0x18);
      pqVar9 = pqVar3;
      if (*(long *)(lVar23 + (long)(int)*(qword *)(pcVar22 + 8) * 0x20 + -0x10) != 0) {
        FUN_0070fb88();
        if ((int)pqVar9 == 0) goto LAB_0070f88c;
        lVar23 = *(long *)pcVar22;
        pqVar9 = &qStack_68;
      }
      iVar29 = 1;
      while ((iVar29 < (int)*(qword *)(pcVar22 + 8) &&
             (lVar20 = *(long *)(lVar23 + 0x10), lVar20 != 0))) {
        for (uVar19 = 0;
            (puVar15 = *(ulong **)(lVar23 + 0x28), puVar15 != (ulong *)0x0 && (uVar19 < *puVar15));
            uVar19 = uVar19 + 1) {
          if ((*(long *)(*(long *)(puVar15[1] + uVar19 * 8) + 8) == lVar20) &&
             (pqVar10 = pqVar9, FUN_0070fb88(), (int)pqVar10 == 0)) goto LAB_0070f88c;
        }
        iVar29 = iVar29 + 1;
        lVar23 = lVar23 + 0x20;
      }
      pqVar10 = &qStack_68;
      if (pqVar9 != &qStack_68) {
        pqVar10 = pqVar3;
      }
      qVar24 = *pqVar10;
      if ((param_4 == (ulong *)0x0) || (*param_4 == 0)) {
LAB_0070fa78:
        bVar16 = false;
      }
      else {
        uVar19 = 0;
        plVar26 = *(long **)(*(long *)pcVar22 + (long)(int)*(qword *)(pcVar22 + 8) * 0x20 + -0x10);
        do {
          uVar18 = *param_4;
          if (uVar18 <= uVar19) {
            uVar19 = 0;
            goto LAB_0070f9e4;
          }
          iVar29 = (int)*(undefined8 *)(param_4[1] + uVar19 * 8);
          FUN_00702384();
          uVar19 = uVar19 + 1;
        } while (iVar29 != 0x2ea);
        bVar16 = false;
        *(uint *)(pcVar22 + 0x28) = *(uint *)(pcVar22 + 0x28) | 2;
      }
LAB_0070fa7c:
      if (pqVar9 == &qStack_68) {
        FUN_00705f10(qVar24);
      }
      if (!bVar16) {
        *param_1 = pcVar22;
        if (*param_2 != 0) {
          lVar23 = 0x20;
          if ((*(dword *)(pcVar22 + 0x28) & 2) != 0) {
            lVar23 = 0x18;
          }
          if ((*(long **)(pcVar22 + lVar23) == (long *)0x0) || (**(long **)(pcVar22 + lVar23) == 0))
          {
            return 0xfffffffe;
          }
        }
        return 1;
      }
    }
  }
  else {
    if ((iVar21 == 2) && (uVar30 == 0)) {
      *param_2 = 1;
      return 0xfffffffe;
    }
    if (iVar21 == 2) {
      return 1;
    }
    if (iVar21 == 0) {
      return 0;
    }
    if (iVar21 == -1) {
      return 0xffffffff;
    }
    pcVar22 = (char *)0x0;
  }
LAB_0070f88c:
  FUN_0070f23c(pcVar22);
  return 0;
LAB_0070f9e4:
  if (uVar18 <= uVar19) goto LAB_0070fa78;
  uVar5 = *(undefined8 *)(param_4[1] + uVar19 * 8);
  qVar12 = qVar24;
  FUN_0070efb0(qVar24,uVar5);
  if (qVar12 == 0) {
    if (plVar26 != (long *)0x0) {
      puVar11 = (undefined4 *)0x0;
      FUN_0070ed40(0,uVar5,*(uint *)*plVar26 & 0x10);
      if (puVar11 != (undefined4 *)0x0) {
        lVar23 = plVar26[1];
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(*plVar26 + 0x10);
        *puVar11 = 0xc;
        func_0x0070f094(0,puVar11,lVar23,pcVar22);
        goto LAB_0070fa4c;
      }
      goto LAB_0070fad0;
    }
  }
  else {
LAB_0070fa4c:
    qVar12 = *(qword *)(pcVar22 + 0x20);
    if (qVar12 == 0) {
      FUN_00705ed8();
      *(qword *)(pcVar22 + 0x20) = qVar12;
      if (qVar12 == 0) goto LAB_0070fa78;
    }
    func_0x00706268();
    if (qVar12 == 0) {
LAB_0070fad0:
      bVar16 = true;
      goto LAB_0070fa7c;
    }
  }
  uVar19 = uVar19 + 1;
  uVar18 = *param_4;
  goto LAB_0070f9e4;
}



/* Entry: 0070fad8; end: 0070fadf;  */

void FUN_0070fad8(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070fc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 0070fae0; end: 0070fb87;  */

void FUN_0070fae0(long param_1,long *param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  uint *puVar1;
  
  if (param_3 == 0) {
    param_3 = *(long *)((uint *)*param_4 + 2);
  }
  puVar1 = (uint *)0x0;
  FUN_0070ed40(0,param_3,*(uint *)*param_4 & 0x10);
  if (puVar1 != (uint *)0x0) {
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(*param_2 + 0x10);
    *puVar1 = *puVar1 | 4;
    func_0x0070f094(param_1,puVar1,param_4,param_5);
    if (param_1 == 0) {
      FUN_0070ece0(puVar1);
    }
  }
  return;
}



/* Entry: 0070fb88; end: 0070fbfb;  */

void FUN_0070fb88(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    func_0x0070ef88();
    *param_1 = lVar1;
    if (lVar1 == 0) {
      return;
    }
  }
  else {
    func_0x00706308();
    lVar1 = *param_1;
    FUN_00706128(lVar1,0,param_2,FUN_0070fbfc);
    if ((int)lVar1 != 0) {
      return;
    }
  }
  func_0x00706268();
  return;
}



/* Entry: 0070fbfc; end: 0070fc2f;  */

void FUN_0070fbfc(code *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_2;
  uStack_20 = *param_3;
  (*param_1)(&uStack_18,&uStack_20);
  return;
}



/* Entry: 0070fc30; end: 0070fc6f;  */

void FUN_0070fc30(long param_1)

{
  long *plVar1;
  
  *(int *)(*(long *)(param_1 + 8) + 0x10) = *(int *)(*(long *)(param_1 + 8) + 0x10) + -1;
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -8);
    FUN_00701f08(plVar1,*plVar1 + 8);
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_0099a260)(plVar1);
    return;
  }
  return;
}



/* Entry: 0070fc70; end: 0070fd43;  */

long FUN_0070fc70(undefined8 param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long lStack_38;
  
  piVar3 = (int *)*param_2;
  lStack_38 = param_3;
  if (piVar3 != (int *)0x0) {
    lVar2 = *(long *)(piVar3 + 2);
    FUN_00715a40(lVar2,(long)*piVar3);
    if (lVar2 == 0) goto LAB_0070fd10;
    iVar1 = 0x91c0b4;
    FUN_00715244(&UNK_0091c0b4,lVar2,&lStack_38);
    func_0x00701ed0(lVar2);
    if (iVar1 == 0) goto LAB_0070fd10;
  }
  lVar2 = lStack_38;
  if (param_2[1] != 0) {
    lVar2 = 0;
    FUN_00710028(0,param_2[1],lStack_38);
    if (lVar2 == 0) goto LAB_0070fd10;
  }
  lStack_38 = lVar2;
  if (param_2[2] == 0) {
    return lStack_38;
  }
  iVar1 = 0x91c0ba;
  func_0x00715694(&UNK_0091c0ba,param_2[2],&lStack_38);
  if (iVar1 != 0) {
    return lStack_38;
  }
LAB_0070fd10:
  if (param_3 == 0) {
    FUN_00705f40(lStack_38,FUN_0070ffec,FUN_007153b4);
  }
  return 0;
}



/* Entry: 0070fd44; end: 0070ffeb;  */

/* WARNING: Possible PIC construction at 0x0070ff48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0070ff4c) */
/* WARNING: Removing unreachable block (ram,0x0070ff50) */
/* WARNING: Removing unreachable block (ram,0x0070ffdc) */
/* WARNING: Removing unreachable block (ram,0x0070ff58) */
/* WARNING: Removing unreachable block (ram,0x0070ff60) */
/* WARNING: Removing unreachable block (ram,0x0070ff6c) */
/* WARNING: Removing unreachable block (ram,0x0070ff90) */
/* WARNING: Removing unreachable block (ram,0x0070ff80) */
/* WARNING: Removing unreachable block (ram,0x0070ffe0) */

undefined8 FUN_0070fd44(undefined8 param_1,int *param_2,ulong *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined *puStack_80;
  undefined8 uStack_78;
  int *piStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  uVar9 = 0;
  iVar10 = 0;
  iVar11 = 0;
  piStack_68 = param_2;
  while (param_3 != (ulong *)0x0) {
    if (*param_3 <= uVar9) goto LAB_0070fe24;
    lVar5 = *(long *)(param_3[1] + uVar9 * 8);
    uVar8 = *(undefined8 *)(lVar5 + 8);
    uVar2 = uVar8;
    _strcmp(uVar8,&UNK_0091c0b4);
    if ((int)uVar2 == 0) {
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        iVar11 = 1;
      }
      else {
        _strcmp(lVar5,&UNK_0091c0c1);
        iVar11 = 1;
        if ((int)lVar5 == 0) {
          iVar11 = 2;
        }
      }
    }
    else {
      _strcmp(uVar8,&UNK_0091c0c8);
      if ((int)uVar8 != 0) {
        func_0x00710004();
        func_0x0070fff8();
        uStack_78 = *(undefined8 *)(lVar5 + 8);
        puStack_80 = &UNK_0091bd82;
        FUN_006de97c(2);
        return 0;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        iVar10 = 1;
      }
      else {
        _strcmp(lVar5,&UNK_0091c0c1);
        iVar10 = 1;
        if ((int)lVar5 == 0) {
          iVar10 = 2;
        }
      }
    }
    uVar9 = uVar9 + 1;
  }
  iVar10 = 0;
  iVar11 = 0;
LAB_0070fe24:
  if (piStack_68 != (int *)0x0) {
    plVar7 = *(long **)(piStack_68 + 2);
    if (plVar7 != (long *)0x0) {
      if (iVar11 == 0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar3 = plVar7;
        func_0x00709058(plVar7,0x52,0xffffffff);
        if (((int)plVar3 < 0) ||
           (plVar6 = plVar7, func_0x00709064(plVar7,plVar3), plVar6 == (long *)0x0)) {
          plVar6 = (long *)0x0;
        }
        else {
          FUN_00712fdc();
        }
        if ((iVar11 == 2) && (plVar6 == (long *)0x0)) {
          func_0x00710004();
          goto LAB_0070fec8;
        }
      }
      if ((iVar10 == 2) || (plVar6 == (long *)0x0 && iVar10 != 0)) {
        lVar5 = *(long *)(*plVar7 + 0x18);
        func_0x0070db30();
        lVar4 = *(long *)(*plVar7 + 8);
        FUN_006ce3bc();
        if ((lVar5 == 0) || (lVar4 == 0)) {
          func_0x00710004();
          func_0x0070fff8();
          func_0x0070db24(lVar5);
          FUN_006ce410(lVar4);
          FUN_006ce410(plVar6);
          return 0;
        }
      }
      unaff_x30 = 0x70ff4c;
      register0x00000008 = (BADSPACEBASE *)&puStack_80;
      unaff_x29 = puVar1;
FUN_006d0610:
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      *(undefined8 *)((long)register0x00000008 + -0x18) = 0;
      puVar1 = (undefined1 *)((long)register0x00000008 + -0x18);
      FUN_006d0644(puVar1,&DAT_00a1ceb0);
      uVar2 = 0;
      if ((int)puVar1 != 0) {
        uVar2 = *(undefined8 *)((long)register0x00000008 + -0x18);
      }
      return uVar2;
    }
    if (*piStack_68 == 1) goto FUN_006d0610;
  }
  func_0x00710004();
LAB_0070fec8:
  func_0x0070fff8();
  return 0;
}



/* Entry: 0070ffec; end: 00710027;  */

void FUN_0070ffec(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0070fff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00710028; end: 007100c7;  */

undefined8 * FUN_00710028(undefined8 *param_1,ulong *param_2,undefined8 *param_3)

{
  segment_command *psVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 unaff_x20;
  ulong uVar4;
  
  uVar4 = 0;
  puVar2 = param_3;
  do {
    puVar3 = param_3;
    if ((param_2 == (ulong *)0x0) || (puVar3 = puVar2, *param_2 <= uVar4)) {
      if (puVar3 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
        func_0x00706438();
        if (puVar2 != (undefined8 *)0x0) {
          puVar2[4] = 0;
          puVar2[1] = 0;
          *puVar2 = 0;
          puVar2[3] = 0;
          puVar2[2] = 0;
          psVar1 = &segment_command_00000020;
          FUN_00701e90();
          puVar2[1] = psVar1;
          if (psVar1 == (segment_command *)0x0) {
            func_0x00701ed0(puVar2);
            puVar2 = (undefined8 *)0x0;
          }
          else {
            psVar1->segname[0] = '\0';
            psVar1->segname[1] = '\0';
            psVar1->segname[2] = '\0';
            psVar1->segname[3] = '\0';
            psVar1->segname[4] = '\0';
            psVar1->segname[5] = '\0';
            psVar1->segname[6] = '\0';
            psVar1->segname[7] = '\0';
            psVar1->cmd = 0;
            psVar1->cmdsize = 0;
            psVar1->vmaddr = 0;
            psVar1->segname[8] = '\0';
            psVar1->segname[9] = '\0';
            psVar1->segname[10] = '\0';
            psVar1->segname[0xb] = '\0';
            psVar1->segname[0xc] = '\0';
            psVar1->segname[0xd] = '\0';
            psVar1->segname[0xe] = '\0';
            psVar1->segname[0xf] = '\0';
            puVar2[3] = 4;
            puVar2[4] = unaff_x20;
          }
        }
        return puVar2;
      }
      return puVar3;
    }
    FUN_00710338();
    if (param_3 == (undefined8 *)0x0 && param_1 == (undefined8 *)0x0) {
      FUN_00705f40(puVar2,FUN_00710b40,FUN_007153b4);
      return (undefined8 *)0x0;
    }
    uVar4 = uVar4 + 1;
    puVar2 = param_1;
  } while (param_1 != (undefined8 *)0x0);
  return (undefined8 *)0x0;
}



/* Entry: 007100c8; end: 00710337;  */

long FUN_007100c8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *unaff_x20;
  int unaff_w21;
  long unaff_x22;
  long lVar4;
  ulong uVar5;
  
  func_0x00710ca0();
  if (param_1 == 0) {
    func_0x00710c7c();
  }
  else if (unaff_x20 != (ulong *)0x0) {
    for (uVar5 = 0; uVar5 < *unaff_x20; uVar5 = uVar5 + 1) {
      lVar4 = *(long *)(unaff_x20[1] + uVar5 * 8);
      uVar2 = *(undefined8 *)(lVar4 + 8);
      func_0x00715c1c(uVar2,&UNK_0091c121);
      if ((((int)uVar2 == 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) &&
         ((lVar3 = lVar4, _strcmp(lVar4,&UNK_0091c228), (int)lVar3 == 0 ||
          (_strcmp(lVar4,&UNK_0091c22d), (int)lVar4 == 0)))) {
        iVar1 = unaff_w21;
        FUN_00710b44();
        if (iVar1 == 0) {
LAB_007101a0:
          func_0x0071074c(param_1);
          return 0;
        }
      }
      else {
        lVar4 = unaff_x22;
        FUN_00710738();
        if (lVar4 == 0) goto LAB_007101a0;
        func_0x00710cc4();
      }
    }
  }
  return param_1;
}



/* Entry: 00710338; end: 00710533;  */

undefined8 FUN_00710338(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_155 [5];
  undefined8 uStack_150;
  undefined4 auStack_148 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_150 = param_3;
  switch(*param_2) {
  case 0:
    iVar1 = 0x91c0f3;
    break;
  case 1:
    param_2 = *(undefined4 **)(param_2 + 2);
    iVar1 = 0x91c121;
    goto code_r0x00710440;
  case 2:
    param_2 = *(undefined4 **)(param_2 + 2);
    iVar1 = 0x91c127;
    goto code_r0x00710440;
  case 3:
    iVar1 = 0x91c10b;
    break;
  case 4:
    lVar2 = *(long *)(param_2 + 2);
    param_2 = auStack_148;
    FUN_00709c84(lVar2,param_2,0x100);
    param_3 = 0;
    if (lVar2 != 0) {
      iVar1 = 0x91c12f;
      goto code_r0x0071046c;
    }
    goto code_r0x00710480;
  case 5:
    iVar1 = 0x91c114;
    break;
  case 6:
    param_2 = *(undefined4 **)(param_2 + 2);
    iVar1 = 0x91c12b;
code_r0x00710440:
    FUN_0071539c(iVar1,param_2,&uStack_150);
    goto joined_r0x00710448;
  case 7:
    if (**(int **)(param_2 + 2) == 0x10) {
      auStack_148[0]._0_1_ = 0;
      for (iVar1 = 0; iVar1 != 0x10; iVar1 = iVar1 + 2) {
        FUN_00702090(auStack_155,5,&UNK_0091c143);
        func_0x00702178(auStack_148,auStack_155,0x100);
        if (iVar1 != 0xe) {
          func_0x00702178(auStack_148,&UNK_0091c146,0x100);
        }
      }
code_r0x00710404:
      iVar1 = 0x91c148;
      goto code_r0x0071046c;
    }
    if (**(int **)(param_2 + 2) == 4) {
      func_0x00710cf0();
      FUN_00702090(auStack_148,0x100,&UNK_0091c137);
      goto code_r0x00710404;
    }
    iVar1 = 0x91c148;
    param_2 = (undefined4 *)&UNK_0091c153;
    goto code_r0x00710470;
  case 8:
    func_0x006cc674(auStack_148,0x100,*(undefined8 *)(param_2 + 2));
    iVar1 = 0x91c15d;
code_r0x0071046c:
    param_2 = auStack_148;
    goto code_r0x00710470;
  default:
    goto code_r0x00710480;
  }
  param_2 = (undefined4 *)&UNK_0091c0fd;
code_r0x00710470:
  FUN_00715244(iVar1,param_2,&uStack_150);
joined_r0x00710448:
  param_3 = uStack_150;
  if (iVar1 == 0) {
    param_3 = 0;
  }
code_r0x00710480:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return param_3;
  }
  ___stack_chk_fail();
  switch(*param_2) {
  case 0:
    break;
  case 1:
    goto code_r0x0071060c;
  case 2:
    goto code_r0x0071060c;
  case 3:
    break;
  case 4:
    func_0x00710ce8();
    FUN_007081c8(param_3,*(undefined8 *)(param_2 + 2),0,&UNK_0082031f);
    return 1;
  case 5:
    break;
  case 6:
code_r0x0071060c:
    func_0x00710ce8();
    FUN_006ccf4c(param_3,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    if (**(int **)(param_2 + 2) == 0x10) {
      func_0x00710ce8();
      for (iVar1 = 0; iVar1 != 0x10; iVar1 = iVar1 + 2) {
        FUN_006d2bcc(param_3,&UNK_0091c1e7);
      }
      func_0x006d1a14(param_3,&UNK_0091c1eb);
      return 1;
    }
    if (**(int **)(param_2 + 2) == 4) {
      func_0x00710cf0();
    }
    break;
  case 8:
    func_0x00710ce8();
    FUN_006cc67c(param_3,*(undefined8 *)(param_2 + 2));
  default:
    goto LAB_007106ac;
  }
  func_0x00710ce8();
LAB_007106ac:
  return 1;
}



/* Entry: 00710534; end: 007106b3;  */

undefined8 FUN_00710534(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  switch(*param_2) {
  case 0:
    break;
  case 1:
    puVar1 = &UNK_0091c1b5;
    goto code_r0x0071060c;
  case 2:
    puVar1 = &UNK_0091c1bc;
    goto code_r0x0071060c;
  case 3:
    break;
  case 4:
    func_0x00710ce8(param_1,&UNK_0091c1c6);
    FUN_007081c8(param_1,*(undefined8 *)(param_2 + 2),0,&UNK_0082031f);
    return 1;
  case 5:
    break;
  case 6:
    puVar1 = &UNK_0091c1c1;
code_r0x0071060c:
    func_0x00710ce8(param_1,puVar1);
    FUN_006ccf4c(param_1,*(undefined8 *)(param_2 + 2));
    return 1;
  case 7:
    if (**(int **)(param_2 + 2) == 0x10) {
      func_0x00710ce8(param_1,&UNK_0091c148);
      for (iVar2 = 0; iVar2 != 0x10; iVar2 = iVar2 + 2) {
        FUN_006d2bcc(param_1,&UNK_0091c1e7);
      }
      func_0x006d1a14(param_1,&UNK_0091c1eb);
      return 1;
    }
    if (**(int **)(param_2 + 2) == 4) {
      func_0x00710cf0();
    }
    break;
  case 8:
    func_0x00710ce8(param_1,&UNK_0091c15d);
    FUN_006cc67c(param_1,*(undefined8 *)(param_2 + 2));
  default:
    goto LAB_007106ac;
  }
  func_0x00710ce8();
LAB_007106ac:
  return 1;
}



/* Entry: 007106b4; end: 00710737;  */

long FUN_007106b4(long param_1)

{
  long lVar1;
  ulong *unaff_x20;
  long unaff_x22;
  ulong uVar2;
  
  func_0x00710ca0();
  if (param_1 == 0) {
    func_0x00710c7c();
  }
  else if (unaff_x20 != (ulong *)0x0) {
    for (uVar2 = 0; uVar2 < *unaff_x20; uVar2 = uVar2 + 1) {
      lVar1 = unaff_x22;
      FUN_00710738();
      if (lVar1 == 0) {
        func_0x0071074c(param_1);
        return 0;
      }
      func_0x00710cc4();
    }
  }
  return param_1;
}



/* Entry: 00710738; end: 0071075f;  */

/* WARNING: Removing unreachable block (ram,0x00710978) */
/* WARNING: Removing unreachable block (ram,0x00710ac8) */

undefined4 * FUN_00710738(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  
  iVar1 = 0;
  lVar8 = *(long *)(param_3 + 0x10);
  if (lVar8 == 0) {
    func_0x00710cb0();
    func_0x00710c94();
    return (undefined4 *)0x0;
  }
  func_0x00710cbc(0,&UNK_0091c121);
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x00710cbc();
    if (iVar1 == 0) {
      uVar6 = 6;
    }
    else {
      func_0x00710cbc();
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      else {
        func_0x00710cbc();
        if (iVar1 == 0) {
          uVar6 = 8;
        }
        else {
          func_0x00710cbc();
          if (iVar1 == 0) {
            uVar6 = 7;
          }
          else {
            func_0x00710cbc();
            if (iVar1 == 0) {
              uVar6 = 4;
            }
            else {
              func_0x00710cbc();
              if (iVar1 != 0) {
                func_0x00710cb0();
                func_0x00710c94();
                func_0x00710d0c();
                return (undefined4 *)0x0;
              }
              uVar6 = 0;
            }
          }
        }
      }
    }
  }
  puVar2 = (undefined4 *)0x0;
  if (lVar8 == 0) {
    func_0x00710cb0();
    FUN_006de8e4();
    return (undefined4 *)0x0;
  }
  func_0x00712960();
  if (puVar2 == (undefined4 *)0x0) {
    func_0x00710c7c();
    return (undefined4 *)0x0;
  }
  switch(uVar6) {
  case 0:
    lVar9 = lVar8;
    _strchr(lVar8,0x3b);
    if (lVar9 != 0) {
      lVar3 = lVar9;
      func_0x00712954();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        func_0x006d0ad0(*(undefined8 *)(lVar3 + 8));
        lVar3 = lVar9 + 1;
        FUN_00706a50(lVar3,param_2);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar3;
        if (lVar3 != 0) {
          lVar8 = (long)(((int)lVar9 - (int)lVar8) + 1);
          FUN_00701e90();
          if (lVar8 != 0) {
            FUN_00702124();
            lVar9 = lVar8;
            FUN_007024d4(lVar8,0);
            **(long **)(puVar2 + 2) = lVar9;
            func_0x00701ed0(lVar8);
            if (**(long **)(puVar2 + 2) != 0) goto code_r0x00710a94;
          }
        }
      }
    }
    func_0x00710cb0();
    break;
  case 1:
  case 2:
  case 6:
    puVar4 = puVar2;
    func_0x006d0a80();
    *(undefined4 **)(puVar2 + 2) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      lVar9 = lVar8;
      _strlen(lVar8);
      FUN_006ce2d0(puVar4,lVar8,lVar9);
      if ((int)puVar4 != 0) goto code_r0x00710a94;
    }
    func_0x00710cb0();
    break;
  default:
    func_0x00710cb0();
    break;
  case 4:
    puVar4 = puVar2;
    func_0x0070db18();
    if (puVar4 == (undefined4 *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_2;
      FUN_00711070(param_2,lVar8);
      if (lVar9 == 0) {
        func_0x00710cb0();
        func_0x00710c94();
        func_0x00710d0c();
      }
      else {
        puVar5 = puVar4;
        FUN_007162fc(puVar4,lVar9,0x1001);
        if ((int)puVar5 != 0) {
          *(undefined4 **)(puVar2 + 2) = puVar4;
          pcVar7 = *(code **)(*(long *)(param_2 + 0x28) + 0x18);
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(*(undefined8 *)(param_2 + 0x30),lVar9);
          }
          goto code_r0x00710a94;
        }
      }
    }
    func_0x0070db24(puVar4);
    FUN_007110b4(param_2,lVar9);
    func_0x00710cb0();
    break;
  case 7:
    FUN_00716110();
    *(long *)(puVar2 + 2) = lVar8;
    if (lVar8 != 0) {
code_r0x00710a94:
      *puVar2 = uVar6;
      return puVar2;
    }
    func_0x00710cb0();
    goto code_r0x00710ab0;
  case 8:
    FUN_007024d4(lVar8,0);
    if (lVar8 != 0) {
      *(long *)(puVar2 + 2) = lVar8;
      goto code_r0x00710a94;
    }
    func_0x00710cb0();
code_r0x00710ab0:
    func_0x00710c94();
    func_0x00710d0c();
    goto code_r0x00710b14;
  }
  func_0x00710c94();
code_r0x00710b14:
  func_0x0071296c(puVar2);
  return (undefined4 *)0x0;
}



/* Entry: 00710760; end: 007108a3;  */

undefined4 *
FUN_00710760(undefined4 *param_1,undefined8 param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_4 + 0x10);
  if (lVar8 == 0) {
    func_0x00710cb0();
    func_0x00710c94();
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  func_0x00710cbc(param_1,&UNK_0091c121);
  iVar1 = (int)puVar2;
  if (iVar1 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x00710cbc();
    if (iVar1 == 0) {
      uVar6 = 6;
    }
    else {
      func_0x00710cbc();
      if (iVar1 == 0) {
        uVar6 = 2;
      }
      else {
        func_0x00710cbc();
        if (iVar1 == 0) {
          uVar6 = 8;
        }
        else {
          func_0x00710cbc();
          if (iVar1 == 0) {
            uVar6 = 7;
          }
          else {
            func_0x00710cbc();
            if (iVar1 == 0) {
              uVar6 = 4;
            }
            else {
              func_0x00710cbc();
              if (iVar1 != 0) {
                func_0x00710cb0();
                func_0x00710c94();
                func_0x00710d0c();
                return (undefined4 *)0x0;
              }
              uVar6 = 0;
            }
          }
        }
      }
    }
  }
  if (lVar8 == 0) {
    func_0x00710cb0();
    FUN_006de8e4();
    return (undefined4 *)0x0;
  }
  puVar2 = param_1;
  if ((param_1 == (undefined4 *)0x0) && (func_0x00712960(), puVar2 == (undefined4 *)0x0)) {
    func_0x00710c7c();
    return (undefined4 *)0x0;
  }
  switch(uVar6) {
  case 0:
    lVar9 = lVar8;
    _strchr(lVar8,0x3b);
    if (lVar9 != 0) {
      lVar3 = lVar9;
      func_0x00712954();
      *(long *)(puVar2 + 2) = lVar3;
      if (lVar3 != 0) {
        func_0x006d0ad0(*(undefined8 *)(lVar3 + 8));
        lVar3 = lVar9 + 1;
        FUN_00706a50(lVar3,param_3);
        *(long *)(*(long *)(puVar2 + 2) + 8) = lVar3;
        if (lVar3 != 0) {
          lVar8 = (long)(((int)lVar9 - (int)lVar8) + 1);
          FUN_00701e90();
          if (lVar8 != 0) {
            FUN_00702124();
            lVar9 = lVar8;
            FUN_007024d4(lVar8,0);
            **(long **)(puVar2 + 2) = lVar9;
            func_0x00701ed0(lVar8);
            if (**(long **)(puVar2 + 2) != 0) goto code_r0x00710a94;
          }
        }
      }
    }
    func_0x00710cb0();
    break;
  case 1:
  case 2:
  case 6:
    puVar4 = puVar2;
    func_0x006d0a80();
    *(undefined4 **)(puVar2 + 2) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      lVar9 = lVar8;
      _strlen(lVar8);
      FUN_006ce2d0(puVar4,lVar8,lVar9);
      if ((int)puVar4 != 0) goto code_r0x00710a94;
    }
    func_0x00710cb0();
    break;
  default:
    func_0x00710cb0();
    break;
  case 4:
    puVar4 = puVar2;
    func_0x0070db18();
    if (puVar4 == (undefined4 *)0x0) {
      lVar9 = 0;
    }
    else {
      lVar9 = param_3;
      FUN_00711070(param_3,lVar8);
      if (lVar9 == 0) {
        func_0x00710cb0();
        func_0x00710c94();
        func_0x00710d0c();
      }
      else {
        puVar5 = puVar4;
        FUN_007162fc(puVar4,lVar9,0x1001);
        if ((int)puVar5 != 0) {
          *(undefined4 **)(puVar2 + 2) = puVar4;
          pcVar7 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
          if (pcVar7 != (code *)0x0) {
            (*pcVar7)(*(undefined8 *)(param_3 + 0x30),lVar9);
          }
          goto code_r0x00710a94;
        }
      }
    }
    func_0x0070db24(puVar4);
    FUN_007110b4(param_3,lVar9);
    func_0x00710cb0();
    break;
  case 7:
    if (param_5 == 0) {
      FUN_00716110();
    }
    else {
      FUN_0071618c();
    }
    *(long *)(puVar2 + 2) = lVar8;
    if (lVar8 != 0) {
code_r0x00710a94:
      *puVar2 = uVar6;
      return puVar2;
    }
    func_0x00710cb0();
    goto code_r0x00710ab0;
  case 8:
    FUN_007024d4(lVar8,0);
    if (lVar8 != 0) {
      *(long *)(puVar2 + 2) = lVar8;
      goto code_r0x00710a94;
    }
    func_0x00710cb0();
code_r0x00710ab0:
    func_0x00710c94();
    func_0x00710d0c();
    if (param_1 != (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    goto code_r0x00710b14;
  }
  func_0x00710c94();
  if (param_1 == (undefined4 *)0x0) {
code_r0x00710b14:
    func_0x0071296c(puVar2);
  }
  return (undefined4 *)0x0;
}



/* Entry: 007108a4; end: 00710b3f;  */

undefined4 *
FUN_007108a4(undefined4 *param_1,undefined8 param_2,long param_3,undefined4 param_4,long param_5,
            int param_6)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  long lVar6;
  
  if (param_5 == 0) {
    func_0x00710cb0();
    FUN_006de8e4();
    return (undefined4 *)0x0;
  }
  puVar1 = param_1;
  if ((param_1 == (undefined4 *)0x0) && (func_0x00712960(), puVar1 == (undefined4 *)0x0)) {
    func_0x00710c7c();
    return (undefined4 *)0x0;
  }
  switch(param_4) {
  case 0:
    lVar6 = param_5;
    _strchr(param_5,0x3b);
    if (lVar6 != 0) {
      lVar2 = lVar6;
      func_0x00712954();
      *(long *)(puVar1 + 2) = lVar2;
      if (lVar2 != 0) {
        func_0x006d0ad0(*(undefined8 *)(lVar2 + 8));
        lVar2 = lVar6 + 1;
        FUN_00706a50(lVar2,param_3);
        *(long *)(*(long *)(puVar1 + 2) + 8) = lVar2;
        if (lVar2 != 0) {
          lVar6 = (long)(((int)lVar6 - (int)param_5) + 1);
          FUN_00701e90();
          if (lVar6 != 0) {
            FUN_00702124();
            lVar2 = lVar6;
            FUN_007024d4(lVar6,0);
            **(long **)(puVar1 + 2) = lVar2;
            func_0x00701ed0(lVar6);
            if (**(long **)(puVar1 + 2) != 0) goto code_r0x00710a94;
          }
        }
      }
    }
    func_0x00710cb0();
    break;
  case 1:
  case 2:
  case 6:
    puVar3 = puVar1;
    func_0x006d0a80();
    *(undefined4 **)(puVar1 + 2) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      lVar6 = param_5;
      _strlen(param_5);
      FUN_006ce2d0(puVar3,param_5,lVar6);
      if ((int)puVar3 != 0) goto code_r0x00710a94;
    }
    func_0x00710cb0();
    break;
  default:
    func_0x00710cb0();
    break;
  case 4:
    puVar3 = puVar1;
    func_0x0070db18();
    if (puVar3 == (undefined4 *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = param_3;
      FUN_00711070(param_3,param_5);
      if (lVar6 == 0) {
        func_0x00710cb0();
        func_0x00710c94();
        func_0x00710d0c();
      }
      else {
        puVar4 = puVar3;
        FUN_007162fc(puVar3,lVar6,0x1001);
        if ((int)puVar4 != 0) {
          *(undefined4 **)(puVar1 + 2) = puVar3;
          pcVar5 = *(code **)(*(long *)(param_3 + 0x28) + 0x18);
          if (pcVar5 != (code *)0x0) {
            (*pcVar5)(*(undefined8 *)(param_3 + 0x30),lVar6);
          }
          goto code_r0x00710a94;
        }
      }
    }
    func_0x0070db24(puVar3);
    FUN_007110b4(param_3,lVar6);
    func_0x00710cb0();
    break;
  case 7:
    if (param_6 == 0) {
      FUN_00716110();
    }
    else {
      FUN_0071618c();
    }
    *(long *)(puVar1 + 2) = param_5;
    if (param_5 != 0) {
code_r0x00710a94:
      *puVar1 = param_4;
      return puVar1;
    }
    func_0x00710cb0();
    goto code_r0x00710ab0;
  case 8:
    FUN_007024d4(param_5,0);
    if (param_5 != 0) {
      *(long *)(puVar1 + 2) = param_5;
      goto code_r0x00710a94;
    }
    func_0x00710cb0();
code_r0x00710ab0:
    func_0x00710c94();
    func_0x00710d0c();
    if (param_1 != (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    goto code_r0x00710b14;
  }
  func_0x00710c94();
  if (param_1 == (undefined4 *)0x0) {
code_r0x00710b14:
    func_0x0071296c(puVar1);
  }
  return (undefined4 *)0x0;
}



/* Entry: 00710b40; end: 00710b43;  */

void FUN_00710b40(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00710d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00710b44; end: 00710c77;  */

undefined8 FUN_00710b44(int *param_1,long param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1 == (int *)0x0) {
LAB_00710c2c:
    puVar2 = (undefined4 *)0x0;
    puVar7 = (undefined4 *)0x0;
  }
  else {
    if (*param_1 == 1) {
      return 1;
    }
    plVar3 = *(long **)(param_1 + 4);
    if (plVar3 == (long *)0x0) {
      plVar3 = *(long **)(param_1 + 6);
      if (plVar3 == (long *)0x0) goto LAB_00710c2c;
      lVar4 = 0x20;
    }
    else {
      lVar4 = 0x28;
    }
    puVar5 = *(undefined4 **)(*plVar3 + lVar4);
    puVar2 = (undefined4 *)0xffffffff;
    do {
      puVar6 = puVar5;
      FUN_0070cc54(puVar5,0x30,puVar2);
      if ((int)puVar6 < 0) {
        return 1;
      }
      puVar1 = puVar5;
      func_0x0070cc1c(puVar5,puVar6);
      puVar2 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(puVar1 + 2);
      }
      FUN_006ce3bc();
      puVar7 = puVar2;
      if (param_3 != 0) {
        FUN_0070cc9c(puVar5,puVar6);
        func_0x0070dae4();
        puVar6 = (undefined4 *)(ulong)((int)puVar6 - 1);
        puVar7 = puVar1;
      }
      if (puVar2 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
        goto LAB_00710c44;
      }
      func_0x00712960();
      if (puVar7 == (undefined4 *)0x0) goto LAB_00710c44;
      *(undefined4 **)(puVar7 + 2) = puVar2;
      *puVar7 = 1;
      lVar4 = param_2;
      func_0x00706268(param_2,puVar7);
      puVar2 = puVar6;
    } while (lVar4 != 0);
    puVar2 = (undefined4 *)0x0;
  }
LAB_00710c44:
  func_0x00710cb0();
  func_0x00710c94();
  func_0x0071296c(puVar7);
  FUN_006ce410(puVar2);
  return 0;
}



/* Entry: 00710c78; end: 00710d1f;  */

void FUN_00710c78(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00710d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00710d20; end: 00710d73;  */

undefined8 FUN_00710d20(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uStack_28;
  
  uStack_28 = param_3;
  FUN_00715400(&UNK_0091c258,*param_2,&uStack_28);
  func_0x00715694(&DAT_0091c250,*(undefined8 *)(param_2 + 2),&uStack_28);
  return uStack_28;
}



/* Entry: 00710d74; end: 00710ea3;  */

undefined * FUN_00710d74(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = &DAT_00a1d0d8;
  FUN_006d0610();
  if (puVar2 == (undefined *)0x0) {
    func_0x00710eb0(0x14,0,0x41);
  }
  else if (param_3 != (ulong *)0x0) {
    for (uVar5 = 0; uVar5 < *param_3; uVar5 = uVar5 + 1) {
      lVar4 = *(long *)(param_3[1] + uVar5 * 8);
      pcVar3 = *(char **)(lVar4 + 8);
      if (((*pcVar3 == 'C') && (pcVar3[1] == 'A')) && (pcVar3[2] == '\0')) {
        func_0x007156ec(lVar4,puVar2);
        iVar1 = (int)lVar4;
      }
      else {
        _strcmp(pcVar3,&DAT_0091c250);
        if ((int)pcVar3 != 0) {
          func_0x00710eb0(0x14,0,0x7b);
          FUN_006de97c(6);
          goto LAB_00710e7c;
        }
        FUN_007157fc(lVar4,puVar2 + 8);
        iVar1 = (int)lVar4;
      }
      if (iVar1 == 0) {
LAB_00710e7c:
        FUN_00710ea4(puVar2);
        return (undefined *)0x0;
      }
    }
  }
  return puVar2;
}



/* Entry: 00710ea4; end: 00710ebb;  */

void FUN_00710ea4(undefined8 param_1)

{
  func_0x006d05f8(param_1,&DAT_00a1d0d8);
  return;
}



/* Entry: 00710ebc; end: 00710f27;  */

undefined8 FUN_00710ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  for (plVar3 = (long *)(*(long *)(param_1 + 0x60) + 8); lVar2 = *plVar3, lVar2 != 0;
      plVar3 = plVar3 + 3) {
    uVar1 = param_2;
    FUN_006cb5c4(param_2,(int)plVar3[-1]);
    if ((int)uVar1 != 0) {
      FUN_00715244(lVar2,0,&uStack_38);
    }
  }
  return uStack_38;
}



/* Entry: 00710f28; end: 00711057;  */

long FUN_00710f28(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  
  lVar2 = param_1;
  func_0x006d0a78();
  if (lVar2 == 0) {
    FUN_00711058();
  }
  else if (param_3 != (ulong *)0x0) {
    uVar6 = 0;
    do {
      if (*param_3 <= uVar6) {
        return lVar2;
      }
      lVar5 = *(long *)(param_3[1] + uVar6 * 8);
      plVar7 = (long *)(*(long *)(param_1 + 0x60) + 8);
      while( true ) {
        lVar3 = *plVar7;
        if (lVar3 == 0) goto LAB_00710fd0;
        lVar1 = plVar7[1];
        uVar4 = *(undefined8 *)(lVar5 + 8);
        _strcmp(lVar1,uVar4);
        if (((int)lVar1 == 0) || (_strcmp(lVar3,uVar4), (int)lVar3 == 0)) break;
        plVar7 = plVar7 + 3;
      }
      lVar5 = lVar2;
      FUN_006cb4b4(lVar2,(int)plVar7[-1],1);
      if ((int)lVar5 == 0) {
        FUN_00711058();
        goto LAB_0071101c;
      }
      uVar6 = uVar6 + 1;
    } while (*plVar7 != 0);
LAB_00710fd0:
    FUN_006de8e4(0x14,0,0x9c,0,0);
    FUN_006de97c(6);
LAB_0071101c:
    FUN_006ce410(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}



/* Entry: 00711058; end: 0071106f;  */

/* WARNING: Removing unreachable block (ram,0x006de91c) */
/* WARNING: Removing unreachable block (ram,0x006de920) */

void FUN_00711058(void)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0x14;
  FUN_006de604(0x14,0);
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
    *(undefined4 *)(puVar4 + 2) = 0x14000041;
  }
  return;
}



/* Entry: 00711070; end: 007110b3;  */

long FUN_00711070(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (((lVar1 != 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 8),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0071108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return lVar1;
  }
  func_0x007110d0(0x14,0,0x93);
  return 0;
}



/* Entry: 007110b4; end: 007110db;  */

void FUN_007110b4(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x28) + 0x18);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007110c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  return;
}



/* Entry: 007110dc; end: 00711943;  */

undefined8 FUN_007110dc(undefined8 param_1,ulong *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  if (param_2 != (ulong *)0x0) {
    for (uVar5 = 0; uVar5 < *param_2; uVar5 = uVar5 + 1) {
      lVar6 = *(long *)(param_2[1] + uVar5 * 8);
      FUN_006d2bcc(param_3,&UNK_0091c44a);
      func_0x00711a20();
      func_0x007119e4();
      puVar8 = *(ulong **)(lVar6 + 8);
      if (puVar8 != (ulong *)0x0) {
        for (uVar9 = 0; uVar9 < *puVar8; uVar9 = uVar9 + 1) {
          puVar7 = *(undefined8 **)(puVar8[1] + uVar9 * 8);
          iVar1 = (int)*puVar7;
          FUN_00702384();
          if (iVar1 == 0xa5) {
            FUN_006d2bcc(param_3,&UNK_0091c509);
            puVar7 = (undefined8 *)puVar7[1];
            puVar11 = (undefined8 *)*puVar7;
            if (puVar11 != (undefined8 *)0x0) {
              func_0x00711a04(*puVar11);
              FUN_006d2bcc(param_3,&UNK_0091c531);
              FUN_006d2bcc(param_3,&UNK_0091c548);
              for (uVar10 = 0;
                  (puVar4 = (ulong *)puVar11[1], puVar4 != (ulong *)0x0 && (uVar10 < *puVar4));
                  uVar10 = uVar10 + 1) {
                lVar6 = *(long *)(puVar4[1] + uVar10 * 8);
                if (uVar10 != 0) {
                  func_0x006d1a14(param_3,", ");
                }
                if (lVar6 == 0) {
                  func_0x006d1a14(param_3,"(null)");
                }
                else {
                  lVar2 = 0;
                  FUN_00715528(0,lVar6);
                  if (lVar2 == 0) goto LAB_007112f8;
                  func_0x006d1a14(param_3,lVar2);
                  func_0x00701ed0(lVar2);
                }
              }
              func_0x007119e4();
            }
            if (puVar7[1] != 0) {
              func_0x00711a04();
              puVar3 = &UNK_0091c556;
              goto LAB_007112f4;
            }
          }
          else if (iVar1 == 0xa4) {
            func_0x00711a04(puVar7[1]);
            puVar3 = &UNK_0091c4fb;
LAB_007112f4:
            FUN_006d2bcc(param_3,puVar3);
          }
          else {
            FUN_006d2bcc(param_3,&UNK_0091c51a);
            func_0x00711a20();
            func_0x007119e4();
          }
LAB_007112f8:
        }
      }
    }
  }
  return 1;
}



/* Entry: 00711944; end: 00711a2b;  */

undefined8 FUN_00711944(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  FUN_006d0644(puVar2,&DAT_00a1d4c0);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 00711a2c; end: 00711d3f;  */

ulong * FUN_00711a2c(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  
  puVar3 = param_1;
  FUN_00705ed8();
  if (puVar3 == (ulong *)0x0) {
    puVar8 = (ulong *)0x0;
LAB_00711bc8:
    puVar7 = (ulong *)0x0;
LAB_00711bcc:
    func_0x0071271c();
    func_0x007126fc();
LAB_00711bd8:
    func_0x0071296c(puVar7);
    func_0x00712984(puVar8);
    FUN_00705f40(puVar3,0x71246c,0x711d58);
    puVar3 = (ulong *)0x0;
  }
  else if (param_3 != (ulong *)0x0) {
    for (uVar5 = 0; uVar5 < *param_3; uVar5 = uVar5 + 1) {
      lVar2 = *(long *)(param_3[1] + uVar5 * 8);
      if (*(long *)(lVar2 + 0x10) == 0) {
        puVar8 = param_2;
        FUN_00711070(param_2,*(undefined8 *)(lVar2 + 8));
        if (puVar8 == (ulong *)0x0) {
          puVar7 = (ulong *)0x0;
          puVar8 = (ulong *)0x0;
          goto LAB_00711bd8;
        }
        puVar7 = puVar8;
        func_0x00711d4c();
        puVar9 = puVar7;
        puVar6 = puVar7;
        if (puVar7 != (ulong *)0x0) {
          for (uVar4 = 0; uVar4 < *puVar8; uVar4 = uVar4 + 1) {
            lVar2 = *(long *)(puVar8[1] + uVar4 * 8);
            puVar9 = puVar7;
            func_0x0071273c();
            if ((int)puVar9 < 1) {
              if ((int)puVar9 < 0) {
LAB_00711b8c:
                func_0x00711d58();
                puVar6 = (ulong *)0x0;
                puVar9 = puVar7;
                break;
              }
              puVar9 = *(ulong **)(lVar2 + 8);
              puVar1 = puVar9;
              _strcmp(puVar9,&DAT_0091c5ac);
              if ((int)puVar1 == 0) {
                puVar9 = puVar7 + 1;
                FUN_007122b8(puVar9,*(undefined8 *)(lVar2 + 0x10));
                if ((int)puVar9 == 0) goto LAB_00711b8c;
              }
              else {
                _strcmp(puVar9,&DAT_0091c5b4);
                if ((int)puVar9 == 0) {
                  puVar9 = param_2;
                  FUN_0071239c(param_2,*(undefined8 *)(lVar2 + 0x10));
                  puVar7[2] = (ulong)puVar9;
                  if (puVar9 == (ulong *)0x0) goto LAB_00711b8c;
                }
              }
            }
          }
        }
        if (*(code **)(param_2[5] + 0x18) != (code *)0x0) {
          puVar9 = (ulong *)param_2[6];
          (**(code **)(param_2[5] + 0x18))(puVar9,puVar8);
        }
        puVar7 = (ulong *)0x0;
        if (puVar6 == (ulong *)0x0) goto LAB_00711c24;
        func_0x00712728();
        if (puVar9 == (ulong *)0x0) {
          puVar8 = (ulong *)0x0;
          goto LAB_00711c38;
        }
      }
      else {
        puVar7 = param_1;
        FUN_00710738(param_1,param_2);
        if (puVar7 == (ulong *)0x0) {
LAB_00711c24:
          puVar8 = (ulong *)0x0;
          goto LAB_00711bd8;
        }
        puVar8 = puVar7;
        func_0x00712978();
        if ((puVar8 == (ulong *)0x0) ||
           (puVar6 = puVar8, func_0x00706268(puVar8,puVar7), puVar6 == (ulong *)0x0))
        goto LAB_00711bcc;
        func_0x00711d4c();
        puVar7 = (ulong *)0x0;
        if (puVar6 == (ulong *)0x0) goto LAB_00711bcc;
        puVar7 = puVar6;
        func_0x00712728();
        if (puVar7 == (ulong *)0x0) {
LAB_00711c38:
          func_0x00711d58(puVar6);
          goto LAB_00711bc8;
        }
        func_0x00711d40();
        *puVar6 = (ulong)puVar7;
        if (puVar7 == (ulong *)0x0) goto LAB_00711bc8;
        puVar7[1] = (ulong)puVar8;
        *(undefined4 *)*puVar6 = 0;
      }
    }
  }
  return puVar3;
}



/* Entry: 00711d40; end: 00711d7b;  */

undefined8 FUN_00711d40(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  puVar2 = &uStack_18;
  FUN_006d0644(puVar2,&DAT_00a1d870);
  uVar1 = 0;
  if ((int)puVar2 != 0) {
    uVar1 = uStack_18;
  }
  return uVar1;
}



/* Entry: 00711d7c; end: 00711f1f;  */

undefined * FUN_00711d7c(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  puVar5 = &DAT_00a1daa8;
  FUN_006d0610();
  if (puVar5 == (undefined *)0x0) {
    func_0x0071271c();
    func_0x007126fc();
LAB_00711eac:
    func_0x00711d70(puVar5);
    puVar5 = (undefined *)0x0;
  }
  else if (param_3 != (ulong *)0x0) {
    for (uVar6 = 0; uVar6 < *param_3; uVar6 = uVar6 + 1) {
      lVar7 = *(long *)(param_3[1] + uVar6 * 8);
      uVar4 = *(undefined8 *)(lVar7 + 8);
      uVar1 = *(undefined8 *)(lVar7 + 0x10);
      puVar2 = puVar5;
      func_0x0071273c();
      if ((int)puVar2 < 1) {
        if ((int)puVar2 < 0) goto LAB_00711eac;
        uVar3 = uVar4;
        _strcmp(uVar4,&DAT_0091c726);
        if ((int)uVar3 == 0) {
          puVar2 = puVar5 + 8;
        }
        else {
          uVar3 = uVar4;
          _strcmp(uVar4,&DAT_0091c72f);
          if ((int)uVar3 == 0) {
            puVar2 = puVar5 + 0xc;
          }
          else {
            uVar3 = uVar4;
            _strcmp(uVar4,&UNK_0091c75b);
            if ((int)uVar3 == 0) {
              puVar2 = puVar5 + 0x1c;
            }
            else {
              uVar3 = uVar4;
              _strcmp(uVar4,&DAT_0091c746);
              if ((int)uVar3 != 0) {
                _strcmp(uVar4,&DAT_0091c736);
                if ((int)uVar4 == 0) {
                  puVar2 = puVar5 + 0x10;
                  FUN_007122b8(puVar2,uVar1);
                  if ((int)puVar2 != 0) goto LAB_00711e98;
                }
                else {
                  func_0x0071271c();
                  func_0x007126fc();
                  FUN_006de97c(6);
                }
                goto LAB_00711eac;
              }
              puVar2 = puVar5 + 0x18;
            }
          }
        }
        func_0x007156ec(lVar7,puVar2);
        if ((int)lVar7 == 0) goto LAB_00711eac;
      }
LAB_00711e98:
    }
  }
  return puVar5;
}



/* Entry: 00711f20; end: 00712103;  */

undefined8 FUN_00711f20(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  if (*param_2 != 0) {
    FUN_007124ac(param_3,*param_2,param_4);
  }
  if (0 < (int)param_2[1]) {
    func_0x00712714();
  }
  if (0 < *(int *)((long)param_2 + 0xc)) {
    func_0x00712714();
  }
  if (0 < (int)param_2[3]) {
    func_0x00712714();
  }
  if (param_2[2] != 0) {
    FUN_00712570(param_3,&UNK_0091c7a7,param_2[2],param_4);
  }
  if (0 < *(int *)((long)param_2 + 0x1c)) {
    func_0x00712714();
  }
  if ((((*param_2 == 0) && ((int)param_2[1] < 1)) && (*(int *)((long)param_2 + 0xc) < 1)) &&
     ((((int)param_2[3] < 1 && (param_2[2] == 0)) && (*(int *)((long)param_2 + 0x1c) < 1)))) {
    func_0x00712714();
  }
  return 1;
}



/* Entry: 00712104; end: 007122b7;  */

undefined8 FUN_00712104(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_3 + 8);
  puVar1 = puVar4;
  _strncmp(puVar4,&UNK_0091c5be,9);
  if ((int)puVar1 == 0) {
    FUN_0071239c(param_2,*(undefined8 *)(param_3 + 0x10));
    if (param_2 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    plVar3 = (long *)0x0;
    puVar1 = param_2;
LAB_00712174:
    if (*param_1 == 0) {
      FUN_00711d40();
      *param_1 = (long)param_2;
      if (param_2 != (undefined8 *)0x0) {
        if (puVar1 == (undefined8 *)0x0) {
          *(undefined4 *)param_2 = 1;
          param_2[1] = plVar3;
          return 1;
        }
        *(undefined4 *)param_2 = 0;
        param_2[1] = puVar1;
        return 1;
      }
    }
    else {
      func_0x0071271c();
      func_0x007126fc();
    }
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00705f40(puVar1,FUN_0071244c,0x71296c);
    }
  }
  else {
    _strcmp(puVar4,&UNK_0091c5c7);
    if ((int)puVar4 != 0) {
      return 0;
    }
    func_0x0070db18();
    if (puVar4 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    puVar1 = param_2;
    FUN_00711070(param_2,*(undefined8 *)(param_3 + 0x10));
    if (puVar1 == (undefined8 *)0x0) {
      func_0x0071271c();
      func_0x007126fc();
      return 0xffffffff;
    }
    puVar2 = puVar4;
    FUN_007162fc(puVar4,puVar1,0x1001);
    if (*(code **)(param_2[5] + 0x18) != (code *)0x0) {
      (**(code **)(param_2[5] + 0x18))(param_2[6],puVar1);
    }
    plVar3 = (long *)*puVar4;
    *puVar4 = 0;
    func_0x0070db24();
    if ((int)puVar2 != 0) {
      if (plVar3 == (long *)0x0) {
        return 0xffffffff;
      }
      if (*plVar3 == 0) goto LAB_0071223c;
      if (*(int *)(*(long *)(plVar3[1] + *plVar3 * 8 + -8) + 0x10) != 0) {
        func_0x0071271c();
        func_0x007126fc();
        goto LAB_0071223c;
      }
      param_2 = puVar4;
      puVar1 = (undefined8 *)0x0;
      goto LAB_00712174;
    }
  }
  if (plVar3 == (long *)0x0) {
    return 0xffffffff;
  }
LAB_0071223c:
  FUN_00705f40(plVar3,0x712450,0x70dae4);
  return 0xffffffff;
}



/* Entry: 007122b8; end: 0071239b;  */

undefined8 FUN_007122b8(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  
  FUN_0071583c();
  if ((param_2 == (ulong *)0x0) || (*param_1 != 0)) {
    return 0;
  }
  uVar5 = 0;
  puVar2 = param_2;
  do {
    if (*param_2 <= uVar5) {
      uVar4 = 1;
      goto LAB_00712370;
    }
    uVar4 = *(undefined8 *)(*(long *)(param_2[1] + uVar5 * 8) + 8);
    ppuVar6 = &PTR_DAT_00a1db58;
    puVar1 = (ulong *)*param_1;
    if ((ulong *)*param_1 == (ulong *)0x0) {
      func_0x006d0a78();
      *param_1 = (long)puVar2;
      puVar1 = puVar2;
      if (puVar2 == (ulong *)0x0) {
LAB_0071236c:
        uVar4 = 0;
LAB_00712370:
        func_0x00712454(param_2);
        return uVar4;
      }
    }
    while( true ) {
      puVar2 = puVar1;
      if (ppuVar6[-1] == (undefined *)0x0) goto LAB_0071236c;
      puVar3 = *ppuVar6;
      _strcmp(puVar3,uVar4);
      if ((int)puVar3 == 0) break;
      ppuVar6 = ppuVar6 + 3;
      puVar1 = puVar2;
    }
    FUN_006cb4b4(puVar2,*(undefined4 *)(ppuVar6 + -2),1);
    uVar5 = uVar5 + 1;
    if ((int)puVar2 == 0) goto LAB_0071236c;
  } while( true );
}



/* Entry: 0071239c; end: 0071244b;  */

undefined8 FUN_0071239c(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*param_2 == '@') {
    pcVar1 = param_1;
    FUN_00711070(param_1,param_2 + 1);
  }
  else {
    pcVar1 = param_2;
    FUN_0071583c();
  }
  if (pcVar1 == (char *)0x0) {
    func_0x0071271c();
    func_0x007126fc();
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    FUN_007106b4(0,param_1,pcVar1);
    if (*param_2 == '@') {
      if (*(code **)(*(long *)(param_1 + 0x28) + 0x18) != (code *)0x0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30),pcVar1);
      }
    }
    else {
      func_0x00712454(pcVar1);
    }
  }
  return uVar2;
}



/* Entry: 0071244c; end: 0071246f;  */

void FUN_0071244c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00712710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00712470; end: 007124ab;  */

undefined8 FUN_00712470(int param_1,long *param_2)

{
  if (param_1 == 3) {
    if (*(long *)(*param_2 + 0x10) != 0) {
      func_0x0070db24();
    }
  }
  else if (param_1 == 1) {
    *(undefined8 *)(*param_2 + 0x10) = 0;
  }
  return 1;
}



/* Entry: 007124ac; end: 0071256f;  */

void FUN_007124ac(undefined8 param_1,int *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  char *pcStack_58;
  
  if (*param_2 != 0) {
    pcStack_58 = *(char **)(param_2 + 2);
    func_0x00712714(param_1,&UNK_0091c7f4);
    FUN_007081c8(param_1,&pcStack_58,0,&UNK_0082031f);
    func_0x006d1a14(param_1,"\n");
    return;
  }
  func_0x00712714(param_1,&UNK_0091c7e5);
  puVar1 = *(ulong **)(param_2 + 2);
  uVar4 = 0;
  if (puVar1 == (ulong *)0x0) goto LAB_00712688;
  do {
    uVar3 = *puVar1;
    while( true ) {
      if (uVar3 <= uVar4) {
        return;
      }
      pcStack_58 = "";
      FUN_006d2bcc(param_1,&UNK_0091c80a);
      if ((puVar1 == (ulong *)0x0) || (*puVar1 <= uVar4)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined8 *)(puVar1[1] + uVar4 * 8);
      }
      FUN_00710534(param_1,uVar2);
      func_0x00712734(param_1);
      uVar4 = uVar4 + 1;
      if (puVar1 != (ulong *)0x0) break;
LAB_00712688:
      uVar3 = 0;
    }
  } while( true );
}



/* Entry: 00712570; end: 00712637;  */

/* WARNING: Possible PIC construction at 0x007125ec: Changing call to branch */

void FUN_00712570(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined **ppuVar7;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  char *pcStack_50;
  
  puVar1 = &stack0xfffffffffffffff0;
  uStack_58 = (ulong)((int)param_4 + 2);
  pcStack_50 = "";
  pcStack_68 = "";
  uStack_70 = param_4;
  uStack_60 = param_2;
  FUN_006d2bcc(param_1,&UNK_0091c80e);
  bVar2 = true;
  ppuVar7 = &PTR_DAT_00a1db50;
  do {
    if (*ppuVar7 == (undefined *)0x0) {
      iVar6 = 0x8dd357;
      if (bVar2) {
        iVar6 = 0x91c819;
      }
SUB_006d199c:
      *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      iVar3 = iVar6;
      _strlen();
      *(undefined8 *)((long)register0x00000008 + -0x20) =
           *(undefined8 *)((long)register0x00000008 + -0x20);
      *(undefined8 *)((long)register0x00000008 + -0x18) =
           *(undefined8 *)((long)register0x00000008 + -0x18);
      *(undefined8 *)((long)register0x00000008 + -0x10) =
           *(undefined8 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -8) =
           *(undefined8 *)((long)register0x00000008 + -8);
      if (((param_1 == (long *)0x0) || (*param_1 == 0)) || (*(long *)(*param_1 + 0x10) == 0)) {
        func_0x006d1db8(param_1,iVar6);
      }
      else {
        if ((int)param_1[1] != 0) {
          if (iVar3 < 1) {
            return;
          }
          plVar4 = param_1;
          func_0x006d1de8();
          if ((int)plVar4 < 1) {
            return;
          }
          param_1[7] = param_1[7] + ((ulong)plVar4 & 0xffffffff);
          return;
        }
        func_0x006d1dc8();
      }
      func_0x006d1dac();
      return;
    }
    uVar5 = param_3;
    FUN_006cb5c4(param_3,*(undefined4 *)(ppuVar7 + -1));
    if ((int)uVar5 != 0) {
      if (!bVar2) {
        unaff_x30 = 0x7125f0;
        register0x00000008 = (BADSPACEBASE *)&uStack_70;
        unaff_x19 = param_1;
        unaff_x20 = param_3;
        unaff_x29 = puVar1;
        iVar6 = 0x8db403;
        goto SUB_006d199c;
      }
      func_0x00712734(param_1);
      bVar2 = false;
    }
    ppuVar7 = ppuVar7 + 3;
  } while( true );
}



/* Entry: 00712638; end: 007126fb;  */

void FUN_00712638(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (param_2 == (ulong *)0x0) goto LAB_00712688;
  do {
    uVar2 = *param_2;
    while( true ) {
      if (uVar2 <= uVar3) {
        return;
      }
      FUN_006d2bcc(param_1,&UNK_0091c80a);
      if ((param_2 == (ulong *)0x0) || (*param_2 <= uVar3)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined8 *)(param_2[1] + uVar3 * 8);
      }
      FUN_00710534(param_1,uVar1);
      func_0x00712734(param_1);
      uVar3 = uVar3 + 1;
      if (param_2 != (ulong *)0x0) break;
LAB_00712688:
      uVar2 = 0;
    }
  } while( true );
}



/* Entry: 007126fc; end: 00712747;  */

void FUN_007126fc(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 00712748; end: 00712843;  */

long FUN_00712748(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = param_2;
  FUN_006cbf48();
  plVar4 = (long *)(*(long *)(param_1 + 0x60) + 8);
  do {
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      if (param_2 == 0) {
        param_2 = 0;
      }
      else {
        FUN_006cc0a4(param_2,0);
        if ((param_2 == 0) || (FUN_00715470(), param_2 == 0)) {
          func_0x00716a40();
          param_2 = 0;
        }
        func_0x00716ba8();
      }
      return param_2;
    }
    plVar1 = plVar4 + -1;
    plVar4 = plVar4 + 3;
  } while (lVar5 != (int)*plVar1);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar2 = lVar3;
    _strlen();
    lVar5 = lVar2 + 1;
    FUN_00701e90();
    if (lVar5 != 0) {
      FUN_00702024(lVar5,lVar3,lVar2 + 1);
    }
  }
  return lVar5;
}



/* Entry: 00712844; end: 0071293b;  */

long FUN_00712844(long param_1,undefined8 param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  FUN_00705ed8();
  if (param_1 == 0) {
    func_0x00712948(0x14,0,0x41);
  }
  else if (param_3 != (ulong *)0x0) {
    for (uVar3 = 0; uVar3 < *param_3; uVar3 = uVar3 + 1) {
      lVar2 = *(long *)(param_3[1] + uVar3 * 8);
      lVar1 = *(long *)(lVar2 + 0x10);
      if (lVar1 == 0) {
        lVar1 = *(long *)(lVar2 + 8);
      }
      FUN_007024d4(lVar1,0);
      if (lVar1 == 0) {
        FUN_00705f40(param_1,0x71293c,0x6cc9a8);
        func_0x00712948(0x14,0,0x81);
        FUN_006de97c(6);
        return 0;
      }
      func_0x00706268(param_1,lVar1);
    }
  }
  return param_1;
}



/* Entry: 0071293c; end: 0071298f;  */

void FUN_0071293c(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00712944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Entry: 00712990; end: 00712ab3;  */

uint * FUN_00712990(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    uVar1 = *param_1;
    if (uVar1 == *param_2 && uVar1 < 9) {
                    /* WARNING: Could not recover jumptable at 0x007129dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_0083baeb)[uVar1] * 4 + 0x7129e0))();
      return param_1;
    }
  }
  return (uint *)0xffffffff;
}



/* Entry: 00712ab4; end: 00712abf;  */

undefined1  [16] FUN_00712ab4(long param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(param_1 + 8);
  auVar1._8_8_ = *(undefined8 *)(param_2 + 8);
  return auVar1;
}



/* Entry: 00712ac0; end: 00712b43;  */

long FUN_00712ac0(undefined8 param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (long)*param_2 + 1;
    FUN_00701e90();
    if (lVar1 == 0) {
      FUN_00712bb4(0x14,0,0x41);
    }
    else {
      lVar2 = (long)*param_2;
      if (*param_2 == 0) {
        lVar2 = 0;
      }
      else {
        _memcpy(lVar1,*(undefined8 *)(param_2 + 2),lVar2);
      }
      *(undefined1 *)(lVar1 + lVar2) = 0;
    }
  }
  return lVar1;
}



/* Entry: 00712b44; end: 00712bb3;  */

long FUN_00712b44(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_3 == 0) {
    uVar3 = 0x7c;
  }
  else {
    func_0x006d0a80();
    if (param_1 != 0) {
      lVar1 = param_3;
      _strlen(param_3);
      lVar2 = param_1;
      FUN_006ce2d0(param_1,param_3,lVar1);
      if ((int)lVar2 != 0) {
        return param_1;
      }
      FUN_006ce410(param_1);
    }
    uVar3 = 0x41;
  }
  FUN_00712bb4(0x14,0,uVar3);
  return 0;
}



/* Entry: 00712bb4; end: 00712bbf;  */

void FUN_00712bb4(uint *param_1,undefined8 param_2,uint param_3)

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



/* Entry: 00712bc0; end: 00712eff;  */

code * FUN_00712bc0(code *param_1,qword *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  qword *pqVar8;
  code *pcVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auStack_138 [8];
  long lStack_130;
  undefined8 uStack_128;
  undefined1 auStack_b8 [80];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  pcVar5 = param_3;
  pcVar9 = param_3;
  pqVar8 = param_2;
  for (uVar13 = 0;
      (pcVar4 = param_3, param_2 != (qword *)0x0 && (pcVar4 = pcVar5, uVar13 < *param_2));
      uVar13 = uVar13 + 1) {
    puVar10 = *(undefined8 **)(param_2[1] + uVar13 * 8);
    pqVar8 = (qword *)puVar10[1];
    pcVar4 = param_1;
    pcVar9 = pcVar5;
    FUN_00710338(param_1,pqVar8);
    if (pcVar4 == (code *)0x0) {
LAB_00712cf8:
      func_0x00712f20();
      func_0x00712f14();
      pcVar4 = (code *)0x0;
      if ((param_3 == (code *)0x0) && (pcVar5 != (code *)0x0)) {
        pqVar8 = (qword *)0x712f0c;
        pcVar9 = FUN_007153b4;
        FUN_00705f40(pcVar5,0x712f0c);
        pcVar4 = (code *)0x0;
      }
      goto LAB_00712d28;
    }
    if (uVar13 < *(ulong *)pcVar4) {
      lVar14 = *(long *)(*(long *)(pcVar4 + 8) + uVar13 * 8);
    }
    else {
      lVar14 = 0;
    }
    pcVar9 = (code *)*puVar10;
    pqVar8 = &segment_command_00000020.filesize;
    func_0x006cc674(auStack_b8,0x50);
    iVar1 = (int)auStack_b8;
    _strlen();
    iVar2 = (int)*(undefined8 *)(lVar14 + 8);
    _strlen();
    pcVar11 = (code *)(long)(iVar2 + iVar1 + 5);
    pcVar3 = pcVar11;
    FUN_00701e90();
    pcVar5 = pcVar4;
    if (pcVar3 == (code *)0x0) goto LAB_00712cf8;
    FUN_00702124();
    func_0x00702178(pcVar3,&UNK_0091cab8,pcVar11);
    pqVar8 = *(qword **)(lVar14 + 8);
    func_0x00702178(pcVar3,pqVar8);
    func_0x00701ed0(*(undefined8 *)(lVar14 + 8));
    *(code **)(lVar14 + 8) = pcVar3;
    pcVar9 = pcVar11;
  }
  if (param_3 == (code *)0x0 && pcVar4 == (code *)0x0) {
    FUN_00705ed8();
  }
LAB_00712d28:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return pcVar4;
  }
  ___stack_chk_fail();
  pcVar5 = pcVar4;
  FUN_00705ed8();
  if (pcVar5 == (code *)0x0) {
    func_0x00712f20();
    func_0x00712f14();
  }
  else if (pcVar9 != (code *)0x0) {
    for (uVar13 = 0; uVar13 < *(ulong *)pcVar9; uVar13 = uVar13 + 1) {
      lVar14 = *(long *)(*(long *)(pcVar9 + 8) + uVar13 * 8);
      plVar6 = (long *)&DAT_00a1e600;
      FUN_006d0610();
      if ((plVar6 == (long *)0x0) ||
         (pcVar3 = pcVar5, func_0x00706268(pcVar5,plVar6), pcVar3 == (code *)0x0)) {
LAB_00712e78:
        func_0x00712f20();
LAB_00712e8c:
        func_0x00712f14();
LAB_00712e90:
        FUN_00705f40(pcVar5,0x712f10,0x712f00);
        return (code *)0x0;
      }
      lVar12 = *(long *)(lVar14 + 8);
      lVar7 = lVar12;
      _strchr(lVar12,0x3b);
      if (lVar7 == 0) goto LAB_00712e8c;
      lStack_130 = lVar7 + 1;
      uStack_128 = *(undefined8 *)(lVar14 + 0x10);
      lVar14 = plVar6[1];
      FUN_00710760(lVar14,pcVar4,pqVar8,auStack_138,0);
      if (lVar14 == 0) goto LAB_00712e90;
      lVar14 = (long)(((int)lVar7 - (int)lVar12) + 1);
      FUN_00701e90();
      if (lVar14 == 0) goto LAB_00712e78;
      FUN_00702124();
      lVar7 = lVar14;
      FUN_007024d4(lVar14,0);
      *plVar6 = lVar7;
      if (lVar7 == 0) {
        func_0x00712f14(0x14,0,0x65);
        FUN_006de97c(2);
        func_0x00701ed0(lVar14);
        goto LAB_00712e90;
      }
      func_0x00701ed0(lVar14);
    }
  }
  return pcVar5;
}



/* Entry: 00712f00; end: 00712f43;  */

void FUN_00712f00(undefined8 param_1)

{
  func_0x006d05f8(param_1,&DAT_00a1e600);
  return;
}



/* Entry: 00712f44; end: 00712f9b;  */

void FUN_00712f44(int param_1)

{
  int *piStack_80;
  int aiStack_78 [26];
  
  piStack_80 = aiStack_78;
  if (-1 < param_1) {
    aiStack_78[0] = param_1;
    _bsearch(&piStack_80,&PTR_DAT_00a1e7d0,0x20,8,FUN_00712f9c);
  }
  return;
}



/* Entry: 00712f9c; end: 00712fb3;  */

int FUN_00712f9c(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



/* Entry: 00712fb4; end: 00712fdb;  */

undefined8 FUN_00712fb4(undefined8 *param_1)

{
  int **ppiVar1;
  undefined8 uVar2;
  int *piStack_80;
  int aiStack_78 [26];
  
  aiStack_78[0] = (int)*param_1;
  FUN_00702384();
  if (aiStack_78[0] != 0) {
    ppiVar1 = &piStack_80;
    piStack_80 = aiStack_78;
    if (aiStack_78[0] < 0) {
      uVar2 = 0;
    }
    else {
      _bsearch(&piStack_80,&PTR_DAT_00a1e7d0,0x20,8,FUN_00712f9c);
      uVar2 = 0;
      if (ppiVar1 != (int **)0x0) {
        uVar2 = *ppiVar1;
      }
    }
    return uVar2;
  }
  return 0;
}



/* Entry: 00712fdc; end: 00713097;  */

void FUN_00712fdc(long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  long lStack_28;
  
  lVar1 = param_1;
  FUN_00712fb4();
  if (lVar1 != 0) {
    piVar3 = *(int **)(param_1 + 0x10);
    lStack_28 = *(long *)(piVar3 + 2);
    if (*(long *)(lVar1 + 8) == 0) {
      lVar2 = 0;
      (**(code **)(lVar1 + 0x20))(0,&lStack_28,(long)*piVar3);
    }
    else {
      lVar2 = 0;
      FUN_006ce6e8(0,&lStack_28,(long)*piVar3);
    }
    if ((lVar2 != 0) &&
       (lStack_28 != *(long *)(*(int **)(param_1 + 0x10) + 2) + (long)**(int **)(param_1 + 0x10))) {
      if (*(long *)(lVar1 + 8) == 0) {
        (**(code **)(lVar1 + 0x18))();
      }
      else {
        FUN_006d0240();
      }
      FUN_0071319c(0x14,0,0xa4);
    }
  }
  return;
}



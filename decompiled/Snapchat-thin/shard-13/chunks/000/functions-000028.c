/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109d9309c; end: 109d93153;  */

undefined8 * FUN_109d9309c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b57c08;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d930e4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d930e4:
  param_1[0x13] = &PTR_DAT_110b57cb8;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  *param_1 = &PTR____cxa_pure_virtual_110b5bf28;
  if (param_1[0xc] != param_1[0xb]) {
    _free();
  }
  if ((undefined8 *)param_1[8] != param_1 + 10) {
    _free();
  }
  return param_1;
}



/* Entry: 109d93154; end: 109d93273;  */

undefined4
FUN_109d93154(ulong param_1,undefined2 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6)

{
  ulong uVar1;
  long *plVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined4 uStack_94;
  undefined *apuStack_90 [2];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined **appuStack_68 [2];
  undefined *puStack_58;
  undefined2 uStack_48;
  
  uStack_94 = 0;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) != 0) {
    param_4 = param_6;
    param_3 = param_5;
  }
  uVar4 = (ulong)*(uint *)(param_1 + 0xb0);
  uVar1 = param_1;
  if (*(uint *)(param_1 + 0xb0) != 0) {
    puVar5 = *(ulong **)(param_1 + 0xa8);
    do {
      if (puVar5[1] == param_4) {
        if (param_4 != 0) {
          uVar1 = *puVar5;
          _memcmp(uVar1,param_3,param_4);
          if ((int)uVar1 != 0) goto LAB_109d931bc;
        }
        uStack_94 = (undefined4)puVar5[5];
        uVar3 = uStack_94;
        goto LAB_109d93234;
      }
LAB_109d931bc:
      puVar5 = puVar5 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  uStack_70 = 0x503;
  apuStack_90[0] = &UNK_10f5ad52f;
  appuStack_68[0] = apuStack_90;
  puStack_58 = &UNK_10f5ad54a;
  uStack_48 = 0x302;
  uStack_80 = param_3;
  uStack_78 = param_4;
  func_0x000107c2b034();
  uVar4 = param_1;
  FUN_109df35b4(param_1,appuStack_68,0,0,uVar1);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
LAB_109d93234:
    *(undefined4 *)(param_1 + 0x80) = uVar3;
    *(undefined2 *)(param_1 + 0xc) = param_2;
    plVar2 = *(long **)(param_1 + 0x250);
    if (plVar2 == (long *)0x0) {
      func_0x000104c501e4();
      uVar3 = 2;
      if (*(long *)(plVar2[0x14] + 0x18) == 0) {
        uVar3 = 3;
      }
      return uVar3;
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_94);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 109d93274; end: 109d9328b;  */

undefined4 FUN_109d93274(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(long *)(*(long *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 109d9328c; end: 109d93307;  */

void FUN_109d9328c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110b57c08;
  plVar1 = (long *)param_1[0x4a];
  if (plVar1 == param_1 + 0x47) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_109d932d4;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_109d932d4:
  param_1[0x13] = &PTR_DAT_110b57cb8;
  if ((undefined8 *)param_1[0x15] != param_1 + 0x17) {
    _free();
  }
  func_0x000109d2f664(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109d93308; end: 109d93323;  */

ulong FUN_109d93308(long *param_1)

{
  long *plVar1;
  ushort uVar2;
  uint uVar3;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar4;
  
  plVar1 = param_1 + 0x13;
  lVar8 = param_1[3];
  if (lVar8 == 0) {
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      uVar9 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        if (uVar9 <= uVar7 + 8) {
          uVar9 = uVar7 + 8;
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  else {
    uVar9 = 0xf;
    if (lVar8 != 1) {
      uVar9 = lVar8 + 0xf;
    }
    plVar5 = plVar1;
    (**(code **)(*plVar1 + 0x10))();
    if ((uint)plVar5 != 0) {
      uVar10 = 0;
      do {
        uVar7 = uVar10;
        (**(code **)(*plVar1 + 0x18))(plVar1);
        uVar6 = uVar10;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        uVar2 = *(ushort *)((long)param_1 + 10) >> 3;
        uVar3 = uVar2 & 3;
        if ((uVar2 & 3) == 0) {
          plVar4 = param_1;
          (**(code **)(*param_1 + 8))();
          uVar3 = (uint)plVar4;
        }
        if ((uVar3 != 1 || uVar7 != 0) || uVar6 != 0) {
          uVar6 = 0xf;
          if (uVar7 != 0) {
            uVar6 = uVar7 + 8;
          }
          if (uVar9 <= uVar6) {
            uVar9 = uVar6;
          }
        }
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar3;
      } while ((uint)plVar5 != uVar3);
    }
  }
  return uVar9;
}



/* Entry: 109d93324; end: 109d93393;  */

void FUN_109d93324(long param_1,undefined8 param_2,int param_3)

{
  undefined **ppuStack_20;
  int iStack_18;
  undefined1 uStack_14;
  
  if (param_3 == 0) {
    if ((*(char *)(param_1 + 0x94) != '\x01') ||
       (iStack_18 = *(int *)(param_1 + 0x80), *(int *)(param_1 + 0x90) == iStack_18)) {
      return;
    }
  }
  else {
    iStack_18 = *(int *)(param_1 + 0x80);
  }
  ppuStack_20 = &PTR_DAT_110b57d20;
  uStack_14 = 1;
  FUN_109df4440(param_1 + 0x98,param_1,&ppuStack_20,param_1 + 0x88,param_2);
  return;
}



/* Entry: 109d93394; end: 109d933bb;  */

void FUN_109d93394(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x94) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  else {
    uVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  return;
}



/* Entry: 109d933bc; end: 109d933fb;  */

void FUN_109d933bc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b57cb8;
  if ((undefined8 *)param_1[2] != param_1 + 4) {
    _free();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109d933fc; end: 109d9347b;  */

undefined4 FUN_109d933fc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 109d9347c; end: 109d9349f;  */

void FUN_109d9347c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_DAT_110b57da8;
  return;
}



/* Entry: 109d934a0; end: 109d934bb;  */

void FUN_109d934a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_DAT_110b57da8;
  return;
}



/* Entry: 109d934bc; end: 109d934f7;  */

long FUN_109d934bc(long param_1,undefined8 param_2)

{
  func_0x000107c31948(param_2,&PTR_DAT_110b57e18);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 109d934f8; end: 109d93503;  */

undefined ** FUN_109d934f8(void)

{
  return &PTR_DAT_110b57e18;
}



/* Entry: 109d93504; end: 109d935cf;  */

void FUN_109d93504(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 auStack_38 [2];
  
  puVar2 = (undefined8 *)0x1137e6608;
  FUN_109dffb24(0x1137e6608,0x1137e6618,param_1,0x30,auStack_38);
  if (uRam00000001137e6610 != 0) {
    puVar4 = puRam00000001137e6608 + (ulong)uRam00000001137e6610 * 6;
    puVar3 = puRam00000001137e6608;
    puVar5 = puVar2;
    do {
      uVar6 = *puVar3;
      uVar8 = puVar3[3];
      uVar7 = puVar3[2];
      puVar5[1] = puVar3[1];
      *puVar5 = uVar6;
      puVar5[3] = uVar8;
      puVar5[2] = uVar7;
      puVar5[4] = &PTR_DAT_110b57d88;
      uVar1 = *(undefined4 *)(puVar3 + 5);
      *(undefined1 *)((long)puVar5 + 0x2c) = *(undefined1 *)((long)puVar3 + 0x2c);
      *(undefined4 *)(puVar5 + 5) = uVar1;
      puVar5[4] = &PTR_DAT_110b57d20;
      puVar5 = puVar5 + 6;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar4);
  }
  if (puRam00000001137e6608 != (undefined8 *)0x1137e6618) {
    _free();
  }
  puRam00000001137e6608 = puVar2;
  uRam00000001137e6614 = auStack_38[0];
  return;
}



/* Entry: 109d935d0; end: 109d93767;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d935d0(long param_1,char *param_2,int param_3,long param_4,char param_5)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *****pppppuVar3;
  ulong *******pppppppuVar4;
  char *pcVar5;
  ulong *******pppppppuVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong *******pppppppuVar12;
  ulong ******ppppppuVar13;
  ulong ******ppppppuVar14;
  ulong uVar15;
  ulong *******pppppppuStack_1f8;
  ulong ******ppppppuStack_1f0;
  ulong uStack_1e8;
  undefined2 uStack_1d8;
  ulong ******ppppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong *****apppppuStack_158 [32];
  long lStack_58;
  
  pppppppuVar12 = &ppppppuStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = 0x100;
  uStack_168 = 0;
  lVar8 = param_4;
  ppppppuStack_170 = apppppuStack_158;
  func_0x000109d5975c();
  iVar7 = (int)lVar8;
  if (*param_2 == '\x01') {
    if (pppppppuVar12 != (ulong *******)0x0) {
      param_2 = param_2 + 1;
    }
    pppppppuVar12 =
         (ulong *******)((long)pppppppuVar12 - (ulong)(pppppppuVar12 != (ulong *******)0x0));
  }
  else {
    uVar11 = *(uint *)(param_4 + 0x1c);
    cVar9 = '\0';
    if (1 < uVar11 - 3 || *param_2 != '?') {
      cVar9 = param_5;
    }
    if (param_3 == 2) {
      uVar15 = (ulong)(uVar11 == 2);
      pcVar5 = "l";
      if (uVar11 != 2) {
        pcVar5 = "";
      }
LAB_109d936bc:
      FUN_109d2f728(param_1,pcVar5,uVar15);
    }
    else if (param_3 == 1) {
      uVar15 = *(ulong *)(&UNK_10e059428 + (ulong)uVar11 * 8);
      pcVar5 = (&PTR_s__110b57e28)[uVar11];
      goto LAB_109d936bc;
    }
    if (cVar9 != '\0') {
      pcVar5 = *(char **)(param_1 + 0x20);
      if (pcVar5 < *(char **)(param_1 + 0x18)) {
        *(char **)(param_1 + 0x20) = pcVar5 + 1;
        *pcVar5 = cVar9;
      }
      else {
        FUN_109e05570(param_1,cVar9);
      }
    }
  }
  FUN_109d2f728(param_1);
  ppppppuVar13 = ppppppuStack_170;
  if (ppppppuStack_170 != apppppuStack_158) {
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if (ppppppuStack_170 != apppppuStack_158) {
    _free();
  }
  __Unwind_Resume();
  uVar10 = 1;
  if (iVar7 != 0) {
    uVar10 = 2;
  }
  if (((ulong)pppppppuVar12[4] & 0xf) != 8) {
    uVar10 = 0;
  }
  ppppppuVar14 = pppppppuVar12[5];
  if ((*(byte *)((long)pppppppuVar12 + 0x17) >> 4 & 1) != 0) {
    pppppppuVar6 = pppppppuVar12;
    func_0x000109da271c();
    pppppppuVar4 = pppppppuVar6 + 2;
    ppppppuVar13 = *pppppppuVar6;
    uVar11 = *(uint *)((long)ppppppuVar14 + 0x11c);
    FUN_109d89110();
    if (pppppppuVar12 == (ulong *******)0x0) {
      pppppppuVar12 = (ulong *******)0x0;
    }
    else if (*(char *)(pppppppuVar12 + 2) != '\0') {
      pppppppuVar12 = (ulong *******)0x0;
    }
    cVar9 = (char)(0x5f005f0000 >> (((ulong)uVar11 & 7) << 3));
    pppppppuStack_1f8 = pppppppuVar4;
    ppppppuStack_1f0 = ppppppuVar13;
    if (ppppppuVar13 == (ulong ******)0x0) {
      iVar7 = *(int *)((long)ppppppuVar14 + 0x11c);
joined_r0x000109d93908:
      if ((pppppppuVar12 != (ulong *******)0x0) &&
         ((uVar11 = *(ushort *)((long)pppppppuVar12 + 0x12) >> 4 & 0x3ff, iVar7 == 4 ||
          (uVar11 == 0x50)))) {
        if (uVar11 == 0x41) {
          cVar9 = '@';
        }
        else if (uVar11 == 0x50) {
          cVar9 = '\0';
        }
        uStack_1d8 = 0x105;
        pppppppuVar6 = (ulong *******)&pppppppuStack_1f8;
        FUN_109d935d0(param_2,pppppppuVar6,uVar10,ppppppuVar14 + 0x20,(int)cVar9);
        if (uVar11 == 0x50) {
          puVar1 = *(undefined1 **)(param_2 + 0x20);
          if (puVar1 < *(undefined1 **)(param_2 + 0x18)) {
            *(undefined1 **)(param_2 + 0x20) = puVar1 + 1;
            *puVar1 = 0x40;
          }
          else {
            pppppppuVar6 = (ulong *******)0x40;
            FUN_109e05570(param_2);
          }
        }
        else {
          if (0x10 < uVar11 - 0x40) {
            return;
          }
          if ((1 << (ulong)(uVar11 - 0x40 & 0x1f) & 0x10003U) == 0) {
            return;
          }
        }
        if ((0xff < *(uint *)(pppppppuVar12[3] + 1)) &&
           (iVar7 = *(int *)((long)pppppppuVar12[3] + 0xc), iVar7 != 1)) {
          if (iVar7 != 2) {
            return;
          }
          pppppppuVar4 = pppppppuVar12;
          FUN_109d93b48();
          if ((int)pppppppuVar4 == 0) {
            return;
          }
        }
        uVar11 = *(uint *)((long)ppppppuVar14[0x3d] + 4);
        FUN_109d51754();
        if (pppppppuVar12 == pppppppuVar6) {
          iVar7 = 0;
        }
        else {
          iVar7 = 0;
          uVar15 = (ulong)uVar11 + 7 >> 3;
          do {
            pppppppuVar4 = pppppppuVar12;
            FUN_109d8199c();
            if (((ulong)pppppppuVar4 & 1) == 0) {
              pppppppuVar4 = pppppppuVar12;
              FUN_109d817f8();
              if ((int)pppppppuVar4 == 0) {
                ppppppuVar13 = *pppppppuVar12;
                pppppppuVar4 = (ulong *******)(ppppppuVar14 + 0x20);
                FUN_109d2feb0(pppppppuVar4);
                if (((ulong)ppppppuVar13 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
              }
              else {
                pppppppuVar4 = pppppppuVar12;
                FUN_109d81870(pppppppuVar12,ppppppuVar14 + 0x20);
              }
              iVar2 = 0;
              if (uVar15 != 0) {
                iVar2 = (int)((ulong)((uVar15 - 1) + (long)pppppppuVar4) / uVar15);
              }
              iVar7 = iVar7 + iVar2 * (int)uVar15;
            }
            pppppppuVar12 = pppppppuVar12 + 5;
          } while (pppppppuVar12 != pppppppuVar6);
        }
        puVar1 = *(undefined1 **)(param_2 + 0x20);
        if (puVar1 < *(undefined1 **)(param_2 + 0x18)) {
          *(undefined1 **)(param_2 + 0x20) = puVar1 + 1;
          *puVar1 = 0x40;
        }
        else {
          FUN_109e05570(param_2,0x40);
        }
        FUN_109df9d4c(param_2,iVar7,0,0,0);
        return;
      }
    }
    else if ((*(char *)pppppppuVar4 != '\x01') &&
            ((iVar7 = *(int *)((long)ppppppuVar14 + 0x11c), iVar7 - 5U < 0xfffffffe ||
             (*(char *)pppppppuVar4 != '?')))) goto joined_r0x000109d93908;
    uStack_1d8 = 0x105;
    uVar11 = (uint)cVar9;
    goto LAB_109d9393c;
  }
  pppppuVar3 = *ppppppuVar13;
  FUN_109d94298(pppppuVar3,*(undefined4 *)(ppppppuVar13 + 2),pppppppuVar12,&pppppppuStack_1f8);
  if (((ulong)pppppuVar3 & 1) == 0) {
    uVar11 = *(uint *)(ppppppuVar13 + 2);
    if (*(uint *)(ppppppuVar13 + 1) * 4 + 4 < uVar11 * 3) {
      if ((uVar11 + ~*(uint *)(ppppppuVar13 + 1)) - *(int *)((long)ppppppuVar13 + 0xc) <=
          uVar11 >> 3) goto LAB_109d93b24;
    }
    else {
      uVar11 = uVar11 << 1;
LAB_109d93b24:
      FUN_109d94324(ppppppuVar13,uVar11);
      FUN_109d94298(*ppppppuVar13,*(undefined4 *)(ppppppuVar13 + 2),pppppppuVar12,&pppppppuStack_1f8
                   );
    }
    *(int *)(ppppppuVar13 + 1) = *(int *)(ppppppuVar13 + 1) + 1;
    if (*pppppppuStack_1f8 != (ulong ******)0xfffffffffffff000) {
      *(int *)((long)ppppppuVar13 + 0xc) = *(int *)((long)ppppppuVar13 + 0xc) + -1;
    }
    *pppppppuStack_1f8 = (ulong ******)pppppppuVar12;
    *(undefined4 *)(pppppppuStack_1f8 + 1) = 0;
LAB_109d93884:
    uVar11 = *(uint *)(ppppppuVar13 + 1);
    *(uint *)(pppppppuStack_1f8 + 1) = uVar11;
  }
  else {
    uVar11 = *(uint *)(pppppppuStack_1f8 + 1);
    if (uVar11 == 0) goto LAB_109d93884;
  }
  uStack_1e8 = (ulong)uVar11;
  pppppppuStack_1f8 = (ulong *******)&UNK_10f5f9efa;
  uStack_1d8 = 0x803;
  uVar11 = (uint)(0x5f005f0000 >> (((ulong)*(uint *)((long)ppppppuVar14 + 0x11c) & 7) << 3)) & 0xff;
LAB_109d9393c:
  FUN_109d935d0(param_2,&pppppppuStack_1f8,uVar10,ppppppuVar14 + 0x20,uVar11);
  return;
}



/* Entry: 109d93768; end: 109d93b47;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_109d93768(ulong *param_1,long param_2,ulong *******param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  ulong *******pppppppuVar4;
  ulong *******pppppppuVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  ulong ******ppppppuVar9;
  ulong ******ppppppuVar10;
  int iVar11;
  ulong *******pppppppuStack_88;
  ulong ******ppppppuStack_80;
  ulong uStack_78;
  undefined2 uStack_68;
  
  uVar7 = 1;
  if (param_4 != 0) {
    uVar7 = 2;
  }
  if (((ulong)param_3[4] & 0xf) != 8) {
    uVar7 = 0;
  }
  ppppppuVar10 = param_3[5];
  if ((*(byte *)((long)param_3 + 0x17) >> 4 & 1) != 0) {
    pppppppuVar5 = param_3;
    func_0x000109da271c();
    pppppppuVar4 = pppppppuVar5 + 2;
    ppppppuVar9 = *pppppppuVar5;
    uVar8 = *(uint *)((long)ppppppuVar10 + 0x11c);
    FUN_109d89110();
    if (param_3 == (ulong *******)0x0) {
      param_3 = (ulong *******)0x0;
    }
    else if (*(char *)(param_3 + 2) != '\0') {
      param_3 = (ulong *******)0x0;
    }
    cVar6 = (char)(0x5f005f0000 >> (((ulong)uVar8 & 7) << 3));
    pppppppuStack_88 = pppppppuVar4;
    ppppppuStack_80 = ppppppuVar9;
    if (ppppppuVar9 == (ulong ******)0x0) {
      iVar11 = *(int *)((long)ppppppuVar10 + 0x11c);
joined_r0x000109d93908:
      if ((param_3 != (ulong *******)0x0) &&
         ((uVar8 = *(ushort *)((long)param_3 + 0x12) >> 4 & 0x3ff, iVar11 == 4 || (uVar8 == 0x50))))
      {
        if (uVar8 == 0x41) {
          cVar6 = '@';
        }
        else if (uVar8 == 0x50) {
          cVar6 = '\0';
        }
        uStack_68 = 0x105;
        pppppppuVar5 = (ulong *******)&pppppppuStack_88;
        FUN_109d935d0(param_2,pppppppuVar5,uVar7,ppppppuVar10 + 0x20,(int)cVar6);
        if (uVar8 == 0x50) {
          puVar1 = *(undefined1 **)(param_2 + 0x20);
          if (puVar1 < *(undefined1 **)(param_2 + 0x18)) {
            *(undefined1 **)(param_2 + 0x20) = puVar1 + 1;
            *puVar1 = 0x40;
          }
          else {
            pppppppuVar5 = (ulong *******)0x40;
            FUN_109e05570(param_2);
          }
        }
        else {
          if (0x10 < uVar8 - 0x40) {
            return;
          }
          if ((1 << (ulong)(uVar8 - 0x40 & 0x1f) & 0x10003U) == 0) {
            return;
          }
        }
        if ((0xff < *(uint *)(param_3[3] + 1)) &&
           (iVar11 = *(int *)((long)param_3[3] + 0xc), iVar11 != 1)) {
          if (iVar11 != 2) {
            return;
          }
          pppppppuVar4 = param_3;
          FUN_109d93b48();
          if ((int)pppppppuVar4 == 0) {
            return;
          }
        }
        uVar8 = *(uint *)((long)ppppppuVar10[0x3d] + 4);
        FUN_109d51754();
        if (param_3 == pppppppuVar5) {
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          uVar3 = (ulong)uVar8 + 7 >> 3;
          do {
            pppppppuVar4 = param_3;
            FUN_109d8199c();
            if (((ulong)pppppppuVar4 & 1) == 0) {
              pppppppuVar4 = param_3;
              FUN_109d817f8();
              if ((int)pppppppuVar4 == 0) {
                ppppppuVar9 = *param_3;
                pppppppuVar4 = (ulong *******)(ppppppuVar10 + 0x20);
                FUN_109d2feb0(pppppppuVar4);
                if (((ulong)ppppppuVar9 & 1) != 0) {
                  FUN_109e0486c(&UNK_10f602449);
                }
              }
              else {
                pppppppuVar4 = param_3;
                FUN_109d81870(param_3,ppppppuVar10 + 0x20);
              }
              iVar2 = 0;
              if (uVar3 != 0) {
                iVar2 = (int)(((uVar3 - 1) + (long)pppppppuVar4) / uVar3);
              }
              iVar11 = iVar11 + iVar2 * (int)uVar3;
            }
            param_3 = param_3 + 5;
          } while (param_3 != pppppppuVar5);
        }
        puVar1 = *(undefined1 **)(param_2 + 0x20);
        if (puVar1 < *(undefined1 **)(param_2 + 0x18)) {
          *(undefined1 **)(param_2 + 0x20) = puVar1 + 1;
          *puVar1 = 0x40;
        }
        else {
          FUN_109e05570(param_2,0x40);
        }
        FUN_109df9d4c(param_2,iVar11,0,0,0);
        return;
      }
    }
    else if ((*(char *)pppppppuVar4 != '\x01') &&
            ((iVar11 = *(int *)((long)ppppppuVar10 + 0x11c), iVar11 - 5U < 0xfffffffe ||
             (*(char *)pppppppuVar4 != '?')))) goto joined_r0x000109d93908;
    uStack_68 = 0x105;
    uVar8 = (uint)cVar6;
    goto LAB_109d9393c;
  }
  uVar3 = *param_1;
  FUN_109d94298(uVar3,(int)param_1[2],param_3,&pppppppuStack_88);
  if ((uVar3 & 1) == 0) {
    uVar8 = (uint)param_1[2];
    if ((uint)param_1[1] * 4 + 4 < uVar8 * 3) {
      if ((uVar8 + ~(uint)param_1[1]) - *(int *)((long)param_1 + 0xc) <= uVar8 >> 3)
      goto LAB_109d93b24;
    }
    else {
      uVar8 = uVar8 << 1;
LAB_109d93b24:
      FUN_109d94324(param_1,uVar8);
      FUN_109d94298(*param_1,(int)param_1[2],param_3,&pppppppuStack_88);
    }
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    if (*pppppppuStack_88 != (ulong ******)0xfffffffffffff000) {
      *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
    }
    *pppppppuStack_88 = (ulong ******)param_3;
    *(undefined4 *)(pppppppuStack_88 + 1) = 0;
LAB_109d93884:
    uVar8 = (uint)param_1[1];
    *(uint *)(pppppppuStack_88 + 1) = uVar8;
  }
  else {
    uVar8 = *(uint *)(pppppppuStack_88 + 1);
    if (uVar8 == 0) goto LAB_109d93884;
  }
  uStack_78 = (ulong)uVar8;
  pppppppuStack_88 = (ulong *******)&UNK_10f5f9efa;
  uStack_68 = 0x803;
  uVar8 = (uint)(0x5f005f0000 >> (((ulong)*(uint *)((long)ppppppuVar10 + 0x11c) & 7) << 3)) & 0xff;
LAB_109d9393c:
  FUN_109d935d0(param_2,&pppppppuStack_88,uVar7,ppppppuVar10 + 0x20,uVar8);
  return;
}



/* Entry: 109d93b48; end: 109d93b97;  */

byte FUN_109d93b48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if ((lVar1 != 0) && (2 < *(uint *)(lVar1 + 8))) {
    if ((*(long *)(lVar1 + 0x38) != 0) &&
       ((*(byte *)(*(long *)(lVar1 + 0x38) + 0x15) >> 2 & 1) != 0)) {
      return 1;
    }
    if ((*(uint *)(lVar1 + 8) != 3) && (*(long *)(lVar1 + 0x40) != 0)) {
      return *(byte *)(*(long *)(lVar1 + 0x40) + 0x15) >> 2 & 1;
    }
  }
  return 0;
}



/* Entry: 109d93b98; end: 109d93c3b;  */

void FUN_109d93b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **appuStack_78 [2];
  long lStack_68;
  int iStack_40;
  
  FUN_109d37ad8(appuStack_78);
  FUN_109d93768(param_1,appuStack_78,param_3,param_4);
  appuStack_78[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_40 == 1) && (lStack_68 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d93c3c; end: 109d94297;  */

/* WARNING: Removing unreachable block (ram,0x000109d93ec4) */
/* WARNING: Removing unreachable block (ram,0x000109d94204) */

void FUN_109d93c3c(long param_1,long *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  byte *******pppppppbVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  undefined1 **ppuVar6;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  byte *pbVar10;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined **appuStack_a8 [2];
  long lStack_98;
  long lStack_88;
  int iStack_70;
  byte ******ppppppbStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 uStack_41;
  
  if ((*(uint *)(param_2 + 4) & 0x300) == 0x200) {
    if ((char)param_2[2] == '\0') {
      if (((*(uint *)(param_2 + 4) >> 0x18 & 1) != 0) || ((long *)param_2[9] != param_2 + 9))
      goto LAB_109d93ca8;
    }
    else if (((char)param_2[2] != '\x03') || ((*(uint *)((long)param_2 + 0x14) & 0x7ffffff) != 0)) {
LAB_109d93ca8:
      if (*(int *)(param_3 + 0x24) == 0xf) {
        puVar8 = &UNK_10f5f9f05;
        if ((*(int *)(param_3 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0x13))
        goto LAB_109d93cd0;
      }
      else {
LAB_109d93cd0:
        puVar8 = &UNK_10f5f9f0f;
      }
      FUN_109d2f728(param_1,puVar8,9);
      if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) == 0) {
LAB_109d93d34:
        bVar5 = false;
      }
      else {
        plVar7 = param_2;
        func_0x000109da271c();
        lVar9 = *plVar7;
        if (lVar9 != 0) {
          pbVar10 = (byte *)(plVar7 + 2);
          do {
            bVar4 = *pbVar10;
            if ((bVar4 != 0x40) &&
               ((bVar4 != 0x5f && 9 < bVar4 - 0x30) && 0x19 < (bVar4 & 0xffffffdf) - 0x41))
            goto LAB_109d93d3c;
            pbVar10 = pbVar10 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
          goto LAB_109d93d34;
        }
LAB_109d93d3c:
        if (*(undefined1 **)(param_1 + 0x18) == *(undefined1 **)(param_1 + 0x20)) {
          bVar5 = true;
          FUN_109e0560c(param_1,&DAT_10f3b3c06,1);
        }
        else {
          **(undefined1 **)(param_1 + 0x20) = 0x22;
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
          bVar5 = true;
        }
      }
      if ((*(int *)(param_3 + 0x24) == 0xf) &&
         (*(int *)(param_3 + 0x28) == 0x15 || *(int *)(param_3 + 0x28) == 1)) {
        ppppppbStack_60 = (byte ******)0x0;
        uStack_58 = 0;
        uStack_50 = 0;
        FUN_109d31714(appuStack_a8,&ppppppbStack_60);
        FUN_109d93768(param_4,appuStack_a8,param_2,0);
        if (lStack_88 != lStack_98) {
          FUN_109e05520(appuStack_a8);
        }
        pppppppbVar2 = (byte *******)ppppppbStack_60;
        if (-1 < (long)uStack_50) {
          pppppppbVar2 = &ppppppbStack_60;
        }
        if ((uint)*(byte *)pppppppbVar2 ==
            ((uint)(0x5f005f0000 >> (((ulong)*(uint *)(param_2[5] + 0x11c) & 7) << 3)) & 0xff)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                    (&puStack_c0,&ppppppbStack_60,1,0xffffffffffffffff,&uStack_41);
          uVar1 = uStack_b8;
          ppuVar6 = (undefined1 **)puStack_c0;
          if (-1 < (char)bStack_a9) {
            uVar1 = (ulong)bStack_a9;
            ppuVar6 = &puStack_c0;
          }
          FUN_109e0560c(param_1,ppuVar6,uVar1);
          if ((char)bStack_a9 < '\0') {
            __ZdlPv(puStack_c0);
          }
        }
        else {
          uVar1 = uStack_58;
          if (-1 < (long)uStack_50) {
            uVar1 = uStack_50 >> 0x38;
          }
          FUN_109e0560c(param_1,pppppppbVar2,uVar1);
        }
        appuStack_a8[0] = &PTR_DAT_110b5c4a0;
        if ((iStack_70 == 1) && (lStack_98 != 0)) {
          __ZdaPv();
        }
      }
      else {
        FUN_109d93768(param_4,param_1,param_2,0);
      }
      if (bVar5) {
        if (*(undefined1 **)(param_1 + 0x18) == *(undefined1 **)(param_1 + 0x20)) {
          FUN_109e0560c(param_1,&DAT_10f3b3c06,1);
        }
        else {
          **(undefined1 **)(param_1 + 0x20) = 0x22;
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        }
      }
      if (*(char *)(param_2[3] + 8) != '\x0e') {
        if (*(int *)(param_3 + 0x24) == 0xf) {
          puVar8 = &UNK_10f5f9f19;
          if ((*(int *)(param_3 + 0x28) != 0) && (*(int *)(param_3 + 0x28) != 0x13))
          goto LAB_109d93f40;
        }
        else {
LAB_109d93f40:
          puVar8 = &UNK_10f5f9f1f;
        }
        FUN_109d2f728(param_1,puVar8,5);
      }
    }
  }
  if ((*(uint *)(param_2 + 4) & 0x30) != 0x10) {
    return;
  }
  if ((char)param_2[2] == '\0') {
    if ((long *)param_2[9] == param_2 + 9 && (*(uint *)(param_2 + 4) & 0x1000000) == 0) {
      return;
    }
  }
  else if (((char)param_2[2] == '\x03') && ((*(uint *)((long)param_2 + 0x14) & 0x7ffffff) == 0)) {
    return;
  }
  if (*(int *)(param_3 + 0x24) != 0xf) {
    return;
  }
  if ((*(int *)(param_3 + 0x28) != 0x15) && (*(int *)(param_3 + 0x28) != 1)) {
    return;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < 0x12) {
    FUN_109e0560c(param_1,&UNK_10f5f9f25,0x12);
  }
  else {
    *(undefined2 *)(puVar3 + 2) = 0x3a73;
    puVar3[1] = 0x6c6f626d79732d65;
    *puVar3 = 0x64756c6378652d20;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x12;
  }
  if ((*(byte *)((long)param_2 + 0x17) >> 4 & 1) != 0) {
    plVar7 = param_2;
    func_0x000109da271c();
    lVar9 = *plVar7;
    if (lVar9 == 0) {
LAB_109d94074:
      if (*(undefined1 **)(param_1 + 0x18) == *(undefined1 **)(param_1 + 0x20)) {
        bVar5 = true;
        FUN_109e0560c(param_1,&DAT_10f3b3c06,1);
      }
      else {
        **(undefined1 **)(param_1 + 0x20) = 0x22;
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
        bVar5 = true;
      }
      goto LAB_109d940b4;
    }
    pbVar10 = (byte *)(plVar7 + 2);
    do {
      bVar4 = *pbVar10;
      if ((bVar4 != 0x40) &&
         ((bVar4 != 0x5f && 9 < bVar4 - 0x30) && 0x19 < (bVar4 & 0xffffffdf) - 0x41))
      goto LAB_109d94074;
      pbVar10 = pbVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  bVar5 = false;
LAB_109d940b4:
  ppppppbStack_60 = (byte ******)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  FUN_109d31714(appuStack_a8,&ppppppbStack_60);
  FUN_109d93768(param_4,appuStack_a8,param_2,0);
  if (lStack_88 != lStack_98) {
    FUN_109e05520(appuStack_a8);
  }
  pppppppbVar2 = (byte *******)ppppppbStack_60;
  if (-1 < (long)uStack_50) {
    pppppppbVar2 = &ppppppbStack_60;
  }
  if ((uint)*(byte *)pppppppbVar2 ==
      ((uint)(0x5f005f0000 >> (((ulong)*(uint *)(param_2[5] + 0x11c) & 7) << 3)) & 0xff)) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
              (&puStack_c0,&ppppppbStack_60,1,0xffffffffffffffff,&uStack_41);
    ppuVar6 = (undefined1 **)puStack_c0;
    if (-1 < (char)bStack_a9) {
      uStack_b8 = (ulong)bStack_a9;
      ppuVar6 = &puStack_c0;
    }
    FUN_109e0560c(param_1,ppuVar6,uStack_b8);
    if ((char)bStack_a9 < '\0') {
      __ZdlPv(puStack_c0);
    }
  }
  else {
    uVar1 = uStack_58;
    if (-1 < (long)uStack_50) {
      uVar1 = uStack_50 >> 0x38;
    }
    FUN_109e0560c(param_1,pppppppbVar2,uVar1);
  }
  if (bVar5) {
    if (*(undefined1 **)(param_1 + 0x18) == *(undefined1 **)(param_1 + 0x20)) {
      FUN_109e0560c(param_1,&DAT_10f3b3c06,1);
    }
    else {
      **(undefined1 **)(param_1 + 0x20) = 0x22;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    }
  }
  appuStack_a8[0] = &PTR_DAT_110b5c4a0;
  if ((iStack_70 == 1) && (lStack_98 != 0)) {
    __ZdaPv();
  }
  return;
}



/* Entry: 109d94298; end: 109d94323;  */

undefined8 FUN_109d94298(long param_1,int param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  
  if (param_2 == 0) {
    uVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    uVar4 = ((uint)param_3 >> 4 ^ (uint)param_3 >> 9) & param_2 - 1U;
    plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
    lVar6 = *plVar3;
    if (param_3 != lVar6) {
      iVar7 = 1;
      plVar5 = (long *)0x0;
      do {
        if (lVar6 == -0x1000) {
          uVar2 = 0;
          if (plVar5 != (long *)0x0) {
            plVar3 = plVar5;
          }
          goto LAB_109d942cc;
        }
        plVar1 = plVar3;
        if (plVar5 != (long *)0x0 || lVar6 != -0x2000) {
          plVar1 = plVar5;
        }
        uVar4 = uVar4 + iVar7;
        iVar7 = iVar7 + 1;
        uVar4 = uVar4 & param_2 - 1U;
        plVar3 = (long *)(param_1 + (ulong)uVar4 * 0x10);
        lVar6 = *plVar3;
        plVar5 = plVar1;
      } while (param_3 != lVar6);
    }
    uVar2 = 1;
  }
LAB_109d942cc:
  *param_4 = (long)plVar3;
  return uVar2;
}



/* Entry: 109d94324; end: 109d9444f;  */

void FUN_109d94324(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d94298(*param_1,*(undefined4 *)(param_1 + 2),*puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(puStack_38 + 1) = (int)puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d94450; end: 109d944ab;  */

undefined8 * FUN_109d94450(undefined8 *param_1,undefined8 param_2,long param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x17;
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xc0000000;
  param_1[3] = param_3;
  if (param_3 != 0) {
    FUN_109d9464c(param_1 + 3,param_3,param_1);
  }
  return param_1;
}



/* Entry: 109d944ac; end: 109d944fb;  */

undefined8 * FUN_109d944ac(undefined8 *param_1)

{
  uint uVar1;
  long *plVar2;
  
  plVar2 = param_1 + 3;
  FUN_109d944fc(**(long **)*param_1 + 0x198,plVar2);
  if (*plVar2 != 0) {
    FUN_109d94730(plVar2);
  }
  if ((*(byte *)((long)param_1 + 0x11) & 1) != 0) {
    FUN_109da2494(param_1);
  }
  uVar1 = *(uint *)((long)param_1 + 0x14);
  if ((uVar1 >> 0x1b & 1) != 0) {
    func_0x000109d95478(param_1);
    uVar1 = *(uint *)((long)param_1 + 0x14);
  }
  if ((uVar1 >> 0x1d & 1) != 0) {
    FUN_109d97d98(param_1);
  }
  FUN_109da258c(param_1);
  return param_1;
}



/* Entry: 109d944fc; end: 109d9454b;  */

void FUN_109d944fc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puStack_28;
  
  iVar1 = (int)param_1;
  FUN_109d98138(iVar1,param_2,&puStack_28);
  if (iVar1 != 0) {
    *puStack_28 = 0xffffffffffffe000;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) + 1,
                  (int)*(undefined8 *)(param_1 + 8) + -1);
  }
  return;
}



/* Entry: 109d9454c; end: 109d945d3;  */

long FUN_109d9454c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plStack_38;
  
  plVar1 = param_1;
  FUN_109d945d4();
  lVar2 = *param_1 + 0x198;
  plStack_38 = plVar1;
  FUN_109d981d0(lVar2,&plStack_38);
  lVar3 = *(long *)(lVar2 + 8);
  if (lVar3 == 0) {
    lVar3 = 0x20;
    __Znwm();
    FUN_109d94450();
    *(long *)(lVar2 + 8) = lVar3;
  }
  return lVar3;
}



/* Entry: 109d945d4; end: 109d9464b;  */

/* WARNING: Removing unreachable block (ram,0x000109d974ec) */

byte * FUN_109d945d4(long *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long *plStack_48;
  
  if (param_2 != (byte *)0x0) {
    pbVar5 = param_2;
    if (*param_2 - 4 < 0x20) {
      uVar6 = *(ulong *)(param_2 + -0x10);
      if (((uint)uVar6 >> 1 & 1) == 0) {
        if ((uVar6 & 0x3c0) != 0x40) {
          return param_2;
        }
        puVar4 = (ulong *)((long)(param_2 + -0x10) + -(uVar6 >> 2 & 0xf) * 8);
      }
      else {
        if (*(int *)(param_2 + -0x18) != 1) {
          return param_2;
        }
        puVar4 = *(ulong **)(param_2 + -0x20);
      }
      pbVar5 = (byte *)*puVar4;
      if (pbVar5 == (byte *)0x0) goto LAB_109d9463c;
      if (*pbVar5 != 1) {
        pbVar5 = param_2;
      }
    }
    return pbVar5;
  }
LAB_109d9463c:
  uVar2 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = uVar2;
  FUN_109d92e8c(0,0);
  uStack_50 = (undefined4)uVar2;
  lVar7 = *param_1;
  lVar3 = lVar7 + 0x1b0;
  FUN_109d9b9b8(lVar3,&uStack_70,&plStack_48);
  uVar1 = uStack_50;
  pbVar5 = (byte *)0x0;
  if ((int)lVar3 != 0 &&
      plStack_48 != (long *)(*(long *)(lVar7 + 0x1b0) + (ulong)*(uint *)(lVar7 + 0x1c0) * 8)) {
    pbVar5 = (byte *)*plStack_48;
  }
  if (pbVar5 == (byte *)0x0) {
    pbVar5 = (byte *)0x10;
    FUN_109d957b4(0x10,0,0);
    FUN_109d95824();
    *(undefined4 *)(pbVar5 + 4) = uVar1;
    FUN_109d975b4();
  }
  return pbVar5;
}



/* Entry: 109d9464c; end: 109d946df;  */

undefined8 FUN_109d9464c(undefined8 param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  pcVar1 = param_2;
  FUN_109d946e0();
  if (pcVar1 == (char *)0x0) {
    if (*param_2 != '\x03') {
      return 0;
    }
    *(undefined8 *)(param_2 + 8) = param_1;
  }
  else {
    uStack_50 = *(undefined8 *)(pcVar1 + 8);
    uStack_60 = param_1;
    uStack_58 = param_3;
    func_0x000109d987b4(auStack_48,pcVar1 + 0x10,&uStack_60,&uStack_58);
    *(long *)(pcVar1 + 8) = *(long *)(pcVar1 + 8) + 1;
  }
  return 1;
}



/* Entry: 109d946e0; end: 109d9472f;  */

byte * FUN_109d946e0(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (0x1f < *param_1 - 4) {
    bVar3 = 0xfffffffd < *param_1 - 3;
    pbVar1 = (byte *)0x0;
    if (bVar3) {
      pbVar1 = param_1;
    }
    pbVar2 = (byte *)0x0;
    if (bVar3) {
      pbVar2 = pbVar1 + 8;
    }
    return pbVar2;
  }
  if (((param_1[1] & 0x7f) != 2) && (*(int *)(param_1 + -8) == 0)) {
    return (byte *)0x0;
  }
  uVar5 = *(ulong *)(param_1 + 8);
  if (((uint)uVar5 >> 2 & 1) == 0) {
    puVar4 = (ulong *)0x78;
    __Znwm();
    *puVar4 = uVar5 & 0xfffffffffffffff8;
    puVar4[1] = 0;
    puVar4[2] = 1;
    puVar4[3] = 0xfffffffffffff000;
    puVar4[6] = 0xfffffffffffff000;
    puVar4[9] = 0xfffffffffffff000;
    puVar4[0xc] = 0xfffffffffffff000;
    uVar5 = (ulong)puVar4 | 4;
    *(ulong *)(param_1 + 8) = uVar5;
  }
  return (byte *)(uVar5 & 0xfffffffffffffff8);
}



/* Entry: 109d94730; end: 109d94787;  */

void FUN_109d94730(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uStack_28;
  
  pcVar1 = param_2;
  FUN_109d94788();
  if (pcVar1 == (char *)0x0) {
    if (*param_2 == '\x03') {
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
    }
  }
  else {
    uStack_28 = param_1;
    func_0x000109d948a0(pcVar1 + 0x10,&uStack_28);
  }
  return;
}



/* Entry: 109d94788; end: 109d947e3;  */

byte * FUN_109d94788(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  bool bVar3;
  
  if (0x1f < *param_1 - 4) {
    bVar3 = 0xfffffffd < *param_1 - 3;
    pbVar1 = (byte *)0x0;
    if (bVar3) {
      pbVar1 = param_1;
    }
    pbVar2 = (byte *)0x0;
    if (bVar3) {
      pbVar2 = pbVar1 + 8;
    }
    return pbVar2;
  }
  if (((param_1[1] & 0x7f) != 2) && (*(int *)(param_1 + -8) == 0)) {
    return (byte *)0x0;
  }
  return (byte *)(*(ulong *)(param_1 + 8) & (long)(*(ulong *)(param_1 + 8) << 0x3d) >> 0x3f &
                 0xfffffffffffffff8);
}



/* Entry: 109d947e4; end: 109d94833;  */

bool FUN_109d947e4(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_109d94788();
  if (param_2 != 0) {
    FUN_109d94834(param_2,param_1,param_3);
  }
  return param_2 != 0;
}



/* Entry: 109d94834; end: 109d94967;  */

void FUN_109d94834(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x10);
  func_0x000109d948ec();
  uStack_40 = puVar1[2];
  uStack_48 = puVar1[1];
  *puVar1 = 0xffffffffffffe000;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  uStack_50 = param_3;
  func_0x000109d987b4(auStack_38,param_1 + 0x10,&uStack_50,&uStack_48);
  return;
}



/* Entry: 109d94968; end: 109d94bb3;  */

ulong * FUN_109d94968(ulong *param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  byte *unaff_x20;
  ulong *unaff_x21;
  undefined8 unaff_x22;
  long lVar12;
  ulong *unaff_x23;
  byte *pbVar13;
  undefined8 unaff_x24;
  ulong *puStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  ulong *puStack_168;
  undefined8 uStack_160;
  ulong *puStack_158;
  byte *pbStack_150;
  ulong *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  ulong *puStack_130;
  ulong *puStack_128;
  uint uStack_120;
  ulong auStack_118 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_1;
  if ((*(byte *)((long)param_1 + 0x17) >> 3 & 1) == 0) goto LAB_109d94b50;
  unaff_x20 = (byte *)**(undefined8 **)*param_1;
  pbVar13 = unaff_x20 + 0x180;
  puStack_130 = param_1;
  func_0x000109d9892c(pbVar13,&puStack_130,&puStack_128);
  puVar9 = puStack_128;
  if ((int)pbVar13 == 0) {
    puVar9 = (ulong *)(*(long *)(unaff_x20 + 0x180) + (ulong)*(uint *)(unaff_x20 + 400) * 0x10);
  }
  uVar6 = puVar9[1];
  uVar10 = *(uint *)(uVar6 + 0x18);
  if (uVar10 < 2) {
    if (uVar10 == 0) {
      lVar12 = *(long *)(uVar6 + 0x20);
      uVar11 = *(uint *)(uVar6 + 0x28);
      puVar9 = (ulong *)(lVar12 + (ulong)uVar11 * 0x18);
    }
    else {
      lVar12 = uVar6 + 0x20;
      puVar9 = (ulong *)(uVar6 + 0x80);
      uVar11 = 4;
    }
    param_3 = (ulong *)(lVar12 + (ulong)uVar11 * 0x18);
LAB_109d94a68:
    lVar12 = uVar6 + 0x20;
    param_2 = puVar9;
    if (uVar10 == 0) {
      uVar7 = (ulong)*(uint *)(uVar6 + 0x28);
      goto LAB_109d94a80;
    }
    lVar5 = uVar6 + 0x80;
    uVar7 = 4;
  }
  else {
    param_2 = (ulong *)(uVar6 + 0x20);
    if ((uVar10 & 1) != 0) {
      param_3 = (ulong *)(uVar6 + 0x80);
LAB_109d94a28:
      uVar10 = uVar10 & 1;
      do {
        puVar9 = param_2;
        if ((*param_2 | 0x1000) != 0xfffffffffffff000) break;
        param_2 = param_2 + 3;
        puVar9 = param_3;
      } while (param_2 != param_3);
      goto LAB_109d94a68;
    }
    param_2 = *(ulong **)(uVar6 + 0x20);
    param_3 = param_2 + (ulong)*(uint *)(uVar6 + 0x28) * 3;
    if (*(uint *)(uVar6 + 0x28) != 0) goto LAB_109d94a28;
    uVar7 = 0;
LAB_109d94a80:
    lVar12 = *(long *)(uVar6 + 0x20);
    lVar5 = lVar12 + uVar7 * 0x18;
  }
  FUN_109d989c4(&puStack_128,param_2,param_3,lVar5,lVar12 + uVar7 * 0x18);
  puVar9 = puStack_128;
  if (uStack_120 != 0) {
    lVar12 = (ulong)uStack_120 * 0x18;
    unaff_x23 = puStack_128 + 1;
    unaff_x24 = 1;
    do {
      uVar6 = *unaff_x23;
      if (3 < uVar6 && (uVar6 & 2) != 0) {
        unaff_x20 = (byte *)(uVar6 & 0xfffffffffffffffc);
        bVar1 = *unaff_x20;
        if ((bVar1 - 4 < 0x20) &&
           ((bVar1 - 8 < 0x16 || (bVar1 < 0x24 && (1L << ((ulong)bVar1 & 0x3f) & 0xd00000000U) != 0)
            ))) {
          unaff_x21 = (ulong *)unaff_x23[-1];
          param_3 = (ulong *)*param_1;
          func_0x000109d677ec();
          FUN_109d94e24();
          param_2 = unaff_x21;
          FUN_109d94bb4(unaff_x20);
        }
      }
      unaff_x23 = unaff_x23 + 3;
      lVar12 = lVar12 + -0x18;
    } while (lVar12 != 0);
    unaff_x22 = 0;
    puVar9 = puStack_128;
  }
  if (puVar9 != auStack_118) {
    _free();
  }
LAB_109d94b50:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  puVar3 = puVar9;
  __Unwind_Resume();
  pcStack_138 = FUN_109d94bb4;
  puVar4 = puVar3 + -2;
  if (((uint)*puVar4 >> 1 & 1) == 0) {
    puVar8 = puVar4 + -(*puVar4 >> 2 & 0xf);
  }
  else {
    puVar8 = (ulong *)puVar3[-4];
  }
  uVar6 = (ulong)((long)param_2 - (long)puVar8) >> 3;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  uStack_160 = unaff_x22;
  puStack_158 = unaff_x21;
  pbStack_150 = unaff_x20;
  puStack_148 = puVar9;
  puStack_140 = &stack0xfffffffffffffff0;
  if ((*puVar3 & 0x7f00) != 0) {
    uVar7 = puVar3[-2];
    if (((uint)uVar7 >> 1 & 1) == 0) {
      puVar9 = puVar3 + -2 + -(uVar7 >> 2 & 0xf);
    }
    else {
      puVar9 = (ulong *)puVar3[-4];
    }
    puVar9 = puVar9 + (uVar6 & 0xffffffff);
    if ((*puVar3 & 0x7f00) != 0) {
      puVar3 = (ulong *)0x0;
    }
    pcStack_138 = FUN_109d94bb4;
    puVar4 = puVar9;
    if (*puVar9 != 0) {
      FUN_109d94730(puVar9);
    }
    *puVar9 = (ulong)param_3;
    if (param_3 != (ulong *)0x0) {
      puVar4 = param_3;
      FUN_109d946e0();
      if (puVar4 == (ulong *)0x0) {
        if ((byte)*param_3 != 3) {
          return (ulong *)0x0;
        }
        param_3[1] = (ulong)puVar9;
      }
      else {
        uStack_180 = puVar4[1];
        puStack_190 = puVar9;
        uStack_188 = (ulong)puVar3 | 2;
        func_0x000109d987b4(auStack_178,puVar4 + 2,&puStack_190,&uStack_188);
        puVar4[1] = puVar4[1] + 1;
      }
      return (ulong *)0x1;
    }
    return puVar4;
  }
  FUN_109d96c08(puVar3);
  if (((uint)puVar3[-2] >> 1 & 1) == 0) {
    puVar9 = puVar4 + -(puVar3[-2] >> 2 & 0xf);
  }
  else {
    puVar9 = (ulong *)puVar3[-4];
  }
  pbVar13 = *(byte **)((long)puVar9 + ((long)param_2 - (long)puVar8 & 0x7fffffff8U));
  FUN_109d95908(puVar3,uVar6,param_3);
  if ((param_3 == puVar3) ||
     (((param_3 == (ulong *)0x0 && (pbVar13 != (byte *)0x0)) && (*pbVar13 == 1)))) {
    if (((*puVar3 & 0x7f00) == 0x200) || ((int)puVar3[-1] != 0)) {
      *(undefined4 *)(puVar3 + -1) = 0;
      FUN_109d95b24(puVar3);
    }
  }
  else {
    puVar9 = puVar3;
    FUN_109d95c1c();
    bVar1 = *(byte *)((long)puVar3 + 1) & 0x7f;
    if (puVar9 == puVar3) {
      if ((bVar1 == 2) || ((int)puVar3[-1] != 0)) {
        if (((pbVar13 == (byte *)0x0) || (0x1f < *pbVar13 - 4)) ||
           (((pbVar13[1] & 0x7f) != 2 && (*(int *)(pbVar13 + -8) == 0)))) {
          if ((param_3 != (ulong *)0x0) &&
             (((byte)*param_3 - 4 < 0x20 &&
              (((*param_3 & 0x7f00) == 0x200 || ((int)param_3[-1] != 0)))))) {
            *(int *)(puVar3 + -1) = (int)puVar3[-1] + 1;
          }
        }
        else if ((((param_3 == (ulong *)0x0) || (0x1f < (byte)*param_3 - 4)) ||
                 (((*param_3 & 0x7f00) != 0x200 && ((int)param_3[-1] == 0)))) &&
                ((bVar1 != 2 &&
                 (iVar2 = (int)puVar3[-1] + -1, *(int *)(puVar3 + -1) = iVar2, iVar2 == 0)))) {
          if (((uint)puVar3[1] >> 2 & 1) != 0) {
            puVar9 = (ulong *)(puVar3[1] & 0xfffffffffffffff8);
            puVar3[1] = *puVar9 & 0xfffffffffffffffb;
            FUN_109d95198(puVar9,1);
            if ((puVar9[2] & 1) == 0) {
              __ZdlPvSt11align_val_t(puVar9[3],8);
            }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR___ZdlPv_110352258)(puVar9);
            return puVar9;
          }
          return puVar3;
        }
      }
      return puVar9;
    }
    if ((bVar1 == 2) || ((int)puVar3[-1] != 0)) {
      if (((uint)*puVar4 >> 1 & 1) == 0) {
        uVar10 = (uint)*puVar4 >> 6 & 0xf;
      }
      else {
        uVar10 = (uint)puVar3[-3];
      }
      if (uVar10 != 0) {
        uVar11 = 0;
        do {
          FUN_109d95908(puVar3,uVar11,0);
          uVar11 = uVar11 + 1;
        } while (uVar10 != uVar11);
      }
      if (((uint)puVar3[1] >> 2 & 1) != 0) {
        FUN_109d94ee4(puVar3[1] & 0xfffffffffffffff8,puVar9);
      }
                    /* WARNING: Could not emulate address calculation at 0x000109d96ab0 */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e0594a8)[(byte)*puVar3 - 4] * 4 + 0x109d96abc))();
      return puVar3;
    }
  }
  *(byte *)((long)puVar3 + 1) = *(byte *)((long)puVar3 + 1) & 0x80 | 1;
  if ((0x1a < (byte)*puVar3 - 9) && (2 < (byte)*puVar3 - 5)) {
    *(undefined4 *)((long)puVar3 + 4) = 0;
  }
  puVar9 = (ulong *)(puVar3[1] & 0xfffffffffffffff8);
  if (((uint)puVar3[1] >> 2 & 1) != 0) {
    puVar9 = (ulong *)*puVar9;
  }
  puVar9 = (ulong *)(*puVar9 + 0x4a0);
  puStack_148 = puVar3;
  FUN_109d97614(puVar9,&puStack_148);
  return puVar9;
}



/* Entry: 109d94bb4; end: 109d94e23;  */

ulong * FUN_109d94bb4(ulong *param_1,long param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  byte *pbVar10;
  ulong *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  puVar5 = param_1 + -2;
  if (((uint)*puVar5 >> 1 & 1) == 0) {
    puVar3 = puVar5 + -(*puVar5 >> 2 & 0xf);
  }
  else {
    puVar3 = (ulong *)param_1[-4];
  }
  uVar8 = (ulong)(param_2 - (long)puVar3) >> 3;
  if ((*param_1 & 0x7f00) == 0) {
    FUN_109d96c08(param_1);
    if (((uint)param_1[-2] >> 1 & 1) == 0) {
      puVar4 = puVar5 + -(param_1[-2] >> 2 & 0xf);
    }
    else {
      puVar4 = (ulong *)param_1[-4];
    }
    pbVar10 = *(byte **)((long)puVar4 + (param_2 - (long)puVar3 & 0x7fffffff8U));
    FUN_109d95908(param_1,uVar8,param_3);
    if ((param_3 == param_1) ||
       (((param_3 == (ulong *)0x0 && (pbVar10 != (byte *)0x0)) && (*pbVar10 == 1)))) {
      if (((*param_1 & 0x7f00) == 0x200) || ((int)param_1[-1] != 0)) {
        *(undefined4 *)(param_1 + -1) = 0;
        FUN_109d95b24(param_1);
      }
    }
    else {
      puVar3 = param_1;
      FUN_109d95c1c();
      bVar1 = *(byte *)((long)param_1 + 1) & 0x7f;
      if (puVar3 == param_1) {
        if ((bVar1 == 2) || ((int)param_1[-1] != 0)) {
          if (((pbVar10 == (byte *)0x0) || (0x1f < *pbVar10 - 4)) ||
             (((pbVar10[1] & 0x7f) != 2 && (*(int *)(pbVar10 + -8) == 0)))) {
            if ((param_3 != (ulong *)0x0) &&
               (((byte)*param_3 - 4 < 0x20 &&
                (((*param_3 & 0x7f00) == 0x200 || ((int)param_3[-1] != 0)))))) {
              *(int *)(param_1 + -1) = (int)param_1[-1] + 1;
            }
          }
          else if ((((param_3 == (ulong *)0x0) || (0x1f < (byte)*param_3 - 4)) ||
                   (((*param_3 & 0x7f00) != 0x200 && ((int)param_3[-1] == 0)))) &&
                  ((bVar1 != 2 &&
                   (iVar2 = (int)param_1[-1] + -1, *(int *)(param_1 + -1) = iVar2, iVar2 == 0)))) {
            if (((uint)param_1[1] >> 2 & 1) != 0) {
              puVar5 = (ulong *)(param_1[1] & 0xfffffffffffffff8);
              param_1[1] = *puVar5 & 0xfffffffffffffffb;
              FUN_109d95198(puVar5,1);
              if ((puVar5[2] & 1) == 0) {
                __ZdlPvSt11align_val_t(puVar5[3],8);
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(puVar5);
              return puVar5;
            }
            return param_1;
          }
        }
        return puVar3;
      }
      if ((bVar1 == 2) || ((int)param_1[-1] != 0)) {
        if (((uint)*puVar5 >> 1 & 1) == 0) {
          uVar9 = (uint)*puVar5 >> 6 & 0xf;
        }
        else {
          uVar9 = (uint)param_1[-3];
        }
        if (uVar9 != 0) {
          uVar7 = 0;
          do {
            FUN_109d95908(param_1,uVar7,0);
            uVar7 = uVar7 + 1;
          } while (uVar9 != uVar7);
        }
        if (((uint)param_1[1] >> 2 & 1) != 0) {
          FUN_109d94ee4(param_1[1] & 0xfffffffffffffff8,puVar3);
        }
                    /* WARNING: Could not emulate address calculation at 0x000109d96ab0 */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10e0594a8)[(byte)*param_1 - 4] * 4 + 0x109d96abc))();
        return param_1;
      }
    }
    *(byte *)((long)param_1 + 1) = *(byte *)((long)param_1 + 1) & 0x80 | 1;
    if ((0x1a < (byte)*param_1 - 9) && (2 < (byte)*param_1 - 5)) {
      pbVar10 = (byte *)((long)param_1 + 4);
      pbVar10[0] = 0;
      pbVar10[1] = 0;
      pbVar10[2] = 0;
      pbVar10[3] = 0;
    }
    puVar5 = (ulong *)(param_1[1] & 0xfffffffffffffff8);
    if (((uint)param_1[1] >> 2 & 1) != 0) {
      puVar5 = (ulong *)*puVar5;
    }
    puVar5 = (ulong *)(*puVar5 + 0x4a0);
    FUN_109d97614(puVar5,&stack0xffffffffffffffe8);
    return puVar5;
  }
  uVar6 = param_1[-2];
  if (((uint)uVar6 >> 1 & 1) == 0) {
    puVar5 = param_1 + -2 + -(uVar6 >> 2 & 0xf);
  }
  else {
    puVar5 = (ulong *)param_1[-4];
  }
  puVar5 = puVar5 + (uVar8 & 0xffffffff);
  if ((*param_1 & 0x7f00) != 0) {
    param_1 = (ulong *)0x0;
  }
  puVar3 = puVar5;
  if (*puVar5 != 0) {
    FUN_109d94730(puVar5);
  }
  *puVar5 = (ulong)param_3;
  if (param_3 != (ulong *)0x0) {
    puVar3 = param_3;
    FUN_109d946e0();
    if (puVar3 == (ulong *)0x0) {
      if ((byte)*param_3 != 3) {
        return (ulong *)0x0;
      }
      param_3[1] = (ulong)puVar5;
    }
    else {
      uStack_50 = puVar3[1];
      puStack_60 = puVar5;
      uStack_58 = (ulong)param_1 | 2;
      func_0x000109d987b4(auStack_48,puVar3 + 2,&puStack_60,&uStack_58);
      puVar3[1] = puVar3[1] + 1;
    }
    return (ulong *)0x1;
  }
  return puVar3;
}



/* Entry: 109d94e24; end: 109d94ee3;  */

void FUN_109d94e24(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined8 *puStack_38;
  
  lVar3 = **(long **)*param_1 + 0x180;
  puStack_38 = param_1;
  func_0x000109d9b1a8(lVar3,&puStack_38);
  puVar2 = puStack_38;
  if (*(long *)(lVar3 + 8) == 0) {
    *(uint *)((long)puStack_38 + 0x14) = *(uint *)((long)puStack_38 + 0x14) | 0x8000000;
    bVar1 = *(byte *)(puStack_38 + 2);
    puVar4 = (undefined1 *)0x88;
    __Znwm();
    uVar5 = 1;
    if (0x14 < bVar1 || puVar2 == (undefined8 *)0x0) {
      uVar5 = 2;
    }
    *puVar4 = uVar5;
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)*puVar2;
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined8 *)(puVar4 + 0x18) = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0xfffffffffffff000;
    *(undefined8 *)(puVar4 + 0x38) = 0xfffffffffffff000;
    *(undefined8 *)(puVar4 + 0x50) = 0xfffffffffffff000;
    *(undefined8 *)(puVar4 + 0x68) = 0xfffffffffffff000;
    *(undefined8 **)(puVar4 + 0x80) = puVar2;
    *(undefined1 **)(lVar3 + 8) = puVar4;
  }
  return;
}



/* Entry: 109d94ee4; end: 109d95197;  */

void FUN_109d94ee4(ulong *******param_1,ulong *******param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong *******pppppppuVar5;
  ulong *******pppppppuVar6;
  ulong *******pppppppuVar7;
  ulong ******ppppppuVar8;
  uint uVar9;
  int iVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong *******pppppppuVar14;
  long lVar15;
  undefined8 *******pppppppuVar16;
  code *pcVar17;
  undefined1 auStack_250 [8];
  ulong ******ppppppuStack_248;
  uint uStack_240;
  ulong *****apppppuStack_238 [24];
  long lStack_178;
  undefined8 ******ppppppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  ulong ******ppppppuStack_130;
  ulong ******ppppppuStack_128;
  uint uStack_120;
  ulong *****apppppuStack_118 [24];
  long lStack_58;
  
  puVar3 = auStack_140;
  pppppppuVar16 = (undefined8 *******)&stack0xfffffffffffffff0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar13 = param_1 + 2;
  uVar9 = *(uint *)pppppppuVar13;
  pppppppuVar6 = param_2;
  if (1 < uVar9) {
    pppppppuVar6 = param_1 + 3;
    if ((uVar9 & 1) == 0) {
      pppppppuVar11 = (ulong *******)param_1[3];
      pppppppuVar14 = pppppppuVar11 + (ulong)*(uint *)(param_1 + 4) * 3;
      pppppppuVar5 = pppppppuVar11;
      if (*(uint *)(param_1 + 4) != 0) goto LAB_109d94f58;
      uVar9 = 0;
      pppppppuVar6 = pppppppuVar11;
LAB_109d94f84:
      param_1 = pppppppuVar6 + (ulong)uVar9 * 3;
    }
    else {
      pppppppuVar14 = param_1 + 0xf;
      pppppppuVar5 = pppppppuVar6;
LAB_109d94f58:
      do {
        pppppppuVar11 = pppppppuVar5;
        if (((ulong)*pppppppuVar5 | 0x1000) != 0xfffffffffffff000) break;
        pppppppuVar5 = pppppppuVar5 + 3;
        pppppppuVar11 = pppppppuVar14;
      } while (pppppppuVar5 != pppppppuVar14);
      if ((uVar9 & 1) == 0) {
        pppppppuVar6 = (ulong *******)param_1[3];
        uVar9 = *(uint *)(param_1 + 4);
        goto LAB_109d94f84;
      }
      param_1 = param_1 + 0xf;
      uVar9 = 4;
    }
    FUN_109d989c4(&ppppppuStack_128,pppppppuVar11,pppppppuVar14,param_1,
                  pppppppuVar6 + (ulong)uVar9 * 3);
    pppppppuVar6 = (ulong *******)(ppppppuStack_128 + (ulong)uStack_120 * 3);
    lVar15 = 0;
    if (uStack_120 != 0) {
      lVar15 = LZCOUNT((ulong)uStack_120) * -2 + 0x7e;
    }
    param_1 = (ulong *******)ppppppuStack_128;
    FUN_109d98aec(ppppppuStack_128,pppppppuVar6,lVar15,1);
    pppppppuVar14 = (ulong *******)ppppppuStack_128;
    if (uStack_120 != 0) {
      lVar15 = (ulong)uStack_120 * 0x18;
      pppppppuVar5 = (ulong *******)ppppppuStack_128;
      do {
        ppppppuStack_130 = *pppppppuVar5;
        pppppppuVar6 = &ppppppuStack_130;
        param_1 = pppppppuVar13;
        FUN_109d9887c(pppppppuVar13,pppppppuVar6,auStack_138);
        if (((ulong)param_1 & 1) != 0) {
          ppppppuVar8 = pppppppuVar5[1];
          if (ppppppuVar8 < (ulong ******)0x4) {
            ppppppuVar8 = *pppppppuVar5;
            *ppppppuVar8 = (ulong *****)param_2;
            if (param_2 != (ulong *******)0x0) {
              FUN_109d9464c(ppppppuVar8,param_2,2);
            }
            param_1 = pppppppuVar13;
            pppppppuVar6 = pppppppuVar5;
            func_0x000109d948a0();
          }
          else {
            param_1 = (ulong *******)((ulong)ppppppuVar8 & 0xfffffffffffffffc);
            if (((uint)ppppppuVar8 >> 1 & 1) == 0) {
              pppppppuVar14 = (ulong *******)**param_1;
              pppppppuVar6 = pppppppuVar14;
              FUN_109d945d4(pppppppuVar14,param_2);
              ppppppuVar8 = *pppppppuVar14;
              ppppppuStack_130 = (ulong ******)pppppppuVar6;
              FUN_109d944fc(ppppppuVar8 + 0x33,param_1 + 3);
              if (param_1[3] != (ulong ******)0x0) {
                FUN_109d94730(param_1 + 3);
              }
              param_1[3] = (ulong ******)0x0;
              pppppppuVar14 = (ulong *******)(ppppppuVar8 + 0x33);
              FUN_109d981d0(pppppppuVar14,&ppppppuStack_130);
              pppppppuVar6 = (ulong *******)pppppppuVar14[1];
              if (pppppppuVar6 == (ulong *******)0x0) {
                param_1[3] = ppppppuStack_130;
                pppppppuVar11 = pppppppuVar14;
                pppppppuVar6 = (ulong *******)ppppppuStack_130;
                if ((ulong *******)ppppppuStack_130 != (ulong *******)0x0) {
                  pppppppuVar11 = param_1 + 3;
                  FUN_109d9464c(pppppppuVar11,ppppppuStack_130,param_1);
                }
                pppppppuVar14[1] = (ulong ******)param_1;
                param_1 = pppppppuVar11;
              }
              else {
                FUN_109da2b44(param_1,pppppppuVar6,1);
                FUN_109d944ac();
                __ZdlPv();
              }
            }
            else {
              pppppppuVar6 = (ulong *******)*pppppppuVar5;
              if (*(char *)param_1 == '!') {
                FUN_109d739e4(param_1,pppppppuVar6,param_2);
              }
              else {
                FUN_109d94bb4(param_1,pppppppuVar6,param_2);
              }
            }
          }
        }
        pppppppuVar5 = pppppppuVar5 + 3;
        lVar15 = lVar15 + -0x18;
        pppppppuVar14 = (ulong *******)ppppppuStack_128;
      } while (lVar15 != 0);
    }
    if (pppppppuVar14 != (ulong *******)apppppuStack_118) {
      _free();
      param_1 = pppppppuVar14;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pppppppuVar14 = param_1;
  __Unwind_Resume();
  pcStack_148 = FUN_109d95198;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppuVar5 = pppppppuVar14 + 2;
  uVar9 = *(uint *)pppppppuVar5;
  ppppppuStack_150 = pppppppuVar16;
  if (uVar9 < 2) {
LAB_109d95344:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
      return;
    }
LAB_109d95370:
    ___stack_chk_fail();
    if (ppppppuStack_248 != apppppuStack_238) {
      _free();
    }
    pcVar17 = FUN_109d953a4;
    pppppppuVar5 = pppppppuVar14;
    __Unwind_Resume();
    puVar3 = auStack_250;
    param_1 = pppppppuVar14;
    pppppppuVar16 = &ppppppuStack_150;
  }
  else {
    if (((ulong)pppppppuVar6 & 1) != 0) {
      pppppppuVar6 = pppppppuVar14 + 3;
      if ((uVar9 & 1) == 0) {
        pppppppuVar12 = (ulong *******)pppppppuVar14[3];
        pppppppuVar11 = pppppppuVar12 + (ulong)*(uint *)(pppppppuVar14 + 4) * 3;
        pppppppuVar7 = pppppppuVar12;
        if (*(uint *)(pppppppuVar14 + 4) != 0) goto LAB_109d95234;
        uVar9 = 0;
        pppppppuVar6 = pppppppuVar12;
LAB_109d95260:
        pppppppuVar14 = pppppppuVar6 + (ulong)uVar9 * 3;
      }
      else {
        pppppppuVar11 = pppppppuVar14 + 0xf;
        pppppppuVar7 = pppppppuVar6;
LAB_109d95234:
        do {
          pppppppuVar12 = pppppppuVar7;
          if (((ulong)*pppppppuVar7 | 0x1000) != 0xfffffffffffff000) break;
          pppppppuVar7 = pppppppuVar7 + 3;
          pppppppuVar12 = pppppppuVar11;
        } while (pppppppuVar7 != pppppppuVar11);
        if ((uVar9 & 1) == 0) {
          pppppppuVar6 = (ulong *******)pppppppuVar14[3];
          uVar9 = *(uint *)(pppppppuVar14 + 4);
          goto LAB_109d95260;
        }
        pppppppuVar14 = pppppppuVar14 + 0xf;
        uVar9 = 4;
      }
      FUN_109d989c4(&ppppppuStack_248,pppppppuVar12,pppppppuVar11,pppppppuVar14,
                    pppppppuVar6 + (ulong)uVar9 * 3);
      lVar15 = 0;
      if (uStack_240 != 0) {
        lVar15 = LZCOUNT((ulong)uStack_240) * -2 + 0x7e;
      }
      FUN_109d99d6c(ppppppuStack_248,ppppppuStack_248 + (ulong)uStack_240 * 3,lVar15,1);
      FUN_109d953a4(pppppppuVar5);
      if (uStack_240 != 0) {
        lVar15 = (ulong)uStack_240 * 0x18;
        pppppppuVar6 = (ulong *******)(ppppppuStack_248 + 1);
        do {
          pppppppuVar13 = pppppppuVar6 + 3;
          ppppppuVar8 = *pppppppuVar6;
          if (((((ulong ******)0x3 < ppppppuVar8 && ((ulong)ppppppuVar8 & 2) != 0) &&
               (pbVar4 = (byte *)((ulong)ppppppuVar8 & 0xfffffffffffffffc), *pbVar4 - 4 < 0x20)) &&
              ((pbVar4[1] & 0x7f) != 2)) &&
             ((*(int *)(pbVar4 + -8) != 0 &&
              (iVar10 = *(int *)(pbVar4 + -8) + -1, *(int *)(pbVar4 + -8) = iVar10, iVar10 == 0))))
          {
            FUN_109d95b24();
          }
          lVar15 = lVar15 + -0x18;
          pppppppuVar6 = pppppppuVar13;
        } while (lVar15 != 0);
      }
      pppppppuVar14 = (ulong *******)ppppppuStack_248;
      if (ppppppuStack_248 != apppppuStack_238) {
        _free();
      }
      goto LAB_109d95344;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) goto LAB_109d95370;
    pcVar17 = FUN_109d95198;
  }
  uVar9 = *(uint *)pppppppuVar5;
  if ((uVar9 < 2) && (*(uint *)((long)pppppppuVar5 + 4) == 0)) {
    return;
  }
  if ((uVar9 & 1) == 0) {
    uVar2 = *(uint *)(pppppppuVar5 + 2);
    if ((uVar9 * 2 < uVar2) && (0x40 < uVar2)) {
      *(ulong ********)(puVar3 + -0x20) = pppppppuVar13;
      *(ulong ********)(puVar3 + -0x18) = param_1;
      *(undefined8 ********)(puVar3 + -0x10) = pppppppuVar16;
      *(code **)(puVar3 + -8) = pcVar17;
      uVar2 = *(uint *)pppppppuVar5;
      iVar10 = (int)LZCOUNT((uVar2 >> 1) - 1);
      uVar9 = 0x40;
      if (2 < iVar10 - 0x1cU) {
        uVar9 = 1 << (ulong)(0x21U - iVar10 & 0x1f);
      }
      uVar1 = 0;
      if (1 < uVar2) {
        uVar1 = uVar9;
      }
      ppppppuVar8 = (ulong ******)(ulong)uVar1;
      if (((uVar2 & 1) != 0) && (uVar1 < 5)) {
        pppppppuVar6 = pppppppuVar5 + 1;
        pppppppuVar13 = pppppppuVar5 + 0xd;
        *pppppppuVar5 = (ulong ******)0x1;
LAB_109d99cb0:
        do {
          pppppppuVar14 = pppppppuVar6 + 3;
          *pppppppuVar6 = (ulong ******)0xfffffffffffff000;
          pppppppuVar6 = pppppppuVar14;
        } while (pppppppuVar14 != pppppppuVar13);
        return;
      }
      if ((uVar2 & 1) == 0) {
        if (uVar1 == *(uint *)(pppppppuVar5 + 2)) {
          *pppppppuVar5 = (ulong ******)0x0;
          if (uVar1 == 0) {
            return;
          }
          pppppppuVar6 = (ulong *******)pppppppuVar5[1];
          pppppppuVar13 = pppppppuVar6 + (long)ppppppuVar8 * 3;
          goto LAB_109d99cb0;
        }
        __ZdlPvSt11align_val_t(pppppppuVar5[1],8);
      }
      if (uVar1 < 5) {
        *pppppppuVar5 = (ulong ******)0x1;
      }
      else {
        *(uint *)pppppppuVar5 = *(uint *)pppppppuVar5 & 0xfffffffe;
        pppppppuVar6 = (ulong *******)((long)ppppppuVar8 * 0x18);
        __ZnwmSt11align_val_t(pppppppuVar6,8);
        pppppppuVar5[1] = (ulong ******)pppppppuVar6;
        pppppppuVar5[2] = ppppppuVar8;
        uVar9 = *(uint *)pppppppuVar5;
        *(uint *)pppppppuVar5 = uVar9 & 1;
        *(uint *)((long)pppppppuVar5 + 4) = 0;
        if ((uVar9 & 1) == 0) {
          pppppppuVar5 = pppppppuVar6 + (long)ppppppuVar8 * 3;
          goto LAB_109d99d54;
        }
      }
      pppppppuVar6 = pppppppuVar5 + 1;
      pppppppuVar5 = pppppppuVar5 + 0xd;
LAB_109d99d54:
      do {
        pppppppuVar13 = pppppppuVar6 + 3;
        *pppppppuVar6 = (ulong ******)0xfffffffffffff000;
        pppppppuVar6 = pppppppuVar13;
      } while (pppppppuVar13 != pppppppuVar5);
      return;
    }
    if (uVar2 == 0) {
      uVar9 = 0;
      goto LAB_109d95408;
    }
    pppppppuVar6 = (ulong *******)pppppppuVar5[1];
    pppppppuVar13 = pppppppuVar6 + (ulong)uVar2 * 3;
  }
  else {
    pppppppuVar6 = pppppppuVar5 + 1;
    pppppppuVar13 = pppppppuVar5 + 0xd;
  }
  do {
    pppppppuVar14 = pppppppuVar6 + 3;
    *pppppppuVar6 = (ulong ******)0xfffffffffffff000;
    pppppppuVar6 = pppppppuVar14;
  } while (pppppppuVar14 != pppppppuVar13);
  uVar9 = *(uint *)pppppppuVar5 & 1;
LAB_109d95408:
  *(uint *)pppppppuVar5 = uVar9;
  *(uint *)((long)pppppppuVar5 + 4) = 0;
  return;
}



/* Entry: 109d95198; end: 109d953a3;  */

void FUN_109d95198(uint *param_1,ulong param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  ulong *puVar13;
  ulong *puVar14;
  uint *unaff_x19;
  long lVar15;
  uint *puVar16;
  ulong *unaff_x20;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined1 auStack_110 [8];
  uint *puStack_108;
  uint uStack_100;
  uint auStack_f8 [48];
  long lStack_38;
  
  puVar1 = &stack0xfffffffffffffff0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_1 + 4;
  uVar11 = *puVar5;
  if (uVar11 < 2) {
LAB_109d95344:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return;
    }
LAB_109d95370:
    ___stack_chk_fail();
    if (puStack_108 != auStack_f8) {
      _free();
    }
    unaff_x30 = FUN_109d953a4;
    puVar5 = param_1;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)auStack_110;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  else {
    if ((param_2 & 1) != 0) {
      puVar14 = (ulong *)(param_1 + 6);
      if ((uVar11 & 1) == 0) {
        puVar13 = *(ulong **)(param_1 + 6);
        puVar7 = puVar13 + (ulong)param_1[8] * 3;
        puVar6 = puVar13;
        if (param_1[8] != 0) goto LAB_109d95234;
        uVar11 = 0;
        puVar14 = puVar13;
LAB_109d95260:
        puVar6 = puVar14 + (ulong)uVar11 * 3;
      }
      else {
        puVar7 = (ulong *)(param_1 + 0x1e);
        puVar6 = puVar14;
LAB_109d95234:
        do {
          puVar13 = puVar6;
          if ((*puVar6 | 0x1000) != 0xfffffffffffff000) break;
          puVar6 = puVar6 + 3;
          puVar13 = puVar7;
        } while (puVar6 != puVar7);
        if ((uVar11 & 1) == 0) {
          puVar14 = *(ulong **)(param_1 + 6);
          uVar11 = param_1[8];
          goto LAB_109d95260;
        }
        puVar6 = (ulong *)(param_1 + 0x1e);
        uVar11 = 4;
      }
      FUN_109d989c4(&puStack_108,puVar13,puVar7,puVar6,puVar14 + (ulong)uVar11 * 3);
      lVar15 = 0;
      if (uStack_100 != 0) {
        lVar15 = LZCOUNT((ulong)uStack_100) * -2 + 0x7e;
      }
      FUN_109d99d6c(puStack_108,puStack_108 + (ulong)uStack_100 * 6,lVar15,1);
      FUN_109d953a4(puVar5);
      if (uStack_100 != 0) {
        lVar15 = (ulong)uStack_100 * 0x18;
        puVar14 = (ulong *)(puStack_108 + 2);
        do {
          unaff_x20 = puVar14 + 3;
          uVar8 = *puVar14;
          if ((((3 < uVar8 && (uVar8 & 2) != 0) &&
               (pbVar4 = (byte *)(uVar8 & 0xfffffffffffffffc), *pbVar4 - 4 < 0x20)) &&
              ((pbVar4[1] & 0x7f) != 2)) &&
             ((*(int *)(pbVar4 + -8) != 0 &&
              (iVar12 = *(int *)(pbVar4 + -8) + -1, *(int *)(pbVar4 + -8) = iVar12, iVar12 == 0))))
          {
            FUN_109d95b24();
          }
          lVar15 = lVar15 + -0x18;
          puVar14 = unaff_x20;
        } while (lVar15 != 0);
      }
      param_1 = puStack_108;
      if (puStack_108 != auStack_f8) {
        _free();
      }
      goto LAB_109d95344;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) goto LAB_109d95370;
  }
  uVar11 = *puVar5;
  if ((uVar11 < 2) && (puVar5[1] == 0)) {
    return;
  }
  if ((uVar11 & 1) == 0) {
    uVar3 = puVar5[4];
    if ((uVar11 * 2 < uVar3) && (0x40 < uVar3)) {
      *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
      *(uint **)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(code **)((long)register0x00000008 + -8) = unaff_x30;
      uVar3 = *puVar5;
      iVar12 = (int)LZCOUNT((uVar3 >> 1) - 1);
      uVar11 = 0x40;
      if (2 < iVar12 - 0x1cU) {
        uVar11 = 1 << (ulong)(0x21U - iVar12 & 0x1f);
      }
      uVar2 = 0;
      if (1 < uVar3) {
        uVar2 = uVar11;
      }
      uVar8 = (ulong)uVar2;
      if (((uVar3 & 1) != 0) && (uVar2 < 5)) {
        puVar10 = puVar5 + 2;
        puVar16 = puVar5 + 0x1a;
        puVar5[0] = 1;
        puVar5[1] = 0;
LAB_109d99cb0:
        do {
          puVar5 = puVar10 + 6;
          puVar10[0] = 0xfffff000;
          puVar10[1] = 0xffffffff;
          puVar10 = puVar5;
        } while (puVar5 != puVar16);
        return;
      }
      if ((uVar3 & 1) == 0) {
        if (uVar2 == puVar5[4]) {
          puVar5[0] = 0;
          puVar5[1] = 0;
          if (uVar2 == 0) {
            return;
          }
          puVar10 = *(uint **)(puVar5 + 2);
          puVar16 = puVar10 + uVar8 * 6;
          goto LAB_109d99cb0;
        }
        __ZdlPvSt11align_val_t(*(undefined8 *)(puVar5 + 2),8);
      }
      if (uVar2 < 5) {
        puVar5[0] = 1;
        puVar5[1] = 0;
      }
      else {
        *puVar5 = *puVar5 & 0xfffffffe;
        puVar10 = (uint *)(uVar8 * 0x18);
        __ZnwmSt11align_val_t(puVar10,8);
        *(uint **)(puVar5 + 2) = puVar10;
        *(ulong *)(puVar5 + 4) = uVar8;
        uVar11 = *puVar5;
        *puVar5 = uVar11 & 1;
        puVar5[1] = 0;
        if ((uVar11 & 1) == 0) {
          puVar5 = puVar10 + uVar8 * 6;
          goto LAB_109d99d54;
        }
      }
      puVar10 = puVar5 + 2;
      puVar5 = puVar5 + 0x1a;
LAB_109d99d54:
      do {
        puVar16 = puVar10 + 6;
        puVar10[0] = 0xfffff000;
        puVar10[1] = 0xffffffff;
        puVar10 = puVar16;
      } while (puVar16 != puVar5);
      return;
    }
    if (uVar3 == 0) {
      uVar11 = 0;
      goto LAB_109d95408;
    }
    puVar10 = *(uint **)(puVar5 + 2);
    puVar16 = puVar10 + (ulong)uVar3 * 6;
  }
  else {
    puVar10 = puVar5 + 2;
    puVar16 = puVar5 + 0x1a;
  }
  do {
    puVar9 = puVar10 + 6;
    puVar10[0] = 0xfffff000;
    puVar10[1] = 0xffffffff;
    puVar10 = puVar9;
  } while (puVar9 != puVar16);
  uVar11 = *puVar5 & 1;
LAB_109d95408:
  *puVar5 = uVar11;
  puVar5[1] = 0;
  return;
}



/* Entry: 109d953a4; end: 109d95417;  */

void FUN_109d953a4(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  
  uVar3 = *param_1;
  if ((uVar3 < 2) && (param_1[1] == 0)) {
    return;
  }
  if ((uVar3 & 1) == 0) {
    uVar2 = param_1[4];
    if ((uVar3 * 2 < uVar2) && (0x40 < uVar2)) {
      uVar2 = *param_1;
      iVar6 = (int)LZCOUNT((uVar2 >> 1) - 1);
      uVar3 = 0x40;
      if (2 < iVar6 - 0x1cU) {
        uVar3 = 1 << (ulong)(0x21U - iVar6 & 0x1f);
      }
      uVar1 = 0;
      if (1 < uVar2) {
        uVar1 = uVar3;
      }
      uVar8 = (ulong)uVar1;
      if (((uVar2 & 1) != 0) && (uVar1 < 5)) {
        puVar5 = param_1 + 2;
        puVar7 = param_1 + 0x1a;
        param_1[0] = 1;
        param_1[1] = 0;
LAB_109d99cb0:
        do {
          puVar4 = puVar5 + 6;
          puVar5[0] = 0xfffff000;
          puVar5[1] = 0xffffffff;
          puVar5 = puVar4;
        } while (puVar4 != puVar7);
        return;
      }
      if ((uVar2 & 1) == 0) {
        if (uVar1 == param_1[4]) {
          param_1[0] = 0;
          param_1[1] = 0;
          if (uVar1 == 0) {
            return;
          }
          puVar5 = *(uint **)(param_1 + 2);
          puVar7 = puVar5 + uVar8 * 6;
          goto LAB_109d99cb0;
        }
        __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 2),8);
      }
      if (uVar1 < 5) {
        param_1[0] = 1;
        param_1[1] = 0;
      }
      else {
        *param_1 = *param_1 & 0xfffffffe;
        puVar5 = (uint *)(uVar8 * 0x18);
        __ZnwmSt11align_val_t(puVar5,8);
        *(uint **)(param_1 + 2) = puVar5;
        *(ulong *)(param_1 + 4) = uVar8;
        uVar3 = *param_1;
        *param_1 = uVar3 & 1;
        param_1[1] = 0;
        if ((uVar3 & 1) == 0) {
          param_1 = puVar5 + uVar8 * 6;
          goto LAB_109d99d54;
        }
      }
      puVar5 = param_1 + 2;
      param_1 = param_1 + 0x1a;
LAB_109d99d54:
      do {
        puVar7 = puVar5 + 6;
        puVar5[0] = 0xfffff000;
        puVar5[1] = 0xffffffff;
        puVar5 = puVar7;
      } while (puVar7 != param_1);
      return;
    }
    if (uVar2 == 0) {
      uVar3 = 0;
      goto LAB_109d95408;
    }
    puVar5 = *(uint **)(param_1 + 2);
    puVar7 = puVar5 + (ulong)uVar2 * 6;
  }
  else {
    puVar5 = param_1 + 2;
    puVar7 = param_1 + 0x1a;
  }
  do {
    puVar4 = puVar5 + 6;
    puVar5[0] = 0xfffff000;
    puVar5[1] = 0xffffffff;
    puVar5 = puVar4;
  } while (puVar4 != puVar7);
  uVar3 = *param_1 & 1;
LAB_109d95408:
  *param_1 = uVar3;
  param_1[1] = 0;
  return;
}



/* Entry: 109d95418; end: 109d9551b;  */

ulong FUN_109d95418(ulong *param_1)

{
  ulong *puVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (((uint)uVar2 >> 2 & 1) == 0) {
    puVar1 = (ulong *)0x78;
    __Znwm();
    *puVar1 = uVar2 & 0xfffffffffffffff8;
    puVar1[1] = 0;
    puVar1[2] = 1;
    puVar1[3] = 0xfffffffffffff000;
    puVar1[6] = 0xfffffffffffff000;
    puVar1[9] = 0xfffffffffffff000;
    puVar1[0xc] = 0xfffffffffffff000;
    uVar2 = (ulong)puVar1 | 4;
    *param_1 = uVar2;
  }
  return uVar2 & 0xfffffffffffffff8;
}



/* Entry: 109d9551c; end: 109d95677;  */

void FUN_109d9551c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  lVar4 = **(long **)*param_1;
  lVar1 = lVar4 + 0x180;
  puStack_48 = param_2;
  puStack_40 = param_1;
  func_0x000109d9892c(lVar1,&puStack_40,&puStack_38);
  if ((int)lVar1 == 0 ||
      puStack_38 == (undefined8 *)(*(long *)(lVar4 + 0x180) + (ulong)*(uint *)(lVar4 + 400) * 0x10))
  {
    return;
  }
  *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xf7ffffff;
  pcVar3 = (char *)puStack_38[1];
  *puStack_38 = 0xffffffffffffe000;
  *(ulong *)(lVar4 + 0x188) =
       CONCAT44((int)((ulong)*(undefined8 *)(lVar4 + 0x188) >> 0x20) + 1,
                (int)*(undefined8 *)(lVar4 + 0x188) + -1);
  if (*pcVar3 == '\x02') {
    if (*(byte *)(param_2 + 2) < 0x15) {
      FUN_109d94e24(param_2);
      goto LAB_109d95644;
    }
    puVar2 = param_1;
    FUN_109d95678();
    if ((puVar2 != (undefined8 *)0x0) &&
       (puVar2 = param_2, FUN_109d95678(), puVar2 != (undefined8 *)0x0)) {
      FUN_109d95678();
      FUN_109d95678();
      if (param_1 != param_2) goto LAB_109d955f0;
    }
  }
  else if (0x14 < *(byte *)(param_2 + 2)) {
LAB_109d955f0:
    param_2 = (undefined8 *)0x0;
    goto LAB_109d95644;
  }
  lVar4 = lVar4 + 0x180;
  func_0x000109d9b1a8(lVar4,&puStack_48);
  param_2 = *(undefined8 **)(lVar4 + 8);
  if (param_2 == (undefined8 *)0x0) {
    *(uint *)((long)puStack_48 + 0x14) = *(uint *)((long)puStack_48 + 0x14) | 0x8000000;
    *(undefined8 **)(pcVar3 + 0x80) = puStack_48;
    *(char **)(lVar4 + 8) = pcVar3;
    return;
  }
LAB_109d95644:
  FUN_109d94ee4(pcVar3 + 8,param_2);
  if ((pcVar3[0x18] & 1U) == 0) {
    __ZdlPvSt11align_val_t(*(undefined8 *)(pcVar3 + 0x20),8);
  }
  __ZdlPv(pcVar3);
  return;
}



/* Entry: 109d95678; end: 109d956b3;  */

undefined8 FUN_109d95678(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x10) != '\x15')) {
    if (*(long *)(param_1 + 0x28) == 0) {
      return 0;
    }
    puStack_28 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 0x38);
  }
  else {
    puStack_28 = *(undefined8 **)(param_1 + 0x18);
  }
  if (puStack_28 == (undefined8 *)0x0) {
    return 0;
  }
  if ((*(byte *)((long)puStack_28 + 0x17) >> 5 & 1) == 0) {
    return 0;
  }
  lVar2 = **(long **)*puStack_28 + 0x990;
  FUN_109d9c7c0(lVar2,&puStack_28);
  if (*(uint *)(lVar2 + 0x10) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar2 + 8) + 8);
    lVar2 = (ulong)*(uint *)(lVar2 + 0x10) << 4;
    do {
      if (*(int *)(puVar1 + -1) == 0) {
        return *puVar1;
      }
      puVar1 = puVar1 + 2;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  return 0;
}



/* Entry: 109d956b4; end: 109d957b3;  */

undefined1  [16] FUN_109d956b4(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  plVar1 = param_1;
  func_0x000107c2b020();
  plVar3 = (long *)(*param_1 + ((ulong)plVar1 & 0xffffffff) * 8);
  lVar5 = *plVar3;
  if (lVar5 == -8) {
    *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  }
  else if (lVar5 != 0) {
    while ((lVar5 == 0 || (lVar5 == -8))) {
      plVar3 = plVar3 + 1;
      lVar5 = *plVar3;
    }
    uVar4 = 0;
    goto LAB_109d95798;
  }
  plVar2 = param_1 + 3;
  FUN_109d34148(plVar2,param_3 + 0x19,3);
  if (param_3 != 0) {
    _memcpy(plVar2 + 3,param_2,param_3);
  }
  *(undefined1 *)((long)(plVar2 + 3) + param_3) = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *plVar2 = param_3;
  *plVar3 = (long)plVar2;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  plVar3 = param_1;
  func_0x000107c2b028(param_1,plVar1);
  for (plVar3 = (long *)(*param_1 + ((ulong)plVar3 & 0xffffffff) * 8); *plVar3 == 0 || *plVar3 == -8
      ; plVar3 = plVar3 + 1) {
  }
  uVar4 = 1;
LAB_109d95798:
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 109d957b4; end: 109d95823;  */

long FUN_109d957b4(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_2;
  if (param_2 < 3) {
    uVar2 = 2;
  }
  uVar3 = param_2;
  if ((int)param_3 != 0) {
    uVar3 = uVar2;
  }
  lVar1 = (uVar3 & 0xffffffff) * 8 + 0x10;
  if (0xf < param_2) {
    lVar1 = 0x20;
  }
  param_1 = lVar1 + param_1;
  __Znwm(param_1);
  FUN_109d959d0(param_1 + lVar1 + -0x10,param_2,param_3);
  return param_1 + lVar1;
}



/* Entry: 109d95824; end: 109d95907;  */

undefined1 *
FUN_109d95824(undefined1 *param_1,undefined8 param_2,undefined1 param_3,byte param_4,long param_5,
             long param_6,undefined8 *param_7,long param_8)

{
  ulong uVar1;
  
  *param_1 = param_3;
  param_1[1] = param_4 & 0x7f;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = param_2;
  if (param_6 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    param_6 = param_6 << 3;
    do {
      FUN_109d95908(param_1,uVar1,*(undefined8 *)(param_5 + uVar1 * 8));
      uVar1 = uVar1 + 1;
      param_6 = param_6 + -8;
    } while (param_6 != 0);
  }
  if (param_8 != 0) {
    param_8 = param_8 << 3;
    do {
      FUN_109d95908(param_1,uVar1,*param_7);
      uVar1 = (ulong)((int)uVar1 + 1);
      param_8 = param_8 + -8;
      param_7 = param_7 + 1;
    } while (param_8 != 0);
  }
  if ((param_1[1] & 0x7f) == 0) {
    func_0x000109d95944(param_1);
  }
  return param_1;
}



/* Entry: 109d95908; end: 109d959cf;  */

ulong * FUN_109d95908(ulong param_1,ulong param_2,char *param_3)

{
  char *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  uVar4 = *(ulong *)(param_1 - 0x10);
  if (((uint)uVar4 >> 1 & 1) == 0) {
    puVar3 = (ulong *)(param_1 - 0x10) + -(uVar4 >> 2 & 0xf);
  }
  else {
    puVar3 = *(ulong **)(param_1 - 0x20);
  }
  puVar3 = puVar3 + (param_2 & 0xffffffff);
  if ((*(byte *)(param_1 + 1) & 0x7f) != 0) {
    param_1 = 0;
  }
  puVar2 = puVar3;
  if (*puVar3 != 0) {
    FUN_109d94730(puVar3);
  }
  *puVar3 = (ulong)param_3;
  if (param_3 != (char *)0x0) {
    pcVar1 = param_3;
    FUN_109d946e0();
    if (pcVar1 == (char *)0x0) {
      if (*param_3 != '\x03') {
        return (ulong *)0x0;
      }
      *(ulong **)(param_3 + 8) = puVar3;
    }
    else {
      uStack_50 = *(undefined8 *)(pcVar1 + 8);
      puStack_60 = puVar3;
      uStack_58 = param_1 | 2;
      func_0x000109d987b4(auStack_48,pcVar1 + 0x10,&puStack_60,&uStack_58);
      *(long *)(pcVar1 + 8) = *(long *)(pcVar1 + 8) + 1;
    }
    return (ulong *)0x1;
  }
  return puVar2;
}



/* Entry: 109d959d0; end: 109d95ac3;  */

ulong * FUN_109d959d0(ulong *param_1,ulong param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_2;
  if (param_2 < 3) {
    uVar1 = 2;
  }
  if (param_3 == 0) {
    uVar1 = param_2;
  }
  uVar2 = (uVar1 & 0xf) << 2;
  if (0xf < param_2) {
    uVar2 = 8;
  }
  if (param_3 != 0) {
    uVar2 = uVar2 + 1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (param_2 < 0x10) {
    *param_1 = uVar2 | *param_1 & 0xfffffffffffffc00 | param_2 << 6;
    if (uVar1 != 0) {
      _bzero(param_1 + -uVar1,uVar1 << 3);
    }
  }
  else {
    param_1[-1] = 0;
    *param_1 = uVar2 | *param_1 & 0xfffffffffffffc00 | 2;
    param_1[-2] = (ulong)param_1;
    func_0x000109d9b46c(param_1 + -2);
  }
  return param_1;
}



/* Entry: 109d95ac4; end: 109d95b23;  */

long * FUN_109d95ac4(long *param_1,char *param_2,ulong param_3)

{
  char *pcVar1;
  long *plVar2;
  long *plStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  plVar2 = param_1;
  if (*param_1 != 0) {
    FUN_109d94730(param_1);
  }
  *param_1 = (long)param_2;
  if (param_2 != (char *)0x0) {
    pcVar1 = param_2;
    FUN_109d946e0();
    if (pcVar1 == (char *)0x0) {
      if (*param_2 != '\x03') {
        return (long *)0x0;
      }
      *(long **)(param_2 + 8) = param_1;
    }
    else {
      uStack_50 = *(undefined8 *)(pcVar1 + 8);
      plStack_60 = param_1;
      uStack_58 = param_3 | 2;
      func_0x000109d987b4(auStack_48,pcVar1 + 0x10,&plStack_60,&uStack_58);
      *(long *)(pcVar1 + 8) = *(long *)(pcVar1 + 8) + 1;
    }
    return (long *)0x1;
  }
  return plVar2;
}



/* Entry: 109d95b24; end: 109d95bab;  */

void FUN_109d95b24(long param_1)

{
  ulong *puVar1;
  
  if (((uint)*(ulong *)(param_1 + 8) >> 2 & 1) == 0) {
    return;
  }
  puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffff8);
  *(ulong *)(param_1 + 8) = *puVar1 & 0xfffffffffffffffb;
  FUN_109d95198(puVar1,1);
  if ((puVar1[2] & 1) == 0) {
    __ZdlPvSt11align_val_t(puVar1[3],8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 109d95bac; end: 109d95c1b;  */

void FUN_109d95bac(byte *param_1)

{
  ulong *puVar1;
  byte *pbStack_18;
  
  param_1[1] = param_1[1] & 0x80 | 1;
  if ((0x1a < *param_1 - 9) && (2 < *param_1 - 5)) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  puVar1 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffff8);
  if (((uint)*(ulong *)(param_1 + 8) >> 2 & 1) != 0) {
    puVar1 = (ulong *)*puVar1;
  }
  pbStack_18 = param_1;
  FUN_109d97614(*puVar1 + 0x4a0,&pbStack_18);
  return;
}



/* Entry: 109d95c1c; end: 109d96a8b;  */

void FUN_109d95c1c(byte *param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x000109d95c44 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e059468 + (ulong)(*param_1 - 4) * 2) * 4 + 0x109d95c50))();
  return;
}



/* Entry: 109d96a8c; end: 109d96b43;  */

void FUN_109d96a8c(byte *param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x000109d96ab0 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10e0594a8)[*param_1 - 4] * 4 + 0x109d96abc))();
  return;
}



/* Entry: 109d96b44; end: 109d96c07;  */

void FUN_109d96b44(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + -0x10);
  if ((uVar1 >> 1 & 1) == 0) {
    uVar1 = uVar1 >> 6 & 0xf;
  }
  else {
    uVar1 = *(uint *)(param_1 + -0x18);
  }
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      FUN_109d95908(param_1,uVar2,0);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (((uint)*(ulong *)(param_1 + 8) >> 2 & 1) == 0) {
    return;
  }
  puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffff8);
  if (1 < (uint)puVar3[2]) {
    FUN_109d953a4();
    puVar3 = (ulong *)(*(ulong *)(param_1 + 8) & (long)(*(ulong *)(param_1 + 8) << 0x3d) >> 0x3f &
                      0xfffffffffffffff8);
  }
  *(ulong *)(param_1 + 8) = *puVar3 & 0xfffffffffffffffb;
  if ((puVar3[2] & 1) == 0) {
    __ZdlPvSt11align_val_t(puVar3[3],8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar3);
  return;
}



/* Entry: 109d96c08; end: 109d974bf;  */

void FUN_109d96c08(byte *param_1)

{
                    /* WARNING: Could not emulate address calculation at 0x000109d96c34 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)*(ushort *)(&UNK_10e0594c8 + (ulong)(*param_1 - 4) * 2) * 4 + 0x109d96c40))
            (*(ulong *)(param_1 + 8) & 0xfffffffffffffff8);
  return;
}



/* Entry: 109d974c0; end: 109d975b3;  */

void FUN_109d974c0(long *param_1,long param_2,long param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  long *plStack_48;
  
  if ((int)param_4 == 0) {
    uStack_60 = 0;
    uStack_58 = 0;
    lStack_70 = param_2;
    lStack_68 = param_3;
    FUN_109d92e8c(param_2,param_2 + param_3 * 8);
    uStack_50 = (undefined4)param_2;
    lVar4 = *param_1;
    lVar2 = lVar4 + 0x1b0;
    FUN_109d9b9b8(lVar2,&lStack_70,&plStack_48);
    lVar1 = 0;
    if ((int)lVar2 != 0 &&
        plStack_48 != (long *)(*(long *)(lVar4 + 0x1b0) + (ulong)*(uint *)(lVar4 + 0x1c0) * 8)) {
      lVar1 = *plStack_48;
    }
    if (param_5 == 0) {
      return;
    }
    uVar3 = uStack_50;
    if (lVar1 != 0) {
      return;
    }
  }
  else {
    uVar3 = 0;
  }
  lVar2 = 0x10;
  FUN_109d957b4(0x10,param_3,param_4);
  FUN_109d95824();
  *(undefined4 *)(lVar2 + 4) = uVar3;
  FUN_109d975b4();
  return;
}



/* Entry: 109d975b4; end: 109d97613;  */

undefined8 FUN_109d975b4(undefined8 param_1,int param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined1 auStack_40 [31];
  undefined1 uStack_21;
  
  uStack_48 = param_1;
  if (param_2 == 1) {
    FUN_109d95bac(param_1);
  }
  else if (param_2 == 0) {
    FUN_109d9b6d8(auStack_40,param_3,&uStack_48,&uStack_21);
    param_1 = uStack_48;
  }
  return param_1;
}



/* Entry: 109d97614; end: 109d976d7;  */

ulong * FUN_109d97614(ulong *param_1,undefined8 *param_2,ulong *param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  byte *pbVar15;
  ulong *puStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined1 auStack_78 [8];
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
    puVar4 = param_1;
  }
  else {
    lVar12 = (long)puVar2 - *param_1;
    uVar11 = (lVar12 >> 3) + 1;
    if (uVar11 >> 0x3d != 0) {
      puVar4 = param_1;
      FUN_109d980f0();
      puVar6 = puVar4 + -2;
      uVar11 = *puVar6;
      if (((uint)uVar11 >> 1 & 1) == 0) {
        puVar9 = puVar6 + -(uVar11 >> 2 & 0xf);
      }
      else {
        puVar9 = (ulong *)puVar4[-4];
      }
      if ((ulong *)puVar9[(ulong)param_2 & 0xffffffff] == param_3) {
        return puVar4;
      }
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if ((*puVar4 & 0x7f00) == 0) {
        if (((uint)uVar11 >> 1 & 1) == 0) {
          puVar6 = puVar6 + -(uVar11 >> 2 & 0xf);
        }
        else {
          puVar6 = (ulong *)puVar4[-4];
        }
        pcStack_38 = FUN_109d976d8;
        puVar9 = puVar4 + -2;
        if (((uint)*puVar9 >> 1 & 1) == 0) {
          puVar5 = puVar9 + -(*puVar9 >> 2 & 0xf);
        }
        else {
          puVar5 = (ulong *)puVar4[-4];
        }
        pbVar15 = (byte *)((long)puVar6 + (((ulong)param_2 & 0xffffffff) * 8 - (long)puVar5));
        param_2 = (undefined8 *)((ulong)pbVar15 >> 3);
        if ((*puVar4 & 0x7f00) == 0) {
          FUN_109d96c08(puVar4);
          if (((uint)puVar4[-2] >> 1 & 1) == 0) {
            puVar6 = puVar9 + -(puVar4[-2] >> 2 & 0xf);
          }
          else {
            puVar6 = (ulong *)puVar4[-4];
          }
          pbVar15 = *(byte **)((long)puVar6 + ((ulong)pbVar15 & 0x7fffffff8));
          FUN_109d95908(puVar4,param_2,param_3);
          if ((param_3 == puVar4) ||
             (((param_3 == (ulong *)0x0 && (pbVar15 != (byte *)0x0)) && (*pbVar15 == 1)))) {
            if (((*puVar4 & 0x7f00) == 0x200) || ((int)puVar4[-1] != 0)) {
              *(undefined4 *)(puVar4 + -1) = 0;
              FUN_109d95b24(puVar4);
            }
          }
          else {
            puVar6 = puVar4;
            FUN_109d95c1c();
            bVar1 = *(byte *)((long)puVar4 + 1) & 0x7f;
            if (puVar6 == puVar4) {
              if ((bVar1 == 2) || ((int)puVar4[-1] != 0)) {
                if (((pbVar15 == (byte *)0x0) || (0x1f < *pbVar15 - 4)) ||
                   (((pbVar15[1] & 0x7f) != 2 && (*(int *)(pbVar15 + -8) == 0)))) {
                  if ((param_3 != (ulong *)0x0) &&
                     (((byte)*param_3 - 4 < 0x20 &&
                      (((*param_3 & 0x7f00) == 0x200 || ((int)param_3[-1] != 0)))))) {
                    *(int *)(puVar4 + -1) = (int)puVar4[-1] + 1;
                  }
                }
                else if ((((param_3 == (ulong *)0x0) || (0x1f < (byte)*param_3 - 4)) ||
                         (((*param_3 & 0x7f00) != 0x200 && ((int)param_3[-1] == 0)))) &&
                        ((bVar1 != 2 &&
                         (iVar3 = (int)puVar4[-1] + -1, *(int *)(puVar4 + -1) = iVar3, iVar3 == 0)))
                        ) {
                  if (((uint)puVar4[1] >> 2 & 1) == 0) {
                    return puVar4;
                  }
                  puVar6 = (ulong *)(puVar4[1] & 0xfffffffffffffff8);
                  puVar4[1] = *puVar6 & 0xfffffffffffffffb;
                  FUN_109d95198(puVar6,1);
                  if ((puVar6[2] & 1) == 0) {
                    __ZdlPvSt11align_val_t(puVar6[3],8);
                  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (*(code *)PTR___ZdlPv_110352258)(puVar6);
                  return puVar6;
                }
              }
              return puVar6;
            }
            if ((bVar1 == 2) || ((int)puVar4[-1] != 0)) {
              if (((uint)*puVar9 >> 1 & 1) == 0) {
                uVar14 = (uint)*puVar9 >> 6 & 0xf;
              }
              else {
                uVar14 = (uint)puVar4[-3];
              }
              if (uVar14 != 0) {
                uVar10 = 0;
                do {
                  FUN_109d95908(puVar4,uVar10,0);
                  uVar10 = uVar10 + 1;
                } while (uVar14 != uVar10);
              }
              if (((uint)puVar4[1] >> 2 & 1) != 0) {
                FUN_109d94ee4(puVar4[1] & 0xfffffffffffffff8,puVar6);
              }
                    /* WARNING: Could not emulate address calculation at 0x000109d96ab0 */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)((ulong)(byte)(&UNK_10e0594a8)[(byte)*puVar4 - 4] * 4 + 0x109d96abc))();
              return puVar4;
            }
          }
          *(byte *)((long)puVar4 + 1) = *(byte *)((long)puVar4 + 1) & 0x80 | 1;
          if ((0x1a < (byte)*puVar4 - 9) && (2 < (byte)*puVar4 - 5)) {
            pbVar15 = (byte *)((long)puVar4 + 4);
            pbVar15[0] = 0;
            pbVar15[1] = 0;
            pbVar15[2] = 0;
            pbVar15[3] = 0;
          }
          puVar6 = (ulong *)(puVar4[1] & 0xfffffffffffffff8);
          if (((uint)puVar4[1] >> 2 & 1) != 0) {
            puVar6 = (ulong *)*puVar6;
          }
          puVar6 = (ulong *)(*puVar6 + 0x4a0);
          puStack_48 = puVar4;
          FUN_109d97614(puVar6,&puStack_48);
          return puVar6;
        }
      }
      uVar11 = puVar4[-2];
      if (((uint)uVar11 >> 1 & 1) == 0) {
        puVar6 = puVar4 + -2 + -(uVar11 >> 2 & 0xf);
      }
      else {
        puVar6 = (ulong *)puVar4[-4];
      }
      puVar6 = puVar6 + ((ulong)param_2 & 0xffffffff);
      if ((*puVar4 & 0x7f00) != 0) {
        puVar4 = (ulong *)0x0;
      }
      pcStack_38 = FUN_109d976d8;
      puVar9 = puVar6;
      if (*puVar6 != 0) {
        FUN_109d94730(puVar6);
      }
      *puVar6 = (ulong)param_3;
      if (param_3 != (ulong *)0x0) {
        puVar9 = param_3;
        FUN_109d946e0();
        if (puVar9 == (ulong *)0x0) {
          if ((byte)*param_3 != 3) {
            return (ulong *)0x0;
          }
          param_3[1] = (ulong)puVar6;
        }
        else {
          uStack_80 = puVar9[1];
          puStack_90 = puVar6;
          uStack_88 = (ulong)puVar4 | 2;
          func_0x000109d987b4(auStack_78,puVar9 + 2,&puStack_90,&uStack_88);
          puVar9[1] = puVar9[1] + 1;
        }
        return (ulong *)0x1;
      }
      return puVar9;
    }
    uVar7 = (long)param_1[2] - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    puVar6 = param_1;
    FUN_109d98104();
    puVar2 = (undefined8 *)((long)puVar6 + lVar12);
    puVar13 = puVar2 + 1;
    *puVar2 = *param_2;
    uVar11 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(uVar11);
    puVar4 = (ulong *)*param_1;
    *param_1 = uVar11;
    param_1[1] = (ulong)puVar13;
    param_1[2] = (ulong)(puVar6 + uVar8);
    if (puVar4 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (ulong)puVar13;
  return puVar4;
}



/* Entry: 109d976d8; end: 109d97733;  */

ulong * FUN_109d976d8(ulong *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong *puStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined1 auStack_48 [8];
  
  puVar4 = param_1 + -2;
  uVar5 = *puVar4;
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar6 = puVar4 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar6 = (ulong *)param_1[-4];
  }
  if ((ulong *)puVar6[param_2 & 0xffffffff] == param_3) {
    return param_1;
  }
  if ((*param_1 & 0x7f00) == 0) {
    if (((uint)uVar5 >> 1 & 1) == 0) {
      puVar4 = puVar4 + -(uVar5 >> 2 & 0xf);
    }
    else {
      puVar4 = (ulong *)param_1[-4];
    }
    puVar6 = param_1 + -2;
    if (((uint)*puVar6 >> 1 & 1) == 0) {
      puVar3 = puVar6 + -(*puVar6 >> 2 & 0xf);
    }
    else {
      puVar3 = (ulong *)param_1[-4];
    }
    pbVar9 = (byte *)((long)puVar4 + ((param_2 & 0xffffffff) * 8 - (long)puVar3));
    param_2 = (ulong)pbVar9 >> 3;
    if ((*param_1 & 0x7f00) == 0) {
      FUN_109d96c08(param_1);
      if (((uint)param_1[-2] >> 1 & 1) == 0) {
        puVar4 = puVar6 + -(param_1[-2] >> 2 & 0xf);
      }
      else {
        puVar4 = (ulong *)param_1[-4];
      }
      pbVar9 = *(byte **)((long)puVar4 + ((ulong)pbVar9 & 0x7fffffff8));
      FUN_109d95908(param_1,param_2,param_3);
      if ((param_3 == param_1) ||
         (((param_3 == (ulong *)0x0 && (pbVar9 != (byte *)0x0)) && (*pbVar9 == 1)))) {
        if (((*param_1 & 0x7f00) == 0x200) || ((int)param_1[-1] != 0)) {
          *(undefined4 *)(param_1 + -1) = 0;
          FUN_109d95b24(param_1);
        }
      }
      else {
        puVar4 = param_1;
        FUN_109d95c1c();
        bVar1 = *(byte *)((long)param_1 + 1) & 0x7f;
        if (puVar4 == param_1) {
          if ((bVar1 == 2) || ((int)param_1[-1] != 0)) {
            if (((pbVar9 == (byte *)0x0) || (0x1f < *pbVar9 - 4)) ||
               (((pbVar9[1] & 0x7f) != 2 && (*(int *)(pbVar9 + -8) == 0)))) {
              if ((param_3 != (ulong *)0x0) &&
                 (((byte)*param_3 - 4 < 0x20 &&
                  (((*param_3 & 0x7f00) == 0x200 || ((int)param_3[-1] != 0)))))) {
                *(int *)(param_1 + -1) = (int)param_1[-1] + 1;
              }
            }
            else if ((((param_3 == (ulong *)0x0) || (0x1f < (byte)*param_3 - 4)) ||
                     (((*param_3 & 0x7f00) != 0x200 && ((int)param_3[-1] == 0)))) &&
                    ((bVar1 != 2 &&
                     (iVar2 = (int)param_1[-1] + -1, *(int *)(param_1 + -1) = iVar2, iVar2 == 0))))
            {
              if (((uint)param_1[1] >> 2 & 1) == 0) {
                return param_1;
              }
              puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffff8);
              param_1[1] = *puVar4 & 0xfffffffffffffffb;
              FUN_109d95198(puVar4,1);
              if ((puVar4[2] & 1) == 0) {
                __ZdlPvSt11align_val_t(puVar4[3],8);
              }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR___ZdlPv_110352258)(puVar4);
              return puVar4;
            }
          }
          return puVar4;
        }
        if ((bVar1 == 2) || ((int)param_1[-1] != 0)) {
          if (((uint)*puVar6 >> 1 & 1) == 0) {
            uVar8 = (uint)*puVar6 >> 6 & 0xf;
          }
          else {
            uVar8 = (uint)param_1[-3];
          }
          if (uVar8 != 0) {
            uVar7 = 0;
            do {
              FUN_109d95908(param_1,uVar7,0);
              uVar7 = uVar7 + 1;
            } while (uVar8 != uVar7);
          }
          if (((uint)param_1[1] >> 2 & 1) != 0) {
            FUN_109d94ee4(param_1[1] & 0xfffffffffffffff8,puVar4);
          }
                    /* WARNING: Could not emulate address calculation at 0x000109d96ab0 */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10e0594a8)[(byte)*param_1 - 4] * 4 + 0x109d96abc))();
          return param_1;
        }
      }
      *(byte *)((long)param_1 + 1) = *(byte *)((long)param_1 + 1) & 0x80 | 1;
      if ((0x1a < (byte)*param_1 - 9) && (2 < (byte)*param_1 - 5)) {
        pbVar9 = (byte *)((long)param_1 + 4);
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
      }
      puVar4 = (ulong *)(param_1[1] & 0xfffffffffffffff8);
      if (((uint)param_1[1] >> 2 & 1) != 0) {
        puVar4 = (ulong *)*puVar4;
      }
      puVar4 = (ulong *)(*puVar4 + 0x4a0);
      FUN_109d97614(puVar4,&stack0xffffffffffffffe8);
      return puVar4;
    }
  }
  uVar5 = param_1[-2];
  if (((uint)uVar5 >> 1 & 1) == 0) {
    puVar4 = param_1 + -2 + -(uVar5 >> 2 & 0xf);
  }
  else {
    puVar4 = (ulong *)param_1[-4];
  }
  puVar4 = puVar4 + (param_2 & 0xffffffff);
  if ((*param_1 & 0x7f00) != 0) {
    param_1 = (ulong *)0x0;
  }
  puVar6 = puVar4;
  if (*puVar4 != 0) {
    FUN_109d94730(puVar4);
  }
  *puVar4 = (ulong)param_3;
  if (param_3 != (ulong *)0x0) {
    puVar6 = param_3;
    FUN_109d946e0();
    if (puVar6 == (ulong *)0x0) {
      if ((byte)*param_3 != 3) {
        return (ulong *)0x0;
      }
      param_3[1] = (ulong)puVar4;
    }
    else {
      uStack_50 = puVar6[1];
      puStack_60 = puVar4;
      uStack_58 = (ulong)param_1 | 2;
      func_0x000109d987b4(auStack_48,puVar6 + 2,&puStack_60,&uStack_58);
      puVar6[1] = puVar6[1] + 1;
    }
    return (ulong *)0x1;
  }
  return puVar6;
}



/* Entry: 109d97734; end: 109d977a3;  */

undefined8 * FUN_109d97734(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_109e04498(param_1 + 2,param_2);
  param_1[5] = 0;
  plVar1 = (long *)0x30;
  __Znwm();
  *plVar1 = (long)(plVar1 + 2);
  plVar1[1] = 0x400000000;
  param_1[6] = plVar1;
  return param_1;
}



/* Entry: 109d977a4; end: 109d9781b;  */

long FUN_109d977a4(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x30);
  uVar1 = *(uint *)(plVar4 + 1);
  plVar3 = plVar4;
  if (uVar1 != 0) {
    lVar5 = (ulong)uVar1 * -8;
    lVar2 = *plVar4 + (ulong)uVar1 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_109d33be0(lVar2);
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0);
    plVar3 = *(long **)(param_1 + 0x30);
  }
  *(undefined4 *)(plVar4 + 1) = 0;
  FUN_109d9bac8(plVar3);
  __ZdlPv();
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 109d9781c; end: 109d97887;  */

long * FUN_109d9781c(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 auStack_38 [2];
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
    lVar4 = *param_1;
    plVar1 = (long *)(lVar4 + (ulong)uVar3 * 8);
    lVar2 = *param_2;
    *plVar1 = lVar2;
    if (lVar2 != 0) {
      FUN_109d9464c(plVar1,lVar2,2);
      uVar3 = *(uint *)(param_1 + 1);
      lVar4 = *param_1;
    }
    *(uint *)(param_1 + 1) = uVar3 + 1;
    return (long *)(lVar4 + (ulong)(uVar3 + 1) * 8 + -8);
  }
  plVar1 = param_1;
  FUN_109dffb24(param_1,param_1 + 2,0,8,auStack_38);
  uVar3 = *(uint *)(param_1 + 1);
  lVar2 = *param_2;
  plVar1[uVar3] = lVar2;
  if (lVar2 != 0) {
    FUN_109d9464c(plVar1 + uVar3,lVar2,2);
  }
  func_0x000109d3b0a8(param_1,plVar1);
  if ((long *)*param_1 != param_1 + 2) {
    _free();
  }
  *param_1 = (long)plVar1;
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  *(undefined4 *)((long)param_1 + 0xc) = auStack_38[0];
  return plVar1 + ((ulong)uVar3 - 1);
}



/* Entry: 109d97888; end: 109d978fb;  */

void FUN_109d97888(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_31;
  
  if (*(uint *)(param_1 + 1) != 0) {
    lVar2 = *param_1;
    lVar1 = lVar2 + (ulong)*(uint *)(param_1 + 1) * 0x10;
    do {
      FUN_109d978fc(param_2,lVar2,lVar2 + 8);
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != lVar1);
  }
  if (1 < *(uint *)(param_2 + 1)) {
    FUN_109d9bbc4(*param_2,*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x10,&uStack_31);
  }
  return;
}



/* Entry: 109d978fc; end: 109d97967;  */

long FUN_109d978fc(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 < *(uint *)((long)param_1 + 0xc)) {
    lVar2 = *param_1;
    puVar1 = (undefined4 *)(lVar2 + (ulong)uVar3 * 0x10);
    *puVar1 = *param_2;
    *(undefined8 *)(puVar1 + 2) = *param_3;
    uVar3 = uVar3 + 1;
    *(uint *)(param_1 + 1) = uVar3;
  }
  else {
    FUN_109d34820(param_1,*param_2,*param_3);
    lVar2 = *param_1;
    uVar3 = *(uint *)(param_1 + 1);
  }
  return lVar2 + (ulong)uVar3 * 0x10 + -0x10;
}



/* Entry: 109d97968; end: 109d97a77;  */

bool FUN_109d97968(long *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar9 = (ulong)uVar1;
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar5 = *param_1;
    piVar4 = (int *)(lVar5 + uVar9 * 0x10);
    if ((uVar1 == 1) && (piVar4[-4] == param_2)) {
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_109d33be0(lVar5 + 8);
      bVar2 = true;
    }
    else {
      lVar6 = 0;
      lVar7 = uVar9 * 0x10;
      do {
        if (*(int *)(lVar5 + lVar6) == param_2) {
          piVar4 = (int *)(lVar5 + lVar6);
          if ((lVar7 - lVar6 != 0) && (lVar7 + -0x10 != lVar6)) {
            lVar5 = (lVar7 - lVar6) + -0x10;
            piVar8 = piVar4 + 6;
            piVar3 = piVar4;
            do {
              piVar4 = piVar3;
              if (piVar8[-2] != param_2) {
                piVar4 = piVar3 + 4;
                *piVar3 = piVar8[-2];
                FUN_109d34054(piVar3 + 2,piVar8);
              }
              piVar8 = piVar8 + 4;
              lVar5 = lVar5 + -0x10;
              piVar3 = piVar4;
            } while (lVar5 != 0);
            lVar5 = *param_1;
            uVar9 = (ulong)*(uint *)(param_1 + 1);
          }
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar7 - lVar6 != 0);
      FUN_109d9c704(param_1,piVar4,lVar5 + uVar9 * 0x10);
      bVar2 = uVar1 != *(uint *)(param_1 + 1);
    }
  }
  return bVar2;
}



/* Entry: 109d97a78; end: 109d97adf;  */

void FUN_109d97a78(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 auStack_30 [2];
  undefined8 uStack_28;
  
  auStack_30[0] = param_2;
  uStack_28 = param_3;
  FUN_109d9464c(&uStack_28,param_3,2);
  FUN_109d97ae0(param_1,auStack_30);
  FUN_109d33be0(&uStack_28);
  return;
}



/* Entry: 109d97ae0; end: 109d97c3f;  */

void FUN_109d97ae0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  plVar1 = param_1;
  FUN_109d9c51c(param_1,param_2,1);
  lVar4 = *param_1;
  uVar3 = *(uint *)(param_1 + 1);
  *(int *)(lVar4 + (ulong)uVar3 * 0x10) = (int)*plVar1;
  plVar1 = plVar1 + 1;
  lVar2 = *plVar1;
  *(long *)(lVar4 + (ulong)uVar3 * 0x10 + 8) = lVar2;
  if (lVar2 != 0) {
    FUN_109d947e4(plVar1);
    *plVar1 = 0;
    uVar3 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar3 + 1;
  return;
}



/* Entry: 109d97c40; end: 109d97d97;  */

void FUN_109d97c40(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puStack_38;
  
  puStack_38 = param_1;
  if (param_3 == 0) {
    if ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) != 0) {
      lVar1 = **(long **)*param_1 + 0x990;
      FUN_109d9c7c0(lVar1,&puStack_38);
      FUN_109d97968(lVar1 + 8,param_2);
      if (*(int *)(lVar1 + 0x10) == 0) {
        puStack_38 = param_1;
        func_0x000109d97d30(**(long **)*param_1 + 0x990,&puStack_38);
        *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xdfffffff;
      }
    }
  }
  else {
    lVar1 = **(long **)*param_1 + 0x990;
    FUN_109d9c7c0(lVar1,&puStack_38);
    if (*(int *)(lVar1 + 0x10) == 0) {
      *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x20000000;
    }
    FUN_109d97968(lVar1 + 8,param_2);
    FUN_109d97a78(lVar1 + 8,param_2,param_3);
  }
  return;
}



/* Entry: 109d97d98; end: 109d97deb;  */

void FUN_109d97d98(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) != 0) {
    puStack_28 = param_1;
    func_0x000109d97d30(**(long **)*param_1 + 0x990,&puStack_28);
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xdfffffff;
  }
  return;
}



/* Entry: 109d97dec; end: 109d97eab;  */

void FUN_109d97dec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puStack_38;
  
  if (((param_3 == (undefined8 *)0x0) && (param_1[6] == 0)) &&
     ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) == 0)) {
    return;
  }
  if ((int)param_2 == 0x26) {
    FUN_109d97eac(param_1,param_3);
  }
  else if ((int)param_2 == 0) {
    puStack_38 = param_3;
    if (param_3 != (undefined8 *)0x0) {
      FUN_109d9464c(&puStack_38,param_3,2);
    }
    FUN_109d34054(param_1 + 6,&puStack_38);
    FUN_109d33be0(&puStack_38);
    return;
  }
  puStack_38 = param_1;
  if (param_3 == (undefined8 *)0x0) {
    if ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) != 0) {
      lVar1 = **(long **)*param_1 + 0x990;
      FUN_109d9c7c0(lVar1,&puStack_38);
      FUN_109d97968(lVar1 + 8,param_2);
      if (*(int *)(lVar1 + 0x10) == 0) {
        puStack_38 = param_1;
        func_0x000109d97d30(**(long **)*param_1 + 0x990,&puStack_38);
        *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xdfffffff;
      }
    }
  }
  else {
    lVar1 = **(long **)*param_1 + 0x990;
    FUN_109d9c7c0(lVar1,&puStack_38);
    if (*(int *)(lVar1 + 0x10) == 0) {
      *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x20000000;
    }
    FUN_109d97968(lVar1 + 8,param_2);
    FUN_109d97a78(lVar1 + 8,param_2,param_3);
  }
  return;
}



/* Entry: 109d97eac; end: 109d9808b;  */

void FUN_109d97eac(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puStack_40;
  long *plStack_38;
  
  lVar9 = **(long **)*param_1;
  if (((param_1[6] != 0) || ((*(byte *)((long)param_1 + 0x17) >> 5 & 1) != 0)) &&
     (puVar2 = param_1, func_0x000109d97b44(param_1,0x26), puVar2 != (undefined8 *)0x0)) {
    if (puVar2 == param_2) {
      return;
    }
    lVar8 = lVar9 + 0x9a8;
    puStack_40 = puVar2;
    FUN_109d7394c(lVar8,&puStack_40,&plStack_38);
    plVar1 = plStack_38;
    if ((int)lVar8 == 0) {
      plVar1 = (long *)(*(long *)(lVar9 + 0x9a8) + (ulong)*(uint *)(lVar9 + 0x9b8) * 0x20);
    }
    plVar3 = (long *)plVar1[1];
    uVar7 = *(uint *)(plVar1 + 2);
    plVar6 = plVar3;
    if (uVar7 != 0) {
      lVar8 = (ulong)uVar7 << 3;
      plVar5 = plVar3;
      do {
        plVar6 = plVar5;
        if ((undefined8 *)*plVar5 == param_1) break;
        plVar5 = plVar5 + 1;
        lVar8 = lVar8 + -8;
        plVar6 = plVar3 + uVar7;
      } while (lVar8 != 0);
      if (uVar7 == 1) {
        if (plVar3 != plVar1 + 3) {
          _free();
        }
        *plVar1 = -0x2000;
        *(ulong *)(lVar9 + 0x9b0) =
             CONCAT44((int)((ulong)*(undefined8 *)(lVar9 + 0x9b0) >> 0x20) + 1,
                      (int)*(undefined8 *)(lVar9 + 0x9b0) + -1);
        goto LAB_109d97fb8;
      }
    }
    lVar8 = (long)(plVar3 + uVar7) - (long)(plVar6 + 1);
    if (lVar8 != 0) {
      _memmove(plVar6,plVar6 + 1,lVar8);
      uVar7 = *(uint *)(plVar1 + 2);
    }
    *(uint *)(plVar1 + 2) = uVar7 - 1;
  }
LAB_109d97fb8:
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = *(ulong *)(lVar9 + 0x9a8);
  FUN_109d9cba8(uVar4,*(undefined4 *)(lVar9 + 0x9b8),param_2,&plStack_38);
  if ((uVar4 & 1) != 0) goto LAB_109d98044;
  uVar7 = *(uint *)(lVar9 + 0x9b8);
  if (*(uint *)(lVar9 + 0x9b0) * 4 + 4 < uVar7 * 3) {
    if ((uVar7 + ~*(uint *)(lVar9 + 0x9b0)) - *(int *)(lVar9 + 0x9b4) <= uVar7 >> 3)
    goto LAB_109d98068;
  }
  else {
    uVar7 = uVar7 << 1;
LAB_109d98068:
    FUN_109d9cc34(lVar9 + 0x9a8,uVar7);
    FUN_109d9cba8(*(undefined8 *)(lVar9 + 0x9a8),*(undefined4 *)(lVar9 + 0x9b8),param_2,&plStack_38)
    ;
  }
  *(int *)(lVar9 + 0x9b0) = *(int *)(lVar9 + 0x9b0) + 1;
  if (*plStack_38 != -0x1000) {
    *(int *)(lVar9 + 0x9b4) = *(int *)(lVar9 + 0x9b4) + -1;
  }
  *plStack_38 = (long)param_2;
  plStack_38[1] = (long)(plStack_38 + 3);
  plStack_38[2] = 0x100000000;
LAB_109d98044:
  FUN_109d32c04(plStack_38 + 1,param_1);
  return;
}



/* Entry: 109d9808c; end: 109d980bf;  */

long * FUN_109d9808c(long *param_1)

{
  if (*param_1 != 0) {
    FUN_109d94730(param_1);
  }
  return param_1;
}



/* Entry: 109d980c0; end: 109d980ef;  */

long FUN_109d980c0(long param_1)

{
  FUN_109d96b44();
  FUN_109d73b2c(param_1 + 8);
  return param_1;
}



/* Entry: 109d980f0; end: 109d98103;  */

undefined1  [16] FUN_109d980f0(undefined8 param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  plVar3 = (long *)&UNK_10f5f9f3f;
  func_0x000104c4f6cc();
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar4 = (long)param_2 << 3;
    __Znwm(lVar4);
    auVar12._8_8_ = param_2;
    auVar12._0_8_ = lVar4;
    return auVar12;
  }
  func_0x000104c4f740();
  if ((int)plVar3[2] == 0) {
    uVar5 = 0;
    puVar6 = (ulong *)0x0;
  }
  else {
    uVar7 = *param_2;
    uVar2 = (int)plVar3[2] - 1;
    uVar8 = ((uint)(uVar7 >> 4) & 0xfffffff ^ (uint)uVar7 >> 9) & uVar2;
    puVar6 = (ulong *)(*plVar3 + (ulong)uVar8 * 0x10);
    uVar10 = *puVar6;
    if (uVar7 != uVar10) {
      iVar11 = 1;
      puVar9 = (ulong *)0x0;
      do {
        if (uVar10 == 0xfffffffffffff000) {
          uVar5 = 0;
          if (puVar9 != (ulong *)0x0) {
            puVar6 = puVar9;
          }
          goto LAB_109d98178;
        }
        puVar1 = puVar6;
        if (puVar9 != (ulong *)0x0 || uVar10 != 0xffffffffffffe000) {
          puVar1 = puVar9;
        }
        uVar8 = uVar8 + iVar11;
        iVar11 = iVar11 + 1;
        uVar8 = uVar8 & uVar2;
        puVar6 = (ulong *)(*plVar3 + (ulong)uVar8 * 0x10);
        uVar10 = *puVar6;
        puVar9 = puVar1;
      } while (uVar7 != uVar10);
    }
    uVar5 = 1;
  }
LAB_109d98178:
  *param_3 = (long)puVar6;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = uVar5;
  return auVar13;
}



/* Entry: 109d98104; end: 109d98137;  */

undefined1  [16] FUN_109d98104(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar3 = (long)param_2 << 3;
    __Znwm(lVar3);
    auVar11._8_8_ = param_2;
    auVar11._0_8_ = lVar3;
    return auVar11;
  }
  func_0x000104c4f740();
  if ((int)param_1[2] == 0) {
    uVar4 = 0;
    puVar5 = (ulong *)0x0;
  }
  else {
    uVar6 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar7 = ((uint)(uVar6 >> 4) & 0xfffffff ^ (uint)uVar6 >> 9) & uVar2;
    puVar5 = (ulong *)(*param_1 + (ulong)uVar7 * 0x10);
    uVar9 = *puVar5;
    if (uVar6 != uVar9) {
      iVar10 = 1;
      puVar8 = (ulong *)0x0;
      do {
        if (uVar9 == 0xfffffffffffff000) {
          uVar4 = 0;
          if (puVar8 != (ulong *)0x0) {
            puVar5 = puVar8;
          }
          goto LAB_109d98178;
        }
        puVar1 = puVar5;
        if (puVar8 != (ulong *)0x0 || uVar9 != 0xffffffffffffe000) {
          puVar1 = puVar8;
        }
        uVar7 = uVar7 + iVar10;
        iVar10 = iVar10 + 1;
        uVar7 = uVar7 & uVar2;
        puVar5 = (ulong *)(*param_1 + (ulong)uVar7 * 0x10);
        uVar9 = *puVar5;
        puVar8 = puVar1;
      } while (uVar6 != uVar9);
    }
    uVar4 = 1;
  }
LAB_109d98178:
  *param_3 = (long)puVar5;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = uVar4;
  return auVar12;
}



/* Entry: 109d98138; end: 109d981cf;  */

undefined8 FUN_109d98138(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d98178;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d98178:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d981d0; end: 109d982cf;  */

undefined8 * FUN_109d981d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puStack_28;
  
  puVar1 = param_1;
  FUN_109d98138(param_1,param_2,&puStack_28);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000109d98228(param_1,param_2,param_2);
    *param_1 = *param_2;
    param_1[1] = 0;
    puStack_28 = param_1;
  }
  return puStack_28;
}



/* Entry: 109d982d0; end: 109d983fb;  */

void FUN_109d982d0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d98138(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d983fc; end: 109d984ab;  */

undefined8 FUN_109d983fc(byte *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  
  pbVar3 = param_1 + 8;
  if ((*param_1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      uVar2 = 0;
      puVar5 = (ulong *)0x0;
      goto LAB_109d98448;
    }
    pbVar3 = *(byte **)(param_1 + 8);
  }
  else {
    iVar4 = 4;
  }
  uVar6 = *param_2;
  uVar7 = ((uint)(uVar6 >> 4) & 0xfffffff ^ (uint)uVar6 >> 9) & iVar4 - 1U;
  puVar5 = (ulong *)(pbVar3 + (ulong)uVar7 * 0x18);
  uVar9 = *puVar5;
  if (uVar6 != uVar9) {
    iVar10 = 1;
    puVar8 = (ulong *)0x0;
    do {
      if (uVar9 == 0xfffffffffffff000) {
        uVar2 = 0;
        if (puVar8 != (ulong *)0x0) {
          puVar5 = puVar8;
        }
        goto LAB_109d98448;
      }
      puVar1 = puVar5;
      if (puVar8 != (ulong *)0x0 || uVar9 != 0xffffffffffffe000) {
        puVar1 = puVar8;
      }
      uVar7 = uVar7 + iVar10;
      iVar10 = iVar10 + 1;
      uVar7 = uVar7 & iVar4 - 1U;
      puVar5 = (ulong *)(pbVar3 + (ulong)uVar7 * 0x18);
      uVar9 = *puVar5;
      puVar8 = puVar1;
    } while (uVar6 != uVar9);
  }
  uVar2 = 1;
LAB_109d98448:
  *param_3 = puVar5;
  return uVar2;
}



/* Entry: 109d984ac; end: 109d98563;  */

long * FUN_109d984ac(uint *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plStack_28;
  
  uVar1 = *param_1 >> 1;
  if ((*param_1 & 1) == 0) {
    uVar2 = param_1[4];
  }
  else {
    uVar2 = 4;
  }
  if (uVar1 * 4 + 4 < uVar2 * 3) {
    if (uVar2 >> 3 < (uVar2 + ~uVar1) - param_1[1]) goto LAB_109d98508;
  }
  else {
    uVar2 = uVar2 << 1;
  }
  FUN_109d98564(param_1,uVar2);
  FUN_109d983fc(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d98508:
  *param_1 = *param_1 + 2;
  if (*param_4 != -0x1000) {
    param_1[1] = param_1[1] - 1;
  }
  return param_4;
}



/* Entry: 109d98564; end: 109d9887b;  */

/* WARNING: Possible PIC construction at 0x000109d986b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109d98658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109d986b8) */
/* WARNING: Removing unreachable block (ram,0x000109d986d0) */
/* WARNING: Removing unreachable block (ram,0x00010bdbd7c4) */
/* WARNING: Removing unreachable block (ram,0x000109d9865c) */
/* WARNING: Removing unreachable block (ram,0x000109d986ec) */
/* WARNING: Removing unreachable block (ram,0x000109d98674) */

void FUN_109d98564(uint *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong *puStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  uint *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  ulong auStack_98 [12];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (4 < param_2) {
    uVar1 = param_2 - 1 | param_2 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 >> 0x10 | uVar1;
    param_2 = 0x40;
    if (0x40 < uVar1 + 1) {
      param_2 = uVar1 + 1;
    }
  }
  if ((*param_1 & 1) == 0) {
    puVar8 = *(ulong **)(param_1 + 2);
    unaff_x21 = (ulong)param_1[4];
    if (param_2 < 5) {
      *param_1 = *param_1 | 1;
    }
    else {
      unaff_x22 = (ulong)param_2;
      lVar2 = ((ulong)param_2 * 2 + (ulong)param_2) * 8;
      __ZnwmSt11align_val_t(lVar2,8);
      *(long *)(param_1 + 2) = lVar2;
      *(ulong *)(param_1 + 4) = unaff_x22;
    }
    puVar3 = puVar8 + unaff_x21 * 3;
    uStack_a8 = 0x109d986b8;
    puStack_c0 = puVar8;
  }
  else {
    lVar2 = 0;
    puVar3 = auStack_98;
    do {
      uVar7 = *(ulong *)((long)param_1 + lVar2 + 8);
      if ((uVar7 | 0x1000) != 0xfffffffffffff000) {
        *puVar3 = uVar7;
        uVar7 = *(ulong *)((long)param_1 + lVar2 + 0x10);
        puVar3[2] = *(ulong *)((long)param_1 + lVar2 + 0x18);
        puVar3[1] = uVar7;
        puVar3 = puVar3 + 3;
      }
      lVar2 = lVar2 + 0x18;
    } while (lVar2 != 0x60);
    if (4 < param_2) {
      *param_1 = *param_1 & 0xfffffffe;
      unaff_x21 = (ulong)param_2;
      lVar2 = ((ulong)param_2 * 2 + (ulong)param_2) * 8;
      __ZnwmSt11align_val_t(lVar2,8);
      *(long *)(param_1 + 2) = lVar2;
      *(ulong *)(param_1 + 4) = unaff_x21;
    }
    puVar8 = auStack_98;
    uStack_a8 = 0x109d9865c;
    puStack_c0 = puVar3;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 1;
  param_1[1] = 0;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  puStack_b8 = param_1;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((uVar1 & 1) == 0) {
    if (param_1[4] == 0) goto LAB_109d98798;
    puVar4 = *(uint **)(param_1 + 2);
    puVar6 = puVar4 + (ulong)param_1[4] * 6;
  }
  else {
    puVar4 = param_1 + 2;
    puVar6 = param_1 + 0x1a;
  }
  do {
    puVar5 = puVar4 + 6;
    puVar4[0] = 0xfffff000;
    puVar4[1] = 0xffffffff;
    puVar4 = puVar5;
  } while (puVar5 != puVar6);
LAB_109d98798:
  for (; puVar8 != puVar3; puVar8 = puVar8 + 3) {
    if ((*puVar8 | 0x1000) != 0xfffffffffffff000) {
      FUN_109d983fc(param_1,puVar8,&puStack_d8);
      *puStack_d8 = *puVar8;
      uVar7 = puVar8[1];
      puStack_d8[2] = puVar8[2];
      puStack_d8[1] = uVar7;
      *param_1 = *param_1 + 2;
    }
  }
  return;
}



/* Entry: 109d9887c; end: 109d989c3;  */

undefined8 FUN_109d9887c(byte *param_1,ulong *param_2,undefined8 *param_3)

{
  ulong *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  int iVar10;
  
  pbVar3 = param_1 + 8;
  if ((*param_1 & 1) == 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 0) {
      uVar2 = 0;
      puVar5 = (ulong *)0x0;
      goto LAB_109d988c8;
    }
    pbVar3 = *(byte **)(param_1 + 8);
  }
  else {
    iVar4 = 4;
  }
  uVar6 = *param_2;
  uVar7 = ((uint)(uVar6 >> 4) & 0xfffffff ^ (uint)uVar6 >> 9) & iVar4 - 1U;
  puVar5 = (ulong *)(pbVar3 + (ulong)uVar7 * 0x18);
  uVar9 = *puVar5;
  if (uVar6 != uVar9) {
    iVar10 = 1;
    puVar8 = (ulong *)0x0;
    do {
      if (uVar9 == 0xfffffffffffff000) {
        uVar2 = 0;
        if (puVar8 != (ulong *)0x0) {
          puVar5 = puVar8;
        }
        goto LAB_109d988c8;
      }
      puVar1 = puVar5;
      if (puVar8 != (ulong *)0x0 || uVar9 != 0xffffffffffffe000) {
        puVar1 = puVar8;
      }
      uVar7 = uVar7 + iVar10;
      iVar10 = iVar10 + 1;
      uVar7 = uVar7 & iVar4 - 1U;
      puVar5 = (ulong *)(pbVar3 + (ulong)uVar7 * 0x18);
      uVar9 = *puVar5;
      puVar8 = puVar1;
    } while (uVar6 != uVar9);
  }
  uVar2 = 1;
LAB_109d988c8:
  *param_3 = puVar5;
  return uVar2;
}



/* Entry: 109d989c4; end: 109d98aeb;  */

long * FUN_109d989c4(long *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar5 = param_1 + 2;
  *param_1 = (long)plVar5;
  param_1[1] = 0x800000000;
  if (param_2 == param_4) {
    iVar3 = 0;
  }
  else {
    puVar4 = param_2;
    uVar1 = 0;
LAB_109d98a18:
    do {
      uVar6 = uVar1;
      puVar4 = puVar4 + 3;
      if (puVar4 != param_3) {
        uVar1 = uVar6;
        if ((*puVar4 | 0x1000) == 0xfffffffffffff000) goto LAB_109d98a18;
      }
      uVar1 = uVar6 + 1;
    } while (puVar4 != param_4);
    if (uVar6 < 8) {
      uVar2 = 0;
    }
    else {
      func_0x000107c2b01c(param_1,plVar5,uVar1,0x18);
      uVar2 = *(uint *)(param_1 + 1);
      plVar5 = (long *)*param_1;
    }
    puVar4 = (ulong *)((long)plVar5 + (ulong)uVar2 * 0x18);
    do {
      uVar7 = param_2[1];
      uVar6 = *param_2;
      puVar4[2] = param_2[2];
      puVar4[1] = uVar7;
      *puVar4 = uVar6;
      do {
        param_2 = param_2 + 3;
        if (param_2 == param_3) break;
      } while ((*param_2 | 0x1000) == 0xfffffffffffff000);
      puVar4 = puVar4 + 3;
    } while (param_2 != param_4);
    iVar3 = (int)param_1[1] + (int)uVar1;
  }
  *(int *)(param_1 + 1) = iVar3;
  return param_1;
}



/* Entry: 109d98aec; end: 109d9955b;  */

void FUN_109d98aec(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  
LAB_109d98b18:
  puVar12 = param_2 + -3;
  puVar23 = param_1;
LAB_109d98b28:
  while( true ) {
    param_1 = puVar23;
    uVar11 = (long)param_2 - (long)param_1;
    uVar14 = ((long)uVar11 >> 3) * -0x5555555555555555;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        bVar5 = param_2[-1] < param_1[2];
        if (param_1[1] != param_2[-2]) {
          bVar5 = param_2[-2] < param_1[1];
        }
        if (!bVar5) {
          return;
        }
        uVar11 = *param_1;
        *param_1 = param_2[-3];
        param_2[-3] = uVar11;
        uVar11 = param_1[1];
        param_1[1] = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = uVar11;
        return;
      }
    }
    else {
      if (uVar14 == 3) {
        puVar23 = param_1 + 3;
        puVar7 = param_1 + 4;
        uVar11 = *puVar7;
        puVar20 = param_1 + 1;
        puVar8 = param_1 + 5;
        puVar18 = param_1 + 2;
        bVar5 = *puVar8 < *puVar18;
        if (*puVar20 != uVar11) {
          bVar5 = uVar11 < *puVar20;
        }
        puVar13 = param_2 + -2;
        puVar15 = param_2 + -1;
        bVar6 = *puVar15 < *puVar8;
        if (uVar11 != *puVar13) {
          bVar6 = *puVar13 < uVar11;
        }
        if (bVar5) {
          uVar11 = *param_1;
          if (bVar6) {
            *param_1 = *puVar12;
            *puVar12 = uVar11;
            puVar7 = puVar20;
            puVar8 = puVar18;
          }
          else {
            *param_1 = *puVar23;
            *puVar23 = uVar11;
            uVar11 = param_1[1];
            param_1[1] = param_1[4];
            param_1[4] = uVar11;
            uVar11 = param_1[2];
            param_1[2] = param_1[5];
            param_1[5] = uVar11;
            bVar5 = *puVar15 < uVar11;
            if (param_1[4] != *puVar13) {
              bVar5 = *puVar13 < param_1[4];
            }
            if (!bVar5) {
              return;
            }
            uVar11 = *puVar23;
            *puVar23 = *puVar12;
            *puVar12 = uVar11;
          }
        }
        else {
          if (!bVar6) {
            return;
          }
          uVar11 = *puVar23;
          *puVar23 = *puVar12;
          *puVar12 = uVar11;
          uVar11 = param_1[4];
          param_1[4] = param_2[-2];
          param_2[-2] = uVar11;
          uVar11 = param_1[5];
          param_1[5] = param_2[-1];
          param_2[-1] = uVar11;
          bVar5 = param_1[5] < *puVar18;
          if (*puVar20 != param_1[4]) {
            bVar5 = param_1[4] < *puVar20;
          }
          if (!bVar5) {
            return;
          }
          uVar11 = *param_1;
          *param_1 = *puVar23;
          *puVar23 = uVar11;
          puVar13 = puVar7;
          puVar15 = puVar8;
          puVar7 = puVar20;
          puVar8 = puVar18;
        }
        uVar11 = *puVar7;
        *puVar7 = *puVar13;
        *puVar13 = uVar11;
        uVar11 = *puVar8;
        *puVar8 = *puVar15;
        *puVar15 = uVar11;
        return;
      }
      if (uVar14 == 4) {
        FUN_109d9955c(param_1,param_1 + 3,param_1 + 6);
        bVar5 = param_2[-1] < param_1[8];
        if (param_1[7] != param_2[-2]) {
          bVar5 = param_2[-2] < param_1[7];
        }
        if (!bVar5) {
          return;
        }
        uVar11 = param_1[6];
        param_1[6] = param_2[-3];
        param_2[-3] = uVar11;
        uVar11 = param_1[7];
        param_1[7] = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = param_1[8];
        param_1[8] = param_2[-1];
        param_2[-1] = uVar11;
        uVar11 = param_1[7];
        uVar16 = param_1[8];
        uVar14 = param_1[4];
        uVar24 = param_1[5];
        bVar5 = uVar16 < uVar24;
        if (uVar14 != uVar11) {
          bVar5 = uVar11 < uVar14;
        }
        if (!bVar5) {
          return;
        }
        uVar21 = param_1[3];
        uVar17 = param_1[6];
        param_1[3] = uVar17;
        param_1[4] = uVar11;
        param_1[5] = uVar16;
        param_1[6] = uVar21;
        param_1[7] = uVar14;
        param_1[8] = uVar24;
        uVar14 = param_1[1];
        uVar24 = param_1[2];
        bVar5 = uVar16 < uVar24;
        if (uVar14 != uVar11) {
          bVar5 = uVar11 < uVar14;
        }
        if (!bVar5) {
          return;
        }
        uVar21 = *param_1;
        *param_1 = uVar17;
        param_1[1] = uVar11;
        param_1[2] = uVar16;
        param_1[3] = uVar21;
        param_1[4] = uVar14;
        param_1[5] = uVar24;
        return;
      }
      if (uVar14 == 5) {
        puVar23 = param_1 + 3;
        puVar7 = param_1 + 6;
        puVar8 = param_1 + 9;
        FUN_109d9955c();
        bVar5 = param_1[0xb] < param_1[8];
        if (param_1[7] != param_1[10]) {
          bVar5 = param_1[10] < param_1[7];
        }
        if (bVar5) {
          uVar11 = *puVar7;
          *puVar7 = *puVar8;
          *puVar8 = uVar11;
          uVar11 = param_1[7];
          param_1[7] = param_1[10];
          param_1[10] = uVar11;
          uVar11 = param_1[8];
          param_1[8] = param_1[0xb];
          param_1[0xb] = uVar11;
          bVar5 = param_1[8] < param_1[5];
          if (param_1[4] != param_1[7]) {
            bVar5 = param_1[7] < param_1[4];
          }
          if (bVar5) {
            uVar11 = *puVar23;
            *puVar23 = *puVar7;
            *puVar7 = uVar11;
            uVar11 = param_1[4];
            param_1[4] = param_1[7];
            param_1[7] = uVar11;
            uVar11 = param_1[5];
            param_1[5] = param_1[8];
            param_1[8] = uVar11;
            bVar5 = param_1[5] < param_1[2];
            if (param_1[1] != param_1[4]) {
              bVar5 = param_1[4] < param_1[1];
            }
            if (bVar5) {
              uVar11 = *param_1;
              *param_1 = *puVar23;
              *puVar23 = uVar11;
              uVar11 = param_1[1];
              param_1[1] = param_1[4];
              param_1[4] = uVar11;
              uVar11 = param_1[2];
              param_1[2] = param_1[5];
              param_1[5] = uVar11;
            }
          }
        }
        bVar5 = param_2[-1] < param_1[0xb];
        if (param_1[10] != param_2[-2]) {
          bVar5 = param_2[-2] < param_1[10];
        }
        if (bVar5) {
          uVar11 = *puVar8;
          *puVar8 = *puVar12;
          *puVar12 = uVar11;
          uVar11 = param_1[10];
          param_1[10] = param_2[-2];
          param_2[-2] = uVar11;
          uVar11 = param_1[0xb];
          param_1[0xb] = param_2[-1];
          param_2[-1] = uVar11;
          bVar5 = param_1[0xb] < param_1[8];
          if (param_1[7] != param_1[10]) {
            bVar5 = param_1[10] < param_1[7];
          }
          if (bVar5) {
            uVar11 = *puVar7;
            *puVar7 = *puVar8;
            *puVar8 = uVar11;
            uVar11 = param_1[7];
            param_1[7] = param_1[10];
            param_1[10] = uVar11;
            uVar11 = param_1[8];
            param_1[8] = param_1[0xb];
            param_1[0xb] = uVar11;
            bVar5 = param_1[8] < param_1[5];
            if (param_1[4] != param_1[7]) {
              bVar5 = param_1[7] < param_1[4];
            }
            if (bVar5) {
              uVar11 = *puVar23;
              *puVar23 = *puVar7;
              *puVar7 = uVar11;
              uVar11 = param_1[4];
              param_1[4] = param_1[7];
              param_1[7] = uVar11;
              uVar11 = param_1[5];
              param_1[5] = param_1[8];
              param_1[8] = uVar11;
              bVar5 = param_1[5] < param_1[2];
              if (param_1[1] != param_1[4]) {
                bVar5 = param_1[4] < param_1[1];
              }
              if (bVar5) {
                uVar11 = *param_1;
                *param_1 = *puVar23;
                *puVar23 = uVar11;
                uVar11 = param_1[1];
                param_1[1] = param_1[4];
                param_1[4] = uVar11;
                uVar11 = param_1[2];
                param_1[2] = param_1[5];
                param_1[5] = uVar11;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar11 < 0x240) {
      puVar23 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar23 == param_2) {
          return;
        }
        puVar12 = param_1 + 5;
        do {
          puVar7 = puVar23;
          uVar11 = param_1[4];
          uVar14 = param_1[5];
          bVar5 = uVar14 < param_1[2];
          if (param_1[1] != uVar11) {
            bVar5 = uVar11 < param_1[1];
          }
          if (bVar5) {
            uVar16 = *puVar7;
            puVar23 = puVar12;
            do {
              puVar8 = puVar23;
              puVar8[-1] = puVar8[-4];
              puVar8[-2] = puVar8[-5];
              puVar23 = puVar8 + -3;
              *puVar8 = *puVar23;
              bVar5 = uVar14 < puVar8[-6];
              if (puVar8[-7] != uVar11) {
                bVar5 = uVar11 < puVar8[-7];
              }
            } while (bVar5);
            puVar8[-5] = uVar16;
            puVar8[-4] = uVar11;
            *puVar23 = uVar14;
          }
          puVar12 = puVar12 + 3;
          puVar23 = puVar7 + 3;
          param_1 = puVar7;
        } while (puVar7 + 3 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar23 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar12 = param_1;
      goto LAB_109d9913c;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar24 = uVar14 - 2 >> 1;
      uVar16 = uVar24;
      goto LAB_109d991ec;
    }
    puVar23 = param_1 + (uVar14 >> 1) * 3;
    if (uVar11 < 0xc01) {
      FUN_109d9955c(puVar23,param_1,puVar12);
    }
    else {
      FUN_109d9955c(param_1,puVar23,puVar12);
      FUN_109d9955c(param_1 + 3,puVar23 + -3,param_2 + -6);
      FUN_109d9955c(param_1 + 6,puVar23 + 3,param_2 + -9);
      FUN_109d9955c(puVar23 + -3,puVar23,puVar23 + 3);
      uVar11 = *param_1;
      *param_1 = *puVar23;
      *puVar23 = uVar11;
      uVar11 = param_1[1];
      param_1[1] = puVar23[1];
      puVar23[1] = uVar11;
      uVar11 = param_1[2];
      param_1[2] = puVar23[2];
      puVar23[2] = uVar11;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) break;
    uVar11 = param_1[1];
    uVar14 = param_1[2];
    bVar5 = param_1[-1] < uVar14;
    if (uVar11 != param_1[-2]) {
      bVar5 = param_1[-2] < uVar11;
    }
    if (bVar5) goto LAB_109d98c4c;
    bVar5 = uVar14 < param_2[-1];
    if (param_2[-2] != uVar11) {
      bVar5 = uVar11 < param_2[-2];
    }
    puVar7 = param_1;
    if (bVar5) {
      do {
        puVar23 = puVar7 + 3;
        bVar5 = uVar14 < puVar7[5];
        if (puVar7[4] != uVar11) {
          bVar5 = uVar11 < puVar7[4];
        }
        puVar7 = puVar23;
      } while (!bVar5);
    }
    else {
      do {
        puVar23 = puVar7 + 3;
        if (param_2 <= puVar23) break;
        bVar5 = uVar14 < puVar7[5];
        if (puVar7[4] != uVar11) {
          bVar5 = uVar11 < puVar7[4];
        }
        puVar7 = puVar23;
      } while (!bVar5);
    }
    puVar7 = param_2;
    puVar8 = param_2;
    if (puVar23 < param_2) {
      do {
        puVar8 = puVar7 + -3;
        bVar5 = uVar14 < puVar7[-1];
        if (puVar7[-2] != uVar11) {
          bVar5 = uVar11 < puVar7[-2];
        }
        puVar7 = puVar8;
      } while (bVar5);
    }
    uVar16 = *param_1;
    while (puVar23 < puVar8) {
      uVar24 = *puVar23;
      *puVar23 = *puVar8;
      *puVar8 = uVar24;
      uVar24 = puVar23[1];
      puVar23[1] = puVar8[1];
      puVar8[1] = uVar24;
      uVar24 = puVar23[2];
      puVar23[2] = puVar8[2];
      puVar8[2] = uVar24;
      do {
        puVar7 = puVar23 + 4;
        puVar20 = puVar23 + 5;
        puVar23 = puVar23 + 3;
        bVar5 = uVar14 < *puVar20;
        if (*puVar7 != uVar11) {
          bVar5 = uVar11 < *puVar7;
        }
      } while (!bVar5);
      do {
        puVar7 = puVar8 + -2;
        puVar20 = puVar8 + -1;
        puVar8 = puVar8 + -3;
        bVar5 = uVar14 < *puVar20;
        if (*puVar7 != uVar11) {
          bVar5 = uVar11 < *puVar7;
        }
      } while (bVar5);
    }
    if (puVar23 + -3 != param_1) {
      *param_1 = puVar23[-3];
      param_1[1] = puVar23[-2];
      param_1[2] = puVar23[-1];
    }
    param_4 = 0;
    puVar23[-3] = uVar16;
    puVar23[-2] = uVar11;
    puVar23[-1] = uVar14;
  }
  uVar11 = param_1[1];
  uVar14 = param_1[2];
LAB_109d98c4c:
  lVar19 = 0;
  uVar16 = *param_1;
  do {
    uVar24 = *(ulong *)((long)param_1 + lVar19 + 0x20);
    bVar5 = *(ulong *)((long)param_1 + lVar19 + 0x28) < uVar14;
    if (uVar11 != uVar24) {
      bVar5 = uVar24 < uVar11;
    }
    lVar19 = lVar19 + 0x18;
  } while (bVar5);
  puVar7 = (ulong *)((long)param_1 + lVar19);
  puVar23 = param_2;
  if (lVar19 == 0x18) {
    do {
      puVar8 = puVar23;
      if (puVar23 <= puVar7) break;
      puVar8 = puVar23 + -3;
      bVar5 = puVar23[-1] < uVar14;
      if (uVar11 != puVar23[-2]) {
        bVar5 = puVar23[-2] < uVar11;
      }
      puVar23 = puVar8;
    } while (!bVar5);
  }
  else {
    do {
      puVar8 = puVar23 + -3;
      bVar5 = puVar23[-1] < uVar14;
      if (uVar11 != puVar23[-2]) {
        bVar5 = puVar23[-2] < uVar11;
      }
      puVar23 = puVar8;
    } while (!bVar5);
  }
  puVar20 = puVar8;
  puVar23 = puVar7;
  if (puVar7 < puVar8) {
    do {
      uVar24 = *puVar23;
      *puVar23 = *puVar20;
      *puVar20 = uVar24;
      uVar24 = puVar23[1];
      puVar23[1] = puVar20[1];
      puVar20[1] = uVar24;
      uVar24 = puVar23[2];
      puVar23[2] = puVar20[2];
      puVar20[2] = uVar24;
      do {
        puVar18 = puVar23 + 4;
        puVar13 = puVar23 + 5;
        puVar23 = puVar23 + 3;
        bVar5 = *puVar13 < uVar14;
        if (uVar11 != *puVar18) {
          bVar5 = *puVar18 < uVar11;
        }
      } while (bVar5);
      do {
        puVar18 = puVar20 + -2;
        puVar13 = puVar20 + -1;
        puVar20 = puVar20 + -3;
        bVar5 = *puVar13 < uVar14;
        if (uVar11 != *puVar18) {
          bVar5 = *puVar18 < uVar11;
        }
      } while (!bVar5);
    } while (puVar23 < puVar20);
  }
  puVar20 = puVar23 + -3;
  if (puVar20 != param_1) {
    *param_1 = puVar23[-3];
    param_1[1] = puVar23[-2];
    param_1[2] = puVar23[-1];
  }
  puVar23[-3] = uVar16;
  puVar23[-2] = uVar11;
  puVar23[-1] = uVar14;
  if (puVar8 <= puVar7) {
    puVar7 = param_1;
    FUN_109d99994(param_1,puVar20);
    puVar8 = puVar23;
    FUN_109d99994(puVar23,param_2);
    if ((int)puVar8 != 0) goto LAB_109d98f80;
    if (((ulong)puVar7 & 1) != 0) goto LAB_109d98b28;
  }
  FUN_109d98aec(param_1,puVar20,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_109d98b28;
LAB_109d9913c:
  puVar7 = puVar23;
  uVar11 = puVar12[4];
  uVar14 = puVar12[5];
  bVar5 = uVar14 < puVar12[2];
  if (puVar12[1] != uVar11) {
    bVar5 = uVar11 < puVar12[1];
  }
  if (bVar5) {
    uVar16 = *puVar7;
    lVar4 = lVar19;
    do {
      lVar22 = lVar4;
      puVar2 = (undefined8 *)((long)param_1 + lVar22);
      puVar2[4] = puVar2[1];
      puVar2[3] = *puVar2;
      puVar2[5] = puVar2[2];
      puVar23 = param_1;
      if (lVar22 == 0) goto LAB_109d991bc;
      bVar5 = uVar14 < (ulong)puVar2[-1];
      if (puVar2[-2] != uVar11) {
        bVar5 = uVar11 < (ulong)puVar2[-2];
      }
      lVar4 = lVar22 + -0x18;
    } while (bVar5);
    puVar23 = (ulong *)((long)param_1 + lVar22);
LAB_109d991bc:
    *puVar23 = uVar16;
    puVar23[1] = uVar11;
    puVar23[2] = uVar14;
  }
  lVar19 = lVar19 + 0x18;
  puVar23 = puVar7 + 3;
  puVar12 = puVar7;
  if (puVar7 + 3 == param_2) {
    return;
  }
  goto LAB_109d9913c;
LAB_109d991ec:
  do {
    if ((long)uVar16 <= (long)uVar24) {
      uVar21 = uVar16 << 1 | 1;
      puVar23 = param_1 + uVar21 * 3;
      uVar17 = uVar16 * 2 + 2;
      uVar10 = uVar21;
      if ((long)uVar17 < (long)uVar14) {
        bVar5 = puVar23[2] < puVar23[5];
        if (puVar23[4] != puVar23[1]) {
          bVar5 = puVar23[1] < puVar23[4];
        }
        lVar19 = 0x18;
        if (!bVar5) {
          lVar19 = 0;
        }
        puVar23 = (ulong *)((long)puVar23 + lVar19);
        uVar10 = uVar17;
        if (!bVar5) {
          uVar10 = uVar21;
        }
      }
      puVar12 = param_1 + uVar16 * 3;
      uVar17 = puVar12[1];
      uVar21 = puVar12[2];
      bVar5 = puVar23[2] < uVar21;
      if (uVar17 != puVar23[1]) {
        bVar5 = puVar23[1] < uVar17;
      }
      if (!bVar5) {
        uVar9 = *puVar12;
        do {
          puVar7 = puVar23;
          *puVar12 = *puVar7;
          puVar12[1] = puVar7[1];
          puVar12[2] = puVar7[2];
          if ((long)uVar24 < (long)uVar10) break;
          uVar3 = uVar10 << 1 | 1;
          puVar23 = param_1 + uVar3 * 3;
          uVar1 = uVar10 * 2 + 2;
          uVar10 = uVar3;
          if ((long)uVar1 < (long)uVar14) {
            bVar5 = puVar23[2] < puVar23[5];
            if (puVar23[4] != puVar23[1]) {
              bVar5 = puVar23[1] < puVar23[4];
            }
            lVar19 = 0x18;
            if (!bVar5) {
              lVar19 = 0;
            }
            puVar23 = (ulong *)((long)puVar23 + lVar19);
            uVar10 = uVar1;
            if (!bVar5) {
              uVar10 = uVar3;
            }
          }
          bVar5 = puVar23[2] < uVar21;
          if (uVar17 != puVar23[1]) {
            bVar5 = puVar23[1] < uVar17;
          }
          puVar12 = puVar7;
        } while (!bVar5);
        *puVar7 = uVar9;
        puVar7[1] = uVar17;
        puVar7[2] = uVar21;
      }
    }
    bVar5 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar5);
  lVar19 = (uVar11 >> 3) * -0x5555555555555555;
  do {
    uVar11 = *param_1;
    uVar14 = param_1[1];
    uVar16 = param_1[2];
    uVar24 = 0;
    puVar23 = param_1;
    do {
      uVar21 = uVar24 << 1 | 1;
      uVar17 = uVar24 * 2 + 2;
      uVar10 = uVar21;
      puVar12 = puVar23 + uVar24 * 3 + 3;
      if ((long)uVar17 < lVar19) {
        bVar5 = puVar23[uVar24 * 3 + 5] < puVar23[uVar24 * 3 + 8];
        if (puVar23[uVar24 * 3 + 7] != puVar23[uVar24 * 3 + 4]) {
          bVar5 = puVar23[uVar24 * 3 + 4] < puVar23[uVar24 * 3 + 7];
        }
        uVar10 = uVar17;
        puVar12 = puVar23 + uVar24 * 3 + 6;
        if (!bVar5) {
          uVar10 = uVar21;
          puVar12 = puVar23 + uVar24 * 3 + 3;
        }
      }
      *puVar23 = *puVar12;
      puVar23[1] = puVar12[1];
      puVar23[2] = puVar12[2];
      uVar24 = uVar10;
      puVar23 = puVar12;
    } while ((long)uVar10 <= (lVar19 + -2) / 2);
    if (puVar12 == param_2 + -3) {
      *puVar12 = uVar11;
LAB_109d994a0:
      puVar12[1] = uVar14;
      puVar12[2] = uVar16;
    }
    else {
      *puVar12 = param_2[-3];
      puVar12[1] = param_2[-2];
      puVar12[2] = param_2[-1];
      param_2[-3] = uVar11;
      param_2[-2] = uVar14;
      param_2[-1] = uVar16;
      uVar11 = (long)puVar12 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar11) {
        uVar11 = (uVar11 >> 3) * -0x5555555555555555 - 2 >> 1;
        puVar23 = param_1 + uVar11 * 3;
        uVar14 = puVar12[1];
        uVar16 = puVar12[2];
        bVar5 = puVar23[2] < uVar16;
        if (uVar14 != puVar23[1]) {
          bVar5 = puVar23[1] < uVar14;
        }
        if (bVar5) {
          uVar24 = *puVar12;
          puVar7 = puVar12;
          do {
            puVar12 = puVar23;
            *puVar7 = *puVar12;
            puVar7[1] = puVar12[1];
            puVar7[2] = puVar12[2];
            if (uVar11 == 0) break;
            uVar11 = uVar11 - 1 >> 1;
            puVar23 = param_1 + uVar11 * 3;
            bVar5 = puVar23[2] < uVar16;
            if (uVar14 != puVar23[1]) {
              bVar5 = puVar23[1] < uVar14;
            }
            puVar7 = puVar12;
          } while (bVar5);
          *puVar12 = uVar24;
          goto LAB_109d994a0;
        }
      }
    }
    bVar5 = lVar19 < 3;
    lVar19 = lVar19 + -1;
    param_2 = param_2 + -3;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_109d98f80:
  param_2 = puVar20;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_109d98b18;
}



/* Entry: 109d9955c; end: 109d996eb;  */

void FUN_109d9955c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar6 = param_2 + 1;
  uVar9 = *puVar6;
  puVar5 = param_1 + 1;
  puVar8 = param_2 + 2;
  puVar7 = param_1 + 2;
  bVar1 = *puVar8 < *puVar7;
  if (*puVar5 != uVar9) {
    bVar1 = uVar9 < *puVar5;
  }
  puVar3 = param_3 + 1;
  puVar4 = param_3 + 2;
  bVar2 = *puVar4 < *puVar8;
  if (uVar9 != *puVar3) {
    bVar2 = *puVar3 < uVar9;
  }
  if (bVar1) {
    uVar10 = *param_1;
    if (bVar2) {
      *param_1 = *param_3;
      *param_3 = uVar10;
      puVar6 = puVar5;
      puVar8 = puVar7;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar10;
      uVar10 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = uVar10;
      uVar9 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = uVar9;
      bVar1 = *puVar4 < uVar9;
      if (param_2[1] != *puVar3) {
        bVar1 = *puVar3 < (ulong)param_2[1];
      }
      if (!bVar1) {
        return;
      }
      uVar10 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar10;
    }
  }
  else {
    if (!bVar2) {
      return;
    }
    uVar10 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar10;
    uVar10 = param_2[1];
    param_2[1] = param_3[1];
    param_3[1] = uVar10;
    uVar10 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = uVar10;
    bVar1 = (ulong)param_2[2] < *puVar7;
    if (*puVar5 != param_2[1]) {
      bVar1 = (ulong)param_2[1] < *puVar5;
    }
    if (!bVar1) {
      return;
    }
    uVar10 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar10;
    puVar3 = puVar6;
    puVar4 = puVar8;
    puVar6 = puVar5;
    puVar8 = puVar7;
  }
  uVar9 = *puVar6;
  *puVar6 = *puVar3;
  *puVar3 = uVar9;
  uVar9 = *puVar8;
  *puVar8 = *puVar4;
  *puVar4 = uVar9;
  return;
}



/* Entry: 109d996ec; end: 109d99993;  */

void FUN_109d996ec(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  FUN_109d9955c();
  bVar1 = (ulong)param_4[2] < (ulong)param_3[2];
  if (param_3[1] != param_4[1]) {
    bVar1 = (ulong)param_4[1] < (ulong)param_3[1];
  }
  if (bVar1) {
    uVar2 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar2;
    uVar2 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar2;
    uVar2 = param_3[2];
    param_3[2] = param_4[2];
    param_4[2] = uVar2;
    bVar1 = (ulong)param_3[2] < (ulong)param_2[2];
    if (param_2[1] != param_3[1]) {
      bVar1 = (ulong)param_3[1] < (ulong)param_2[1];
    }
    if (bVar1) {
      uVar2 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar2;
      uVar2 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar2;
      uVar2 = param_2[2];
      param_2[2] = param_3[2];
      param_3[2] = uVar2;
      bVar1 = (ulong)param_2[2] < (ulong)param_1[2];
      if (param_1[1] != param_2[1]) {
        bVar1 = (ulong)param_2[1] < (ulong)param_1[1];
      }
      if (bVar1) {
        uVar2 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar2;
        uVar2 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar2;
        uVar2 = param_1[2];
        param_1[2] = param_2[2];
        param_2[2] = uVar2;
      }
    }
  }
  bVar1 = (ulong)param_5[2] < (ulong)param_4[2];
  if (param_4[1] != param_5[1]) {
    bVar1 = (ulong)param_5[1] < (ulong)param_4[1];
  }
  if (bVar1) {
    uVar2 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar2;
    uVar2 = param_4[1];
    param_4[1] = param_5[1];
    param_5[1] = uVar2;
    uVar2 = param_4[2];
    param_4[2] = param_5[2];
    param_5[2] = uVar2;
    bVar1 = (ulong)param_4[2] < (ulong)param_3[2];
    if (param_3[1] != param_4[1]) {
      bVar1 = (ulong)param_4[1] < (ulong)param_3[1];
    }
    if (bVar1) {
      uVar2 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar2;
      uVar2 = param_3[1];
      param_3[1] = param_4[1];
      param_4[1] = uVar2;
      uVar2 = param_3[2];
      param_3[2] = param_4[2];
      param_4[2] = uVar2;
      bVar1 = (ulong)param_3[2] < (ulong)param_2[2];
      if (param_2[1] != param_3[1]) {
        bVar1 = (ulong)param_3[1] < (ulong)param_2[1];
      }
      if (bVar1) {
        uVar2 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar2;
        uVar2 = param_2[1];
        param_2[1] = param_3[1];
        param_3[1] = uVar2;
        uVar2 = param_2[2];
        param_2[2] = param_3[2];
        param_3[2] = uVar2;
        bVar1 = (ulong)param_2[2] < (ulong)param_1[2];
        if (param_1[1] != param_2[1]) {
          bVar1 = (ulong)param_2[1] < (ulong)param_1[1];
        }
        if (bVar1) {
          uVar2 = *param_1;
          *param_1 = *param_2;
          *param_2 = uVar2;
          uVar2 = param_1[1];
          param_1[1] = param_2[1];
          param_2[1] = uVar2;
          uVar2 = param_1[2];
          param_1[2] = param_2[2];
          param_2[2] = uVar2;
        }
      }
    }
  }
  return;
}



/* Entry: 109d99994; end: 109d99c47;  */

bool FUN_109d99994(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      bVar5 = (ulong)param_2[-1] < (ulong)param_1[2];
      if (param_1[1] != param_2[-2]) {
        bVar5 = (ulong)param_2[-2] < (ulong)param_1[1];
      }
      if (!bVar5) {
        return true;
      }
      uVar7 = *param_1;
      *param_1 = param_2[-3];
      param_2[-3] = uVar7;
      uVar7 = param_1[1];
      param_1[1] = param_2[-2];
      param_2[-2] = uVar7;
      uVar7 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = uVar7;
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      FUN_109d9955c(param_1,param_1 + 3,param_2 + -3);
      return true;
    }
    if (uVar6 == 4) {
      FUN_109d9955c(param_1,param_1 + 3,param_1 + 6);
      bVar5 = (ulong)param_2[-1] < (ulong)param_1[8];
      if (param_1[7] != param_2[-2]) {
        bVar5 = (ulong)param_2[-2] < (ulong)param_1[7];
      }
      if (!bVar5) {
        return true;
      }
      uVar7 = param_1[6];
      param_1[6] = param_2[-3];
      param_2[-3] = uVar7;
      uVar7 = param_1[7];
      param_1[7] = param_2[-2];
      param_2[-2] = uVar7;
      uVar7 = param_1[8];
      param_1[8] = param_2[-1];
      param_2[-1] = uVar7;
      uVar6 = param_1[7];
      uVar1 = param_1[8];
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      bVar5 = uVar1 < uVar3;
      if (uVar2 != uVar6) {
        bVar5 = uVar6 < uVar2;
      }
      if (!bVar5) {
        return true;
      }
      uVar11 = param_1[3];
      uVar7 = param_1[6];
      param_1[3] = uVar7;
      param_1[4] = uVar6;
      param_1[5] = uVar1;
      param_1[6] = uVar11;
      param_1[7] = uVar2;
      param_1[8] = uVar3;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      bVar5 = uVar1 < uVar3;
      if (uVar2 != uVar6) {
        bVar5 = uVar6 < uVar2;
      }
      if (!bVar5) {
        return true;
      }
      uVar11 = *param_1;
      *param_1 = uVar7;
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      param_1[3] = uVar11;
      param_1[4] = uVar2;
      param_1[5] = uVar3;
      return true;
    }
    if (uVar6 == 5) {
      FUN_109d996ec(param_1,param_1 + 3,param_1 + 6,param_1 + 9,param_2 + -3);
      return true;
    }
  }
  FUN_109d9955c(param_1,param_1 + 3,param_1 + 6);
  if (param_1 + 9 != param_2) {
    lVar9 = 0;
    iVar10 = 0;
    puVar13 = param_1 + 9;
    puVar14 = param_1 + 6;
    do {
      puVar8 = puVar13;
      uVar6 = puVar8[1];
      uVar2 = puVar8[2];
      bVar5 = uVar2 < (ulong)puVar14[2];
      if (puVar14[1] != uVar6) {
        bVar5 = uVar6 < (ulong)puVar14[1];
      }
      if (bVar5) {
        uVar7 = *puVar8;
        lVar4 = lVar9;
        do {
          lVar12 = lVar4;
          *(undefined8 *)((long)param_1 + lVar12 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x38);
          *(undefined8 *)((long)param_1 + lVar12 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x30);
          *(undefined8 *)((long)param_1 + lVar12 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar12 + 0x40);
          puVar13 = param_1;
          if (lVar12 == -0x30) goto LAB_109d99b20;
          uVar1 = *(ulong *)((long)param_1 + lVar12 + 0x20);
          bVar5 = uVar2 < *(ulong *)((long)param_1 + lVar12 + 0x28);
          if (uVar1 != uVar6) {
            bVar5 = uVar6 < uVar1;
          }
          lVar4 = lVar12 + -0x18;
        } while (bVar5);
        puVar13 = (undefined8 *)((long)param_1 + lVar12 + 0x30);
LAB_109d99b20:
        *puVar13 = uVar7;
        puVar13[1] = uVar6;
        puVar13[2] = uVar2;
        iVar10 = iVar10 + 1;
        if (iVar10 == 8) {
          return puVar8 + 3 == param_2;
        }
      }
      lVar9 = lVar9 + 0x18;
      puVar13 = puVar8 + 3;
      puVar14 = puVar8;
    } while (puVar8 + 3 != param_2);
  }
  return true;
}



/* Entry: 109d99c48; end: 109d99d6b;  */

void FUN_109d99c48(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  ulong uVar8;
  
  uVar2 = *param_1;
  iVar6 = (int)LZCOUNT((uVar2 >> 1) - 1);
  uVar3 = 0x40;
  if (2 < iVar6 - 0x1cU) {
    uVar3 = 1 << (ulong)(0x21U - iVar6 & 0x1f);
  }
  uVar1 = 0;
  if (1 < uVar2) {
    uVar1 = uVar3;
  }
  uVar8 = (ulong)uVar1;
  if (((uVar2 & 1) != 0) && (uVar1 < 5)) {
    puVar5 = param_1 + 2;
    puVar7 = param_1 + 0x1a;
    param_1[0] = 1;
    param_1[1] = 0;
LAB_109d99cb0:
    do {
      puVar4 = puVar5 + 6;
      puVar5[0] = 0xfffff000;
      puVar5[1] = 0xffffffff;
      puVar5 = puVar4;
    } while (puVar4 != puVar7);
    return;
  }
  if ((uVar2 & 1) == 0) {
    if (uVar1 == param_1[4]) {
      param_1[0] = 0;
      param_1[1] = 0;
      if (uVar1 == 0) {
        return;
      }
      puVar5 = *(uint **)(param_1 + 2);
      puVar7 = puVar5 + uVar8 * 6;
      goto LAB_109d99cb0;
    }
    __ZdlPvSt11align_val_t(*(undefined8 *)(param_1 + 2),8);
  }
  if (uVar1 < 5) {
    param_1[0] = 1;
    param_1[1] = 0;
  }
  else {
    *param_1 = *param_1 & 0xfffffffe;
    puVar5 = (uint *)(uVar8 * 0x18);
    __ZnwmSt11align_val_t(puVar5,8);
    *(uint **)(param_1 + 2) = puVar5;
    *(ulong *)(param_1 + 4) = uVar8;
    uVar3 = *param_1;
    *param_1 = uVar3 & 1;
    param_1[1] = 0;
    if ((uVar3 & 1) == 0) {
      param_1 = puVar5 + uVar8 * 6;
      goto LAB_109d99d54;
    }
  }
  puVar5 = param_1 + 2;
  param_1 = param_1 + 0x1a;
LAB_109d99d54:
  do {
    puVar7 = puVar5 + 6;
    puVar5[0] = 0xfffff000;
    puVar5[1] = 0xffffffff;
    puVar5 = puVar7;
  } while (puVar7 != param_1);
  return;
}



/* Entry: 109d99d6c; end: 109d9abb3;  */

void FUN_109d99d6c(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong *puStack_68;
  
LAB_109d99d9c:
  puVar17 = param_2 + -1;
  puStack_68 = param_2 + -2;
  puVar13 = param_2 + -4;
  puVar24 = param_2 + -7;
  puVar14 = param_1;
LAB_109d99dc0:
  do {
    param_1 = puVar14;
    uVar15 = (long)param_2 - (long)param_1;
    uVar11 = ((long)uVar15 >> 3) * -0x5555555555555555;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        if (param_1[2] <= param_2[-1]) {
          return;
        }
        uVar11 = *param_1;
        *param_1 = param_2[-3];
        param_2[-3] = uVar11;
        uVar11 = param_1[1];
        param_1[1] = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = uVar11;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        puVar13 = param_1 + 5;
        uVar11 = *puVar13;
        puVar24 = param_1 + 2;
        uVar15 = *puVar24;
        puVar14 = param_2 + -1;
        if (uVar11 < uVar15) {
          puVar17 = param_1 + 1;
          uVar26 = *param_1;
          if (*puVar14 < uVar11) {
            *param_1 = param_2[-3];
            param_2[-3] = uVar26;
            puVar13 = puVar24;
          }
          else {
            puVar17 = param_1 + 4;
            uVar22 = param_1[1];
            *param_1 = param_1[3];
            param_1[1] = *puVar17;
            *puVar17 = uVar22;
            param_1[2] = uVar11;
            param_1[3] = uVar26;
            param_1[5] = uVar15;
            if (uVar15 <= *puVar14) {
              return;
            }
            param_1[3] = param_2[-3];
            param_2[-3] = uVar26;
          }
        }
        else {
          if (uVar11 <= *puVar14) {
            return;
          }
          uVar11 = param_1[3];
          param_1[3] = param_2[-3];
          param_2[-3] = uVar11;
          puStack_68 = param_1 + 4;
          uVar11 = *puStack_68;
          *puStack_68 = param_2[-2];
          param_2[-2] = uVar11;
          uVar11 = param_1[5];
          param_1[5] = param_2[-1];
          param_2[-1] = uVar11;
          if (param_1[2] <= param_1[5]) {
            return;
          }
          uVar11 = *param_1;
          *param_1 = param_1[3];
          param_1[3] = uVar11;
          puVar17 = param_1 + 1;
          puVar14 = puVar13;
          puVar13 = puVar24;
        }
        uVar11 = *puVar17;
        *puVar17 = *puStack_68;
        *puStack_68 = uVar11;
        uVar11 = *puVar13;
        *puVar13 = *puVar14;
        *puVar14 = uVar11;
        return;
      }
      if (uVar11 == 4) {
        puVar14 = param_1 + 3;
        puVar13 = param_1 + 6;
        puVar9 = param_1 + 5;
        uVar11 = *puVar9;
        puVar17 = param_1 + 2;
        puVar10 = param_1 + 8;
        uVar15 = *puVar10;
        puVar24 = puVar17;
        if (uVar11 < *puVar17) {
          puVar12 = param_1 + 1;
          uVar26 = *param_1;
          if (uVar15 < uVar11) {
            *param_1 = *puVar13;
            *puVar13 = uVar26;
          }
          else {
            *param_1 = *puVar14;
            *puVar14 = uVar26;
            puVar12 = param_1 + 4;
            uVar11 = param_1[1];
            param_1[1] = *puVar12;
            *puVar12 = uVar11;
            uVar11 = param_1[2];
            param_1[2] = param_1[5];
            param_1[5] = uVar11;
            uVar15 = *puVar10;
            if (uVar11 <= uVar15) goto LAB_109d9ace4;
            uVar11 = *puVar14;
            *puVar14 = *puVar13;
            *puVar13 = uVar11;
            puVar24 = puVar9;
          }
          puVar18 = param_1 + 7;
          puVar16 = puVar10;
        }
        else {
          if (uVar11 <= uVar15) goto LAB_109d9ace4;
          uVar11 = *puVar14;
          *puVar14 = *puVar13;
          *puVar13 = uVar11;
          puVar18 = param_1 + 4;
          uVar11 = *puVar18;
          *puVar18 = param_1[7];
          param_1[7] = uVar11;
          uVar15 = param_1[5];
          param_1[5] = param_1[8];
          param_1[8] = uVar15;
          if (*puVar17 <= param_1[5]) goto LAB_109d9ace4;
          uVar11 = *param_1;
          puVar12 = param_1 + 1;
          *param_1 = *puVar14;
          *puVar14 = uVar11;
          puVar16 = puVar9;
        }
        uVar11 = *puVar12;
        *puVar12 = *puVar18;
        *puVar18 = uVar11;
        uVar11 = *puVar24;
        *puVar24 = *puVar16;
        *puVar16 = uVar11;
        uVar15 = *puVar10;
LAB_109d9ace4:
        if (param_2[-1] < uVar15) {
          uVar11 = *puVar13;
          *puVar13 = param_2[-3];
          param_2[-3] = uVar11;
          uVar11 = param_1[7];
          param_1[7] = param_2[-2];
          param_2[-2] = uVar11;
          uVar11 = param_1[8];
          param_1[8] = param_2[-1];
          param_2[-1] = uVar11;
          if (param_1[8] < *puVar9) {
            uVar11 = *puVar14;
            *puVar14 = *puVar13;
            *puVar13 = uVar11;
            uVar11 = param_1[4];
            param_1[4] = param_1[7];
            param_1[7] = uVar11;
            uVar11 = param_1[5];
            param_1[5] = param_1[8];
            param_1[8] = uVar11;
            if (param_1[5] < *puVar17) {
              uVar11 = *param_1;
              *param_1 = *puVar14;
              *puVar14 = uVar11;
              uVar11 = param_1[1];
              param_1[1] = param_1[4];
              param_1[4] = uVar11;
              uVar11 = param_1[2];
              param_1[2] = param_1[5];
              param_1[5] = uVar11;
            }
          }
        }
        return;
      }
      if (uVar11 == 5) {
        FUN_109d9abb4(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
        if (param_1[0xb] <= param_2[-1]) {
          return;
        }
        uVar11 = param_1[9];
        param_1[9] = param_2[-3];
        param_2[-3] = uVar11;
        uVar11 = param_1[10];
        param_1[10] = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = param_1[0xb];
        param_1[0xb] = param_2[-1];
        param_2[-1] = uVar11;
        uVar11 = param_1[0xb];
        uVar15 = param_1[8];
        if (uVar15 <= uVar11) {
          return;
        }
        uVar26 = param_1[6];
        uVar8 = param_1[7];
        uVar22 = param_1[9];
        uVar7 = param_1[10];
        uVar19 = param_1[5];
        param_1[6] = uVar22;
        param_1[7] = uVar7;
        param_1[8] = uVar11;
        param_1[9] = uVar26;
        param_1[10] = uVar8;
        param_1[0xb] = uVar15;
        if (uVar19 <= uVar11) {
          return;
        }
        uVar15 = param_1[3];
        uVar26 = param_1[4];
        uVar8 = param_1[2];
        param_1[3] = uVar22;
        param_1[4] = uVar7;
        param_1[5] = uVar11;
        param_1[6] = uVar15;
        param_1[7] = uVar26;
        param_1[8] = uVar19;
        if (uVar8 <= uVar11) {
          return;
        }
        uVar15 = *param_1;
        uVar26 = param_1[1];
        *param_1 = uVar22;
        param_1[1] = uVar7;
        param_1[2] = uVar11;
        param_1[3] = uVar15;
        param_1[4] = uVar26;
        param_1[5] = uVar8;
        return;
      }
    }
    if ((long)uVar15 < 0x240) {
      puVar14 = param_1 + 3;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar14 == param_2) {
          return;
        }
        puVar13 = param_1 + 5;
        do {
          puVar24 = puVar14;
          uVar11 = param_1[5];
          if (uVar11 < param_1[2]) {
            uVar15 = *puVar24;
            uVar26 = param_1[4];
            puVar14 = puVar13;
            do {
              puVar17 = puVar14;
              puVar17[-1] = puVar17[-4];
              puVar17[-2] = puVar17[-5];
              puVar14 = puVar17 + -3;
              *puVar17 = *puVar14;
            } while (uVar11 < puVar17[-6]);
            puVar17[-5] = uVar15;
            puVar17[-4] = uVar26;
            *puVar14 = uVar11;
          }
          puVar13 = puVar13 + 3;
          puVar14 = puVar24 + 3;
          param_1 = puVar24;
        } while (puVar24 + 3 != param_2);
        return;
      }
      if (param_1 == param_2 || puVar14 == param_2) {
        return;
      }
      lVar21 = 0;
      puVar13 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar22 = uVar11 - 2 >> 1;
      uVar26 = uVar22;
      goto LAB_109d9a834;
    }
    puVar14 = param_1 + (uVar11 >> 1) * 3;
    uVar11 = *puVar17;
    if (uVar15 < 0xc01) {
      puVar9 = param_1 + 2;
      uVar15 = *puVar9;
      puVar10 = puVar14 + 2;
      uVar26 = *puVar10;
      if (uVar15 < uVar26) {
        puVar12 = puVar14 + 1;
        uVar22 = *puVar14;
        puVar16 = puVar17;
        puVar18 = puStack_68;
        if (uVar11 < uVar15) {
          *puVar14 = param_2[-3];
          param_2[-3] = uVar22;
          puVar9 = puVar10;
        }
        else {
          *puVar14 = *param_1;
          *param_1 = uVar22;
          puVar12 = param_1 + 1;
          uVar11 = puVar14[1];
          puVar14[1] = *puVar12;
          *puVar12 = uVar11;
          puVar14[2] = uVar15;
          param_1[2] = uVar26;
          if (uVar26 <= *puVar17) goto LAB_109d9a394;
          *param_1 = param_2[-3];
          param_2[-3] = uVar22;
        }
LAB_109d9a0d4:
        uVar11 = *puVar12;
        *puVar12 = *puVar18;
        *puVar18 = uVar11;
        uVar11 = *puVar9;
        *puVar9 = *puVar16;
        *puVar16 = uVar11;
      }
      else if (uVar11 < uVar15) {
        uVar11 = *param_1;
        *param_1 = param_2[-3];
        param_2[-3] = uVar11;
        puVar18 = param_1 + 1;
        uVar11 = *puVar18;
        *puVar18 = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = param_1[2];
        param_1[2] = param_2[-1];
        param_2[-1] = uVar11;
        if (param_1[2] < *puVar10) {
          uVar11 = *puVar14;
          puVar12 = puVar14 + 1;
          *puVar14 = *param_1;
          *param_1 = uVar11;
          puVar16 = puVar9;
          puVar9 = puVar10;
          goto LAB_109d9a0d4;
        }
      }
    }
    else {
      puVar9 = puVar14 + 2;
      uVar15 = *puVar9;
      puVar10 = param_1 + 2;
      uVar26 = *puVar10;
      if (uVar15 < uVar26) {
        puVar12 = param_1 + 1;
        uVar22 = *param_1;
        puVar18 = puStack_68;
        puVar16 = puVar17;
        if (uVar11 < uVar15) {
          *param_1 = param_2[-3];
          param_2[-3] = uVar22;
        }
        else {
          *param_1 = *puVar14;
          *puVar14 = uVar22;
          puVar12 = puVar14 + 1;
          uVar11 = param_1[1];
          param_1[1] = *puVar12;
          *puVar12 = uVar11;
          param_1[2] = uVar15;
          puVar14[2] = uVar26;
          if (uVar26 <= *puVar17) goto LAB_109d99fdc;
          *puVar14 = param_2[-3];
          param_2[-3] = uVar22;
          puVar10 = puVar9;
        }
LAB_109d99fbc:
        uVar11 = *puVar12;
        *puVar12 = *puVar18;
        *puVar18 = uVar11;
        uVar11 = *puVar10;
        *puVar10 = *puVar16;
        *puVar16 = uVar11;
      }
      else if (uVar11 < uVar15) {
        uVar11 = *puVar14;
        *puVar14 = param_2[-3];
        param_2[-3] = uVar11;
        puVar18 = puVar14 + 1;
        uVar11 = *puVar18;
        *puVar18 = param_2[-2];
        param_2[-2] = uVar11;
        uVar11 = puVar14[2];
        puVar14[2] = param_2[-1];
        param_2[-1] = uVar11;
        if (puVar14[2] < *puVar10) {
          uVar11 = *param_1;
          puVar12 = param_1 + 1;
          *param_1 = *puVar14;
          *puVar14 = uVar11;
          puVar16 = puVar9;
          goto LAB_109d99fbc;
        }
      }
LAB_109d99fdc:
      puVar10 = puVar14 + -1;
      uVar11 = *puVar10;
      puVar18 = param_1 + 5;
      if (uVar11 < *puVar18) {
        uVar15 = param_1[3];
        puVar16 = param_2 + -5;
        puVar25 = puVar13;
        if (*puVar13 < uVar11) {
          puVar12 = param_1 + 4;
          param_1[3] = param_2[-6];
          param_2[-6] = uVar15;
        }
        else {
          param_1[3] = puVar14[-3];
          puVar14[-3] = uVar15;
          puVar12 = puVar14 + -2;
          uVar11 = param_1[4];
          param_1[4] = *puVar12;
          *puVar12 = uVar11;
          uVar11 = param_1[5];
          param_1[5] = puVar14[-1];
          puVar14[-1] = uVar11;
          if (uVar11 <= *puVar13) goto LAB_109d9a170;
          uVar11 = puVar14[-3];
          puVar14[-3] = param_2[-6];
          param_2[-6] = uVar11;
          puVar18 = puVar10;
        }
LAB_109d9a150:
        uVar11 = *puVar12;
        *puVar12 = *puVar16;
        *puVar16 = uVar11;
        uVar11 = *puVar18;
        *puVar18 = *puVar25;
        *puVar25 = uVar11;
      }
      else if (*puVar13 < uVar11) {
        uVar11 = puVar14[-3];
        puVar14[-3] = param_2[-6];
        param_2[-6] = uVar11;
        puVar16 = puVar14 + -2;
        uVar11 = *puVar16;
        *puVar16 = param_2[-5];
        param_2[-5] = uVar11;
        uVar11 = puVar14[-1];
        puVar14[-1] = param_2[-4];
        param_2[-4] = uVar11;
        if (puVar14[-1] < *puVar18) {
          uVar11 = param_1[3];
          param_1[3] = puVar14[-3];
          puVar14[-3] = uVar11;
          puVar12 = param_1 + 4;
          puVar25 = puVar10;
          goto LAB_109d9a150;
        }
      }
LAB_109d9a170:
      puVar16 = puVar14 + 5;
      uVar11 = *puVar16;
      puVar18 = param_1 + 8;
      if (uVar11 < *puVar18) {
        uVar15 = param_1[6];
        puVar20 = puVar24;
        puVar12 = param_2 + -8;
        if (*puVar24 < uVar11) {
          puVar25 = param_1 + 7;
          param_1[6] = param_2[-9];
          param_2[-9] = uVar15;
        }
        else {
          param_1[6] = puVar14[3];
          puVar14[3] = uVar15;
          puVar25 = puVar14 + 4;
          uVar11 = param_1[7];
          param_1[7] = *puVar25;
          *puVar25 = uVar11;
          uVar11 = param_1[8];
          param_1[8] = puVar14[5];
          puVar14[5] = uVar11;
          if (uVar11 <= *puVar24) goto LAB_109d9a294;
          uVar11 = puVar14[3];
          puVar14[3] = param_2[-9];
          param_2[-9] = uVar11;
          puVar18 = puVar16;
        }
LAB_109d9a270:
        uVar11 = *puVar25;
        *puVar25 = *puVar12;
        *puVar12 = uVar11;
        uVar11 = *puVar18;
        *puVar18 = *puVar20;
        *puVar20 = uVar11;
        uVar11 = *puVar16;
      }
      else if (*puVar24 < uVar11) {
        uVar11 = puVar14[3];
        puVar14[3] = param_2[-9];
        param_2[-9] = uVar11;
        puVar12 = puVar14 + 4;
        uVar11 = *puVar12;
        *puVar12 = param_2[-8];
        param_2[-8] = uVar11;
        uVar11 = puVar14[5];
        puVar14[5] = param_2[-7];
        param_2[-7] = uVar11;
        uVar11 = puVar14[5];
        if (uVar11 < *puVar18) {
          uVar11 = param_1[6];
          param_1[6] = puVar14[3];
          puVar14[3] = uVar11;
          puVar25 = param_1 + 7;
          puVar20 = puVar16;
          goto LAB_109d9a270;
        }
      }
LAB_109d9a294:
      uVar15 = *puVar9;
      uVar26 = *puVar10;
      if (uVar15 < uVar26) {
        uVar22 = puVar14[-3];
        if (uVar11 < uVar15) {
          puVar12 = puVar14 + -2;
          puVar14[-3] = puVar14[3];
          puVar14[3] = uVar22;
        }
        else {
          puVar12 = puVar14 + 1;
          uVar8 = puVar14[-2];
          puVar14[-3] = *puVar14;
          puVar14[-2] = *puVar12;
          *puVar12 = uVar8;
          puVar14[-1] = uVar15;
          *puVar14 = uVar22;
          puVar14[2] = uVar26;
          uVar15 = uVar26;
          if (uVar26 <= uVar11) goto LAB_109d9a36c;
          *puVar14 = puVar14[3];
          puVar14[3] = uVar22;
          puVar10 = puVar9;
        }
        puVar18 = puVar14 + 4;
        puVar9 = puVar16;
LAB_109d9a34c:
        uVar15 = *puVar12;
        *puVar12 = *puVar18;
        *puVar18 = uVar15;
        *puVar10 = uVar11;
        *puVar9 = uVar26;
        uVar15 = puVar14[2];
        uVar22 = *puVar14;
      }
      else {
        uVar8 = *puVar14;
        uVar22 = uVar8;
        if (uVar11 < uVar15) {
          uVar22 = puVar14[3];
          *puVar14 = uVar22;
          puVar18 = puVar14 + 1;
          uVar7 = *puVar18;
          *puVar18 = puVar14[4];
          puVar14[2] = uVar11;
          puVar14[3] = uVar8;
          puVar14[4] = uVar7;
          puVar14[5] = uVar15;
          uVar15 = uVar11;
          if (uVar11 < uVar26) {
            uVar15 = puVar14[-3];
            puVar14[-3] = uVar22;
            *puVar14 = uVar15;
            puVar12 = puVar14 + -2;
            goto LAB_109d9a34c;
          }
        }
      }
LAB_109d9a36c:
      uVar11 = *param_1;
      *param_1 = uVar22;
      *puVar14 = uVar11;
      uVar11 = param_1[1];
      param_1[1] = puVar14[1];
      puVar14[1] = uVar11;
      uVar11 = param_1[2];
      param_1[2] = uVar15;
      puVar14[2] = uVar11;
    }
LAB_109d9a394:
    param_3 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      uVar11 = *param_1;
      uVar15 = param_1[2];
LAB_109d9a3b8:
      lVar21 = 0;
      uVar26 = param_1[1];
      do {
        lVar6 = lVar21 + 0x28;
        lVar21 = lVar21 + 0x18;
      } while (*(ulong *)((long)param_1 + lVar6) < uVar15);
      puVar9 = (ulong *)((long)param_1 + lVar21);
      puVar14 = param_2;
      if (lVar21 == 0x18) {
        do {
          puVar10 = puVar14;
          if (puVar14 <= puVar9) break;
          puVar10 = puVar14 + -3;
          puVar18 = puVar14 + -1;
          puVar14 = puVar10;
        } while (uVar15 <= *puVar18);
      }
      else {
        do {
          puVar10 = puVar14 + -3;
          puVar18 = puVar14 + -1;
          puVar14 = puVar10;
        } while (uVar15 <= *puVar18);
      }
      puVar18 = puVar10;
      puVar14 = puVar9;
      if (puVar9 < puVar10) {
        do {
          uVar22 = *puVar14;
          *puVar14 = *puVar18;
          *puVar18 = uVar22;
          uVar22 = puVar14[1];
          puVar14[1] = puVar18[1];
          puVar18[1] = uVar22;
          uVar22 = puVar14[2];
          puVar14[2] = puVar18[2];
          puVar18[2] = uVar22;
          do {
            puVar16 = puVar14 + 5;
            puVar14 = puVar14 + 3;
          } while (*puVar16 < uVar15);
          do {
            puVar16 = puVar18 + -1;
            puVar18 = puVar18 + -3;
          } while (uVar15 <= *puVar16);
        } while (puVar14 < puVar18);
      }
      puVar18 = puVar14 + -3;
      if (puVar18 != param_1) {
        *param_1 = puVar14[-3];
        param_1[1] = puVar14[-2];
        param_1[2] = puVar14[-1];
      }
      puVar14[-3] = uVar11;
      puVar14[-2] = uVar26;
      puVar14[-1] = uVar15;
      if (puVar10 <= puVar9) {
        puVar9 = param_1;
        FUN_109d9ada4(param_1,puVar18);
        puVar10 = puVar14;
        FUN_109d9ada4(puVar14,param_2);
        if ((int)puVar10 != 0) goto LAB_109d9a614;
        if (((ulong)puVar9 & 1) != 0) goto LAB_109d99dc0;
      }
      FUN_109d99d6c(param_1,puVar18,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_109d99dc0;
    }
    uVar15 = param_1[2];
    uVar11 = *param_1;
    if (param_1[-1] < uVar15) goto LAB_109d9a3b8;
    puVar9 = param_1;
    if (uVar15 < *puVar17) {
      do {
        puVar14 = puVar9 + 3;
        puVar10 = puVar9 + 5;
        puVar9 = puVar14;
      } while (*puVar10 <= uVar15);
    }
    else {
      do {
        puVar14 = puVar9 + 3;
        if (param_2 <= puVar14) break;
        puVar10 = puVar9 + 5;
        puVar9 = puVar14;
      } while (*puVar10 <= uVar15);
    }
    puVar9 = param_2;
    puVar10 = param_2;
    if (puVar14 < param_2) {
      do {
        puVar10 = puVar9 + -3;
        puVar18 = puVar9 + -1;
        puVar9 = puVar10;
      } while (uVar15 < *puVar18);
    }
    uVar26 = param_1[1];
    while (puVar14 < puVar10) {
      uVar22 = *puVar14;
      *puVar14 = *puVar10;
      *puVar10 = uVar22;
      uVar22 = puVar14[1];
      puVar14[1] = puVar10[1];
      puVar10[1] = uVar22;
      uVar22 = puVar14[2];
      puVar14[2] = puVar10[2];
      puVar10[2] = uVar22;
      do {
        puVar9 = puVar14 + 5;
        puVar14 = puVar14 + 3;
      } while (*puVar9 <= uVar15);
      do {
        puVar9 = puVar10 + -1;
        puVar10 = puVar10 + -3;
      } while (uVar15 < *puVar9);
    }
    if (puVar14 + -3 != param_1) {
      *param_1 = puVar14[-3];
      param_1[1] = puVar14[-2];
      param_1[2] = puVar14[-1];
    }
    param_4 = 0;
    puVar14[-3] = uVar11;
    puVar14[-2] = uVar26;
    puVar14[-1] = uVar15;
  } while( true );
LAB_109d9a7a8:
  puVar24 = puVar14;
  uVar11 = puVar13[5];
  if (uVar11 < puVar13[2]) {
    uVar15 = *puVar24;
    uVar26 = puVar13[4];
    lVar6 = lVar21;
    do {
      lVar23 = lVar6;
      puVar2 = (undefined8 *)((long)param_1 + lVar23);
      puVar2[4] = puVar2[1];
      puVar2[3] = *puVar2;
      puVar2[5] = puVar2[2];
      puVar14 = param_1;
      if (lVar23 == 0) goto LAB_109d9a800;
      lVar6 = lVar23 + -0x18;
    } while (uVar11 < (ulong)puVar2[-1]);
    puVar14 = (ulong *)((long)param_1 + lVar23);
LAB_109d9a800:
    *puVar14 = uVar15;
    puVar14[1] = uVar26;
    puVar14[2] = uVar11;
  }
  lVar21 = lVar21 + 0x18;
  puVar14 = puVar24 + 3;
  puVar13 = puVar24;
  if (puVar24 + 3 == param_2) {
    return;
  }
  goto LAB_109d9a7a8;
LAB_109d9a834:
  do {
    if ((long)uVar26 <= (long)uVar22) {
      uVar7 = uVar26 << 1 | 1;
      puVar14 = param_1 + uVar7 * 3;
      uVar8 = uVar26 * 2 + 2;
      uVar19 = uVar7;
      if ((long)uVar8 < (long)uVar11) {
        puVar13 = puVar14 + 2;
        puVar24 = puVar14 + 5;
        lVar21 = 0x18;
        if (*puVar24 <= *puVar13) {
          lVar21 = 0;
        }
        puVar14 = (ulong *)((long)puVar14 + lVar21);
        uVar19 = uVar8;
        if (*puVar24 <= *puVar13) {
          uVar19 = uVar7;
        }
      }
      puVar13 = param_1 + uVar26 * 3;
      uVar8 = puVar13[2];
      if (uVar8 <= puVar14[2]) {
        uVar7 = *puVar13;
        uVar5 = puVar13[1];
        do {
          puVar24 = puVar14;
          *puVar13 = *puVar24;
          puVar13[1] = puVar24[1];
          puVar13[2] = puVar24[2];
          if ((long)uVar22 < (long)uVar19) break;
          uVar3 = uVar19 << 1 | 1;
          puVar14 = param_1 + uVar3 * 3;
          uVar1 = uVar19 * 2 + 2;
          uVar19 = uVar3;
          if ((long)uVar1 < (long)uVar11) {
            puVar13 = puVar14 + 2;
            puVar17 = puVar14 + 5;
            lVar21 = 0x18;
            if (*puVar17 <= *puVar13) {
              lVar21 = 0;
            }
            puVar14 = (ulong *)((long)puVar14 + lVar21);
            uVar19 = uVar1;
            if (*puVar17 <= *puVar13) {
              uVar19 = uVar3;
            }
          }
          puVar13 = puVar24;
        } while (uVar8 <= puVar14[2]);
        *puVar24 = uVar7;
        puVar24[1] = uVar5;
        puVar24[2] = uVar8;
      }
    }
    bVar4 = uVar26 != 0;
    uVar26 = uVar26 - 1;
  } while (bVar4);
  lVar21 = (uVar15 >> 3) * -0x5555555555555555;
  do {
    uVar11 = *param_1;
    uVar15 = param_1[1];
    uVar22 = param_1[2];
    uVar26 = 0;
    puVar14 = param_1;
    do {
      uVar7 = uVar26 << 1 | 1;
      uVar8 = uVar26 * 2 + 2;
      uVar19 = uVar7;
      puVar13 = puVar14 + uVar26 * 3 + 3;
      if (((long)uVar8 < lVar21) &&
         (uVar19 = uVar8, puVar13 = puVar14 + uVar26 * 3 + 6,
         puVar14[uVar26 * 3 + 8] <= puVar14[uVar26 * 3 + 5])) {
        uVar19 = uVar7;
        puVar13 = puVar14 + uVar26 * 3 + 3;
      }
      *puVar14 = *puVar13;
      puVar14[1] = puVar13[1];
      puVar14[2] = puVar13[2];
      uVar26 = uVar19;
      puVar14 = puVar13;
    } while ((long)uVar19 <= (long)(lVar21 - 2U >> 1));
    if (puVar13 == param_2 + -3) {
      *puVar13 = uVar11;
      puVar13[1] = uVar15;
      puVar13[2] = uVar22;
    }
    else {
      *puVar13 = param_2[-3];
      puVar13[1] = param_2[-2];
      puVar13[2] = param_2[-1];
      param_2[-3] = uVar11;
      param_2[-2] = uVar15;
      param_2[-1] = uVar22;
      uVar11 = (long)puVar13 + (0x18 - (long)param_1);
      if (0x18 < (long)uVar11) {
        uVar15 = (uVar11 >> 3) * -0x5555555555555555 - 2 >> 1;
        uVar11 = puVar13[2];
        if ((param_1 + uVar15 * 3)[2] < uVar11) {
          uVar26 = *puVar13;
          uVar22 = puVar13[1];
          puVar14 = param_1 + uVar15 * 3;
          do {
            puVar24 = puVar14;
            *puVar13 = *puVar24;
            puVar13[1] = puVar24[1];
            puVar13[2] = puVar24[2];
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar14 = param_1 + uVar15 * 3;
            puVar13 = puVar24;
          } while ((param_1 + uVar15 * 3)[2] < uVar11);
          *puVar24 = uVar26;
          puVar24[1] = uVar22;
          puVar24[2] = uVar11;
        }
      }
    }
    bVar4 = lVar21 < 3;
    lVar21 = lVar21 + -1;
    param_2 = param_2 + -3;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_109d9a614:
  param_2 = puVar18;
  if (((ulong)puVar9 & 1) != 0) {
    return;
  }
  goto LAB_109d99d9c;
}



/* Entry: 109d9abb4; end: 109d9ada3;  */

void FUN_109d9abb4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  
  puVar2 = param_2 + 2;
  uVar5 = *puVar2;
  puVar1 = param_1 + 2;
  puVar3 = param_3 + 2;
  uVar7 = *puVar3;
  puVar8 = puVar1;
  if (uVar5 < *puVar1) {
    puVar4 = param_1 + 1;
    uVar9 = *param_1;
    if (uVar7 < uVar5) {
      *param_1 = *param_3;
      *param_3 = uVar9;
    }
    else {
      *param_1 = *param_2;
      *param_2 = uVar9;
      puVar4 = param_2 + 1;
      uVar9 = param_1[1];
      param_1[1] = *puVar4;
      *puVar4 = uVar9;
      uVar5 = param_1[2];
      param_1[2] = param_2[2];
      param_2[2] = uVar5;
      uVar7 = *puVar3;
      if (uVar5 <= uVar7) goto LAB_109d9ace4;
      uVar9 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar9;
      puVar8 = puVar2;
    }
    puVar6 = param_3 + 1;
    puVar10 = puVar3;
  }
  else {
    if (uVar5 <= uVar7) goto LAB_109d9ace4;
    uVar9 = *param_2;
    *param_2 = *param_3;
    *param_3 = uVar9;
    puVar6 = param_2 + 1;
    uVar9 = *puVar6;
    *puVar6 = param_3[1];
    param_3[1] = uVar9;
    uVar7 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = uVar7;
    if (*puVar1 <= (ulong)param_2[2]) goto LAB_109d9ace4;
    uVar9 = *param_1;
    puVar4 = param_1 + 1;
    *param_1 = *param_2;
    *param_2 = uVar9;
    puVar10 = puVar2;
  }
  uVar9 = *puVar4;
  *puVar4 = *puVar6;
  *puVar6 = uVar9;
  uVar5 = *puVar8;
  *puVar8 = *puVar10;
  *puVar10 = uVar5;
  uVar7 = *puVar3;
LAB_109d9ace4:
  if ((ulong)param_4[2] < uVar7) {
    uVar9 = *param_3;
    *param_3 = *param_4;
    *param_4 = uVar9;
    uVar9 = param_3[1];
    param_3[1] = param_4[1];
    param_4[1] = uVar9;
    uVar9 = param_3[2];
    param_3[2] = param_4[2];
    param_4[2] = uVar9;
    if ((ulong)param_3[2] < *puVar2) {
      uVar9 = *param_2;
      *param_2 = *param_3;
      *param_3 = uVar9;
      uVar9 = param_2[1];
      param_2[1] = param_3[1];
      param_3[1] = uVar9;
      uVar9 = param_2[2];
      param_2[2] = param_3[2];
      param_3[2] = uVar9;
      if ((ulong)param_2[2] < *puVar1) {
        uVar9 = *param_1;
        *param_1 = *param_2;
        *param_2 = uVar9;
        uVar9 = param_1[1];
        param_1[1] = param_2[1];
        param_2[1] = uVar9;
        uVar9 = param_1[2];
        param_1[2] = param_2[2];
        param_2[2] = uVar9;
      }
    }
  }
  return;
}



/* Entry: 109d9ada4; end: 109d9b1ff;  */

bool FUN_109d9ada4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar3 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
  if ((long)uVar3 < 3) {
    if (uVar3 < 2) {
      return true;
    }
    if (uVar3 == 2) {
      if ((ulong)param_1[2] <= (ulong)param_2[-1]) {
        return true;
      }
      uVar4 = *param_1;
      *param_1 = param_2[-3];
      param_2[-3] = uVar4;
      uVar4 = param_1[1];
      param_1[1] = param_2[-2];
      param_2[-2] = uVar4;
      uVar4 = param_1[2];
      param_1[2] = param_2[-1];
      param_2[-1] = uVar4;
      return true;
    }
  }
  else {
    if (uVar3 == 3) {
      puVar5 = param_1 + 5;
      uVar3 = *puVar5;
      puVar6 = param_1 + 2;
      uVar8 = *puVar6;
      puVar12 = param_2 + -1;
      if (uVar3 < uVar8) {
        puVar9 = param_1 + 1;
        uVar4 = *param_1;
        if (*puVar12 < uVar3) {
          *param_1 = param_2[-3];
          param_2[-3] = uVar4;
        }
        else {
          puVar9 = param_1 + 4;
          uVar17 = param_1[1];
          *param_1 = param_1[3];
          param_1[1] = *puVar9;
          *puVar9 = uVar17;
          param_1[2] = uVar3;
          param_1[3] = uVar4;
          param_1[5] = uVar8;
          if (uVar8 <= *puVar12) {
            return true;
          }
          param_1[3] = param_2[-3];
          param_2[-3] = uVar4;
          puVar6 = puVar5;
        }
        puVar13 = param_2 + -2;
        puVar5 = puVar12;
      }
      else {
        if (uVar3 <= *puVar12) {
          return true;
        }
        uVar4 = param_1[3];
        param_1[3] = param_2[-3];
        param_2[-3] = uVar4;
        puVar13 = param_1 + 4;
        uVar4 = *puVar13;
        *puVar13 = param_2[-2];
        param_2[-2] = uVar4;
        uVar4 = param_1[5];
        param_1[5] = param_2[-1];
        param_2[-1] = uVar4;
        if ((ulong)param_1[2] <= (ulong)param_1[5]) {
          return true;
        }
        uVar4 = *param_1;
        *param_1 = param_1[3];
        param_1[3] = uVar4;
        puVar9 = param_1 + 1;
      }
      uVar4 = *puVar9;
      *puVar9 = *puVar13;
      *puVar13 = uVar4;
      uVar3 = *puVar6;
      *puVar6 = *puVar5;
      *puVar5 = uVar3;
      return true;
    }
    if (uVar3 == 4) {
      FUN_109d9abb4(param_1,param_1 + 3,param_1 + 6,param_2 + -3);
      return true;
    }
    if (uVar3 == 5) {
      FUN_109d9abb4(param_1,param_1 + 3,param_1 + 6,param_1 + 9);
      if ((ulong)param_1[0xb] <= (ulong)param_2[-1]) {
        return true;
      }
      uVar4 = param_1[9];
      param_1[9] = param_2[-3];
      param_2[-3] = uVar4;
      uVar4 = param_1[10];
      param_1[10] = param_2[-2];
      param_2[-2] = uVar4;
      uVar4 = param_1[0xb];
      param_1[0xb] = param_2[-1];
      param_2[-1] = uVar4;
      uVar3 = param_1[0xb];
      uVar8 = param_1[8];
      if (uVar8 <= uVar3) {
        return true;
      }
      uVar4 = param_1[6];
      uVar16 = param_1[7];
      uVar17 = param_1[9];
      uVar1 = param_1[10];
      uVar15 = param_1[5];
      param_1[6] = uVar17;
      param_1[7] = uVar1;
      param_1[8] = uVar3;
      param_1[9] = uVar4;
      param_1[10] = uVar16;
      param_1[0xb] = uVar8;
      if (uVar15 <= uVar3) {
        return true;
      }
      uVar4 = param_1[3];
      uVar16 = param_1[4];
      uVar8 = param_1[2];
      param_1[3] = uVar17;
      param_1[4] = uVar1;
      param_1[5] = uVar3;
      param_1[6] = uVar4;
      param_1[7] = uVar16;
      param_1[8] = uVar15;
      if (uVar8 <= uVar3) {
        return true;
      }
      uVar4 = *param_1;
      uVar16 = param_1[1];
      *param_1 = uVar17;
      param_1[1] = uVar1;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      param_1[4] = uVar16;
      param_1[5] = uVar8;
      return true;
    }
  }
  puVar6 = param_1 + 5;
  uVar15 = *puVar6;
  puVar5 = param_1 + 2;
  uVar3 = *puVar5;
  puVar12 = param_1 + 8;
  uVar8 = *puVar12;
  if (uVar15 < uVar3) {
    puVar9 = param_1 + 1;
    uVar4 = *param_1;
    if (uVar8 < uVar15) {
      *param_1 = param_1[6];
      param_1[6] = uVar4;
      puVar13 = param_1 + 7;
      puVar6 = puVar12;
    }
    else {
      puVar9 = param_1 + 4;
      uVar17 = param_1[1];
      *param_1 = param_1[3];
      param_1[1] = *puVar9;
      *puVar9 = uVar17;
      param_1[2] = uVar15;
      param_1[3] = uVar4;
      param_1[5] = uVar3;
      if (uVar3 <= uVar8) goto LAB_109d9b0f4;
      param_1[3] = param_1[6];
      param_1[6] = uVar4;
      puVar13 = param_1 + 7;
      puVar5 = puVar6;
      puVar6 = puVar12;
    }
  }
  else {
    if (uVar15 <= uVar8) goto LAB_109d9b0f4;
    puVar13 = param_1 + 4;
    uVar17 = *puVar13;
    uVar16 = param_1[3];
    uVar4 = param_1[6];
    param_1[3] = uVar4;
    param_1[4] = param_1[7];
    param_1[5] = uVar8;
    param_1[6] = uVar16;
    param_1[7] = uVar17;
    param_1[8] = uVar15;
    if (uVar3 <= uVar8) goto LAB_109d9b0f4;
    uVar17 = *param_1;
    *param_1 = uVar4;
    param_1[3] = uVar17;
    puVar9 = param_1 + 1;
  }
  uVar4 = *puVar9;
  *puVar9 = *puVar13;
  *puVar13 = uVar4;
  *puVar5 = uVar8;
  *puVar6 = uVar3;
LAB_109d9b0f4:
  if (param_1 + 9 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar13 = param_1 + 9;
    puVar9 = param_1 + 6;
    do {
      puVar7 = puVar13;
      uVar3 = puVar7[2];
      if (uVar3 < (ulong)puVar9[2]) {
        uVar4 = *puVar7;
        uVar17 = puVar7[1];
        lVar2 = lVar10;
        do {
          lVar14 = lVar2;
          *(undefined8 *)((long)param_1 + lVar14 + 0x50) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x38);
          *(undefined8 *)((long)param_1 + lVar14 + 0x48) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x30);
          *(undefined8 *)((long)param_1 + lVar14 + 0x58) =
               *(undefined8 *)((long)param_1 + lVar14 + 0x40);
          puVar13 = param_1;
          if (lVar14 == -0x30) goto LAB_109d9b160;
          lVar2 = lVar14 + -0x18;
        } while (uVar3 < *(ulong *)((long)param_1 + lVar14 + 0x28));
        puVar13 = (undefined8 *)((long)param_1 + lVar14 + 0x30);
LAB_109d9b160:
        *puVar13 = uVar4;
        puVar13[1] = uVar17;
        puVar13[2] = uVar3;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return puVar7 + 3 == param_2;
        }
      }
      lVar10 = lVar10 + 0x18;
      puVar13 = puVar7 + 3;
      puVar9 = puVar7;
    } while (puVar7 + 3 != param_2);
  }
  return true;
}



/* Entry: 109d9b200; end: 109d9b297;  */

undefined8 FUN_109d9b200(long *param_1,ulong *param_2,long *param_3)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    puVar4 = (ulong *)0x0;
  }
  else {
    uVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = ((uint)(uVar5 >> 4) & 0xfffffff ^ (uint)uVar5 >> 9) & uVar2;
    puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
    uVar8 = *puVar4;
    if (uVar5 != uVar8) {
      iVar9 = 1;
      puVar7 = (ulong *)0x0;
      do {
        if (uVar8 == 0xfffffffffffff000) {
          uVar3 = 0;
          if (puVar7 != (ulong *)0x0) {
            puVar4 = puVar7;
          }
          goto LAB_109d9b240;
        }
        puVar1 = puVar4;
        if (puVar7 != (ulong *)0x0 || uVar8 != 0xffffffffffffe000) {
          puVar1 = puVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        puVar4 = (ulong *)(*param_1 + (ulong)uVar6 * 0x10);
        uVar8 = *puVar4;
        puVar7 = puVar1;
      } while (uVar5 != uVar8);
    }
    uVar3 = 1;
  }
LAB_109d9b240:
  *param_3 = (long)puVar4;
  return uVar3;
}



/* Entry: 109d9b298; end: 109d9b33f;  */

long * FUN_109d9b298(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d9b2e4;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d9b340(param_1,uVar1);
  FUN_109d9b200(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d9b2e4:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d9b340; end: 109d9b573;  */

void FUN_109d9b340(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 4);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -0x10;
        puVar3 = puVar3 + 2;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 4;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d9b200(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          puStack_38[1] = puVar7[1];
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 2;
        lVar4 = lVar4 + -0x10;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 4;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -0x10;
      puVar3 = puVar3 + 2;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d9b574; end: 109d9b5cb;  */

void FUN_109d9b574(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  FUN_109d9b5cc(*param_1,*param_1 + (ulong)*(uint *)(param_1 + 1) * 8,param_2);
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar3 = (ulong)uVar1 * -8;
    lVar2 = *param_1 + (ulong)uVar1 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_109d9808c(lVar2);
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0);
  }
  return;
}



/* Entry: 109d9b5cc; end: 109d9b67b;  */

void FUN_109d9b5cc(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    *param_3 = 0;
    lVar1 = *param_1;
    *param_3 = lVar1;
    if (lVar1 != 0) {
      FUN_109d947e4(param_1,lVar1,param_3);
    }
    *param_1 = 0;
    param_3 = param_3 + 1;
  }
  return;
}



/* Entry: 109d9b67c; end: 109d9b6d7;  */

long * FUN_109d9b67c(long *param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    lVar4 = (ulong)uVar1 * -8;
    lVar3 = (long)(plVar2 + uVar1);
    do {
      lVar3 = lVar3 + -8;
      FUN_109d9808c(lVar3);
      lVar4 = lVar4 + 8;
    } while (lVar4 != 0);
    plVar2 = (long *)*param_1;
  }
  if (plVar2 != param_1 + 2) {
    _free();
  }
  return param_1;
}



/* Entry: 109d9b6d8; end: 109d9b757;  */

void FUN_109d9b6d8(ulong *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long *plStack_38;
  
  plVar3 = param_2;
  FUN_109d9b758(param_2,param_3,&plStack_38);
  bVar1 = ((ulong)plVar3 & 1) == 0;
  if (bVar1) {
    plVar3 = param_2;
    FUN_109d9b7ec(param_2,param_3,param_3);
    *plVar3 = *param_3;
    plStack_38 = plVar3;
  }
  lVar4 = *param_2;
  uVar2 = *(uint *)(param_2 + 2);
  *param_1 = (ulong)plStack_38;
  param_1[1] = lVar4 + (ulong)uVar2 * 8;
  *(bool *)(param_1 + 2) = bVar1;
  return;
}



/* Entry: 109d9b758; end: 109d9b7eb;  */

undefined8 FUN_109d9b758(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  
  if ((int)param_1[2] == 0) {
    uVar3 = 0;
    plVar4 = (long *)0x0;
  }
  else {
    lVar5 = *param_2;
    uVar2 = (int)param_1[2] - 1;
    uVar6 = *(uint *)(lVar5 + 4) & uVar2;
    plVar4 = (long *)(*param_1 + (ulong)uVar6 * 8);
    lVar8 = *plVar4;
    if (lVar5 != lVar8) {
      iVar9 = 1;
      plVar7 = (long *)0x0;
      do {
        if (lVar8 == -0x1000) {
          uVar3 = 0;
          if (plVar7 != (long *)0x0) {
            plVar4 = plVar7;
          }
          goto LAB_109d9b794;
        }
        plVar1 = plVar4;
        if (plVar7 != (long *)0x0 || lVar8 != -0x2000) {
          plVar1 = plVar7;
        }
        uVar6 = uVar6 + iVar9;
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 & uVar2;
        plVar4 = (long *)(*param_1 + (ulong)uVar6 * 8);
        lVar8 = *plVar4;
        plVar7 = plVar1;
      } while (lVar5 != lVar8);
    }
    uVar3 = 1;
  }
LAB_109d9b794:
  *param_3 = (long)plVar4;
  return uVar3;
}



/* Entry: 109d9b7ec; end: 109d9b893;  */

long * FUN_109d9b7ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  uint uVar1;
  long *plStack_28;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) * 4 + 4 < uVar1 * 3) {
    if (uVar1 >> 3 < (uVar1 + ~*(uint *)(param_1 + 8)) - *(int *)(param_1 + 0xc))
    goto LAB_109d9b838;
  }
  else {
    uVar1 = uVar1 << 1;
  }
  FUN_109d9b894(param_1,uVar1);
  FUN_109d9b758(param_1,param_3,&plStack_28);
  param_4 = plStack_28;
LAB_109d9b838:
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (*param_4 != -0x1000) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  return param_4;
}



/* Entry: 109d9b894; end: 109d9b9b7;  */

void FUN_109d9b894(undefined8 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puStack_38;
  
  uVar1 = *(uint *)(param_1 + 2);
  puVar6 = (ulong *)*param_1;
  uVar2 = param_2 - 1U | param_2 - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar5 = 0x40;
  if (0x40 < uVar2 + 1) {
    uVar5 = uVar2 + 1;
  }
  *(uint *)(param_1 + 2) = uVar5;
  puVar3 = (undefined8 *)((ulong)uVar5 << 3);
  __ZnwmSt11align_val_t(puVar3,8);
  *param_1 = puVar3;
  if (puVar6 != (ulong *)0x0) {
    param_1[1] = 0;
    if (*(uint *)(param_1 + 2) != 0) {
      lVar4 = (ulong)*(uint *)(param_1 + 2) << 3;
      do {
        *puVar3 = 0xfffffffffffff000;
        lVar4 = lVar4 + -8;
        puVar3 = puVar3 + 1;
      } while (lVar4 != 0);
    }
    if (uVar1 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      puVar7 = puVar6;
      do {
        if ((*puVar7 | 0x1000) != 0xfffffffffffff000) {
          FUN_109d9b758(param_1,puVar7,&puStack_38);
          *puStack_38 = *puVar7;
          *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
        }
        puVar7 = puVar7 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPvSt11align_val_t_110352268)(puVar6,8);
    return;
  }
  param_1[1] = 0;
  if (*(uint *)(param_1 + 2) != 0) {
    lVar4 = (ulong)*(uint *)(param_1 + 2) << 3;
    do {
      *puVar3 = 0xfffffffffffff000;
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
  }
  return;
}



/* Entry: 109d9b9b8; end: 109d9ba8b;  */

undefined8 FUN_109d9b9b8(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  ulong *puVar8;
  int iVar9;
  
  lVar1 = param_1[2];
  if ((int)lVar1 == 0) {
    uVar3 = 0;
    puVar8 = (ulong *)0x0;
  }
  else {
    lVar7 = *param_1;
    uVar5 = *(uint *)(param_2 + 0x20);
    iVar9 = 1;
    puVar6 = (ulong *)0x0;
    while( true ) {
      uVar5 = uVar5 & (int)lVar1 - 1U;
      puVar8 = (ulong *)(lVar7 + (ulong)uVar5 * 8);
      uVar4 = *puVar8;
      if ((uVar4 | 0x1000) != 0xfffffffffffff000) {
        uVar2 = param_2;
        FUN_109d9ba8c(param_2,uVar4,0);
        if ((uVar2 & 1) != 0) {
          uVar3 = 1;
          goto LAB_109d9ba6c;
        }
        uVar4 = *puVar8;
      }
      if (uVar4 == 0xfffffffffffff000) break;
      if (puVar6 != (ulong *)0x0 || uVar4 != 0xffffffffffffe000) {
        puVar8 = puVar6;
      }
      uVar5 = uVar5 + iVar9;
      iVar9 = iVar9 + 1;
      puVar6 = puVar8;
    }
    uVar3 = 0;
    if (puVar6 != (ulong *)0x0) {
      puVar8 = puVar6;
    }
  }
LAB_109d9ba6c:
  *param_3 = (long)puVar8;
  return uVar3;
}



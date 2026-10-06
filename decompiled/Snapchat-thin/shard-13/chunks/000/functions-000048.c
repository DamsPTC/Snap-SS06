/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109ec158c; end: 109ec1617;  */

undefined8 FUN_109ec158c(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  plVar5 = *(long **)(param_2 + 0x30);
  plVar2 = (long *)*plVar5;
  if ((long *)*plVar5 != (long *)0x0) {
    while( true ) {
      plVar3 = plVar2;
      lVar6 = *plVar3;
      plVar2 = param_1;
      FUN_109ec1674(param_1,plVar5 + -1);
      if (plVar2 != plVar5 + -1) {
        plVar4 = (long *)plVar5[1];
        lVar7 = *plVar5;
        plVar2[2] = plVar5[1];
        plVar2[1] = lVar7;
        plVar1 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          plVar1 = plVar2 + 1;
        }
        *plVar4 = (long)plVar1;
        *(long **)(*plVar5 + 8) = plVar1;
      }
      if (lVar6 == 0) break;
      plVar2 = (long *)*plVar3;
      plVar5 = plVar3;
    }
  }
  return 0;
}



/* Entry: 109ec1618; end: 109ec1673;  */

undefined8 FUN_109ec1618(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_109ec1674();
    *(undefined8 *)(param_2 + 0x20) = param_1;
  }
  return 0;
}



/* Entry: 109ec1674; end: 109ec17ff;  */

void FUN_109ec1674(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if ((((param_2 != 0) && (*(int *)(param_2 + 0x18) == 4)) &&
      (uVar1 = *(int *)(param_2 + 0x28) - 0x73,
      uVar1 < 0x2c && (1L << ((ulong)uVar1 & 0x3f) & 0xc0000000001U) != 0)) &&
     (((lVar8 = *(long *)(param_2 + 0x30), lVar8 != 0 && (*(int *)(lVar8 + 0x18) == 4)) &&
      (*(int *)(lVar8 + 0x28) == 0x9c)))) {
    lVar9 = *(long *)(lVar8 + 0x30);
    puVar2 = *(undefined8 **)(param_1 + 8);
    FUN_109f658b0(puVar2,0x58);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[10] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    uVar1 = *(uint *)(param_2 + 0x28);
    lVar5 = *(long *)(lVar9 + 0x20);
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined4 *)(puVar2 + 3) = 4;
    *puVar2 = &PTR_FUN_110b64370;
    puVar2[4] = lVar5;
    *(uint *)(puVar2 + 5) = uVar1;
    puVar2[6] = lVar9;
    puVar2[7] = uVar7;
    puVar2[8] = 0;
    puVar2[9] = 0;
    if (uVar1 == 0xa6) {
      uVar4 = *(undefined1 *)(lVar5 + 0xd);
    }
    else if ((int)uVar1 < 0x7b) {
      uVar4 = 1;
    }
    else if (uVar1 < 0xa0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 3;
      if (0xa4 < uVar1) {
        uVar4 = 4;
      }
    }
    *(undefined1 *)(puVar2 + 10) = uVar4;
    *(undefined1 *)(param_1 + 0x31) = 1;
    puVar3 = *(undefined8 **)(param_1 + 8);
    FUN_109f658b0(puVar3,0x58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[10] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    uVar6 = *(undefined8 *)(lVar8 + 0x38);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 4;
    *puVar3 = &PTR_FUN_110b64370;
    puVar3[4] = uVar7;
    *(undefined4 *)(puVar3 + 5) = 0x9c;
    puVar3[6] = puVar2;
    puVar3[7] = uVar6;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined1 *)(puVar3 + 10) = 2;
  }
  return;
}



/* Entry: 109ec1800; end: 109ec18c3;  */

undefined1 FUN_109ec1800(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  undefined1 uStack_67;
  undefined4 uStack_64;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined8 *puStack_38;
  
  puStack_38 = *(undefined8 **)(param_1 + 0xc0);
  uStack_64 = *(undefined4 *)(param_1 + 4);
  uStack_6f = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110b65af0;
  uStack_67 = 0;
  ppuStack_48 = &puStack_60;
  puStack_60 = &uStack_50;
  uStack_58 = 0;
  uStack_50 = 0;
  plVar2 = *(long **)*puStack_38;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*puStack_38 + -1;
    plStack_90 = plVar4;
    ppuStack_40 = ppuStack_48;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_98);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_90 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_98);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_67;
}



/* Entry: 109ec18c4; end: 109ec18c7;  */

void FUN_109ec18c4(void)

{
  return;
}



/* Entry: 109ec18c8; end: 109ec1e43;  */

undefined8 FUN_109ec18c8(long *param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uStack_68;
  undefined4 uStack_64;
  
  plVar13 = *(long **)(param_2 + 0x20);
  if (((((plVar13 != (long *)0x0) && ((int)plVar13[3] == 0)) &&
       (lVar7 = *(long *)(plVar13[5] + 0x20), 1 < *(byte *)(lVar7 + 0xd))) &&
      ((*(char *)(lVar7 + 0xe) == '\x01' && ((*(uint *)(lVar7 + 4) & 0xfc) < 0xc)))) &&
     (plVar2 = plVar13, (**(code **)(*plVar13 + 0x40))(), (*(uint *)(plVar2 + 8) & 0x7000) != 0x1000
     )) {
    plVar2 = (long *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      plVar2 = (long *)(*(long *)(param_2 + -0x30) + 0x30);
    }
    plVar6 = (long *)plVar13[5];
    plVar3 = (long *)plVar13[6];
    (**(code **)(*plVar3 + 0x30))(plVar3,plVar2,0);
    if (plVar3 == (long *)0x0) {
      if ((*(int *)((long)param_1 + 0x34) == 1) &&
         (plVar3 = plVar13, (**(code **)(*plVar13 + 0x40))(),
         (*(uint *)(plVar3 + 8) & 0x7800) == 0x2800)) {
        plVar3 = param_1 + 0xb;
        FUN_109eabf1c(plVar3,*(undefined8 *)(*(long *)(param_2 + 0x28) + 0x20),&UNK_10f615739);
        plVar5 = (long *)(param_2 + 8);
        plVar8 = (long *)param_1[0xb];
        if ((long *)*plVar8 != plVar8 + 2) {
          *(long **)plVar8[3] = plVar5;
          plVar11 = *(long **)(param_2 + 0x10);
          lVar7 = *plVar8;
          *(long **)(lVar7 + 8) = plVar11;
          *plVar11 = lVar7;
          *(long *)(param_2 + 0x10) = plVar8[3];
          *plVar8 = (long)(plVar8 + 2);
          plVar8[1] = 0;
          plVar8[2] = 0;
          plVar8[3] = (long)plVar8;
        }
        plVar8 = plVar2;
        FUN_109f658b0(plVar2,0x30);
        if (plVar8 != (long *)0x0) {
          plVar8[3] = 0;
          plVar8[2] = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
        }
        plVar8[1] = 0;
        plVar8[2] = 0;
        *(undefined4 *)(plVar8 + 3) = 2;
        *plVar8 = (long)&PTR_DAT_110b64048;
        plVar8[5] = (long)plVar3;
        plVar8[4] = plVar3[4];
        FUN_109ea8ec8(param_2);
        plVar8 = param_1 + 0xb;
        FUN_109eabf1c(plVar8,*(undefined8 *)(plVar13[6] + 0x20),&UNK_10f615744);
        func_0x000109e244dc(&uStack_68);
        lVar7 = CONCAT44(uStack_64,uStack_68);
        func_0x000109eabfa8(lVar7,plVar13[6],
                            ~(-1 << (ulong)(*(byte *)(*(long *)(lVar7 + 0x20) + 0xd) & 0x1f)));
        plVar9 = (long *)param_1[0xb];
        plVar10 = (long *)(lVar7 + 8);
        *plVar10 = (long)(plVar9 + 2);
        plVar11 = (long *)0x0;
        if (lVar7 != 0) {
          plVar11 = plVar10;
        }
        puVar12 = (undefined8 *)plVar9[3];
        *(undefined8 **)(lVar7 + 0x10) = puVar12;
        *puVar12 = plVar11;
        plVar9[3] = (long)plVar11;
        if (*(char *)(plVar6[4] + 0xd) != '\0') {
          uVar1 = 0;
          do {
            lVar7 = param_1[0xc];
            FUN_109eaaac0(lVar7,*(undefined8 *)(plVar13[6] + 0x20));
            *(uint *)(lVar7 + 0x28) = uVar1;
            plVar11 = plVar6;
            (**(code **)(*plVar6 + 0x20))(plVar6,param_1[0xc],0);
            plVar9 = plVar2;
            FUN_109f658b0(plVar2,0x30);
            if (plVar9 != (long *)0x0) {
              plVar9[3] = 0;
              plVar9[2] = 0;
              plVar9[5] = 0;
              plVar9[4] = 0;
              plVar9[1] = 0;
              *plVar9 = 0;
            }
            plVar9[1] = 0;
            plVar9[2] = 0;
            *(undefined4 *)(plVar9 + 3) = 2;
            *plVar9 = (long)&PTR_DAT_110b64048;
            plVar9[5] = (long)plVar3;
            plVar9[4] = plVar3[4];
            if ((int)plVar6[3] == 5) {
              plVar10 = plVar2;
              FUN_109f658b0(plVar2,0x38);
              if (plVar10 != (long *)0x0) {
                plVar10[6] = 0;
                plVar10[3] = 0;
                plVar10[2] = 0;
                plVar10[5] = 0;
                plVar10[4] = 0;
                plVar10[1] = 0;
                *plVar10 = 0;
              }
              FUN_109eac090(plVar11,uVar1,1);
              func_0x000109ea9180(plVar10,plVar11,plVar9);
              func_0x000109e24460(&uStack_68,plVar8);
              lVar4 = 0x8b;
              FUN_109eac310(0x8b,CONCAT44(uStack_64,uStack_68),lVar7);
              plVar11 = plVar10;
            }
            else {
              func_0x000109e24460(&uStack_68,plVar8);
              lVar4 = 0x8b;
              FUN_109eac310(0x8b,CONCAT44(uStack_64,uStack_68),lVar7);
              if (2 < *(uint *)(plVar11 + 3)) {
                plVar11 = (long *)0x0;
              }
              func_0x000109eabfa8(plVar11,plVar9,1 << (ulong)(uVar1 & 0x1f));
            }
            FUN_109eac498(lVar4,plVar11);
            plVar9 = (long *)param_1[0xb];
            plVar10 = (long *)(lVar4 + 8);
            *plVar10 = (long)(plVar9 + 2);
            plVar11 = (long *)0x0;
            if (lVar4 != 0) {
              plVar11 = plVar10;
            }
            puVar12 = (undefined8 *)plVar9[3];
            *(undefined8 **)(lVar4 + 0x10) = puVar12;
            *puVar12 = plVar11;
            plVar9[3] = (long)plVar11;
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(byte *)(plVar6[4] + 0xd));
        }
        if ((long *)*plVar9 != plVar9 + 2) {
          lVar4 = *plVar5;
          *plVar10 = lVar4;
          lVar7 = *plVar9;
          *(long **)(lVar7 + 8) = plVar5;
          *(long *)(lVar4 + 8) = plVar9[3];
          *plVar5 = lVar7;
          *plVar9 = (long)(plVar9 + 2);
          plVar9[1] = 0;
          plVar9[2] = 0;
          plVar9[3] = (long)plVar9;
        }
        goto LAB_109ec1e0c;
      }
      plVar3 = plVar2;
      FUN_109f658b0(plVar2,0x58);
      if (plVar3 != (long *)0x0) {
        plVar3[10] = 0;
        plVar3[7] = 0;
        plVar3[6] = 0;
        plVar3[9] = 0;
        plVar3[8] = 0;
        plVar3[3] = 0;
        plVar3[2] = 0;
        plVar3[5] = 0;
        plVar3[4] = 0;
        plVar3[1] = 0;
        *plVar3 = 0;
      }
      lVar14 = plVar6[4];
      plVar5 = plVar6;
      (**(code **)(*plVar6 + 0x20))(plVar6,plVar2,0);
      lVar7 = *(long *)(param_2 + 0x28);
      lVar4 = plVar13[6];
      plVar3[1] = 0;
      plVar3[2] = 0;
      *(undefined4 *)(plVar3 + 3) = 4;
      *plVar3 = (long)&PTR_FUN_110b64370;
      plVar3[4] = lVar14;
      *(undefined4 *)(plVar3 + 5) = 0xa4;
      plVar3[6] = (long)plVar5;
      plVar3[7] = lVar7;
      plVar3[8] = lVar4;
      plVar3[9] = 0;
      *(undefined1 *)(plVar3 + 10) = 3;
      *(long **)(param_2 + 0x28) = plVar3;
      *(byte *)(param_2 + 0x30) =
           (*(byte *)(param_2 + 0x30) & 0xf0 |
           (byte)(-1 << (ulong)(*(byte *)(plVar6[4] + 0xd) & 0x1f)) & 0xf) ^ 0xf;
    }
    else {
      func_0x000109eaa478();
      uVar1 = (uint)plVar3;
      if (*(byte *)(plVar6[4] + 0xd) <= uVar1) {
        lVar7 = *(long *)(param_2 + 8);
        plVar13 = *(long **)(param_2 + 0x10);
        *(long **)(lVar7 + 8) = plVar13;
        *plVar13 = lVar7;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        return 0;
      }
      if ((int)plVar6[3] != 5) {
        FUN_109ea8ec8(param_2,plVar6);
        *(byte *)(param_2 + 0x30) =
             *(byte *)(param_2 + 0x30) & 0xf0 | (byte)(1 << (ulong)(uVar1 & 0x1f)) & 0xf;
        goto LAB_109ec1e0c;
      }
      uStack_68 = uVar1;
      FUN_109f658b0(plVar2,0x38);
      if (plVar2 != (long *)0x0) {
        plVar2[6] = 0;
        plVar2[3] = 0;
        plVar2[2] = 0;
        plVar2[5] = 0;
        plVar2[4] = 0;
        plVar2[1] = 0;
        *plVar2 = 0;
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
      *(undefined4 *)(plVar2 + 3) = 5;
      *plVar2 = (long)&PTR_DAT_110b641e0;
      plVar2[4] = (long)&UNK_10e05d730;
      plVar2[5] = (long)plVar6;
      func_0x000109eab760(plVar2,&uStack_68,1);
      plVar6 = plVar2;
    }
    FUN_109ea8ec8(param_2,plVar6);
  }
LAB_109ec1e0c:
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x28);
  return 0;
}



/* Entry: 109ec1e44; end: 109ec1f17;  */

void FUN_109ec1e44(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_2;
  if (((((plVar5 != (long *)0x0) && ((int)plVar5[3] == 0)) &&
       (lVar4 = *(long *)(plVar5[5] + 0x20), 1 < *(byte *)(lVar4 + 0xd))) &&
      ((*(char *)(lVar4 + 0xe) == '\x01' && ((*(uint *)(lVar4 + 4) & 0xfc) < 0xc)))) &&
     ((plVar2 = plVar5, (**(code **)(*plVar5 + 0x40))(), plVar2 == (long *)0x0 ||
      ((uVar1 = *(uint *)(plVar2 + 8) >> 0xb & 0xf, 1 < uVar1 - 2 &&
       ((uVar1 != 1 || (plVar2[0x11] == 0)))))))) {
    puVar3 = (undefined8 *)0x0;
    if (plVar5[-6] != 0) {
      puVar3 = (undefined8 *)(plVar5[-6] + 0x30);
    }
    FUN_109f658b0(puVar3,0x58);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[10] = 0;
      puVar3[7] = 0;
      puVar3[6] = 0;
      puVar3[9] = 0;
      puVar3[8] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    func_0x000109ea9448();
    *param_2 = puVar3;
  }
  return;
}



/* Entry: 109ec1f18; end: 109ec1f1b;  */

void FUN_109ec1f18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ec1f1c; end: 109ec1fc3;  */

undefined1 FUN_109ec1f1c(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined **ppuStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined1 uStack_37;
  
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  ppuStack_80 = &PTR_FUN_110b65c60;
  uStack_37 = 0;
  uStack_40 = 0;
  plVar2 = *(long **)*param_1;
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    plVar4 = (undefined8 *)*param_1 + -1;
    plStack_78 = plVar4;
    uStack_48 = param_3;
    uStack_38 = param_2;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_80);
    iVar1 = (int)plVar4;
    while ((iVar1 == 0 && (lVar3 != 0))) {
      plVar4 = (long *)*plVar2;
      lVar3 = *plVar4;
      plVar2 = plVar2 + -1;
      plStack_78 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_80);
      iVar1 = (int)plVar2;
      plVar2 = plVar4;
    }
  }
  return uStack_37;
}



/* Entry: 109ec1fc4; end: 109ec1fc7;  */

void FUN_109ec1fc4(void)

{
  return;
}



/* Entry: 109ec1fc8; end: 109ec1ff3;  */

bool FUN_109ec1fc8(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar1 + 0x40))();
  return (*(byte *)(plVar1 + 8) & 0x60) != 0;
}



/* Entry: 109ec1ff4; end: 109ec278b;  */

void FUN_109ec1ff4(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  long alStack_c0 [9];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = (undefined8 *)*param_2;
  if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 3) != 4)) ||
     (*(int *)(puVar12 + 5) == 0xa6)) goto LAB_109ec2694;
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  alStack_c0[5] = 0;
  alStack_c0[4] = 0;
  alStack_c0[7] = 0;
  alStack_c0[6] = 0;
  alStack_c0[1] = 0;
  alStack_c0[0] = 0;
  alStack_c0[3] = 0;
  alStack_c0[2] = 0;
  if (*(int *)(puVar12 + 5) == 0x82) {
    lVar8 = puVar12[6];
    if (((((*(byte *)(*(long *)(lVar8 + 0x20) + 0xe) < 2) ||
          (2 < *(byte *)(*(long *)(lVar8 + 0x20) + 4) - 2)) ||
         ((lVar11 = *(long *)(puVar12[7] + 0x20), *(byte *)(lVar11 + 0xd) < 2 ||
          ((*(char *)(lVar11 + 0xe) != '\x01' || (0xb < (*(uint *)(lVar11 + 4) & 0xfc))))))) ||
        (*(int *)(lVar8 + 0x18) != 4)) || (*(int *)(lVar8 + 0x28) != 0x82)) goto LAB_109ec2134;
    lVar13 = *(long *)(lVar8 + 0x30);
    lVar11 = *(long *)(lVar13 + 0x20);
    if ((((*(byte *)(lVar11 + 0xe) < 2) || (2 < *(byte *)(lVar11 + 4) - 2)) ||
        (lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x20), *(byte *)(lVar8 + 0xe) < 2)) ||
       (2 < *(byte *)(lVar8 + 4) - 2)) goto LAB_109ec2134;
    uVar2 = 0x82;
    FUN_109eac310(0x82);
    puVar3 = (undefined8 *)0x82;
    FUN_109eac310(0x82,lVar13,uVar2);
  }
  else {
LAB_109ec2134:
    puVar3 = puVar12;
    if (*(char *)(puVar12 + 10) != '\0') {
      uVar14 = 0;
      do {
        plVar4 = (long *)puVar12[uVar14 + 6];
        if ((1 < *(byte *)(plVar4[4] + 0xe)) && (*(byte *)(plVar4[4] + 4) - 2 < 3))
        goto LAB_109ec2630;
        lVar8 = 0;
        if (puVar12[-6] != 0) {
          lVar8 = puVar12[-6] + 0x30;
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,lVar8,0);
        alStack_c0[uVar14 + 4] = (long)plVar4;
        lVar8 = puVar12[uVar14 + 6];
        if (*(int *)(lVar8 + 0x18) != 4) {
          lVar8 = 0;
        }
        alStack_c0[uVar14] = lVar8;
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(byte *)(puVar12 + 10));
    }
    if (*(long *)(param_1 + 0x40) == 0) {
      lVar8 = 0;
      if (puVar12[-6] != 0) {
        lVar8 = puVar12[-6] + 0x30;
      }
      *(long *)(param_1 + 0x40) = lVar8;
    }
    iVar7 = *(int *)(puVar12 + 5);
    if (iVar7 < 0x98) {
      if (iVar7 == 0x73) {
LAB_109ec223c:
        if (alStack_c0[4] != 0) {
          puVar3 = (undefined8 *)puVar12[6];
        }
      }
      else if ((iVar7 == 0x7b) || (iVar7 == 0x82)) {
        if ((alStack_c0[4] == 0) || (alStack_c0[5] != 0)) {
          if ((alStack_c0[4] != 0) || (alStack_c0[5] == 0)) goto LAB_109ec2630;
          uVar2 = 1;
          lVar8 = alStack_c0[0];
        }
        else {
          uVar2 = 0;
          lVar8 = alStack_c0[1];
        }
        FUN_109ec2790(param_1,puVar12,uVar2,lVar8);
      }
    }
    else if (iVar7 - 0x98U < 2) {
      if (*(char *)(puVar12[4] + 4) == '\x02') {
        plVar4 = alStack_c0 + 5;
        plVar17 = alStack_c0;
        bVar1 = true;
        do {
          bVar9 = bVar1;
          lVar8 = *plVar17;
          plVar4 = (long *)*plVar4;
          if (lVar8 != 0 && plVar4 != (long *)0x0) {
            iVar7 = 0x98;
            if (*(int *)(puVar12 + 5) != 0x99) {
              iVar7 = 0x99;
            }
            if (*(int *)(lVar8 + 0x28) == iVar7) {
              plVar17 = (long *)(lVar8 + 0x30);
              if ((*plVar17 == 0 || *(int *)(*plVar17 + 0x18) != 3) &&
                 (*(long *)(lVar8 + 0x38) == 0 || *(int *)(*(long *)(lVar8 + 0x38) + 0x18) != 3))
              break;
              uVar14 = 0;
              bVar1 = true;
              do {
                bVar10 = bVar1;
                plVar15 = (long *)plVar17[uVar14 ^ 1];
                if (plVar15 == (long *)0x0 || (int)plVar15[3] != 3) goto LAB_109ec25e8;
                lVar8 = plVar17[uVar14];
                iVar7 = *(int *)(puVar12 + 5);
                if (iVar7 == 0x98) {
                  plVar5 = plVar15;
                  (**(code **)(*plVar15 + 0x50))();
                  if (((int)plVar5 == 0) ||
                     (plVar5 = plVar4, (**(code **)(*plVar4 + 0x58))(), (int)plVar5 == 0)) {
                    iVar7 = *(int *)(puVar12 + 5);
                    goto LAB_109ec2348;
                  }
LAB_109ec2778:
                  puVar3 = (undefined8 *)0x69;
                  FUN_109eac2ac(0x69,lVar8);
                  goto LAB_109ec2630;
                }
LAB_109ec2348:
                if (((iVar7 == 0x99) &&
                    (plVar5 = plVar15, (**(code **)(*plVar15 + 0x58))(), (int)plVar5 != 0)) &&
                   (plVar5 = plVar4, (**(code **)(*plVar4 + 0x50))(), (int)plVar5 != 0))
                goto LAB_109ec2778;
                iVar7 = *(int *)(puVar12 + 5);
                if (iVar7 == 0x98) {
                  plVar5 = plVar15;
                  (**(code **)(*plVar15 + 0x50))();
                  if ((int)plVar5 == 0) {
LAB_109ec2414:
                    iVar7 = *(int *)(puVar12 + 5);
                    goto LAB_109ec2418;
                  }
                  lVar11 = plVar4[4];
                  if (*(char *)(lVar11 + 0xd) == '\0') goto LAB_109ec2414;
                  if (*(char *)(lVar11 + 0xd) != '\x01') {
                    if ((*(char *)(lVar11 + 0xe) == '\x01') &&
                       ((*(uint *)(lVar11 + 4) & 0xfc) < 0xc)) goto LAB_109ec23d8;
                    goto LAB_109ec2414;
                  }
                  if ((*(byte *)(lVar11 + 4) & 0xf0) != 0) goto LAB_109ec2414;
LAB_109ec23d8:
                  uVar16 = 0;
                  uVar18 = 0;
                  do {
                    func_0x000109eaa610(plVar4,uVar16);
                    if (!NAN((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)))) &&
                        (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) < 1.0) {
                      uVar18 = uVar18 + 1;
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar16 < *(byte *)(plVar4[4] + 0xd));
                  if (uVar18 != *(byte *)(plVar4[4] + 0xd)) goto LAB_109ec2414;
                  lVar11 = 0x98;
                  plVar15 = plVar4;
LAB_109ec276c:
                  FUN_109eac310(lVar11,lVar8,plVar15);
                  lVar8 = lVar11;
                  goto LAB_109ec2778;
                }
LAB_109ec2418:
                if (iVar7 == 0x99) {
                  lVar11 = plVar15[4];
                  if (*(char *)(lVar11 + 0xd) != '\0') {
                    if (*(char *)(lVar11 + 0xd) == '\x01') {
                      if ((*(byte *)(lVar11 + 4) & 0xf0) == 0) {
LAB_109ec2460:
                        uVar16 = 0;
                        uVar18 = 0;
                        do {
                          func_0x000109eaa610(plVar15,uVar16);
                          if (!NAN((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))))
                              && (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) <
                                 1.0) {
                            uVar18 = uVar18 + 1;
                          }
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < *(byte *)(plVar15[4] + 0xd));
                        if ((uVar18 == *(byte *)(plVar15[4] + 0xd)) &&
                           (plVar5 = plVar4, (**(code **)(*plVar4 + 0x50))(), (int)plVar5 != 0)) {
                          lVar11 = 0x98;
                          goto LAB_109ec276c;
                        }
                      }
                    }
                    else if ((*(char *)(lVar11 + 0xe) == '\x01') &&
                            ((*(uint *)(lVar11 + 4) & 0xfc) < 0xc)) goto LAB_109ec2460;
                  }
                }
                iVar7 = *(int *)(puVar12 + 5);
                if (iVar7 == 0x99) {
                  plVar5 = plVar15;
                  (**(code **)(*plVar15 + 0x58))();
                  if ((int)plVar5 != 0) {
                    lVar11 = plVar4[4];
                    if (*(char *)(lVar11 + 0xd) != '\0') {
                      if (*(char *)(lVar11 + 0xd) == '\x01') {
                        if ((*(byte *)(lVar11 + 4) & 0xf0) == 0) {
LAB_109ec2510:
                          uVar16 = 0;
                          uVar18 = 0;
                          do {
                            func_0x000109eaa610(plVar4,uVar16);
                            bVar1 = NAN((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))));
                            if ((bVar1 || (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))) != 0.0) &&
                                (!bVar1 &&
                                (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) <
                                0.0) == bVar1) {
                              uVar18 = uVar18 + 1;
                            }
                            uVar16 = uVar16 + 1;
                          } while (uVar16 < *(byte *)(plVar4[4] + 0xd));
                          if (uVar18 == *(byte *)(plVar4[4] + 0xd)) {
                            lVar11 = 0x99;
                            plVar15 = plVar4;
                            goto LAB_109ec276c;
                          }
                        }
                      }
                      else if ((*(char *)(lVar11 + 0xe) == '\x01') &&
                              ((*(uint *)(lVar11 + 4) & 0xfc) < 0xc)) goto LAB_109ec2510;
                    }
                  }
                  iVar7 = *(int *)(puVar12 + 5);
                }
                if (iVar7 == 0x98) {
                  lVar11 = plVar15[4];
                  if (*(char *)(lVar11 + 0xd) != '\0') {
                    if (*(char *)(lVar11 + 0xd) == '\x01') {
                      if ((*(byte *)(lVar11 + 4) & 0xf0) == 0) {
LAB_109ec2598:
                        uVar16 = 0;
                        uVar18 = 0;
                        do {
                          func_0x000109eaa610(plVar15,uVar16);
                          bVar1 = NAN((float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19)
                                                                     )));
                          if ((bVar1 || (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,
                                                  uVar19))) != 0.0) &&
                              (!bVar1 &&
                              (float)CONCAT13(uVar22,CONCAT12(uVar21,CONCAT11(uVar20,uVar19))) < 0.0
                              ) == bVar1) {
                            uVar18 = uVar18 + 1;
                          }
                          uVar16 = uVar16 + 1;
                        } while (uVar16 < *(byte *)(plVar15[4] + 0xd));
                        if ((uVar18 == *(byte *)(plVar15[4] + 0xd)) &&
                           (plVar5 = plVar4, (**(code **)(*plVar4 + 0x58))(), (int)plVar5 != 0)) {
                          lVar11 = 0x99;
                          goto LAB_109ec276c;
                        }
                      }
                    }
                    else if ((*(char *)(lVar11 + 0xe) == '\x01') &&
                            ((*(uint *)(lVar11 + 4) & 0xfc) < 0xc)) goto LAB_109ec2598;
                  }
                }
LAB_109ec25e8:
                uVar14 = 1;
                bVar1 = false;
              } while (bVar10);
            }
          }
          plVar4 = alStack_c0 + 4;
          plVar17 = alStack_c0 + 1;
          bVar1 = false;
        } while (bVar9);
      }
    }
    else if (iVar7 - 0x9dU < 2) goto LAB_109ec223c;
  }
LAB_109ec2630:
  if (puVar3 != (undefined8 *)*param_2) {
    lVar8 = puVar12[4];
    if ((((1 < *(byte *)(lVar8 + 0xd)) && (*(char *)(lVar8 + 0xe) == '\x01')) &&
        ((*(uint *)(lVar8 + 4) & 0xfc) < 0xc)) &&
       ((*(char *)(puVar3[4] + 0xd) == '\x01' && ((*(byte *)(puVar3[4] + 4) & 0xf0) == 0)))) {
      puVar6 = *(undefined8 **)(param_1 + 0x40);
      FUN_109f658b0(puVar6,0x38);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[6] = 0;
        puVar6[3] = 0;
        puVar6[2] = 0;
        puVar6[5] = 0;
        puVar6[4] = 0;
        puVar6[1] = 0;
        *puVar6 = 0;
      }
      uVar19 = *(undefined1 *)(puVar12[4] + 0xd);
      puVar6[1] = 0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 3) = 5;
      *puVar6 = &PTR_DAT_110b641e0;
      puVar6[4] = &UNK_10e05d730;
      puVar6[5] = puVar3;
      alStack_c0[4] = 0;
      alStack_c0[5] = 0;
      func_0x000109eab760(puVar6,alStack_c0 + 4,uVar19);
      puVar3 = puVar6;
    }
    *param_2 = puVar3;
    *(undefined1 *)(param_1 + 0x49) = 1;
  }
LAB_109ec2694:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ec278c; end: 109ec278f;  */

void FUN_109ec278c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109ec2790; end: 109ec2b47;  */

long FUN_109ec2790(long param_1,long param_2,ulong param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  if (param_4 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x28) != *(int *)(param_4 + 0x28)) {
    return 0;
  }
  plVar8 = (long *)(param_2 + 0x30);
  if ((1 < *(byte *)(*(long *)(*plVar8 + 0x20) + 0xe)) &&
     (*(byte *)(*(long *)(*plVar8 + 0x20) + 4) - 2 < 3)) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 0x20);
  if ((1 < *(byte *)(lVar4 + 0xe)) && (*(byte *)(lVar4 + 4) - 2 < 3)) {
    return 0;
  }
  plVar7 = (long *)(param_4 + 0x30);
  plVar1 = (long *)*plVar7;
  if ((1 < *(byte *)(plVar1[4] + 0xe)) && (*(byte *)(plVar1[4] + 4) - 2 < 3)) {
    return 0;
  }
  plVar5 = (long *)(param_4 + 0x38);
  if ((1 < *(byte *)(*(long *)(*plVar5 + 0x20) + 0xe)) &&
     (*(byte *)(*(long *)(*plVar5 + 0x20) + 4) - 2 < 3)) {
    return 0;
  }
  lVar4 = 0;
  if (*(long *)(param_4 + -0x30) != 0) {
    lVar4 = *(long *)(param_4 + -0x30) + 0x30;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,lVar4,0);
  plVar2 = *(long **)(param_4 + 0x38);
  (**(code **)(*plVar2 + 0x30))(plVar2,lVar4,0);
  if (plVar1 != (long *)0x0 && plVar2 != (long *)0x0) {
    return 0;
  }
  plVar6 = plVar5;
  if (plVar1 == (long *)0x0) {
    lVar4 = *plVar7;
    if (plVar2 == (long *)0x0) {
      if (*(int *)(lVar4 + 0x18) != 4) {
        lVar4 = 0;
      }
      lVar3 = param_1;
      FUN_109ec2790(param_1,param_2,param_3,lVar4);
      if ((int)lVar3 == 0) {
        lVar4 = *plVar5;
        if (*(int *)(lVar4 + 0x18) != 4) {
          lVar4 = 0;
        }
        FUN_109ec2790(param_1,param_2,param_3,lVar4);
        if ((int)param_1 == 0) {
          return param_1;
        }
      }
      lVar4 = *(long *)(*plVar7 + 0x20);
      plVar8 = plVar5;
      if (((1 < *(byte *)(lVar4 + 0xd)) && (*(char *)(lVar4 + 0xe) == '\x01')) &&
         (plVar8 = plVar7, 0xb < (*(uint *)(lVar4 + 4) & 0xfc))) {
        plVar8 = plVar5;
      }
      *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(*plVar8 + 0x20);
      return 1;
    }
    *plVar7 = plVar8[param_3 & 0xffffffff];
    plVar8[param_3 & 0xffffffff] = lVar4;
    lVar4 = *(long *)(*plVar7 + 0x20);
    if (((1 < *(byte *)(lVar4 + 0xd)) && (*(char *)(lVar4 + 0xe) == '\x01')) &&
       (plVar6 = plVar7, 0xb < (*(uint *)(lVar4 + 4) & 0xfc))) {
      plVar6 = plVar5;
    }
  }
  else {
    lVar4 = *plVar5;
    *plVar5 = plVar8[param_3 & 0xffffffff];
    plVar8[param_3 & 0xffffffff] = lVar4;
    lVar4 = *(long *)(*plVar7 + 0x20);
    if ((1 < *(byte *)(lVar4 + 0xd)) && (*(char *)(lVar4 + 0xe) == '\x01')) {
      lVar3 = *plVar7;
      if (0xb < (*(uint *)(lVar4 + 4) & 0xfc)) {
        lVar3 = *plVar5;
      }
      goto LAB_109ec2974;
    }
  }
  lVar3 = *plVar6;
LAB_109ec2974:
  *(undefined8 *)(param_4 + 0x20) = *(undefined8 *)(lVar3 + 0x20);
  *(undefined1 *)(param_1 + 0x49) = 1;
  return 1;
}



/* Entry: 109ec2b48; end: 109ec2d23;  */

undefined8 FUN_109ec2b48(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auStack_a0 [56];
  long *plStack_68;
  
  func_0x000109eb80e0(auStack_a0);
  FUN_109eb4670(auStack_a0,param_1);
  if (*(uint *)(plStack_68 + 4) != 0) {
    lVar6 = *plStack_68;
    lVar5 = (ulong)*(uint *)(plStack_68 + 4) * 0x18;
    do {
      if ((*(long *)(lVar6 + 8) != 0) && (*(long *)(lVar6 + 8) != plStack_68[3])) {
        uVar7 = 0;
        goto LAB_109ec2bf0;
      }
      lVar6 = lVar6 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  uVar7 = 0;
LAB_109ec2bb8:
  func_0x000109eb8168(auStack_a0);
  return uVar7;
LAB_109ec2bf0:
  plVar8 = *(long **)(lVar6 + 0x10);
  if ((*(uint *)(plVar8 + 5) <= *(uint *)((long)plVar8 + 0x2c)) && ((char)plVar8[6] == '\x01')) {
    plVar3 = (long *)plVar8[1];
    if (plVar3 != plVar8 + 3) {
      uVar2 = *(uint *)(*plVar8 + 0x40) >> 0xb & 0xf;
      if (uVar2 < 9 && (1 << (ulong)uVar2 & 0x1a4U) != 0) goto LAB_109ec2ccc;
      do {
        lVar4 = plVar3[2];
        lVar5 = *(long *)(lVar4 + 8);
        plVar1 = *(long **)(lVar4 + 0x10);
        *(long **)(lVar5 + 8) = plVar1;
        *plVar1 = lVar5;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
        lVar5 = *plVar3;
        plVar3 = (long *)plVar3[1];
        *(long **)(lVar5 + 8) = plVar3;
        *plVar3 = lVar5;
        _free();
        plVar3 = (long *)plVar8[1];
      } while (plVar3 != plVar8 + 3);
      uVar7 = 1;
    }
    lVar5 = *plVar8;
    if ((*(uint *)(lVar5 + 0x40) >> 0xb & 0xf) - 1 < 2) {
      if (*(long *)(lVar5 + 0x78) == 0) {
        if ((*(long *)(lVar5 + 0x88) == 0) ||
           ((*(uint *)(*(long *)(lVar5 + 0x88) + 4) & 0xc00000) == 0x800000)) {
          if (*(char *)(*(long *)(lVar5 + 0x20) + 4) != '\x15') goto LAB_109ec2cb8;
        }
        else {
          *(uint *)(lVar5 + 0x40) = *(uint *)(lVar5 + 0x40) & 0xffffff7f;
        }
      }
    }
    else {
LAB_109ec2cb8:
      lVar4 = *(long *)(lVar5 + 8);
      plVar8 = *(long **)(lVar5 + 0x10);
      *(long **)(lVar4 + 8) = plVar8;
      *plVar8 = lVar4;
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
      uVar7 = 1;
    }
  }
LAB_109ec2ccc:
  lVar5 = lVar6;
  do {
    lVar6 = lVar5 + 0x18;
    if (lVar6 == *plStack_68 + (ulong)*(uint *)(plStack_68 + 4) * 0x18) goto LAB_109ec2bb8;
    plVar8 = (long *)(lVar5 + 0x20);
    lVar5 = lVar6;
  } while ((*plVar8 == 0) || (*plVar8 == plStack_68[3]));
  goto LAB_109ec2bf0;
}



/* Entry: 109ec2d24; end: 109ec2d9f;  */

uint FUN_109ec2d24(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  plVar1 = *(long **)*param_1;
  if (plVar1 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    plVar4 = (long *)*param_1;
    do {
      plVar2 = plVar1;
      if (((int)plVar4[2] == 10) && (plVar1 = (long *)plVar4[4], *plVar1 != 0)) {
        do {
          plVar2 = plVar1 + 9;
          FUN_109ec2b48(plVar2);
          uVar3 = (uint)plVar2 | uVar3;
          plVar1 = (long *)*plVar1;
        } while (*plVar1 != 0);
        plVar2 = (long *)*plVar4;
      }
      plVar1 = (long *)*plVar2;
      plVar4 = plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
  }
  return uVar3 & 1;
}



/* Entry: 109ec2da0; end: 109ec326b;  */

undefined *** FUN_109ec2da0(long param_1,undefined ***param_2,byte *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  int iVar17;
  undefined *puVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  undefined ***pppuVar22;
  byte bVar23;
  ulong uVar24;
  undefined **ppuVar25;
  undefined **ppuStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined ***pppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined8 uStack_c7;
  undefined ***pppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  undefined ***pppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_f8 = &ppuStack_110;
  uStack_108 = 0;
  puStack_100 = (undefined *)0x0;
  pppuVar5 = (undefined ***)0x30;
  ppuStack_110 = &puStack_100;
  _malloc();
  pppuVar6 = pppuVar5;
  if (pppuVar5 != (undefined ***)0x0) {
    pppuVar5[4] = (undefined **)0x0;
    pppuVar6 = pppuVar5 + 6;
    pppuVar5[1] = (undefined **)0x0;
    *pppuVar5 = (undefined **)0x0;
    pppuVar5[3] = (undefined **)0x0;
    pppuVar5[2] = (undefined **)0x0;
  }
  uStack_b0 = (undefined **)((ulong)uStack_b0._4_4_ << 0x20);
  puVar10 = &uStack_b0;
  pppuVar5 = pppuVar6;
  FUN_109f6658c();
  bVar4 = 0;
  plVar19 = (long *)(param_1 + 8);
  plVar20 = (long *)0x0;
  if (param_1 != 0) {
    plVar20 = plVar19;
  }
  do {
    plVar19 = (long *)*plVar19;
    pppuVar22 = (undefined ***)(plVar20 + -1);
    if ((int)plVar20[2] == 8 && plVar20 != (long *)0x0) {
      uStack_c7 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_e8 = 0;
      ppuStack_f0 = &PTR_FUN_110b65f28;
      pppuVar7 = pppuVar22;
      pppuStack_b8 = &ppuStack_110;
      FUN_109ea90f4();
      if (pppuVar7 != (undefined ***)0x0) {
        pppuVar8 = (undefined ***)plVar20[4];
        (*(code *)(*pppuVar8)[9])();
        if (pppuVar7 == pppuVar8) {
          lVar11 = *plVar20;
          plVar21 = (long *)plVar20[1];
          *(long **)(lVar11 + 8) = plVar21;
          *plVar21 = lVar11;
          *plVar20 = 0;
          plVar20[1] = 0;
          bVar4 = 1;
          goto LAB_109ec31f4;
        }
      }
      (**(code **)(*(long *)plVar20[4] + 0x18))((long *)plVar20[4],&ppuStack_f0);
      plVar21 = plVar20 + 3;
      uStack_87 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_8f = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = &PTR_FUN_110b65dd0;
      pppuStack_78 = &ppuStack_f0;
      (**(code **)(*(long *)*plVar21 + 0x18))((long *)*plVar21,&uStack_b0);
      ppuVar9 = (undefined **)*plVar21;
      (**(code **)(*ppuVar9 + 0x40))();
      lVar11 = *plVar21;
      if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) != 2)) {
LAB_109ec3124:
        pppuVar7 = pppuVar22;
        FUN_109ea90f4();
        if (pppuVar7 == (undefined ***)0x0) {
LAB_109ec3194:
          bVar23 = 0;
        }
        else {
          bVar23 = 0;
          ppuVar12 = ppuStack_110;
          ppuVar15 = (undefined **)*ppuStack_110;
          bVar2 = 0;
          if ((undefined **)*ppuStack_110 != (undefined **)0x0) {
            while( true ) {
              bVar23 = bVar2;
              puVar16 = *ppuVar15;
              if ((undefined **)ppuVar12[2] == ppuVar9) {
                puVar18 = ppuVar12[3];
                lVar11 = *(long *)(puVar18 + 8);
                plVar21 = *(long **)(puVar18 + 0x10);
                *(long **)(lVar11 + 8) = plVar21;
                *plVar21 = lVar11;
                *(undefined8 *)(puVar18 + 8) = 0;
                *(undefined8 *)(puVar18 + 0x10) = 0;
                puVar18 = *ppuVar12;
                plVar21 = (long *)ppuVar12[1];
                *(long **)(puVar18 + 8) = plVar21;
                *plVar21 = (long)puVar18;
                *ppuVar12 = (undefined *)0x0;
                ppuVar12[1] = (undefined *)0x0;
                bVar23 = 1;
              }
              if (puVar16 == (undefined *)0x0) break;
              ppuVar12 = ppuVar15;
              ppuVar15 = (undefined **)*ppuVar15;
              bVar2 = bVar23;
            }
          }
        }
      }
      else {
        lVar11 = *(long *)(*(long *)(lVar11 + 0x28) + 0x20);
        if (*(char *)(lVar11 + 0xd) == '\0') goto LAB_109ec3124;
        if (*(char *)(lVar11 + 0xd) == '\x01') {
          if ((*(byte *)(lVar11 + 4) & 0xf0) != 0) goto LAB_109ec3124;
        }
        else if ((*(char *)(lVar11 + 0xe) != '\x01') || (0xb < (*(uint *)(lVar11 + 4) & 0xfc)))
        goto LAB_109ec3124;
        ppuVar12 = (undefined **)*ppuStack_110;
        if (ppuVar12 == (undefined **)0x0) goto LAB_109ec3194;
        bVar23 = 0;
        ppuVar15 = (undefined **)0x0;
        ppuVar25 = ppuStack_110;
        if (*ppuVar12 != (undefined *)0x0) {
          ppuVar15 = ppuVar12;
        }
        while( true ) {
          ppuVar12 = ppuVar15;
          if ((((undefined **)ppuVar25[2] == ppuVar9) &&
              (puVar16 = ppuVar25[3], *(int *)(*(long *)(puVar16 + 0x20) + 0x18) == 2)) &&
             (uVar1 = (uint)*(byte *)(plVar20 + 5) & *(uint *)(ppuVar25 + 4) & 0xf, uVar1 != 0)) {
            puVar16[0x30] = puVar16[0x30] & ((byte)uVar1 ^ 0xff);
            *(uint *)(ppuVar25 + 4) = *(uint *)(ppuVar25 + 4) & (uVar1 ^ 0xffffffff);
            puVar16 = ppuVar25[3];
            bVar2 = puVar16[0x30];
            if ((bVar2 & 0xf) == 0) {
              lVar11 = *(long *)(puVar16 + 8);
              plVar21 = *(long **)(puVar16 + 0x10);
              *(long **)(lVar11 + 8) = plVar21;
              *plVar21 = lVar11;
              *(undefined8 *)(puVar16 + 8) = 0;
              *(undefined8 *)(puVar16 + 0x10) = 0;
              puVar16 = *ppuVar25;
              plVar21 = (long *)ppuVar25[1];
              *(long **)(puVar16 + 8) = plVar21;
              *plVar21 = (long)puVar16;
              *ppuVar25 = (undefined *)0x0;
              ppuVar25[1] = (undefined *)0x0;
            }
            else {
              uVar14 = 0;
              iVar17 = 0;
              uVar24 = 0;
              lVar11 = *(long *)(puVar16 + -0x30);
              do {
                uVar3 = 1 << (ulong)(uVar14 & 0x1f);
                if ((uVar3 & (uVar1 | bVar2)) != 0) {
                  if ((uVar3 & uVar1) == 0) {
                    *(int *)((long)&uStack_b0 + uVar24 * 4) = iVar17;
                    uVar24 = (ulong)((int)uVar24 + 1);
                  }
                  iVar17 = iVar17 + 1;
                }
                uVar14 = uVar14 + 1;
              } while (uVar14 != 4);
              puVar10 = (undefined8 *)0x0;
              if (lVar11 != 0) {
                puVar10 = (undefined8 *)(lVar11 + 0x30);
              }
              FUN_109f658b0(puVar10,0x38);
              if (puVar10 != (undefined8 *)0x0) {
                puVar10[6] = 0;
                puVar10[3] = 0;
                puVar10[2] = 0;
                puVar10[5] = 0;
                puVar10[4] = 0;
                puVar10[1] = 0;
                *puVar10 = 0;
              }
              uVar13 = *(undefined8 *)(ppuVar25[3] + 0x28);
              puVar10[1] = 0;
              puVar10[2] = 0;
              *(undefined4 *)(puVar10 + 3) = 5;
              *puVar10 = &PTR_DAT_110b641e0;
              puVar10[4] = &UNK_10e05d730;
              puVar10[5] = uVar13;
              func_0x000109eab760(puVar10,&uStack_b0,uVar24);
              *(undefined8 **)(ppuVar25[3] + 0x28) = puVar10;
            }
            bVar23 = 1;
          }
          if (ppuVar12 == (undefined **)0x0) break;
          ppuVar15 = (undefined **)0x0;
          ppuVar25 = ppuVar12;
          if (*(undefined **)*ppuVar12 != (undefined *)0x0) {
            ppuVar15 = (undefined **)*ppuVar12;
          }
        }
      }
      puVar10 = (undefined8 *)0x28;
      pppuVar8 = pppuVar5;
      FUN_109f6650c();
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar8[4] = (undefined **)0x0;
        pppuVar8[1] = (undefined **)0x0;
        *pppuVar8 = (undefined **)0x0;
        pppuVar8[3] = (undefined **)0x0;
        pppuVar8[2] = (undefined **)0x0;
      }
      *pppuVar8 = (undefined **)0x0;
      pppuVar8[1] = (undefined **)0x0;
      pppuVar8[2] = ppuVar9;
      pppuVar8[3] = (undefined **)pppuVar22;
      *(uint *)(pppuVar8 + 4) = *(byte *)(plVar20 + 5) & 0xf;
      *pppuVar8 = &puStack_100;
      pppuVar8[1] = (undefined **)pppuStack_f8;
      *pppuStack_f8 = (undefined **)pppuVar8;
      bVar4 = bVar23 | bVar4;
      pppuStack_f8 = pppuVar8;
    }
    else {
      uStack_87 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_8f = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = &PTR_FUN_110b65f28;
      puVar10 = &uStack_b0;
      pppuVar8 = pppuVar22;
      pppuStack_78 = &ppuStack_110;
      (*(code *)(*pppuVar22)[3])();
    }
LAB_109ec31f4:
    plVar20 = plVar19;
    if (pppuVar22 == param_2) {
      *param_3 = bVar4;
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar8 = pppuVar6 + -6;
        FUN_109f65aa4(pppuVar8);
        FUN_109f65ae0();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
        ___stack_chk_fail();
        __Unwind_Resume();
        (**(code **)(*(long *)puVar10[6] + 0x18))((long *)puVar10[6],pppuVar8[7]);
        return (undefined ***)0x0;
      }
      return pppuVar8;
    }
  } while( true );
}



/* Entry: 109ec326c; end: 109ec32bf;  */

undefined8 FUN_109ec326c(long param_1,long param_2)

{
  (**(code **)(**(long **)(param_2 + 0x30) + 0x18))
            (*(long **)(param_2 + 0x30),*(undefined8 *)(param_1 + 0x38));
  return 0;
}



/* Entry: 109ec32c0; end: 109ec3317;  */

undefined8 FUN_109ec32c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x38);
  plVar2 = (long *)*plVar1;
  if (plVar2 != (long *)0x0) {
    while( true ) {
      lVar3 = *plVar2;
      if ((*(uint *)(plVar1[2] + 0x40) & 0x7800) == 0x2800) {
        puVar4 = (undefined8 *)plVar1[1];
        plVar2[1] = (long)puVar4;
        *puVar4 = plVar2;
        *plVar1 = 0;
        plVar1[1] = 0;
      }
      if (lVar3 == 0) break;
      plVar1 = plVar2;
      plVar2 = (long *)*plVar2;
    }
  }
  return 0;
}



/* Entry: 109ec3318; end: 109ec33a7;  */

undefined8 FUN_109ec3318(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 == 0 || *(int *)(lVar3 + 0x18) != 2) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 0x30);
  uVar2 = 1 << (ulong)(uVar1 & 3);
  if ((uVar1 & 0x600) != 0) {
    uVar2 = 1 << (ulong)(uVar1 >> 2 & 3) | uVar2;
  }
  if (0x200 < (uVar1 & 0x700)) {
    uVar2 = uVar2 | 1 << (ulong)(uVar1 >> 4 & 3);
  }
  if ((uVar1 & 0x400) != 0) {
    uVar2 = uVar2 | 1 << (ulong)(uVar1 >> 6 & 3);
  }
  FUN_109ec33a8(**(undefined8 **)(param_1 + 0x38),*(undefined8 *)(lVar3 + 0x28),uVar2);
  return 1;
}



/* Entry: 109ec33a8; end: 109ec3457;  */

void FUN_109ec33a8(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)0x0;
    if (*plVar2 != 0) {
      plVar3 = plVar2;
    }
LAB_109ec33c0:
    if (param_1[2] == param_2) {
      lVar4 = *(long *)(param_2 + 0x20);
      if (*(char *)(lVar4 + 0xd) != '\0') {
        if (*(char *)(lVar4 + 0xd) == '\x01') {
          if ((*(byte *)(lVar4 + 4) & 0xf0) == 0) {
LAB_109ec3410:
            uVar1 = *(uint *)(param_1 + 4);
            *(uint *)(param_1 + 4) = uVar1 & ~param_3;
            if ((uVar1 & ~param_3) != 0) goto LAB_109ec3430;
          }
        }
        else if ((*(char *)(lVar4 + 0xe) == '\x01') && ((*(uint *)(lVar4 + 4) & 0xfc) < 0xc))
        goto LAB_109ec3410;
      }
      puVar5 = (undefined8 *)param_1[1];
      plVar2[1] = (long)puVar5;
      *puVar5 = plVar2;
      *param_1 = 0;
      param_1[1] = 0;
    }
LAB_109ec3430:
    if (plVar3 != (long *)0x0) {
      plVar2 = (long *)*plVar3;
      param_1 = plVar3;
      plVar3 = (long *)0x0;
      if (*plVar2 != 0) {
        plVar3 = plVar2;
      }
      goto LAB_109ec33c0;
    }
  }
  return;
}



/* Entry: 109ec3458; end: 109ec353b;  */

undefined8 FUN_109ec3458(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)(param_2 + 0x28);
  puVar5 = (undefined8 *)*puVar4;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  if ((((puVar5 != puVar1) && (*(long *)(param_2 + 0x48) == param_2 + 0x58)) &&
      (puVar5 != (undefined8 *)0x0 && *(int *)(puVar5 + 2) == 0xc)) &&
     ((*(long *)*puVar5 == 0 && ((undefined8 *)puVar5[8] == puVar5 + 10)))) {
    uVar2 = 0x94;
    FUN_109eac310(0x94,*(undefined8 *)(param_2 + 0x20),puVar5[3]);
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    puVar3 = (undefined8 *)puVar5[4];
    if (puVar3 == puVar5 + 6) {
      *(undefined8 **)(param_2 + 0x28) = puVar1;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 **)(param_2 + 0x40) = puVar4;
    }
    else {
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 **)(param_2 + 0x28) = puVar3;
      *(undefined8 *)(param_2 + 0x40) = puVar5[7];
      puVar3[1] = puVar4;
      **(long **)(param_2 + 0x40) = (long)puVar1;
      puVar5[4] = puVar5 + 6;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = puVar5 + 4;
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
  }
  return 0;
}



/* Entry: 109ec353c; end: 109ec366b;  */

undefined1 FUN_109ec353c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined1 uStack_77;
  long *plStack_70;
  long *plStack_68;
  
  uStack_7f = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_90 = 0;
  ppuStack_a8 = &PTR_FUN_110b661e0;
  uStack_77 = 0;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  plVar6 = (long *)*param_1;
  plVar5 = (long *)*plVar6;
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar6;
    plVar3 = plVar5;
    plVar9 = (long *)0x0;
    plVar11 = (long *)0x0;
    do {
      plVar10 = plVar9;
      plVar12 = plVar11;
      if ((int)plVar2[2] == 7) {
        lVar8 = plVar2[4];
        lVar7 = lVar8;
        _strcmp(lVar8,&UNK_10f61577f);
        plVar12 = plVar2 + -1;
        if ((int)lVar7 != 0) {
          plVar12 = plVar11;
        }
        _strcmp(lVar8,&UNK_10f6157a5);
        plVar10 = plVar2 + -1;
        if ((int)lVar8 != 0) {
          plVar10 = plVar9;
        }
      }
      plVar4 = (long *)*plVar3;
      plVar2 = plVar3;
      plVar3 = plVar4;
      plVar9 = plVar10;
      plVar11 = plVar12;
    } while (plVar4 != (long *)0x0);
    lVar7 = *plVar5;
    plVar6 = plVar6 + -1;
    plStack_a0 = plVar6;
    plStack_70 = plVar12;
    plStack_68 = plVar10;
    (**(code **)(*plVar6 + 0x18))(plVar6,&ppuStack_a8);
    iVar1 = (int)plVar6;
    while ((iVar1 == 0 && (lVar7 != 0))) {
      plVar6 = (long *)*plVar5;
      lVar7 = *plVar6;
      plVar5 = plVar5 + -1;
      plStack_a0 = plVar5;
      (**(code **)(*plVar5 + 0x18))(plVar5,&ppuStack_a8);
      iVar1 = (int)plVar5;
      plVar5 = plVar6;
    }
  }
  return uStack_77;
}



/* Entry: 109ec366c; end: 109ec37db;  */

undefined8 FUN_109ec366c(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_2 + 0x28) != 0x82) {
    return 0;
  }
  plVar2 = *(long **)(param_2 + 0x30);
  if (*(byte *)(plVar2[4] + 0xe) < 2) {
    return 0;
  }
  if (2 < *(byte *)(plVar2[4] + 4) - 2) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(param_2 + 0x38) + 0x20);
  if (*(byte *)(lVar4 + 0xd) < 2) {
    return 0;
  }
  if (*(char *)(lVar4 + 0xe) != '\x01') {
    return 0;
  }
  if (0xb < (*(uint *)(lVar4 + 4) & 0xfc)) {
    return 0;
  }
  (**(code **)(*plVar2 + 0x40))();
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    lVar4 = plVar2[5];
    _strcmp(lVar4,&DAT_10f603c6f);
    if ((int)lVar4 == 0) {
      puVar3 = (undefined8 *)0x0;
      if (*(long *)(param_2 + -0x30) != 0) {
        puVar3 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
      }
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x38);
      FUN_109f658b0(puVar3,0x30);
      if (puVar3 != (undefined8 *)0x0) {
        puVar3[3] = 0;
        puVar3[2] = 0;
        puVar3[5] = 0;
        puVar3[4] = 0;
        puVar3[1] = 0;
        *puVar3 = 0;
      }
      lVar4 = *(long *)(param_1 + 0x38);
      puVar3[1] = 0;
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 3) = 2;
      *puVar3 = &PTR_DAT_110b64048;
      puVar3[4] = *(undefined8 *)(lVar4 + 0x20);
      puVar3[5] = lVar4;
      *(undefined8 **)(param_2 + 0x38) = puVar3;
      goto LAB_109ec37c0;
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  lVar4 = plVar2[5];
  _strcmp(lVar4,&DAT_10f60c82f);
  if ((int)lVar4 != 0) {
    return 0;
  }
  lVar5 = *(long *)(param_2 + 0x30);
  lVar4 = lVar5;
  if (*(int *)(lVar5 + 0x18) != 0) {
    lVar4 = 0;
  }
  lVar5 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x38);
  *(long *)(param_2 + 0x38) = lVar4;
  lVar4 = *(long *)(param_1 + 0x40);
  *(long *)(lVar5 + 0x28) = lVar4;
  iVar1 = *(int *)(lVar4 + 0x60);
  if (*(int *)(lVar4 + 0x60) <= (int)plVar2[0xc]) {
    iVar1 = (int)plVar2[0xc];
  }
  *(int *)(lVar4 + 0x60) = iVar1;
LAB_109ec37c0:
  *(undefined1 *)(param_1 + 0x31) = 1;
  return 0;
}



/* Entry: 109ec37dc; end: 109ec3deb;  */

void FUN_109ec37dc(long param_1,long *param_2)

{
  undefined8 **ppuVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 **ppuStack_b0;
  undefined **ppuStack_a8;
  long *plStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  long *plStack_70;
  long *plStack_68;
  
  if (param_1 == 0) {
    puVar14 = (undefined8 *)0x0;
  }
  else {
    puVar14 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar14 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
  }
  lVar4 = 0;
  FUN_109f64c74(0,0x109f65648,FUN_109f65684);
  lVar15 = *(long *)(param_1 + 0x28);
  plVar17 = *(long **)(lVar15 + 0x28);
  uVar6 = 0xffffffff;
  plVar10 = plVar17;
  do {
    plVar10 = (long *)*plVar10;
    uVar6 = (ulong)((int)uVar6 + 1);
  } while (plVar10 != (long *)0x0);
  plVar10 = (long *)(uVar6 << 3);
  __Znam();
  plVar7 = (long *)**(long **)(param_1 + 0x30);
  if ((long *)*plVar17 != (long *)0x0 && plVar7 != (long *)0x0) {
    plVar16 = param_2 + 1;
    plVar12 = (long *)*plVar17;
    plVar18 = plVar10;
    plVar5 = *(long **)(param_1 + 0x30);
    do {
      plVar11 = plVar12;
      plVar8 = plVar7;
      plVar5 = plVar5 + -1;
      plVar12 = plVar17 + -1;
      plVar7 = plVar12;
      FUN_109ec3dec(plVar12,plVar5,*(long *)(*(long *)(param_1 + 0x28) + 0x70) != 0);
      if ((int)plVar7 == 0) {
        (**(code **)(plVar17[-1] + 0x20))(plVar12,puVar14,lVar4);
        *plVar18 = (long)plVar12;
        *(uint *)(plVar12 + 8) = *(uint *)(plVar12 + 8) & 0xffff87fe | 0x5800;
        plVar12[1] = (long)plVar16;
        plVar7 = (long *)0x0;
        if (plVar12 != (long *)0x0) {
          plVar7 = plVar12 + 1;
        }
        puVar9 = (undefined8 *)param_2[2];
        plVar12[2] = (long)puVar9;
        *puVar9 = plVar7;
        param_2[2] = (long)plVar7;
        uVar2 = *(uint *)(plVar17 + 7) >> 0xb & 0xf;
        if ((uVar2 == 9) || (uVar2 == 6)) {
          puVar9 = puVar14;
          FUN_109f658b0(puVar14,0x38);
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[6] = 0;
            puVar9[3] = 0;
            puVar9[2] = 0;
            puVar9[5] = 0;
            puVar9[4] = 0;
            puVar9[1] = 0;
            *puVar9 = 0;
          }
          puVar13 = puVar14;
          FUN_109f658b0(puVar14,0x30);
          if (puVar13 != (undefined8 *)0x0) {
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[5] = 0;
            puVar13[4] = 0;
            puVar13[1] = 0;
            *puVar13 = 0;
          }
          puVar13[1] = 0;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 2;
          *puVar13 = &PTR_DAT_110b64048;
          puVar13[5] = plVar12;
          puVar13[4] = plVar12[4];
          func_0x000109ea9180(puVar9,puVar13,plVar5);
          puVar9[1] = plVar16;
          puVar13 = (undefined8 *)param_2[2];
          plVar17 = (long *)0x0;
          if (puVar9 != (undefined8 *)0x0) {
            plVar17 = puVar9 + 1;
          }
          puVar9[2] = puVar13;
        }
        else {
          uStack_78 = 0;
          uStack_90 = 0;
          pcStack_98 = (code *)0x0;
          uStack_80 = 0;
          uStack_7f = 0;
          uStack_88 = 0;
          uStack_87 = 0;
          ppuStack_a8 = &PTR_FUN_110b664a8;
          plStack_a0 = param_2;
          (**(code **)(*plVar5 + 0x18))(plVar5,&ppuStack_a8);
          if ((*(uint *)(plVar17 + 7) & 0x7800) != 0x4000) goto LAB_109ec39c4;
          puVar9 = puVar14;
          FUN_109f658b0(puVar14,0x38);
          if (puVar9 != (undefined8 *)0x0) {
            puVar9[6] = 0;
            puVar9[3] = 0;
            puVar9[2] = 0;
            puVar9[5] = 0;
            puVar9[4] = 0;
            puVar9[1] = 0;
            *puVar9 = 0;
          }
          puVar13 = puVar14;
          FUN_109f658b0(puVar14,0x30);
          if (puVar13 != (undefined8 *)0x0) {
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[5] = 0;
            puVar13[4] = 0;
            puVar13[1] = 0;
            *puVar13 = 0;
          }
          lVar15 = *plVar18;
          puVar13[1] = 0;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 2;
          *puVar13 = &PTR_DAT_110b64048;
          puVar13[5] = lVar15;
          puVar13[4] = *(undefined8 *)(lVar15 + 0x20);
          (**(code **)(*plVar5 + 0x20))(plVar5,puVar14,0);
          if ((6 < *(uint *)(plVar5 + 3)) && (*(uint *)(plVar5 + 3) != 0x16)) {
            plVar5 = (long *)0x0;
          }
          func_0x000109ea9180(puVar9,puVar13,plVar5);
          puVar9[1] = plVar16;
          puVar13 = (undefined8 *)param_2[2];
          plVar17 = (long *)0x0;
          if (puVar9 != (undefined8 *)0x0) {
            plVar17 = puVar9 + 1;
          }
          puVar9[2] = puVar13;
        }
        *puVar13 = plVar17;
        param_2[2] = (long)plVar17;
      }
      else {
        *plVar18 = 0;
      }
LAB_109ec39c4:
      plVar12 = (long *)*plVar11;
      plVar7 = (long *)*plVar8;
      plVar18 = plVar18 + 1;
      plVar17 = plVar11;
      plVar5 = plVar8;
    } while (plVar12 != (long *)0x0 && plVar7 != (long *)0x0);
    lVar15 = *(long *)(param_1 + 0x28);
  }
  ppuStack_b0 = &puStack_c8;
  uStack_c0 = 0;
  uStack_b8 = 0;
  plVar17 = *(long **)(lVar15 + 0x50);
  puStack_c8 = &uStack_b8;
  if (*plVar17 != 0) {
    do {
      plVar7 = plVar17 + -1;
      (**(code **)(*plVar7 + 0x20))(plVar7,puVar14,lVar4);
      plVar7[1] = (long)&uStack_b8;
      ppuVar1 = (undefined8 **)0x0;
      if (plVar7 != (long *)0x0) {
        ppuVar1 = (undefined8 **)(plVar7 + 1);
      }
      plVar7[2] = (long)ppuStack_b0;
      *ppuStack_b0 = ppuVar1;
      ppuStack_a8 = &PTR_FUN_110b646d0;
      plStack_a0 = (long *)0x0;
      uStack_7f = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      pcStack_98 = FUN_109ec3e64;
      uStack_88 = (undefined1)*(undefined8 *)(param_1 + 0x20);
      uStack_87 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x20) >> 8);
      ppuStack_b0 = ppuVar1;
      (**(code **)(*plVar7 + 0x18))();
      plVar17 = (long *)*plVar17;
    } while (*plVar17 != 0);
    lVar15 = *(long *)(param_1 + 0x28);
  }
  plVar18 = *(long **)(lVar15 + 0x28);
  plVar16 = *(long **)(param_1 + 0x30);
  plVar17 = (long *)*plVar16;
  plVar7 = (long *)*plVar18;
  if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar16 != (long *)0x0) {
    do {
      plVar12 = plVar7;
      plVar5 = plVar17;
      plVar16 = plVar16 + -1;
      plVar18 = plVar18 + -1;
      plVar17 = plVar18;
      FUN_109ec3dec(plVar18,plVar16,*(long *)(*(long *)(param_1 + 0x28) + 0x70) != 0);
      if ((int)plVar17 != 0) {
        uStack_7f = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_90 = 0;
        pcStack_98 = (code *)0x0;
        plStack_a0 = (long *)0x0;
        ppuStack_a8 = &PTR_FUN_110b66338;
        plVar17 = (long *)*puStack_c8;
        plStack_70 = plVar18;
        plStack_68 = plVar16;
        if (plVar17 != (long *)0x0) {
          lVar15 = *plVar17;
          plVar7 = puStack_c8 + -1;
          plStack_a0 = plVar7;
          (**(code **)(*plVar7 + 0x18))(plVar7,&ppuStack_a8);
          iVar3 = (int)plVar7;
          while ((iVar3 == 0 && (lVar15 != 0))) {
            plVar7 = (long *)*plVar17;
            lVar15 = *plVar7;
            plVar17 = plVar17 + -1;
            plStack_a0 = plVar17;
            (**(code **)(*plVar17 + 0x18))(plVar17,&ppuStack_a8);
            iVar3 = (int)plVar17;
            plVar17 = plVar7;
          }
        }
      }
      plVar17 = (long *)*plVar5;
      plVar7 = (long *)*plVar12;
      plVar16 = plVar5;
      plVar18 = plVar12;
    } while (plVar7 != (long *)0x0 && plVar17 != (long *)0x0);
  }
  if (puStack_c8 != &uStack_b8) {
    *ppuStack_b0 = param_2 + 1;
    puVar9 = (undefined8 *)param_2[2];
    puStack_c8[1] = puVar9;
    *puVar9 = puStack_c8;
    param_2[2] = (long)ppuStack_b0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    ppuStack_b0 = &puStack_c8;
    puStack_c8 = &uStack_b8;
  }
  plVar17 = *(long **)(param_1 + 0x30);
  plVar18 = *(long **)(*(long *)(param_1 + 0x28) + 0x28);
  plVar7 = (long *)*plVar17;
  plVar16 = (long *)*plVar18;
  plVar5 = plVar10;
  if ((long *)*plVar18 != (long *)0x0 && (long *)*plVar17 != (long *)0x0) {
    do {
      plVar8 = plVar16;
      plVar12 = plVar7;
      lVar15 = *plVar5;
      if ((lVar15 != 0) && ((*(uint *)(plVar18 + 7) >> 0xb & 0xf) - 7 < 2)) {
        puVar9 = puVar14;
        FUN_109f658b0(puVar14,0x38);
        if (puVar9 != (undefined8 *)0x0) {
          puVar9[6] = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9[1] = 0;
          *puVar9 = 0;
        }
        puVar13 = puVar14;
        FUN_109f658b0(puVar14,0x30);
        if (puVar13 != (undefined8 *)0x0) {
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          puVar13[1] = 0;
          *puVar13 = 0;
        }
        puVar13[1] = 0;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 3) = 2;
        *puVar13 = &PTR_DAT_110b64048;
        puVar13[5] = lVar15;
        puVar13[4] = *(undefined8 *)(lVar15 + 0x20);
        func_0x000109ea9180(puVar9,plVar17 + -1);
        puVar9[1] = param_2 + 1;
        puVar13 = (undefined8 *)param_2[2];
        plVar17 = (long *)0x0;
        if (puVar9 != (undefined8 *)0x0) {
          plVar17 = puVar9 + 1;
        }
        puVar9[2] = puVar13;
        *puVar13 = plVar17;
        param_2[2] = (long)plVar17;
      }
      plVar7 = (long *)*plVar12;
      plVar16 = (long *)*plVar8;
      plVar17 = plVar12;
      plVar18 = plVar8;
      plVar5 = plVar5 + 1;
    } while (plVar16 != (long *)0x0 && plVar7 != (long *)0x0);
  }
  __ZdaPv(plVar10);
  if (lVar4 != 0) {
    FUN_109f65aa4(lVar4 + -0x30);
    FUN_109f65ae0(lVar4 + -0x30);
  }
  return;
}



/* Entry: 109ec3dec; end: 109ec3e63;  */

/* WARNING: Possible PIC construction at 0x000109ec66fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6700) */
/* WARNING: Removing unreachable block (ram,0x000109ec6704) */
/* WARNING: Removing unreachable block (ram,0x000109ec670c) */

bool FUN_109ec3dec(long param_1,long param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  uVar3 = *(uint *)(param_1 + 0x40) >> 0xb & 0xf;
  if (uVar3 == 9 || uVar3 == 6) {
    lVar5 = *(long *)(param_1 + 0x20);
    cVar1 = *(char *)(lVar5 + 4);
    lVar6 = lVar5;
    while (cVar1 == '\x13') {
      lVar6 = *(long *)(lVar6 + 0x30);
      cVar1 = *(char *)(lVar6 + 4);
    }
    if (cVar1 == '\x0f') {
      bVar4 = *(uint *)(param_2 + 0x18) < 3;
      if (((param_3 & 1) == 0) && (*(uint *)(param_2 + 0x18) < 3)) {
SUB_109ec6694:
        while( true ) {
          *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
          for (; bVar2 = *(byte *)(lVar5 + 4), bVar2 == 0x13; lVar5 = *(long *)(lVar5 + 0x30)) {
          }
          if (0x12 < bVar2) {
            return false;
          }
          uVar3 = 1 << (ulong)(bVar2 & 0x1f);
          if ((uVar3 & 0x1a000) != 0) {
            return true;
          }
          if ((uVar3 & 0x60000) == 0) break;
          if (*(uint *)(lVar5 + 0x10) == 0) {
            return false;
          }
          unaff_x20 = (ulong)*(uint *)(lVar5 + 0x10) - 1;
          unaff_x19 = *(long **)(lVar5 + 0x30) + 6;
          lVar5 = **(long **)(lVar5 + 0x30);
          unaff_x30 = 0x109ec6700;
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x20);
        }
        return false;
      }
    }
    else {
      if ((param_3 & 1) == 0) goto SUB_109ec6694;
      bVar4 = true;
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



/* Entry: 109ec3e64; end: 109ec3f2b;  */

void FUN_109ec3e64(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if (param_1 != 0) {
    puVar4 = (undefined8 *)0x0;
    if (*(long *)(param_1 + -0x30) != 0) {
      puVar4 = (undefined8 *)(*(long *)(param_1 + -0x30) + 0x30);
    }
    if (*(int *)(param_1 + 0x18) == 0xf) {
      if (*(long *)(param_1 + 0x20) == 0) {
        lVar2 = *(long *)(param_1 + 8);
        plVar3 = *(long **)(param_1 + 0x10);
        *(long **)(lVar2 + 8) = plVar3;
        *plVar3 = lVar2;
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
      }
      else {
        (**(code **)(*param_2 + 0x20))(param_2,puVar4,0);
        FUN_109f658b0(puVar4,0x38);
        if (puVar4 != (undefined8 *)0x0) {
          puVar4[6] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[5] = 0;
          puVar4[4] = 0;
          puVar4[1] = 0;
          *puVar4 = 0;
        }
        func_0x000109ea9180();
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = *(undefined8 *)(param_1 + 8);
        puVar4[2] = *(undefined8 *)(param_1 + 0x10);
        puVar4[1] = uVar6;
        puVar1 = (undefined8 *)0x0;
        if (puVar4 != (undefined8 *)0x0) {
          puVar1 = puVar4 + 1;
        }
        *puVar5 = puVar1;
        *(undefined8 **)(*(long *)(param_1 + 8) + 8) = puVar1;
      }
    }
  }
  return;
}



/* Entry: 109ec3f2c; end: 109ec3f97;  */

void FUN_109ec3f2c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 != 0 && *(int *)(lVar3 + 0x18) == 2) &&
     (*(long *)(lVar3 + 0x28) == *(long *)(param_1 + 0x38))) {
    plVar2 = *(long **)(param_1 + 0x40);
    lVar1 = 0;
    if (*(long *)(lVar3 + -0x30) != 0) {
      lVar1 = *(long *)(lVar3 + -0x30) + 0x30;
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,0);
    *param_2 = (long)plVar2;
    return;
  }
  return;
}



/* Entry: 109ec3f98; end: 109ec3f9b;  */

void FUN_109ec3f98(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x18) == 2)) &&
     (*(long *)(lVar3 + 0x28) == *(long *)(param_1 + 0x38))) {
    plVar2 = *(long **)(param_1 + 0x40);
    lVar1 = 0;
    if (*(long *)(lVar3 + -0x30) != 0) {
      lVar1 = *(long *)(lVar3 + -0x30) + 0x30;
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,0);
    *param_2 = (long)plVar2;
    return;
  }
  return;
}



/* Entry: 109ec3f9c; end: 109ec406f;  */

void FUN_109ec3f9c(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *param_2;
  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x18) == 2)) &&
     (*(long *)(lVar3 + 0x28) == *(long *)(param_1 + 0x38))) {
    plVar2 = *(long **)(param_1 + 0x40);
    lVar1 = 0;
    if (*(long *)(lVar3 + -0x30) != 0) {
      lVar1 = *(long *)(lVar3 + -0x30) + 0x30;
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,lVar1,0);
    *param_2 = (long)plVar2;
    return;
  }
  return;
}



/* Entry: 109ec4070; end: 109ec410b;  */

undefined8 FUN_109ec4070(undefined8 param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plStack_48;
  
  plVar4 = *(long **)(param_2 + 0x30);
  plVar1 = (long *)*plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    while( true ) {
      plVar2 = plVar1;
      lVar5 = *plVar2;
      plStack_48 = plVar4 + -1;
      FUN_109ec3f9c(param_1,&plStack_48);
      if (plStack_48 != plVar4 + -1) {
        puVar3 = (undefined8 *)plVar4[1];
        lVar6 = *plVar4;
        plStack_48[2] = plVar4[1];
        plStack_48[1] = lVar6;
        plVar1 = (long *)0x0;
        if (plStack_48 != (long *)0x0) {
          plVar1 = plStack_48 + 1;
        }
        *puVar3 = plVar1;
        *(long **)(*plVar4 + 8) = plVar1;
      }
      if (lVar5 == 0) break;
      plVar1 = (long *)*plVar2;
      plVar4 = plVar2;
    }
  }
  return 0;
}



/* Entry: 109ec410c; end: 109ec4113;  */

void FUN_109ec410c(void)

{
  return;
}



/* Entry: 109ec4114; end: 109ec42bf;  */

undefined8 FUN_109ec4114(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (*(int *)(*(long *)(param_2 + 0x30) + 0x18) != 3) {
    puVar3 = (undefined8 *)0x0;
    if (*(long *)(param_2 + -0x30) != 0) {
      puVar3 = (undefined8 *)(*(long *)(param_2 + -0x30) + 0x30);
    }
    puVar2 = puVar3;
    FUN_109f658b0(puVar3,0x90);
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[0xf] = 0;
      puVar2[0xe] = 0;
      puVar2[0x11] = 0;
      puVar2[0x10] = 0;
      puVar2[0xb] = 0;
      puVar2[10] = 0;
      puVar2[0xd] = 0;
      puVar2[0xc] = 0;
      puVar2[7] = 0;
      puVar2[6] = 0;
      puVar2[9] = 0;
      puVar2[8] = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
      puVar2[5] = 0;
      puVar2[4] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
    FUN_109eaba7c(puVar2,*(undefined8 *)(*(long *)(param_2 + 0x30) + 0x20),&UNK_10f6157bf,0xb);
    lVar4 = *(long *)(param_1 + 8);
    puVar2[1] = lVar4 + 8;
    plVar1 = (long *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = puVar2 + 1;
    }
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    puVar2[2] = puVar5;
    *puVar5 = plVar1;
    *(long **)(lVar4 + 0x10) = plVar1;
    puVar5 = puVar3;
    FUN_109f658b0(puVar3,0x38);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    puVar6 = puVar3;
    FUN_109f658b0(puVar3,0x30);
    if (puVar6 != (undefined8 *)0x0) {
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
    }
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 2;
    *puVar6 = &PTR_DAT_110b64048;
    puVar6[4] = puVar2[4];
    puVar6[5] = puVar2;
    func_0x000109ea9180(puVar5,puVar6,*(undefined8 *)(param_2 + 0x30));
    lVar4 = *(long *)(param_1 + 8);
    puVar5[1] = lVar4 + 8;
    plVar1 = (long *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      plVar1 = puVar5 + 1;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0x10);
    puVar5[2] = puVar6;
    *puVar6 = plVar1;
    *(long **)(lVar4 + 0x10) = plVar1;
    FUN_109f658b0(puVar3,0x30);
    if (puVar3 != (undefined8 *)0x0) {
      puVar3[3] = 0;
      puVar3[2] = 0;
      puVar3[5] = 0;
      puVar3[4] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
    }
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)(puVar3 + 3) = 2;
    *puVar3 = &PTR_DAT_110b64048;
    puVar3[4] = puVar2[4];
    puVar3[5] = puVar2;
    *(undefined8 **)(param_2 + 0x30) = puVar3;
  }
  (**(code **)(**(long **)(param_2 + 0x28) + 0x18))(*(long **)(param_2 + 0x28),param_1);
  return 2;
}



/* Entry: 109ec42c0; end: 109ec42c7;  */

undefined8 FUN_109ec42c0(void)

{
  return 1;
}



/* Entry: 109ec42c8; end: 109ec45ef;  */

undefined8 FUN_109ec42c8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_2 + 0x28);
  lVar4 = param_2 + 0x38;
  if ((*plVar5 != lVar4) || (*(long *)(param_2 + 0x48) != param_2 + 0x58)) {
    plVar1 = *(long **)(param_2 + 0x20);
    lVar3 = 0;
    if (*(long *)(param_2 + -0x30) != 0) {
      lVar3 = *(long *)(param_2 + -0x30) + 0x30;
    }
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar3,0);
    if (plVar1 == (long *)0x0) {
      if (*plVar5 != lVar4) {
        return 0;
      }
      if (*(long *)(param_2 + 0x20) == 0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        lVar3 = *(long *)(*(long *)(param_2 + 0x20) + -0x30);
        puVar2 = (undefined8 *)0x0;
        if (lVar3 != 0) {
          puVar2 = (undefined8 *)(lVar3 + 0x30);
        }
      }
      FUN_109f658b0(puVar2,0x58);
      if (puVar2 != (undefined8 *)0x0) {
        puVar2[10] = 0;
        puVar2[7] = 0;
        puVar2[6] = 0;
        puVar2[9] = 0;
        puVar2[8] = 0;
        puVar2[3] = 0;
        puVar2[2] = 0;
        puVar2[5] = 0;
        puVar2[4] = 0;
        puVar2[1] = 0;
        *puVar2 = 0;
      }
      func_0x000109ea924c();
      *(undefined8 **)(param_2 + 0x20) = puVar2;
      lVar3 = *(long *)(param_2 + 0x48);
      if (lVar3 == param_2 + 0x58) {
        *(long *)(param_2 + 0x28) = lVar4;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(long **)(param_2 + 0x40) = plVar5;
      }
      else {
        *(long *)(param_2 + 0x28) = lVar3;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x60);
        *(long **)(lVar3 + 8) = plVar5;
        **(long **)(param_2 + 0x40) = lVar4;
        *(long *)(param_2 + 0x48) = param_2 + 0x58;
        *(undefined8 *)(param_2 + 0x50) = 0;
        *(undefined8 *)(param_2 + 0x58) = 0;
        *(long **)(param_2 + 0x60) = (long *)(param_2 + 0x48);
      }
      goto LAB_109ec43ec;
    }
    if ((char)plVar1[5] == '\x01') {
      if (*plVar5 != lVar4) {
        **(long **)(param_2 + 0x40) = param_2 + 8;
        plVar1 = *(long **)(param_2 + 0x10);
        lVar3 = *(long *)(param_2 + 0x28);
        *(long **)(lVar3 + 8) = plVar1;
        *plVar1 = lVar3;
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x40);
        *(long *)(param_2 + 0x28) = lVar4;
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0;
        *(long **)(param_2 + 0x40) = plVar5;
      }
    }
    else if (*(long *)(param_2 + 0x48) != param_2 + 0x58) {
      **(long **)(param_2 + 0x60) = param_2 + 8;
      plVar5 = *(long **)(param_2 + 0x10);
      lVar4 = *(long *)(param_2 + 0x48);
      *(long **)(lVar4 + 8) = plVar5;
      *plVar5 = lVar4;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x60);
      *(long *)(param_2 + 0x48) = param_2 + 0x58;
      *(undefined8 *)(param_2 + 0x50) = 0;
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(long **)(param_2 + 0x60) = (long *)(param_2 + 0x48);
    }
  }
  lVar4 = *(long *)(param_2 + 8);
  plVar5 = *(long **)(param_2 + 0x10);
  *(long **)(lVar4 + 8) = plVar5;
  *plVar5 = lVar4;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
LAB_109ec43ec:
  *(undefined1 *)(param_1 + 0x31) = 1;
  return 0;
}



/* Entry: 109ec45f0; end: 109ec4947;  */

/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_109ec45f0(long *param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  long lVar14;
  long **pplVar15;
  ushort uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  long **pplVar21;
  undefined8 *puVar22;
  long **pplVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  long *aplStack_88 [4];
  long lStack_68;
  
code_r0x000109ec45f0:
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  iVar1 = *(int *)(param_2 + 0x28);
  puVar22 = (undefined8 *)(param_2 + 0x30);
  plVar7 = (long *)*puVar22;
  lVar20 = param_2;
  FUN_109ec4948();
  plVar8 = *(long **)(param_2 + 0x38);
  aplStack_88[0] = plVar7;
  aplStack_88[1] = (long *)lVar20;
  FUN_109ec4948();
  aplStack_88[2] = plVar8;
  aplStack_88[3] = (long *)lVar20;
  lVar20 = 1;
  pplVar13 = aplStack_88 + 3;
  pplVar15 = aplStack_88 + 1;
  pplVar21 = aplStack_88;
  pplVar23 = aplStack_88 + 2;
  bVar6 = true;
  do {
    if (iVar1 == 0x98) {
      plVar7 = *pplVar21;
      if (plVar7 != (long *)0x0) {
        plVar10 = *pplVar13;
        if (plVar10 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = plVar7;
          FUN_109ec4a3c();
          if (5 < (uint)plVar8 || (1 << (ulong)((uint)plVar8 & 0x1f) & 0x23U) == 0) break;
        }
        if (param_4 != (long *)0x0) {
          plVar10 = param_4;
          FUN_109ec4a3c();
          if ((0x27U >> (ulong)((uint)plVar7 & 0x1f) & 1) == 0) break;
          plVar8 = (long *)(ulong)*(uint *)(&UNK_10e06c200 + ((ulong)plVar7 & 0xffffffff) * 4);
        }
LAB_109ec472c:
        if ((((int)plVar8 == 5) && (plVar10 = *(long **)(param_2 + 0x30), plVar10 != (long *)0x0))
           && (lVar20 = *(long *)(param_2 + 0x38),
              ((int)plVar10[3] == 3 && lVar20 != 0) && *(int *)(lVar20 + 0x18) == 3))
        goto LAB_109ec4854;
      }
    }
    else {
      plVar7 = *pplVar15;
      if (plVar7 != (long *)0x0) {
        plVar10 = *pplVar23;
        if (plVar10 == (long *)0x0) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar8 = plVar7;
          FUN_109ec4a3c();
          if ((uint)plVar8 < 3) break;
        }
        if ((param_3 == (long *)0x0) ||
           (plVar10 = param_3, FUN_109ec4a3c(), plVar8 = plVar7, 1 < (uint)plVar7))
        goto LAB_109ec472c;
        break;
      }
    }
    lVar20 = 0;
    pplVar23 = aplStack_88;
    bVar5 = !bVar6;
    pplVar13 = aplStack_88 + 1;
    pplVar15 = aplStack_88 + 3;
    pplVar21 = aplStack_88 + 2;
    bVar6 = false;
    if (bVar5) {
      uVar19 = 0;
      bVar6 = true;
      do {
        bVar5 = bVar6;
        lVar20 = puVar22[uVar19];
        if ((lVar20 != 0 && *(int *)(lVar20 + 0x18) == 4) &&
           ((*(uint *)(lVar20 + 0x28) & 0xfffffffe) == 0x98)) {
          uVar11 = uVar19 ^ 1;
          plVar7 = param_3;
          plVar10 = param_4;
          if (iVar1 == 0x98) {
            pplVar23[uVar11 * 2] = (long *)0x0;
            plVar8 = aplStack_88[uVar11 * 2 + 1];
            if (plVar8 != (long *)0x0) {
              plVar10 = plVar8;
            }
            if (plVar8 != (long *)0x0 && param_4 != (long *)0x0) {
              func_0x000109ec4f00(plVar8,param_4);
              plVar10 = plVar8;
            }
          }
          else {
            aplStack_88[uVar11 * 2 + 1] = (long *)0x0;
            plVar8 = pplVar23[uVar11 * 2];
            if (plVar8 != (long *)0x0) {
              plVar7 = plVar8;
            }
            if (plVar8 != (long *)0x0 && param_3 != (long *)0x0) {
              func_0x000109ec4f4c(plVar8,param_3,plVar7);
              plVar7 = plVar8;
            }
          }
          plVar8 = param_1;
          FUN_109ec45f0(param_1,lVar20,plVar7,plVar10);
          puVar22[uVar19] = plVar8;
        }
        uVar19 = 1;
        bVar6 = false;
      } while (bVar5);
      plVar10 = *(long **)(param_2 + 0x30);
      lVar20 = *(long *)(param_2 + 0x38);
      param_1 = plVar8;
      if (((plVar10 == (long *)0x0 || (int)plVar10[3] != 3) || lVar20 == 0) ||
          *(int *)(lVar20 + 0x18) != 3) goto LAB_109ec4908;
LAB_109ec4854:
      bVar6 = iVar1 == 0x98;
      param_1 = (long *)(ulong)bVar6;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109ec4944;
      uVar19 = 0;
      if (plVar10 != (long *)0x0) {
        uVar19 = 0;
        if (plVar10[-6] != 0) {
          uVar19 = plVar10[-6] + 0x30;
        }
      }
      (**(code **)(*plVar10 + 0x20))(plVar10,uVar19,0);
      lVar12 = plVar10[4];
      if ((uint)*(byte *)(lVar12 + 0xe) * (uint)*(byte *)(lVar12 + 0xd) == 0) goto LAB_109ec4ef4;
      lVar14 = 0;
      uVar11 = 0;
      lVar20 = lVar20 + 0x28;
      do {
        bVar2 = *(byte *)(lVar12 + 4);
        if (bVar2 < 3) {
          if (bVar2 == 0) {
            uVar17 = *(uint *)(lVar20 + lVar14);
            uVar18 = *(uint *)((long)plVar10 + lVar14 + 0x28);
            if (bVar6) {
              if (uVar17 < uVar18) {
LAB_109ec4ed4:
                *(uint *)((long)plVar10 + lVar14 + 0x28) = uVar17;
              }
            }
            else if (uVar18 < uVar17) goto LAB_109ec4ed4;
          }
          else if (bVar2 == 1) {
            uVar17 = *(uint *)(lVar20 + lVar14);
            iVar1 = *(int *)((long)plVar10 + lVar14 + 0x28);
            if (bVar6) {
              if ((int)uVar17 < iVar1) goto LAB_109ec4ed4;
            }
            else if (iVar1 < (int)uVar17) goto LAB_109ec4ed4;
          }
          else if (bVar2 == 2) {
            fVar24 = *(float *)(lVar20 + lVar14);
            fVar26 = *(float *)((long)plVar10 + lVar14 + 0x28);
            if (bVar6) {
              if (fVar24 < fVar26) {
LAB_109ec4ec8:
                *(float *)((long)plVar10 + lVar14 + 0x28) = fVar24;
              }
            }
            else if (fVar26 < fVar24) goto LAB_109ec4ec8;
          }
        }
        else if (bVar2 < 7) {
          if (bVar2 == 3) {
            uVar16 = *(ushort *)(lVar20 + uVar11 * 2);
            fVar24 = (float)(((int)(short)uVar16 & 0x7fffU) << 0xd) * 5.192297e+33;
            if (65536.0 <= fVar24) {
              fVar24 = (float)((uint)fVar24 | 0x7f800000);
            }
            fVar24 = (float)((uint)fVar24 | (int)(short)uVar16 & 0x80000000U);
            uVar18 = (uint)*(short *)((long)plVar10 + uVar11 * 2 + 0x28);
            fVar26 = (float)((uVar18 & 0x7fff) << 0xd) * 5.192297e+33;
            uVar19 = (ulong)((uint)fVar26 | 0x7f800000);
            if (65536.0 <= fVar26) {
              fVar26 = (float)((uint)fVar26 | 0x7f800000);
            }
            fVar26 = (float)((uint)fVar26 | uVar18 & 0x80000000);
            bVar5 = fVar26 <= fVar24;
            if (!bVar6) {
              bVar5 = fVar24 <= fVar26;
            }
            if (!bVar5) goto LAB_109ec4ebc;
          }
          else if (bVar2 == 4) {
            dVar25 = *(double *)(lVar20 + uVar11 * 8);
            if (bVar6) {
              if (dVar25 < (double)plVar10[uVar11 + 5]) {
LAB_109ec4eb0:
                plVar10[uVar11 + 5] = (long)dVar25;
              }
            }
            else if ((double)plVar10[uVar11 + 5] < dVar25) goto LAB_109ec4eb0;
          }
        }
        else if (bVar2 == 8) {
          uVar16 = *(ushort *)(lVar20 + uVar11 * 2);
          sVar4 = *(short *)((long)plVar10 + uVar11 * 2 + 0x28);
          if (bVar6) {
            if ((short)uVar16 < sVar4) {
LAB_109ec4ebc:
              *(ushort *)((long)plVar10 + uVar11 * 2 + 0x28) = uVar16;
            }
          }
          else if (sVar4 < (short)uVar16) goto LAB_109ec4ebc;
        }
        else if (bVar2 == 7) {
          uVar16 = *(ushort *)(lVar20 + uVar11 * 2);
          uVar3 = *(ushort *)((long)plVar10 + uVar11 * 2 + 0x28);
          if (bVar6) {
            if (uVar16 < uVar3) goto LAB_109ec4ebc;
          }
          else if (uVar3 < uVar16) goto LAB_109ec4ebc;
        }
        uVar11 = uVar11 + 1;
        lVar14 = lVar14 + 4;
        if ((ulong)*(byte *)(lVar12 + 0xe) * (ulong)*(byte *)(lVar12 + 0xd) <= uVar11) {
LAB_109ec4ef4:
          auVar29._8_8_ = uVar19;
          auVar29._0_8_ = plVar10;
          return auVar29;
        }
      } while( true );
    }
  } while( true );
  *(undefined1 *)((long)param_1 + 0x31) = 1;
  param_2 = puVar22[lVar20];
  if (((param_2 == 0) || (*(int *)(param_2 + 0x18) != 4)) ||
     ((*(uint *)(param_2 + 0x28) & 0xfffffffe) != 0x98)) goto LAB_109ec4908;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) goto LAB_109ec4944;
  goto code_r0x000109ec45f0;
LAB_109ec4908:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    auVar27._8_8_ = plVar10;
    auVar27._0_8_ = param_2;
    return auVar27;
  }
LAB_109ec4944:
  ___stack_chk_fail();
  if (((param_1 == (long *)0x0) || ((int)param_1[3] != 4)) ||
     ((*(uint *)(param_1 + 5) & 0xfffffffe) != 0x98)) {
    plVar10 = param_1;
    if ((int)param_1[3] != 3) {
      param_1 = (long *)0x0;
      plVar10 = param_1;
    }
  }
  else {
    plVar9 = (long *)param_1[6];
    FUN_109ec4948();
    plVar7 = (long *)param_1[7];
    plVar8 = plVar10;
    FUN_109ec4948();
    lVar20 = param_1[5];
    bVar6 = (int)lVar20 != 0x98;
    if (plVar9 == (long *)0x0) {
      param_1 = (long *)0x0;
      if (bVar6) {
        param_1 = plVar7;
      }
    }
    else if (plVar7 == (long *)0x0) {
      param_1 = (long *)0x0;
      if (bVar6) {
        param_1 = plVar9;
      }
    }
    else if (bVar6) {
      func_0x000109ec4f4c(plVar9,plVar7);
      param_1 = plVar9;
    }
    else {
      func_0x000109ec4f00();
      param_1 = plVar9;
    }
    bVar6 = (int)lVar20 != 0x98;
    if (plVar10 == (long *)0x0) {
      plVar10 = plVar8;
      if (bVar6) {
        plVar10 = (long *)0x0;
      }
    }
    else if (plVar8 == (long *)0x0) {
      if (bVar6) {
        plVar10 = (long *)0x0;
      }
    }
    else if (bVar6) {
      func_0x000109ec4f4c(plVar10,plVar8);
    }
    else {
      func_0x000109ec4f00();
    }
  }
  auVar28._8_8_ = plVar10;
  auVar28._0_8_ = param_1;
  return auVar28;
}



/* Entry: 109ec4948; end: 109ec4a3b;  */

undefined1  [16] FUN_109ec4948(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x18) != 4)) ||
     ((*(uint *)(param_1 + 0x28) & 0xfffffffe) != 0x98)) {
    param_2 = param_1;
    if (*(int *)(param_1 + 0x18) != 3) {
      param_1 = 0;
      param_2 = param_1;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    FUN_109ec4948();
    lVar4 = *(long *)(param_1 + 0x38);
    lVar5 = param_2;
    FUN_109ec4948();
    iVar1 = *(int *)(param_1 + 0x28);
    bVar2 = iVar1 != 0x98;
    if (lVar3 == 0) {
      param_1 = 0;
      if (bVar2) {
        param_1 = lVar4;
      }
    }
    else if (lVar4 == 0) {
      param_1 = 0;
      if (bVar2) {
        param_1 = lVar3;
      }
    }
    else if (bVar2) {
      func_0x000109ec4f4c(lVar3,lVar4);
      param_1 = lVar3;
    }
    else {
      func_0x000109ec4f00();
      param_1 = lVar3;
    }
    bVar2 = iVar1 != 0x98;
    if (param_2 == 0) {
      param_2 = lVar5;
      if (bVar2) {
        param_2 = 0;
      }
    }
    else if (lVar5 == 0) {
      if (bVar2) {
        param_2 = 0;
      }
    }
    else if (bVar2) {
      func_0x000109ec4f4c(param_2,lVar5);
    }
    else {
      func_0x000109ec4f00();
    }
  }
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 109ec4a3c; end: 109ec4cd7;  */

undefined4 FUN_109ec4a3c(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  double *pdVar10;
  double *pdVar11;
  uint uVar12;
  undefined4 uVar13;
  long lVar14;
  double *pdVar15;
  long lVar16;
  double *pdVar17;
  ulong uVar18;
  double *pdVar19;
  double *pdVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  double dVar24;
  
  lVar16 = *(long *)(param_1 + 0x20);
  uVar12 = (uint)*(byte *)(lVar16 + 0xe) * (uint)*(byte *)(lVar16 + 0xd);
  lVar14 = *(long *)(param_2 + 0x20);
  uVar1 = (uint)*(byte *)(lVar14 + 0xe) * (uint)*(byte *)(lVar14 + 0xd);
  if (uVar12 <= uVar1) {
    uVar12 = uVar1;
  }
  if (uVar12 == 0) {
    return 4;
  }
  if (*(byte *)(lVar14 + 0xd) == 1) {
    uVar9 = (ulong)((*(byte *)(lVar14 + 4) & 0xf0) != 0);
  }
  else {
    uVar9 = 1;
  }
  bVar6 = false;
  bVar2 = false;
  uVar18 = (ulong)((*(uint *)(lVar16 + 4) & 0xf0) != 0 || *(byte *)(lVar16 + 0xd) != 1);
  pdVar15 = (double *)(param_1 + 0x28);
  pdVar10 = (double *)(param_2 + 0x28);
  uVar1 = *(uint *)(lVar16 + 4) & 0xff;
  pdVar11 = pdVar10;
  pdVar17 = pdVar10;
  pdVar19 = pdVar15;
  pdVar20 = pdVar15;
  bVar5 = false;
  do {
    bVar4 = true;
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        fVar21 = *(float *)pdVar19;
        fVar23 = *(float *)pdVar10;
LAB_109ec4c34:
        if ((uint)fVar23 <= (uint)fVar21) {
          bVar2 = (bool)(((uint)fVar23 <= (uint)fVar21 && fVar21 != fVar23) | bVar2);
          bVar4 = bVar5;
          bVar6 = (bool)(((uint)fVar23 > (uint)fVar21 || fVar21 == fVar23) | bVar6);
        }
      }
      else {
        if (uVar1 == 1) {
          fVar21 = *(float *)pdVar19;
          fVar23 = *(float *)pdVar10;
          goto LAB_109ec4ba4;
        }
        fVar21 = *(float *)pdVar19;
        fVar23 = *(float *)pdVar10;
        bVar3 = (bool)(fVar23 < fVar21 | bVar2);
        bVar7 = (bool)(fVar21 <= fVar23 | bVar6);
        bVar8 = fVar21 < fVar23;
LAB_109ec4c1c:
        if (!bVar8) {
          bVar2 = bVar3;
          bVar4 = bVar5;
          bVar6 = bVar7;
        }
      }
    }
    else if (uVar1 < 7) {
      if (uVar1 != 3) {
        dVar22 = *pdVar20;
        dVar24 = *pdVar11;
        bVar3 = (bool)(dVar24 < dVar22 | bVar2);
        bVar7 = (bool)(dVar22 <= dVar24 | bVar6);
        bVar8 = false;
        if (!NAN(dVar22) && !NAN(dVar24)) {
          bVar8 = dVar22 < dVar24;
        }
        goto LAB_109ec4c1c;
      }
      fVar21 = (float)(((int)(short)*(ushort *)pdVar15 & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar21) {
        fVar21 = (float)((uint)fVar21 | 0x7f800000);
      }
      fVar21 = (float)((uint)fVar21 | (int)(short)*(ushort *)pdVar15 & 0x80000000U);
      fVar23 = (float)(((int)(short)*(ushort *)pdVar17 & 0x7fffU) << 0xd) * 5.192297e+33;
      if (65536.0 <= fVar23) {
        fVar23 = (float)((uint)fVar23 | 0x7f800000);
      }
      fVar23 = (float)((uint)fVar23 | (int)(short)*(ushort *)pdVar17 & 0x80000000U);
      if (fVar23 <= fVar21) {
        bVar2 = (bool)(fVar23 < fVar21 | bVar2);
        bVar4 = bVar5;
        bVar6 = (bool)(fVar21 <= fVar23 | bVar6);
      }
      else {
        bVar4 = true;
      }
    }
    else {
      if (uVar1 != 8) {
        fVar21 = (float)(uint)*(ushort *)pdVar15;
        fVar23 = (float)(uint)*(ushort *)pdVar17;
        goto LAB_109ec4c34;
      }
      fVar21 = (float)(int)(short)*(ushort *)pdVar15;
      fVar23 = (float)(int)(short)*(ushort *)pdVar17;
LAB_109ec4ba4:
      if ((int)fVar23 <= (int)fVar21) {
        bVar2 = (bool)((int)fVar23 < (int)fVar21 | bVar2);
        bVar4 = bVar5;
        bVar6 = (bool)((int)fVar21 <= (int)fVar23 | bVar6);
      }
    }
    pdVar20 = pdVar20 + uVar18;
    pdVar19 = (double *)((long)pdVar19 + uVar18 * 4);
    pdVar15 = (double *)((long)pdVar15 + uVar18 * 2);
    pdVar11 = pdVar11 + uVar9;
    pdVar10 = (double *)((long)pdVar10 + uVar9 * 4);
    pdVar17 = (double *)((long)pdVar17 + uVar9 * 2);
    uVar12 = uVar12 - 1;
    bVar5 = bVar4;
    if (uVar12 == 0) {
      if ((bool)(bVar4 & bVar2)) {
        return 5;
      }
      if (!bVar6) {
        uVar13 = 0;
        if (!bVar4) {
          uVar13 = 4;
        }
        return uVar13;
      }
      uVar13 = 2;
      if (bVar2) {
        uVar13 = 3;
      }
      if (bVar4) {
        uVar13 = 1;
      }
      return uVar13;
    }
  } while( true );
}



/* Entry: 109ec4cd8; end: 109ec4f97;  */

void FUN_109ec4cd8(int param_1,long *param_2,long param_3)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  lVar6 = 0;
  if (param_2 != (long *)0x0) {
    lVar6 = 0;
    if (param_2[-6] != 0) {
      lVar6 = param_2[-6] + 0x30;
    }
  }
  (**(code **)(*param_2 + 0x20))(param_2,lVar6,0);
  lVar6 = param_2[4];
  if ((uint)*(byte *)(lVar6 + 0xe) * (uint)*(byte *)(lVar6 + 0xd) != 0) {
    lVar7 = 0;
    uVar8 = 0;
    param_3 = param_3 + 0x28;
    do {
      bVar2 = *(byte *)(lVar6 + 4);
      if (bVar2 < 3) {
        if (bVar2 == 0) {
          uVar10 = *(uint *)(param_3 + lVar7);
          uVar11 = *(uint *)((long)param_2 + lVar7 + 0x28);
          if (param_1 == 0) {
            if (uVar11 < uVar10) goto LAB_109ec4ed4;
          }
          else if (uVar10 < uVar11) {
LAB_109ec4ed4:
            *(uint *)((long)param_2 + lVar7 + 0x28) = uVar10;
          }
        }
        else if (bVar2 == 1) {
          uVar10 = *(uint *)(param_3 + lVar7);
          iVar1 = *(int *)((long)param_2 + lVar7 + 0x28);
          if (param_1 == 0) {
            if (iVar1 < (int)uVar10) goto LAB_109ec4ed4;
          }
          else if ((int)uVar10 < iVar1) goto LAB_109ec4ed4;
        }
        else if (bVar2 == 2) {
          fVar12 = *(float *)(param_3 + lVar7);
          fVar14 = *(float *)((long)param_2 + lVar7 + 0x28);
          if (param_1 == 0) {
            if (fVar14 < fVar12) goto LAB_109ec4ec8;
          }
          else if (fVar12 < fVar14) {
LAB_109ec4ec8:
            *(float *)((long)param_2 + lVar7 + 0x28) = fVar12;
          }
        }
      }
      else if (bVar2 < 7) {
        if (bVar2 == 3) {
          uVar9 = *(ushort *)(param_3 + uVar8 * 2);
          fVar12 = (float)(((int)(short)uVar9 & 0x7fffU) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar12) {
            fVar12 = (float)((uint)fVar12 | 0x7f800000);
          }
          fVar12 = (float)((uint)fVar12 | (int)(short)uVar9 & 0x80000000U);
          uVar11 = (uint)*(short *)((long)param_2 + uVar8 * 2 + 0x28);
          fVar14 = (float)((uVar11 & 0x7fff) << 0xd) * 5.192297e+33;
          if (65536.0 <= fVar14) {
            fVar14 = (float)((uint)fVar14 | 0x7f800000);
          }
          fVar14 = (float)((uint)fVar14 | uVar11 & 0x80000000);
          bVar5 = fVar14 <= fVar12;
          if (param_1 == 0) {
            bVar5 = fVar12 <= fVar14;
          }
          if (!bVar5) goto LAB_109ec4ebc;
        }
        else if (bVar2 == 4) {
          dVar13 = *(double *)(param_3 + uVar8 * 8);
          if (param_1 == 0) {
            if ((double)param_2[uVar8 + 5] < dVar13) goto LAB_109ec4eb0;
          }
          else if (dVar13 < (double)param_2[uVar8 + 5]) {
LAB_109ec4eb0:
            param_2[uVar8 + 5] = (long)dVar13;
          }
        }
      }
      else if (bVar2 == 8) {
        uVar9 = *(ushort *)(param_3 + uVar8 * 2);
        sVar4 = *(short *)((long)param_2 + uVar8 * 2 + 0x28);
        if (param_1 == 0) {
          if (sVar4 < (short)uVar9) goto LAB_109ec4ebc;
        }
        else if ((short)uVar9 < sVar4) {
LAB_109ec4ebc:
          *(ushort *)((long)param_2 + uVar8 * 2 + 0x28) = uVar9;
        }
      }
      else if (bVar2 == 7) {
        uVar9 = *(ushort *)(param_3 + uVar8 * 2);
        uVar3 = *(ushort *)((long)param_2 + uVar8 * 2 + 0x28);
        if (param_1 == 0) {
          if (uVar3 < uVar9) goto LAB_109ec4ebc;
        }
        else if (uVar9 < uVar3) goto LAB_109ec4ebc;
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 4;
    } while (uVar8 < (ulong)*(byte *)(lVar6 + 0xe) * (ulong)*(byte *)(lVar6 + 0xd));
  }
  return;
}



/* Entry: 109ec4f98; end: 109ec4fc3;  */

bool FUN_109ec4f98(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar1 + 0x40))();
  return (*(byte *)(plVar1 + 8) & 0x60) != 0;
}



/* Entry: 109ec4fc4; end: 109ec51bb;  */

void FUN_109ec4fc4(long param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  long alStack_160 [7];
  long *plStack_128;
  undefined **ppuStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  code *pcStack_f0;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  uint uStack_48;
  undefined2 uStack_44;
  
  plVar4 = alStack_160;
  plVar8 = (long *)*param_2;
  if (((plVar8 != (long *)0x0) && ((int)plVar8[3] == 4)) &&
     (uVar1 = (int)plVar8[5] - 0x7b, uVar1 < 0x1f && (1 << (ulong)(uVar1 & 0x1f) & 0x6fc00081U) != 0
     )) {
    auStack_58[0] = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_44 = 1;
    ppuStack_108 = &PTR_FUN_110b646d0;
    uStack_df = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_100 = 0;
    pcStack_f0 = (code *)0x0;
    pcStack_f8 = FUN_109ec5224;
    uStack_e8 = SUB81(auStack_58,0);
    uStack_e7 = (undefined7)((ulong)auStack_58 >> 8);
    (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_108);
    if (((char)uStack_44 == '\x01') && (2 < uStack_48)) {
      FUN_109ea9758(&ppuStack_108,1);
      func_0x000109ea9448(alStack_160,0x7b,&ppuStack_108,plVar8);
      plVar8 = plStack_128;
      if (plStack_128 != (long *)0x0) {
        iVar2 = 0;
        do {
          if ((int)plVar8[3] == 4) {
            plVar5 = (long *)plVar8[6];
            if ((int)plVar5[3] != 4) {
              plVar5 = (long *)plVar8[7];
              goto LAB_109ec50f8;
            }
            plVar8[6] = plVar5[7];
            plVar5[7] = (long)plVar8;
            plVar4[7] = (long)plVar5;
            plVar8 = plVar5;
          }
          else {
            plVar5 = (long *)0x0;
LAB_109ec50f8:
            iVar2 = iVar2 + 1;
            plVar4 = plVar8;
            plVar8 = plVar5;
          }
        } while (plVar8 != (long *)0x0);
        plVar8 = plStack_128;
        for (uVar1 = iVar2 - 1; 1 < (int)uVar1; uVar1 = uVar1 + ~(uVar1 >> 1)) {
          plVar4 = alStack_160;
          uVar3 = uVar1 >> 1;
          plStack_128 = plVar8;
          do {
            lVar6 = *(long *)((long)plVar4 + 0x38);
            puVar7 = *(undefined1 **)(lVar6 + 0x38);
            *(undefined1 **)((long)plVar4 + 0x38) = puVar7;
            *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(puVar7 + 0x30);
            *(long *)(puVar7 + 0x30) = lVar6;
            uVar3 = uVar3 - 1;
            plVar4 = (long *)puVar7;
          } while (uVar3 != 0);
          plVar8 = plStack_128;
        }
      }
    }
    if (plVar8 != (long *)*param_2) {
      ppuStack_108 = &PTR_FUN_110b646d0;
      pcStack_f8 = (code *)0x0;
      uStack_100 = 0;
      uStack_d8 = 0;
      pcStack_f0 = FUN_109ec51bc;
      uStack_e8 = 0;
      uStack_e7 = 0;
      uStack_e0 = 0;
      uStack_df = 0;
      (**(code **)(*plVar8 + 0x18))(plVar8,&ppuStack_108);
      *param_2 = plVar8;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
  }
  return;
}



/* Entry: 109ec51bc; end: 109ec5223;  */

void FUN_109ec51bc(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 4)) {
    uVar3 = (ulong)*(byte *)(*(long *)(param_1 + 0x20) + 4);
    bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x30) + 0x20) + 0xd);
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 0xd);
    if (bVar1 <= bVar2) {
      bVar1 = bVar2;
    }
    func_0x000109ec6c94(uVar3,bVar1,1,0,0,0);
    *(ulong *)(param_1 + 0x20) = uVar3;
  }
  return;
}



/* Entry: 109ec5224; end: 109ec5347;  */

void FUN_109ec5224(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if ((char)param_2[5] == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x18);
    if ((param_1 == 0) || (uVar1 != 3)) {
      if (1 < uVar1) {
        if (param_1 == 0) {
          return;
        }
        if (uVar1 != 4) {
          return;
        }
        lVar3 = *(long *)(param_1 + 0x20);
        if ((((*(byte *)(lVar3 + 0xe) < 2) || (2 < *(byte *)(lVar3 + 4) - 2)) &&
            ((lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x20), *(byte *)(lVar4 + 0xe) < 2 ||
             (2 < *(byte *)(lVar4 + 4) - 2)))) &&
           ((((*(long *)(param_1 + 0x38) == 0 ||
              (lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 0x20), *(byte *)(lVar4 + 0xe) < 2)) ||
             (2 < *(byte *)(lVar4 + 4) - 2)) &&
            ((*(long *)(param_2 + 2) == 0 || (*(long *)(param_2 + 2) == lVar3)))))) {
          *(long *)(param_2 + 2) = lVar3;
          param_2[4] = param_2[4] + 1;
          iVar2 = *(int *)(param_1 + 0x28);
          if ((iVar2 - 0x7bU < 0x1f) && ((1 << (ulong)(iVar2 - 0x7bU & 0x1f) & 0x6fc00081U) != 0)) {
            if ((*param_2 != 0) && (*param_2 != iVar2)) {
              *(undefined1 *)(param_2 + 5) = 0;
            }
            *param_2 = iVar2;
            return;
          }
        }
      }
      *(undefined1 *)(param_2 + 5) = 0;
      return;
    }
    if (*(char *)((long)param_2 + 0x15) == '\x01') {
      *(undefined1 *)(param_2 + 5) = 0;
    }
    *(undefined1 *)((long)param_2 + 0x15) = 1;
  }
  return;
}



/* Entry: 109ec5348; end: 109ec5407;  */

undefined1 FUN_109ec5348(undefined8 *param_1)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  long *plStack_78;
  
  func_0x000109eb80e0(auStack_80);
  plVar2 = plStack_78;
  uStack_88 = 0;
  plVar4 = *(long **)*param_1;
  plVar3 = (long *)*param_1;
  puStack_90 = auStack_80;
  plStack_78 = plVar2;
  if (plVar4 != (long *)0x0) {
    while( true ) {
      plVar5 = plVar4;
      lVar6 = *plVar5;
      plVar3 = plVar3 + -1;
      plStack_78 = plVar3;
      (**(code **)(*plVar3 + 0x18))(plVar3,auStack_80);
      if (((int)plVar3 != 0) || (plStack_78 = plVar2, lVar6 == 0)) break;
      plVar4 = (long *)*plVar5;
      plVar3 = plVar5;
    }
  }
  FUN_109eabdbc(param_1,FUN_109ec5408,&puStack_90);
  uVar1 = uStack_88;
  func_0x000109eb8168(auStack_80);
  return uVar1;
}



/* Entry: 109ec5408; end: 109ec5527;  */

void FUN_109ec5408(long param_1,long param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 8);
  plVar4 = (long *)0x0;
  if (param_1 != 0) {
    plVar4 = plVar5;
  }
  if (plVar4 != *(long **)(param_2 + 8)) {
    do {
      plVar5 = (long *)*plVar5;
      if ((plVar4 != (long *)0x0) && ((int)plVar4[2] == 8)) {
        plVar4 = plVar4 + -1;
        plVar2 = plVar4;
        FUN_109ea90f4();
        if ((plVar2 != (long *)0x0) &&
           (((uVar1 = *(uint *)(plVar2 + 8) >> 0xb & 0xf,
             8 < uVar1 || (1 << (ulong)uVar1 & 0x1acU) == 0 &&
             ((*(uint *)(plVar2 + 8) >> 6 & 1) == 0)) && ((*(byte *)(plVar2[4] + 4) | 2) != 0xf))))
        {
          lVar3 = *param_3;
          FUN_109eb8208(lVar3,plVar2);
          if ((((*(char *)(lVar3 + 0x30) == '\x01') && (*(int *)(lVar3 + 0x2c) == 1)) &&
              (*(int *)(lVar3 + 0x28) == 2)) && ((*(byte *)(lVar3 + 0x31) & 1) == 0)) {
            FUN_109ec5528(plVar4,plVar2,param_2);
            *(byte *)(param_3 + 1) = *(byte *)(param_3 + 1) | (byte)plVar4;
          }
        }
      }
      plVar4 = plVar5;
    } while (plVar5 != (long *)*(long *)(param_2 + 8));
  }
  return;
}



/* Entry: 109ec5528; end: 109ec55ab;  */

byte FUN_109ec5528(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  byte bStack_37;
  undefined8 uStack_30;
  long lStack_28;
  
  uStack_3f = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_110b66a18;
  bStack_37 = 0;
  plVar2 = (long *)(param_1 + 8);
  uStack_30 = param_2;
  lStack_28 = param_1;
  do {
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)*(long *)(param_3 + 8)) {
      bStack_37 = 0;
      break;
    }
    plVar1 = plVar2 + -1;
    (**(code **)(*plVar1 + 0x18))(plVar1,&ppuStack_68);
  } while ((int)plVar1 != 2);
  return bStack_37 & 1;
}



/* Entry: 109ec55ac; end: 109ec55c3;  */

undefined8 FUN_109ec55ac(void)

{
  return 2;
}



/* Entry: 109ec55c4; end: 109ec5633;  */

undefined8 FUN_109ec55c4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(param_2 + 0x50) == '\0') {
    return 0;
  }
  uVar3 = 0;
  lVar2 = param_2 + 0x30;
  do {
    uVar1 = param_1;
    FUN_109ec59b8(param_1,lVar2);
    if ((int)uVar1 != 0) {
      return 2;
    }
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 8;
  } while (uVar3 < *(byte *)(param_2 + 0x50));
  return 0;
}



/* Entry: 109ec5634; end: 109ec5723;  */

undefined8 FUN_109ec5634(ulong param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  FUN_109ec59b8(param_1,param_2 + 0x38);
  if (((((uVar2 & 1) == 0) &&
       (uVar2 = param_1, FUN_109ec59b8(param_1,param_2 + 0x40), (uVar2 & 1) == 0)) &&
      (uVar2 = param_1, FUN_109ec59b8(param_1,param_2 + 0x50), (uVar2 & 1) == 0)) &&
     ((uVar2 = param_1, FUN_109ec59b8(param_1,param_2 + 0x48), (uVar2 & 1) == 0 &&
      (uVar2 = param_1, FUN_109ec59b8(param_1,param_2 + 0x58), (uVar2 & 1) == 0)))) {
    iVar1 = *(int *)(param_2 + 0x28);
    if (iVar1 < 4) {
      if ((iVar1 == 1) || (iVar1 == 2)) goto LAB_109ec56fc;
      if (iVar1 != 3) goto LAB_109ec571c;
      uVar2 = param_1;
      FUN_109ec59b8(param_1,param_2 + 0x60);
      if ((uVar2 & 1) != 0) goto LAB_109ec570c;
      param_2 = param_2 + 0x68;
LAB_109ec5700:
      FUN_109ec59b8(param_1,param_2);
      if ((param_1 & 1) != 0) goto LAB_109ec570c;
    }
    else if (iVar1 < 6) {
      if ((iVar1 == 4) || (iVar1 == 5)) {
LAB_109ec56fc:
        param_2 = param_2 + 0x60;
        goto LAB_109ec5700;
      }
    }
    else if ((iVar1 == 6) || (iVar1 == 8)) goto LAB_109ec56fc;
LAB_109ec571c:
    uVar3 = 0;
  }
  else {
LAB_109ec570c:
    uVar3 = 2;
  }
  return uVar3;
}



/* Entry: 109ec5724; end: 109ec5747;  */

undefined4 FUN_109ec5724(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_109ec59b8(param_1,param_2 + 0x28);
  uVar1 = 2;
  if ((int)param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 109ec5748; end: 109ec57eb;  */

long FUN_109ec5748(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plStack_68;
  byte bStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  uVar1 = param_1;
  FUN_109ec59b8(param_1,param_2 + 0x28);
  if ((uVar1 & 1) == 0) {
    plVar3 = *(long **)(param_2 + 0x20);
    (**(code **)(*plVar3 + 0x40))();
    plVar4 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
    bStack_60 = 0;
    ppuStack_58 = &PTR_FUN_110b646d0;
    uStack_2f = 0;
    uStack_30 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    uStack_48 = 0x109ec5a14;
    uStack_38 = SUB81(&plStack_68,0);
    uStack_37 = (undefined7)((ulong)&plStack_68 >> 8);
    plStack_68 = plVar3;
    (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_58);
    lVar2 = (ulong)bStack_60 << 1;
  }
  else {
    lVar2 = 2;
  }
  return lVar2;
}



/* Entry: 109ec57ec; end: 109ec5993;  */

undefined8 FUN_109ec57ec(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plStack_b0;
  long *plStack_a8;
  byte bStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  plVar2 = *(long **)(*(long *)(param_2 + 0x28) + 0x28);
  plVar4 = (long *)**(long **)(param_2 + 0x30);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0 && plVar4 != (long *)0x0) {
    plVar6 = *(long **)(param_2 + 0x30);
    do {
      plVar5 = plVar4;
      plStack_b0 = plVar6 + -1;
      uVar1 = *(uint *)(plVar2 + 7) >> 0xb & 0xf;
      if (uVar1 == 6 || uVar1 == 9) {
        lVar7 = param_1;
        FUN_109ec59b8(param_1,&plStack_b0);
        if ((int)lVar7 != 0) {
          plVar3 = (long *)plVar6[1];
          lVar7 = *plVar6;
          plStack_b0[2] = plVar6[1];
          plStack_b0[1] = lVar7;
          plVar2 = (long *)0x0;
          if (plStack_b0 != (long *)0x0) {
            plVar2 = plStack_b0 + 1;
          }
          *plVar3 = (long)plVar2;
          *(long **)(*plVar6 + 8) = plVar2;
          return 2;
        }
      }
      else {
        plStack_a8 = plVar2 + -1;
        plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
        bStack_a0 = 0;
        uStack_90 = 0;
        uStack_6f = 0;
        uStack_70 = 0;
        uStack_80 = 0;
        ppuStack_98 = &PTR_FUN_110b646d0;
        uStack_88 = 0x109ec5a14;
        uStack_78 = SUB81(&plStack_a8,0);
        uStack_77 = (undefined7)((ulong)&plStack_a8 >> 8);
        (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_98);
        if ((bStack_a0 & 1) != 0) {
          return 2;
        }
      }
    } while (((long *)*plVar3 != (long *)0x0) &&
            (plVar4 = (long *)*plVar5, plVar2 = plVar3, plVar3 = (long *)*plVar3, plVar6 = plVar5,
            plVar4 != (long *)0x0));
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    plStack_a8 = *(long **)(*(long *)(param_2 + 0x20) + 0x28);
    plVar2 = *(long **)(*(long *)(param_1 + 0x40) + 0x28);
    bStack_a0 = 0;
    ppuStack_98 = &PTR_FUN_110b646d0;
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_90 = 0;
    uStack_80 = 0;
    uStack_88 = 0x109ec5a14;
    uStack_78 = SUB81(&plStack_a8,0);
    uStack_77 = (undefined7)((ulong)&plStack_a8 >> 8);
    (**(code **)(*plVar2 + 0x18))(plVar2,&ppuStack_98);
    if ((bStack_a0 & 1) != 0) {
      return 2;
    }
  }
  return 0;
}



/* Entry: 109ec5994; end: 109ec59b7;  */

undefined4 FUN_109ec5994(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  FUN_109ec59b8(param_1,param_2 + 0x20);
  uVar1 = 1;
  if ((int)param_1 != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 109ec59b8; end: 109ec5a43;  */

undefined8 FUN_109ec59b8(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = *param_2;
  uVar3 = 0;
  if (lVar2 != 0) {
    if ((*(int *)(lVar2 + 0x18) == 2) && (*(long *)(lVar2 + 0x28) == *(long *)(param_1 + 0x38))) {
      lVar4 = *(long *)(param_1 + 0x40);
      lVar2 = *(long *)(lVar4 + 8);
      plVar1 = *(long **)(lVar4 + 0x10);
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      *(undefined8 *)(lVar4 + 8) = 0;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *param_2 = *(long *)(*(long *)(param_1 + 0x40) + 0x28);
      uVar3 = 1;
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



/* Entry: 109ec5a44; end: 109ec5b0f;  */

undefined8 FUN_109ec5a44(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined **ppuStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  undefined8 uStack_50;
  byte bStack_48;
  
  uStack_5f = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_FUN_110b66b70;
  uStack_50 = 0;
  uVar1 = 0;
  do {
    uVar3 = uVar1;
    bStack_48 = 0;
    plVar4 = *(long **)*param_1;
    if (plVar4 != (long *)0x0) {
      lVar5 = *plVar4;
      plVar6 = (undefined8 *)*param_1 + -1;
      plStack_80 = plVar6;
      (**(code **)(*plVar6 + 0x18))(plVar6,&ppuStack_88);
      iVar2 = (int)plVar6;
      while ((iVar2 == 0 && (lVar5 != 0))) {
        plVar6 = (long *)*plVar4;
        lVar5 = *plVar6;
        plVar4 = plVar4 + -1;
        plStack_80 = plVar4;
        (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_88);
        iVar2 = (int)plVar4;
        plVar4 = plVar6;
      }
    }
    uVar1 = 1;
  } while ((bStack_48 & 1) != 0);
  return uVar3;
}



/* Entry: 109ec5b10; end: 109ec5b77;  */

void FUN_109ec5b10(void)

{
  return;
}



/* Entry: 109ec5b78; end: 109ec5bc3;  */

bool FUN_109ec5b78(long param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_2 + 0x20);
  (**(code **)(*plVar2 + 0x40))();
  bVar1 = (*(byte *)(plVar2 + 8) & 0x60) == 0;
  if (!bVar1) {
    *(long **)(param_1 + 0x38) = plVar2;
  }
  return bVar1;
}



/* Entry: 109ec5bc4; end: 109ec5bd3;  */

undefined8 FUN_109ec5bc4(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}



/* Entry: 109ec5bd4; end: 109ec5ca3;  */

void FUN_109ec5bd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR____stderrp_11034bdc8;
  _fwrite(&UNK_10f6157c9,0xe,1,*(undefined8 *)PTR____stderrp_11034bdc8);
  _vfprintf(*(undefined8 *)puVar1,param_2,&stack0x00000000);
  _fputc(10,*(undefined8 *)puVar1);
  return;
}



/* Entry: 109ec5ca4; end: 109ec64b3;  */

void FUN_109ec5ca4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    if (*(long *)(param_2 + 0xa8 + lVar2) != 0) {
      func_0x000109ec5c3c();
      *(undefined8 *)(param_2 + 0xa8 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x30);
  lVar2 = *(long *)(param_2 + 0x68);
  *(undefined4 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  if (*(long *)(lVar2 + 0x118) != 0) {
    lVar2 = *(long *)(lVar2 + 0x118) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    lVar2 = *(long *)(param_2 + 0x68);
  }
  FUN_109f65c2c(lVar2,&UNK_10f6157d8);
  lVar1 = *(long *)(param_2 + 0x68);
  *(long *)(lVar1 + 0x118) = lVar2;
  if (*(long *)(lVar1 + 0x30) != 0) {
    lVar2 = *(long *)(lVar1 + 0x30) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    lVar1 = *(long *)(param_2 + 0x68);
  }
  *(undefined8 *)(lVar1 + 0x30) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  if (*(long *)(lVar1 + 0x38) != 0) {
    lVar2 = *(long *)(lVar1 + 0x38) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    lVar1 = *(long *)(param_2 + 0x68);
  }
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x2c) = 0;
  if (*(long *)(lVar1 + 0x40) != 0) {
    lVar2 = *(long *)(lVar1 + 0x40) + -0x30;
    FUN_109f65aa4(lVar2);
    FUN_109f65ae0(lVar2);
    lVar1 = *(long *)(param_2 + 0x68);
  }
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x48) = 0;
  return;
}



/* Entry: 109ec64b4; end: 109ec680f;  */

void FUN_109ec64b4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  
  for (; *(byte *)(param_1 + 4) == 0x13; param_1 = *(long *)(param_1 + 0x30)) {
  }
  if ((*(byte *)(param_1 + 4) - 0x11 < 2) &&
     (uVar2 = (ulong)*(uint *)(param_1 + 0x10), *(uint *)(param_1 + 0x10) != 0)) {
    puVar3 = *(ulong **)(param_1 + 0x30);
    do {
      uVar2 = uVar2 - 1;
      uVar1 = *puVar3;
      FUN_109ec64b4();
      if ((uVar1 & 1) != 0) {
        return;
      }
      puVar3 = puVar3 + 6;
    } while (uVar2 != 0);
  }
  return;
}



/* Entry: 109ec6810; end: 109ec683f;  */

undefined * FUN_109ec6810(long param_1)

{
  if ((*(uint *)(param_1 + 4) & 0xff) < 0xc) {
    return (&PTR_DAT_110b67030)[(ulong)*(uint *)(param_1 + 4) & 0xf];
  }
  return &UNK_10e05d730;
}



/* Entry: 109ec6840; end: 109ec688b;  */

undefined * FUN_109ec6840(undefined *param_1)

{
  char cVar1;
  undefined *puVar2;
  
  cVar1 = param_1[4];
  while (cVar1 == '\x13') {
    param_1 = *(undefined **)(param_1 + 0x30);
    cVar1 = param_1[4];
  }
  puVar2 = param_1;
  FUN_109ec6810();
  if (puVar2 != &UNK_10e05d730) {
    param_1 = puVar2;
  }
  return param_1;
}



/* Entry: 109ec688c; end: 109ec69d3;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6cf4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_109ec688c(undefined *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  uint uVar21;
  undefined4 *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  bVar2 = param_1[4];
  if (bVar2 < 0xc) {
    uVar13 = (ulong)(byte)param_1[0xd];
    uVar3 = (uint)bVar2;
    if (uVar3 == 0x14) {
      puVar19 = &DAT_10e05d768;
      goto LAB_109ec6fd4;
    }
    uVar21 = (uint)(byte)param_1[0xd];
    if ((byte)param_1[0xe] != 1) {
      puVar19 = &UNK_10e05d730;
      if ((0xfffffffc < uVar3 - 5) && (uVar21 != 1)) {
        uVar21 = ((uint)(byte)param_1[0xe] * 3 + uVar21) - 8;
        if (uVar3 == 2) {
          if (8 < uVar21) goto LAB_109ec6fd4;
          ppuVar15 = &PTR_DAT_110b670d8;
        }
        else if (uVar3 == 3) {
          if (8 < uVar21) goto LAB_109ec6fd4;
          ppuVar15 = &PTR_DAT_110b67120;
        }
        else {
          if (8 < uVar21) goto LAB_109ec6fd4;
          ppuVar15 = &PTR_DAT_110b67090;
        }
        puVar19 = ppuVar15[uVar21];
      }
      goto LAB_109ec6fd4;
    }
    switch(bVar2) {
    case 0:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66da8;
      break;
    case 1:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66d70;
      break;
    case 2:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66cc8;
      break;
    case 3:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66d00;
      break;
    case 4:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66d38;
      break;
    case 5:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66f30;
      break;
    case 6:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66ef8;
      break;
    case 7:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66ec0;
      break;
    case 8:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66e88;
      break;
    case 9:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66e50;
      break;
    case 10:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66e18;
      break;
    case 0xb:
      if (uVar21 == 8) {
        uVar13 = 6;
      }
      else if (uVar21 == 0x10) {
        uVar13 = 7;
      }
      else if (uVar21 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar15 = &PTR_DAT_110b66de0;
      break;
    default:
LAB_109ec7288:
      puVar19 = &UNK_10e05d730;
      goto LAB_109ec6fd4;
    }
    puVar19 = ppuVar15[uVar13 - 1];
LAB_109ec6fd4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      ___stack_chk_fail();
      ppuVar15 = &PTR___tlv_bootstrap_11340ddb0;
      if ((bRam00000001132ff008 & 1) == 0) {
        ppuVar11 = ppuVar15;
        (*(code *)PTR___tlv_bootstrap_11340ddb0)();
        *ppuVar11 = &bRam00000001132ff008;
        ppuVar11[1] = FUN_109f67048;
        _pthread_once(0x1132ff010,0x109f686dc);
        bRam00000001132ff008 = 1;
      }
      _pthread_mutex_lock(0x1132ff020);
      if (iRam0000000113834740 == 0) {
        puVar12 = (undefined8 *)0x30;
        _malloc();
        puVar7 = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[4] = 0;
          puVar7 = puVar12 + 6;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
        }
        puRam0000000113834730 = puVar7;
        FUN_109f6658c();
        puRam0000000113834738 = puVar7;
      }
      iRam0000000113834740 = iRam0000000113834740 + 1;
      if ((bRam00000001132ff008 & 1) == 0) {
        (*(code *)PTR___tlv_bootstrap_11340ddb0)();
        *ppuVar15 = &bRam00000001132ff008;
        ppuVar15[1] = FUN_109f67048;
        _pthread_once(0x1132ff010,0x109f686dc);
        bRam00000001132ff008 = 1;
      }
      puVar19 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
      return puVar19;
    }
    return puVar19;
  }
  uVar3 = 1 << (ulong)(bVar2 & 0x1f);
  if ((uVar3 & 0x71f000) != 0) {
    return param_1;
  }
  if ((uVar3 & 0x60000) != 0) {
    uVar3 = *(uint *)(param_1 + 0x10);
    puVar17 = (undefined *)(ulong)uVar3;
    puVar19 = puVar17;
    _calloc(puVar17,0x30);
    if (uVar3 != 0) {
      lVar18 = 0;
      puVar20 = (undefined *)0x0;
      lVar14 = *(long *)(param_1 + 0x30);
      do {
        uVar4 = *(undefined8 *)(lVar14 + lVar18);
        FUN_109ec688c();
        lVar14 = *(long *)(param_1 + 0x30);
        uVar16 = *(undefined8 *)(lVar14 + lVar18 + 8);
        *(undefined8 *)(puVar19 + lVar18) = uVar4;
        *(undefined8 *)((long)(puVar19 + lVar18) + 8) = uVar16;
        puVar20 = puVar20 + 1;
        puVar17 = (undefined *)(ulong)*(uint *)(param_1 + 0x10);
        lVar18 = lVar18 + 0x30;
      } while (puVar20 < puVar17);
    }
    if (((byte)param_1[0xc] >> 1 & 1) == 0) {
      FUN_109eca058(param_1);
    }
    else {
      param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
    }
    puVar20 = puVar19;
    FUN_109ec7c64(puVar19,puVar17,param_1,0,0);
    _free(puVar19);
    return puVar20;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x30);
  FUN_109ec688c();
  uVar3 = *(uint *)(param_1 + 0x10);
  uStack_70 = (ulong)uVar3;
  uStack_68 = 0;
  ppuVar6 = &puStack_78;
  puStack_78 = puVar5;
  FUN_109f65414(ppuVar6,0x18);
  ppuVar15 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar15 = &bRam00000001132ff008;
    ppuVar15[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (puRam0000000113834750 == (undefined8 *)0x0) {
    puVar7 = puRam0000000113834730;
    FUN_109f64c74(puRam0000000113834730,0x109ec7790,0x109eca4cc);
    puRam0000000113834750 = puVar7;
  }
  puVar12 = puRam0000000113834750;
  puVar8 = puRam0000000113834750;
  FUN_109f64fdc(puRam0000000113834750,ppuVar6,&puStack_78);
  puVar7 = puRam0000000113834738;
  if (puVar8 != (undefined8 *)0x0) goto LAB_109ec6c30;
  puVar8 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[6] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  *(undefined2 *)((long)puVar8 + 4) = 0x1413;
  *(uint *)(puVar8 + 2) = uVar3;
  uVar1 = puVar5[0xb];
  *(undefined4 *)(puVar8 + 5) = 0;
  *(undefined4 *)((long)puVar8 + 0x2c) = uVar1;
  puVar8[6] = puVar5;
  *(undefined4 *)puVar8 = *puVar5;
  if ((*(byte *)(puVar5 + 3) >> 1 & 1) == 0) {
    FUN_109eca058();
    if (uVar3 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar19 = &UNK_10f6157f7;
  }
  else {
    puVar5 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(puVar5 + 6));
    if (uVar3 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar19 = &UNK_10f6157f2;
  }
  puVar9 = puVar7;
  FUN_109f666b0(puVar7,puVar19);
  puVar10 = puVar5;
  _strchr(puVar5,0x5b);
  if (puVar10 != (undefined4 *)0x0) {
    lVar18 = (long)puVar9 + ((long)puVar10 - (long)puVar5);
    puVar5 = puVar10;
    _strlen();
    lVar14 = lVar18;
    _strlen(lVar18);
    uVar13 = (ulong)(uint)((int)lVar14 - (int)puVar5);
    _memmove(lVar18,lVar18 + ((ulong)puVar5 & 0xffffffff),uVar13);
    _memcpy(lVar18 + uVar13,puVar10,(ulong)puVar5 & 0xffffffff);
  }
  puVar8[3] = puVar9;
  FUN_109f6650c(puVar7,0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  puVar7[2] = uStack_68;
  puVar7[1] = uStack_70;
  *puVar7 = puStack_78;
  func_0x000109f650c0(puVar12,ppuVar6,puVar7,puVar8);
  puVar8 = puVar12;
LAB_109ec6c30:
  ppuVar15 = &PTR___tlv_bootstrap_11340ddb0;
  puVar19 = (undefined *)puVar8[2];
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar15 = &bRam00000001132ff008;
    ppuVar15[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return puVar19;
}



/* Entry: 109ec69d4; end: 109ec69f3;  */

undefined * FUN_109ec69d4(long param_1)

{
  if ((*(byte *)(param_1 + 0xc) >> 1 & 1) != 0) {
    return &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
  }
  if (*(char *)(param_1 + 4) == '\x02') {
    if (*(char *)(param_1 + 0xe) == '\x03') {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        return &UNK_10f6157de;
      }
    }
    else if ((*(char *)(param_1 + 0xe) == '\x04') && (*(char *)(param_1 + 0xd) == '\x04')) {
      return &UNK_10f6157d9;
    }
  }
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 109ec69f4; end: 109ec72ab;  */

undefined8 FUN_109ec69f4(undefined4 *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined4 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_70 = (ulong)param_2;
  uStack_68 = (ulong)param_3;
  ppuVar2 = &puStack_78;
  puStack_78 = param_1;
  FUN_109f65414(ppuVar2,0x18);
  ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132ff008;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834750 == 0) {
    lVar4 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,0x109ec7790,0x109eca4cc);
    lRam0000000113834750 = lVar4;
  }
  lVar4 = lRam0000000113834750;
  lVar5 = lRam0000000113834750;
  FUN_109f64fdc(lRam0000000113834750,ppuVar2,&puStack_78);
  puVar11 = puRam0000000113834738;
  if (lVar5 != 0) goto LAB_109ec6c30;
  puVar6 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[6] = 0;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[1] = 0;
    *puVar6 = 0;
  }
  *(undefined2 *)((long)puVar6 + 4) = 0x1413;
  *(uint *)(puVar6 + 2) = param_2;
  uVar1 = param_1[0xb];
  *(uint *)(puVar6 + 5) = param_3;
  *(undefined4 *)((long)puVar6 + 0x2c) = uVar1;
  puVar6[6] = param_1;
  *(undefined4 *)puVar6 = *param_1;
  if ((*(byte *)(param_1 + 3) >> 1 & 1) == 0) {
    FUN_109eca058();
    if (param_2 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar12 = &UNK_10f6157f2;
  }
  else {
    param_1 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(param_1 + 6));
    if (param_2 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar12 = &UNK_10f6157f7;
  }
  puVar7 = puVar11;
  FUN_109f666b0(puVar11,puVar12);
  puVar8 = param_1;
  _strchr(param_1,0x5b);
  if (puVar8 != (undefined4 *)0x0) {
    lVar5 = (long)puVar7 + ((long)puVar8 - (long)param_1);
    puVar9 = puVar8;
    _strlen();
    lVar10 = lVar5;
    _strlen(lVar5);
    uVar13 = (ulong)(uint)((int)lVar10 - (int)puVar9);
    _memmove(lVar5,lVar5 + ((ulong)puVar9 & 0xffffffff),uVar13);
    _memcpy(lVar5 + uVar13,puVar8,(ulong)puVar9 & 0xffffffff);
  }
  puVar6[3] = puVar7;
  FUN_109f6650c(puVar11,0x18);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
  }
  puVar11[2] = uStack_68;
  puVar11[1] = uStack_70;
  *puVar11 = puStack_78;
  func_0x000109f650c0(lVar4,ppuVar2,puVar11,puVar6);
  lVar5 = lVar4;
LAB_109ec6c30:
  ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
  uVar14 = *(undefined8 *)(lVar5 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132ff008;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar14;
}



/* Entry: 109ec72ac; end: 109ec74bb;  */

void FUN_109ec72ac(void)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar1 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar1 = (undefined *)0x1132ff008;
    ppuVar1[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (iRam0000000113834740 == 0) {
    puVar2 = (undefined8 *)0x30;
    _malloc();
    puVar3 = puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = 0;
      puVar3 = puVar2 + 6;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
      puVar2[2] = 0;
    }
    puRam0000000113834730 = puVar3;
    FUN_109f6658c();
    puRam0000000113834738 = puVar3;
  }
  iRam0000000113834740 = iRam0000000113834740 + 1;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
  return;
}



/* Entry: 109ec74bc; end: 109ec7797;  */

undefined * FUN_109ec74bc(uint param_1,int param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = &UNK_10e05d730;
  if (param_3 < 2) {
    if (param_3 == 0) {
      puVar3 = &UNK_10e060a98;
                    /* WARNING: Could not recover jumptable at 0x000109ec7580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e06c2dc)[param_1] * 4 + 0x109ec7584))(&UNK_10e060a98);
      return puVar3;
    }
    if (param_3 == 1) {
      puVar3 = &UNK_10e060a28;
                    /* WARNING: Could not recover jumptable at 0x000109ec7500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10e06c2e6)[param_1] * 4 + 0x109ec7504))(&UNK_10e060a28);
      return puVar3;
    }
  }
  else if (param_3 == 0x14) {
    if ((int)param_1 < 2) {
      puVar4 = &UNK_10e060210;
      puVar3 = &UNK_10e0601d8;
      if (param_2 == 0) {
        puVar4 = &UNK_10e0600f8;
        puVar3 = &UNK_10e0600c0;
      }
      if (param_1 != 1) {
        puVar4 = &UNK_10e05d730;
      }
      bVar2 = param_1 == 0;
    }
    else {
      if (param_2 == 0) {
        puVar3 = &UNK_10e060130;
      }
      puVar4 = &UNK_10e05d730;
      if (param_2 == 0) {
        puVar4 = &UNK_10e060248;
      }
      puVar1 = &UNK_10e0601a0;
      if (param_2 == 0) {
        puVar1 = &UNK_10e060168;
      }
      if (param_1 != 7) {
        puVar1 = &UNK_10e05d730;
      }
      if (param_1 != 5) {
        puVar4 = puVar1;
      }
      bVar2 = param_1 == 2;
    }
    if (!bVar2) {
      puVar3 = puVar4;
    }
  }
  else if (param_3 == 2) {
    puVar3 = &UNK_10e05f9c0;
                    /* WARNING: Could not recover jumptable at 0x000109ec7548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10e06c2f0)[param_1] * 4 + 0x109ec754c))(&UNK_10e05f9c0);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 109ec7798; end: 109ec7a0b;  */

undefined8 FUN_109ec7798(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined **ppuVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  
  uVar1 = *param_1;
  uVar3 = uVar1 * -0x3d4d51c3 + 0x165667b5;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) * 0x27d4eb2f;
  uVar3 = (uVar3 ^ uVar3 >> 0xf) * -0x7a143589;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51c3;
  uVar3 = uVar3 ^ uVar3 >> 0x10;
  ppuVar10 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar4 = ppuVar10;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar4 = (undefined *)0x1132ff008;
    ppuVar4[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834758 == 0) {
    lVar5 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,FUN_109f64d64,0x109f64da8);
    lRam0000000113834758 = lVar5;
  }
  lVar5 = lRam0000000113834758;
  lVar6 = lRam0000000113834758;
  FUN_109f64fdc(lRam0000000113834758,uVar3,uVar1);
  puVar9 = puRam0000000113834738;
  if (lVar6 == 0) {
    uVar2 = *param_1;
    puVar7 = puRam0000000113834738;
    FUN_109f6650c(puRam0000000113834738,0x38);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[2] = 0;
      puVar7[5] = 0;
      puVar7[4] = 0;
      puVar7[1] = 0;
      *puVar7 = 0;
    }
    *(undefined2 *)((long)puVar7 + 4) = 0x140c;
    *(undefined1 *)((long)puVar7 + 0xd) = 1;
    *(char *)(puVar7 + 1) = (char)uVar2;
    *(char *)((long)puVar7 + 9) = (char)(uVar2 >> 8);
    *(char *)((long)puVar7 + 10) = (char)(uVar2 >> 0x10);
    *(char *)((long)puVar7 + 0xb) = (char)(uVar2 >> 0x18);
    uVar8 = (ulong)(uVar2 & 0x1f);
    func_0x000109ec6c94(uVar8,1,1,0,0,0);
    if ((*(byte *)(uVar8 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
    }
    FUN_109f666b0(puVar9,&UNK_10f6157fe);
    puVar7[3] = puVar9;
    func_0x000109f650c0(lVar5,uVar3,uVar1,puVar7);
    lVar6 = lVar5;
  }
  uVar11 = *(undefined8 *)(lVar6 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar10 = (undefined *)0x1132ff008;
    ppuVar10[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar11;
}



/* Entry: 109ec7a0c; end: 109ec7a8f;  */

/* WARNING: Removing unreachable block (ram,0x000109ec7b90) */
/* WARNING: Removing unreachable block (ram,0x000109ec7b98) */

undefined8 FUN_109ec7a0c(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    cVar2 = param_1[4];
    if (cVar2 != '\x13') break;
    if (param_2[4] != '\x13') {
      return 0;
    }
    if (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10)) {
      return 0;
    }
    param_2 = *(undefined **)(param_2 + 0x30);
    param_1 = *(undefined **)(param_1 + 0x30);
  }
  if (cVar2 == '\x11') {
    if (param_2[4] != '\x11') {
      return 0;
    }
  }
  else if ((cVar2 != '\x12') || (param_2[4] != '\x12')) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar9 = (ulong)uVar1;
  if (((uVar1 == *(uint *)(param_2 + 0x10)) &&
      (((*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4)) & 0x1c00000) == 0)) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) {
    bVar3 = param_2[0xc];
    if (((bVar3 ^ param_1[0xc]) & 1) == 0) {
      if (((byte)param_1[0xc] >> 1 & 1) == 0) {
        puVar4 = param_1;
        FUN_109eca058();
      }
      else {
        puVar4 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
      }
      if ((bVar3 >> 1 & 1) == 0) {
        puVar5 = param_2;
        FUN_109eca058(param_2);
      }
      else {
        puVar5 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
      }
      _strcmp(puVar4,puVar5);
      if ((int)puVar4 == 0) {
        if (uVar1 != 0) {
          piVar7 = (int *)(*(long *)(param_1 + 0x30) + 0x14);
          piVar8 = (int *)(*(long *)(param_2 + 0x30) + 0x14);
          do {
            uVar6 = *(undefined8 *)(piVar7 + -5);
            FUN_109ec7a0c();
            if ((int)uVar6 == 0) {
              return uVar6;
            }
            uVar6 = *(undefined8 *)(piVar7 + -3);
            _strcmp(uVar6,*(undefined8 *)(piVar8 + -3));
            if ((int)uVar6 != 0) {
              return 0;
            }
            uVar1 = piVar8[5] ^ piVar7[5];
            if ((uVar1 & 0x60) != 0) {
              return 0;
            }
            if (piVar7[-1] != piVar8[-1]) {
              return 0;
            }
            if (*piVar7 != *piVar8) {
              return 0;
            }
            if ((uVar1 & 0x7c9f) != 0) {
              return 0;
            }
            if (piVar7[1] != piVar8[1]) {
              return 0;
            }
            if (piVar7[4] != piVar8[4]) {
              return 0;
            }
            if ((uVar1 >> 0xf & 1) != 0) {
              return 0;
            }
            if (piVar7[2] != piVar8[2]) {
              return 0;
            }
            if (piVar7[3] != piVar8[3]) {
              return 0;
            }
            piVar7 = piVar7 + 0xc;
            piVar8 = piVar8 + 0xc;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 109ec7a90; end: 109ec7c63;  */

void FUN_109ec7a90(undefined *param_1,undefined *param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar10 = (ulong)uVar2;
  if (((uVar2 == *(uint *)(param_2 + 0x10)) &&
      (((*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4)) & 0x1c00000) == 0)) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) {
    bVar3 = param_2[0xc];
    if (((bVar3 ^ param_1[0xc]) & 1) == 0) {
      if (param_3 != 0) {
        if (((byte)param_1[0xc] >> 1 & 1) == 0) {
          puVar4 = param_1;
          FUN_109eca058();
        }
        else {
          puVar4 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
        }
        if ((bVar3 >> 1 & 1) == 0) {
          puVar5 = param_2;
          FUN_109eca058(param_2);
        }
        else {
          puVar5 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
        }
        _strcmp(puVar4,puVar5);
        if ((int)puVar4 != 0) {
          return;
        }
      }
      if (uVar2 != 0) {
        piVar8 = (int *)(*(long *)(param_1 + 0x30) + 0x14);
        piVar9 = (int *)(*(long *)(param_2 + 0x30) + 0x14);
        while( true ) {
          lVar6 = *(long *)(piVar8 + -5);
          if (param_5 == 0) {
            FUN_109ec7a0c();
            if ((int)lVar6 == 0) {
              return;
            }
          }
          else if (lVar6 != *(long *)(piVar9 + -5)) {
            return;
          }
          uVar7 = *(undefined8 *)(piVar8 + -3);
          _strcmp(uVar7,*(undefined8 *)(piVar9 + -3));
          if ((int)uVar7 != 0) {
            return;
          }
          uVar2 = piVar9[5] ^ piVar8[5];
          if ((uVar2 & 0x60) != 0) {
            return;
          }
          if ((param_4 != 0) && (piVar8[-1] != piVar9[-1])) {
            return;
          }
          if (*piVar8 != *piVar9) {
            return;
          }
          if ((uVar2 & 0x7c9f) != 0) {
            return;
          }
          if (piVar8[1] != piVar9[1]) {
            return;
          }
          if (piVar8[4] != piVar9[4]) break;
          uVar1 = param_5 ^ 1;
          if ((uVar2 & 0x300) == 0) {
            uVar1 = 1;
          }
          if ((uVar2 >> 0xf & 1) != 0) {
            return;
          }
          if (uVar1 == 0) {
            return;
          }
          if (piVar8[2] != piVar9[2]) {
            return;
          }
          if (piVar8[3] != piVar9[3]) {
            return;
          }
          piVar8 = piVar8 + 0xc;
          piVar9 = piVar9 + 0xc;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return;
          }
        }
        return;
      }
    }
  }
  return;
}



/* Entry: 109ec7c64; end: 109ec7ee7;  */

undefined8 FUN_109ec7c64(long *param_1,uint param_2,undefined8 param_3,byte param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uStack_a0;
  long lStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long *plStack_70;
  
  uStack_80 = 0;
  uStack_a0 = 0x141100000000;
  lStack_98 = (ulong)param_4 << 0x20;
  uStack_90 = (ulong)param_2;
  lStack_78 = (ulong)param_5 << 0x20;
  uVar10 = (ulong)param_2;
  plVar8 = param_1;
  uVar9 = uVar10;
  uVar14 = uVar10;
  if (param_2 == 0) {
    uVar14 = 0;
  }
  else {
    do {
      uVar14 = *plVar8 + uVar14 * 0xd;
      uVar9 = uVar9 - 1;
      plVar8 = plVar8 + 6;
    } while (uVar9 != 0);
  }
  uStack_88 = param_3;
  plStack_70 = param_1;
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar2 = (undefined *)0x1132ff008;
    ppuVar2[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834760 == 0) {
    lVar3 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,FUN_109ec7ee8,FUN_109ec7f20);
    lRam0000000113834760 = lVar3;
  }
  lVar3 = lRam0000000113834760;
  uVar12 = (uint)(uVar14 >> 0x20);
  lVar15 = lRam0000000113834760;
  FUN_109f64fdc(lRam0000000113834760,uVar12 ^ (uint)uVar14,&uStack_a0);
  puVar1 = puRam0000000113834738;
  if (lVar15 == 0) {
    puVar4 = puRam0000000113834738;
    FUN_109f6650c(puRam0000000113834738,0x38);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[6] = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    puVar5 = puVar1;
    FUN_109f66644(puVar1,param_3);
    puVar6 = puVar1;
    func_0x000109f665dc(puVar1,param_2 * 0x30);
    if (param_2 != 0) {
      plVar8 = param_1 + 1;
      plVar13 = puVar6 + 1;
      do {
        lVar16 = *plVar8;
        lVar15 = plVar8[-1];
        lVar18 = plVar8[2];
        lVar17 = plVar8[1];
        lVar19 = plVar8[3];
        plVar13[4] = plVar8[4];
        plVar13[3] = lVar19;
        plVar13[2] = lVar18;
        plVar13[1] = lVar17;
        *plVar13 = lVar16;
        plVar13[-1] = lVar15;
        puVar7 = puVar1;
        FUN_109f66644(puVar1,*plVar8);
        *plVar13 = (long)puVar7;
        uVar10 = uVar10 - 1;
        plVar8 = plVar8 + 6;
        plVar13 = plVar13 + 6;
      } while (uVar10 != 0);
    }
    *(undefined2 *)((long)puVar4 + 4) = 0x1411;
    *(byte *)((long)puVar4 + 0xc) = *(byte *)((long)puVar4 + 0xc) & 0xfe | param_4;
    *(uint *)(puVar4 + 2) = param_2;
    puVar4[3] = puVar5;
    *(uint *)((long)puVar4 + 0x2c) = param_5;
    puVar4[6] = puVar6;
    func_0x000109f650c0(lVar3,uVar12 ^ (uint)uVar14,puVar4,puVar4);
    lVar15 = lVar3;
  }
  uVar11 = *(undefined8 *)(lVar15 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar2 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar2 = (undefined *)0x1132ff008;
    ppuVar2[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar11;
}



/* Entry: 109ec7ee8; end: 109ec7f1f;  */

uint FUN_109ec7ee8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 0x10) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    plVar3 = *(long **)(param_1 + 0x30);
    do {
      uVar2 = *plVar3 + uVar2 * 0xd;
      uVar1 = uVar1 - 1;
      plVar3 = plVar3 + 6;
    } while (uVar1 != 0);
  }
  return (uint)(uVar2 >> 0x20) ^ (uint)uVar2;
}



/* Entry: 109ec7f20; end: 109ec7fc3;  */

/* WARNING: Removing unreachable block (ram,0x000109ec7b9c) */

undefined8 FUN_109ec7f20(undefined *param_1,undefined *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  ulong uVar8;
  
  if (((byte)param_1[0xc] >> 1 & 1) == 0) {
    puVar4 = param_1;
    FUN_109eca058();
  }
  else {
    puVar4 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
  }
  if (((byte)param_2[0xc] >> 1 & 1) == 0) {
    puVar5 = param_2;
    FUN_109eca058(param_2);
  }
  else {
    puVar5 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
  }
  _strcmp(puVar4,puVar5);
  if ((int)puVar4 != 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar8 = (ulong)uVar1;
  if (((uVar1 == *(uint *)(param_2 + 0x10)) &&
      (((*(uint *)(param_2 + 4) ^ *(uint *)(param_1 + 4)) & 0x1c00000) == 0)) &&
     (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) {
    bVar2 = param_2[0xc];
    if (((bVar2 ^ param_1[0xc]) & 1) == 0) {
      if (((byte)param_1[0xc] >> 1 & 1) == 0) {
        puVar4 = param_1;
        FUN_109eca058();
      }
      else {
        puVar4 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
      }
      if ((bVar2 >> 1 & 1) == 0) {
        puVar5 = param_2;
        FUN_109eca058(param_2);
      }
      else {
        puVar5 = &UNK_10e05bf38 + *(long *)(param_2 + 0x18);
      }
      _strcmp(puVar4,puVar5);
      if ((int)puVar4 == 0) {
        if (uVar1 != 0) {
          piVar6 = (int *)(*(long *)(param_1 + 0x30) + 0x14);
          piVar7 = (int *)(*(long *)(param_2 + 0x30) + 0x14);
          do {
            if (*(long *)(piVar6 + -5) != *(long *)(piVar7 + -5)) {
              return 0;
            }
            uVar3 = *(undefined8 *)(piVar6 + -3);
            _strcmp(uVar3,*(undefined8 *)(piVar7 + -3));
            if ((int)uVar3 != 0) {
              return 0;
            }
            uVar1 = piVar7[5] ^ piVar6[5];
            if ((uVar1 & 0x60) != 0) {
              return 0;
            }
            if (piVar6[-1] != piVar7[-1]) {
              return 0;
            }
            if (*piVar6 != *piVar7) {
              return 0;
            }
            if ((uVar1 & 0x7c9f) != 0) {
              return 0;
            }
            if (piVar6[1] != piVar7[1]) {
              return 0;
            }
            if (piVar6[4] != piVar7[4]) {
              return 0;
            }
            if ((uVar1 >> 0xf & 1) != 0) {
              return 0;
            }
            if ((uVar1 & 0x300) != 0) {
              return 0;
            }
            if (piVar6[2] != piVar7[2]) {
              return 0;
            }
            if (piVar6[3] != piVar7[3]) {
              return 0;
            }
            piVar6 = piVar6 + 0xc;
            piVar7 = piVar7 + 0xc;
            uVar8 = uVar8 - 1;
          } while (uVar8 != 0);
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Entry: 109ec7fc4; end: 109ec8407;  */

undefined8 FUN_109ec7fc4(long *param_1,uint param_2,uint param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_a0 [3];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  
  alStack_a0[1] = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uVar1 = 0x1001412;
  if (param_4 == 0) {
    uVar1 = 0x1412;
  }
  alStack_a0[0] = (ulong)(uVar1 & 0xff000000 | uVar1 & 0x3fffff | (param_3 & 3) << 0x16) << 0x20;
  alStack_a0[2] = (long)param_2;
  uVar15 = (ulong)param_2;
  plVar9 = param_1;
  uVar10 = uVar15;
  uVar14 = uVar15;
  if (param_2 == 0) {
    uVar14 = 0;
  }
  else {
    do {
      uVar14 = *plVar9 + uVar14 * 0xd;
      uVar10 = uVar10 - 1;
      plVar9 = plVar9 + 6;
    } while (uVar10 != 0);
  }
  uStack_88 = param_5;
  plStack_70 = param_1;
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132ff008;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (lRam0000000113834768 == 0) {
    lVar4 = lRam0000000113834730;
    FUN_109f64c74(lRam0000000113834730,FUN_109ec7ee8,FUN_109ec7f20);
    lRam0000000113834768 = lVar4;
  }
  lVar4 = lRam0000000113834768;
  uVar13 = (uint)(uVar14 >> 0x20);
  lVar16 = lRam0000000113834768;
  FUN_109f64fdc(lRam0000000113834768,uVar13 ^ (uint)uVar14,alStack_a0);
  puVar2 = puRam0000000113834738;
  if (lVar16 == 0) {
    puVar5 = puRam0000000113834738;
    FUN_109f6650c(puRam0000000113834738,0x38);
    if (puVar5 != (undefined8 *)0x0) {
      puVar5[6] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar5[5] = 0;
      puVar5[4] = 0;
      puVar5[1] = 0;
      *puVar5 = 0;
    }
    puVar6 = puVar2;
    FUN_109f66644(puVar2,param_5);
    puVar7 = puVar2;
    func_0x000109f665dc(puVar2,param_2 * 0x30);
    if (param_2 != 0) {
      plVar9 = param_1 + 1;
      plVar12 = puVar7 + 1;
      do {
        lVar17 = *plVar9;
        lVar16 = plVar9[-1];
        lVar19 = plVar9[2];
        lVar18 = plVar9[1];
        lVar20 = plVar9[3];
        plVar12[4] = plVar9[4];
        plVar12[3] = lVar20;
        plVar12[2] = lVar19;
        plVar12[1] = lVar18;
        *plVar12 = lVar17;
        plVar12[-1] = lVar16;
        puVar8 = puVar2;
        FUN_109f66644(puVar2,*plVar9);
        *plVar12 = (long)puVar8;
        uVar15 = uVar15 - 1;
        plVar9 = plVar9 + 6;
        plVar12 = plVar12 + 6;
      } while (uVar15 != 0);
    }
    *(uint *)((long)puVar5 + 4) =
         uVar1 | (param_3 & 3) << 0x16 | *(uint *)((long)puVar5 + 4) & 0xfe3f0000;
    *(uint *)(puVar5 + 2) = param_2;
    puVar5[3] = puVar6;
    puVar5[6] = puVar7;
    func_0x000109f650c0(lVar4,uVar13 ^ (uint)uVar14,puVar5,puVar5);
    lVar16 = lVar4;
  }
  uVar11 = *(undefined8 *)(lVar16 + 0x10);
  if ((bRam00000001132ff008 & 1) == 0) {
    ppuVar3 = &PTR___tlv_bootstrap_11340ddb0;
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar3 = (undefined *)0x1132ff008;
    ppuVar3[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return uVar11;
}



/* Entry: 109ec8408; end: 109ec8533;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6cf4) */

undefined * FUN_109ec8408(undefined *param_1,undefined *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  uint uVar12;
  
  if (((byte)param_1[0xe] < 2) || (2 < (byte)param_1[4] - 2)) {
    if (param_1 == param_2) {
      return param_1;
    }
    puVar11 = param_2;
    func_0x000109ec8580();
    if (puVar11 != param_1) goto LAB_109ec84b4;
    bVar1 = param_1[4];
    FUN_109ec8534();
    bVar2 = param_2[0xd];
LAB_109ec8514:
    uVar9 = 1;
  }
  else {
    if (((byte)param_2[0xe] < 2) || (2 < (byte)param_2[4] - 2)) {
      if (param_1 == param_2) {
        return param_1;
      }
      puVar11 = param_1;
      FUN_109ec8534();
      if (puVar11 != param_2) goto LAB_109ec84b4;
      bVar1 = param_1[4];
      func_0x000109ec8580();
      bVar2 = param_1[0xd];
      goto LAB_109ec8514;
    }
    puVar11 = param_1;
    FUN_109ec8534();
    puVar7 = param_2;
    func_0x000109ec8580();
    if (puVar11 != puVar7) {
LAB_109ec84b4:
      return &UNK_10e05d730;
    }
    bVar1 = param_1[4];
    func_0x000109ec8580();
    bVar2 = param_1[0xd];
    FUN_109ec8534();
    uVar9 = (uint)(byte)param_2[0xd];
  }
  uVar8 = (ulong)bVar2;
  uVar3 = (uint)bVar1;
  if (uVar3 == 0x14) {
    puVar11 = &DAT_10e05d768;
    goto LAB_109ec6fd4;
  }
  uVar12 = (uint)bVar2;
  if (uVar9 != 1) {
    puVar11 = &UNK_10e05d730;
    if ((0xfffffffc < uVar3 - 5) && (uVar12 != 1)) {
      uVar9 = (uVar9 * 3 + uVar12) - 8;
      if (uVar3 == 2) {
        if (8 < uVar9) goto LAB_109ec6fd4;
        ppuVar10 = &PTR_DAT_110b670d8;
      }
      else if (uVar3 == 3) {
        if (8 < uVar9) goto LAB_109ec6fd4;
        ppuVar10 = &PTR_DAT_110b67120;
      }
      else {
        if (8 < uVar9) goto LAB_109ec6fd4;
        ppuVar10 = &PTR_DAT_110b67090;
      }
      puVar11 = ppuVar10[uVar9];
    }
    goto LAB_109ec6fd4;
  }
  switch(bVar1) {
  case 0:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66da8;
    break;
  case 1:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66d70;
    break;
  case 2:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66cc8;
    break;
  case 3:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66d00;
    break;
  case 4:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66d38;
    break;
  case 5:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66f30;
    break;
  case 6:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66ef8;
    break;
  case 7:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66ec0;
    break;
  case 8:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66e88;
    break;
  case 9:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66e50;
    break;
  case 10:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66e18;
    break;
  case 0xb:
    if (uVar12 == 8) {
      uVar8 = 6;
    }
    else if (uVar12 == 0x10) {
      uVar8 = 7;
    }
    else if (uVar12 - 8 < 0xfffffff9) goto LAB_109ec7288;
    ppuVar10 = &PTR_DAT_110b66de0;
    break;
  default:
LAB_109ec7288:
    puVar11 = &UNK_10e05d730;
    goto LAB_109ec6fd4;
  }
  puVar11 = ppuVar10[uVar8 - 1];
LAB_109ec6fd4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
    ___stack_chk_fail();
    ppuVar10 = &PTR___tlv_bootstrap_11340ddb0;
    if ((bRam00000001132ff008 & 1) == 0) {
      ppuVar4 = ppuVar10;
      (*(code *)PTR___tlv_bootstrap_11340ddb0)();
      *ppuVar4 = (undefined *)0x1132ff008;
      ppuVar4[1] = FUN_109f67048;
      _pthread_once(0x1132ff010,0x109f686dc);
      bRam00000001132ff008 = 1;
    }
    _pthread_mutex_lock(0x1132ff020);
    if (iRam0000000113834740 == 0) {
      puVar5 = (undefined8 *)0x30;
      _malloc();
      puVar6 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[4] = 0;
        puVar6 = puVar5 + 6;
        puVar5[1] = 0;
        *puVar5 = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
      }
      puRam0000000113834730 = puVar6;
      FUN_109f6658c();
      puRam0000000113834738 = puVar6;
    }
    iRam0000000113834740 = iRam0000000113834740 + 1;
    if ((bRam00000001132ff008 & 1) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340ddb0)();
      *ppuVar10 = (undefined *)0x1132ff008;
      ppuVar10[1] = FUN_109f67048;
      _pthread_once(0x1132ff010,0x109f686dc);
      bRam00000001132ff008 = 1;
    }
    puVar11 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
    return puVar11;
  }
  return puVar11;
}



/* Entry: 109ec8534; end: 109ec85e3;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e3c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e50) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e58) */
/* WARNING: Removing unreachable block (ram,0x000109ec7010) */
/* WARNING: Removing unreachable block (ram,0x000109ec7018) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e6c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7024) */
/* WARNING: Removing unreachable block (ram,0x000109ec702c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e74) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e7c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7034) */

undefined * FUN_109ec8534(long param_1)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined8 unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  undefined *puVar11;
  undefined8 unaff_x22;
  ulong uVar12;
  ulong unaff_x23;
  uint uVar13;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  bVar2 = *(byte *)(param_1 + 0xe);
  uVar8 = (ulong)bVar2;
  if (1 < bVar2) {
    uVar13 = *(uint *)(param_1 + 4) & 0xff;
    uVar10 = (ulong)uVar13;
    if (uVar13 - 2 < 3) {
      uVar1 = *(uint *)(param_1 + 0x28);
      if ((*(uint *)(param_1 + 4) & 0x1000000) != 0) {
        uVar1 = 0;
      }
      puVar4 = (undefined1 *)register0x00000008;
      uVar3 = (ulong)uVar1;
      do {
        uVar12 = uVar3;
        *(undefined8 *)(puVar4 + -0x60) = unaff_x28;
        *(undefined8 *)(puVar4 + -0x58) = unaff_x27;
        *(undefined8 *)(puVar4 + -0x50) = unaff_x26;
        *(undefined8 *)(puVar4 + -0x48) = unaff_x25;
        *(ulong *)(puVar4 + -0x40) = unaff_x24;
        *(ulong *)(puVar4 + -0x38) = unaff_x23;
        *(undefined8 *)(puVar4 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar4 + -0x28) = unaff_x21;
        *(ulong *)(puVar4 + -0x20) = unaff_x20;
        *(undefined8 *)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar4 + -8) = unaff_x30;
        unaff_x29 = puVar4 + -0x10;
        *(undefined8 *)(puVar4 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        if (uVar13 == 0x14) {
          puVar11 = &DAT_10e05d768;
          uVar10 = unaff_x20;
          uVar12 = unaff_x23;
          uVar8 = unaff_x24;
LAB_109ec6fd4:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar4 + -0x70)) {
            return puVar11;
          }
          ___stack_chk_fail();
          *(ulong *)(puVar4 + -0x180) = uVar8;
          *(ulong *)(puVar4 + -0x178) = uVar12;
          *(undefined **)(puVar4 + -0x170) = puVar11;
          *(undefined8 *)(puVar4 + -0x168) = unaff_x21;
          *(ulong *)(puVar4 + -0x160) = uVar10;
          *(undefined8 *)(puVar4 + -0x158) = unaff_x19;
          *(undefined1 **)(puVar4 + -0x150) = unaff_x29;
          *(code **)(puVar4 + -0x148) = FUN_109ec72ac;
          ppuVar9 = &PTR___tlv_bootstrap_11340ddb0;
          if ((bRam00000001132ff008 & 1) == 0) {
            ppuVar5 = ppuVar9;
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar5 = (undefined *)0x1132ff008;
            ppuVar5[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          _pthread_mutex_lock(0x1132ff020);
          if (iRam0000000113834740 == 0) {
            puVar6 = (undefined8 *)0x30;
            _malloc();
            puVar7 = puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              puVar6[4] = 0;
              puVar7 = puVar6 + 6;
              puVar6[1] = 0;
              *puVar6 = 0;
              puVar6[3] = 0;
              puVar6[2] = 0;
            }
            *(undefined4 *)(puVar4 + -0x184) = 0;
            puRam0000000113834730 = puVar7;
            FUN_109f6658c();
            puRam0000000113834738 = puVar7;
          }
          iRam0000000113834740 = iRam0000000113834740 + 1;
          if ((bRam00000001132ff008 & 1) == 0) {
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar9 = (undefined *)0x1132ff008;
            ppuVar9[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          puVar11 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
          return puVar11;
        }
        unaff_x21 = 1;
        if ((int)uVar12 == 0) {
          uVar13 = (uint)bVar2;
          switch(uVar10) {
          case 0:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66da8;
            break;
          case 1:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66d70;
            break;
          case 2:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66cc8;
            break;
          case 3:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66d00;
            break;
          case 4:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66d38;
            break;
          case 5:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66f30;
            break;
          case 6:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66ef8;
            break;
          case 7:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66ec0;
            break;
          case 8:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66e88;
            break;
          case 9:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66e50;
            break;
          case 10:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66e18;
            break;
          case 0xb:
            if (uVar13 == 8) {
              uVar8 = 6;
            }
            else if (uVar13 == 0x10) {
              uVar8 = 7;
            }
            else if (uVar13 - 8 < 0xfffffff9) goto LAB_109ec7288;
            ppuVar9 = &PTR_DAT_110b66de0;
            break;
          default:
LAB_109ec7288:
            puVar11 = &UNK_10e05d730;
            unaff_x21 = 1;
            goto LAB_109ec6fd4;
          }
          puVar11 = ppuVar9[uVar8 - 1];
          goto LAB_109ec6fd4;
        }
        unaff_x30 = 0x109ec6d14;
        puVar4 = puVar4 + -0x140;
        uVar3 = 0;
        unaff_x20 = uVar10;
        unaff_x21 = 1;
        unaff_x22 = 0;
        unaff_x23 = uVar12;
        unaff_x24 = uVar8;
        unaff_x25 = 0;
      } while( true );
    }
  }
  return &UNK_10e05d730;
}



/* Entry: 109ec85e4; end: 109ec889f;  */

ulong FUN_109ec85e4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  if ((*(byte *)(param_1 + 4) - 0x11 < 2) && (uVar1 = *(uint *)(param_1 + 0x10), uVar1 != 0)) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + 8);
    do {
      uVar2 = param_2;
      _strcmp(param_2,*puVar4);
      if ((int)uVar2 == 0) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 6;
    } while (uVar1 != uVar3);
  }
  return 0xffffffff;
}



/* Entry: 109ec88a0; end: 109ec88d7;  */

int FUN_109ec88a0(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 4) == '\x13') {
    iVar1 = *(int *)(param_1 + 0x10);
    while( true ) {
      param_1 = *(long *)(param_1 + 0x30);
      if (*(char *)(param_1 + 4) != '\x13') break;
      iVar1 = *(int *)(param_1 + 0x10) * iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 109ec88d8; end: 109ec8a53;  */

int FUN_109ec88d8(long param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  
  iVar5 = 1;
  do {
    bVar2 = *(byte *)(param_1 + 4);
    if (0x15 < bVar2) {
LAB_109ec8970:
      iVar6 = 0;
LAB_109ec892c:
      return iVar6 * iVar5;
    }
    if (bVar2 != 0x13) {
      uVar3 = 1 << (ulong)(bVar2 & 0x1f);
      if ((uVar3 & 0x20efff) != 0) {
        iVar6 = 1;
        goto LAB_109ec892c;
      }
      if (((uVar3 & 0x60000) != 0) &&
         (uVar7 = (ulong)*(uint *)(param_1 + 0x10), *(uint *)(param_1 + 0x10) != 0)) {
        iVar6 = 0;
        puVar8 = *(undefined8 **)(param_1 + 0x30);
        do {
          uVar4 = *puVar8;
          FUN_109ec88d8(uVar4);
          iVar6 = (int)uVar4 + iVar6;
          uVar7 = uVar7 - 1;
          puVar8 = puVar8 + 6;
        } while (uVar7 != 0);
        goto LAB_109ec892c;
      }
      goto LAB_109ec8970;
    }
    piVar1 = (int *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x30);
    iVar5 = *piVar1 * iVar5;
  } while( true );
}



/* Entry: 109ec8a54; end: 109ec8c8b;  */

ulong FUN_109ec8a54(ulong param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
LAB_109ec8a70:
  do {
    uVar6 = param_1;
    bVar2 = *(byte *)(uVar6 + 4);
    param_1 = (ulong)bVar2;
    bVar3 = *(byte *)(uVar6 + 0xd);
    uVar8 = (uint)bVar3;
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if ((bVar2 & 0xf0) == 0) {
          FUN_109ec9858();
          uVar8 = 2;
          if ((int)param_1 != 0x10) {
            uVar8 = 4;
          }
          bVar4 = (int)param_1 == 0x40;
          uVar5 = 8;
          goto LAB_109ec8bdc;
        }
      }
      else if ((bVar2 & 0xfc) < 0xc && *(char *)(uVar6 + 0xe) == '\x01') {
        if (uVar8 - 3 < 2) {
          FUN_109ec9858();
          uVar8 = 8;
          if ((int)param_1 != 0x10) {
            uVar8 = 0x10;
          }
          bVar4 = (int)param_1 == 0x40;
          uVar5 = 0x20;
LAB_109ec8bdc:
          if (!bVar4) {
            uVar5 = uVar8;
          }
          return (ulong)uVar5;
        }
        if (uVar8 == 2) {
          FUN_109ec9858();
          uVar8 = 4;
          if ((int)param_1 != 0x10) {
            uVar8 = 8;
          }
          bVar4 = (int)param_1 == 0x40;
          uVar5 = 0x10;
          goto LAB_109ec8bdc;
        }
      }
    }
    uVar5 = (uint)bVar2;
    if (uVar5 == 0x13) {
      param_1 = *(ulong *)(uVar6 + 0x30);
      if (*(char *)(param_1 + 0xd) == '\0') break;
      if (*(char *)(param_1 + 0xd) == '\x01') {
        if ((*(byte *)(param_1 + 4) & 0xf0) != 0) break;
      }
      else if ((*(char *)(param_1 + 0xe) != '\x01') || (0xb < (*(uint *)(param_1 + 4) & 0xfc)))
      break;
      goto LAB_109ec8b20;
    }
    if (*(byte *)(uVar6 + 0xe) < 2 || 2 < uVar5 - 2) {
      if (uVar5 != 0x11) {
        return 0xffffffff;
      }
      if (*(int *)(uVar6 + 0x10) == 0) {
        return 0x10;
      }
      lVar11 = 0;
      uVar12 = 0;
      uVar9 = 0x10;
      do {
        uVar5 = *(uint *)(*(long *)(uVar6 + 0x30) + lVar11 + 0x28) >> 5 & 3;
        uVar8 = param_2;
        if (uVar5 == 1) {
          uVar8 = 0;
        }
        uVar1 = 1;
        if (uVar5 != 2) {
          uVar1 = uVar8;
        }
        uVar10 = *(ulong *)(*(long *)(uVar6 + 0x30) + lVar11);
        uVar7 = uVar10;
        FUN_109ec8a54(uVar10,uVar1 & 1);
        if ((uint)uVar9 <= (uint)uVar7) {
          FUN_109ec8a54(uVar10,uVar1 & 1);
          uVar9 = uVar10;
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 0x30;
      } while (uVar12 < *(uint *)(uVar6 + 0x10));
      return uVar9;
    }
    uVar5 = (uint)*(byte *)(uVar6 + 0xe);
    if ((param_2 & 1) == 0) {
      uVar5 = uVar8;
    }
    func_0x000109ec6c94(param_1,uVar5,1,0,0,0);
    func_0x000109ec69f4();
    param_2 = 0;
  } while( true );
  if ((1 < *(byte *)(param_1 + 0xe)) && (*(byte *)(param_1 + 4) - 2 < 3)) {
LAB_109ec8b20:
    FUN_109ec8a54(param_1,param_2 & 1);
    if ((uint)param_1 < 0x11) {
      return 0x10;
    }
    param_1 = *(ulong *)(uVar6 + 0x30);
  }
  goto LAB_109ec8a70;
}



/* Entry: 109ec8c8c; end: 109ec920b;  */

uint FUN_109ec8c8c(ulong param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  do {
    bVar2 = *(byte *)(param_1 + 4);
    uVar11 = (ulong)bVar2;
    bVar3 = *(byte *)(param_1 + 0xd);
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if ((bVar2 & 0xf0) == 0) {
LAB_109ec8eec:
          FUN_109ec9858();
          uVar6 = 1;
          if ((int)uVar11 != 0x10) {
            uVar6 = 2;
          }
          uVar15 = 3;
          if ((int)uVar11 != 0x40) {
            uVar15 = uVar6;
          }
          return (uint)bVar3 << (ulong)uVar15;
        }
      }
      else if ((bVar2 & 0xfc) < 0xc && *(char *)(param_1 + 0xe) == '\x01') goto LAB_109ec8eec;
    }
    uVar6 = (uint)bVar2;
    uVar9 = uVar11;
    uVar10 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar10 = *(ulong *)(uVar10 + 0x30);
        uVar9 = (ulong)*(byte *)(uVar10 + 4);
      } while (*(byte *)(uVar10 + 4) == 0x13);
    }
    if ((*(byte *)(uVar10 + 0xe) < 2) || (2 < (int)uVar9 - 2U)) {
      uVar11 = param_1;
      if (uVar6 == 0x13) {
        do {
          cVar4 = *(char *)(*(ulong *)(uVar11 + 0x30) + 4);
          uVar11 = *(ulong *)(uVar11 + 0x30);
        } while (cVar4 == '\x13');
        uVar11 = param_1;
        if (cVar4 == '\x11') {
          do {
            uVar11 = *(ulong *)(uVar11 + 0x30);
          } while (*(char *)(uVar11 + 4) == '\x13');
          FUN_109ec8c8c(uVar11,param_2 & 1);
          uVar6 = (uint)uVar11;
        }
        else {
          do {
            uVar11 = *(ulong *)(uVar11 + 0x30);
          } while (*(char *)(uVar11 + 4) == '\x13');
          FUN_109ec8a54(uVar11,param_2 & 1);
          uVar6 = (uint)uVar11;
          if (uVar6 < 0x11) {
            uVar6 = 0x10;
          }
        }
        FUN_109ec88a0(param_1);
        uVar6 = (int)param_1 * uVar6;
      }
      else if (uVar6 - 0x11 < 2) {
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar6 = 0;
          iVar8 = -1;
        }
        else {
          lVar14 = 0;
          uVar11 = 0;
          uVar6 = 0;
          uVar15 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(param_1 + 0x30) + lVar14 + 0x28) >> 5 & 3;
            uVar13 = param_2;
            if (uVar5 == 1) {
              uVar13 = 0;
            }
            uVar1 = 1;
            if (uVar5 != 2) {
              uVar1 = uVar13;
            }
            lVar12 = *(long *)(*(long *)(param_1 + 0x30) + lVar14);
            lVar7 = lVar12;
            FUN_109ec8a54(lVar12,uVar1 & 1);
            if ((*(char *)(lVar12 + 4) == '\x13') && (*(int *)(lVar12 + 0x10) == 0)) {
              uVar9 = (ulong)*(uint *)(param_1 + 0x10);
            }
            else {
              uVar13 = (uint)lVar7;
              lVar7 = lVar12;
              FUN_109ec8c8c(lVar12,uVar1 & 1);
              uVar15 = (int)lVar7 + ((uVar15 + uVar13) - 1 & -uVar13);
              if (uVar13 <= uVar6) {
                uVar13 = uVar6;
              }
              uVar9 = (ulong)*(uint *)(param_1 + 0x10);
              uVar6 = uVar13;
              if (*(char *)(lVar12 + 4) == '\x11' && uVar11 + 1 < uVar9) {
                uVar15 = uVar15 + 0xf & 0xfffffff0;
              }
            }
            uVar11 = uVar11 + 1;
            lVar14 = lVar14 + 0x30;
          } while (uVar11 < uVar9);
          iVar8 = uVar15 - 1;
        }
        if (uVar6 < 0x11) {
          uVar6 = 0x10;
        }
        uVar6 = uVar6 + iVar8 & -uVar6;
      }
      else {
        uVar6 = 0xffffffff;
      }
      return uVar6;
    }
    uVar9 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar9 = *(ulong *)(uVar9 + 0x30);
        bVar2 = *(byte *)(uVar9 + 4);
      } while (bVar2 == 0x13);
      FUN_109ec88a0(param_1);
      uVar11 = (ulong)bVar2;
    }
    param_1 = uVar11;
    lVar14 = 0xd;
    if ((param_2 & 1) != 0) {
      lVar14 = 0xe;
    }
    func_0x000109ec6c94(param_1,*(undefined1 *)(uVar9 + lVar14),1,0,0,0);
    func_0x000109ec69f4();
    param_2 = 0;
  } while( true );
}



/* Entry: 109ec920c; end: 109ec93db;  */

ulong FUN_109ec920c(ulong param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  do {
    bVar2 = *(byte *)(param_1 + 4);
    uVar6 = (ulong)bVar2;
    bVar3 = *(byte *)(param_1 + 0xd);
    uVar8 = (uint)bVar3;
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if ((bVar2 & 0xf0) == 0) {
          FUN_109ec9858();
          uVar8 = 2;
          if ((int)uVar6 != 0x10) {
            uVar8 = 4;
          }
          bVar4 = (int)uVar6 == 0x40;
          uVar5 = 8;
          goto LAB_109ec932c;
        }
      }
      else if ((bVar2 & 0xfc) < 0xc && *(char *)(param_1 + 0xe) == '\x01') {
        if (uVar8 - 3 < 2) {
          FUN_109ec9858();
          uVar8 = 8;
          if ((int)uVar6 != 0x10) {
            uVar8 = 0x10;
          }
          bVar4 = (int)uVar6 == 0x40;
          uVar5 = 0x20;
          goto LAB_109ec932c;
        }
        if (uVar8 == 2) {
          FUN_109ec9858();
          uVar8 = 4;
          if ((int)uVar6 != 0x10) {
            uVar8 = 8;
          }
          bVar4 = (int)uVar6 == 0x40;
          uVar5 = 0x10;
LAB_109ec932c:
          if (!bVar4) {
            uVar5 = uVar8;
          }
          return (ulong)uVar5;
        }
      }
    }
    uVar5 = (uint)bVar2;
    if (uVar5 == 0x13) {
      param_1 = *(ulong *)(param_1 + 0x30);
    }
    else {
      if (*(byte *)(param_1 + 0xe) < 2 || 2 < uVar5 - 2) {
        if (uVar5 != 0x11) {
          return 0xffffffff;
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          lVar11 = 0;
          uVar6 = 0;
          uVar9 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(param_1 + 0x30) + lVar11 + 0x28) >> 5 & 3;
            uVar8 = param_2;
            if (uVar5 == 1) {
              uVar8 = 0;
            }
            uVar1 = 1;
            if (uVar5 != 2) {
              uVar1 = uVar8;
            }
            uVar10 = *(ulong *)(*(long *)(param_1 + 0x30) + lVar11);
            uVar7 = uVar10;
            FUN_109ec920c(uVar10,uVar1 & 1);
            if ((uint)uVar9 <= (uint)uVar7) {
              FUN_109ec920c(uVar10,uVar1 & 1);
              uVar9 = uVar10;
            }
            uVar6 = uVar6 + 1;
            lVar11 = lVar11 + 0x30;
          } while (uVar6 < *(uint *)(param_1 + 0x10));
          return uVar9;
        }
        return 0;
      }
      uVar5 = (uint)*(byte *)(param_1 + 0xe);
      if ((param_2 & 1) == 0) {
        uVar5 = uVar8;
      }
      func_0x000109ec6c94(uVar6,uVar5,1,0,0,0);
      func_0x000109ec69f4();
      param_2 = 0;
      param_1 = uVar6;
    }
  } while( true );
}



/* Entry: 109ec93dc; end: 109ec9467;  */

uint FUN_109ec93dc(ulong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  int iVar14;
  
  bVar3 = *(byte *)(param_1 + 0xd);
  if (1 < bVar3) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar6 = uVar2 & 0xff;
    FUN_109ec9858();
    uVar8 = 8;
    if (uVar6 != 0x10) {
      uVar8 = 0x10;
    }
    uVar1 = 0x20;
    if (uVar6 != 0x40) {
      uVar1 = uVar8;
    }
    if ((bVar3 == 3 && (uVar2 & 0xfc) < 0xc) && *(char *)(param_1 + 0xe) == '\x01') {
      return uVar1;
    }
  }
  do {
    bVar3 = *(byte *)(param_1 + 4);
    uVar11 = (ulong)bVar3;
    bVar4 = *(byte *)(param_1 + 0xd);
    if (bVar4 != 0) {
      if (bVar4 == 1) {
        if ((bVar3 & 0xf0) == 0) {
LAB_109ec9688:
          FUN_109ec9858();
          uVar6 = 1;
          if ((int)uVar11 != 0x10) {
            uVar6 = 2;
          }
          uVar8 = 3;
          if ((int)uVar11 != 0x40) {
            uVar8 = uVar6;
          }
          return (uint)bVar4 << (ulong)uVar8;
        }
      }
      else if ((bVar3 & 0xfc) < 0xc && *(char *)(param_1 + 0xe) == '\x01') goto LAB_109ec9688;
    }
    uVar6 = (uint)bVar3;
    uVar9 = uVar11;
    uVar10 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar10 = *(ulong *)(uVar10 + 0x30);
        uVar9 = (ulong)*(byte *)(uVar10 + 4);
      } while (*(byte *)(uVar10 + 4) == 0x13);
    }
    if ((*(byte *)(uVar10 + 0xe) < 2) || (2 < (int)uVar9 - 2U)) {
      uVar11 = param_1;
      if (uVar6 == 0x13) {
        do {
          cVar5 = *(char *)(*(ulong *)(uVar11 + 0x30) + 4);
          uVar11 = *(ulong *)(uVar11 + 0x30);
        } while (cVar5 == '\x13');
        uVar11 = param_1;
        if (cVar5 == '\x11') {
          do {
            uVar11 = *(ulong *)(uVar11 + 0x30);
          } while (*(char *)(uVar11 + 4) == '\x13');
          FUN_109ec9468(uVar11,param_2 & 1);
          iVar14 = (int)uVar11;
        }
        else {
          do {
            uVar11 = *(ulong *)(uVar11 + 0x30);
          } while (*(char *)(uVar11 + 4) == '\x13');
          FUN_109ec920c(uVar11,param_2 & 1);
          iVar14 = (int)uVar11;
        }
        FUN_109ec88a0(param_1);
        uVar6 = (int)param_1 * iVar14;
      }
      else if (uVar6 - 0x11 < 2) {
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar6 = 0;
          iVar14 = -1;
        }
        else {
          lVar13 = 0;
          uVar11 = 0;
          iVar14 = 0;
          uVar8 = 0;
          do {
            uVar2 = *(uint *)(*(long *)(param_1 + 0x30) + lVar13 + 0x28) >> 5 & 3;
            uVar6 = param_2;
            if (uVar2 == 1) {
              uVar6 = 0;
            }
            uVar1 = 1;
            if (uVar2 != 2) {
              uVar1 = uVar6;
            }
            uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar13);
            uVar7 = uVar12;
            FUN_109ec920c(uVar12,uVar1 & 1);
            uVar6 = (uint)uVar7;
            FUN_109ec9468(uVar12,uVar1 & 1);
            iVar14 = ((iVar14 + uVar6) - 1 & -uVar6) + (int)uVar12;
            if (uVar6 <= uVar8) {
              uVar6 = uVar8;
            }
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 0x30;
            uVar8 = uVar6;
          } while (uVar11 < *(uint *)(param_1 + 0x10));
          iVar14 = iVar14 + -1;
        }
        uVar6 = uVar6 + iVar14 & -uVar6;
      }
      else {
        uVar6 = 0xffffffff;
      }
      return uVar6;
    }
    uVar9 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar9 = *(ulong *)(uVar9 + 0x30);
        bVar3 = *(byte *)(uVar9 + 4);
      } while (bVar3 == 0x13);
      FUN_109ec88a0(param_1);
      uVar11 = (ulong)bVar3;
    }
    param_1 = uVar11;
    lVar13 = 0xd;
    if ((param_2 & 1) != 0) {
      lVar13 = 0xe;
    }
    func_0x000109ec6c94(param_1,*(undefined1 *)(uVar9 + lVar13),1,0,0,0);
    func_0x000109ec69f4();
    param_2 = 0;
  } while( true );
}



/* Entry: 109ec9468; end: 109ec96e7;  */

uint FUN_109ec9468(ulong param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  
  do {
    bVar2 = *(byte *)(param_1 + 4);
    uVar10 = (ulong)bVar2;
    bVar3 = *(byte *)(param_1 + 0xd);
    if (bVar3 != 0) {
      if (bVar3 == 1) {
        if ((bVar2 & 0xf0) == 0) {
LAB_109ec9688:
          FUN_109ec9858();
          uVar6 = 1;
          if ((int)uVar10 != 0x10) {
            uVar6 = 2;
          }
          uVar12 = 3;
          if ((int)uVar10 != 0x40) {
            uVar12 = uVar6;
          }
          return (uint)bVar3 << (ulong)uVar12;
        }
      }
      else if ((bVar2 & 0xfc) < 0xc && *(char *)(param_1 + 0xe) == '\x01') goto LAB_109ec9688;
    }
    uVar6 = (uint)bVar2;
    uVar8 = uVar10;
    uVar9 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar9 = *(ulong *)(uVar9 + 0x30);
        uVar8 = (ulong)*(byte *)(uVar9 + 4);
      } while (*(byte *)(uVar9 + 4) == 0x13);
    }
    if ((*(byte *)(uVar9 + 0xe) < 2) || (2 < (int)uVar8 - 2U)) {
      uVar10 = param_1;
      if (uVar6 == 0x13) {
        do {
          cVar4 = *(char *)(*(ulong *)(uVar10 + 0x30) + 4);
          uVar10 = *(ulong *)(uVar10 + 0x30);
        } while (cVar4 == '\x13');
        uVar10 = param_1;
        if (cVar4 == '\x11') {
          do {
            uVar10 = *(ulong *)(uVar10 + 0x30);
          } while (*(char *)(uVar10 + 4) == '\x13');
          FUN_109ec9468(uVar10,param_2 & 1);
          iVar14 = (int)uVar10;
        }
        else {
          do {
            uVar10 = *(ulong *)(uVar10 + 0x30);
          } while (*(char *)(uVar10 + 4) == '\x13');
          FUN_109ec920c(uVar10,param_2 & 1);
          iVar14 = (int)uVar10;
        }
        FUN_109ec88a0(param_1);
        uVar6 = (int)param_1 * iVar14;
      }
      else if (uVar6 - 0x11 < 2) {
        if (*(int *)(param_1 + 0x10) == 0) {
          uVar6 = 0;
          iVar14 = -1;
        }
        else {
          lVar13 = 0;
          uVar10 = 0;
          iVar14 = 0;
          uVar12 = 0;
          do {
            uVar5 = *(uint *)(*(long *)(param_1 + 0x30) + lVar13 + 0x28) >> 5 & 3;
            uVar6 = param_2;
            if (uVar5 == 1) {
              uVar6 = 0;
            }
            uVar1 = 1;
            if (uVar5 != 2) {
              uVar1 = uVar6;
            }
            uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar13);
            uVar7 = uVar11;
            FUN_109ec920c(uVar11,uVar1 & 1);
            uVar6 = (uint)uVar7;
            FUN_109ec9468(uVar11,uVar1 & 1);
            iVar14 = ((iVar14 + uVar6) - 1 & -uVar6) + (int)uVar11;
            if (uVar6 <= uVar12) {
              uVar6 = uVar12;
            }
            uVar10 = uVar10 + 1;
            lVar13 = lVar13 + 0x30;
            uVar12 = uVar6;
          } while (uVar10 < *(uint *)(param_1 + 0x10));
          iVar14 = iVar14 + -1;
        }
        uVar6 = uVar6 + iVar14 & -uVar6;
      }
      else {
        uVar6 = 0xffffffff;
      }
      return uVar6;
    }
    uVar8 = param_1;
    if (uVar6 == 0x13) {
      do {
        uVar8 = *(ulong *)(uVar8 + 0x30);
        bVar2 = *(byte *)(uVar8 + 4);
      } while (bVar2 == 0x13);
      FUN_109ec88a0(param_1);
      uVar10 = (ulong)bVar2;
    }
    param_1 = uVar10;
    lVar13 = 0xd;
    if ((param_2 & 1) != 0) {
      lVar13 = 0xe;
    }
    func_0x000109ec6c94(param_1,*(undefined1 *)(uVar8 + lVar13),1,0,0,0);
    func_0x000109ec69f4();
    param_2 = 0;
  } while( true );
}



/* Entry: 109ec96e8; end: 109ec9857;  */

uint FUN_109ec96e8(long param_1,int param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  byte *pbVar10;
  
  uVar3 = *(uint *)(param_1 + 4) & 0xff;
  uVar4 = (ulong)uVar3;
  if (uVar3 - 0x11 < 2) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = 0;
    }
    else {
      lVar9 = 0;
      uVar4 = 0;
      uVar3 = 0;
      do {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar9);
        iVar6 = *(int *)(puVar1 + 3);
        uVar5 = *puVar1;
        FUN_109ec96e8(uVar5,0);
        uVar7 = (int)uVar5 + iVar6;
        if (uVar3 <= uVar7) {
          uVar3 = uVar7;
        }
        uVar4 = uVar4 + 1;
        lVar9 = lVar9 + 0x30;
      } while (uVar4 < *(uint *)(param_1 + 0x10));
    }
  }
  else {
    if (uVar3 == 0x13) {
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 == 0) {
        return *(uint *)(param_1 + 0x28);
      }
      if (param_2 == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0x30);
        FUN_109ec96e8(uVar5,0);
        uVar3 = (uint)uVar5;
        uVar8 = *(uint *)(param_1 + 0x28);
        iVar6 = *(int *)(param_1 + 0x10);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x28);
        uVar8 = uVar3;
      }
      uVar7 = iVar6 - 1;
    }
    else {
      pbVar10 = (byte *)(param_1 + 0xe);
      if (*pbVar10 < 2 || 2 < uVar3 - 2) {
        FUN_109ec9858();
        return ((uint)(uVar4 >> 3) & 0x1fffffff) * (uint)*(byte *)(param_1 + 0xd);
      }
      if ((*(uint *)(param_1 + 4) >> 0x18 & 1) == 0) {
        func_0x000109ec6c94(uVar4,*(undefined1 *)(param_1 + 0xd),1,0,0,0);
      }
      else {
        func_0x000109ec6c94(uVar4,*pbVar10,1,0,0,0);
        pbVar10 = (byte *)(param_1 + 0xd);
      }
      bVar2 = *pbVar10;
      if (param_2 == 0) {
        FUN_109ec96e8();
        uVar7 = *(uint *)(param_1 + 0x28);
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x28);
        uVar7 = uVar3;
      }
      uVar8 = bVar2 - 1;
    }
    uVar3 = uVar3 + uVar7 * uVar8;
  }
  return uVar3;
}



/* Entry: 109ec9858; end: 109ec9877;  */

undefined4 FUN_109ec9858(uint param_1)

{
  if (param_1 < 0x16) {
    return *(undefined4 *)(&UNK_10e06c310 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 109ec9878; end: 109ec9b1f;  */

/* WARNING: Possible PIC construction at 0x000109ec9914: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec9918) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6cf4) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e3c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e50) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e58) */
/* WARNING: Removing unreachable block (ram,0x000109ec7010) */
/* WARNING: Removing unreachable block (ram,0x000109ec7018) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e6c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7024) */
/* WARNING: Removing unreachable block (ram,0x000109ec702c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e74) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e7c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7034) */

undefined * FUN_109ec9878(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 **ppuVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  undefined **ppuVar17;
  int iVar18;
  undefined *puVar19;
  undefined *puVar20;
  uint uVar21;
  long lVar22;
  undefined *puVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  bVar4 = param_1[0xd];
  if (bVar4 < 2) {
    if ((bVar4 == 1) && ((param_1[4] & 0xf0) == 0)) {
      return param_1;
    }
  }
  else if ((param_1[0xe] == '\x01') && ((*(uint *)(param_1 + 4) & 0xfc) < 0xc)) {
    return param_1;
  }
  uVar21 = *(uint *)(param_1 + 4);
  uVar16 = (uint)(byte)param_1[0xe];
  if ((1 < uVar16) && (uVar1 = uVar21 & 0xff, uVar1 - 2 < 3)) {
    if ((int)param_2 == 0) {
      uVar16 = (uint)bVar4;
    }
    uVar15 = (ulong)uVar16;
    if (uVar1 == 0x14) {
      puVar19 = &DAT_10e05d768;
      goto LAB_109ec6fd4;
    }
    switch(uVar1) {
    case 0:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66da8;
      break;
    case 1:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66d70;
      break;
    case 2:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66cc8;
      break;
    case 3:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66d00;
      break;
    case 4:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66d38;
      break;
    case 5:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66f30;
      break;
    case 6:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66ef8;
      break;
    case 7:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66ec0;
      break;
    case 8:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66e88;
      break;
    case 9:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66e50;
      break;
    case 10:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66e18;
      break;
    case 0xb:
      if (uVar16 == 8) {
        uVar15 = 6;
      }
      else if (uVar16 == 0x10) {
        uVar15 = 7;
      }
      else if (uVar16 - 8 < 0xfffffff9) goto LAB_109ec7288;
      ppuVar17 = &PTR_DAT_110b66de0;
      break;
    default:
LAB_109ec7288:
      puVar19 = &UNK_10e05d730;
      goto LAB_109ec6fd4;
    }
    puVar19 = ppuVar17[uVar15 - 1];
LAB_109ec6fd4:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      ___stack_chk_fail();
      ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
      if ((bRam00000001132ff008 & 1) == 0) {
        ppuVar11 = ppuVar17;
        (*(code *)PTR___tlv_bootstrap_11340ddb0)();
        *ppuVar11 = (undefined *)0x1132ff008;
        ppuVar11[1] = FUN_109f67048;
        _pthread_once(0x1132ff010,0x109f686dc);
        bRam00000001132ff008 = 1;
      }
      _pthread_mutex_lock(0x1132ff020);
      if (iRam0000000113834740 == 0) {
        puVar12 = (undefined8 *)0x30;
        _malloc();
        puVar6 = puVar12;
        if (puVar12 != (undefined8 *)0x0) {
          puVar12[4] = 0;
          puVar6 = puVar12 + 6;
          puVar12[1] = 0;
          *puVar12 = 0;
          puVar12[3] = 0;
          puVar12[2] = 0;
        }
        puRam0000000113834730 = puVar6;
        FUN_109f6658c();
        puRam0000000113834738 = puVar6;
      }
      iRam0000000113834740 = iRam0000000113834740 + 1;
      if ((bRam00000001132ff008 & 1) == 0) {
        (*(code *)PTR___tlv_bootstrap_11340ddb0)();
        *ppuVar17 = (undefined *)0x1132ff008;
        ppuVar17[1] = FUN_109f67048;
        _pthread_once(0x1132ff010,0x109f686dc);
        bRam00000001132ff008 = 1;
      }
      puVar19 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
      return puVar19;
    }
    return puVar19;
  }
  if ((uVar21 & 0xff) != 0x13) {
    uVar16 = *(uint *)(param_1 + 0x10);
    puVar20 = (undefined *)(ulong)uVar16;
    puVar19 = puVar20;
    _calloc(puVar20,0x30);
    if (uVar16 != 0) {
      lVar22 = 0;
      puVar23 = (undefined *)0x0;
      iVar24 = 0;
      do {
        puVar6 = (undefined8 *)(puVar19 + lVar22);
        puVar12 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar22);
        uVar26 = puVar12[1];
        uVar14 = *puVar12;
        uVar25 = puVar12[2];
        uVar28 = puVar12[5];
        uVar27 = puVar12[4];
        puVar6[3] = puVar12[3];
        puVar6[2] = uVar25;
        puVar6[5] = uVar28;
        puVar6[4] = uVar27;
        puVar6[1] = uVar26;
        *puVar6 = uVar14;
        uVar16 = *(uint *)(puVar6 + 5) >> 5 & 3;
        iVar18 = (int)param_2;
        if (uVar16 == 2) {
          iVar18 = 1;
        }
        iVar2 = 0;
        if (uVar16 != 1) {
          iVar2 = iVar18;
        }
        uVar14 = *puVar6;
        FUN_109ec9878(uVar14,iVar2);
        *puVar6 = uVar14;
        uVar25 = uVar14;
        FUN_109ec9468();
        FUN_109ec920c(uVar14,iVar2);
        if (-1 < *(int *)(puVar6 + 3)) {
          iVar24 = *(int *)(puVar6 + 3);
        }
        uVar16 = ((int)uVar14 + iVar24) - 1U & -(int)uVar14;
        *(uint *)(puVar6 + 3) = uVar16;
        iVar24 = uVar16 + (int)uVar25;
        puVar23 = puVar23 + 1;
        puVar20 = (undefined *)(ulong)*(uint *)(param_1 + 0x10);
        lVar22 = lVar22 + 0x30;
      } while (puVar23 < puVar20);
      uVar21 = *(uint *)(param_1 + 4);
    }
    puVar23 = puVar19;
    if ((uVar21 & 0xff) == 0x11) {
      if (((byte)param_1[0xc] >> 1 & 1) == 0) {
        FUN_109eca058(param_1);
      }
      else {
        param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
      }
      FUN_109ec7c64(puVar19,puVar20,param_1,0,0);
    }
    else {
      if (((byte)param_1[0xc] >> 1 & 1) == 0) {
        FUN_109eca058(param_1);
      }
      else {
        param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
      }
      FUN_109ec7fc4(puVar19,puVar20,uVar21 >> 0x16 & 3,uVar21 >> 0x18 & 1,param_1);
    }
    _free(puVar19);
    return puVar23;
  }
  puVar13 = *(undefined4 **)(param_1 + 0x30);
  FUN_109ec9878(puVar13,param_2);
  uVar15 = *(ulong *)(param_1 + 0x30);
  FUN_109ec93dc(uVar15,param_2);
  uVar16 = *(uint *)(param_1 + 0x10);
  uStack_70 = (ulong)uVar16;
  uStack_68 = uVar15 & 0xffffffff;
  ppuVar5 = &puStack_78;
  puStack_78 = puVar13;
  FUN_109f65414(ppuVar5,0x18);
  ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar17 = (undefined *)0x1132ff008;
    ppuVar17[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (puRam0000000113834750 == (undefined8 *)0x0) {
    puVar6 = puRam0000000113834730;
    FUN_109f64c74(puRam0000000113834730,0x109ec7790,0x109eca4cc);
    puRam0000000113834750 = puVar6;
  }
  puVar12 = puRam0000000113834750;
  puVar7 = puRam0000000113834750;
  FUN_109f64fdc(puRam0000000113834750,ppuVar5,&puStack_78);
  puVar6 = puRam0000000113834738;
  if (puVar7 != (undefined8 *)0x0) goto LAB_109ec6c30;
  puVar7 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
  }
  *(undefined2 *)((long)puVar7 + 4) = 0x1413;
  *(uint *)(puVar7 + 2) = uVar16;
  uVar3 = puVar13[0xb];
  *(int *)(puVar7 + 5) = (int)uVar15;
  *(undefined4 *)((long)puVar7 + 0x2c) = uVar3;
  puVar7[6] = puVar13;
  *(undefined4 *)puVar7 = *puVar13;
  if ((*(byte *)(puVar13 + 3) >> 1 & 1) == 0) {
    FUN_109eca058();
    if (uVar16 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar19 = &UNK_10f6157f7;
  }
  else {
    puVar13 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(puVar13 + 6));
    if (uVar16 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar19 = &UNK_10f6157f2;
  }
  puVar8 = puVar6;
  FUN_109f666b0(puVar6,puVar19);
  puVar9 = puVar13;
  _strchr(puVar13,0x5b);
  if (puVar9 != (undefined4 *)0x0) {
    lVar22 = (long)puVar8 + ((long)puVar9 - (long)puVar13);
    puVar13 = puVar9;
    _strlen();
    lVar10 = lVar22;
    _strlen(lVar22);
    uVar15 = (ulong)(uint)((int)lVar10 - (int)puVar13);
    _memmove(lVar22,lVar22 + ((ulong)puVar13 & 0xffffffff),uVar15);
    _memcpy(lVar22 + uVar15,puVar9,(ulong)puVar13 & 0xffffffff);
  }
  puVar7[3] = puVar8;
  FUN_109f6650c(puVar6,0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
  }
  puVar6[2] = uStack_68;
  puVar6[1] = uStack_70;
  *puVar6 = puStack_78;
  func_0x000109f650c0(puVar12,ppuVar5,puVar6,puVar7);
  puVar7 = puVar12;
LAB_109ec6c30:
  ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
  puVar19 = (undefined *)puVar7[2];
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar17 = (undefined *)0x1132ff008;
    ppuVar17[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return puVar19;
}



/* Entry: 109ec9b20; end: 109ec9e3f;  */

/* WARNING: Possible PIC construction at 0x000109ec9d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */

undefined * FUN_109ec9b20(undefined *param_1,code *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  uint *puVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined **ppuVar18;
  undefined *unaff_x19;
  uint *unaff_x20;
  uint *unaff_x21;
  ulong unaff_x22;
  code *pcVar19;
  code *unaff_x23;
  int iVar20;
  ulong unaff_x24;
  long lVar21;
  undefined8 unaff_x25;
  ulong uVar22;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auStack_60 [8];
  uint uStack_58;
  int iStack_54;
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar17 = uVar1 & 0xff;
  if (uVar17 == 0xc) {
    *param_3 = 0;
    *param_4 = 0;
    return param_1;
  }
  if (uVar17 == 0xf || uVar17 == 0xd) {
LAB_109ec9b68:
    (*param_2)(param_1,param_3,param_4);
    puVar12 = param_1;
  }
  else {
    if (param_1[0xd] != '\0') {
      if (param_1[0xd] == '\x01') {
        if ((uVar1 & 0xf0) == 0) goto LAB_109ec9b68;
      }
      else if ((uVar1 & 0xfc) < 0xc && param_1[0xe] == '\x01') {
        (*param_2)(param_1,param_3,param_4);
        puVar13 = (uint *)(ulong)(byte)param_1[4];
        uVar14 = (ulong)(byte)param_1[0xd];
        puVar15 = (uint *)0x1;
        puVar5 = (undefined1 *)register0x00000008;
        pcVar4 = (code *)0x0;
        uVar22 = (ulong)*param_4;
        goto SUB_109ec6c94;
      }
    }
    if ((uVar1 & 0xff) - 0x11 < 2) {
      puVar10 = (undefined *)((ulong)*(uint *)(param_1 + 0x10) * 0x30);
      _malloc();
      *param_3 = 0;
      uVar17 = 1;
      *param_4 = 1;
      if (*(int *)(param_1 + 0x10) != 0) {
        lVar21 = 0;
        uVar22 = 0;
        do {
          puVar9 = (undefined8 *)(puVar10 + lVar21);
          puVar8 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar21);
          uVar25 = puVar8[3];
          uVar24 = puVar8[2];
          uVar23 = puVar8[5];
          uVar11 = puVar8[4];
          uVar26 = *puVar8;
          puVar9[1] = puVar8[1];
          *puVar9 = uVar26;
          puVar9[3] = uVar25;
          puVar9[2] = uVar24;
          puVar9[5] = uVar23;
          puVar9[4] = uVar11;
          uVar11 = *puVar9;
          FUN_109ec9b20(uVar11,param_2,&iStack_54,&uStack_58);
          *puVar9 = uVar11;
          uVar1 = uStack_58;
          if ((param_1[0xc] & 1) != 0) {
            uVar1 = 1;
          }
          uVar17 = (*param_3 + uVar1) - 1 & -uVar1;
          *(uint *)(puVar9 + 3) = uVar17;
          *param_3 = uVar17 + iStack_54;
          uVar17 = *param_4;
          if (*param_4 <= uVar1) {
            uVar17 = uVar1;
          }
          *param_4 = uVar17;
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + 0x30;
        } while (uVar22 < *(uint *)(param_1 + 0x10));
      }
      *param_3 = (uVar17 + *param_3) - 1 & -uVar17;
      uVar17 = *(uint *)(param_1 + 4);
      uVar2 = *(undefined4 *)(param_1 + 0x10);
      puVar12 = puVar10;
      if ((uVar17 & 0xff) == 0x11) {
        bVar3 = param_1[0xc];
        if ((bVar3 >> 1 & 1) == 0) {
          FUN_109eca058(param_1);
        }
        else {
          param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
        }
        FUN_109ec7c64(puVar10,uVar2,param_1,bVar3 & 1,*param_4);
      }
      else {
        if (((byte)param_1[0xc] >> 1 & 1) == 0) {
          FUN_109eca058(param_1);
        }
        else {
          param_1 = &UNK_10e05bf38 + *(long *)(param_1 + 0x18);
        }
        FUN_109ec7fc4(puVar10,uVar2,uVar17 >> 0x16 & 3,uVar17 >> 0x18 & 1,param_1);
      }
      _free(puVar10);
    }
    else {
      if ((uVar1 & 0xff) != 0x13) {
        func_0x000109ec8580(param_1);
        (*param_2)();
        uVar17 = (iStack_54 + uStack_58) - 1 & -uStack_58;
        puVar15 = (uint *)(ulong)(byte)param_1[0xe];
        *param_3 = uVar17 * (byte)param_1[0xe];
        *param_4 = uStack_58;
        puVar13 = (uint *)(ulong)(byte)param_1[4];
        uVar14 = (ulong)(byte)param_1[0xd];
        unaff_x30 = 0x109ec9d7c;
        puVar5 = auStack_60;
        pcVar4 = (code *)(ulong)uVar17;
        uVar22 = (ulong)uStack_58;
        unaff_x19 = param_1;
        unaff_x20 = param_4;
        unaff_x21 = param_3;
        unaff_x23 = param_2;
        unaff_x29 = &stack0xfffffffffffffff0;
SUB_109ec6c94:
        do {
          uVar16 = uVar22;
          pcVar19 = pcVar4;
          *(undefined8 *)(puVar5 + -0x60) = unaff_x28;
          *(undefined8 *)(puVar5 + -0x58) = unaff_x27;
          *(undefined8 *)(puVar5 + -0x50) = unaff_x26;
          *(undefined8 *)(puVar5 + -0x48) = unaff_x25;
          *(ulong *)(puVar5 + -0x40) = unaff_x24;
          *(code **)(puVar5 + -0x38) = unaff_x23;
          *(ulong *)(puVar5 + -0x30) = unaff_x22;
          *(uint **)(puVar5 + -0x28) = unaff_x21;
          *(uint **)(puVar5 + -0x20) = unaff_x20;
          *(undefined **)(puVar5 + -0x18) = unaff_x19;
          *(undefined1 **)(puVar5 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar5 + -8) = unaff_x30;
          unaff_x29 = puVar5 + -0x10;
          *(undefined8 *)(puVar5 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          iVar6 = (int)puVar13;
          if (iVar6 == 0x14) {
            puVar12 = &DAT_10e05d768;
            puVar13 = unaff_x20;
            puVar15 = unaff_x21;
            pcVar19 = unaff_x23;
            uVar14 = unaff_x24;
LAB_109ec6fd4:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar5 + -0x70)) {
              return puVar12;
            }
            ___stack_chk_fail();
            *(ulong *)(puVar5 + -0x180) = uVar14;
            *(code **)(puVar5 + -0x178) = pcVar19;
            *(undefined **)(puVar5 + -0x170) = puVar12;
            *(uint **)(puVar5 + -0x168) = puVar15;
            *(uint **)(puVar5 + -0x160) = puVar13;
            *(undefined **)(puVar5 + -0x158) = unaff_x19;
            *(undefined1 **)(puVar5 + -0x150) = unaff_x29;
            *(code **)(puVar5 + -0x148) = FUN_109ec72ac;
            ppuVar18 = &PTR___tlv_bootstrap_11340ddb0;
            if ((bRam00000001132ff008 & 1) == 0) {
              ppuVar7 = ppuVar18;
              (*(code *)PTR___tlv_bootstrap_11340ddb0)();
              *ppuVar7 = (undefined *)0x1132ff008;
              ppuVar7[1] = FUN_109f67048;
              _pthread_once(0x1132ff010,0x109f686dc);
              bRam00000001132ff008 = 1;
            }
            _pthread_mutex_lock(0x1132ff020);
            if (iRam0000000113834740 == 0) {
              puVar8 = (undefined8 *)0x30;
              _malloc();
              puVar9 = puVar8;
              if (puVar8 != (undefined8 *)0x0) {
                puVar8[4] = 0;
                puVar9 = puVar8 + 6;
                puVar8[1] = 0;
                *puVar8 = 0;
                puVar8[3] = 0;
                puVar8[2] = 0;
              }
              *(undefined4 *)(puVar5 + -0x184) = 0;
              puRam0000000113834730 = puVar9;
              FUN_109f6658c();
              puRam0000000113834738 = puVar9;
            }
            iRam0000000113834740 = iRam0000000113834740 + 1;
            if ((bRam00000001132ff008 & 1) == 0) {
              (*(code *)PTR___tlv_bootstrap_11340ddb0)();
              *ppuVar18 = (undefined *)0x1132ff008;
              ppuVar18[1] = FUN_109f67048;
              _pthread_once(0x1132ff010,0x109f686dc);
              bRam00000001132ff008 = 1;
            }
            puVar12 = (undefined *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
            return puVar12;
          }
          if ((int)uVar16 == 0 && (int)pcVar19 == 0) {
            iVar20 = (int)uVar14;
            if ((int)puVar15 == 1) {
              switch(puVar13) {
              case (uint *)0x0:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66da8;
                break;
              case (uint *)0x1:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66d70;
                break;
              case (uint *)0x2:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66cc8;
                break;
              case (uint *)0x3:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66d00;
                break;
              case (uint *)0x4:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66d38;
                break;
              case (uint *)0x5:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66f30;
                break;
              case (uint *)0x6:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66ef8;
                break;
              case (uint *)0x7:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66ec0;
                break;
              case (uint *)0x8:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66e88;
                break;
              case (uint *)0x9:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66e50;
                break;
              case (uint *)0xa:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66e18;
                break;
              case (uint *)0xb:
                if (iVar20 == 8) {
                  uVar14 = 6;
                }
                else if (iVar20 == 0x10) {
                  uVar14 = 7;
                }
                else if (iVar20 - 8U < 0xfffffff9) goto LAB_109ec7288;
                ppuVar18 = &PTR_DAT_110b66de0;
                break;
              default:
LAB_109ec7288:
                puVar12 = &UNK_10e05d730;
                goto LAB_109ec6fd4;
              }
              puVar12 = ppuVar18[uVar14 - 1];
            }
            else {
              puVar12 = &UNK_10e05d730;
              if ((iVar6 - 5U < 0xfffffffd) || (iVar20 == 1)) goto LAB_109ec6fd4;
              uVar17 = ((int)puVar15 * 3 + iVar20) - 8;
              if (iVar6 == 2) {
                if (8 < uVar17) goto LAB_109ec6fd4;
                ppuVar18 = &PTR_DAT_110b670d8;
              }
              else if (iVar6 == 3) {
                if (8 < uVar17) goto LAB_109ec6fd4;
                ppuVar18 = &PTR_DAT_110b67120;
              }
              else {
                if (8 < uVar17) goto LAB_109ec6fd4;
                ppuVar18 = &PTR_DAT_110b67090;
              }
              puVar12 = ppuVar18[uVar17];
            }
            goto LAB_109ec6fd4;
          }
          unaff_x25 = 0;
          unaff_x30 = 0x109ec6d14;
          puVar5 = puVar5 + -0x140;
          pcVar4 = (code *)0x0;
          uVar22 = 0;
          unaff_x20 = puVar13;
          unaff_x21 = puVar15;
          unaff_x22 = uVar16;
          unaff_x23 = pcVar19;
          unaff_x24 = uVar14;
        } while( true );
      }
      puVar12 = *(undefined **)(param_1 + 0x30);
      FUN_109ec9b20(puVar12,param_2,&iStack_54,&uStack_58);
      *param_3 = iStack_54 +
                 ((iStack_54 + uStack_58) - 1 & -uStack_58) * (*(int *)(param_1 + 0x10) + -1);
      *param_4 = uStack_58;
      FUN_109ec69f4();
    }
  }
  return puVar12;
}



/* Entry: 109ec9e40; end: 109ec9f5f;  */

int FUN_109ec9e40(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  iVar5 = 1;
  while( true ) {
    bVar2 = *(byte *)(param_1 + 4);
    uVar4 = (uint)bVar2;
    if (bVar2 < 0x11) break;
    if (uVar4 != 0x13) {
      if (uVar4 - 0x11 < 2) {
        uVar6 = (ulong)*(uint *)(param_1 + 0x10);
        if (*(uint *)(param_1 + 0x10) != 0) {
          uVar4 = 0;
          puVar7 = *(undefined8 **)(param_1 + 0x30);
          do {
            uVar3 = *puVar7;
            FUN_109ec9e40(uVar3,param_2,param_3);
            uVar4 = (int)uVar3 + uVar4;
            uVar6 = uVar6 - 1;
            puVar7 = puVar7 + 6;
          } while (uVar6 != 0);
          goto LAB_109ec9f48;
        }
        goto LAB_109ec9f44;
      }
      if (uVar4 != 0x15) goto LAB_109ec9f44;
      uVar4 = 1;
      goto LAB_109ec9f48;
    }
    piVar1 = (int *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x30);
    iVar5 = *piVar1 * iVar5;
  }
  if (uVar4 == 8 || bVar2 < 8) {
    if ((3 < uVar4) && (3 < uVar4 - 5)) {
      if (uVar4 != 4) {
LAB_109ec9f44:
        uVar4 = 0;
        goto LAB_109ec9f48;
      }
LAB_109ec9f28:
      uVar4 = (uint)*(byte *)(param_1 + 0xe) <<
              (ulong)((uint)(2 < *(byte *)(param_1 + 0xd)) & ((uint)param_2 ^ 0xffffffff));
      goto LAB_109ec9f48;
    }
  }
  else {
    if (uVar4 - 0xd < 3) {
      uVar4 = (uint)param_3;
      goto LAB_109ec9f48;
    }
    if (uVar4 - 9 < 2) goto LAB_109ec9f28;
    if (uVar4 != 0xb) goto LAB_109ec9f44;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0xe);
LAB_109ec9f48:
  return uVar4 * iVar5;
}



/* Entry: 109ec9f60; end: 109eca057;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e3c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e50) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e58) */
/* WARNING: Removing unreachable block (ram,0x000109ec7010) */
/* WARNING: Removing unreachable block (ram,0x000109ec7018) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e6c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7024) */
/* WARNING: Removing unreachable block (ram,0x000109ec702c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e74) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e7c) */
/* WARNING: Removing unreachable block (ram,0x000109ec7034) */

undefined8 * FUN_109ec9f60(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  bool in_ZR;
  bool in_CY;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  ulong unaff_x22;
  ulong uVar23;
  ulong unaff_x23;
  uint uVar24;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *puVar25;
  undefined8 unaff_x30;
  undefined8 *puStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar8 = &stack0xffffffffffffffd0;
  puVar25 = &stack0xfffffffffffffff0;
  bVar4 = *(byte *)((long)param_1 + 4);
  puVar18 = (undefined8 *)(ulong)bVar4;
  puVar20 = (undefined8 *)0x0;
  puVar21 = (undefined8 *)&UNK_10e06c2fa;
  puVar14 = param_1;
  puVar10 = param_2;
  switch(bVar4) {
  default:
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
  case 0xcc:
  case 0xce:
    puVar20 = (undefined8 *)(ulong)((uint)*(byte *)((long)param_1 + 0xe) * (int)puVar18);
code_r0x000109ec9fa4:
    break;
  case 3:
  case 7:
  case 8:
  case 0xd7:
  case 0xd9:
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
  case 0xcb:
    puVar18 = (undefined8 *)(ulong)((int)puVar18 + 1);
code_r0x000109ec9fc8:
    puVar18 = (undefined8 *)((ulong)puVar18 >> 1);
    puVar21 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe);
code_r0x000109ec9fd0:
    puVar20 = (undefined8 *)(ulong)(uint)((int)puVar18 * (int)puVar21);
    break;
  case 5:
  case 6:
  case 0x22:
  case 0x32:
  case 0x36:
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
  case 0x96:
    puVar21 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe);
code_r0x000109ec9fe0:
    puVar18 = (undefined8 *)(ulong)((int)puVar21 * (int)puVar18 + 3);
code_r0x000109ec9fe8:
    puVar20 = (undefined8 *)((ulong)puVar18 >> 2);
code_r0x000109ec9fec:
    break;
  case 0xc:
  case 0x14:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x109eca058);
    (*pcVar7)();
  case 0xd:
  case 0xe:
  case 0xf:
    if ((int)param_2 == 0) goto code_r0x000109eca020;
  case 4:
  case 9:
  case 10:
  case 199:
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
    puVar21 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe);
code_r0x000109ec9fb4:
    puVar18 = (undefined8 *)(ulong)(uint)((int)puVar18 * (int)puVar21);
code_r0x000109ec9fb8:
    puVar20 = (undefined8 *)(ulong)(uint)((int)puVar18 << 1);
code_r0x000109ec9fbc:
    break;
  case 0x10:
    break;
  case 0x11:
  case 0x12:
    unaff_x22 = (ulong)*(uint *)(param_1 + 2);
  case 0x86:
    if ((int)unaff_x22 == 0) {
code_r0x000109eca020:
      puVar20 = (undefined8 *)0x0;
    }
    else {
      puVar20 = (undefined8 *)0x0;
      param_1 = (undefined8 *)param_1[6];
code_r0x000109eca000:
      do {
        puVar14 = param_1 + 6;
        param_1 = (undefined8 *)*param_1;
code_r0x000109eca008:
        FUN_109ec9f60(param_1,param_2);
        puVar20 = (undefined8 *)(ulong)(uint)((int)param_1 + (int)puVar20);
code_r0x000109eca010:
        unaff_x22 = unaff_x22 - 1;
        in_ZR = unaff_x22 == 0;
        param_1 = puVar14;
code_r0x000109eca014:
      } while (!in_ZR);
code_r0x000109eca018:
    }
    break;
  case 0x13:
    puVar14 = (undefined8 *)param_1[6];
  case 0xdc:
    FUN_109ec9f60(puVar14,param_2);
    puVar20 = (undefined8 *)(ulong)(uint)(*(int *)(param_1 + 2) * (int)puVar14);
code_r0x000109eca038:
    break;
  case 0x15:
    return (undefined8 *)0x1;
  case 0x16:
  case 0x1a:
  case 0x1e:
  case 0x42:
  case 0x6a:
  case 0xd3:
    goto code_r0x000109eca018;
  case 0x26:
  case 0x3a:
  case 0x3e:
  case 0x4a:
  case 0x4e:
  case 0x52:
  case 0x82:
    goto code_r0x000109eca098;
  case 0x2a:
  case 0x2e:
  case 0x7e:
    goto code_r0x000109ec9fb8;
  case 0x8a:
  case 0x92:
    goto code_r0x000109eca010;
  case 0x8e:
    goto code_r0x000109eca008;
  case 0x9a:
  case 0xb3:
    goto code_r0x000109ec9fe0;
  case 0x9e:
  case 0xa8:
    goto code_r0x000109ec9fe8;
  case 0xa2:
  case 0xd6:
    goto code_r0x000109eca000;
  case 0xa7:
    if ((bVar4 >> 1 & 1) != 0) {
      puVar18 = (undefined8 *)param_1[4];
      goto code_r0x000109eca100;
    }
  case 0xb4:
    if (*(char *)((long)param_1 + 4) == '\x02') {
      puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe);
      puVar21 = (undefined8 *)(ulong)(*(byte *)((long)param_1 + 0xe) - 2);
code_r0x000109eca0cc:
      if (((uint)puVar21 < 3) && (*(byte *)((long)param_1 + 0xd) - 2 < 3)) {
        return *(undefined8 **)
                (&UNK_110b66f68 +
                (ulong)(uint)*(byte *)((long)param_1 + 0xd) * 8 + (long)puVar18 * 0x28);
      }
    }
code_r0x000109eca110:
    return (undefined8 *)param_1[3];
  case 0xa9:
    if (!in_CY) {
      if (bVar4 != 1 || *(byte *)((long)param_1 + 0xd) < 2) goto LAB_109eca15c;
      goto code_r0x000109eca148;
    }
  case 0xc4:
    if (*(byte *)((long)param_1 + 4) - 2 < 3) {
      if (1 < *(byte *)((long)param_1 + 0xe)) {
        uVar24 = *(uint *)((long)param_1 + 4) & 0xff;
        puVar21 = (undefined8 *)(ulong)uVar24;
        if (uVar24 - 2 < 3) {
          bVar4 = *(byte *)((long)param_1 + 0xd);
          uVar19 = (ulong)bVar4;
          if ((*(uint *)((long)param_1 + 4) >> 0x18 & 1) == 0) {
            puVar8 = &stack0xffffffffffffffd0;
            uVar5 = 0;
            uVar6 = (ulong)*(uint *)((long)param_1 + 0x2c);
          }
          else {
            uVar5 = (ulong)*(uint *)(param_1 + 5);
            uVar6 = 0;
          }
          do {
            uVar16 = uVar6;
            uVar23 = uVar5;
            *(undefined8 *)(puVar8 + -0x60) = unaff_x28;
            *(undefined8 *)(puVar8 + -0x58) = unaff_x27;
            *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
            *(undefined8 *)(puVar8 + -0x48) = unaff_x25;
            *(ulong *)(puVar8 + -0x40) = unaff_x24;
            *(ulong *)(puVar8 + -0x38) = unaff_x23;
            *(ulong *)(puVar8 + -0x30) = unaff_x22;
            *(undefined8 **)(puVar8 + -0x28) = param_1;
            *(undefined8 **)(puVar8 + -0x20) = param_2;
            *(undefined8 *)(puVar8 + -0x18) = 0;
            *(undefined1 **)(puVar8 + -0x10) = puVar25;
            *(undefined8 *)(puVar8 + -8) = unaff_x30;
            puVar25 = puVar8 + -0x10;
            *(undefined8 *)(puVar8 + -0x70) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            if (uVar24 == 0x14) {
              puVar18 = (undefined8 *)&DAT_10e05d768;
              puVar21 = param_2;
              uVar23 = unaff_x23;
              uVar19 = unaff_x24;
LAB_109ec6fd4:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)(puVar8 + -0x70)) {
                ___stack_chk_fail();
                *(ulong *)(puVar8 + -0x180) = uVar19;
                *(ulong *)(puVar8 + -0x178) = uVar23;
                *(undefined8 **)(puVar8 + -0x170) = puVar18;
                *(undefined8 **)(puVar8 + -0x168) = param_1;
                *(undefined8 **)(puVar8 + -0x160) = puVar21;
                *(undefined8 *)(puVar8 + -0x158) = 0;
                *(undefined1 **)(puVar8 + -0x150) = puVar25;
                *(code **)(puVar8 + -0x148) = FUN_109ec72ac;
                ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
                if ((bRam00000001132ff008 & 1) == 0) {
                  ppuVar13 = ppuVar17;
                  (*(code *)PTR___tlv_bootstrap_11340ddb0)();
                  *ppuVar13 = (undefined *)0x1132ff008;
                  ppuVar13[1] = FUN_109f67048;
                  _pthread_once(0x1132ff010,0x109f686dc);
                  bRam00000001132ff008 = 1;
                }
                _pthread_mutex_lock(0x1132ff020);
                if (iRam0000000113834740 == 0) {
                  puVar18 = (undefined8 *)0x30;
                  _malloc();
                  puVar21 = puVar18;
                  if (puVar18 != (undefined8 *)0x0) {
                    puVar18[4] = 0;
                    puVar21 = puVar18 + 6;
                    puVar18[1] = 0;
                    *puVar18 = 0;
                    puVar18[3] = 0;
                    puVar18[2] = 0;
                  }
                  *(undefined4 *)(puVar8 + -0x184) = 0;
                  puRam0000000113834730 = puVar21;
                  FUN_109f6658c();
                  puRam0000000113834738 = puVar21;
                }
                iRam0000000113834740 = iRam0000000113834740 + 1;
                if ((bRam00000001132ff008 & 1) == 0) {
                  (*(code *)PTR___tlv_bootstrap_11340ddb0)();
                  *ppuVar17 = (undefined *)0x1132ff008;
                  ppuVar17[1] = FUN_109f67048;
                  _pthread_once(0x1132ff010,0x109f686dc);
                  bRam00000001132ff008 = 1;
                }
                puVar21 = (undefined8 *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
                return puVar21;
              }
              return puVar18;
            }
            param_1 = (undefined8 *)0x1;
            if ((int)uVar16 == 0 && (int)uVar23 == 0) {
              uVar24 = (uint)bVar4;
              switch(puVar21) {
              case (undefined8 *)0x0:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66da8;
                break;
              case (undefined8 *)0x1:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66d70;
                break;
              case (undefined8 *)0x2:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66cc8;
                break;
              case (undefined8 *)0x3:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66d00;
                break;
              case (undefined8 *)0x4:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66d38;
                break;
              case (undefined8 *)0x5:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66f30;
                break;
              case (undefined8 *)0x6:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66ef8;
                break;
              case (undefined8 *)0x7:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66ec0;
                break;
              case (undefined8 *)0x8:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66e88;
                break;
              case (undefined8 *)0x9:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66e50;
                break;
              case (undefined8 *)0xa:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66e18;
                break;
              case (undefined8 *)0xb:
                if (uVar24 == 8) {
                  uVar19 = 6;
                }
                else if (uVar24 == 0x10) {
                  uVar19 = 7;
                }
                else if (uVar24 - 8 < 0xfffffff9) goto LAB_109ec7288;
                ppuVar17 = &PTR_DAT_110b66de0;
                break;
              default:
LAB_109ec7288:
                puVar18 = (undefined8 *)&UNK_10e05d730;
                param_1 = (undefined8 *)0x1;
                goto LAB_109ec6fd4;
              }
              puVar18 = (undefined8 *)ppuVar17[uVar19 - 1];
              goto LAB_109ec6fd4;
            }
            unaff_x30 = 0x109ec6d14;
            puVar8 = puVar8 + -0x140;
            uVar5 = 0;
            uVar6 = 0;
            param_2 = puVar21;
            param_1 = (undefined8 *)0x1;
            unaff_x22 = uVar16;
            unaff_x23 = uVar23;
            unaff_x24 = uVar19;
            unaff_x25 = 0;
          } while( true );
        }
      }
      return (undefined8 *)&UNK_10e05d730;
    }
LAB_109eca15c:
    return (undefined8 *)param_1[6];
  case 0xaa:
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 4);
    if (*(byte *)((long)param_1 + 4) - 0x11 < 2) {
      return (undefined8 *)0x0;
    }
  case 0xb9:
  case 0xfe:
    puVar20 = param_1;
    if ((int)puVar18 == 0x13) {
code_r0x000109eca194:
      func_0x000109eca118();
      if (*(char *)((long)param_1 + 4) != '\x13') {
        func_0x000109eca118();
        in_CY = 1 < *(byte *)((long)puVar20 + 4) - 0x11;
code_r0x000109eca1b8:
        if (in_CY) goto LAB_109eca1c4;
      }
      puVar21 = (undefined8 *)0x0;
    }
    else {
LAB_109eca1c4:
      puVar21 = (undefined8 *)0x1;
    }
    return puVar21;
  case 0xab:
  case 0xad:
    goto code_r0x000109eca254;
  case 0xac:
  case 0xc1:
  case 0xc3:
    goto code_r0x000109eca110;
  case 0xae:
    goto code_r0x000109eca204;
  case 0xaf:
  case 0xc5:
  case 0xda:
    goto code_r0x000109eca020;
  case 0xb0:
    goto LAB_109eca1c4;
  case 0xb2:
    goto code_r0x000109eca068;
  case 0xb5:
code_r0x000109eca100:
    puVar21 = (undefined8 *)&UNK_10e05cb3d;
code_r0x000109eca108:
    return (undefined8 *)((long)puVar21 + (long)puVar18);
  case 0xb6:
  case 0xb8:
    goto code_r0x000109eca1b8;
  case 0xb7:
    goto LAB_109eca0a8;
  case 0xba:
    goto code_r0x000109eca014;
  case 0xbb:
code_r0x000109eca148:
    if ((*(uint *)((long)param_1 + 4) & 0xfc) < 0xc) {
      cVar3 = *(char *)((long)param_1 + 4);
      while (cVar3 == '\x13') {
        param_1 = (undefined8 *)param_1[6];
        cVar3 = *(char *)((long)param_1 + 4);
      }
      puVar21 = param_1;
      FUN_109ec6810();
      if (puVar21 != (undefined8 *)&UNK_10e05d730) {
        param_1 = puVar21;
      }
      return param_1;
    }
    goto LAB_109eca15c;
  case 0xbd:
    if (*(char *)((long)param_1 + 4) != '\x02') goto LAB_109eca0a8;
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xe);
    goto code_r0x000109eca068;
  case 0xbe:
  case 0xd0:
    goto code_r0x000109ec9fec;
  case 0xbf:
    goto code_r0x000109eca094;
  case 0xc0:
    goto code_r0x000109eca0cc;
  case 0xc2:
    goto code_r0x000109eca084;
  case 0xc6:
    goto code_r0x000109eca108;
  case 200:
    goto code_r0x000109ec9fbc;
  case 0xca:
    goto code_r0x000109ec9fa4;
  case 0xcf:
    goto code_r0x000109ec9fb4;
  case 0xd2:
    goto code_r0x000109eca038;
  case 0xd5:
    goto code_r0x000109ec9fc8;
  case 0xdb:
    goto code_r0x000109ec9fd0;
  case 0xde:
    bVar4 = *(byte *)((long)param_1 + 0xe);
    if (bVar4 < 2) {
      if ((bVar4 == 1 && 1 < *(byte *)((long)param_1 + 0xd)) &&
         ((*(uint *)((long)param_1 + 4) & 0xfc) < 0xc)) {
        return (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
      }
      goto LAB_109eca280;
    }
    uVar24 = *(byte *)((long)param_1 + 4) - 2;
    in_CY = 1 < uVar24;
    in_ZR = uVar24 == 2;
    puVar21 = (undefined8 *)(ulong)bVar4;
    goto code_r0x000109eca254;
  case 0xdf:
  case 0xe0:
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xed:
  case 0xee:
  case 0xef:
  case 0xf0:
  case 0xf1:
  case 0xf5:
  case 0xf6:
  case 0xf7:
  case 0xfb:
  case 0xfc:
  case 0xfd:
    goto code_r0x000109eca25c;
  case 0xe5:
    goto code_r0x000109eca20c;
  case 0xf2:
    return param_2;
  case 0xf3:
    goto FUN_109ec69f4;
  case 0xf4:
    if (!in_ZR) {
      return param_2;
    }
    param_1 = param_2;
    func_0x000109eca118(param_2);
    puVar20 = param_2;
  case 0xf8:
    puVar14 = param_2;
    param_2 = param_1;
code_r0x000109eca204:
    func_0x000109eca1d4(puVar14,param_2);
    puVar10 = puVar14;
code_r0x000109eca20c:
    param_1 = puVar20;
    FUN_109eca23c();
code_r0x000109eca214:
    param_3 = *(uint *)(puVar20 + 5);
    param_2 = param_1;
code_r0x000109eca21c:
    param_1 = puVar10;
FUN_109ec69f4:
    uStack_80 = (ulong)param_2 & 0xffffffff;
    uStack_78 = (ulong)param_3;
    ppuVar9 = &puStack_88;
    puStack_88 = param_1;
    FUN_109f65414(ppuVar9,0x18);
    ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
    if ((bRam00000001132ff008 & 1) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340ddb0)();
      *ppuVar17 = (undefined *)0x1132ff008;
      ppuVar17[1] = FUN_109f67048;
      _pthread_once(0x1132ff010,0x109f686dc);
      bRam00000001132ff008 = 1;
    }
    _pthread_mutex_lock(0x1132ff020);
    if (puRam0000000113834750 == (undefined8 *)0x0) {
      puVar21 = puRam0000000113834730;
      FUN_109f64c74(puRam0000000113834730,0x109ec7790,0x109eca4cc);
      puRam0000000113834750 = puVar21;
    }
    puVar18 = puRam0000000113834750;
    puVar20 = puRam0000000113834750;
    FUN_109f64fdc(puRam0000000113834750,ppuVar9,&puStack_88);
    puVar21 = puRam0000000113834738;
    if (puVar20 != (undefined8 *)0x0) goto LAB_109ec6c30;
    puVar20 = puRam0000000113834738;
    FUN_109f6650c(puRam0000000113834738,0x38);
    if (puVar20 != (undefined8 *)0x0) {
      puVar20[6] = 0;
      puVar20[3] = 0;
      puVar20[2] = 0;
      puVar20[5] = 0;
      puVar20[4] = 0;
      puVar20[1] = 0;
      *puVar20 = 0;
    }
    *(undefined2 *)((long)puVar20 + 4) = 0x1413;
    iVar22 = (int)param_2;
    *(int *)(puVar20 + 2) = iVar22;
    uVar2 = *(undefined4 *)((long)param_1 + 0x2c);
    *(uint *)(puVar20 + 5) = param_3;
    *(undefined4 *)((long)puVar20 + 0x2c) = uVar2;
    puVar20[6] = param_1;
    *(undefined4 *)puVar20 = *(undefined4 *)param_1;
    if ((*(byte *)((long)param_1 + 0xc) >> 1 & 1) == 0) {
      FUN_109eca058();
      if (iVar22 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
      puVar15 = &UNK_10f6157f7;
    }
    else {
      param_1 = (undefined8 *)(&UNK_10e05bf38 + param_1[3]);
      if (iVar22 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
      puVar15 = &UNK_10f6157f2;
    }
    puVar14 = puVar21;
    FUN_109f666b0(puVar21,puVar15);
    puVar10 = param_1;
    _strchr(param_1,0x5b);
    if (puVar10 != (undefined8 *)0x0) {
      lVar1 = (long)puVar14 + ((long)puVar10 - (long)param_1);
      puVar11 = puVar10;
      _strlen();
      lVar12 = lVar1;
      _strlen(lVar1);
      uVar19 = (ulong)(uint)((int)lVar12 - (int)puVar11);
      _memmove(lVar1,lVar1 + ((ulong)puVar11 & 0xffffffff),uVar19);
      _memcpy(lVar1 + uVar19,puVar10,(ulong)puVar11 & 0xffffffff);
    }
    puVar20[3] = puVar14;
    FUN_109f6650c(puVar21,0x18);
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
    }
    puVar21[2] = uStack_78;
    puVar21[1] = uStack_80;
    *puVar21 = puStack_88;
    func_0x000109f650c0(puVar18,ppuVar9,puVar21,puVar20);
    puVar20 = puVar18;
LAB_109ec6c30:
    ppuVar17 = &PTR___tlv_bootstrap_11340ddb0;
    puVar21 = (undefined8 *)puVar20[2];
    if ((bRam00000001132ff008 & 1) == 0) {
      (*(code *)PTR___tlv_bootstrap_11340ddb0)();
      *ppuVar17 = (undefined *)0x1132ff008;
      ppuVar17[1] = FUN_109f67048;
      _pthread_once(0x1132ff010,0x109f686dc);
      bRam00000001132ff008 = 1;
    }
    _pthread_mutex_unlock(0x1132ff020);
    return puVar21;
  case 0xf9:
    goto code_r0x000109eca194;
  case 0xfa:
    goto code_r0x000109eca21c;
  case 0xff:
    goto code_r0x000109eca214;
  }
  return puVar20;
code_r0x000109eca254:
  puVar18 = puVar21;
  if (in_CY && !in_ZR) {
LAB_109eca280:
    return (undefined8 *)(ulong)*(uint *)(param_1 + 2);
  }
code_r0x000109eca25c:
  return puVar18;
code_r0x000109eca068:
  if ((int)puVar18 == 3) {
    puVar18 = (undefined8 *)(ulong)*(byte *)((long)param_1 + 0xd);
code_r0x000109eca094:
    in_ZR = (int)puVar18 == 3;
code_r0x000109eca098:
    if (in_ZR) {
      return (undefined8 *)&UNK_10f6157de;
    }
  }
  else if (((int)puVar18 == 4) && (*(char *)((long)param_1 + 0xd) == '\x04')) {
code_r0x000109eca084:
    return (undefined8 *)&UNK_10f6157d9;
  }
LAB_109eca0a8:
  return (undefined8 *)param_1[3];
}



/* Entry: 109eca058; end: 109eca163;  */

undefined * FUN_109eca058(long param_1)

{
  if (*(char *)(param_1 + 4) == '\x02') {
    if (*(char *)(param_1 + 0xe) == '\x03') {
      if (*(char *)(param_1 + 0xd) == '\x03') {
        return &UNK_10f6157de;
      }
    }
    else if ((*(char *)(param_1 + 0xe) == '\x04') && (*(char *)(param_1 + 0xd) == '\x04')) {
      return &UNK_10f6157d9;
    }
  }
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 109eca164; end: 109eca23b;  */

undefined8 FUN_109eca164(long param_1)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 4) - 0x11 < 2) {
    return 0;
  }
  if ((*(byte *)(param_1 + 4) == 0x13) &&
     ((lVar1 = param_1, func_0x000109eca118(), *(char *)(lVar1 + 4) == '\x13' ||
      (func_0x000109eca118(), *(byte *)(param_1 + 4) - 0x11 < 2)))) {
    return 0;
  }
  return 1;
}



/* Entry: 109eca23c; end: 109eca28b;  */

uint FUN_109eca23c(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 < 2) {
    if ((bVar1 == 1 && 1 < *(byte *)(param_1 + 0xd)) && ((*(uint *)(param_1 + 4) & 0xfc) < 0xc)) {
      return (uint)*(byte *)(param_1 + 0xd);
    }
  }
  else if (*(byte *)(param_1 + 4) - 2 < 3) {
    return (uint)bVar1;
  }
  return *(uint *)(param_1 + 0x10);
}



/* Entry: 109eca28c; end: 109eca3d7;  */

/* WARNING: Possible PIC construction at 0x000109ec6d10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109ec6d14) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d60) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6d9c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dcc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6de0) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e88) */
/* WARNING: Removing unreachable block (ram,0x000109ec6dec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6e98) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eac) */
/* WARNING: Removing unreachable block (ram,0x000109ec6eec) */
/* WARNING: Removing unreachable block (ram,0x000109ec6efc) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f10) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f5c) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f64) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f84) */
/* WARNING: Removing unreachable block (ram,0x000109ec6f94) */
/* WARNING: Removing unreachable block (ram,0x000109ec6fc8) */

undefined4 * FUN_109eca28c(undefined4 *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined8 unaff_x19;
  undefined4 *puVar20;
  long unaff_x20;
  ulong unaff_x21;
  int iVar21;
  undefined8 unaff_x22;
  ulong uVar22;
  ulong unaff_x23;
  uint uVar23;
  ulong unaff_x24;
  ulong unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined4 *puStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar5 = param_1[1];
  if ((uVar5 & 0xff) != 0x13) {
    bVar2 = *(byte *)((long)param_1 + 0xd);
    uVar19 = (ulong)bVar2;
    if (bVar2 < 2) {
      if ((uVar5 & 0xf0) != 0 || bVar2 != 1) {
        return param_1;
      }
    }
    else if (0xb < (uVar5 & 0xfc) || *(char *)((long)param_1 + 0xe) != '\x01') {
      return param_1;
    }
    uVar23 = uVar5 & 0xff;
    if (uVar23 == 0) {
      uVar16 = (ulong)*(byte *)((long)param_1 + 0xe);
      lVar14 = 7;
      uVar3 = (ulong)(uint)param_1[10];
      uVar4 = (ulong)(uVar5 >> 0x18 & 1);
    }
    else if (uVar23 == 1) {
      uVar16 = (ulong)*(byte *)((long)param_1 + 0xe);
      lVar14 = 8;
      uVar3 = (ulong)(uint)param_1[10];
      uVar4 = (ulong)(uVar5 >> 0x18 & 1);
    }
    else {
      if (uVar23 != 2) {
        return param_1;
      }
      uVar16 = (ulong)*(byte *)((long)param_1 + 0xe);
      lVar14 = 3;
      uVar3 = (ulong)(uint)param_1[10];
      uVar4 = (ulong)(uVar5 >> 0x18 & 1);
    }
    do {
      uVar17 = uVar4;
      uVar22 = uVar3;
      *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
      *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
      *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
      *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
      *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
      *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
      *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
      *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
      *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
      *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
      *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
      unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
      *(undefined8 *)((long)register0x00000008 + -0x70) =
           *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar5 = (uint)lVar14;
      if (uVar5 == 0x14) {
        puVar20 = (undefined4 *)&DAT_10e05d768;
        lVar14 = unaff_x20;
        uVar16 = unaff_x21;
        uVar22 = unaff_x23;
        uVar19 = unaff_x24;
LAB_109ec6fd4:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)register0x00000008 + -0x70)
           ) {
          ___stack_chk_fail();
          *(ulong *)((long)register0x00000008 + -0x180) = uVar19;
          *(ulong *)((long)register0x00000008 + -0x178) = uVar22;
          *(undefined4 **)((long)register0x00000008 + -0x170) = puVar20;
          *(ulong *)((long)register0x00000008 + -0x168) = uVar16;
          *(long *)((long)register0x00000008 + -0x160) = lVar14;
          *(undefined8 *)((long)register0x00000008 + -0x158) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x150) = unaff_x29;
          *(code **)((long)register0x00000008 + -0x148) = FUN_109ec72ac;
          ppuVar18 = &PTR___tlv_bootstrap_11340ddb0;
          if ((bRam00000001132ff008 & 1) == 0) {
            ppuVar11 = ppuVar18;
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar11 = (undefined *)0x1132ff008;
            ppuVar11[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          _pthread_mutex_lock(0x1132ff020);
          if (iRam0000000113834740 == 0) {
            puVar12 = (undefined8 *)0x30;
            _malloc();
            puVar7 = puVar12;
            if (puVar12 != (undefined8 *)0x0) {
              puVar12[4] = 0;
              puVar7 = puVar12 + 6;
              puVar12[1] = 0;
              *puVar12 = 0;
              puVar12[3] = 0;
              puVar12[2] = 0;
            }
            *(undefined4 *)((long)register0x00000008 + -0x184) = 0;
            puRam0000000113834730 = puVar7;
            FUN_109f6658c();
            puRam0000000113834738 = puVar7;
          }
          iRam0000000113834740 = iRam0000000113834740 + 1;
          if ((bRam00000001132ff008 & 1) == 0) {
            (*(code *)PTR___tlv_bootstrap_11340ddb0)();
            *ppuVar18 = (undefined *)0x1132ff008;
            ppuVar18[1] = FUN_109f67048;
            _pthread_once(0x1132ff010,0x109f686dc);
            bRam00000001132ff008 = 1;
          }
          puVar20 = (undefined4 *)0x1132ff020;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__pthread_mutex_unlock_11034c918)(0x1132ff020);
          return puVar20;
        }
        return puVar20;
      }
      if ((int)uVar22 == 0) {
        uVar23 = (uint)bVar2;
        if ((int)uVar16 == 1) {
          if (uVar5 < 0xc) {
            switch((ulong)(byte)(&UNK_10e06c2d0)[lVar14] * 4 + 0x109ec6e24) {
            case 0x109ec6e24:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66da8;
              break;
            case 0x109ec703c:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66de0;
              break;
            case 0x109ec7054:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66d38;
              break;
            case 0x109ec706c:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66e50;
              break;
            case 0x109ec7084:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66cc8;
              break;
            case 0x109ec709c:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66d00;
              break;
            case 0x109ec70b4:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66ec0;
              break;
            case 0x109ec70cc:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66d70;
              break;
            case 0x109ec70e4:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66f30;
              break;
            case 0x109ec70fc:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66ef8;
              break;
            case 0x109ec7114:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66e18;
              break;
            case 0x109ec712c:
              if (uVar23 == 8) {
                uVar19 = 6;
              }
              else if (uVar23 == 0x10) {
                uVar19 = 7;
              }
              else if (uVar23 - 8 < 0xfffffff9) goto LAB_109ec7288;
              ppuVar18 = &PTR_DAT_110b66e88;
            }
            puVar20 = (undefined4 *)ppuVar18[uVar19 - 1];
          }
          else {
LAB_109ec7288:
            puVar20 = (undefined4 *)&UNK_10e05d730;
          }
        }
        else {
          puVar20 = (undefined4 *)&UNK_10e05d730;
          if ((uVar5 - 5 < 0xfffffffd) || (uVar23 == 1)) goto LAB_109ec6fd4;
          uVar23 = ((int)uVar16 * 3 + uVar23) - 8;
          if (uVar5 == 2) {
            if (8 < uVar23) goto LAB_109ec6fd4;
            ppuVar18 = &PTR_DAT_110b670d8;
          }
          else if (uVar5 == 3) {
            if (8 < uVar23) goto LAB_109ec6fd4;
            ppuVar18 = &PTR_DAT_110b67120;
          }
          else {
            if (8 < uVar23) goto LAB_109ec6fd4;
            ppuVar18 = &PTR_DAT_110b67090;
          }
          puVar20 = (undefined4 *)ppuVar18[uVar23];
        }
        goto LAB_109ec6fd4;
      }
      unaff_x30 = 0x109ec6d14;
      register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x140);
      uVar3 = 0;
      uVar4 = 0;
      unaff_x20 = lVar14;
      unaff_x21 = uVar16;
      unaff_x22 = 0;
      unaff_x23 = uVar22;
      unaff_x24 = uVar19;
      unaff_x25 = uVar17;
    } while( true );
  }
  puVar20 = param_1;
  func_0x000109eca118();
  FUN_109eca28c();
  puVar13 = param_1;
  FUN_109eca23c();
  uVar5 = param_1[10];
  uStack_68 = (ulong)uVar5;
  uStack_70 = (ulong)puVar13 & 0xffffffff;
  ppuVar6 = &puStack_78;
  puStack_78 = puVar20;
  FUN_109f65414(ppuVar6,0x18);
  ppuVar18 = &PTR___tlv_bootstrap_11340ddb0;
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar18 = (undefined *)0x1132ff008;
    ppuVar18[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_lock(0x1132ff020);
  if (puRam0000000113834750 == (undefined8 *)0x0) {
    puVar7 = puRam0000000113834730;
    FUN_109f64c74(puRam0000000113834730,0x109ec7790,0x109eca4cc);
    puRam0000000113834750 = puVar7;
  }
  puVar12 = puRam0000000113834750;
  puVar8 = puRam0000000113834750;
  FUN_109f64fdc(puRam0000000113834750,ppuVar6,&puStack_78);
  puVar7 = puRam0000000113834738;
  if (puVar8 != (undefined8 *)0x0) goto LAB_109ec6c30;
  puVar8 = puRam0000000113834738;
  FUN_109f6650c(puRam0000000113834738,0x38);
  if (puVar8 != (undefined8 *)0x0) {
    puVar8[6] = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[1] = 0;
    *puVar8 = 0;
  }
  *(undefined2 *)((long)puVar8 + 4) = 0x1413;
  iVar21 = (int)puVar13;
  *(int *)(puVar8 + 2) = iVar21;
  uVar1 = puVar20[0xb];
  *(uint *)(puVar8 + 5) = uVar5;
  *(undefined4 *)((long)puVar8 + 0x2c) = uVar1;
  puVar8[6] = puVar20;
  *(undefined4 *)puVar8 = *puVar20;
  if ((*(byte *)(puVar20 + 3) >> 1 & 1) == 0) {
    func_0x000109eca058();
    if (iVar21 == 0) goto LAB_109ec6b68;
LAB_109ec6b44:
    puVar15 = &UNK_10f6157f7;
  }
  else {
    puVar20 = (undefined4 *)(&UNK_10e05bf38 + *(long *)(puVar20 + 6));
    if (iVar21 != 0) goto LAB_109ec6b44;
LAB_109ec6b68:
    puVar15 = &UNK_10f6157f2;
  }
  puVar9 = puVar7;
  FUN_109f666b0(puVar7,puVar15);
  puVar13 = puVar20;
  _strchr(puVar20,0x5b);
  if (puVar13 != (undefined4 *)0x0) {
    lVar14 = (long)puVar9 + ((long)puVar13 - (long)puVar20);
    puVar20 = puVar13;
    _strlen();
    lVar10 = lVar14;
    _strlen(lVar14);
    uVar19 = (ulong)(uint)((int)lVar10 - (int)puVar20);
    _memmove(lVar14,lVar14 + ((ulong)puVar20 & 0xffffffff),uVar19);
    _memcpy(lVar14 + uVar19,puVar13,(ulong)puVar20 & 0xffffffff);
  }
  puVar8[3] = puVar9;
  FUN_109f6650c(puVar7,0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
  }
  puVar7[2] = uStack_68;
  puVar7[1] = uStack_70;
  *puVar7 = puStack_78;
  func_0x000109f650c0(puVar12,ppuVar6,puVar7,puVar8);
  puVar8 = puVar12;
LAB_109ec6c30:
  ppuVar18 = &PTR___tlv_bootstrap_11340ddb0;
  puVar20 = (undefined4 *)puVar8[2];
  if ((bRam00000001132ff008 & 1) == 0) {
    (*(code *)PTR___tlv_bootstrap_11340ddb0)();
    *ppuVar18 = (undefined *)0x1132ff008;
    ppuVar18[1] = FUN_109f67048;
    _pthread_once(0x1132ff010,0x109f686dc);
    bRam00000001132ff008 = 1;
  }
  _pthread_mutex_unlock(0x1132ff020);
  return puVar20;
}



/* Entry: 109eca3d8; end: 109eca49b;  */

int FUN_109eca3d8(ulong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar5 = 1;
  while (bVar1 = *(byte *)(param_1 + 4), bVar1 == 0x13) {
    uVar7 = param_1;
    FUN_109eca23c(param_1);
    func_0x000109eca118();
    iVar5 = (int)uVar7 * iVar5;
  }
  if (bVar1 == 0x11) {
    uVar7 = param_1;
    FUN_109eca23c();
    if ((int)uVar7 == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = 0;
      uVar4 = 0;
      uVar7 = 0;
      do {
        uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + lVar6);
        FUN_109eca3d8(uVar2,param_2);
        uVar4 = (int)uVar2 + uVar4;
        uVar7 = uVar7 + 1;
        uVar3 = param_1;
        FUN_109eca23c();
        lVar6 = lVar6 + 0x30;
      } while (uVar7 < (uVar3 & 0xffffffff));
    }
  }
  else {
    uVar4 = (uint)((uint)bVar1 == (uint)param_2);
  }
  return uVar4 * iVar5;
}



/* Entry: 109eca49c; end: 109eca627;  */

/* WARNING: Removing unreachable block (ram,0x000109f65490) */
/* WARNING: Removing unreachable block (ram,0x000109f654b0) */
/* WARNING: Removing unreachable block (ram,0x000109f654b8) */
/* WARNING: Removing unreachable block (ram,0x000109f654d8) */
/* WARNING: Removing unreachable block (ram,0x000109f654e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_109eca49c(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  uint uVar4;
  int iVar5;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar7 [16];
  undefined1 auVar12 [16];
  undefined8 *puVar3;
  undefined1 auVar6 [12];
  undefined1 auVar8 [16];
  
  puVar2 = param_1;
  auVar7 = _UNK_10e06d340;
  do {
    puVar3 = puVar2 + 2;
    uVar4 = auVar7._0_4_ + (int)*puVar2 * -0x7a143589;
    uVar9 = auVar7._4_4_ + (int)((ulong)*puVar2 >> 0x20) * -0x7a143589;
    uVar10 = auVar7._8_4_ + (int)puVar2[1] * -0x7a143589;
    uVar11 = auVar7._12_4_ + (int)((ulong)puVar2[1] >> 0x20) * -0x7a143589;
    auVar7._0_4_ = (uVar4 * 0x2000 + (uVar4 >> 0x13)) * -0x61c8864f;
    auVar7._4_4_ = (uVar9 * 0x2000 + (uVar9 >> 0x13)) * -0x61c8864f;
    auVar7._8_4_ = (uVar10 * 0x2000 + (uVar10 >> 0x13)) * -0x61c8864f;
    auVar7._12_4_ = (uVar11 * 0x2000 + (uVar11 >> 0x13)) * -0x61c8864f;
    puVar2 = puVar3;
  } while (puVar3 < (undefined8 *)((long)param_1 + 0x11U));
  auVar12 = NEON_ushl(auVar7,_UNK_10e00f860,4);
  auVar1._12_4_ = 0x12;
  auVar1._0_12_ = _UNK_10e00f870;
  auVar7 = NEON_ushl(auVar7,auVar1,4);
  iVar5 = CONCAT13(auVar7[3] | auVar12[3],
                   CONCAT12(auVar7[2] | auVar12[2],
                            CONCAT11(auVar7[1] | auVar12[1],auVar7[0] | auVar12[0])));
  auVar6._0_8_ = CONCAT17(auVar7[7] | auVar12[7],
                          CONCAT16(auVar7[6] | auVar12[6],
                                   CONCAT15(auVar7[5] | auVar12[5],
                                            CONCAT14(auVar7[4] | auVar12[4],iVar5))));
  auVar6[8] = auVar7[8] | auVar12[8];
  auVar6[9] = auVar7[9] | auVar12[9];
  auVar6[10] = auVar7[10] | auVar12[10];
  auVar6[0xb] = auVar7[0xb] | auVar12[0xb];
  auVar8[0xc] = auVar7[0xc] | auVar12[0xc];
  auVar8._0_12_ = auVar6;
  auVar8[0xd] = auVar7[0xd] | auVar12[0xd];
  auVar8[0xe] = auVar7[0xe] | auVar12[0xe];
  auVar8[0xf] = auVar7[0xf] | auVar12[0xf];
  uVar4 = iVar5 + (int)((ulong)auVar6._0_8_ >> 0x20) + auVar6._8_4_ + auVar8._12_4_ + 0x20;
  uVar4 = (uVar4 ^ uVar4 >> 0xf) * -0x7a143589;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51c3;
  return uVar4 ^ uVar4 >> 0x10;
}



/* Entry: 109eca628; end: 109eca703;  */

undefined8 * FUN_109eca628(undefined8 *param_1,undefined1 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  
  FUN_109f658b0(param_1,0x1d8);
  if (param_1 != (undefined8 *)0x0) {
    param_1[0x3a] = 0;
    param_1[0x37] = 0;
    param_1[0x36] = 0;
    param_1[0x39] = 0;
    param_1[0x38] = 0;
    param_1[0x33] = 0;
    param_1[0x32] = 0;
    param_1[0x35] = 0;
    param_1[0x34] = 0;
    param_1[0x2f] = 0;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[0x2b] = 0;
    param_1[0x2a] = 0;
    param_1[0x2d] = 0;
    param_1[0x2c] = 0;
    param_1[0x27] = 0;
    param_1[0x26] = 0;
    param_1[0x29] = 0;
    param_1[0x28] = 0;
    param_1[0x23] = 0;
    param_1[0x22] = 0;
    param_1[0x25] = 0;
    param_1[0x24] = 0;
    param_1[0x1f] = 0;
    param_1[0x1e] = 0;
    param_1[0x21] = 0;
    param_1[0x20] = 0;
    param_1[0x1b] = 0;
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1c] = 0;
    param_1[0x17] = 0;
    param_1[0x16] = 0;
    param_1[0x19] = 0;
    param_1[0x18] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
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
  }
  puVar1 = param_1;
  FUN_109f65f98();
  *param_1 = puVar1;
  param_1[3] = 0;
  param_1[1] = param_1 + 3;
  param_1[2] = 0;
  param_1[4] = param_1 + 1;
  param_1[5] = param_3;
  if (param_4 == 0) {
    *(undefined1 *)((long)param_1 + 0x61) = param_2;
  }
  else {
    _memcpy(param_1 + 6,param_4,0x148);
  }
  param_1[0x2f] = param_1 + 0x31;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_1 + 0x2f;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x33] = 0;
  return param_1;
}



/* Entry: 109eca704; end: 109eca7c7;  */

void FUN_109eca704(long param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x1fffff;
  if (uVar1 < 0x100) {
    if ((0x3f < uVar1 - 1 || (1L << ((ulong)(uVar1 - 1) & 0x3f) & 0x800000008000808bU) == 0) &&
       (uVar1 != 0x80)) {
      return;
    }
    goto LAB_109eca760;
  }
  if (uVar1 < 0x1000) {
    if (uVar1 < 0x400) {
      if ((uVar1 == 0x100) || (uVar1 == 0x200)) goto LAB_109eca760;
    }
    else if ((uVar1 == 0x400) || (uVar1 == 0x800)) goto LAB_109eca760;
  }
  else if (uVar1 < 0x20000) {
    if ((uVar1 == 0x1000) || (uVar1 == 0x2000)) goto LAB_109eca760;
  }
  else if ((uVar1 == 0x20000) || ((uVar1 == 0x100000 || (uVar1 == 0x80000)))) {
LAB_109eca760:
    puVar2 = *(undefined8 **)(param_1 + 0x20);
    *param_2 = param_1 + 0x18;
    param_2[1] = (long)puVar2;
    *puVar2 = param_2;
    *(long **)(param_1 + 0x20) = param_2;
    return;
  }
  return;
}



/* Entry: 109eca7c8; end: 109eca8bf;  */

undefined8 * FUN_109eca7c8(undefined8 *param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  puVar2 = param_1;
  FUN_109f658b0(param_1,0x98);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[0x12] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
  }
  puVar3 = puVar2;
  FUN_109f65c2c(puVar2,param_4);
  puVar2[2] = param_3;
  puVar2[3] = puVar3;
  uVar4 = puVar2[4];
  uVar5 = uVar4 & 0xffffffffffe00000 | (ulong)(param_2 & 0x1fffff);
  puVar2[4] = uVar5;
  *(ulong *)((long)puVar2 + 0x2c) = *(ulong *)((long)puVar2 + 0x2c) & 0xffffffffffff9fff;
  if (param_2 == 2) {
LAB_109eca87c:
    uVar5 = uVar5 | 0x200000;
  }
  else {
    if (param_2 != 8) {
      if (param_2 != 4) goto LAB_109eca884;
      uVar1 = uVar5;
      if (*(char *)((long)param_1 + 0x61) != '\x0e') {
        uVar1 = uVar4 & 0xfffffff1ffe00000 | 0x200000004;
      }
      if (*(char *)((long)param_1 + 0x61) != '\0') {
        uVar5 = uVar1;
      }
      goto LAB_109eca87c;
    }
    if (*(char *)((long)param_1 + 0x61) == '\x04') goto LAB_109eca884;
    uVar5 = uVar4 & 0xfffffff1ffe00000 | 0x200000008;
  }
  puVar2[4] = uVar5;
LAB_109eca884:
  FUN_109eca704(param_1,puVar2);
  return puVar2;
}



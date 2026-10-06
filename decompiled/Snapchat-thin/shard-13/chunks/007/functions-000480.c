/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10ab61860; end: 10ab61893;  */

long FUN_10ab61860(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10ab61894(param_1);
  }
  return param_1;
}



/* Entry: 10ab61894; end: 10ab61a5b;  */

void FUN_10ab61894(long *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar3 = 0;
    lVar4 = *param_1 - (ulong)uRam00000001133006e0;
    puVar1 = (ushort *)(lVar4 + 0x1c9);
    if ((((*puVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x1a0) != 0 || ((*puVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x1c0) != 0)))) || ((*(ushort *)(lVar4 + 0x110) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar3 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bd9ed0;
        uVar3 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar3,&ppuStack_48);
        uVar2 = *(ushort *)(lVar4 + 0x110);
        if (((uVar2 & 0x7f) == 0) && ((*puVar1 & 0x7f) == 0)) {
          if ((uVar2 >> 8 & 1) == 0) {
            uVar3 = lVar4 + 0xe0;
            FUN_10a1bfe94(uVar3,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar3 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar2 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x120) = uStack_a0;
            *(ushort *)(lVar4 + 0x110) = uVar2 | 0x80;
          }
          uVar3 = lVar4 + 0x120;
          FUN_10a1bd398(uVar3,&uStack_a0);
        }
        if (((*puVar1 >> 8 & 1) != 0) && (FUN_10a1bd5e0(), uVar3 != 0)) {
          FUN_10a1bd648();
        }
        FUN_10a1c054c(lVar4 + 0x170,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*puVar1 >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0x180) = *(long *)(lVar4 + 0x180) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x1d0);
      ppuVar5 = *(undefined ***)(lVar4 + 0x118);
      if ((ppuVar6 != &PTR_DAT_110bd9ed0 || ppuVar5 != &PTR_DAT_110bd9ed0) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bd9ed0) {
          FUN_10a1bd648(param_1,lVar4 + 0x170,&PTR_DAT_110bd9ed0);
          *(undefined ***)(lVar4 + 0x1d0) = &PTR_DAT_110bd9ed0;
        }
        if (ppuVar5 != &PTR_DAT_110bd9ed0) {
          FUN_10a1bd7d8(param_1,lVar4 + 0xe0,&PTR_DAT_110bd9ed0);
          *(undefined ***)(lVar4 + 0x118) = &PTR_DAT_110bd9ed0;
        }
      }
    }
  }
  return;
}



/* Entry: 10ab61a5c; end: 10ab61b3f;  */

long * FUN_10ab61a5c(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    plVar3 = param_1;
  }
  else {
    lVar6 = (long)puVar2 - *param_1;
    uVar1 = (lVar6 >> 4) + 1;
    if (uVar1 >> 0x3c != 0) {
      FUN_10a4afcc4();
      if ((*(byte *)(param_1 + 1) & 1) == 0) {
        FUN_10ab61b74(param_1);
      }
      return param_1;
    }
    uVar4 = param_1[2] - *param_1;
    uVar5 = (long)uVar4 >> 3;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7fffffffffffffef < uVar4) {
      uVar5 = 0xfffffffffffffff;
    }
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10a4afcd8();
    puVar2 = (undefined8 *)((long)plVar3 + lVar6);
    uVar8 = *param_2;
    puVar7 = puVar2 + 2;
    puVar2[1] = param_2[1];
    *puVar2 = uVar8;
    *param_2 = 0;
    param_2[1] = 0;
    lVar6 = (long)puVar2 - (param_1[1] - *param_1);
    _memcpy(lVar6);
    lStack_58 = *param_1;
    *param_1 = lVar6;
    param_1[1] = (long)puVar7;
    lStack_40 = param_1[2];
    param_1[2] = (long)(plVar3 + uVar5 * 2);
    plVar3 = &lStack_58;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x00010a4afd0c(plVar3);
  }
  param_1[1] = (long)puVar7;
  return plVar3;
}



/* Entry: 10ab61b40; end: 10ab61b73;  */

long FUN_10ab61b40(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_10ab61b74(param_1);
  }
  return param_1;
}



/* Entry: 10ab61b74; end: 10ab61f17;  */

void FUN_10ab61b74(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined **ppuStack_48;
  
  if ((*(byte *)(param_1 + 1) & 1) == 0) {
    uVar2 = 0;
    lVar4 = *param_1 - (ulong)uRam00000001133006e0;
    uVar1 = *(ushort *)(lVar4 + 0x1c9);
    if ((((uVar1 >> 8 & 1) == 0) &&
        (((*(long *)(lVar4 + 0x1a0) != 0 || ((uVar1 >> 9 & 1) != 0)) ||
         (*(long *)(lVar4 + 0x1c0) != 0)))) || ((*(ushort *)(lVar4 + 0x110) >> 8 & 1) == 0)) {
      func_0x00010a1bd170();
      if ((uVar2 & 1) == 0) {
        *(undefined1 *)(param_1 + 1) = 1;
        uStack_68 = 0;
        uStack_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        ppuStack_48 = &PTR_DAT_110bd9ed0;
        uVar2 = (ulong)&uStack_a0 | 8;
        FUN_10a0dad0c(uVar2,&ppuStack_48);
        lVar4 = *param_1 - (ulong)uRam00000001133006e0;
        uVar1 = *(ushort *)(lVar4 + 0x110);
        if (((uVar1 & 0x7f) == 0) && ((*(ushort *)(lVar4 + 0x1c9) & 0x7f) == 0)) {
          if ((uVar1 >> 8 & 1) == 0) {
            uVar2 = lVar4 + 0xe0;
            FUN_10a1bfe94(uVar2,&uStack_a0);
          }
          else {
            FUN_10a1bd5e0();
            if (uVar2 != 0) {
              FUN_10a1bd7d8();
            }
          }
        }
        else {
          if ((uVar1 >> 7 & 1) == 0) {
            *(undefined8 *)(lVar4 + 0x120) = uStack_a0;
            *(ushort *)(lVar4 + 0x110) = uVar1 | 0x80;
          }
          uVar2 = lVar4 + 0x120;
          FUN_10a1bd398(uVar2,&uStack_a0);
        }
        lVar4 = *param_1;
        uVar3 = (ulong)uRam00000001133006e0;
        if ((*(ushort *)((lVar4 - uVar3) + 0x1c9) >> 8 & 1) != 0) {
          FUN_10a1bd5e0();
          lVar4 = *param_1;
          uVar3 = (ulong)uRam00000001133006e0;
          if (uVar2 != 0) {
            FUN_10a1bd648();
            lVar4 = *param_1;
            uVar3 = (ulong)uRam00000001133006e0;
          }
        }
        FUN_10a1c054c((lVar4 - uVar3) + 0x170,&uStack_a0);
      }
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      if ((*(ushort *)(lVar4 + 0x1c9) >> 8 & 1) == 0) {
        *(long *)(lVar4 + 0x180) = *(long *)(lVar4 + 0x180) + 1;
      }
      ppuVar6 = *(undefined ***)(lVar4 + 0x1d0);
      ppuVar5 = *(undefined ***)(lVar4 + 0x118);
      if ((ppuVar6 != &PTR_DAT_110bd9ed0 || ppuVar5 != &PTR_DAT_110bd9ed0) &&
         (FUN_10a1bd5e0(), param_1 != (long *)0x0)) {
        if (ppuVar6 != &PTR_DAT_110bd9ed0) {
          FUN_10a1bd648(param_1,lVar4 + 0x170,&PTR_DAT_110bd9ed0);
          *(undefined ***)(lVar4 + 0x1d0) = &PTR_DAT_110bd9ed0;
        }
        if (ppuVar5 != &PTR_DAT_110bd9ed0) {
          FUN_10a1bd7d8(param_1,lVar4 + 0xe0,&PTR_DAT_110bd9ed0);
          *(undefined ***)(lVar4 + 0x118) = &PTR_DAT_110bd9ed0;
        }
      }
    }
  }
  return;
}



/* Entry: 10ab61f18; end: 10ab620a3;  */

undefined * FUN_10ab61f18(ulong param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = param_1 / 0xc;
  if (param_1 % 0xc != 0) {
    uVar4 = uVar4 + 1;
  }
  lVar7 = *param_2;
  lVar5 = param_2[1];
  lVar8 = lVar5 - lVar7;
  bVar2 = (ulong)((lVar8 >> 2) * -0x5555555555555555) <= uVar4;
  uVar1 = uVar4 + (lVar8 >> 2) * 0x5555555555555555;
  if (bVar2 && uVar1 != 0) {
    if ((ulong)((param_2[2] - lVar5 >> 2) * -0x5555555555555555) < uVar1) {
      if (uVar4 < 0x1555555555555556) {
        lVar5 = param_2[2] - lVar7 >> 2;
        uVar6 = lVar5 * 0x5555555555555556;
        if (uVar6 < uVar4 || uVar6 - uVar4 == 0) {
          uVar6 = uVar4;
        }
        if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
          uVar6 = 0x1555555555555555;
        }
        if (uVar6 < 0x1555555555555556) {
          lVar5 = uVar6 * 0xc;
          __Znwm();
          lVar9 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
          _bzero(lVar5 + lVar8,lVar9);
          _memcpy(lVar5,lVar7,lVar8);
          *param_2 = lVar5;
          param_2[1] = lVar5 + lVar8 + lVar9;
          param_2[2] = lVar5 + uVar6 * 0xc;
          if (lVar7 != 0) {
            __ZdlPv(lVar7);
          }
          goto LAB_10ab62080;
        }
      }
      else {
        FUN_10ab620a4();
      }
      func_0x000109ffded8();
      puVar3 = &DAT_10f62a4d8;
      FUN_109ffde64();
      return puVar3;
    }
    lVar7 = ((uVar1 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar5,lVar7);
    lVar5 = lVar5 + lVar7;
  }
  else {
    if (bVar2) goto LAB_10ab62080;
    lVar5 = lVar7 + uVar4 * 0xc;
  }
  param_2[1] = lVar5;
LAB_10ab62080:
  return (undefined *)*param_2;
}



/* Entry: 10ab620a4; end: 10ab620b7;  */

uint FUN_10ab620a4(void)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar3 = (ushort *)&DAT_10f62a4d8;
  FUN_109ffde64();
  uVar1 = *puVar3;
  uVar2 = (uint)(uVar1 >> 0xf);
  uVar5 = uVar1 >> 10 & 0x1f;
  uVar4 = uVar1 & 0x3ff;
  if (uVar5 == 0x1f) {
    uVar4 = uVar2 << 0x1f | (uint)uVar1 << 0xd;
    if ((uVar1 & 0x3ff) == 0) {
      uVar4 = uVar2 << 0x1f;
    }
    uVar4 = uVar4 | 0x7f800000;
  }
  else {
    if ((uVar1 >> 10 & 0x1f) == 0) {
      if ((uVar1 & 0x3ff) == 0) {
        return uVar2 << 0x1f;
      }
      uVar5 = 0x16 - (uint)LZCOUNT(uVar4);
      uVar4 = uVar4 << (ulong)(10 - ((uint)LZCOUNT(uVar4) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar4 = uVar5 * 0x800000 + 0x38000000 | uVar2 << 0x1f | uVar4 << 0xd;
  }
  return uVar4;
}



/* Entry: 10ab620b8; end: 10ab6223f;  */

uint FUN_10ab620b8(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *param_1;
  uVar2 = (uint)(uVar1 >> 0xf);
  uVar4 = uVar1 >> 10 & 0x1f;
  uVar3 = uVar1 & 0x3ff;
  if (uVar4 == 0x1f) {
    uVar3 = uVar2 << 0x1f | (uint)uVar1 << 0xd;
    if ((uVar1 & 0x3ff) == 0) {
      uVar3 = uVar2 << 0x1f;
    }
    uVar3 = uVar3 | 0x7f800000;
  }
  else {
    if ((uVar1 >> 10 & 0x1f) == 0) {
      if ((uVar1 & 0x3ff) == 0) {
        return uVar2 << 0x1f;
      }
      uVar4 = 0x16 - (uint)LZCOUNT(uVar3);
      uVar3 = uVar3 << (ulong)(10 - ((uint)LZCOUNT(uVar3) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar3 = uVar4 * 0x800000 + 0x38000000 | uVar2 << 0x1f | uVar3 << 0xd;
  }
  return uVar3;
}



/* Entry: 10ab62240; end: 10ab6225f;  */

void FUN_10ab62240(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c4b3c8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab62260; end: 10ab6226f;  */

void FUN_10ab62260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010ab62268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10ab62270; end: 10ab622e7;  */

undefined8 * FUN_10ab62270(undefined8 *param_1)

{
  *param_1 = &PTR____cxa_pure_virtual_110c42b70;
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10ab622e8; end: 10ab6257f;  */

ulong FUN_10ab622e8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *param_1;
  uVar9 = uVar2 >> 0x10 & 0x8000;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar10 = uVar2 & 0x7fffff;
  uVar3 = uVar4 - 0x70;
  if (uVar4 < 0x70 || uVar3 == 0) {
    uVar10 = (uVar10 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f);
    uVar10 = uVar9 | (uVar10 & 0x1000) * 2 + uVar10 >> 0xd;
    if (uVar4 < 0x66) {
      uVar10 = uVar9;
    }
    uVar7 = (ulong)uVar10;
  }
  else if (uVar3 == 0x8f) {
    uVar2 = (uint)(uVar10 < 0x2000) | uVar10 >> 0xd | uVar9;
    if (uVar10 == 0) {
      uVar2 = uVar9;
    }
    uVar7 = (ulong)(uVar2 | 0x7c00);
  }
  else {
    uVar5 = uVar10 + 0x2000;
    uVar1 = uVar3;
    if (0x7fdfff < uVar10) {
      uVar5 = 0;
      uVar1 = uVar4 - 0x6f;
    }
    if ((uVar2 & 0x1000) != 0) {
      uVar10 = uVar5;
      uVar3 = uVar1;
    }
    if (uVar3 < 0x1f) {
      uVar7 = (ulong)(uVar3 << 10 | uVar10 >> 0xd | uVar9);
    }
    else {
      iVar8 = 10;
      do {
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      uVar7 = (ulong)(uVar9 | 0x7c00);
    }
  }
  uVar2 = param_1[1];
  uVar9 = uVar2 >> 0x10 & 0x8000;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar10 = uVar2 & 0x7fffff;
  uVar3 = uVar4 - 0x70;
  if (uVar4 < 0x70 || uVar3 == 0) {
    if (0x65 < uVar4) {
      uVar10 = (uVar10 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f);
      uVar9 = uVar9 | (uVar10 & 0x1000) * 2 + uVar10 >> 0xd;
    }
  }
  else {
    if (uVar3 == 0x8f) {
      if (uVar10 != 0) {
        uVar9 = (uint)(uVar10 < 0x2000) | uVar10 >> 0xd | uVar9;
      }
    }
    else {
      uVar5 = uVar10 + 0x2000;
      uVar1 = uVar3;
      if (0x7fdfff < uVar10) {
        uVar5 = 0;
        uVar1 = uVar4 - 0x6f;
      }
      if ((uVar2 & 0x1000) != 0) {
        uVar10 = uVar5;
        uVar3 = uVar1;
      }
      if (uVar3 < 0x1f) {
        uVar9 = uVar3 << 10 | uVar10 >> 0xd | uVar9;
        goto LAB_10ab62498;
      }
      iVar8 = 10;
      do {
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar9 = uVar9 | 0x7c00;
  }
LAB_10ab62498:
  uVar3 = param_1[2];
  uVar10 = uVar3 >> 0x10 & 0x8000;
  uVar5 = uVar3 >> 0x17 & 0xff;
  uVar2 = uVar3 & 0x7fffff;
  uVar4 = uVar5 - 0x70;
  if (uVar5 < 0x70 || uVar4 == 0) {
    if (0x65 < uVar5) {
      uVar2 = (uVar2 | 0x800000) >> (ulong)(0x71 - uVar5 & 0x1f);
      uVar10 = uVar10 | (uVar2 & 0x1000) * 2 + uVar2 >> 0xd;
    }
  }
  else {
    if (uVar4 == 0x8f) {
      if (uVar2 != 0) {
        uVar10 = (uint)(uVar2 < 0x2000) | uVar2 >> 0xd | uVar10 | 0x7c00;
        goto LAB_10ab6256c;
      }
    }
    else {
      uVar1 = uVar2 + 0x2000;
      uVar6 = uVar4;
      if (0x7fdfff < uVar2) {
        uVar1 = 0;
        uVar6 = uVar5 - 0x6f;
      }
      if ((uVar3 & 0x1000) != 0) {
        uVar2 = uVar1;
        uVar4 = uVar6;
      }
      if (uVar4 < 0x1f) {
        uVar10 = uVar4 << 10 | uVar2 >> 0xd | uVar10;
        goto LAB_10ab6256c;
      }
      iVar8 = 10;
      do {
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    uVar10 = uVar10 | 0x7c00;
  }
LAB_10ab6256c:
  return CONCAT44(uVar10,uVar9 << 0x10) | uVar7 & 0xffff;
}



/* Entry: 10ab62580; end: 10ab62677;  */

uint FUN_10ab62580(float *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar3 = 1.0;
  if (fVar4 <= 1.0) {
    fVar3 = fVar4;
  }
  fVar6 = 0.0;
  if (-1.0 <= fVar4) {
    fVar6 = (fVar3 * 0.5 + 0.5) * 32767.0;
  }
  fVar3 = 1.0;
  if (fVar5 <= 1.0) {
    fVar3 = fVar5;
  }
  fVar4 = 0.0;
  if (-1.0 <= fVar5) {
    fVar4 = (fVar3 * 0.5 + 0.5) * 32767.0;
  }
  uVar1 = 0x40000000;
  if (param_1[2] < 0.0) {
    uVar1 = 0;
  }
  uVar2 = 0x80000000;
  if (param_1[3] < 0.0) {
    uVar2 = 0;
  }
  return (int)fVar6 & 0x7fffU | ((int)fVar4 & 0x7fffU) << 0xf | uVar1 | uVar2;
}



/* Entry: 10ab62678; end: 10ab626af;  */

void FUN_10ab62678(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10ab62678(*param_1);
    FUN_10ab62678(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10ab626b0; end: 10ab62827;  */

ulong FUN_10ab626b0(undefined8 *param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = param_1[2];
  lVar3 = *(long *)*param_1 + (long)*(int *)param_1[1] * (long)param_2;
  _memcmp(lVar3,*(long *)*param_1 + (long)*(int *)param_1[1] * (long)param_3);
  if ((int)lVar3 < 0) {
    uVar4 = 1;
  }
  else {
    if ((int)lVar3 == 0) {
      lVar3 = *(long *)(lVar1 + 0x40);
      lVar1 = *(long *)(lVar1 + 0x48);
      if (lVar3 != lVar1) {
        iVar2 = *(int *)param_1[3];
        do {
          lVar6 = lVar3 + 0x48;
          uVar4 = **(long **)(lVar3 + 0x38) + (long)iVar2 * (long)param_2;
          _memcmp(uVar4,**(long **)(lVar3 + 0x38) + (long)iVar2 * (long)param_3,(long)iVar2);
          uVar5 = uVar4 >> 0x1f & 1;
          if ((int)uVar4 < 0) {
            return uVar5;
          }
          lVar3 = lVar6;
        } while ((int)uVar4 == 0 && lVar6 != lVar1);
        return uVar5;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 10ab62828; end: 10ab62b47;  */

void FUN_10ab62828(void)

{
  return;
}



/* Entry: 10ab62b48; end: 10ab62c3f;  */

float FUN_10ab62b48(float param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uStack_4;
  
  uVar4 = *param_4;
  uVar2 = (ushort)(uVar4 >> 0x10) & 0x8000;
  uVar6 = uVar4 >> 0x17 & 0xff;
  uVar3 = uVar4 & 0x7fffff;
  uVar5 = uVar6 - 0x70;
  if (uVar6 < 0x70 || uVar5 == 0) {
    uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar6 & 0x1f);
    uVar8 = uVar2 | (ushort)((uVar3 & 0x1000) * 2 + uVar3 >> 0xd);
    if (uVar6 < 0x66) {
      uVar8 = uVar2;
    }
  }
  else if (uVar5 == 0x8f) {
    uVar8 = (ushort)(uVar3 < 0x2000) | (ushort)(uVar3 >> 0xd) | uVar2;
    if (uVar3 == 0) {
      uVar8 = uVar2;
    }
    uVar8 = uVar8 | 0x7c00;
  }
  else {
    uVar1 = uVar3 + 0x2000;
    uVar7 = uVar5;
    if (0x7fdfff < uVar3) {
      uVar1 = 0;
      uVar7 = uVar6 - 0x6f;
    }
    if ((uVar4 & 0x1000) != 0) {
      uVar3 = uVar1;
      uVar5 = uVar7;
    }
    if (uVar5 < 0x1f) {
      uVar8 = (ushort)(uVar5 << 10) | (ushort)(uVar3 >> 0xd) | uVar2;
    }
    else {
      uStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = uStack_4 * uStack_4;
        iVar9 = iVar9 + -1;
        uStack_4 = param_1;
      } while (iVar9 != 0);
      uVar8 = uVar2 | 0x7c00;
    }
  }
  *(ushort *)(*(long *)(param_2 + 8) + *(long *)(param_2 + 0x18) * param_3) = uVar8;
  return param_1;
}



/* Entry: 10ab62c40; end: 10ab630e3;  */

uint FUN_10ab62c40(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0xf;
  uVar3 = param_1 >> 10 & 0x1f;
  uVar2 = param_1 & 0x3ff;
  if (uVar3 == 0x1f) {
    uVar3 = uVar1 << 0x1f | (param_1 & 0xffff) << 0xd;
    if (uVar2 == 0) {
      uVar3 = uVar1 << 0x1f;
    }
    uVar3 = uVar3 | 0x7f800000;
  }
  else {
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        return uVar1 << 0x1f;
      }
      uVar3 = 0x16 - (uint)LZCOUNT(uVar2);
      uVar2 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(uVar2) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar3 = uVar3 * 0x800000 + 0x38000000 | uVar1 << 0x1f | uVar2 << 0xd;
  }
  return uVar3;
}



/* Entry: 10ab630e4; end: 10ab632b7;  */

float FUN_10ab630e4(float param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fStack_8;
  float fStack_4;
  
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar7 = uVar2 >> 0x10 & 0x8000;
  uVar5 = uVar2 >> 0x17 & 0xff;
  uVar8 = uVar2 & 0x7fffff;
  uVar4 = uVar5 - 0x70;
  if (uVar5 < 0x70 || uVar4 == 0) {
    if (0x65 < uVar5) {
      uVar8 = (uVar8 | 0x800000) >> (ulong)(0x71 - uVar5 & 0x1f);
      uVar7 = uVar7 | (uVar8 & 0x1000) * 2 + uVar8 >> 0xd;
    }
  }
  else if (uVar4 == 0x8f) {
    uVar2 = (uint)(uVar8 < 0x2000) | uVar8 >> 0xd | uVar7;
    if (uVar8 == 0) {
      uVar2 = uVar7;
    }
    uVar7 = uVar2 | 0x7c00;
  }
  else {
    uVar1 = uVar8 + 0x2000;
    uVar6 = uVar4;
    if (0x7fdfff < uVar8) {
      uVar1 = 0;
      uVar6 = uVar5 - 0x6f;
    }
    if ((uVar2 & 0x1000) != 0) {
      uVar8 = uVar1;
      uVar4 = uVar6;
    }
    if (uVar4 < 0x1f) {
      uVar7 = uVar4 << 10 | uVar8 >> 0xd | uVar7;
    }
    else {
      fStack_8 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_8 * fStack_8;
        iVar9 = iVar9 + -1;
        fStack_8 = param_1;
      } while (iVar9 != 0);
      uVar7 = uVar7 | 0x7c00;
    }
  }
  uVar8 = uVar3 >> 0x10 & 0x8000;
  uVar5 = uVar3 >> 0x17 & 0xff;
  uVar2 = uVar3 & 0x7fffff;
  uVar4 = uVar5 - 0x70;
  if (uVar5 < 0x70 || uVar4 == 0) {
    uVar2 = (uVar2 | 0x800000) >> (ulong)(0x71 - uVar5 & 0x1f);
    if (0x65 < uVar5) {
      uVar8 = uVar8 | (uVar2 & 0x1000) * 2 + uVar2 >> 0xd;
    }
  }
  else if (uVar4 == 0x8f) {
    uVar3 = (uint)(uVar2 < 0x2000) | uVar2 >> 0xd | uVar8;
    if (uVar2 == 0) {
      uVar3 = uVar8;
    }
    uVar8 = uVar3 | 0x7c00;
  }
  else {
    uVar1 = uVar2 + 0x2000;
    uVar6 = uVar4;
    if (0x7fdfff < uVar2) {
      uVar1 = 0;
      uVar6 = uVar5 - 0x6f;
    }
    if ((uVar3 & 0x1000) != 0) {
      uVar2 = uVar1;
      uVar4 = uVar6;
    }
    if (uVar4 < 0x1f) {
      uVar8 = uVar4 << 10 | uVar2 >> 0xd | uVar8;
    }
    else {
      fStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_4 * fStack_4;
        iVar9 = iVar9 + -1;
        fStack_4 = param_1;
      } while (iVar9 != 0);
      uVar8 = uVar8 | 0x7c00;
    }
  }
  *(uint *)(*(long *)(param_2 + 8) + *(long *)(param_2 + 0x18) * param_3) = uVar7 + uVar8 * 0x10000;
  return param_1;
}



/* Entry: 10ab632b8; end: 10ab6397b;  */

uint FUN_10ab632b8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0xf;
  uVar3 = param_1 >> 10 & 0x1f;
  uVar2 = param_1 & 0x3ff;
  if (uVar3 == 0x1f) {
    uVar3 = uVar1 << 0x1f | (param_1 & 0xffff) << 0xd;
    if (uVar2 == 0) {
      uVar3 = uVar1 << 0x1f;
    }
    uVar3 = uVar3 | 0x7f800000;
  }
  else {
    if (uVar3 == 0) {
      if (uVar2 == 0) {
        return uVar1 << 0x1f;
      }
      uVar3 = 0x16 - (uint)LZCOUNT(uVar2);
      uVar2 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(uVar2) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar3 = uVar3 * 0x800000 + 0x38000000 | uVar1 << 0x1f | uVar2 << 0xd;
  }
  return uVar3;
}



/* Entry: 10ab6397c; end: 10ab639bb;  */

void FUN_10ab6397c(long param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  FUN_10ab622e8();
  puVar1 = (undefined4 *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x18) * param_2);
  *(short *)(puVar1 + 1) = (short)((ulong)param_3 >> 0x20);
  *puVar1 = (int)param_3;
  return;
}



/* Entry: 10ab639bc; end: 10ab6407f;  */

void FUN_10ab639bc(void)

{
  return;
}



/* Entry: 10ab64080; end: 10ab6441b;  */

float FUN_10ab64080(float param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  float fStack_4;
  
  uVar11 = *param_4;
  uVar8 = uVar11 >> 0x10 & 0x8000;
  uVar3 = uVar11 >> 0x17 & 0xff;
  uVar10 = uVar11 & 0x7fffff;
  uVar2 = uVar3 - 0x70;
  if (uVar3 < 0x70 || uVar2 == 0) {
    uVar10 = (uVar10 | 0x800000) >> (ulong)(0x71 - uVar3 & 0x1f);
    if (0x65 < uVar3) {
      uVar8 = uVar8 | (uVar10 & 0x1000) * 2 + uVar10 >> 0xd;
    }
  }
  else if (uVar2 == 0x8f) {
    uVar11 = (uint)(uVar10 < 0x2000) | uVar10 >> 0xd | uVar8;
    if (uVar10 == 0) {
      uVar11 = uVar8;
    }
    uVar8 = uVar11 | 0x7c00;
  }
  else {
    uVar4 = uVar10 + 0x2000;
    uVar5 = uVar2;
    if (0x7fdfff < uVar10) {
      uVar4 = 0;
      uVar5 = uVar3 - 0x6f;
    }
    if ((uVar11 & 0x1000) != 0) {
      uVar10 = uVar4;
      uVar2 = uVar5;
    }
    if (uVar2 < 0x1f) {
      uVar8 = uVar2 << 10 | uVar10 >> 0xd | uVar8;
    }
    else {
      fStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_4 * fStack_4;
        iVar9 = iVar9 + -1;
        fStack_4 = param_1;
      } while (iVar9 != 0);
      uVar8 = uVar8 | 0x7c00;
    }
  }
  uVar2 = param_4[1];
  uVar10 = uVar2 >> 0x10 & 0x8000;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar11 = uVar2 & 0x7fffff;
  uVar3 = uVar4 - 0x70;
  if (uVar4 < 0x70 || uVar3 == 0) {
    uVar11 = (uVar11 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f);
    if (0x65 < uVar4) {
      uVar10 = uVar10 | (uVar11 & 0x1000) * 2 + uVar11 >> 0xd;
    }
  }
  else if (uVar3 == 0x8f) {
    uVar2 = (uint)(uVar11 < 0x2000) | uVar11 >> 0xd | uVar10;
    if (uVar11 == 0) {
      uVar2 = uVar10;
    }
    uVar10 = uVar2 | 0x7c00;
  }
  else {
    uVar5 = uVar11 + 0x2000;
    uVar6 = uVar3;
    if (0x7fdfff < uVar11) {
      uVar5 = 0;
      uVar6 = uVar4 - 0x6f;
    }
    if ((uVar2 & 0x1000) != 0) {
      uVar11 = uVar5;
      uVar3 = uVar6;
    }
    if (uVar3 < 0x1f) {
      uVar10 = uVar3 << 10 | uVar11 >> 0xd | uVar10;
    }
    else {
      fStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_4 * fStack_4;
        iVar9 = iVar9 + -1;
        fStack_4 = param_1;
      } while (iVar9 != 0);
      uVar10 = uVar10 | 0x7c00;
    }
  }
  uVar3 = param_4[2];
  uVar11 = uVar3 >> 0x10 & 0x8000;
  uVar5 = uVar3 >> 0x17 & 0xff;
  uVar2 = uVar3 & 0x7fffff;
  uVar4 = uVar5 - 0x70;
  if (uVar5 < 0x70 || uVar4 == 0) {
    if (0x65 < uVar5) {
      uVar2 = (uVar2 | 0x800000) >> (ulong)(0x71 - uVar5 & 0x1f);
      uVar11 = uVar11 | (uVar2 & 0x1000) * 2 + uVar2 >> 0xd;
    }
  }
  else if (uVar4 == 0x8f) {
    uVar3 = (uint)(uVar2 < 0x2000) | uVar2 >> 0xd | uVar11;
    if (uVar2 == 0) {
      uVar3 = uVar11;
    }
    uVar11 = uVar3 | 0x7c00;
  }
  else {
    uVar6 = uVar2 + 0x2000;
    uVar1 = uVar4;
    if (0x7fdfff < uVar2) {
      uVar6 = 0;
      uVar1 = uVar5 - 0x6f;
    }
    if ((uVar3 & 0x1000) != 0) {
      uVar2 = uVar6;
      uVar4 = uVar1;
    }
    if (uVar4 < 0x1f) {
      uVar11 = uVar4 << 10 | uVar2 >> 0xd | uVar11;
    }
    else {
      fStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_4 * fStack_4;
        iVar9 = iVar9 + -1;
        fStack_4 = param_1;
      } while (iVar9 != 0);
      uVar11 = uVar11 | 0x7c00;
    }
  }
  uVar4 = param_4[3];
  uVar2 = uVar4 >> 0x10 & 0x8000;
  uVar6 = uVar4 >> 0x17 & 0xff;
  uVar3 = uVar4 & 0x7fffff;
  uVar5 = uVar6 - 0x70;
  if (uVar6 < 0x70 || uVar5 == 0) {
    uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar6 & 0x1f);
    if (0x65 < uVar6) {
      uVar2 = uVar2 | (uVar3 & 0x1000) * 2 + uVar3 >> 0xd;
    }
    uVar12 = (ulong)uVar2;
  }
  else if (uVar5 == 0x8f) {
    uVar4 = (uint)(uVar3 < 0x2000) | uVar3 >> 0xd | uVar2;
    if (uVar3 == 0) {
      uVar4 = uVar2;
    }
    uVar12 = (ulong)(uVar4 | 0x7c00);
  }
  else {
    uVar1 = uVar3 + 0x2000;
    uVar7 = uVar5;
    if (0x7fdfff < uVar3) {
      uVar1 = 0;
      uVar7 = uVar6 - 0x6f;
    }
    if ((uVar4 & 0x1000) != 0) {
      uVar3 = uVar1;
      uVar5 = uVar7;
    }
    if (uVar5 < 0x1f) {
      uVar12 = (ulong)(uVar5 << 10 | uVar3 >> 0xd | uVar2);
    }
    else {
      fStack_4 = 1e+10;
      iVar9 = 10;
      do {
        param_1 = fStack_4 * fStack_4;
        iVar9 = iVar9 + -1;
        fStack_4 = param_1;
      } while (iVar9 != 0);
      uVar12 = (ulong)(uVar2 | 0x7c00);
    }
  }
  *(ulong *)(*(long *)(param_2 + 8) + *(long *)(param_2 + 0x18) * param_3) =
       (ulong)(uVar10 << 0x10) + (ulong)uVar8 + ((ulong)uVar11 << 0x20) + (uVar12 << 0x30);
  return param_1;
}



/* Entry: 10ab6441c; end: 10ab64e5b;  */

uint FUN_10ab6441c(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1 >> 0xf;
  uVar3 = param_1 >> 10 & 0x1f;
  uVar2 = param_1 & 0x3ff;
  if (uVar3 == 0x1f) {
    uVar1 = uVar1 << 0x1f;
    if ((param_1 & 0x3ff) != 0) {
      uVar1 = uVar1 | (param_1 & 0xffff) << 0xd;
    }
    uVar1 = uVar1 | 0x7f800000;
  }
  else {
    if (uVar3 == 0) {
      if ((param_1 & 0x3ff) == 0) {
        return uVar1 << 0x1f;
      }
      uVar3 = 0x16 - (uint)LZCOUNT(uVar2);
      uVar2 = uVar2 << (ulong)(10 - ((uint)LZCOUNT(uVar2) ^ 0x1f) & 0x1f) & 0x1fffbfe;
    }
    uVar1 = uVar3 * 0x800000 + 0x38000000 | uVar1 << 0x1f | uVar2 << 0xd;
  }
  return uVar1;
}



/* Entry: 10ab64e5c; end: 10ab651ab;  */

void FUN_10ab64e5c(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f6940d3,0xe);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4e458;
  pppuVar2 = (undefined8 ***)&UNK_10f6937f5;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0x93;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4e458;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f41708f,FUN_10ab72afc,FUN_10ab72bbc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6937f6,FUN_10ab72d78,FUN_10ab72e38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f6937fc,FUN_10ab72f1c,FUN_10ab72fdc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f693802,FUN_10ab730c0,FUN_10ab73180);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f571d4e,FUN_10ab73264,FUN_10ab73324);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f693808,FUN_10ab73408,FUN_10ab734c4);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f6940d3,0xe);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab65190);
  (*pcVar6)();
}



/* Entry: 10ab651ac; end: 10ab65243;  */

undefined1  [16] FUN_10ab651ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xf;
  auVar1._0_8_ = &UNK_10f6940e2;
  return auVar1;
}



/* Entry: 10ab65244; end: 10ab6529f;  */

void FUN_10ab65244(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_38 = 0;
  puStack_30 = &UNK_10f6937f5;
  uStack_28 = 0;
  uStack_20 = 0x93;
  uStack_18 = 0xffffffff;
  FUN_10ab652a0(param_1,&uStack_58);
  FUN_10ab73938();
  return;
}



/* Entry: 10ab652a0; end: 10ab65377;  */

/* WARNING: Removing unreachable block (ram,0x00010ab65338) */

undefined1  [16] FUN_10ab652a0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f6940e2,0xf);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab7383c(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab65378; end: 10ab65733;  */

long * FUN_10ab65378(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined **ppuVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  undefined8 auStack_100 [2];
  char cStack_e9;
  ulong uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined1 **ppuStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_90;
  long *plStack_88;
  char cStack_79;
  ulong uStack_78;
  undefined8 *puStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar9 = (long *)(param_1 + 0x38);
  plVar7 = plVar9;
  FUN_10ab739f4();
  plVar1 = (long *)(param_1 + 0x40);
  if (plVar1 != plVar7) {
LAB_10ab655cc:
    FUN_10ab739f4(plVar9,param_2);
    if (plVar1 != plVar9) {
      plStack_88 = (long *)plVar9[8];
      lStack_90 = plVar9[7];
      uVar10 = *param_3;
      if (plVar9[8] != 0) {
        plVar9 = (long *)(plVar9[8] + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppuStack_a0 = &PTR_DAT_110c4e458;
      func_0x000109899de4(&puStack_68,uVar10,&lStack_90,&ppuStack_a0,0,0);
      plVar9 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar1 = plStack_88 + 1;
        do {
          lVar15 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar15 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = param_3 + 1;
      func_0x0001098968d0(plVar9,&puStack_68);
      if ((3 < (int)puStack_68) && (plVar9 = plStack_60, plStack_60 != (long *)0x0)) {
        (**(code **)*plStack_60)();
        plVar9 = plStack_60;
      }
    }
    return plVar9;
  }
  lVar15 = param_1;
  FUN_10ab6587c();
  if (lVar15 != 0) {
    FUN_10a0d09b4(&lStack_90,param_2);
    lVar13 = *(long *)(lVar15 + 0x1f0);
    if (lVar13 != 0) {
      lVar12 = lVar15 + 0x1f0;
      do {
        lVar2 = 8;
        if (uStack_78 <= *(ulong *)(lVar13 + 0x38)) {
          lVar2 = 0;
          lVar12 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + lVar2);
      } while (lVar13 != 0);
      if ((lVar12 != lVar15 + 0x1f0) && (*(ulong *)(lVar12 + 0x38) <= uStack_78)) {
        puVar8 = (undefined8 *)0x40;
        __Znwm();
        puVar8[1] = 0;
        puVar8[2] = 0;
        *puVar8 = &PTR_FUN_110c4e700;
        uVar11 = *(undefined8 *)(lVar12 + 0x48);
        uVar10 = *(undefined8 *)(lVar12 + 0x40);
        if (*(long *)(lVar12 + 0x48) != 0) {
          plVar7 = (long *)(*(long *)(lVar12 + 0x48) + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = *plVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        puVar8[4] = 0;
        puVar8[5] = 0;
        ppuStack_a0 = (undefined **)(puVar8 + 3);
        *ppuStack_a0 = (undefined *)&PTR_DAT_110c4db68;
        puVar8[7] = uVar11;
        puVar8[6] = uVar10;
        plVar14 = (long *)*plVar1;
        plVar7 = plVar1;
        plStack_98 = puVar8;
        while (plVar16 = plVar7, plVar14 != (long *)0x0) {
          while (plVar16 = plVar14, puVar8 = param_2, FUN_10a003e3c(param_2,plVar16 + 4),
                ((uint)puVar8 >> 7 & 1) == 0) {
            plVar14 = plVar16 + 4;
            FUN_10a003e3c(plVar14,param_2);
            if (((uint)plVar14 >> 7 & 1) == 0) {
              puVar8 = (undefined8 *)*plVar7;
              if (puVar8 == (undefined8 *)0x0) goto LAB_10ab654c4;
              goto LAB_10ab65540;
            }
            plVar7 = plVar16 + 1;
            plVar14 = (long *)*plVar7;
            if ((long *)*plVar7 == (long *)0x0) goto LAB_10ab654c4;
          }
          plVar7 = plVar16;
          plVar14 = (long *)*plVar16;
        }
LAB_10ab654c4:
        puVar8 = (undefined8 *)0x48;
        __Znwm();
        uStack_58 = 0;
        puStack_68 = puVar8;
        plStack_60 = plVar9;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          func_0x000107c3192c(puVar8 + 4,*param_2,param_2[1]);
        }
        else {
          uVar10 = *param_2;
          puVar8[5] = param_2[1];
          puVar8[4] = uVar10;
          puVar8[6] = param_2[2];
        }
        puVar8[7] = 0;
        puVar8[8] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = plVar16;
        *plVar7 = (long)puVar8;
        if (*(long *)*plVar9 != 0) {
          *plVar9 = *(long *)*plVar9;
          puVar8 = (undefined8 *)*plVar7;
        }
        func_0x000107c2b058(*(undefined8 *)(param_1 + 0x40),puVar8);
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
        puVar8 = puStack_68;
LAB_10ab65540:
        plVar7 = plStack_98;
        ppuVar5 = ppuStack_a0;
        ppuStack_a0 = (undefined **)0x0;
        plStack_98 = (long *)0x0;
        plVar14 = (long *)puVar8[8];
        puVar8[8] = plVar7;
        puVar8[7] = ppuVar5;
        if (plVar14 != (long *)0x0) {
          plVar7 = plVar14 + 1;
          do {
            lVar15 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
          }
        }
        plVar7 = plStack_98;
        if (plStack_98 != (long *)0x0) {
          plVar14 = plStack_98 + 1;
          do {
            lVar15 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar15 == 0) {
            (**(code **)(*plStack_98 + 0x10))(plStack_98);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
          }
        }
      }
    }
    if (cStack_79 < '\0') {
      __ZdlPv(lStack_90);
    }
    goto LAB_10ab655cc;
  }
  uVar11 = 0x120;
  ___cxa_allocate_exception();
  FUN_10a2e1840();
  uVar10 = uVar11;
  ___cxa_throw(uVar11,&PTR_DAT_110b99e48,FUN_10a002a90);
  FUN_10ab73a70(&puStack_68);
  func_0x00010a364e08(&ppuStack_a0);
  if (cStack_79 < '\0') {
    __ZdlPv(lStack_90);
  }
  __Unwind_Resume(uVar10);
  pcStack_a8 = FUN_10ab65734;
  lVar12 = 0x120;
  uStack_c0 = uVar11;
  uStack_b8 = uVar10;
  puStack_b0 = &stack0xfffffffffffffff0;
  ___cxa_allocate_exception();
  FUN_10a2e1840();
  lVar15 = lVar12;
  ___cxa_throw(lVar12,&PTR_DAT_110b99e48,FUN_10a002a90);
  ___cxa_free_exception(lVar12);
  lVar13 = lVar15;
  __Unwind_Resume();
  pcStack_c8 = FUN_10ab65784;
  lStack_e0 = lVar15;
  lStack_d8 = lVar12;
  ppuStack_d0 = &puStack_b0;
  FUN_10a0d09b4(auStack_100);
  FUN_10ab6587c();
  if (lVar13 == 0) {
    uVar10 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar10,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab65850);
    (*pcVar6)();
  }
  lVar15 = lVar13 + 0x1f0;
  lVar12 = *(long *)(lVar13 + 0x1f0);
  lVar13 = lVar15;
  if (lVar12 != 0) {
    do {
      lVar2 = 8;
      if (uStack_e8 <= *(ulong *)(lVar12 + 0x38)) {
        lVar2 = 0;
        lVar13 = lVar12;
      }
      lVar12 = *(long *)(lVar12 + lVar2);
    } while (lVar12 != 0);
    if ((lVar13 != lVar15) && (*(ulong *)(lVar13 + 0x38) <= uStack_e8)) goto LAB_10ab657f4;
  }
  lVar13 = lVar15;
LAB_10ab657f4:
  if (cStack_e9 < '\0') {
    __ZdlPv(auStack_100[0]);
  }
  return (long *)(ulong)(lVar13 != lVar15);
}



/* Entry: 10ab65734; end: 10ab65783;  */

bool FUN_10ab65734(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 auStack_60 [2];
  char cStack_49;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  lVar3 = 0x120;
  ___cxa_allocate_exception();
  FUN_10a2e1840();
  lVar4 = lVar3;
  ___cxa_throw(lVar3,&PTR_DAT_110b99e48,FUN_10a002a90);
  ___cxa_free_exception(lVar3);
  lVar5 = lVar4;
  __Unwind_Resume();
  pcStack_28 = FUN_10ab65784;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  puStack_30 = &stack0xfffffffffffffff0;
  FUN_10a0d09b4(auStack_60);
  FUN_10ab6587c();
  if (lVar5 == 0) {
    uVar6 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar6,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab65850);
    (*pcVar2)();
  }
  lVar4 = lVar5 + 0x1f0;
  lVar3 = *(long *)(lVar5 + 0x1f0);
  lVar5 = lVar4;
  if (lVar3 != 0) {
    do {
      lVar1 = 8;
      if (uStack_48 <= *(ulong *)(lVar3 + 0x38)) {
        lVar1 = 0;
        lVar5 = lVar3;
      }
      lVar3 = *(long *)(lVar3 + lVar1);
    } while (lVar3 != 0);
    if ((lVar5 != lVar4) && (*(ulong *)(lVar5 + 0x38) <= uStack_48)) goto LAB_10ab657f4;
  }
  lVar5 = lVar4;
LAB_10ab657f4:
  if (cStack_49 < '\0') {
    __ZdlPv(auStack_60[0]);
  }
  return lVar5 != lVar4;
}



/* Entry: 10ab65784; end: 10ab6587b;  */

bool FUN_10ab65784(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 auStack_40 [2];
  char cStack_29;
  ulong uStack_28;
  
  FUN_10a0d09b4(auStack_40);
  FUN_10ab6587c();
  if (param_1 == 0) {
    uVar4 = 0x120;
    ___cxa_allocate_exception(0x120);
    FUN_10a009538();
    ___cxa_throw(uVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab65850);
    (*pcVar3)();
  }
  lVar1 = param_1 + 0x1f0;
  lVar5 = *(long *)(param_1 + 0x1f0);
  lVar6 = lVar1;
  if (lVar5 != 0) {
    do {
      lVar2 = 8;
      if (uStack_28 <= *(ulong *)(lVar5 + 0x38)) {
        lVar2 = 0;
        lVar6 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + lVar2);
    } while (lVar5 != 0);
    if ((lVar6 != lVar1) && (*(ulong *)(lVar6 + 0x38) <= uStack_28)) goto LAB_10ab657f4;
  }
  lVar6 = lVar1;
LAB_10ab657f4:
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  return lVar6 != lVar1;
}



/* Entry: 10ab6587c; end: 10ab658f7;  */

undefined8 FUN_10ab6587c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if ((plVar4 == (long *)0x0) || (__ZNSt3__119__shared_weak_count4lockEv(), plVar4 == (long *)0x0))
  {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x30);
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
    if (lVar5 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return uVar6;
}



/* Entry: 10ab658f8; end: 10ab65a37;  */

void FUN_10ab658f8(undefined8 *param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10ab6587c();
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 0x1e8);
    while (plVar5 != (long *)(param_2 + 0x1f0)) {
      if (*(char *)((long)plVar5 + 0x37) < '\0') {
        func_0x000107c3192c(&lStack_50,plVar5[4],plVar5[5]);
      }
      else {
        lStack_48 = plVar5[5];
        lStack_50 = plVar5[4];
        lStack_40 = plVar5[6];
      }
      FUN_10a059fa0(param_1,&lStack_50);
      if (lStack_40 < 0) {
        __ZdlPv(lStack_50);
      }
      plVar1 = (long *)plVar5[1];
      plVar6 = plVar5;
      if ((long *)plVar5[1] == (long *)0x0) {
        do {
          plVar5 = (long *)plVar6[2];
          bVar3 = (long *)*plVar5 != plVar6;
          plVar6 = plVar5;
        } while (bVar3);
      }
      else {
        do {
          plVar5 = plVar1;
          plVar1 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
    }
    return;
  }
  uVar4 = 0x120;
  ___cxa_allocate_exception(0x120);
  FUN_10a009538();
  ___cxa_throw(uVar4,&PTR_DAT_110b99e48,FUN_10a002a90);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab659f4);
  (*pcVar2)();
}



/* Entry: 10ab65a38; end: 10ab65beb;  */

undefined8 * FUN_10ab65a38(undefined8 *param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_110c4dc68;
  param_1[2] = &PTR_DAT_110c4dcb8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffff;
  puVar3 = param_1 + 5;
  param_1[6] = 0;
  *puVar3 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(char *)(param_1 + 0xb) = (char)param_3;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  uVar1 = 0x30;
  __Znwm();
  FUN_10a9dc930();
  plVar2 = (long *)param_1[3];
  param_1[3] = uVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x28))();
  }
  if (((param_3 & 0xff) >> 2 & 1) == 0) {
    FUN_10a0f20c0(&uStack_60,param_2);
    if (*(char *)((long)param_1 + 0x3f) < '\0') {
      __ZdlPv(*puVar3);
    }
    param_1[6] = uStack_58;
    *puVar3 = uStack_60;
    param_1[7] = lStack_50;
    if ((param_3 & 1) != 0) {
      if (*(char *)((long)param_1 + 0x3f) < '\0') {
        func_0x000107c3192c(&uStack_60,param_1[5],param_1[6]);
      }
      else {
        uStack_58 = param_1[6];
        uStack_60 = *puVar3;
        lStack_50 = param_1[7];
      }
      (**(code **)(*(long *)param_1[3] + 8))((long *)param_1[3],&uStack_60,puVar3);
      if (lStack_50 < 0) {
        __ZdlPv(uStack_60);
      }
    }
  }
  return param_1;
}



/* Entry: 10ab65bec; end: 10ab65c67;  */

undefined8 * FUN_10ab65bec(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c4dc68;
  param_1[2] = &PTR_DAT_110c4dcb8;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 10ab65c68; end: 10ab65cdb;  */

long FUN_10ab65c68(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10ab65a38(param_1,param_2,param_4);
  FUN_10a0f20c0(&uStack_38,param_3);
  if (*(char *)(param_1 + 0x77) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x60));
  }
  *(undefined8 *)(param_1 + 0x68) = uStack_30;
  *(undefined8 *)(param_1 + 0x60) = uStack_38;
  *(undefined8 *)(param_1 + 0x70) = uStack_28;
  return param_1;
}



/* Entry: 10ab65cdc; end: 10ab65ce7;  */

undefined8 * FUN_10ab65cdc(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110c4dc68;
  param_1[2] = &PTR_DAT_110c4dcb8;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    __ZdlPv(param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  plVar1 = (long *)param_1[3];
  param_1[3] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_1;
}



/* Entry: 10ab65ce8; end: 10ab65d13;  */

void FUN_10ab65ce8(void)

{
  FUN_10ab65bec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab65d14; end: 10ab65e23;  */

void FUN_10ab65d14(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_value_110c4e4c0,0);
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe | (byte)plVar1;
  uStack_38 = 0;
  uStack_30 = 0;
  lStack_28 = 0;
  (**(code **)(*param_2 + 0xa0))(&uStack_50,param_2,&PTR_DAT_110c4dcd8);
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x30) = uStack_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_50;
  *(undefined8 *)(param_1 + 0x38) = uStack_40;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (&uStack_38,param_1 + 0x28);
    (**(code **)(**(long **)(param_1 + 0x18) + 8))
              (*(long **)(param_1 + 0x18),&uStack_38,param_1 + 0x28);
  }
  (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4dcf8,0);
  *(int *)(param_1 + 0x20) = (int)param_2;
  if (lStack_28 < 0) {
    __ZdlPv(uStack_38);
  }
  return;
}



/* Entry: 10ab65e24; end: 10ab65f37;  */

void FUN_10ab65e24(long param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 **ppuStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 **ppuStack_40;
  long lStack_38;
  
  bVar1 = *(byte *)(param_1 + 0x58);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_s_value_110c4e4c0,bVar1 & 1);
  if ((bVar1 & 1) == 0) {
    FUN_10a00d760(param_2,&PTR_DAT_110c4dcd8,param_1 + 0x28);
  }
  else {
    ppuStack_58 = (undefined8 ***)0x0;
    lStack_50 = 0;
    uStack_48 = 0;
    (**(code **)**(undefined8 **)(param_1 + 0x18))
              (*(undefined8 **)(param_1 + 0x18),param_1 + 0x28,&ppuStack_58);
    lStack_38 = (long)uStack_48._7_1_;
    if (lStack_38 < 0) {
      ppuStack_40 = ppuStack_58;
      lStack_38 = lStack_50;
      if (lStack_50 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10ab65f1c);
        (*pcVar2)();
      }
    }
    else {
      ppuStack_40 = &ppuStack_58;
    }
    (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c4dcd8,&ppuStack_40);
    if (uStack_48 < 0) {
      __ZdlPv(ppuStack_58);
    }
  }
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c4dcf8,*(undefined4 *)(param_1 + 0x20));
  return;
}



/* Entry: 10ab65f38; end: 10ab65faf;  */

undefined1  [16] FUN_10ab65f38(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x11;
  auVar1._0_8_ = &UNK_10f69410f;
  return auVar1;
}



/* Entry: 10ab65fb0; end: 10ab6606b;  */

void FUN_10ab65fb0(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0xffffffff00000001;
  puStack_98 = (undefined *)0x0;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  puStack_60 = (undefined *)0xb0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10ab6606c(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f693810;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f6937f5;
  uStack_68 = 0;
  puStack_60 = &UNK_10f6937f5;
  uStack_58 = 0;
  uStack_50 = 0x16f;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab73c1c();
  FUN_10ab73d78(param_1);
  return;
}



/* Entry: 10ab6606c; end: 10ab66143;  */

/* WARNING: Removing unreachable block (ram,0x00010ab66104) */

undefined1  [16] FUN_10ab6606c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f69410f,0x11);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab73b20(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab66144; end: 10ab66443;  */

/* WARNING: Removing unreachable block (ram,0x00010ab663d0) */
/* WARNING: Removing unreachable block (ram,0x00010ab663d4) */
/* WARNING: Removing unreachable block (ram,0x00010ab663ec) */
/* WARNING: Removing unreachable block (ram,0x00010ab66684) */
/* WARNING: Removing unreachable block (ram,0x00010ab66688) */
/* WARNING: Removing unreachable block (ram,0x00010ab666a0) */

undefined8 * FUN_10ab66144(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long alStack_3b0 [4];
  undefined4 uStack_390;
  long alStack_380 [4];
  undefined4 uStack_360;
  long alStack_350 [4];
  undefined4 uStack_330;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [40];
  undefined1 uStack_2c8;
  undefined1 auStack_2c0 [40];
  undefined1 uStack_298;
  undefined1 auStack_290 [40];
  undefined1 uStack_268;
  undefined1 auStack_260 [40];
  long lStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  long lStack_200;
  undefined8 *puStack_1f8;
  undefined1 *puStack_1f0;
  code *pcStack_1e8;
  long alStack_1e0 [4];
  undefined4 uStack_1c0;
  long alStack_1b0 [4];
  undefined4 uStack_190;
  long alStack_180 [4];
  undefined4 uStack_160;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [40];
  undefined1 uStack_f8;
  undefined1 auStack_f0 [40];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [40];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_1;
  uVar12 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar4,uVar12);
  *param_1 = &PTR_FUN_110c4dd28;
  param_1[2] = &PTR_DAT_110c4ddc8;
  param_1[7] = &PTR_DAT_110c4de20;
  lVar9 = param_3[1];
  uVar12 = *param_3;
  param_1[0x1d] = param_3[1];
  param_1[0x1c] = uVar12;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar4 = param_1 + 0x1e;
  param_1[0x1f] = 0;
  *puVar4 = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  puVar10 = param_1 + 0x25;
  param_1[0x26] = 0;
  *puVar10 = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  uStack_148 = 0;
  puStack_150 = (undefined8 *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0x3f800000;
  auStack_128[0] = 0;
  FUN_10ab714a4(auStack_120,&puStack_150);
  alStack_180[1] = 0;
  alStack_180[0] = 0;
  alStack_180[3] = 0;
  alStack_180[2] = 0;
  uStack_160 = 0x3f800000;
  uStack_f8 = 1;
  FUN_10ab714a4(auStack_f0,alStack_180);
  alStack_1b0[1] = 0;
  alStack_1b0[0] = 0;
  alStack_1b0[3] = 0;
  alStack_1b0[2] = 0;
  uStack_190 = 0x3f800000;
  uStack_c8 = 2;
  FUN_10ab714a4(auStack_c0,alStack_1b0);
  alStack_1e0[1] = 0;
  alStack_1e0[0] = 0;
  alStack_1e0[3] = 0;
  alStack_1e0[2] = 0;
  uStack_1c0 = 0x3f800000;
  auStack_98[0] = 3;
  FUN_10ab714a4(auStack_90,alStack_1e0);
  FUN_10ab73e34(param_1 + 0x2c,auStack_128,4);
  lVar9 = 0x98;
  do {
    func_0x00010ab71a30(auStack_128 + lVar9);
    lVar9 = lVar9 + -0x30;
  } while (lVar9 != -0x28);
  func_0x00010ab71a68(0);
  if (alStack_1e0[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_1b0[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_180[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  puVar5 = puStack_150;
  if (puStack_150 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b7) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar6 = auStack_90;
  lVar11 = -0xc0;
  do {
    func_0x00010ab71a30(puVar6);
    puVar6 = puVar6 + -0x30;
    lVar11 = lVar11 + 0x30;
  } while (lVar11 != 0);
  func_0x00010ab71a30(alStack_1e0);
  func_0x00010ab71a30(alStack_1b0);
  func_0x00010ab71a30(alStack_180);
  func_0x00010ab71a30(&puStack_150);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(*puVar10);
  }
  func_0x00010a3b77dc(param_1 + 0x20);
  FUN_10a3b969c(puVar4);
  func_0x00010ab74104(0xffffffffffffffd8);
  func_0x00010aa71c88(param_1);
  puVar7 = puVar5;
  __Unwind_Resume();
  uStack_230 = 1;
  pcStack_1e8 = FUN_10ab66444;
  lStack_238 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar7;
  puStack_228 = auStack_128;
  puStack_220 = auStack_98;
  puStack_218 = puVar10;
  puStack_210 = puVar5;
  puStack_208 = puVar4;
  lStack_200 = lVar9;
  puStack_1f8 = param_1;
  puStack_1f0 = &stack0xfffffffffffffff0;
  FUN_10aa7093c();
  *puVar8 = &PTR_FUN_110c4dd28;
  puVar8[2] = &PTR_DAT_110c4ddc8;
  puVar8[7] = &PTR_DAT_110c4de20;
  puVar8[0x1d] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x21] = 0;
  puVar8[0x20] = 0;
  puVar8[0x23] = 0;
  puVar8[0x22] = 0;
  *(undefined4 *)(puVar8 + 0x24) = 0x3f800000;
  puVar8[0x26] = 0;
  puVar8[0x25] = 0;
  puVar8[0x28] = 0;
  puVar8[0x27] = 0;
  puVar8[0x2a] = 0;
  puVar8[0x29] = 0;
  puVar8[0x2b] = 0;
  uStack_318 = 0;
  puStack_320 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_300 = 0x3f800000;
  auStack_2f8[0] = 0;
  FUN_10ab714a4(auStack_2f0,&puStack_320);
  alStack_350[1] = 0;
  alStack_350[0] = 0;
  alStack_350[3] = 0;
  alStack_350[2] = 0;
  uStack_330 = 0x3f800000;
  uStack_2c8 = 1;
  FUN_10ab714a4(auStack_2c0,alStack_350);
  alStack_380[1] = 0;
  alStack_380[0] = 0;
  alStack_380[3] = 0;
  alStack_380[2] = 0;
  uStack_360 = 0x3f800000;
  uStack_298 = 2;
  FUN_10ab714a4(auStack_290,alStack_380);
  alStack_3b0[1] = 0;
  alStack_3b0[0] = 0;
  alStack_3b0[3] = 0;
  alStack_3b0[2] = 0;
  uStack_390 = 0x3f800000;
  uStack_268 = 3;
  FUN_10ab714a4(auStack_260,alStack_3b0);
  FUN_10ab73e34(puVar7 + 0x2c,auStack_2f8,4);
  lVar9 = 0x98;
  do {
    func_0x00010ab71a30(auStack_2f8 + lVar9);
    lVar9 = lVar9 + -0x30;
  } while (lVar9 != -0x28);
  func_0x00010ab71a68(0);
  if (alStack_3b0[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_380[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_350[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  puVar4 = puStack_320;
  if (puStack_320 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  *(undefined4 *)((long)puVar7 + 0x1bc) = 0;
  puVar7[0x32] = 0;
  puVar7[0x31] = 0;
  puVar7[0x34] = 0;
  puVar7[0x33] = 0;
  puVar7[0x36] = 0;
  puVar7[0x35] = 0;
  *(undefined4 *)((long)puVar7 + 0x1b7) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_238) {
    return puVar7;
  }
  ___stack_chk_fail();
  puVar6 = auStack_260;
  lVar9 = -0xc0;
  do {
    func_0x00010ab71a30(puVar6);
    puVar6 = puVar6 + -0x30;
    lVar9 = lVar9 + 0x30;
  } while (lVar9 != 0);
  func_0x00010ab71a30(alStack_3b0);
  func_0x00010ab71a30(alStack_380);
  func_0x00010ab71a30(alStack_350);
  func_0x00010ab71a30(&puStack_320);
  if (*(char *)((long)puVar7 + 0x157) < '\0') {
    __ZdlPv(puVar7[0x28]);
  }
  if (*(char *)((long)puVar7 + 0x13f) < '\0') {
    __ZdlPv(puVar8[0x25]);
  }
  func_0x00010a3b77dc(puVar7 + 0x20);
  FUN_10a3b969c(puVar7 + 0x1e);
  func_0x00010ab74104(0xffffffffffffffd8);
  func_0x00010aa71c88(puVar7);
  __Unwind_Resume();
  if (puVar4 != (undefined8 *)0x0) {
    lVar9 = (long)*(char *)((long)puVar4 + 0xaf);
    if (lVar9 < 0) {
      lVar9 = puVar4[0x14];
    }
    if (lVar9 != 0) {
      FUN_10a3ca004();
      FUN_10a3ca840();
      FUN_10a5848e0();
    }
  }
  return puVar4;
}



/* Entry: 10ab66444; end: 10ab666f7;  */

/* WARNING: Removing unreachable block (ram,0x00010ab66684) */
/* WARNING: Removing unreachable block (ram,0x00010ab66688) */
/* WARNING: Removing unreachable block (ram,0x00010ab666a0) */

undefined8 * FUN_10ab66444(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long alStack_1d0 [4];
  undefined4 uStack_1b0;
  long alStack_1a0 [4];
  undefined4 uStack_180;
  long alStack_170 [4];
  undefined4 uStack_150;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [40];
  undefined1 uStack_e8;
  undefined1 auStack_e0 [40];
  undefined1 uStack_b8;
  undefined1 auStack_b0 [40];
  undefined1 uStack_88;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  FUN_10aa7093c();
  *puVar1 = &PTR_FUN_110c4dd28;
  puVar1[2] = &PTR_DAT_110c4ddc8;
  puVar1[7] = &PTR_DAT_110c4de20;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x21] = 0;
  puVar1[0x20] = 0;
  puVar1[0x23] = 0;
  puVar1[0x22] = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0x3f800000;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2b] = 0;
  uStack_138 = 0;
  puStack_140 = (undefined8 *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_120 = 0x3f800000;
  auStack_118[0] = 0;
  FUN_10ab714a4(auStack_110,&puStack_140);
  alStack_170[1] = 0;
  alStack_170[0] = 0;
  alStack_170[3] = 0;
  alStack_170[2] = 0;
  uStack_150 = 0x3f800000;
  uStack_e8 = 1;
  FUN_10ab714a4(auStack_e0,alStack_170);
  alStack_1a0[1] = 0;
  alStack_1a0[0] = 0;
  alStack_1a0[3] = 0;
  alStack_1a0[2] = 0;
  uStack_180 = 0x3f800000;
  uStack_b8 = 2;
  FUN_10ab714a4(auStack_b0,alStack_1a0);
  alStack_1d0[1] = 0;
  alStack_1d0[0] = 0;
  alStack_1d0[3] = 0;
  alStack_1d0[2] = 0;
  uStack_1b0 = 0x3f800000;
  uStack_88 = 3;
  FUN_10ab714a4(auStack_80,alStack_1d0);
  FUN_10ab73e34(param_1 + 0x2c,auStack_118,4);
  lVar4 = 0x98;
  do {
    func_0x00010ab71a30(auStack_118 + lVar4);
    lVar4 = lVar4 + -0x30;
  } while (lVar4 != -0x28);
  func_0x00010ab71a68(0);
  if (alStack_1d0[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_1a0[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  if (alStack_170[0] != 0) {
    __ZdlPv();
  }
  func_0x00010ab71a68(0);
  puVar2 = puStack_140;
  if (puStack_140 != (undefined8 *)0x0) {
    __ZdlPv();
  }
  *(undefined4 *)((long)param_1 + 0x1bc) = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b7) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar3 = auStack_80;
  lVar4 = -0xc0;
  do {
    func_0x00010ab71a30(puVar3);
    puVar3 = puVar3 + -0x30;
    lVar4 = lVar4 + 0x30;
  } while (lVar4 != 0);
  func_0x00010ab71a30(alStack_1d0);
  func_0x00010ab71a30(alStack_1a0);
  func_0x00010ab71a30(alStack_170);
  func_0x00010ab71a30(&puStack_140);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(puVar1[0x25]);
  }
  func_0x00010a3b77dc(param_1 + 0x20);
  FUN_10a3b969c(param_1 + 0x1e);
  func_0x00010ab74104(0xffffffffffffffd8);
  func_0x00010aa71c88(param_1);
  __Unwind_Resume();
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)*(char *)((long)puVar2 + 0xaf);
    if (lVar4 < 0) {
      lVar4 = puVar2[0x14];
    }
    if (lVar4 != 0) {
      FUN_10a3ca004();
      FUN_10a3ca840();
      FUN_10a5848e0();
    }
  }
  return puVar2;
}



/* Entry: 10ab666f8; end: 10ab6673f;  */

void FUN_10ab666f8(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = (long)*(char *)(param_1 + 0xaf);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0xa0);
    }
    if (lVar1 != 0) {
      FUN_10a3ca004();
      FUN_10a3ca840();
      FUN_10a5848e0();
    }
  }
  return;
}



/* Entry: 10ab66740; end: 10ab66893;  */

void FUN_10ab66740(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c4dd28;
  param_1[2] = &PTR_DAT_110c4ddc8;
  param_1[7] = &PTR_DAT_110c4de20;
  plVar4 = param_1 + 0x1e;
  FUN_10ab666f8(*plVar4);
  lVar2 = param_1[10];
  lVar3 = *(long *)(lVar2 + 0xa20);
  if (*(char *)(lVar3 + 0x21) == '\x01') {
    if ((*(byte *)(lVar3 + 0x20) & 1) != 0) {
LAB_10ab667c8:
      if ((*(byte *)(lVar2 + 0xd72) & 1) == 0) {
        func_0x00010a4917d4(*(long *)(lVar2 + 0x870) + 0x238,param_1 + 0x25);
      }
      goto LAB_10ab667e0;
    }
  }
  else if (0xe8 < *(int *)(lVar3 + 0x18)) goto LAB_10ab667c8;
  if (((*(byte *)(lVar2 + 0xd72) & 1) == 0) && (*(char *)(param_1 + 0x37) == '\x01')) {
    FUN_10a463d40(*(undefined8 *)(lVar2 + 0x870),param_1 + 0x28);
  }
LAB_10ab667e0:
  if (((*(byte *)(param_1[10] + 0xd72) & 1) == 0) && (*(char *)((long)param_1 + 0x1b9) == '\x01')) {
    lVar3 = *plVar4;
    lVar2 = (long)*(char *)(lVar3 + 0xaf);
    if (lVar2 < 0) {
      lVar1 = *(long *)(lVar3 + 0x98);
      lVar2 = *(long *)(lVar3 + 0xa0);
    }
    else {
      lVar1 = lVar3 + 0x98;
    }
    FUN_10a464de0(*(undefined8 *)(param_1[10] + 0x870),lVar1,lVar2);
  }
  puStack_28 = param_1 + 0x34;
  FUN_10a3a7998(&puStack_28);
  puStack_28 = param_1 + 0x31;
  FUN_10a3a7998(&puStack_28);
  FUN_10ab74090(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  func_0x00010a3b77dc(param_1 + 0x20);
  FUN_10a3b969c(plVar4);
  func_0x00010ab74104(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab66894; end: 10ab668a7;  */

void FUN_10ab66894(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c4dd28;
  param_1[2] = &PTR_DAT_110c4ddc8;
  param_1[7] = &PTR_DAT_110c4de20;
  plVar4 = param_1 + 0x1e;
  FUN_10ab666f8(*plVar4);
  lVar2 = param_1[10];
  lVar3 = *(long *)(lVar2 + 0xa20);
  if (*(char *)(lVar3 + 0x21) == '\x01') {
    if ((*(byte *)(lVar3 + 0x20) & 1) != 0) {
LAB_10ab667c8:
      if ((*(byte *)(lVar2 + 0xd72) & 1) == 0) {
        func_0x00010a4917d4(*(long *)(lVar2 + 0x870) + 0x238,param_1 + 0x25);
      }
      goto LAB_10ab667e0;
    }
  }
  else if (0xe8 < *(int *)(lVar3 + 0x18)) goto LAB_10ab667c8;
  if (((*(byte *)(lVar2 + 0xd72) & 1) == 0) && (*(char *)(param_1 + 0x37) == '\x01')) {
    FUN_10a463d40(*(undefined8 *)(lVar2 + 0x870),param_1 + 0x28);
  }
LAB_10ab667e0:
  if (((*(byte *)(param_1[10] + 0xd72) & 1) == 0) && (*(char *)((long)param_1 + 0x1b9) == '\x01')) {
    lVar3 = *plVar4;
    lVar2 = (long)*(char *)(lVar3 + 0xaf);
    if (lVar2 < 0) {
      lVar1 = *(long *)(lVar3 + 0x98);
      lVar2 = *(long *)(lVar3 + 0xa0);
    }
    else {
      lVar1 = lVar3 + 0x98;
    }
    FUN_10a464de0(*(undefined8 *)(param_1[10] + 0x870),lVar1,lVar2);
  }
  puStack_28 = param_1 + 0x34;
  FUN_10a3a7998(&puStack_28);
  puStack_28 = param_1 + 0x31;
  FUN_10a3a7998(&puStack_28);
  FUN_10ab74090(param_1 + 0x2c);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  if (*(char *)((long)param_1 + 0x13f) < '\0') {
    __ZdlPv(param_1[0x25]);
  }
  func_0x00010a3b77dc(param_1 + 0x20);
  FUN_10a3b969c(plVar4);
  func_0x00010ab74104(param_1 + 0x1c);
  func_0x00010aa71c88(param_1);
  return;
}



/* Entry: 10ab668a8; end: 10ab668eb;  */

void FUN_10ab668a8(void)

{
  FUN_10ab66740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab668ec; end: 10ab66c3f;  */

void FUN_10ab668ec(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lVar6 = *(long *)(param_2 + 0x50);
  if (lVar6 == 0) {
    plVar3 = (long *)0x1d8;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c4e7b0;
    plVar5 = plVar3 + 3;
    FUN_10ab66144(plVar5,0,param_2 + 0xe0);
    plStack_50 = plVar5;
    plStack_48 = plVar3;
    FUN_10ab742c0(&plStack_50,plVar3 + 8,plVar5);
    FUN_10ab7415c(&plStack_90,&plStack_50);
    if (plStack_48 == (long *)0x0) goto LAB_10ab66b74;
    plVar5 = plStack_48 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_48;
    } while (cVar1 != '\0');
  }
  else {
    lVar7 = *(long *)(lVar6 + 0x858);
    plVar5 = *(long **)(lVar6 + 0x860);
    if (plVar5 != (long *)0x0) {
      plVar3 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x1c0;
    lStack_80 = lVar7;
    plStack_78 = plVar5;
    __Znwm();
    FUN_10ab66144();
    lStack_70 = lVar7;
    plStack_68 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar4 = plVar5 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar5 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
    plVar4 = (long *)0x30;
    lStack_60 = lVar7;
    plStack_58 = plVar5;
    plStack_50 = plVar3;
    __Znwm();
    lStack_60 = 0;
    plStack_58 = (long *)0x0;
    *plVar4 = (long)&PTR_DAT_110c4e750;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar5;
    plStack_48 = plVar4;
    FUN_10ab742c0(&plStack_50,plVar3 + 5,plVar3);
    FUN_10ab7415c(&plStack_90,&plStack_50);
    plVar5 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if (plStack_58 != (long *)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar5 = plStack_68;
    if (plStack_68 != (long *)0x0) {
      plVar3 = plStack_68 + 1;
      do {
        lVar6 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar6 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
    if ((lStack_80 != 0) && (plStack_90 != (long *)0x0)) {
      plStack_50 = plStack_90;
      plStack_48 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        plVar5 = plStack_88 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar2) {
            *plVar5 = *plVar5 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_10aa88c30(lStack_80,&plStack_50);
      plVar5 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar3 = plStack_48 + 1;
        do {
          lVar6 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar6 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
        }
      }
    }
    if (plStack_78 == (long *)0x0) goto LAB_10ab66b74;
    plVar5 = plStack_78 + 1;
    do {
      lVar6 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plVar3 = plStack_78;
    } while (cVar1 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
  }
LAB_10ab66b74:
  param_1[1] = plStack_88;
  *param_1 = plStack_90;
  return;
}



/* Entry: 10ab66c40; end: 10ab671b3;  */

void FUN_10ab66c40(ulong *****param_1,ulong *******param_2)

{
  ulong *****pppppuVar1;
  char cVar2;
  bool bVar3;
  undefined8 *******pppppppuVar4;
  code *pcVar5;
  ulong *****pppppuVar6;
  ulong *****pppppuVar7;
  ulong *******pppppppuVar8;
  ulong *****pppppuVar9;
  ulong *****pppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  long lVar13;
  ulong uVar14;
  ulong ***pppuVar15;
  ulong ****ppppuVar16;
  ulong ***pppuVar17;
  code cVar18;
  ulong *******pppppppuVar19;
  ulong ****ppppuVar20;
  ulong ****ppppuStack_d0;
  ulong ******ppppppuStack_c8;
  undefined8 ******ppppppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  ulong ******ppppppuStack_a8;
  ulong ***pppuStack_a0;
  undefined8 uStack_98;
  ulong *****pppppuStack_90;
  ulong *****pppppuStack_88;
  ulong *****pppppuStack_80;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar15 = param_1[10][0x144];
  if (*(char *)((long)pppuVar15 + 0x21) == '\x01') {
    if (((ulong)pppuVar15[4] & 1) != 0) {
LAB_10ab66ca8:
      pppuVar15 = param_1[10][0x10e];
      FUN_10a3b945c(&pppppuStack_90,param_1);
      pppppuVar6 = (ulong *****)(pppuVar15 + 0x47);
      param_2 = (ulong *******)(param_1 + 0x25);
      FUN_10a491350(pppppuVar6,param_2,param_1 + 0x25,&pppppuStack_90);
      pppppuVar7 = pppppuStack_88;
      if (pppppuStack_88 != (ulong *****)0x0) {
        pppppuVar9 = pppppuStack_88 + 1;
        do {
          ppppuVar16 = *pppppuVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppppuVar9,0x10);
          if (bVar3) {
            *pppppuVar9 = (ulong ****)((long)ppppuVar16 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppppuVar16 == (ulong ****)0x0) {
          (*(code *)(*pppppuStack_88)[2])(pppppuStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          pppppuVar6 = pppppuVar7;
        }
      }
      goto LAB_10ab66f28;
    }
  }
  else if (0xe8 < *(int *)(pppuVar15 + 3)) goto LAB_10ab66ca8;
  pppppppuVar11 = (ulong *******)(param_1 + 0x25);
  ppppuVar16 = (ulong ****)(long)(char)*(code *)((long)param_1 + 0x13f);
  if ((long)ppppuVar16 < 0) {
    ppppuVar16 = param_1[0x26];
    pppppuVar6 = param_1;
    if (ppppuVar16 != (ulong ****)0x0) {
      pppppppuVar11 = (ulong *******)*pppppppuVar11;
      goto LAB_10ab66d14;
    }
  }
  else {
    pppppuVar6 = param_1;
    if (*(code *)((long)param_1 + 0x13f) != (code)0x0) {
LAB_10ab66d14:
      pppppuStack_90 = (ulong *****)0x0;
      pppppuStack_88 = (ulong *****)0x0;
      pppppppuVar8 = (ulong *******)((long)pppppppuVar11 + (long)ppppuVar16);
      pppppuStack_80 = (ulong *****)0x0;
      pppppppuVar12 = pppppppuVar11;
LAB_10ab66d24:
      do {
        pppppppuVar19 = pppppppuVar11;
        if (*(char *)pppppppuVar11 != '/') {
          pppppppuVar11 = (ulong *******)((long)pppppppuVar11 + 1);
          pppppppuVar19 = pppppppuVar8;
          if (pppppppuVar11 != pppppppuVar8) goto LAB_10ab66d24;
        }
        if (pppppppuVar12 != pppppppuVar19) {
          pppuStack_a0 = (ulong ***)((long)pppppppuVar19 - (long)pppppppuVar12);
          ppppppuStack_a8 = (ulong ******)pppppppuVar12;
          if ((long)pppuStack_a0 < 0) goto LAB_10ab67100;
          FUN_10a043080(&pppppuStack_90,&ppppppuStack_a8);
        }
        if ((pppppppuVar19 == pppppppuVar8) ||
           (pppppppuVar11 = (ulong *******)((long)pppppppuVar19 + 1), pppppppuVar12 = pppppppuVar11,
           pppppppuVar11 == pppppppuVar8)) goto LAB_10ab66d74;
      } while( true );
    }
  }
LAB_10ab66f28:
  if (param_1[0x1e] != (ulong ****)0x0) {
    FUN_10a3ca004();
    FUN_10a3ca840();
    ppppuVar16 = param_1[0x1e];
    uVar14 = (ulong)*(char *)((long)ppppuVar16 + 0xaf);
    if ((long)uVar14 < 0) {
      if (ppppuVar16[0x14] != (ulong ***)0x0) goto LAB_10ab66f4c;
LAB_10ab66f64:
      uStack_98 = (ulong ****)CONCAT17(10,(undefined7)uStack_98);
      ppppppuStack_a8 = (ulong ******)0x6e656e6f706d6f43;
      pppuStack_a0 = (ulong ***)CONCAT53(pppuStack_a0._3_5_,0x2e74);
      pppppuVar7 = pppppuVar6;
      func_0x00010a0fda30();
      ppppuStack_d0 = (ulong ****)pppppuVar7;
      ppppppuStack_c8 = (ulong ******)param_2;
      FUN_10a0ffca4(&ppppppuStack_c0,&ppppuStack_d0);
      pppppppuVar4 = (undefined8 *******)ppppppuStack_c0;
      if (-1 < (char)bStack_a9) {
        uStack_b8 = (ulong)bStack_a9;
        pppppppuVar4 = &ppppppuStack_c0;
      }
      pppppppuVar11 = &ppppppuStack_a8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar11,pppppppuVar4,uStack_b8);
      pppppuStack_88 = (ulong *****)pppppppuVar11[1];
      pppppuStack_90 = (ulong *****)*pppppppuVar11;
      pppppuStack_80 = (ulong *****)pppppppuVar11[2];
      pppppppuVar11[1] = (ulong ******)0x0;
      pppppppuVar11[2] = (ulong ******)0x0;
      *pppppppuVar11 = (ulong ******)0x0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (ppppuVar16 + 0x13,&pppppuStack_90);
      if ((long)pppppuStack_80 < 0) {
        __ZdlPv(pppppuStack_90);
      }
      if ((char)bStack_a9 < '\0') {
        __ZdlPv(ppppppuStack_c0);
      }
      if ((long)uStack_98 < 0) {
        __ZdlPv(ppppppuStack_a8);
      }
      ppppuVar16 = param_1[0x1e];
      uVar14 = (ulong)*(byte *)((long)ppppuVar16 + 0xaf);
      if (-1 < (char)*(byte *)((long)ppppuVar16 + 0xaf)) goto LAB_10ab66f50;
LAB_10ab67020:
      ppppppuStack_a8 = (ulong ******)ppppuVar16[0x13];
      pppuStack_a0 = ppppuVar16[0x14];
    }
    else {
      if (uVar14 == 0) goto LAB_10ab66f64;
LAB_10ab66f4c:
      if (((uint)(int)*(char *)((long)ppppuVar16 + 0xaf) >> 7 & 1) != 0) goto LAB_10ab67020;
LAB_10ab66f50:
      ppppppuStack_a8 = (ulong ******)(ppppuVar16 + 0x13);
      pppuStack_a0 = (ulong ***)(uVar14 & 0xff);
    }
    pppppuStack_90 = (ulong *****)FUN_10ab744a0;
    pppppuStack_88 = (ulong *****)&PTR_FUN_110c4e7f0;
    pppppuStack_80 = param_1;
    FUN_10a57077c(pppppuVar6,&ppppppuStack_a8,&pppppuStack_90,100,0);
    (*(code *)*pppppuStack_88)(&pppppuStack_88);
    pppuVar15 = param_1[10][0x10e];
    FUN_10a3b945c(&pppppuStack_90,param_1);
    FUN_10a464d40(pppuVar15,&pppppuStack_90);
    pppppuVar6 = pppppuStack_88;
    *(code *)((long)param_1 + 0x1b9) = SUB81(pppuVar15,0);
    if (pppppuStack_88 != (ulong *****)0x0) {
      pppppuVar7 = pppppuStack_88 + 1;
      do {
        ppppuVar16 = *pppppuVar7;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pppppuVar7,0x10);
        if (bVar3) {
          *pppppuVar7 = (ulong ****)((long)ppppuVar16 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (ppppuVar16 == (ulong ****)0x0) {
        (*(code *)(*pppppuStack_88)[2])(pppppuStack_88);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar6);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  goto LAB_10ab670fc;
LAB_10ab66d74:
  if (pppppuStack_90 == pppppuStack_88) goto LAB_10ab67100;
  ppppuVar16 = pppppuStack_88[-1];
  if (ppppuVar16 < (ulong ****)0x7ffffffffffffff8) {
    ppppuVar20 = pppppuStack_88[-2];
    if (ppppuVar16 < (ulong ****)0x17) {
      uStack_98 = (ulong ****)CONCAT17((char)ppppuVar16,(undefined7)uStack_98);
      pppppppuVar8 = &ppppppuStack_a8;
      if (ppppuVar16 != (ulong ****)0x0) goto LAB_10ab66dd4;
    }
    else {
      pppppppuVar11 = (ulong *******)0x19;
      if (((ulong)ppppuVar16 | 7) != 0x17) {
        pppppppuVar11 = (ulong *******)(((ulong)ppppuVar16 | 7) + 1);
      }
      pppppppuVar8 = pppppppuVar11;
      __Znwm();
      uStack_98 = (ulong ****)((ulong)pppppppuVar11 | 0x8000000000000000);
      ppppppuStack_a8 = (ulong ******)pppppppuVar8;
      pppuStack_a0 = (ulong ***)ppppuVar16;
LAB_10ab66dd4:
      _memmove(pppppppuVar8,ppppuVar20,ppppuVar16);
    }
    *(char *)((long)pppppppuVar8 + (long)ppppuVar16) = '\0';
    pppppuVar6 = param_1 + 0x28;
    if ((char)*(code *)((long)param_1 + 0x157) < '\0') {
      __ZdlPv(*pppppuVar6);
    }
    param_1[0x29] = (ulong ****)pppuStack_a0;
    *pppppuVar6 = (ulong ****)ppppppuStack_a8;
    param_1[0x2a] = uStack_98;
    ppppuVar16 = (ulong ****)(long)(char)*(code *)((long)param_1 + 0x157);
    if ((long)ppppuVar16 < 0) {
      ppppuVar16 = param_1[0x29];
      if (ppppuVar16 != (ulong ****)0x0) {
        pppppuVar7 = (ulong *****)*pppppuVar6;
        goto LAB_10ab66e2c;
      }
    }
    else {
      pppppuVar7 = pppppuVar6;
      if (*(code *)((long)param_1 + 0x157) != (code)0x0) {
LAB_10ab66e2c:
        pppppuVar1 = (ulong *****)((long)pppppuVar7 + (long)ppppuVar16);
        pppppuVar9 = pppppuVar7;
        while (((pppppuVar10 = pppppuVar1, 2 < (long)ppppuVar16 &&
                (_memchr(pppppuVar9,0x2e,(undefined *)((long)ppppuVar16 + -2)),
                pppppuVar9 != (ulong *****)0x0)) &&
               (pppppuVar10 = pppppuVar9,
               *(short *)pppppuVar9 != 0x6a2e || *(code *)((long)pppppuVar9 + 2) != (code)0x73))) {
          pppppuVar9 = (ulong *****)((long)pppppuVar9 + 1);
          ppppuVar16 = (ulong ****)((long)pppppuVar1 - (long)pppppuVar9);
        }
        lVar13 = (long)pppppuVar10 - (long)pppppuVar7;
        if (pppppuVar10 == pppppuVar1) {
          lVar13 = -1;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                  (&ppppppuStack_a8,pppppuVar6,0,lVar13,&ppppppuStack_c0);
        if ((char)*(code *)((long)param_1 + 0x157) < '\0') {
          __ZdlPv(*pppppuVar6);
        }
        param_1[0x29] = (ulong ****)pppuStack_a0;
        *pppppuVar6 = (ulong ****)ppppppuStack_a8;
        param_1[0x2a] = uStack_98;
      }
    }
    cVar18 = SUB81(param_1[10][0x10e],0);
    FUN_10a3b945c(&ppppppuStack_a8,param_1);
    param_2 = &ppppppuStack_a8;
    FUN_10a463df0();
    pppuVar15 = pppuStack_a0;
    *(code *)(param_1 + 0x37) = cVar18;
    if ((ulong ****)pppuStack_a0 != (ulong ****)0x0) {
      ppppuVar16 = (ulong ****)(pppuStack_a0 + 1);
      do {
        pppuVar17 = *ppppuVar16;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(ppppuVar16,0x10);
        if (bVar3) {
          *ppppuVar16 = (ulong ***)((long)pppuVar17 + -1);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (pppuVar17 == (ulong ***)0x0) {
        (*(code *)(*pppuStack_a0)[2])(pppuStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppuVar15);
      }
    }
    pppppuVar6 = pppppuStack_90;
    if (pppppuStack_90 != (ulong *****)0x0) {
      pppppuStack_88 = pppppuStack_90;
      __ZdlPv();
    }
    goto LAB_10ab66f28;
  }
LAB_10ab670fc:
  func_0x000109ffde50();
LAB_10ab67100:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab67104);
  (*pcVar5)();
}



/* Entry: 10ab671b4; end: 10ab67a53;  */

void FUN_10ab671b4(code ******param_1,code ******param_2)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code ******ppppppcVar5;
  code *******pppppppcVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  code *******pppppppcVar14;
  code ******ppppppcVar15;
  code *******pppppppcVar16;
  ulong uVar17;
  code *****pppppcVar18;
  code ****ppppcVar19;
  long lVar20;
  code ******ppppppcVar21;
  ulong uVar22;
  long lVar23;
  code *****pppppcVar24;
  code *****pppppcVar25;
  code *****unaff_x22;
  undefined **unaff_x23;
  long *plVar26;
  undefined **unaff_x24;
  code *unaff_x25;
  undefined **unaff_x26;
  undefined *puVar27;
  undefined8 *puVar28;
  code *unaff_x27;
  code *******pppppppcVar29;
  undefined **unaff_x28;
  long lStack_400;
  long *plStack_3f8;
  code ******ppppppcStack_3f0;
  undefined *puStack_3e8;
  undefined1 ****ppppuStack_3e0;
  code *pcStack_3d8;
  long alStack_3c8 [2];
  long *plStack_3b8;
  long lStack_3a0;
  long *plStack_398;
  long *plStack_390;
  undefined **ppuStack_388;
  code ******ppppppcStack_380;
  code ******ppppppcStack_378;
  code ******ppppppcStack_370;
  code ******ppppppcStack_368;
  undefined **ppuStack_360;
  code ******ppppppcStack_358;
  undefined1 ***pppuStack_350;
  code *pcStack_348;
  code ******ppppppcStack_340;
  undefined1 uStack_331;
  code *****pppppcStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long lStack_308;
  code *****pppppcStack_300;
  code *****pppppcStack_2f8;
  code ******ppppppcStack_2f0;
  code ******ppppppcStack_2e8;
  code ******ppppppcStack_2e0;
  code ******ppppppcStack_2d8;
  code *****pppppcStack_2d0;
  undefined **ppuStack_2c8;
  undefined1 **ppuStack_2c0;
  code *pcStack_2b8;
  code ******ppppppcStack_2a8;
  undefined4 uStack_29c;
  code ******ppppppcStack_298;
  uint uStack_28c;
  code ******ppppppcStack_288;
  code ******ppppppcStack_280;
  code ****ppppcStack_278;
  long lStack_270;
  undefined1 uStack_268;
  code ****ppppcStack_260;
  code ****ppppcStack_258;
  code ****ppppcStack_250;
  code ****ppppcStack_248;
  code *****pppppcStack_240;
  code ******ppppppcStack_238;
  code ****ppppcStack_230;
  undefined7 uStack_228;
  char cStack_221;
  code *pcStack_220;
  undefined **ppuStack_218;
  code ******ppppppcStack_210;
  code ******ppppppcStack_208;
  code ****ppppcStack_200;
  long lStack_1f8;
  undefined1 uStack_1f0;
  long lStack_1e0;
  undefined **ppuStack_1d0;
  code *pcStack_1c8;
  code *****pppppcStack_1c0;
  code *****pppppcStack_1b8;
  code ******ppppppcStack_1b0;
  code ******ppppppcStack_1a8;
  code ****ppppcStack_1a0;
  code *****pppppcStack_198;
  code *****pppppcStack_190;
  code *****pppppcStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  code *****pppppcStack_170;
  code *****pppppcStack_168;
  undefined7 uStack_160;
  char cStack_159;
  code *****pppppcStack_158;
  code *****pppppcStack_150;
  undefined **ppuStack_148;
  code *****pppppcStack_140;
  code *****pppppcStack_110;
  undefined **ppuStack_108;
  code *****pppppcStack_100;
  code *****pppppcStack_d0;
  code *****pppppcStack_c8;
  long *plStack_c0;
  long lStack_b8;
  code *****pppppcStack_b0;
  undefined **ppuStack_a8;
  code *****pppppcStack_a0;
  code *****pppppcStack_98;
  long *plStack_90;
  long lStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcStack_158 = (code *****)param_2;
  func_0x00010aa70acc();
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[5])(param_2,&PTR_s_hash_110c4e4e0,0);
  param_1[0x2b] = (code *****)ppppppcVar15;
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0xb])(param_2,&PTR_DAT_110c4de30,0);
  *(char *)((long)param_1 + 0x1ba) = (char)ppppppcVar15;
  pppppppcVar14 = (code *******)0x0;
  (*(code *)(*param_2)[0x15])(&pppppcStack_d0,param_2,&PTR_DAT_110c4de50,&UNK_10f6937f5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x25,&pppppcStack_d0);
  if ((long)plStack_c0 < 0) {
    __ZdlPv(pppppcStack_d0);
  }
  ppuVar13 = (undefined **)0x0;
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[7])(param_2,&PTR_DAT_110c4de70);
  *(int *)((long)param_1 + 0x1bc) = (int)ppppppcVar15;
  (*(code *)(*param_2)[0x42])(param_2,&PTR_s_provider_110c4de90);
  (*(code *)(*param_2)[0x4b])(&pppppcStack_d0,param_2,0);
  ppppppcVar15 = &pppppcStack_170;
  if ((code ******)pppppcStack_d0 != (code ******)0x0) {
    ppuVar13 = &PTR_DAT_110bb3218;
    pppppppcVar14 = (code *******)0x0;
    ppppppcVar5 = (code ******)pppppcStack_d0;
    ___dynamic_cast(pppppcStack_d0,&PTR_DAT_110b9fe10);
    ppppppcVar15 = &pppppcStack_170;
    if (ppppppcVar5 != (code ******)0x0) {
      pppppcStack_168 = pppppcStack_c8;
      ppppppcVar15 = &pppppcStack_d0;
      pppppcStack_170 = (code *****)ppppppcVar5;
    }
  }
  *ppppppcVar15 = (code *****)0x0;
  ppppppcVar15[1] = (code *****)0x0;
  pppppcVar25 = pppppcStack_c8;
  if ((code ******)pppppcStack_c8 != (code ******)0x0) {
    ppppppcVar15 = (code ******)(pppppcStack_c8 + 1);
    do {
      pppppcVar18 = *ppppppcVar15;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
      if (bVar4) {
        *ppppppcVar15 = (code *****)((long)pppppcVar18 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (pppppcVar18 == (code *****)0x0) {
      (*(code *)(*pppppcStack_c8)[2])(pppppcStack_c8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar25);
    }
  }
  pppppcVar18 = pppppcStack_168;
  pppppcVar25 = pppppcStack_170;
  pppppcStack_170 = (code *****)0x0;
  pppppcStack_168 = (code *****)0x0;
  pppppcVar24 = param_1[0x1d];
  param_1[0x1d] = pppppcVar18;
  param_1[0x1c] = pppppcVar25;
  if (pppppcVar24 != (code *****)0x0) {
    pppppcVar25 = pppppcVar24 + 1;
    do {
      ppppcVar19 = *pppppcVar25;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pppppcVar25,0x10);
      if (bVar4) {
        *pppppcVar25 = (code ****)((long)ppppcVar19 + -1);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (ppppcVar19 == (code ****)0x0) {
      (*(code *)(*pppppcVar24)[2])(pppppcVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar24);
    }
  }
  pppppcVar25 = pppppcStack_168;
  if (pppppcStack_168 != (code *****)0x0) {
    plVar26 = (long *)(pppppcStack_168 + 1);
    do {
      lVar20 = *plVar26;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)((long)*pppppcStack_168 + 0x10))(pppppcStack_168);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar25);
    }
  }
  (*(code *)(*param_2)[0x44])(param_2);
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110c4deb0);
  if ((int)ppppppcVar15 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110c4deb0);
    ppppppcVar15 = param_2;
    (*(code *)(*param_2)[0x41])();
    func_0x00010a3b6a84(param_1 + 0x20);
    if ((uint)ppppppcVar15 != 0) {
      unaff_x22 = (code *****)0x0;
      unaff_x26 = (undefined **)&pppppcStack_d0;
      unaff_x25 = (code *)&pppppcStack_b0;
      unaff_x23 = &PTR_DAT_110c4e500;
      unaff_x27 = FUN_10ab74568;
      unaff_x28 = &PTR_FUN_110c4e810;
      unaff_x24 = &PTR_DAT_110c4e520;
      do {
        (*(code *)(*param_2)[0x43])(param_2,unaff_x22);
        (*(code *)(*param_2)[0x14])(&pppppcStack_170,param_2,&PTR_DAT_110c4e500);
        pppppcStack_d0 = (code *****)param_1;
        if (cStack_159 < '\0') {
          func_0x000107c3192c(&pppppcStack_c8,pppppcStack_170,pppppcStack_168);
        }
        else {
          plStack_c0 = (long *)pppppcStack_168;
          pppppcStack_c8 = pppppcStack_170;
          lStack_b8 = CONCAT17(cStack_159,uStack_160);
        }
        pppppcStack_b0 = (code *****)FUN_10ab74568;
        ppuStack_a8 = &PTR_FUN_110c4e810;
        plStack_90 = plStack_c0;
        pppppcStack_98 = pppppcStack_c8;
        lStack_88 = lStack_b8;
        pppppcStack_c8 = (code *****)0x0;
        plStack_c0 = (long *)0x0;
        lStack_b8 = 0;
        ppuVar13 = (undefined **)&pppppcStack_b0;
        pppppppcVar14 = (code *******)0x0;
        pppppcStack_a0 = pppppcStack_d0;
        FUN_10a1f46a0(param_2,&PTR_DAT_110c4e520);
        (*(code *)*ppuStack_a8)(&ppuStack_a8);
        if (lStack_b8 < 0) {
          __ZdlPv(pppppcStack_c8);
        }
        (*(code *)(*param_2)[0x44])(param_2);
        if (cStack_159 < '\0') {
          __ZdlPv(pppppcStack_170);
        }
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code *****)(ulong)uVar1;
      } while ((uint)ppppppcVar15 != uVar1);
    }
    (*(code *)(*param_2)[0x44])(param_2);
  }
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110c4ded0);
  if ((int)ppppppcVar15 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110c4ded0);
    ppppppcVar15 = param_2;
    (*(code *)(*param_2)[0x41])();
    unaff_x22 = param_1[0x31];
    pppppcVar25 = param_1[0x32];
    while (pppppcVar25 != unaff_x22) {
      pppppcVar25 = pppppcVar25 + -2;
      FUN_10a3b772c();
    }
    param_1[0x32] = unaff_x22;
    if ((uint)ppppppcVar15 != 0) {
      unaff_x22 = (code *****)0x0;
      unaff_x24 = (undefined **)&pppppcStack_110;
      unaff_x25 = FUN_10ab74828;
      unaff_x26 = &PTR_FUN_110c4e828;
      unaff_x23 = &PTR_DAT_110c4e520;
      do {
        (*(code *)(*param_2)[0x43])(param_2,unaff_x22);
        pppppcStack_110 = (code *****)FUN_10ab74828;
        ppuStack_108 = &PTR_FUN_110c4e828;
        ppuVar13 = (undefined **)&pppppcStack_110;
        pppppppcVar14 = (code *******)0x0;
        pppppcStack_100 = (code *****)param_1;
        FUN_10a3982fc(param_2,&PTR_DAT_110c4e520);
        (*(code *)*ppuStack_108)(&ppuStack_108);
        (*(code *)(*param_2)[0x44])(param_2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code *****)(ulong)uVar1;
      } while ((uint)ppppppcVar15 != uVar1);
    }
    (*(code *)(*param_2)[0x44])(param_2);
  }
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_s_types_110c4e540);
  if ((int)ppppppcVar15 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_s_types_110c4e540);
    ppppppcVar15 = param_2;
    (*(code *)(*param_2)[0x41])();
    unaff_x22 = param_1[0x34];
    pppppcVar25 = param_1[0x35];
    while (pppppcVar25 != unaff_x22) {
      pppppcVar25 = pppppcVar25 + -2;
      FUN_10a3b772c();
    }
    param_1[0x35] = unaff_x22;
    if ((uint)ppppppcVar15 != 0) {
      unaff_x22 = (code *****)0x0;
      unaff_x24 = (undefined **)&pppppcStack_150;
      unaff_x25 = FUN_10ab749f0;
      unaff_x26 = &PTR_FUN_110c4e840;
      unaff_x23 = &PTR_DAT_110c4e520;
      do {
        (*(code *)(*param_2)[0x43])(param_2,unaff_x22);
        pppppcStack_150 = (code *****)FUN_10ab749f0;
        ppuStack_148 = &PTR_FUN_110c4e840;
        ppuVar13 = (undefined **)&pppppcStack_150;
        pppppppcVar14 = (code *******)0x0;
        pppppcStack_140 = (code *****)param_1;
        FUN_10a3982fc(param_2,&PTR_DAT_110c4e520);
        (*(code *)*ppuStack_148)(&ppuStack_148);
        (*(code *)(*param_2)[0x44])(param_2);
        uVar1 = (int)unaff_x22 + 1;
        unaff_x22 = (code *****)(ulong)uVar1;
      } while ((uint)ppppppcVar15 != uVar1);
    }
    (*(code *)(*param_2)[0x44])(param_2);
  }
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0x40])(param_2,&PTR_DAT_110c4def0);
  if ((int)ppppppcVar15 != 0) {
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110c4def0);
    pppppcStack_c8 = (code *****)0x6;
    pppppcStack_d0 = (code *****)&DAT_10f5aee30;
    lStack_b8 = 0x8e5f060d00000000;
    plStack_c0 = (long *)0x14c5443cd;
    FUN_10ab67a54(&pppppcStack_158,param_1,&pppppcStack_d0,0);
    pppppcStack_c8 = (code *****)0x4;
    pppppcStack_d0 = (code *****)&DAT_10f693f79;
    lStack_b8 = 0x1edc375400000000;
    plStack_c0 = (long *)0x150654;
    FUN_10ab67a54(&pppppcStack_158,param_1,&pppppcStack_d0,1);
    pppppcStack_c8 = (code *****)0x5;
    pppppcStack_d0 = (code *****)&DAT_10f305a7e;
    lStack_b8 = 0xd4f6b00100000000;
    plStack_c0 = (long *)0x141534c1;
    FUN_10ab67a54(&pppppcStack_158,param_1,&pppppcStack_d0,2);
    pppppcStack_c8 = (code *****)0xa;
    pppppcStack_d0 = (code *****)&DAT_10f345e40;
    lStack_b8 = -0x5c4891bc00000000;
    plStack_c0 = (long *)0x48f5102520d3144;
    ppuVar13 = (undefined **)&pppppcStack_d0;
    pppppppcVar14 = (code *******)0x3;
    FUN_10ab67a54(&pppppcStack_158,param_1);
    (*(code *)(*param_2)[0x44])(param_2);
  }
  pppppcVar25 = param_1[10];
  ppuVar11 = &PTR_DAT_110c4df50;
  ppppppcVar15 = param_2;
  (*(code *)(*param_2)[0x40])();
  if ((int)ppppppcVar15 != 0) {
    unaff_x22 = (code *****)0xd0;
    __Znwm();
    unaff_x22[1] = (code ****)0x0;
    unaff_x22[2] = (code ****)0x0;
    pppppcVar18 = unaff_x22 + 3;
    *unaff_x22 = (code ****)&PTR_DAT_110c4e868;
    FUN_10aaf39f4(pppppcVar18,pppppcVar25);
    pppppcVar25 = param_1[0x1f];
    param_1[0x1e] = pppppcVar18;
    param_1[0x1f] = unaff_x22;
    if (pppppcVar25 != (code *****)0x0) {
      pppppcVar18 = pppppcVar25 + 1;
      do {
        ppppcVar19 = *pppppcVar18;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppcVar18,0x10);
        if (bVar4) {
          *pppppcVar18 = (code ****)((long)ppppcVar19 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppcVar19 == (code ****)0x0) {
        (*(code *)(*pppppcVar25)[2])(pppppcVar25);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppcVar25);
      }
    }
    (*(code *)(*param_2)[0x42])(param_2,&PTR_DAT_110c4df50);
    ppuVar11 = (undefined **)param_1[0x1e];
    (*(code *)(*param_2)[0x3c])(param_2);
    ppppppcVar15 = param_2;
    (*(code *)(*param_2)[0x44])();
  }
  if (*(int *)(param_1[10][0x144] + 3) < 0xd2) {
    param_2 = (code ******)param_1[10][0x10e];
    FUN_10a3b945c(&pppppcStack_d0,param_1);
    ppppppcVar15 = param_2 + 0x56;
    ppuVar11 = (undefined **)&pppppcStack_d0;
    ppuVar13 = (undefined **)&pppppcStack_d0;
    FUN_10a48fac0();
    param_1 = (code ******)pppppcStack_c8;
    if ((code ******)pppppcStack_c8 != (code ******)0x0) {
      ppppppcVar5 = (code ******)(pppppcStack_c8 + 1);
      do {
        pppppcVar25 = *ppppppcVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar5,0x10);
        if (bVar4) {
          *ppppppcVar5 = (code *****)((long)pppppcVar25 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppcVar25 == (code *****)0x0) {
        (*(code *)(*pppppcStack_c8)[2])(pppppcStack_c8);
        ppppppcVar15 = param_1;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a3b772c(&pppppcStack_d0);
  ppppppcVar5 = ppppppcVar15;
  __Unwind_Resume();
  pcStack_178 = FUN_10ab67a54;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppcVar25 = *ppppppcVar5;
  ppuVar12 = ppuVar13;
  pppppppcVar29 = pppppppcVar14;
  ppuStack_1d0 = unaff_x28;
  pcStack_1c8 = unaff_x27;
  pppppcStack_1c0 = (code *****)unaff_x26;
  pppppcStack_1b8 = (code *****)unaff_x25;
  ppppppcStack_1b0 = (code ******)unaff_x24;
  ppppppcStack_1a8 = (code ******)unaff_x23;
  ppppcStack_1a0 = (code ****)unaff_x22;
  pppppcStack_198 = (code *****)ppppppcVar15;
  pppppcStack_190 = (code *****)param_2;
  pppppcStack_188 = (code *****)param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  (*(code *)(*pppppcVar25)[0x40])();
  pppppppcVar6 = (code *******)unaff_x23;
  if ((int)pppppcVar25 == 0) {
LAB_10ab67f08:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
      return;
    }
    ___stack_chk_fail();
    unaff_x23 = (undefined **)pppppppcVar6;
  }
  else {
    (*(code *)(**ppppppcVar5)[0x42])(*ppppppcVar5,ppuVar13);
    pppppcVar25 = *ppppppcVar5;
    (*(code *)(*pppppcVar25)[0x41])();
    uStack_28c = (uint)pppppcVar25;
    pppppppcVar6 = (code *******)(ppuVar11 + 0x2c);
    ppuVar12 = (undefined **)pppppppcVar14;
    ppppppcStack_298 = (code ******)ppuVar11;
    FUN_10ab71aa4();
    if (pppppppcVar6 != (code *******)0x0) {
      unaff_x24 = (undefined **)(pppppppcVar6 + 3);
      if (pppppppcVar6[6] != (code ******)0x0) {
        func_0x00010ab71a68(pppppppcVar6[5]);
        pppppppcVar6[5] = (code ******)0x0;
        ppppppcVar15 = pppppppcVar6[4];
        if (ppppppcVar15 != (code ******)0x0) {
          ppppppcVar21 = (code ******)0x0;
          do {
            *(code ******)((long)*unaff_x24 + ppppppcVar21 * 8) = (code *****)0x0;
            ppppppcVar21 = (code ******)((long)ppppppcVar21 + 1);
          } while (ppppppcVar15 != ppppppcVar21);
        }
        pppppppcVar6[6] = (code ******)0x0;
      }
      uStack_29c = SUB84(pppppppcVar14,0);
      if (uStack_28c != 0) {
        unaff_x25 = (code *)0x0;
        ppuVar13 = (undefined **)&ppppppcStack_288;
        ppppppcStack_2a8 = (code ******)(pppppppcVar6 + 5);
        do {
          (*(code *)(**ppppppcVar5)[0x43])(*ppppppcVar5,unaff_x25);
          (*(code *)(**ppppppcVar5)[0x14])(&ppppppcStack_238,*ppppppcVar5,&PTR_DAT_110c4e560);
          pppppcStack_240 = (code *****)0x0;
          ppppcStack_258 = (code ****)0x0;
          ppppcStack_260 = (code ****)0x0;
          ppppcStack_248 = (code ****)0x0;
          ppppcStack_250 = (code ****)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppppcStack_260,&ppppppcStack_238);
          pppppppcVar14 = (code *******)unaff_x24;
          func_0x000107c2b05c(unaff_x24,&ppppppcStack_238);
          pppppppcVar29 = (code *******)pppppppcVar6[4];
          if (pppppppcVar29 != (code *******)0x0) {
            puVar27 = (undefined *)((long)pppppppcVar29 + -1);
            if (((ulong)pppppppcVar29 & (ulong)puVar27) == 0) {
              ppuVar11 = (undefined **)((ulong)puVar27 & (ulong)pppppppcVar14);
            }
            else {
              ppuVar11 = (undefined **)pppppppcVar14;
              if (pppppppcVar29 <= pppppppcVar14) {
                uVar17 = 0;
                if (pppppppcVar29 != (code *******)0x0) {
                  uVar17 = (ulong)pppppppcVar14 / (ulong)pppppppcVar29;
                }
                ppuVar11 = (undefined **)((long)pppppppcVar14 - uVar17 * (long)pppppppcVar29);
              }
            }
            if (*(code ******)((long)*unaff_x24 + ppuVar11 * 8) != (code *****)0x0) {
              for (ppppcVar19 = **(code ******)((long)*unaff_x24 + ppuVar11 * 8);
                  ppppcVar19 != (code ****)0x0; ppppcVar19 = (code ****)*ppppcVar19) {
                pppppppcVar16 = (code *******)ppppcVar19[1];
                if (pppppppcVar16 == pppppppcVar14) {
                  pppppppcVar16 = (code *******)unaff_x24;
                  func_0x000107c2b068(unaff_x24,ppppcVar19 + 2,&ppppppcStack_238);
                  if (((ulong)pppppppcVar16 & 1) != 0) goto LAB_10ab67dc8;
                }
                else {
                  if (((ulong)pppppppcVar29 & (ulong)puVar27) == 0) {
                    pppppppcVar16 = (code *******)((ulong)pppppppcVar16 & (ulong)puVar27);
                  }
                  else if (pppppppcVar29 <= pppppppcVar16) {
                    uVar17 = 0;
                    if (pppppppcVar29 != (code *******)0x0) {
                      uVar17 = (ulong)pppppppcVar16 / (ulong)pppppppcVar29;
                    }
                    pppppppcVar16 =
                         (code *******)((long)pppppppcVar16 - uVar17 * (long)pppppppcVar29);
                  }
                  if (pppppppcVar16 != (code *******)ppuVar11) break;
                }
              }
            }
          }
          ppppppcVar15 = (code ******)0x50;
          __Znwm();
          ppppcStack_278 = (code ****)0x0;
          *ppppppcVar15 = (code *****)0x0;
          ppppppcVar15[1] = (code *****)pppppppcVar14;
          ppppppcStack_288 = ppppppcVar15;
          ppppppcStack_280 = (code ******)unaff_x24;
          if (cStack_221 < '\0') {
            func_0x000107c3192c(ppppppcVar15 + 2,ppppppcStack_238,ppppcStack_230);
          }
          else {
            ppppppcVar15[3] = (code *****)ppppcStack_230;
            ppppppcVar15[2] = (code *****)ppppppcStack_238;
            ppppppcVar15[4] = (code *****)CONCAT17(cStack_221,uStack_228);
          }
          if ((long)ppppcStack_250 < 0) {
            func_0x000107c3192c(ppppppcVar15 + 5,ppppcStack_260,ppppcStack_258);
          }
          else {
            ppppppcVar15[6] = (code *****)ppppcStack_258;
            ppppppcVar15[5] = (code *****)ppppcStack_260;
            ppppppcVar15[7] = (code *****)ppppcStack_250;
          }
          ppppppcVar15[9] = pppppcStack_240;
          ppppppcVar15[8] = (code *****)ppppcStack_248;
          if ((code ******)pppppcStack_240 != (code ******)0x0) {
            ppppppcVar21 = (code ******)(pppppcStack_240 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar21,0x10);
              if (bVar4) {
                *ppppppcVar21 = (code *****)((long)*ppppppcVar21 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppcStack_278 = (code ****)CONCAT71(ppppcStack_278._1_7_,1);
          if ((pppppppcVar29 == (code *******)0x0) ||
             (*(float *)(pppppppcVar6 + 7) * (float)pppppppcVar29 <
              (float)(undefined *)((long)pppppppcVar6[6] + 1))) {
            uVar17 = 1;
            if ((code *******)0x2 < pppppppcVar29) {
              uVar17 = (ulong)(((ulong)pppppppcVar29 & (ulong)((long)pppppppcVar29 + -1)) != 0);
            }
            uVar17 = uVar17 | (long)pppppppcVar29 << 1;
            uVar22 = (ulong)((float)(undefined *)((long)pppppppcVar6[6] + 1) /
                            *(float *)(pppppppcVar6 + 7));
            if (uVar17 <= uVar22) {
              uVar17 = uVar22;
            }
            FUN_10ab71794(unaff_x24,uVar17);
            pppppppcVar29 = (code *******)pppppppcVar6[4];
            if (((ulong)pppppppcVar29 & (ulong)((long)pppppppcVar29 + -1)) == 0) {
              ppuVar11 = (undefined **)((ulong)((long)pppppppcVar29 + -1) & (ulong)pppppppcVar14);
            }
            else {
              ppuVar11 = (undefined **)pppppppcVar14;
              if (pppppppcVar29 <= pppppppcVar14) {
                uVar17 = 0;
                if (pppppppcVar29 != (code *******)0x0) {
                  uVar17 = (ulong)pppppppcVar14 / (ulong)pppppppcVar29;
                }
                ppuVar11 = (undefined **)((long)pppppppcVar14 - uVar17 * (long)pppppppcVar29);
              }
            }
          }
          ppppppcVar21 = (code ******)*unaff_x24;
          pppppcVar25 = ppppppcVar21[(long)ppuVar11];
          if (pppppcVar25 == (code *****)0x0) {
            *ppppppcVar15 = *ppppppcStack_2a8;
            *ppppppcStack_2a8 = (code *****)ppppppcVar15;
            ppppppcVar21[(long)ppuVar11] = (code *****)ppppppcStack_2a8;
            if (*ppppppcVar15 != (code *****)0x0) {
              pppppppcVar14 = (code *******)(*ppppppcVar15)[1];
              if (((ulong)pppppppcVar29 & (ulong)((long)pppppppcVar29 + -1)) == 0) {
                pppppppcVar14 =
                     (code *******)((ulong)pppppppcVar14 & (ulong)((long)pppppppcVar29 + -1));
              }
              else if (pppppppcVar29 <= pppppppcVar14) {
                uVar17 = 0;
                if (pppppppcVar29 != (code *******)0x0) {
                  uVar17 = (ulong)pppppppcVar14 / (ulong)pppppppcVar29;
                }
                pppppppcVar14 = (code *******)((long)pppppppcVar14 - uVar17 * (long)pppppppcVar29);
              }
              *(code *******)((long)*unaff_x24 + pppppppcVar14 * 8) = ppppppcVar15;
            }
          }
          else {
            *ppppppcVar15 = (code *****)*pppppcVar25;
            *pppppcVar25 = (code ****)ppppppcVar15;
          }
          pppppppcVar6[6] = (code ******)((long)pppppppcVar6[6] + 1);
LAB_10ab67dc8:
          pppppcVar25 = *ppppppcVar5;
          ppppppcStack_288 = ppppppcStack_298;
          if (cStack_221 < '\0') {
            func_0x000107c3192c(&ppppppcStack_280,ppppppcStack_238,ppppcStack_230);
          }
          else {
            ppppcStack_278 = ppppcStack_230;
            ppppppcStack_280 = ppppppcStack_238;
            lStack_270 = CONCAT17(cStack_221,uStack_228);
          }
          uStack_268 = (undefined1)uStack_29c;
          pcStack_220 = FUN_10ab71b48;
          ppuStack_218 = &PTR_FUN_110c4e580;
          ppppcStack_200 = ppppcStack_278;
          ppppppcStack_208 = ppppppcStack_280;
          lStack_1f8 = lStack_270;
          ppppppcStack_280 = (code ******)0x0;
          ppppcStack_278 = (code ****)0x0;
          lStack_270 = 0;
          ppuVar12 = &PTR_DAT_110c4e520;
          pppppppcVar29 = (code *******)0x0;
          ppppppcStack_210 = ppppppcStack_288;
          uStack_1f0 = uStack_268;
          FUN_10a2c9d5c(pppppcVar25,&PTR_DAT_110c4e520,&pcStack_220);
          (*(code *)*ppuStack_218)(&ppuStack_218);
          if (lStack_270 < 0) {
            __ZdlPv(ppppppcStack_280);
          }
          (*(code *)(**ppppppcVar5)[0x44])();
          unaff_x26 = (undefined **)pppppcStack_240;
          if ((code ******)pppppcStack_240 != (code ******)0x0) {
            ppppppcVar15 = (code ******)(pppppcStack_240 + 1);
            do {
              pppppcVar25 = *ppppppcVar15;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppcVar15,0x10);
              if (bVar4) {
                *ppppppcVar15 = (code *****)((long)pppppcVar25 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppcVar25 == (code *****)0x0) {
              (*(code *)(*pppppcStack_240)[2])(pppppcStack_240);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x26);
            }
          }
          if ((long)ppppcStack_250 < 0) {
            __ZdlPv(ppppcStack_260);
          }
          if (cStack_221 < '\0') {
            __ZdlPv(ppppppcStack_238);
          }
          uVar1 = (int)unaff_x25 + 1;
          unaff_x25 = (code *)(ulong)uVar1;
        } while (uVar1 != uStack_28c);
      }
      (*(code *)(**ppppppcVar5)[0x44])();
      goto LAB_10ab67f08;
    }
  }
  ppuVar7 = (undefined **)&UNK_10f639994;
  FUN_109ffdddc();
  if (*(char *)((long)unaff_x26 + 0x27) < '\0') {
    __ZdlPv(unaff_x26[2]);
  }
  func_0x00010ab71964(&ppppppcStack_288);
  func_0x00010ab719f8(&ppppcStack_260);
  if (cStack_221 < '\0') {
    __ZdlPv(ppppppcStack_238);
  }
  ppuVar8 = ppuVar7;
  __Unwind_Resume();
  pcStack_2b8 = FUN_10ab67fd8;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcStack_340 = (code ******)ppuVar12;
  pppppcStack_300 = (code *****)unaff_x26;
  pppppcStack_2f8 = (code *****)unaff_x25;
  ppppppcStack_2f0 = (code ******)unaff_x24;
  ppppppcStack_2e8 = (code ******)unaff_x23;
  ppppppcStack_2e0 = (code ******)ppuVar13;
  ppppppcStack_2d8 = (code ******)ppuVar11;
  pppppcStack_2d0 = (code *****)ppppppcVar5;
  ppuStack_2c8 = ppuVar7;
  ppuStack_2c0 = &puStack_180;
  func_0x00010aa70b70();
  FUN_10a00d760(ppuVar12,&PTR_DAT_110c4de50,ppuVar8 + 0x25);
  (*(code *)*(code ******)((long)*ppuVar12 + 0x58))(ppuVar12,&PTR_s_hash_110c4e4e0,ppuVar8[0x2b]);
  (*(code *)*(code ******)((long)*ppuVar12 + 0x70))
            (ppuVar12,&PTR_DAT_110c4de30,*(undefined *)((long)ppuVar8 + 0x1ba));
  (*(code *)*(code ******)((long)*ppuVar12 + 0x40))
            (ppuVar12,&PTR_DAT_110c4de70,*(undefined4 *)((long)ppuVar8 + 0x1bc));
  (*(code *)*(code ******)((long)*ppuVar12 + 0x118))
            (ppuVar12,&PTR_s_provider_110c4de90,ppuVar8[0x1c]);
  pppppppcVar14 = (code *******)ppuVar8[0x1e];
  (*(code *)*(code ******)((long)*ppuVar12 + 0x118))(ppuVar12,&PTR_DAT_110c4df50,pppppppcVar14);
  (*(code *)*(code ******)((long)*ppuVar12 + 0x18))(ppuVar12,&PTR_DAT_110c4deb0);
  puVar28 = (undefined8 *)ppuVar8[0x22];
  if (puVar28 != (undefined8 *)0x0) {
    ppuVar11 = &PTR_DAT_110c4e500;
    ppuVar13 = (undefined **)&UNK_10dd5b8f9;
    unaff_x23 = &PTR_DAT_110c4e520;
    unaff_x24 = (undefined **)&DAT_10f638986;
    do {
      ppppppcVar15 = (code ******)(puVar28 + 2);
      (*(code *)*(code ******)((long)*ppuVar12 + 0x10))(ppuVar12);
      FUN_10a00d760(ppuVar12,&PTR_DAT_110c4e500,ppppppcVar15);
      ppuVar7 = ppuVar8 + 0x20;
      pppppcStack_330 = (code *****)ppppppcVar15;
      FUN_10a3b830c(ppuVar7,ppppppcVar15,&UNK_10dd5b8f9,&pppppcStack_330,&uStack_331);
      pppppppcVar14 = (code *******)(ppuVar7 + 8);
      pppppppcVar29 = (code *******)unaff_x24;
      FUN_10a398a58(ppuVar12,&PTR_DAT_110c4e520,pppppppcVar14,&DAT_10f638986,5);
      (*(code *)*(code ******)((long)*ppuVar12 + 0x20))(ppuVar12);
      puVar28 = (undefined8 *)*puVar28;
    } while (puVar28 != (undefined8 *)0x0);
  }
  (*(code *)*(code ******)((long)*ppuVar12 + 0x20))(ppuVar12);
  lVar20 = *(long *)(ppuVar8[10] + 0xa20);
  if (*(char *)(lVar20 + 0x21) == '\x01') {
    if ((*(byte *)(lVar20 + 0x20) & 1) != 0) goto LAB_10ab682a0;
LAB_10ab68190:
    (*(code *)*(code ******)((long)*ppuVar12 + 0x18))(ppuVar12,&PTR_DAT_110c4ded0);
    pppppppcVar6 = (code *******)ppuVar8[0x31];
    unaff_x24 = (undefined **)ppuVar8[0x32];
    if (pppppppcVar6 != (code *******)unaff_x24) {
      ppuVar13 = &PTR_DAT_110c4e520;
      do {
        (*(code *)*(code ******)((long)*ppuVar12 + 0x10))(ppuVar12);
        pppppppcVar14 = pppppppcVar6;
        pppppppcVar29 = (code *******)&UNK_10f69410f;
        FUN_10a398908(ppuVar12,&PTR_DAT_110c4e520,pppppppcVar6,&UNK_10f69410f,0x11);
        (*(code *)*(code ******)((long)*ppuVar12 + 0x20))(ppuVar12);
        pppppppcVar6 = pppppppcVar6 + 2;
      } while (pppppppcVar6 != (code *******)unaff_x24);
    }
    (*(code *)*(code ******)((long)*ppuVar12 + 0x20))(ppuVar12);
    ppuVar7 = &PTR_s_types_110c4e540;
    (*(code *)*(code ******)((long)*ppuVar12 + 0x18))(ppuVar12);
    ppuVar11 = (undefined **)ppuVar8[0x34];
    unaff_x23 = (undefined **)ppuVar8[0x35];
    if (ppuVar11 != unaff_x23) {
      ppuVar8 = &PTR_DAT_110c4e520;
      ppuVar13 = (undefined **)&UNK_10f69410f;
      do {
        (*(code *)*(code ******)((long)*ppuVar12 + 0x10))(ppuVar12);
        ppuVar7 = ppuVar8;
        pppppppcVar14 = (code *******)ppuVar11;
        pppppppcVar29 = (code *******)ppuVar13;
        FUN_10a398908(ppuVar12,&PTR_DAT_110c4e520,ppuVar11,&UNK_10f69410f,0x11);
        (*(code *)*(code ******)((long)*ppuVar12 + 0x20))(ppuVar12);
        ppuVar11 = ppuVar11 + 2;
      } while (ppuVar11 != unaff_x23);
    }
  }
  else {
    if (*(int *)(lVar20 + 0x18) < 0xe9) goto LAB_10ab68190;
LAB_10ab682a0:
    (*(code *)*(code ******)((long)*ppuVar12 + 0x18))(ppuVar12,&PTR_DAT_110c4def0);
    uStack_328 = 6;
    pppppcStack_330 = (code *****)&DAT_10f5aee30;
    uStack_318 = 0x8e5f060d00000000;
    uStack_320 = 0x14c5443cd;
    FUN_10ab68390(&ppppppcStack_340,ppuVar8,&pppppcStack_330,0);
    uStack_328 = 4;
    pppppcStack_330 = (code *****)&DAT_10f693f79;
    uStack_318 = 0x1edc375400000000;
    uStack_320 = 0x150654;
    FUN_10ab68390(&ppppppcStack_340,ppuVar8,&pppppcStack_330,1);
    uStack_328 = 5;
    pppppcStack_330 = (code *****)&DAT_10f305a7e;
    uStack_318 = 0xd4f6b00100000000;
    uStack_320 = 0x141534c1;
    FUN_10ab68390(&ppppppcStack_340,ppuVar8,&pppppcStack_330,2);
    uStack_328 = 10;
    pppppcStack_330 = (code *****)&DAT_10f345e40;
    uStack_318 = 0xa3b76e4400000000;
    uStack_320 = 0x48f5102520d3144;
    pppppppcVar14 = (code *******)&pppppcStack_330;
    pppppppcVar29 = (code *******)0x3;
    ppuVar7 = ppuVar8;
    FUN_10ab68390(&ppppppcStack_340,ppuVar8,pppppppcVar14);
  }
  pppppppcVar6 = (code *******)ppuVar12;
  (*(code *)*(code ******)((long)*ppuVar12 + 0x20))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
    return;
  }
  ___stack_chk_fail();
  pcStack_348 = FUN_10ab68390;
  ppppppcStack_380 = (code ******)unaff_x24;
  ppppppcStack_378 = (code ******)unaff_x23;
  ppppppcStack_370 = (code ******)ppuVar13;
  ppppppcStack_368 = (code ******)ppuVar11;
  ppuStack_360 = ppuVar8;
  ppppppcStack_358 = (code ******)ppuVar12;
  pppuStack_350 = &ppuStack_2c0;
  (*(code *)(**pppppppcVar6)[3])(*pppppppcVar6,pppppppcVar14);
  ppuVar7 = ppuVar7 + 0x2c;
  FUN_10ab71aa4(ppuVar7,pppppppcVar29);
  if (ppuVar7 != (undefined **)0x0) {
    FUN_10ab714a4(alStack_3c8,ppuVar7 + 3);
    if (plStack_3b8 != (long *)0x0) {
      plVar26 = plStack_3b8;
      do {
        (*(code *)(**pppppppcVar6)[2])();
        ppuVar13 = &PTR_DAT_110c4e560;
        FUN_10a00d760(*pppppppcVar6,&PTR_DAT_110c4e560,plVar26 + 2);
        plVar9 = (long *)plVar26[8];
        if (plVar9 != (long *)0x0) {
          ppppppcVar15 = *pppppppcVar6;
          (**(code **)(*plVar9 + 0x38))();
          plStack_398 = (long *)plVar26[9];
          lStack_3a0 = plVar26[8];
          if (plVar26[9] != 0) {
            plVar2 = (long *)(plVar26[9] + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = *plVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plStack_390 = plVar9;
          ppuStack_388 = ppuVar13;
          (*(code *)(*ppppppcVar15)[0x21])(ppppppcVar15,&PTR_DAT_110c4e520,&lStack_3a0,&plStack_390)
          ;
          plVar9 = plStack_398;
          if (plStack_398 != (long *)0x0) {
            plVar2 = plStack_398 + 1;
            do {
              lVar20 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar20 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plStack_398 + 0x10))(plStack_398);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
            }
          }
        }
        (*(code *)(**pppppppcVar6)[4])();
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
    }
    (*(code *)(**pppppppcVar6)[4])();
    func_0x00010ab71a68(plStack_3b8);
    lVar20 = alStack_3c8[0];
    alStack_3c8[0] = 0;
    if (lVar20 != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar27 = &UNK_10f639994;
  FUN_109ffdddc();
  func_0x00010ab71a30(alStack_3c8);
  puVar10 = puVar27;
  __Unwind_Resume();
  pcStack_3d8 = FUN_10ab68540;
  ppppppcStack_3f0 = (code ******)pppppppcVar29;
  puStack_3e8 = puVar27;
  ppppuStack_3e0 = &pppuStack_350;
  if (*(long *)(puVar10 + 0x178) != 0) {
    func_0x00010ab740c8(*(undefined8 *)(puVar10 + 0x170));
    *(undefined8 *)(puVar10 + 0x170) = 0;
    lVar20 = *(long *)(puVar10 + 0x168);
    if (lVar20 != 0) {
      lVar23 = 0;
      do {
        *(undefined8 *)(*(long *)(puVar10 + 0x160) + lVar23 * 8) = 0;
        lVar23 = lVar23 + 1;
      } while (lVar20 != lVar23);
    }
    *(undefined8 *)(puVar10 + 0x178) = 0;
  }
  lVar20 = *(long *)(*(long *)(puVar10 + 0x50) + 0xa20);
  if (*(char *)(lVar20 + 0x21) == '\x01') {
    if ((*(byte *)(lVar20 + 0x20) & 1) != 0) goto LAB_10ab685ec;
  }
  else if (0xe8 < *(int *)(lVar20 + 0x18)) goto LAB_10ab685ec;
  lVar20 = *(long *)(puVar10 + 0x188);
  lVar23 = *(long *)(puVar10 + 400);
  while (lVar23 != lVar20) {
    lVar23 = lVar23 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar10 + 400) = lVar20;
  lVar20 = *(long *)(puVar10 + 0x1a0);
  lVar23 = *(long *)(puVar10 + 0x1a8);
  while (lVar23 != lVar20) {
    lVar23 = lVar23 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar10 + 0x1a8) = lVar20;
LAB_10ab685ec:
  FUN_10ab666f8(*(undefined8 *)(puVar10 + 0xf0));
  plVar26 = *(long **)(puVar10 + 0xf8);
  *(undefined8 *)(puVar10 + 0xf0) = 0;
  *(undefined8 *)(puVar10 + 0xf8) = 0;
  if (plVar26 != (long *)0x0) {
    plVar9 = plVar26 + 1;
    do {
      lVar20 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar26);
    }
  }
  FUN_10a0533bc(&lStack_400);
  if (lStack_400 != 0) {
    FUN_10aa88e9c(puVar10);
  }
  if (plStack_3f8 != (long *)0x0) {
    plVar26 = plStack_3f8 + 1;
    do {
      lVar20 = *plVar26;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar4) {
        *plVar26 = lVar20 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plStack_3f8 + 0x10))(plStack_3f8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_3f8);
    }
  }
  return;
}



/* Entry: 10ab67a54; end: 10ab67fd7;  */

void FUN_10ab67a54(undefined8 *param_1,undefined **param_2,undefined **param_3,long ******param_4)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long ******pppppplVar11;
  long ******pppppplVar12;
  long *****ppppplVar13;
  long ******pppppplVar14;
  ulong uVar15;
  long lVar16;
  long *****ppppplVar17;
  ulong uVar18;
  long ****pppplVar19;
  long lVar20;
  long ***ppplVar21;
  undefined **unaff_x23;
  long ******unaff_x24;
  ulong unaff_x25;
  long ****unaff_x26;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  long ******pppppplVar25;
  long lStack_290;
  long *plStack_288;
  long *****ppppplStack_280;
  undefined *puStack_278;
  undefined1 ***pppuStack_270;
  code *pcStack_268;
  long alStack_258 [2];
  long *plStack_248;
  long lStack_230;
  long *plStack_228;
  long *plStack_220;
  undefined **ppuStack_218;
  long *****ppppplStack_210;
  long *****ppppplStack_208;
  long *****ppppplStack_200;
  long *****ppppplStack_1f8;
  undefined **ppuStack_1f0;
  long *****ppppplStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  long *****ppppplStack_1d0;
  undefined1 uStack_1c1;
  long ****pppplStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_198;
  long ***ppplStack_190;
  ulong uStack_188;
  long *****ppppplStack_180;
  long *****ppppplStack_178;
  long *****ppppplStack_170;
  long *****ppppplStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long *****ppppplStack_138;
  undefined4 uStack_12c;
  long *****ppppplStack_128;
  uint uStack_11c;
  long *****ppppplStack_118;
  long *****ppppplStack_110;
  long ***ppplStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  long ***ppplStack_f0;
  long ***ppplStack_e8;
  long ***ppplStack_e0;
  long ***ppplStack_d8;
  long ***ppplStack_d0;
  long *****ppppplStack_c8;
  long ***ppplStack_c0;
  undefined7 uStack_b8;
  char cStack_b1;
  code *pcStack_b0;
  undefined **ppuStack_a8;
  long *****ppppplStack_a0;
  long *****ppppplStack_98;
  long ***ppplStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5 = (long *)*param_1;
  ppuVar10 = param_3;
  pppppplVar12 = param_4;
  (**(code **)(*plVar5 + 0x200))();
  pppppplVar11 = (long ******)unaff_x23;
  if ((int)plVar5 == 0) {
LAB_10ab67f08:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
    unaff_x23 = (undefined **)pppppplVar11;
  }
  else {
    (**(code **)(*(long *)*param_1 + 0x210))((long *)*param_1,param_3);
    plVar5 = (long *)*param_1;
    (**(code **)(*plVar5 + 0x208))();
    uStack_11c = (uint)plVar5;
    pppppplVar11 = (long ******)(param_2 + 0x2c);
    ppuVar10 = (undefined **)param_4;
    ppppplStack_128 = (long *****)param_2;
    FUN_10ab71aa4();
    if (pppppplVar11 != (long ******)0x0) {
      unaff_x24 = pppppplVar11 + 3;
      if (pppppplVar11[6] != (long *****)0x0) {
        func_0x00010ab71a68(pppppplVar11[5]);
        pppppplVar11[5] = (long *****)0x0;
        ppppplVar13 = pppppplVar11[4];
        if (ppppplVar13 != (long *****)0x0) {
          ppppplVar17 = (long *****)0x0;
          do {
            (*unaff_x24)[(long)ppppplVar17] = (long ****)0x0;
            ppppplVar17 = (long *****)((long)ppppplVar17 + 1);
          } while (ppppplVar13 != ppppplVar17);
        }
        pppppplVar11[6] = (long *****)0x0;
      }
      uStack_12c = SUB84(param_4,0);
      if (uStack_11c != 0) {
        unaff_x25 = 0;
        param_3 = (undefined **)&ppppplStack_118;
        ppppplStack_138 = (long *****)(pppppplVar11 + 5);
        do {
          (**(code **)(*(long *)*param_1 + 0x218))((long *)*param_1,unaff_x25);
          (**(code **)(*(long *)*param_1 + 0xa0))
                    (&ppppplStack_c8,(long *)*param_1,&PTR_DAT_110c4e560);
          ppplStack_d0 = (long ***)0x0;
          ppplStack_e8 = (long ***)0x0;
          ppplStack_f0 = (long ***)0x0;
          ppplStack_d8 = (long ***)0x0;
          ppplStack_e0 = (long ***)0x0;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&ppplStack_f0,&ppppplStack_c8);
          pppppplVar12 = unaff_x24;
          func_0x000107c2b05c(unaff_x24,&ppppplStack_c8);
          pppppplVar25 = (long ******)pppppplVar11[4];
          if (pppppplVar25 != (long ******)0x0) {
            puVar22 = (undefined *)((long)pppppplVar25 + -1);
            if (((ulong)pppppplVar25 & (ulong)puVar22) == 0) {
              param_2 = (undefined **)((ulong)puVar22 & (ulong)pppppplVar12);
            }
            else {
              param_2 = (undefined **)pppppplVar12;
              if (pppppplVar25 <= pppppplVar12) {
                uVar15 = 0;
                if (pppppplVar25 != (long ******)0x0) {
                  uVar15 = (ulong)pppppplVar12 / (ulong)pppppplVar25;
                }
                param_2 = (undefined **)((long)pppppplVar12 - uVar15 * (long)pppppplVar25);
              }
            }
            if ((*unaff_x24)[(long)param_2] != (long ****)0x0) {
              for (ppplVar21 = *(*unaff_x24)[(long)param_2]; ppplVar21 != (long ***)0x0;
                  ppplVar21 = (long ***)*ppplVar21) {
                pppppplVar14 = (long ******)ppplVar21[1];
                if (pppppplVar14 == pppppplVar12) {
                  pppppplVar14 = unaff_x24;
                  func_0x000107c2b068(unaff_x24,ppplVar21 + 2,&ppppplStack_c8);
                  if (((ulong)pppppplVar14 & 1) != 0) goto LAB_10ab67dc8;
                }
                else {
                  if (((ulong)pppppplVar25 & (ulong)puVar22) == 0) {
                    pppppplVar14 = (long ******)((ulong)pppppplVar14 & (ulong)puVar22);
                  }
                  else if (pppppplVar25 <= pppppplVar14) {
                    uVar15 = 0;
                    if (pppppplVar25 != (long ******)0x0) {
                      uVar15 = (ulong)pppppplVar14 / (ulong)pppppplVar25;
                    }
                    pppppplVar14 = (long ******)((long)pppppplVar14 - uVar15 * (long)pppppplVar25);
                  }
                  if (pppppplVar14 != (long ******)param_2) break;
                }
              }
            }
          }
          ppppplVar13 = (long *****)0x50;
          __Znwm();
          ppplStack_108 = (long ***)0x0;
          *ppppplVar13 = (long ****)0x0;
          ppppplVar13[1] = (long ****)pppppplVar12;
          ppppplStack_118 = ppppplVar13;
          ppppplStack_110 = (long *****)unaff_x24;
          if (cStack_b1 < '\0') {
            func_0x000107c3192c(ppppplVar13 + 2,ppppplStack_c8,ppplStack_c0);
          }
          else {
            ppppplVar13[3] = (long ****)ppplStack_c0;
            ppppplVar13[2] = (long ****)ppppplStack_c8;
            ppppplVar13[4] = (long ****)CONCAT17(cStack_b1,uStack_b8);
          }
          if ((long)ppplStack_e0 < 0) {
            func_0x000107c3192c(ppppplVar13 + 5,ppplStack_f0,ppplStack_e8);
          }
          else {
            ppppplVar13[6] = (long ****)ppplStack_e8;
            ppppplVar13[5] = (long ****)ppplStack_f0;
            ppppplVar13[7] = (long ****)ppplStack_e0;
          }
          ppppplVar13[9] = (long ****)ppplStack_d0;
          ppppplVar13[8] = (long ****)ppplStack_d8;
          if ((long ****)ppplStack_d0 != (long ****)0x0) {
            pppplVar19 = (long ****)(ppplStack_d0 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar19,0x10);
              if (bVar4) {
                *pppplVar19 = (long ***)((long)*pppplVar19 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppplStack_108 = (long ***)CONCAT71(ppplStack_108._1_7_,1);
          if ((pppppplVar25 == (long ******)0x0) ||
             (*(float *)(pppppplVar11 + 7) * (float)pppppplVar25 <
              (float)(undefined *)((long)pppppplVar11[6] + 1))) {
            uVar15 = 1;
            if ((long ******)0x2 < pppppplVar25) {
              uVar15 = (ulong)(((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) != 0);
            }
            uVar15 = uVar15 | (long)pppppplVar25 << 1;
            uVar18 = (ulong)((float)(undefined *)((long)pppppplVar11[6] + 1) /
                            *(float *)(pppppplVar11 + 7));
            if (uVar15 <= uVar18) {
              uVar15 = uVar18;
            }
            FUN_10ab71794(unaff_x24,uVar15);
            pppppplVar25 = (long ******)pppppplVar11[4];
            if (((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) == 0) {
              param_2 = (undefined **)((ulong)((long)pppppplVar25 + -1) & (ulong)pppppplVar12);
            }
            else {
              param_2 = (undefined **)pppppplVar12;
              if (pppppplVar25 <= pppppplVar12) {
                uVar15 = 0;
                if (pppppplVar25 != (long ******)0x0) {
                  uVar15 = (ulong)pppppplVar12 / (ulong)pppppplVar25;
                }
                param_2 = (undefined **)((long)pppppplVar12 - uVar15 * (long)pppppplVar25);
              }
            }
          }
          ppppplVar17 = *unaff_x24;
          pppplVar19 = ppppplVar17[(long)param_2];
          if (pppplVar19 == (long ****)0x0) {
            *ppppplVar13 = *ppppplStack_138;
            *ppppplStack_138 = (long ****)ppppplVar13;
            ppppplVar17[(long)param_2] = (long ****)ppppplStack_138;
            if (*ppppplVar13 != (long ****)0x0) {
              pppppplVar12 = (long ******)(*ppppplVar13)[1];
              if (((ulong)pppppplVar25 & (ulong)((long)pppppplVar25 + -1)) == 0) {
                pppppplVar12 = (long ******)((ulong)pppppplVar12 & (ulong)((long)pppppplVar25 + -1))
                ;
              }
              else if (pppppplVar25 <= pppppplVar12) {
                uVar15 = 0;
                if (pppppplVar25 != (long ******)0x0) {
                  uVar15 = (ulong)pppppplVar12 / (ulong)pppppplVar25;
                }
                pppppplVar12 = (long ******)((long)pppppplVar12 - uVar15 * (long)pppppplVar25);
              }
              (*unaff_x24)[(long)pppppplVar12] = (long ****)ppppplVar13;
            }
          }
          else {
            *ppppplVar13 = (long ****)*pppplVar19;
            *pppplVar19 = (long ***)ppppplVar13;
          }
          pppppplVar11[6] = (long *****)((long)pppppplVar11[6] + 1);
LAB_10ab67dc8:
          uVar23 = *param_1;
          ppppplStack_118 = ppppplStack_128;
          if (cStack_b1 < '\0') {
            func_0x000107c3192c(&ppppplStack_110,ppppplStack_c8,ppplStack_c0);
          }
          else {
            ppplStack_108 = ppplStack_c0;
            ppppplStack_110 = ppppplStack_c8;
            lStack_100 = CONCAT17(cStack_b1,uStack_b8);
          }
          uStack_f8 = (undefined1)uStack_12c;
          pcStack_b0 = FUN_10ab71b48;
          ppuStack_a8 = &PTR_FUN_110c4e580;
          ppplStack_90 = ppplStack_108;
          ppppplStack_98 = ppppplStack_110;
          lStack_88 = lStack_100;
          ppppplStack_110 = (long *****)0x0;
          ppplStack_108 = (long ***)0x0;
          lStack_100 = 0;
          ppuVar10 = &PTR_DAT_110c4e520;
          pppppplVar12 = (long ******)0x0;
          ppppplStack_a0 = ppppplStack_118;
          uStack_80 = uStack_f8;
          FUN_10a2c9d5c(uVar23,&PTR_DAT_110c4e520,&pcStack_b0);
          (*(code *)*ppuStack_a8)(&ppuStack_a8);
          if (lStack_100 < 0) {
            __ZdlPv(ppppplStack_110);
          }
          (**(code **)(*(long *)*param_1 + 0x220))();
          unaff_x26 = (long ****)ppplStack_d0;
          if ((long ****)ppplStack_d0 != (long ****)0x0) {
            pppplVar19 = (long ****)(ppplStack_d0 + 1);
            do {
              ppplVar21 = *pppplVar19;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(pppplVar19,0x10);
              if (bVar4) {
                *pppplVar19 = (long ***)((long)ppplVar21 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (ppplVar21 == (long ***)0x0) {
              (*(code *)(*ppplStack_d0)[2])(ppplStack_d0);
              __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x26);
            }
          }
          if ((long)ppplStack_e0 < 0) {
            __ZdlPv(ppplStack_f0);
          }
          if (cStack_b1 < '\0') {
            __ZdlPv(ppppplStack_c8);
          }
          uVar1 = (int)unaff_x25 + 1;
          unaff_x25 = (ulong)uVar1;
        } while (uVar1 != uStack_11c);
      }
      (**(code **)(*(long *)*param_1 + 0x220))();
      goto LAB_10ab67f08;
    }
  }
  ppuVar6 = (undefined **)&UNK_10f639994;
  FUN_109ffdddc();
  if (*(char *)((long)unaff_x26 + 0x27) < '\0') {
    __ZdlPv(unaff_x26[2]);
  }
  func_0x00010ab71964(&ppppplStack_118);
  func_0x00010ab719f8(&ppplStack_f0);
  if (cStack_b1 < '\0') {
    __ZdlPv(ppppplStack_c8);
  }
  ppuVar7 = ppuVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_10ab67fd8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppplStack_1d0 = (long *****)ppuVar10;
  ppplStack_190 = (long ***)unaff_x26;
  uStack_188 = unaff_x25;
  ppppplStack_180 = (long *****)unaff_x24;
  ppppplStack_178 = (long *****)unaff_x23;
  ppppplStack_170 = (long *****)param_3;
  ppppplStack_168 = (long *****)param_2;
  puStack_160 = param_1;
  ppuStack_158 = ppuVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  func_0x00010aa70b70();
  FUN_10a00d760(ppuVar10,&PTR_DAT_110c4de50,ppuVar7 + 0x25);
  (*(code *)*(long *****)((long)*ppuVar10 + 0x58))(ppuVar10,&PTR_s_hash_110c4e4e0,ppuVar7[0x2b]);
  (*(code *)*(long *****)((long)*ppuVar10 + 0x70))
            (ppuVar10,&PTR_DAT_110c4de30,*(undefined *)((long)ppuVar7 + 0x1ba));
  (*(code *)*(long *****)((long)*ppuVar10 + 0x40))
            (ppuVar10,&PTR_DAT_110c4de70,*(undefined4 *)((long)ppuVar7 + 0x1bc));
  (*(code *)*(long *****)((long)*ppuVar10 + 0x118))
            (ppuVar10,&PTR_s_provider_110c4de90,ppuVar7[0x1c]);
  pppppplVar11 = (long ******)ppuVar7[0x1e];
  (*(code *)*(long *****)((long)*ppuVar10 + 0x118))(ppuVar10,&PTR_DAT_110c4df50,pppppplVar11);
  (*(code *)*(long *****)((long)*ppuVar10 + 0x18))(ppuVar10,&PTR_DAT_110c4deb0);
  puVar24 = (undefined8 *)ppuVar7[0x22];
  if (puVar24 != (undefined8 *)0x0) {
    param_2 = &PTR_DAT_110c4e500;
    param_3 = (undefined **)&UNK_10dd5b8f9;
    unaff_x23 = &PTR_DAT_110c4e520;
    unaff_x24 = (long ******)&DAT_10f638986;
    do {
      ppppplVar13 = (long *****)(puVar24 + 2);
      (*(code *)*(long *****)((long)*ppuVar10 + 0x10))(ppuVar10);
      FUN_10a00d760(ppuVar10,&PTR_DAT_110c4e500,ppppplVar13);
      ppuVar6 = ppuVar7 + 0x20;
      pppplStack_1c0 = (long ****)ppppplVar13;
      FUN_10a3b830c(ppuVar6,ppppplVar13,&UNK_10dd5b8f9,&pppplStack_1c0,&uStack_1c1);
      pppppplVar11 = (long ******)(ppuVar6 + 8);
      pppppplVar12 = unaff_x24;
      FUN_10a398a58(ppuVar10,&PTR_DAT_110c4e520,pppppplVar11,&DAT_10f638986,5);
      (*(code *)*(long *****)((long)*ppuVar10 + 0x20))(ppuVar10);
      puVar24 = (undefined8 *)*puVar24;
    } while (puVar24 != (undefined8 *)0x0);
  }
  (*(code *)*(long *****)((long)*ppuVar10 + 0x20))(ppuVar10);
  lVar16 = *(long *)(ppuVar7[10] + 0xa20);
  if (*(char *)(lVar16 + 0x21) == '\x01') {
    if ((*(byte *)(lVar16 + 0x20) & 1) != 0) goto LAB_10ab682a0;
LAB_10ab68190:
    (*(code *)*(long *****)((long)*ppuVar10 + 0x18))(ppuVar10,&PTR_DAT_110c4ded0);
    pppppplVar25 = (long ******)ppuVar7[0x31];
    unaff_x24 = (long ******)ppuVar7[0x32];
    if (pppppplVar25 != unaff_x24) {
      param_3 = &PTR_DAT_110c4e520;
      do {
        (*(code *)*(long *****)((long)*ppuVar10 + 0x10))(ppuVar10);
        pppppplVar11 = pppppplVar25;
        pppppplVar12 = (long ******)&UNK_10f69410f;
        FUN_10a398908(ppuVar10,&PTR_DAT_110c4e520,pppppplVar25,&UNK_10f69410f,0x11);
        (*(code *)*(long *****)((long)*ppuVar10 + 0x20))(ppuVar10);
        pppppplVar25 = pppppplVar25 + 2;
      } while (pppppplVar25 != unaff_x24);
    }
    (*(code *)*(long *****)((long)*ppuVar10 + 0x20))(ppuVar10);
    ppuVar6 = &PTR_s_types_110c4e540;
    (*(code *)*(long *****)((long)*ppuVar10 + 0x18))(ppuVar10);
    param_2 = (undefined **)ppuVar7[0x34];
    unaff_x23 = (undefined **)ppuVar7[0x35];
    if (param_2 != unaff_x23) {
      ppuVar7 = &PTR_DAT_110c4e520;
      param_3 = (undefined **)&UNK_10f69410f;
      do {
        (*(code *)*(long *****)((long)*ppuVar10 + 0x10))(ppuVar10);
        ppuVar6 = ppuVar7;
        pppppplVar11 = (long ******)param_2;
        pppppplVar12 = (long ******)param_3;
        FUN_10a398908(ppuVar10,&PTR_DAT_110c4e520,param_2,&UNK_10f69410f,0x11);
        (*(code *)*(long *****)((long)*ppuVar10 + 0x20))(ppuVar10);
        param_2 = param_2 + 2;
      } while (param_2 != unaff_x23);
    }
  }
  else {
    if (*(int *)(lVar16 + 0x18) < 0xe9) goto LAB_10ab68190;
LAB_10ab682a0:
    (*(code *)*(long *****)((long)*ppuVar10 + 0x18))(ppuVar10,&PTR_DAT_110c4def0);
    uStack_1b8 = 6;
    pppplStack_1c0 = (long ****)&DAT_10f5aee30;
    uStack_1a8 = 0x8e5f060d00000000;
    uStack_1b0 = 0x14c5443cd;
    FUN_10ab68390(&ppppplStack_1d0,ppuVar7,&pppplStack_1c0,0);
    uStack_1b8 = 4;
    pppplStack_1c0 = (long ****)&DAT_10f693f79;
    uStack_1a8 = 0x1edc375400000000;
    uStack_1b0 = 0x150654;
    FUN_10ab68390(&ppppplStack_1d0,ppuVar7,&pppplStack_1c0,1);
    uStack_1b8 = 5;
    pppplStack_1c0 = (long ****)&DAT_10f305a7e;
    uStack_1a8 = 0xd4f6b00100000000;
    uStack_1b0 = 0x141534c1;
    FUN_10ab68390(&ppppplStack_1d0,ppuVar7,&pppplStack_1c0,2);
    uStack_1b8 = 10;
    pppplStack_1c0 = (long ****)&DAT_10f345e40;
    uStack_1a8 = 0xa3b76e4400000000;
    uStack_1b0 = 0x48f5102520d3144;
    pppppplVar11 = (long ******)&pppplStack_1c0;
    pppppplVar12 = (long ******)0x3;
    ppuVar6 = ppuVar7;
    FUN_10ab68390(&ppppplStack_1d0,ppuVar7,pppppplVar11);
  }
  pppppplVar25 = (long ******)ppuVar10;
  (*(code *)*(long *****)((long)*ppuVar10 + 0x20))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  pcStack_1d8 = FUN_10ab68390;
  ppppplStack_210 = (long *****)unaff_x24;
  ppppplStack_208 = (long *****)unaff_x23;
  ppppplStack_200 = (long *****)param_3;
  ppppplStack_1f8 = (long *****)param_2;
  ppuStack_1f0 = ppuVar7;
  ppppplStack_1e8 = (long *****)ppuVar10;
  ppuStack_1e0 = &puStack_150;
  (*(code *)(**pppppplVar25)[3])(*pppppplVar25,pppppplVar11);
  ppuVar6 = ppuVar6 + 0x2c;
  FUN_10ab71aa4(ppuVar6,pppppplVar12);
  if (ppuVar6 != (undefined **)0x0) {
    FUN_10ab714a4(alStack_258,ppuVar6 + 3);
    if (plStack_248 != (long *)0x0) {
      plVar5 = plStack_248;
      do {
        (*(code *)(**pppppplVar25)[2])();
        ppuVar10 = &PTR_DAT_110c4e560;
        FUN_10a00d760(*pppppplVar25,&PTR_DAT_110c4e560,plVar5 + 2);
        plVar8 = (long *)plVar5[8];
        if (plVar8 != (long *)0x0) {
          ppppplVar13 = *pppppplVar25;
          (**(code **)(*plVar8 + 0x38))();
          plStack_228 = (long *)plVar5[9];
          lStack_230 = plVar5[8];
          if (plVar5[9] != 0) {
            plVar2 = (long *)(plVar5[9] + 8);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = *plVar2 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plStack_220 = plVar8;
          ppuStack_218 = ppuVar10;
          (*(code *)(*ppppplVar13)[0x21])(ppppplVar13,&PTR_DAT_110c4e520,&lStack_230,&plStack_220);
          plVar8 = plStack_228;
          if (plStack_228 != (long *)0x0) {
            plVar2 = plStack_228 + 1;
            do {
              lVar16 = *plVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar4) {
                *plVar2 = lVar16 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar16 == 0) {
              (**(code **)(*plStack_228 + 0x10))(plStack_228);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
        }
        (*(code *)(**pppppplVar25)[4])();
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    (*(code *)(**pppppplVar25)[4])();
    func_0x00010ab71a68(plStack_248);
    lVar16 = alStack_258[0];
    alStack_258[0] = 0;
    if (lVar16 != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar22 = &UNK_10f639994;
  FUN_109ffdddc();
  func_0x00010ab71a30(alStack_258);
  puVar9 = puVar22;
  __Unwind_Resume();
  pcStack_268 = FUN_10ab68540;
  ppppplStack_280 = (long *****)pppppplVar12;
  puStack_278 = puVar22;
  pppuStack_270 = &ppuStack_1e0;
  if (*(long *)(puVar9 + 0x178) != 0) {
    func_0x00010ab740c8(*(undefined8 *)(puVar9 + 0x170));
    *(undefined8 *)(puVar9 + 0x170) = 0;
    lVar16 = *(long *)(puVar9 + 0x168);
    if (lVar16 != 0) {
      lVar20 = 0;
      do {
        *(undefined8 *)(*(long *)(puVar9 + 0x160) + lVar20 * 8) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar16 != lVar20);
    }
    *(undefined8 *)(puVar9 + 0x178) = 0;
  }
  lVar16 = *(long *)(*(long *)(puVar9 + 0x50) + 0xa20);
  if (*(char *)(lVar16 + 0x21) == '\x01') {
    if ((*(byte *)(lVar16 + 0x20) & 1) != 0) goto LAB_10ab685ec;
  }
  else if (0xe8 < *(int *)(lVar16 + 0x18)) goto LAB_10ab685ec;
  lVar16 = *(long *)(puVar9 + 0x188);
  lVar20 = *(long *)(puVar9 + 400);
  while (lVar20 != lVar16) {
    lVar20 = lVar20 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar9 + 400) = lVar16;
  lVar16 = *(long *)(puVar9 + 0x1a0);
  lVar20 = *(long *)(puVar9 + 0x1a8);
  while (lVar20 != lVar16) {
    lVar20 = lVar20 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar9 + 0x1a8) = lVar16;
LAB_10ab685ec:
  FUN_10ab666f8(*(undefined8 *)(puVar9 + 0xf0));
  plVar5 = *(long **)(puVar9 + 0xf8);
  *(undefined8 *)(puVar9 + 0xf0) = 0;
  *(undefined8 *)(puVar9 + 0xf8) = 0;
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + 1;
    do {
      lVar16 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  FUN_10a0533bc(&lStack_290);
  if (lStack_290 != 0) {
    FUN_10aa88e9c(puVar9);
  }
  if (plStack_288 != (long *)0x0) {
    plVar5 = plStack_288 + 1;
    do {
      lVar16 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plStack_288 + 0x10))(plStack_288);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_288);
    }
  }
  return;
}



/* Entry: 10ab67fd8; end: 10ab6838f;  */

void FUN_10ab67fd8(undefined **param_1,long *param_2,undefined8 param_3,long **param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  long **pplVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined **unaff_x21;
  long **pplVar12;
  undefined **unaff_x22;
  long *plVar13;
  undefined **unaff_x23;
  long *plVar14;
  long **unaff_x24;
  undefined8 *puVar15;
  long lStack_150;
  long *plStack_148;
  long **pplStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  long alStack_118 [2];
  long *plStack_108;
  long lStack_f0;
  long *plStack_e8;
  long *plStack_e0;
  undefined **ppuStack_d8;
  long **pplStack_d0;
  long **pplStack_c8;
  long **pplStack_c0;
  long **pplStack_b8;
  undefined **ppuStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long *plStack_90;
  undefined1 uStack_81;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_90 = param_2;
  func_0x00010aa70b70();
  FUN_10a00d760(param_2,&PTR_DAT_110c4de50,param_1 + 0x25);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_hash_110c4e4e0,param_1[0x2b]);
  (**(code **)(*param_2 + 0x70))(param_2,&PTR_DAT_110c4de30,*(undefined1 *)((long)param_1 + 0x1ba));
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c4de70,*(undefined4 *)((long)param_1 + 0x1bc));
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_s_provider_110c4de90,param_1[0x1c]);
  pplVar8 = (long **)param_1[0x1e];
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c4df50,pplVar8);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c4deb0);
  puVar15 = (undefined8 *)param_1[0x22];
  if (puVar15 != (undefined8 *)0x0) {
    unaff_x21 = &PTR_DAT_110c4e500;
    unaff_x22 = (undefined **)&UNK_10dd5b8f9;
    unaff_x23 = &PTR_DAT_110c4e520;
    unaff_x24 = (long **)&DAT_10f638986;
    do {
      plVar11 = puVar15 + 2;
      (**(code **)(*param_2 + 0x10))(param_2);
      FUN_10a00d760(param_2,&PTR_DAT_110c4e500,plVar11);
      ppuVar4 = param_1 + 0x20;
      plStack_80 = plVar11;
      FUN_10a3b830c(ppuVar4,plVar11,&UNK_10dd5b8f9,&plStack_80,&uStack_81);
      pplVar8 = (long **)(ppuVar4 + 8);
      param_4 = unaff_x24;
      FUN_10a398a58(param_2,&PTR_DAT_110c4e520,pplVar8,&DAT_10f638986,5);
      (**(code **)(*param_2 + 0x20))(param_2);
      puVar15 = (undefined8 *)*puVar15;
    } while (puVar15 != (undefined8 *)0x0);
  }
  (**(code **)(*param_2 + 0x20))(param_2);
  lVar9 = *(long *)(param_1[10] + 0xa20);
  if (*(char *)(lVar9 + 0x21) == '\x01') {
    if ((*(byte *)(lVar9 + 0x20) & 1) != 0) goto LAB_10ab682a0;
LAB_10ab68190:
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c4ded0);
    pplVar12 = (long **)param_1[0x31];
    unaff_x24 = (long **)param_1[0x32];
    if (pplVar12 != unaff_x24) {
      unaff_x22 = &PTR_DAT_110c4e520;
      do {
        (**(code **)(*param_2 + 0x10))(param_2);
        pplVar8 = pplVar12;
        param_4 = (long **)&UNK_10f69410f;
        FUN_10a398908(param_2,&PTR_DAT_110c4e520,pplVar12,&UNK_10f69410f,0x11);
        (**(code **)(*param_2 + 0x20))(param_2);
        pplVar12 = pplVar12 + 2;
      } while (pplVar12 != unaff_x24);
    }
    (**(code **)(*param_2 + 0x20))(param_2);
    ppuVar4 = &PTR_s_types_110c4e540;
    (**(code **)(*param_2 + 0x18))(param_2);
    unaff_x21 = (undefined **)param_1[0x34];
    unaff_x23 = (undefined **)param_1[0x35];
    if (unaff_x21 != unaff_x23) {
      param_1 = &PTR_DAT_110c4e520;
      unaff_x22 = (undefined **)&UNK_10f69410f;
      do {
        (**(code **)(*param_2 + 0x10))(param_2);
        ppuVar4 = param_1;
        pplVar8 = (long **)unaff_x21;
        param_4 = (long **)unaff_x22;
        FUN_10a398908(param_2,&PTR_DAT_110c4e520,unaff_x21,&UNK_10f69410f,0x11);
        (**(code **)(*param_2 + 0x20))(param_2);
        unaff_x21 = unaff_x21 + 2;
      } while (unaff_x21 != unaff_x23);
    }
  }
  else {
    if (*(int *)(lVar9 + 0x18) < 0xe9) goto LAB_10ab68190;
LAB_10ab682a0:
    (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c4def0);
    uStack_78 = 6;
    plStack_80 = (long *)&DAT_10f5aee30;
    uStack_68 = 0x8e5f060d00000000;
    uStack_70 = 0x14c5443cd;
    FUN_10ab68390(&plStack_90,param_1,&plStack_80,0);
    uStack_78 = 4;
    plStack_80 = (long *)&DAT_10f693f79;
    uStack_68 = 0x1edc375400000000;
    uStack_70 = 0x150654;
    FUN_10ab68390(&plStack_90,param_1,&plStack_80,1);
    uStack_78 = 5;
    plStack_80 = (long *)&DAT_10f305a7e;
    uStack_68 = 0xd4f6b00100000000;
    uStack_70 = 0x141534c1;
    FUN_10ab68390(&plStack_90,param_1,&plStack_80,2);
    uStack_78 = 10;
    plStack_80 = (long *)&DAT_10f345e40;
    uStack_68 = 0xa3b76e4400000000;
    uStack_70 = 0x48f5102520d3144;
    pplVar8 = &plStack_80;
    param_4 = (long **)0x3;
    ppuVar4 = param_1;
    FUN_10ab68390(&plStack_90,param_1,pplVar8);
  }
  plVar11 = param_2;
  (**(code **)(*param_2 + 0x20))();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_10ab68390;
  pplStack_d0 = unaff_x24;
  pplStack_c8 = (long **)unaff_x23;
  pplStack_c0 = (long **)unaff_x22;
  pplStack_b8 = (long **)unaff_x21;
  ppuStack_b0 = param_1;
  plStack_a8 = param_2;
  puStack_a0 = &stack0xfffffffffffffff0;
  (**(code **)(*(long *)*plVar11 + 0x18))((long *)*plVar11,pplVar8);
  ppuVar4 = ppuVar4 + 0x2c;
  FUN_10ab71aa4(ppuVar4,param_4);
  if (ppuVar4 != (undefined **)0x0) {
    FUN_10ab714a4(alStack_118,ppuVar4 + 3);
    if (plStack_108 != (long *)0x0) {
      plVar14 = plStack_108;
      do {
        (**(code **)(*(long *)*plVar11 + 0x10))();
        ppuVar4 = &PTR_DAT_110c4e560;
        FUN_10a00d760(*plVar11,&PTR_DAT_110c4e560,plVar14 + 2);
        plVar5 = (long *)plVar14[8];
        if (plVar5 != (long *)0x0) {
          plVar13 = (long *)*plVar11;
          (**(code **)(*plVar5 + 0x38))();
          plStack_e8 = (long *)plVar14[9];
          lStack_f0 = plVar14[8];
          if (plVar14[9] != 0) {
            plVar1 = (long *)(plVar14[9] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_e0 = plVar5;
          ppuStack_d8 = ppuVar4;
          (**(code **)(*plVar13 + 0x108))(plVar13,&PTR_DAT_110c4e520,&lStack_f0,&plStack_e0);
          plVar5 = plStack_e8;
          if (plStack_e8 != (long *)0x0) {
            plVar13 = plStack_e8 + 1;
            do {
              lVar9 = *plVar13;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *plVar13 = lVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar9 == 0) {
              (**(code **)(*plStack_e8 + 0x10))(plStack_e8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
            }
          }
        }
        (**(code **)(*(long *)*plVar11 + 0x20))();
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
    (**(code **)(*(long *)*plVar11 + 0x20))();
    func_0x00010ab71a68(plStack_108);
    lVar9 = alStack_118[0];
    alStack_118[0] = 0;
    if (lVar9 != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar6 = &UNK_10f639994;
  FUN_109ffdddc();
  func_0x00010ab71a30(alStack_118);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_128 = FUN_10ab68540;
  pplStack_140 = param_4;
  puStack_138 = puVar6;
  ppuStack_130 = &puStack_a0;
  if (*(long *)(puVar7 + 0x178) != 0) {
    func_0x00010ab740c8(*(undefined8 *)(puVar7 + 0x170));
    *(undefined8 *)(puVar7 + 0x170) = 0;
    lVar9 = *(long *)(puVar7 + 0x168);
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        *(undefined8 *)(*(long *)(puVar7 + 0x160) + lVar10 * 8) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar9 != lVar10);
    }
    *(undefined8 *)(puVar7 + 0x178) = 0;
  }
  lVar9 = *(long *)(*(long *)(puVar7 + 0x50) + 0xa20);
  if (*(char *)(lVar9 + 0x21) == '\x01') {
    if ((*(byte *)(lVar9 + 0x20) & 1) != 0) goto LAB_10ab685ec;
  }
  else if (0xe8 < *(int *)(lVar9 + 0x18)) goto LAB_10ab685ec;
  lVar9 = *(long *)(puVar7 + 0x188);
  lVar10 = *(long *)(puVar7 + 400);
  while (lVar10 != lVar9) {
    lVar10 = lVar10 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar7 + 400) = lVar9;
  lVar9 = *(long *)(puVar7 + 0x1a0);
  lVar10 = *(long *)(puVar7 + 0x1a8);
  while (lVar10 != lVar9) {
    lVar10 = lVar10 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar7 + 0x1a8) = lVar9;
LAB_10ab685ec:
  FUN_10ab666f8(*(undefined8 *)(puVar7 + 0xf0));
  plVar11 = *(long **)(puVar7 + 0xf8);
  *(undefined8 *)(puVar7 + 0xf0) = 0;
  *(undefined8 *)(puVar7 + 0xf8) = 0;
  if (plVar11 != (long *)0x0) {
    plVar14 = plVar11 + 1;
    do {
      lVar9 = *plVar14;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar3) {
        *plVar14 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a0533bc(&lStack_150);
  if (lStack_150 != 0) {
    FUN_10aa88e9c(puVar7);
  }
  if (plStack_148 != (long *)0x0) {
    plVar11 = plStack_148 + 1;
    do {
      lVar9 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plStack_148 + 0x10))(plStack_148);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_148);
    }
  }
  return;
}



/* Entry: 10ab68390; end: 10ab6853f;  */

void FUN_10ab68390(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  long alStack_88 [2];
  long *plStack_78;
  long lStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined **ppuStack_48;
  
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_3);
  param_2 = param_2 + 0x160;
  FUN_10ab71aa4(param_2,param_4);
  if (param_2 != 0) {
    FUN_10ab714a4(alStack_88,param_2 + 0x18);
    if (plStack_78 != (long *)0x0) {
      plVar11 = plStack_78;
      do {
        (**(code **)(*(long *)*param_1 + 0x10))();
        ppuVar7 = &PTR_DAT_110c4e560;
        FUN_10a00d760(*param_1,&PTR_DAT_110c4e560,plVar11 + 2);
        plVar4 = (long *)plVar11[8];
        if (plVar4 != (long *)0x0) {
          plVar10 = (long *)*param_1;
          (**(code **)(*plVar4 + 0x38))();
          plStack_58 = (long *)plVar11[9];
          lStack_60 = plVar11[8];
          if (plVar11[9] != 0) {
            plVar1 = (long *)(plVar11[9] + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = *plVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          plStack_50 = plVar4;
          ppuStack_48 = ppuVar7;
          (**(code **)(*plVar10 + 0x108))(plVar10,&PTR_DAT_110c4e520,&lStack_60,&plStack_50);
          plVar4 = plStack_58;
          if (plStack_58 != (long *)0x0) {
            plVar10 = plStack_58 + 1;
            do {
              lVar8 = *plVar10;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar3) {
                *plVar10 = lVar8 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar8 == 0) {
              (**(code **)(*plStack_58 + 0x10))(plStack_58);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
            }
          }
        }
        (**(code **)(*(long *)*param_1 + 0x20))();
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
    (**(code **)(*(long *)*param_1 + 0x20))();
    func_0x00010ab71a68(plStack_78);
    lVar8 = alStack_88[0];
    alStack_88[0] = 0;
    if (lVar8 != 0) {
      __ZdlPv();
    }
    return;
  }
  puVar5 = &UNK_10f639994;
  FUN_109ffdddc();
  func_0x00010ab71a30(alStack_88);
  puVar6 = puVar5;
  __Unwind_Resume();
  pcStack_98 = FUN_10ab68540;
  uStack_b0 = param_4;
  puStack_a8 = puVar5;
  puStack_a0 = &stack0xfffffffffffffff0;
  if (*(long *)(puVar6 + 0x178) != 0) {
    func_0x00010ab740c8(*(undefined8 *)(puVar6 + 0x170));
    *(undefined8 *)(puVar6 + 0x170) = 0;
    lVar8 = *(long *)(puVar6 + 0x168);
    if (lVar8 != 0) {
      lVar9 = 0;
      do {
        *(undefined8 *)(*(long *)(puVar6 + 0x160) + lVar9 * 8) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
    }
    *(undefined8 *)(puVar6 + 0x178) = 0;
  }
  lVar8 = *(long *)(*(long *)(puVar6 + 0x50) + 0xa20);
  if (*(char *)(lVar8 + 0x21) == '\x01') {
    if ((*(byte *)(lVar8 + 0x20) & 1) != 0) goto LAB_10ab685ec;
  }
  else if (0xe8 < *(int *)(lVar8 + 0x18)) goto LAB_10ab685ec;
  lVar8 = *(long *)(puVar6 + 0x188);
  lVar9 = *(long *)(puVar6 + 400);
  while (lVar9 != lVar8) {
    lVar9 = lVar9 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar6 + 400) = lVar8;
  lVar8 = *(long *)(puVar6 + 0x1a0);
  lVar9 = *(long *)(puVar6 + 0x1a8);
  while (lVar9 != lVar8) {
    lVar9 = lVar9 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(puVar6 + 0x1a8) = lVar8;
LAB_10ab685ec:
  FUN_10ab666f8(*(undefined8 *)(puVar6 + 0xf0));
  plVar11 = *(long **)(puVar6 + 0xf8);
  *(undefined8 *)(puVar6 + 0xf0) = 0;
  *(undefined8 *)(puVar6 + 0xf8) = 0;
  if (plVar11 != (long *)0x0) {
    plVar4 = plVar11 + 1;
    do {
      lVar8 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  FUN_10a0533bc(&lStack_c0);
  if (lStack_c0 != 0) {
    FUN_10aa88e9c(puVar6);
  }
  if (plStack_b8 != (long *)0x0) {
    plVar11 = plStack_b8 + 1;
    do {
      lVar8 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_b8);
    }
  }
  return;
}



/* Entry: 10ab68540; end: 10ab6863f;  */

void FUN_10ab68540(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_30;
  long *plStack_28;
  
  if (*(long *)(param_1 + 0x178) != 0) {
    func_0x00010ab740c8(*(undefined8 *)(param_1 + 0x170));
    *(undefined8 *)(param_1 + 0x170) = 0;
    lVar4 = *(long *)(param_1 + 0x168);
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        *(undefined8 *)(*(long *)(param_1 + 0x160) + lVar5 * 8) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
    }
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x50) + 0xa20);
  if (*(char *)(lVar4 + 0x21) == '\x01') {
    if ((*(byte *)(lVar4 + 0x20) & 1) != 0) goto LAB_10ab685ec;
  }
  else if (0xe8 < *(int *)(lVar4 + 0x18)) goto LAB_10ab685ec;
  lVar4 = *(long *)(param_1 + 0x188);
  lVar5 = *(long *)(param_1 + 400);
  while (lVar5 != lVar4) {
    lVar5 = lVar5 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(param_1 + 400) = lVar4;
  lVar4 = *(long *)(param_1 + 0x1a0);
  lVar5 = *(long *)(param_1 + 0x1a8);
  while (lVar5 != lVar4) {
    lVar5 = lVar5 + -0x10;
    FUN_10a3b772c();
  }
  *(long *)(param_1 + 0x1a8) = lVar4;
LAB_10ab685ec:
  FUN_10ab666f8(*(undefined8 *)(param_1 + 0xf0));
  plVar6 = *(long **)(param_1 + 0xf8);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  FUN_10a0533bc(&lStack_30);
  if (lStack_30 != 0) {
    FUN_10aa88e9c(param_1);
  }
  if (plStack_28 != (long *)0x0) {
    plVar6 = plStack_28 + 1;
    do {
      lVar4 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar4 + -1;
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



/* Entry: 10ab68640; end: 10ab686c3;  */

undefined1  [16] FUN_10ab68640(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x17;
  auVar1._0_8_ = &UNK_10f694166;
  return auVar1;
}



/* Entry: 10ab686c4; end: 10ab6871b;  */

void FUN_10ab686c4(undefined8 param_1)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  
  uStack_58 = 0;
  uStack_50 = 0xffffffff00000001;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f6937f5;
  uStack_30 = 0;
  uStack_38 = 0;
  uStack_20 = 0;
  uStack_28 = 0;
  uStack_18 = 0xffffffff;
  FUN_10ab6871c(param_1,&uStack_58);
  FUN_10ab74bdc();
  return;
}



/* Entry: 10ab6871c; end: 10ab687f3;  */

/* WARNING: Removing unreachable block (ram,0x00010ab687b4) */

undefined1  [16] FUN_10ab6871c(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f694166,0x17);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10ab74ae0(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10ab687f4; end: 10ab6898f;  */

undefined8 * FUN_10ab687f4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab68990; end: 10ab68993;  */

void FUN_10ab68990(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_30 [8];
  long *plStack_28;
  
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c44818);
  FUN_10a7f02bc(auStack_30,param_2,0);
  FUN_10a7f03b4(param_1 + 0xe0,auStack_30);
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
  (**(code **)(*param_2 + 0x220))(param_2);
  return;
}



/* Entry: 10ab68994; end: 10ab68a6f;  */

void FUN_10ab68994(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010ab689cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))(param_2,&PTR_DAT_110c44818,*(undefined8 *)(param_1 + 0xe0));
  return;
}



/* Entry: 10ab68a70; end: 10ab68b07;  */

void FUN_10ab68a70(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10ab68b08; end: 10ab68f0f;  */

void FUN_10ab68b08(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f69417e,0xc);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4eb00;
  pppuVar2 = (undefined8 ***)&UNK_10f6937f5;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4eb00;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,"enabled",FUN_10ab74c98,FUN_10ab74d50);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f5750e7,FUN_10ab74ee0,FUN_10ab74f9c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69381c,FUN_10ab75080,FUN_10ab7513c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f693834,FUN_10ab75220,FUN_10ab752dc);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69384a,FUN_10ab7539c,FUN_10ab75458);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f693864,FUN_10ab75518,FUN_10ab755d4);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69387b,FUN_10ab756b8,FUN_10ab75774);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f69388a,FUN_10ab75834,FUN_10ab758f0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f693893,FUN_10ab759b0,FUN_10ab75a6c);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f69417e,0xc);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab68ef4);
  (*pcVar6)();
}



/* Entry: 10ab68f10; end: 10ab69087;  */

void FUN_10ab68f10(ulong param_1)

{
  ulong uVar1;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "StencilFace";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&pcStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,pcStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "FrontAndBack";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab69088(param_1,&pcStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Front";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab69088();
  uStack_a0 = 0;
  uStack_98 = 0;
  pcStack_a8 = "Back";
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab69088();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab69088; end: 10ab6912f;  */

undefined8 * FUN_10ab69088(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab69130);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ab69130; end: 10ab693bf;  */

void FUN_10ab69130(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6938a9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f65ba26;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938b9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f5a37a8;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938bf;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f5a37c2;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938c9;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938d6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938dc;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab693c0();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab693c0; end: 10ab69467;  */

undefined8 * FUN_10ab693c0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab69468);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ab69468; end: 10ab696f7;  */

void FUN_10ab69468(ulong param_1)

{
  ulong uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &UNK_10f6938e5;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168,&puStack_a8);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,uStack_90 & 0xffffffff,uStack_90._4_4_,uStack_58,uStack_88 & 0xffffffff,
                uStack_88._4_4_);
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,puStack_a8);
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938f6;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8(param_1,&puStack_a8,0);
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f68e694;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f6938fb;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f693903;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f693912;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f693920;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f69392f;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  uStack_a0 = 0;
  uStack_98 = 0;
  puStack_a8 = &DAT_10f69393d;
  uStack_88 = 0xffffffffffffffff;
  uStack_90 = 0x100000064;
  puStack_80 = &UNK_10f6937f5;
  uStack_78 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0x110;
  uStack_58 = 0xffffffff;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_10ab696f8();
  FUN_10a003ff4();
  return;
}



/* Entry: 10ab696f8; end: 10ab6979f;  */

undefined8 * FUN_10ab696f8(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  puVar2 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if (((ulong)puVar2 & 1) == 0) {
    if (param_1[2] == param_1[3]) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10ab697a0);
      (*pcVar1)();
    }
    aiStack_40[0] = 3;
    puStack_38 = (undefined8 *)(double)param_3;
    FUN_10a005308(param_1[3] + -8,*param_1,*param_2,aiStack_40);
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
  }
  return param_1;
}



/* Entry: 10ab697a0; end: 10ab697d3;  */

long FUN_10ab697a0(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
  return param_1;
}



/* Entry: 10ab697d4; end: 10ab697e3;  */

undefined8 * FUN_10ab697d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_DAT_110b17898;
  plVar5 = (long *)param_1[2];
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
  return param_1 + 1;
}



/* Entry: 10ab697e4; end: 10ab69847;  */

void FUN_10ab697e4(long param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10ab69848; end: 10ab69af7;  */

void FUN_10ab69848(undefined8 param_1,long param_2)

{
  undefined **appuStack_188 [2];
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_69 [9];
  
  FUN_10ab69af8(*(undefined1 *)(param_2 + 0x2a));
  FUN_10ab69af8(*(undefined1 *)(param_2 + 0x2b));
  FUN_10ab69af8();
  FUN_109febc44(appuStack_188);
  FUN_10a002568(&ppuStack_178,&UNK_10f69417e,0xc);
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  func_0x00010a002480(param_1,&ppuStack_170,auStack_69);
  appuStack_188[0] = &PTR_SUB_1108a5a38;
  ppuStack_178 = &PTR_DAT_1108a5a60;
  appuStack_108[0] = &PTR_DAT_1108a5a88;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_188,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  return;
}



/* Entry: 10ab69af8; end: 10ab69b3b;  */

undefined1  [16] FUN_10ab69af8(byte param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_1 < 8) {
    auVar1._8_8_ = *(undefined8 *)(&UNK_10e4fe750 + (ulong)param_1 * 8);
    auVar1._0_8_ = (&PTR_DAT_110c4f0b8)[param_1];
    return auVar1;
  }
  auVar2._8_8_ = 0x11;
  auVar2._0_8_ = &UNK_10f5978c8;
  return auVar2;
}



/* Entry: 10ab69b3c; end: 10ab69df7;  */

void FUN_10ab69b3c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x200))(param_2,&PTR_DAT_110c4e028);
  if ((int)plVar1 != 0) {
    (**(code **)(*param_2 + 0x210))(param_2,&PTR_DAT_110c4e028);
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x50))(param_2,&PTR_s_enabled_110c4e048);
    *(char *)(param_1 + 0x28) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4e598,*(undefined1 *)(param_1 + 0x29));
    *(char *)(param_1 + 0x29) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4e068,*(undefined1 *)(param_1 + 0x2a));
    *(char *)(param_1 + 0x2a) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4e088,*(undefined1 *)(param_1 + 0x2b));
    *(char *)(param_1 + 0x2b) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4e0a8,*(undefined1 *)(param_1 + 0x2c));
    *(char *)(param_1 + 0x2c) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 0x38))(param_2,&PTR_DAT_110c4e0c8,*(undefined1 *)(param_1 + 0x2d));
    *(char *)(param_1 + 0x2d) = (char)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e0e8);
    *(int *)(param_1 + 0x30) = (int)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e108);
    *(int *)(param_1 + 0x34) = (int)plVar1;
    plVar1 = param_2;
    (**(code **)(*param_2 + 200))(param_2,&PTR_DAT_110c4e128);
    *(int *)(param_1 + 0x38) = (int)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010ab69ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x220))(param_2);
    return;
  }
  return;
}



/* Entry: 10ab69df8; end: 10ab69e67;  */

undefined1  [16] FUN_10ab69df8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xd;
  auVar1._0_8_ = &UNK_10f633e9d;
  return auVar1;
}



/* Entry: 10ab69e68; end: 10ab6a46b;  */

void FUN_10ab69e68(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f633e9d,0xd);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c4eff0;
  pppuVar2 = (undefined8 ***)&UNK_10f6937f5;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c4eff0;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0x13c,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&DAT_10f6535d4,FUN_10ab75b2c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&DAT_10f644ee7,FUN_10ab75bec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&DAT_10f644ef0,FUN_10ab75d20,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a02,FUN_10ab75dec,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a0c,FUN_10ab75eb8,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a1c,FUN_10ab75fbc,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,2,0,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a2e,FUN_10ab760c0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a43,FUN_10ab76264,5,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a53,FUN_10ab76428,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,2,0x13b,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10ab6a44c;
    FUN_10a054dac(param_1,&UNK_10f693a5d,FUN_10ab7652c,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f650531,FUN_10ab76618,FUN_10ab766d0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    puStack_68 = *(undefined **)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f633e9d,0xd);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f654ed1;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f6937f5;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_68 = &UNK_10f6937f5;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab6a44c;
      FUN_10a054dac(param_1,&UNK_10f693a6b,FUN_10ab769c4,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab6a44c;
      FUN_10a054dac(param_1,&UNK_10f693a7e,FUN_10ab76a74,0,*(long *)(param_1 + 0x18) + -8);
    }
    uVar7 = param_1;
    FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) goto LAB_10ab6a44c;
      FUN_10a054dac(param_1,&UNK_10f693a96,FUN_10ab76b24,0,*(long *)(param_1 + 0x18) + -8);
    }
    func_0x00010a004064(param_1);
    return;
  }
LAB_10ab6a44c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10ab6a450);
  (*pcVar6)();
}



/* Entry: 10ab6a46c; end: 10ab6a573;  */

void FUN_10ab6a46c(undefined8 param_1)

{
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f693ab3;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6937f5;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  puStack_60 = &UNK_10f6937f5;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10ab6a574(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f693ac0;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6937f5;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 0;
  FUN_10ab6a5cc(param_1,&puStack_98,&uStack_9c);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f693ac4;
  uStack_78 = 0xffffffffffffffff;
  uStack_80 = 0x100000064;
  puStack_70 = &UNK_10f6937f5;
  puStack_60 = (undefined *)0x0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_9c = 1;
  FUN_10ab6a5cc(param_1,&puStack_98,&uStack_9c);
  FUN_10a003ff4(param_1);
  return;
}



/* Entry: 10ab6a574; end: 10ab6a5cb;  */

ulong FUN_10ab6a574(ulong param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *(undefined1 *)(param_1 + 0x1ac) = 1;
  FUN_10a0050a8(param_1 + 0x168);
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    func_0x0001098946ac(param_1,*param_2);
  }
  return param_1;
}



/* Entry: 10ab6a5cc; end: 10ab6a623;  */

ulong FUN_10ab6a5cc(ulong param_1,undefined8 *param_2,undefined4 *param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_10a0051e8(param_1,*(undefined4 *)(param_2 + 3),*(undefined4 *)((long)param_2 + 0x1c),
                *(undefined4 *)(param_2 + 10),*(undefined4 *)(param_2 + 4),
                *(undefined4 *)((long)param_2 + 0x24));
  if ((uVar1 & 1) == 0) {
    FUN_10ab76bd4(param_1,*param_2,*param_3);
  }
  return param_1;
}



/* Entry: 10ab6a624; end: 10ab6a887;  */

undefined8 * FUN_10ab6a624(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_10aa7093c();
  FUN_10a03c0d0(puVar1 + 0x1c);
  FUN_10a03e114(param_1 + 0x20);
  param_1[0x26] = &UNK_10e52b660;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  *(ushort *)(param_1 + 0x2a) = *(ushort *)(param_1 + 0x2a) & 0xfe00;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = &UNK_10e52b660;
  param_1[0x3a] = 0;
  param_1[0x3c] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = &UNK_10e52b660;
  param_1[0x3f] = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  *(ushort *)((long)param_1 + 0x209) = *(ushort *)((long)param_1 + 0x209) & 0xfc00 | 1;
  *param_1 = &PTR_FUN_110c4e158;
  param_1[2] = &PTR_FUN_110c4e210;
  param_1[7] = &PTR_DAT_110c4e268;
  param_1[0x1c] = &PTR_DAT_110c4e288;
  param_1[0x20] = &PTR_DAT_110c4e2b0;
  param_1[0x24] = &PTR_DAT_110c4e2d8;
  param_1[0x25] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = &PTR_DAT_110c4e308;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  if (sRam0000000113306be8 == -1) {
    sRam0000000113306be8 = 0x268;
  }
  param_1[0x4f] = param_1 + 0x4f;
  param_1[0x50] = param_1 + 0x4f;
  param_1[0x51] = 0;
  param_1[0x52] = param_1 + 0x52;
  param_1[0x53] = param_1 + 0x52;
  param_1[0x54] = 0;
  return param_1;
}



/* Entry: 10ab6a888; end: 10ab6a95f;  */

long FUN_10ab6a888(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  long lStack_30;
  long *plStack_28;
  
  FUN_10ab6a624(param_1,param_2,param_4,param_5);
  lStack_30 = *param_3;
  if (lStack_30 != 0) {
    plStack_28 = (long *)param_3[1];
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    func_0x00010ab6a74c(param_1 + 0x268,&lStack_30);
    plVar1 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar2 = plStack_28 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar1);
      }
    }
    return param_1;
  }
  FUN_10a00946c(&UNK_10f693ac8);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6a93c);
  (*pcVar5)();
}



/* Entry: 10ab6a960; end: 10ab6a963;  */

undefined8 * FUN_10ab6a960(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c4e158;
  param_1[2] = &PTR_FUN_110c4e210;
  param_1[7] = &PTR_DAT_110c4e268;
  param_1[0x1c] = &PTR_DAT_110c4e288;
  param_1[0x20] = &PTR_DAT_110c4e2b0;
  param_1[0x24] = &PTR_DAT_110c4e2d8;
  param_1[0x36] = &PTR_DAT_110c4e308;
  FUN_10ab72204(param_1 + 0x52);
  FUN_10ab72350(param_1 + 0x4f);
  FUN_10ab76c58(param_1 + 0x4d);
  param_1[0x24] = &PTR_FUN_110c4e8b8;
  param_1[0x36] = &PTR_DAT_110c4e8e8;
  FUN_10a1c0a9c(param_1 + 0x24);
  param_1[0x20] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x23] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x21);
  param_1[0x1c] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1f] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1d);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10ab6a964; end: 10ab6aa9f;  */

undefined8
FUN_10ab6a964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 uStack_70;
  char cStack_59;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  FUN_10a0ff18c(auStack_88,param_3,param_4);
  puVar6 = auStack_88;
  uVar5 = param_2;
  FUN_10ac5fb74(&uStack_50,param_2,puVar6,0);
  plVar4 = plStack_48;
  plStack_38 = plStack_48;
  uStack_40 = uStack_50;
  uStack_50 = 0;
  plStack_48 = (long *)0x0;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,param_2,&uStack_40,uVar5,puVar6);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
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
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  if (cStack_71 < '\0') {
    __ZdlPv(auStack_88[0]);
  }
  return param_1;
}



/* Entry: 10ab6aaa0; end: 10ab6ab9b;  */

undefined8 FUN_10ab6aaa0(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  puVar5 = &uStack_31;
  puVar6 = &uStack_40;
  uStack_40 = param_2;
  FUN_10a2034d0(&uStack_60,puVar5,puVar6);
  plVar4 = plStack_58;
  plStack_48 = plStack_58;
  uStack_50 = uStack_60;
  uStack_60 = 0;
  plStack_58 = (long *)0x0;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,param_2,&uStack_50,puVar5,puVar6);
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 1;
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  plVar4 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
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
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  return param_1;
}



/* Entry: 10ab6ab9c; end: 10ab6abcb;  */

undefined8 * FUN_10ab6ab9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c4e158;
  *param_1 = &PTR_FUN_110c4e210;
  param_1[5] = &PTR_DAT_110c4e268;
  param_1[0x1a] = &PTR_DAT_110c4e288;
  param_1[0x1e] = &PTR_DAT_110c4e2b0;
  param_1[0x22] = &PTR_DAT_110c4e2d8;
  param_1[0x34] = &PTR_DAT_110c4e308;
  FUN_10ab72204(param_1 + 0x50);
  FUN_10ab72350(param_1 + 0x4d);
  FUN_10ab76c58(param_1 + 0x4b);
  param_1[0x22] = &PTR_FUN_110c4e8b8;
  param_1[0x34] = &PTR_DAT_110c4e8e8;
  FUN_10a1c0a9c(param_1 + 0x22);
  param_1[0x1e] = &PTR_FUN_110b9fa98;
  if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x21] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1f);
  param_1[0x1a] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x1d] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x1d] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10ab6abcc; end: 10ab6ac6f;  */

void FUN_10ab6abcc(void)

{
  func_0x00010ab6a7b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10ab6ac70; end: 10ab6b76b;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6b46c) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b470) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b478) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b480) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b484) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b320) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b324) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b32c) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b334) */
/* WARNING: Removing unreachable block (ram,0x00010ab6b338) */

void FUN_10ab6ac70(undefined8 *param_1,long param_2,undefined **param_3)

{
  undefined ******ppppppuVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  long *plVar9;
  long *plVar10;
  undefined *****pppppuVar11;
  undefined ******ppppppuVar12;
  undefined ******ppppppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  long *extraout_x8;
  undefined *****pppppuVar18;
  undefined *****pppppuVar19;
  undefined ****ppppuVar20;
  undefined ****ppppuVar21;
  long lVar22;
  undefined ******ppppppuVar23;
  long unaff_x23;
  undefined ******unaff_x24;
  undefined8 uVar24;
  long lStack_250;
  long *plStack_248;
  long *plStack_240;
  long *plStack_238;
  undefined *puStack_230;
  undefined ***pppuStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  undefined1 auStack_208 [8];
  long *plStack_200;
  code *pcStack_1f8;
  undefined **ppuStack_1f0;
  undefined *puStack_1e8;
  undefined1 uStack_1e0;
  long lStack_1b8;
  undefined *****pppppuStack_1b0;
  long lStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined *****pppppuStack_198;
  undefined *****pppppuStack_190;
  undefined *puStack_188;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined ****ppppuStack_170;
  undefined ****ppppuStack_168;
  undefined *****pppppuStack_160;
  undefined *****pppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined ****ppppuStack_140;
  undefined *****pppppuStack_138;
  undefined *****pppppuStack_130;
  undefined *****pppppuStack_128;
  long lStack_120;
  undefined *****pppppuStack_118;
  undefined *****pppppuStack_110;
  undefined *****pppppuStack_108;
  undefined *****pppppuStack_100;
  undefined *****pppppuStack_f8;
  undefined *****pppppuStack_f0;
  undefined *****pppppuStack_e8;
  code *pcStack_e0;
  undefined ****appppuStack_d8 [8];
  undefined *****pppppuStack_98;
  undefined *****pppppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = *(long *)(param_2 + 0x268);
  if (lVar5 != 0) {
    param_3 = &PTR_DAT_110bb3788;
    ___dynamic_cast(lVar5,&PTR_DAT_110bb3788,&PTR_DAT_110c5ef68,0);
    if (lVar5 != 0) {
      pppppuStack_118 = *(undefined ******)(param_2 + 0x270);
      if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
        ppppppuVar7 = (undefined ******)(pppppuStack_118 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
          if (bVar4) {
            *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      lVar22 = *(long *)(param_2 + 0x50);
      lStack_120 = lVar5;
      FUN_10ac11a94(&ppppuStack_140);
      if (lVar22 == 0) {
        pppppuVar11 = (undefined *****)0x2c0;
        __Znwm();
        ppppppuVar7 = (undefined ******)pppppuStack_138;
        pppppuVar11[1] = (undefined ****)0x0;
        pppppuVar11[2] = (undefined ****)0x0;
        *pppppuVar11 = (undefined ****)&PTR_DAT_110b9fda0;
        pppppuVar19 = pppppuVar11 + 3;
        pppppuStack_e8 = pppppuStack_138;
        pppppuStack_f0 = (undefined *****)ppppuStack_140;
        ppppuStack_140 = (undefined ****)0x0;
        pppppuStack_138 = (undefined *****)0x0;
        pppppuVar18 = pppppuVar11;
        func_0x00010a0fda30();
        FUN_10ab6a888(pppppuVar19,0,&pppppuStack_f0,pppppuVar18,param_3);
        if (ppppppuVar7 != (undefined ******)0x0) {
          ppppppuVar6 = ppppppuVar7 + 1;
          do {
            pppppuVar18 = *ppppppuVar6;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
            if (bVar4) {
              *ppppppuVar6 = (undefined *****)((long)pppppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar7)[2])(ppppppuVar7);
            __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar7);
          }
        }
        ppppppuVar6 = (undefined ******)(pppppuVar11 + 8);
        pppppuStack_98 = pppppuVar19;
        pppppuStack_90 = pppppuVar11;
        FUN_10a05b2a8(&pppppuStack_98,ppppppuVar6,pppppuVar19);
        FUN_10a05b04c(&pppppuStack_100,&pppppuStack_98);
        pppppuVar19 = pppppuStack_90;
        if (pppppuStack_90 != (undefined *****)0x0) {
          pppppuVar18 = pppppuStack_90 + 1;
          do {
            ppppuVar20 = *pppppuVar18;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(pppppuVar18,0x10);
            if (bVar4) {
              *pppppuVar18 = (undefined ****)((long)ppppuVar20 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (ppppuVar20 == (undefined ****)0x0) {
            (*(code *)(*pppppuStack_90)[2])(pppppuStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
          }
        }
        if ((undefined ******)pppppuStack_f8 == (undefined ******)0x0) {
          pppppuStack_e8 = (undefined *****)0x0;
        }
        else {
          ppppppuVar23 = (undefined ******)(pppppuStack_f8 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
            if (bVar4) {
              *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          pppppuStack_e8 = pppppuStack_f8;
          if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
            ppppppuVar23 = (undefined ******)(pppppuStack_f8 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
              if (bVar4) {
                *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        ppppppuVar23 = (undefined ******)0x0;
        uStack_80 = 0;
        uStack_88 = 0;
        pppppuStack_98 = (undefined *****)&UNK_1053a6a3c;
        appppuStack_d8[0] = (undefined ****)&PTR_DAT_110c4e8f8;
        pcStack_e0 = FUN_10ab76f7c;
        pppppuStack_f0 = pppppuStack_100;
        pppppuStack_90 = (undefined *****)&PTR_DAT_110ae9180;
        FUN_10a044790(&pppppuStack_98);
        (*(code *)*pppppuStack_90)(&pppppuStack_90);
        pppppuVar19 = pppppuStack_f8;
        if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
          ppppppuVar12 = (undefined ******)(pppppuStack_f8 + 1);
          do {
            pppppuVar18 = *ppppppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
          }
        }
        pppppuStack_128 = pppppuStack_e8;
        pppppuStack_130 = pppppuStack_f0;
        if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
          ppppppuVar12 = (undefined ******)(pppppuStack_e8 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_10a044790(&pcStack_e0);
        ppppppuVar12 = (undefined ******)appppuStack_d8;
        (*(code *)*appppuStack_d8[0])();
        ppppppuVar8 = (undefined ******)pppppuStack_e8;
        if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
          ppppppuVar13 = (undefined ******)(pppppuStack_e8 + 1);
          do {
            pppppuVar19 = *ppppppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
            if (bVar4) {
              *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          goto LAB_10ab6b554;
        }
      }
      else {
        pppppuStack_110 = *(undefined ******)(lVar22 + 0x858);
        pppppuStack_108 = *(undefined ******)(lVar22 + 0x860);
        if ((undefined ******)pppppuStack_108 != (undefined ******)0x0) {
          ppppppuVar7 = (undefined ******)(pppppuStack_108 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
            if (bVar4) {
              *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        ppppppuVar6 = (undefined ******)0x2a8;
        __Znwm();
        pppppuVar19 = pppppuStack_138;
        pppppuStack_e8 = pppppuStack_138;
        pppppuStack_f0 = (undefined *****)ppppuStack_140;
        ppppuStack_140 = (undefined ****)0x0;
        pppppuStack_138 = (undefined *****)0x0;
        ppppppuVar7 = ppppppuVar6;
        func_0x00010a0fda30();
        FUN_10ab6a888(ppppppuVar6,lVar22,&pppppuStack_f0,ppppppuVar7,param_3);
        if ((undefined ******)pppppuVar19 != (undefined ******)0x0) {
          ppppppuVar7 = (undefined ******)(pppppuVar19 + 1);
          do {
            pppppuVar18 = *ppppppuVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
            if (bVar4) {
              *ppppppuVar7 = (undefined *****)((long)pppppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*pppppuVar19)[2])(pppppuVar19);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
          }
        }
        ppppppuVar23 = (undefined ******)pppppuStack_108;
        ppppppuVar7 = (undefined ******)pppppuStack_110;
        pppppuStack_100 = pppppuStack_110;
        pppppuStack_f8 = pppppuStack_108;
        if ((undefined ******)pppppuStack_108 != (undefined ******)0x0) {
          ppppppuVar12 = (undefined ******)(pppppuStack_108 + 1);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          ppppppuVar12 = (undefined ******)(pppppuStack_108 + 2);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuStack_108);
        }
        pppppuStack_f0 = (undefined *****)ppppppuVar7;
        pppppuStack_e8 = (undefined *****)ppppppuVar23;
        FUN_10a05b208(&pppppuStack_98,ppppppuVar6,&pppppuStack_f0);
        FUN_10a05b04c(&pppppuStack_130);
        pppppuVar19 = pppppuStack_90;
        if ((undefined ******)pppppuStack_90 != (undefined ******)0x0) {
          ppppppuVar12 = (undefined ******)(pppppuStack_90 + 1);
          do {
            pppppuVar18 = *ppppppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_90)[2])(pppppuStack_90);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
          }
        }
        if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        pppppuVar19 = pppppuStack_f8;
        if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
          ppppppuVar12 = (undefined ******)(pppppuStack_f8 + 1);
          do {
            pppppuVar18 = *ppppppuVar12;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
            if (bVar4) {
              *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (pppppuVar18 == (undefined *****)0x0) {
            (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
            __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
          }
        }
        ppppppuVar12 = (undefined ******)pppppuStack_110;
        if (((undefined ******)pppppuStack_110 != (undefined ******)0x0) &&
           ((undefined ******)pppppuStack_130 != (undefined ******)0x0)) {
          pppppuStack_98 = pppppuStack_130;
          pppppuStack_90 = pppppuStack_128;
          if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
            ppppppuVar6 = (undefined ******)(pppppuStack_128 + 1);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
              if (bVar4) {
                *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          ppppppuVar6 = &pppppuStack_98;
          FUN_10aa88c30();
          ppppppuVar8 = (undefined ******)pppppuStack_90;
          if ((undefined ******)pppppuStack_90 != (undefined ******)0x0) {
            ppppppuVar13 = (undefined ******)(pppppuStack_90 + 1);
            do {
              pppppuVar19 = *ppppppuVar13;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
              if (bVar4) {
                *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (pppppuVar19 == (undefined *****)0x0) {
              (*(code *)(*pppppuStack_90)[2])(pppppuStack_90);
              __ZNSt3__119__shared_weak_count14__release_weakEv();
              ppppppuVar12 = ppppppuVar8;
            }
          }
        }
        ppppppuVar8 = (undefined ******)pppppuStack_108;
        if ((undefined ******)pppppuStack_108 != (undefined ******)0x0) {
          ppppppuVar13 = (undefined ******)(pppppuStack_108 + 1);
          do {
            pppppuVar19 = *ppppppuVar13;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
            if (bVar4) {
              *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
LAB_10ab6b554:
          if (pppppuVar19 == (undefined *****)0x0) {
            (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
            ppppppuVar12 = ppppppuVar8;
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
        }
      }
      ppppppuVar13 = (undefined ******)pppppuStack_138;
      param_1[1] = pppppuStack_128;
      *param_1 = pppppuStack_130;
      pppppuStack_130 = (undefined *****)0x0;
      pppppuStack_128 = (undefined *****)0x0;
      if ((undefined ******)pppppuStack_138 != (undefined ******)0x0) {
        ppppppuVar1 = (undefined ******)(pppppuStack_138 + 1);
        do {
          pppppuVar19 = *ppppppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar4) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar19 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppuVar19 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_138)[2])(pppppuStack_138);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar12 = ppppppuVar13;
        }
      }
      ppppppuVar13 = (undefined ******)pppppuStack_118;
      if ((undefined ******)pppppuStack_118 != (undefined ******)0x0) {
        ppppppuVar1 = (undefined ******)(pppppuStack_118 + 1);
        do {
          pppppuVar19 = *ppppppuVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar1,0x10);
          if (bVar4) {
            *ppppppuVar1 = (undefined *****)((long)pppppuVar19 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppuVar19 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_118)[2])(pppppuStack_118);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar12 = ppppppuVar13;
        }
      }
      goto LAB_10ab6b5ec;
    }
  }
  lStack_120 = 0;
  pppppuStack_118 = (undefined *****)0x0;
  unaff_x23 = *(long *)(param_2 + 0x50);
  if (unaff_x23 == 0) {
    plVar9 = (long *)0x2c0;
    __Znwm();
    plVar9[1] = 0;
    plVar9[2] = 0;
    *plVar9 = (long)&PTR_DAT_110b9fda0;
    ppppppuVar7 = (undefined ******)(plVar9 + 3);
    plVar10 = plVar9;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppppuVar7,0,param_2 + 0x268,plVar10,param_3);
    ppppppuVar6 = (undefined ******)(plVar9 + 8);
    pppppuStack_f0 = (undefined *****)ppppppuVar7;
    pppppuStack_e8 = (undefined *****)plVar9;
    FUN_10a05b2a8(&pppppuStack_f0,ppppppuVar6,ppppppuVar7);
    FUN_10a05b04c(&pppppuStack_100,&pppppuStack_f0);
    pppppuVar19 = pppppuStack_e8;
    if (pppppuStack_e8 != (undefined *****)0x0) {
      plVar10 = (long *)(pppppuStack_e8 + 1);
      do {
        lVar5 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar5 == 0) {
        (**(code **)((long)*pppppuStack_e8 + 0x10))(pppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
      }
    }
    if ((undefined ******)pppppuStack_f8 == (undefined ******)0x0) {
      pppppuStack_e8 = (undefined *****)0x0;
    }
    else {
      ppppppuVar23 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
        if (bVar4) {
          *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      pppppuStack_e8 = pppppuStack_f8;
      if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
        ppppppuVar23 = (undefined ******)(pppppuStack_f8 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar23,0x10);
          if (bVar4) {
            *ppppppuVar23 = (undefined *****)((long)*ppppppuVar23 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    ppppppuVar23 = (undefined ******)0x0;
    uStack_80 = 0;
    uStack_88 = 0;
    pppppuStack_98 = (undefined *****)&UNK_1053a6a3c;
    appppuStack_d8[0] = (undefined ****)&PTR_DAT_110c4e910;
    pcStack_e0 = (code *)0x10ab76fb4;
    pppppuStack_f0 = pppppuStack_100;
    pppppuStack_90 = (undefined *****)&PTR_DAT_110ae9180;
    FUN_10a044790(&pppppuStack_98);
    (*(code *)*pppppuStack_90)(&pppppuStack_90);
    pppppuVar19 = pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar12 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        pppppuVar18 = *ppppppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
        if (bVar4) {
          *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar18 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
      }
    }
    pppppuStack_128 = pppppuStack_e8;
    pppppuStack_130 = pppppuStack_f0;
    if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
      ppppppuVar12 = (undefined ******)(pppppuStack_e8 + 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
        if (bVar4) {
          *ppppppuVar12 = (undefined *****)((long)*ppppppuVar12 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    FUN_10a044790(&pcStack_e0);
    ppppppuVar12 = (undefined ******)appppuStack_d8;
    (*(code *)*appppuStack_d8[0])();
    ppppppuVar8 = (undefined ******)pppppuStack_e8;
    if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuStack_e8 + 1);
      do {
        pppppuVar19 = *ppppppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar4) {
          *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_10ab6b408;
    }
  }
  else {
    unaff_x24 = *(undefined *******)(unaff_x23 + 0x858);
    ppppppuVar23 = *(undefined *******)(unaff_x23 + 0x860);
    if (ppppppuVar23 != (undefined ******)0x0) {
      ppppppuVar7 = ppppppuVar23 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar7,0x10);
        if (bVar4) {
          *ppppppuVar7 = (undefined *****)((long)*ppppppuVar7 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    ppppppuVar7 = (undefined ******)0x2a8;
    pppppuStack_110 = (undefined *****)unaff_x24;
    pppppuStack_108 = (undefined *****)ppppppuVar23;
    __Znwm();
    ppppppuVar6 = ppppppuVar7;
    func_0x00010a0fda30();
    FUN_10ab6a888(ppppppuVar7,unaff_x23,param_2 + 0x268,ppppppuVar6,param_3);
    pppppuStack_100 = (undefined *****)unaff_x24;
    pppppuStack_f8 = (undefined *****)ppppppuVar23;
    if (ppppppuVar23 != (undefined ******)0x0) {
      ppppppuVar6 = ppppppuVar23 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar4) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      ppppppuVar6 = ppppppuVar23 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar4) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
        if (bVar4) {
          *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppppppuVar23);
    }
    ppppppuVar6 = ppppppuVar7;
    pppppuStack_98 = (undefined *****)unaff_x24;
    pppppuStack_90 = (undefined *****)ppppppuVar23;
    FUN_10a05b208(&pppppuStack_f0,ppppppuVar7,&pppppuStack_98);
    FUN_10a05b04c(&pppppuStack_130,&pppppuStack_f0);
    pppppuVar19 = pppppuStack_e8;
    if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
      ppppppuVar12 = (undefined ******)(pppppuStack_e8 + 1);
      do {
        pppppuVar18 = *ppppppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
        if (bVar4) {
          *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar18 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
      }
    }
    if ((undefined ******)pppppuStack_90 != (undefined ******)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    pppppuVar19 = pppppuStack_f8;
    if ((undefined ******)pppppuStack_f8 != (undefined ******)0x0) {
      ppppppuVar12 = (undefined ******)(pppppuStack_f8 + 1);
      do {
        pppppuVar18 = *ppppppuVar12;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar12,0x10);
        if (bVar4) {
          *ppppppuVar12 = (undefined *****)((long)pppppuVar18 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (pppppuVar18 == (undefined *****)0x0) {
        (*(code *)(*pppppuStack_f8)[2])(pppppuStack_f8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pppppuVar19);
      }
    }
    ppppppuVar12 = (undefined ******)pppppuStack_110;
    if (((undefined ******)pppppuStack_110 != (undefined ******)0x0) &&
       ((undefined ******)pppppuStack_130 != (undefined ******)0x0)) {
      pppppuStack_f0 = pppppuStack_130;
      pppppuStack_e8 = pppppuStack_128;
      if ((undefined ******)pppppuStack_128 != (undefined ******)0x0) {
        ppppppuVar6 = (undefined ******)(pppppuStack_128 + 1);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar6,0x10);
          if (bVar4) {
            *ppppppuVar6 = (undefined *****)((long)*ppppppuVar6 + 1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      ppppppuVar6 = &pppppuStack_f0;
      FUN_10aa88c30();
      ppppppuVar8 = (undefined ******)pppppuStack_e8;
      if ((undefined ******)pppppuStack_e8 != (undefined ******)0x0) {
        ppppppuVar13 = (undefined ******)(pppppuStack_e8 + 1);
        do {
          pppppuVar19 = *ppppppuVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
          if (bVar4) {
            *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (pppppuVar19 == (undefined *****)0x0) {
          (*(code *)(*pppppuStack_e8)[2])(pppppuStack_e8);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          ppppppuVar12 = ppppppuVar8;
        }
      }
    }
    ppppppuVar8 = (undefined ******)pppppuStack_108;
    if ((undefined ******)pppppuStack_108 != (undefined ******)0x0) {
      ppppppuVar13 = (undefined ******)(pppppuStack_108 + 1);
      do {
        pppppuVar19 = *ppppppuVar13;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppppppuVar13,0x10);
        if (bVar4) {
          *ppppppuVar13 = (undefined *****)((long)pppppuVar19 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_10ab6b408:
      if (pppppuVar19 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar8)[2])(ppppppuVar8);
        ppppppuVar12 = ppppppuVar8;
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
    }
  }
  param_1[1] = pppppuStack_128;
  *param_1 = pppppuStack_130;
LAB_10ab6b5ec:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010a0536d4(&pppppuStack_98);
  func_0x00010a05248c(&pppppuStack_130);
  FUN_10a054c5c(&pppppuStack_110);
  FUN_10a37b740(&ppppuStack_140);
  FUN_10a37b740(&lStack_120);
  ppppppuVar13 = ppppppuVar12;
  __Unwind_Resume(ppppppuVar12);
  pcStack_148 = FUN_10ab6b76c;
  ppuStack_180 = &puStack_150;
  ppppuStack_170 = (undefined ****)*ppppppuVar6;
  pppppuStack_160 = (undefined *****)ppppppuVar8;
  pppppuStack_158 = (undefined *****)ppppppuVar12;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((undefined *****)ppppuStack_170 != (undefined *****)0x0) {
    ppppuStack_168 = (undefined ****)ppppppuVar6[1];
    *ppppppuVar6 = (undefined *****)0x0;
    ppppppuVar6[1] = (undefined *****)0x0;
    func_0x00010ab6a74c(ppppppuVar13 + 0x4d,&ppppuStack_170);
    ppppuVar20 = ppppuStack_168;
    if ((undefined *****)ppppuStack_168 != (undefined *****)0x0) {
      pppppuVar19 = (undefined *****)(ppppuStack_168 + 1);
      do {
        ppppuVar21 = *pppppuVar19;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppppuVar19,0x10);
        if (bVar4) {
          *pppppuVar19 = (undefined ****)((long)ppppuVar21 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppppuVar21 == (undefined ****)0x0) {
        (*(code *)(*ppppuStack_168)[2])(ppppuStack_168);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppppuVar20);
      }
    }
    return;
  }
  puVar14 = &UNK_10f693ac8;
  FUN_10a00946c();
  FUN_10a05b1b0(&ppppuStack_170);
  puVar15 = puVar14;
  __Unwind_Resume();
  pcStack_178 = FUN_10ab6b804;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_1b0 = (undefined *****)unaff_x24;
  lStack_1a8 = unaff_x23;
  pppppuStack_1a0 = (undefined *****)ppppppuVar7;
  pppppuStack_198 = (undefined *****)ppppppuVar23;
  pppppuStack_190 = (undefined *****)ppppppuVar8;
  puStack_188 = puVar14;
  func_0x00010aa70acc();
  (*(code *)(*ppppppuVar6)[0x42])(ppppppuVar6,&PTR_s_provider_110c4de90);
  puStack_1e8 = puVar15 + 0x120;
  uVar2 = *(ushort *)(puVar15 + 0x209);
  *(ushort *)(puVar15 + 0x209) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(puVar15 + 0x150) =
       *(ushort *)(puVar15 + 0x150) & 0xff80 | *(ushort *)(puVar15 + 0x150) + 1 & 0x7f;
  uStack_1e0 = 1;
  pcStack_1f8 = FUN_10a1d3648;
  ppuStack_1f0 = &PTR_FUN_110bad818;
  FUN_10ab6b998(auStack_208,ppppppuVar6,0);
  plVar10 = (long *)(puVar15 + 0x268);
  func_0x00010ab6a74c(plVar10,auStack_208);
  if (plStack_200 != (long *)0x0) {
    plVar9 = plStack_200 + 1;
    do {
      lVar5 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_200 + 0x10))(plStack_200);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_200);
    }
  }
  lVar5 = *plVar10;
  if (lVar5 != 0) {
    uVar24 = *(undefined8 *)(puVar15 + 0x40);
    *(undefined8 *)(lVar5 + 0x280) = *(undefined8 *)(puVar15 + 0x48);
    *(undefined8 *)(lVar5 + 0x278) = uVar24;
  }
  (*(code *)(*ppppppuVar6)[0x44])(ppppppuVar6);
  FUN_10a044790(&pcStack_1f8);
  pppuVar16 = &ppuStack_1f0;
  (*(code *)*ppuStack_1f0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05b1b0(auStack_208);
  FUN_10a044790(&pcStack_1f8);
  (*(code *)*ppuStack_1f0)(&ppuStack_1f0);
  pppuVar17 = pppuVar16;
  __Unwind_Resume();
  plStack_240 = plStack_200;
  pcStack_218 = FUN_10ab6b998;
  plStack_238 = plVar10;
  puStack_230 = puVar15;
  pppuStack_228 = pppuVar16;
  pppuStack_220 = &ppuStack_180;
  (*(code *)(*pppuVar17)[0x4b])(&lStack_250);
  plVar10 = extraout_x8;
  if ((lStack_250 != 0) &&
     (___dynamic_cast(lStack_250,&PTR_DAT_110b9fe10,&PTR_DAT_110bb3788,0), plVar10 = extraout_x8,
     lStack_250 != 0)) {
    *extraout_x8 = lStack_250;
    extraout_x8[1] = (long)plStack_248;
    plVar10 = &lStack_250;
  }
  *plVar10 = 0;
  plVar10[1] = 0;
  if (plStack_248 != (long *)0x0) {
    plVar10 = plStack_248 + 1;
    do {
      lVar5 = *plVar10;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar4) {
        *plVar10 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_248 + 0x10))(plStack_248);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_248);
    }
  }
  return;
}



/* Entry: 10ab6b76c; end: 10ab6b803;  */

void FUN_10ab6b76c(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  long *extraout_x8;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined *puStack_f0;
  undefined ***pppuStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 auStack_c8 [8];
  long *plStack_c0;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined1 uStack_a0;
  long lStack_78;
  undefined1 *puStack_40;
  code *pcStack_38;
  long lStack_30;
  long *plStack_28;
  
  lStack_30 = *param_2;
  if (lStack_30 != 0) {
    plStack_28 = (long *)param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    func_0x00010ab6a74c(param_1 + 0x268,&lStack_30);
    plVar9 = plStack_28;
    if (plStack_28 != (long *)0x0) {
      plVar1 = plStack_28 + 1;
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
        (**(code **)(*plStack_28 + 0x10))(plStack_28);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
      }
    }
    return;
  }
  puVar5 = &UNK_10f693ac8;
  FUN_10a00946c();
  FUN_10a05b1b0(&lStack_30);
  __Unwind_Resume();
  pcStack_38 = FUN_10ab6b804;
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &stack0xfffffffffffffff0;
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c4de90);
  puStack_a8 = puVar5 + 0x120;
  uVar2 = *(ushort *)(puVar5 + 0x209);
  *(ushort *)(puVar5 + 0x209) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(puVar5 + 0x150) =
       *(ushort *)(puVar5 + 0x150) & 0xff80 | *(ushort *)(puVar5 + 0x150) + 1 & 0x7f;
  uStack_a0 = 1;
  pcStack_b8 = FUN_10a1d3648;
  ppuStack_b0 = &PTR_FUN_110bad818;
  FUN_10ab6b998(auStack_c8,param_2,0);
  plVar9 = (long *)(puVar5 + 0x268);
  func_0x00010ab6a74c(plVar9,auStack_c8);
  if (plStack_c0 != (long *)0x0) {
    plVar1 = plStack_c0 + 1;
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
      (**(code **)(*plStack_c0 + 0x10))(plStack_c0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_c0);
    }
  }
  lVar8 = *plVar9;
  if (lVar8 != 0) {
    uVar10 = *(undefined8 *)(puVar5 + 0x40);
    *(undefined8 *)(lVar8 + 0x280) = *(undefined8 *)(puVar5 + 0x48);
    *(undefined8 *)(lVar8 + 0x278) = uVar10;
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  FUN_10a044790(&pcStack_b8);
  pppuVar6 = &ppuStack_b0;
  (*(code *)*ppuStack_b0)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05b1b0(auStack_c8);
  FUN_10a044790(&pcStack_b8);
  (*(code *)*ppuStack_b0)(&ppuStack_b0);
  pppuVar7 = pppuVar6;
  __Unwind_Resume();
  plStack_100 = plStack_c0;
  pcStack_d8 = FUN_10ab6b998;
  plStack_f8 = plVar9;
  puStack_f0 = puVar5;
  pppuStack_e8 = pppuVar6;
  ppuStack_e0 = &puStack_40;
  (*(code *)(*pppuVar7)[0x4b])(&lStack_110);
  plVar9 = extraout_x8;
  if ((lStack_110 != 0) &&
     (___dynamic_cast(lStack_110,&PTR_DAT_110b9fe10,&PTR_DAT_110bb3788,0), plVar9 = extraout_x8,
     lStack_110 != 0)) {
    *extraout_x8 = lStack_110;
    extraout_x8[1] = (long)plStack_108;
    plVar9 = &lStack_110;
  }
  *plVar9 = 0;
  plVar9[1] = 0;
  if (plStack_108 != (long *)0x0) {
    plVar9 = plStack_108 + 1;
    do {
      lVar8 = *plVar9;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_108 + 0x10))(plStack_108);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
    }
  }
  return;
}



/* Entry: 10ab6b804; end: 10ab6b997;  */

void FUN_10ab6b804(long param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  long *extraout_x8;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lStack_e0;
  long *plStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined ***pppuStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  long *plStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  undefined1 uStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010aa70acc();
  (**(code **)(*param_2 + 0x210))(param_2,&PTR_s_provider_110c4de90);
  lStack_78 = param_1 + 0x120;
  uVar2 = *(ushort *)(param_1 + 0x209);
  *(ushort *)(param_1 + 0x209) = uVar2 & 0xff80 | uVar2 + 1 & 0x7f;
  *(ushort *)(param_1 + 0x150) =
       *(ushort *)(param_1 + 0x150) & 0xff80 | *(ushort *)(param_1 + 0x150) + 1 & 0x7f;
  uStack_70 = 1;
  pcStack_88 = FUN_10a1d3648;
  ppuStack_80 = &PTR_FUN_110bad818;
  FUN_10ab6b998(auStack_98,param_2,0);
  plVar8 = (long *)(param_1 + 0x268);
  func_0x00010ab6a74c(plVar8,auStack_98);
  if (plStack_90 != (long *)0x0) {
    plVar1 = plStack_90 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_90 + 0x10))(plStack_90);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_90);
    }
  }
  lVar7 = *plVar8;
  if (lVar7 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(lVar7 + 0x280) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(lVar7 + 0x278) = uVar9;
  }
  (**(code **)(*param_2 + 0x220))(param_2);
  FUN_10a044790(&pcStack_88);
  pppuVar5 = &ppuStack_80;
  (*(code *)*ppuStack_80)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  FUN_10a05b1b0(auStack_98);
  FUN_10a044790(&pcStack_88);
  (*(code *)*ppuStack_80)(&ppuStack_80);
  pppuVar6 = pppuVar5;
  __Unwind_Resume();
  plStack_d0 = plStack_90;
  pcStack_a8 = FUN_10ab6b998;
  plStack_c8 = plVar8;
  lStack_c0 = param_1;
  pppuStack_b8 = pppuVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  (*(code *)(*pppuVar6)[0x4b])(&lStack_e0);
  plVar8 = extraout_x8;
  if ((lStack_e0 != 0) &&
     (___dynamic_cast(lStack_e0,&PTR_DAT_110b9fe10,&PTR_DAT_110bb3788,0), plVar8 = extraout_x8,
     lStack_e0 != 0)) {
    *extraout_x8 = lStack_e0;
    extraout_x8[1] = (long)plStack_d8;
    plVar8 = &lStack_e0;
  }
  *plVar8 = 0;
  plVar8[1] = 0;
  if (plStack_d8 != (long *)0x0) {
    plVar8 = plStack_d8 + 1;
    do {
      lVar7 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_d8 + 0x10))(plStack_d8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_d8);
    }
  }
  return;
}



/* Entry: 10ab6b998; end: 10ab6ba8f;  */

void FUN_10ab6b998(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_40;
  long *plStack_38;
  
  (**(code **)(*param_2 + 600))(&lStack_40);
  if ((lStack_40 != 0) &&
     (___dynamic_cast(lStack_40,&PTR_DAT_110b9fe10,&PTR_DAT_110bb3788,0), lStack_40 != 0)) {
    *param_1 = lStack_40;
    param_1[1] = (long)plStack_38;
    param_1 = &lStack_40;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (plStack_38 != (long *)0x0) {
    plVar1 = plStack_38 + 1;
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
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_38);
    }
  }
  return;
}



/* Entry: 10ab6ba90; end: 10ab6bacb;  */

void FUN_10ab6ba90(long param_1,long *param_2)

{
  func_0x00010aa70b70();
                    /* WARNING: Could not recover jumptable at 0x00010ab6bac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x118))
            (param_2,&PTR_s_provider_110c4de90,*(undefined8 *)(param_1 + 0x268));
  return;
}



/* Entry: 10ab6bacc; end: 10ab6bba3;  */

long * FUN_10ab6bacc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  plVar1 = *(long **)(param_1 + 0x268);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0xb0))();
    plVar2 = *(long **)(param_1 + 0x268);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0xb8))();
      uVar4 = (uint)plVar1;
      if (uVar4 != 0 && (uint)plVar2 != 0) {
        plVar3 = *(long **)(param_1 + 0x268);
        if (plVar3 == (long *)0x0) {
          plVar3 = (long *)0x0;
        }
        else {
          (**(code **)(*plVar3 + 0xe8))();
        }
        FUN_109fc8e58(plVar1,plVar2,plVar3);
        plVar3 = *(long **)(param_1 + 0x268);
        if (plVar3 == (long *)0x0) {
          return plVar1;
        }
        (**(code **)(*plVar3 + 0xe0))();
        if ((int)plVar3 != 0) {
          return plVar1;
        }
        if (uVar4 < 0x41) {
          return plVar1;
        }
        if ((uint)plVar2 < 0x41) {
          return plVar1;
        }
        return (long *)((ulong)((long)plVar1 << 2) / 3);
      }
    }
  }
  return (long *)0x0;
}



/* Entry: 10ab6bba4; end: 10ab6be27;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6bd34) */

void FUN_10ab6bba4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 9,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a6874646977202c;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  if (*(long **)(param_2 + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x268) + 0xb0))();
  }
  __ZNSt3__19to_stringEj(&ppuStack_c0);
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f644f1b,10);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  if (*(long **)(param_2 + 0x268) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x268) + 0xb8))();
  }
  __ZNSt3__19to_stringEj(&ppuStack_d8);
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10ab6be28; end: 10ab6be2f;  */

/* WARNING: Removing unreachable block (ram,0x00010ab6bd34) */

void FUN_10ab6be28(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  byte bStack_c1;
  undefined8 **ppuStack_c0;
  ulong uStack_b8;
  byte bStack_a9;
  undefined8 **appuStack_a8 [2];
  char cStack_91;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  ulong uStack_50;
  byte bStack_41;
  
  FUN_10aa88ae4(&ppuStack_58);
  uVar1 = uStack_50;
  if (-1 < (char)bStack_41) {
    uVar1 = (ulong)bStack_41;
  }
  FUN_10a003c90(appuStack_a8,uVar1 + 9,&ppuStack_c0);
  pppuVar2 = (undefined8 ***)appuStack_a8[0];
  if (-1 < cStack_91) {
    pppuVar2 = appuStack_a8;
  }
  if (uVar1 != 0) {
    pppuVar3 = (undefined8 ***)ppuStack_58;
    if (-1 < (char)bStack_41) {
      pppuVar3 = &ppuStack_58;
    }
    _memmove(pppuVar2,pppuVar3,uVar1);
  }
  *(undefined8 *)((long)pppuVar2 + uVar1) = 0x3a6874646977202c;
  *(undefined2 *)((undefined8 *)((long)pppuVar2 + uVar1) + 1) = 0x20;
  if (*(long **)(param_2 + 600) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 600) + 0xb0))();
  }
  __ZNSt3__19to_stringEj(&ppuStack_c0);
  pppuVar2 = (undefined8 ***)ppuStack_c0;
  if (-1 < (char)bStack_a9) {
    uStack_b8 = (ulong)bStack_a9;
    pppuVar2 = &ppuStack_c0;
  }
  pppuVar3 = appuStack_a8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppuVar3,pppuVar2,uStack_b8);
  puStack_88 = pppuVar3[1];
  puStack_90 = *pppuVar3;
  puStack_80 = pppuVar3[2];
  pppuVar3[1] = (undefined8 **)0x0;
  pppuVar3[2] = (undefined8 **)0x0;
  *pppuVar3 = (undefined8 **)0x0;
  ppuVar4 = &puStack_90;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppuVar4,&UNK_10f644f1b,10);
  uStack_68 = ppuVar4[1];
  uStack_70 = *ppuVar4;
  uStack_60 = ppuVar4[2];
  ppuVar4[1] = (undefined8 *)0x0;
  ppuVar4[2] = (undefined8 *)0x0;
  *ppuVar4 = (undefined8 *)0x0;
  if (*(long **)(param_2 + 600) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 600) + 0xb8))();
  }
  __ZNSt3__19to_stringEj(&ppuStack_d8);
  pppuVar2 = (undefined8 ***)ppuStack_d8;
  if (-1 < (char)bStack_c1) {
    uStack_d0 = (ulong)bStack_c1;
    pppuVar2 = &ppuStack_d8;
  }
  puVar5 = &uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar5,pppuVar2,uStack_d0);
  uVar6 = *puVar5;
  param_1[1] = puVar5[1];
  *param_1 = uVar6;
  param_1[2] = puVar5[2];
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = 0;
  if ((char)bStack_c1 < '\0') {
    __ZdlPv(ppuStack_d8);
  }
  if ((long)puStack_80 < 0) {
    __ZdlPv(puStack_90);
  }
  if ((char)bStack_a9 < '\0') {
    __ZdlPv(ppuStack_c0);
  }
  if (cStack_91 < '\0') {
    __ZdlPv(appuStack_a8[0]);
  }
  if ((char)bStack_41 < '\0') {
    __ZdlPv(ppuStack_58);
  }
  return;
}



/* Entry: 10ab6be30; end: 10ab6bfff;  */

void FUN_10ab6be30(undefined8 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  code *pcVar3;
  long *plVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  int aiStack_58 [2];
  undefined8 uStack_50;
  undefined8 uStack_48;
  int aiStack_40 [2];
  undefined8 *puStack_38;
  
  FUN_10ab6c000(&lStack_70);
  if (lStack_70 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x50);
    puVar5 = (ulong *)0x1;
    FUN_10a088744(*(undefined8 *)(lStack_70 + 0x268));
    plVar4 = (long *)*puVar5;
    (**(code **)(*plVar4 + 0x10))();
    lVar7 = *(long *)(lVar6 + 0x870);
    lVar6 = *(long *)(lVar7 + 0x68);
    __ZNSt3__115recursive_mutex4lockEv(lVar7 + 0x70);
    lVar6 = *(long *)(lVar6 + 0xb8);
    if ((*(byte *)(lVar6 + 0x1e0) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10ab6bfbc);
      (*pcVar3)();
    }
    uStack_48 = *(undefined8 *)(lVar6 + 0x50);
    aiStack_40[0] = 0;
    FUN_10a1f92d8(&uStack_48,&lStack_70);
    FUN_10a464ec0(lVar7,&uStack_48,(ulong)plVar4 & 0xffffffff);
    uStack_60 = uStack_48;
    func_0x0001098849a4(aiStack_58,uStack_48,aiStack_40);
    *param_1 = uStack_60;
    *(int *)(param_1 + 1) = aiStack_58[0];
    if (aiStack_58[0] == 3) {
      param_1[2] = uStack_50;
    }
    else if (aiStack_58[0] == 2) {
      *(undefined1 *)(param_1 + 2) = (undefined1)uStack_50;
    }
    else if (3 < aiStack_58[0]) {
      param_1[2] = uStack_50;
      uStack_50 = 0;
    }
    aiStack_58[0] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    if ((3 < aiStack_40[0]) && (puStack_38 != (undefined8 *)0x0)) {
      (**(code **)*puStack_38)();
    }
    __ZNSt3__115recursive_mutex6unlockEv(lVar7 + 0x70);
  }
  if (plStack_68 != (long *)0x0) {
    plVar4 = plStack_68 + 1;
    do {
      lVar6 = *plVar4;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = lVar6 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return;
}



/* Entry: 10ab6c000; end: 10ab6c197;  */

void FUN_10ab6c000(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  long *plStack_48;
  
  uVar8 = param_2;
  FUN_10ab6c22c();
  if ((uVar8 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    plVar6 = *(long **)(param_2 + 0x268);
    (**(code **)(*plVar6 + 0xe8))();
    iVar1 = 4;
    if (0x26 < (int)plVar6 - 0x30U) {
      iVar1 = (int)plVar6;
    }
    iVar2 = 4;
    if (iVar1 != 0x26) {
      iVar2 = iVar1;
    }
    lVar7 = *(long *)(param_2 + 0x50);
    FUN_10a2421c8();
    plVar9 = *(long **)(lVar7 + 0x228);
    plVar6 = *(long **)(param_2 + 0x268);
    if (plVar6 == (long *)0x0) {
      uStack_84 = 0;
      plVar6 = (long *)0x0;
    }
    else {
      (**(code **)(*plVar6 + 0xb0))();
      uStack_84 = SUB84(plVar6,0);
      plVar6 = *(long **)(param_2 + 0x268);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0xb8))();
      }
    }
    uStack_88 = 0;
    uStack_80 = SUB84(plVar6,0);
    uStack_7c = 1;
    uStack_74 = 0x100000000;
    uStack_6c = 1;
    uStack_58 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    iStack_78 = iVar2;
    (**(code **)(*plVar9 + 0x20))(plVar9,&uStack_88);
    FUN_10a0a25e4(auStack_50,plVar9);
    FUN_10a53daa8(param_1,*(undefined8 *)(param_2 + 0x50),auStack_50);
    uVar8 = (ulong)*(byte *)(*(long *)(param_2 + 0x50) + 0x29);
    if (5 < uVar8) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c174);
      (*pcVar5)();
    }
    plVar6 = *(long **)(*(long *)(param_2 + 0x50) + uVar8 * 8 + 0x30);
    (**(code **)(*plVar6 + 0x48))(plVar6,param_2,*param_1);
    if (plStack_48 != (long *)0x0) {
      plVar6 = plStack_48 + 1;
      do {
        lVar7 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_48);
      }
    }
  }
  return;
}



/* Entry: 10ab6c198; end: 10ab6c22b;  */

void FUN_10ab6c198(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lStack_30;
  long *plStack_28;
  
  FUN_10a03cd44(&lStack_30);
  if (lStack_30 != 0) {
    FUN_10ac607ec(lStack_30,1);
    if (*(long *)(lStack_30 + 0x300) != 0) {
      FUN_10a254398();
    }
  }
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



/* Entry: 10ab6c22c; end: 10ab6c327;  */

undefined ***
FUN_10ab6c22c(long param_1,long param_2,undefined8 param_3,undefined4 param_4,undefined1 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined ***UNRECOVERED_JUMPTABLE;
  undefined1 ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  long lVar13;
  ulong uVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined1 auStack_230 [8];
  undefined ***pppuStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined ***pppuStack_218;
  undefined ***pppuStack_210;
  undefined ***pppuStack_208;
  undefined1 ***pppuStack_200;
  undefined **ppuStack_1f8;
  undefined **ppuStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  long lStack_1b8;
  undefined1 **ppuStack_180;
  code *pcStack_178;
  undefined **ppuStack_170;
  undefined ***pppuStack_168;
  long lStack_160;
  undefined ***pppuStack_158;
  undefined ***apppuStack_150 [2];
  char cStack_139;
  undefined8 auStack_138 [2];
  char cStack_121;
  undefined8 uStack_120;
  char cStack_109;
  long lStack_68;
  undefined1 *puStack_40;
  code *pcStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    if (*(long *)(param_1 + 0x268) == 0) {
      if ((bRam000000011330a9e8 & 1) == 0) {
        return (undefined ***)0x0;
      }
      puVar16 = &UNK_10f693feb;
      uVar7 = 0x201;
    }
    else {
      FUN_10ab6c198(param_1);
      uStack_28 = 0;
      uVar7 = *(undefined8 *)(param_1 + 0x268);
      lStack_30 = param_1 + 0x268;
      FUN_10a088744(uVar7,1);
      FUN_10ab789a0(&lStack_30);
      if ((int)uVar7 == 2) {
        return (undefined ***)0x1;
      }
      if ((bRam000000011330a9e8 & 1) == 0) {
        return (undefined ***)0x0;
      }
      puVar16 = &UNK_10f694018;
      uVar7 = 0x208;
    }
    func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693faf,uVar7,puVar16);
    return (undefined ***)0x0;
  }
  puVar16 = &UNK_10f693f7e;
  FUN_10a00946c();
  FUN_10ab789a0(&lStack_30);
  __Unwind_Resume(puVar16);
  pppuVar6 = &ppuStack_170;
  pcStack_38 = FUN_10ab6c328;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = &stack0xfffffffffffffff0;
  if (*(long *)(param_2 + 0x50) == 0) {
    FUN_10a00946c(&UNK_10f693aeb);
LAB_10ab6c50c:
    FUN_10a00946c(&UNK_10f693af9);
  }
  else {
    if (*(long *)(param_2 + 0x268) == 0) goto LAB_10ab6c50c;
    lVar13 = param_2;
    FUN_10ab6c198(param_2);
    func_0x00010ad0321c();
    func_0x000107c2b054(auStack_138,&DAT_10f685174);
    FUN_10ad016b8(apppuStack_150,lVar13,auStack_138);
    if (cStack_121 < '\0') {
      __ZdlPv(auStack_138[0]);
    }
    uVar14 = (ulong)*(byte *)(*(long *)(param_2 + 0x50) + 0x29);
    if (5 < uVar14) goto LAB_10ab6c524;
    FUN_10aba1500(&lStack_160,*(undefined8 *)(*(long *)(param_2 + 0x50) + uVar14 * 8 + 0x30),param_2
                  ,0);
    FUN_10a12add4(auStack_138,lStack_160 + 0x10);
    puVar8 = auStack_138;
    FUN_10a1a56b4(puVar8,apppuStack_150,1);
    if (((ulong)puVar8 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_2 + 0x50);
      FUN_10a0ff18c(auStack_138,apppuStack_150,2);
      pppuVar12 = (undefined ***)0x0;
      FUN_10ac5fb74(&ppuStack_170,uVar7,auStack_138);
      if (cStack_109 < '\0') {
        __ZdlPv(uStack_120);
      }
      if (cStack_121 < '\0') {
        __ZdlPv(auStack_138[0]);
      }
      *(undefined1 *)(ppuStack_170 + 0x51) = 1;
      UNRECOVERED_JUMPTABLE = *(undefined ****)(param_2 + 0x50);
      FUN_10a376e68(puVar16);
      if (pppuStack_168 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_168 + 1;
        do {
          ppuVar15 = *pppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar3) {
            *pppuVar10 = (undefined **)((long)ppuVar15 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar15 == (undefined **)0x0) {
          (*(code *)(*pppuStack_168)[2])(pppuStack_168);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          UNRECOVERED_JUMPTABLE = pppuStack_168;
        }
      }
      if (pppuStack_158 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_158 + 1;
        do {
          ppuVar15 = *pppuVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(pppuVar10,0x10);
          if (bVar3) {
            *pppuVar10 = (undefined **)((long)ppuVar15 + -1);
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (ppuVar15 == (undefined **)0x0) {
          (*(code *)(*pppuStack_158)[2])(pppuStack_158);
          __ZNSt3__119__shared_weak_count14__release_weakEv();
          UNRECOVERED_JUMPTABLE = pppuStack_158;
        }
      }
      if (cStack_139 < '\0') {
        UNRECOVERED_JUMPTABLE = apppuStack_150[0];
        __ZdlPv();
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return UNRECOVERED_JUMPTABLE;
      }
      ___stack_chk_fail();
      FUN_10a0522e8(&ppuStack_170);
      func_0x00010a136de4(&lStack_160);
      if (cStack_139 < '\0') {
        __ZdlPv(apppuStack_150[0]);
      }
      __Unwind_Resume();
      pcStack_178 = FUN_10ab6c598;
      lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar10 = UNRECOVERED_JUMPTABLE;
      pppuVar11 = pppuVar6;
      ppuStack_180 = &puStack_40;
      FUN_10ab6c22c();
      if (((ulong)pppuVar10 & 1) != 0) {
        FUN_10a2e9f70(auStack_230,UNRECOVERED_JUMPTABLE);
        uStack_21c = CONCAT31(uStack_21c._1_3_,param_5);
        pppuStack_210 = (undefined ***)pppuVar6[1];
        pppuStack_218 = (undefined ***)*pppuVar6;
        if (pppuVar6[1] != (undefined **)0x0) {
          ppuVar15 = pppuVar6[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = *ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        pppuStack_200 = (undefined1 ***)pppuVar12[1];
        pppuStack_208 = (undefined ***)*pppuVar12;
        if (pppuVar12[1] != (undefined **)0x0) {
          ppuVar15 = pppuVar12[1] + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
            if (bVar3) {
              *ppuVar15 = *ppuVar15 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uVar14 = (ulong)*(byte *)((long)UNRECOVERED_JUMPTABLE[10] + 0x29);
        uStack_220 = param_4;
        if (uVar14 < 6) {
          puVar16 = UNRECOVERED_JUMPTABLE[10][uVar14 + 6];
          ppuStack_1f8 = (undefined **)FUN_10ab76fec;
          pppuVar6 = &ppuStack_1f8;
          func_0x00010ab77b5c(&ppuStack_1f0,auStack_230);
          FUN_10aba175c(puVar16,UNRECOVERED_JUMPTABLE,&ppuStack_1f8);
          pppuVar10 = &ppuStack_1f0;
          (*(code *)*ppuStack_1f0)();
          while( true ) {
            pppuVar9 = pppuStack_200;
            if (pppuStack_200 != (undefined ***)0x0) {
              pppuVar12 = pppuStack_200 + 1;
              do {
                ppuVar15 = *pppuVar12;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar12,0x10);
                if (bVar3) {
                  *pppuVar12 = (undefined **)((long)ppuVar15 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar15 == (undefined **)0x0) {
                (*(code *)(*pppuStack_200)[2])(pppuStack_200);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar10 = pppuVar9;
              }
            }
            pppuVar12 = pppuStack_210;
            if (pppuStack_210 != (undefined ***)0x0) {
              pppuVar11 = pppuStack_210 + 1;
              do {
                ppuVar15 = *pppuVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
                if (bVar3) {
                  *pppuVar11 = (undefined **)((long)ppuVar15 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar15 == (undefined **)0x0) {
                (*(code *)(*pppuStack_210)[2])(pppuStack_210);
                __ZNSt3__119__shared_weak_count14__release_weakEv();
                pppuVar10 = pppuVar12;
              }
            }
            pppuVar12 = pppuStack_228;
            if (pppuStack_228 != (undefined ***)0x0) {
              pppuVar11 = pppuStack_228 + 1;
              do {
                ppuVar15 = *pppuVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(pppuVar11,0x10);
                if (bVar3) {
                  *pppuVar11 = (undefined **)((long)ppuVar15 + -1);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (ppuVar15 == (undefined **)0x0) {
                (*(code *)(*pppuStack_228)[2])(pppuStack_228);
                pppuVar10 = pppuVar12;
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
            }
LAB_10ab6c7f0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) break;
LAB_10ab6c824:
            ___stack_chk_fail();
            pppuVar11 = UNRECOVERED_JUMPTABLE;
            (*(code *)*ppuStack_1f0)(pppuVar6 + 1);
            if ((int)UNRECOVERED_JUMPTABLE != 1) {
              FUN_10ab6c910(auStack_230);
              __Unwind_Resume();
              func_0x00010a042b54(pppuVar10 + 5);
              FUN_10a0844ac(pppuVar10 + 3);
              ppuVar15 = pppuVar10[1];
              if (ppuVar15 != (undefined **)0x0) {
                ppuVar1 = ppuVar15 + 1;
                do {
                  puVar16 = *ppuVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
                  if (bVar3) {
                    *ppuVar1 = puVar16 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (puVar16 == (undefined *)0x0) {
                  (**(code **)(*ppuVar15 + 0x10))(ppuVar15);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar15);
                }
              }
              return pppuVar10;
            }
            ___cxa_begin_catch();
            UNRECOVERED_JUMPTABLE = pppuVar11;
            if ((bRam000000011330a9e8 & 1) != 0) {
              (*(code *)(*pppuVar10)[2])();
              UNRECOVERED_JUMPTABLE = (undefined ***)0x1;
              func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x132,&UNK_10f693c58,param_7,
                                  param_8,pppuVar10);
            }
            pppuVar10 = (undefined ***)*pppuVar12;
            if ((pppuVar10 == (undefined ***)0x0) || (*(char *)(pppuVar10 + 8) != '\x02')) {
              if ((pppuVar10 != (undefined ***)0x0) && (*(char *)(pppuVar10 + 8) == '\x01')) {
                (*(code *)*pppuVar10)();
              }
            }
            else {
              FUN_10a05e614();
            }
            ___cxa_end_catch();
          }
          return pppuVar10;
        }
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c824);
        (*pcVar5)();
      }
      UNRECOVERED_JUMPTABLE = pppuVar11;
      if ((bRam000000011330a9e8 & 1) != 0) {
        UNRECOVERED_JUMPTABLE = (undefined ***)0x1;
        func_0x00010ae06f08(0,1,&UNK_10f693b22,&UNK_10f693b55,0x105,&UNK_10f693c21);
      }
      pppuVar10 = (undefined ***)*pppuVar12;
      if ((pppuVar10 == (undefined ***)0x0) || (*(char *)(pppuVar10 + 8) != '\x02')) {
        if (pppuVar10 == (undefined ***)0x0) goto LAB_10ab6c7f0;
        if (*(char *)(pppuVar10 + 8) != '\x01') goto LAB_10ab6c7f0;
        UNRECOVERED_JUMPTABLE = (undefined ***)*pppuVar10;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) goto LAB_10ab6c824;
                    /* WARNING: Could not recover jumptable at 0x00010ab6c7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE)();
        return pppuVar10;
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) goto LAB_10ab6c824;
      lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar6 = pppuVar10;
      FUN_10a688b40();
      if (pppuVar6 == (undefined ***)0x0) {
        pppuVar12 = (undefined ***)0x0;
        if (UNRECOVERED_JUMPTABLE != (undefined ***)0x0) {
          ppuStack_1c0 = pppuVar10[1];
          ppuStack_1c8 = *pppuVar10;
          if (pppuVar10[1] != (undefined **)0x0) {
            ppuVar15 = pppuVar10[1] + 1;
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(ppuVar15,0x10);
              if (bVar3) {
                *ppuVar15 = *ppuVar15 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          ppuStack_1d8 = (undefined **)FUN_10a05e8a0;
          ppuStack_1d0 = &PTR_DAT_110b9fa70;
          pppuVar6 = &ppuStack_1d8;
          uStack_1e8 = 0;
          uStack_1e0 = 0;
          FUN_10a4634ec(UNRECOVERED_JUMPTABLE,&ppuStack_1d8);
          pppuVar12 = &ppuStack_1d0;
          (*(code *)*ppuStack_1d0)();
        }
      }
      else {
        *pppuVar6 = (undefined **)CONCAT44((int)((ulong)*pppuVar6 >> 0x20) + 1,(int)*pppuVar6 + 1);
        pppuVar12 = (undefined ***)*pppuVar10;
        FUN_10a05e740();
        iVar4 = *(int *)((long)pppuVar6 + 4) + -1;
        *(int *)((long)pppuVar6 + 4) = iVar4;
        if (iVar4 == 0) {
          *(undefined4 *)pppuVar6 = 0;
        }
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
        return pppuVar12;
      }
      ___stack_chk_fail();
      (*(code *)*ppuStack_1d0)(pppuVar6 + 1);
      func_0x00010a004dac(&uStack_1e8);
      UNRECOVERED_JUMPTABLE = pppuVar12;
      __Unwind_Resume();
      ppuStack_1f8 = (undefined **)FUN_10a05e740;
      pppuStack_210 = pppuVar12;
      pppuStack_208 = pppuVar6;
      pppuStack_200 = &ppuStack_180;
      func_0x000109884c0c(&uStack_220,UNRECOVERED_JUMPTABLE + 1,*UNRECOVERED_JUMPTABLE);
      func_0x000109884820(&pppuStack_218,&uStack_220,*UNRECOVERED_JUMPTABLE);
      if ((undefined8 *)CONCAT44(uStack_21c,uStack_220) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_21c,uStack_220))();
      }
      (**(code **)(**UNRECOVERED_JUMPTABLE + 0x30))(&uStack_220);
      FUN_10a05e824(*UNRECOVERED_JUMPTABLE,&uStack_220,&pppuStack_218);
      if ((undefined8 *)CONCAT44(uStack_21c,uStack_220) != (undefined8 *)0x0) {
        (*(code *)**(undefined8 **)CONCAT44(uStack_21c,uStack_220))();
      }
      if (pppuStack_218 != (undefined ***)0x0) {
        (*(code *)**pppuStack_218)();
      }
      return pppuStack_218;
    }
  }
  FUN_10a00946c(&UNK_10f693b0a);
LAB_10ab6c524:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10ab6c528);
  (*pcVar5)();
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10926d2c8; end: 10926d2fb;  */

undefined1  [16] FUN_10926d2c8(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_70;
  long lStack_68;
  long lStack_58;
  long lStack_50;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar1 = (long)param_2 << 4;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000104c4f740();
  FUN_10926da5c(&lStack_58,param_2[1]);
  FUN_10925b8c4(&lStack_70,param_2[1]);
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = *param_2;
    do {
      *(undefined8 *)(lStack_58 + lVar5 * 8) = *(undefined8 *)(lVar6 + lVar4);
      lVar6 = *param_2;
      *(int *)(lStack_70 + lVar5 * 4) = (int)*(undefined8 *)(lVar6 + lVar4 + 8);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar1 != lVar5);
  }
  uVar2 = (ulong)*(uint *)(&UNK_10dfbfdd0 + (ulong)(param_3 & 0xff) * 4);
  _glCreateShader(uVar2);
  uVar3 = (ulong)(lStack_50 - lStack_58) >> 3;
  _glShaderSource();
  _glCompileShader(uVar2);
  if (lStack_70 != 0) {
    lStack_68 = lStack_70;
    __ZdlPv();
  }
  if (lStack_58 != 0) {
    lStack_50 = lStack_58;
    __ZdlPv();
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar2;
  return auVar8;
}



/* Entry: 10926d2fc; end: 10926d40b;  */

ulong FUN_10926d2fc(undefined8 param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  long lStack_38;
  long lStack_30;
  
  FUN_10926da5c(&lStack_38,param_2[1]);
  FUN_10925b8c4(&lStack_50,param_2[1]);
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = *param_2;
    do {
      *(undefined8 *)(lStack_38 + lVar4 * 8) = *(undefined8 *)(lVar5 + lVar3);
      lVar5 = *param_2;
      *(int *)(lStack_50 + lVar4 * 4) = (int)*(undefined8 *)(lVar5 + lVar3 + 8);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar2 != lVar4);
  }
  uVar1 = (ulong)*(uint *)(&UNK_10dfbfdd0 + (ulong)(param_3 & 0xff) * 4);
  _glCreateShader(uVar1);
  _glShaderSource();
  _glCompileShader(uVar1);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return uVar1;
}



/* Entry: 10926d40c; end: 10926d55f;  */

void FUN_10926d40c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 ***pppuVar1;
  undefined4 uVar2;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  ppuStack_50 = (undefined8 **)((ulong)ppuStack_50 & 0xffffffff00000000);
  _glGetShaderiv(*param_3,0x8b81,&ppuStack_50);
  if ((int)ppuStack_50 == 1) {
    func_0x000107c31940(&ppuStack_50,&UNK_10f56250d);
    *(undefined4 *)param_1 = *param_3;
    *(undefined4 *)(param_1 + 3) = 0;
    if (uStack_40._7_1_ < '\0') {
      __ZdlPv(ppuStack_50);
    }
  }
  else {
    uVar2 = *param_3;
    iStack_68 = 0;
    _glGetShaderiv(uVar2,0x8b84,&iStack_68);
    func_0x000104c59120(&ppuStack_50,(long)iStack_68 + 1,0);
    if (0 < iStack_68) {
      pppuVar1 = (undefined8 ***)ppuStack_50;
      if (-1 < uStack_40) {
        pppuVar1 = &ppuStack_50;
      }
      _glGetShaderInfoLog(uVar2,iStack_68,&iStack_68,pppuVar1);
    }
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&iStack_68,&UNK_10f56250e,&ppuStack_50);
    if (uStack_40._7_1_ < '\0') {
      __ZdlPv(ppuStack_50);
    }
    ppuStack_50 = (undefined8 **)CONCAT44(uStack_64,iStack_68);
    uStack_48 = uStack_60;
    uStack_40 = uStack_58;
    _glDeleteShader(*param_3);
    *param_3 = 0;
    param_1[1] = uStack_48;
    *param_1 = ppuStack_50;
    param_1[2] = uStack_40;
    *(undefined4 *)(param_1 + 3) = 1;
  }
  return;
}



/* Entry: 10926d560; end: 10926da5b;  */

/* WARNING: Removing unreachable block (ram,0x00010926d8e0) */

uint ***** FUN_10926d560(uint *****param_1,uint *****param_2,uint *****param_3)

{
  undefined **ppuVar1;
  ulong uVar2;
  int iVar3;
  uint ****ppppuVar4;
  byte bVar5;
  undefined7 *puVar6;
  code *pcVar7;
  uint uVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined8 *puVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  int *piVar14;
  uint ****ppppuVar15;
  ulong uVar16;
  undefined8 auStack_1e8 [2];
  char cStack_1d1;
  uint ****ppppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  uint ****ppppuStack_1b8;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined7 uStack_1a8;
  byte bStack_1a1;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  long alStack_190 [7];
  undefined8 uStack_158;
  char cStack_141;
  undefined **appuStack_130 [19];
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  ulong uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = (uint ****)0x0;
  param_1[1] = (uint ****)0x0;
  param_1[2] = (uint ****)0x0;
  pppppuVar12 = param_2;
  pppppuVar13 = param_3;
  if (*(uint *)param_2 != 0) {
    uVar16 = 0;
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
    do {
      piVar14 = (int *)((long)param_2[1] + uVar16 * 0xc);
      ppppuStack_1b8 = (uint ****)0x0;
      uStack_1b0 = 0;
      uStack_1a9 = 0;
      uStack_1a8 = 0;
      bStack_1a1 = 0;
      if (*(char *)(param_3 + 3) == '\x01') {
        ppppuVar15 = *param_3;
        ppppuVar4 = param_3[1];
        if (ppppuVar15 != ppppuVar4) {
          do {
            if (*(int *)ppppuVar15 == *piVar14) goto LAB_10926d644;
            ppppuVar15 = ppppuVar15 + 4;
          } while (ppppuVar15 != ppppuVar4);
          goto LAB_10926d674;
        }
LAB_10926d644:
        if (ppppuVar15 == ppppuVar4) goto LAB_10926d674;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppppuStack_1b8,ppppuVar15 + 1);
        uVar2 = CONCAT17(uStack_1a9,uStack_1b0);
        if (-1 < (char)bStack_1a1) {
          uVar2 = (ulong)bStack_1a1;
        }
        if (uVar2 == 0) goto LAB_10926d674;
      }
      else {
LAB_10926d674:
        ppuVar9 = (undefined **)0x28;
        __Znwm();
        alStack_190[0] = -0x7fffffffffffffd8;
        ppuStack_198 = (undefined **)0x21;
        *(undefined2 *)(ppuVar9 + 4) = 0x5f;
        ppuVar9[1] = (undefined *)0x4c4149434550535f;
        *ppuVar9 = (undefined *)0x4948525f50414e53;
        ppuVar9[3] = (undefined *)0x544e4154534e4f43;
        ppuVar9[2] = (undefined *)0x5f4e4f4954415a49;
        ppuStack_1a0 = ppuVar9;
        __ZNSt3__19to_stringEj(&ppppuStack_1d0,*piVar14);
        ppuVar9 = ppuStack_1c8;
        pppppuVar13 = (uint *****)ppppuStack_1d0;
        if (-1 < (long)ppuStack_1c0) {
          ppuVar9 = (undefined **)((ulong)ppuStack_1c0 >> 0x38);
          pppppuVar13 = &ppppuStack_1d0;
        }
        pppuVar10 = &ppuStack_1a0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (pppuVar10,pppppuVar13,ppuVar9);
        pppppuVar13 = (uint *****)*pppuVar10;
        uStack_90 = SUB87(pppuVar10[1],0);
        uStack_89 = (undefined1)*(undefined8 *)((long)pppuVar10 + 0xf);
        uStack_88 = (undefined7)((ulong)*(undefined8 *)((long)pppuVar10 + 0xf) >> 8);
        bVar5 = *(byte *)((long)pppuVar10 + 0x17);
        pppuVar10[1] = (undefined **)0x0;
        pppuVar10[2] = (undefined **)0x0;
        *pppuVar10 = (undefined **)0x0;
        if ((char)bStack_1a1 < '\0') {
          __ZdlPv(ppppuStack_1b8);
        }
        uStack_1b0 = uStack_90;
        uStack_1a9 = uStack_89;
        uStack_1a8 = uStack_88;
        ppppuStack_1b8 = (uint ****)pppppuVar13;
        bStack_1a1 = bVar5;
        if ((long)ppuStack_1c0 < 0) {
          __ZdlPv(ppppuStack_1d0);
        }
        if (alStack_190[0] < 0) {
          __ZdlPv(ppuStack_1a0);
        }
      }
      __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                (&ppuStack_1a0,&UNK_10f433675,&ppppuStack_1b8);
      pppuVar10 = &ppuStack_1a0;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(pppuVar10," ",1);
      ppuStack_1c8 = pppuVar10[1];
      ppppuStack_1d0 = (uint ****)*pppuVar10;
      ppuStack_1c0 = pppuVar10[2];
      pppuVar10[1] = (undefined **)0x0;
      pppuVar10[2] = (undefined **)0x0;
      *pppuVar10 = (undefined **)0x0;
      if (alStack_190[0] < 0) {
        __ZdlPv(ppuStack_1a0);
      }
      ppppuVar15 = param_2[3];
      uVar2 = (ulong)*(uint *)((long)param_2[1] + (uVar16 * 3 + 1) * 4);
      iVar3 = *(int *)((long)param_2[1] + (uVar16 * 3 + 2) * 4);
      if (iVar3 < 3) {
        if (iVar3 == 1) {
          uVar8 = (uint)(*(int *)((long)ppppuVar15 + uVar2) != 0);
LAB_10926d874:
          __ZNSt3__19to_stringEj(auStack_1e8,uVar8);
        }
        else {
          if (iVar3 != 2) {
LAB_10926d980:
            FUN_109243bf8(&UNK_10f562569);
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10926d990);
            (*pcVar7)();
          }
          FUN_10926db08(&ppuStack_1a0);
          *(undefined8 *)((long)alStack_190 + (long)ppuStack_1a0[-3]) = 0xc;
          *(uint *)((long)&ppuStack_198 + (long)ppuStack_1a0[-3]) =
               *(uint *)((long)&ppuStack_198 + (long)ppuStack_1a0[-3]) & 0xfffffeff | 4;
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEf
                    (*(undefined4 *)((long)ppppuVar15 + uVar2),&ppuStack_1a0);
          FUN_10926dc5c(auStack_1e8,&ppuStack_198,&uStack_91);
          appuStack_130[0] = &PTR_DAT_11088d708;
          ppuStack_1a0 = &PTR_SUB_11088d6e0;
          ppuStack_198 = &PTR_DAT_11088d7b0;
          if (cStack_141 < '\0') {
            __ZdlPv(uStack_158);
          }
          ppuStack_198 = ppuVar1;
          __ZNSt3__16localeD1Ev(alStack_190);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1a0,&PTR_PTR_11088d720);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_130);
        }
      }
      else {
        if (iVar3 != 3) {
          if (iVar3 != 4) goto LAB_10926d980;
          uVar8 = *(uint *)((long)ppppuVar15 + uVar2);
          goto LAB_10926d874;
        }
        __ZNSt3__19to_stringEi(auStack_1e8,*(undefined4 *)((long)ppppuVar15 + uVar2));
      }
      puVar11 = auStack_1e8;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (puVar11,&UNK_10f560154,2);
      uStack_80 = puVar11[2];
      uStack_88 = (undefined7)puVar11[1];
      uStack_81 = (undefined1)((ulong)puVar11[1] >> 0x38);
      uStack_90 = (undefined7)*puVar11;
      uStack_89 = (undefined1)((ulong)*puVar11 >> 0x38);
      puVar11[1] = 0;
      puVar11[2] = 0;
      *puVar11 = 0;
      uVar2 = CONCAT17(uStack_81,uStack_88);
      puVar6 = (undefined7 *)CONCAT17(uStack_89,uStack_90);
      if (-1 < (long)uStack_80) {
        uVar2 = uStack_80 >> 0x38;
        puVar6 = &uStack_90;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_1d0,puVar6,uVar2);
      if (cStack_1d1 < '\0') {
        __ZdlPv(auStack_1e8[0]);
      }
      ppuVar9 = ppuStack_1c8;
      pppppuVar13 = (uint *****)ppppuStack_1d0;
      if (-1 < (long)ppuStack_1c0) {
        ppuVar9 = (undefined **)((ulong)ppuStack_1c0 >> 0x38);
        pppppuVar13 = &ppppuStack_1d0;
      }
      pppppuVar12 = param_1;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_1,pppppuVar13,ppuVar9);
      if ((long)ppuStack_1c0 < 0) {
        pppppuVar12 = (uint *****)ppppuStack_1d0;
        __ZdlPv();
      }
      if ((char)bStack_1a1 < '\0') {
        pppppuVar12 = (uint *****)ppppuStack_1b8;
        __ZdlPv();
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return pppppuVar12;
  }
  ___stack_chk_fail();
  if ((char)bStack_1a1 < '\0') {
    __ZdlPv(ppppuStack_1b8);
  }
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  __Unwind_Resume();
  *pppppuVar12 = (uint ****)0x0;
  pppppuVar12[1] = (uint ****)0x0;
  pppppuVar12[2] = (uint ****)0x0;
  if (pppppuVar13 != (uint *****)0x0) {
    FUN_10926dad0(pppppuVar12);
    ppppuVar15 = pppppuVar12[1];
    _bzero(ppppuVar15,(long)pppppuVar13 << 3);
    pppppuVar12[1] = ppppuVar15 + (long)pppppuVar13;
  }
  return pppppuVar12;
}



/* Entry: 10926da5c; end: 10926dacf;  */

undefined8 * FUN_10926da5c(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10926dad0(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 3);
    param_1[1] = lVar1 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10926dad0; end: 10926db07;  */

undefined8 * FUN_10926dad0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3d == 0) {
    puVar1 = param_1;
    func_0x000104c58e9c();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2;
    return puVar1;
  }
  func_0x000104c58e88();
  param_1[0xe] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
  param_1[0x14] = 0;
  *param_1 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xe,param_1 + 1);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *param_1 = &PTR_SUB_11088d6e0;
  param_1[0xe] = &PTR_DAT_11088d708;
  FUN_10926dbbc(param_1 + 1,0x10);
  return param_1;
}



/* Entry: 10926db08; end: 10926dbbb;  */

undefined8 * FUN_10926db08(undefined8 *param_1)

{
  param_1[0xe] = &PTR___ZTv0_n24_NSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d778;
  param_1[0x14] = 0;
  *param_1 = &PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED1Ev_11088d750;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xe,param_1 + 1);
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *param_1 = &PTR_SUB_11088d6e0;
  param_1[0xe] = &PTR_DAT_11088d708;
  FUN_10926dbbc(param_1 + 1,0x10);
  return param_1;
}



/* Entry: 10926dbbc; end: 10926dc5b;  */

long * FUN_10926dbbc(long *param_1,undefined4 param_2)

{
  *param_1 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(param_1 + 1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)&PTR_DAT_11088d7b0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  FUN_109242f54(param_1);
  return param_1;
}



/* Entry: 10926dc5c; end: 10926dceb;  */

undefined1  [16] FUN_10926dc5c(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  FUN_10926dcec();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000104c4f6b8();
    if (((uint)param_2[0xc] >> 4 & 1) == 0) {
      if (((uint)param_2[0xc] >> 3 & 1) == 0) {
        uVar4 = 0;
        lVar3 = 0;
        goto LAB_10926dd30;
      }
      uVar4 = param_2[2];
      uVar5 = param_2[4];
    }
    else {
      uVar4 = param_2[6];
      uVar5 = param_2[0xb];
      if (param_2[0xb] < uVar4) {
        param_2[0xb] = uVar4;
        uVar5 = uVar4;
      }
      uVar4 = param_2[5];
    }
    lVar3 = uVar5 - uVar4;
LAB_10926dd30:
    auVar7._8_8_ = lVar3;
    auVar7._0_8_ = uVar4;
    return auVar7;
  }
  if (param_3 < 0x17) {
    *(char *)((long)param_1 + 0x17) = (char)param_3;
    puVar1 = param_1;
    if (param_3 == 0) {
      puVar2 = param_2;
      param_2 = (ulong *)0x0;
      goto LAB_10926dcd4;
    }
  }
  else {
    puVar2 = (ulong *)0x19;
    if ((param_3 | 7) != 0x17) {
      puVar2 = (ulong *)((param_3 | 7) + 1);
    }
    puVar1 = puVar2;
    __Znwm();
    param_1[1] = param_3;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar1;
  }
  puVar2 = puVar1;
  _memmove(puVar1,param_2,param_3);
LAB_10926dcd4:
  *(undefined1 *)((long)puVar1 + param_3) = 0;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar2;
  return auVar6;
}



/* Entry: 10926dcec; end: 10926dd37;  */

undefined1  [16] FUN_10926dcec(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((*(uint *)(param_1 + 0x60) >> 4 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x60) >> 3 & 1) == 0) {
      lVar2 = 0;
      lVar1 = 0;
      goto LAB_10926dd30;
    }
    lVar2 = *(long *)(param_1 + 0x10);
    uVar4 = *(ulong *)(param_1 + 0x20);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x30);
    uVar4 = *(ulong *)(param_1 + 0x58);
    if (*(ulong *)(param_1 + 0x58) < uVar3) {
      *(ulong *)(param_1 + 0x58) = uVar3;
      uVar4 = uVar3;
    }
    lVar2 = *(long *)(param_1 + 0x28);
  }
  lVar1 = uVar4 - lVar2;
LAB_10926dd30:
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Entry: 10926dd38; end: 10926de9f;  */

undefined8 * FUN_10926dd38(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_DAT_110b97f88;
  param_1[1] = 0;
  uVar11 = param_3[1];
  uVar10 = *param_3;
  uVar13 = param_3[3];
  uVar12 = param_3[2];
  uVar15 = param_3[5];
  uVar14 = param_3[4];
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar15;
  *(undefined8 *)((long)param_1 + 0x44) = uVar14;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar13;
  *(undefined8 *)((long)param_1 + 0x34) = uVar12;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar11;
  *(undefined8 *)((long)param_1 + 0x24) = uVar10;
  uVar5 = *(undefined4 *)((long)param_3 + 0x1c);
  uVar9 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((long)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = uVar4;
  iVar6 = *(int *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(int *)((long)param_1 + 0x5c) = iVar6;
  if (iVar6 != 2) {
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = uVar9;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_110ae7238;
  param_1[0x12] = 0;
  param_1[0x13] = param_2 + 0x930;
  param_1[0x14] = param_2 + 0x810;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 1;
  param_1[0x17] = param_4;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar3 = *(uint *)(param_3 + 2);
  uVar1 = *(uint *)((long)param_3 + 0x14) & 0xffffffe3;
  if (((uVar1 == 0) && (uVar3 == 0)) && (*(int *)((long)param_3 + 0xc) == 1)) {
    uVar9 = 0x8d41;
  }
  else {
    if (3 < uVar3) {
      FUN_109243bf8(&UNK_10f5626fa);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10926de8c);
      (*pcVar7)();
    }
    uVar9 = *(undefined4 *)(&UNK_10dfbfe50 + (ulong)uVar3 * 4);
  }
  *(undefined4 *)(param_1 + 0x16) = uVar9;
  puVar2 = (undefined4 *)(param_2 + (ulong)*(uint *)((long)param_3 + 0x1c) * 4 + 0xa20);
  if (*(int *)((long)param_3 + 0xc) != 1 || (uVar1 != 0 || *(int *)(param_3 + 2) != 0)) {
    puVar2 = (undefined4 *)(param_2 + (ulong)*(uint *)((long)param_3 + 0x1c) * 0xc + 0xb7c);
  }
  *(undefined4 *)(param_1 + 0x15) = *puVar2;
  puVar8 = param_1;
  FUN_109374fe0();
  if ((puVar8 != (undefined8 *)0x0) || ((*(byte *)(param_2 + 0x90c) & 1) == 0)) {
    FUN_10926dea0(param_1,0);
  }
  return param_1;
}



/* Entry: 10926dea0; end: 10926e647;  */

void FUN_10926dea0(long param_1,long param_2)

{
  uint *puVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uStack_b0;
  long lStack_98;
  int *piStack_90;
  long *plStack_88;
  int iStack_7c;
  long lStack_78;
  
  piVar19 = (int *)(param_1 + 0xac);
  if (*piVar19 != 0) {
    return;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x88);
  lStack_78 = param_2;
  if (puVar11 != (undefined8 *)0x0) {
    ___dynamic_cast(puVar11,&PTR_DAT_110ae7280,&PTR_DAT_110ae7290,0xffffffffffffffff);
    (**(code **)*puVar11)();
    *(int *)(param_1 + 0xac) = (int)puVar11;
    return;
  }
  if ((((*(uint *)(param_1 + 0x38) & 0xffffffe3) == 0) && (*(int *)(param_1 + 0x34) == 0)) &&
     (*(int *)(param_1 + 0x30) == 1)) {
    _glGenRenderbuffers(1,piVar19);
    lVar12 = *(long *)(param_1 + 0x98);
    uVar16 = *(undefined4 *)(param_1 + 0xb0);
    uVar4 = *(undefined4 *)(param_1 + 0xa8);
    _glBindRenderbuffer(uVar16,*(undefined4 *)(param_1 + 0xac));
    if (*(int *)(param_1 + 0x3c) == 1) {
      _glRenderbufferStorage
                (uVar16,uVar4,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
    }
    else {
      (**(code **)(lVar12 + 0x748))(uVar16,*(int *)(param_1 + 0x3c),uVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glBindRenderbuffer_11034b380)(uVar16,0);
    return;
  }
  _glGenTextures(1,piVar19);
  iStack_7c = 0;
  if (param_2 == 0) {
    iVar21 = *(int *)(param_1 + 0xb0);
    iVar10 = *(int *)(param_1 + 0xac);
LAB_10926e168:
    _glBindTexture(iVar21,iVar10);
    iVar21 = *(int *)(param_1 + 0xb0);
  }
  else {
    iVar21 = *(int *)(param_1 + 0xb0);
    if (*(int *)(param_2 + 0x150) == -1) {
      iVar10 = *piVar19;
      goto LAB_10926e168;
    }
    iStack_7c = 0;
    lVar12 = *(long *)(param_2 + 0x138) + (ulong)(*(int *)(param_2 + 0x150) - 0x84c0) * 0x24;
    if (iVar21 < 0x8c2a) {
      if (0x8512 < iVar21) {
        if (iVar21 == 0x8513) {
          lVar17 = 6;
        }
        else {
          if (iVar21 != 0x8c1a) goto LAB_10926e094;
          lVar17 = 5;
        }
        goto LAB_10926e088;
      }
      if (iVar21 == 0xde1) {
        lVar17 = 1;
        goto LAB_10926e088;
      }
      if (iVar21 == 0x806f) {
        lVar17 = 4;
        goto LAB_10926e088;
      }
    }
    else {
      if (iVar21 < 0x9100) {
        if (iVar21 == 0x8c2a) {
          lVar17 = 8;
        }
        else {
          if (iVar21 != 0x9009) goto LAB_10926e094;
          lVar17 = 7;
        }
      }
      else if (iVar21 == 0x9102) {
        lVar17 = 3;
      }
      else {
        if (iVar21 != 0x9100) goto LAB_10926e094;
        lVar17 = 2;
      }
LAB_10926e088:
      iVar10 = *(int *)(lVar12 + lVar17 * 4);
      iStack_7c = 0;
      if (iVar10 != -1) {
        iStack_7c = iVar10;
      }
    }
LAB_10926e094:
    iVar10 = *piVar19;
    if (iVar21 < 0x8c2a) {
      if (iVar21 < 0x8513) {
        if (iVar21 == 0xde1) {
          lVar17 = 1;
        }
        else {
          if (iVar21 != 0x806f) goto LAB_10926e168;
          lVar17 = 4;
        }
      }
      else if (iVar21 == 0x8513) {
        lVar17 = 6;
      }
      else {
        if (iVar21 != 0x8c1a) goto LAB_10926e168;
        lVar17 = 5;
      }
    }
    else if (iVar21 < 0x9100) {
      if (iVar21 == 0x8c2a) {
        lVar17 = 8;
      }
      else {
        if (iVar21 != 0x9009) goto LAB_10926e168;
        lVar17 = 7;
      }
    }
    else if (iVar21 == 0x9102) {
      lVar17 = 3;
    }
    else {
      if (iVar21 != 0x9100) goto LAB_10926e168;
      lVar17 = 2;
    }
    if (*(int *)(lVar12 + lVar17 * 4) != iVar10) {
      *(int *)(lVar12 + lVar17 * 4) = iVar10;
      goto LAB_10926e168;
    }
  }
  piStack_90 = &iStack_7c;
  plStack_88 = &lStack_78;
  uVar5 = *(uint *)(param_1 + 0x38);
  puVar11 = *(undefined8 **)(param_1 + 0x98);
  uVar16 = *(undefined4 *)(param_1 + 0xa8);
  lStack_98 = param_1;
  if ((uVar5 >> 1 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x40);
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar20 = 0;
      uVar6 = *(uint *)(param_1 + 0x2c);
      uVar7 = *(uint *)(param_1 + 0x40);
      uStack_b0 = *(ulong *)(param_1 + 0x24);
      uVar3 = uVar6;
      do {
        iVar10 = *(int *)(param_1 + 0x34);
        uVar23 = (uint)uStack_b0;
        uVar9 = uVar23;
        if (iVar10 < 2) {
          if (iVar10 == 0) {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*puVar1 * 4;
            if (0x56 < *puVar1) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            if (*(byte *)(ppuVar2 + 3) < 2 && *(byte *)((long)ppuVar2 + 0x19) < 2) {
              _glTexImage2D(iVar21,uVar20,uVar16,uStack_b0 & 0xffffffff,uStack_b0 >> 0x20,0,
                            *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x250),
                            *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x254),0);
            }
            else {
              uVar22 = uStack_b0 & 0xffffffff;
              uVar14 = uVar22;
              func_0x000109fc8e58(uVar22,uStack_b0 >> 0x20);
              _glCompressedTexImage2D(iVar21,uVar20,uVar16,uVar22,uStack_b0 >> 0x20,0,uVar14,0);
            }
          }
          else {
            if (iVar10 != 1) goto LAB_10926e618;
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*puVar1 * 4;
            if (0x56 < *puVar1) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            uVar15 = uVar3;
            if (*(byte *)(ppuVar2 + 3) < 2 && *(byte *)((long)ppuVar2 + 0x19) < 2)
            goto LAB_10926e3b8;
            func_0x000109fc8e58(uStack_b0 & 0xffffffff,uStack_b0 >> 0x20);
LAB_10926e38c:
            _glCompressedTexImage3D
                      (iVar21,uVar20,uVar16,uStack_b0 & 0xffffffff,uStack_b0 >> 0x20,uVar15,0,
                       uVar15 * uVar9,0);
          }
        }
        else if (iVar10 == 2) {
          ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*puVar1 * 4;
          if (0x56 < *puVar1) {
            ppuVar2 = &PTR_DAT_110ae4700;
          }
          uVar15 = uVar6;
          if (1 < *(byte *)(ppuVar2 + 3) || 1 < *(byte *)((long)ppuVar2 + 0x19)) {
            func_0x000109fc8e58(uStack_b0 & 0xffffffff,uStack_b0 >> 0x20);
            goto LAB_10926e38c;
          }
LAB_10926e3b8:
          (*(code *)puVar11[0xe3])
                    (iVar21,uVar20,uVar16,uStack_b0 & 0xffffffff,uStack_b0 >> 0x20,uVar15,0,
                     *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x250),
                     *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x254));
        }
        else {
          if (iVar10 != 3) goto LAB_10926e618;
          uVar22 = uStack_b0 & 0xffffffff;
          uVar14 = uStack_b0 >> 0x20;
          iVar18 = 6;
          iVar10 = 0x8515;
          do {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*puVar1 * 4;
            if (0x56 < *puVar1) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            if (*(byte *)(ppuVar2 + 3) < 2 && *(byte *)((long)ppuVar2 + 0x19) < 2) {
              _glTexImage2D(iVar10,uVar20,uVar16,uVar22,uVar14,0,
                            *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x250),
                            *(undefined4 *)((long)puVar11 + (ulong)uVar7 * 0xc + 0x254),0);
            }
            else {
              uVar13 = uVar22;
              func_0x000109fc8e58(uVar22,uVar14);
              _glCompressedTexImage2D(iVar10,uVar20,uVar16,uVar22,uVar14,0,uVar13,0);
            }
            iVar10 = iVar10 + 1;
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
        uStack_b0 = NEON_umax(CONCAT44((uint)(uStack_b0 >> 0x21),uVar23 >> 1),0x100000001,4);
        uVar3 = uVar3 >> 1;
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < *(uint *)(param_1 + 0x30));
    }
    goto LAB_10926e514;
  }
  uVar20 = *(uint *)(param_1 + 0x3c);
  iVar10 = *(int *)(param_1 + 0x34);
  if (iVar10 < 2) {
    if (iVar10 == 0) {
      iVar10 = iVar21;
      if (1 < uVar20) {
        (*(code *)puVar11[0xe6])
                  (iVar21,uVar20,uVar16,*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28),1);
        goto LAB_10926e514;
      }
LAB_10926e4bc:
      (*(code *)puVar11[0xe4])(iVar10,*(undefined4 *)(param_1 + 0x30),uVar16);
      goto LAB_10926e514;
    }
    if (iVar10 != 1) {
LAB_10926e618:
      FUN_109243bf8(&UNK_10f5626fa);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10926e628);
      (*pcVar8)();
    }
  }
  else {
    if (iVar10 != 2) {
      if (iVar10 != 3) goto LAB_10926e618;
      iVar10 = 0x8513;
      goto LAB_10926e4bc;
    }
    if (1 < uVar20) {
      (*(code *)puVar11[0xe7])
                (iVar21,uVar20,uVar16,*(undefined4 *)(param_1 + 0x24),
                 *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),1);
      goto LAB_10926e514;
    }
  }
  (*(code *)puVar11[0xe5])(iVar21,*(undefined4 *)(param_1 + 0x30),uVar16);
LAB_10926e514:
  FUN_10926f0ac(*puVar11,*(undefined4 *)(param_1 + 0x40),*(undefined1 *)((long)puVar11 + 0x3c),
                uVar16);
  _glTexParameteri(iVar21,0x2801,0x2600);
  _glTexParameteri(iVar21,0x2800,0x2600);
  _glTexParameteri(iVar21,0x2802,0x812f);
  _glTexParameteri(iVar21,0x2803,0x812f);
  if (iVar21 == 0x806f) {
    _glTexParameteri(0x806f,0x8072,0x812f);
  }
  iVar10 = *(int *)(param_1 + 0x54);
  if (iVar10 != 0) {
    uVar16 = 0x8058;
    if (iVar10 != 2) {
      uVar16 = 0x881a;
    }
    uVar4 = 0x8c3d;
    if (iVar10 != 3) {
      uVar4 = uVar16;
    }
    _glTexParameteri(iVar21,0x8f69,uVar4);
  }
  if (((uVar5 >> 1 & 1) == 0) && ((*(byte *)(puVar11 + 7) & 1) != 0)) {
    _glTexParameteri(iVar21,0x813c,0);
    _glTexParameteri(iVar21,0x813d,*(int *)(param_1 + 0x30) + -1);
  }
  FUN_10926e9d0(&lStack_98);
  return;
}



/* Entry: 10926e648; end: 10926e757;  */

undefined8 * FUN_10926e648(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  func_0x000109fca588();
  *puVar2 = &PTR_FUN_110ae7238;
  puVar2[0x13] = param_2 + 0x930;
  puVar2[0x14] = param_2 + 0x810;
  puVar2[0x15] = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  *(undefined1 *)((long)puVar2 + 0xb4) = 1;
  puVar2[0x17] = param_4;
  *(undefined1 *)(puVar2 + 0x18) = 1;
  param_3 = (long *)*param_3;
  ___dynamic_cast(param_3,&PTR_DAT_110ae7280,&PTR_DAT_110ae7290,0xffffffffffffffff);
  (**(code **)(*param_3 + 8))();
  *(int *)(param_1 + 0x16) = (int)param_3;
  puVar1 = (undefined4 *)(param_1[0x13] + (ulong)*(uint *)(param_1 + 8) * 4 + 0xf0);
  if (*(int *)(param_1 + 6) != 1 ||
      ((*(uint *)(param_1 + 7) & 0xffffffe3) != 0 || *(int *)((long)param_1 + 0x34) != 0)) {
    puVar1 = (undefined4 *)(param_1[0x13] + (ulong)*(uint *)(param_1 + 8) * 0xc + 0x24c);
  }
  *(undefined4 *)(param_1 + 0x15) = *puVar1;
  FUN_109374fe0();
  if ((param_3 != (long *)0x0) || ((*(byte *)(param_2 + 0x90c) & 1) == 0)) {
    FUN_10926dea0(param_1,0);
  }
  return param_1;
}



/* Entry: 10926e758; end: 10926e83f;  */

undefined8 *
FUN_10926e758(undefined8 *param_1,long param_2,undefined8 *param_3,int param_4,undefined4 param_5,
             undefined1 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 1;
  *param_1 = &PTR_DAT_110b97f88;
  param_1[1] = 0;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  uVar9 = param_3[5];
  uVar8 = param_3[4];
  *(undefined4 *)((long)param_1 + 0x54) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar9;
  *(undefined8 *)((long)param_1 + 0x44) = uVar8;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x34) = uVar6;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x24) = uVar4;
  iVar3 = *(int *)(param_3 + 2);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)((long)param_3 + 0x1c);
  *(int *)((long)param_1 + 0x5c) = iVar3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *(undefined4 *)((long)param_3 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 100) = uVar2;
  if (iVar3 != 2) {
    uVar1 = 1;
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = uVar1;
  param_1[0xf] = 0x500000004;
  param_1[0xe] = 0x300000002;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = &PTR_FUN_110ae7238;
  param_1[0x12] = 0;
  param_1[0x13] = param_2 + 0x930;
  param_1[0x14] = param_2 + 0x810;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(int *)((long)param_1 + 0xac) = param_4;
  *(undefined4 *)(param_1 + 0x16) = param_5;
  *(undefined1 *)((long)param_1 + 0xb4) = param_6;
  param_1[0x17] = param_7;
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (param_4 == 0) {
    func_0x000109fd19d0(param_2 + 0x810,6,1,&UNK_10f5625a9,0x37);
  }
  return param_1;
}



/* Entry: 10926e840; end: 10926e93b;  */

undefined8 * FUN_10926e840(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110ae7238;
  uVar2 = param_1[0x14];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(uVar2,6,2,&UNK_10f5625e1,0x4c);
  }
  if (((param_1[0x11] == 0) && (*(int *)((long)param_1 + 0xac) != 0)) &&
     (*(char *)((long)param_1 + 0xb4) == '\x01')) {
    if (*(int *)(param_1 + 0x16) == 0x8d41) {
      _glDeleteRenderbuffers(1);
    }
    else {
      _glDeleteTextures(1);
    }
  }
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_DAT_110b97f88;
  func_0x0001092350f8(param_1 + 0x11);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926e93c; end: 10926e93f;  */

undefined8 * FUN_10926e93c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110ae7238;
  uVar2 = param_1[0x14];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(uVar2,6,2,&UNK_10f5625e1,0x4c);
  }
  if (((param_1[0x11] == 0) && (*(int *)((long)param_1 + 0xac) != 0)) &&
     (*(char *)((long)param_1 + 0xb4) == '\x01')) {
    if (*(int *)(param_1 + 0x16) == 0x8d41) {
      _glDeleteRenderbuffers(1);
    }
    else {
      _glDeleteTextures(1);
    }
  }
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *param_1 = &PTR_DAT_110b97f88;
  func_0x0001092350f8(param_1 + 0x11);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926e940; end: 10926e953;  */

void FUN_10926e940(void)

{
  FUN_10926e840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10926e954; end: 10926e9cf;  */

void FUN_10926e954(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _glBindRenderbuffer(param_3,param_4);
  if (param_2[6] == 1) {
    _glRenderbufferStorage(param_3,param_5,*param_2,param_2[1]);
  }
  else {
    (**(code **)(param_1 + 0x748))(param_3,param_2[6],param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBindRenderbuffer_11034b380)(param_3,0);
  return;
}



/* Entry: 10926e9d0; end: 10926eaf7;  */

long * FUN_10926e9d0(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  iVar1 = *(int *)(*param_1 + 0xb0);
  lVar2 = *(long *)param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x150) != -1)) {
    if (iVar1 < 0x8c2a) {
      if (iVar1 < 0x8513) {
        if (iVar1 == 0xde1) {
          lVar3 = 1;
        }
        else {
          if (iVar1 != 0x806f) goto LAB_10926eae4;
          lVar3 = 4;
        }
      }
      else if (iVar1 == 0x8513) {
        lVar3 = 6;
      }
      else {
        if (iVar1 != 0x8c1a) goto LAB_10926eae4;
        lVar3 = 5;
      }
    }
    else if (iVar1 < 0x9100) {
      if (iVar1 == 0x8c2a) {
        lVar3 = 8;
      }
      else {
        if (iVar1 != 0x9009) goto LAB_10926eae4;
        lVar3 = 7;
      }
    }
    else if (iVar1 == 0x9102) {
      lVar3 = 3;
    }
    else {
      if (iVar1 != 0x9100) goto LAB_10926eae4;
      lVar3 = 2;
    }
    lVar2 = *(long *)(lVar2 + 0x138) + (ulong)(*(int *)(lVar2 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar2 + lVar3 * 4) == *(int *)param_1[1]) {
      return param_1;
    }
    *(int *)(lVar2 + lVar3 * 4) = *(int *)param_1[1];
  }
LAB_10926eae4:
  _glBindTexture();
  return param_1;
}



/* Entry: 10926eaf8; end: 10926f0a7;  */

void FUN_10926eaf8(long param_1,undefined4 *param_2,int *param_3,undefined4 param_4,long param_5,
                  undefined8 param_6,uint param_7,long param_8)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  char cVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uStack_78;
  long lStack_70;
  undefined4 uStack_64;
  
  FUN_10926dea0(param_1,param_8);
  lVar20 = *(long *)(param_1 + 0x98) + (ulong)*(uint *)(param_1 + 0x40) * 0xc;
  iVar8 = *(int *)(param_1 + 0xb0);
  FUN_10926dea0(param_1,param_8);
  if ((param_8 == 0) || (*(int *)(param_8 + 0x150) == -1)) {
LAB_10926ec50:
    _glBindTexture(iVar8);
  }
  else {
    if (iVar8 < 0x8c2a) {
      if (iVar8 < 0x8513) {
        if (iVar8 == 0xde1) {
          lVar18 = 1;
        }
        else {
          if (iVar8 != 0x806f) goto LAB_10926ec50;
          lVar18 = 4;
        }
      }
      else if (iVar8 == 0x8513) {
        lVar18 = 6;
      }
      else {
        if (iVar8 != 0x8c1a) goto LAB_10926ec50;
        lVar18 = 5;
      }
    }
    else if (iVar8 < 0x9100) {
      if (iVar8 == 0x8c2a) {
        lVar18 = 8;
      }
      else {
        if (iVar8 != 0x9009) goto LAB_10926ec50;
        lVar18 = 7;
      }
    }
    else if (iVar8 == 0x9102) {
      lVar18 = 3;
    }
    else {
      if (iVar8 != 0x9100) goto LAB_10926ec50;
      lVar18 = 2;
    }
    lVar16 = *(long *)(param_8 + 0x138) + (ulong)(*(int *)(param_8 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar16 + lVar18 * 4) != *(int *)(param_1 + 0xac)) {
      *(int *)(lVar16 + lVar18 * 4) = *(int *)(param_1 + 0xac);
      goto LAB_10926ec50;
    }
  }
  puVar1 = (undefined4 *)(lVar20 + 0x24c);
  uVar21 = *(uint *)(param_1 + 0x40);
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar21 * 4;
  if (0x56 < uVar21) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  bVar11 = *(byte *)(ppuVar3 + 3);
  lVar18 = *(long *)(param_1 + 0x98);
  if (bVar11 < 2 && *(byte *)((long)ppuVar3 + 0x19) < 2) {
    uStack_64 = 0;
    uStack_78 = 0;
    lStack_70 = 0;
    func_0x0001092881bc(*param_3,param_3[1],(ulong)uVar21,param_6,param_7,&uStack_64,&lStack_70,
                        (long)&uStack_78 + 4,&uStack_78);
    iVar4 = 0;
    if (*param_3 != uStack_78._4_4_) {
      iVar4 = uStack_78._4_4_;
    }
    (**(code **)(lVar18 + 0x950))(0xcf2,iVar4);
    iVar4 = 0;
    if (param_3[1] != (int)uStack_78) {
      iVar4 = (int)uStack_78;
    }
    (**(code **)(lVar18 + 0x950))(0x806e,iVar4);
    lVar16 = lStack_70;
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        _glTexSubImage2D(iVar8,param_4,*param_2,param_2[1],*param_3,param_3[1],
                         *(undefined4 *)(lVar20 + 0x250),*(undefined4 *)(lVar20 + 0x254),param_5);
      }
      else {
        if (iVar4 != 1) goto LAB_10926f09c;
        uVar5 = *param_2;
        uVar6 = param_2[1];
        uVar9 = param_2[2];
        iVar4 = *param_3;
        iVar7 = param_3[1];
        iVar10 = param_3[2];
        uVar23 = *(undefined8 *)(lVar20 + 0x250);
        pcVar19 = *(code **)(lVar18 + 0x710);
LAB_10926ef2c:
        (*pcVar19)(iVar8,param_4,uVar5,uVar6,uVar9,iVar4,iVar7,iVar10,uVar23,param_5);
      }
    }
    else {
      if (iVar4 == 2) {
        uVar5 = *param_2;
        uVar6 = param_2[1];
        uVar9 = param_2[2];
        iVar4 = *param_3;
        iVar7 = param_3[1];
        iVar10 = param_3[2];
        uVar23 = *(undefined8 *)(lVar20 + 0x250);
        pcVar19 = *(code **)(lVar18 + 0x710);
        goto LAB_10926ef2c;
      }
      if (iVar4 != 3) goto LAB_10926f09c;
      if (param_3[2] != 0) {
        uVar21 = 0;
        do {
          _glTexSubImage2D((uVar21 + param_2[2] & 0xff) + 0x8515,param_4,*param_2,param_2[1],
                           *param_3,param_3[1],*(undefined4 *)(lVar20 + 0x250),
                           *(undefined4 *)(lVar20 + 0x254),param_5);
          param_5 = param_5 + lVar16;
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)param_3[2]);
      }
    }
  }
  else {
    bVar12 = *(byte *)((long)ppuVar3 + 0x1a);
    if (bVar12 == 0) {
      FUN_109243bf8(&UNK_10f62e152);
LAB_10926f09c:
      FUN_109243bf8(&UNK_10f5626fa);
      return;
    }
    iVar4 = *param_3;
    func_0x000109fc8e58(iVar4,param_3[1]);
    if (param_7 == 0) {
      uVar17 = (uint)bVar11;
      uVar21 = 0;
      if (uVar17 != 0) {
        uVar21 = ((iVar4 + uVar17) - 1) / uVar17;
      }
      uVar21 = uVar21 * bVar12;
      if ((uint)param_6 != 0) {
        uVar21 = (uint)param_6;
      }
      ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(param_1 + 0x40) * 4;
      if (0x56 < *(uint *)(param_1 + 0x40)) {
        ppuVar3 = &PTR_DAT_110ae4700;
      }
      uVar17 = (uint)*(byte *)((long)ppuVar3 + 0x19);
      if (*(byte *)((long)ppuVar3 + 0x19) < 2) {
        uVar17 = 1;
      }
      uVar15 = 0;
      if (uVar17 != 0) {
        uVar15 = ((param_3[1] + uVar17) - 1) / uVar17;
      }
      uVar22 = (ulong)uVar15 * (ulong)uVar21;
    }
    else {
      uVar22 = (ulong)param_7;
    }
    (**(code **)(lVar18 + 0x950))(0xcf2,0);
    (**(code **)(lVar18 + 0x950))(0x806e,0);
    iVar4 = *(int *)(param_1 + 0x34);
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        _glCompressedTexSubImage2D
                  (iVar8,param_4,*param_2,param_2[1],*param_3,param_3[1],*puVar1,uVar22,param_5);
      }
      else {
        if (iVar4 != 1) goto LAB_10926f09c;
LAB_10926eeb8:
        _glCompressedTexSubImage3D
                  (iVar8,param_4,*param_2,param_2[1],param_2[2],*param_3,param_3[1],param_3[2],
                   *puVar1,param_3[2] * (int)uVar22,param_5);
      }
    }
    else {
      if (iVar4 == 2) goto LAB_10926eeb8;
      if (iVar4 != 3) goto LAB_10926f09c;
      if (param_3[2] != 0) {
        uVar21 = 0;
        do {
          _glCompressedTexSubImage2D
                    ((uVar21 + param_2[2] & 0xff) + 0x8515,param_4,*param_2,param_2[1],*param_3,
                     param_3[1],*puVar1,uVar22,param_5);
          param_5 = param_5 + uVar22;
          uVar21 = uVar21 + 1;
        } while (uVar21 < (uint)param_3[2]);
      }
    }
  }
  if ((param_8 != 0) && (*(int *)(param_8 + 0x150) != -1)) {
    if (iVar8 < 0x8c2a) {
      if (iVar8 < 0x8513) {
        if (iVar8 == 0xde1) {
          lVar20 = 1;
        }
        else {
          if (iVar8 != 0x806f) goto LAB_10926f044;
          lVar20 = 4;
        }
      }
      else if (iVar8 == 0x8513) {
        lVar20 = 6;
      }
      else {
        if (iVar8 != 0x8c1a) goto LAB_10926f044;
        lVar20 = 5;
      }
    }
    else if (iVar8 < 0x9100) {
      if (iVar8 == 0x8c2a) {
        lVar20 = 8;
      }
      else {
        if (iVar8 != 0x9009) goto LAB_10926f044;
        lVar20 = 7;
      }
    }
    else if (iVar8 == 0x9102) {
      lVar20 = 3;
    }
    else {
      if (iVar8 != 0x9100) goto LAB_10926f044;
      lVar20 = 2;
    }
    lVar18 = *(long *)(param_8 + 0x138) + (ulong)(*(int *)(param_8 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar18 + lVar20 * 4) == 0) goto LAB_10926f050;
    *(undefined4 *)(lVar18 + lVar20 * 4) = 0;
  }
LAB_10926f044:
  _glBindTexture(iVar8,0);
LAB_10926f050:
  plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0x1310);
  do {
    lVar20 = *plVar2;
    cVar13 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar14) {
      *plVar2 = lVar20 + 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  *(long *)(param_1 + 0xb8) = lVar20;
  return;
}



/* Entry: 10926f0a8; end: 10926f0ab;  */

void FUN_10926f0a8(void)

{
  return;
}



/* Entry: 10926f0ac; end: 10926f1c7;  */

void FUN_10926f0ac(long param_1,int param_2,ulong param_3,int param_4)

{
  undefined8 ***pppuVar1;
  undefined8 **ppuStack_38;
  ulong uStack_30;
  byte bStack_21;
  
  if ((param_2 == 0x26) && (param_4 != 0x1909)) {
    if (param_4 == 0x8229) {
      if ((param_3 & 1) == 0) {
        func_0x000109fd19d0(param_1 + 0x810,6,0x8000,&UNK_10f56270e,0x7a);
      }
      _glTexParameteri(0xde1,0x8e42,0x1903);
      _glTexParameteri(0xde1,0x8e43,0x1903);
      _glTexParameteri(0xde1,0x8e44,0x1903);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__glTexParameteri_11034b7f8)(0xde1,0x8e45,1);
      return;
    }
    FUN_109231308(&ppuStack_38,&UNK_10f562789);
    pppuVar1 = (undefined8 ***)ppuStack_38;
    if (-1 < (char)bStack_21) {
      uStack_30 = (ulong)bStack_21;
      pppuVar1 = &ppuStack_38;
    }
    func_0x000109fd19d0(param_1 + 0x810,6,0x8000,pppuVar1,uStack_30);
    if ((char)bStack_21 < '\0') {
      __ZdlPv(ppuStack_38);
    }
  }
  return;
}



/* Entry: 10926f1c8; end: 10926f2cb;  */

/* WARNING: Removing unreachable block (ram,0x000109270eb8) */
/* WARNING: Removing unreachable block (ram,0x000109270508) */
/* WARNING: Removing unreachable block (ram,0x0001092703d0) */
/* WARNING: Removing unreachable block (ram,0x00010926f7e8) */
/* WARNING: Removing unreachable block (ram,0x000109270b78) */
/* WARNING: Removing unreachable block (ram,0x0001092709a0) */
/* WARNING: Removing unreachable block (ram,0x00010927074c) */
/* WARNING: Removing unreachable block (ram,0x00010926f594) */
/* WARNING: Removing unreachable block (ram,0x000109270054) */
/* WARNING: Removing unreachable block (ram,0x000109270974) */
/* WARNING: Removing unreachable block (ram,0x000109270b54) */
/* WARNING: Removing unreachable block (ram,0x00010926f7c0) */
/* WARNING: Removing unreachable block (ram,0x00010926f97c) */
/* WARNING: Removing unreachable block (ram,0x000109270fc4) */
/* WARNING: Removing unreachable block (ram,0x000109270528) */
/* WARNING: Removing unreachable block (ram,0x000109270774) */
/* WARNING: Removing unreachable block (ram,0x0001092703f4) */
/* WARNING: Removing unreachable block (ram,0x000109270cf8) */
/* WARNING: Removing unreachable block (ram,0x00010926f56c) */
/* WARNING: Removing unreachable block (ram,0x00010926f4a4) */
/* WARNING: Removing unreachable block (ram,0x000109270804) */
/* WARNING: Type propagation algorithm not settling */

long ******* FUN_10926f1c8(int param_1,ulong param_2,int param_3,ulong param_4,long param_5)

{
  int *piVar1;
  undefined8 *******pppppppuVar2;
  long ******pppppplVar3;
  long *******ppppppplVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long *******ppppppplVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *******pppppppuVar16;
  undefined8 ******ppppppuVar17;
  uint *puVar18;
  undefined8 *puVar19;
  long *******ppppppplVar20;
  int iVar21;
  long *******ppppppplVar22;
  long *******ppppppplVar23;
  uint uVar24;
  undefined4 uVar25;
  long *extraout_x8;
  long lVar26;
  long lVar27;
  ulong uVar28;
  undefined4 *puVar29;
  long lVar30;
  ulong uVar31;
  int iVar32;
  ulong uVar33;
  long *plVar34;
  int iVar35;
  undefined4 *puVar36;
  int *piVar37;
  int *piVar38;
  undefined8 uStack_230;
  int iStack_228;
  undefined4 uStack_224;
  undefined7 uStack_220;
  byte bStack_219;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined8 *******pppppppuStack_1f0;
  ulong uStack_1e8;
  byte bStack_1d9;
  undefined8 *******apppppppuStack_1d8 [2];
  char cStack_1c1;
  undefined8 ******ppppppuStack_1c0;
  undefined8 ******ppppppuStack_1b8;
  undefined8 ******ppppppuStack_1b0;
  long *******ppppppplStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  int iStack_180;
  undefined4 uStack_17c;
  int iStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  ulong uStack_148;
  byte bStack_139;
  uint uStack_138;
  undefined4 uStack_134;
  ulong uStack_130;
  byte bStack_121;
  undefined8 uStack_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long ******pppppplStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long *******ppppppplStack_d8;
  undefined8 uStack_d0;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  long lStack_98;
  
  if (param_1 < 0x8b57) {
    if (param_1 < 0x8b53) {
      if (param_1 - 0x1404U < 3) {
        return (long *******)0x4;
      }
      if (param_1 - 0x8b51U < 2) {
        return (long *******)0x10;
      }
      iVar21 = 0x8b50;
LAB_10926f294:
      if (param_1 == iVar21) {
        return (long *******)0x8;
      }
    }
    else {
      if (param_1 - 0x8b54U < 2) {
        return (long *******)0x10;
      }
      if (param_1 == 0x8b53) {
        return (long *******)0x8;
      }
      if (param_1 == 0x8b56) {
        return (long *******)0x4;
      }
    }
  }
  else {
    if (0x8b5b < param_1) {
      if (param_1 - 0x8dc7U < 2) {
        return (long *******)0x10;
      }
      if (param_1 == 0x8b5c) {
        return (long *******)0x40;
      }
      iVar21 = 0x8dc6;
      goto LAB_10926f294;
    }
    if (param_1 - 0x8b58U < 3) {
      return (long *******)0x10;
    }
    if (param_1 == 0x8b57) {
      return (long *******)0x8;
    }
    if (param_1 == 0x8b5b) {
      return (long *******)0x30;
    }
  }
  ppppppplVar12 = (long *******)&UNK_10f5627cc;
  FUN_109243bf8();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar15 = extraout_x8 + 6;
  extraout_x8[7] = 0;
  *plVar15 = 0;
  extraout_x8[0xf] = 0;
  extraout_x8[0xe] = 0;
  extraout_x8[0x11] = 0;
  extraout_x8[0x10] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[0xd] = 0;
  extraout_x8[0xc] = 0;
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  *(undefined4 *)(extraout_x8 + 0x13) = 1;
  plVar14 = extraout_x8 + 0x14;
  extraout_x8[0x15] = 0;
  *plVar14 = 0;
  plVar34 = extraout_x8 + 0x1a;
  extraout_x8[0x1b] = 0;
  *plVar34 = 0;
  extraout_x8[0x12] = 0xffffffff;
  extraout_x8[0x17] = 0;
  extraout_x8[0x16] = 0;
  extraout_x8[0x19] = 0;
  extraout_x8[0x18] = 0;
  extraout_x8[0x1d] = 0;
  extraout_x8[0x1c] = 0;
  extraout_x8[0x1f] = 0;
  extraout_x8[0x1e] = 0;
  *(undefined4 *)(extraout_x8 + 0x20) = 0;
  iVar21 = (int)param_2;
  if (param_3 == 0) {
    uStack_230 = (long *******)((ulong)uStack_230 & 0xffffffffffffff00);
    uStack_200 = 0;
    if (*(int *)(param_5 + 0x2e8) == 2) {
      if (*(char *)(param_5 + 0x2e0) != '\0') {
        uStack_230 = (long *******)0x0;
        iStack_228 = 0;
        uStack_224 = 0;
        uStack_220 = 0;
        bStack_219 = 0;
        FUN_109249f9c(&uStack_230,*(long *)(param_5 + 0x298),*(long *)(param_5 + 0x2a0),
                      (*(long *)(param_5 + 0x2a0) - *(long *)(param_5 + 0x298) >> 3) *
                      -0x3333333333333333);
        uStack_218 = 0;
        uStack_210 = 0;
        uStack_208 = 0;
        FUN_10924a020(&uStack_218,*(long *)(param_5 + 0x2b0),*(long *)(param_5 + 0x2b8),
                      *(long *)(param_5 + 0x2b8) - *(long *)(param_5 + 0x2b0) >> 4);
        goto LAB_10926f6f4;
      }
    }
    else if ((*(int *)(param_5 + 0x2e8) == 1) && (*(char *)(param_5 + 0x38) != '\0')) {
      FUN_109249f14(&uStack_230,param_5 + 8);
LAB_10926f6f4:
      uStack_200 = 1;
      ppppppplVar23 = (long *******)CONCAT44(uStack_224,iStack_228);
      for (ppppppplVar20 = uStack_230; ppppppplVar20 != ppppppplVar23;
          ppppppplVar20 = ppppppplVar20 + 5) {
        if (*(int *)(ppppppplVar20 + 3) == 8 || *(int *)(ppppppplVar20 + 3) == 2) {
          ppppppplVar22 = ppppppplVar20;
          if (*(char *)((long)ppppppplVar20 + 0x17) < '\0') {
            ppppppplVar22 = (long *******)*ppppppplVar20;
          }
          iVar32 = iVar21;
          _glGetUniformLocation(param_2 & 0xffffffff,ppppppplVar22);
          if (iVar32 != -1) {
            uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,0xffffffff);
            func_0x000107c31940(&uStack_118,"");
            uStack_100 = 0xffffffffffffffff;
            pppppplStack_f8 = (long ******)((ulong)pppppplStack_f8 & 0xffffffff00000000);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_118,ppppppplVar20);
            uStack_100 = CONCAT44(uStack_100._4_4_,iVar32);
            pppppplStack_f8 = (long ******)((ulong)pppppplStack_f8 & 0xffffffff00000000);
            puVar36 = (undefined4 *)extraout_x8[7];
            if (puVar36 < (undefined4 *)extraout_x8[8]) {
              *puVar36 = (undefined4)uStack_120;
              *(undefined8 *)(puVar36 + 6) = uStack_108;
              *(ulong *)(puVar36 + 4) = CONCAT17(uStack_109,uStack_110);
              *(ulong *)(puVar36 + 2) = CONCAT17(uStack_111,uStack_118);
              puVar36[10] = 0;
              *(ulong *)(puVar36 + 8) = uStack_100;
              plVar14 = (long *)(puVar36 + 0xc);
            }
            else {
              plVar14 = plVar15;
              FUN_109279c38(plVar15,&uStack_120);
            }
            extraout_x8[7] = (long)plVar14;
          }
        }
      }
      lVar27 = extraout_x8[6];
      lVar30 = extraout_x8[7];
      lVar26 = 0;
      if (lVar30 != lVar27) {
        lVar26 = LZCOUNT((lVar30 - lVar27 >> 4) * -0x5555555555555555) * -2 + 0x7e;
      }
      FUN_10927c580(lVar27,lVar30,lVar26,1);
      uStack_e0 = (long *******)((ulong)uStack_e0._4_4_ << 0x20);
      _glGetIntegerv(0x8b8d,&uStack_e0);
      _glUseProgram(iVar21);
      uStack_118 = SUB87(&uStack_e0,0);
      uStack_111 = (undefined1)((ulong)&uStack_e0 >> 0x38);
      lVar26 = extraout_x8[6];
      uStack_120 = ppppppplVar12;
      if (extraout_x8[7] != lVar26) {
        lVar27 = 0;
        uVar33 = 0;
        do {
          _glUniform1i(*(undefined4 *)(lVar26 + lVar27 + 0x20),uVar33);
          lVar26 = extraout_x8[6];
          *(int *)(lVar26 + lVar27 + 0x24) = (int)uVar33;
          uVar33 = uVar33 + 1;
          lVar27 = lVar27 + 0x30;
        } while (uVar33 < (ulong)((extraout_x8[7] - lVar26 >> 4) * -0x5555555555555555));
      }
      FUN_10927c504(&uStack_120);
      if ((*(byte *)((long)ppppppplVar12 + 0x2c) & 1) == 0) {
        lVar26 = extraout_x8[9];
        lVar27 = extraout_x8[10];
LAB_109270124:
        *(undefined4 *)(extraout_x8 + 0x20) = 0;
        if (lVar26 == lVar27) goto LAB_109270264;
      }
      else {
        ppppppplVar20 = (long *******)CONCAT44(uStack_224,iStack_228);
        if (uStack_230 != ppppppplVar20) {
          ppppppplVar23 = uStack_230;
          do {
            if (*(int *)(ppppppplVar23 + 3) == 4) {
              ppppppplVar22 = ppppppplVar23;
              if (*(char *)((long)ppppppplVar23 + 0x17) < '\0') {
                ppppppplVar22 = (long *******)*ppppppplVar23;
              }
              iVar32 = iVar21;
              (*(code *)ppppppplVar12[0xed])(param_2 & 0xffffffff,ppppppplVar22);
              if (iVar32 != -1) {
                uStack_110 = 0;
                uStack_109 = 0;
                uStack_118 = 0;
                uStack_111 = 0;
                uStack_120 = (long *******)0x0;
                uStack_108 = 0xffffffff;
                uStack_100 = CONCAT44(uStack_100._4_4_,1);
                uStack_f0 = 0;
                uStack_e8 = 0;
                pppppplStack_f8 = (long ******)0x0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (&uStack_120,ppppppplVar23);
                uStack_108 = CONCAT44(uStack_108._4_4_,iVar32);
                uVar33 = extraout_x8[10];
                if (uVar33 < (ulong)extraout_x8[0xb]) {
                  func_0x000107c2abdc(uVar33,&uStack_120);
                  plVar15 = (long *)(uVar33 + 0x40);
                }
                else {
                  plVar15 = extraout_x8 + 9;
                  FUN_10923de88(plVar15,&uStack_120);
                }
                extraout_x8[10] = (long)plVar15;
                uStack_e0 = &pppppplStack_f8;
                func_0x00010922df48(&uStack_e0);
              }
            }
            ppppppplVar23 = ppppppplVar23 + 5;
          } while (ppppppplVar23 != ppppppplVar20);
        }
        lVar27 = extraout_x8[9];
        lVar30 = extraout_x8[10];
        lVar26 = 0;
        if (lVar30 != lVar27) {
          lVar26 = LZCOUNT(lVar30 - lVar27 >> 6) * -2 + 0x7e;
        }
        FUN_10927d650(lVar27,lVar30,lVar26,1);
        lVar26 = extraout_x8[9];
        if (extraout_x8[10] != lVar26) {
          uVar33 = 0;
          lVar30 = 0x18;
          do {
            (*(code *)ppppppplVar12[0xf0])(iVar21,*(undefined4 *)(lVar26 + lVar30),uVar33);
            lVar26 = extraout_x8[9];
            *(int *)(lVar26 + lVar30) = (int)uVar33;
            uVar33 = uVar33 + 1;
            lVar27 = extraout_x8[10];
            lVar30 = lVar30 + 0x40;
          } while (uVar33 < (ulong)(lVar27 - lVar26 >> 6));
          goto LAB_109270124;
        }
        *(undefined4 *)(extraout_x8 + 0x20) = 0;
LAB_109270264:
        uStack_e0 = (long *******)((ulong)uStack_e0 & 0xffffffff00000000);
        _glGetProgramiv(iVar21,0x8b87,&uStack_e0);
        lVar26 = (long)(int)uStack_e0;
        uStack_e0 = (long *******)CONCAT44(uStack_e0._4_4_,(int)(lVar26 + 1));
        uStack_138 = uStack_138 & 0xffffff00;
        FUN_109274888(&uStack_120,lVar26 + 1,&uStack_138);
        ppppppplVar20 = uStack_120;
        FUN_109271450(iVar21,extraout_x8,(ulong)uStack_e0 & 0xffffffff,uStack_120);
        FUN_109271660(extraout_x8);
        *(undefined4 *)(extraout_x8 + 0x20) = 1;
        if (ppppppplVar20 != (long *******)0x0) {
          __ZdlPv(ppppppplVar20);
        }
      }
      if (*(char *)((long)ppppppplVar12 + 0x2d) == '\x01') {
        ppppppplVar23 = (long *******)CONCAT44(uStack_224,iStack_228);
        for (ppppppplVar20 = uStack_230; ppppppplVar20 != ppppppplVar23;
            ppppppplVar20 = ppppppplVar20 + 5) {
          if (*(int *)(ppppppplVar20 + 3) == 5) {
            uStack_120._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
            uStack_120._0_4_ = 0xffffffff;
            func_0x000107c31940(&uStack_118,"");
            uStack_100 = 0xffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_118,ppppppplVar20);
            uStack_100 = uStack_100 & 0xffffffff;
            ppppppplVar22 = ppppppplVar20;
            if (*(char *)((long)ppppppplVar20 + 0x17) < '\0') {
              ppppppplVar22 = (long *******)*ppppppplVar20;
            }
            uVar33 = param_2 & 0xffffffff;
            (*(code *)ppppppplVar12[0xf9])(uVar33,0x92e6,ppppppplVar22);
            uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,(int)uVar33);
            if ((int)uVar33 != -1) {
              uStack_e0 = (long *******)CONCAT44(uStack_e0._4_4_,0x9302);
              (*(code *)ppppppplVar12[0xf6])(iVar21,0x92e6,uVar33,1,&uStack_e0,1,0,&uStack_100);
              puVar36 = (undefined4 *)extraout_x8[0x1b];
              if (puVar36 < (undefined4 *)extraout_x8[0x1c]) {
                *puVar36 = (undefined4)uStack_120;
                *(undefined8 *)(puVar36 + 6) = uStack_108;
                *(ulong *)(puVar36 + 4) = CONCAT17(uStack_109,uStack_110);
                *(ulong *)(puVar36 + 2) = CONCAT17(uStack_111,uStack_118);
                *(ulong *)(puVar36 + 8) = uStack_100;
                plVar15 = (long *)(puVar36 + 10);
              }
              else {
                plVar15 = plVar34;
                FUN_109274be4(plVar34,&uStack_120);
              }
              extraout_x8[0x1b] = (long)plVar15;
            }
          }
        }
        lVar27 = extraout_x8[0x1a];
        lVar30 = extraout_x8[0x1b];
        lVar26 = 0;
        if (lVar30 != lVar27) {
          lVar26 = LZCOUNT((lVar30 - lVar27 >> 3) * -0x3333333333333333) * -2 + 0x7e;
        }
        func_0x00010927ea1c(lVar27,lVar30,lVar26,1);
      }
      ppppppplVar20 = (long *******)CONCAT44(uStack_224,iStack_228);
      for (ppppppplVar12 = uStack_230; ppppppplVar12 != ppppppplVar20;
          ppppppplVar12 = ppppppplVar12 + 5) {
        if (*(int *)(ppppppplVar12 + 3) == 3) {
          ppppppplVar23 = ppppppplVar12;
          if (*(char *)((long)ppppppplVar12 + 0x17) < '\0') {
            ppppppplVar23 = (long *******)*ppppppplVar12;
          }
          uVar33 = param_2 & 0xffffffff;
          _glGetUniformLocation(uVar33,ppppppplVar23);
          if ((int)uVar33 != -1) {
            uStack_e0 = (long *******)CONCAT44(uStack_e0._4_4_,0xffffffff);
            _glGetUniformiv(iVar21,uVar33,&uStack_e0);
            uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,0xffffffff);
            func_0x000107c31940(&uStack_118,"");
            uStack_100 = 0xffffffffffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_118,ppppppplVar12);
            uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_e0);
            puVar36 = (undefined4 *)extraout_x8[4];
            if (puVar36 < (undefined4 *)extraout_x8[5]) {
              *puVar36 = (undefined4)uStack_120;
              *(undefined8 *)(puVar36 + 6) = uStack_108;
              *(ulong *)(puVar36 + 4) = CONCAT17(uStack_109,uStack_110);
              *(ulong *)(puVar36 + 2) = CONCAT17(uStack_111,uStack_118);
              *(ulong *)(puVar36 + 8) = uStack_100;
              plVar15 = (long *)(puVar36 + 10);
            }
            else {
              plVar15 = extraout_x8 + 3;
              FUN_10927b130(plVar15,&uStack_120);
            }
            extraout_x8[4] = (long)plVar15;
          }
        }
      }
      lVar27 = extraout_x8[3];
      lVar30 = extraout_x8[4];
      lVar26 = 0;
      if (lVar30 != lVar27) {
        lVar26 = LZCOUNT((lVar30 - lVar27 >> 3) * -0x3333333333333333) * -2 + 0x7e;
      }
      FUN_10927fa20(lVar27,lVar30,lVar26,1);
      lVar26 = extraout_x8[4] - extraout_x8[3];
      if (lVar26 != 0) {
        lVar27 = 0;
        puVar36 = (undefined4 *)(extraout_x8[3] + 0x24);
        do {
          *puVar36 = (int)lVar27;
          lVar27 = lVar27 + 1;
          puVar36 = puVar36 + 10;
        } while ((lVar26 >> 3) * -0x3333333333333333 - lVar27 != 0);
      }
      ppppppplVar20 = (long *******)&uStack_230;
      func_0x00010922e088(ppppppplVar20);
      goto LAB_109270bfc;
    }
  }
  else {
    uStack_230 = (long *******)((ulong)uStack_230 & 0xffffffff00000000);
    _glGetProgramiv(param_2,0x8b87,&uStack_230);
    lVar26 = (long)(int)uStack_230;
    uStack_230 = (long *******)CONCAT44(uStack_230._4_4_,(int)(lVar26 + 1));
    uStack_e0 = (long *******)((ulong)uStack_e0 & 0xffffffffffffff00);
    FUN_109274888(&uStack_120,lVar26 + 1,&uStack_e0);
    ppppppplVar20 = uStack_120;
    iVar32 = (int)uStack_230;
    FUN_109271450(param_2 & 0xffffffff,extraout_x8,(ulong)uStack_230 & 0xffffffff);
    if (*(char *)((long)ppppppplVar12 + 0x2d) == '\x01') {
      uStack_138 = 0;
      (*(code *)ppppppplVar12[0xf7])(param_2 & 0xffffffff,0x92e6,0x92f6,&uStack_138);
      uStack_120 = (long *******)((ulong)uStack_120 & 0xffffffffffffff00);
      FUN_109274888(&uStack_230,(long)(int)uStack_138 + 1,&uStack_120);
      iStack_150 = 0;
      (*(code *)ppppppplVar12[0xf7])(param_2 & 0xffffffff,0x92e6,0x92f5,&iStack_150);
      if (0 < iStack_150) {
        iVar35 = 0;
        do {
          uStack_120._0_4_ = 0xffffffff;
          func_0x000107c31940(&uStack_118,"");
          uStack_100 = 0xffffffff;
          uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,iVar35);
          (*(code *)ppppppplVar12[0xf8])
                    (iVar21,0x92e6,iVar35,iStack_228 - (int)uStack_230,&uStack_138);
          func_0x000107c31940(&uStack_e0,uStack_230);
          uStack_110 = SUB87(ppppppplStack_d8,0);
          uStack_109 = (undefined1)((ulong)ppppppplStack_d8 >> 0x38);
          uStack_118 = SUB87(uStack_e0,0);
          uStack_111 = (undefined1)((ulong)uStack_e0 >> 0x38);
          uStack_108 = uStack_d0;
          uVar33 = 0;
          FUN_109287bb0();
          if ((uVar33 & 1) == 0) {
            uStack_e0 = (long *******)CONCAT44(uStack_e0._4_4_,0x9302);
            (*(code *)ppppppplVar12[0xf6])
                      (iVar21,0x92e6,(ulong)uStack_120 & 0xffffffff,1,&uStack_e0,1,0,&uStack_100);
            uStack_b0 = 0x9303;
            (*(code *)ppppppplVar12[0xf6])
                      (iVar21,0x92e6,(ulong)uStack_120 & 0xffffffff,1,&uStack_b0,1,0,
                       (long)&uStack_100 + 4);
            puVar36 = (undefined4 *)extraout_x8[0x1b];
            if (puVar36 < (undefined4 *)extraout_x8[0x1c]) {
              *puVar36 = (undefined4)uStack_120;
              *(undefined8 *)(puVar36 + 6) = uStack_108;
              *(ulong *)(puVar36 + 4) = CONCAT17(uStack_109,uStack_110);
              *(ulong *)(puVar36 + 2) = CONCAT17(uStack_111,uStack_118);
              *(ulong *)(puVar36 + 8) = uStack_100;
              plVar13 = (long *)(puVar36 + 10);
            }
            else {
              plVar13 = plVar34;
              FUN_109274be4(plVar34,&uStack_120);
            }
            extraout_x8[0x1b] = (long)plVar13;
          }
          iVar35 = iVar35 + 1;
        } while (iVar35 < iStack_150);
      }
      lVar27 = extraout_x8[0x1a];
      lVar30 = extraout_x8[0x1b];
      lVar26 = 0;
      if (lVar30 != lVar27) {
        lVar26 = LZCOUNT((lVar30 - lVar27 >> 3) * -0x3333333333333333) * -2 + 0x7e;
      }
      FUN_109274e14(lVar27,lVar30,lVar26,1);
      if (uStack_230 != (long *******)0x0) {
        iStack_228 = (int)uStack_230;
        uStack_224 = (undefined4)((ulong)uStack_230 >> 0x20);
        __ZdlPv();
      }
    }
    if ((param_4 & 1) == 0) {
      if (*(char *)((long)ppppppplVar12 + 0x2c) == '\x01') {
        iStack_154 = 0;
        _glGetProgramiv(iVar21,0x8a35,&iStack_154);
        iVar35 = iStack_154;
        iStack_158 = 0;
        _glGetProgramiv(iVar21,0x8a36,&iStack_158);
        if (iVar35 <= iVar32) {
          iVar35 = iVar32;
        }
        uStack_120 = (long *******)((ulong)uStack_120 & 0xffffffffffffff00);
        FUN_109274888(&uStack_e0,(long)(iVar35 + 1),&uStack_120);
        if (0 < iStack_158) {
          iVar32 = 0;
          do {
            uStack_15c = 0;
            (*(code *)ppppppplVar12[0xec])(iVar21,iVar32,iVar35 + 1,&uStack_15c,uStack_e0);
            func_0x000107c31940(&uStack_138,uStack_e0);
            uVar33 = 0;
            FUN_109287bb0();
            if ((uVar33 & 1) == 0) {
              uStack_160 = 0;
              (*(code *)ppppppplVar12[0xee])(iVar21,iVar32,0x8a40,&uStack_160);
              uStack_120 = (long *******)0x0;
              uStack_118 = 0;
              uStack_111 = 0;
              uStack_110 = 0;
              uStack_109 = 0;
              uStack_100 = CONCAT44(uStack_100._4_4_,1);
              uStack_f0 = 0;
              uStack_e8 = 0;
              pppppplStack_f8 = (long ******)0x0;
              uStack_108._0_4_ = 0xffffffff;
              uStack_108._4_4_ = uStack_160;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&uStack_120,&uStack_138);
              uStack_108 = CONCAT44(uStack_108._4_4_,iVar32);
              (*(code *)ppppppplVar12[0xee])(iVar21,iVar32,0x8a42,&iStack_164);
              FUN_10925b8c4(&iStack_150,(long)iStack_164);
              (*(code *)ppppppplVar12[0xee])(iVar21,iVar32,0x8a43,CONCAT44(uStack_14c,iStack_150));
              FUN_10925b8c4(&uStack_b0,(long)(uStack_148 - CONCAT44(uStack_14c,iStack_150)) >> 2);
              (*(code *)ppppppplVar12[0xef])
                        (iVar21,uStack_148 - CONCAT44(uStack_14c,iStack_150) >> 2,
                         CONCAT44(uStack_14c,iStack_150),0x8a3b,CONCAT44(uStack_ac,uStack_b0));
              FUN_10925b8c4(&iStack_180,(long)(uStack_148 - CONCAT44(uStack_14c,iStack_150)) >> 2);
              (*(code *)ppppppplVar12[0xef])
                        (iVar21,uStack_148 - CONCAT44(uStack_14c,iStack_150) >> 2,
                         CONCAT44(uStack_14c,iStack_150),0x8a3c,CONCAT44(uStack_17c,iStack_180));
              uVar33 = CONCAT44(uStack_14c,iStack_150);
              if (uStack_148 != uVar33) {
                uVar28 = 0;
                uVar31 = uStack_148;
                do {
                  uVar24 = *(uint *)(uVar33 + uVar28 * 4);
                  if (-1 < (int)uVar24) {
                    lVar26 = *extraout_x8 + (ulong)uVar24 * 0x30;
                    iVar11 = *(int *)(lVar26 + 0x24);
                    iVar5 = *(int *)(lVar26 + 0x28);
                    if (*(char *)(lVar26 + 0x1f) < '\0') {
                      func_0x000107c3192c(&ppppppplStack_1a0,*(undefined8 *)(lVar26 + 8),
                                          *(undefined8 *)(lVar26 + 0x10));
                    }
                    else {
                      uStack_198 = *(ulong *)(lVar26 + 0x10);
                      ppppppplStack_1a0 = *(long ********)(lVar26 + 8);
                      uStack_190 = *(ulong *)(lVar26 + 0x18);
                    }
                    uVar33 = uStack_198;
                    if (-1 < (long)uStack_190) {
                      uVar33 = uStack_190 >> 0x38;
                    }
                    uVar31 = (long)(char)bStack_121;
                    if ((long)(char)bStack_121 < 0) {
                      uVar31 = uStack_130;
                    }
                    if (uVar31 < uVar33) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                                (&uStack_230,&ppppppplStack_1a0,0,uVar31,&ppppppuStack_1c0);
                      bVar7 = bStack_219;
                      uVar33 = CONCAT44(uStack_224,iStack_228);
                      if (-1 < (char)bStack_219) {
                        uVar33 = (ulong)bStack_219;
                      }
                      uVar31 = uStack_130;
                      if (-1 < (char)bStack_121) {
                        uVar31 = (ulong)bStack_121;
                      }
                      if (uVar33 == uVar31) {
                        ppppppplVar23 = uStack_230;
                        if (-1 < (char)bStack_219) {
                          ppppppplVar23 = (long *******)&uStack_230;
                        }
                        iVar10 = (int)ppppppplVar23;
                        puVar18 = (uint *)CONCAT44(uStack_134,uStack_138);
                        if (-1 < (char)bStack_121) {
                          puVar18 = &uStack_138;
                        }
                        _memcmp(ppppppplVar23,puVar18);
                        bVar9 = iVar10 == 0;
                      }
                      else {
                        bVar9 = false;
                      }
                      if ((char)bVar7 < '\0') {
                        __ZdlPv(uStack_230);
                      }
                      if (bVar9) {
                        uVar33 = uStack_130;
                        if (-1 < (char)bStack_121) {
                          uVar33 = (ulong)bStack_121;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                                  (&uStack_230,&ppppppplStack_1a0,uVar33 + 1,0xffffffffffffffff,
                                   &ppppppuStack_1c0);
                        if ((long)uStack_190 < 0) {
                          __ZdlPv(ppppppplStack_1a0);
                        }
                        uStack_198 = CONCAT44(uStack_224,iStack_228);
                        ppppppplStack_1a0 = uStack_230;
                        uStack_190 = CONCAT17(bStack_219,uStack_220);
                      }
                    }
                    uVar24 = *(uint *)(CONCAT44(uStack_ac,uStack_b0) + uVar28 * 4);
                    uStack_210 = 0;
                    iStack_228 = 0;
                    uStack_224 = 0;
                    uStack_230 = (long *******)0x0;
                    uStack_220 = 0;
                    bStack_219 = 0;
                    uStack_218 = (ulong)uVar24;
                    iVar10 = iVar11;
                    FUN_109275fb8();
                    uStack_210 = CONCAT44(iVar10,(undefined4)uStack_210);
                    if (iVar10 != 0) {
                      FUN_10924a40c(1,&UNK_10f5629ce);
                      FUN_10924a40c(1,&UNK_10f5629e6);
                      FUN_10924a40c(1,&UNK_10f5629ff);
                      FUN_10924a40c(1,&UNK_10f562a2b);
                      if (iVar5 < 1) {
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                  (&uStack_230,&ppppppplStack_1a0);
                        uStack_210 = uStack_210 & 0xffffffff00000000;
                        FUN_10926f1c8();
                        uStack_218 = CONCAT44(iVar11,(undefined4)uStack_218);
                        FUN_10923dc88(&pppppplStack_f8,&uStack_230);
                      }
                      else {
                        iVar10 = *(int *)(CONCAT44(uStack_17c,iStack_180) + uVar28 * 4);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                  (&uStack_230,&ppppppplStack_1a0);
                        uStack_218 = CONCAT44(iVar10,(undefined4)uStack_218);
                        uStack_210 = CONCAT44(uStack_210._4_4_,iVar5);
                        FUN_10923dc88(&pppppplStack_f8,&uStack_230);
                        iVar11 = 0;
                        do {
                          uVar33 = uStack_198;
                          if (-1 < (long)uStack_190) {
                            uVar33 = uStack_190 >> 0x38;
                          }
                          func_0x000104c4f768(apppppppuStack_1d8,uVar33 + 1,&pppppppuStack_1f0);
                          pppppppuVar2 = apppppppuStack_1d8[0];
                          if (-1 < cStack_1c1) {
                            pppppppuVar2 = apppppppuStack_1d8;
                          }
                          if (uVar33 != 0) {
                            ppppppplVar23 = ppppppplStack_1a0;
                            if (-1 < (long)uStack_190) {
                              ppppppplVar23 = (long *******)&ppppppplStack_1a0;
                            }
                            _memmove(pppppppuVar2,ppppppplVar23,uVar33);
                          }
                          *(undefined2 *)((long)pppppppuVar2 + uVar33) = 0x5b;
                          __ZNSt3__19to_stringEi(&pppppppuStack_1f0,iVar11);
                          uVar33 = uStack_1e8;
                          pppppppuVar2 = pppppppuStack_1f0;
                          if (-1 < (char)bStack_1d9) {
                            uVar33 = (ulong)bStack_1d9;
                            pppppppuVar2 = &pppppppuStack_1f0;
                          }
                          pppppppuVar16 = apppppppuStack_1d8;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (pppppppuVar16,pppppppuVar2,uVar33);
                          ppppppuStack_1b8 = pppppppuVar16[1];
                          ppppppuStack_1c0 = *pppppppuVar16;
                          ppppppuStack_1b0 = pppppppuVar16[2];
                          pppppppuVar16[1] = (undefined8 ******)0x0;
                          pppppppuVar16[2] = (undefined8 ******)0x0;
                          *pppppppuVar16 = (undefined8 ******)0x0;
                          ppppppuVar17 = &ppppppuStack_1c0;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (ppppppuVar17,&DAT_10f62a9ea,1);
                          ppppppplVar23 = (long *******)*ppppppuVar17;
                          uStack_c0 = SUB87(ppppppuVar17[1],0);
                          uStack_b9 = (undefined1)*(undefined8 *)((long)ppppppuVar17 + 0xf);
                          uStack_b8 = (undefined7)
                                      ((ulong)*(undefined8 *)((long)ppppppuVar17 + 0xf) >> 8);
                          bVar7 = *(byte *)((long)ppppppuVar17 + 0x17);
                          ppppppuVar17[1] = (undefined8 *****)0x0;
                          ppppppuVar17[2] = (undefined8 *****)0x0;
                          *ppppppuVar17 = (undefined8 *****)0x0;
                          if ((char)bStack_219 < '\0') {
                            __ZdlPv(uStack_230);
                          }
                          iStack_228 = (int)uStack_c0;
                          uStack_224 = CONCAT13(uStack_b9,(int3)((uint7)uStack_c0 >> 0x20));
                          uStack_220 = uStack_b8;
                          uStack_230 = ppppppplVar23;
                          bStack_219 = bVar7;
                          if ((long)ppppppuStack_1b0 < 0) {
                            __ZdlPv(ppppppuStack_1c0);
                          }
                          if ((char)bStack_1d9 < '\0') {
                            __ZdlPv(pppppppuStack_1f0);
                          }
                          if (cStack_1c1 < '\0') {
                            __ZdlPv(apppppppuStack_1d8[0]);
                          }
                          uStack_210 = uStack_210 & 0xffffffff00000000;
                          uStack_218 = CONCAT44(uStack_218._4_4_,uVar24);
                          FUN_10923dc88(&pppppplStack_f8,&uStack_230);
                          FUN_10924a40c(1,&UNK_10f562a4a);
                          iVar11 = iVar11 + 1;
                          uVar24 = uVar24 + iVar10;
                        } while (iVar5 != iVar11);
                      }
                    }
                    if ((char)bStack_219 < '\0') {
                      __ZdlPv(uStack_230);
                    }
                    if ((long)uStack_190 < 0) {
                      __ZdlPv(ppppppplStack_1a0);
                    }
                    uVar33 = CONCAT44(uStack_14c,iStack_150);
                    uVar31 = uStack_148;
                  }
                  uVar28 = uVar28 + 1;
                } while (uVar28 < (ulong)((long)(uVar31 - uVar33) >> 2));
              }
              if (CONCAT44(uStack_17c,iStack_180) != 0) {
                __ZdlPv();
              }
              if (CONCAT44(uStack_ac,uStack_b0) != 0) {
                uStack_a8 = (undefined7)CONCAT44(uStack_ac,uStack_b0);
                uStack_a1 = (undefined1)((uint)uStack_ac >> 0x18);
                __ZdlPv();
              }
              if (CONCAT44(uStack_14c,iStack_150) != 0) {
                uStack_148 = CONCAT44(uStack_14c,iStack_150);
                __ZdlPv();
              }
              puVar19 = (undefined8 *)extraout_x8[10];
              if (puVar19 < (undefined8 *)extraout_x8[0xb]) {
                puVar19[2] = CONCAT17(uStack_109,uStack_110);
                puVar19[1] = CONCAT17(uStack_111,uStack_118);
                *puVar19 = uStack_120;
                uStack_118 = 0;
                uStack_111 = 0;
                uStack_110 = 0;
                uStack_109 = 0;
                uStack_120 = (long *******)0x0;
                puVar19[3] = uStack_108;
                *(int *)(puVar19 + 4) = (int)uStack_100;
                puVar19[6] = 0;
                puVar19[7] = 0;
                puVar19[5] = 0;
                puVar19[6] = uStack_f0;
                puVar19[5] = pppppplStack_f8;
                puVar19[7] = uStack_e8;
                pppppplStack_f8 = (long ******)0x0;
                uStack_f0 = 0;
                uStack_e8 = 0;
                plVar14 = puVar19 + 8;
              }
              else {
                plVar14 = extraout_x8 + 9;
                FUN_109276118(plVar14,&uStack_120);
              }
              extraout_x8[10] = (long)plVar14;
              uStack_230 = &pppppplStack_f8;
              func_0x00010922df48(&uStack_230);
            }
            if ((char)bStack_121 < '\0') {
              __ZdlPv(CONCAT44(uStack_134,uStack_138));
            }
            iVar32 = iVar32 + 1;
          } while (iVar32 < iStack_158);
        }
        lVar27 = extraout_x8[9];
        lVar30 = extraout_x8[10];
        lVar26 = 0;
        if (lVar30 != lVar27) {
          lVar26 = LZCOUNT(lVar30 - lVar27 >> 6) * -2 + 0x7e;
        }
        FUN_109276250(lVar27,lVar30,lVar26,1);
        lVar26 = extraout_x8[9];
        if (extraout_x8[10] != lVar26) {
          uVar33 = 0;
          lVar27 = 0x18;
          do {
            (*(code *)ppppppplVar12[0xf0])(iVar21,*(undefined4 *)(lVar26 + lVar27),uVar33);
            lVar26 = extraout_x8[9];
            *(int *)(lVar26 + lVar27) = (int)uVar33;
            uVar33 = uVar33 + 1;
            lVar27 = lVar27 + 0x40;
          } while (uVar33 < (ulong)(extraout_x8[10] - lVar26 >> 6));
        }
        if (uStack_e0 != (long *******)0x0) {
          ppppppplStack_d8 = uStack_e0;
          __ZdlPv();
        }
      }
      *(undefined4 *)(extraout_x8 + 0x20) = 0;
      if (extraout_x8[9] == extraout_x8[10]) {
        FUN_109271660(extraout_x8);
        uVar25 = 1;
        goto LAB_109270878;
      }
    }
    else {
      uStack_230 = (long *******)0x0;
      iStack_228 = 0;
      uStack_224 = 0;
      uStack_220 = 0;
      bStack_219 = 0;
      lVar26 = *extraout_x8;
      lVar27 = extraout_x8[1];
      if (lVar26 == lVar27) {
        ppppppplVar23 = (long *******)0x0;
      }
      else {
        do {
          iVar32 = *(int *)(lVar26 + 0x24);
          if ((iVar32 - 0x8b50U < 0xd || iVar32 - 0x8dc6U < 3) || iVar32 - 0x1404U < 3) {
            FUN_109274954(&uStack_230,lVar26);
          }
          lVar26 = lVar26 + 0x30;
        } while (lVar26 != lVar27);
        ppppppplVar23 = (long *******)CONCAT44(uStack_224,iStack_228);
      }
      lVar26 = 0;
      if (ppppppplVar23 != uStack_230) {
        lVar26 = LZCOUNT(((long)ppppppplVar23 - (long)uStack_230 >> 4) * -0x5555555555555555) * -2 +
                 0x7e;
      }
      FUN_109278928(uStack_230,ppppppplVar23,lVar26,1);
      if (uStack_230 != (long *******)CONCAT44(uStack_224,iStack_228)) {
        lVar27 = (long)CONCAT44(uStack_224,iStack_228) - (long)uStack_230 >> 4;
        uVar28 = lVar27 * -0x5555555555555555;
        lVar26 = extraout_x8[0x17];
        puVar36 = (undefined4 *)extraout_x8[0x18];
        lVar30 = (long)puVar36 - lVar26 >> 2;
        bVar9 = uVar28 < (ulong)(lVar30 * -0x3333333333333333);
        uVar33 = uVar28 + lVar30 * 0x3333333333333333;
        if (bVar9 || uVar33 == 0) {
          if (bVar9) {
            extraout_x8[0x18] = lVar26 + lVar27 * 0x555555555555555c;
          }
        }
        else if ((ulong)((extraout_x8[0x19] - (long)puVar36 >> 2) * -0x3333333333333333) < uVar33) {
          if (0xccccccccccccccc < uVar28) {
            FUN_109279b68();
            goto LAB_109271060;
          }
          lVar30 = extraout_x8[0x19] - lVar26 >> 2;
          uVar31 = lVar30 * -0x6666666666666666;
          if (uVar31 < uVar28 || uVar31 + lVar27 * 0x5555555555555555 == 0) {
            uVar31 = uVar28;
          }
          if (0x666666666666665 < (ulong)(lVar30 * -0x3333333333333333)) {
            uVar31 = 0xccccccccccccccc;
          }
          FUN_109279b7c();
          puVar29 = (undefined4 *)(uVar31 + ((long)puVar36 - lVar26));
          puVar36 = puVar29;
          do {
            *puVar36 = 0xffffffff;
            *(undefined8 *)(puVar36 + 3) = 0;
            *(undefined8 *)(puVar36 + 1) = 0;
            puVar36 = puVar36 + 5;
          } while (puVar36 != puVar29 + uVar33 * 5);
          lVar27 = (long)puVar29 - (extraout_x8[0x18] - extraout_x8[0x17]);
          _memcpy(lVar27);
          lVar26 = extraout_x8[0x17];
          extraout_x8[0x17] = lVar27;
          extraout_x8[0x18] = (long)(puVar29 + uVar33 * 5);
          extraout_x8[0x19] = uVar31 + (long)ppppppplVar23 * 0x14;
          if (lVar26 != 0) {
            __ZdlPv();
          }
        }
        else {
          puVar29 = puVar36 + uVar33 * 5;
          do {
            *puVar36 = 0xffffffff;
            *(undefined8 *)(puVar36 + 3) = 0;
            *(undefined8 *)(puVar36 + 1) = 0;
            puVar36 = puVar36 + 5;
          } while (puVar36 != puVar29);
          extraout_x8[0x18] = (long)puVar29;
        }
        if ((long *******)CONCAT44(uStack_224,iStack_228) == uStack_230) {
          uVar24 = 0;
        }
        else {
          uVar33 = 0;
          iVar32 = 0;
          do {
            ppppppplVar22 = uStack_230;
            uStack_100 = 0;
            ppppppplVar23 = uStack_230 + uVar33 * 6 + 1;
            uStack_118 = 0;
            uStack_111 = 0;
            uStack_120 = (long *******)0x0;
            uStack_108 = 0;
            uStack_110 = 0;
            uStack_109 = 0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_120,ppppppplVar23);
            uStack_108 = CONCAT44(uStack_108._4_4_,iVar32);
            uVar25 = *(undefined4 *)((long)ppppppplVar22 + uVar33 * 0x30 + 0x24);
            FUN_109275fb8();
            uStack_100 = CONCAT44(uVar25,*(undefined4 *)(ppppppplVar22 + uVar33 * 6 + 5));
            uVar25 = *(undefined4 *)((long)ppppppplVar22 + uVar33 * 0x30 + 0x24);
            FUN_10926f1c8();
            uStack_108 = CONCAT44(uVar25,(undefined4)uStack_108);
            FUN_10923dc88(plVar14,&uStack_120);
            if (((int)uStack_100 != 0) &&
               (uStack_100 = uStack_100 & 0xffffffff00000000,
               *(int *)(ppppppplVar22 + uVar33 * 6 + 5) != 0)) {
              uVar24 = 0;
              do {
                bVar7 = *(byte *)((long)ppppppplVar22 + uVar33 * 0x30 + 0x1f);
                pppppplVar3 = ppppppplVar22[uVar33 * 6 + 2];
                if (-1 < (char)bVar7) {
                  pppppplVar3 = (long ******)(ulong)bVar7;
                }
                func_0x000104c4f768(&uStack_138,(long)pppppplVar3 + 1,&iStack_150);
                puVar18 = (uint *)CONCAT44(uStack_134,uStack_138);
                if (-1 < (char)bStack_121) {
                  puVar18 = &uStack_138;
                }
                if (pppppplVar3 != (long ******)0x0) {
                  ppppppplVar4 = (long *******)ppppppplVar22[uVar33 * 6 + 1];
                  if (-1 < *(char *)((long)ppppppplVar22 + uVar33 * 0x30 + 0x1f)) {
                    ppppppplVar4 = ppppppplVar23;
                  }
                  _memmove(puVar18,ppppppplVar4,pppppplVar3);
                }
                *(undefined2 *)((long)puVar18 + (long)pppppplVar3) = 0x5b;
                __ZNSt3__19to_stringEj(&iStack_150,uVar24);
                uVar28 = uStack_148;
                piVar1 = (int *)CONCAT44(uStack_14c,iStack_150);
                if (-1 < (char)bStack_139) {
                  uVar28 = (ulong)bStack_139;
                  piVar1 = &iStack_150;
                }
                puVar18 = &uStack_138;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar18,piVar1,uVar28);
                ppppppplStack_d8 = *(long ********)(puVar18 + 2);
                uStack_e0 = *(long ********)puVar18;
                uStack_d0 = *(undefined8 *)(puVar18 + 4);
                puVar18[2] = 0;
                puVar18[3] = 0;
                puVar18[4] = 0;
                puVar18[5] = 0;
                puVar18[0] = 0;
                puVar18[1] = 0;
                puVar19 = &uStack_e0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar19,&DAT_10f62a9ea,1);
                uStack_120 = (long *******)*puVar19;
                uStack_b0 = (undefined4)puVar19[1];
                uStack_ac._0_3_ = (undefined3)((ulong)puVar19[1] >> 0x20);
                uStack_ac._3_1_ = (undefined1)*(undefined8 *)((long)puVar19 + 0xf);
                uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar19 + 0xf) >> 8);
                uStack_109 = *(undefined1 *)((long)puVar19 + 0x17);
                puVar19[1] = 0;
                puVar19[2] = 0;
                *puVar19 = 0;
                uStack_118 = (undefined7)CONCAT44(uStack_ac,uStack_b0);
                uStack_110 = uStack_a8;
                uStack_111 = uStack_ac._3_1_;
                if ((char)bStack_139 < '\0') {
                  __ZdlPv(CONCAT44(uStack_14c,iStack_150));
                }
                if ((char)bStack_121 < '\0') {
                  __ZdlPv(CONCAT44(uStack_134,uStack_138));
                }
                uStack_108 = CONCAT44(uStack_108._4_4_,iVar32 + uStack_108._4_4_ * uVar24);
                FUN_10923dc88(plVar14,&uStack_120);
                uVar24 = uVar24 + 1;
              } while (uVar24 < *(uint *)(ppppppplVar22 + uVar33 * 6 + 5));
            }
            plVar34 = (long *)(extraout_x8[0x17] + uVar33 * 0x14);
            iVar11 = *(int *)((long)ppppppplVar22 + uVar33 * 0x30 + 0x24);
            *plVar34 = (long)ppppppplVar22[uVar33 * 6 + 4];
            iVar35 = *(int *)(ppppppplVar22 + uVar33 * 6 + 5);
            if (iVar35 < 2) {
              iVar35 = 1;
            }
            *(int *)(plVar34 + 1) = iVar35;
            *(int *)((long)plVar34 + 0xc) = iVar32;
            FUN_10926f1c8();
            *(int *)(plVar34 + 2) = iVar11 * iVar35;
            iVar32 = iVar11 * iVar35 + iVar32;
            uVar33 = uVar33 + 1;
          } while (uVar33 < (ulong)((CONCAT44(uStack_224,iStack_228) - (long)uStack_230 >> 4) *
                                   -0x5555555555555555));
          uVar24 = iVar32 + 0xfU & 0xfffffff0;
        }
        *(uint *)((long)extraout_x8 + 0x94) = uVar24;
        if (*(char *)((long)extraout_x8 + 0x8f) < '\0') {
          __ZdlPv(extraout_x8[0xf]);
        }
        extraout_x8[0xf] = 0;
        *(undefined1 *)((long)extraout_x8 + 0x8f) = 0;
        *(undefined4 *)(extraout_x8 + 0x12) = 0;
      }
      uStack_120 = (long *******)&uStack_230;
      func_0x000109265474(&uStack_120);
      uVar25 = 2;
LAB_109270878:
      *(undefined4 *)(extraout_x8 + 0x20) = uVar25;
    }
    puVar29 = (undefined4 *)extraout_x8[1];
    for (puVar36 = (undefined4 *)*extraout_x8; puVar36 != puVar29; puVar36 = puVar36 + 0xc) {
      iVar32 = puVar36[9];
      if ((iVar32 - 0x8dc1U < 0x17 && (1 << (ulong)(iVar32 - 0x8dc1U & 0x1f) & 0x4e4e19U) != 0) ||
         (iVar32 - 0x8b5eU < 6 && iVar32 - 0x8b5eU != 3 || iVar32 == 0x8d66)) {
        if (1 < (int)puVar36[10]) goto LAB_109271014;
        uStack_120._4_4_ = (undefined4)((ulong)uStack_120 >> 0x20);
        uStack_120._0_4_ = 0xffffffff;
        func_0x000107c31940(&uStack_118,"");
        uStack_100 = 0xffffffffffffffff;
        pppppplStack_f8 = (long ******)((ulong)pppppplStack_f8 & 0xffffffff00000000);
        uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,*puVar36);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_118,puVar36 + 2);
        uStack_100 = CONCAT44(uStack_100._4_4_,puVar36[8]);
        uVar25 = puVar36[9];
        pppppplStack_f8 = (long ******)CONCAT44(pppppplStack_f8._4_4_,uVar25);
        puVar6 = (undefined4 *)extraout_x8[7];
        if (puVar6 < (undefined4 *)extraout_x8[8]) {
          *puVar6 = (undefined4)uStack_120;
          *(undefined8 *)(puVar6 + 6) = uStack_108;
          *(ulong *)(puVar6 + 4) = CONCAT17(uStack_109,uStack_110);
          *(ulong *)(puVar6 + 2) = CONCAT17(uStack_111,uStack_118);
          puVar6[10] = uVar25;
          *(ulong *)(puVar6 + 8) = uStack_100;
          plVar14 = (long *)(puVar6 + 0xc);
        }
        else {
          plVar14 = plVar15;
          FUN_109279c38(plVar15,&uStack_120);
        }
        extraout_x8[7] = (long)plVar14;
      }
    }
    lVar27 = extraout_x8[6];
    lVar30 = extraout_x8[7];
    lVar26 = 0;
    if (lVar30 != lVar27) {
      lVar26 = LZCOUNT((lVar30 - lVar27 >> 4) * -0x5555555555555555) * -2 + 0x7e;
    }
    FUN_109279e78(lVar27,lVar30,lVar26,1);
    uStack_230 = (long *******)((ulong)uStack_230 & 0xffffffff00000000);
    _glGetIntegerv(0x8b8d,&uStack_230);
    _glUseProgram(iVar21);
    uStack_118 = SUB87(&uStack_230,0);
    uStack_111 = (undefined1)((ulong)&uStack_230 >> 0x38);
    lVar26 = extraout_x8[6];
    uStack_120 = ppppppplVar12;
    if (extraout_x8[7] != lVar26) {
      lVar27 = 0;
      uVar33 = 0;
      do {
        _glUniform1i(*(undefined4 *)(lVar26 + lVar27 + 0x20),uVar33);
        lVar26 = extraout_x8[6];
        *(int *)(lVar26 + lVar27 + 0x24) = (int)uVar33;
        uVar33 = uVar33 + 1;
        lVar27 = lVar27 + 0x30;
      } while (uVar33 < (ulong)((extraout_x8[7] - lVar26 >> 4) * -0x5555555555555555));
    }
    func_0x000109279bbc(&uStack_120);
    puVar29 = (undefined4 *)extraout_x8[1];
    for (puVar36 = (undefined4 *)*extraout_x8; puVar36 != puVar29; puVar36 = puVar36 + 0xc) {
      if (puVar36[9] - 0x904d < 0x1e &&
          (1 << (ulong)(puVar36[9] - 0x904d & 0x1f) & 0x32c658cbU) != 0) {
        if (1 < (int)puVar36[10]) goto LAB_109271014;
        uStack_230._4_4_ = (undefined4)((ulong)uStack_230 >> 0x20);
        uStack_230 = (long *******)CONCAT44(uStack_230._4_4_,0xffffffff);
        _glGetUniformiv(iVar21,puVar36[8],&uStack_230);
        uStack_120._0_4_ = 0xffffffff;
        func_0x000107c31940(&uStack_118,"");
        uStack_100 = 0xffffffffffffffff;
        uStack_120 = (long *******)CONCAT44(uStack_120._4_4_,*puVar36);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_118,puVar36 + 2);
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_230);
        puVar6 = (undefined4 *)extraout_x8[4];
        if (puVar6 < (undefined4 *)extraout_x8[5]) {
          *puVar6 = (undefined4)uStack_120;
          *(undefined8 *)(puVar6 + 6) = uStack_108;
          *(ulong *)(puVar6 + 4) = CONCAT17(uStack_109,uStack_110);
          *(ulong *)(puVar6 + 2) = CONCAT17(uStack_111,uStack_118);
          *(ulong *)(puVar6 + 8) = uStack_100;
          plVar15 = (long *)(puVar6 + 10);
        }
        else {
          plVar15 = extraout_x8 + 3;
          FUN_10927b130(plVar15,&uStack_120);
        }
        extraout_x8[4] = (long)plVar15;
      }
    }
    lVar27 = extraout_x8[3];
    lVar30 = extraout_x8[4];
    lVar26 = 0;
    if (lVar30 != lVar27) {
      lVar26 = LZCOUNT((lVar30 - lVar27 >> 3) * -0x3333333333333333) * -2 + 0x7e;
    }
    FUN_10927b360(lVar27,lVar30,lVar26,1);
    lVar26 = extraout_x8[4] - extraout_x8[3];
    if (lVar26 != 0) {
      lVar27 = 0;
      puVar36 = (undefined4 *)(extraout_x8[3] + 0x24);
      do {
        *puVar36 = (int)lVar27;
        lVar27 = lVar27 + 1;
        puVar36 = puVar36 + 10;
      } while ((lVar26 >> 3) * -0x3333333333333333 - lVar27 != 0);
    }
    if (ppppppplVar20 != (long *******)0x0) {
      __ZdlPv();
    }
LAB_109270bfc:
    piVar1 = (int *)(param_5 + 8);
    if (*(int *)(param_5 + 0x2e8) == 2) {
      if (param_3 == 0) {
        if ((*(byte *)(param_5 + 0x2e0) & 1) == 0) {
          FUN_109243bf8(&UNK_10f562882);
          goto LAB_109271060;
        }
        lVar26 = *(long *)(param_5 + 0x2c8);
        lVar27 = *(long *)(param_5 + 0x2d0);
        if (lVar26 != lVar27) {
          lVar30 = *(long *)(param_5 + 0x208);
          do {
            piVar38 = piVar1;
            if (lVar30 != 0) {
              piVar37 = piVar1;
              do {
                piVar38 = piVar37;
                if (*piVar37 == *(int *)(lVar26 + 0x18)) break;
                piVar37 = piVar37 + 4;
                piVar38 = piVar1 + lVar30 * 4;
              } while (piVar37 != piVar1 + lVar30 * 4);
            }
            func_0x000107c31940(&uStack_120,"");
            uStack_108 = 0xffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            ppppppplVar20 = (long *******)(param_2 & 0xffffffff);
            uStack_108._4_4_ = piVar38[3];
            _glGetAttribLocation(ppppppplVar20,&uStack_120);
            uStack_108 = CONCAT44(uStack_108._4_4_,(int)ppppppplVar20);
            if ((int)ppppppplVar20 != -1) {
              uVar33 = extraout_x8[0x1e];
              if (uVar33 < (ulong)extraout_x8[0x1f]) {
                FUN_109280a24(extraout_x8 + 0x1d,&uStack_120);
                ppppppplVar20 = (long *******)(uVar33 + 0x20);
              }
              else {
                ppppppplVar20 = (long *******)(extraout_x8 + 0x1d);
                FUN_109280a90(ppppppplVar20,&uStack_120);
              }
              extraout_x8[0x1e] = (long)ppppppplVar20;
            }
            lVar26 = lVar26 + 0x20;
          } while (lVar26 != lVar27);
        }
      }
      else {
        uStack_138 = 0;
        _glGetProgramiv(iVar21,0x8b8a,&uStack_138);
        lVar26 = (long)(int)uStack_138;
        uStack_138 = (uint)(lVar26 + 1);
        func_0x000104c59120(&uStack_230,lVar26 + 1,0);
        iStack_150 = 0;
        ppppppplVar20 = (long *******)(param_2 & 0xffffffff);
        _glGetProgramiv(ppppppplVar20,0x8b89,&iStack_150);
        if (0 < iStack_150) {
          iVar32 = 0;
          do {
            func_0x000107c31940(&uStack_120,"");
            uStack_108 = 0xffffffff;
            uStack_b0 = 0;
            iStack_180 = 0;
            ppppppplStack_1a0 = (long *******)((ulong)ppppppplStack_1a0 & 0xffffffff00000000);
            ppppppplVar12 = uStack_230;
            if (-1 < (char)bStack_219) {
              ppppppplVar12 = (long *******)&uStack_230;
            }
            _glGetActiveAttrib(iVar21,iVar32,uStack_138,&ppppppplStack_1a0,&uStack_b0,&iStack_180,
                               ppppppplVar12);
            ppppppplVar12 = uStack_230;
            if (-1 < (char)bStack_219) {
              ppppppplVar12 = (long *******)&uStack_230;
            }
            func_0x000107c31940(&uStack_e0,ppppppplVar12);
            uStack_118 = SUB87(ppppppplStack_d8,0);
            uStack_111 = (undefined1)((ulong)ppppppplStack_d8 >> 0x38);
            uStack_120 = uStack_e0;
            uStack_110 = (undefined7)uStack_d0;
            uStack_109 = (undefined1)((ulong)uStack_d0 >> 0x38);
            if (iStack_180 < 0x8b54) {
              if (0x8b4f < iStack_180) {
                if (iStack_180 < 0x8b52) {
                  if (iStack_180 == 0x8b50) goto LAB_109270e20;
                  if (iStack_180 == 0x8b51) goto LAB_109270ddc;
                }
                else {
                  if (iStack_180 == 0x8b52) goto LAB_109270e28;
                  if (iStack_180 == 0x8b53) {
                    uVar25 = 0x21;
                    goto LAB_109270e4c;
                  }
                }
LAB_10927103c:
                FUN_109243bf8(&UNK_10f55e5d5);
                goto LAB_109271060;
              }
              if (iStack_180 == 0x1404) {
                uVar25 = 0x20;
              }
              else if (iStack_180 == 0x1405) {
                uVar25 = 0x24;
              }
              else {
                if (iStack_180 != 0x1406) goto LAB_10927103c;
                uVar25 = 0x1c;
              }
            }
            else if (iStack_180 < 0x8b5c) {
              if (iStack_180 < 0x8b5a) {
                if (iStack_180 == 0x8b54) {
                  uVar25 = 0x22;
                }
                else {
                  if (iStack_180 != 0x8b55) goto LAB_10927103c;
                  uVar25 = 0x23;
                }
              }
              else if (iStack_180 == 0x8b5a) {
LAB_109270e20:
                uVar25 = 0x1d;
              }
              else {
                if (iStack_180 != 0x8b5b) goto LAB_10927103c;
LAB_109270ddc:
                uVar25 = 0x1e;
              }
            }
            else if (iStack_180 < 0x8dc7) {
              if (iStack_180 == 0x8b5c) {
LAB_109270e28:
                uVar25 = 0x1f;
              }
              else {
                if (iStack_180 != 0x8dc6) goto LAB_10927103c;
                uVar25 = 0x25;
              }
            }
            else if (iStack_180 == 0x8dc7) {
              uVar25 = 0x26;
            }
            else {
              if (iStack_180 != 0x8dc8) goto LAB_10927103c;
              uVar25 = 0x27;
            }
LAB_109270e4c:
            uStack_108 = CONCAT44(uVar25,(undefined4)uStack_108);
            ppppppplVar20 = (long *******)&uStack_120;
            FUN_109287bb0();
            if (((ulong)ppppppplVar20 & 1) == 0) {
              iVar35 = iVar21;
              _glGetAttribLocation(param_2 & 0xffffffff,&uStack_120);
              uStack_108 = CONCAT44(uStack_108._4_4_,iVar35);
              uVar33 = extraout_x8[0x1e];
              if (uVar33 < (ulong)extraout_x8[0x1f]) {
                FUN_109280a24(extraout_x8 + 0x1d,&uStack_120);
                ppppppplVar20 = (long *******)(uVar33 + 0x20);
              }
              else {
                ppppppplVar20 = (long *******)(extraout_x8 + 0x1d);
                FUN_109280a90(ppppppplVar20,&uStack_120);
              }
              extraout_x8[0x1e] = (long)ppppppplVar20;
            }
            iVar32 = iVar32 + 1;
          } while (iVar32 < iStack_150);
        }
        if ((char)bStack_219 < '\0') {
          ppppppplVar20 = uStack_230;
          __ZdlPv(uStack_230);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
      return ppppppplVar20;
    }
    ___stack_chk_fail();
  }
  FUN_109243bf8(&UNK_10f5627f1);
LAB_109271060:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x109271064);
  (*pcVar8)();
LAB_109271014:
  FUN_109243bf8(&UNK_10f562aa6);
  goto LAB_109271060;
}



/* Entry: 10926f2cc; end: 10927144f;  */

/* WARNING: Removing unreachable block (ram,0x000109270eb8) */
/* WARNING: Removing unreachable block (ram,0x000109270508) */
/* WARNING: Removing unreachable block (ram,0x0001092703d0) */
/* WARNING: Removing unreachable block (ram,0x00010926f7e8) */
/* WARNING: Removing unreachable block (ram,0x000109270b78) */
/* WARNING: Removing unreachable block (ram,0x0001092709a0) */
/* WARNING: Removing unreachable block (ram,0x00010927074c) */
/* WARNING: Removing unreachable block (ram,0x00010926f594) */
/* WARNING: Removing unreachable block (ram,0x000109270054) */
/* WARNING: Removing unreachable block (ram,0x000109270974) */
/* WARNING: Removing unreachable block (ram,0x000109270b54) */
/* WARNING: Removing unreachable block (ram,0x00010926f7c0) */
/* WARNING: Removing unreachable block (ram,0x00010926f97c) */
/* WARNING: Removing unreachable block (ram,0x000109270fc4) */
/* WARNING: Removing unreachable block (ram,0x000109270528) */
/* WARNING: Removing unreachable block (ram,0x000109270774) */
/* WARNING: Removing unreachable block (ram,0x0001092703f4) */
/* WARNING: Removing unreachable block (ram,0x000109270cf8) */
/* WARNING: Removing unreachable block (ram,0x00010926f56c) */
/* WARNING: Removing unreachable block (ram,0x00010926f4a4) */
/* WARNING: Removing unreachable block (ram,0x000109270804) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10926f2cc(long *param_1,undefined8 ******param_2,ulong param_3,int param_4,ulong param_5,
                  long param_6)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined8 ******ppppppuVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *******pppppppuVar13;
  undefined8 ******ppppppuVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined4 *puVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  ulong uVar28;
  long *plVar29;
  int iVar30;
  undefined4 *puVar31;
  int *piVar32;
  int *piVar33;
  undefined8 uStack_220;
  int iStack_218;
  undefined4 uStack_214;
  undefined7 uStack_210;
  byte bStack_209;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 uStack_1f0;
  undefined8 *******pppppppuStack_1e0;
  ulong uStack_1d8;
  byte bStack_1c9;
  undefined8 *******apppppppuStack_1c8 [2];
  char cStack_1b1;
  undefined8 ******ppppppuStack_1b0;
  undefined8 ******ppppppuStack_1a8;
  undefined8 ******ppppppuStack_1a0;
  undefined8 *******pppppppuStack_190;
  ulong uStack_188;
  ulong uStack_180;
  int iStack_170;
  undefined4 uStack_16c;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  ulong uStack_138;
  byte bStack_129;
  uint uStack_128;
  undefined4 uStack_124;
  ulong uStack_120;
  byte bStack_111;
  undefined8 uStack_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 ******ppppppuStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 ******ppppppuStack_c8;
  long lStack_c0;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_98;
  undefined1 uStack_91;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar12 = param_1 + 6;
  param_1[7] = 0;
  *plVar12 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x13) = 1;
  plVar11 = param_1 + 0x14;
  param_1[0x15] = 0;
  *plVar11 = 0;
  plVar29 = param_1 + 0x1a;
  param_1[0x1b] = 0;
  *plVar29 = 0;
  param_1[0x12] = 0xffffffff;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar16 = (int)param_3;
  if (param_4 == 0) {
    uStack_220 = (undefined8 *******)((ulong)uStack_220 & 0xffffffffffffff00);
    uStack_1f0 = 0;
    if (*(int *)(param_6 + 0x2e8) == 2) {
      if (*(char *)(param_6 + 0x2e0) != '\0') {
        uStack_220 = (undefined8 *******)0x0;
        iStack_218 = 0;
        uStack_214 = 0;
        uStack_210 = 0;
        bStack_209 = 0;
        FUN_109249f9c(&uStack_220,*(long *)(param_6 + 0x298),*(long *)(param_6 + 0x2a0),
                      (*(long *)(param_6 + 0x2a0) - *(long *)(param_6 + 0x298) >> 3) *
                      -0x3333333333333333);
        uStack_208 = 0;
        uStack_200 = 0;
        uStack_1f8 = 0;
        FUN_10924a020(&uStack_208,*(long *)(param_6 + 0x2b0),*(long *)(param_6 + 0x2b8),
                      *(long *)(param_6 + 0x2b8) - *(long *)(param_6 + 0x2b0) >> 4);
        goto LAB_10926f6f4;
      }
    }
    else if ((*(int *)(param_6 + 0x2e8) == 1) && (*(char *)(param_6 + 0x38) != '\0')) {
      FUN_109249f14(&uStack_220,param_6 + 8);
LAB_10926f6f4:
      uStack_1f0 = 1;
      pppppppuVar13 = (undefined8 *******)CONCAT44(uStack_214,iStack_218);
      for (pppppppuVar18 = uStack_220; pppppppuVar18 != pppppppuVar13;
          pppppppuVar18 = pppppppuVar18 + 5) {
        if (*(int *)(pppppppuVar18 + 3) == 8 || *(int *)(pppppppuVar18 + 3) == 2) {
          pppppppuVar17 = pppppppuVar18;
          if (*(char *)((long)pppppppuVar18 + 0x17) < '\0') {
            pppppppuVar17 = (undefined8 *******)*pppppppuVar18;
          }
          iVar27 = iVar16;
          _glGetUniformLocation(param_3 & 0xffffffff,pppppppuVar17);
          if (iVar27 != -1) {
            uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,0xffffffff);
            func_0x000107c31940(&uStack_108,"");
            uStack_f0 = 0xffffffffffffffff;
            ppppppuStack_e8 = (undefined8 ******)((ulong)ppppppuStack_e8 & 0xffffffff00000000);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_108,pppppppuVar18);
            uStack_f0 = CONCAT44(uStack_f0._4_4_,iVar27);
            ppppppuStack_e8 = (undefined8 ******)((ulong)ppppppuStack_e8 & 0xffffffff00000000);
            puVar31 = (undefined4 *)param_1[7];
            if (puVar31 < (undefined4 *)param_1[8]) {
              *puVar31 = (undefined4)uStack_110;
              *(long *)(puVar31 + 6) = uStack_f8;
              *(ulong *)(puVar31 + 4) = CONCAT17(uStack_f9,uStack_100);
              *(ulong *)(puVar31 + 2) = CONCAT17(uStack_101,uStack_108);
              puVar31[10] = 0;
              *(ulong *)(puVar31 + 8) = uStack_f0;
              plVar11 = (long *)(puVar31 + 0xc);
            }
            else {
              plVar11 = plVar12;
              FUN_109279c38(plVar12,&uStack_110);
            }
            param_1[7] = (long)plVar11;
          }
        }
      }
      lVar22 = param_1[6];
      lVar25 = param_1[7];
      lVar21 = 0;
      if (lVar25 != lVar22) {
        lVar21 = LZCOUNT((lVar25 - lVar22 >> 4) * -0x5555555555555555) * -2 + 0x7e;
      }
      FUN_10927c580(lVar22,lVar25,lVar21,1);
      uStack_d0 = (undefined8 ******)((ulong)uStack_d0._4_4_ << 0x20);
      _glGetIntegerv(0x8b8d,&uStack_d0);
      _glUseProgram(iVar16);
      uStack_108 = SUB87(&uStack_d0,0);
      uStack_101 = (undefined1)((ulong)&uStack_d0 >> 0x38);
      lVar21 = param_1[6];
      uStack_110 = param_2;
      if (param_1[7] != lVar21) {
        lVar22 = 0;
        uVar28 = 0;
        do {
          _glUniform1i(*(undefined4 *)(lVar21 + lVar22 + 0x20),uVar28);
          lVar21 = param_1[6];
          *(int *)(lVar21 + lVar22 + 0x24) = (int)uVar28;
          uVar28 = uVar28 + 1;
          lVar22 = lVar22 + 0x30;
        } while (uVar28 < (ulong)((param_1[7] - lVar21 >> 4) * -0x5555555555555555));
      }
      FUN_10927c504(&uStack_110);
      if ((*(byte *)((long)param_2 + 0x2c) & 1) == 0) {
        lVar21 = param_1[9];
        lVar22 = param_1[10];
LAB_109270124:
        *(undefined4 *)(param_1 + 0x20) = 0;
        if (lVar21 == lVar22) goto LAB_109270264;
      }
      else {
        pppppppuVar18 = (undefined8 *******)CONCAT44(uStack_214,iStack_218);
        if (uStack_220 != pppppppuVar18) {
          pppppppuVar13 = uStack_220;
          do {
            if (*(int *)(pppppppuVar13 + 3) == 4) {
              pppppppuVar17 = pppppppuVar13;
              if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
                pppppppuVar17 = (undefined8 *******)*pppppppuVar13;
              }
              iVar27 = iVar16;
              (*(code *)param_2[0xed])(param_3 & 0xffffffff,pppppppuVar17);
              if (iVar27 != -1) {
                uStack_100 = 0;
                uStack_f9 = 0;
                uStack_108 = 0;
                uStack_101 = 0;
                uStack_110 = (undefined8 ******)0x0;
                uStack_f8 = 0xffffffff;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
                lStack_e0 = 0;
                lStack_d8 = 0;
                ppppppuStack_e8 = (undefined8 ******)0x0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (&uStack_110,pppppppuVar13);
                uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar27);
                uVar28 = param_1[10];
                if (uVar28 < (ulong)param_1[0xb]) {
                  func_0x000107c2abdc(uVar28,&uStack_110);
                  plVar12 = (long *)(uVar28 + 0x40);
                }
                else {
                  plVar12 = param_1 + 9;
                  FUN_10923de88(plVar12,&uStack_110);
                }
                param_1[10] = (long)plVar12;
                uStack_d0 = &ppppppuStack_e8;
                func_0x00010922df48(&uStack_d0);
              }
            }
            pppppppuVar13 = pppppppuVar13 + 5;
          } while (pppppppuVar13 != pppppppuVar18);
        }
        lVar22 = param_1[9];
        lVar25 = param_1[10];
        lVar21 = 0;
        if (lVar25 != lVar22) {
          lVar21 = LZCOUNT(lVar25 - lVar22 >> 6) * -2 + 0x7e;
        }
        FUN_10927d650(lVar22,lVar25,lVar21,1);
        lVar21 = param_1[9];
        if (param_1[10] != lVar21) {
          uVar28 = 0;
          lVar25 = 0x18;
          do {
            (*(code *)param_2[0xf0])(iVar16,*(undefined4 *)(lVar21 + lVar25),uVar28);
            lVar21 = param_1[9];
            *(int *)(lVar21 + lVar25) = (int)uVar28;
            uVar28 = uVar28 + 1;
            lVar22 = param_1[10];
            lVar25 = lVar25 + 0x40;
          } while (uVar28 < (ulong)(lVar22 - lVar21 >> 6));
          goto LAB_109270124;
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
LAB_109270264:
        uStack_d0 = (undefined8 ******)((ulong)uStack_d0 & 0xffffffff00000000);
        _glGetProgramiv(iVar16,0x8b87,&uStack_d0);
        lVar21 = (long)(int)uStack_d0;
        uStack_d0 = (undefined8 ******)CONCAT44(uStack_d0._4_4_,(int)(lVar21 + 1));
        uStack_128 = uStack_128 & 0xffffff00;
        FUN_109274888(&uStack_110,lVar21 + 1,&uStack_128);
        ppppppuVar5 = uStack_110;
        FUN_109271450(iVar16,param_1,(ulong)uStack_d0 & 0xffffffff,uStack_110);
        FUN_109271660(param_1);
        *(undefined4 *)(param_1 + 0x20) = 1;
        if (ppppppuVar5 != (undefined8 ******)0x0) {
          __ZdlPv(ppppppuVar5);
        }
      }
      if (*(char *)((long)param_2 + 0x2d) == '\x01') {
        pppppppuVar13 = (undefined8 *******)CONCAT44(uStack_214,iStack_218);
        for (pppppppuVar18 = uStack_220; pppppppuVar18 != pppppppuVar13;
            pppppppuVar18 = pppppppuVar18 + 5) {
          if (*(int *)(pppppppuVar18 + 3) == 5) {
            uStack_110._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
            uStack_110._0_4_ = 0xffffffff;
            func_0x000107c31940(&uStack_108,"");
            uStack_f0 = 0xffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_108,pppppppuVar18);
            uStack_f0 = uStack_f0 & 0xffffffff;
            pppppppuVar17 = pppppppuVar18;
            if (*(char *)((long)pppppppuVar18 + 0x17) < '\0') {
              pppppppuVar17 = (undefined8 *******)*pppppppuVar18;
            }
            uVar28 = param_3 & 0xffffffff;
            (*(code *)param_2[0xf9])(uVar28,0x92e6,pppppppuVar17);
            uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,(int)uVar28);
            if ((int)uVar28 != -1) {
              uStack_d0 = (undefined8 ******)CONCAT44(uStack_d0._4_4_,0x9302);
              (*(code *)param_2[0xf6])(iVar16,0x92e6,uVar28,1,&uStack_d0,1,0,&uStack_f0);
              puVar31 = (undefined4 *)param_1[0x1b];
              if (puVar31 < (undefined4 *)param_1[0x1c]) {
                *puVar31 = (undefined4)uStack_110;
                *(long *)(puVar31 + 6) = uStack_f8;
                *(ulong *)(puVar31 + 4) = CONCAT17(uStack_f9,uStack_100);
                *(ulong *)(puVar31 + 2) = CONCAT17(uStack_101,uStack_108);
                *(ulong *)(puVar31 + 8) = uStack_f0;
                plVar12 = (long *)(puVar31 + 10);
              }
              else {
                plVar12 = plVar29;
                FUN_109274be4(plVar29,&uStack_110);
              }
              param_1[0x1b] = (long)plVar12;
            }
          }
        }
        lVar22 = param_1[0x1a];
        lVar25 = param_1[0x1b];
        lVar21 = 0;
        if (lVar25 != lVar22) {
          lVar21 = LZCOUNT((lVar25 - lVar22 >> 3) * -0x3333333333333333) * -2 + 0x7e;
        }
        func_0x00010927ea1c(lVar22,lVar25,lVar21,1);
      }
      pppppppuVar13 = (undefined8 *******)CONCAT44(uStack_214,iStack_218);
      for (pppppppuVar18 = uStack_220; pppppppuVar18 != pppppppuVar13;
          pppppppuVar18 = pppppppuVar18 + 5) {
        if (*(int *)(pppppppuVar18 + 3) == 3) {
          pppppppuVar17 = pppppppuVar18;
          if (*(char *)((long)pppppppuVar18 + 0x17) < '\0') {
            pppppppuVar17 = (undefined8 *******)*pppppppuVar18;
          }
          uVar28 = param_3 & 0xffffffff;
          _glGetUniformLocation(uVar28,pppppppuVar17);
          if ((int)uVar28 != -1) {
            uStack_d0 = (undefined8 ******)CONCAT44(uStack_d0._4_4_,0xffffffff);
            _glGetUniformiv(iVar16,uVar28,&uStack_d0);
            uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,0xffffffff);
            func_0x000107c31940(&uStack_108,"");
            uStack_f0 = 0xffffffffffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_108,pppppppuVar18);
            uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_d0);
            puVar31 = (undefined4 *)param_1[4];
            if (puVar31 < (undefined4 *)param_1[5]) {
              *puVar31 = (undefined4)uStack_110;
              *(long *)(puVar31 + 6) = uStack_f8;
              *(ulong *)(puVar31 + 4) = CONCAT17(uStack_f9,uStack_100);
              *(ulong *)(puVar31 + 2) = CONCAT17(uStack_101,uStack_108);
              *(ulong *)(puVar31 + 8) = uStack_f0;
              plVar12 = (long *)(puVar31 + 10);
            }
            else {
              plVar12 = param_1 + 3;
              FUN_10927b130(plVar12,&uStack_110);
            }
            param_1[4] = (long)plVar12;
          }
        }
      }
      lVar22 = param_1[3];
      lVar25 = param_1[4];
      lVar21 = 0;
      if (lVar25 != lVar22) {
        lVar21 = LZCOUNT((lVar25 - lVar22 >> 3) * -0x3333333333333333) * -2 + 0x7e;
      }
      FUN_10927fa20(lVar22,lVar25,lVar21,1);
      lVar21 = param_1[4] - param_1[3];
      if (lVar21 != 0) {
        lVar22 = 0;
        puVar31 = (undefined4 *)(param_1[3] + 0x24);
        do {
          *puVar31 = (int)lVar22;
          lVar22 = lVar22 + 1;
          puVar31 = puVar31 + 10;
        } while ((lVar21 >> 3) * -0x3333333333333333 - lVar22 != 0);
      }
      func_0x00010922e088(&uStack_220);
      goto LAB_109270bfc;
    }
  }
  else {
    uStack_220 = (undefined8 *******)((ulong)uStack_220 & 0xffffffff00000000);
    _glGetProgramiv(param_3,0x8b87,&uStack_220);
    lVar21 = (long)(int)uStack_220;
    uStack_220 = (undefined8 *******)CONCAT44(uStack_220._4_4_,(int)(lVar21 + 1));
    uStack_d0 = (undefined8 ******)((ulong)uStack_d0 & 0xffffffffffffff00);
    FUN_109274888(&uStack_110,lVar21 + 1,&uStack_d0);
    ppppppuVar5 = uStack_110;
    iVar27 = (int)uStack_220;
    FUN_109271450(param_3 & 0xffffffff,param_1,(ulong)uStack_220 & 0xffffffff);
    if (*(char *)((long)param_2 + 0x2d) == '\x01') {
      uStack_128 = 0;
      (*(code *)param_2[0xf7])(param_3 & 0xffffffff,0x92e6,0x92f6,&uStack_128);
      uStack_110 = (undefined8 ******)((ulong)uStack_110 & 0xffffffffffffff00);
      FUN_109274888(&uStack_220,(long)(int)uStack_128 + 1,&uStack_110);
      iStack_140 = 0;
      (*(code *)param_2[0xf7])(param_3 & 0xffffffff,0x92e6,0x92f5,&iStack_140);
      if (0 < iStack_140) {
        iVar30 = 0;
        do {
          uStack_110._0_4_ = 0xffffffff;
          func_0x000107c31940(&uStack_108,"");
          uStack_f0 = 0xffffffff;
          uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,iVar30);
          (*(code *)param_2[0xf8])(iVar16,0x92e6,iVar30,iStack_218 - (int)uStack_220,&uStack_128);
          func_0x000107c31940(&uStack_d0,uStack_220);
          uStack_100 = SUB87(ppppppuStack_c8,0);
          uStack_f9 = (undefined1)((ulong)ppppppuStack_c8 >> 0x38);
          uStack_108 = SUB87(uStack_d0,0);
          uStack_101 = (undefined1)((ulong)uStack_d0 >> 0x38);
          uStack_f8 = lStack_c0;
          uVar28 = 0;
          FUN_109287bb0();
          if ((uVar28 & 1) == 0) {
            uStack_d0 = (undefined8 ******)CONCAT44(uStack_d0._4_4_,0x9302);
            (*(code *)param_2[0xf6])
                      (iVar16,0x92e6,(ulong)uStack_110 & 0xffffffff,1,&uStack_d0,1,0,&uStack_f0);
            uStack_a0 = 0x9303;
            (*(code *)param_2[0xf6])
                      (iVar16,0x92e6,(ulong)uStack_110 & 0xffffffff,1,&uStack_a0,1,0,
                       (long)&uStack_f0 + 4);
            puVar31 = (undefined4 *)param_1[0x1b];
            if (puVar31 < (undefined4 *)param_1[0x1c]) {
              *puVar31 = (undefined4)uStack_110;
              *(long *)(puVar31 + 6) = uStack_f8;
              *(ulong *)(puVar31 + 4) = CONCAT17(uStack_f9,uStack_100);
              *(ulong *)(puVar31 + 2) = CONCAT17(uStack_101,uStack_108);
              *(ulong *)(puVar31 + 8) = uStack_f0;
              plVar10 = (long *)(puVar31 + 10);
            }
            else {
              plVar10 = plVar29;
              FUN_109274be4(plVar29,&uStack_110);
            }
            param_1[0x1b] = (long)plVar10;
          }
          iVar30 = iVar30 + 1;
        } while (iVar30 < iStack_140);
      }
      lVar22 = param_1[0x1a];
      lVar25 = param_1[0x1b];
      lVar21 = 0;
      if (lVar25 != lVar22) {
        lVar21 = LZCOUNT((lVar25 - lVar22 >> 3) * -0x3333333333333333) * -2 + 0x7e;
      }
      FUN_109274e14(lVar22,lVar25,lVar21,1);
      if (uStack_220 != (undefined8 *******)0x0) {
        iStack_218 = (int)uStack_220;
        uStack_214 = (undefined4)((ulong)uStack_220 >> 0x20);
        __ZdlPv();
      }
    }
    if ((param_5 & 1) == 0) {
      if (*(char *)((long)param_2 + 0x2c) == '\x01') {
        iStack_144 = 0;
        _glGetProgramiv(iVar16,0x8a35,&iStack_144);
        iVar30 = iStack_144;
        iStack_148 = 0;
        _glGetProgramiv(iVar16,0x8a36,&iStack_148);
        if (iVar30 <= iVar27) {
          iVar30 = iVar27;
        }
        uStack_110 = (undefined8 ******)((ulong)uStack_110 & 0xffffffffffffff00);
        FUN_109274888(&uStack_d0,(long)(iVar30 + 1),&uStack_110);
        if (0 < iStack_148) {
          iVar27 = 0;
          do {
            uStack_14c = 0;
            (*(code *)param_2[0xec])(iVar16,iVar27,iVar30 + 1,&uStack_14c,uStack_d0);
            func_0x000107c31940(&uStack_128,uStack_d0);
            uVar28 = 0;
            FUN_109287bb0();
            if ((uVar28 & 1) == 0) {
              uStack_150 = 0;
              (*(code *)param_2[0xee])(iVar16,iVar27,0x8a40,&uStack_150);
              uStack_110 = (undefined8 ******)0x0;
              uStack_108 = 0;
              uStack_101 = 0;
              uStack_100 = 0;
              uStack_f9 = 0;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,1);
              lStack_e0 = 0;
              lStack_d8 = 0;
              ppppppuStack_e8 = (undefined8 ******)0x0;
              uStack_f8._0_4_ = 0xffffffff;
              uStack_f8._4_4_ = uStack_150;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                        (&uStack_110,&uStack_128);
              uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar27);
              (*(code *)param_2[0xee])(iVar16,iVar27,0x8a42,&iStack_154);
              FUN_10925b8c4(&iStack_140,(long)iStack_154);
              (*(code *)param_2[0xee])(iVar16,iVar27,0x8a43,CONCAT44(uStack_13c,iStack_140));
              FUN_10925b8c4(&uStack_a0,(long)(uStack_138 - CONCAT44(uStack_13c,iStack_140)) >> 2);
              (*(code *)param_2[0xef])
                        (iVar16,uStack_138 - CONCAT44(uStack_13c,iStack_140) >> 2,
                         CONCAT44(uStack_13c,iStack_140),0x8a3b,CONCAT44(uStack_9c,uStack_a0));
              FUN_10925b8c4(&iStack_170,(long)(uStack_138 - CONCAT44(uStack_13c,iStack_140)) >> 2);
              (*(code *)param_2[0xef])
                        (iVar16,uStack_138 - CONCAT44(uStack_13c,iStack_140) >> 2,
                         CONCAT44(uStack_13c,iStack_140),0x8a3c,CONCAT44(uStack_16c,iStack_170));
              uVar28 = CONCAT44(uStack_13c,iStack_140);
              if (uStack_138 != uVar28) {
                uVar23 = 0;
                uVar26 = uStack_138;
                do {
                  uVar19 = *(uint *)(uVar28 + uVar23 * 4);
                  if (-1 < (int)uVar19) {
                    lVar21 = *param_1 + (ulong)uVar19 * 0x30;
                    iVar9 = *(int *)(lVar21 + 0x24);
                    iVar2 = *(int *)(lVar21 + 0x28);
                    if (*(char *)(lVar21 + 0x1f) < '\0') {
                      func_0x000107c3192c(&pppppppuStack_190,*(undefined8 *)(lVar21 + 8),
                                          *(undefined8 *)(lVar21 + 0x10));
                    }
                    else {
                      uStack_188 = *(ulong *)(lVar21 + 0x10);
                      pppppppuStack_190 = *(undefined8 ********)(lVar21 + 8);
                      uStack_180 = *(ulong *)(lVar21 + 0x18);
                    }
                    uVar28 = uStack_188;
                    if (-1 < (long)uStack_180) {
                      uVar28 = uStack_180 >> 0x38;
                    }
                    uVar26 = (long)(char)bStack_111;
                    if ((long)(char)bStack_111 < 0) {
                      uVar26 = uStack_120;
                    }
                    if (uVar26 < uVar28) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                                (&uStack_220,&pppppppuStack_190,0,uVar26,&ppppppuStack_1b0);
                      bVar4 = bStack_209;
                      uVar28 = CONCAT44(uStack_214,iStack_218);
                      if (-1 < (char)bStack_209) {
                        uVar28 = (ulong)bStack_209;
                      }
                      uVar26 = uStack_120;
                      if (-1 < (char)bStack_111) {
                        uVar26 = (ulong)bStack_111;
                      }
                      if (uVar28 == uVar26) {
                        pppppppuVar18 = uStack_220;
                        if (-1 < (char)bStack_209) {
                          pppppppuVar18 = (undefined8 *******)&uStack_220;
                        }
                        iVar8 = (int)pppppppuVar18;
                        puVar15 = (uint *)CONCAT44(uStack_124,uStack_128);
                        if (-1 < (char)bStack_111) {
                          puVar15 = &uStack_128;
                        }
                        _memcmp(pppppppuVar18,puVar15);
                        bVar7 = iVar8 == 0;
                      }
                      else {
                        bVar7 = false;
                      }
                      if ((char)bVar4 < '\0') {
                        __ZdlPv(uStack_220);
                      }
                      if (bVar7) {
                        uVar28 = uStack_120;
                        if (-1 < (char)bStack_111) {
                          uVar28 = (ulong)bStack_111;
                        }
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                                  (&uStack_220,&pppppppuStack_190,uVar28 + 1,0xffffffffffffffff,
                                   &ppppppuStack_1b0);
                        if ((long)uStack_180 < 0) {
                          __ZdlPv(pppppppuStack_190);
                        }
                        uStack_188 = CONCAT44(uStack_214,iStack_218);
                        pppppppuStack_190 = uStack_220;
                        uStack_180 = CONCAT17(bStack_209,uStack_210);
                      }
                    }
                    uVar19 = *(uint *)(CONCAT44(uStack_9c,uStack_a0) + uVar23 * 4);
                    uStack_200 = 0;
                    iStack_218 = 0;
                    uStack_214 = 0;
                    uStack_220 = (undefined8 *******)0x0;
                    uStack_210 = 0;
                    bStack_209 = 0;
                    uStack_208 = (ulong)uVar19;
                    iVar8 = iVar9;
                    FUN_109275fb8();
                    uStack_200 = CONCAT44(iVar8,(undefined4)uStack_200);
                    if (iVar8 != 0) {
                      FUN_10924a40c(1,&UNK_10f5629ce);
                      FUN_10924a40c(1,&UNK_10f5629e6);
                      FUN_10924a40c(1,&UNK_10f5629ff);
                      FUN_10924a40c(1,&UNK_10f562a2b);
                      if (iVar2 < 1) {
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                  (&uStack_220,&pppppppuStack_190);
                        uStack_200 = uStack_200 & 0xffffffff00000000;
                        FUN_10926f1c8();
                        uStack_208 = CONCAT44(iVar9,(undefined4)uStack_208);
                        FUN_10923dc88(&ppppppuStack_e8,&uStack_220);
                      }
                      else {
                        iVar8 = *(int *)(CONCAT44(uStack_16c,iStack_170) + uVar23 * 4);
                        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                                  (&uStack_220,&pppppppuStack_190);
                        uStack_208 = CONCAT44(iVar8,(undefined4)uStack_208);
                        uStack_200 = CONCAT44(uStack_200._4_4_,iVar2);
                        FUN_10923dc88(&ppppppuStack_e8,&uStack_220);
                        iVar9 = 0;
                        do {
                          uVar28 = uStack_188;
                          if (-1 < (long)uStack_180) {
                            uVar28 = uStack_180 >> 0x38;
                          }
                          func_0x000104c4f768(apppppppuStack_1c8,uVar28 + 1,&pppppppuStack_1e0);
                          pppppppuVar18 = apppppppuStack_1c8[0];
                          if (-1 < cStack_1b1) {
                            pppppppuVar18 = apppppppuStack_1c8;
                          }
                          if (uVar28 != 0) {
                            pppppppuVar13 = pppppppuStack_190;
                            if (-1 < (long)uStack_180) {
                              pppppppuVar13 = &pppppppuStack_190;
                            }
                            _memmove(pppppppuVar18,pppppppuVar13,uVar28);
                          }
                          *(undefined2 *)((long)pppppppuVar18 + uVar28) = 0x5b;
                          __ZNSt3__19to_stringEi(&pppppppuStack_1e0,iVar9);
                          uVar28 = uStack_1d8;
                          pppppppuVar18 = pppppppuStack_1e0;
                          if (-1 < (char)bStack_1c9) {
                            uVar28 = (ulong)bStack_1c9;
                            pppppppuVar18 = &pppppppuStack_1e0;
                          }
                          pppppppuVar13 = apppppppuStack_1c8;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (pppppppuVar13,pppppppuVar18,uVar28);
                          ppppppuStack_1a8 = pppppppuVar13[1];
                          ppppppuStack_1b0 = *pppppppuVar13;
                          ppppppuStack_1a0 = pppppppuVar13[2];
                          pppppppuVar13[1] = (undefined8 ******)0x0;
                          pppppppuVar13[2] = (undefined8 ******)0x0;
                          *pppppppuVar13 = (undefined8 ******)0x0;
                          ppppppuVar14 = &ppppppuStack_1b0;
                          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                    (ppppppuVar14,&DAT_10f62a9ea,1);
                          pppppppuVar18 = (undefined8 *******)*ppppppuVar14;
                          uStack_b0 = SUB87(ppppppuVar14[1],0);
                          uStack_a9 = (undefined1)*(undefined8 *)((long)ppppppuVar14 + 0xf);
                          uStack_a8 = (undefined7)
                                      ((ulong)*(undefined8 *)((long)ppppppuVar14 + 0xf) >> 8);
                          bVar4 = *(byte *)((long)ppppppuVar14 + 0x17);
                          ppppppuVar14[1] = (undefined8 *****)0x0;
                          ppppppuVar14[2] = (undefined8 *****)0x0;
                          *ppppppuVar14 = (undefined8 *****)0x0;
                          if ((char)bStack_209 < '\0') {
                            __ZdlPv(uStack_220);
                          }
                          iStack_218 = (int)uStack_b0;
                          uStack_214 = CONCAT13(uStack_a9,(int3)((uint7)uStack_b0 >> 0x20));
                          uStack_210 = uStack_a8;
                          uStack_220 = pppppppuVar18;
                          bStack_209 = bVar4;
                          if ((long)ppppppuStack_1a0 < 0) {
                            __ZdlPv(ppppppuStack_1b0);
                          }
                          if ((char)bStack_1c9 < '\0') {
                            __ZdlPv(pppppppuStack_1e0);
                          }
                          if (cStack_1b1 < '\0') {
                            __ZdlPv(apppppppuStack_1c8[0]);
                          }
                          uStack_200 = uStack_200 & 0xffffffff00000000;
                          uStack_208 = CONCAT44(uStack_208._4_4_,uVar19);
                          FUN_10923dc88(&ppppppuStack_e8,&uStack_220);
                          FUN_10924a40c(1,&UNK_10f562a4a);
                          iVar9 = iVar9 + 1;
                          uVar19 = uVar19 + iVar8;
                        } while (iVar2 != iVar9);
                      }
                    }
                    if ((char)bStack_209 < '\0') {
                      __ZdlPv(uStack_220);
                    }
                    if ((long)uStack_180 < 0) {
                      __ZdlPv(pppppppuStack_190);
                    }
                    uVar28 = CONCAT44(uStack_13c,iStack_140);
                    uVar26 = uStack_138;
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar23 < (ulong)((long)(uVar26 - uVar28) >> 2));
              }
              if (CONCAT44(uStack_16c,iStack_170) != 0) {
                __ZdlPv();
              }
              if (CONCAT44(uStack_9c,uStack_a0) != 0) {
                uStack_98 = (undefined7)CONCAT44(uStack_9c,uStack_a0);
                uStack_91 = (undefined1)((uint)uStack_9c >> 0x18);
                __ZdlPv();
              }
              if (CONCAT44(uStack_13c,iStack_140) != 0) {
                uStack_138 = CONCAT44(uStack_13c,iStack_140);
                __ZdlPv();
              }
              plVar11 = (long *)param_1[10];
              if (plVar11 < (long *)param_1[0xb]) {
                plVar11[2] = CONCAT17(uStack_f9,uStack_100);
                plVar11[1] = CONCAT17(uStack_101,uStack_108);
                *plVar11 = (long)uStack_110;
                uStack_108 = 0;
                uStack_101 = 0;
                uStack_100 = 0;
                uStack_f9 = 0;
                uStack_110 = (undefined8 ******)0x0;
                plVar11[3] = uStack_f8;
                *(int *)(plVar11 + 4) = (int)uStack_f0;
                plVar11[6] = 0;
                plVar11[7] = 0;
                plVar11[5] = 0;
                plVar11[6] = lStack_e0;
                plVar11[5] = (long)ppppppuStack_e8;
                plVar11[7] = lStack_d8;
                ppppppuStack_e8 = (undefined8 ******)0x0;
                lStack_e0 = 0;
                lStack_d8 = 0;
                plVar11 = plVar11 + 8;
              }
              else {
                plVar11 = param_1 + 9;
                FUN_109276118(plVar11,&uStack_110);
              }
              param_1[10] = (long)plVar11;
              uStack_220 = &ppppppuStack_e8;
              func_0x00010922df48(&uStack_220);
            }
            if ((char)bStack_111 < '\0') {
              __ZdlPv(CONCAT44(uStack_124,uStack_128));
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 < iStack_148);
        }
        lVar22 = param_1[9];
        lVar25 = param_1[10];
        lVar21 = 0;
        if (lVar25 != lVar22) {
          lVar21 = LZCOUNT(lVar25 - lVar22 >> 6) * -2 + 0x7e;
        }
        FUN_109276250(lVar22,lVar25,lVar21,1);
        lVar21 = param_1[9];
        if (param_1[10] != lVar21) {
          uVar28 = 0;
          lVar22 = 0x18;
          do {
            (*(code *)param_2[0xf0])(iVar16,*(undefined4 *)(lVar21 + lVar22),uVar28);
            lVar21 = param_1[9];
            *(int *)(lVar21 + lVar22) = (int)uVar28;
            uVar28 = uVar28 + 1;
            lVar22 = lVar22 + 0x40;
          } while (uVar28 < (ulong)(param_1[10] - lVar21 >> 6));
        }
        if (uStack_d0 != (undefined8 ******)0x0) {
          ppppppuStack_c8 = uStack_d0;
          __ZdlPv();
        }
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (param_1[9] == param_1[10]) {
        FUN_109271660(param_1);
        uVar20 = 1;
        goto LAB_109270878;
      }
    }
    else {
      uStack_220 = (undefined8 *******)0x0;
      iStack_218 = 0;
      uStack_214 = 0;
      uStack_210 = 0;
      bStack_209 = 0;
      lVar21 = *param_1;
      lVar22 = param_1[1];
      if (lVar21 == lVar22) {
        pppppppuVar18 = (undefined8 *******)0x0;
      }
      else {
        do {
          iVar27 = *(int *)(lVar21 + 0x24);
          if ((iVar27 - 0x8b50U < 0xd || iVar27 - 0x8dc6U < 3) || iVar27 - 0x1404U < 3) {
            FUN_109274954(&uStack_220,lVar21);
          }
          lVar21 = lVar21 + 0x30;
        } while (lVar21 != lVar22);
        pppppppuVar18 = (undefined8 *******)CONCAT44(uStack_214,iStack_218);
      }
      lVar21 = 0;
      if (pppppppuVar18 != uStack_220) {
        lVar21 = LZCOUNT(((long)pppppppuVar18 - (long)uStack_220 >> 4) * -0x5555555555555555) * -2 +
                 0x7e;
      }
      FUN_109278928(uStack_220,pppppppuVar18,lVar21,1);
      if (uStack_220 != (undefined8 *******)CONCAT44(uStack_214,iStack_218)) {
        lVar22 = (long)CONCAT44(uStack_214,iStack_218) - (long)uStack_220 >> 4;
        uVar23 = lVar22 * -0x5555555555555555;
        lVar21 = param_1[0x17];
        puVar31 = (undefined4 *)param_1[0x18];
        lVar25 = (long)puVar31 - lVar21 >> 2;
        bVar7 = uVar23 < (ulong)(lVar25 * -0x3333333333333333);
        uVar28 = uVar23 + lVar25 * 0x3333333333333333;
        if (bVar7 || uVar28 == 0) {
          if (bVar7) {
            param_1[0x18] = lVar21 + lVar22 * 0x555555555555555c;
          }
        }
        else if ((ulong)((param_1[0x19] - (long)puVar31 >> 2) * -0x3333333333333333) < uVar28) {
          if (0xccccccccccccccc < uVar23) {
            FUN_109279b68();
            goto LAB_109271060;
          }
          lVar25 = param_1[0x19] - lVar21 >> 2;
          uVar26 = lVar25 * -0x6666666666666666;
          if (uVar26 < uVar23 || uVar26 + lVar22 * 0x5555555555555555 == 0) {
            uVar26 = uVar23;
          }
          if (0x666666666666665 < (ulong)(lVar25 * -0x3333333333333333)) {
            uVar26 = 0xccccccccccccccc;
          }
          FUN_109279b7c();
          puVar24 = (undefined4 *)(uVar26 + ((long)puVar31 - lVar21));
          puVar31 = puVar24;
          do {
            *puVar31 = 0xffffffff;
            *(undefined8 *)(puVar31 + 3) = 0;
            *(undefined8 *)(puVar31 + 1) = 0;
            puVar31 = puVar31 + 5;
          } while (puVar31 != puVar24 + uVar28 * 5);
          lVar22 = (long)puVar24 - (param_1[0x18] - param_1[0x17]);
          _memcpy(lVar22);
          lVar21 = param_1[0x17];
          param_1[0x17] = lVar22;
          param_1[0x18] = (long)(puVar24 + uVar28 * 5);
          param_1[0x19] = uVar26 + (long)pppppppuVar18 * 0x14;
          if (lVar21 != 0) {
            __ZdlPv();
          }
        }
        else {
          puVar24 = puVar31 + uVar28 * 5;
          do {
            *puVar31 = 0xffffffff;
            *(undefined8 *)(puVar31 + 3) = 0;
            *(undefined8 *)(puVar31 + 1) = 0;
            puVar31 = puVar31 + 5;
          } while (puVar31 != puVar24);
          param_1[0x18] = (long)puVar24;
        }
        if ((undefined8 *******)CONCAT44(uStack_214,iStack_218) == uStack_220) {
          uVar19 = 0;
        }
        else {
          uVar28 = 0;
          iVar27 = 0;
          do {
            pppppppuVar13 = uStack_220;
            uStack_f0 = 0;
            pppppppuVar18 = uStack_220 + uVar28 * 6 + 1;
            uStack_108 = 0;
            uStack_101 = 0;
            uStack_110 = (undefined8 ******)0x0;
            uStack_f8 = 0;
            uStack_100 = 0;
            uStack_f9 = 0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&uStack_110,pppppppuVar18);
            uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar27);
            uVar20 = *(undefined4 *)((long)pppppppuVar13 + uVar28 * 0x30 + 0x24);
            FUN_109275fb8();
            uStack_f0 = CONCAT44(uVar20,*(undefined4 *)(pppppppuVar13 + uVar28 * 6 + 5));
            uVar20 = *(undefined4 *)((long)pppppppuVar13 + uVar28 * 0x30 + 0x24);
            FUN_10926f1c8();
            uStack_f8 = CONCAT44(uVar20,(undefined4)uStack_f8);
            FUN_10923dc88(plVar11,&uStack_110);
            if (((int)uStack_f0 != 0) &&
               (uStack_f0 = uStack_f0 & 0xffffffff00000000,
               *(int *)(pppppppuVar13 + uVar28 * 6 + 5) != 0)) {
              uVar19 = 0;
              do {
                bVar4 = *(byte *)((long)pppppppuVar13 + uVar28 * 0x30 + 0x1f);
                ppppppuVar14 = pppppppuVar13[uVar28 * 6 + 2];
                if (-1 < (char)bVar4) {
                  ppppppuVar14 = (undefined8 ******)(ulong)bVar4;
                }
                func_0x000104c4f768(&uStack_128,(long)ppppppuVar14 + 1,&iStack_140);
                puVar15 = (uint *)CONCAT44(uStack_124,uStack_128);
                if (-1 < (char)bStack_111) {
                  puVar15 = &uStack_128;
                }
                if (ppppppuVar14 != (undefined8 ******)0x0) {
                  pppppppuVar17 = (undefined8 *******)pppppppuVar13[uVar28 * 6 + 1];
                  if (-1 < *(char *)((long)pppppppuVar13 + uVar28 * 0x30 + 0x1f)) {
                    pppppppuVar17 = pppppppuVar18;
                  }
                  _memmove(puVar15,pppppppuVar17,ppppppuVar14);
                }
                *(undefined2 *)((long)puVar15 + (long)ppppppuVar14) = 0x5b;
                __ZNSt3__19to_stringEj(&iStack_140,uVar19);
                uVar23 = uStack_138;
                piVar1 = (int *)CONCAT44(uStack_13c,iStack_140);
                if (-1 < (char)bStack_129) {
                  uVar23 = (ulong)bStack_129;
                  piVar1 = &iStack_140;
                }
                puVar15 = &uStack_128;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (puVar15,piVar1,uVar23);
                ppppppuStack_c8 = *(undefined8 *******)(puVar15 + 2);
                uStack_d0 = *(undefined8 *******)puVar15;
                lStack_c0 = *(long *)(puVar15 + 4);
                puVar15[2] = 0;
                puVar15[3] = 0;
                puVar15[4] = 0;
                puVar15[5] = 0;
                puVar15[0] = 0;
                puVar15[1] = 0;
                plVar29 = &uStack_d0;
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (plVar29,&DAT_10f62a9ea,1);
                uStack_110 = (undefined8 ******)*plVar29;
                uStack_a0 = (undefined4)plVar29[1];
                uStack_9c._0_3_ = (undefined3)((ulong)plVar29[1] >> 0x20);
                uStack_9c._3_1_ = (undefined1)*(undefined8 *)((long)plVar29 + 0xf);
                uStack_98 = (undefined7)((ulong)*(undefined8 *)((long)plVar29 + 0xf) >> 8);
                uStack_f9 = *(undefined1 *)((long)plVar29 + 0x17);
                plVar29[1] = 0;
                plVar29[2] = 0;
                *plVar29 = 0;
                uStack_108 = (undefined7)CONCAT44(uStack_9c,uStack_a0);
                uStack_100 = uStack_98;
                uStack_101 = uStack_9c._3_1_;
                if ((char)bStack_129 < '\0') {
                  __ZdlPv(CONCAT44(uStack_13c,iStack_140));
                }
                if ((char)bStack_111 < '\0') {
                  __ZdlPv(CONCAT44(uStack_124,uStack_128));
                }
                uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar27 + uStack_f8._4_4_ * uVar19);
                FUN_10923dc88(plVar11,&uStack_110);
                uVar19 = uVar19 + 1;
              } while (uVar19 < *(uint *)(pppppppuVar13 + uVar28 * 6 + 5));
            }
            plVar29 = (long *)(param_1[0x17] + uVar28 * 0x14);
            iVar9 = *(int *)((long)pppppppuVar13 + uVar28 * 0x30 + 0x24);
            *plVar29 = (long)pppppppuVar13[uVar28 * 6 + 4];
            iVar30 = *(int *)(pppppppuVar13 + uVar28 * 6 + 5);
            if (iVar30 < 2) {
              iVar30 = 1;
            }
            *(int *)(plVar29 + 1) = iVar30;
            *(int *)((long)plVar29 + 0xc) = iVar27;
            FUN_10926f1c8();
            *(int *)(plVar29 + 2) = iVar9 * iVar30;
            iVar27 = iVar9 * iVar30 + iVar27;
            uVar28 = uVar28 + 1;
          } while (uVar28 < (ulong)((CONCAT44(uStack_214,iStack_218) - (long)uStack_220 >> 4) *
                                   -0x5555555555555555));
          uVar19 = iVar27 + 0xfU & 0xfffffff0;
        }
        *(uint *)((long)param_1 + 0x94) = uVar19;
        if (*(char *)((long)param_1 + 0x8f) < '\0') {
          __ZdlPv(param_1[0xf]);
        }
        param_1[0xf] = 0;
        *(undefined1 *)((long)param_1 + 0x8f) = 0;
        *(undefined4 *)(param_1 + 0x12) = 0;
      }
      uStack_110 = (undefined8 ******)&uStack_220;
      func_0x000109265474(&uStack_110);
      uVar20 = 2;
LAB_109270878:
      *(undefined4 *)(param_1 + 0x20) = uVar20;
    }
    puVar24 = (undefined4 *)param_1[1];
    for (puVar31 = (undefined4 *)*param_1; puVar31 != puVar24; puVar31 = puVar31 + 0xc) {
      iVar27 = puVar31[9];
      if ((iVar27 - 0x8dc1U < 0x17 && (1 << (ulong)(iVar27 - 0x8dc1U & 0x1f) & 0x4e4e19U) != 0) ||
         (iVar27 - 0x8b5eU < 6 && iVar27 - 0x8b5eU != 3 || iVar27 == 0x8d66)) {
        if (1 < (int)puVar31[10]) goto LAB_109271014;
        uStack_110._4_4_ = (undefined4)((ulong)uStack_110 >> 0x20);
        uStack_110._0_4_ = 0xffffffff;
        func_0x000107c31940(&uStack_108,"");
        uStack_f0 = 0xffffffffffffffff;
        ppppppuStack_e8 = (undefined8 ******)((ulong)ppppppuStack_e8 & 0xffffffff00000000);
        uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,*puVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_108,puVar31 + 2);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,puVar31[8]);
        uVar20 = puVar31[9];
        ppppppuStack_e8 = (undefined8 ******)CONCAT44(ppppppuStack_e8._4_4_,uVar20);
        puVar3 = (undefined4 *)param_1[7];
        if (puVar3 < (undefined4 *)param_1[8]) {
          *puVar3 = (undefined4)uStack_110;
          *(long *)(puVar3 + 6) = uStack_f8;
          *(ulong *)(puVar3 + 4) = CONCAT17(uStack_f9,uStack_100);
          *(ulong *)(puVar3 + 2) = CONCAT17(uStack_101,uStack_108);
          puVar3[10] = uVar20;
          *(ulong *)(puVar3 + 8) = uStack_f0;
          plVar11 = (long *)(puVar3 + 0xc);
        }
        else {
          plVar11 = plVar12;
          FUN_109279c38(plVar12,&uStack_110);
        }
        param_1[7] = (long)plVar11;
      }
    }
    lVar22 = param_1[6];
    lVar25 = param_1[7];
    lVar21 = 0;
    if (lVar25 != lVar22) {
      lVar21 = LZCOUNT((lVar25 - lVar22 >> 4) * -0x5555555555555555) * -2 + 0x7e;
    }
    FUN_109279e78(lVar22,lVar25,lVar21,1);
    uStack_220 = (undefined8 *******)((ulong)uStack_220 & 0xffffffff00000000);
    _glGetIntegerv(0x8b8d,&uStack_220);
    _glUseProgram(iVar16);
    uStack_108 = SUB87(&uStack_220,0);
    uStack_101 = (undefined1)((ulong)&uStack_220 >> 0x38);
    lVar21 = param_1[6];
    uStack_110 = param_2;
    if (param_1[7] != lVar21) {
      lVar22 = 0;
      uVar28 = 0;
      do {
        _glUniform1i(*(undefined4 *)(lVar21 + lVar22 + 0x20),uVar28);
        lVar21 = param_1[6];
        *(int *)(lVar21 + lVar22 + 0x24) = (int)uVar28;
        uVar28 = uVar28 + 1;
        lVar22 = lVar22 + 0x30;
      } while (uVar28 < (ulong)((param_1[7] - lVar21 >> 4) * -0x5555555555555555));
    }
    func_0x000109279bbc(&uStack_110);
    puVar24 = (undefined4 *)param_1[1];
    for (puVar31 = (undefined4 *)*param_1; puVar31 != puVar24; puVar31 = puVar31 + 0xc) {
      if (puVar31[9] - 0x904d < 0x1e &&
          (1 << (ulong)(puVar31[9] - 0x904d & 0x1f) & 0x32c658cbU) != 0) {
        if (1 < (int)puVar31[10]) goto LAB_109271014;
        uStack_220._4_4_ = (undefined4)((ulong)uStack_220 >> 0x20);
        uStack_220 = (undefined8 *******)CONCAT44(uStack_220._4_4_,0xffffffff);
        _glGetUniformiv(iVar16,puVar31[8],&uStack_220);
        uStack_110._0_4_ = 0xffffffff;
        func_0x000107c31940(&uStack_108,"");
        uStack_f0 = 0xffffffffffffffff;
        uStack_110 = (undefined8 ******)CONCAT44(uStack_110._4_4_,*puVar31);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_108,puVar31 + 2);
        uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_220);
        puVar3 = (undefined4 *)param_1[4];
        if (puVar3 < (undefined4 *)param_1[5]) {
          *puVar3 = (undefined4)uStack_110;
          *(long *)(puVar3 + 6) = uStack_f8;
          *(ulong *)(puVar3 + 4) = CONCAT17(uStack_f9,uStack_100);
          *(ulong *)(puVar3 + 2) = CONCAT17(uStack_101,uStack_108);
          *(ulong *)(puVar3 + 8) = uStack_f0;
          plVar12 = (long *)(puVar3 + 10);
        }
        else {
          plVar12 = param_1 + 3;
          FUN_10927b130(plVar12,&uStack_110);
        }
        param_1[4] = (long)plVar12;
      }
    }
    lVar22 = param_1[3];
    lVar25 = param_1[4];
    lVar21 = 0;
    if (lVar25 != lVar22) {
      lVar21 = LZCOUNT((lVar25 - lVar22 >> 3) * -0x3333333333333333) * -2 + 0x7e;
    }
    FUN_10927b360(lVar22,lVar25,lVar21,1);
    lVar21 = param_1[4] - param_1[3];
    if (lVar21 != 0) {
      lVar22 = 0;
      puVar31 = (undefined4 *)(param_1[3] + 0x24);
      do {
        *puVar31 = (int)lVar22;
        lVar22 = lVar22 + 1;
        puVar31 = puVar31 + 10;
      } while ((lVar21 >> 3) * -0x3333333333333333 - lVar22 != 0);
    }
    if (ppppppuVar5 != (undefined8 ******)0x0) {
      __ZdlPv();
    }
LAB_109270bfc:
    piVar1 = (int *)(param_6 + 8);
    if (*(int *)(param_6 + 0x2e8) == 2) {
      if (param_4 == 0) {
        if ((*(byte *)(param_6 + 0x2e0) & 1) == 0) {
          FUN_109243bf8(&UNK_10f562882);
          goto LAB_109271060;
        }
        lVar21 = *(long *)(param_6 + 0x2c8);
        lVar22 = *(long *)(param_6 + 0x2d0);
        if (lVar21 != lVar22) {
          lVar25 = *(long *)(param_6 + 0x208);
          do {
            piVar33 = piVar1;
            if (lVar25 != 0) {
              piVar32 = piVar1;
              do {
                piVar33 = piVar32;
                if (*piVar32 == *(int *)(lVar21 + 0x18)) break;
                piVar32 = piVar32 + 4;
                piVar33 = piVar1 + lVar25 * 4;
              } while (piVar32 != piVar1 + lVar25 * 4);
            }
            func_0x000107c31940(&uStack_110,"");
            uStack_f8 = 0xffffffff;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
            iVar27 = iVar16;
            uStack_f8._4_4_ = piVar33[3];
            _glGetAttribLocation(param_3 & 0xffffffff,&uStack_110);
            uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar27);
            if (iVar27 != -1) {
              uVar28 = param_1[0x1e];
              if (uVar28 < (ulong)param_1[0x1f]) {
                FUN_109280a24(param_1 + 0x1d,&uStack_110);
                plVar12 = (long *)(uVar28 + 0x20);
              }
              else {
                plVar12 = param_1 + 0x1d;
                FUN_109280a90(plVar12,&uStack_110);
              }
              param_1[0x1e] = (long)plVar12;
            }
            lVar21 = lVar21 + 0x20;
          } while (lVar21 != lVar22);
        }
      }
      else {
        uStack_128 = 0;
        _glGetProgramiv(iVar16,0x8b8a,&uStack_128);
        lVar21 = (long)(int)uStack_128;
        uStack_128 = (uint)(lVar21 + 1);
        func_0x000104c59120(&uStack_220,lVar21 + 1,0);
        iStack_140 = 0;
        _glGetProgramiv(iVar16,0x8b89,&iStack_140);
        if (0 < iStack_140) {
          iVar27 = 0;
          do {
            func_0x000107c31940(&uStack_110,"");
            uStack_f8 = 0xffffffff;
            uStack_a0 = 0;
            iStack_170 = 0;
            pppppppuStack_190 = (undefined8 *******)((ulong)pppppppuStack_190 & 0xffffffff00000000);
            pppppppuVar18 = uStack_220;
            if (-1 < (char)bStack_209) {
              pppppppuVar18 = (undefined8 *******)&uStack_220;
            }
            _glGetActiveAttrib(iVar16,iVar27,uStack_128,&pppppppuStack_190,&uStack_a0,&iStack_170,
                               pppppppuVar18);
            pppppppuVar18 = uStack_220;
            if (-1 < (char)bStack_209) {
              pppppppuVar18 = (undefined8 *******)&uStack_220;
            }
            func_0x000107c31940(&uStack_d0,pppppppuVar18);
            uStack_108 = SUB87(ppppppuStack_c8,0);
            uStack_101 = (undefined1)((ulong)ppppppuStack_c8 >> 0x38);
            uStack_110 = uStack_d0;
            uStack_100 = (undefined7)lStack_c0;
            uStack_f9 = (undefined1)((ulong)lStack_c0 >> 0x38);
            if (iStack_170 < 0x8b54) {
              if (0x8b4f < iStack_170) {
                if (iStack_170 < 0x8b52) {
                  if (iStack_170 == 0x8b50) goto LAB_109270e20;
                  if (iStack_170 == 0x8b51) goto LAB_109270ddc;
                }
                else {
                  if (iStack_170 == 0x8b52) goto LAB_109270e28;
                  if (iStack_170 == 0x8b53) {
                    uVar20 = 0x21;
                    goto LAB_109270e4c;
                  }
                }
LAB_10927103c:
                FUN_109243bf8(&UNK_10f55e5d5);
                goto LAB_109271060;
              }
              if (iStack_170 == 0x1404) {
                uVar20 = 0x20;
              }
              else if (iStack_170 == 0x1405) {
                uVar20 = 0x24;
              }
              else {
                if (iStack_170 != 0x1406) goto LAB_10927103c;
                uVar20 = 0x1c;
              }
            }
            else if (iStack_170 < 0x8b5c) {
              if (iStack_170 < 0x8b5a) {
                if (iStack_170 == 0x8b54) {
                  uVar20 = 0x22;
                }
                else {
                  if (iStack_170 != 0x8b55) goto LAB_10927103c;
                  uVar20 = 0x23;
                }
              }
              else if (iStack_170 == 0x8b5a) {
LAB_109270e20:
                uVar20 = 0x1d;
              }
              else {
                if (iStack_170 != 0x8b5b) goto LAB_10927103c;
LAB_109270ddc:
                uVar20 = 0x1e;
              }
            }
            else if (iStack_170 < 0x8dc7) {
              if (iStack_170 == 0x8b5c) {
LAB_109270e28:
                uVar20 = 0x1f;
              }
              else {
                if (iStack_170 != 0x8dc6) goto LAB_10927103c;
                uVar20 = 0x25;
              }
            }
            else if (iStack_170 == 0x8dc7) {
              uVar20 = 0x26;
            }
            else {
              if (iStack_170 != 0x8dc8) goto LAB_10927103c;
              uVar20 = 0x27;
            }
LAB_109270e4c:
            uStack_f8 = CONCAT44(uVar20,(undefined4)uStack_f8);
            uVar28 = 0;
            FUN_109287bb0();
            if ((uVar28 & 1) == 0) {
              iVar30 = iVar16;
              _glGetAttribLocation(param_3 & 0xffffffff,&uStack_110);
              uStack_f8 = CONCAT44(uStack_f8._4_4_,iVar30);
              uVar28 = param_1[0x1e];
              if (uVar28 < (ulong)param_1[0x1f]) {
                FUN_109280a24(param_1 + 0x1d,&uStack_110);
                plVar12 = (long *)(uVar28 + 0x20);
              }
              else {
                plVar12 = param_1 + 0x1d;
                FUN_109280a90(plVar12,&uStack_110);
              }
              param_1[0x1e] = (long)plVar12;
            }
            iVar27 = iVar27 + 1;
          } while (iVar27 < iStack_140);
        }
        if ((char)bStack_209 < '\0') {
          __ZdlPv(uStack_220);
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_109243bf8(&UNK_10f5627f1);
LAB_109271060:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x109271064);
  (*pcVar6)();
LAB_109271014:
  FUN_109243bf8(&UNK_10f562aa6);
  goto LAB_109271060;
}



/* Entry: 109271450; end: 10927165f;  */

void FUN_109271450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 **ppuStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  byte bStack_b1;
  undefined4 uStack_ac;
  int aiStack_a8 [2];
  undefined8 **ppuStack_a0;
  ulong uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  int aiStack_80 [3];
  int iStack_74;
  
  iStack_74 = 0;
  _glGetProgramiv(param_1,0x8b86,&iStack_74);
  if (0 < iStack_74) {
    iVar5 = 0;
    do {
      aiStack_a8[0] = -1;
      func_0x000107c31940(&ppuStack_a0,"");
      uStack_88 = 0xffffffff;
      aiStack_80[0] = 0;
      uStack_ac = 0;
      aiStack_a8[0] = iVar5;
      _glGetActiveUniform(param_1,iVar5,param_3,&uStack_ac,aiStack_80,(long)&uStack_88 + 4,param_4);
      func_0x000107c31940(&ppuStack_c8,param_4);
      pppuVar1 = (undefined8 ***)ppuStack_c8;
      if (-1 < (char)bStack_b1) {
        pppuVar1 = &ppuStack_c8;
      }
      uVar3 = param_1;
      _glGetUniformLocation(param_1,pppuVar1);
      uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar3);
      uVar4 = 0;
      FUN_109287bb0();
      if ((uVar4 & 1) == 0) {
        if (aiStack_80[0] < 2) {
          uStack_d8 = uStack_c0;
          ppuStack_e0 = ppuStack_c8;
          if (-1 < (char)bStack_b1) {
            uStack_d8 = (ulong)bStack_b1;
            ppuStack_e0 = &ppuStack_c8;
          }
          if ((uStack_d8 < 3) ||
             (iVar2 = (int)&ppuStack_e0,
             FUN_109888ee4(&ppuStack_e0,uStack_d8 - 3,3,&UNK_10f5629bd,3), iVar2 != 0)) {
            aiStack_80[0] = 0;
          }
        }
        uVar4 = uStack_c0;
        pppuVar1 = (undefined8 ***)ppuStack_c8;
        if (-1 < (char)bStack_b1) {
          uVar4 = (ulong)bStack_b1;
          pppuVar1 = &ppuStack_c8;
        }
        func_0x000109fce380(&ppuStack_e0,pppuVar1,uVar4);
        if (lStack_90 < 0) {
          __ZdlPv(ppuStack_a0);
        }
        uStack_98 = uStack_d8;
        ppuStack_a0 = ppuStack_e0;
        lStack_90 = lStack_d0;
        FUN_109274954(param_2,aiStack_a8);
      }
      if ((char)bStack_b1 < '\0') {
        __ZdlPv(ppuStack_c8);
      }
      if (lStack_90 < 0) {
        __ZdlPv(ppuStack_a0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iStack_74);
  }
  return;
}



/* Entry: 109271660; end: 10927199b;  */

void FUN_109271660(long *param_1)

{
  ulong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_a0;
  char cStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  ulong *puStack_68;
  
  puVar12 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  if (puVar12 != puVar3) {
    puVar1 = (ulong *)(param_1 + 0xc);
    do {
      if (puVar12[9] == 0x8b55 || puVar12[9] == 0x8b52) {
        func_0x000107c31940(&uStack_b0,"");
        uStack_90 = 0;
        uStack_98 = 0xffffffffffffffff;
        uVar5 = *puVar12;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_b0,puVar12 + 2);
        uStack_98 = CONCAT44(uStack_98._4_4_,puVar12[8]);
        uStack_90 = *(undefined8 *)(puVar12 + 9);
        puVar15 = (undefined4 *)param_1[0xd];
        if (puVar15 < (undefined4 *)param_1[0xe]) {
          *puVar15 = uVar5;
          if (cStack_99 < '\0') {
            func_0x000107c3192c(puVar15 + 2,uStack_b0,uStack_a8);
          }
          else {
            *(ulong *)(puVar15 + 6) = CONCAT17(cStack_99,uStack_a0);
            *(undefined8 *)(puVar15 + 4) = uStack_a8;
            *(undefined8 *)(puVar15 + 2) = uStack_b0;
          }
          *(undefined8 *)(puVar15 + 10) = uStack_90;
          *(undefined8 *)(puVar15 + 8) = uStack_98;
          puVar15 = puVar15 + 0xc;
          param_1[0xd] = (long)puVar15;
        }
        else {
          puVar13 = (undefined4 *)*puVar1;
          lVar16 = (long)puVar15 - (long)puVar13;
          uVar9 = (lVar16 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar9) {
            FUN_109277760();
LAB_10927195c:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x109271960);
            (*pcVar6)();
          }
          lVar8 = param_1[0xe] - (long)puVar13 >> 4;
          uVar11 = lVar8 * 0x5555555555555556;
          if (uVar11 < uVar9 || uVar11 - uVar9 == 0) {
            uVar11 = uVar9;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar8 * -0x5555555555555555)) {
            uVar11 = 0x555555555555555;
          }
          puStack_68 = puVar1;
          if (uVar11 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            if (0x555555555555555 < uVar11) {
              func_0x000104c4f740();
              goto LAB_10927195c;
            }
            puVar7 = (undefined4 *)(uVar11 * 0x30);
            __Znwm();
          }
          puVar2 = (undefined4 *)((long)puVar7 + lVar16);
          puVar14 = puVar7 + uVar11 * 0xc;
          *puVar2 = uVar5;
          puStack_88 = puVar7;
          puStack_80 = puVar2;
          puStack_78 = puVar2;
          puStack_70 = puVar14;
          if (cStack_99 < '\0') {
            func_0x000107c3192c(puVar2 + 2,uStack_b0,uStack_a8);
            puVar13 = (undefined4 *)param_1[0xc];
            puVar15 = (undefined4 *)param_1[0xd];
            lVar16 = (long)puVar15 - (long)puVar13;
          }
          else {
            *(undefined8 *)(puVar2 + 4) = uStack_a8;
            *(undefined8 *)(puVar2 + 2) = uStack_b0;
            *(ulong *)(puVar2 + 6) = CONCAT17(cStack_99,uStack_a0);
          }
          *(undefined8 *)(puVar2 + 10) = uStack_90;
          *(undefined8 *)(puVar2 + 8) = uStack_98;
          puVar7 = puVar13;
          puVar10 = (undefined4 *)((long)puVar2 - lVar16);
          if (puVar13 != puVar15) {
            do {
              *puVar10 = *puVar7;
              uVar18 = *(undefined8 *)(puVar7 + 4);
              uVar17 = *(undefined8 *)(puVar7 + 2);
              *(undefined8 *)(puVar10 + 6) = *(undefined8 *)(puVar7 + 6);
              *(undefined8 *)(puVar10 + 4) = uVar18;
              *(undefined8 *)(puVar10 + 2) = uVar17;
              *(undefined8 *)(puVar7 + 4) = 0;
              *(undefined8 *)(puVar7 + 6) = 0;
              *(undefined8 *)(puVar7 + 2) = 0;
              uVar17 = *(undefined8 *)(puVar7 + 8);
              *(undefined8 *)(puVar10 + 10) = *(undefined8 *)(puVar7 + 10);
              *(undefined8 *)(puVar10 + 8) = uVar17;
              puVar7 = puVar7 + 0xc;
              puVar10 = puVar10 + 0xc;
            } while (puVar7 != puVar15);
            do {
              if (*(char *)((long)puVar13 + 0x1f) < '\0') {
                __ZdlPv(*(undefined8 *)(puVar13 + 2));
              }
              puVar13 = puVar13 + 0xc;
            } while (puVar13 != puVar15);
            puVar13 = (undefined4 *)*puVar1;
          }
          puVar15 = puVar2 + 0xc;
          param_1[0xc] = (long)puVar2 - lVar16;
          param_1[0xd] = (long)puVar15;
          puStack_70 = (undefined4 *)param_1[0xe];
          param_1[0xe] = (long)puVar14;
          puStack_88 = puVar13;
          puStack_80 = puVar13;
          puStack_78 = puVar13;
          FUN_109277774(&puStack_88);
        }
        param_1[0xd] = (long)puVar15;
        if (cStack_99 < '\0') {
          __ZdlPv(uStack_b0);
        }
      }
      puVar12 = puVar12 + 0xc;
    } while (puVar12 != puVar3);
  }
  lVar8 = param_1[0xc];
  lVar4 = param_1[0xd];
  lVar16 = 0;
  if (lVar4 != lVar8) {
    lVar16 = LZCOUNT((lVar4 - lVar8 >> 4) * -0x5555555555555555) * -2 + 0x7e;
  }
  FUN_1092777d4(lVar8,lVar4,lVar16,1);
  lVar16 = param_1[0xd] - param_1[0xc];
  if (lVar16 != 0) {
    lVar8 = 0;
    puVar12 = (undefined4 *)(param_1[0xc] + 0x24);
    do {
      *puVar12 = (int)lVar8;
      lVar8 = lVar8 + 1;
      puVar12 = puVar12 + 0xc;
    } while ((lVar16 >> 4) * -0x5555555555555555 - lVar8 != 0);
  }
  return;
}



/* Entry: 10927199c; end: 109271e1f;  */

void FUN_10927199c(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  undefined8 **ppuVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_81;
  undefined8 **appuStack_80 [2];
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3 == (long *)0x0) {
    FUN_109271e20(param_4);
    lVar9 = *(long *)(param_2 + 0xd0);
    lVar10 = *(long *)(param_2 + 0xd8);
    if (lVar9 != lVar10) {
      do {
        lStack_118 = (long)*(int *)(lVar9 + 0x24);
        iVar1 = *(int *)(lVar9 + 0x20) + 0x20;
        uStack_120 = CONCAT44(*(int *)(lVar9 + 0x20),iVar1);
        FUN_109271ee0(param_1,&uStack_120);
        lStack_190 = 0;
        puStack_198 = (undefined8 *)0x0;
        uStack_1a0 = (undefined8 *)0x0;
        puStack_180 = (undefined8 *)0x100000000;
        uStack_170 = 0;
        puStack_168 = (undefined8 *)0x0;
        uStack_178 = 0;
        uStack_188._4_4_ = *(undefined4 *)(lVar9 + 0x24);
        uStack_188._0_4_ = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_1a0,lVar9 + 8);
        uStack_188 = CONCAT44(uStack_188._4_4_,iVar1);
        FUN_109240b88(*param_4 + 0x20,&uStack_1a0);
        puStack_b0 = &uStack_178;
        func_0x00010922df48(&puStack_b0);
        if (lStack_190 < 0) {
          __ZdlPv(uStack_1a0);
        }
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != lVar10);
    }
  }
  else {
    uStack_a8 = 0;
    puStack_b0 = (undefined8 *)0x0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_90 = 0x3f800000;
    lVar10 = param_3[1];
    for (lVar9 = *param_3; lVar9 != lVar10; lVar9 = lVar9 + 0x28) {
      if (*(int *)(lVar9 + 0x18) == 5) {
        ppuVar7 = &puStack_b0;
        FUN_109286f14(ppuVar7,lVar9,lVar9);
        ppuVar7[5] = *(undefined8 **)(lVar9 + 0x1c);
      }
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_c0 = 0x3f800000;
    lVar9 = *param_4;
    if (param_4[1] != lVar9) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uStack_1a0 = (undefined8 *)(lVar9 + lVar10);
        puVar6 = &uStack_e0;
        FUN_10923ffb4(puVar6,uStack_1a0,&UNK_10dd5b8f9,&uStack_1a0,&uStack_120);
        puVar6[3] = uVar11;
        uVar11 = uVar11 + 1;
        lVar9 = *param_4;
        lVar10 = lVar10 + 0x80;
      } while (uVar11 < (ulong)(param_4[1] - lVar9 >> 7));
    }
    lVar9 = *(long *)(param_2 + 0xd0);
    lVar10 = *(long *)(param_2 + 0xd8);
    if (lVar9 != lVar10) {
      do {
        ppuVar7 = &puStack_b0;
        FUN_109287344(ppuVar7,lVar9 + 8);
        if (ppuVar7 == (undefined8 **)0x0) {
          FUN_109243bf8(&UNK_10f56291b);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109271d8c);
          (*pcVar5)();
        }
        lStack_110 = 0;
        lStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0xffffffff;
        uStack_100 = 0x100000000;
        uStack_f0 = 0;
        uStack_e8 = 0;
        uStack_f8 = 0;
        uStack_104 = *(undefined4 *)(lVar9 + 0x24);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_120,lVar9 + 8);
        ppuVar2 = ppuVar7 + 5;
        uStack_108 = *(undefined4 *)((long)ppuVar7 + 0x2c);
        puVar6 = &uStack_e0;
        FUN_1092403d4(puVar6,ppuVar2);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_128 = 0;
          uStack_140 = 0;
          uStack_148 = 0;
          uStack_130 = 0;
          puStack_138 = (undefined8 *)0x0;
          uStack_160 = 0;
          puStack_168 = (undefined8 *)0x0;
          puStack_150 = (undefined8 *)0x0;
          uStack_158 = 0;
          puStack_180 = (undefined8 *)0x0;
          uStack_188 = 0;
          uStack_170 = 0;
          uStack_178 = 0;
          lStack_190 = 0;
          puStack_198 = (undefined8 *)0x0;
          uStack_1a0 = (undefined8 *)CONCAT44(uStack_1a0._4_4_,*(uint *)ppuVar2);
          FUN_109240b88(&puStack_180,&uStack_120);
          lVar4 = *param_4;
          lVar3 = param_4[1];
          puVar6 = &uStack_e0;
          appuStack_80[0] = ppuVar2;
          FUN_10923ffb4(puVar6,ppuVar2,&UNK_10dd5b8f9,appuStack_80,&uStack_81);
          puVar6[3] = lVar3 - lVar4 >> 7;
          FUN_10923b61c(param_4,&uStack_1a0);
          appuStack_80[0] = &puStack_138;
          func_0x00010922dcf0(appuStack_80);
          appuStack_80[0] = &puStack_150;
          FUN_10922dd7c(appuStack_80);
          appuStack_80[0] = &puStack_168;
          FUN_10922de08(appuStack_80);
          appuStack_80[0] = &puStack_180;
          func_0x00010922de94(appuStack_80);
          appuStack_80[0] = &puStack_198;
          func_0x00010922dfd4(appuStack_80);
        }
        else {
          FUN_109240b88(*param_4 + puVar6[3] * 0x80 + 0x20,&uStack_120);
        }
        puStack_198 = (undefined8 *)(long)*(int *)(lVar9 + 0x24);
        uStack_1a0 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar9 + 0x20),uStack_108);
        FUN_109271ee0(param_1 + (ulong)*(uint *)ppuVar2 * 3,&uStack_1a0);
        uStack_1a0 = &uStack_f8;
        func_0x00010922df48(&uStack_1a0);
        if (lStack_110 < 0) {
          __ZdlPv(uStack_120);
        }
        lVar9 = lVar9 + 0x28;
      } while (lVar9 != lVar10);
    }
    FUN_1092410d8(&uStack_e0);
    FUN_109286eb0(&puStack_b0);
  }
  plVar8 = param_1 + 1;
  lVar9 = 0x60;
  do {
    lVar10 = plVar8[-1];
    lVar4 = *plVar8;
    if (lVar10 != lVar4) {
      FUN_109280ca8(lVar10,lVar4,LZCOUNT(lVar4 - lVar10 >> 4) * -2 + 0x7e,1);
    }
    plVar8 = plVar8 + 3;
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != 0);
  return;
}



/* Entry: 109271e20; end: 109271edf;  */

void FUN_109271e20(long *param_1)

{
  undefined4 auStack_b8 [2];
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
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  if (*param_1 == param_1[1]) {
    auStack_b8[0] = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    FUN_10923b61c(param_1,auStack_b8);
    puStack_38 = &uStack_50;
    func_0x00010922dcf0(&puStack_38);
    puStack_38 = &uStack_68;
    FUN_10922dd7c(&puStack_38);
    puStack_38 = &uStack_80;
    FUN_10922de08(&puStack_38);
    puStack_38 = &uStack_98;
    func_0x00010922de94(&puStack_38);
    puStack_38 = &uStack_b0;
    func_0x00010922dfd4(&puStack_38);
  }
  return;
}



/* Entry: 109271ee0; end: 109271fc3;  */

long * FUN_109271ee0(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    puVar10 = puVar10 + 2;
    plVar4 = param_1;
LAB_109271fa0:
    param_1[1] = (long)puVar10;
    return plVar4;
  }
  plVar7 = (long *)*param_1;
  lVar9 = (long)puVar10 - (long)plVar7;
  uVar1 = (lVar9 >> 4) + 1;
  plVar4 = param_1;
  if (uVar1 >> 0x3c == 0) {
    uVar5 = param_1[2] - (long)plVar7;
    uVar6 = (long)uVar5 >> 3;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar6 = 0xfffffffffffffff;
    }
    if (uVar6 >> 0x3c == 0) {
      lVar3 = uVar6 << 4;
      __Znwm();
      puVar2 = (undefined8 *)(lVar3 + lVar9);
      uVar11 = *param_2;
      puVar2[1] = param_2[1];
      *puVar2 = uVar11;
      puVar10 = puVar2 + 2;
      plVar8 = puVar2 + (lVar9 >> 4) * -2;
      plVar4 = plVar8;
      _memcpy(plVar8,plVar7,lVar9);
      *param_1 = (long)plVar8;
      param_1[1] = (long)puVar10;
      param_1[2] = lVar3 + uVar6 * 0x10;
      if (plVar7 != (long *)0x0) {
        __ZdlPv(plVar7);
        plVar4 = plVar7;
      }
      goto LAB_109271fa0;
    }
  }
  else {
    FUN_109280c94();
  }
  func_0x000104c4f740();
  pcStack_58 = FUN_109271fc4;
  plStack_78 = plVar4 + 0xd;
  lStack_70 = (long)plVar7;
  plStack_68 = param_1;
  puStack_60 = &stack0xfffffffffffffff0;
  func_0x00010922dcf0(&plStack_78);
  plStack_78 = plVar4 + 10;
  FUN_10922dd7c(&plStack_78);
  plStack_78 = plVar4 + 7;
  FUN_10922de08(&plStack_78);
  plStack_78 = plVar4 + 4;
  func_0x00010922de94(&plStack_78);
  plStack_78 = plVar4 + 1;
  func_0x00010922dfd4(&plStack_78);
  return plVar4;
}



/* Entry: 109271fc4; end: 10927203b;  */

long FUN_109271fc4(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x68;
  func_0x00010922dcf0(&lStack_28);
  lStack_28 = param_1 + 0x50;
  FUN_10922dd7c(&lStack_28);
  lStack_28 = param_1 + 0x38;
  FUN_10922de08(&lStack_28);
  lStack_28 = param_1 + 0x20;
  func_0x00010922de94(&lStack_28);
  lStack_28 = param_1 + 8;
  func_0x00010922dfd4(&lStack_28);
  return param_1;
}



/* Entry: 10927203c; end: 10927254b;  */

void FUN_10927203c(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_71;
  undefined8 **appuStack_70 [2];
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3 == (long *)0x0) {
    FUN_109271e20(param_4);
    puVar5 = *(undefined8 **)(param_2 + 0x48);
    puVar1 = *(undefined8 **)(param_2 + 0x50);
    if (puVar5 != puVar1) {
      do {
        uVar3 = *(undefined4 *)(puVar5 + 3);
        uStack_108 = (ulong)*(uint *)((long)puVar5 + 0x1c);
        uStack_110 = CONCAT44(uVar3,uVar3);
        FUN_10927254c(param_1,&uStack_110);
        uStack_190 = (undefined8 *)0x0;
        puStack_188 = (undefined8 *)0x0;
        lStack_180 = 0;
        puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,1);
        uStack_160 = 0;
        puStack_158 = (undefined8 *)0x0;
        uStack_168 = 0;
        uStack_178._4_4_ = *(undefined4 *)((long)puVar5 + 0x1c);
        uStack_178._0_4_ = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_190,puVar5)
        ;
        uStack_178 = CONCAT44(uStack_178._4_4_,uVar3);
        if (puVar5 != &uStack_190) {
          FUN_109241c00(&uStack_168,puVar5[5],puVar5[6],
                        ((long)(puVar5[6] - puVar5[5]) >> 3) * -0x3333333333333333);
        }
        FUN_109240478(*param_4 + 8,&uStack_190);
        puStack_a0 = &uStack_168;
        func_0x00010922df48(&puStack_a0);
        if (lStack_180 < 0) {
          __ZdlPv(uStack_190);
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar1);
    }
  }
  else {
    uStack_98 = 0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    lVar10 = param_3[1];
    for (lVar9 = *param_3; lVar9 != lVar10; lVar9 = lVar9 + 0x28) {
      if (*(int *)(lVar9 + 0x18) == 4) {
        ppuVar6 = &puStack_a0;
        FUN_109286f14(ppuVar6,lVar9,lVar9);
        ppuVar6[5] = *(undefined8 **)(lVar9 + 0x1c);
      }
    }
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0x3f800000;
    lVar9 = *param_4;
    if (param_4[1] != lVar9) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uStack_190 = (undefined8 *)(lVar9 + lVar10);
        puVar5 = &uStack_d0;
        FUN_10923ffb4(puVar5,uStack_190,&UNK_10dd5b8f9,&uStack_190,&uStack_110);
        puVar5[3] = uVar11;
        uVar11 = uVar11 + 1;
        lVar9 = *param_4;
        lVar10 = lVar10 + 0x80;
      } while (uVar11 < (ulong)(param_4[1] - lVar9 >> 7));
    }
    puVar5 = *(undefined8 **)(param_2 + 0x48);
    puVar1 = *(undefined8 **)(param_2 + 0x50);
    if (puVar5 != puVar1) {
      do {
        ppuVar6 = &puStack_a0;
        FUN_109287344(ppuVar6,puVar5);
        if (ppuVar6 == (undefined8 **)0x0) {
          FUN_109243bf8(&UNK_10f562942);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10927249c);
          (*pcVar4)();
        }
        if (*(char *)((long)puVar5 + 0x17) < '\0') {
          func_0x000107c3192c(&uStack_110,*puVar5,puVar5[1]);
        }
        else {
          uStack_108 = puVar5[1];
          uStack_110 = *puVar5;
          lStack_100 = puVar5[2];
        }
        uStack_f8 = puVar5[3];
        uStack_f0 = *(undefined4 *)(puVar5 + 4);
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_e8 = 0;
        func_0x000107c2abe0(&uStack_e8,puVar5[5],puVar5[6],
                            ((long)(puVar5[6] - puVar5[5]) >> 3) * -0x3333333333333333);
        uStack_f8 = CONCAT44(*(undefined4 *)((long)puVar5 + 0x1c),
                             *(undefined4 *)((long)ppuVar6 + 0x2c));
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_110,puVar5)
        ;
        if (puVar5 != &uStack_110) {
          FUN_109241c00(&uStack_e8,puVar5[5],puVar5[6],
                        ((long)(puVar5[6] - puVar5[5]) >> 3) * -0x3333333333333333);
        }
        ppuVar6 = ppuVar6 + 5;
        puVar7 = &uStack_d0;
        FUN_1092403d4(puVar7,ppuVar6);
        if (puVar7 == (undefined8 *)0x0) {
          uStack_118 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_120 = 0;
          puStack_128 = (undefined8 *)0x0;
          uStack_150 = 0;
          puStack_158 = (undefined8 *)0x0;
          puStack_140 = (undefined8 *)0x0;
          uStack_148 = 0;
          puStack_170 = (undefined8 *)0x0;
          uStack_178 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          lStack_180 = 0;
          puStack_188 = (undefined8 *)0x0;
          uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,*(uint *)ppuVar6);
          FUN_109240478(&puStack_188,&uStack_110);
          lVar9 = *param_4;
          lVar10 = param_4[1];
          puVar7 = &uStack_d0;
          appuStack_70[0] = ppuVar6;
          FUN_10923ffb4(puVar7,ppuVar6,&UNK_10dd5b8f9,appuStack_70,&uStack_71);
          puVar7[3] = lVar10 - lVar9 >> 7;
          FUN_10923b61c(param_4,&uStack_190);
          appuStack_70[0] = &puStack_128;
          func_0x00010922dcf0(appuStack_70);
          appuStack_70[0] = &puStack_140;
          FUN_10922dd7c(appuStack_70);
          appuStack_70[0] = &puStack_158;
          FUN_10922de08(appuStack_70);
          appuStack_70[0] = &puStack_170;
          func_0x00010922de94(appuStack_70);
          appuStack_70[0] = &puStack_188;
          func_0x00010922dfd4(appuStack_70);
        }
        else {
          FUN_109240478(*param_4 + puVar7[3] * 0x80 + 8,&uStack_110);
        }
        puStack_188 = (undefined8 *)(ulong)*(uint *)((long)puVar5 + 0x1c);
        uStack_190 = (undefined8 *)CONCAT44(*(undefined4 *)(puVar5 + 3),(undefined4)uStack_f8);
        FUN_10927254c(param_1 + (ulong)*(uint *)ppuVar6 * 3,&uStack_190);
        uStack_190 = &uStack_e8;
        func_0x00010922df48(&uStack_190);
        if (lStack_100 < 0) {
          __ZdlPv(uStack_110);
        }
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar1);
    }
    FUN_1092410d8(&uStack_d0);
    FUN_109286eb0(&puStack_a0);
  }
  plVar8 = param_1 + 1;
  lVar9 = 0x60;
  do {
    lVar10 = plVar8[-1];
    lVar2 = *plVar8;
    if (lVar10 != lVar2) {
      FUN_109281db4(lVar10,lVar2,LZCOUNT(lVar2 - lVar10 >> 4) * -2 + 0x7e,1);
    }
    plVar8 = plVar8 + 3;
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != 0);
  return;
}



/* Entry: 10927254c; end: 10927262f;  */

void FUN_10927254c(long *param_1,long *param_2,long *param_3)

{
  undefined8 **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  ulong uVar8;
  undefined8 *extraout_x8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_c1;
  undefined8 **appuStack_c0 [2];
  
  plVar10 = (long *)param_1[1];
  if (plVar10 < (long *)param_1[2]) {
    lVar11 = *param_2;
    plVar10[1] = param_2[1];
    *plVar10 = lVar11;
    plVar10 = plVar10 + 2;
LAB_10927260c:
    param_1[1] = (long)plVar10;
    return;
  }
  lVar11 = *param_1;
  lVar12 = (long)plVar10 - lVar11;
  uVar13 = (lVar12 >> 4) + 1;
  if (uVar13 >> 0x3c == 0) {
    uVar8 = param_1[2] - lVar11;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar13) {
      uVar9 = uVar13;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    if (uVar9 >> 0x3c == 0) {
      lVar5 = uVar9 << 4;
      __Znwm();
      plVar2 = (long *)(lVar5 + lVar12);
      lVar14 = *param_2;
      plVar2[1] = param_2[1];
      *plVar2 = lVar14;
      plVar10 = plVar2 + 2;
      _memcpy(plVar2 + (lVar12 >> 4) * -2,lVar11,lVar12);
      *param_1 = (long)(plVar2 + (lVar12 >> 4) * -2);
      param_1[1] = (long)plVar10;
      param_1[2] = lVar5 + uVar9 * 0x10;
      if (lVar11 != 0) {
        __ZdlPv(lVar11);
      }
      goto LAB_10927260c;
    }
  }
  else {
    FUN_109281da0();
  }
  func_0x000104c4f740();
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  if (param_2 == (long *)0x0) {
    FUN_109271e20(param_3);
    lVar11 = param_1[0xc];
    lVar12 = param_1[0xd];
    if (lVar11 != lVar12) {
      do {
        uStack_158 = CONCAT44(*(undefined4 *)(lVar11 + 0x2c),
                              (uint)(*(int *)(lVar11 + 0x28) != 0x8b52));
        uVar3 = *(undefined4 *)(lVar11 + 0x24);
        uStack_160 = CONCAT44(*(undefined4 *)(lVar11 + 0x20),uVar3);
        FUN_109272ac8(extraout_x8,&uStack_160);
        uStack_1e0 = (undefined8 *)0x0;
        uStack_1d8 = 0;
        lStack_1d0 = 0;
        puStack_1c0 = (undefined8 *)CONCAT44(puStack_1c0._4_4_,1);
        uStack_1b0 = 0;
        puStack_1a8 = (undefined8 *)0x0;
        uStack_1b8 = 0;
        uStack_1c8._4_4_ = *(int *)(lVar11 + 0x2c) << 4;
        uStack_1c8._0_4_ = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_1e0,lVar11 + 8);
        uStack_1c8 = CONCAT44(uStack_1c8._4_4_,uVar3);
        FUN_109240478(*param_3 + 8,&uStack_1e0);
        puStack_f0 = &uStack_1b8;
        func_0x00010922df48(&puStack_f0);
        if (lStack_1d0 < 0) {
          __ZdlPv(uStack_1e0);
        }
        lVar11 = lVar11 + 0x30;
      } while (lVar11 != lVar12);
    }
  }
  else {
    uStack_e8 = 0;
    puStack_f0 = (undefined8 *)0x0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0x3f800000;
    lVar12 = param_2[1];
    for (lVar11 = *param_2; lVar11 != lVar12; lVar11 = lVar11 + 0x28) {
      if (*(int *)(lVar11 + 0x18) == 4) {
        ppuVar7 = &puStack_f0;
        FUN_109286f14(ppuVar7,lVar11,lVar11);
        ppuVar7[5] = *(undefined8 **)(lVar11 + 0x1c);
      }
    }
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_100 = 0x3f800000;
    lVar11 = *param_3;
    if (param_3[1] != lVar11) {
      lVar12 = 0;
      uVar13 = 0;
      do {
        uStack_1e0 = (undefined8 *)(lVar11 + lVar12);
        puVar6 = &uStack_120;
        FUN_10923ffb4(puVar6,uStack_1e0,&UNK_10dd5b8f9,&uStack_1e0,&uStack_160);
        puVar6[3] = uVar13;
        uVar13 = uVar13 + 1;
        lVar11 = *param_3;
        lVar12 = lVar12 + 0x80;
      } while (uVar13 < (ulong)(param_3[1] - lVar11 >> 7));
    }
    lVar11 = param_1[0xc];
    lVar12 = param_1[0xd];
    if (lVar11 != lVar12) {
      do {
        ppuVar7 = &puStack_f0;
        FUN_109287344(ppuVar7,lVar11 + 8);
        if (ppuVar7 == (undefined8 **)0x0) {
          FUN_109243bf8(&UNK_10f562942);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x109272a34);
          (*pcVar4)();
        }
        uStack_160 = 0;
        uStack_158 = 0;
        lStack_150 = 0;
        uStack_148 = 0xffffffff;
        uStack_140 = 1;
        uStack_130 = 0;
        uStack_128 = 0;
        uStack_138 = 0;
        iStack_144 = *(int *)(lVar11 + 0x2c) << 4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_160,lVar11 + 8);
        ppuVar1 = ppuVar7 + 5;
        uStack_148 = *(undefined4 *)((long)ppuVar7 + 0x2c);
        puVar6 = &uStack_120;
        FUN_1092403d4(puVar6,ppuVar1);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_168 = 0;
          uStack_180 = 0;
          uStack_188 = 0;
          uStack_170 = 0;
          puStack_178 = (undefined8 *)0x0;
          uStack_1a0 = 0;
          puStack_1a8 = (undefined8 *)0x0;
          puStack_190 = (undefined8 *)0x0;
          uStack_198 = 0;
          puStack_1c0 = (undefined8 *)0x0;
          uStack_1c8 = 0;
          uStack_1b0 = 0;
          uStack_1b8 = 0;
          lStack_1d0 = 0;
          uStack_1d8 = 0;
          uStack_1e0 = (undefined8 *)CONCAT44(uStack_1e0._4_4_,*(uint *)ppuVar1);
          FUN_109240478(&uStack_1d8,&uStack_160);
          lVar5 = *param_3;
          lVar14 = param_3[1];
          puVar6 = &uStack_120;
          appuStack_c0[0] = ppuVar1;
          FUN_10923ffb4(puVar6,ppuVar1,&UNK_10dd5b8f9,appuStack_c0,&uStack_c1);
          puVar6[3] = lVar14 - lVar5 >> 7;
          FUN_10923b61c(param_3,&uStack_1e0);
          appuStack_c0[0] = &puStack_178;
          func_0x00010922dcf0(appuStack_c0);
          appuStack_c0[0] = &puStack_190;
          FUN_10922dd7c(appuStack_c0);
          appuStack_c0[0] = &puStack_1a8;
          FUN_10922de08(appuStack_c0);
          appuStack_c0[0] = &puStack_1c0;
          func_0x00010922de94(appuStack_c0);
          appuStack_c0[0] = (undefined8 **)&uStack_1d8;
          func_0x00010922dfd4(appuStack_c0);
        }
        else {
          FUN_109240478(*param_3 + puVar6[3] * 0x80 + 8,&uStack_160);
        }
        uStack_1d8 = CONCAT44(*(undefined4 *)(lVar11 + 0x2c),
                              (uint)(*(int *)(lVar11 + 0x28) != 0x8b52));
        uStack_1e0 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar11 + 0x20),uStack_148);
        FUN_109272ac8(extraout_x8 + (ulong)*(uint *)ppuVar1 * 3,&uStack_1e0);
        uStack_1e0 = &uStack_138;
        func_0x00010922df48(&uStack_1e0);
        if (lStack_150 < 0) {
          __ZdlPv(uStack_160);
        }
        lVar11 = lVar11 + 0x30;
      } while (lVar11 != lVar12);
    }
    FUN_1092410d8(&uStack_120);
    FUN_109286eb0(&puStack_f0);
  }
  plVar10 = extraout_x8 + 1;
  lVar11 = 0x60;
  do {
    lVar12 = plVar10[-1];
    lVar5 = *plVar10;
    if (lVar12 != lVar5) {
      FUN_109282ec0(lVar12,lVar5,LZCOUNT(lVar5 - lVar12 >> 4) * -2 + 0x7e,1);
    }
    plVar10 = plVar10 + 3;
    lVar11 = lVar11 + -0x18;
  } while (lVar11 != 0);
  return;
}



/* Entry: 109272630; end: 109272ac7;  */

void FUN_109272630(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  undefined8 **ppuVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined4 uStack_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 uStack_71;
  undefined8 **appuStack_70 [2];
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3 == (long *)0x0) {
    FUN_109271e20(param_4);
    lVar9 = *(long *)(param_2 + 0x60);
    lVar10 = *(long *)(param_2 + 0x68);
    if (lVar9 != lVar10) {
      do {
        uStack_108 = CONCAT44(*(undefined4 *)(lVar9 + 0x2c),(uint)(*(int *)(lVar9 + 0x28) != 0x8b52)
                             );
        uVar4 = *(undefined4 *)(lVar9 + 0x24);
        uStack_110 = CONCAT44(*(undefined4 *)(lVar9 + 0x20),uVar4);
        FUN_109272ac8(param_1,&uStack_110);
        uStack_190 = (undefined8 *)0x0;
        uStack_188 = 0;
        lStack_180 = 0;
        puStack_170 = (undefined8 *)CONCAT44(puStack_170._4_4_,1);
        uStack_160 = 0;
        puStack_158 = (undefined8 *)0x0;
        uStack_168 = 0;
        uStack_178._4_4_ = *(int *)(lVar9 + 0x2c) << 4;
        uStack_178._0_4_ = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_190,lVar9 + 8);
        uStack_178 = CONCAT44(uStack_178._4_4_,uVar4);
        FUN_109240478(*param_4 + 8,&uStack_190);
        puStack_a0 = &uStack_168;
        func_0x00010922df48(&puStack_a0);
        if (lStack_180 < 0) {
          __ZdlPv(uStack_190);
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != lVar10);
    }
  }
  else {
    uStack_98 = 0;
    puStack_a0 = (undefined8 *)0x0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_80 = 0x3f800000;
    lVar10 = param_3[1];
    for (lVar9 = *param_3; lVar9 != lVar10; lVar9 = lVar9 + 0x28) {
      if (*(int *)(lVar9 + 0x18) == 4) {
        ppuVar7 = &puStack_a0;
        FUN_109286f14(ppuVar7,lVar9,lVar9);
        ppuVar7[5] = *(undefined8 **)(lVar9 + 0x1c);
      }
    }
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0x3f800000;
    lVar9 = *param_4;
    if (param_4[1] != lVar9) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uStack_190 = (undefined8 *)(lVar9 + lVar10);
        puVar6 = &uStack_d0;
        FUN_10923ffb4(puVar6,uStack_190,&UNK_10dd5b8f9,&uStack_190,&uStack_110);
        puVar6[3] = uVar11;
        uVar11 = uVar11 + 1;
        lVar9 = *param_4;
        lVar10 = lVar10 + 0x80;
      } while (uVar11 < (ulong)(param_4[1] - lVar9 >> 7));
    }
    lVar9 = *(long *)(param_2 + 0x60);
    lVar10 = *(long *)(param_2 + 0x68);
    if (lVar9 != lVar10) {
      do {
        ppuVar7 = &puStack_a0;
        FUN_109287344(ppuVar7,lVar9 + 8);
        if (ppuVar7 == (undefined8 **)0x0) {
          FUN_109243bf8(&UNK_10f562942);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109272a34);
          (*pcVar5)();
        }
        uStack_110 = 0;
        uStack_108 = 0;
        lStack_100 = 0;
        uStack_f8 = 0xffffffff;
        uStack_f0 = 1;
        uStack_e0 = 0;
        uStack_d8 = 0;
        uStack_e8 = 0;
        iStack_f4 = *(int *)(lVar9 + 0x2c) << 4;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_110,lVar9 + 8);
        ppuVar1 = ppuVar7 + 5;
        uStack_f8 = *(undefined4 *)((long)ppuVar7 + 0x2c);
        puVar6 = &uStack_d0;
        FUN_1092403d4(puVar6,ppuVar1);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_118 = 0;
          uStack_130 = 0;
          uStack_138 = 0;
          uStack_120 = 0;
          puStack_128 = (undefined8 *)0x0;
          uStack_150 = 0;
          puStack_158 = (undefined8 *)0x0;
          puStack_140 = (undefined8 *)0x0;
          uStack_148 = 0;
          puStack_170 = (undefined8 *)0x0;
          uStack_178 = 0;
          uStack_160 = 0;
          uStack_168 = 0;
          lStack_180 = 0;
          uStack_188 = 0;
          uStack_190 = (undefined8 *)CONCAT44(uStack_190._4_4_,*(uint *)ppuVar1);
          FUN_109240478(&uStack_188,&uStack_110);
          lVar3 = *param_4;
          lVar2 = param_4[1];
          puVar6 = &uStack_d0;
          appuStack_70[0] = ppuVar1;
          FUN_10923ffb4(puVar6,ppuVar1,&UNK_10dd5b8f9,appuStack_70,&uStack_71);
          puVar6[3] = lVar2 - lVar3 >> 7;
          FUN_10923b61c(param_4,&uStack_190);
          appuStack_70[0] = &puStack_128;
          func_0x00010922dcf0(appuStack_70);
          appuStack_70[0] = &puStack_140;
          FUN_10922dd7c(appuStack_70);
          appuStack_70[0] = &puStack_158;
          FUN_10922de08(appuStack_70);
          appuStack_70[0] = &puStack_170;
          func_0x00010922de94(appuStack_70);
          appuStack_70[0] = (undefined8 **)&uStack_188;
          func_0x00010922dfd4(appuStack_70);
        }
        else {
          FUN_109240478(*param_4 + puVar6[3] * 0x80 + 8,&uStack_110);
        }
        uStack_188 = CONCAT44(*(undefined4 *)(lVar9 + 0x2c),(uint)(*(int *)(lVar9 + 0x28) != 0x8b52)
                             );
        uStack_190 = (undefined8 *)CONCAT44(*(undefined4 *)(lVar9 + 0x20),uStack_f8);
        FUN_109272ac8(param_1 + (ulong)*(uint *)ppuVar1 * 3,&uStack_190);
        uStack_190 = &uStack_e8;
        func_0x00010922df48(&uStack_190);
        if (lStack_100 < 0) {
          __ZdlPv(uStack_110);
        }
        lVar9 = lVar9 + 0x30;
      } while (lVar9 != lVar10);
    }
    FUN_1092410d8(&uStack_d0);
    FUN_109286eb0(&puStack_a0);
  }
  plVar8 = param_1 + 1;
  lVar9 = 0x60;
  do {
    lVar10 = plVar8[-1];
    lVar3 = *plVar8;
    if (lVar10 != lVar3) {
      FUN_109282ec0(lVar10,lVar3,LZCOUNT(lVar3 - lVar10 >> 4) * -2 + 0x7e,1);
    }
    plVar8 = plVar8 + 3;
    lVar9 = lVar9 + -0x18;
  } while (lVar9 != 0);
  return;
}



/* Entry: 109272ac8; end: 109272bab;  */

/* WARNING: Removing unreachable block (ram,0x0001092733e0) */

void FUN_109272ac8(long *param_1,long *param_2,long *param_3)

{
  long **pplVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  code *pcVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *extraout_x8;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long *unaff_x25;
  long lVar23;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  long lStack_110;
  long *plStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  float fStack_f0;
  undefined1 uStack_d9;
  long **applStack_d8 [3];
  
  plVar19 = (long *)param_1[1];
  if (plVar19 < (long *)param_1[2]) {
    lVar20 = *param_2;
    plVar19[1] = param_2[1];
    *plVar19 = lVar20;
    plVar19 = plVar19 + 2;
LAB_109272b88:
    param_1[1] = (long)plVar19;
    return;
  }
  lVar20 = *param_1;
  lVar21 = (long)plVar19 - lVar20;
  uVar17 = (lVar21 >> 4) + 1;
  if (uVar17 >> 0x3c == 0) {
    uVar9 = param_1[2] - lVar20;
    uVar13 = (long)uVar9 >> 3;
    if (uVar13 <= uVar17) {
      uVar13 = uVar17;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 >> 0x3c == 0) {
      lVar7 = uVar13 << 4;
      __Znwm();
      plVar8 = (long *)(lVar7 + lVar21);
      lVar23 = *param_2;
      plVar8[1] = param_2[1];
      *plVar8 = lVar23;
      plVar19 = plVar8 + 2;
      _memcpy(plVar8 + (lVar21 >> 4) * -2,lVar20,lVar21);
      *param_1 = (long)(plVar8 + (lVar21 >> 4) * -2);
      param_1[1] = (long)plVar19;
      param_1[2] = lVar7 + uVar13 * 0x10;
      if (lVar20 != 0) {
        __ZdlPv(lVar20);
      }
      goto LAB_109272b88;
    }
  }
  else {
    FUN_109282eac();
  }
  func_0x000104c4f740();
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  if (param_2 == (long *)0x0) {
    FUN_109271e20(param_3);
    lVar21 = param_1[7];
    for (lVar20 = param_1[6]; lVar20 != lVar21; lVar20 = lVar20 + 0x30) {
      plStack_1e8 = (long *)((ulong)plStack_1e8 & 0xffffffff00000000);
      func_0x000107c31940(&plStack_1e0,"");
      uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
      uVar6 = *(undefined4 *)(lVar20 + 0x28);
      FUN_109273578();
      uStack_1c8 = CONCAT44(uVar6,*(undefined4 *)(lVar20 + 0x24));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&plStack_1e0,lVar20 + 8);
      plStack_1e8 = (long *)CONCAT44(plStack_1e8._4_4_,*(int *)(lVar20 + 0x24) + 0x40);
      FUN_109273638(extraout_x8,&plStack_1e8);
      plStack_100 = (long *)0x0;
      plStack_108 = (long *)0x0;
      lStack_110 = 0;
      uStack_f8 = 0xffffffff;
      fStack_f0 = 1.4013e-45;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_110,lVar20 + 8);
      uStack_f8 = CONCAT44(uStack_f8._4_4_,plStack_1e8._0_4_);
      uVar6 = *(undefined4 *)(lVar20 + 0x28);
      FUN_1092737f4();
      uStack_f8 = CONCAT44(uVar6,(undefined4)uStack_f8);
      FUN_109240d78(*param_3 + 0x38,&lStack_110);
      if (lStack_1d0 < 0) {
        __ZdlPv(plStack_1e0);
      }
    }
  }
  else {
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    plStack_108 = (long *)0x0;
    lStack_110 = 0;
    fStack_f0 = 1.0;
    plVar19 = (long *)*param_2;
    plVar8 = (long *)param_2[1];
    if (plVar19 != plVar8) {
      do {
        iVar3 = (int)plVar19[3];
        if (iVar3 == 8 || iVar3 == 2) {
          lVar20 = *(long *)((long)plVar19 + 0x1c);
          plVar12 = &lStack_110;
          func_0x000107c31944(plVar12,plVar19);
          plVar18 = plStack_108;
          if (plStack_108 != (long *)0x0) {
            uVar17 = (long)plStack_108 - 1;
            if (((ulong)plStack_108 & uVar17) == 0) {
              unaff_x25 = (long *)(uVar17 & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plStack_108 <= plVar12) {
                uVar13 = 0;
                if (plStack_108 != (long *)0x0) {
                  uVar13 = (ulong)plVar12 / (ulong)plStack_108;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar13 * (long)plStack_108);
              }
            }
            puVar10 = *(undefined8 **)(lStack_110 + (long)unaff_x25 * 8);
            if (puVar10 != (undefined8 *)0x0) {
              for (plVar22 = (long *)*puVar10; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
                plVar11 = (long *)plVar22[1];
                if (plVar11 == plVar12) {
                  plVar11 = &lStack_110;
                  func_0x000104c4fbc4(plVar11,plVar22 + 2,plVar19);
                  if (((ulong)plVar11 & 1) != 0) goto LAB_109272fa8;
                }
                else {
                  if (((ulong)plVar18 & uVar17) == 0) {
                    plVar11 = (long *)((ulong)plVar11 & uVar17);
                  }
                  else if (plVar18 <= plVar11) {
                    uVar13 = 0;
                    if (plVar18 != (long *)0x0) {
                      uVar13 = (ulong)plVar11 / (ulong)plVar18;
                    }
                    plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar18);
                  }
                  if (plVar11 != unaff_x25) break;
                }
              }
            }
          }
          plVar22 = (long *)0x38;
          __Znwm();
          plStack_1e0 = &lStack_110;
          uStack_1d8 = 0;
          *plVar22 = 0;
          plVar22[1] = (long)plVar12;
          plStack_1e8 = plVar22;
          if (*(char *)((long)plVar19 + 0x17) < '\0') {
            func_0x000107c3192c(plVar22 + 2,*plVar19,plVar19[1]);
          }
          else {
            lVar7 = plVar19[1];
            lVar21 = *plVar19;
            plVar22[4] = plVar19[2];
            plVar22[3] = lVar7;
            plVar22[2] = lVar21;
          }
          *(undefined4 *)(plVar22 + 6) = 0;
          plVar22[5] = 0;
          uStack_1d8 = CONCAT71(uStack_1d8._1_7_,1);
          if ((plVar18 == (long *)0x0) || (fStack_f0 * (float)plVar18 < (float)(uStack_f8 + 1))) {
            uVar17 = 1;
            if ((long *)0x2 < plVar18) {
              uVar17 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
            }
            plVar18 = (long *)(uVar17 | (long)plVar18 << 1);
            plVar11 = (long *)(long)((float)(uStack_f8 + 1) / fStack_f0);
            if (plVar18 <= plVar11) {
              plVar18 = plVar11;
            }
            if ((long)plVar18 - 1U == 0) {
              plVar18 = (long *)0x2;
            }
            else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            plVar11 = plStack_108;
            if (plStack_108 < plVar18) {
LAB_109272db4:
              if ((ulong)plVar18 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109273488;
              }
              lVar21 = (long)plVar18 << 3;
              __Znwm();
              bVar2 = lStack_110 != 0;
              lStack_110 = lVar21;
              if (bVar2) {
                __ZdlPv();
              }
              plVar11 = (long *)0x0;
              do {
                *(undefined8 *)(lStack_110 + (long)plVar11 * 8) = 0;
                plVar11 = (long *)((long)plVar11 + 1);
              } while (plVar18 != plVar11);
              plStack_108 = plVar18;
              if (plStack_100 != (long *)0x0) {
                plVar11 = (long *)plStack_100[1];
                uVar17 = (long)plVar18 - 1;
                if (((ulong)plVar18 & uVar17) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & uVar17);
                }
                else if (plVar18 <= plVar11) {
                  uVar13 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar13 = (ulong)plVar11 / (ulong)plVar18;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar13 * (long)plVar18);
                }
                *(long ***)(lStack_110 + (long)plVar11 * 8) = &plStack_100;
                plVar14 = (long *)*plStack_100;
                plVar4 = plStack_100;
                while (plVar14 != (long *)0x0) {
                  plVar16 = (long *)plVar14[1];
                  if (((ulong)plVar18 & uVar17) == 0) {
                    plVar16 = (long *)((ulong)plVar16 & uVar17);
                  }
                  else if (plVar18 <= plVar16) {
                    uVar13 = 0;
                    if (plVar18 != (long *)0x0) {
                      uVar13 = (ulong)plVar16 / (ulong)plVar18;
                    }
                    plVar16 = (long *)((long)plVar16 - uVar13 * (long)plVar18);
                  }
                  plVar15 = plVar14;
                  if (plVar16 != plVar11) {
                    if (*(long *)(lStack_110 + (long)plVar16 * 8) == 0) {
                      *(long **)(lStack_110 + (long)plVar16 * 8) = plVar4;
                      plVar11 = plVar16;
                    }
                    else {
                      *plVar4 = *plVar14;
                      *plVar14 = **(long **)(lStack_110 + (long)plVar16 * 8);
                      **(undefined8 **)(lStack_110 + (long)plVar16 * 8) = plVar14;
                      plVar15 = plVar4;
                    }
                  }
                  plVar4 = plVar15;
                  plVar14 = (long *)*plVar15;
                }
              }
            }
            else if (plVar18 < plStack_108) {
              plVar14 = (long *)(long)((float)uStack_f8 / fStack_f0);
              if ((plStack_108 < (long *)0x3) ||
                 (((ulong)plStack_108 & (long)plStack_108 - 1U) != 0)) {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *)0x1 < plVar14) {
                plVar14 = (long *)(1L << (-LZCOUNT((long)plVar14 + -1) & 0x3fU));
              }
              lVar21 = lStack_110;
              if (plVar18 <= plVar14) {
                plVar18 = plVar14;
              }
              if (plVar18 < plVar11) {
                if (plVar18 != (long *)0x0) goto LAB_109272db4;
                lStack_110 = 0;
                if (lVar21 != 0) {
                  __ZdlPv();
                }
                plStack_108 = (long *)0x0;
              }
            }
            plVar18 = plStack_108;
            if (((ulong)plStack_108 & (long)plStack_108 - 1U) == 0) {
              unaff_x25 = (long *)((long)plStack_108 - 1U & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plStack_108 <= plVar12) {
                uVar17 = 0;
                if (plStack_108 != (long *)0x0) {
                  uVar17 = (ulong)plVar12 / (ulong)plStack_108;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar17 * (long)plStack_108);
              }
            }
          }
          plVar12 = *(long **)(lStack_110 + (long)unaff_x25 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar22 = (long)plStack_100;
            *(long ***)(lStack_110 + (long)unaff_x25 * 8) = &plStack_100;
            plStack_100 = plVar22;
            if (*plVar22 != 0) {
              plVar12 = *(long **)(*plVar22 + 8);
              if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (long)plVar18 - 1U);
              }
              else if (plVar18 <= plVar12) {
                uVar17 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar17 = (ulong)plVar12 / (ulong)plVar18;
                }
                plVar12 = (long *)((long)plVar12 - uVar17 * (long)plVar18);
              }
              *(long **)(lStack_110 + (long)plVar12 * 8) = plVar22;
            }
          }
          else {
            *plVar22 = *plVar12;
            *plVar12 = (long)plVar22;
          }
          plStack_1e8 = (long *)0x0;
          uStack_f8 = uStack_f8 + 1;
          FUN_109287428(&plStack_1e8);
LAB_109272fa8:
          plVar22[5] = lVar20;
          *(bool *)(plVar22 + 6) = iVar3 == 8;
        }
        plVar19 = plVar19 + 5;
      } while (plVar19 != plVar8);
    }
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_120 = 0x3f800000;
    lVar20 = *param_3;
    if (param_3[1] != lVar20) {
      lVar21 = 0;
      uVar17 = 0;
      do {
        plStack_1e8 = (long *)(lVar20 + lVar21);
        puVar10 = &uStack_140;
        FUN_10923ffb4(puVar10,plStack_1e8,&UNK_10dd5b8f9,&plStack_1e8,&uStack_168);
        puVar10[3] = uVar17;
        uVar17 = uVar17 + 1;
        lVar20 = *param_3;
        lVar21 = lVar21 + 0x80;
      } while (uVar17 < (ulong)(param_3[1] - lVar20 >> 7));
    }
    lVar20 = param_1[6];
    lVar21 = param_1[7];
    if (lVar20 != lVar21) {
LAB_1092730b0:
      plVar8 = &lStack_110;
      func_0x000107c31944(plVar8,lVar20 + 8);
      plVar19 = plStack_108;
      if (plStack_108 != (long *)0x0) {
        uVar17 = (long)plStack_108 - 1;
        if (((ulong)plStack_108 & uVar17) == 0) {
          plVar18 = (long *)(uVar17 & (ulong)plVar8);
        }
        else {
          plVar18 = plVar8;
          if (plStack_108 <= plVar8) {
            uVar13 = 0;
            if (plStack_108 != (long *)0x0) {
              uVar13 = (ulong)plVar8 / (ulong)plStack_108;
            }
            plVar18 = (long *)((long)plVar8 - uVar13 * (long)plStack_108);
          }
        }
        plVar12 = *(long **)(lStack_110 + (long)plVar18 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          do {
            plVar22 = (long *)plVar12[1];
            if (plVar22 == plVar8) {
              plVar22 = &lStack_110;
              func_0x000104c4fbc4(plVar22,plVar12 + 2,lVar20 + 8);
              if (((ulong)plVar22 & 1) != 0) goto LAB_10927315c;
            }
            else {
              if (((ulong)plVar19 & uVar17) == 0) {
                plVar22 = (long *)((ulong)plVar22 & uVar17);
              }
              else if (plVar19 <= plVar22) {
                uVar13 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar13 = (ulong)plVar22 / (ulong)plVar19;
                }
                plVar22 = (long *)((long)plVar22 - uVar13 * (long)plVar19);
              }
              if (plVar22 != plVar18) break;
            }
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) break;
          } while( true );
        }
      }
      FUN_109243bf8(&UNK_10f562942);
LAB_109273488:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10927348c);
      (*pcVar5)();
    }
LAB_109273308:
    FUN_1092410d8(&uStack_140);
    FUN_1092738ac(&lStack_110);
  }
  plVar19 = extraout_x8 + 1;
  lVar20 = 0x60;
  do {
    lVar21 = plVar19[-1];
    lVar7 = *plVar19;
    if (lVar21 != lVar7) {
      FUN_10928401c(lVar21,lVar7,LZCOUNT((lVar7 - lVar21 >> 4) * -0x5555555555555555) * -2 + 0x7e,1)
      ;
    }
    plVar19 = plVar19 + 3;
    lVar20 = lVar20 + -0x18;
  } while (lVar20 != 0);
  return;
LAB_10927315c:
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_168 = 0;
  uStack_14c = 0x100000000;
  uStack_150 = *(undefined4 *)((long)plVar12 + 0x2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_168,lVar20 + 8);
  pplVar1 = (long **)(plVar12 + 5);
  uVar6 = *(undefined4 *)(lVar20 + 0x28);
  FUN_1092737f4();
  uStack_14c = CONCAT44(uStack_14c._4_4_,uVar6);
  puVar10 = &uStack_140;
  FUN_1092403d4(puVar10,pplVar1);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_170 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    puStack_180 = (undefined8 *)0x0;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined8 *)0x0;
    puStack_198 = (undefined8 *)0x0;
    uStack_1a0 = 0;
    uStack_1c8 = 0;
    lStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    plStack_1e8 = (long *)CONCAT44(plStack_1e8._4_4_,*(undefined4 *)pplVar1);
    FUN_109240d78(&puStack_1b0,&uStack_168);
    lVar7 = *param_3;
    lVar23 = param_3[1];
    puVar10 = &uStack_140;
    applStack_d8[0] = pplVar1;
    FUN_10923ffb4(puVar10,pplVar1,&UNK_10dd5b8f9,applStack_d8,&uStack_d9);
    puVar10[3] = lVar23 - lVar7 >> 7;
    FUN_10923b61c(param_3,&plStack_1e8);
    applStack_d8[0] = &puStack_180;
    func_0x00010922dcf0(applStack_d8);
    applStack_d8[0] = &puStack_198;
    FUN_10922dd7c(applStack_d8);
    applStack_d8[0] = &puStack_1b0;
    FUN_10922de08(applStack_d8);
    applStack_d8[0] = (long **)&uStack_1c8;
    func_0x00010922de94(applStack_d8);
    applStack_d8[0] = &plStack_1e0;
    func_0x00010922dfd4(applStack_d8);
  }
  else {
    FUN_109240d78(*param_3 + puVar10[3] * 0x80 + 0x38,&uStack_168);
  }
  plStack_1e8 = (long *)((ulong)plStack_1e8 & 0xffffffff00000000);
  func_0x000107c31940(&plStack_1e0,"");
  uStack_1c0._0_1_ = 1;
  uVar6 = *(undefined4 *)(lVar20 + 0x28);
  FUN_109273578();
  uStack_1c8 = CONCAT44(uVar6,*(undefined4 *)(lVar20 + 0x24));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&plStack_1e0,lVar20 + 8);
  uStack_1c0 = CONCAT71(uStack_1c0._1_7_,(char)plVar12[6]) ^ 1;
  plStack_1e8 = (long *)CONCAT44(plStack_1e8._4_4_,uStack_150);
  FUN_109273638(extraout_x8 + (ulong)*(uint *)(plVar12 + 5) * 3,&plStack_1e8);
  if (lStack_1d0 < 0) {
    __ZdlPv(plStack_1e0);
  }
  if (lStack_158 < 0) {
    __ZdlPv(uStack_168);
  }
  lVar20 = lVar20 + 0x30;
  if (lVar20 == lVar21) goto LAB_109273308;
  goto LAB_1092730b0;
}



/* Entry: 109272bac; end: 109273577;  */

/* WARNING: Removing unreachable block (ram,0x0001092733e0) */

void FUN_109272bac(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  long **pplVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *unaff_x25;
  long lVar21;
  long lVar22;
  long *plStack_198;
  long *plStack_190;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined1 uStack_89;
  long **applStack_88 [3];
  
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3 == (long *)0x0) {
    FUN_109271e20(param_4);
    lVar17 = *(long *)(param_2 + 0x38);
    for (lVar21 = *(long *)(param_2 + 0x30); lVar21 != lVar17; lVar21 = lVar21 + 0x30) {
      plStack_198 = (long *)((ulong)plStack_198 & 0xffffffff00000000);
      func_0x000107c31940(&plStack_190,"");
      uStack_170 = CONCAT71(uStack_170._1_7_,1);
      uVar8 = *(undefined4 *)(lVar21 + 0x28);
      FUN_109273578();
      uStack_178 = CONCAT44(uVar8,*(undefined4 *)(lVar21 + 0x24));
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&plStack_190,lVar21 + 8);
      plStack_198 = (long *)CONCAT44(plStack_198._4_4_,*(int *)(lVar21 + 0x24) + 0x40);
      FUN_109273638(param_1,&plStack_198);
      plStack_b0 = (long *)0x0;
      plStack_b8 = (long *)0x0;
      lStack_c0 = 0;
      uStack_a8 = 0xffffffff;
      fStack_a0 = 1.4013e-45;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&lStack_c0,lVar21 + 8);
      uStack_a8 = CONCAT44(uStack_a8._4_4_,plStack_198._0_4_);
      uVar8 = *(undefined4 *)(lVar21 + 0x28);
      FUN_1092737f4();
      uStack_a8 = CONCAT44(uVar8,(undefined4)uStack_a8);
      FUN_109240d78(*param_4 + 0x38,&lStack_c0);
      if (lStack_180 < 0) {
        __ZdlPv(plStack_190);
      }
    }
  }
  else {
    uStack_a8 = 0;
    plStack_b0 = (long *)0x0;
    plStack_b8 = (long *)0x0;
    lStack_c0 = 0;
    fStack_a0 = 1.0;
    plVar19 = (long *)*param_3;
    plVar9 = (long *)param_3[1];
    if (plVar19 != plVar9) {
      do {
        iVar4 = (int)plVar19[3];
        if (iVar4 == 8 || iVar4 == 2) {
          lVar21 = *(long *)((long)plVar19 + 0x1c);
          plVar12 = &lStack_c0;
          func_0x000107c31944(plVar12,plVar19);
          plVar18 = plStack_b8;
          if (plStack_b8 != (long *)0x0) {
            uVar16 = (long)plStack_b8 - 1;
            if (((ulong)plStack_b8 & uVar16) == 0) {
              unaff_x25 = (long *)(uVar16 & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plStack_b8 <= plVar12) {
                uVar5 = 0;
                if (plStack_b8 != (long *)0x0) {
                  uVar5 = (ulong)plVar12 / (ulong)plStack_b8;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar5 * (long)plStack_b8);
              }
            }
            puVar10 = *(undefined8 **)(lStack_c0 + (long)unaff_x25 * 8);
            if (puVar10 != (undefined8 *)0x0) {
              for (plVar20 = (long *)*puVar10; plVar20 != (long *)0x0; plVar20 = (long *)*plVar20) {
                plVar11 = (long *)plVar20[1];
                if (plVar11 == plVar12) {
                  plVar11 = &lStack_c0;
                  func_0x000104c4fbc4(plVar11,plVar20 + 2,plVar19);
                  if (((ulong)plVar11 & 1) != 0) goto LAB_109272fa8;
                }
                else {
                  if (((ulong)plVar18 & uVar16) == 0) {
                    plVar11 = (long *)((ulong)plVar11 & uVar16);
                  }
                  else if (plVar18 <= plVar11) {
                    uVar5 = 0;
                    if (plVar18 != (long *)0x0) {
                      uVar5 = (ulong)plVar11 / (ulong)plVar18;
                    }
                    plVar11 = (long *)((long)plVar11 - uVar5 * (long)plVar18);
                  }
                  if (plVar11 != unaff_x25) break;
                }
              }
            }
          }
          plVar20 = (long *)0x38;
          __Znwm();
          plStack_190 = &lStack_c0;
          uStack_188 = 0;
          *plVar20 = 0;
          plVar20[1] = (long)plVar12;
          plStack_198 = plVar20;
          if (*(char *)((long)plVar19 + 0x17) < '\0') {
            func_0x000107c3192c(plVar20 + 2,*plVar19,plVar19[1]);
          }
          else {
            lVar22 = plVar19[1];
            lVar17 = *plVar19;
            plVar20[4] = plVar19[2];
            plVar20[3] = lVar22;
            plVar20[2] = lVar17;
          }
          *(undefined4 *)(plVar20 + 6) = 0;
          plVar20[5] = 0;
          uStack_188 = CONCAT71(uStack_188._1_7_,1);
          if ((plVar18 == (long *)0x0) || (fStack_a0 * (float)plVar18 < (float)(uStack_a8 + 1))) {
            uVar16 = 1;
            if ((long *)0x2 < plVar18) {
              uVar16 = (ulong)(((ulong)plVar18 & (long)plVar18 - 1U) != 0);
            }
            plVar18 = (long *)(uVar16 | (long)plVar18 << 1);
            plVar11 = (long *)(long)((float)(uStack_a8 + 1) / fStack_a0);
            if (plVar18 <= plVar11) {
              plVar18 = plVar11;
            }
            if ((long)plVar18 - 1U == 0) {
              plVar18 = (long *)0x2;
            }
            else if (((ulong)plVar18 & (long)plVar18 - 1U) != 0) {
              __ZNSt3__112__next_primeEm();
            }
            plVar11 = plStack_b8;
            if (plStack_b8 < plVar18) {
LAB_109272db4:
              if ((ulong)plVar18 >> 0x3d != 0) {
                func_0x000104c4f740();
                goto LAB_109273488;
              }
              lVar17 = (long)plVar18 << 3;
              __Znwm();
              bVar2 = lStack_c0 != 0;
              lStack_c0 = lVar17;
              if (bVar2) {
                __ZdlPv();
              }
              plVar11 = (long *)0x0;
              do {
                *(undefined8 *)(lStack_c0 + (long)plVar11 * 8) = 0;
                plVar11 = (long *)((long)plVar11 + 1);
              } while (plVar18 != plVar11);
              plStack_b8 = plVar18;
              if (plStack_b0 != (long *)0x0) {
                plVar11 = (long *)plStack_b0[1];
                uVar16 = (long)plVar18 - 1;
                if (((ulong)plVar18 & uVar16) == 0) {
                  plVar11 = (long *)((ulong)plVar11 & uVar16);
                }
                else if (plVar18 <= plVar11) {
                  uVar5 = 0;
                  if (plVar18 != (long *)0x0) {
                    uVar5 = (ulong)plVar11 / (ulong)plVar18;
                  }
                  plVar11 = (long *)((long)plVar11 - uVar5 * (long)plVar18);
                }
                *(long ***)(lStack_c0 + (long)plVar11 * 8) = &plStack_b0;
                plVar13 = (long *)*plStack_b0;
                plVar6 = plStack_b0;
                while (plVar13 != (long *)0x0) {
                  plVar15 = (long *)plVar13[1];
                  if (((ulong)plVar18 & uVar16) == 0) {
                    plVar15 = (long *)((ulong)plVar15 & uVar16);
                  }
                  else if (plVar18 <= plVar15) {
                    uVar5 = 0;
                    if (plVar18 != (long *)0x0) {
                      uVar5 = (ulong)plVar15 / (ulong)plVar18;
                    }
                    plVar15 = (long *)((long)plVar15 - uVar5 * (long)plVar18);
                  }
                  plVar14 = plVar13;
                  if (plVar15 != plVar11) {
                    if (*(long *)(lStack_c0 + (long)plVar15 * 8) == 0) {
                      *(long **)(lStack_c0 + (long)plVar15 * 8) = plVar6;
                      plVar11 = plVar15;
                    }
                    else {
                      *plVar6 = *plVar13;
                      *plVar13 = **(long **)(lStack_c0 + (long)plVar15 * 8);
                      **(undefined8 **)(lStack_c0 + (long)plVar15 * 8) = plVar13;
                      plVar14 = plVar6;
                    }
                  }
                  plVar6 = plVar14;
                  plVar13 = (long *)*plVar14;
                }
              }
            }
            else if (plVar18 < plStack_b8) {
              plVar13 = (long *)(long)((float)uStack_a8 / fStack_a0);
              if ((plStack_b8 < (long *)0x3) || (((ulong)plStack_b8 & (long)plStack_b8 - 1U) != 0))
              {
                __ZNSt3__112__next_primeEm();
              }
              else if ((long *)0x1 < plVar13) {
                plVar13 = (long *)(1L << (-LZCOUNT((long)plVar13 + -1) & 0x3fU));
              }
              lVar17 = lStack_c0;
              if (plVar18 <= plVar13) {
                plVar18 = plVar13;
              }
              if (plVar18 < plVar11) {
                if (plVar18 != (long *)0x0) goto LAB_109272db4;
                lStack_c0 = 0;
                if (lVar17 != 0) {
                  __ZdlPv();
                }
                plStack_b8 = (long *)0x0;
              }
            }
            plVar18 = plStack_b8;
            if (((ulong)plStack_b8 & (long)plStack_b8 - 1U) == 0) {
              unaff_x25 = (long *)((long)plStack_b8 - 1U & (ulong)plVar12);
            }
            else {
              unaff_x25 = plVar12;
              if (plStack_b8 <= plVar12) {
                uVar16 = 0;
                if (plStack_b8 != (long *)0x0) {
                  uVar16 = (ulong)plVar12 / (ulong)plStack_b8;
                }
                unaff_x25 = (long *)((long)plVar12 - uVar16 * (long)plStack_b8);
              }
            }
          }
          plVar12 = *(long **)(lStack_c0 + (long)unaff_x25 * 8);
          if (plVar12 == (long *)0x0) {
            *plVar20 = (long)plStack_b0;
            *(long ***)(lStack_c0 + (long)unaff_x25 * 8) = &plStack_b0;
            plStack_b0 = plVar20;
            if (*plVar20 != 0) {
              plVar12 = *(long **)(*plVar20 + 8);
              if (((ulong)plVar18 & (long)plVar18 - 1U) == 0) {
                plVar12 = (long *)((ulong)plVar12 & (long)plVar18 - 1U);
              }
              else if (plVar18 <= plVar12) {
                uVar16 = 0;
                if (plVar18 != (long *)0x0) {
                  uVar16 = (ulong)plVar12 / (ulong)plVar18;
                }
                plVar12 = (long *)((long)plVar12 - uVar16 * (long)plVar18);
              }
              *(long **)(lStack_c0 + (long)plVar12 * 8) = plVar20;
            }
          }
          else {
            *plVar20 = *plVar12;
            *plVar12 = (long)plVar20;
          }
          plStack_198 = (long *)0x0;
          uStack_a8 = uStack_a8 + 1;
          FUN_109287428(&plStack_198);
LAB_109272fa8:
          plVar20[5] = lVar21;
          *(bool *)(plVar20 + 6) = iVar4 == 8;
        }
        plVar19 = plVar19 + 5;
      } while (plVar19 != plVar9);
    }
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d0 = 0x3f800000;
    lVar21 = *param_4;
    if (param_4[1] != lVar21) {
      lVar17 = 0;
      uVar16 = 0;
      do {
        plStack_198 = (long *)(lVar21 + lVar17);
        puVar10 = &uStack_f0;
        FUN_10923ffb4(puVar10,plStack_198,&UNK_10dd5b8f9,&plStack_198,&uStack_118);
        puVar10[3] = uVar16;
        uVar16 = uVar16 + 1;
        lVar21 = *param_4;
        lVar17 = lVar17 + 0x80;
      } while (uVar16 < (ulong)(param_4[1] - lVar21 >> 7));
    }
    lVar21 = *(long *)(param_2 + 0x30);
    lVar17 = *(long *)(param_2 + 0x38);
    if (lVar21 != lVar17) {
LAB_1092730b0:
      plVar9 = &lStack_c0;
      func_0x000107c31944(plVar9,lVar21 + 8);
      plVar19 = plStack_b8;
      if (plStack_b8 != (long *)0x0) {
        uVar16 = (long)plStack_b8 - 1;
        if (((ulong)plStack_b8 & uVar16) == 0) {
          plVar18 = (long *)(uVar16 & (ulong)plVar9);
        }
        else {
          plVar18 = plVar9;
          if (plStack_b8 <= plVar9) {
            uVar5 = 0;
            if (plStack_b8 != (long *)0x0) {
              uVar5 = (ulong)plVar9 / (ulong)plStack_b8;
            }
            plVar18 = (long *)((long)plVar9 - uVar5 * (long)plStack_b8);
          }
        }
        plVar12 = *(long **)(lStack_c0 + (long)plVar18 * 8);
        if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
          do {
            plVar20 = (long *)plVar12[1];
            if (plVar20 == plVar9) {
              plVar20 = &lStack_c0;
              func_0x000104c4fbc4(plVar20,plVar12 + 2,lVar21 + 8);
              if (((ulong)plVar20 & 1) != 0) goto LAB_10927315c;
            }
            else {
              if (((ulong)plVar19 & uVar16) == 0) {
                plVar20 = (long *)((ulong)plVar20 & uVar16);
              }
              else if (plVar19 <= plVar20) {
                uVar5 = 0;
                if (plVar19 != (long *)0x0) {
                  uVar5 = (ulong)plVar20 / (ulong)plVar19;
                }
                plVar20 = (long *)((long)plVar20 - uVar5 * (long)plVar19);
              }
              if (plVar20 != plVar18) break;
            }
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) break;
          } while( true );
        }
      }
      FUN_109243bf8(&UNK_10f562942);
LAB_109273488:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10927348c);
      (*pcVar7)();
    }
LAB_109273308:
    FUN_1092410d8(&uStack_f0);
    FUN_1092738ac(&lStack_c0);
  }
  plVar19 = param_1 + 1;
  lVar21 = 0x60;
  do {
    lVar17 = plVar19[-1];
    lVar22 = *plVar19;
    if (lVar17 != lVar22) {
      FUN_10928401c(lVar17,lVar22,LZCOUNT((lVar22 - lVar17 >> 4) * -0x5555555555555555) * -2 + 0x7e,
                    1);
    }
    plVar19 = plVar19 + 3;
    lVar21 = lVar21 + -0x18;
  } while (lVar21 != 0);
  return;
LAB_10927315c:
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_fc = 0x100000000;
  uStack_100 = *(undefined4 *)((long)plVar12 + 0x2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_118,lVar21 + 8);
  pplVar1 = (long **)(plVar12 + 5);
  uVar8 = *(undefined4 *)(lVar21 + 0x28);
  FUN_1092737f4();
  uStack_fc = CONCAT44(uStack_fc._4_4_,uVar8);
  puVar10 = &uStack_f0;
  FUN_1092403d4(puVar10,pplVar1);
  if (puVar10 == (undefined8 *)0x0) {
    uStack_120 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    puStack_130 = (undefined8 *)0x0;
    uStack_158 = 0;
    puStack_160 = (undefined8 *)0x0;
    puStack_148 = (undefined8 *)0x0;
    uStack_150 = 0;
    uStack_178 = 0;
    lStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_188 = 0;
    plStack_190 = (long *)0x0;
    plStack_198 = (long *)CONCAT44(plStack_198._4_4_,*(undefined4 *)pplVar1);
    FUN_109240d78(&puStack_160,&uStack_118);
    lVar22 = *param_4;
    lVar3 = param_4[1];
    puVar10 = &uStack_f0;
    applStack_88[0] = pplVar1;
    FUN_10923ffb4(puVar10,pplVar1,&UNK_10dd5b8f9,applStack_88,&uStack_89);
    puVar10[3] = lVar3 - lVar22 >> 7;
    FUN_10923b61c(param_4,&plStack_198);
    applStack_88[0] = &puStack_130;
    func_0x00010922dcf0(applStack_88);
    applStack_88[0] = &puStack_148;
    FUN_10922dd7c(applStack_88);
    applStack_88[0] = &puStack_160;
    FUN_10922de08(applStack_88);
    applStack_88[0] = (long **)&uStack_178;
    func_0x00010922de94(applStack_88);
    applStack_88[0] = &plStack_190;
    func_0x00010922dfd4(applStack_88);
  }
  else {
    FUN_109240d78(*param_4 + puVar10[3] * 0x80 + 0x38,&uStack_118);
  }
  plStack_198 = (long *)((ulong)plStack_198 & 0xffffffff00000000);
  func_0x000107c31940(&plStack_190,"");
  uStack_170._0_1_ = 1;
  uVar8 = *(undefined4 *)(lVar21 + 0x28);
  FUN_109273578();
  uStack_178 = CONCAT44(uVar8,*(undefined4 *)(lVar21 + 0x24));
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&plStack_190,lVar21 + 8);
  uStack_170 = CONCAT71(uStack_170._1_7_,(char)plVar12[6]) ^ 1;
  plStack_198 = (long *)CONCAT44(plStack_198._4_4_,uStack_100);
  FUN_109273638(param_1 + (ulong)*(uint *)(plVar12 + 5) * 3,&plStack_198);
  if (lStack_180 < 0) {
    __ZdlPv(plStack_190);
  }
  if (lStack_108 < 0) {
    __ZdlPv(uStack_118);
  }
  lVar21 = lVar21 + 0x30;
  if (lVar21 == lVar17) goto LAB_109273308;
  goto LAB_1092730b0;
}



/* Entry: 109273578; end: 109273637;  */

undefined8 FUN_109273578(int param_1)

{
  if (param_1 < 0x8b63) {
    if (param_1 < 0x8b60) {
      if (param_1 == 0x8b5e) {
        return 0xde1;
      }
      if (param_1 == 0x8b5f) {
        return 0x806f;
      }
    }
    else {
      if (param_1 == 0x8b60) {
        return 0x8513;
      }
      if (param_1 == 0x8b62) {
        return 0xde1;
      }
    }
  }
  else {
    switch(param_1) {
    case 0x8dc1:
    case 0x8dc4:
    case 0x8dcf:
    case 0x8dd7:
      return 0x8c1a;
    case 0x8dc2:
    case 0x8dc3:
    case 0x8dc6:
    case 0x8dc7:
    case 0x8dc8:
    case 0x8dc9:
    case 0x8dcd:
    case 0x8dce:
    case 0x8dd0:
    case 0x8dd1:
    case 0x8dd5:
    case 0x8dd6:
      break;
    case 0x8dc5:
    case 0x8dcc:
    case 0x8dd4:
      return 0x8513;
    case 0x8dca:
    case 0x8dd2:
      return 0xde1;
    case 0x8dcb:
    case 0x8dd3:
      return 0x806f;
    default:
      if (param_1 == 0x8b63) {
        return 0x84f5;
      }
      if (param_1 == 0x8d66) {
        return 0x8d65;
      }
    }
  }
  return 0;
}



/* Entry: 109273638; end: 1092737f3;  */

undefined4 ** FUN_109273638(long *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 **ppuVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  long *plStack_48;
  
  ppuVar13 = (undefined4 **)param_1[1];
  if (ppuVar13 < (undefined4 **)param_1[2]) {
    ppuVar5 = ppuVar13;
    FUN_109283f48(ppuVar13,param_2);
    ppuVar13 = ppuVar13 + 6;
    param_1[1] = (long)ppuVar13;
  }
  else {
    lVar12 = (long)ppuVar13 - *param_1;
    uVar11 = (lVar12 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar11) {
      FUN_109283fa8();
LAB_1092737d0:
      iVar3 = (int)param_1;
      func_0x000104c4f740();
      FUN_109283fbc(&puStack_68);
      __Unwind_Resume();
      if (iVar3 < 0x8d66) {
        if (iVar3 < 0x8b62) {
          if (iVar3 == 0x8b5e) {
            return (undefined4 **)0x2;
          }
          if (iVar3 == 0x8b5f) {
            return (undefined4 **)0x4;
          }
          if (iVar3 == 0x8b60) {
            return (undefined4 **)0x3;
          }
        }
        else if (iVar3 - 0x8b62U < 2) {
          return (undefined4 **)0x2;
        }
      }
      else {
        switch(iVar3) {
        case 0x8dc1:
        case 0x8dc4:
        case 0x8dcf:
        case 0x8dd7:
          return (undefined4 **)0x6;
        case 0x8dc2:
        case 0x8dd0:
        case 0x8dd8:
          return (undefined4 **)0xa;
        case 0x8dc3:
        case 0x8dc6:
        case 0x8dc7:
        case 0x8dc8:
        case 0x8dc9:
        case 0x8dcd:
        case 0x8dce:
        case 0x8dd1:
        case 0x8dd5:
        case 0x8dd6:
          break;
        case 0x8dc5:
        case 0x8dcc:
        case 0x8dd4:
          return (undefined4 **)0x3;
        case 0x8dca:
        case 0x8dd2:
          return (undefined4 **)0x2;
        case 0x8dcb:
        case 0x8dd3:
          return (undefined4 **)0x4;
        default:
          if (iVar3 == 0x8d66) {
            return (undefined4 **)0xb;
          }
        }
      }
      return (undefined4 **)0x0;
    }
    lVar7 = param_1[2] - *param_1 >> 4;
    uVar9 = lVar7 * 0x5555555555555556;
    if (uVar9 < uVar11 || uVar9 - uVar11 == 0) {
      uVar9 = uVar11;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar9 = 0x555555555555555;
    }
    plStack_48 = param_1;
    if (uVar9 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      if (0x555555555555555 < uVar9) goto LAB_1092737d0;
      puVar4 = (undefined4 *)(uVar9 * 0x30);
      __Znwm();
    }
    lVar12 = (long)puVar4 + lVar12;
    puStack_68 = puVar4;
    puStack_60 = (undefined4 *)lVar12;
    puStack_58 = (undefined4 *)lVar12;
    puStack_50 = puVar4 + uVar9 * 0xc;
    FUN_109283f48(lVar12,param_2);
    puVar14 = (undefined4 *)*param_1;
    puVar2 = (undefined4 *)param_1[1];
    puVar1 = (undefined4 *)((long)puVar14 + (lVar12 - (long)puVar2));
    puVar6 = puVar14;
    puVar8 = puVar1;
    if (puVar2 != puVar14) {
      do {
        *puVar8 = *puVar6;
        uVar15 = *(undefined8 *)(puVar6 + 4);
        uVar10 = *(undefined8 *)(puVar6 + 2);
        *(undefined8 *)(puVar8 + 6) = *(undefined8 *)(puVar6 + 6);
        *(undefined8 *)(puVar8 + 4) = uVar15;
        *(undefined8 *)(puVar8 + 2) = uVar10;
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 6) = 0;
        *(undefined8 *)(puVar6 + 2) = 0;
        uVar10 = *(undefined8 *)(puVar6 + 8);
        *(undefined1 *)(puVar8 + 10) = *(undefined1 *)(puVar6 + 10);
        *(undefined8 *)(puVar8 + 8) = uVar10;
        puVar6 = puVar6 + 0xc;
        puVar8 = puVar8 + 0xc;
      } while (puVar6 != puVar2);
      do {
        if (*(char *)((long)puVar14 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar14 + 2));
        }
        puVar14 = puVar14 + 0xc;
      } while (puVar14 != puVar2);
      puVar14 = (undefined4 *)*param_1;
    }
    ppuVar13 = (undefined4 **)(lVar12 + 0x30);
    *param_1 = (long)puVar1;
    param_1[1] = (long)ppuVar13;
    puStack_50 = (undefined4 *)param_1[2];
    param_1[2] = (long)(puVar4 + uVar9 * 0xc);
    ppuVar5 = &puStack_68;
    puStack_68 = puVar14;
    puStack_60 = puVar14;
    puStack_58 = puVar14;
    FUN_109283fbc(ppuVar5);
  }
  param_1[1] = (long)ppuVar13;
  return ppuVar5;
}



/* Entry: 1092737f4; end: 1092738ab;  */

undefined8 FUN_1092737f4(int param_1)

{
  if (param_1 < 0x8d66) {
    if (param_1 < 0x8b62) {
      if (param_1 == 0x8b5e) {
        return 2;
      }
      if (param_1 == 0x8b5f) {
        return 4;
      }
      if (param_1 == 0x8b60) {
        return 3;
      }
    }
    else if (param_1 - 0x8b62U < 2) {
      return 2;
    }
  }
  else {
    switch(param_1) {
    case 0x8dc1:
    case 0x8dc4:
    case 0x8dcf:
    case 0x8dd7:
      return 6;
    case 0x8dc2:
    case 0x8dd0:
    case 0x8dd8:
      return 10;
    case 0x8dc3:
    case 0x8dc6:
    case 0x8dc7:
    case 0x8dc8:
    case 0x8dc9:
    case 0x8dcd:
    case 0x8dce:
    case 0x8dd1:
    case 0x8dd5:
    case 0x8dd6:
      break;
    case 0x8dc5:
    case 0x8dcc:
    case 0x8dd4:
      return 3;
    case 0x8dca:
    case 0x8dd2:
      return 2;
    case 0x8dcb:
    case 0x8dd3:
      return 4;
    default:
      if (param_1 == 0x8d66) {
        return 0xb;
      }
    }
  }
  return 0;
}



/* Entry: 1092738ac; end: 10927390f;  */

long * FUN_1092738ac(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (*(char *)((long)plVar1 + 0x27) < '\0') {
      __ZdlPv(plVar1[2]);
    }
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109273910; end: 109274267;  */

/* WARNING: Removing unreachable block (ram,0x000109273d48) */

void FUN_109273910(undefined8 *param_1,undefined8 param_2,uint *****param_3,uint *****param_4,
                  uint ****param_5)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint ***pppuVar8;
  code *pcVar9;
  bool bVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  uint ****ppppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *****pppppuVar16;
  ulong uVar17;
  undefined8 *extraout_x8;
  ulong uVar18;
  uint ****ppppuVar19;
  uint *****pppppuVar20;
  long *plVar21;
  uint *****pppppuVar22;
  uint *****unaff_x22;
  uint ****unaff_x23;
  long lVar23;
  uint uVar24;
  uint *****unaff_x25;
  ulong uVar25;
  uint *****unaff_x26;
  uint *****pppppuVar26;
  uint *****pppppuVar27;
  uint *****pppppuVar28;
  uint *****pppppuVar29;
  undefined8 uStack_378;
  ulong uStack_370;
  long lStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulong uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  ulong uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  ulong uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b0;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined1 uStack_269;
  ulong *apuStack_268 [3];
  uint ****ppppuStack_250;
  uint ****ppppuStack_248;
  uint ****ppppuStack_240;
  uint ****ppppuStack_238;
  undefined8 *puStack_230;
  uint ***pppuStack_228;
  uint ****ppppuStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  uint ****ppppuStack_208;
  undefined1 *puStack_200;
  code *pcStack_1f8;
  uint ****ppppuStack_1e8;
  uint ***pppuStack_1e0;
  undefined8 *puStack_1d8;
  uint ****ppppuStack_1d0;
  undefined8 uStack_1c8;
  uint ****ppppuStack_1b8;
  uint ****ppppuStack_1b0;
  undefined8 uStack_1a8;
  undefined7 uStack_1a0;
  char cStack_199;
  uint ****ppppuStack_198;
  uint ****ppppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint **ppuStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  uint **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  uint ***pppuStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
  uint ****ppppuStack_128;
  uint ****ppppuStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint ****ppppuStack_108;
  uint ****ppppuStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  uint ****ppppuStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 uStack_b9;
  uint ****ppppuStack_b8;
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  ppppuStack_e0 = (uint ****)0x0;
  uStack_d0 = 0x3f800000;
  pppuStack_1e0 = (uint ***)param_5;
  puStack_1d8 = param_1;
  ppppuStack_1b8 = (uint ****)param_4;
  if (param_3 == (uint *****)0x0) {
    FUN_109271e20(param_4);
    unaff_x22 = (uint *****)0x0;
    unaff_x26 = (uint *****)&uStack_b0;
    pppppuVar27 = &ppppuStack_1b0;
    uStack_1c8 = 0;
    ppppuStack_1d0 = (uint ****)0x0;
    pppppuVar28 = (uint *****)0x1;
    unaff_x23 = (uint ****)&UNK_10f562af1;
    pppppuVar16 = param_4;
    do {
      ppppuStack_108 = (uint ****)CONCAT44(ppppuStack_108._4_4_,(int)unaff_x22);
      pppppuVar22 = (uint *****)(pppuStack_1e0 + (long)unaff_x22 * 3)[1];
      for (pppppuVar20 = (uint *****)pppuStack_1e0[(long)unaff_x22 * 3]; pppppuVar20 != pppppuVar22;
          pppppuVar20 = pppppuVar20 + 6) {
        iVar1 = *(uint *)pppppuVar20 + 0x20;
        ppppuStack_b8 = (uint ****)CONCAT44(ppppuStack_b8._4_4_,iVar1);
        puVar11 = &uStack_f0;
        FUN_10928751c(puVar11,unaff_x22,&ppppuStack_108);
        puVar11 = puVar11 + 3;
        FUN_1092878e8(puVar11,iVar1,&ppppuStack_b8);
        FUN_10923b3a0(puVar11 + 5,pppppuVar20 + 4);
        uStack_1a0 = 0;
        cStack_199 = '\0';
        uStack_1a8._0_7_ = (undefined7)uStack_1c8;
        uStack_1a8._7_1_ = (char)((ulong)uStack_1c8 >> 0x38);
        ppppuStack_1b0 = ppppuStack_1d0;
        ppppuStack_198 = (uint ****)0xffffffff;
        ppppuStack_190 = (uint ****)CONCAT44(ppppuStack_190._4_4_,1);
        func_0x000107c31940(&uStack_130,&UNK_10f562af1);
        unaff_x25 = pppppuVar20 + 1;
        ppppuVar13 = pppppuVar20[2];
        pppppuVar16 = (uint *****)*unaff_x25;
        if (-1 < (char)*(byte *)((long)pppppuVar20 + 0x1f)) {
          ppppuVar13 = (uint ****)(ulong)*(byte *)((long)pppppuVar20 + 0x1f);
          pppppuVar16 = unaff_x25;
        }
        puVar12 = &uStack_130;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (puVar12,0,pppppuVar16,ppppuVar13);
        pppppuVar29 = (uint *****)*puVar12;
        uStack_b0._0_7_ = (undefined7)puVar12[1];
        uStack_b0._7_1_ = (char)*(undefined8 *)((long)puVar12 + 0xf);
        uStack_a8 = (undefined7)((ulong)*(undefined8 *)((long)puVar12 + 0xf) >> 8);
        cVar7 = *(char *)((long)puVar12 + 0x17);
        puVar12[1] = 0;
        puVar12[2] = 0;
        *puVar12 = 0;
        if (cStack_199 < '\0') {
          __ZdlPv(ppppuStack_1b0);
        }
        uStack_1a8._0_7_ = (undefined7)uStack_b0;
        uStack_1a8._7_1_ = uStack_b0._7_1_;
        uStack_1a0 = uStack_a8;
        ppppuStack_1b0 = (uint ****)pppppuVar29;
        cStack_199 = cVar7;
        if ((long)ppppuStack_120 < 0) {
          __ZdlPv(uStack_130);
        }
        ppppuStack_198 = (uint ****)CONCAT44(ppppuStack_198._4_4_,iVar1);
        param_3 = &ppppuStack_1b0;
        FUN_109241028(*ppppuStack_1b8 + 0xd);
        if (cStack_199 < '\0') {
          __ZdlPv(ppppuStack_1b0);
        }
      }
      unaff_x22 = (uint *****)((long)unaff_x22 + 1);
    } while (unaff_x22 != (uint *****)0x4);
  }
  else {
    ppppuStack_1e8 = (uint ****)&ppppuStack_100;
    ppppuStack_100 = (uint ****)0x0;
    lStack_f8 = 0;
    pppppuVar28 = (uint *****)param_3[1];
    ppppuStack_108 = ppppuStack_1e8;
    pppppuVar16 = param_4;
    pppppuVar20 = param_3;
    ppppuStack_1d0 = (uint ****)param_3;
    for (pppppuVar27 = (uint *****)*param_3; pppppuVar27 != pppppuVar28;
        pppppuVar27 = pppppuVar27 + 5) {
      uVar24 = *(uint *)(pppppuVar27 + 3);
      if (uVar24 == 8 || uVar24 == 2) {
        unaff_x26 = (uint *****)pppuStack_1e0[(ulong)*(uint *)((long)pppppuVar27 + 0x1c) * 3];
        pppppuVar22 = (uint *****)
                      (pppuStack_1e0 + (ulong)*(uint *)((long)pppppuVar27 + 0x1c) * 3)[1];
        if (unaff_x26 == pppppuVar22) {
LAB_1092739d4:
          if (unaff_x26 != pppppuVar22) {
            unaff_x23 = pppppuVar20[3];
            ppppuVar13 = pppppuVar20[4];
            ppppuVar19 = unaff_x23;
            if (unaff_x23 == ppppuVar13) {
LAB_109273a10:
              unaff_x23 = ppppuVar19;
              if (ppppuVar19 != ppppuVar13) {
                unaff_x23 = ppppuVar19 + 1;
                uVar24 = *(uint *)unaff_x23;
                pppppuVar16 = (uint *****)((long)ppppuVar19 + 0xc);
                uVar5 = *(uint *)pppppuVar16;
                pppuVar8 = *unaff_x23;
                pppppuVar22 = (uint *****)ppppuStack_100;
                pppppuVar20 = (uint *****)ppppuStack_1e8;
LAB_109273a2c:
                unaff_x22 = pppppuVar20;
                if (pppppuVar22 != (uint *****)0x0) {
                  do {
                    unaff_x22 = pppppuVar22;
                    uVar6 = *(uint *)((long)unaff_x22 + 0x1c);
                    if (uVar24 == uVar6) {
                      uVar6 = *(uint *)(unaff_x22 + 4);
                      if (uVar5 < uVar6) goto LAB_109273a88;
                      if (uVar6 == uVar5 || uVar5 <= uVar6) goto LAB_109273aec;
                    }
                    else {
                      if (uVar24 < uVar6) goto LAB_109273a88;
                      if (uVar24 <= uVar6) goto LAB_109273aec;
                    }
                    pppppuVar22 = (uint *****)unaff_x22[1];
                    if ((uint *****)unaff_x22[1] == (uint *****)0x0) {
                      pppppuVar20 = unaff_x22 + 1;
                      break;
                    }
                  } while( true );
                }
                ppppuVar13 = (uint ****)0x28;
                __Znwm();
                *(uint ****)((long)ppppuVar13 + 0x1c) = pppuVar8;
                *ppppuVar13 = (uint ***)0x0;
                ppppuVar13[1] = (uint ***)0x0;
                ppppuVar13[2] = (uint ***)unaff_x22;
                *pppppuVar20 = ppppuVar13;
                if ((uint *****)*ppppuStack_108 != (uint *****)0x0) {
                  ppppuVar13 = *pppppuVar20;
                  ppppuStack_108 = (uint ****)*ppppuStack_108;
                }
                func_0x000107c27d40(ppppuStack_100,ppppuVar13);
                lStack_f8 = lStack_f8 + 1;
                uVar24 = *(uint *)unaff_x23;
LAB_109273aec:
                puVar11 = &uStack_f0;
                FUN_10928751c(puVar11,uVar24,unaff_x23);
                pppppuVar20 = (uint *****)ppppuStack_1d0;
                puVar11 = puVar11 + 3;
                FUN_1092878e8(puVar11,*(uint *)pppppuVar16);
                param_3 = unaff_x26 + 4;
                FUN_10923b3a0(puVar11 + 5);
                goto LAB_109273b20;
              }
            }
            else {
              do {
                if ((*(uint *)((long)unaff_x23 + 4) == *(uint *)(pppppuVar27 + 4)) &&
                   (ppppuVar19 = unaff_x23,
                   *(uint *)unaff_x23 == *(uint *)((long)pppppuVar27 + 0x1c))) goto LAB_109273a10;
                unaff_x23 = unaff_x23 + 2;
              } while (unaff_x23 != ppppuVar13);
            }
            if (uVar24 != 8) {
              FUN_109243bf8(&UNK_10f562968);
LAB_109274164:
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x109274168);
              (*pcVar9)();
            }
          }
        }
        else {
          do {
            if (*(uint *)unaff_x26 == *(uint *)(pppppuVar27 + 4)) goto LAB_1092739d4;
            unaff_x26 = unaff_x26 + 6;
          } while (unaff_x26 != pppppuVar22);
        }
      }
LAB_109273b20:
    }
    ppppuStack_128 = (uint ****)0x0;
    uStack_130 = 0;
    uStack_118 = 0;
    ppppuStack_120 = (uint ****)0x0;
    uStack_110 = 0x3f800000;
    ppppuVar13 = *param_4;
    if (param_4[1] != ppppuVar13) {
      pppppuVar20 = (uint *****)0x0;
      unaff_x22 = (uint *****)0x0;
      do {
        param_3 = (uint *****)((long)ppppuVar13 + (long)pppppuVar20);
        puVar12 = &uStack_130;
        pppppuVar16 = (uint *****)&UNK_10dd5b8f9;
        ppppuStack_1b0 = (uint ****)param_3;
        FUN_10923ffb4();
        puVar12[3] = (ulong)unaff_x22;
        unaff_x22 = (uint *****)((long)unaff_x22 + 1);
        ppppuVar13 = *param_4;
        pppppuVar20 = pppppuVar20 + 0x10;
      } while (unaff_x22 < (uint *****)((long)param_4[1] - (long)ppppuVar13 >> 7));
    }
    pppppuVar22 = (uint *****)*ppppuStack_1d0;
    unaff_x25 = (uint *****)ppppuStack_1d0[1];
    if (pppppuVar22 != unaff_x25) {
      unaff_x26 = (uint *****)&uStack_1a8;
      ppppuStack_1d0 = (uint ****)&ppppuStack_190;
      pppuStack_1e0 = &ppuStack_178;
      unaff_x23 = (uint ****)&ppuStack_160;
      unaff_x22 = (uint *****)&pppuStack_148;
      pppppuVar27 = (uint *****)0x1;
      pppppuVar28 = (uint *****)0xff;
      do {
        if (*(uint *)(pppppuVar22 + 3) == 1) {
          uStack_a0 = 0;
          uStack_a8 = 0;
          uStack_a1 = 0;
          uStack_b0._0_7_ = 0;
          uStack_b0._7_1_ = '\0';
          uStack_98 = 0xffffffff;
          uStack_90 = 1;
          param_3 = pppppuVar22;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(&uStack_b0);
          uVar24 = *(uint *)(pppppuVar22 + 4);
          uStack_98 = CONCAT44(uStack_98._4_4_,uVar24);
          if ((uint *****)ppppuStack_100 != (uint *****)0x0) {
            ppppuVar13 = (uint ****)((long)pppppuVar22 + 0x1c);
            uVar5 = *(uint *)((long)pppppuVar22 + 0x1c);
            pppppuVar29 = (uint *****)ppppuStack_100;
            do {
              uVar6 = *(uint *)((long)pppppuVar29 + 0x1c);
              if (uVar5 == uVar6) {
                uVar6 = *(uint *)(pppppuVar29 + 4);
                if (uVar6 <= uVar24) {
                  if (uVar6 == uVar24 || uVar24 <= uVar6) {
LAB_109273c60:
                    puVar12 = &uStack_130;
                    FUN_1092403d4(puVar12,ppppuVar13);
                    if (puVar12 == (ulong *)0x0) {
                      uStack_138 = 0;
                      uStack_150 = 0;
                      uStack_158 = 0;
                      uStack_140 = 0;
                      pppuStack_148 = (uint ***)0x0;
                      uStack_170 = 0;
                      ppuStack_178 = (uint **)0x0;
                      ppuStack_160 = (uint **)0x0;
                      uStack_168 = 0;
                      ppppuStack_190 = (uint ****)0x0;
                      ppppuStack_198 = (uint ****)0x0;
                      uStack_180 = 0;
                      uStack_188 = 0;
                      uStack_1a0 = 0;
                      cStack_199 = '\0';
                      uStack_1a8._0_7_ = 0;
                      uStack_1a8._7_1_ = '\0';
                      ppppuStack_1b0 = (uint ****)CONCAT44(ppppuStack_1b0._4_4_,*(uint *)ppppuVar13)
                      ;
                      FUN_109241028(unaff_x22,&uStack_b0);
                      ppppuVar19 = (uint ****)*ppppuStack_1b8;
                      pppppuVar20 = (uint *****)ppppuStack_1b8[1];
                      puVar12 = &uStack_130;
                      pppppuVar16 = (uint *****)&UNK_10dd5b8f9;
                      ppppuStack_b8 = ppppuVar13;
                      FUN_10923ffb4(puVar12,ppppuVar13,&UNK_10dd5b8f9,&ppppuStack_b8,&uStack_b9);
                      puVar12[3] = (long)pppppuVar20 - (long)ppppuVar19 >> 7;
                      param_3 = &ppppuStack_1b0;
                      FUN_10923b61c(ppppuStack_1b8);
                      ppppuStack_b8 = (uint ****)unaff_x22;
                      func_0x00010922dcf0(&ppppuStack_b8);
                      ppppuStack_b8 = unaff_x23;
                      FUN_10922dd7c(&ppppuStack_b8);
                      ppppuStack_b8 = (uint ****)pppuStack_1e0;
                      FUN_10922de08(&ppppuStack_b8);
                      ppppuStack_b8 = ppppuStack_1d0;
                      func_0x00010922de94(&ppppuStack_b8);
                      ppppuStack_b8 = (uint ****)unaff_x26;
                      func_0x00010922dfd4(&ppppuStack_b8);
                      param_4 = (uint *****)ppppuStack_1b8;
                    }
                    else {
                      param_3 = (uint *****)&uStack_b0;
                      FUN_109241028(*param_4 + puVar12[3] * 0x10 + 0xd);
                    }
                    break;
                  }
LAB_109273c50:
                  pppppuVar29 = pppppuVar29 + 1;
                }
              }
              else if (uVar6 <= uVar5) {
                if (uVar5 <= uVar6) goto LAB_109273c60;
                goto LAB_109273c50;
              }
              pppppuVar29 = (uint *****)*pppppuVar29;
            } while (pppppuVar29 != (uint *****)0x0);
          }
        }
        pppppuVar22 = pppppuVar22 + 5;
      } while (pppppuVar22 != unaff_x25);
    }
    FUN_1092410d8(&uStack_130);
    FUN_1092879bc(ppppuStack_100);
  }
  puStack_1d8[9] = 0;
  puStack_1d8[8] = 0;
  puStack_1d8[0xb] = 0;
  puStack_1d8[10] = 0;
  puStack_1d8[5] = 0;
  puStack_1d8[4] = 0;
  puStack_1d8[7] = 0;
  puStack_1d8[6] = 0;
  puStack_1d8[1] = 0;
  *puStack_1d8 = 0;
  puStack_1d8[3] = 0;
  puStack_1d8[2] = 0;
  puVar11 = puStack_1d8;
  if ((uint *****)ppppuStack_e0 != (uint *****)0x0) {
    pppppuVar22 = (uint *****)ppppuStack_e0;
    do {
      unaff_x26 = (uint *****)pppppuVar22[3];
      pppppuVar28 = pppppuVar22 + 4;
      ppppuStack_1b8 = (uint ****)pppppuVar22;
      while (unaff_x26 != pppppuVar28) {
        uStack_130 = uStack_130 & 0xffffffff00000000;
        ppppuStack_120 = (uint ****)0x0;
        uStack_118 = 0;
        ppppuStack_128 = (uint ****)0x0;
        if (&ppppuStack_128 != unaff_x26 + 5) {
          FUN_10928555c(&ppppuStack_128,unaff_x26[5],unaff_x26[6],
                        (long)unaff_x26[6] - (long)unaff_x26[5] >> 2);
        }
        uVar24 = *(uint *)(unaff_x26 + 4);
        unaff_x23 = (uint ****)(ulong)uVar24;
        uStack_130 = CONCAT44(uStack_130._4_4_,uVar24);
        pppppuVar27 = (uint *****)(puVar11 + (ulong)*(uint *)(pppppuVar22 + 2) * 3);
        pppppuVar20 = (uint *****)pppppuVar27[1];
        if (pppppuVar20 < pppppuVar27[2]) {
          *(uint *)pppppuVar20 = uVar24;
          pppppuVar20[2] = (uint ****)0x0;
          pppppuVar20[3] = (uint ****)0x0;
          pppppuVar20[1] = (uint ****)0x0;
          param_3 = (uint *****)ppppuStack_128;
          pppppuVar16 = (uint *****)ppppuStack_120;
          FUN_109285684();
          unaff_x22 = pppppuVar20 + 4;
        }
        else {
          lVar23 = (long)pppppuVar20 - (long)*pppppuVar27;
          uVar25 = (lVar23 >> 5) + 1;
          if (uVar25 >> 0x3b != 0) {
            FUN_1092856fc();
            goto LAB_109274164;
          }
          uVar17 = (long)pppppuVar27[2] - (long)*pppppuVar27;
          uVar18 = (long)uVar17 >> 4;
          if (uVar18 <= uVar25) {
            uVar18 = uVar25;
          }
          if (0x7fffffffffffffdf < uVar17) {
            uVar18 = 0x7ffffffffffffff;
          }
          ppppuStack_190 = (uint ****)pppppuVar27;
          if (uVar18 == 0) {
            ppppuVar13 = (uint ****)0x0;
          }
          else {
            if (uVar18 >> 0x3b != 0) {
              func_0x000104c4f740();
              goto LAB_109274164;
            }
            ppppuVar13 = (uint ****)(uVar18 << 5);
            __Znwm();
          }
          puVar2 = (uint *)((long)ppppuVar13 + lVar23);
          uStack_1a8._0_7_ = SUB87(puVar2,0);
          uStack_1a8._7_1_ = (char)((ulong)puVar2 >> 0x38);
          *puVar2 = uVar24;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[6] = 0;
          puVar2[7] = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
          param_3 = (uint *****)ppppuStack_128;
          pppppuVar16 = (uint *****)ppppuStack_120;
          ppppuStack_1b0 = ppppuVar13;
          uStack_1a0 = (undefined7)uStack_1a8;
          cStack_199 = uStack_1a8._7_1_;
          ppppuStack_198 = ppppuVar13 + uVar18 * 4;
          FUN_109285684();
          unaff_x22 = (uint *****)(puVar2 + 8);
          uStack_1a0 = SUB87(unaff_x22,0);
          cStack_199 = (char)((ulong)unaff_x22 >> 0x38);
          pppppuVar29 = (uint *****)*pppppuVar27;
          pppppuVar26 = (uint *****)pppppuVar27[1];
          unaff_x23 = (uint ****)((long)puVar2 + ((long)pppppuVar29 - (long)pppppuVar26));
          pppppuVar22 = pppppuVar29;
          ppppuVar19 = unaff_x23;
          pppppuVar20 = (uint *****)(ppppuVar13 + uVar18 * 4);
          if ((long)pppppuVar29 - (long)pppppuVar26 != 0) {
            do {
              *(uint *)ppppuVar19 = *(uint *)pppppuVar22;
              ppppuVar19[2] = (uint ***)0x0;
              ppppuVar19[3] = (uint ***)0x0;
              ppppuVar19[1] = (uint ***)0x0;
              ppppuVar13 = pppppuVar22[1];
              ppppuVar19[2] = (uint ***)pppppuVar22[2];
              ppppuVar19[1] = (uint ***)ppppuVar13;
              ppppuVar19[3] = (uint ***)pppppuVar22[3];
              pppppuVar22[1] = (uint ****)0x0;
              pppppuVar22[2] = (uint ****)0x0;
              pppppuVar22[3] = (uint ****)0x0;
              pppppuVar22 = pppppuVar22 + 4;
              ppppuVar19 = ppppuVar19 + 4;
            } while (pppppuVar22 != pppppuVar26);
            do {
              if (pppppuVar29[1] != (uint ****)0x0) {
                pppppuVar29[2] = pppppuVar29[1];
                __ZdlPv();
              }
              pppppuVar29 = pppppuVar29 + 4;
            } while (pppppuVar29 != pppppuVar26);
            pppppuVar29 = (uint *****)*pppppuVar27;
            unaff_x22 = (uint *****)CONCAT17(cStack_199,uStack_1a0);
            pppppuVar20 = (uint *****)ppppuStack_198;
          }
          *pppppuVar27 = unaff_x23;
          pppppuVar27[1] = (uint ****)unaff_x22;
          ppppuStack_198 = pppppuVar27[2];
          pppppuVar27[2] = (uint ****)pppppuVar20;
          uStack_1a0 = SUB87(pppppuVar29,0);
          cStack_199 = (char)((ulong)pppppuVar29 >> 0x38);
          ppppuStack_1b0 = (uint ****)pppppuVar29;
          uStack_1a8._0_7_ = uStack_1a0;
          uStack_1a8._7_1_ = cStack_199;
          FUN_109285710(&ppppuStack_1b0);
          pppppuVar22 = (uint *****)ppppuStack_1b8;
          puVar11 = puStack_1d8;
        }
        pppppuVar27[1] = (uint ****)unaff_x22;
        if ((uint *****)ppppuStack_128 != (uint *****)0x0) {
          ppppuStack_120 = ppppuStack_128;
          __ZdlPv();
        }
        pppppuVar29 = (uint *****)unaff_x26[1];
        pppppuVar26 = unaff_x26;
        if ((uint *****)unaff_x26[1] == (uint *****)0x0) {
          do {
            unaff_x26 = (uint *****)pppppuVar26[2];
            bVar10 = (uint *****)*unaff_x26 != pppppuVar26;
            pppppuVar26 = unaff_x26;
          } while (bVar10);
        }
        else {
          do {
            unaff_x26 = pppppuVar29;
            pppppuVar29 = (uint *****)*unaff_x26;
          } while ((uint *****)*unaff_x26 != (uint *****)0x0);
        }
      }
      unaff_x25 = (uint *****)0x18;
      pppppuVar22 = (uint *****)*pppppuVar22;
    } while (pppppuVar22 != (uint *****)0x0);
  }
  puVar14 = &uStack_f0;
  FUN_109287478();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  FUN_109287478(&uStack_f0);
  puVar15 = puVar14;
  __Unwind_Resume();
  pcStack_1f8 = FUN_109274268;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_280 = 0x3f800000;
  ppppuVar13 = *pppppuVar16;
  ppppuStack_250 = (uint ****)pppppuVar28;
  ppppuStack_248 = (uint ****)pppppuVar27;
  ppppuStack_240 = (uint ****)unaff_x26;
  ppppuStack_238 = (uint ****)unaff_x25;
  puStack_230 = puVar11;
  pppuStack_228 = (uint ***)unaff_x23;
  ppppuStack_220 = (uint ****)unaff_x22;
  uStack_218 = 0;
  puStack_210 = puVar14;
  ppppuStack_208 = (uint ****)pppppuVar20;
  puStack_200 = &stack0xfffffffffffffff0;
  if (pppppuVar16[1] != ppppuVar13) {
    lVar23 = 0;
    uVar25 = 0;
    do {
      uStack_378 = (long)ppppuVar13 + lVar23;
      puVar11 = &uStack_2a0;
      FUN_10923ffb4(puVar11,uStack_378,&UNK_10dd5b8f9,&uStack_378,&uStack_2d0);
      puVar11[3] = uVar25;
      uVar25 = uVar25 + 1;
      ppppuVar13 = *pppppuVar16;
      lVar23 = lVar23 + 0x80;
    } while (uVar25 < (ulong)((long)pppppuVar16[1] - (long)ppppuVar13 >> 7));
  }
  extraout_x8[9] = 0;
  extraout_x8[8] = 0;
  extraout_x8[0xb] = 0;
  extraout_x8[10] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  if (param_3 == (uint *****)0x0) {
    FUN_109271e20(pppppuVar16);
    lVar3 = puVar15[4];
    for (lVar23 = puVar15[3]; lVar23 != lVar3; lVar23 = lVar23 + 0x28) {
      uVar25 = (ulong)uStack_2c8 >> 0x20;
      uStack_2c8 = CONCAT44((int)uVar25,0x88ba);
      iVar1 = *(int *)(lVar23 + 0x24) + 0x80;
      uStack_2d0 = CONCAT44(*(undefined4 *)(lVar23 + 0x20),iVar1);
      FUN_1092746c8(extraout_x8,&uStack_2d0);
      uStack_378 = 0;
      uStack_370 = 0;
      lStack_368 = 0;
      uStack_358 = 0x100000000;
      uStack_360 = 0xffffffff;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_378,lVar23 + 8);
      uStack_360 = CONCAT44(uStack_360._4_4_,iVar1);
      uStack_358 = uStack_358 & 0xffffffff00000000;
      FUN_109240e28(*pppppuVar16 + 10,&uStack_378);
      if (lStack_368 < 0) {
        __ZdlPv(uStack_378);
      }
    }
  }
  else {
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b0 = 0x3f800000;
    ppppuVar19 = param_3[1];
    for (ppppuVar13 = *param_3; ppppuVar13 != ppppuVar19; ppppuVar13 = ppppuVar13 + 5) {
      if (*(int *)(ppppuVar13 + 3) == 3) {
        puVar11 = &uStack_2d0;
        FUN_109286f14(puVar11,ppppuVar13,ppppuVar13);
        puVar11[5] = *(undefined8 *)((long)ppppuVar13 + 0x1c);
      }
    }
    lVar23 = puVar15[3];
    lVar3 = puVar15[4];
    if (lVar23 != lVar3) {
      do {
        puVar11 = &uStack_2d0;
        FUN_109287344(puVar11,lVar23 + 8);
        if (puVar11 == (undefined8 *)0x0) {
          FUN_109243bf8(&UNK_10f56298e);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x109274624);
          (*pcVar9)();
        }
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        lStack_2e8 = 0;
        uStack_2d8 = 0x100000000;
        uStack_2e0 = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_2f8,lVar23 + 8);
        puVar12 = puVar11 + 5;
        uStack_2e0 = CONCAT44(uStack_2e0._4_4_,*(undefined4 *)((long)puVar11 + 0x2c));
        uStack_2d8 = uStack_2d8 & 0xffffffff00000000;
        puVar11 = &uStack_2a0;
        FUN_1092403d4(puVar11,puVar12);
        if (puVar11 == (undefined8 *)0x0) {
          uStack_300 = 0;
          uStack_318 = 0;
          uStack_320 = 0;
          uStack_308 = 0;
          uStack_310 = 0;
          uStack_338 = 0;
          uStack_340 = 0;
          uStack_328 = 0;
          uStack_330 = 0;
          uStack_358 = 0;
          uStack_360 = 0;
          uStack_348 = 0;
          uStack_350 = 0;
          lStack_368 = 0;
          uStack_370 = 0;
          uStack_378 = CONCAT44(uStack_378._4_4_,(uint)*puVar12);
          FUN_109240e28(&uStack_328,&uStack_2f8);
          ppppuVar13 = *pppppuVar16;
          ppppuVar19 = pppppuVar16[1];
          puVar11 = &uStack_2a0;
          apuStack_268[0] = puVar12;
          FUN_10923ffb4(puVar11,puVar12,&UNK_10dd5b8f9,apuStack_268,&uStack_269);
          puVar11[3] = (long)ppppuVar19 - (long)ppppuVar13 >> 7;
          FUN_10923b61c(pppppuVar16,&uStack_378);
          apuStack_268[0] = &uStack_310;
          func_0x00010922dcf0(apuStack_268);
          apuStack_268[0] = &uStack_328;
          FUN_10922dd7c(apuStack_268);
          apuStack_268[0] = &uStack_340;
          FUN_10922de08(apuStack_268);
          apuStack_268[0] = &uStack_358;
          func_0x00010922de94(apuStack_268);
          apuStack_268[0] = &uStack_370;
          func_0x00010922dfd4(apuStack_268);
        }
        else {
          FUN_109240e28(*pppppuVar16 + puVar11[3] * 0x10 + 10,&uStack_2f8);
        }
        uStack_370 = CONCAT44(uStack_370._4_4_,0x88ba);
        uStack_378 = CONCAT44(*(undefined4 *)(lVar23 + 0x20),(undefined4)uStack_2e0);
        FUN_1092746c8(extraout_x8 + (ulong)(uint)*puVar12 * 3,&uStack_378);
        if (lStack_2e8 < 0) {
          __ZdlPv(uStack_2f8);
        }
        lVar23 = lVar23 + 0x28;
      } while (lVar23 != lVar3);
    }
    FUN_109286eb0(&uStack_2d0);
  }
  plVar21 = extraout_x8 + 1;
  lVar23 = 0x60;
  do {
    lVar3 = plVar21[-1];
    lVar4 = *plVar21;
    if (lVar3 != lVar4) {
      FUN_109285784(lVar3,lVar4,LZCOUNT((lVar4 - lVar3 >> 2) * -0x5555555555555555) * -2 + 0x7e,1);
    }
    plVar21 = plVar21 + 3;
    lVar23 = lVar23 + -0x18;
  } while (lVar23 != 0);
  FUN_1092410d8(&uStack_2a0);
  return;
LAB_109273a88:
  pppppuVar22 = (uint *****)*unaff_x22;
  pppppuVar20 = unaff_x22;
  goto LAB_109273a2c;
}



/* Entry: 109274268; end: 1092746c7;  */

void FUN_109274268(undefined8 *param_1,long param_2,long *param_3,long *param_4)

{
  int iVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uStack_188;
  ulong uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_79;
  ulong *apuStack_78 [3];
  
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_90 = 0x3f800000;
  lVar8 = *param_4;
  if (param_4[1] != lVar8) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uStack_188 = lVar8 + lVar9;
      puVar6 = &uStack_b0;
      FUN_10923ffb4(puVar6,uStack_188,&UNK_10dd5b8f9,&uStack_188,&uStack_e0);
      puVar6[3] = uVar10;
      uVar10 = uVar10 + 1;
      lVar8 = *param_4;
      lVar9 = lVar9 + 0x80;
    } while (uVar10 < (ulong)(param_4[1] - lVar8 >> 7));
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_3 == (long *)0x0) {
    FUN_109271e20(param_4);
    lVar9 = *(long *)(param_2 + 0x20);
    for (lVar8 = *(long *)(param_2 + 0x18); lVar8 != lVar9; lVar8 = lVar8 + 0x28) {
      uVar10 = (ulong)uStack_d8 >> 0x20;
      uStack_d8 = CONCAT44((int)uVar10,0x88ba);
      iVar1 = *(int *)(lVar8 + 0x24) + 0x80;
      uStack_e0 = CONCAT44(*(undefined4 *)(lVar8 + 0x20),iVar1);
      FUN_1092746c8(param_1,&uStack_e0);
      uStack_188 = 0;
      uStack_180 = 0;
      lStack_178 = 0;
      uStack_168 = 0x100000000;
      uStack_170 = 0xffffffff;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                (&uStack_188,lVar8 + 8);
      uStack_170 = CONCAT44(uStack_170._4_4_,iVar1);
      uStack_168 = uStack_168 & 0xffffffff00000000;
      FUN_109240e28(*param_4 + 0x50,&uStack_188);
      if (lStack_178 < 0) {
        __ZdlPv(uStack_188);
      }
    }
  }
  else {
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c0 = 0x3f800000;
    lVar9 = param_3[1];
    for (lVar8 = *param_3; lVar8 != lVar9; lVar8 = lVar8 + 0x28) {
      if (*(int *)(lVar8 + 0x18) == 3) {
        puVar6 = &uStack_e0;
        FUN_109286f14(puVar6,lVar8,lVar8);
        puVar6[5] = *(undefined8 *)(lVar8 + 0x1c);
      }
    }
    lVar8 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 0x20);
    if (lVar8 != lVar9) {
      do {
        puVar6 = &uStack_e0;
        FUN_109287344(puVar6,lVar8 + 8);
        if (puVar6 == (undefined8 *)0x0) {
          FUN_109243bf8(&UNK_10f56298e);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x109274624);
          (*pcVar5)();
        }
        uStack_108 = 0;
        uStack_100 = 0;
        lStack_f8 = 0;
        uStack_e8 = 0x100000000;
        uStack_f0 = 0xffffffff;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_108,lVar8 + 8);
        puVar2 = puVar6 + 5;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,*(undefined4 *)((long)puVar6 + 0x2c));
        uStack_e8 = uStack_e8 & 0xffffffff00000000;
        puVar6 = &uStack_b0;
        FUN_1092403d4(puVar6,puVar2);
        if (puVar6 == (undefined8 *)0x0) {
          uStack_110 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_138 = 0;
          uStack_140 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          lStack_178 = 0;
          uStack_180 = 0;
          uStack_188 = CONCAT44(uStack_188._4_4_,(uint)*puVar2);
          FUN_109240e28(&uStack_138,&uStack_108);
          lVar4 = *param_4;
          lVar3 = param_4[1];
          puVar6 = &uStack_b0;
          apuStack_78[0] = puVar2;
          FUN_10923ffb4(puVar6,puVar2,&UNK_10dd5b8f9,apuStack_78,&uStack_79);
          puVar6[3] = lVar3 - lVar4 >> 7;
          FUN_10923b61c(param_4,&uStack_188);
          apuStack_78[0] = &uStack_120;
          func_0x00010922dcf0(apuStack_78);
          apuStack_78[0] = &uStack_138;
          FUN_10922dd7c(apuStack_78);
          apuStack_78[0] = &uStack_150;
          FUN_10922de08(apuStack_78);
          apuStack_78[0] = &uStack_168;
          func_0x00010922de94(apuStack_78);
          apuStack_78[0] = &uStack_180;
          func_0x00010922dfd4(apuStack_78);
        }
        else {
          FUN_109240e28(*param_4 + puVar6[3] * 0x80 + 0x50,&uStack_108);
        }
        uStack_180 = CONCAT44(uStack_180._4_4_,0x88ba);
        uStack_188 = CONCAT44(*(undefined4 *)(lVar8 + 0x20),(undefined4)uStack_f0);
        FUN_1092746c8(param_1 + (ulong)(uint)*puVar2 * 3,&uStack_188);
        if (lStack_f8 < 0) {
          __ZdlPv(uStack_108);
        }
        lVar8 = lVar8 + 0x28;
      } while (lVar8 != lVar9);
    }
    FUN_109286eb0(&uStack_e0);
  }
  plVar7 = param_1 + 1;
  lVar8 = 0x60;
  do {
    lVar9 = plVar7[-1];
    lVar4 = *plVar7;
    if (lVar9 != lVar4) {
      FUN_109285784(lVar9,lVar4,LZCOUNT((lVar4 - lVar9 >> 2) * -0x5555555555555555) * -2 + 0x7e,1);
    }
    plVar7 = plVar7 + 3;
    lVar8 = lVar8 + -0x18;
  } while (lVar8 != 0);
  FUN_1092410d8(&uStack_b0);
  return;
}



/* Entry: 1092746c8; end: 1092747cf;  */

void FUN_1092746c8(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *extraout_x8;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  plVar1 = (long *)param_1[1];
  if (plVar1 < (long *)param_1[2]) {
    lVar3 = *param_2;
    *(int *)(plVar1 + 1) = (int)param_2[1];
    *plVar1 = lVar3;
    lVar4 = (long)plVar1 + 0xc;
LAB_1092747b0:
    param_1[1] = lVar4;
    return;
  }
  lVar3 = *param_1;
  uVar5 = ((long)plVar1 - lVar3 >> 2) * -0x5555555555555555 + 1;
  if (uVar5 < 0x1555555555555556) {
    lVar4 = param_1[2] - lVar3 >> 2;
    uVar6 = lVar4 * 0x5555555555555556;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar6 = uVar5;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar4 * -0x5555555555555555)) {
      uVar6 = 0x1555555555555555;
    }
    if (uVar6 < 0x1555555555555556) {
      lVar2 = uVar6 * 0xc;
      __Znwm();
      plVar1 = (long *)(lVar2 + ((long)plVar1 - lVar3));
      *plVar1 = *param_2;
      *(int *)(plVar1 + 1) = (int)param_2[1];
      lVar4 = (long)plVar1 + 0xc;
      _memcpy();
      *param_1 = lVar2;
      param_1[1] = lVar4;
      param_1[2] = lVar2 + uVar6 * 0xc;
      if (lVar3 != 0) {
        __ZdlPv(lVar3);
      }
      goto LAB_1092747b0;
    }
  }
  else {
    FUN_109285770();
  }
  func_0x000104c4f740();
  FUN_109271e20(param_2);
  if (*(int *)((long)param_1 + 0x94) == 0) {
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)(extraout_x8 + 3) = 0;
    extraout_x8[2] = 0;
  }
  else {
    FUN_109240478(*param_2 + 8,param_1 + 0xf);
    *extraout_x8 = 0;
    extraout_x8[1] = 0;
    *(undefined4 *)(extraout_x8 + 3) = 0;
    extraout_x8[2] = 0;
    if (param_1 + 0x17 != extraout_x8) {
      FUN_109286d44(extraout_x8,param_1[0x17],param_1[0x18],
                    (param_1[0x18] - param_1[0x17] >> 2) * -0x3333333333333333);
    }
    *(undefined4 *)(extraout_x8 + 3) = *(undefined4 *)((long)param_1 + 0x94);
  }
  return;
}



/* Entry: 1092747d0; end: 109274887;  */

void FUN_1092747d0(undefined8 *param_1,long param_2,long *param_3)

{
  FUN_109271e20(param_3);
  if (*(int *)(param_2 + 0x94) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  else {
    FUN_109240478(*param_3 + 8,param_2 + 0x78);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    if ((undefined8 *)(param_2 + 0xb8) != param_1) {
      FUN_109286d44(param_1,*(long *)(param_2 + 0xb8),*(long *)(param_2 + 0xc0),
                    (*(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8) >> 2) *
                    -0x3333333333333333);
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x94);
  }
  return;
}



/* Entry: 109274888; end: 109274903;  */

undefined8 * FUN_109274888(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_109274904(param_1);
    lVar1 = param_1[1];
    _memset(lVar1,*param_3,param_2);
    param_1[1] = lVar1 + param_2;
  }
  return param_1;
}



/* Entry: 109274904; end: 10927493f;  */

undefined4 ** FUN_109274904(undefined8 *param_1,undefined4 **param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 **ppuVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 **ppuStack_78;
  
  if (-1 < (long)param_2) {
    ppuVar3 = param_2;
    __Znwm();
    *param_1 = ppuVar3;
    param_1[1] = ppuVar3;
    param_1[2] = (long)ppuVar3 + (long)param_2;
    return ppuVar3;
  }
  FUN_109274940();
  ppuVar3 = (undefined4 **)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  ppuVar12 = (undefined4 **)ppuVar3[1];
  if (ppuVar12 < ppuVar3[2]) {
    ppuVar5 = ppuVar12;
    FUN_109274b10(ppuVar12,param_2);
    ppuVar12 = ppuVar12 + 6;
    ppuVar3[1] = (undefined4 *)ppuVar12;
  }
  else {
    lVar11 = (long)ppuVar12 - (long)*ppuVar3;
    uVar10 = (lVar11 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar10) {
      FUN_109274b70();
LAB_109274aec:
      func_0x000104c4f740();
      FUN_109274b84(&puStack_98);
      __Unwind_Resume();
      *(undefined4 *)ppuVar3 = *(undefined4 *)param_2;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        func_0x000107c3192c(ppuVar3 + 1,param_2[1],param_2[2]);
      }
      else {
        puVar15 = param_2[2];
        puVar4 = param_2[1];
        ppuVar3[3] = param_2[3];
        ppuVar3[2] = puVar15;
        ppuVar3[1] = puVar4;
      }
      puVar4 = param_2[4];
      *(undefined4 *)(ppuVar3 + 5) = *(undefined4 *)(param_2 + 5);
      ppuVar3[4] = puVar4;
      return ppuVar3;
    }
    lVar6 = (long)ppuVar3[2] - (long)*ppuVar3 >> 4;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      uVar8 = uVar10;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    ppuStack_78 = ppuVar3;
    if (uVar8 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      if (0x555555555555555 < uVar8) goto LAB_109274aec;
      puVar4 = (undefined4 *)(uVar8 * 0x30);
      __Znwm();
    }
    lVar11 = (long)puVar4 + lVar11;
    puStack_98 = puVar4;
    puStack_90 = (undefined4 *)lVar11;
    puStack_88 = (undefined4 *)lVar11;
    puStack_80 = puVar4 + uVar8 * 0xc;
    FUN_109274b10(lVar11,param_2);
    puVar13 = *ppuVar3;
    puVar2 = ppuVar3[1];
    puVar1 = (undefined4 *)((long)puVar13 + (lVar11 - (long)puVar2));
    puVar15 = puVar13;
    puVar7 = puVar1;
    if (puVar2 != puVar13) {
      do {
        *puVar7 = *puVar15;
        uVar14 = *(undefined8 *)(puVar15 + 4);
        uVar9 = *(undefined8 *)(puVar15 + 2);
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar15 + 6);
        *(undefined8 *)(puVar7 + 4) = uVar14;
        *(undefined8 *)(puVar7 + 2) = uVar9;
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0;
        *(undefined8 *)(puVar15 + 2) = 0;
        uVar9 = *(undefined8 *)(puVar15 + 8);
        puVar7[10] = puVar15[10];
        *(undefined8 *)(puVar7 + 8) = uVar9;
        puVar15 = puVar15 + 0xc;
        puVar7 = puVar7 + 0xc;
      } while (puVar15 != puVar2);
      do {
        if (*(char *)((long)puVar13 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar13 + 2));
        }
        puVar13 = puVar13 + 0xc;
      } while (puVar13 != puVar2);
      puVar13 = *ppuVar3;
    }
    ppuVar12 = (undefined4 **)(lVar11 + 0x30);
    *ppuVar3 = puVar1;
    ppuVar3[1] = (undefined4 *)ppuVar12;
    puStack_80 = ppuVar3[2];
    ppuVar3[2] = puVar4 + uVar8 * 0xc;
    ppuVar5 = &puStack_98;
    puStack_98 = puVar13;
    puStack_90 = puVar13;
    puStack_88 = puVar13;
    FUN_109274b84(ppuVar5);
  }
  ppuVar3[1] = (undefined4 *)ppuVar12;
  return ppuVar5;
}



/* Entry: 109274940; end: 109274953;  */

undefined4 ** FUN_109274940(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 **ppuVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 **ppuVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 **ppuStack_58;
  
  ppuVar3 = (undefined4 **)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  ppuVar12 = (undefined4 **)ppuVar3[1];
  if (ppuVar12 < ppuVar3[2]) {
    ppuVar5 = ppuVar12;
    FUN_109274b10(ppuVar12,param_2);
    ppuVar12 = ppuVar12 + 6;
    ppuVar3[1] = (undefined4 *)ppuVar12;
  }
  else {
    lVar11 = (long)ppuVar12 - (long)*ppuVar3;
    uVar10 = (lVar11 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar10) {
      FUN_109274b70();
LAB_109274aec:
      func_0x000104c4f740();
      FUN_109274b84(&puStack_78);
      __Unwind_Resume();
      *(undefined4 *)ppuVar3 = *param_2;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        func_0x000107c3192c(ppuVar3 + 1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      }
      else {
        puVar15 = *(undefined4 **)(param_2 + 4);
        puVar4 = *(undefined4 **)(param_2 + 2);
        ppuVar3[3] = *(undefined4 **)(param_2 + 6);
        ppuVar3[2] = puVar15;
        ppuVar3[1] = puVar4;
      }
      puVar4 = *(undefined4 **)(param_2 + 8);
      *(undefined4 *)(ppuVar3 + 5) = param_2[10];
      ppuVar3[4] = puVar4;
      return ppuVar3;
    }
    lVar6 = (long)ppuVar3[2] - (long)*ppuVar3 >> 4;
    uVar8 = lVar6 * 0x5555555555555556;
    if (uVar8 < uVar10 || uVar8 - uVar10 == 0) {
      uVar8 = uVar10;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar6 * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    ppuStack_58 = ppuVar3;
    if (uVar8 == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      if (0x555555555555555 < uVar8) goto LAB_109274aec;
      puVar4 = (undefined4 *)(uVar8 * 0x30);
      __Znwm();
    }
    lVar11 = (long)puVar4 + lVar11;
    puStack_78 = puVar4;
    puStack_70 = (undefined4 *)lVar11;
    puStack_68 = (undefined4 *)lVar11;
    puStack_60 = puVar4 + uVar8 * 0xc;
    FUN_109274b10(lVar11,param_2);
    puVar13 = *ppuVar3;
    puVar2 = ppuVar3[1];
    puVar1 = (undefined4 *)((long)puVar13 + (lVar11 - (long)puVar2));
    puVar15 = puVar13;
    puVar7 = puVar1;
    if (puVar2 != puVar13) {
      do {
        *puVar7 = *puVar15;
        uVar14 = *(undefined8 *)(puVar15 + 4);
        uVar9 = *(undefined8 *)(puVar15 + 2);
        *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(puVar15 + 6);
        *(undefined8 *)(puVar7 + 4) = uVar14;
        *(undefined8 *)(puVar7 + 2) = uVar9;
        *(undefined8 *)(puVar15 + 4) = 0;
        *(undefined8 *)(puVar15 + 6) = 0;
        *(undefined8 *)(puVar15 + 2) = 0;
        uVar9 = *(undefined8 *)(puVar15 + 8);
        puVar7[10] = puVar15[10];
        *(undefined8 *)(puVar7 + 8) = uVar9;
        puVar15 = puVar15 + 0xc;
        puVar7 = puVar7 + 0xc;
      } while (puVar15 != puVar2);
      do {
        if (*(char *)((long)puVar13 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar13 + 2));
        }
        puVar13 = puVar13 + 0xc;
      } while (puVar13 != puVar2);
      puVar13 = *ppuVar3;
    }
    ppuVar12 = (undefined4 **)(lVar11 + 0x30);
    *ppuVar3 = puVar1;
    ppuVar3[1] = (undefined4 *)ppuVar12;
    puStack_60 = ppuVar3[2];
    ppuVar3[2] = puVar4 + uVar8 * 0xc;
    ppuVar5 = &puStack_78;
    puStack_78 = puVar13;
    puStack_70 = puVar13;
    puStack_68 = puVar13;
    FUN_109274b84(ppuVar5);
  }
  ppuVar3[1] = (undefined4 *)ppuVar12;
  return ppuVar5;
}



/* Entry: 109274954; end: 109274b0f;  */

undefined4 ** FUN_109274954(undefined4 **param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 **ppuVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  undefined4 *puStack_58;
  undefined4 *puStack_50;
  undefined4 **ppuStack_48;
  
  ppuVar11 = (undefined4 **)param_1[1];
  if (ppuVar11 < param_1[2]) {
    ppuVar4 = ppuVar11;
    FUN_109274b10(ppuVar11,param_2);
    ppuVar11 = ppuVar11 + 6;
    param_1[1] = (undefined4 *)ppuVar11;
  }
  else {
    lVar10 = (long)ppuVar11 - (long)*param_1;
    uVar9 = (lVar10 >> 4) * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar9) {
      FUN_109274b70();
LAB_109274aec:
      func_0x000104c4f740();
      FUN_109274b84(&puStack_68);
      __Unwind_Resume();
      *(undefined4 *)param_1 = *param_2;
      if (*(char *)((long)param_2 + 0x1f) < '\0') {
        func_0x000107c3192c(param_1 + 1,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
      }
      else {
        puVar14 = *(undefined4 **)(param_2 + 4);
        puVar3 = *(undefined4 **)(param_2 + 2);
        param_1[3] = *(undefined4 **)(param_2 + 6);
        param_1[2] = puVar14;
        param_1[1] = puVar3;
      }
      puVar3 = *(undefined4 **)(param_2 + 8);
      *(undefined4 *)(param_1 + 5) = param_2[10];
      param_1[4] = puVar3;
      return param_1;
    }
    lVar5 = (long)param_1[2] - (long)*param_1 >> 4;
    uVar7 = lVar5 * 0x5555555555555556;
    if (uVar7 < uVar9 || uVar7 - uVar9 == 0) {
      uVar7 = uVar9;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar5 * -0x5555555555555555)) {
      uVar7 = 0x555555555555555;
    }
    ppuStack_48 = param_1;
    if (uVar7 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      if (0x555555555555555 < uVar7) goto LAB_109274aec;
      puVar3 = (undefined4 *)(uVar7 * 0x30);
      __Znwm();
    }
    lVar10 = (long)puVar3 + lVar10;
    puStack_68 = puVar3;
    puStack_60 = (undefined4 *)lVar10;
    puStack_58 = (undefined4 *)lVar10;
    puStack_50 = puVar3 + uVar7 * 0xc;
    FUN_109274b10(lVar10,param_2);
    puVar12 = *param_1;
    puVar2 = param_1[1];
    puVar1 = (undefined4 *)((long)puVar12 + (lVar10 - (long)puVar2));
    puVar14 = puVar12;
    puVar6 = puVar1;
    if (puVar2 != puVar12) {
      do {
        *puVar6 = *puVar14;
        uVar13 = *(undefined8 *)(puVar14 + 4);
        uVar8 = *(undefined8 *)(puVar14 + 2);
        *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(puVar14 + 6);
        *(undefined8 *)(puVar6 + 4) = uVar13;
        *(undefined8 *)(puVar6 + 2) = uVar8;
        *(undefined8 *)(puVar14 + 4) = 0;
        *(undefined8 *)(puVar14 + 6) = 0;
        *(undefined8 *)(puVar14 + 2) = 0;
        uVar8 = *(undefined8 *)(puVar14 + 8);
        puVar6[10] = puVar14[10];
        *(undefined8 *)(puVar6 + 8) = uVar8;
        puVar14 = puVar14 + 0xc;
        puVar6 = puVar6 + 0xc;
      } while (puVar14 != puVar2);
      do {
        if (*(char *)((long)puVar12 + 0x1f) < '\0') {
          __ZdlPv(*(undefined8 *)(puVar12 + 2));
        }
        puVar12 = puVar12 + 0xc;
      } while (puVar12 != puVar2);
      puVar12 = *param_1;
    }
    ppuVar11 = (undefined4 **)(lVar10 + 0x30);
    *param_1 = puVar1;
    param_1[1] = (undefined4 *)ppuVar11;
    puStack_50 = param_1[2];
    param_1[2] = puVar3 + uVar7 * 0xc;
    ppuVar4 = &puStack_68;
    puStack_68 = puVar12;
    puStack_60 = puVar12;
    puStack_58 = puVar12;
    FUN_109274b84(ppuVar4);
  }
  param_1[1] = (undefined4 *)ppuVar11;
  return ppuVar4;
}



/* Entry: 109274b10; end: 109274b6f;  */

undefined4 * FUN_109274b10(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(param_1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 4);
    uVar1 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar2;
    *(undefined8 *)(param_1 + 2) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 8) = uVar1;
  return param_1;
}



/* Entry: 109274b70; end: 109274b83;  */

/* WARNING: Removing unreachable block (ram,0x000109274bb0) */

long * FUN_109274b70(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x30;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109274b84; end: 109274be3;  */

/* WARNING: Removing unreachable block (ram,0x000109274bb0) */

long * FUN_109274b84(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109274be4; end: 109274d9f;  */

/* WARNING: Removing unreachable block (ram,0x000109274de0) */

long * FUN_109274be4(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  long *plStack_58;
  
  puVar8 = (undefined4 *)*param_1;
  puVar9 = (undefined4 *)param_1[1];
  lVar11 = (long)puVar9 - (long)puVar8;
  uVar4 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_109274da0();
LAB_109274d88:
    func_0x000104c4f740();
    FUN_109274db4(&puStack_78);
    __Unwind_Resume(param_1);
    plVar3 = (long *)&UNK_10f5629b6;
    func_0x000104c4f6cc();
    lVar11 = plVar3[2];
    while (lVar11 != plVar3[1]) {
      lVar11 = lVar11 + -0x28;
      plVar3[2] = lVar11;
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  lVar6 = param_1[2] - (long)puVar8 >> 3;
  uVar7 = lVar6 * -0x6666666666666666;
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    uVar7 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  plStack_58 = param_1;
  if (uVar7 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (0x666666666666666 < uVar7) goto LAB_109274d88;
    puVar2 = (undefined4 *)(uVar7 * 0x28);
    __Znwm();
  }
  puVar1 = (undefined4 *)((long)puVar2 + lVar11);
  puVar10 = puVar2 + uVar7 * 10;
  *puVar1 = *param_2;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar10;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    puVar8 = (undefined4 *)*param_1;
    puVar9 = (undefined4 *)param_1[1];
    lVar11 = (long)puVar9 - (long)puVar8;
  }
  else {
    uVar12 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 2) = uVar12;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
  }
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  puVar2 = puVar8;
  puVar5 = (undefined4 *)((long)puVar1 - lVar11);
  if (puVar8 != puVar9) {
    do {
      *puVar5 = *puVar2;
      uVar13 = *(undefined8 *)(puVar2 + 4);
      uVar12 = *(undefined8 *)(puVar2 + 2);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar5 + 4) = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar12;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar2 + 8);
      puVar2 = puVar2 + 10;
      puVar5 = puVar5 + 10;
    } while (puVar2 != puVar9);
    do {
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(puVar8 + 2));
      }
      puVar8 = puVar8 + 10;
    } while (puVar8 != puVar9);
    puVar8 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar1 - lVar11;
  param_1[1] = (long)(puVar1 + 10);
  puStack_60 = (undefined4 *)param_1[2];
  param_1[2] = (long)puVar10;
  puStack_78 = puVar8;
  puStack_70 = puVar8;
  puStack_68 = puVar8;
  FUN_109274db4(&puStack_78);
  return (long *)(puVar1 + 10);
}



/* Entry: 109274da0; end: 109274db3;  */

/* WARNING: Removing unreachable block (ram,0x000109274de0) */

long * FUN_109274da0(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x28;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109274db4; end: 109274e13;  */

/* WARNING: Removing unreachable block (ram,0x000109274de0) */

long * FUN_109274db4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x28;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109274e14; end: 1092759df;  */

/* WARNING: Possible PIC construction at 0x000109274eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109274f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109274f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927530c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092752f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109275310) */
/* WARNING: Removing unreachable block (ram,0x000109275320) */
/* WARNING: Removing unreachable block (ram,0x00010927533c) */
/* WARNING: Removing unreachable block (ram,0x000109275358) */
/* WARNING: Removing unreachable block (ram,0x000109274f14) */
/* WARNING: Removing unreachable block (ram,0x000109274f44) */
/* WARNING: Removing unreachable block (ram,0x000109274f4c) */
/* WARNING: Removing unreachable block (ram,0x00010927512c) */
/* WARNING: Removing unreachable block (ram,0x000109275188) */
/* WARNING: Removing unreachable block (ram,0x00010927518c) */
/* WARNING: Removing unreachable block (ram,0x000109275160) */
/* WARNING: Removing unreachable block (ram,0x000109275164) */
/* WARNING: Removing unreachable block (ram,0x000109275170) */
/* WARNING: Removing unreachable block (ram,0x000109275184) */
/* WARNING: Removing unreachable block (ram,0x0001092751a4) */
/* WARNING: Removing unreachable block (ram,0x0001092751b0) */
/* WARNING: Removing unreachable block (ram,0x0001092751b4) */
/* WARNING: Removing unreachable block (ram,0x0001092751cc) */
/* WARNING: Removing unreachable block (ram,0x000109275208) */
/* WARNING: Removing unreachable block (ram,0x0001092751d0) */
/* WARNING: Removing unreachable block (ram,0x0001092751dc) */
/* WARNING: Removing unreachable block (ram,0x0001092751f4) */
/* WARNING: Removing unreachable block (ram,0x000109275210) */
/* WARNING: Removing unreachable block (ram,0x00010927521c) */
/* WARNING: Removing unreachable block (ram,0x00010927522c) */
/* WARNING: Removing unreachable block (ram,0x000109275234) */
/* WARNING: Removing unreachable block (ram,0x000109275254) */
/* WARNING: Removing unreachable block (ram,0x000109275268) */
/* WARNING: Removing unreachable block (ram,0x000109275270) */
/* WARNING: Removing unreachable block (ram,0x000109275298) */
/* WARNING: Removing unreachable block (ram,0x000109274f5c) */
/* WARNING: Removing unreachable block (ram,0x000109274f84) */
/* WARNING: Removing unreachable block (ram,0x000109274f9c) */
/* WARNING: Removing unreachable block (ram,0x000109274fcc) */
/* WARNING: Removing unreachable block (ram,0x000109274fd0) */
/* WARNING: Removing unreachable block (ram,0x000109274ff4) */
/* WARNING: Removing unreachable block (ram,0x000109274fd8) */
/* WARNING: Removing unreachable block (ram,0x000109274ff0) */
/* WARNING: Removing unreachable block (ram,0x000109274fb0) */
/* WARNING: Removing unreachable block (ram,0x000109274fc8) */
/* WARNING: Removing unreachable block (ram,0x000109274ff8) */
/* WARNING: Removing unreachable block (ram,0x00010927504c) */
/* WARNING: Removing unreachable block (ram,0x000109275000) */
/* WARNING: Removing unreachable block (ram,0x000109275008) */
/* WARNING: Removing unreachable block (ram,0x000109275014) */
/* WARNING: Removing unreachable block (ram,0x00010927502c) */
/* WARNING: Removing unreachable block (ram,0x000109275040) */
/* WARNING: Removing unreachable block (ram,0x000109275048) */
/* WARNING: Removing unreachable block (ram,0x000109275050) */
/* WARNING: Removing unreachable block (ram,0x00010927505c) */
/* WARNING: Removing unreachable block (ram,0x00010927506c) */
/* WARNING: Removing unreachable block (ram,0x000109275074) */
/* WARNING: Removing unreachable block (ram,0x000109275094) */
/* WARNING: Removing unreachable block (ram,0x0001092750a8) */
/* WARNING: Removing unreachable block (ram,0x0001092750b0) */
/* WARNING: Removing unreachable block (ram,0x0001092750d8) */
/* WARNING: Removing unreachable block (ram,0x0001092750e0) */
/* WARNING: Removing unreachable block (ram,0x0001092750ec) */
/* WARNING: Removing unreachable block (ram,0x0001092752a4) */
/* WARNING: Removing unreachable block (ram,0x0001092752ac) */
/* WARNING: Removing unreachable block (ram,0x00010927510c) */
/* WARNING: Removing unreachable block (ram,0x000109275110) */
/* WARNING: Removing unreachable block (ram,0x000109275124) */
/* WARNING: Removing unreachable block (ram,0x000109274ef0) */
/* WARNING: Removing unreachable block (ram,0x0001092752fc) */
/* WARNING: Removing unreachable block (ram,0x000109275914) */
/* WARNING: Removing unreachable block (ram,0x000109275738) */
/* WARNING: Removing unreachable block (ram,0x000109275968) */

void FUN_109274e14(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined4 *puVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  bool bVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined4 auStack_a0 [2];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  ppuVar5 = &puStack_c0;
  puVar19 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = param_2 + -5;
  puStack_b0 = param_2 + -10;
  puStack_b8 = param_2 + -0xf;
  puVar8 = param_2 + -4;
  uVar17 = (long)param_2 - (long)param_1;
  uVar18 = ((long)uVar17 >> 3) * -0x3333333333333333;
  puVar9 = param_1;
  puVar12 = param_2;
  puVar13 = param_3;
  puStack_c0 = puVar8;
  if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
    if (uVar18 < 2) goto LAB_1092759a4;
    if (uVar18 == 2) {
      puVar12 = param_1 + 1;
      func_0x000107c2abd4();
      puVar9 = puVar8;
      if (((uint)puVar8 >> 7 & 1) != 0) {
        puVar9 = param_1;
        puVar12 = puStack_a8;
        FUN_1092759e0();
      }
      goto LAB_1092759a4;
    }
  }
  else {
    if (uVar18 == 3) {
      puVar8 = param_1 + 5;
      uVar21 = 0x1092752fc;
      ppuVar5 = &puStack_c0;
      puVar13 = puStack_a8;
      goto SUB_109275ab0;
    }
    if (uVar18 == 4) {
      puVar8 = param_1 + 5;
      uVar21 = 0x109275310;
      ppuVar5 = &puStack_c0;
      puVar13 = param_1 + 10;
      goto SUB_109275ab0;
    }
    if (uVar18 == 5) {
      puVar12 = param_1 + 5;
      puVar13 = param_1 + 10;
      FUN_109275b64();
      goto LAB_1092759a4;
    }
  }
  if ((long)uVar17 < 0x3c0) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        unaff_x20 = (ulong *)auStack_a0;
        unaff_x21 = param_1 + 9;
        puVar8 = param_1 + 5;
        puVar10 = param_1;
        do {
          param_1 = puVar8;
          puVar9 = puVar10 + 6;
          puVar12 = puVar10 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar9 >> 7 & 1) != 0) {
            auStack_a0[0] = (undefined4)*param_1;
            uStack_90 = puVar10[7];
            uStack_98 = puVar10[6];
            uStack_88 = puVar10[8];
            uStack_80 = puVar10[9];
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar8 = unaff_x21;
            do {
              puVar10 = puVar8;
              *(int *)(puVar10 + -4) = (int)puVar10[-9];
              puVar10[-2] = puVar10[-7];
              puVar10[-3] = puVar10[-8];
              puVar10[-1] = puVar10[-6];
              *(undefined1 *)((long)puVar10 + -0x29) = 0;
              *(undefined1 *)(puVar10 + -8) = 0;
              puVar8 = puVar10 + -5;
              *puVar10 = *puVar8;
              puVar12 = puVar10 + -0xd;
              puVar9 = &uStack_98;
              func_0x000107c2abd4();
            } while (((uint)puVar9 >> 7 & 1) != 0);
            *(undefined4 *)(puVar10 + -9) = auStack_a0[0];
            puVar10[-6] = uStack_88;
            puVar10[-7] = uStack_90;
            puVar10[-8] = uStack_98;
            uStack_88 = uStack_88 & 0xffffffffffffff;
            uStack_98 = uStack_98 & 0xffffffffffffff00;
            *puVar8 = uStack_80;
          }
          unaff_x21 = unaff_x21 + 5;
          puVar8 = param_1 + 5;
          puVar10 = param_1;
          param_3 = param_1;
        } while (param_1 + 5 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
      unaff_x20 = (ulong *)0x0;
      unaff_x21 = (ulong *)auStack_a0;
      puVar8 = param_1 + 5;
      puVar10 = param_1;
      do {
        param_3 = puVar8;
        puVar9 = puVar10 + 6;
        puVar12 = puVar10 + 1;
        func_0x000107c2abd4();
        if (((uint)puVar9 >> 7 & 1) != 0) {
          auStack_a0[0] = (undefined4)*param_3;
          uStack_90 = puVar10[7];
          uStack_98 = puVar10[6];
          uStack_88 = puVar10[8];
          uStack_80 = puVar10[9];
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar8 = unaff_x20;
          do {
            puVar10 = puVar8;
            puVar1 = (undefined4 *)((long)param_1 + (long)puVar10);
            puVar1[10] = *puVar1;
            if (*(char *)((long)puVar1 + 0x47) < '\0') {
              puVar9 = *(ulong **)(puVar1 + 0xc);
              __ZdlPv();
            }
            *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 4);
            *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar1 + 2);
            *(undefined1 *)((long)puVar1 + 0x1f) = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 6);
            *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 8);
            puVar8 = param_1;
            if (puVar10 == (ulong *)0x0) goto LAB_109275428;
            puVar12 = (ulong *)((long)param_1 + (long)puVar10 + -0x20);
            puVar9 = &uStack_98;
            func_0x000107c2abd4();
            puVar8 = puVar10 + -5;
          } while (((uint)puVar9 >> 7 & 1) != 0);
          puVar8 = (ulong *)((long)param_1 + (long)(puVar10 + -5) + 0x28);
LAB_109275428:
          *(undefined4 *)puVar8 = auStack_a0[0];
          lVar2 = (long)param_1 + (long)puVar10;
          if (*(char *)((long)puVar8 + 0x1f) < '\0') {
            puVar9 = *(ulong **)(lVar2 + 8);
            __ZdlPv();
          }
          *(ulong *)(lVar2 + 0x18) = uStack_88;
          *(ulong *)(lVar2 + 0x10) = uStack_90;
          *(ulong *)(lVar2 + 8) = uStack_98;
          puVar8[4] = uStack_80;
        }
        unaff_x20 = unaff_x20 + 5;
        puVar8 = param_3 + 5;
        puVar10 = param_3;
      } while (param_3 + 5 != param_2);
    }
  }
  else {
    if (param_3 != (ulong *)0x0) {
      if (0x1400 < uVar17) {
        uVar21 = 0x109274ef0;
        ppuVar5 = &puStack_c0;
        puVar8 = param_1 + (uVar18 >> 1) * 5;
        puVar13 = puStack_a8;
        goto SUB_109275ab0;
      }
      uVar21 = 0x109274f44;
      ppuVar5 = &puStack_c0;
      puVar9 = param_1 + (uVar18 >> 1) * 5;
      puVar8 = param_1;
      puVar13 = puStack_a8;
      goto SUB_109275ab0;
    }
    if (param_1 != param_2) {
      uVar16 = uVar18 - 2 >> 1;
      uVar24 = uVar16;
      puStack_a8 = param_2;
      do {
        if ((long)uVar24 <= (long)uVar16) {
          uVar23 = uVar24 << 1 | 1;
          puVar8 = param_1 + uVar23 * 5;
          uVar22 = uVar24 * 2 + 2;
          uVar14 = uVar23;
          if ((long)uVar22 < (long)uVar18) {
            puVar12 = puVar8 + 1;
            func_0x000107c2abd4(puVar12,puVar8 + 6);
            bVar6 = -1 < (char)puVar12;
            lVar2 = 0x28;
            if (bVar6) {
              lVar2 = 0;
            }
            puVar8 = (ulong *)((long)puVar8 + lVar2);
            uVar14 = uVar22;
            if (bVar6) {
              uVar14 = uVar23;
            }
          }
          puVar10 = param_1 + uVar24 * 5;
          puVar9 = puVar8 + 1;
          puVar12 = puVar10 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar9 >> 7 & 1) == 0) {
            auStack_a0[0] = (undefined4)*puVar10;
            uStack_90 = puVar10[2];
            uStack_98 = puVar10[1];
            uStack_88 = puVar10[3];
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[1] = 0;
            uStack_80 = puVar10[4];
            do {
              puVar11 = puVar8;
              *(int *)puVar10 = (int)*puVar11;
              if (*(char *)((long)puVar10 + 0x1f) < '\0') {
                puVar9 = (ulong *)puVar10[1];
                __ZdlPv();
              }
              uVar23 = puVar11[2];
              uVar22 = puVar11[1];
              puVar10[3] = puVar11[3];
              puVar10[2] = uVar23;
              puVar10[1] = uVar22;
              *(undefined1 *)((long)puVar11 + 0x1f) = 0;
              *(undefined1 *)(puVar11 + 1) = 0;
              puVar10[4] = puVar11[4];
              if ((long)uVar16 < (long)uVar14) break;
              uVar23 = uVar14 << 1 | 1;
              puVar8 = param_1 + uVar23 * 5;
              uVar22 = uVar14 * 2 + 2;
              uVar14 = uVar23;
              if ((long)uVar22 < (long)uVar18) {
                puVar12 = puVar8 + 1;
                func_0x000107c2abd4(puVar12,puVar8 + 6);
                bVar6 = -1 < (char)puVar12;
                lVar2 = 0x28;
                if (bVar6) {
                  lVar2 = 0;
                }
                puVar8 = (ulong *)((long)puVar8 + lVar2);
                uVar14 = uVar22;
                if (bVar6) {
                  uVar14 = uVar23;
                }
              }
              puVar9 = puVar8 + 1;
              puVar12 = &uStack_98;
              func_0x000107c2abd4();
              puVar10 = puVar11;
            } while (((uint)puVar9 >> 7 & 1) == 0);
            *(undefined4 *)puVar11 = auStack_a0[0];
            if (*(char *)((long)puVar11 + 0x1f) < '\0') {
              puVar9 = (ulong *)puVar11[1];
              __ZdlPv();
            }
            puVar11[3] = uStack_88;
            puVar11[2] = uStack_90;
            puVar11[1] = uStack_98;
            puVar11[4] = uStack_80;
          }
        }
        bVar6 = uVar24 != 0;
        uVar24 = uVar24 - 1;
      } while (bVar6);
      puVar8 = (ulong *)((uVar17 >> 3) * -0x3333333333333333);
      puVar10 = puStack_a8;
      do {
        unaff_x20 = puVar10;
        uVar17 = 0;
        puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,(int)*param_1);
        puStack_b0 = (ulong *)param_1[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
        uStack_78 = (undefined7)param_1[2];
        uStack_71 = (undefined1)(param_1[2] >> 0x38);
        puStack_a8 = (ulong *)CONCAT44(puStack_a8._4_4_,(uint)*(byte *)((long)param_1 + 0x1f));
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        puStack_b8 = (ulong *)param_1[4];
        puVar10 = param_1;
        do {
          unaff_x21 = puVar10 + uVar17 * 5;
          uVar24 = uVar17 << 1 | 1;
          uVar18 = uVar17 * 2 + 2;
          uVar17 = uVar24;
          puVar11 = unaff_x21 + 5;
          if ((long)uVar18 < (long)puVar8) {
            puVar9 = unaff_x21 + 6;
            puVar12 = unaff_x21 + 0xb;
            func_0x000107c2abd4();
            uVar17 = uVar18;
            puVar11 = unaff_x21 + 10;
            if (-1 < (char)puVar9) {
              uVar17 = uVar24;
              puVar11 = unaff_x21 + 5;
            }
          }
          *(int *)puVar10 = (int)*puVar11;
          if (*(char *)((long)puVar10 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar10[1];
            __ZdlPv();
          }
          uVar24 = puVar11[2];
          uVar18 = puVar11[1];
          puVar10[3] = puVar11[3];
          puVar10[2] = uVar24;
          puVar10[1] = uVar18;
          *(undefined1 *)((long)puVar11 + 0x1f) = 0;
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar10[4] = puVar11[4];
          puVar10 = puVar11;
        } while ((long)uVar17 <= (long)((long)puVar8 - 2U >> 1));
        puVar10 = unaff_x20 + -5;
        if (puVar11 == puVar10) {
          *(undefined4 *)puVar11 = puStack_c0._0_4_;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar11[1];
            __ZdlPv();
          }
          puVar11[1] = (ulong)puStack_b0;
          puVar11[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar11 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(char *)((long)puVar11 + 0x1f) = (char)puStack_a8;
          puVar11[4] = (ulong)puStack_b8;
        }
        else {
          *(int *)puVar11 = (int)*puVar10;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar11[1];
            __ZdlPv();
          }
          uVar18 = unaff_x20[-3];
          uVar17 = unaff_x20[-4];
          puVar11[3] = unaff_x20[-2];
          puVar11[2] = uVar18;
          puVar11[1] = uVar17;
          *(undefined1 *)((long)unaff_x20 + -9) = 0;
          *(undefined1 *)(unaff_x20 + -4) = 0;
          puVar11[4] = unaff_x20[-1];
          *(undefined4 *)(unaff_x20 + -5) = puStack_c0._0_4_;
          unaff_x20[-4] = (ulong)puStack_b0;
          *(ulong *)((long)unaff_x20 + -0x11) = CONCAT71(uStack_70,uStack_71);
          unaff_x20[-3] = CONCAT17(uStack_71,uStack_78);
          *(char *)((long)unaff_x20 + -9) = (char)puStack_a8;
          unaff_x20[-1] = (ulong)puStack_b8;
          uVar17 = (long)puVar11 + (0x28 - (long)param_1);
          if (0x28 < (long)uVar17) {
            puVar15 = (ulong *)((uVar17 >> 3) * -0x3333333333333333 - 2 >> 1);
            puVar9 = param_1 + (long)puVar15 * 5 + 1;
            puVar12 = puVar11 + 1;
            func_0x000107c2abd4();
            unaff_x20 = puVar15;
            if (((uint)puVar9 >> 7 & 1) != 0) {
              auStack_a0[0] = (undefined4)*puVar11;
              uStack_90 = puVar11[2];
              uStack_98 = puVar11[1];
              uStack_88 = puVar11[3];
              uStack_80 = puVar11[4];
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[1] = 0;
              puVar4 = param_1 + (long)puVar15 * 5;
              do {
                unaff_x21 = puVar4;
                *(int *)puVar11 = (int)*unaff_x21;
                if (*(char *)((long)puVar11 + 0x1f) < '\0') {
                  puVar9 = (ulong *)puVar11[1];
                  __ZdlPv();
                }
                uVar18 = unaff_x21[2];
                uVar17 = unaff_x21[1];
                puVar11[3] = unaff_x21[3];
                puVar11[2] = uVar18;
                puVar11[1] = uVar17;
                *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
                *(undefined1 *)(unaff_x21 + 1) = 0;
                puVar11[4] = unaff_x21[4];
                unaff_x20 = (ulong *)0x0;
                if (puVar15 == (ulong *)0x0) break;
                puVar15 = (ulong *)((long)puVar15 - 1U >> 1);
                puVar9 = param_1 + (long)puVar15 * 5 + 1;
                puVar12 = &uStack_98;
                func_0x000107c2abd4();
                unaff_x20 = puVar15;
                puVar4 = param_1 + (long)puVar15 * 5;
                puVar11 = unaff_x21;
              } while (((uint)puVar9 >> 7 & 1) != 0);
              *(undefined4 *)unaff_x21 = auStack_a0[0];
              if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
                puVar9 = (ulong *)unaff_x21[1];
                __ZdlPv();
              }
              unaff_x21[3] = uStack_88;
              unaff_x21[2] = uStack_90;
              unaff_x21[1] = uStack_98;
              unaff_x21[4] = uStack_80;
            }
          }
        }
        param_3 = (ulong *)((long)puVar8 + -1);
        bVar6 = 2 < (long)puVar8;
        puVar8 = param_3;
      } while (bVar6);
    }
  }
LAB_1092759a4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar20 = FUN_1092759e0;
  ___stack_chk_fail();
  do {
    *(ulong **)((long)ppuVar5 + -0x30) = param_3;
    *(ulong **)((long)ppuVar5 + -0x28) = unaff_x21;
    *(ulong **)((long)ppuVar5 + -0x20) = unaff_x20;
    *(ulong **)((long)ppuVar5 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar5 + -0x10) = puVar19;
    *(code **)((long)ppuVar5 + -8) = pcVar20;
    puVar19 = (undefined1 *)((long)ppuVar5 + -0x10);
    *(undefined8 *)((long)ppuVar5 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar17 = *puVar9;
    unaff_x20 = (ulong *)puVar9[1];
    *(ulong *)((long)ppuVar5 + -0x48) = puVar9[2];
    *(undefined8 *)((long)ppuVar5 + -0x41) = *(undefined8 *)((long)puVar9 + 0x17);
    bVar3 = *(byte *)((long)puVar9 + 0x1f);
    unaff_x21 = (ulong *)(ulong)bVar3;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[1] = 0;
    param_3 = (ulong *)puVar9[4];
    *(int *)puVar9 = (int)*puVar12;
    uVar24 = puVar12[2];
    uVar18 = puVar12[1];
    puVar9[3] = puVar12[3];
    puVar9[2] = uVar24;
    puVar9[1] = uVar18;
    *(undefined1 *)((long)puVar12 + 0x1f) = 0;
    *(undefined1 *)(puVar12 + 1) = 0;
    puVar9[4] = puVar12[4];
    *(int *)puVar12 = (int)uVar17;
    puVar8 = puVar12;
    if (*(char *)((long)puVar12 + 0x1f) < '\0') {
      puVar9 = (ulong *)puVar12[1];
      __ZdlPv();
    }
    uVar17 = *(ulong *)((long)ppuVar5 + -0x48);
    puVar12[1] = (ulong)unaff_x20;
    puVar12[2] = uVar17;
    *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)ppuVar5 + -0x41);
    *(byte *)((long)puVar12 + 0x1f) = bVar3;
    puVar12[4] = (ulong)param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar5 + -0x38)) {
      return;
    }
    uVar21 = 0x109275ab0;
    ___stack_chk_fail();
    ppuVar5 = (ulong **)((long)ppuVar5 + -0x50);
    param_1 = puVar12;
SUB_109275ab0:
    puVar12 = puVar13;
    *(ulong **)((long)ppuVar5 + -0x30) = param_3;
    *(ulong **)((long)ppuVar5 + -0x28) = unaff_x21;
    *(ulong **)((long)ppuVar5 + -0x20) = unaff_x20;
    *(ulong **)((long)ppuVar5 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar5 + -0x10) = puVar19;
    *(undefined8 *)((long)ppuVar5 + -8) = uVar21;
    puVar10 = puVar8 + 1;
    puVar13 = puVar12;
    func_0x000107c2abd4(puVar10,puVar9 + 1);
    puVar11 = puVar12 + 1;
    func_0x000107c2abd4(puVar11,puVar8 + 1);
    if (((uint)puVar10 >> 7 & 1) == 0) {
      if (-1 < (char)puVar11) {
        return;
      }
      FUN_1092759e0(puVar8,puVar12);
      puVar12 = puVar8 + 1;
      func_0x000107c2abd4(puVar12,puVar9 + 1);
      uVar7 = (uint)puVar12;
      puVar12 = puVar8;
joined_r0x000109275b38:
      if ((uVar7 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar11) {
      FUN_1092759e0(puVar9,puVar8);
      puVar9 = puVar12 + 1;
      func_0x000107c2abd4(puVar9,puVar8 + 1);
      uVar7 = (uint)puVar9;
      puVar9 = puVar8;
      goto joined_r0x000109275b38;
    }
    puVar19 = *(undefined1 **)((long)ppuVar5 + -0x10);
    pcVar20 = *(code **)((long)ppuVar5 + -8);
    unaff_x20 = *(ulong **)((long)ppuVar5 + -0x20);
    param_1 = *(ulong **)((long)ppuVar5 + -0x18);
    param_3 = *(ulong **)((long)ppuVar5 + -0x30);
    unaff_x21 = *(ulong **)((long)ppuVar5 + -0x28);
  } while( true );
}



/* Entry: 1092759e0; end: 109275b63;  */

void FUN_1092759e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    uVar10 = *(undefined8 *)(param_1 + 8);
    *param_1 = *param_2;
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = uVar2;
    puVar8 = param_2;
    puVar7 = param_3;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    *(undefined8 *)(param_2 + 8) = uVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar10;
    *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x68) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x109275ab0;
    puVar5 = puVar8 + 2;
    param_3 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_1092759e0(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x000109275b38:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_1092759e0(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x000109275b38;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = puVar7;
  } while( true );
}



/* Entry: 109275b64; end: 109275c77;  */

/* WARNING: Possible PIC construction at 0x000109275b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275ba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275bc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275c34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109275b28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109275b00) */
/* WARNING: Removing unreachable block (ram,0x000109275b10) */
/* WARNING: Removing unreachable block (ram,0x000109275c38) */
/* WARNING: Removing unreachable block (ram,0x000109275c5c) */
/* WARNING: Removing unreachable block (ram,0x000109275c1c) */
/* WARNING: Removing unreachable block (ram,0x000109275c2c) */
/* WARNING: Removing unreachable block (ram,0x000109275c00) */
/* WARNING: Removing unreachable block (ram,0x000109275c10) */
/* WARNING: Removing unreachable block (ram,0x000109275bc8) */
/* WARNING: Removing unreachable block (ram,0x000109275bd8) */
/* WARNING: Removing unreachable block (ram,0x000109275bac) */
/* WARNING: Removing unreachable block (ram,0x000109275bbc) */
/* WARNING: Removing unreachable block (ram,0x000109275b90) */
/* WARNING: Removing unreachable block (ram,0x000109275be4) */
/* WARNING: Removing unreachable block (ram,0x000109275c48) */
/* WARNING: Removing unreachable block (ram,0x000109275bf4) */
/* WARNING: Removing unreachable block (ram,0x000109275ba0) */
/* WARNING: Removing unreachable block (ram,0x000109275b2c) */
/* WARNING: Removing unreachable block (ram,0x000109275b4c) */

void FUN_109275b64(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = &stack0xffffffffffffffc0;
  uVar10 = 0x109275b90;
  puVar6 = param_2;
  puVar5 = param_1;
  puVar8 = param_3;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
    *(undefined8 *)(puVar3 + -0x30) = param_4;
    *(undefined4 **)(puVar3 + -0x28) = puVar8;
    *(undefined4 **)(puVar3 + -0x20) = puVar5;
    *(undefined4 **)(puVar3 + -0x18) = puVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    puVar9 = puVar3 + -0x10;
    puVar5 = param_2 + 2;
    puVar7 = param_3;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    puVar6 = param_3;
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar8) {
        return;
      }
      uVar10 = 0x109275b00;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
      puVar4 = param_2;
    }
    else {
      puVar4 = param_1;
      if ((char)puVar8 < '\0') {
        puVar9 = *(undefined1 **)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + -8);
        param_2 = *(undefined4 **)(puVar3 + -0x18);
        puVar5 = *(undefined4 **)(puVar3 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar3;
        param_3 = *(undefined4 **)(puVar3 + -0x20);
        param_1 = *(undefined4 **)(puVar3 + -0x28);
      }
      else {
        uVar10 = 0x109275b2c;
        puVar6 = param_2;
      }
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined4 **)((long)register0x00000008 + -0x30) = puVar5;
    *(undefined4 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined4 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined4 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *puVar4;
    puVar5 = *(undefined4 **)(puVar4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar4 + 0x17);
    bVar2 = *(byte *)((long)puVar4 + 0x1f);
    puVar8 = (undefined4 *)(ulong)bVar2;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    param_4 = *(undefined8 *)(puVar4 + 8);
    *puVar4 = *puVar6;
    uVar11 = *(undefined8 *)(puVar6 + 4);
    uVar10 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar11;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *(undefined1 *)((long)puVar6 + 0x1f) = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar6 + 8);
    *puVar6 = uVar1;
    param_1 = puVar4;
    param_2 = puVar6;
    param_3 = puVar7;
    if (*(char *)((long)puVar6 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(puVar6 + 2);
      __ZdlPv();
      param_3 = puVar7;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined4 **)(puVar6 + 2) = puVar5;
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar6 + 0x1f) = bVar2;
    *(undefined8 *)(puVar6 + 8) = param_4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar10 = 0x109275ab0;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 109275c78; end: 109275d47;  */

undefined4 * FUN_109275c78(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 4);
  uVar12 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar12;
  uVar3 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar13 = *(undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  uVar17 = *(undefined8 *)(param_2 + 4);
  uVar16 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar17;
  *(undefined8 *)(param_1 + 2) = uVar16;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *param_2 = uVar2;
  puVar8 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = *(undefined4 **)(param_2 + 2);
    __ZdlPv();
  }
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(ulong *)(param_2 + 4) = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar12;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar3;
  *(undefined8 *)(param_2 + 8) = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar10 = ((long)puVar8 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar10 < 3) {
    if (uVar10 < 2) {
      return (undefined4 *)0x1;
    }
    if (uVar10 != 2) {
LAB_109275dfc:
      func_0x000109275ab0(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == puVar8) {
        return (undefined4 *)0x1;
      }
      lVar9 = 0;
      iVar15 = 0;
      puVar7 = param_1 + 0x14;
      puVar14 = param_1 + 0x1e;
      do {
        puVar5 = puVar14 + 2;
        func_0x000107c2abd4(puVar5,puVar7 + 2);
        if (((uint)puVar5 >> 7 & 1) != 0) {
          uVar2 = *puVar14;
          uStack_b8 = *(undefined8 *)(puVar14 + 4);
          uStack_c0 = *(ulong *)(puVar14 + 2);
          uStack_b0 = *(ulong *)(puVar14 + 6);
          uStack_a8 = *(undefined8 *)(puVar14 + 8);
          *(undefined8 *)(puVar14 + 2) = 0;
          *(undefined8 *)(puVar14 + 4) = 0;
          *(undefined8 *)(puVar14 + 6) = 0;
          lVar4 = lVar9;
          do {
            lVar11 = lVar4;
            *(undefined4 *)((long)param_1 + lVar11 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar11 + 0x50);
            if (*(char *)((long)param_1 + lVar11 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar11 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x60);
            *(undefined8 *)((long)param_1 + lVar11 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x58);
            *(undefined1 *)((long)param_1 + lVar11 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar11 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar11 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x68);
            *(undefined8 *)((long)param_1 + lVar11 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x70);
            puVar7 = param_1;
            if (lVar11 == -0x50) goto LAB_109275ec8;
            puVar6 = &uStack_c0;
            func_0x000107c2abd4(puVar6,(long)param_1 + lVar11 + 0x30);
            lVar4 = lVar11 + -0x28;
          } while (((uint)puVar6 >> 7 & 1) != 0);
          puVar7 = (undefined4 *)((long)param_1 + lVar11 + 0x50);
LAB_109275ec8:
          *puVar7 = uVar2;
          if (*(char *)((long)puVar7 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar11 + 0x60) = uStack_b8;
          *(ulong *)((long)param_1 + lVar11 + 0x58) = uStack_c0;
          *(ulong *)((long)param_1 + lVar11 + 0x68) = uStack_b0;
          uStack_b0 = uStack_b0 & 0xffffffffffffff;
          uStack_c0 = uStack_c0 & 0xffffffffffffff00;
          *(undefined8 *)(puVar7 + 8) = uStack_a8;
          iVar15 = iVar15 + 1;
          if (iVar15 == 8) {
            return (undefined4 *)(ulong)(puVar14 + 10 == puVar8);
          }
        }
        puVar5 = puVar14 + 10;
        lVar9 = lVar9 + 0x28;
        puVar7 = puVar14;
        puVar14 = puVar5;
        if (puVar5 == puVar8) {
          return (undefined4 *)0x1;
        }
      } while( true );
    }
    puVar7 = puVar8 + -8;
    func_0x000107c2abd4(puVar7,param_1 + 2);
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar8 = puVar8 + -10;
  }
  else {
    if (uVar10 == 3) {
      func_0x000109275ab0(param_1,param_1 + 10,puVar8 + -10);
      return (undefined4 *)0x1;
    }
    if (uVar10 != 4) {
      if (uVar10 == 5) {
        FUN_109275b64(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,puVar8 + -10);
        return (undefined4 *)0x1;
      }
      goto LAB_109275dfc;
    }
    func_0x000109275ab0(param_1,param_1 + 10,param_1 + 0x14);
    puVar7 = puVar8 + -8;
    func_0x000107c2abd4(puVar7,param_1 + 0x16);
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_1092759e0(param_1 + 0x14,puVar8 + -10);
    puVar8 = param_1 + 0x16;
    func_0x000107c2abd4(puVar8,param_1 + 0xc);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_1092759e0(param_1 + 10,param_1 + 0x14);
    puVar8 = param_1 + 0xc;
    func_0x000107c2abd4(puVar8,param_1 + 2);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar8 = param_1 + 10;
  }
  FUN_1092759e0(param_1,puVar8);
  return (undefined4 *)0x1;
}



/* Entry: 109275d48; end: 109275fb7;  */

bool FUN_109275d48(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_109275dfc:
      func_0x000109275ab0(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x14;
      puVar8 = param_1 + 0x1e;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 4);
          uStack_70 = *(ulong *)(puVar8 + 2);
          uStack_60 = *(ulong *)(puVar8 + 6);
          uStack_58 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x50);
            if (*(char *)((long)param_1 + lVar7 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x60);
            *(undefined8 *)((long)param_1 + lVar7 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x58);
            *(undefined1 *)((long)param_1 + lVar7 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            puVar5 = param_1;
            if (lVar7 == -0x50) goto LAB_109275ec8;
            puVar4 = &uStack_70;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x30);
            lVar2 = lVar7 + -0x28;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x50);
LAB_109275ec8:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x60) = uStack_68;
          *(ulong *)((long)param_1 + lVar7 + 0x58) = uStack_70;
          *(ulong *)((long)param_1 + lVar7 + 0x68) = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffffff;
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          *(undefined8 *)(puVar5 + 8) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 10 == param_2;
          }
        }
        puVar3 = puVar8 + 10;
        lVar9 = lVar9 + 0x28;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -10;
  }
  else {
    if (uVar6 == 3) {
      func_0x000109275ab0(param_1,param_1 + 10,param_2 + -10);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_109275b64(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,param_2 + -10);
        return true;
      }
      goto LAB_109275dfc;
    }
    func_0x000109275ab0(param_1,param_1 + 10,param_1 + 0x14);
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 0x16);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_1092759e0(param_1 + 0x14,param_2 + -10);
    puVar5 = param_1 + 0x16;
    func_0x000107c2abd4(puVar5,param_1 + 0xc);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_1092759e0(param_1 + 10,param_1 + 0x14);
    puVar5 = param_1 + 0xc;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 10;
  }
  FUN_1092759e0(param_1,param_2);
  return true;
}



/* Entry: 109275fb8; end: 109276117;  */

undefined8 FUN_109275fb8(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0x8b50) {
    if (param_1 == 0x1404) {
      return 5;
    }
    if (param_1 == 0x1405) {
      return 9;
    }
    if (param_1 == 0x1406) {
      return 0xd;
    }
  }
  else if (param_1 < 0x8dc6) {
    uVar1 = 1;
    switch(param_1) {
    case 0x8b50:
      return 0xe;
    case 0x8b51:
      return 0xf;
    case 0x8b52:
      return 0x10;
    case 0x8b53:
      return 6;
    case 0x8b54:
      return 7;
    case 0x8b55:
      return 8;
    case 0x8b56:
      goto code_r0x000109276100;
    case 0x8b57:
      return 2;
    case 0x8b58:
      return 3;
    case 0x8b59:
      return 4;
    case 0x8b5a:
      return 0x11;
    case 0x8b5b:
      return 0x12;
    case 0x8b5c:
      return 0x13;
    }
  }
  else {
    if (param_1 == 0x8dc6) {
      return 10;
    }
    if (param_1 == 0x8dc7) {
      return 0xb;
    }
    if (param_1 == 0x8dc8) {
      return 0xc;
    }
  }
  FUN_10924a40c(4,&UNK_10f562a74);
  uVar1 = 0;
code_r0x000109276100:
  return uVar1;
}



/* Entry: 109276118; end: 10927624f;  */

/* WARNING: Removing unreachable block (ram,0x000109277044) */
/* WARNING: Removing unreachable block (ram,0x000109276d60) */
/* WARNING: Removing unreachable block (ram,0x0001092766fc) */
/* WARNING: Removing unreachable block (ram,0x0001092764d8) */
/* WARNING: Removing unreachable block (ram,0x0001092770bc) */

ulong ******* FUN_109276118(ulong *******param_1,ulong *******param_2,long param_3,uint param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  ulong *******pppppppuVar5;
  undefined1 *puVar6;
  ulong *******pppppppuVar7;
  ulong *******pppppppuVar8;
  ulong *******pppppppuVar9;
  ulong *******pppppppuVar10;
  ulong *******pppppppuVar11;
  ulong *******pppppppuVar12;
  ulong *******pppppppuVar13;
  ulong uVar14;
  ulong ******ppppppuVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong ******ppppppuVar22;
  ulong ******ppppppuStack_168;
  ulong ******ppppppuStack_160;
  ulong *****pppppuStack_158;
  ulong *****pppppuStack_150;
  ulong *****pppppuStack_148;
  undefined4 uStack_140;
  ulong *****pppppuStack_138;
  ulong *****pppppuStack_130;
  ulong *****pppppuStack_128;
  ulong *****pppppuStack_118;
  ulong ******ppppppuStack_110;
  ulong *****pppppuStack_108;
  ulong *****pppppuStack_100;
  ulong *****pppppuStack_f8;
  undefined4 uStack_f0;
  ulong *****pppppuStack_e8;
  ulong *****pppppuStack_e0;
  ulong *****pppppuStack_d8;
  ulong ******ppppppuStack_58;
  ulong *****pppppuStack_50;
  ulong ******ppppppuStack_48;
  ulong ******ppppppuStack_40;
  ulong ******ppppppuStack_38;
  
  lVar17 = (long)param_1[1] - (long)*param_1;
  uVar20 = (lVar17 >> 6) + 1;
  if (uVar20 >> 0x3a == 0) {
    uVar14 = (long)param_1[2] - (long)*param_1;
    uVar16 = (long)uVar14 >> 5;
    if (uVar16 <= uVar20) {
      uVar16 = uVar20;
    }
    if (0x7fffffffffffffbf < uVar14) {
      uVar16 = 0x3ffffffffffffff;
    }
    ppppppuStack_38 = (ulong ******)param_1;
    if (uVar16 == 0) {
      pppppppuVar5 = (ulong *******)0x0;
    }
    else {
      pppppppuVar5 = param_1;
      func_0x000107c2abf0();
    }
    pppppuStack_50 = (ulong *****)((long)pppppppuVar5 + lVar17);
    ppppppuVar22 = param_2[1];
    ppppppuVar15 = *param_2;
    pppppuStack_50[2] = (ulong ****)param_2[2];
    pppppuStack_50[1] = (ulong ****)ppppppuVar22;
    *pppppuStack_50 = (ulong ****)ppppppuVar15;
    param_2[1] = (ulong ******)0x0;
    param_2[2] = (ulong ******)0x0;
    *param_2 = (ulong ******)0x0;
    ppppppuVar15 = param_2[3];
    *(undefined4 *)(pppppuStack_50 + 4) = *(undefined4 *)(param_2 + 4);
    pppppuStack_50[3] = (ulong ****)ppppppuVar15;
    pppppuStack_50[6] = (ulong ****)0x0;
    pppppuStack_50[7] = (ulong ****)0x0;
    pppppuStack_50[5] = (ulong ****)0x0;
    ppppppuVar15 = param_2[5];
    pppppuStack_50[6] = (ulong ****)param_2[6];
    pppppuStack_50[5] = (ulong ****)ppppppuVar15;
    pppppuStack_50[7] = (ulong ****)param_2[7];
    param_2[5] = (ulong ******)0x0;
    param_2[6] = (ulong ******)0x0;
    param_2[7] = (ulong ******)0x0;
    pppppppuVar8 = (ulong *******)(pppppuStack_50 + 8);
    ppppppuVar15 = (ulong ******)((long)pppppuStack_50 + ((long)*param_1 - (long)param_1[1]));
    ppppppuStack_58 = (ulong ******)pppppppuVar5;
    ppppppuStack_48 = (ulong ******)pppppppuVar8;
    ppppppuStack_40 = (ulong ******)(pppppppuVar5 + uVar16 * 8);
    func_0x000107c2abf4(param_1,*param_1,param_1[1],ppppppuVar15);
    ppppppuStack_58 = *param_1;
    *param_1 = ppppppuVar15;
    param_1[1] = (ulong ******)pppppppuVar8;
    ppppppuStack_40 = param_1[2];
    param_1[2] = (ulong ******)(pppppppuVar5 + uVar16 * 8);
    pppppuStack_50 = (ulong *****)ppppppuStack_58;
    ppppppuStack_48 = ppppppuStack_58;
    func_0x000107c2abf8(&ppppppuStack_58);
    return pppppppuVar8;
  }
  FUN_10923e0a0();
  func_0x000107c2abf8(&ppppppuStack_58);
  __Unwind_Resume();
  pppppppuVar5 = param_1;
  do {
    pppppppuVar13 = param_2 + -8;
    pppppppuVar8 = pppppppuVar5;
LAB_1092762a0:
    pppppppuVar5 = pppppppuVar8;
    uVar20 = (long)param_2 - (long)pppppppuVar5 >> 6;
    if (uVar20 - 2 == 0 || (long)uVar20 < 2) {
      if (uVar20 < 2) {
        return param_1;
      }
      if (uVar20 == 2) {
        pppppppuVar8 = pppppppuVar13;
        func_0x000107c2abd4(pppppppuVar13,pppppppuVar5);
        if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
          return pppppppuVar8;
        }
LAB_1092767ac:
        FUN_10927761c(pppppppuVar5,pppppppuVar13);
        return pppppppuVar5;
      }
    }
    else {
      if (uVar20 == 3) {
        FUN_109277164(pppppppuVar5,pppppppuVar5 + 8,pppppppuVar13);
        return pppppppuVar5;
      }
      if (uVar20 == 4) {
        FUN_109277164(pppppppuVar5,pppppppuVar5 + 8,pppppppuVar5 + 0x10);
        pppppppuVar8 = pppppppuVar13;
        func_0x000107c2abd4(pppppppuVar13,pppppppuVar5 + 0x10);
        if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
          return pppppppuVar8;
        }
        FUN_10927761c(pppppppuVar5 + 0x10,pppppppuVar13);
        pppppppuVar8 = pppppppuVar5 + 0x10;
        func_0x000107c2abd4(pppppppuVar8,pppppppuVar5 + 8);
        if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
          return pppppppuVar8;
        }
        FUN_10927761c(pppppppuVar5 + 8,pppppppuVar5 + 0x10);
        pppppppuVar8 = pppppppuVar5 + 8;
        func_0x000107c2abd4(pppppppuVar8,pppppppuVar5);
        if (((uint)pppppppuVar8 >> 7 & 1) == 0) {
          return pppppppuVar8;
        }
        pppppppuVar13 = pppppppuVar5 + 8;
        goto LAB_1092767ac;
      }
      if (uVar20 == 5) {
        FUN_109277218(pppppppuVar5,pppppppuVar5 + 8,pppppppuVar5 + 0x10,pppppppuVar5 + 0x18,
                      pppppppuVar13);
        return pppppppuVar5;
      }
    }
    if ((long)uVar20 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (pppppppuVar5 == param_2) {
          return param_1;
        }
        if (pppppppuVar5 + 8 == param_2) {
          return param_1;
        }
        pppppppuVar8 = pppppppuVar5 + 0xf;
        pppppppuVar13 = pppppppuVar5 + 8;
        do {
          pppppppuVar10 = pppppppuVar13;
          pppppppuVar12 = pppppppuVar10;
          func_0x000107c2abd4(pppppppuVar10,pppppppuVar5);
          if (((uint)pppppppuVar12 >> 7 & 1) != 0) {
            pppppuStack_108 = (ulong *****)pppppppuVar10[1];
            ppppppuStack_110 = *pppppppuVar10;
            pppppuStack_100 = (ulong *****)pppppppuVar10[2];
            pppppppuVar10[1] = (ulong ******)0x0;
            pppppppuVar10[2] = (ulong ******)0x0;
            *pppppppuVar10 = (ulong ******)0x0;
            pppppuStack_f8 = (ulong *****)pppppppuVar5[0xb];
            uStack_f0 = *(undefined4 *)(pppppppuVar5 + 0xc);
            pppppuStack_e0 = (ulong *****)pppppppuVar5[0xe];
            pppppuStack_e8 = (ulong *****)pppppppuVar5[0xd];
            pppppuStack_d8 = (ulong *****)pppppppuVar5[0xf];
            pppppppuVar5[0xd] = (ulong ******)0x0;
            pppppppuVar5[0xe] = (ulong ******)0x0;
            pppppppuVar5[0xf] = (ulong ******)0x0;
            pppppppuVar5 = pppppppuVar8;
            do {
              pppppppuVar12 = pppppppuVar5;
              pppppppuVar12[-6] = pppppppuVar12[-0xe];
              pppppppuVar12[-7] = pppppppuVar12[-0xf];
              pppppppuVar12[-5] = pppppppuVar12[-0xd];
              *(undefined1 *)((long)pppppppuVar12 + -0x61) = 0;
              *(undefined1 *)(pppppppuVar12 + -0xf) = 0;
              pppppppuVar12[-4] = pppppppuVar12[-0xc];
              *(undefined4 *)(pppppppuVar12 + -3) = *(undefined4 *)(pppppppuVar12 + -0xb);
              FUN_109241da0(pppppppuVar12 + -2);
              pppppppuVar5 = pppppppuVar12 + -8;
              pppppppuVar12[-1] = pppppppuVar12[-9];
              pppppppuVar12[-2] = pppppppuVar12[-10];
              *pppppppuVar12 = *pppppppuVar5;
              *pppppppuVar5 = (ulong ******)0x0;
              pppppppuVar12[-10] = (ulong ******)0x0;
              pppppppuVar12[-9] = (ulong ******)0x0;
              pppppppuVar13 = &ppppppuStack_110;
              func_0x000107c2abd4(pppppppuVar13,pppppppuVar12 + -0x17);
            } while (((uint)pppppppuVar13 >> 7 & 1) != 0);
            pppppppuVar12[-0xd] = (ulong ******)pppppuStack_100;
            pppppppuVar12[-0xe] = (ulong ******)pppppuStack_108;
            pppppppuVar12[-0xf] = ppppppuStack_110;
            pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
            ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
            *(undefined4 *)(pppppppuVar12 + -0xb) = uStack_f0;
            pppppppuVar12[-0xc] = (ulong ******)pppppuStack_f8;
            FUN_109241da0(pppppppuVar12 + -10);
            pppppppuVar12[-9] = (ulong ******)pppppuStack_e0;
            pppppppuVar12[-10] = (ulong ******)pppppuStack_e8;
            *pppppppuVar5 = (ulong ******)pppppuStack_d8;
            pppppuStack_e8 = (ulong *****)0x0;
            pppppuStack_e0 = (ulong *****)0x0;
            pppppuStack_d8 = (ulong *****)0x0;
            pppppppuVar12 = &ppppppuStack_160;
            ppppppuStack_160 = &pppppuStack_e8;
            func_0x00010922df48(pppppppuVar12);
            if ((long)pppppuStack_100 < 0) {
              pppppppuVar12 = (ulong *******)ppppppuStack_110;
              __ZdlPv(ppppppuStack_110);
            }
          }
          pppppppuVar8 = pppppppuVar8 + 8;
          pppppppuVar13 = pppppppuVar10 + 8;
          pppppppuVar5 = pppppppuVar10;
        } while (pppppppuVar10 + 8 != param_2);
        return pppppppuVar12;
      }
      if (pppppppuVar5 == param_2) {
        return param_1;
      }
      if (pppppppuVar5 + 8 == param_2) {
        return param_1;
      }
      lVar17 = 0;
      pppppppuVar8 = pppppppuVar5 + 8;
      pppppppuVar13 = pppppppuVar5;
      break;
    }
    if (param_3 == 0) {
      if (pppppppuVar5 == param_2) {
        return param_1;
      }
      uVar14 = uVar20 - 2 >> 1;
      uVar16 = uVar14;
      goto LAB_1092769e8;
    }
    pppppppuVar8 = pppppppuVar5 + (uVar20 >> 1) * 8;
    if (uVar20 < 0x81) {
      FUN_109277164(pppppppuVar8,pppppppuVar5,pppppppuVar13);
    }
    else {
      FUN_109277164(pppppppuVar5,pppppppuVar8,pppppppuVar13);
      FUN_109277164(pppppppuVar5 + 8,pppppppuVar8 + -8,param_2 + -0x10);
      FUN_109277164(pppppppuVar5 + 0x10,pppppppuVar8 + 8,param_2 + -0x18);
      FUN_109277164(pppppppuVar8 + -8,pppppppuVar8,pppppppuVar8 + 8);
      FUN_10927761c(pppppppuVar5,pppppppuVar8);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      pppppppuVar8 = pppppppuVar5 + -8;
      func_0x000107c2abd4(pppppppuVar8,pppppppuVar5);
      if (((uint)pppppppuVar8 >> 7 & 1) != 0) goto LAB_109276378;
      pppppuStack_108 = (ulong *****)pppppppuVar5[1];
      ppppppuStack_110 = *pppppppuVar5;
      pppppuStack_100 = (ulong *****)pppppppuVar5[2];
      pppppppuVar5[1] = (ulong ******)0x0;
      pppppppuVar5[2] = (ulong ******)0x0;
      *pppppppuVar5 = (ulong ******)0x0;
      pppppuStack_f8 = (ulong *****)pppppppuVar5[3];
      uStack_f0 = *(undefined4 *)(pppppppuVar5 + 4);
      pppppppuVar10 = pppppppuVar5 + 5;
      pppppuStack_e0 = (ulong *****)pppppppuVar5[6];
      pppppuStack_e8 = (ulong *****)*pppppppuVar10;
      pppppuStack_d8 = (ulong *****)pppppppuVar5[7];
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar5[6] = (ulong ******)0x0;
      pppppppuVar5[7] = (ulong ******)0x0;
      pppppppuVar12 = &ppppppuStack_110;
      func_0x000107c2abd4(pppppppuVar12,pppppppuVar13);
      pppppppuVar8 = pppppppuVar5;
      if (((uint)pppppppuVar12 >> 7 & 1) == 0) {
        do {
          pppppppuVar8 = pppppppuVar8 + 8;
          if (param_2 <= pppppppuVar8) break;
          pppppppuVar12 = &ppppppuStack_110;
          func_0x000107c2abd4(pppppppuVar12,pppppppuVar8);
        } while (((uint)pppppppuVar12 >> 7 & 1) == 0);
      }
      else {
        do {
          pppppppuVar8 = pppppppuVar8 + 8;
          pppppppuVar12 = &ppppppuStack_110;
          func_0x000107c2abd4(pppppppuVar12,pppppppuVar8);
        } while (((uint)pppppppuVar12 >> 7 & 1) == 0);
      }
      pppppppuVar12 = param_2;
      if (pppppppuVar8 < param_2) {
        do {
          pppppppuVar12 = pppppppuVar12 + -8;
          pppppppuVar9 = &ppppppuStack_110;
          func_0x000107c2abd4(pppppppuVar9,pppppppuVar12);
        } while (((uint)pppppppuVar9 >> 7 & 1) != 0);
      }
      while (pppppppuVar8 < pppppppuVar12) {
        FUN_10927761c(pppppppuVar8,pppppppuVar12);
        do {
          pppppppuVar8 = pppppppuVar8 + 8;
          pppppppuVar9 = &ppppppuStack_110;
          func_0x000107c2abd4(pppppppuVar9,pppppppuVar8);
        } while (((uint)pppppppuVar9 >> 7 & 1) == 0);
        do {
          pppppppuVar12 = pppppppuVar12 + -8;
          pppppppuVar9 = &ppppppuStack_110;
          func_0x000107c2abd4(pppppppuVar9,pppppppuVar12);
        } while (((uint)pppppppuVar9 >> 7 & 1) != 0);
      }
      pppppppuVar12 = pppppppuVar8 + -8;
      if (pppppppuVar12 != pppppppuVar5) {
        if (*(char *)((long)pppppppuVar5 + 0x17) < '\0') {
          __ZdlPv(*pppppppuVar5);
        }
        ppppppuVar22 = pppppppuVar8[-7];
        ppppppuVar15 = *pppppppuVar12;
        pppppppuVar5[2] = pppppppuVar8[-6];
        pppppppuVar5[1] = ppppppuVar22;
        *pppppppuVar5 = ppppppuVar15;
        *(undefined1 *)((long)pppppppuVar8 + -0x29) = 0;
        *(undefined1 *)(pppppppuVar8 + -8) = 0;
        ppppppuVar15 = pppppppuVar8[-5];
        *(undefined4 *)(pppppppuVar5 + 4) = *(undefined4 *)(pppppppuVar8 + -4);
        pppppppuVar5[3] = ppppppuVar15;
        FUN_109241da0(pppppppuVar10);
        ppppppuVar15 = pppppppuVar8[-3];
        pppppppuVar5[6] = pppppppuVar8[-2];
        pppppppuVar5[5] = ppppppuVar15;
        pppppppuVar5[7] = pppppppuVar8[-1];
        pppppppuVar8[-3] = (ulong ******)0x0;
        pppppppuVar8[-2] = (ulong ******)0x0;
        pppppppuVar8[-1] = (ulong ******)0x0;
      }
      pppppppuVar8[-6] = (ulong ******)pppppuStack_100;
      pppppppuVar8[-7] = (ulong ******)pppppuStack_108;
      *pppppppuVar12 = ppppppuStack_110;
      pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
      ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
      *(undefined4 *)(pppppppuVar8 + -4) = uStack_f0;
      pppppppuVar8[-5] = (ulong ******)pppppuStack_f8;
      FUN_109241da0(pppppppuVar8 + -3);
      pppppppuVar8[-2] = (ulong ******)pppppuStack_e0;
      pppppppuVar8[-3] = (ulong ******)pppppuStack_e8;
      pppppppuVar8[-1] = (ulong ******)pppppuStack_d8;
      pppppuStack_e8 = (ulong *****)0x0;
      pppppuStack_e0 = (ulong *****)0x0;
      pppppuStack_d8 = (ulong *****)0x0;
      pppppppuVar5 = &ppppppuStack_160;
      ppppppuStack_160 = &pppppuStack_e8;
      func_0x00010922df48(pppppppuVar5);
      if ((long)pppppuStack_100 < 0) {
        pppppppuVar5 = (ulong *******)ppppppuStack_110;
        __ZdlPv(ppppppuStack_110);
      }
      goto LAB_10927658c;
    }
LAB_109276378:
    lVar17 = 0;
    pppppuStack_108 = (ulong *****)pppppppuVar5[1];
    ppppppuStack_110 = *pppppppuVar5;
    pppppuStack_100 = (ulong *****)pppppppuVar5[2];
    pppppppuVar5[1] = (ulong ******)0x0;
    pppppppuVar5[2] = (ulong ******)0x0;
    *pppppppuVar5 = (ulong ******)0x0;
    pppppuStack_f8 = (ulong *****)pppppppuVar5[3];
    uStack_f0 = *(undefined4 *)(pppppppuVar5 + 4);
    pppppppuVar12 = pppppppuVar5 + 5;
    pppppuStack_e0 = (ulong *****)pppppppuVar5[6];
    pppppuStack_e8 = (ulong *****)*pppppppuVar12;
    pppppuStack_d8 = (ulong *****)pppppppuVar5[7];
    *pppppppuVar12 = (ulong ******)0x0;
    pppppppuVar5[6] = (ulong ******)0x0;
    pppppppuVar5[7] = (ulong ******)0x0;
    do {
      lVar17 = lVar17 + 0x40;
      puVar6 = (undefined1 *)(lVar17 + (long)pppppppuVar5);
      func_0x000107c2abd4(puVar6,&ppppppuStack_110);
    } while (((uint)puVar6 >> 7 & 1) != 0);
    pppppppuVar10 = (ulong *******)((long)pppppppuVar5 + lVar17);
    pppppppuVar9 = param_2;
    if (lVar17 == 0x40) {
      do {
        if (pppppppuVar9 <= pppppppuVar10) break;
        pppppppuVar9 = pppppppuVar9 + -8;
        pppppppuVar8 = pppppppuVar9;
        func_0x000107c2abd4(pppppppuVar9,&ppppppuStack_110);
      } while (((uint)pppppppuVar8 >> 7 & 1) == 0);
    }
    else {
      do {
        pppppppuVar9 = pppppppuVar9 + -8;
        pppppppuVar8 = pppppppuVar9;
        func_0x000107c2abd4(pppppppuVar9,&ppppppuStack_110);
      } while (((uint)pppppppuVar8 >> 7 & 1) == 0);
    }
    pppppppuVar11 = pppppppuVar9;
    pppppppuVar8 = pppppppuVar10;
    if (pppppppuVar10 < pppppppuVar9) {
      do {
        FUN_10927761c(pppppppuVar8,pppppppuVar11);
        do {
          pppppppuVar8 = pppppppuVar8 + 8;
          pppppppuVar7 = pppppppuVar8;
          func_0x000107c2abd4(pppppppuVar8,&ppppppuStack_110);
        } while (((uint)pppppppuVar7 >> 7 & 1) != 0);
        do {
          pppppppuVar11 = pppppppuVar11 + -8;
          pppppppuVar7 = pppppppuVar11;
          func_0x000107c2abd4(pppppppuVar11,&ppppppuStack_110);
        } while (((uint)pppppppuVar7 >> 7 & 1) == 0);
      } while (pppppppuVar8 < pppppppuVar11);
    }
    pppppppuVar11 = pppppppuVar8 + -8;
    if (pppppppuVar11 != pppppppuVar5) {
      if (*(char *)((long)pppppppuVar5 + 0x17) < '\0') {
        __ZdlPv(*pppppppuVar5);
      }
      ppppppuVar22 = pppppppuVar8[-7];
      ppppppuVar15 = *pppppppuVar11;
      pppppppuVar5[2] = pppppppuVar8[-6];
      pppppppuVar5[1] = ppppppuVar22;
      *pppppppuVar5 = ppppppuVar15;
      *(undefined1 *)((long)pppppppuVar8 + -0x29) = 0;
      *(undefined1 *)(pppppppuVar8 + -8) = 0;
      ppppppuVar15 = pppppppuVar8[-5];
      *(undefined4 *)(pppppppuVar5 + 4) = *(undefined4 *)(pppppppuVar8 + -4);
      pppppppuVar5[3] = ppppppuVar15;
      FUN_109241da0(pppppppuVar12);
      ppppppuVar15 = pppppppuVar8[-3];
      pppppppuVar5[6] = pppppppuVar8[-2];
      pppppppuVar5[5] = ppppppuVar15;
      pppppppuVar5[7] = pppppppuVar8[-1];
      pppppppuVar8[-3] = (ulong ******)0x0;
      pppppppuVar8[-2] = (ulong ******)0x0;
      pppppppuVar8[-1] = (ulong ******)0x0;
    }
    pppppppuVar8[-6] = (ulong ******)pppppuStack_100;
    pppppppuVar8[-7] = (ulong ******)pppppuStack_108;
    *pppppppuVar11 = ppppppuStack_110;
    pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
    ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
    *(undefined4 *)(pppppppuVar8 + -4) = uStack_f0;
    pppppppuVar8[-5] = (ulong ******)pppppuStack_f8;
    FUN_109241da0(pppppppuVar8 + -3);
    pppppppuVar8[-2] = (ulong ******)pppppuStack_e0;
    pppppppuVar8[-3] = (ulong ******)pppppuStack_e8;
    pppppppuVar8[-1] = (ulong ******)pppppuStack_d8;
    pppppuStack_e8 = (ulong *****)0x0;
    pppppuStack_e0 = (ulong *****)0x0;
    pppppuStack_d8 = (ulong *****)0x0;
    ppppppuStack_160 = &pppppuStack_e8;
    func_0x00010922df48(&ppppppuStack_160);
    if ((long)pppppuStack_100 < 0) {
      __ZdlPv(ppppppuStack_110);
    }
    if (pppppppuVar10 < pppppppuVar9) goto LAB_109276574;
    pppppppuVar12 = pppppppuVar5;
    FUN_10927732c(pppppppuVar5,pppppppuVar11);
    param_1 = pppppppuVar8;
    FUN_10927732c(pppppppuVar8,param_2);
    if ((int)param_1 == 0) goto code_r0x000109276570;
    param_2 = pppppppuVar11;
    if (((ulong)pppppppuVar12 & 1) != 0) {
      return param_1;
    }
  } while( true );
LAB_109276858:
  pppppppuVar10 = pppppppuVar8;
  pppppppuVar12 = pppppppuVar10;
  func_0x000107c2abd4(pppppppuVar10,pppppppuVar13);
  if (((uint)pppppppuVar12 >> 7 & 1) != 0) {
    pppppuStack_108 = (ulong *****)pppppppuVar10[1];
    ppppppuStack_110 = *pppppppuVar10;
    pppppuStack_100 = (ulong *****)pppppppuVar10[2];
    pppppppuVar10[1] = (ulong ******)0x0;
    pppppppuVar10[2] = (ulong ******)0x0;
    *pppppppuVar10 = (ulong ******)0x0;
    pppppuStack_f8 = (ulong *****)pppppppuVar13[0xb];
    uStack_f0 = *(undefined4 *)(pppppppuVar13 + 0xc);
    pppppuStack_e0 = (ulong *****)pppppppuVar13[0xe];
    pppppuStack_e8 = (ulong *****)pppppppuVar13[0xd];
    pppppuStack_d8 = (ulong *****)pppppppuVar13[0xf];
    pppppppuVar13[0xd] = (ulong ******)0x0;
    pppppppuVar13[0xe] = (ulong ******)0x0;
    pppppppuVar13[0xf] = (ulong ******)0x0;
    lVar4 = lVar17;
    do {
      lVar18 = lVar4;
      puVar2 = (undefined8 *)((long)pppppppuVar5 + lVar18);
      if (*(char *)((long)puVar2 + 0x57) < '\0') {
        __ZdlPv(puVar2[8]);
      }
      puVar2[9] = puVar2[1];
      puVar2[8] = *puVar2;
      *(undefined1 *)((long)puVar2 + 0x17) = 0;
      *(undefined1 *)puVar2 = 0;
      puVar2[10] = puVar2[2];
      puVar2[0xb] = puVar2[3];
      *(undefined4 *)(puVar2 + 0xc) = *(undefined4 *)(puVar2 + 4);
      FUN_109241da0(puVar2 + 0xd);
      puVar2[0xe] = puVar2[6];
      puVar2[0xd] = puVar2[5];
      puVar2[0xf] = puVar2[7];
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[5] = 0;
      pppppppuVar8 = pppppppuVar5;
      if (lVar18 == 0) goto LAB_109276934;
      pppppppuVar8 = &ppppppuStack_110;
      func_0x000107c2abd4(pppppppuVar8,(undefined1 *)(lVar18 + -0x40 + (long)pppppppuVar5));
      lVar4 = lVar18 + -0x40;
    } while (((uint)pppppppuVar8 >> 7 & 1) != 0);
    pppppppuVar8 = (ulong *******)((long)pppppppuVar5 + lVar18);
LAB_109276934:
    if (*(char *)((long)pppppppuVar8 + 0x17) < '\0') {
      __ZdlPv(*pppppppuVar8);
    }
    pppppppuVar8[2] = (ulong ******)pppppuStack_100;
    pppppppuVar8[1] = (ulong ******)pppppuStack_108;
    *pppppppuVar8 = ppppppuStack_110;
    pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
    ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
    *(undefined4 *)((long)pppppppuVar5 + lVar18 + 0x20) = uStack_f0;
    *(ulong ******)((long)pppppppuVar5 + lVar18 + 0x18) = pppppuStack_f8;
    FUN_109241da0((undefined1 *)((long)pppppppuVar5 + lVar18 + 0x28));
    *(ulong ******)((long)pppppppuVar5 + lVar18 + 0x28) = pppppuStack_e8;
    pppppppuVar8[7] = (ulong ******)pppppuStack_d8;
    pppppppuVar8[6] = (ulong ******)pppppuStack_e0;
    pppppuStack_e8 = (ulong *****)0x0;
    pppppuStack_e0 = (ulong *****)0x0;
    pppppuStack_d8 = (ulong *****)0x0;
    pppppppuVar12 = &ppppppuStack_160;
    ppppppuStack_160 = &pppppuStack_e8;
    func_0x00010922df48(pppppppuVar12);
    if ((long)pppppuStack_100 < 0) {
      pppppppuVar12 = (ulong *******)ppppppuStack_110;
      __ZdlPv(ppppppuStack_110);
    }
  }
  lVar17 = lVar17 + 0x40;
  pppppppuVar8 = pppppppuVar10 + 8;
  pppppppuVar13 = pppppppuVar10;
  if (pppppppuVar10 + 8 == param_2) {
    return pppppppuVar12;
  }
  goto LAB_109276858;
LAB_1092769e8:
  do {
    if ((long)uVar16 <= (long)uVar14) {
      uVar19 = uVar16 << 1 | 1;
      pppppppuVar8 = pppppppuVar5 + uVar19 * 8;
      uVar1 = uVar16 * 2 + 2;
      pppppppuVar13 = pppppppuVar8;
      uVar21 = uVar19;
      if ((long)uVar1 < (long)uVar20) {
        pppppppuVar12 = pppppppuVar8;
        func_0x000107c2abd4(pppppppuVar8,pppppppuVar8 + 8);
        pppppppuVar13 = pppppppuVar8 + 8;
        uVar21 = uVar1;
        if (-1 < (char)pppppppuVar12) {
          pppppppuVar13 = pppppppuVar8;
          uVar21 = uVar19;
        }
      }
      pppppppuVar8 = pppppppuVar5 + uVar16 * 8;
      pppppppuVar12 = pppppppuVar13;
      func_0x000107c2abd4(pppppppuVar13,pppppppuVar8);
      if (((uint)pppppppuVar12 >> 7 & 1) == 0) {
        pppppuStack_108 = (ulong *****)pppppppuVar8[1];
        ppppppuStack_110 = *pppppppuVar8;
        pppppuStack_100 = (ulong *****)pppppppuVar8[2];
        pppppppuVar8[1] = (ulong ******)0x0;
        pppppppuVar8[2] = (ulong ******)0x0;
        *pppppppuVar8 = (ulong ******)0x0;
        pppppuStack_f8 = (ulong *****)pppppppuVar8[3];
        uStack_f0 = *(undefined4 *)(pppppppuVar8 + 4);
        pppppuStack_e0 = (ulong *****)pppppppuVar8[6];
        pppppuStack_e8 = (ulong *****)pppppppuVar8[5];
        pppppuStack_d8 = (ulong *****)pppppppuVar8[7];
        pppppppuVar8[5] = (ulong ******)0x0;
        pppppppuVar8[6] = (ulong ******)0x0;
        pppppppuVar8[7] = (ulong ******)0x0;
        do {
          pppppppuVar12 = pppppppuVar13;
          if (*(char *)((long)pppppppuVar8 + 0x17) < '\0') {
            __ZdlPv(*pppppppuVar8);
          }
          ppppppuVar22 = pppppppuVar12[1];
          ppppppuVar15 = *pppppppuVar12;
          pppppppuVar8[2] = pppppppuVar12[2];
          pppppppuVar8[1] = ppppppuVar22;
          *pppppppuVar8 = ppppppuVar15;
          *(undefined1 *)((long)pppppppuVar12 + 0x17) = 0;
          *(undefined1 *)pppppppuVar12 = 0;
          ppppppuVar15 = pppppppuVar12[3];
          *(undefined4 *)(pppppppuVar8 + 4) = *(undefined4 *)(pppppppuVar12 + 4);
          pppppppuVar8[3] = ppppppuVar15;
          FUN_109241da0(pppppppuVar8 + 5);
          pppppppuVar10 = pppppppuVar12 + 5;
          ppppppuVar15 = *pppppppuVar10;
          pppppppuVar8[6] = pppppppuVar12[6];
          pppppppuVar8[5] = ppppppuVar15;
          pppppppuVar8[7] = pppppppuVar12[7];
          *pppppppuVar10 = (ulong ******)0x0;
          pppppppuVar12[6] = (ulong ******)0x0;
          pppppppuVar12[7] = (ulong ******)0x0;
          if ((long)uVar14 < (long)uVar21) break;
          uVar19 = uVar21 << 1 | 1;
          pppppppuVar8 = pppppppuVar5 + uVar19 * 8;
          uVar1 = uVar21 * 2 + 2;
          pppppppuVar13 = pppppppuVar8;
          uVar21 = uVar19;
          if ((long)uVar1 < (long)uVar20) {
            pppppppuVar9 = pppppppuVar8;
            func_0x000107c2abd4(pppppppuVar8,pppppppuVar8 + 8);
            pppppppuVar13 = pppppppuVar8 + 8;
            uVar21 = uVar1;
            if (-1 < (char)pppppppuVar9) {
              pppppppuVar13 = pppppppuVar8;
              uVar21 = uVar19;
            }
          }
          pppppppuVar9 = pppppppuVar13;
          func_0x000107c2abd4(pppppppuVar13,&ppppppuStack_110);
          pppppppuVar8 = pppppppuVar12;
        } while (((uint)pppppppuVar9 >> 7 & 1) == 0);
        if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
          __ZdlPv(*pppppppuVar12);
        }
        pppppppuVar12[2] = (ulong ******)pppppuStack_100;
        pppppppuVar12[1] = (ulong ******)pppppuStack_108;
        *pppppppuVar12 = ppppppuStack_110;
        pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
        ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
        pppppppuVar12[3] = (ulong ******)pppppuStack_f8;
        *(undefined4 *)(pppppppuVar12 + 4) = uStack_f0;
        FUN_109241da0(pppppppuVar10);
        pppppppuVar12[6] = (ulong ******)pppppuStack_e0;
        pppppppuVar12[5] = (ulong ******)pppppuStack_e8;
        pppppppuVar12[7] = (ulong ******)pppppuStack_d8;
        pppppuStack_e8 = (ulong *****)0x0;
        pppppuStack_e0 = (ulong *****)0x0;
        pppppuStack_d8 = (ulong *****)0x0;
        ppppppuStack_160 = &pppppuStack_e8;
        func_0x00010922df48(&ppppppuStack_160);
        if ((long)pppppuStack_100 < 0) {
          __ZdlPv(ppppppuStack_110);
        }
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  ppppppuStack_168 = (ulong ******)param_2;
  do {
    pppppuStack_158 = (ulong *****)pppppppuVar5[1];
    ppppppuStack_160 = *pppppppuVar5;
    pppppuStack_150 = (ulong *****)pppppppuVar5[2];
    pppppuStack_148 = (ulong *****)pppppppuVar5[3];
    pppppppuVar5[1] = (ulong ******)0x0;
    pppppppuVar5[2] = (ulong ******)0x0;
    *pppppppuVar5 = (ulong ******)0x0;
    uStack_140 = *(undefined4 *)(pppppppuVar5 + 4);
    pppppuStack_130 = (ulong *****)pppppppuVar5[6];
    pppppuStack_138 = (ulong *****)pppppppuVar5[5];
    pppppuStack_128 = (ulong *****)pppppppuVar5[7];
    pppppppuVar5[6] = (ulong ******)0x0;
    pppppppuVar5[7] = (ulong ******)0x0;
    pppppppuVar5[5] = (ulong ******)0x0;
    uVar16 = 0;
    pppppppuVar8 = pppppppuVar5;
    do {
      pppppppuVar13 = pppppppuVar8 + uVar16 * 8 + 8;
      uVar1 = uVar16 << 1 | 1;
      uVar14 = uVar16 * 2 + 2;
      uVar19 = uVar1;
      pppppppuVar12 = pppppppuVar13;
      if ((long)uVar14 < (long)uVar20) {
        pppppppuVar10 = pppppppuVar13;
        func_0x000107c2abd4(pppppppuVar13,pppppppuVar8 + uVar16 * 8 + 0x10);
        uVar19 = uVar14;
        pppppppuVar12 = pppppppuVar8 + uVar16 * 8 + 0x10;
        if (-1 < (char)pppppppuVar10) {
          uVar19 = uVar1;
          pppppppuVar12 = pppppppuVar13;
        }
      }
      if (*(char *)((long)pppppppuVar8 + 0x17) < '\0') {
        __ZdlPv(*pppppppuVar8);
      }
      ppppppuVar22 = pppppppuVar12[1];
      ppppppuVar15 = *pppppppuVar12;
      pppppppuVar8[2] = pppppppuVar12[2];
      pppppppuVar8[1] = ppppppuVar22;
      *pppppppuVar8 = ppppppuVar15;
      *(undefined1 *)((long)pppppppuVar12 + 0x17) = 0;
      *(undefined1 *)pppppppuVar12 = 0;
      pppppppuVar13 = pppppppuVar12 + 3;
      ppppppuVar15 = *pppppppuVar13;
      *(undefined4 *)(pppppppuVar8 + 4) = *(undefined4 *)(pppppppuVar12 + 4);
      pppppppuVar8[3] = ppppppuVar15;
      FUN_109241da0(pppppppuVar8 + 5);
      pppppppuVar10 = pppppppuVar12 + 5;
      ppppppuVar15 = *pppppppuVar10;
      pppppppuVar8[6] = pppppppuVar12[6];
      pppppppuVar8[5] = ppppppuVar15;
      pppppppuVar8[7] = pppppppuVar12[7];
      *pppppppuVar10 = (ulong ******)0x0;
      pppppppuVar12[6] = (ulong ******)0x0;
      pppppppuVar12[7] = (ulong ******)0x0;
      uVar16 = uVar19;
      pppppppuVar8 = pppppppuVar12;
    } while ((long)uVar19 <= (long)(uVar20 - 2 >> 1));
    pppppppuVar8 = (ulong *******)(ppppppuStack_168 + -8);
    if (pppppppuVar12 == pppppppuVar8) {
      if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
        __ZdlPv(*pppppppuVar12);
      }
      pppppppuVar12[2] = (ulong ******)pppppuStack_150;
      pppppppuVar12[1] = (ulong ******)pppppuStack_158;
      *pppppppuVar12 = ppppppuStack_160;
      pppppuStack_150 = (ulong *****)((ulong)pppppuStack_150 & 0xffffffffffffff);
      ppppppuStack_160 = (ulong ******)((ulong)ppppppuStack_160 & 0xffffffffffffff00);
      *pppppppuVar13 = (ulong ******)pppppuStack_148;
      *(undefined4 *)(pppppppuVar12 + 4) = uStack_140;
      FUN_109241da0(pppppppuVar10);
      pppppppuVar12[6] = (ulong ******)pppppuStack_130;
      pppppppuVar12[5] = (ulong ******)pppppuStack_138;
      pppppppuVar12[7] = (ulong ******)pppppuStack_128;
      pppppuStack_138 = (ulong *****)0x0;
      pppppuStack_130 = (ulong *****)0x0;
      pppppuStack_128 = (ulong *****)0x0;
    }
    else {
      if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
        __ZdlPv(*pppppppuVar12);
      }
      ppppppuVar22 = (ulong ******)ppppppuStack_168[-7];
      ppppppuVar15 = *pppppppuVar8;
      pppppppuVar12[2] = (ulong ******)ppppppuStack_168[-6];
      pppppppuVar12[1] = ppppppuVar22;
      *pppppppuVar12 = ppppppuVar15;
      *(undefined1 *)((long)ppppppuStack_168 + -0x29) = 0;
      *(undefined1 *)(ppppppuStack_168 + -8) = 0;
      ppppppuVar15 = (ulong ******)ppppppuStack_168[-5];
      *(undefined4 *)(pppppppuVar12 + 4) = *(undefined4 *)(ppppppuStack_168 + -4);
      *pppppppuVar13 = ppppppuVar15;
      FUN_109241da0(pppppppuVar10);
      pppppppuVar9 = (ulong *******)(ppppppuStack_168 + -3);
      ppppppuVar15 = *pppppppuVar9;
      pppppppuVar12[6] = (ulong ******)ppppppuStack_168[-2];
      pppppppuVar12[5] = ppppppuVar15;
      pppppppuVar12[7] = (ulong ******)ppppppuStack_168[-1];
      *pppppppuVar9 = (ulong ******)0x0;
      ppppppuStack_168[-2] = (ulong *****)0x0;
      ppppppuStack_168[-1] = (ulong *****)0x0;
      ppppppuStack_168[-6] = pppppuStack_150;
      ppppppuStack_168[-7] = pppppuStack_158;
      *pppppppuVar8 = ppppppuStack_160;
      pppppuStack_150 = (ulong *****)((ulong)pppppuStack_150 & 0xffffffffffffff);
      ppppppuStack_160 = (ulong ******)((ulong)ppppppuStack_160 & 0xffffffffffffff00);
      *(undefined4 *)(ppppppuStack_168 + -4) = uStack_140;
      ppppppuStack_168[-5] = pppppuStack_148;
      FUN_109241da0(pppppppuVar9);
      ppppppuStack_168[-2] = pppppuStack_130;
      ppppppuStack_168[-3] = pppppuStack_138;
      ppppppuStack_168[-1] = pppppuStack_128;
      pppppuStack_138 = (ulong *****)0x0;
      pppppuStack_130 = (ulong *****)0x0;
      pppppuStack_128 = (ulong *****)0x0;
      lVar17 = (long)((long)pppppppuVar12 + (0x40 - (long)pppppppuVar5)) >> 6;
      if (1 < lVar17) {
        uVar16 = lVar17 - 2U >> 1;
        pppppppuVar9 = pppppppuVar5 + uVar16 * 8;
        pppppppuVar11 = pppppppuVar9;
        func_0x000107c2abd4(pppppppuVar9,pppppppuVar12);
        if (((uint)pppppppuVar11 >> 7 & 1) != 0) {
          pppppuStack_108 = (ulong *****)pppppppuVar12[1];
          ppppppuStack_110 = *pppppppuVar12;
          pppppuStack_100 = (ulong *****)pppppppuVar12[2];
          pppppppuVar12[1] = (ulong ******)0x0;
          pppppppuVar12[2] = (ulong ******)0x0;
          *pppppppuVar12 = (ulong ******)0x0;
          uStack_f0 = *(undefined4 *)(pppppppuVar12 + 4);
          pppppuStack_f8 = (ulong *****)*pppppppuVar13;
          pppppuStack_e0 = (ulong *****)pppppppuVar12[6];
          pppppuStack_e8 = (ulong *****)pppppppuVar12[5];
          pppppuStack_d8 = (ulong *****)pppppppuVar12[7];
          pppppppuVar12[6] = (ulong ******)0x0;
          pppppppuVar12[7] = (ulong ******)0x0;
          *pppppppuVar10 = (ulong ******)0x0;
          do {
            pppppppuVar13 = pppppppuVar9;
            if (*(char *)((long)pppppppuVar12 + 0x17) < '\0') {
              __ZdlPv(*pppppppuVar12);
            }
            ppppppuVar22 = pppppppuVar13[1];
            ppppppuVar15 = *pppppppuVar13;
            pppppppuVar12[2] = pppppppuVar13[2];
            pppppppuVar12[1] = ppppppuVar22;
            *pppppppuVar12 = ppppppuVar15;
            *(undefined1 *)((long)pppppppuVar13 + 0x17) = 0;
            *(undefined1 *)pppppppuVar13 = 0;
            ppppppuVar15 = pppppppuVar13[3];
            *(undefined4 *)(pppppppuVar12 + 4) = *(undefined4 *)(pppppppuVar13 + 4);
            pppppppuVar12[3] = ppppppuVar15;
            FUN_109241da0(pppppppuVar12 + 5);
            pppppppuVar10 = pppppppuVar13 + 5;
            ppppppuVar15 = *pppppppuVar10;
            pppppppuVar12[6] = pppppppuVar13[6];
            pppppppuVar12[5] = ppppppuVar15;
            pppppppuVar12[7] = pppppppuVar13[7];
            *pppppppuVar10 = (ulong ******)0x0;
            pppppppuVar13[6] = (ulong ******)0x0;
            pppppppuVar13[7] = (ulong ******)0x0;
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1 >> 1;
            pppppppuVar9 = pppppppuVar5 + uVar16 * 8;
            pppppppuVar11 = pppppppuVar9;
            func_0x000107c2abd4(pppppppuVar9,&ppppppuStack_110);
            pppppppuVar12 = pppppppuVar13;
          } while (((uint)pppppppuVar11 >> 7 & 1) != 0);
          if (*(char *)((long)pppppppuVar13 + 0x17) < '\0') {
            __ZdlPv(*pppppppuVar13);
          }
          pppppppuVar13[2] = (ulong ******)pppppuStack_100;
          pppppppuVar13[1] = (ulong ******)pppppuStack_108;
          *pppppppuVar13 = ppppppuStack_110;
          pppppuStack_100 = (ulong *****)((ulong)pppppuStack_100 & 0xffffffffffffff);
          ppppppuStack_110 = (ulong ******)((ulong)ppppppuStack_110 & 0xffffffffffffff00);
          pppppppuVar13[3] = (ulong ******)pppppuStack_f8;
          *(undefined4 *)(pppppppuVar13 + 4) = uStack_f0;
          FUN_109241da0(pppppppuVar10);
          pppppppuVar13[6] = (ulong ******)pppppuStack_e0;
          pppppppuVar13[5] = (ulong ******)pppppuStack_e8;
          pppppppuVar13[7] = (ulong ******)pppppuStack_d8;
          pppppuStack_e8 = (ulong *****)0x0;
          pppppuStack_e0 = (ulong *****)0x0;
          pppppuStack_d8 = (ulong *****)0x0;
          pppppuStack_118 = (ulong *****)&pppppuStack_e8;
          func_0x00010922df48(&pppppuStack_118);
          if ((long)pppppuStack_100 < 0) {
            __ZdlPv(ppppppuStack_110);
          }
        }
      }
    }
    pppppppuVar13 = &ppppppuStack_110;
    ppppppuStack_110 = &pppppuStack_138;
    func_0x00010922df48(pppppppuVar13);
    if ((long)pppppuStack_150 < 0) {
      __ZdlPv(ppppppuStack_160);
      pppppppuVar13 = (ulong *******)ppppppuStack_160;
    }
    bVar3 = (long)uVar20 < 3;
    uVar20 = uVar20 - 1;
    ppppppuStack_168 = (ulong ******)pppppppuVar8;
    if (bVar3) {
      return pppppppuVar13;
    }
  } while( true );
code_r0x000109276570:
  if (((ulong)pppppppuVar12 & 1) == 0) {
LAB_109276574:
    FUN_109276250(pppppppuVar5,pppppppuVar11,param_3,param_4 & 1);
LAB_10927658c:
    param_4 = 0;
    param_1 = pppppppuVar5;
  }
  goto LAB_1092762a0;
}



/* Entry: 109276250; end: 109277163;  */

/* WARNING: Removing unreachable block (ram,0x000109277044) */
/* WARNING: Removing unreachable block (ram,0x000109276d60) */
/* WARNING: Removing unreachable block (ram,0x0001092766fc) */
/* WARNING: Removing unreachable block (ram,0x0001092764d8) */
/* WARNING: Removing unreachable block (ram,0x0001092770bc) */

void FUN_109276250(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  do {
    puVar11 = param_2 + -8;
    puVar6 = param_1;
LAB_1092762a0:
    param_1 = puVar6;
    uVar18 = (long)param_2 - (long)param_1 >> 6;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        puVar6 = puVar11;
        func_0x000107c2abd4(puVar11,param_1);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
LAB_1092767ac:
        FUN_10927761c(param_1,puVar11);
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        FUN_109277164(param_1,param_1 + 8,puVar11);
        return;
      }
      if (uVar18 == 4) {
        FUN_109277164(param_1,param_1 + 8,param_1 + 0x10);
        puVar6 = puVar11;
        func_0x000107c2abd4(puVar11,param_1 + 0x10);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        FUN_10927761c(param_1 + 0x10,puVar11);
        puVar6 = param_1 + 0x10;
        func_0x000107c2abd4(puVar6,param_1 + 8);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        FUN_10927761c(param_1 + 8,param_1 + 0x10);
        puVar6 = param_1 + 8;
        func_0x000107c2abd4(puVar6,param_1);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        puVar11 = param_1 + 8;
        goto LAB_1092767ac;
      }
      if (uVar18 == 5) {
        FUN_109277218(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,puVar11);
        return;
      }
    }
    if ((long)uVar18 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 8 == param_2) {
          return;
        }
        puVar6 = param_1 + 0xf;
        puVar11 = param_1 + 8;
        do {
          puVar7 = puVar11;
          puVar11 = puVar7;
          func_0x000107c2abd4(puVar7,param_1);
          if (((uint)puVar11 >> 7 & 1) != 0) {
            uStack_a8 = puVar7[1];
            puStack_b0 = (ulong *)*puVar7;
            uStack_a0 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            uStack_98 = param_1[0xb];
            uStack_90 = (undefined4)param_1[0xc];
            uStack_80 = param_1[0xe];
            uStack_88 = param_1[0xd];
            uStack_78 = param_1[0xf];
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            puVar11 = puVar6;
            do {
              puVar9 = puVar11;
              puVar9[-6] = puVar9[-0xe];
              puVar9[-7] = puVar9[-0xf];
              puVar9[-5] = puVar9[-0xd];
              *(undefined1 *)((long)puVar9 + -0x61) = 0;
              *(undefined1 *)(puVar9 + -0xf) = 0;
              puVar9[-4] = puVar9[-0xc];
              *(int *)(puVar9 + -3) = (int)puVar9[-0xb];
              FUN_109241da0(puVar9 + -2);
              puVar11 = puVar9 + -8;
              puVar9[-1] = puVar9[-9];
              puVar9[-2] = puVar9[-10];
              *puVar9 = *puVar11;
              *puVar11 = 0;
              puVar9[-10] = 0;
              puVar9[-9] = 0;
              ppuVar12 = &puStack_b0;
              func_0x000107c2abd4(ppuVar12,puVar9 + -0x17);
            } while (((uint)ppuVar12 >> 7 & 1) != 0);
            puVar9[-0xd] = uStack_a0;
            puVar9[-0xe] = uStack_a8;
            puVar9[-0xf] = (ulong)puStack_b0;
            uStack_a0 = uStack_a0 & 0xffffffffffffff;
            puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
            *(undefined4 *)(puVar9 + -0xb) = uStack_90;
            puVar9[-0xc] = uStack_98;
            FUN_109241da0(puVar9 + -10);
            puVar9[-9] = uStack_80;
            puVar9[-10] = uStack_88;
            *puVar11 = uStack_78;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            puStack_100 = &uStack_88;
            func_0x00010922df48(&puStack_100);
            if ((long)uStack_a0 < 0) {
              __ZdlPv(puStack_b0);
            }
          }
          puVar6 = puVar6 + 8;
          puVar11 = puVar7 + 8;
          param_1 = puVar7;
        } while (puVar7 + 8 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 8 == param_2) {
        return;
      }
      lVar15 = 0;
      puVar6 = param_1 + 8;
      puVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar18 - 2 >> 1;
      uVar14 = uVar17;
      goto LAB_1092769e8;
    }
    puVar6 = param_1 + (uVar18 >> 1) * 8;
    if (uVar18 < 0x81) {
      FUN_109277164(puVar6,param_1,puVar11);
    }
    else {
      FUN_109277164(param_1,puVar6,puVar11);
      FUN_109277164(param_1 + 8,puVar6 + -8,param_2 + -0x10);
      FUN_109277164(param_1 + 0x10,puVar6 + 8,param_2 + -0x18);
      FUN_109277164(puVar6 + -8,puVar6,puVar6 + 8);
      FUN_10927761c(param_1,puVar6);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      puVar6 = param_1 + -8;
      func_0x000107c2abd4(puVar6,param_1);
      if (((uint)puVar6 >> 7 & 1) != 0) goto LAB_109276378;
      uStack_a8 = param_1[1];
      puStack_b0 = (ulong *)*param_1;
      uStack_a0 = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uStack_98 = param_1[3];
      uStack_90 = (undefined4)param_1[4];
      puVar7 = param_1 + 5;
      uStack_80 = param_1[6];
      uStack_88 = *puVar7;
      uStack_78 = param_1[7];
      *puVar7 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      ppuVar12 = &puStack_b0;
      func_0x000107c2abd4(ppuVar12,puVar11);
      puVar6 = param_1;
      if (((uint)ppuVar12 >> 7 & 1) == 0) {
        do {
          puVar6 = puVar6 + 8;
          if (param_2 <= puVar6) break;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar6 + 8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
      }
      puVar9 = param_2;
      if (puVar6 < param_2) {
        do {
          puVar9 = puVar9 + -8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar9);
        } while (((uint)ppuVar12 >> 7 & 1) != 0);
      }
      while (puVar6 < puVar9) {
        FUN_10927761c(puVar6,puVar9);
        do {
          puVar6 = puVar6 + 8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
        do {
          puVar9 = puVar9 + -8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar9);
        } while (((uint)ppuVar12 >> 7 & 1) != 0);
      }
      puVar9 = puVar6 + -8;
      if (puVar9 != param_1) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        uVar14 = puVar6[-7];
        uVar18 = *puVar9;
        param_1[2] = puVar6[-6];
        param_1[1] = uVar14;
        *param_1 = uVar18;
        *(undefined1 *)((long)puVar6 + -0x29) = 0;
        *(undefined1 *)(puVar6 + -8) = 0;
        uVar18 = puVar6[-5];
        *(int *)(param_1 + 4) = (int)puVar6[-4];
        param_1[3] = uVar18;
        FUN_109241da0(puVar7);
        uVar18 = puVar6[-3];
        param_1[6] = puVar6[-2];
        param_1[5] = uVar18;
        param_1[7] = puVar6[-1];
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
      }
      puVar6[-6] = uStack_a0;
      puVar6[-7] = uStack_a8;
      *puVar9 = (ulong)puStack_b0;
      uStack_a0 = uStack_a0 & 0xffffffffffffff;
      puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
      *(undefined4 *)(puVar6 + -4) = uStack_90;
      puVar6[-5] = uStack_98;
      FUN_109241da0(puVar6 + -3);
      puVar6[-2] = uStack_80;
      puVar6[-3] = uStack_88;
      puVar6[-1] = uStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_100 = &uStack_88;
      func_0x00010922df48(&puStack_100);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(puStack_b0);
      }
      goto LAB_10927658c;
    }
LAB_109276378:
    lVar15 = 0;
    uStack_a8 = param_1[1];
    puStack_b0 = (ulong *)*param_1;
    uStack_a0 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_98 = param_1[3];
    uStack_90 = (undefined4)param_1[4];
    puVar7 = param_1 + 5;
    uStack_80 = param_1[6];
    uStack_88 = *puVar7;
    uStack_78 = param_1[7];
    *puVar7 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    do {
      lVar15 = lVar15 + 0x40;
      puVar4 = (undefined1 *)(lVar15 + (long)param_1);
      func_0x000107c2abd4(puVar4,&puStack_b0);
    } while (((uint)puVar4 >> 7 & 1) != 0);
    puVar9 = (ulong *)((long)param_1 + lVar15);
    puVar8 = param_2;
    if (lVar15 == 0x40) {
      do {
        if (puVar8 <= puVar9) break;
        puVar8 = puVar8 + -8;
        puVar6 = puVar8;
        func_0x000107c2abd4(puVar8,&puStack_b0);
      } while (((uint)puVar6 >> 7 & 1) == 0);
    }
    else {
      do {
        puVar8 = puVar8 + -8;
        puVar6 = puVar8;
        func_0x000107c2abd4(puVar8,&puStack_b0);
      } while (((uint)puVar6 >> 7 & 1) == 0);
    }
    puVar10 = puVar8;
    puVar6 = puVar9;
    if (puVar9 < puVar8) {
      do {
        FUN_10927761c(puVar6,puVar10);
        do {
          puVar6 = puVar6 + 8;
          puVar5 = puVar6;
          func_0x000107c2abd4(puVar6,&puStack_b0);
        } while (((uint)puVar5 >> 7 & 1) != 0);
        do {
          puVar10 = puVar10 + -8;
          puVar5 = puVar10;
          func_0x000107c2abd4(puVar10,&puStack_b0);
        } while (((uint)puVar5 >> 7 & 1) == 0);
      } while (puVar6 < puVar10);
    }
    puVar10 = puVar6 + -8;
    if (puVar10 != param_1) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar14 = puVar6[-7];
      uVar18 = *puVar10;
      param_1[2] = puVar6[-6];
      param_1[1] = uVar14;
      *param_1 = uVar18;
      *(undefined1 *)((long)puVar6 + -0x29) = 0;
      *(undefined1 *)(puVar6 + -8) = 0;
      uVar18 = puVar6[-5];
      *(int *)(param_1 + 4) = (int)puVar6[-4];
      param_1[3] = uVar18;
      FUN_109241da0(puVar7);
      uVar18 = puVar6[-3];
      param_1[6] = puVar6[-2];
      param_1[5] = uVar18;
      param_1[7] = puVar6[-1];
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
    }
    puVar6[-6] = uStack_a0;
    puVar6[-7] = uStack_a8;
    *puVar10 = (ulong)puStack_b0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
    *(undefined4 *)(puVar6 + -4) = uStack_90;
    puVar6[-5] = uStack_98;
    FUN_109241da0(puVar6 + -3);
    puVar6[-2] = uStack_80;
    puVar6[-3] = uStack_88;
    puVar6[-1] = uStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_100 = &uStack_88;
    func_0x00010922df48(&puStack_100);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(puStack_b0);
    }
    if (puVar9 < puVar8) goto LAB_109276574;
    puVar7 = param_1;
    FUN_10927732c(param_1,puVar10);
    puVar9 = puVar6;
    FUN_10927732c(puVar6,param_2);
    if ((int)puVar9 == 0) goto code_r0x000109276570;
    param_2 = puVar10;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_109276858:
  puVar7 = puVar6;
  puVar6 = puVar7;
  func_0x000107c2abd4(puVar7,puVar11);
  if (((uint)puVar6 >> 7 & 1) != 0) {
    uStack_a8 = puVar7[1];
    puStack_b0 = (ulong *)*puVar7;
    uStack_a0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uStack_98 = puVar11[0xb];
    uStack_90 = (undefined4)puVar11[0xc];
    uStack_80 = puVar11[0xe];
    uStack_88 = puVar11[0xd];
    uStack_78 = puVar11[0xf];
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    lVar3 = lVar15;
    do {
      lVar16 = lVar3;
      puVar1 = (undefined8 *)((long)param_1 + lVar16);
      if (*(char *)((long)puVar1 + 0x57) < '\0') {
        __ZdlPv(puVar1[8]);
      }
      puVar1[9] = puVar1[1];
      puVar1[8] = *puVar1;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1[10] = puVar1[2];
      puVar1[0xb] = puVar1[3];
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 4);
      FUN_109241da0(puVar1 + 0xd);
      puVar1[0xe] = puVar1[6];
      puVar1[0xd] = puVar1[5];
      puVar1[0xf] = puVar1[7];
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[5] = 0;
      puVar6 = param_1;
      if (lVar16 == 0) goto LAB_109276934;
      ppuVar12 = &puStack_b0;
      func_0x000107c2abd4(ppuVar12,(undefined1 *)(lVar16 + -0x40 + (long)param_1));
      lVar3 = lVar16 + -0x40;
    } while (((uint)ppuVar12 >> 7 & 1) != 0);
    puVar6 = (ulong *)((long)param_1 + lVar16);
LAB_109276934:
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      __ZdlPv(*puVar6);
    }
    puVar6[2] = uStack_a0;
    puVar6[1] = uStack_a8;
    *puVar6 = (ulong)puStack_b0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
    *(undefined4 *)((long)param_1 + lVar16 + 0x20) = uStack_90;
    *(ulong *)((long)param_1 + lVar16 + 0x18) = uStack_98;
    FUN_109241da0((undefined1 *)((long)param_1 + lVar16 + 0x28));
    *(ulong *)((long)param_1 + lVar16 + 0x28) = uStack_88;
    puVar6[7] = uStack_78;
    puVar6[6] = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_100 = &uStack_88;
    func_0x00010922df48(&puStack_100);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(puStack_b0);
    }
  }
  lVar15 = lVar15 + 0x40;
  puVar6 = puVar7 + 8;
  puVar11 = puVar7;
  if (puVar7 + 8 == param_2) {
    return;
  }
  goto LAB_109276858;
LAB_1092769e8:
  do {
    if ((long)uVar14 <= (long)uVar17) {
      uVar20 = uVar14 << 1 | 1;
      puVar6 = param_1 + uVar20 * 8;
      uVar13 = uVar14 * 2 + 2;
      puVar11 = puVar6;
      uVar19 = uVar20;
      if ((long)uVar13 < (long)uVar18) {
        puVar7 = puVar6;
        func_0x000107c2abd4(puVar6,puVar6 + 8);
        puVar11 = puVar6 + 8;
        uVar19 = uVar13;
        if (-1 < (char)puVar7) {
          puVar11 = puVar6;
          uVar19 = uVar20;
        }
      }
      puVar6 = param_1 + uVar14 * 8;
      puVar7 = puVar11;
      func_0x000107c2abd4(puVar11,puVar6);
      if (((uint)puVar7 >> 7 & 1) == 0) {
        uStack_a8 = puVar6[1];
        puStack_b0 = (ulong *)*puVar6;
        uStack_a0 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        uStack_98 = puVar6[3];
        uStack_90 = (undefined4)puVar6[4];
        uStack_80 = puVar6[6];
        uStack_88 = puVar6[5];
        uStack_78 = puVar6[7];
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        do {
          puVar7 = puVar11;
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            __ZdlPv(*puVar6);
          }
          uVar20 = puVar7[1];
          uVar13 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar20;
          *puVar6 = uVar13;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          *(undefined1 *)puVar7 = 0;
          uVar13 = puVar7[3];
          *(int *)(puVar6 + 4) = (int)puVar7[4];
          puVar6[3] = uVar13;
          FUN_109241da0(puVar6 + 5);
          puVar9 = puVar7 + 5;
          uVar13 = *puVar9;
          puVar6[6] = puVar7[6];
          puVar6[5] = uVar13;
          puVar6[7] = puVar7[7];
          *puVar9 = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          if ((long)uVar17 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar6 = param_1 + uVar20 * 8;
          uVar13 = uVar19 * 2 + 2;
          puVar11 = puVar6;
          uVar19 = uVar20;
          if ((long)uVar13 < (long)uVar18) {
            puVar8 = puVar6;
            func_0x000107c2abd4(puVar6,puVar6 + 8);
            puVar11 = puVar6 + 8;
            uVar19 = uVar13;
            if (-1 < (char)puVar8) {
              puVar11 = puVar6;
              uVar19 = uVar20;
            }
          }
          puVar8 = puVar11;
          func_0x000107c2abd4(puVar11,&puStack_b0);
          puVar6 = puVar7;
        } while (((uint)puVar8 >> 7 & 1) == 0);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          __ZdlPv(*puVar7);
        }
        puVar7[2] = uStack_a0;
        puVar7[1] = uStack_a8;
        *puVar7 = (ulong)puStack_b0;
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
        puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
        puVar7[3] = uStack_98;
        *(undefined4 *)(puVar7 + 4) = uStack_90;
        FUN_109241da0(puVar9);
        puVar7[6] = uStack_80;
        puVar7[5] = uStack_88;
        puVar7[7] = uStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        puStack_100 = &uStack_88;
        func_0x00010922df48(&puStack_100);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(puStack_b0);
        }
      }
    }
    bVar2 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar2);
  puStack_108 = param_2;
  do {
    uStack_f8 = param_1[1];
    puStack_100 = (ulong *)*param_1;
    uStack_f0 = param_1[2];
    uStack_e8 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_e0 = (undefined4)param_1[4];
    uStack_d0 = param_1[6];
    uStack_d8 = param_1[5];
    uStack_c8 = param_1[7];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[5] = 0;
    uVar14 = 0;
    puVar6 = param_1;
    do {
      puVar11 = puVar6 + uVar14 * 8 + 8;
      uVar13 = uVar14 << 1 | 1;
      uVar17 = uVar14 * 2 + 2;
      uVar20 = uVar13;
      puVar7 = puVar11;
      if ((long)uVar17 < (long)uVar18) {
        puVar9 = puVar11;
        func_0x000107c2abd4(puVar11,puVar6 + uVar14 * 8 + 0x10);
        uVar20 = uVar17;
        puVar7 = puVar6 + uVar14 * 8 + 0x10;
        if (-1 < (char)puVar9) {
          uVar20 = uVar13;
          puVar7 = puVar11;
        }
      }
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      uVar17 = puVar7[1];
      uVar14 = *puVar7;
      puVar6[2] = puVar7[2];
      puVar6[1] = uVar17;
      *puVar6 = uVar14;
      *(undefined1 *)((long)puVar7 + 0x17) = 0;
      *(undefined1 *)puVar7 = 0;
      puVar11 = puVar7 + 3;
      uVar14 = *puVar11;
      *(int *)(puVar6 + 4) = (int)puVar7[4];
      puVar6[3] = uVar14;
      FUN_109241da0(puVar6 + 5);
      puVar9 = puVar7 + 5;
      uVar14 = *puVar9;
      puVar6[6] = puVar7[6];
      puVar6[5] = uVar14;
      puVar6[7] = puVar7[7];
      *puVar9 = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar14 = uVar20;
      puVar6 = puVar7;
    } while ((long)uVar20 <= (long)(uVar18 - 2 >> 1));
    puVar6 = puStack_108 + -8;
    if (puVar7 == puVar6) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7[2] = uStack_f0;
      puVar7[1] = uStack_f8;
      *puVar7 = (ulong)puStack_100;
      uStack_f0 = uStack_f0 & 0xffffffffffffff;
      puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
      *puVar11 = uStack_e8;
      *(undefined4 *)(puVar7 + 4) = uStack_e0;
      FUN_109241da0(puVar9);
      puVar7[6] = uStack_d0;
      puVar7[5] = uStack_d8;
      puVar7[7] = uStack_c8;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
    }
    else {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      uVar17 = puStack_108[-7];
      uVar14 = *puVar6;
      puVar7[2] = puStack_108[-6];
      puVar7[1] = uVar17;
      *puVar7 = uVar14;
      *(undefined1 *)((long)puStack_108 + -0x29) = 0;
      *(undefined1 *)(puStack_108 + -8) = 0;
      uVar14 = puStack_108[-5];
      *(int *)(puVar7 + 4) = (int)puStack_108[-4];
      *puVar11 = uVar14;
      FUN_109241da0(puVar9);
      puVar8 = puStack_108 + -3;
      uVar14 = *puVar8;
      puVar7[6] = puStack_108[-2];
      puVar7[5] = uVar14;
      puVar7[7] = puStack_108[-1];
      *puVar8 = 0;
      puStack_108[-2] = 0;
      puStack_108[-1] = 0;
      puStack_108[-6] = uStack_f0;
      puStack_108[-7] = uStack_f8;
      *puVar6 = (ulong)puStack_100;
      uStack_f0 = uStack_f0 & 0xffffffffffffff;
      puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
      *(undefined4 *)(puStack_108 + -4) = uStack_e0;
      puStack_108[-5] = uStack_e8;
      FUN_109241da0(puVar8);
      puStack_108[-2] = uStack_d0;
      puStack_108[-3] = uStack_d8;
      puStack_108[-1] = uStack_c8;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lVar15 = (long)((long)puVar7 + (0x40 - (long)param_1)) >> 6;
      if (1 < lVar15) {
        uVar14 = lVar15 - 2U >> 1;
        puVar8 = param_1 + uVar14 * 8;
        puVar10 = puVar8;
        func_0x000107c2abd4(puVar8,puVar7);
        if (((uint)puVar10 >> 7 & 1) != 0) {
          uStack_a8 = puVar7[1];
          puStack_b0 = (ulong *)*puVar7;
          uStack_a0 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          uStack_90 = (undefined4)puVar7[4];
          uStack_98 = *puVar11;
          uStack_80 = puVar7[6];
          uStack_88 = puVar7[5];
          uStack_78 = puVar7[7];
          puVar7[6] = 0;
          puVar7[7] = 0;
          *puVar9 = 0;
          do {
            puVar11 = puVar8;
            if (*(char *)((long)puVar7 + 0x17) < '\0') {
              __ZdlPv(*puVar7);
            }
            uVar13 = puVar11[1];
            uVar17 = *puVar11;
            puVar7[2] = puVar11[2];
            puVar7[1] = uVar13;
            *puVar7 = uVar17;
            *(undefined1 *)((long)puVar11 + 0x17) = 0;
            *(undefined1 *)puVar11 = 0;
            uVar17 = puVar11[3];
            *(int *)(puVar7 + 4) = (int)puVar11[4];
            puVar7[3] = uVar17;
            FUN_109241da0(puVar7 + 5);
            puVar9 = puVar11 + 5;
            uVar17 = *puVar9;
            puVar7[6] = puVar11[6];
            puVar7[5] = uVar17;
            puVar7[7] = puVar11[7];
            *puVar9 = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar8 = param_1 + uVar14 * 8;
            puVar10 = puVar8;
            func_0x000107c2abd4(puVar8,&puStack_b0);
            puVar7 = puVar11;
          } while (((uint)puVar10 >> 7 & 1) != 0);
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
          }
          puVar11[2] = uStack_a0;
          puVar11[1] = uStack_a8;
          *puVar11 = (ulong)puStack_b0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff;
          puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
          puVar11[3] = uStack_98;
          *(undefined4 *)(puVar11 + 4) = uStack_90;
          FUN_109241da0(puVar9);
          puVar11[6] = uStack_80;
          puVar11[5] = uStack_88;
          puVar11[7] = uStack_78;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          puStack_b8 = &uStack_88;
          func_0x00010922df48(&puStack_b8);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(puStack_b0);
          }
        }
      }
    }
    puStack_b0 = &uStack_d8;
    func_0x00010922df48(&puStack_b0);
    if ((long)uStack_f0 < 0) {
      __ZdlPv(puStack_100);
    }
    bVar2 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    puStack_108 = puVar6;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x000109276570:
  if (((ulong)puVar7 & 1) == 0) {
LAB_109276574:
    FUN_109276250(param_1,puVar10,param_3,param_4 & 1);
LAB_10927658c:
    param_4 = 0;
  }
  goto LAB_1092762a0;
}



/* Entry: 109277164; end: 109277217;  */

/* WARNING: Removing unreachable block (ram,0x00010927773c) */

void FUN_109277164(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  
  puVar4 = param_2;
  func_0x000107c2abd4(param_2,param_1);
  puVar5 = param_3;
  func_0x000107c2abd4(param_3,param_2);
  if (((uint)puVar4 >> 7 & 1) != 0) {
    if (-1 < (char)puVar5) {
      FUN_10927761c(param_1,param_2);
      puVar4 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      param_1 = param_2;
      if (((uint)puVar4 >> 7 & 1) == 0) {
        return;
      }
    }
LAB_109277208:
    uVar12 = param_1[1];
    uVar11 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar3 = *(undefined4 *)(param_1 + 4);
    puVar5 = param_1 + 5;
    uVar10 = param_1[6];
    uVar8 = *puVar5;
    uStack_68 = 0;
    uVar7 = param_1[7];
    *puVar5 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar6 = param_3[2];
    uVar9 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar9;
    param_1[2] = uVar6;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    uVar6 = param_3[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
    param_1[3] = uVar6;
    uStack_78 = uVar8;
    FUN_109241da0(puVar5);
    puVar4 = param_3 + 5;
    uVar6 = *puVar4;
    param_1[6] = param_3[6];
    *puVar5 = uVar6;
    param_1[7] = param_3[7];
    *puVar4 = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __ZdlPv(*param_3);
    }
    param_3[1] = uVar12;
    *param_3 = uVar11;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
    *(undefined4 *)(param_3 + 4) = uVar3;
    FUN_109241da0(puVar4);
    param_3[6] = uVar10;
    param_3[5] = uVar8;
    param_3[7] = uVar7;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puStack_58 = &uStack_78;
    func_0x00010922df48(&puStack_58);
    return;
  }
  if ((char)puVar5 < '\0') {
    FUN_10927761c(param_2,param_3);
    puVar4 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    param_3 = param_2;
    if (((uint)puVar4 >> 7 & 1) != 0) goto LAB_109277208;
  }
  return;
}



/* Entry: 109277218; end: 10927732b;  */

/* WARNING: Removing unreachable block (ram,0x00010927773c) */

void FUN_109277218(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  
  FUN_109277164();
  uVar3 = param_4;
  func_0x000107c2abd4(param_4,param_3);
  if (((uint)uVar3 >> 7 & 1) != 0) {
    FUN_10927761c(param_3,param_4);
    uVar3 = param_3;
    func_0x000107c2abd4(param_3,param_2);
    if (((uint)uVar3 >> 7 & 1) != 0) {
      FUN_10927761c(param_2,param_3);
      puVar4 = param_2;
      func_0x000107c2abd4(param_2,param_1);
      if (((uint)puVar4 >> 7 & 1) != 0) {
        FUN_10927761c(param_1,param_2);
      }
    }
  }
  uVar3 = param_5;
  func_0x000107c2abd4(param_5,param_4);
  if (((uint)uVar3 >> 7 & 1) != 0) {
    FUN_10927761c(param_4,param_5);
    uVar3 = param_4;
    func_0x000107c2abd4(param_4,param_3);
    if (((uint)uVar3 >> 7 & 1) != 0) {
      FUN_10927761c(param_3,param_4);
      uVar3 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      if (((uint)uVar3 >> 7 & 1) != 0) {
        FUN_10927761c(param_2,param_3);
        puVar4 = param_2;
        func_0x000107c2abd4(param_2,param_1);
        if (((uint)puVar4 >> 7 & 1) != 0) {
          uVar12 = param_1[1];
          uVar11 = *param_1;
          uVar3 = param_1[2];
          uVar1 = param_1[3];
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
          uVar2 = *(undefined4 *)(param_1 + 4);
          puVar6 = param_1 + 5;
          uVar10 = param_1[6];
          uVar8 = *puVar6;
          uStack_68 = 0;
          uVar7 = param_1[7];
          *puVar6 = 0;
          param_1[6] = 0;
          param_1[7] = 0;
          uVar5 = param_2[2];
          uVar9 = *param_2;
          param_1[1] = param_2[1];
          *param_1 = uVar9;
          param_1[2] = uVar5;
          *(undefined1 *)((long)param_2 + 0x17) = 0;
          *(undefined1 *)param_2 = 0;
          uVar5 = param_2[3];
          *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
          param_1[3] = uVar5;
          uStack_78 = uVar8;
          FUN_109241da0(puVar6);
          puVar4 = param_2 + 5;
          uVar5 = *puVar4;
          param_1[6] = param_2[6];
          *puVar6 = uVar5;
          param_1[7] = param_2[7];
          *puVar4 = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          if (*(char *)((long)param_2 + 0x17) < '\0') {
            __ZdlPv(*param_2);
          }
          param_2[1] = uVar12;
          *param_2 = uVar11;
          param_2[2] = uVar3;
          param_2[3] = uVar1;
          *(undefined4 *)(param_2 + 4) = uVar2;
          FUN_109241da0(puVar4);
          param_2[6] = uVar10;
          param_2[5] = uVar8;
          param_2[7] = uVar7;
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_78 = 0;
          puStack_58 = &uStack_78;
          func_0x00010922df48(&puStack_58);
          return;
        }
      }
    }
  }
  return;
}



/* Entry: 10927732c; end: 10927761b;  */

bool FUN_10927732c(ulong *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  int iVar9;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong *puStack_68;
  
  uVar4 = (long)param_2 - (long)param_1 >> 6;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_1092773dc:
      FUN_109277164(param_1,param_1 + 8,param_1 + 0x10);
      if (param_1 + 0x18 == param_2) {
        return true;
      }
      lVar8 = 0;
      iVar9 = 0;
      puVar3 = param_1 + 0x18;
      puVar7 = param_1 + 0x10;
      do {
        puVar6 = puVar3;
        puVar3 = puVar6;
        func_0x000107c2abd4(puVar6,puVar7);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uStack_a0 = puVar6[2];
          uStack_98 = puVar6[3];
          uStack_a8 = puVar6[1];
          uStack_b0 = *puVar6;
          puVar6[1] = 0;
          puVar6[2] = 0;
          *puVar6 = 0;
          uStack_90 = (undefined4)puVar6[4];
          uStack_80 = puVar6[6];
          uStack_88 = puVar6[5];
          uStack_78 = puVar6[7];
          puVar6[5] = 0;
          puVar6[6] = 0;
          puVar6[7] = 0;
          lVar1 = lVar8;
          do {
            lVar5 = lVar1;
            if (*(char *)((long)param_1 + lVar5 + 0xd7) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar5 + 0xc0));
            }
            *(undefined8 *)((long)param_1 + lVar5 + 200) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x88);
            *(undefined8 *)((long)param_1 + lVar5 + 0xc0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x80);
            *(undefined1 *)((long)param_1 + lVar5 + 0x97) = 0;
            *(undefined1 *)((long)param_1 + lVar5 + 0x80) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xd0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x90);
            *(undefined8 *)((long)param_1 + lVar5 + 0xd8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0x98);
            *(undefined4 *)((long)param_1 + lVar5 + 0xe0) =
                 *(undefined4 *)((long)param_1 + lVar5 + 0xa0);
            FUN_109241da0((long)param_1 + lVar5 + 0xe8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xf0) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xb0);
            *(undefined8 *)((long)param_1 + lVar5 + 0xe8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xa8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xf8) =
                 *(undefined8 *)((long)param_1 + lVar5 + 0xb8);
            *(undefined8 *)((long)param_1 + lVar5 + 0xb0) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xb8) = 0;
            *(undefined8 *)((long)param_1 + lVar5 + 0xa8) = 0;
            puVar3 = param_1;
            if (lVar5 == -0x80) goto LAB_1092774e4;
            uVar2 = (uint)&uStack_b0;
            func_0x000107c2abd4(&uStack_b0,(long)param_1 + lVar5 + 0x40);
            lVar1 = lVar5 + -0x40;
          } while ((uVar2 >> 7 & 1) != 0);
          puVar3 = (ulong *)((long)param_1 + lVar5 + 0x80);
LAB_1092774e4:
          if (*(char *)((long)puVar3 + 0x17) < '\0') {
            __ZdlPv(*puVar3);
          }
          puVar3[1] = uStack_a8;
          *puVar3 = uStack_b0;
          puVar3[2] = uStack_a0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff;
          uStack_b0 = uStack_b0 & 0xffffffffffffff00;
          *(ulong *)((long)param_1 + lVar5 + 0x98) = uStack_98;
          *(undefined4 *)((long)param_1 + lVar5 + 0xa0) = uStack_90;
          FUN_109241da0((long)param_1 + lVar5 + 0xa8);
          *(ulong *)((long)param_1 + lVar5 + 0xa8) = uStack_88;
          puVar3[7] = uStack_78;
          puVar3[6] = uStack_80;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_88 = 0;
          puStack_68 = &uStack_88;
          func_0x00010922df48(&puStack_68);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(uStack_b0);
          }
          iVar9 = iVar9 + 1;
          if (iVar9 == 8) {
            return puVar6 + 8 == param_2;
          }
        }
        lVar8 = lVar8 + 0x40;
        puVar3 = puVar6 + 8;
        puVar7 = puVar6;
        if (puVar6 + 8 == param_2) {
          return true;
        }
      } while( true );
    }
    param_2 = param_2 + -8;
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_109277164(param_1,param_1 + 8,param_2 + -8);
      return true;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_109277218(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,param_2 + -8);
        return true;
      }
      goto LAB_1092773dc;
    }
    param_2 = param_2 + -8;
    FUN_109277164(param_1,param_1 + 8,param_1 + 0x10);
    puVar3 = param_2;
    func_0x000107c2abd4(param_2,param_1 + 0x10);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927761c(param_1 + 0x10,param_2);
    puVar3 = param_1 + 0x10;
    func_0x000107c2abd4(puVar3,param_1 + 8);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927761c(param_1 + 8,param_1 + 0x10);
    puVar3 = param_1 + 8;
    func_0x000107c2abd4(puVar3,param_1);
    if (((uint)puVar3 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 8;
  }
  FUN_10927761c(param_1,param_2);
  return true;
}



/* Entry: 10927761c; end: 10927775f;  */

/* WARNING: Removing unreachable block (ram,0x00010927773c) */

void FUN_10927761c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  
  uVar12 = param_1[1];
  uVar11 = *param_1;
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar3 = *(undefined4 *)(param_1 + 4);
  puVar6 = param_1 + 5;
  uVar10 = param_1[6];
  uVar8 = *puVar6;
  uStack_68 = 0;
  uVar7 = param_1[7];
  *puVar6 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar4 = param_2[2];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = uVar4;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = uVar4;
  uStack_78 = uVar8;
  FUN_109241da0(puVar6);
  puVar5 = param_2 + 5;
  uVar4 = *puVar5;
  param_1[6] = param_2[6];
  *puVar6 = uVar4;
  param_1[7] = param_2[7];
  *puVar5 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    __ZdlPv(*param_2);
  }
  param_2[1] = uVar12;
  *param_2 = uVar11;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar3;
  FUN_109241da0(puVar5);
  param_2[6] = uVar10;
  param_2[5] = uVar8;
  param_2[7] = uVar7;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  puStack_58 = &uStack_78;
  func_0x00010922df48(&puStack_58);
  return;
}



/* Entry: 109277760; end: 109277773;  */

/* WARNING: Removing unreachable block (ram,0x0001092777a0) */

long * FUN_109277760(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x30;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109277774; end: 1092777d3;  */

/* WARNING: Removing unreachable block (ram,0x0001092777a0) */

long * FUN_109277774(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1092777d4; end: 109278413;  */

/* WARNING: Possible PIC construction at 0x0001092778ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092778d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109277964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109277d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109277d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109277d3c) */
/* WARNING: Removing unreachable block (ram,0x000109277d4c) */
/* WARNING: Removing unreachable block (ram,0x000109277d68) */
/* WARNING: Removing unreachable block (ram,0x000109277d84) */
/* WARNING: Removing unreachable block (ram,0x0001092778d4) */
/* WARNING: Removing unreachable block (ram,0x000109277968) */
/* WARNING: Removing unreachable block (ram,0x000109277970) */
/* WARNING: Removing unreachable block (ram,0x000109277b54) */
/* WARNING: Removing unreachable block (ram,0x000109277bb4) */
/* WARNING: Removing unreachable block (ram,0x000109277bb8) */
/* WARNING: Removing unreachable block (ram,0x000109277b8c) */
/* WARNING: Removing unreachable block (ram,0x000109277b90) */
/* WARNING: Removing unreachable block (ram,0x000109277b9c) */
/* WARNING: Removing unreachable block (ram,0x000109277bb0) */
/* WARNING: Removing unreachable block (ram,0x000109277bd0) */
/* WARNING: Removing unreachable block (ram,0x000109277bdc) */
/* WARNING: Removing unreachable block (ram,0x000109277be0) */
/* WARNING: Removing unreachable block (ram,0x000109277bf8) */
/* WARNING: Removing unreachable block (ram,0x000109277c34) */
/* WARNING: Removing unreachable block (ram,0x000109277bfc) */
/* WARNING: Removing unreachable block (ram,0x000109277c08) */
/* WARNING: Removing unreachable block (ram,0x000109277c20) */
/* WARNING: Removing unreachable block (ram,0x000109277c3c) */
/* WARNING: Removing unreachable block (ram,0x000109277c48) */
/* WARNING: Removing unreachable block (ram,0x000109277c58) */
/* WARNING: Removing unreachable block (ram,0x000109277c60) */
/* WARNING: Removing unreachable block (ram,0x000109277c80) */
/* WARNING: Removing unreachable block (ram,0x000109277c94) */
/* WARNING: Removing unreachable block (ram,0x000109277c9c) */
/* WARNING: Removing unreachable block (ram,0x000109277cc4) */
/* WARNING: Removing unreachable block (ram,0x000109277980) */
/* WARNING: Removing unreachable block (ram,0x0001092779ac) */
/* WARNING: Removing unreachable block (ram,0x0001092779c4) */
/* WARNING: Removing unreachable block (ram,0x0001092779f4) */
/* WARNING: Removing unreachable block (ram,0x0001092779f8) */
/* WARNING: Removing unreachable block (ram,0x000109277a1c) */
/* WARNING: Removing unreachable block (ram,0x000109277a00) */
/* WARNING: Removing unreachable block (ram,0x000109277a18) */
/* WARNING: Removing unreachable block (ram,0x0001092779d8) */
/* WARNING: Removing unreachable block (ram,0x0001092779f0) */
/* WARNING: Removing unreachable block (ram,0x000109277a20) */
/* WARNING: Removing unreachable block (ram,0x000109277a74) */
/* WARNING: Removing unreachable block (ram,0x000109277a28) */
/* WARNING: Removing unreachable block (ram,0x000109277a30) */
/* WARNING: Removing unreachable block (ram,0x000109277a3c) */
/* WARNING: Removing unreachable block (ram,0x000109277a54) */
/* WARNING: Removing unreachable block (ram,0x000109277a68) */
/* WARNING: Removing unreachable block (ram,0x000109277a70) */
/* WARNING: Removing unreachable block (ram,0x000109277a78) */
/* WARNING: Removing unreachable block (ram,0x000109277a84) */
/* WARNING: Removing unreachable block (ram,0x000109277a94) */
/* WARNING: Removing unreachable block (ram,0x000109277a9c) */
/* WARNING: Removing unreachable block (ram,0x000109277abc) */
/* WARNING: Removing unreachable block (ram,0x000109277ad0) */
/* WARNING: Removing unreachable block (ram,0x000109277ad8) */
/* WARNING: Removing unreachable block (ram,0x000109277b00) */
/* WARNING: Removing unreachable block (ram,0x000109277b08) */
/* WARNING: Removing unreachable block (ram,0x000109277b14) */
/* WARNING: Removing unreachable block (ram,0x000109277cd0) */
/* WARNING: Removing unreachable block (ram,0x000109277cd8) */
/* WARNING: Removing unreachable block (ram,0x000109277b34) */
/* WARNING: Removing unreachable block (ram,0x000109277b38) */
/* WARNING: Removing unreachable block (ram,0x000109277b4c) */
/* WARNING: Removing unreachable block (ram,0x0001092778b0) */
/* WARNING: Removing unreachable block (ram,0x000109277d28) */
/* WARNING: Removing unreachable block (ram,0x000109278174) */

void FUN_1092777d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  byte bVar7;
  undefined8 **ppuVar8;
  bool bVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 *unaff_x20;
  ulong uVar18;
  undefined8 *puVar19;
  undefined8 *unaff_x21;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  ppuVar8 = &puStack_e0;
  puVar25 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = param_2 + -6;
  puStack_d0 = param_2 + -0xc;
  puStack_d8 = param_2 + -0x12;
  puVar11 = param_2 + -5;
  uVar21 = (long)param_2 - (long)param_1;
  uVar22 = ((long)uVar21 >> 4) * -0x5555555555555555;
  puVar12 = param_1;
  puVar14 = param_2;
  puVar15 = param_3;
  puStack_e0 = puVar11;
  if (uVar22 - 2 == 0 || (long)uVar22 < 2) {
    if (uVar22 < 2) goto LAB_1092783d8;
    if (uVar22 == 2) {
      puVar14 = param_1 + 1;
      func_0x000107c2abd4();
      puVar12 = puVar11;
      if (((uint)puVar11 >> 7 & 1) != 0) {
        puVar12 = param_1;
        puVar14 = puStack_c8;
        FUN_109278414();
      }
      goto LAB_1092783d8;
    }
  }
  else {
    if (uVar22 == 3) {
      puVar11 = param_1 + 6;
      uVar17 = 0x109277d28;
      ppuVar8 = &puStack_e0;
      puVar15 = puStack_c8;
      goto SUB_1092784ec;
    }
    if (uVar22 == 4) {
      puVar11 = param_1 + 6;
      uVar17 = 0x109277d3c;
      ppuVar8 = &puStack_e0;
      puVar15 = param_1 + 0xc;
      goto SUB_1092784ec;
    }
    if (uVar22 == 5) {
      puVar14 = param_1 + 6;
      puVar15 = param_1 + 0xc;
      FUN_1092785a0();
      goto LAB_1092783d8;
    }
  }
  if ((long)uVar21 < 0x480) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
        unaff_x20 = (undefined8 *)auStack_c0;
        unaff_x21 = param_1 + -5;
        puVar11 = param_1 + 6;
        puVar13 = param_1;
        do {
          param_1 = puVar11;
          puVar12 = puVar13 + 7;
          puVar14 = puVar13 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar12 >> 7 & 1) != 0) {
            auStack_c0[0] = *(undefined4 *)param_1;
            uStack_b0 = puVar13[8];
            uStack_b8 = puVar13[7];
            uStack_a8 = puVar13[9];
            puVar13[7] = 0;
            puVar13[8] = 0;
            puVar13[9] = 0;
            uStack_98 = puVar13[0xb];
            uStack_a0 = puVar13[10];
            puVar11 = unaff_x21;
            do {
              puVar13 = puVar11;
              *(undefined4 *)(puVar13 + 0xb) = *(undefined4 *)(puVar13 + 5);
              if (*(char *)((long)puVar13 + 0x77) < '\0') {
                __ZdlPv(puVar13[0xc]);
              }
              puVar13[0xd] = puVar13[7];
              puVar13[0xc] = puVar13[6];
              puVar13[0xe] = puVar13[8];
              *(undefined1 *)((long)puVar13 + 0x47) = 0;
              *(undefined1 *)(puVar13 + 6) = 0;
              puVar13[0x10] = puVar13[10];
              puVar13[0xf] = puVar13[9];
              puVar12 = &uStack_b8;
              puVar14 = puVar13;
              func_0x000107c2abd4();
              puVar11 = puVar13 + -6;
            } while (((uint)puVar12 >> 7 & 1) != 0);
            *(undefined4 *)(puVar13 + 5) = auStack_c0[0];
            if (*(char *)((long)puVar13 + 0x47) < '\0') {
              puVar12 = (undefined8 *)puVar13[6];
              __ZdlPv();
            }
            puVar13[8] = uStack_a8;
            puVar13[7] = uStack_b0;
            puVar13[6] = uStack_b8;
            puVar13[10] = uStack_98;
            puVar13[9] = uStack_a0;
          }
          unaff_x21 = unaff_x21 + 6;
          puVar11 = param_1 + 6;
          puVar13 = param_1;
          param_3 = param_1;
        } while (param_1 + 6 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
      unaff_x20 = (undefined8 *)0x0;
      unaff_x21 = (undefined8 *)auStack_c0;
      puVar11 = param_1 + 6;
      puVar13 = param_1;
      do {
        param_3 = puVar11;
        puVar12 = puVar13 + 7;
        puVar14 = puVar13 + 1;
        func_0x000107c2abd4();
        if (((uint)puVar12 >> 7 & 1) != 0) {
          auStack_c0[0] = *(undefined4 *)param_3;
          uStack_b0 = puVar13[8];
          uStack_b8 = puVar13[7];
          uStack_a8 = puVar13[9];
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          uStack_98 = puVar13[0xb];
          uStack_a0 = puVar13[10];
          puVar11 = unaff_x20;
          do {
            puVar13 = puVar11;
            puVar3 = (undefined4 *)((long)param_1 + (long)puVar13);
            puVar3[0xc] = *puVar3;
            if (*(char *)((long)puVar3 + 0x4f) < '\0') {
              puVar12 = *(undefined8 **)(puVar3 + 0xe);
              __ZdlPv();
            }
            *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(puVar3 + 4);
            *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)(puVar3 + 2);
            *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(puVar3 + 6);
            *(undefined1 *)((long)puVar3 + 0x1f) = 0;
            *(undefined1 *)(puVar3 + 2) = 0;
            *(undefined8 *)(puVar3 + 0x16) = *(undefined8 *)(puVar3 + 10);
            *(undefined8 *)(puVar3 + 0x14) = *(undefined8 *)(puVar3 + 8);
            puVar11 = param_1;
            if (puVar13 == (undefined8 *)0x0) goto LAB_109277e60;
            puVar14 = (undefined8 *)(((long)param_1 + (long)puVar13) - 0x28);
            puVar12 = &uStack_b8;
            func_0x000107c2abd4();
            puVar11 = puVar13 + -6;
          } while (((uint)puVar12 >> 7 & 1) != 0);
          puVar11 = (undefined8 *)((long)param_1 + (long)(puVar13 + -6) + 0x30);
LAB_109277e60:
          *(undefined4 *)puVar11 = auStack_c0[0];
          lVar5 = (long)param_1 + (long)puVar13;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            puVar12 = *(undefined8 **)(lVar5 + 8);
            __ZdlPv();
          }
          *(undefined8 *)(lVar5 + 0x18) = uStack_a8;
          *(undefined8 *)(lVar5 + 0x10) = uStack_b0;
          *(undefined8 *)(lVar5 + 8) = uStack_b8;
          *(undefined8 *)(lVar5 + 0x28) = uStack_98;
          *(undefined8 *)(lVar5 + 0x20) = uStack_a0;
        }
        unaff_x20 = unaff_x20 + 6;
        puVar11 = param_3 + 6;
        puVar13 = param_3;
      } while (param_3 + 6 != param_2);
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      if (0x1800 < uVar21) {
        uVar17 = 0x1092778b0;
        ppuVar8 = &puStack_e0;
        puVar11 = param_1 + (uVar22 >> 1) * 6;
        puVar15 = puStack_c8;
        goto SUB_1092784ec;
      }
      uVar17 = 0x109277968;
      ppuVar8 = &puStack_e0;
      puVar12 = param_1 + (uVar22 >> 1) * 6;
      puVar11 = param_1;
      puVar15 = puStack_c8;
      goto SUB_1092784ec;
    }
    if (param_1 != param_2) {
      uVar20 = uVar22 - 2 >> 1;
      uVar16 = uVar20;
      puStack_c8 = param_2;
      do {
        if ((long)uVar16 <= (long)uVar20) {
          uVar4 = uVar16 << 1 | 1;
          puVar11 = param_1 + uVar4 * 6;
          uVar1 = uVar16 * 2 + 2;
          uVar18 = uVar4;
          if ((long)uVar1 < (long)uVar22) {
            puVar14 = puVar11 + 1;
            func_0x000107c2abd4(puVar14,puVar11 + 7);
            bVar9 = -1 < (char)puVar14;
            lVar5 = 0x30;
            if (bVar9) {
              lVar5 = 0;
            }
            puVar11 = (undefined8 *)((long)puVar11 + lVar5);
            uVar18 = uVar1;
            if (bVar9) {
              uVar18 = uVar4;
            }
          }
          puVar13 = param_1 + uVar16 * 6;
          puVar12 = puVar11 + 1;
          puVar14 = puVar13 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar12 >> 7 & 1) == 0) {
            auStack_c0[0] = *(undefined4 *)puVar13;
            uStack_b0 = puVar13[2];
            uStack_b8 = puVar13[1];
            uStack_a8 = puVar13[3];
            puVar13[2] = 0;
            puVar13[3] = 0;
            puVar13[1] = 0;
            uStack_98 = puVar13[5];
            uStack_a0 = puVar13[4];
            do {
              puVar19 = puVar11;
              *(undefined4 *)puVar13 = *(undefined4 *)puVar19;
              if (*(char *)((long)puVar13 + 0x1f) < '\0') {
                puVar12 = (undefined8 *)puVar13[1];
                __ZdlPv();
              }
              uVar27 = puVar19[2];
              uVar17 = puVar19[1];
              puVar13[3] = puVar19[3];
              puVar13[2] = uVar27;
              puVar13[1] = uVar17;
              *(undefined1 *)((long)puVar19 + 0x1f) = 0;
              *(undefined1 *)(puVar19 + 1) = 0;
              uVar17 = puVar19[4];
              puVar13[5] = puVar19[5];
              puVar13[4] = uVar17;
              if ((long)uVar20 < (long)uVar18) break;
              uVar4 = uVar18 << 1 | 1;
              puVar11 = param_1 + uVar4 * 6;
              uVar1 = uVar18 * 2 + 2;
              uVar18 = uVar4;
              if ((long)uVar1 < (long)uVar22) {
                puVar14 = puVar11 + 1;
                func_0x000107c2abd4(puVar14,puVar11 + 7);
                bVar9 = -1 < (char)puVar14;
                lVar5 = 0x30;
                if (bVar9) {
                  lVar5 = 0;
                }
                puVar11 = (undefined8 *)((long)puVar11 + lVar5);
                uVar18 = uVar1;
                if (bVar9) {
                  uVar18 = uVar4;
                }
              }
              puVar12 = puVar11 + 1;
              puVar14 = &uStack_b8;
              func_0x000107c2abd4();
              puVar13 = puVar19;
            } while (((uint)puVar12 >> 7 & 1) == 0);
            *(undefined4 *)puVar19 = auStack_c0[0];
            if (*(char *)((long)puVar19 + 0x1f) < '\0') {
              puVar12 = (undefined8 *)puVar19[1];
              __ZdlPv();
            }
            puVar19[3] = uStack_a8;
            puVar19[2] = uStack_b0;
            puVar19[1] = uStack_b8;
            puVar19[5] = uStack_98;
            puVar19[4] = uStack_a0;
          }
        }
        bVar9 = uVar16 != 0;
        uVar16 = uVar16 - 1;
      } while (bVar9);
      puVar11 = (undefined8 *)((uVar21 >> 4) * -0x5555555555555555);
      puVar13 = puStack_c8;
      do {
        unaff_x20 = puVar13;
        puStack_d8 = (undefined8 *)CONCAT44(puStack_d8._4_4_,*(undefined4 *)param_1);
        puStack_d0 = (undefined8 *)param_1[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
        uStack_78 = (undefined7)param_1[2];
        uStack_71 = (undefined1)((ulong)param_1[2] >> 0x38);
        puStack_c8 = (undefined8 *)CONCAT44(puStack_c8._4_4_,(uint)*(byte *)((long)param_1 + 0x1f));
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        uStack_88 = param_1[5];
        uStack_90 = param_1[4];
        puVar13 = param_1;
        puVar19 = (undefined8 *)0x0;
        do {
          unaff_x21 = (undefined8 *)((long)puVar19 << 1 | 1);
          puVar2 = (undefined8 *)((long)puVar19 * 2 + 2);
          puVar23 = puVar13 + (long)puVar19 * 6 + 6;
          puVar24 = unaff_x21;
          if ((long)puVar2 < (long)puVar11) {
            puVar12 = puVar13 + (long)puVar19 * 6 + 7;
            puVar14 = puVar13 + (long)puVar19 * 6 + 0xd;
            func_0x000107c2abd4();
            puVar23 = puVar13 + (long)puVar19 * 6 + 0xc;
            puVar24 = puVar2;
            if (-1 < (char)puVar12) {
              puVar23 = puVar13 + (long)puVar19 * 6 + 6;
              puVar24 = unaff_x21;
            }
          }
          *(undefined4 *)puVar13 = *(undefined4 *)puVar23;
          if (*(char *)((long)puVar13 + 0x1f) < '\0') {
            puVar12 = (undefined8 *)puVar13[1];
            __ZdlPv();
          }
          uVar27 = puVar23[2];
          uVar17 = puVar23[1];
          puVar13[3] = puVar23[3];
          puVar13[2] = uVar27;
          puVar13[1] = uVar17;
          *(undefined1 *)((long)puVar23 + 0x1f) = 0;
          *(undefined1 *)(puVar23 + 1) = 0;
          uVar17 = puVar23[4];
          puVar13[5] = puVar23[5];
          puVar13[4] = uVar17;
          puVar13 = puVar23;
          puVar19 = puVar24;
        } while ((long)puVar24 <= (long)((long)puVar11 - 2U >> 1));
        puVar13 = unaff_x20 + -6;
        if (puVar23 == puVar13) {
          *(undefined4 *)puVar23 = puStack_d8._0_4_;
          if (*(char *)((long)puVar23 + 0x1f) < '\0') {
            puVar12 = (undefined8 *)puVar23[1];
            __ZdlPv();
          }
          puVar23[1] = puStack_d0;
          puVar23[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar23 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(char *)((long)puVar23 + 0x1f) = (char)puStack_c8;
          puVar23[5] = uStack_88;
          puVar23[4] = uStack_90;
        }
        else {
          *(undefined4 *)puVar23 = *(undefined4 *)puVar13;
          if (*(char *)((long)puVar23 + 0x1f) < '\0') {
            puVar12 = (undefined8 *)puVar23[1];
            __ZdlPv();
          }
          uVar27 = unaff_x20[-4];
          uVar17 = unaff_x20[-5];
          puVar23[3] = unaff_x20[-3];
          puVar23[2] = uVar27;
          puVar23[1] = uVar17;
          *(undefined1 *)((long)unaff_x20 - 0x11) = 0;
          *(undefined1 *)(unaff_x20 + -5) = 0;
          uVar17 = unaff_x20[-2];
          puVar23[5] = unaff_x20[-1];
          puVar23[4] = uVar17;
          *(undefined4 *)(unaff_x20 + -6) = puStack_d8._0_4_;
          unaff_x20[-5] = puStack_d0;
          *(ulong *)((long)unaff_x20 - 0x19) = CONCAT71(uStack_70,uStack_71);
          unaff_x20[-4] = CONCAT17(uStack_71,uStack_78);
          *(char *)((long)unaff_x20 - 0x11) = (char)puStack_c8;
          unaff_x20[-1] = uStack_88;
          unaff_x20[-2] = uStack_90;
          uVar21 = (long)puVar23 + (0x30 - (long)param_1);
          if (0x30 < (long)uVar21) {
            puVar19 = (undefined8 *)((uVar21 >> 4) * -0x5555555555555555 - 2 >> 1);
            puVar12 = param_1 + (long)puVar19 * 6 + 1;
            puVar14 = puVar23 + 1;
            func_0x000107c2abd4();
            unaff_x20 = puVar19;
            if (((uint)puVar12 >> 7 & 1) != 0) {
              auStack_c0[0] = *(undefined4 *)puVar23;
              uStack_a8 = puVar23[3];
              uStack_b0 = puVar23[2];
              uStack_b8 = puVar23[1];
              puVar23[2] = 0;
              puVar23[3] = 0;
              puVar23[1] = 0;
              uStack_98 = puVar23[5];
              uStack_a0 = puVar23[4];
              puVar2 = param_1 + (long)puVar19 * 6;
              do {
                unaff_x21 = puVar2;
                *(undefined4 *)puVar23 = *(undefined4 *)unaff_x21;
                if (*(char *)((long)puVar23 + 0x1f) < '\0') {
                  puVar12 = (undefined8 *)puVar23[1];
                  __ZdlPv();
                }
                uVar27 = unaff_x21[2];
                uVar17 = unaff_x21[1];
                puVar23[3] = unaff_x21[3];
                puVar23[2] = uVar27;
                puVar23[1] = uVar17;
                *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
                *(undefined1 *)(unaff_x21 + 1) = 0;
                uVar17 = unaff_x21[4];
                puVar23[5] = unaff_x21[5];
                puVar23[4] = uVar17;
                unaff_x20 = (undefined8 *)0x0;
                if (puVar19 == (undefined8 *)0x0) break;
                puVar19 = (undefined8 *)((long)puVar19 - 1U >> 1);
                puVar12 = param_1 + (long)puVar19 * 6 + 1;
                puVar14 = &uStack_b8;
                func_0x000107c2abd4();
                unaff_x20 = puVar19;
                puVar2 = param_1 + (long)puVar19 * 6;
                puVar23 = unaff_x21;
              } while (((uint)puVar12 >> 7 & 1) != 0);
              *(undefined4 *)unaff_x21 = auStack_c0[0];
              if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
                puVar12 = (undefined8 *)unaff_x21[1];
                __ZdlPv();
              }
              unaff_x21[3] = uStack_a8;
              unaff_x21[2] = uStack_b0;
              unaff_x21[1] = uStack_b8;
              unaff_x21[5] = uStack_98;
              unaff_x21[4] = uStack_a0;
            }
          }
        }
        param_3 = (undefined8 *)((long)puVar11 - 1);
        bVar9 = 2 < (long)puVar11;
        puVar11 = param_3;
      } while (bVar9);
    }
  }
LAB_1092783d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar26 = FUN_109278414;
  ___stack_chk_fail();
  do {
    *(undefined8 **)((long)ppuVar8 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar8 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar8 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar8 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar8 + -0x10) = puVar25;
    *(code **)((long)ppuVar8 + -8) = pcVar26;
    puVar25 = (undefined1 *)((long)ppuVar8 + -0x10);
    *(undefined8 *)((long)ppuVar8 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = *(undefined4 *)puVar12;
    unaff_x20 = (undefined8 *)puVar12[1];
    *(undefined8 *)((long)ppuVar8 + -0x48) = puVar12[2];
    *(undefined8 *)((long)ppuVar8 + -0x41) = *(undefined8 *)((long)puVar12 + 0x17);
    bVar7 = *(byte *)((long)puVar12 + 0x1f);
    unaff_x21 = (undefined8 *)(ulong)bVar7;
    puVar12[2] = 0;
    puVar12[3] = 0;
    puVar12[1] = 0;
    uVar17 = puVar12[4];
    *(undefined8 *)((long)ppuVar8 + -0x58) = puVar12[5];
    *(undefined8 *)((long)ppuVar8 + -0x60) = uVar17;
    *(undefined4 *)puVar12 = *(undefined4 *)puVar14;
    uVar27 = puVar14[2];
    uVar17 = puVar14[1];
    puVar12[3] = puVar14[3];
    puVar12[2] = uVar27;
    puVar12[1] = uVar17;
    *(undefined1 *)((long)puVar14 + 0x1f) = 0;
    *(undefined1 *)(puVar14 + 1) = 0;
    uVar17 = puVar14[4];
    puVar12[5] = puVar14[5];
    puVar12[4] = uVar17;
    *(undefined4 *)puVar14 = uVar6;
    puVar11 = puVar14;
    if (*(char *)((long)puVar14 + 0x1f) < '\0') {
      puVar12 = (undefined8 *)puVar14[1];
      __ZdlPv();
    }
    uVar17 = *(undefined8 *)((long)ppuVar8 + -0x48);
    puVar14[1] = unaff_x20;
    puVar14[2] = uVar17;
    *(undefined8 *)((long)puVar14 + 0x17) = *(undefined8 *)((long)ppuVar8 + -0x41);
    *(byte *)((long)puVar14 + 0x1f) = bVar7;
    uVar17 = *(undefined8 *)((long)ppuVar8 + -0x60);
    puVar14[5] = *(undefined8 *)((long)ppuVar8 + -0x58);
    puVar14[4] = uVar17;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar8 + -0x38)) {
      return;
    }
    uVar17 = 0x1092784ec;
    ___stack_chk_fail();
    ppuVar8 = (undefined8 **)((long)ppuVar8 + -0x60);
    param_1 = puVar14;
SUB_1092784ec:
    puVar14 = puVar15;
    *(undefined8 **)((long)ppuVar8 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar8 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar8 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar8 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar8 + -0x10) = puVar25;
    *(undefined8 *)((long)ppuVar8 + -8) = uVar17;
    puVar13 = puVar11 + 1;
    puVar15 = puVar14;
    func_0x000107c2abd4(puVar13,puVar12 + 1);
    puVar19 = puVar14 + 1;
    func_0x000107c2abd4(puVar19,puVar11 + 1);
    if (((uint)puVar13 >> 7 & 1) == 0) {
      if (-1 < (char)puVar19) {
        return;
      }
      FUN_109278414(puVar11,puVar14);
      puVar14 = puVar11 + 1;
      func_0x000107c2abd4(puVar14,puVar12 + 1);
      uVar10 = (uint)puVar14;
      puVar14 = puVar11;
joined_r0x000109278574:
      if ((uVar10 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar19) {
      FUN_109278414(puVar12,puVar11);
      puVar12 = puVar14 + 1;
      func_0x000107c2abd4(puVar12,puVar11 + 1);
      uVar10 = (uint)puVar12;
      puVar12 = puVar11;
      goto joined_r0x000109278574;
    }
    puVar25 = *(undefined1 **)((long)ppuVar8 + -0x10);
    pcVar26 = *(code **)((long)ppuVar8 + -8);
    unaff_x20 = *(undefined8 **)((long)ppuVar8 + -0x20);
    param_1 = *(undefined8 **)((long)ppuVar8 + -0x18);
    param_3 = *(undefined8 **)((long)ppuVar8 + -0x30);
    unaff_x21 = *(undefined8 **)((long)ppuVar8 + -0x28);
  } while( true );
}



/* Entry: 109278414; end: 10927859f;  */

void FUN_109278414(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar10;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    uVar9 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar9;
    *param_1 = *param_2;
    uVar10 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar10;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    uVar9 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = uVar2;
    puVar8 = param_2;
    puVar7 = param_3;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)(param_2 + 8) = uVar9;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x90) = unaff_x22;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x1092784ec;
    puVar5 = puVar8 + 2;
    param_3 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_109278414(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x000109278574:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_109278414(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x000109278574;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar7;
  } while( true );
}



/* Entry: 1092785a0; end: 1092786b3;  */

/* WARNING: Possible PIC construction at 0x0001092785c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092785e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927861c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278638: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278538: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927853c) */
/* WARNING: Removing unreachable block (ram,0x00010927854c) */
/* WARNING: Removing unreachable block (ram,0x000109278674) */
/* WARNING: Removing unreachable block (ram,0x000109278698) */
/* WARNING: Removing unreachable block (ram,0x000109278658) */
/* WARNING: Removing unreachable block (ram,0x000109278668) */
/* WARNING: Removing unreachable block (ram,0x00010927863c) */
/* WARNING: Removing unreachable block (ram,0x00010927864c) */
/* WARNING: Removing unreachable block (ram,0x000109278604) */
/* WARNING: Removing unreachable block (ram,0x000109278614) */
/* WARNING: Removing unreachable block (ram,0x0001092785e8) */
/* WARNING: Removing unreachable block (ram,0x0001092785f8) */
/* WARNING: Removing unreachable block (ram,0x0001092785cc) */
/* WARNING: Removing unreachable block (ram,0x000109278620) */
/* WARNING: Removing unreachable block (ram,0x000109278684) */
/* WARNING: Removing unreachable block (ram,0x000109278630) */
/* WARNING: Removing unreachable block (ram,0x0001092785dc) */
/* WARNING: Removing unreachable block (ram,0x000109278568) */
/* WARNING: Removing unreachable block (ram,0x000109278588) */

void FUN_1092785a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = &stack0xffffffffffffffc0;
  uVar10 = 0x1092785cc;
  puVar6 = param_2;
  puVar5 = param_1;
  puVar8 = param_3;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
    *(undefined4 **)(puVar3 + -0x30) = param_4;
    *(undefined4 **)(puVar3 + -0x28) = puVar8;
    *(undefined4 **)(puVar3 + -0x20) = puVar5;
    *(undefined4 **)(puVar3 + -0x18) = puVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    puVar9 = puVar3 + -0x10;
    param_4 = param_2 + 2;
    puVar7 = param_3;
    func_0x000107c2abd4(param_4,param_1 + 2);
    puVar5 = param_3 + 2;
    func_0x000107c2abd4(puVar5,param_2 + 2);
    puVar6 = param_3;
    if (((uint)param_4 >> 7 & 1) == 0) {
      if (-1 < (char)puVar5) {
        return;
      }
      uVar10 = 0x10927853c;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
      puVar4 = param_2;
    }
    else {
      puVar4 = param_1;
      if ((char)puVar5 < '\0') {
        puVar9 = *(undefined1 **)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + -8);
        param_2 = *(undefined4 **)(puVar3 + -0x18);
        param_4 = *(undefined4 **)(puVar3 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar3;
        param_3 = *(undefined4 **)(puVar3 + -0x20);
        param_1 = *(undefined4 **)(puVar3 + -0x28);
      }
      else {
        uVar10 = 0x109278568;
        puVar6 = param_2;
      }
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined4 **)((long)register0x00000008 + -0x30) = param_4;
    *(undefined4 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined4 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined4 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *puVar4;
    puVar5 = *(undefined4 **)(puVar4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar4 + 0x17);
    bVar2 = *(byte *)((long)puVar4 + 0x1f);
    puVar8 = (undefined4 *)(ulong)bVar2;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    uVar10 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar4 + 10);
    *(undefined8 *)((long)register0x00000008 + -0x60) = uVar10;
    *puVar4 = *puVar6;
    uVar11 = *(undefined8 *)(puVar6 + 4);
    uVar10 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar11;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *(undefined1 *)((long)puVar6 + 0x1f) = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    uVar10 = *(undefined8 *)(puVar6 + 8);
    *(undefined8 *)(puVar4 + 10) = *(undefined8 *)(puVar6 + 10);
    *(undefined8 *)(puVar4 + 8) = uVar10;
    *puVar6 = uVar1;
    param_1 = puVar4;
    param_2 = puVar6;
    param_3 = puVar7;
    if (*(char *)((long)puVar6 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(puVar6 + 2);
      __ZdlPv();
      param_3 = puVar7;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined4 **)(puVar6 + 2) = puVar5;
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar6 + 0x1f) = bVar2;
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x60);
    *(undefined8 *)(puVar6 + 10) = *(undefined8 *)((long)register0x00000008 + -0x58);
    *(undefined8 *)(puVar6 + 8) = uVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar10 = 0x1092784ec;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 1092786b4; end: 109278927;  */

bool FUN_1092786b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_109278768:
      func_0x0001092784ec(param_1,param_1 + 0xc,param_1 + 0x18);
      if (param_1 + 0x24 == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x18;
      puVar8 = param_1 + 0x24;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_70 = *(undefined8 *)(puVar8 + 4);
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          uStack_68 = *(undefined8 *)(puVar8 + 6);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          uStack_58 = *(undefined8 *)(puVar8 + 10);
          uStack_60 = *(undefined8 *)(puVar8 + 8);
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x60);
            if (*(char *)((long)param_1 + lVar7 + 0xaf) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x98));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined8 *)((long)param_1 + lVar7 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x78);
            *(undefined1 *)((long)param_1 + lVar7 + 0x7f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x68) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0xb8) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x88);
            *(undefined8 *)((long)param_1 + lVar7 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x80);
            puVar5 = param_1;
            if (lVar7 == -0x60) goto LAB_109278840;
            puVar4 = &uStack_78;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x38);
            lVar2 = lVar7 + -0x30;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x60);
LAB_109278840:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x68));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x70) = uStack_70;
          *(undefined8 *)((long)param_1 + lVar7 + 0x68) = uStack_78;
          *(undefined8 *)((long)param_1 + lVar7 + 0x78) = uStack_68;
          *(undefined8 *)((long)param_1 + lVar7 + 0x88) = uStack_58;
          *(undefined8 *)((long)param_1 + lVar7 + 0x80) = uStack_60;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 0xc == param_2;
          }
        }
        puVar3 = puVar8 + 0xc;
        lVar9 = lVar9 + 0x30;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -0xc;
  }
  else {
    if (uVar6 == 3) {
      func_0x0001092784ec(param_1,param_1 + 0xc,param_2 + -0xc);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_1092785a0(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
        return true;
      }
      goto LAB_109278768;
    }
    func_0x0001092784ec(param_1,param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 0x1a);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_109278414(param_1 + 0x18,param_2 + -0xc);
    puVar5 = param_1 + 0x1a;
    func_0x000107c2abd4(puVar5,param_1 + 0xe);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_109278414(param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_1 + 0xe;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 0xc;
  }
  FUN_109278414(param_1,param_2);
  return true;
}



/* Entry: 109278928; end: 109279637;  */

/* WARNING: Possible PIC construction at 0x000109278a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278ad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109278ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109278ee0) */
/* WARNING: Removing unreachable block (ram,0x000109278ef0) */
/* WARNING: Removing unreachable block (ram,0x000109278f0c) */
/* WARNING: Removing unreachable block (ram,0x000109278f28) */
/* WARNING: Removing unreachable block (ram,0x000109278a2c) */
/* WARNING: Removing unreachable block (ram,0x000109278ad8) */
/* WARNING: Removing unreachable block (ram,0x000109278ae0) */
/* WARNING: Removing unreachable block (ram,0x000109278cdc) */
/* WARNING: Removing unreachable block (ram,0x000109278d48) */
/* WARNING: Removing unreachable block (ram,0x000109278d4c) */
/* WARNING: Removing unreachable block (ram,0x000109278d20) */
/* WARNING: Removing unreachable block (ram,0x000109278d24) */
/* WARNING: Removing unreachable block (ram,0x000109278d30) */
/* WARNING: Removing unreachable block (ram,0x000109278d44) */
/* WARNING: Removing unreachable block (ram,0x000109278d64) */
/* WARNING: Removing unreachable block (ram,0x000109278d70) */
/* WARNING: Removing unreachable block (ram,0x000109278d74) */
/* WARNING: Removing unreachable block (ram,0x000109278d8c) */
/* WARNING: Removing unreachable block (ram,0x000109278dc8) */
/* WARNING: Removing unreachable block (ram,0x000109278d90) */
/* WARNING: Removing unreachable block (ram,0x000109278d9c) */
/* WARNING: Removing unreachable block (ram,0x000109278db4) */
/* WARNING: Removing unreachable block (ram,0x000109278dd0) */
/* WARNING: Removing unreachable block (ram,0x000109278ddc) */
/* WARNING: Removing unreachable block (ram,0x000109278dec) */
/* WARNING: Removing unreachable block (ram,0x000109278df4) */
/* WARNING: Removing unreachable block (ram,0x000109278e1c) */
/* WARNING: Removing unreachable block (ram,0x000109278e30) */
/* WARNING: Removing unreachable block (ram,0x000109278e38) */
/* WARNING: Removing unreachable block (ram,0x000109278e68) */
/* WARNING: Removing unreachable block (ram,0x000109278af0) */
/* WARNING: Removing unreachable block (ram,0x000109278b28) */
/* WARNING: Removing unreachable block (ram,0x000109278b40) */
/* WARNING: Removing unreachable block (ram,0x000109278b6c) */
/* WARNING: Removing unreachable block (ram,0x000109278b70) */
/* WARNING: Removing unreachable block (ram,0x000109278b94) */
/* WARNING: Removing unreachable block (ram,0x000109278b78) */
/* WARNING: Removing unreachable block (ram,0x000109278b90) */
/* WARNING: Removing unreachable block (ram,0x000109278b50) */
/* WARNING: Removing unreachable block (ram,0x000109278b68) */
/* WARNING: Removing unreachable block (ram,0x000109278b98) */
/* WARNING: Removing unreachable block (ram,0x000109278bec) */
/* WARNING: Removing unreachable block (ram,0x000109278ba0) */
/* WARNING: Removing unreachable block (ram,0x000109278ba8) */
/* WARNING: Removing unreachable block (ram,0x000109278bb4) */
/* WARNING: Removing unreachable block (ram,0x000109278bcc) */
/* WARNING: Removing unreachable block (ram,0x000109278be0) */
/* WARNING: Removing unreachable block (ram,0x000109278be8) */
/* WARNING: Removing unreachable block (ram,0x000109278bf0) */
/* WARNING: Removing unreachable block (ram,0x000109278bfc) */
/* WARNING: Removing unreachable block (ram,0x000109278c0c) */
/* WARNING: Removing unreachable block (ram,0x000109278c14) */
/* WARNING: Removing unreachable block (ram,0x000109278c3c) */
/* WARNING: Removing unreachable block (ram,0x000109278c50) */
/* WARNING: Removing unreachable block (ram,0x000109278c58) */
/* WARNING: Removing unreachable block (ram,0x000109278c8c) */
/* WARNING: Removing unreachable block (ram,0x000109278c94) */
/* WARNING: Removing unreachable block (ram,0x000109278c9c) */
/* WARNING: Removing unreachable block (ram,0x000109278e74) */
/* WARNING: Removing unreachable block (ram,0x000109278e7c) */
/* WARNING: Removing unreachable block (ram,0x000109278cbc) */
/* WARNING: Removing unreachable block (ram,0x000109278cc0) */
/* WARNING: Removing unreachable block (ram,0x000109278cd4) */
/* WARNING: Removing unreachable block (ram,0x000109278a08) */
/* WARNING: Removing unreachable block (ram,0x000109278ecc) */
/* WARNING: Removing unreachable block (ram,0x00010927935c) */

void FUN_109278928(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  ulong uVar16;
  undefined8 *unaff_x21;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_e0;
  puVar23 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = param_2 + -6;
  puStack_d0 = param_2 + -0xc;
  puStack_d8 = param_2 + -0x12;
  puVar9 = param_2 + -5;
  uVar18 = (long)param_2 - (long)param_1;
  uVar21 = ((long)uVar18 >> 4) * -0x5555555555555555;
  puVar10 = param_1;
  puVar13 = param_2;
  puVar14 = param_3;
  puStack_e0 = puVar9;
  puStack_c0 = param_2;
  if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
    if (uVar21 < 2) goto LAB_1092795fc;
    if (uVar21 == 2) {
      puVar13 = param_1 + 1;
      func_0x000107c2abd4();
      puVar10 = puVar9;
      if (((uint)puVar9 >> 7 & 1) != 0) {
        puVar10 = param_1;
        puVar13 = puStack_c8;
        FUN_109279638();
      }
      goto LAB_1092795fc;
    }
  }
  else {
    if (uVar21 == 3) {
      puVar9 = param_1 + 6;
      uVar15 = 0x109278ecc;
      ppuVar6 = &puStack_e0;
      puVar14 = puStack_c8;
      goto SUB_10927972c;
    }
    if (uVar21 == 4) {
      puVar9 = param_1 + 6;
      uVar15 = 0x109278ee0;
      ppuVar6 = &puStack_e0;
      puVar14 = param_1 + 0xc;
      goto SUB_10927972c;
    }
    if (uVar21 == 5) {
      puVar13 = param_1 + 6;
      puVar14 = param_1 + 0xc;
      FUN_1092797e0();
      goto LAB_1092795fc;
    }
  }
  if ((long)uVar18 < 0x480) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
        unaff_x20 = (undefined8 *)auStack_98;
        unaff_x21 = param_1 + -5;
        puVar9 = param_1 + 6;
        puVar11 = param_1;
        do {
          param_1 = puVar9;
          puVar10 = puVar11 + 7;
          puVar13 = puVar11 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) != 0) {
            auStack_98[0] = *(undefined4 *)param_1;
            uStack_88 = puVar11[8];
            uStack_90 = puVar11[7];
            puVar11[7] = 0;
            puVar11[8] = 0;
            uStack_80 = puVar11[9];
            uStack_78 = puVar11[10];
            puVar11[9] = 0;
            uStack_70 = *(undefined4 *)(puVar11 + 0xb);
            puVar9 = unaff_x21;
            do {
              puVar11 = puVar9;
              *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 5);
              if (*(char *)((long)puVar11 + 0x77) < '\0') {
                __ZdlPv(puVar11[0xc]);
              }
              puVar11[0xd] = puVar11[7];
              puVar11[0xc] = puVar11[6];
              *(undefined1 *)((long)puVar11 + 0x47) = 0;
              *(undefined1 *)(puVar11 + 6) = 0;
              puVar11[0xe] = puVar11[8];
              puVar11[0xf] = puVar11[9];
              *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar11 + 10);
              puVar10 = &uStack_90;
              puVar13 = puVar11;
              func_0x000107c2abd4();
              puVar9 = puVar11 + -6;
            } while (((uint)puVar10 >> 7 & 1) != 0);
            *(undefined4 *)(puVar11 + 5) = auStack_98[0];
            if (*(char *)((long)puVar11 + 0x47) < '\0') {
              puVar10 = (undefined8 *)puVar11[6];
              __ZdlPv();
            }
            puVar11[8] = uStack_80;
            puVar11[7] = uStack_88;
            puVar11[6] = uStack_90;
            *(undefined4 *)(puVar11 + 10) = uStack_70;
            puVar11[9] = uStack_78;
          }
          unaff_x21 = unaff_x21 + 6;
          puVar9 = param_1 + 6;
          puVar11 = param_1;
          param_3 = param_1;
        } while (param_1 + 6 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
      unaff_x20 = (undefined8 *)0x0;
      unaff_x21 = (undefined8 *)auStack_98;
      puVar9 = param_1 + 6;
      puVar11 = param_1;
      do {
        param_3 = puVar9;
        puVar10 = puVar11 + 7;
        puVar13 = puVar11 + 1;
        func_0x000107c2abd4();
        if (((uint)puVar10 >> 7 & 1) != 0) {
          auStack_98[0] = *(undefined4 *)param_3;
          uStack_88 = puVar11[8];
          uStack_90 = puVar11[7];
          puVar11[7] = 0;
          puVar11[8] = 0;
          uStack_80 = puVar11[9];
          uStack_78 = puVar11[10];
          puVar11[9] = 0;
          uStack_70 = *(undefined4 *)(puVar11 + 0xb);
          puVar9 = unaff_x20;
          do {
            puVar11 = puVar9;
            puVar1 = (undefined4 *)((long)param_1 + (long)puVar11);
            puVar1[0xc] = *puVar1;
            if (*(char *)((long)puVar1 + 0x4f) < '\0') {
              puVar10 = *(undefined8 **)(puVar1 + 0xe);
              __ZdlPv();
            }
            *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 4);
            *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 2);
            *(undefined1 *)((long)puVar1 + 0x1f) = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 6);
            *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar1 + 8);
            puVar1[0x16] = puVar1[10];
            puVar9 = param_1;
            if (puVar11 == (undefined8 *)0x0) goto LAB_109279004;
            puVar13 = (undefined8 *)((long)param_1 + (long)puVar11 + -0x28);
            puVar10 = &uStack_90;
            func_0x000107c2abd4();
            puVar9 = puVar11 + -6;
          } while (((uint)puVar10 >> 7 & 1) != 0);
          puVar9 = (undefined8 *)((long)param_1 + (long)(puVar11 + -6) + 0x30);
LAB_109279004:
          *(undefined4 *)puVar9 = auStack_98[0];
          lVar3 = (long)param_1 + (long)puVar11;
          if (*(char *)((long)puVar9 + 0x1f) < '\0') {
            puVar10 = *(undefined8 **)(lVar3 + 8);
            __ZdlPv();
          }
          *(undefined8 *)(lVar3 + 0x18) = uStack_80;
          *(undefined8 *)(lVar3 + 0x10) = uStack_88;
          *(undefined8 *)(lVar3 + 8) = uStack_90;
          *(undefined4 *)(lVar3 + 0x28) = uStack_70;
          *(undefined8 *)(lVar3 + 0x20) = uStack_78;
        }
        unaff_x20 = unaff_x20 + 6;
        puVar9 = param_3 + 6;
        puVar11 = param_3;
      } while (param_3 + 6 != param_2);
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      if (0x1800 < uVar18) {
        uVar15 = 0x109278a08;
        ppuVar6 = &puStack_e0;
        puVar9 = param_1 + (uVar21 >> 1) * 6;
        puVar14 = puStack_c8;
        goto SUB_10927972c;
      }
      uVar15 = 0x109278ad8;
      ppuVar6 = &puStack_e0;
      puVar10 = param_1 + (uVar21 >> 1) * 6;
      puVar9 = param_1;
      puVar14 = puStack_c8;
      goto SUB_10927972c;
    }
    if (param_1 != param_2) {
      uVar17 = uVar21 - 2 >> 1;
      puStack_c8 = (undefined8 *)uVar17;
      do {
        puVar9 = puStack_c8;
        if ((long)puStack_c8 <= (long)uVar17) {
          uVar2 = (long)puStack_c8 << 1 | 1;
          puVar11 = param_1 + uVar2 * 6;
          uVar19 = (long)puStack_c8 * 2 + 2;
          uVar16 = uVar2;
          if ((long)uVar19 < (long)uVar21) {
            puVar13 = puVar11 + 1;
            func_0x000107c2abd4(puVar13,puVar11 + 7);
            bVar7 = -1 < (char)puVar13;
            lVar3 = 0x30;
            if (bVar7) {
              lVar3 = 0;
            }
            puVar11 = (undefined8 *)((long)puVar11 + lVar3);
            uVar16 = uVar19;
            if (bVar7) {
              uVar16 = uVar2;
            }
          }
          puVar9 = puStack_c8;
          puVar12 = param_1 + (long)puStack_c8 * 6;
          puVar10 = puVar11 + 1;
          puVar13 = puVar12 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) == 0) {
            auStack_98[0] = *(undefined4 *)puVar12;
            uStack_88 = puVar12[2];
            uStack_90 = puVar12[1];
            uStack_80 = puVar12[3];
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[1] = 0;
            uStack_78 = puVar12[4];
            uStack_70 = *(undefined4 *)(puVar12 + 5);
            do {
              puVar9 = puVar11;
              *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
              if (*(char *)((long)puVar12 + 0x1f) < '\0') {
                puVar10 = (undefined8 *)puVar12[1];
                __ZdlPv();
              }
              uVar25 = puVar9[2];
              uVar15 = puVar9[1];
              puVar12[3] = puVar9[3];
              puVar12[2] = uVar25;
              puVar12[1] = uVar15;
              uVar15 = puVar9[4];
              *(undefined1 *)((long)puVar9 + 0x1f) = 0;
              *(undefined1 *)(puVar9 + 1) = 0;
              *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar9 + 5);
              puVar12[4] = uVar15;
              if ((long)uVar17 < (long)uVar16) break;
              uVar2 = uVar16 << 1 | 1;
              puVar11 = param_1 + uVar2 * 6;
              uVar19 = uVar16 * 2 + 2;
              uVar16 = uVar2;
              if ((long)uVar19 < (long)uVar21) {
                puVar13 = puVar11 + 1;
                func_0x000107c2abd4(puVar13,puVar11 + 7);
                bVar7 = -1 < (char)puVar13;
                lVar3 = 0x30;
                if (bVar7) {
                  lVar3 = 0;
                }
                puVar11 = (undefined8 *)((long)puVar11 + lVar3);
                uVar16 = uVar19;
                if (bVar7) {
                  uVar16 = uVar2;
                }
              }
              puVar10 = puVar11 + 1;
              puVar13 = &uStack_90;
              func_0x000107c2abd4();
              puVar12 = puVar9;
            } while (((uint)puVar10 >> 7 & 1) == 0);
            *(undefined4 *)puVar9 = auStack_98[0];
            if (*(char *)((long)puVar9 + 0x1f) < '\0') {
              puVar10 = (undefined8 *)puVar9[1];
              __ZdlPv();
            }
            puVar9[3] = uStack_80;
            puVar9[2] = uStack_88;
            puVar9[1] = uStack_90;
            *(undefined4 *)(puVar9 + 5) = uStack_70;
            puVar9[4] = uStack_78;
            puVar9 = puStack_c8;
          }
        }
        puStack_c8 = (undefined8 *)((long)puVar9 - 1);
      } while (puVar9 != (undefined8 *)0x0);
      puVar9 = puStack_c0;
      puVar11 = (undefined8 *)((uVar18 >> 4) * -0x5555555555555555);
      do {
        puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,*(undefined4 *)param_1);
        puStack_c8 = (undefined8 *)param_1[1];
        uStack_a0 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
        uStack_a8 = (undefined7)param_1[2];
        uStack_a1 = (undefined1)((ulong)param_1[2] >> 0x38);
        puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,(uint)*(byte *)((long)param_1 + 0x1f));
        param_1[1] = 0;
        param_1[2] = 0;
        uStack_b8 = param_1[4];
        uStack_b0 = *(undefined4 *)(param_1 + 5);
        param_1[3] = 0;
        puVar12 = param_1;
        uVar18 = 0;
        do {
          uVar17 = uVar18 << 1 | 1;
          uVar21 = uVar18 * 2 + 2;
          uVar19 = uVar17;
          puVar22 = puVar12 + uVar18 * 6 + 6;
          if ((long)uVar21 < (long)puVar11) {
            puVar10 = puVar12 + uVar18 * 6 + 7;
            puVar13 = puVar12 + uVar18 * 6 + 0xd;
            func_0x000107c2abd4();
            uVar19 = uVar21;
            puVar22 = puVar12 + uVar18 * 6 + 0xc;
            if (-1 < (char)puVar10) {
              uVar19 = uVar17;
              puVar22 = puVar12 + uVar18 * 6 + 6;
            }
          }
          *(undefined4 *)puVar12 = *(undefined4 *)puVar22;
          if (*(char *)((long)puVar12 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar12[1];
            __ZdlPv();
          }
          uVar25 = puVar22[2];
          uVar15 = puVar22[1];
          puVar12[3] = puVar22[3];
          puVar12[2] = uVar25;
          puVar12[1] = uVar15;
          puVar20 = puVar22 + 4;
          uVar15 = *puVar20;
          *(undefined1 *)((long)puVar22 + 0x1f) = 0;
          *(undefined1 *)(puVar22 + 1) = 0;
          *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar22 + 5);
          puVar12[4] = uVar15;
          puVar12 = puVar22;
          uVar18 = uVar19;
        } while ((long)uVar19 <= (long)((long)puVar11 - 2U >> 1));
        unaff_x20 = puVar9 + -6;
        if (puVar22 == unaff_x20) {
          *(undefined4 *)puVar22 = puStack_d0._0_4_;
          if (*(char *)((long)puVar22 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar22[1];
            __ZdlPv();
          }
          puVar22[1] = puStack_c8;
          puVar22[2] = CONCAT17(uStack_a1,uStack_a8);
          *(ulong *)((long)puVar22 + 0x17) = CONCAT71(uStack_a0,uStack_a1);
          *(char *)((long)puVar22 + 0x1f) = (char)puStack_c0;
          *puVar20 = uStack_b8;
          *(undefined4 *)(puVar22 + 5) = uStack_b0;
          unaff_x21 = puVar22;
        }
        else {
          *(undefined4 *)puVar22 = *(undefined4 *)unaff_x20;
          if (*(char *)((long)puVar22 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar22[1];
            __ZdlPv();
          }
          uVar25 = puVar9[-4];
          uVar15 = puVar9[-5];
          puVar22[3] = puVar9[-3];
          puVar22[2] = uVar25;
          puVar22[1] = uVar15;
          unaff_x21 = puVar9 + -2;
          uVar15 = *unaff_x21;
          *(undefined1 *)((long)puVar9 + -0x11) = 0;
          *(undefined1 *)(puVar9 + -5) = 0;
          *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(puVar9 + -1);
          *puVar20 = uVar15;
          *(undefined4 *)(puVar9 + -6) = puStack_d0._0_4_;
          puVar9[-5] = puStack_c8;
          *(ulong *)((long)puVar9 + -0x19) = CONCAT71(uStack_a0,uStack_a1);
          puVar9[-4] = CONCAT17(uStack_a1,uStack_a8);
          *(char *)((long)puVar9 + -0x11) = (char)puStack_c0;
          *(undefined4 *)(puVar9 + -1) = uStack_b0;
          *unaff_x21 = uStack_b8;
          uVar18 = (long)puVar22 + (0x30 - (long)param_1);
          if (0x30 < (long)uVar18) {
            uVar18 = (uVar18 >> 4) * -0x5555555555555555 - 2 >> 1;
            puVar10 = param_1 + uVar18 * 6 + 1;
            puVar13 = puVar22 + 1;
            func_0x000107c2abd4();
            if (((uint)puVar10 >> 7 & 1) != 0) {
              auStack_98[0] = *(undefined4 *)puVar22;
              uStack_80 = puVar22[3];
              uStack_88 = puVar22[2];
              uStack_90 = puVar22[1];
              puVar22[2] = 0;
              puVar22[3] = 0;
              puVar22[1] = 0;
              uStack_78 = *puVar20;
              uStack_70 = *(undefined4 *)(puVar22 + 5);
              puVar9 = param_1 + uVar18 * 6;
              do {
                unaff_x21 = puVar9;
                *(undefined4 *)puVar22 = *(undefined4 *)unaff_x21;
                if (*(char *)((long)puVar22 + 0x1f) < '\0') {
                  puVar10 = (undefined8 *)puVar22[1];
                  __ZdlPv();
                }
                uVar25 = unaff_x21[2];
                uVar15 = unaff_x21[1];
                puVar22[3] = unaff_x21[3];
                puVar22[2] = uVar25;
                puVar22[1] = uVar15;
                uVar15 = unaff_x21[4];
                *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
                *(undefined1 *)(unaff_x21 + 1) = 0;
                *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(unaff_x21 + 5);
                puVar22[4] = uVar15;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                puVar10 = param_1 + uVar18 * 6 + 1;
                puVar13 = &uStack_90;
                func_0x000107c2abd4();
                puVar9 = param_1 + uVar18 * 6;
                puVar22 = unaff_x21;
              } while (((uint)puVar10 >> 7 & 1) != 0);
              *(undefined4 *)unaff_x21 = auStack_98[0];
              if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
                puVar10 = (undefined8 *)unaff_x21[1];
                __ZdlPv();
              }
              unaff_x21[3] = uStack_80;
              unaff_x21[2] = uStack_88;
              unaff_x21[1] = uStack_90;
              *(undefined4 *)(unaff_x21 + 5) = uStack_70;
              unaff_x21[4] = uStack_78;
            }
          }
        }
        param_3 = (undefined8 *)((long)puVar11 + -1);
        bVar7 = 2 < (long)puVar11;
        puVar9 = unaff_x20;
        puVar11 = param_3;
      } while (bVar7);
    }
  }
LAB_1092795fc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar24 = FUN_109279638;
  ___stack_chk_fail();
  do {
    *(undefined8 **)((long)ppuVar6 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar6 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar6 + -0x10) = puVar23;
    *(code **)((long)ppuVar6 + -8) = pcVar24;
    puVar23 = (undefined1 *)((long)ppuVar6 + -0x10);
    *(undefined8 *)((long)ppuVar6 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(undefined4 *)puVar10;
    unaff_x20 = (undefined8 *)puVar10[1];
    *(undefined8 *)((long)ppuVar6 + -0x48) = puVar10[2];
    *(undefined8 *)((long)ppuVar6 + -0x41) = *(undefined8 *)((long)puVar10 + 0x17);
    bVar5 = *(byte *)((long)puVar10 + 0x1f);
    unaff_x21 = (undefined8 *)(ulong)bVar5;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[1] = 0;
    *(undefined8 *)((long)ppuVar6 + -0x58) = puVar10[4];
    *(undefined4 *)((long)ppuVar6 + -0x50) = *(undefined4 *)(puVar10 + 5);
    *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
    uVar25 = puVar13[2];
    uVar15 = puVar13[1];
    puVar10[3] = puVar13[3];
    puVar10[2] = uVar25;
    puVar10[1] = uVar15;
    *(undefined1 *)((long)puVar13 + 0x1f) = 0;
    param_3 = puVar13 + 4;
    uVar15 = *param_3;
    *(undefined1 *)(puVar13 + 1) = 0;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar13 + 5);
    puVar10[4] = uVar15;
    *(undefined4 *)puVar13 = uVar4;
    puVar9 = puVar13;
    if (*(char *)((long)puVar13 + 0x1f) < '\0') {
      puVar10 = (undefined8 *)puVar13[1];
      __ZdlPv();
    }
    uVar15 = *(undefined8 *)((long)ppuVar6 + -0x48);
    puVar13[1] = unaff_x20;
    puVar13[2] = uVar15;
    *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)ppuVar6 + -0x41);
    *(byte *)((long)puVar13 + 0x1f) = bVar5;
    *param_3 = *(undefined8 *)((long)ppuVar6 + -0x58);
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)((long)ppuVar6 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar6 + -0x38)) {
      return;
    }
    uVar15 = 0x10927972c;
    ___stack_chk_fail();
    ppuVar6 = (undefined8 **)((long)ppuVar6 + -0x60);
    param_1 = puVar13;
SUB_10927972c:
    puVar13 = puVar14;
    *(undefined8 **)((long)ppuVar6 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar6 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar6 + -0x10) = puVar23;
    *(undefined8 *)((long)ppuVar6 + -8) = uVar15;
    puVar11 = puVar9 + 1;
    puVar14 = puVar13;
    func_0x000107c2abd4(puVar11,puVar10 + 1);
    puVar12 = puVar13 + 1;
    func_0x000107c2abd4(puVar12,puVar9 + 1);
    if (((uint)puVar11 >> 7 & 1) == 0) {
      if (-1 < (char)puVar12) {
        return;
      }
      FUN_109279638(puVar9,puVar13);
      puVar13 = puVar9 + 1;
      func_0x000107c2abd4(puVar13,puVar10 + 1);
      uVar8 = (uint)puVar13;
      puVar13 = puVar9;
joined_r0x0001092797b4:
      if ((uVar8 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar12) {
      FUN_109279638(puVar10,puVar9);
      puVar10 = puVar13 + 1;
      func_0x000107c2abd4(puVar10,puVar9 + 1);
      uVar8 = (uint)puVar10;
      puVar10 = puVar9;
      goto joined_r0x0001092797b4;
    }
    puVar23 = *(undefined1 **)((long)ppuVar6 + -0x10);
    pcVar24 = *(code **)((long)ppuVar6 + -8);
    unaff_x20 = *(undefined8 **)((long)ppuVar6 + -0x20);
    param_1 = *(undefined8 **)((long)ppuVar6 + -0x18);
    param_3 = *(undefined8 **)((long)ppuVar6 + -0x30);
    unaff_x21 = *(undefined8 **)((long)ppuVar6 + -0x28);
  } while( true );
}



/* Entry: 109279638; end: 1092797df;  */

void FUN_109279638(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_1[10];
    *param_1 = *param_2;
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    puVar10 = (undefined8 *)(param_2 + 8);
    uVar9 = *puVar10;
    *(undefined1 *)(param_2 + 2) = 0;
    param_1[10] = param_2[10];
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = uVar2;
    puVar8 = param_2;
    puVar7 = param_3;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_2[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar10;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10927972c;
    puVar5 = puVar8 + 2;
    param_3 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_109279638(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x0001092797b4:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_109279638(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x0001092797b4;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar7;
  } while( true );
}



/* Entry: 1092797e0; end: 1092798f3;  */

/* WARNING: Possible PIC construction at 0x000109279808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927985c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092798b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092797a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927977c) */
/* WARNING: Removing unreachable block (ram,0x00010927978c) */
/* WARNING: Removing unreachable block (ram,0x0001092798b4) */
/* WARNING: Removing unreachable block (ram,0x0001092798d8) */
/* WARNING: Removing unreachable block (ram,0x000109279898) */
/* WARNING: Removing unreachable block (ram,0x0001092798a8) */
/* WARNING: Removing unreachable block (ram,0x00010927987c) */
/* WARNING: Removing unreachable block (ram,0x00010927988c) */
/* WARNING: Removing unreachable block (ram,0x000109279844) */
/* WARNING: Removing unreachable block (ram,0x000109279854) */
/* WARNING: Removing unreachable block (ram,0x000109279828) */
/* WARNING: Removing unreachable block (ram,0x000109279838) */
/* WARNING: Removing unreachable block (ram,0x00010927980c) */
/* WARNING: Removing unreachable block (ram,0x000109279860) */
/* WARNING: Removing unreachable block (ram,0x0001092798c4) */
/* WARNING: Removing unreachable block (ram,0x000109279870) */
/* WARNING: Removing unreachable block (ram,0x00010927981c) */
/* WARNING: Removing unreachable block (ram,0x0001092797a8) */
/* WARNING: Removing unreachable block (ram,0x0001092797c8) */

void FUN_1092797e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = &stack0xffffffffffffffc0;
  uVar10 = 0x10927980c;
  puVar6 = param_2;
  puVar5 = param_1;
  puVar8 = param_3;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
    *(undefined8 **)(puVar3 + -0x30) = param_4;
    *(undefined4 **)(puVar3 + -0x28) = puVar8;
    *(undefined4 **)(puVar3 + -0x20) = puVar5;
    *(undefined4 **)(puVar3 + -0x18) = puVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    puVar9 = puVar3 + -0x10;
    puVar5 = param_2 + 2;
    puVar7 = param_3;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    puVar6 = param_3;
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar8) {
        return;
      }
      uVar10 = 0x10927977c;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
      puVar4 = param_2;
    }
    else {
      puVar4 = param_1;
      if ((char)puVar8 < '\0') {
        puVar9 = *(undefined1 **)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + -8);
        param_2 = *(undefined4 **)(puVar3 + -0x18);
        puVar5 = *(undefined4 **)(puVar3 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar3;
        param_3 = *(undefined4 **)(puVar3 + -0x20);
        param_1 = *(undefined4 **)(puVar3 + -0x28);
      }
      else {
        uVar10 = 0x1092797a8;
        puVar6 = param_2;
      }
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined4 **)((long)register0x00000008 + -0x30) = puVar5;
    *(undefined4 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined4 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined4 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *puVar4;
    puVar5 = *(undefined4 **)(puVar4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar4 + 0x17);
    bVar2 = *(byte *)((long)puVar4 + 0x1f);
    puVar8 = (undefined4 *)(ulong)bVar2;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar4 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x50) = puVar4[10];
    *puVar4 = *puVar6;
    uVar11 = *(undefined8 *)(puVar6 + 4);
    uVar10 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar11;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *(undefined1 *)((long)puVar6 + 0x1f) = 0;
    param_4 = (undefined8 *)(puVar6 + 8);
    uVar10 = *param_4;
    *(undefined1 *)(puVar6 + 2) = 0;
    puVar4[10] = puVar6[10];
    *(undefined8 *)(puVar4 + 8) = uVar10;
    *puVar6 = uVar1;
    param_1 = puVar4;
    param_2 = puVar6;
    param_3 = puVar7;
    if (*(char *)((long)puVar6 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(puVar6 + 2);
      __ZdlPv();
      param_3 = puVar7;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined4 **)(puVar6 + 2) = puVar5;
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar6 + 0x1f) = bVar2;
    *param_4 = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar6[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar10 = 0x10927972c;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 1092798f4; end: 109279b67;  */

bool FUN_1092798f4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_1092799a8:
      func_0x00010927972c(param_1,param_1 + 0xc,param_1 + 0x18);
      if (param_1 + 0x24 == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x18;
      puVar8 = param_1 + 0x24;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_70 = *(undefined8 *)(puVar8 + 4);
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          uStack_68 = *(undefined8 *)(puVar8 + 6);
          uStack_60 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 6) = 0;
          uStack_58 = puVar8[10];
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x60);
            if (*(char *)((long)param_1 + lVar7 + 0xaf) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x98));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined1 *)((long)param_1 + lVar7 + 0x7f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x68) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x78);
            *(undefined8 *)((long)param_1 + lVar7 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x80);
            *(undefined4 *)((long)param_1 + lVar7 + 0xb8) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x88);
            puVar5 = param_1;
            if (lVar7 == -0x60) goto LAB_109279a80;
            puVar4 = &uStack_78;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x38);
            lVar2 = lVar7 + -0x30;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x60);
LAB_109279a80:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x68));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x70) = uStack_70;
          *(undefined8 *)((long)param_1 + lVar7 + 0x68) = uStack_78;
          *(undefined8 *)((long)param_1 + lVar7 + 0x78) = uStack_68;
          *(undefined8 *)((long)param_1 + lVar7 + 0x80) = uStack_60;
          *(undefined4 *)((long)param_1 + lVar7 + 0x88) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 0xc == param_2;
          }
        }
        puVar3 = puVar8 + 0xc;
        lVar9 = lVar9 + 0x30;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -0xc;
  }
  else {
    if (uVar6 == 3) {
      func_0x00010927972c(param_1,param_1 + 0xc,param_2 + -0xc);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_1092797e0(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
        return true;
      }
      goto LAB_1092799a8;
    }
    func_0x00010927972c(param_1,param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 0x1a);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_109279638(param_1 + 0x18,param_2 + -0xc);
    puVar5 = param_1 + 0x1a;
    func_0x000107c2abd4(puVar5,param_1 + 0xe);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_109279638(param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_1 + 0xe;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 0xc;
  }
  FUN_109279638(param_1,param_2);
  return true;
}



/* Entry: 109279b68; end: 109279b7b;  */

undefined1  [16] FUN_109279b68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iStack_54;
  
  puVar3 = &UNK_10f5629b6;
  func_0x000104c4f6cc();
  if (puVar3 < (undefined *)0xccccccccccccccd) {
    lVar4 = (long)puVar3 * 0x14;
    __Znwm(lVar4);
    auVar5._8_8_ = puVar3;
    auVar5._0_8_ = lVar4;
    return auVar5;
  }
  func_0x000104c4f740();
  iVar1 = **(int **)(puVar3 + 8);
  _glIsProgram();
  if (iVar1 == 1) {
    iStack_54 = 0;
    param_2 = 0x8b80;
    _glGetProgramiv(**(undefined4 **)(puVar3 + 8),0x8b80,&iStack_54);
    if (iStack_54 != 0) goto LAB_109279c24;
    uVar2 = **(undefined4 **)(puVar3 + 8);
  }
  else {
    if (**(int **)(puVar3 + 8) != 0) goto LAB_109279c24;
    uVar2 = 0;
  }
  _glUseProgram(uVar2);
LAB_109279c24:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = puVar3;
  return auVar6;
}



/* Entry: 109279b7c; end: 109279c37;  */

undefined1  [16] FUN_109279b7c(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iStack_44;
  
  if (param_1 < 0xccccccccccccccd) {
    lVar3 = param_1 * 0x14;
    __Znwm(lVar3);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar3;
    return auVar4;
  }
  func_0x000104c4f740();
  iVar1 = **(int **)(param_1 + 8);
  _glIsProgram();
  if (iVar1 == 1) {
    iStack_44 = 0;
    param_2 = 0x8b80;
    _glGetProgramiv(**(undefined4 **)(param_1 + 8),0x8b80,&iStack_44);
    if (iStack_44 != 0) goto LAB_109279c24;
    uVar2 = **(undefined4 **)(param_1 + 8);
  }
  else {
    if (**(int **)(param_1 + 8) != 0) goto LAB_109279c24;
    uVar2 = 0;
  }
  _glUseProgram(uVar2);
LAB_109279c24:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 109279c38; end: 109279e03;  */

/* WARNING: Removing unreachable block (ram,0x000109279e44) */

long * FUN_109279c38(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  long *plStack_58;
  
  puVar9 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  lVar12 = (long)puVar10 - (long)puVar9;
  uVar4 = (lVar12 >> 4) * -0x5555555555555555 + 1;
  if (0x555555555555555 < uVar4) {
    FUN_109279e04();
LAB_109279dec:
    func_0x000104c4f740();
    FUN_109279e18(&puStack_78);
    __Unwind_Resume(param_1);
    plVar3 = (long *)&UNK_10f5629b6;
    func_0x000104c4f6cc();
    lVar12 = plVar3[2];
    while (lVar12 != plVar3[1]) {
      lVar12 = lVar12 + -0x30;
      plVar3[2] = lVar12;
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  lVar7 = param_1[2] - (long)puVar9 >> 4;
  uVar8 = lVar7 * 0x5555555555555556;
  if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
    uVar8 = uVar4;
  }
  if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar7 * -0x5555555555555555)) {
    uVar8 = 0x555555555555555;
  }
  plStack_58 = param_1;
  if (uVar8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (0x555555555555555 < uVar8) goto LAB_109279dec;
    puVar2 = (undefined4 *)(uVar8 * 0x30);
    __Znwm();
  }
  puVar1 = (undefined4 *)((long)puVar2 + lVar12);
  puVar11 = puVar2 + uVar8 * 0xc;
  *puVar1 = *param_2;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar11;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    puVar9 = (undefined4 *)*param_1;
    puVar10 = (undefined4 *)param_1[1];
    lVar12 = (long)puVar10 - (long)puVar9;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 2) = uVar6;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
  }
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  puVar1[10] = param_2[10];
  puVar2 = puVar9;
  puVar5 = (undefined4 *)((long)puVar1 - lVar12);
  if (puVar9 != puVar10) {
    do {
      *puVar5 = *puVar2;
      uVar13 = *(undefined8 *)(puVar2 + 4);
      uVar6 = *(undefined8 *)(puVar2 + 2);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar5 + 4) = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar6;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      uVar6 = *(undefined8 *)(puVar2 + 8);
      puVar5[10] = puVar2[10];
      *(undefined8 *)(puVar5 + 8) = uVar6;
      puVar2 = puVar2 + 0xc;
      puVar5 = puVar5 + 0xc;
    } while (puVar2 != puVar10);
    do {
      if (*(char *)((long)puVar9 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(puVar9 + 2));
      }
      puVar9 = puVar9 + 0xc;
    } while (puVar9 != puVar10);
    puVar9 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar1 - lVar12;
  param_1[1] = (long)(puVar1 + 0xc);
  puStack_60 = (undefined4 *)param_1[2];
  param_1[2] = (long)puVar11;
  puStack_78 = puVar9;
  puStack_70 = puVar9;
  puStack_68 = puVar9;
  FUN_109279e18(&puStack_78);
  return (long *)(puVar1 + 0xc);
}



/* Entry: 109279e04; end: 109279e17;  */

/* WARNING: Removing unreachable block (ram,0x000109279e44) */

long * FUN_109279e04(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x30;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 109279e18; end: 109279e77;  */

/* WARNING: Removing unreachable block (ram,0x000109279e44) */

long * FUN_109279e18(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109279e78; end: 10927ab0b;  */

/* WARNING: Possible PIC construction at 0x000109279f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109279fa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927a3b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927a39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927a3b4) */
/* WARNING: Removing unreachable block (ram,0x00010927a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010927a3e0) */
/* WARNING: Removing unreachable block (ram,0x00010927a3fc) */
/* WARNING: Removing unreachable block (ram,0x000109279f7c) */
/* WARNING: Removing unreachable block (ram,0x000109279fac) */
/* WARNING: Removing unreachable block (ram,0x000109279fb4) */
/* WARNING: Removing unreachable block (ram,0x00010927a1b0) */
/* WARNING: Removing unreachable block (ram,0x00010927a21c) */
/* WARNING: Removing unreachable block (ram,0x00010927a220) */
/* WARNING: Removing unreachable block (ram,0x00010927a1f4) */
/* WARNING: Removing unreachable block (ram,0x00010927a1f8) */
/* WARNING: Removing unreachable block (ram,0x00010927a204) */
/* WARNING: Removing unreachable block (ram,0x00010927a218) */
/* WARNING: Removing unreachable block (ram,0x00010927a238) */
/* WARNING: Removing unreachable block (ram,0x00010927a244) */
/* WARNING: Removing unreachable block (ram,0x00010927a248) */
/* WARNING: Removing unreachable block (ram,0x00010927a260) */
/* WARNING: Removing unreachable block (ram,0x00010927a29c) */
/* WARNING: Removing unreachable block (ram,0x00010927a264) */
/* WARNING: Removing unreachable block (ram,0x00010927a270) */
/* WARNING: Removing unreachable block (ram,0x00010927a288) */
/* WARNING: Removing unreachable block (ram,0x00010927a2a4) */
/* WARNING: Removing unreachable block (ram,0x00010927a2b0) */
/* WARNING: Removing unreachable block (ram,0x00010927a2c0) */
/* WARNING: Removing unreachable block (ram,0x00010927a2c8) */
/* WARNING: Removing unreachable block (ram,0x00010927a2f0) */
/* WARNING: Removing unreachable block (ram,0x00010927a304) */
/* WARNING: Removing unreachable block (ram,0x00010927a30c) */
/* WARNING: Removing unreachable block (ram,0x00010927a33c) */
/* WARNING: Removing unreachable block (ram,0x000109279fc4) */
/* WARNING: Removing unreachable block (ram,0x000109279ffc) */
/* WARNING: Removing unreachable block (ram,0x00010927a014) */
/* WARNING: Removing unreachable block (ram,0x00010927a040) */
/* WARNING: Removing unreachable block (ram,0x00010927a044) */
/* WARNING: Removing unreachable block (ram,0x00010927a068) */
/* WARNING: Removing unreachable block (ram,0x00010927a04c) */
/* WARNING: Removing unreachable block (ram,0x00010927a064) */
/* WARNING: Removing unreachable block (ram,0x00010927a024) */
/* WARNING: Removing unreachable block (ram,0x00010927a03c) */
/* WARNING: Removing unreachable block (ram,0x00010927a06c) */
/* WARNING: Removing unreachable block (ram,0x00010927a0c0) */
/* WARNING: Removing unreachable block (ram,0x00010927a074) */
/* WARNING: Removing unreachable block (ram,0x00010927a07c) */
/* WARNING: Removing unreachable block (ram,0x00010927a088) */
/* WARNING: Removing unreachable block (ram,0x00010927a0a0) */
/* WARNING: Removing unreachable block (ram,0x00010927a0b4) */
/* WARNING: Removing unreachable block (ram,0x00010927a0bc) */
/* WARNING: Removing unreachable block (ram,0x00010927a0c4) */
/* WARNING: Removing unreachable block (ram,0x00010927a0d0) */
/* WARNING: Removing unreachable block (ram,0x00010927a0e0) */
/* WARNING: Removing unreachable block (ram,0x00010927a0e8) */
/* WARNING: Removing unreachable block (ram,0x00010927a110) */
/* WARNING: Removing unreachable block (ram,0x00010927a124) */
/* WARNING: Removing unreachable block (ram,0x00010927a12c) */
/* WARNING: Removing unreachable block (ram,0x00010927a160) */
/* WARNING: Removing unreachable block (ram,0x00010927a168) */
/* WARNING: Removing unreachable block (ram,0x00010927a170) */
/* WARNING: Removing unreachable block (ram,0x00010927a348) */
/* WARNING: Removing unreachable block (ram,0x00010927a350) */
/* WARNING: Removing unreachable block (ram,0x00010927a190) */
/* WARNING: Removing unreachable block (ram,0x00010927a194) */
/* WARNING: Removing unreachable block (ram,0x00010927a1a8) */
/* WARNING: Removing unreachable block (ram,0x000109279f58) */
/* WARNING: Removing unreachable block (ram,0x00010927a3a0) */
/* WARNING: Removing unreachable block (ram,0x00010927a830) */

void FUN_109279e78(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 **ppuVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  ulong uVar16;
  undefined8 *unaff_x21;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  code *pcVar24;
  undefined8 uVar25;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  ppuVar6 = &puStack_e0;
  puVar23 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_c8 = param_2 + -6;
  puStack_d0 = param_2 + -0xc;
  puStack_d8 = param_2 + -0x12;
  puVar9 = param_2 + -5;
  uVar18 = (long)param_2 - (long)param_1;
  uVar21 = ((long)uVar18 >> 4) * -0x5555555555555555;
  puVar10 = param_1;
  puVar13 = param_2;
  puVar14 = param_3;
  puStack_e0 = puVar9;
  puStack_c0 = param_2;
  if (uVar21 - 2 == 0 || (long)uVar21 < 2) {
    if (uVar21 < 2) goto LAB_10927aad0;
    if (uVar21 == 2) {
      puVar13 = param_1 + 1;
      func_0x000107c2abd4();
      puVar10 = puVar9;
      if (((uint)puVar9 >> 7 & 1) != 0) {
        puVar10 = param_1;
        puVar13 = puStack_c8;
        FUN_10927ab0c();
      }
      goto LAB_10927aad0;
    }
  }
  else {
    if (uVar21 == 3) {
      puVar9 = param_1 + 6;
      uVar15 = 0x10927a3a0;
      ppuVar6 = &puStack_e0;
      puVar14 = puStack_c8;
      goto SUB_10927ac00;
    }
    if (uVar21 == 4) {
      puVar9 = param_1 + 6;
      uVar15 = 0x10927a3b4;
      ppuVar6 = &puStack_e0;
      puVar14 = param_1 + 0xc;
      goto SUB_10927ac00;
    }
    if (uVar21 == 5) {
      puVar13 = param_1 + 6;
      puVar14 = param_1 + 0xc;
      FUN_10927acb4();
      goto LAB_10927aad0;
    }
  }
  if ((long)uVar18 < 0x480) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
        unaff_x20 = (undefined8 *)auStack_a8;
        unaff_x21 = param_1 + -5;
        puVar9 = param_1 + 6;
        puVar11 = param_1;
        do {
          param_1 = puVar9;
          puVar10 = puVar11 + 7;
          puVar13 = puVar11 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) != 0) {
            auStack_a8[0] = *(undefined4 *)param_1;
            uStack_98 = puVar11[8];
            uStack_a0 = puVar11[7];
            puVar11[7] = 0;
            puVar11[8] = 0;
            uStack_90 = puVar11[9];
            uStack_88 = puVar11[10];
            puVar11[9] = 0;
            uStack_80 = *(undefined4 *)(puVar11 + 0xb);
            puVar9 = unaff_x21;
            do {
              puVar11 = puVar9;
              *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(puVar11 + 5);
              if (*(char *)((long)puVar11 + 0x77) < '\0') {
                __ZdlPv(puVar11[0xc]);
              }
              puVar11[0xd] = puVar11[7];
              puVar11[0xc] = puVar11[6];
              *(undefined1 *)((long)puVar11 + 0x47) = 0;
              *(undefined1 *)(puVar11 + 6) = 0;
              puVar11[0xe] = puVar11[8];
              puVar11[0xf] = puVar11[9];
              *(undefined4 *)(puVar11 + 0x10) = *(undefined4 *)(puVar11 + 10);
              puVar10 = &uStack_a0;
              puVar13 = puVar11;
              func_0x000107c2abd4();
              puVar9 = puVar11 + -6;
            } while (((uint)puVar10 >> 7 & 1) != 0);
            *(undefined4 *)(puVar11 + 5) = auStack_a8[0];
            if (*(char *)((long)puVar11 + 0x47) < '\0') {
              puVar10 = (undefined8 *)puVar11[6];
              __ZdlPv();
            }
            puVar11[8] = uStack_90;
            puVar11[7] = uStack_98;
            puVar11[6] = uStack_a0;
            *(undefined4 *)(puVar11 + 10) = uStack_80;
            puVar11[9] = uStack_88;
          }
          unaff_x21 = unaff_x21 + 6;
          puVar9 = param_1 + 6;
          puVar11 = param_1;
          param_3 = param_1;
        } while (param_1 + 6 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 6 != param_2)) {
      unaff_x20 = (undefined8 *)0x0;
      unaff_x21 = (undefined8 *)auStack_a8;
      puVar9 = param_1 + 6;
      puVar11 = param_1;
      do {
        param_3 = puVar9;
        puVar10 = puVar11 + 7;
        puVar13 = puVar11 + 1;
        func_0x000107c2abd4();
        if (((uint)puVar10 >> 7 & 1) != 0) {
          auStack_a8[0] = *(undefined4 *)param_3;
          uStack_98 = puVar11[8];
          uStack_a0 = puVar11[7];
          puVar11[7] = 0;
          puVar11[8] = 0;
          uStack_90 = puVar11[9];
          uStack_88 = puVar11[10];
          puVar11[9] = 0;
          uStack_80 = *(undefined4 *)(puVar11 + 0xb);
          puVar9 = unaff_x20;
          do {
            puVar11 = puVar9;
            puVar1 = (undefined4 *)((long)param_1 + (long)puVar11);
            puVar1[0xc] = *puVar1;
            if (*(char *)((long)puVar1 + 0x4f) < '\0') {
              puVar10 = *(undefined8 **)(puVar1 + 0xe);
              __ZdlPv();
            }
            *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 4);
            *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 2);
            *(undefined1 *)((long)puVar1 + 0x1f) = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 6);
            *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar1 + 8);
            puVar1[0x16] = puVar1[10];
            puVar9 = param_1;
            if (puVar11 == (undefined8 *)0x0) goto LAB_10927a4d8;
            puVar13 = (undefined8 *)((long)param_1 + (long)puVar11 + -0x28);
            puVar10 = &uStack_a0;
            func_0x000107c2abd4();
            puVar9 = puVar11 + -6;
          } while (((uint)puVar10 >> 7 & 1) != 0);
          puVar9 = (undefined8 *)((long)param_1 + (long)(puVar11 + -6) + 0x30);
LAB_10927a4d8:
          *(undefined4 *)puVar9 = auStack_a8[0];
          lVar3 = (long)param_1 + (long)puVar11;
          if (*(char *)((long)puVar9 + 0x1f) < '\0') {
            puVar10 = *(undefined8 **)(lVar3 + 8);
            __ZdlPv();
          }
          *(undefined8 *)(lVar3 + 0x18) = uStack_90;
          *(undefined8 *)(lVar3 + 0x10) = uStack_98;
          *(undefined8 *)(lVar3 + 8) = uStack_a0;
          *(undefined4 *)(lVar3 + 0x28) = uStack_80;
          *(undefined8 *)(lVar3 + 0x20) = uStack_88;
        }
        unaff_x20 = unaff_x20 + 6;
        puVar9 = param_3 + 6;
        puVar11 = param_3;
      } while (param_3 + 6 != param_2);
    }
  }
  else {
    if (param_3 != (undefined8 *)0x0) {
      if (0x1800 < uVar18) {
        uVar15 = 0x109279f58;
        ppuVar6 = &puStack_e0;
        puVar9 = param_1 + (uVar21 >> 1) * 6;
        puVar14 = puStack_c8;
        goto SUB_10927ac00;
      }
      uVar15 = 0x109279fac;
      ppuVar6 = &puStack_e0;
      puVar10 = param_1 + (uVar21 >> 1) * 6;
      puVar9 = param_1;
      puVar14 = puStack_c8;
      goto SUB_10927ac00;
    }
    if (param_1 != param_2) {
      uVar17 = uVar21 - 2 >> 1;
      puStack_c8 = (undefined8 *)uVar17;
      do {
        puVar9 = puStack_c8;
        if ((long)puStack_c8 <= (long)uVar17) {
          uVar2 = (long)puStack_c8 << 1 | 1;
          puVar11 = param_1 + uVar2 * 6;
          uVar19 = (long)puStack_c8 * 2 + 2;
          uVar16 = uVar2;
          if ((long)uVar19 < (long)uVar21) {
            puVar13 = puVar11 + 1;
            func_0x000107c2abd4(puVar13,puVar11 + 7);
            bVar7 = -1 < (char)puVar13;
            lVar3 = 0x30;
            if (bVar7) {
              lVar3 = 0;
            }
            puVar11 = (undefined8 *)((long)puVar11 + lVar3);
            uVar16 = uVar19;
            if (bVar7) {
              uVar16 = uVar2;
            }
          }
          puVar9 = puStack_c8;
          puVar12 = param_1 + (long)puStack_c8 * 6;
          puVar10 = puVar11 + 1;
          puVar13 = puVar12 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar10 >> 7 & 1) == 0) {
            auStack_a8[0] = *(undefined4 *)puVar12;
            uStack_98 = puVar12[2];
            uStack_a0 = puVar12[1];
            uStack_90 = puVar12[3];
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[1] = 0;
            uStack_88 = puVar12[4];
            uStack_80 = *(undefined4 *)(puVar12 + 5);
            do {
              puVar9 = puVar11;
              *(undefined4 *)puVar12 = *(undefined4 *)puVar9;
              if (*(char *)((long)puVar12 + 0x1f) < '\0') {
                puVar10 = (undefined8 *)puVar12[1];
                __ZdlPv();
              }
              uVar25 = puVar9[2];
              uVar15 = puVar9[1];
              puVar12[3] = puVar9[3];
              puVar12[2] = uVar25;
              puVar12[1] = uVar15;
              uVar15 = puVar9[4];
              *(undefined1 *)((long)puVar9 + 0x1f) = 0;
              *(undefined1 *)(puVar9 + 1) = 0;
              *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar9 + 5);
              puVar12[4] = uVar15;
              if ((long)uVar17 < (long)uVar16) break;
              uVar2 = uVar16 << 1 | 1;
              puVar11 = param_1 + uVar2 * 6;
              uVar19 = uVar16 * 2 + 2;
              uVar16 = uVar2;
              if ((long)uVar19 < (long)uVar21) {
                puVar13 = puVar11 + 1;
                func_0x000107c2abd4(puVar13,puVar11 + 7);
                bVar7 = -1 < (char)puVar13;
                lVar3 = 0x30;
                if (bVar7) {
                  lVar3 = 0;
                }
                puVar11 = (undefined8 *)((long)puVar11 + lVar3);
                uVar16 = uVar19;
                if (bVar7) {
                  uVar16 = uVar2;
                }
              }
              puVar10 = puVar11 + 1;
              puVar13 = &uStack_a0;
              func_0x000107c2abd4();
              puVar12 = puVar9;
            } while (((uint)puVar10 >> 7 & 1) == 0);
            *(undefined4 *)puVar9 = auStack_a8[0];
            if (*(char *)((long)puVar9 + 0x1f) < '\0') {
              puVar10 = (undefined8 *)puVar9[1];
              __ZdlPv();
            }
            puVar9[3] = uStack_90;
            puVar9[2] = uStack_98;
            puVar9[1] = uStack_a0;
            *(undefined4 *)(puVar9 + 5) = uStack_80;
            puVar9[4] = uStack_88;
            puVar9 = puStack_c8;
          }
        }
        puStack_c8 = (undefined8 *)((long)puVar9 - 1);
      } while (puVar9 != (undefined8 *)0x0);
      puVar9 = puStack_c0;
      puVar11 = (undefined8 *)((uVar18 >> 4) * -0x5555555555555555);
      do {
        puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,*(undefined4 *)param_1);
        puStack_c8 = (undefined8 *)param_1[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
        uStack_78 = (undefined7)param_1[2];
        uStack_71 = (undefined1)((ulong)param_1[2] >> 0x38);
        puStack_c0 = (undefined8 *)CONCAT44(puStack_c0._4_4_,(uint)*(byte *)((long)param_1 + 0x1f));
        param_1[1] = 0;
        param_1[2] = 0;
        uStack_b8 = param_1[4];
        uStack_b0 = *(undefined4 *)(param_1 + 5);
        param_1[3] = 0;
        puVar12 = param_1;
        uVar18 = 0;
        do {
          uVar17 = uVar18 << 1 | 1;
          uVar21 = uVar18 * 2 + 2;
          uVar19 = uVar17;
          puVar22 = puVar12 + uVar18 * 6 + 6;
          if ((long)uVar21 < (long)puVar11) {
            puVar10 = puVar12 + uVar18 * 6 + 7;
            puVar13 = puVar12 + uVar18 * 6 + 0xd;
            func_0x000107c2abd4();
            uVar19 = uVar21;
            puVar22 = puVar12 + uVar18 * 6 + 0xc;
            if (-1 < (char)puVar10) {
              uVar19 = uVar17;
              puVar22 = puVar12 + uVar18 * 6 + 6;
            }
          }
          *(undefined4 *)puVar12 = *(undefined4 *)puVar22;
          if (*(char *)((long)puVar12 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar12[1];
            __ZdlPv();
          }
          uVar25 = puVar22[2];
          uVar15 = puVar22[1];
          puVar12[3] = puVar22[3];
          puVar12[2] = uVar25;
          puVar12[1] = uVar15;
          puVar20 = puVar22 + 4;
          uVar15 = *puVar20;
          *(undefined1 *)((long)puVar22 + 0x1f) = 0;
          *(undefined1 *)(puVar22 + 1) = 0;
          *(undefined4 *)(puVar12 + 5) = *(undefined4 *)(puVar22 + 5);
          puVar12[4] = uVar15;
          puVar12 = puVar22;
          uVar18 = uVar19;
        } while ((long)uVar19 <= (long)((long)puVar11 - 2U >> 1));
        unaff_x20 = puVar9 + -6;
        if (puVar22 == unaff_x20) {
          *(undefined4 *)puVar22 = puStack_d0._0_4_;
          if (*(char *)((long)puVar22 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar22[1];
            __ZdlPv();
          }
          puVar22[1] = puStack_c8;
          puVar22[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar22 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(char *)((long)puVar22 + 0x1f) = (char)puStack_c0;
          *puVar20 = uStack_b8;
          *(undefined4 *)(puVar22 + 5) = uStack_b0;
          unaff_x21 = puVar22;
        }
        else {
          *(undefined4 *)puVar22 = *(undefined4 *)unaff_x20;
          if (*(char *)((long)puVar22 + 0x1f) < '\0') {
            puVar10 = (undefined8 *)puVar22[1];
            __ZdlPv();
          }
          uVar25 = puVar9[-4];
          uVar15 = puVar9[-5];
          puVar22[3] = puVar9[-3];
          puVar22[2] = uVar25;
          puVar22[1] = uVar15;
          unaff_x21 = puVar9 + -2;
          uVar15 = *unaff_x21;
          *(undefined1 *)((long)puVar9 + -0x11) = 0;
          *(undefined1 *)(puVar9 + -5) = 0;
          *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(puVar9 + -1);
          *puVar20 = uVar15;
          *(undefined4 *)(puVar9 + -6) = puStack_d0._0_4_;
          puVar9[-5] = puStack_c8;
          *(ulong *)((long)puVar9 + -0x19) = CONCAT71(uStack_70,uStack_71);
          puVar9[-4] = CONCAT17(uStack_71,uStack_78);
          *(char *)((long)puVar9 + -0x11) = (char)puStack_c0;
          *(undefined4 *)(puVar9 + -1) = uStack_b0;
          *unaff_x21 = uStack_b8;
          uVar18 = (long)puVar22 + (0x30 - (long)param_1);
          if (0x30 < (long)uVar18) {
            uVar18 = (uVar18 >> 4) * -0x5555555555555555 - 2 >> 1;
            puVar10 = param_1 + uVar18 * 6 + 1;
            puVar13 = puVar22 + 1;
            func_0x000107c2abd4();
            if (((uint)puVar10 >> 7 & 1) != 0) {
              auStack_a8[0] = *(undefined4 *)puVar22;
              uStack_90 = puVar22[3];
              uStack_98 = puVar22[2];
              uStack_a0 = puVar22[1];
              puVar22[2] = 0;
              puVar22[3] = 0;
              puVar22[1] = 0;
              uStack_88 = *puVar20;
              uStack_80 = *(undefined4 *)(puVar22 + 5);
              puVar9 = param_1 + uVar18 * 6;
              do {
                unaff_x21 = puVar9;
                *(undefined4 *)puVar22 = *(undefined4 *)unaff_x21;
                if (*(char *)((long)puVar22 + 0x1f) < '\0') {
                  puVar10 = (undefined8 *)puVar22[1];
                  __ZdlPv();
                }
                uVar25 = unaff_x21[2];
                uVar15 = unaff_x21[1];
                puVar22[3] = unaff_x21[3];
                puVar22[2] = uVar25;
                puVar22[1] = uVar15;
                uVar15 = unaff_x21[4];
                *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
                *(undefined1 *)(unaff_x21 + 1) = 0;
                *(undefined4 *)(puVar22 + 5) = *(undefined4 *)(unaff_x21 + 5);
                puVar22[4] = uVar15;
                if (uVar18 == 0) break;
                uVar18 = uVar18 - 1 >> 1;
                puVar10 = param_1 + uVar18 * 6 + 1;
                puVar13 = &uStack_a0;
                func_0x000107c2abd4();
                puVar9 = param_1 + uVar18 * 6;
                puVar22 = unaff_x21;
              } while (((uint)puVar10 >> 7 & 1) != 0);
              *(undefined4 *)unaff_x21 = auStack_a8[0];
              if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
                puVar10 = (undefined8 *)unaff_x21[1];
                __ZdlPv();
              }
              unaff_x21[3] = uStack_90;
              unaff_x21[2] = uStack_98;
              unaff_x21[1] = uStack_a0;
              *(undefined4 *)(unaff_x21 + 5) = uStack_80;
              unaff_x21[4] = uStack_88;
            }
          }
        }
        param_3 = (undefined8 *)((long)puVar11 + -1);
        bVar7 = 2 < (long)puVar11;
        puVar9 = unaff_x20;
        puVar11 = param_3;
      } while (bVar7);
    }
  }
LAB_10927aad0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar24 = FUN_10927ab0c;
  ___stack_chk_fail();
  do {
    *(undefined8 **)((long)ppuVar6 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar6 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar6 + -0x10) = puVar23;
    *(code **)((long)ppuVar6 + -8) = pcVar24;
    puVar23 = (undefined1 *)((long)ppuVar6 + -0x10);
    *(undefined8 *)((long)ppuVar6 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = *(undefined4 *)puVar10;
    unaff_x20 = (undefined8 *)puVar10[1];
    *(undefined8 *)((long)ppuVar6 + -0x48) = puVar10[2];
    *(undefined8 *)((long)ppuVar6 + -0x41) = *(undefined8 *)((long)puVar10 + 0x17);
    bVar5 = *(byte *)((long)puVar10 + 0x1f);
    unaff_x21 = (undefined8 *)(ulong)bVar5;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[1] = 0;
    *(undefined8 *)((long)ppuVar6 + -0x58) = puVar10[4];
    *(undefined4 *)((long)ppuVar6 + -0x50) = *(undefined4 *)(puVar10 + 5);
    *(undefined4 *)puVar10 = *(undefined4 *)puVar13;
    uVar25 = puVar13[2];
    uVar15 = puVar13[1];
    puVar10[3] = puVar13[3];
    puVar10[2] = uVar25;
    puVar10[1] = uVar15;
    *(undefined1 *)((long)puVar13 + 0x1f) = 0;
    param_3 = puVar13 + 4;
    uVar15 = *param_3;
    *(undefined1 *)(puVar13 + 1) = 0;
    *(undefined4 *)(puVar10 + 5) = *(undefined4 *)(puVar13 + 5);
    puVar10[4] = uVar15;
    *(undefined4 *)puVar13 = uVar4;
    puVar9 = puVar13;
    if (*(char *)((long)puVar13 + 0x1f) < '\0') {
      puVar10 = (undefined8 *)puVar13[1];
      __ZdlPv();
    }
    uVar15 = *(undefined8 *)((long)ppuVar6 + -0x48);
    puVar13[1] = unaff_x20;
    puVar13[2] = uVar15;
    *(undefined8 *)((long)puVar13 + 0x17) = *(undefined8 *)((long)ppuVar6 + -0x41);
    *(byte *)((long)puVar13 + 0x1f) = bVar5;
    *param_3 = *(undefined8 *)((long)ppuVar6 + -0x58);
    *(undefined4 *)(puVar13 + 5) = *(undefined4 *)((long)ppuVar6 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar6 + -0x38)) {
      return;
    }
    uVar15 = 0x10927ac00;
    ___stack_chk_fail();
    ppuVar6 = (undefined8 **)((long)ppuVar6 + -0x60);
    param_1 = puVar13;
SUB_10927ac00:
    puVar13 = puVar14;
    *(undefined8 **)((long)ppuVar6 + -0x30) = param_3;
    *(undefined8 **)((long)ppuVar6 + -0x28) = unaff_x21;
    *(undefined8 **)((long)ppuVar6 + -0x20) = unaff_x20;
    *(undefined8 **)((long)ppuVar6 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar6 + -0x10) = puVar23;
    *(undefined8 *)((long)ppuVar6 + -8) = uVar15;
    puVar11 = puVar9 + 1;
    puVar14 = puVar13;
    func_0x000107c2abd4(puVar11,puVar10 + 1);
    puVar12 = puVar13 + 1;
    func_0x000107c2abd4(puVar12,puVar9 + 1);
    if (((uint)puVar11 >> 7 & 1) == 0) {
      if (-1 < (char)puVar12) {
        return;
      }
      FUN_10927ab0c(puVar9,puVar13);
      puVar13 = puVar9 + 1;
      func_0x000107c2abd4(puVar13,puVar10 + 1);
      uVar8 = (uint)puVar13;
      puVar13 = puVar9;
joined_r0x00010927ac88:
      if ((uVar8 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar12) {
      FUN_10927ab0c(puVar10,puVar9);
      puVar10 = puVar13 + 1;
      func_0x000107c2abd4(puVar10,puVar9 + 1);
      uVar8 = (uint)puVar10;
      puVar10 = puVar9;
      goto joined_r0x00010927ac88;
    }
    puVar23 = *(undefined1 **)((long)ppuVar6 + -0x10);
    pcVar24 = *(code **)((long)ppuVar6 + -8);
    unaff_x20 = *(undefined8 **)((long)ppuVar6 + -0x20);
    param_1 = *(undefined8 **)((long)ppuVar6 + -0x18);
    param_3 = *(undefined8 **)((long)ppuVar6 + -0x30);
    unaff_x21 = *(undefined8 **)((long)ppuVar6 + -0x28);
  } while( true );
}



/* Entry: 10927ab0c; end: 10927acb3;  */

void FUN_10927ab0c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar10;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_1[10];
    *param_1 = *param_2;
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    puVar10 = (undefined8 *)(param_2 + 8);
    uVar9 = *puVar10;
    *(undefined1 *)(param_2 + 2) = 0;
    param_1[10] = param_2[10];
    *(undefined8 *)(param_1 + 8) = uVar9;
    *param_2 = uVar2;
    puVar8 = param_2;
    puVar7 = param_3;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    *puVar10 = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_2[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar10;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x78) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10927ac00;
    puVar5 = puVar8 + 2;
    param_3 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_10927ab0c(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x00010927ac88:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_10927ab0c(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x00010927ac88;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_2 = puVar7;
  } while( true );
}



/* Entry: 10927acb4; end: 10927adc7;  */

/* WARNING: Possible PIC construction at 0x00010927acdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927acf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ad14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ad4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ad68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ad84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ac4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927ac78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927ac50) */
/* WARNING: Removing unreachable block (ram,0x00010927ac60) */
/* WARNING: Removing unreachable block (ram,0x00010927ad88) */
/* WARNING: Removing unreachable block (ram,0x00010927adac) */
/* WARNING: Removing unreachable block (ram,0x00010927ad6c) */
/* WARNING: Removing unreachable block (ram,0x00010927ad7c) */
/* WARNING: Removing unreachable block (ram,0x00010927ad50) */
/* WARNING: Removing unreachable block (ram,0x00010927ad60) */
/* WARNING: Removing unreachable block (ram,0x00010927ad18) */
/* WARNING: Removing unreachable block (ram,0x00010927ad28) */
/* WARNING: Removing unreachable block (ram,0x00010927acfc) */
/* WARNING: Removing unreachable block (ram,0x00010927ad0c) */
/* WARNING: Removing unreachable block (ram,0x00010927ace0) */
/* WARNING: Removing unreachable block (ram,0x00010927ad34) */
/* WARNING: Removing unreachable block (ram,0x00010927ad98) */
/* WARNING: Removing unreachable block (ram,0x00010927ad44) */
/* WARNING: Removing unreachable block (ram,0x00010927acf0) */
/* WARNING: Removing unreachable block (ram,0x00010927ac7c) */
/* WARNING: Removing unreachable block (ram,0x00010927ac9c) */

void FUN_10927acb4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = &stack0xffffffffffffffc0;
  uVar10 = 0x10927ace0;
  puVar6 = param_2;
  puVar5 = param_1;
  puVar8 = param_3;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
    *(undefined8 **)(puVar3 + -0x30) = param_4;
    *(undefined4 **)(puVar3 + -0x28) = puVar8;
    *(undefined4 **)(puVar3 + -0x20) = puVar5;
    *(undefined4 **)(puVar3 + -0x18) = puVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    puVar9 = puVar3 + -0x10;
    puVar5 = param_2 + 2;
    puVar7 = param_3;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    puVar6 = param_3;
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar8) {
        return;
      }
      uVar10 = 0x10927ac50;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
      puVar4 = param_2;
    }
    else {
      puVar4 = param_1;
      if ((char)puVar8 < '\0') {
        puVar9 = *(undefined1 **)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + -8);
        param_2 = *(undefined4 **)(puVar3 + -0x18);
        puVar5 = *(undefined4 **)(puVar3 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar3;
        param_3 = *(undefined4 **)(puVar3 + -0x20);
        param_1 = *(undefined4 **)(puVar3 + -0x28);
      }
      else {
        uVar10 = 0x10927ac7c;
        puVar6 = param_2;
      }
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x60);
    *(undefined4 **)((long)register0x00000008 + -0x30) = puVar5;
    *(undefined4 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined4 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined4 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *puVar4;
    puVar5 = *(undefined4 **)(puVar4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar4 + 0x17);
    bVar2 = *(byte *)((long)puVar4 + 0x1f);
    puVar8 = (undefined4 *)(ulong)bVar2;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(puVar4 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x50) = puVar4[10];
    *puVar4 = *puVar6;
    uVar11 = *(undefined8 *)(puVar6 + 4);
    uVar10 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar11;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *(undefined1 *)((long)puVar6 + 0x1f) = 0;
    param_4 = (undefined8 *)(puVar6 + 8);
    uVar10 = *param_4;
    *(undefined1 *)(puVar6 + 2) = 0;
    puVar4[10] = puVar6[10];
    *(undefined8 *)(puVar4 + 8) = uVar10;
    *puVar6 = uVar1;
    param_1 = puVar4;
    param_2 = puVar6;
    param_3 = puVar7;
    if (*(char *)((long)puVar6 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(puVar6 + 2);
      __ZdlPv();
      param_3 = puVar7;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined4 **)(puVar6 + 2) = puVar5;
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar6 + 0x1f) = bVar2;
    *param_4 = *(undefined8 *)((long)register0x00000008 + -0x58);
    puVar6[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar10 = 0x10927ac00;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 10927adc8; end: 10927aebb;  */

undefined4 * FUN_10927adc8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 4);
  uVar13 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar13;
  uVar4 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar14 = *(undefined8 *)(param_1 + 8);
  uVar3 = param_1[10];
  *param_1 = *param_2;
  uVar18 = *(undefined8 *)(param_2 + 4);
  uVar15 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar18;
  *(undefined8 *)(param_1 + 2) = uVar15;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  uVar15 = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_2 + 2) = 0;
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 8) = uVar15;
  *param_2 = uVar2;
  puVar9 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = *(undefined4 **)(param_2 + 2);
    __ZdlPv();
  }
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(ulong *)(param_2 + 4) = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar13;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar14;
  param_2[10] = uVar3;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar11 = ((long)puVar9 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar11 < 3) {
    if (uVar11 < 2) {
      return (undefined4 *)0x1;
    }
    if (uVar11 != 2) {
LAB_10927af70:
      func_0x00010927ac00(param_1,param_1 + 0xc,param_1 + 0x18);
      if (param_1 + 0x24 == puVar9) {
        return (undefined4 *)0x1;
      }
      lVar10 = 0;
      iVar17 = 0;
      puVar8 = param_1 + 0x18;
      puVar16 = param_1 + 0x24;
      do {
        puVar6 = puVar16 + 2;
        func_0x000107c2abd4(puVar6,puVar8 + 2);
        if (((uint)puVar6 >> 7 & 1) != 0) {
          uVar2 = *puVar16;
          uStack_d0 = *(undefined8 *)(puVar16 + 4);
          uStack_d8 = *(undefined8 *)(puVar16 + 2);
          *(undefined8 *)(puVar16 + 2) = 0;
          *(undefined8 *)(puVar16 + 4) = 0;
          uStack_c8 = *(undefined8 *)(puVar16 + 6);
          uStack_c0 = *(undefined8 *)(puVar16 + 8);
          *(undefined8 *)(puVar16 + 6) = 0;
          uStack_b8 = puVar16[10];
          lVar5 = lVar10;
          do {
            lVar12 = lVar5;
            *(undefined4 *)((long)param_1 + lVar12 + 0x90) =
                 *(undefined4 *)((long)param_1 + lVar12 + 0x60);
            if (*(char *)((long)param_1 + lVar12 + 0xaf) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar12 + 0x98));
            }
            *(undefined8 *)((long)param_1 + lVar12 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x70);
            *(undefined8 *)((long)param_1 + lVar12 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x68);
            *(undefined1 *)((long)param_1 + lVar12 + 0x7f) = 0;
            *(undefined1 *)((long)param_1 + lVar12 + 0x68) = 0;
            *(undefined8 *)((long)param_1 + lVar12 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x78);
            *(undefined8 *)((long)param_1 + lVar12 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar12 + 0x80);
            *(undefined4 *)((long)param_1 + lVar12 + 0xb8) =
                 *(undefined4 *)((long)param_1 + lVar12 + 0x88);
            puVar8 = param_1;
            if (lVar12 == -0x60) goto LAB_10927b048;
            puVar7 = &uStack_d8;
            func_0x000107c2abd4(puVar7,(long)param_1 + lVar12 + 0x38);
            lVar5 = lVar12 + -0x30;
          } while (((uint)puVar7 >> 7 & 1) != 0);
          puVar8 = (undefined4 *)((long)param_1 + lVar12 + 0x60);
LAB_10927b048:
          *puVar8 = uVar2;
          if (*(char *)((long)puVar8 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar12 + 0x68));
          }
          *(undefined8 *)((long)param_1 + lVar12 + 0x70) = uStack_d0;
          *(undefined8 *)((long)param_1 + lVar12 + 0x68) = uStack_d8;
          *(undefined8 *)((long)param_1 + lVar12 + 0x78) = uStack_c8;
          *(undefined8 *)((long)param_1 + lVar12 + 0x80) = uStack_c0;
          *(undefined4 *)((long)param_1 + lVar12 + 0x88) = uStack_b8;
          iVar17 = iVar17 + 1;
          if (iVar17 == 8) {
            return (undefined4 *)(ulong)(puVar16 + 0xc == puVar9);
          }
        }
        puVar6 = puVar16 + 0xc;
        lVar10 = lVar10 + 0x30;
        puVar8 = puVar16;
        puVar16 = puVar6;
        if (puVar6 == puVar9) {
          return (undefined4 *)0x1;
        }
      } while( true );
    }
    puVar8 = puVar9 + -10;
    func_0x000107c2abd4(puVar8,param_1 + 2);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar9 = puVar9 + -0xc;
  }
  else {
    if (uVar11 == 3) {
      func_0x00010927ac00(param_1,param_1 + 0xc,puVar9 + -0xc);
      return (undefined4 *)0x1;
    }
    if (uVar11 != 4) {
      if (uVar11 == 5) {
        FUN_10927acb4(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,puVar9 + -0xc);
        return (undefined4 *)0x1;
      }
      goto LAB_10927af70;
    }
    func_0x00010927ac00(param_1,param_1 + 0xc,param_1 + 0x18);
    puVar8 = puVar9 + -10;
    func_0x000107c2abd4(puVar8,param_1 + 0x1a);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_10927ab0c(param_1 + 0x18,puVar9 + -0xc);
    puVar9 = param_1 + 0x1a;
    func_0x000107c2abd4(puVar9,param_1 + 0xe);
    if (((uint)puVar9 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_10927ab0c(param_1 + 0xc,param_1 + 0x18);
    puVar9 = param_1 + 0xe;
    func_0x000107c2abd4(puVar9,param_1 + 2);
    if (((uint)puVar9 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar9 = param_1 + 0xc;
  }
  FUN_10927ab0c(param_1,puVar9);
  return (undefined4 *)0x1;
}



/* Entry: 10927aebc; end: 10927b12f;  */

bool FUN_10927aebc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_10927af70:
      func_0x00010927ac00(param_1,param_1 + 0xc,param_1 + 0x18);
      if (param_1 + 0x24 == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x18;
      puVar8 = param_1 + 0x24;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_70 = *(undefined8 *)(puVar8 + 4);
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          uStack_68 = *(undefined8 *)(puVar8 + 6);
          uStack_60 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 6) = 0;
          uStack_58 = puVar8[10];
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x60);
            if (*(char *)((long)param_1 + lVar7 + 0xaf) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x98));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined1 *)((long)param_1 + lVar7 + 0x7f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x68) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x78);
            *(undefined8 *)((long)param_1 + lVar7 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x80);
            *(undefined4 *)((long)param_1 + lVar7 + 0xb8) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x88);
            puVar5 = param_1;
            if (lVar7 == -0x60) goto LAB_10927b048;
            puVar4 = &uStack_78;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x38);
            lVar2 = lVar7 + -0x30;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x60);
LAB_10927b048:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x68));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x70) = uStack_70;
          *(undefined8 *)((long)param_1 + lVar7 + 0x68) = uStack_78;
          *(undefined8 *)((long)param_1 + lVar7 + 0x78) = uStack_68;
          *(undefined8 *)((long)param_1 + lVar7 + 0x80) = uStack_60;
          *(undefined4 *)((long)param_1 + lVar7 + 0x88) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 0xc == param_2;
          }
        }
        puVar3 = puVar8 + 0xc;
        lVar9 = lVar9 + 0x30;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -0xc;
  }
  else {
    if (uVar6 == 3) {
      func_0x00010927ac00(param_1,param_1 + 0xc,param_2 + -0xc);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_10927acb4(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
        return true;
      }
      goto LAB_10927af70;
    }
    func_0x00010927ac00(param_1,param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 0x1a);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927ab0c(param_1 + 0x18,param_2 + -0xc);
    puVar5 = param_1 + 0x1a;
    func_0x000107c2abd4(puVar5,param_1 + 0xe);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927ab0c(param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_1 + 0xe;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 0xc;
  }
  FUN_10927ab0c(param_1,param_2);
  return true;
}



/* Entry: 10927b130; end: 10927b2eb;  */

/* WARNING: Removing unreachable block (ram,0x00010927b32c) */

long * FUN_10927b130(long *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  undefined4 *puStack_68;
  undefined4 *puStack_60;
  long *plStack_58;
  
  puVar8 = (undefined4 *)*param_1;
  puVar9 = (undefined4 *)param_1[1];
  lVar11 = (long)puVar9 - (long)puVar8;
  uVar4 = (lVar11 >> 3) * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar4) {
    FUN_10927b2ec();
LAB_10927b2d4:
    func_0x000104c4f740();
    FUN_10927b300(&puStack_78);
    __Unwind_Resume(param_1);
    plVar3 = (long *)&UNK_10f5629b6;
    func_0x000104c4f6cc();
    lVar11 = plVar3[2];
    while (lVar11 != plVar3[1]) {
      lVar11 = lVar11 + -0x28;
      plVar3[2] = lVar11;
    }
    if (*plVar3 != 0) {
      __ZdlPv();
    }
    return plVar3;
  }
  lVar6 = param_1[2] - (long)puVar8 >> 3;
  uVar7 = lVar6 * -0x6666666666666666;
  if (uVar7 < uVar4 || uVar7 - uVar4 == 0) {
    uVar7 = uVar4;
  }
  if (0x333333333333332 < (ulong)(lVar6 * -0x3333333333333333)) {
    uVar7 = 0x666666666666666;
  }
  plStack_58 = param_1;
  if (uVar7 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    if (0x666666666666666 < uVar7) goto LAB_10927b2d4;
    puVar2 = (undefined4 *)(uVar7 * 0x28);
    __Znwm();
  }
  puVar1 = (undefined4 *)((long)puVar2 + lVar11);
  puVar10 = puVar2 + uVar7 * 10;
  *puVar1 = *param_2;
  puStack_78 = puVar2;
  puStack_70 = puVar1;
  puStack_68 = puVar1;
  puStack_60 = puVar10;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    func_0x000107c3192c(puVar1 + 2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    puVar8 = (undefined4 *)*param_1;
    puVar9 = (undefined4 *)param_1[1];
    lVar11 = (long)puVar9 - (long)puVar8;
  }
  else {
    uVar12 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar1 + 2) = uVar12;
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_2 + 6);
  }
  *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_2 + 8);
  puVar2 = puVar8;
  puVar5 = (undefined4 *)((long)puVar1 - lVar11);
  if (puVar8 != puVar9) {
    do {
      *puVar5 = *puVar2;
      uVar13 = *(undefined8 *)(puVar2 + 4);
      uVar12 = *(undefined8 *)(puVar2 + 2);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(puVar2 + 6);
      *(undefined8 *)(puVar5 + 4) = uVar13;
      *(undefined8 *)(puVar5 + 2) = uVar12;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar5 + 8) = *(undefined8 *)(puVar2 + 8);
      puVar2 = puVar2 + 10;
      puVar5 = puVar5 + 10;
    } while (puVar2 != puVar9);
    do {
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        __ZdlPv(*(undefined8 *)(puVar8 + 2));
      }
      puVar8 = puVar8 + 10;
    } while (puVar8 != puVar9);
    puVar8 = (undefined4 *)*param_1;
  }
  *param_1 = (long)puVar1 - lVar11;
  param_1[1] = (long)(puVar1 + 10);
  puStack_60 = (undefined4 *)param_1[2];
  param_1[2] = (long)puVar10;
  puStack_78 = puVar8;
  puStack_70 = puVar8;
  puStack_68 = puVar8;
  FUN_10927b300(&puStack_78);
  return (long *)(puVar1 + 10);
}



/* Entry: 10927b2ec; end: 10927b2ff;  */

/* WARNING: Removing unreachable block (ram,0x00010927b32c) */

long * FUN_10927b2ec(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&UNK_10f5629b6;
  func_0x000104c4f6cc();
  lVar2 = plVar1[2];
  while (lVar2 != plVar1[1]) {
    lVar2 = lVar2 + -0x28;
    plVar1[2] = lVar2;
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  return plVar1;
}



/* Entry: 10927b300; end: 10927b35f;  */

/* WARNING: Removing unreachable block (ram,0x00010927b32c) */

long * FUN_10927b300(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x28;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10927b360; end: 10927bf2b;  */

/* WARNING: Possible PIC construction at 0x00010927b438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927b45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927b48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927b858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927b844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927b85c) */
/* WARNING: Removing unreachable block (ram,0x00010927b86c) */
/* WARNING: Removing unreachable block (ram,0x00010927b888) */
/* WARNING: Removing unreachable block (ram,0x00010927b8a4) */
/* WARNING: Removing unreachable block (ram,0x00010927b460) */
/* WARNING: Removing unreachable block (ram,0x00010927b490) */
/* WARNING: Removing unreachable block (ram,0x00010927b498) */
/* WARNING: Removing unreachable block (ram,0x00010927b678) */
/* WARNING: Removing unreachable block (ram,0x00010927b6d4) */
/* WARNING: Removing unreachable block (ram,0x00010927b6d8) */
/* WARNING: Removing unreachable block (ram,0x00010927b6ac) */
/* WARNING: Removing unreachable block (ram,0x00010927b6b0) */
/* WARNING: Removing unreachable block (ram,0x00010927b6bc) */
/* WARNING: Removing unreachable block (ram,0x00010927b6d0) */
/* WARNING: Removing unreachable block (ram,0x00010927b6f0) */
/* WARNING: Removing unreachable block (ram,0x00010927b6fc) */
/* WARNING: Removing unreachable block (ram,0x00010927b700) */
/* WARNING: Removing unreachable block (ram,0x00010927b718) */
/* WARNING: Removing unreachable block (ram,0x00010927b754) */
/* WARNING: Removing unreachable block (ram,0x00010927b71c) */
/* WARNING: Removing unreachable block (ram,0x00010927b728) */
/* WARNING: Removing unreachable block (ram,0x00010927b740) */
/* WARNING: Removing unreachable block (ram,0x00010927b75c) */
/* WARNING: Removing unreachable block (ram,0x00010927b768) */
/* WARNING: Removing unreachable block (ram,0x00010927b778) */
/* WARNING: Removing unreachable block (ram,0x00010927b780) */
/* WARNING: Removing unreachable block (ram,0x00010927b7a0) */
/* WARNING: Removing unreachable block (ram,0x00010927b7b4) */
/* WARNING: Removing unreachable block (ram,0x00010927b7bc) */
/* WARNING: Removing unreachable block (ram,0x00010927b7e4) */
/* WARNING: Removing unreachable block (ram,0x00010927b4a8) */
/* WARNING: Removing unreachable block (ram,0x00010927b4d0) */
/* WARNING: Removing unreachable block (ram,0x00010927b4e8) */
/* WARNING: Removing unreachable block (ram,0x00010927b518) */
/* WARNING: Removing unreachable block (ram,0x00010927b51c) */
/* WARNING: Removing unreachable block (ram,0x00010927b540) */
/* WARNING: Removing unreachable block (ram,0x00010927b524) */
/* WARNING: Removing unreachable block (ram,0x00010927b53c) */
/* WARNING: Removing unreachable block (ram,0x00010927b4fc) */
/* WARNING: Removing unreachable block (ram,0x00010927b514) */
/* WARNING: Removing unreachable block (ram,0x00010927b544) */
/* WARNING: Removing unreachable block (ram,0x00010927b598) */
/* WARNING: Removing unreachable block (ram,0x00010927b54c) */
/* WARNING: Removing unreachable block (ram,0x00010927b554) */
/* WARNING: Removing unreachable block (ram,0x00010927b560) */
/* WARNING: Removing unreachable block (ram,0x00010927b578) */
/* WARNING: Removing unreachable block (ram,0x00010927b58c) */
/* WARNING: Removing unreachable block (ram,0x00010927b594) */
/* WARNING: Removing unreachable block (ram,0x00010927b59c) */
/* WARNING: Removing unreachable block (ram,0x00010927b5a8) */
/* WARNING: Removing unreachable block (ram,0x00010927b5b8) */
/* WARNING: Removing unreachable block (ram,0x00010927b5c0) */
/* WARNING: Removing unreachable block (ram,0x00010927b5e0) */
/* WARNING: Removing unreachable block (ram,0x00010927b5f4) */
/* WARNING: Removing unreachable block (ram,0x00010927b5fc) */
/* WARNING: Removing unreachable block (ram,0x00010927b624) */
/* WARNING: Removing unreachable block (ram,0x00010927b62c) */
/* WARNING: Removing unreachable block (ram,0x00010927b638) */
/* WARNING: Removing unreachable block (ram,0x00010927b7f0) */
/* WARNING: Removing unreachable block (ram,0x00010927b7f8) */
/* WARNING: Removing unreachable block (ram,0x00010927b658) */
/* WARNING: Removing unreachable block (ram,0x00010927b65c) */
/* WARNING: Removing unreachable block (ram,0x00010927b670) */
/* WARNING: Removing unreachable block (ram,0x00010927b43c) */
/* WARNING: Removing unreachable block (ram,0x00010927b848) */
/* WARNING: Removing unreachable block (ram,0x00010927be60) */
/* WARNING: Removing unreachable block (ram,0x00010927bc84) */
/* WARNING: Removing unreachable block (ram,0x00010927beb4) */

void FUN_10927b360(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined4 *puVar1;
  long lVar2;
  byte bVar3;
  ulong *puVar4;
  ulong **ppuVar5;
  bool bVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *unaff_x20;
  ulong uVar14;
  ulong *puVar15;
  ulong *unaff_x21;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puStack_c0;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  undefined4 auStack_a0 [2];
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  ppuVar5 = &puStack_c0;
  puVar19 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_a8 = param_2 + -5;
  puStack_b0 = param_2 + -10;
  puStack_b8 = param_2 + -0xf;
  puVar8 = param_2 + -4;
  uVar17 = (long)param_2 - (long)param_1;
  uVar18 = ((long)uVar17 >> 3) * -0x3333333333333333;
  puVar9 = param_1;
  puVar12 = param_2;
  puVar13 = param_3;
  puStack_c0 = puVar8;
  if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
    if (uVar18 < 2) goto LAB_10927bef0;
    if (uVar18 == 2) {
      puVar12 = param_1 + 1;
      func_0x000107c2abd4();
      puVar9 = puVar8;
      if (((uint)puVar8 >> 7 & 1) != 0) {
        puVar9 = param_1;
        puVar12 = puStack_a8;
        FUN_10927bf2c();
      }
      goto LAB_10927bef0;
    }
  }
  else {
    if (uVar18 == 3) {
      puVar8 = param_1 + 5;
      uVar21 = 0x10927b848;
      ppuVar5 = &puStack_c0;
      puVar13 = puStack_a8;
      goto SUB_10927bffc;
    }
    if (uVar18 == 4) {
      puVar8 = param_1 + 5;
      uVar21 = 0x10927b85c;
      ppuVar5 = &puStack_c0;
      puVar13 = param_1 + 10;
      goto SUB_10927bffc;
    }
    if (uVar18 == 5) {
      puVar12 = param_1 + 5;
      puVar13 = param_1 + 10;
      FUN_10927c0b0();
      goto LAB_10927bef0;
    }
  }
  if ((long)uVar17 < 0x3c0) {
    if ((param_4 & 1) == 0) {
      if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
        unaff_x20 = (ulong *)auStack_a0;
        unaff_x21 = param_1 + 9;
        puVar8 = param_1 + 5;
        puVar10 = param_1;
        do {
          param_1 = puVar8;
          puVar9 = puVar10 + 6;
          puVar12 = puVar10 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar9 >> 7 & 1) != 0) {
            auStack_a0[0] = (undefined4)*param_1;
            uStack_90 = puVar10[7];
            uStack_98 = puVar10[6];
            uStack_88 = puVar10[8];
            uStack_80 = puVar10[9];
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[8] = 0;
            puVar8 = unaff_x21;
            do {
              puVar10 = puVar8;
              *(int *)(puVar10 + -4) = (int)puVar10[-9];
              puVar10[-2] = puVar10[-7];
              puVar10[-3] = puVar10[-8];
              puVar10[-1] = puVar10[-6];
              *(undefined1 *)((long)puVar10 + -0x29) = 0;
              *(undefined1 *)(puVar10 + -8) = 0;
              puVar8 = puVar10 + -5;
              *puVar10 = *puVar8;
              puVar12 = puVar10 + -0xd;
              puVar9 = &uStack_98;
              func_0x000107c2abd4();
            } while (((uint)puVar9 >> 7 & 1) != 0);
            *(undefined4 *)(puVar10 + -9) = auStack_a0[0];
            puVar10[-6] = uStack_88;
            puVar10[-7] = uStack_90;
            puVar10[-8] = uStack_98;
            uStack_88 = uStack_88 & 0xffffffffffffff;
            uStack_98 = uStack_98 & 0xffffffffffffff00;
            *puVar8 = uStack_80;
          }
          unaff_x21 = unaff_x21 + 5;
          puVar8 = param_1 + 5;
          puVar10 = param_1;
          param_3 = param_1;
        } while (param_1 + 5 != param_2);
      }
    }
    else if ((param_1 != param_2) && (param_1 + 5 != param_2)) {
      unaff_x20 = (ulong *)0x0;
      unaff_x21 = (ulong *)auStack_a0;
      puVar8 = param_1 + 5;
      puVar10 = param_1;
      do {
        param_3 = puVar8;
        puVar9 = puVar10 + 6;
        puVar12 = puVar10 + 1;
        func_0x000107c2abd4();
        if (((uint)puVar9 >> 7 & 1) != 0) {
          auStack_a0[0] = (undefined4)*param_3;
          uStack_90 = puVar10[7];
          uStack_98 = puVar10[6];
          uStack_88 = puVar10[8];
          uStack_80 = puVar10[9];
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10[8] = 0;
          puVar8 = unaff_x20;
          do {
            puVar10 = puVar8;
            puVar1 = (undefined4 *)((long)param_1 + (long)puVar10);
            puVar1[10] = *puVar1;
            if (*(char *)((long)puVar1 + 0x47) < '\0') {
              puVar9 = *(ulong **)(puVar1 + 0xc);
              __ZdlPv();
            }
            *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 4);
            *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(puVar1 + 2);
            *(undefined1 *)((long)puVar1 + 0x1f) = 0;
            *(undefined1 *)(puVar1 + 2) = 0;
            *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 6);
            *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 8);
            puVar8 = param_1;
            if (puVar10 == (ulong *)0x0) goto LAB_10927b974;
            puVar12 = (ulong *)((long)param_1 + (long)puVar10 + -0x20);
            puVar9 = &uStack_98;
            func_0x000107c2abd4();
            puVar8 = puVar10 + -5;
          } while (((uint)puVar9 >> 7 & 1) != 0);
          puVar8 = (ulong *)((long)param_1 + (long)(puVar10 + -5) + 0x28);
LAB_10927b974:
          *(undefined4 *)puVar8 = auStack_a0[0];
          lVar2 = (long)param_1 + (long)puVar10;
          if (*(char *)((long)puVar8 + 0x1f) < '\0') {
            puVar9 = *(ulong **)(lVar2 + 8);
            __ZdlPv();
          }
          *(ulong *)(lVar2 + 0x18) = uStack_88;
          *(ulong *)(lVar2 + 0x10) = uStack_90;
          *(ulong *)(lVar2 + 8) = uStack_98;
          puVar8[4] = uStack_80;
        }
        unaff_x20 = unaff_x20 + 5;
        puVar8 = param_3 + 5;
        puVar10 = param_3;
      } while (param_3 + 5 != param_2);
    }
  }
  else {
    if (param_3 != (ulong *)0x0) {
      if (0x1400 < uVar17) {
        uVar21 = 0x10927b43c;
        ppuVar5 = &puStack_c0;
        puVar8 = param_1 + (uVar18 >> 1) * 5;
        puVar13 = puStack_a8;
        goto SUB_10927bffc;
      }
      uVar21 = 0x10927b490;
      ppuVar5 = &puStack_c0;
      puVar9 = param_1 + (uVar18 >> 1) * 5;
      puVar8 = param_1;
      puVar13 = puStack_a8;
      goto SUB_10927bffc;
    }
    if (param_1 != param_2) {
      uVar16 = uVar18 - 2 >> 1;
      uVar24 = uVar16;
      puStack_a8 = param_2;
      do {
        if ((long)uVar24 <= (long)uVar16) {
          uVar23 = uVar24 << 1 | 1;
          puVar8 = param_1 + uVar23 * 5;
          uVar22 = uVar24 * 2 + 2;
          uVar14 = uVar23;
          if ((long)uVar22 < (long)uVar18) {
            puVar12 = puVar8 + 1;
            func_0x000107c2abd4(puVar12,puVar8 + 6);
            bVar6 = -1 < (char)puVar12;
            lVar2 = 0x28;
            if (bVar6) {
              lVar2 = 0;
            }
            puVar8 = (ulong *)((long)puVar8 + lVar2);
            uVar14 = uVar22;
            if (bVar6) {
              uVar14 = uVar23;
            }
          }
          puVar10 = param_1 + uVar24 * 5;
          puVar9 = puVar8 + 1;
          puVar12 = puVar10 + 1;
          func_0x000107c2abd4();
          if (((uint)puVar9 >> 7 & 1) == 0) {
            auStack_a0[0] = (undefined4)*puVar10;
            uStack_90 = puVar10[2];
            uStack_98 = puVar10[1];
            uStack_88 = puVar10[3];
            puVar10[2] = 0;
            puVar10[3] = 0;
            puVar10[1] = 0;
            uStack_80 = puVar10[4];
            do {
              puVar11 = puVar8;
              *(int *)puVar10 = (int)*puVar11;
              if (*(char *)((long)puVar10 + 0x1f) < '\0') {
                puVar9 = (ulong *)puVar10[1];
                __ZdlPv();
              }
              uVar23 = puVar11[2];
              uVar22 = puVar11[1];
              puVar10[3] = puVar11[3];
              puVar10[2] = uVar23;
              puVar10[1] = uVar22;
              *(undefined1 *)((long)puVar11 + 0x1f) = 0;
              *(undefined1 *)(puVar11 + 1) = 0;
              puVar10[4] = puVar11[4];
              if ((long)uVar16 < (long)uVar14) break;
              uVar23 = uVar14 << 1 | 1;
              puVar8 = param_1 + uVar23 * 5;
              uVar22 = uVar14 * 2 + 2;
              uVar14 = uVar23;
              if ((long)uVar22 < (long)uVar18) {
                puVar12 = puVar8 + 1;
                func_0x000107c2abd4(puVar12,puVar8 + 6);
                bVar6 = -1 < (char)puVar12;
                lVar2 = 0x28;
                if (bVar6) {
                  lVar2 = 0;
                }
                puVar8 = (ulong *)((long)puVar8 + lVar2);
                uVar14 = uVar22;
                if (bVar6) {
                  uVar14 = uVar23;
                }
              }
              puVar9 = puVar8 + 1;
              puVar12 = &uStack_98;
              func_0x000107c2abd4();
              puVar10 = puVar11;
            } while (((uint)puVar9 >> 7 & 1) == 0);
            *(undefined4 *)puVar11 = auStack_a0[0];
            if (*(char *)((long)puVar11 + 0x1f) < '\0') {
              puVar9 = (ulong *)puVar11[1];
              __ZdlPv();
            }
            puVar11[3] = uStack_88;
            puVar11[2] = uStack_90;
            puVar11[1] = uStack_98;
            puVar11[4] = uStack_80;
          }
        }
        bVar6 = uVar24 != 0;
        uVar24 = uVar24 - 1;
      } while (bVar6);
      puVar8 = (ulong *)((uVar17 >> 3) * -0x3333333333333333);
      puVar10 = puStack_a8;
      do {
        unaff_x20 = puVar10;
        uVar17 = 0;
        puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,(int)*param_1);
        puStack_b0 = (ulong *)param_1[1];
        uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)param_1 + 0x17) >> 8);
        uStack_78 = (undefined7)param_1[2];
        uStack_71 = (undefined1)(param_1[2] >> 0x38);
        puStack_a8 = (ulong *)CONCAT44(puStack_a8._4_4_,(uint)*(byte *)((long)param_1 + 0x1f));
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[1] = 0;
        puStack_b8 = (ulong *)param_1[4];
        puVar10 = param_1;
        do {
          unaff_x21 = puVar10 + uVar17 * 5;
          uVar24 = uVar17 << 1 | 1;
          uVar18 = uVar17 * 2 + 2;
          uVar17 = uVar24;
          puVar11 = unaff_x21 + 5;
          if ((long)uVar18 < (long)puVar8) {
            puVar9 = unaff_x21 + 6;
            puVar12 = unaff_x21 + 0xb;
            func_0x000107c2abd4();
            uVar17 = uVar18;
            puVar11 = unaff_x21 + 10;
            if (-1 < (char)puVar9) {
              uVar17 = uVar24;
              puVar11 = unaff_x21 + 5;
            }
          }
          *(int *)puVar10 = (int)*puVar11;
          if (*(char *)((long)puVar10 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar10[1];
            __ZdlPv();
          }
          uVar24 = puVar11[2];
          uVar18 = puVar11[1];
          puVar10[3] = puVar11[3];
          puVar10[2] = uVar24;
          puVar10[1] = uVar18;
          *(undefined1 *)((long)puVar11 + 0x1f) = 0;
          *(undefined1 *)(puVar11 + 1) = 0;
          puVar10[4] = puVar11[4];
          puVar10 = puVar11;
        } while ((long)uVar17 <= (long)((long)puVar8 - 2U >> 1));
        puVar10 = unaff_x20 + -5;
        if (puVar11 == puVar10) {
          *(undefined4 *)puVar11 = puStack_c0._0_4_;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar11[1];
            __ZdlPv();
          }
          puVar11[1] = (ulong)puStack_b0;
          puVar11[2] = CONCAT17(uStack_71,uStack_78);
          *(ulong *)((long)puVar11 + 0x17) = CONCAT71(uStack_70,uStack_71);
          *(char *)((long)puVar11 + 0x1f) = (char)puStack_a8;
          puVar11[4] = (ulong)puStack_b8;
        }
        else {
          *(int *)puVar11 = (int)*puVar10;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            puVar9 = (ulong *)puVar11[1];
            __ZdlPv();
          }
          uVar18 = unaff_x20[-3];
          uVar17 = unaff_x20[-4];
          puVar11[3] = unaff_x20[-2];
          puVar11[2] = uVar18;
          puVar11[1] = uVar17;
          *(undefined1 *)((long)unaff_x20 + -9) = 0;
          *(undefined1 *)(unaff_x20 + -4) = 0;
          puVar11[4] = unaff_x20[-1];
          *(undefined4 *)(unaff_x20 + -5) = puStack_c0._0_4_;
          unaff_x20[-4] = (ulong)puStack_b0;
          *(ulong *)((long)unaff_x20 + -0x11) = CONCAT71(uStack_70,uStack_71);
          unaff_x20[-3] = CONCAT17(uStack_71,uStack_78);
          *(char *)((long)unaff_x20 + -9) = (char)puStack_a8;
          unaff_x20[-1] = (ulong)puStack_b8;
          uVar17 = (long)puVar11 + (0x28 - (long)param_1);
          if (0x28 < (long)uVar17) {
            puVar15 = (ulong *)((uVar17 >> 3) * -0x3333333333333333 - 2 >> 1);
            puVar9 = param_1 + (long)puVar15 * 5 + 1;
            puVar12 = puVar11 + 1;
            func_0x000107c2abd4();
            unaff_x20 = puVar15;
            if (((uint)puVar9 >> 7 & 1) != 0) {
              auStack_a0[0] = (undefined4)*puVar11;
              uStack_90 = puVar11[2];
              uStack_98 = puVar11[1];
              uStack_88 = puVar11[3];
              uStack_80 = puVar11[4];
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[1] = 0;
              puVar4 = param_1 + (long)puVar15 * 5;
              do {
                unaff_x21 = puVar4;
                *(int *)puVar11 = (int)*unaff_x21;
                if (*(char *)((long)puVar11 + 0x1f) < '\0') {
                  puVar9 = (ulong *)puVar11[1];
                  __ZdlPv();
                }
                uVar18 = unaff_x21[2];
                uVar17 = unaff_x21[1];
                puVar11[3] = unaff_x21[3];
                puVar11[2] = uVar18;
                puVar11[1] = uVar17;
                *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
                *(undefined1 *)(unaff_x21 + 1) = 0;
                puVar11[4] = unaff_x21[4];
                unaff_x20 = (ulong *)0x0;
                if (puVar15 == (ulong *)0x0) break;
                puVar15 = (ulong *)((long)puVar15 - 1U >> 1);
                puVar9 = param_1 + (long)puVar15 * 5 + 1;
                puVar12 = &uStack_98;
                func_0x000107c2abd4();
                unaff_x20 = puVar15;
                puVar4 = param_1 + (long)puVar15 * 5;
                puVar11 = unaff_x21;
              } while (((uint)puVar9 >> 7 & 1) != 0);
              *(undefined4 *)unaff_x21 = auStack_a0[0];
              if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
                puVar9 = (ulong *)unaff_x21[1];
                __ZdlPv();
              }
              unaff_x21[3] = uStack_88;
              unaff_x21[2] = uStack_90;
              unaff_x21[1] = uStack_98;
              unaff_x21[4] = uStack_80;
            }
          }
        }
        param_3 = (ulong *)((long)puVar8 + -1);
        bVar6 = 2 < (long)puVar8;
        puVar8 = param_3;
      } while (bVar6);
    }
  }
LAB_10927bef0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  pcVar20 = FUN_10927bf2c;
  ___stack_chk_fail();
  do {
    *(ulong **)((long)ppuVar5 + -0x30) = param_3;
    *(ulong **)((long)ppuVar5 + -0x28) = unaff_x21;
    *(ulong **)((long)ppuVar5 + -0x20) = unaff_x20;
    *(ulong **)((long)ppuVar5 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar5 + -0x10) = puVar19;
    *(code **)((long)ppuVar5 + -8) = pcVar20;
    puVar19 = (undefined1 *)((long)ppuVar5 + -0x10);
    *(undefined8 *)((long)ppuVar5 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar17 = *puVar9;
    unaff_x20 = (ulong *)puVar9[1];
    *(ulong *)((long)ppuVar5 + -0x48) = puVar9[2];
    *(undefined8 *)((long)ppuVar5 + -0x41) = *(undefined8 *)((long)puVar9 + 0x17);
    bVar3 = *(byte *)((long)puVar9 + 0x1f);
    unaff_x21 = (ulong *)(ulong)bVar3;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[1] = 0;
    param_3 = (ulong *)puVar9[4];
    *(int *)puVar9 = (int)*puVar12;
    uVar24 = puVar12[2];
    uVar18 = puVar12[1];
    puVar9[3] = puVar12[3];
    puVar9[2] = uVar24;
    puVar9[1] = uVar18;
    *(undefined1 *)((long)puVar12 + 0x1f) = 0;
    *(undefined1 *)(puVar12 + 1) = 0;
    puVar9[4] = puVar12[4];
    *(int *)puVar12 = (int)uVar17;
    puVar8 = puVar12;
    if (*(char *)((long)puVar12 + 0x1f) < '\0') {
      puVar9 = (ulong *)puVar12[1];
      __ZdlPv();
    }
    uVar17 = *(ulong *)((long)ppuVar5 + -0x48);
    puVar12[1] = (ulong)unaff_x20;
    puVar12[2] = uVar17;
    *(undefined8 *)((long)puVar12 + 0x17) = *(undefined8 *)((long)ppuVar5 + -0x41);
    *(byte *)((long)puVar12 + 0x1f) = bVar3;
    puVar12[4] = (ulong)param_3;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar5 + -0x38)) {
      return;
    }
    uVar21 = 0x10927bffc;
    ___stack_chk_fail();
    ppuVar5 = (ulong **)((long)ppuVar5 + -0x50);
    param_1 = puVar12;
SUB_10927bffc:
    puVar12 = puVar13;
    *(ulong **)((long)ppuVar5 + -0x30) = param_3;
    *(ulong **)((long)ppuVar5 + -0x28) = unaff_x21;
    *(ulong **)((long)ppuVar5 + -0x20) = unaff_x20;
    *(ulong **)((long)ppuVar5 + -0x18) = param_1;
    *(undefined1 **)((long)ppuVar5 + -0x10) = puVar19;
    *(undefined8 *)((long)ppuVar5 + -8) = uVar21;
    puVar10 = puVar8 + 1;
    puVar13 = puVar12;
    func_0x000107c2abd4(puVar10,puVar9 + 1);
    puVar11 = puVar12 + 1;
    func_0x000107c2abd4(puVar11,puVar8 + 1);
    if (((uint)puVar10 >> 7 & 1) == 0) {
      if (-1 < (char)puVar11) {
        return;
      }
      FUN_10927bf2c(puVar8,puVar12);
      puVar12 = puVar8 + 1;
      func_0x000107c2abd4(puVar12,puVar9 + 1);
      uVar7 = (uint)puVar12;
      puVar12 = puVar8;
joined_r0x00010927c084:
      if ((uVar7 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar11) {
      FUN_10927bf2c(puVar9,puVar8);
      puVar9 = puVar12 + 1;
      func_0x000107c2abd4(puVar9,puVar8 + 1);
      uVar7 = (uint)puVar9;
      puVar9 = puVar8;
      goto joined_r0x00010927c084;
    }
    puVar19 = *(undefined1 **)((long)ppuVar5 + -0x10);
    pcVar20 = *(code **)((long)ppuVar5 + -8);
    unaff_x20 = *(ulong **)((long)ppuVar5 + -0x20);
    param_1 = *(ulong **)((long)ppuVar5 + -0x18);
    param_3 = *(ulong **)((long)ppuVar5 + -0x30);
    unaff_x21 = *(ulong **)((long)ppuVar5 + -0x28);
  } while( true );
}



/* Entry: 10927bf2c; end: 10927c0af;  */

void FUN_10927bf2c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar10;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar11;
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    uVar10 = *(undefined8 *)(param_1 + 8);
    *param_1 = *param_2;
    uVar11 = *(undefined8 *)(param_2 + 4);
    uVar9 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar11;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined1 *)((long)param_2 + 0x1f) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = uVar2;
    puVar8 = param_2;
    puVar7 = param_3;
    if (*(char *)((long)param_2 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_2 + 2);
      __ZdlPv();
      puVar7 = param_3;
    }
    uVar9 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_2 + 2) = uVar1;
    *(undefined8 *)(param_2 + 4) = uVar9;
    *(undefined8 *)((long)param_2 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_2 + 0x1f) = bVar3;
    *(undefined8 *)(param_2 + 8) = uVar10;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar10;
    *(ulong *)((long)register0x00000008 + -0x78) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x70) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x68) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x60) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) = 0x10927bffc;
    puVar5 = puVar8 + 2;
    param_3 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_10927bf2c(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x00010927c084:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_10927bf2c(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x00010927c084;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x60);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x58);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x78);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x50);
    param_2 = puVar7;
  } while( true );
}



/* Entry: 10927c0b0; end: 10927c1c3;  */

/* WARNING: Possible PIC construction at 0x00010927c0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c12c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010927c074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010927c04c) */
/* WARNING: Removing unreachable block (ram,0x00010927c05c) */
/* WARNING: Removing unreachable block (ram,0x00010927c184) */
/* WARNING: Removing unreachable block (ram,0x00010927c1a8) */
/* WARNING: Removing unreachable block (ram,0x00010927c168) */
/* WARNING: Removing unreachable block (ram,0x00010927c178) */
/* WARNING: Removing unreachable block (ram,0x00010927c14c) */
/* WARNING: Removing unreachable block (ram,0x00010927c15c) */
/* WARNING: Removing unreachable block (ram,0x00010927c114) */
/* WARNING: Removing unreachable block (ram,0x00010927c124) */
/* WARNING: Removing unreachable block (ram,0x00010927c0f8) */
/* WARNING: Removing unreachable block (ram,0x00010927c108) */
/* WARNING: Removing unreachable block (ram,0x00010927c0dc) */
/* WARNING: Removing unreachable block (ram,0x00010927c130) */
/* WARNING: Removing unreachable block (ram,0x00010927c194) */
/* WARNING: Removing unreachable block (ram,0x00010927c140) */
/* WARNING: Removing unreachable block (ram,0x00010927c0ec) */
/* WARNING: Removing unreachable block (ram,0x00010927c078) */
/* WARNING: Removing unreachable block (ram,0x00010927c098) */

void FUN_10927c0b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar3 = &stack0xffffffffffffffc0;
  uVar10 = 0x10927c0dc;
  puVar6 = param_2;
  puVar5 = param_1;
  puVar8 = param_3;
  while( true ) {
    puVar9 = (undefined1 *)((long)register0x00000008 + -0x10);
    register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
    *(undefined8 *)(puVar3 + -0x30) = param_4;
    *(undefined4 **)(puVar3 + -0x28) = puVar8;
    *(undefined4 **)(puVar3 + -0x20) = puVar5;
    *(undefined4 **)(puVar3 + -0x18) = puVar6;
    *(undefined1 **)(puVar3 + -0x10) = puVar9;
    *(undefined8 *)(puVar3 + -8) = uVar10;
    puVar9 = puVar3 + -0x10;
    puVar5 = param_2 + 2;
    puVar7 = param_3;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    puVar6 = param_3;
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar8) {
        return;
      }
      uVar10 = 0x10927c04c;
      register0x00000008 = (BADSPACEBASE *)(puVar3 + -0x30);
      puVar4 = param_2;
    }
    else {
      puVar4 = param_1;
      if ((char)puVar8 < '\0') {
        puVar9 = *(undefined1 **)(puVar3 + -0x10);
        uVar10 = *(undefined8 *)(puVar3 + -8);
        param_2 = *(undefined4 **)(puVar3 + -0x18);
        puVar5 = *(undefined4 **)(puVar3 + -0x30);
        register0x00000008 = (BADSPACEBASE *)puVar3;
        param_3 = *(undefined4 **)(puVar3 + -0x20);
        param_1 = *(undefined4 **)(puVar3 + -0x28);
      }
      else {
        uVar10 = 0x10927c078;
        puVar6 = param_2;
      }
    }
    puVar3 = (undefined1 *)((long)register0x00000008 + -0x50);
    *(undefined4 **)((long)register0x00000008 + -0x30) = puVar5;
    *(undefined4 **)((long)register0x00000008 + -0x28) = param_1;
    *(undefined4 **)((long)register0x00000008 + -0x20) = param_3;
    *(undefined4 **)((long)register0x00000008 + -0x18) = param_2;
    *(undefined1 **)((long)register0x00000008 + -0x10) = puVar9;
    *(undefined8 *)((long)register0x00000008 + -8) = uVar10;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar1 = *puVar4;
    puVar5 = *(undefined4 **)(puVar4 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(puVar4 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)puVar4 + 0x17);
    bVar2 = *(byte *)((long)puVar4 + 0x1f);
    puVar8 = (undefined4 *)(ulong)bVar2;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    param_4 = *(undefined8 *)(puVar4 + 8);
    *puVar4 = *puVar6;
    uVar11 = *(undefined8 *)(puVar6 + 4);
    uVar10 = *(undefined8 *)(puVar6 + 2);
    *(undefined8 *)(puVar4 + 6) = *(undefined8 *)(puVar6 + 6);
    *(undefined8 *)(puVar4 + 4) = uVar11;
    *(undefined8 *)(puVar4 + 2) = uVar10;
    *(undefined1 *)((long)puVar6 + 0x1f) = 0;
    *(undefined1 *)(puVar6 + 2) = 0;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar6 + 8);
    *puVar6 = uVar1;
    param_1 = puVar4;
    param_2 = puVar6;
    param_3 = puVar7;
    if (*(char *)((long)puVar6 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(puVar6 + 2);
      __ZdlPv();
      param_3 = puVar7;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined4 **)(puVar6 + 2) = puVar5;
    *(undefined8 *)(puVar6 + 4) = uVar10;
    *(undefined8 *)((long)puVar6 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)puVar6 + 0x1f) = bVar2;
    *(undefined8 *)(puVar6 + 8) = param_4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38))
    break;
    uVar10 = 0x10927bffc;
    ___stack_chk_fail();
  }
  return;
}



/* Entry: 10927c1c4; end: 10927c293;  */

undefined4 * FUN_10927c1c4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined4 *puVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined7 uStack_48;
  undefined1 uStack_41;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uStack_48 = (undefined7)*(undefined8 *)(param_1 + 4);
  uVar12 = *(undefined8 *)((long)param_1 + 0x17);
  uStack_41 = (undefined1)uVar12;
  uVar3 = *(undefined1 *)((long)param_1 + 0x1f);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar13 = *(undefined8 *)(param_1 + 8);
  *param_1 = *param_2;
  uVar17 = *(undefined8 *)(param_2 + 4);
  uVar16 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar17;
  *(undefined8 *)(param_1 + 2) = uVar16;
  *(undefined1 *)((long)param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *param_2 = uVar2;
  puVar8 = param_2;
  if (*(char *)((long)param_2 + 0x1f) < '\0') {
    param_1 = *(undefined4 **)(param_2 + 2);
    __ZdlPv();
  }
  *(undefined8 *)(param_2 + 2) = uVar1;
  *(ulong *)(param_2 + 4) = CONCAT17(uStack_41,uStack_48);
  *(undefined8 *)((long)param_2 + 0x17) = uVar12;
  *(undefined1 *)((long)param_2 + 0x1f) = uVar3;
  *(undefined8 *)(param_2 + 8) = uVar13;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar10 = ((long)puVar8 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar10 < 3) {
    if (uVar10 < 2) {
      return (undefined4 *)0x1;
    }
    if (uVar10 != 2) {
LAB_10927c348:
      func_0x00010927bffc(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == puVar8) {
        return (undefined4 *)0x1;
      }
      lVar9 = 0;
      iVar15 = 0;
      puVar7 = param_1 + 0x14;
      puVar14 = param_1 + 0x1e;
      do {
        puVar5 = puVar14 + 2;
        func_0x000107c2abd4(puVar5,puVar7 + 2);
        if (((uint)puVar5 >> 7 & 1) != 0) {
          uVar2 = *puVar14;
          uStack_b8 = *(undefined8 *)(puVar14 + 4);
          uStack_c0 = *(ulong *)(puVar14 + 2);
          uStack_b0 = *(ulong *)(puVar14 + 6);
          uStack_a8 = *(undefined8 *)(puVar14 + 8);
          *(undefined8 *)(puVar14 + 2) = 0;
          *(undefined8 *)(puVar14 + 4) = 0;
          *(undefined8 *)(puVar14 + 6) = 0;
          lVar4 = lVar9;
          do {
            lVar11 = lVar4;
            *(undefined4 *)((long)param_1 + lVar11 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar11 + 0x50);
            if (*(char *)((long)param_1 + lVar11 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar11 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x60);
            *(undefined8 *)((long)param_1 + lVar11 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x58);
            *(undefined1 *)((long)param_1 + lVar11 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar11 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar11 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x68);
            *(undefined8 *)((long)param_1 + lVar11 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x70);
            puVar7 = param_1;
            if (lVar11 == -0x50) goto LAB_10927c414;
            puVar6 = &uStack_c0;
            func_0x000107c2abd4(puVar6,(long)param_1 + lVar11 + 0x30);
            lVar4 = lVar11 + -0x28;
          } while (((uint)puVar6 >> 7 & 1) != 0);
          puVar7 = (undefined4 *)((long)param_1 + lVar11 + 0x50);
LAB_10927c414:
          *puVar7 = uVar2;
          if (*(char *)((long)puVar7 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar11 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar11 + 0x60) = uStack_b8;
          *(ulong *)((long)param_1 + lVar11 + 0x58) = uStack_c0;
          *(ulong *)((long)param_1 + lVar11 + 0x68) = uStack_b0;
          uStack_b0 = uStack_b0 & 0xffffffffffffff;
          uStack_c0 = uStack_c0 & 0xffffffffffffff00;
          *(undefined8 *)(puVar7 + 8) = uStack_a8;
          iVar15 = iVar15 + 1;
          if (iVar15 == 8) {
            return (undefined4 *)(ulong)(puVar14 + 10 == puVar8);
          }
        }
        puVar5 = puVar14 + 10;
        lVar9 = lVar9 + 0x28;
        puVar7 = puVar14;
        puVar14 = puVar5;
        if (puVar5 == puVar8) {
          return (undefined4 *)0x1;
        }
      } while( true );
    }
    puVar7 = puVar8 + -8;
    func_0x000107c2abd4(puVar7,param_1 + 2);
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar8 = puVar8 + -10;
  }
  else {
    if (uVar10 == 3) {
      func_0x00010927bffc(param_1,param_1 + 10,puVar8 + -10);
      return (undefined4 *)0x1;
    }
    if (uVar10 != 4) {
      if (uVar10 == 5) {
        FUN_10927c0b0(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,puVar8 + -10);
        return (undefined4 *)0x1;
      }
      goto LAB_10927c348;
    }
    func_0x00010927bffc(param_1,param_1 + 10,param_1 + 0x14);
    puVar7 = puVar8 + -8;
    func_0x000107c2abd4(puVar7,param_1 + 0x16);
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_10927bf2c(param_1 + 0x14,puVar8 + -10);
    puVar8 = param_1 + 0x16;
    func_0x000107c2abd4(puVar8,param_1 + 0xc);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    FUN_10927bf2c(param_1 + 10,param_1 + 0x14);
    puVar8 = param_1 + 0xc;
    func_0x000107c2abd4(puVar8,param_1 + 2);
    if (((uint)puVar8 >> 7 & 1) == 0) {
      return (undefined4 *)0x1;
    }
    puVar8 = param_1 + 10;
  }
  FUN_10927bf2c(param_1,puVar8);
  return (undefined4 *)0x1;
}



/* Entry: 10927c294; end: 10927c503;  */

bool FUN_10927c294(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  ulong uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_10927c348:
      func_0x00010927bffc(param_1,param_1 + 10,param_1 + 0x14);
      if (param_1 + 0x1e == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x14;
      puVar8 = param_1 + 0x1e;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_68 = *(undefined8 *)(puVar8 + 4);
          uStack_70 = *(ulong *)(puVar8 + 2);
          uStack_60 = *(ulong *)(puVar8 + 6);
          uStack_58 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 0;
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x78) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x50);
            if (*(char *)((long)param_1 + lVar7 + 0x97) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x80));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0x88) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x60);
            *(undefined8 *)((long)param_1 + lVar7 + 0x80) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x58);
            *(undefined1 *)((long)param_1 + lVar7 + 0x6f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x58) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            puVar5 = param_1;
            if (lVar7 == -0x50) goto LAB_10927c414;
            puVar4 = &uStack_70;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x30);
            lVar2 = lVar7 + -0x28;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x50);
LAB_10927c414:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x58));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x60) = uStack_68;
          *(ulong *)((long)param_1 + lVar7 + 0x58) = uStack_70;
          *(ulong *)((long)param_1 + lVar7 + 0x68) = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffffff;
          uStack_70 = uStack_70 & 0xffffffffffffff00;
          *(undefined8 *)(puVar5 + 8) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 10 == param_2;
          }
        }
        puVar3 = puVar8 + 10;
        lVar9 = lVar9 + 0x28;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -10;
  }
  else {
    if (uVar6 == 3) {
      func_0x00010927bffc(param_1,param_1 + 10,param_2 + -10);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_10927c0b0(param_1,param_1 + 10,param_1 + 0x14,param_1 + 0x1e,param_2 + -10);
        return true;
      }
      goto LAB_10927c348;
    }
    func_0x00010927bffc(param_1,param_1 + 10,param_1 + 0x14);
    puVar5 = param_2 + -8;
    func_0x000107c2abd4(puVar5,param_1 + 0x16);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927bf2c(param_1 + 0x14,param_2 + -10);
    puVar5 = param_1 + 0x16;
    func_0x000107c2abd4(puVar5,param_1 + 0xc);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927bf2c(param_1 + 10,param_1 + 0x14);
    puVar5 = param_1 + 0xc;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 10;
  }
  FUN_10927bf2c(param_1,param_2);
  return true;
}



/* Entry: 10927c504; end: 10927c57f;  */

long FUN_10927c504(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_24;
  
  iVar1 = **(int **)(param_1 + 8);
  _glIsProgram();
  if (iVar1 == 1) {
    iStack_24 = 0;
    _glGetProgramiv(**(undefined4 **)(param_1 + 8),0x8b80,&iStack_24);
    if (iStack_24 != 0) {
      return param_1;
    }
    uVar2 = **(undefined4 **)(param_1 + 8);
  }
  else {
    if (**(int **)(param_1 + 8) != 0) {
      return param_1;
    }
    uVar2 = 0;
  }
  _glUseProgram(uVar2);
  return param_1;
}



/* Entry: 10927c580; end: 10927d213;  */

/* WARNING: Removing unreachable block (ram,0x00010927c82c) */
/* WARNING: Removing unreachable block (ram,0x00010927ca0c) */
/* WARNING: Removing unreachable block (ram,0x00010927cf38) */
/* WARNING: Removing unreachable block (ram,0x00010927ca44) */
/* WARNING: Removing unreachable block (ram,0x00010927c868) */

void FUN_10927c580(ulong *param_1,ulong *param_2,ulong *param_3,ulong param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong **ppuVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *unaff_x21;
  ulong *puVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  ulong uVar22;
  code *pcStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  ulong *puStack_c0;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined4 auStack_a8 [2];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined4 uStack_80;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined7 uStack_70;
  long lStack_68;
  
  puVar21 = &stack0xfffffffffffffff0;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_1;
  puVar17 = param_3;
  puVar10 = param_2;
  do {
    puStack_c8 = puVar10 + -6;
    puStack_d0 = puVar10 + -0xc;
    puStack_d8 = puVar10 + -0x12;
    puStack_e0 = puVar10 + -5;
    puVar12 = puVar10;
    puVar11 = puVar8;
    puStack_c0 = puVar10;
LAB_10927c5e4:
    puVar8 = puVar11;
    uVar18 = (long)puVar12 - (long)puVar8;
    uVar20 = ((long)uVar18 >> 4) * -0x5555555555555555;
    if (uVar20 - 2 == 0 || (long)uVar20 < 2) {
      if (uVar20 < 2) goto LAB_10927d1d8;
      if (uVar20 == 2) {
        param_2 = puVar8 + 1;
        param_1 = puStack_e0;
        func_0x000107c2abd4();
        puVar10 = puStack_c8;
        if (((uint)param_1 >> 7 & 1) != 0) {
LAB_10927ca90:
          param_2 = puVar10;
          param_1 = puVar8;
          FUN_10927ab0c();
        }
        goto LAB_10927d1d8;
      }
    }
    else {
      if (uVar20 == 3) {
        param_2 = puVar8 + 6;
        param_1 = puVar8;
        param_3 = puStack_c8;
        FUN_10927d214();
        goto LAB_10927d1d8;
      }
      if (uVar20 == 4) {
        param_3 = puVar8 + 0xc;
        FUN_10927d214(puVar8,puVar8 + 6);
        param_2 = puVar8 + 0xd;
        param_1 = puStack_e0;
        func_0x000107c2abd4();
        if (((uint)param_1 >> 7 & 1) != 0) {
          FUN_10927ab0c(puVar8 + 0xc,puStack_c8);
          param_1 = puVar8 + 0xd;
          param_2 = puVar8 + 7;
          func_0x000107c2abd4();
          if (((uint)param_1 >> 7 & 1) != 0) {
            FUN_10927ab0c(puVar8 + 6,puVar8 + 0xc);
            param_1 = puVar8 + 7;
            param_2 = puVar8 + 1;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              puVar10 = puVar8 + 6;
              goto LAB_10927ca90;
            }
          }
        }
        goto LAB_10927d1d8;
      }
      if (uVar20 == 5) {
        param_2 = puVar8 + 6;
        param_3 = puVar8 + 0xc;
        param_1 = puVar8;
        FUN_10927d2c8();
        goto LAB_10927d1d8;
      }
    }
    if ((long)uVar18 < 0x480) {
      if ((param_4 & 1) == 0) {
        if ((puVar8 != puVar12) && (puVar8 + 6 != puVar12)) {
          unaff_x20 = (ulong *)auStack_a8;
          unaff_x21 = puVar8 + -5;
          puVar10 = puVar8 + 6;
          puVar17 = puVar8;
          do {
            puVar8 = puVar10;
            param_1 = puVar17 + 7;
            param_2 = puVar17 + 1;
            func_0x000107c2abd4();
            if (((uint)param_1 >> 7 & 1) != 0) {
              auStack_a8[0] = (undefined4)*puVar8;
              uStack_98 = puVar17[8];
              uStack_a0 = puVar17[7];
              puVar17[7] = 0;
              puVar17[8] = 0;
              uStack_90 = puVar17[9];
              uStack_88 = puVar17[10];
              puVar17[9] = 0;
              uStack_80 = (undefined4)puVar17[0xb];
              puVar10 = unaff_x21;
              do {
                puVar17 = puVar10;
                *(int *)(puVar17 + 0xb) = (int)puVar17[5];
                if (*(char *)((long)puVar17 + 0x77) < '\0') {
                  __ZdlPv(puVar17[0xc]);
                }
                puVar17[0xd] = puVar17[7];
                puVar17[0xc] = puVar17[6];
                *(undefined1 *)((long)puVar17 + 0x47) = 0;
                *(undefined1 *)(puVar17 + 6) = 0;
                puVar17[0xe] = puVar17[8];
                puVar17[0xf] = puVar17[9];
                *(int *)(puVar17 + 0x10) = (int)puVar17[10];
                param_1 = &uStack_a0;
                param_2 = puVar17;
                func_0x000107c2abd4();
                puVar10 = puVar17 + -6;
              } while (((uint)param_1 >> 7 & 1) != 0);
              *(undefined4 *)(puVar17 + 5) = auStack_a8[0];
              if (*(char *)((long)puVar17 + 0x47) < '\0') {
                param_1 = (ulong *)puVar17[6];
                __ZdlPv();
              }
              puVar17[8] = uStack_90;
              puVar17[7] = uStack_98;
              puVar17[6] = uStack_a0;
              *(undefined4 *)(puVar17 + 10) = uStack_80;
              puVar17[9] = uStack_88;
            }
            unaff_x21 = unaff_x21 + 6;
            puVar10 = puVar8 + 6;
            puVar17 = puVar8;
          } while (puVar8 + 6 != puVar12);
        }
        goto LAB_10927d1d8;
      }
      if ((puVar8 == puVar12) || (puVar8 + 6 == puVar12)) goto LAB_10927d1d8;
      unaff_x20 = (ulong *)0x0;
      unaff_x21 = (ulong *)auStack_a8;
      puVar10 = puVar8 + 6;
      puVar11 = puVar8;
      break;
    }
    if (puVar17 == (ulong *)0x0) {
      if (puVar8 == puVar12) goto LAB_10927d1d8;
      uVar14 = uVar20 - 2 >> 1;
      puStack_c8 = (ulong *)uVar14;
      goto LAB_10927cc48;
    }
    puVar10 = puVar8 + (uVar20 >> 1) * 6;
    if (uVar18 < 0x1801) {
      param_3 = puStack_c8;
      FUN_10927d214(puVar10,puVar8);
    }
    else {
      FUN_10927d214(puVar8,puVar10,puStack_c8);
      FUN_10927d214(puVar8 + 6,puVar10 + -6,puStack_d0);
      FUN_10927d214(puVar8 + 0xc,puVar10 + 6,puStack_d8);
      param_3 = puVar10 + 6;
      FUN_10927d214(puVar10 + -6,puVar10);
      FUN_10927adc8(puVar8,puVar10);
    }
    puVar17 = (ulong *)((long)puVar17 - 1);
    if ((param_4 & 1) == 0) {
      puVar10 = puVar8 + -5;
      func_0x000107c2abd4(puVar10,puVar8 + 1);
      if (((uint)puVar10 >> 7 & 1) != 0) goto LAB_10927c6cc;
      auStack_a8[0] = (undefined4)*puVar8;
      uStack_90 = puVar8[3];
      uStack_98 = puVar8[2];
      uStack_a0 = puVar8[1];
      puVar8[2] = 0;
      puVar8[3] = 0;
      puVar8[1] = 0;
      uStack_88 = puVar8[4];
      uStack_80 = (undefined4)puVar8[5];
      puVar9 = &uStack_a0;
      puVar10 = puStack_e0;
      func_0x000107c2abd4();
      puVar7 = puVar8;
      if (((uint)puVar9 >> 7 & 1) == 0) {
        puVar7 = puVar8 + 7;
        do {
          puVar11 = puVar7 + -1;
          if (puVar12 <= puVar11) break;
          puVar9 = &uStack_a0;
          puVar10 = puVar7;
          func_0x000107c2abd4();
          puVar7 = puVar7 + 6;
        } while (((uint)puVar9 >> 7 & 1) == 0);
      }
      else {
        do {
          puVar11 = puVar7 + 6;
          puVar9 = &uStack_a0;
          puVar10 = puVar7 + 7;
          func_0x000107c2abd4();
          puVar7 = puVar11;
        } while (((uint)puVar9 >> 7 & 1) == 0);
      }
      puVar7 = puVar12;
      puVar19 = puVar12;
      if (puVar11 < puVar12) {
        do {
          puVar19 = puVar7 + -6;
          puVar10 = puVar7 + -5;
          puVar9 = &uStack_a0;
          func_0x000107c2abd4();
          puVar7 = puVar19;
        } while (((uint)puVar9 >> 7 & 1) != 0);
      }
      while (puVar11 < puVar19) {
        FUN_10927ab0c(puVar11,puVar19);
        puVar10 = puVar11;
        do {
          puVar11 = puVar10 + 6;
          puVar9 = &uStack_a0;
          func_0x000107c2abd4(puVar9,puVar10 + 7);
          puVar10 = puVar11;
        } while (((uint)puVar9 >> 7 & 1) == 0);
        do {
          puVar10 = puVar19 + -5;
          puVar19 = puVar19 + -6;
          puVar9 = &uStack_a0;
          func_0x000107c2abd4();
        } while (((uint)puVar9 >> 7 & 1) != 0);
      }
      if (puVar11 + -6 != puVar8) {
        *(int *)puVar8 = (int)puVar11[-6];
        if (*(char *)((long)puVar8 + 0x1f) < '\0') {
          puVar9 = (ulong *)puVar8[1];
          __ZdlPv();
        }
        uVar20 = puVar11[-4];
        uVar18 = puVar11[-5];
        puVar8[3] = puVar11[-3];
        puVar8[2] = uVar20;
        puVar8[1] = uVar18;
        *(undefined1 *)((long)puVar11 + -0x11) = 0;
        *(undefined1 *)(puVar11 + -5) = 0;
        uVar18 = puVar11[-2];
        *(int *)(puVar8 + 5) = (int)puVar11[-1];
        puVar8[4] = uVar18;
      }
      puVar8 = puVar9;
      *(undefined4 *)(puVar11 + -6) = auStack_a8[0];
      puVar11[-3] = uStack_90;
      puVar11[-4] = uStack_98;
      puVar11[-5] = uStack_a0;
      uStack_90 = uStack_90 & 0xffffffffffffff;
      uStack_a0 = uStack_a0 & 0xffffffffffffff00;
      *(undefined4 *)(puVar11 + -1) = uStack_80;
      puVar11[-2] = uStack_88;
      goto LAB_10927c8b0;
    }
LAB_10927c6cc:
    lVar15 = 0;
    auStack_a8[0] = (undefined4)*puVar8;
    uStack_90 = puVar8[3];
    uStack_98 = puVar8[2];
    uStack_a0 = puVar8[1];
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[1] = 0;
    uStack_88 = puVar8[4];
    uStack_80 = (undefined4)puVar8[5];
    do {
      lVar6 = (long)puVar8 + lVar15 + 0x38;
      func_0x000107c2abd4(lVar6,&uStack_a0);
      lVar15 = lVar15 + 0x30;
    } while (((uint)lVar6 >> 7 & 1) != 0);
    puVar9 = (ulong *)((long)puVar8 + lVar15);
    puVar10 = puStack_c0;
    if (lVar15 == 0x30) {
      do {
        unaff_x21 = puVar10;
        if (puVar10 <= puVar9) break;
        unaff_x21 = puVar10 + -6;
        puVar11 = puVar10 + -5;
        func_0x000107c2abd4(puVar11,&uStack_a0);
        puVar10 = unaff_x21;
      } while (((uint)puVar11 >> 7 & 1) == 0);
    }
    else {
      do {
        unaff_x21 = puVar10 + -6;
        puVar11 = puVar10 + -5;
        func_0x000107c2abd4(puVar11,&uStack_a0);
        puVar10 = unaff_x21;
      } while (((uint)puVar11 >> 7 & 1) == 0);
    }
    puVar10 = puVar9;
    puVar11 = puVar9;
    puVar12 = unaff_x21;
    if (puVar9 < unaff_x21) {
      do {
        FUN_10927ab0c(puVar10,puVar12);
        do {
          puVar11 = puVar10 + 6;
          puVar7 = puVar10 + 7;
          func_0x000107c2abd4(puVar7,&uStack_a0);
          puVar10 = puVar11;
        } while (((uint)puVar7 >> 7 & 1) != 0);
        do {
          puVar7 = puVar12 + -5;
          puVar12 = puVar12 + -6;
          func_0x000107c2abd4(puVar7,&uStack_a0);
        } while (((uint)puVar7 >> 7 & 1) == 0);
      } while (puVar11 < puVar12);
    }
    puVar10 = puVar11 + -6;
    if (puVar10 != puVar8) {
      *(int *)puVar8 = (int)*puVar10;
      if (*(char *)((long)puVar8 + 0x1f) < '\0') {
        __ZdlPv(puVar8[1]);
      }
      uVar20 = puVar11[-4];
      uVar18 = puVar11[-5];
      puVar8[3] = puVar11[-3];
      puVar8[2] = uVar20;
      puVar8[1] = uVar18;
      *(undefined1 *)((long)puVar11 - 0x11) = 0;
      *(undefined1 *)(puVar11 + -5) = 0;
      uVar18 = puVar11[-2];
      *(int *)(puVar8 + 5) = (int)puVar11[-1];
      puVar8[4] = uVar18;
    }
    puVar12 = puStack_c0;
    *(undefined4 *)(puVar11 + -6) = auStack_a8[0];
    unaff_x20 = puVar11 + -5;
    puVar11[-3] = uStack_90;
    puVar11[-4] = uStack_98;
    *unaff_x20 = uStack_a0;
    uStack_90 = uStack_90 & 0xffffffffffffff;
    uStack_a0 = uStack_a0 & 0xffffffffffffff00;
    *(undefined4 *)(puVar11 + -1) = uStack_80;
    puVar11[-2] = uStack_88;
    if (puVar9 < unaff_x21) goto LAB_10927c89c;
    puVar9 = puVar8;
    FUN_10927d3dc(puVar8,puVar10);
    param_1 = puVar11;
    param_2 = puVar12;
    FUN_10927d3dc();
    if ((int)param_1 == 0) goto code_r0x00010927c898;
    if (((ulong)puVar9 & 1) != 0) goto LAB_10927d1d8;
  } while( true );
  do {
    puVar17 = puVar10;
    param_1 = puVar11 + 7;
    param_2 = puVar11 + 1;
    func_0x000107c2abd4();
    if (((uint)param_1 >> 7 & 1) != 0) {
      auStack_a8[0] = (undefined4)*puVar17;
      uStack_98 = puVar11[8];
      uStack_a0 = puVar11[7];
      puVar11[7] = 0;
      puVar11[8] = 0;
      uStack_90 = puVar11[9];
      uStack_88 = puVar11[10];
      puVar11[9] = 0;
      uStack_80 = (undefined4)puVar11[0xb];
      puVar10 = unaff_x20;
      do {
        puVar11 = puVar10;
        puVar1 = (undefined4 *)((long)puVar8 + (long)puVar11);
        puVar1[0xc] = *puVar1;
        if (*(char *)((long)puVar1 + 0x4f) < '\0') {
          param_1 = *(ulong **)(puVar1 + 0xe);
          __ZdlPv();
        }
        *(undefined8 *)(puVar1 + 0x10) = *(undefined8 *)(puVar1 + 4);
        *(undefined8 *)(puVar1 + 0xe) = *(undefined8 *)(puVar1 + 2);
        *(undefined1 *)((long)puVar1 + 0x1f) = 0;
        *(undefined1 *)(puVar1 + 2) = 0;
        *(undefined8 *)(puVar1 + 0x12) = *(undefined8 *)(puVar1 + 6);
        *(undefined8 *)(puVar1 + 0x14) = *(undefined8 *)(puVar1 + 8);
        puVar1[0x16] = puVar1[10];
        puVar10 = puVar8;
        if (puVar11 == (ulong *)0x0) goto LAB_10927cbe0;
        param_2 = (ulong *)(((long)puVar8 + (long)puVar11) - 0x28);
        param_1 = &uStack_a0;
        func_0x000107c2abd4();
        puVar10 = puVar11 + -6;
      } while (((uint)param_1 >> 7 & 1) != 0);
      puVar10 = (ulong *)((long)puVar8 + (long)(puVar11 + -6) + 0x30);
LAB_10927cbe0:
      *(undefined4 *)puVar10 = auStack_a8[0];
      lVar15 = (long)puVar8 + (long)puVar11;
      if (*(char *)((long)puVar10 + 0x1f) < '\0') {
        param_1 = *(ulong **)(lVar15 + 8);
        __ZdlPv();
      }
      *(ulong *)(lVar15 + 0x18) = uStack_90;
      *(ulong *)(lVar15 + 0x10) = uStack_98;
      *(ulong *)(lVar15 + 8) = uStack_a0;
      *(undefined4 *)(lVar15 + 0x28) = uStack_80;
      *(ulong *)(lVar15 + 0x20) = uStack_88;
    }
    unaff_x20 = unaff_x20 + 6;
    puVar10 = puVar17 + 6;
    puVar11 = puVar17;
  } while (puVar17 + 6 != puVar12);
  goto LAB_10927d1d8;
code_r0x00010927c898:
  if (((ulong)puVar9 & 1) == 0) {
LAB_10927c89c:
    param_3 = puVar17;
    FUN_10927c580();
LAB_10927c8b0:
    param_4 = 0;
    param_1 = puVar8;
    param_2 = puVar10;
  }
  goto LAB_10927c5e4;
LAB_10927cc48:
  do {
    puVar10 = puStack_c8;
    if ((long)puStack_c8 <= (long)uVar14) {
      uVar22 = (long)puStack_c8 << 1 | 1;
      puVar17 = puVar8 + uVar22 * 6;
      uVar13 = (long)puStack_c8 * 2 + 2;
      uVar16 = uVar22;
      if ((long)uVar13 < (long)uVar20) {
        puVar10 = puVar17 + 1;
        func_0x000107c2abd4(puVar10,puVar17 + 7);
        bVar4 = -1 < (char)puVar10;
        lVar15 = 0x30;
        if (bVar4) {
          lVar15 = 0;
        }
        puVar17 = (ulong *)((long)puVar17 + lVar15);
        uVar16 = uVar13;
        if (bVar4) {
          uVar16 = uVar22;
        }
      }
      puVar10 = puStack_c8;
      puVar11 = puVar8 + (long)puStack_c8 * 6;
      param_1 = puVar17 + 1;
      param_2 = puVar11 + 1;
      func_0x000107c2abd4();
      if (((uint)param_1 >> 7 & 1) == 0) {
        auStack_a8[0] = (undefined4)*puVar11;
        uStack_98 = puVar11[2];
        uStack_a0 = puVar11[1];
        uStack_90 = puVar11[3];
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[1] = 0;
        uStack_88 = puVar11[4];
        uStack_80 = (undefined4)puVar11[5];
        do {
          puVar10 = puVar17;
          *(int *)puVar11 = (int)*puVar10;
          if (*(char *)((long)puVar11 + 0x1f) < '\0') {
            param_1 = (ulong *)puVar11[1];
            __ZdlPv();
          }
          uVar22 = puVar10[2];
          uVar13 = puVar10[1];
          puVar11[3] = puVar10[3];
          puVar11[2] = uVar22;
          puVar11[1] = uVar13;
          uVar13 = puVar10[4];
          *(undefined1 *)((long)puVar10 + 0x1f) = 0;
          *(undefined1 *)(puVar10 + 1) = 0;
          *(int *)(puVar11 + 5) = (int)puVar10[5];
          puVar11[4] = uVar13;
          if ((long)uVar14 < (long)uVar16) break;
          uVar22 = uVar16 << 1 | 1;
          puVar17 = puVar8 + uVar22 * 6;
          uVar13 = uVar16 * 2 + 2;
          uVar16 = uVar22;
          if ((long)uVar13 < (long)uVar20) {
            puVar11 = puVar17 + 1;
            func_0x000107c2abd4(puVar11,puVar17 + 7);
            bVar4 = -1 < (char)puVar11;
            lVar15 = 0x30;
            if (bVar4) {
              lVar15 = 0;
            }
            puVar17 = (ulong *)((long)puVar17 + lVar15);
            uVar16 = uVar13;
            if (bVar4) {
              uVar16 = uVar22;
            }
          }
          param_1 = puVar17 + 1;
          param_2 = &uStack_a0;
          func_0x000107c2abd4();
          puVar11 = puVar10;
        } while (((uint)param_1 >> 7 & 1) == 0);
        *(undefined4 *)puVar10 = auStack_a8[0];
        if (*(char *)((long)puVar10 + 0x1f) < '\0') {
          param_1 = (ulong *)puVar10[1];
          __ZdlPv();
        }
        puVar10[3] = uStack_90;
        puVar10[2] = uStack_98;
        puVar10[1] = uStack_a0;
        *(undefined4 *)(puVar10 + 5) = uStack_80;
        puVar10[4] = uStack_88;
        puVar10 = puStack_c8;
      }
    }
    puStack_c8 = (ulong *)((long)puVar10 - 1);
  } while (puVar10 != (ulong *)0x0);
  puVar10 = puStack_c0;
  puVar11 = (ulong *)((uVar18 >> 4) * -0x5555555555555555);
  do {
    puStack_d0 = (ulong *)CONCAT44(puStack_d0._4_4_,(int)*puVar8);
    puStack_c8 = (ulong *)puVar8[1];
    uStack_70 = (undefined7)((ulong)*(undefined8 *)((long)puVar8 + 0x17) >> 8);
    uStack_78 = (undefined7)puVar8[2];
    uStack_71 = (undefined1)(puVar8[2] >> 0x38);
    puStack_c0 = (ulong *)CONCAT44(puStack_c0._4_4_,(uint)*(byte *)((long)puVar8 + 0x1f));
    puVar8[1] = 0;
    puVar8[2] = 0;
    uStack_b8 = puVar8[4];
    uStack_b0 = (undefined4)puVar8[5];
    puVar8[3] = 0;
    puVar17 = puVar8;
    uVar18 = 0;
    do {
      uVar14 = uVar18 << 1 | 1;
      uVar20 = uVar18 * 2 + 2;
      uVar13 = uVar14;
      puVar12 = puVar17 + uVar18 * 6 + 6;
      if ((long)uVar20 < (long)puVar11) {
        param_1 = puVar17 + uVar18 * 6 + 7;
        param_2 = puVar17 + uVar18 * 6 + 0xd;
        func_0x000107c2abd4();
        uVar13 = uVar20;
        puVar12 = puVar17 + uVar18 * 6 + 0xc;
        if (-1 < (char)param_1) {
          uVar13 = uVar14;
          puVar12 = puVar17 + uVar18 * 6 + 6;
        }
      }
      *(int *)puVar17 = (int)*puVar12;
      if (*(char *)((long)puVar17 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar17[1];
        __ZdlPv();
      }
      uVar20 = puVar12[2];
      uVar18 = puVar12[1];
      puVar17[3] = puVar12[3];
      puVar17[2] = uVar20;
      puVar17[1] = uVar18;
      puVar9 = puVar12 + 4;
      uVar18 = *puVar9;
      *(undefined1 *)((long)puVar12 + 0x1f) = 0;
      *(undefined1 *)(puVar12 + 1) = 0;
      *(int *)(puVar17 + 5) = (int)puVar12[5];
      puVar17[4] = uVar18;
      puVar17 = puVar12;
      uVar18 = uVar13;
    } while ((long)uVar13 <= (long)((long)puVar11 - 2U >> 1));
    unaff_x20 = puVar10 + -6;
    if (puVar12 == unaff_x20) {
      *(undefined4 *)puVar12 = puStack_d0._0_4_;
      if (*(char *)((long)puVar12 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar12[1];
        __ZdlPv();
      }
      puVar12[1] = (ulong)puStack_c8;
      puVar12[2] = CONCAT17(uStack_71,uStack_78);
      *(ulong *)((long)puVar12 + 0x17) = CONCAT71(uStack_70,uStack_71);
      *(char *)((long)puVar12 + 0x1f) = (char)puStack_c0;
      *puVar9 = uStack_b8;
      *(undefined4 *)(puVar12 + 5) = uStack_b0;
      unaff_x21 = puVar12;
    }
    else {
      *(int *)puVar12 = (int)*unaff_x20;
      if (*(char *)((long)puVar12 + 0x1f) < '\0') {
        param_1 = (ulong *)puVar12[1];
        __ZdlPv();
      }
      uVar20 = puVar10[-4];
      uVar18 = puVar10[-5];
      puVar12[3] = puVar10[-3];
      puVar12[2] = uVar20;
      puVar12[1] = uVar18;
      unaff_x21 = puVar10 + -2;
      uVar18 = *unaff_x21;
      *(undefined1 *)((long)puVar10 - 0x11) = 0;
      *(undefined1 *)(puVar10 + -5) = 0;
      *(int *)(puVar12 + 5) = (int)puVar10[-1];
      *puVar9 = uVar18;
      *(undefined4 *)(puVar10 + -6) = puStack_d0._0_4_;
      puVar10[-5] = (ulong)puStack_c8;
      *(ulong *)((long)puVar10 - 0x19) = CONCAT71(uStack_70,uStack_71);
      puVar10[-4] = CONCAT17(uStack_71,uStack_78);
      *(char *)((long)puVar10 - 0x11) = (char)puStack_c0;
      *(undefined4 *)(puVar10 + -1) = uStack_b0;
      *unaff_x21 = uStack_b8;
      uVar18 = (long)puVar12 + (0x30 - (long)puVar8);
      if (0x30 < (long)uVar18) {
        uVar18 = (uVar18 >> 4) * -0x5555555555555555 - 2 >> 1;
        param_1 = puVar8 + uVar18 * 6 + 1;
        param_2 = puVar12 + 1;
        func_0x000107c2abd4();
        if (((uint)param_1 >> 7 & 1) != 0) {
          auStack_a8[0] = (undefined4)*puVar12;
          uStack_90 = puVar12[3];
          uStack_98 = puVar12[2];
          uStack_a0 = puVar12[1];
          puVar12[2] = 0;
          puVar12[3] = 0;
          puVar12[1] = 0;
          uStack_88 = *puVar9;
          uStack_80 = (undefined4)puVar12[5];
          puVar10 = puVar8 + uVar18 * 6;
          do {
            unaff_x21 = puVar10;
            *(int *)puVar12 = (int)*unaff_x21;
            if (*(char *)((long)puVar12 + 0x1f) < '\0') {
              param_1 = (ulong *)puVar12[1];
              __ZdlPv();
            }
            uVar14 = unaff_x21[2];
            uVar20 = unaff_x21[1];
            puVar12[3] = unaff_x21[3];
            puVar12[2] = uVar14;
            puVar12[1] = uVar20;
            uVar20 = unaff_x21[4];
            *(undefined1 *)((long)unaff_x21 + 0x1f) = 0;
            *(undefined1 *)(unaff_x21 + 1) = 0;
            *(int *)(puVar12 + 5) = (int)unaff_x21[5];
            puVar12[4] = uVar20;
            if (uVar18 == 0) break;
            uVar18 = uVar18 - 1 >> 1;
            param_1 = puVar8 + uVar18 * 6 + 1;
            param_2 = &uStack_a0;
            func_0x000107c2abd4();
            puVar10 = puVar8 + uVar18 * 6;
            puVar12 = unaff_x21;
          } while (((uint)param_1 >> 7 & 1) != 0);
          *(undefined4 *)unaff_x21 = auStack_a8[0];
          if (*(char *)((long)unaff_x21 + 0x1f) < '\0') {
            param_1 = (ulong *)unaff_x21[1];
            __ZdlPv();
          }
          unaff_x21[3] = uStack_90;
          unaff_x21[2] = uStack_98;
          unaff_x21[1] = uStack_a0;
          *(undefined4 *)(unaff_x21 + 5) = uStack_80;
          unaff_x21[4] = uStack_88;
        }
      }
    }
    puVar17 = (ulong *)((long)puVar11 - 1);
    bVar4 = 2 < (long)puVar11;
    puVar10 = unaff_x20;
    puVar11 = puVar17;
  } while (bVar4);
LAB_10927d1d8:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_e8 = FUN_10927d214;
  puVar10 = param_2 + 1;
  puVar12 = param_3;
  func_0x000107c2abd4(puVar10,param_1 + 1);
  puVar11 = param_3 + 1;
  func_0x000107c2abd4(puVar11,param_2 + 1);
  if (((uint)puVar10 >> 7 & 1) != 0) {
    ppuVar3 = &puStack_e0;
    if (-1 < (char)puVar11) {
      FUN_10927ab0c(param_1,param_2);
      puVar10 = param_3 + 1;
      func_0x000107c2abd4(puVar10,param_2 + 1);
      ppuVar3 = &puStack_e0;
      param_1 = param_2;
      if (((uint)puVar10 >> 7 & 1) == 0) {
        return;
      }
    }
code_r0x00010927ab0c:
    do {
      *(ulong **)((long)ppuVar3 + -0x30) = puVar17;
      *(ulong **)((long)ppuVar3 + -0x28) = unaff_x21;
      *(ulong **)((long)ppuVar3 + -0x20) = unaff_x20;
      *(ulong **)((long)ppuVar3 + -0x18) = puVar8;
      *(undefined1 **)((long)ppuVar3 + -0x10) = puVar21;
      *(code **)((long)ppuVar3 + -8) = pcStack_e8;
      *(undefined8 *)((long)ppuVar3 + -0x38) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar20 = *param_1;
      uVar18 = param_1[1];
      *(ulong *)((long)ppuVar3 + -0x48) = param_1[2];
      *(undefined8 *)((long)ppuVar3 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
      bVar2 = *(byte *)((long)param_1 + 0x1f);
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
      *(ulong *)((long)ppuVar3 + -0x58) = param_1[4];
      *(int *)((long)ppuVar3 + -0x50) = (int)param_1[5];
      *(int *)param_1 = (int)*param_3;
      uVar13 = param_3[2];
      uVar14 = param_3[1];
      param_1[3] = param_3[3];
      param_1[2] = uVar13;
      param_1[1] = uVar14;
      *(undefined1 *)((long)param_3 + 0x1f) = 0;
      puVar8 = param_3 + 4;
      uVar14 = *puVar8;
      *(undefined1 *)(param_3 + 1) = 0;
      *(int *)(param_1 + 5) = (int)param_3[5];
      param_1[4] = uVar14;
      *(int *)param_3 = (int)uVar20;
      puVar17 = param_3;
      puVar10 = puVar12;
      if (*(char *)((long)param_3 + 0x1f) < '\0') {
        param_1 = (ulong *)param_3[1];
        __ZdlPv();
        puVar10 = puVar12;
      }
      uVar20 = *(ulong *)((long)ppuVar3 + -0x48);
      param_3[1] = uVar18;
      param_3[2] = uVar20;
      *(undefined8 *)((long)param_3 + 0x17) = *(undefined8 *)((long)ppuVar3 + -0x41);
      *(byte *)((long)param_3 + 0x1f) = bVar2;
      *puVar8 = *(ulong *)((long)ppuVar3 + -0x58);
      *(undefined4 *)(param_3 + 5) = *(undefined4 *)((long)ppuVar3 + -0x50);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)ppuVar3 + -0x38)) {
        return;
      }
      ___stack_chk_fail();
      *(ulong **)((long)ppuVar3 + -0x90) = puVar8;
      *(ulong *)((long)ppuVar3 + -0x88) = (ulong)bVar2;
      *(ulong *)((long)ppuVar3 + -0x80) = uVar18;
      *(ulong **)((long)ppuVar3 + -0x78) = param_3;
      *(undefined1 **)((long)ppuVar3 + -0x70) = (undefined1 *)((long)ppuVar3 + -0x10);
      *(undefined8 *)((long)ppuVar3 + -0x68) = 0x10927ac00;
      puVar8 = puVar17 + 1;
      puVar12 = puVar10;
      func_0x000107c2abd4(puVar8,param_1 + 1);
      puVar11 = puVar10 + 1;
      func_0x000107c2abd4(puVar11,puVar17 + 1);
      if (((uint)puVar8 >> 7 & 1) == 0) {
        if (-1 < (char)puVar11) {
          return;
        }
        FUN_10927ab0c(puVar17,puVar10);
        puVar10 = puVar17 + 1;
        func_0x000107c2abd4(puVar10,param_1 + 1);
        uVar5 = (uint)puVar10;
        puVar10 = puVar17;
joined_r0x00010927ac88:
        if ((uVar5 >> 7 & 1) == 0) {
          return;
        }
      }
      else if (-1 < (char)puVar11) {
        FUN_10927ab0c(param_1,puVar17);
        puVar8 = puVar10 + 1;
        func_0x000107c2abd4(puVar8,puVar17 + 1);
        uVar5 = (uint)puVar8;
        param_1 = puVar17;
        goto joined_r0x00010927ac88;
      }
      puVar21 = *(undefined1 **)((long)ppuVar3 + -0x70);
      pcStack_e8 = *(code **)((long)ppuVar3 + -0x68);
      unaff_x20 = *(ulong **)((long)ppuVar3 + -0x80);
      puVar8 = *(ulong **)((long)ppuVar3 + -0x78);
      puVar17 = *(ulong **)((long)ppuVar3 + -0x90);
      unaff_x21 = *(ulong **)((long)ppuVar3 + -0x88);
      ppuVar3 = (ulong **)((long)ppuVar3 + -0x60);
      param_3 = puVar10;
    } while( true );
  }
  if ((char)puVar11 < '\0') {
    FUN_10927ab0c(param_2,param_3);
    puVar10 = param_2 + 1;
    func_0x000107c2abd4(puVar10,param_1 + 1);
    ppuVar3 = &puStack_e0;
    param_3 = param_2;
    if (((uint)puVar10 >> 7 & 1) != 0) goto code_r0x00010927ab0c;
  }
  return;
}



/* Entry: 10927d214; end: 10927d2c7;  */

void FUN_10927d214(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar11;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar12;
  
  puVar7 = param_2 + 2;
  puVar9 = param_3;
  func_0x000107c2abd4(puVar7,param_1 + 2);
  puVar8 = param_3 + 2;
  func_0x000107c2abd4(puVar8,param_2 + 2);
  if (((uint)puVar7 >> 7 & 1) == 0) {
    if ((char)puVar8 < '\0') {
      FUN_10927ab0c(param_2,param_3);
      puVar7 = param_2 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      param_3 = param_2;
      if (((uint)puVar7 >> 7 & 1) != 0) goto code_r0x00010927ab0c;
    }
    return;
  }
  if (-1 < (char)puVar8) {
    FUN_10927ab0c(param_1,param_2);
    puVar7 = param_3 + 2;
    func_0x000107c2abd4(puVar7,param_2 + 2);
    param_1 = param_2;
    if (((uint)puVar7 >> 7 & 1) == 0) {
      return;
    }
  }
code_r0x00010927ab0c:
  do {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x38) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar2 = *param_1;
    uVar1 = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)((long)register0x00000008 + -0x41) = *(undefined8 *)((long)param_1 + 0x17);
    bVar3 = *(byte *)((long)param_1 + 0x1f);
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)((long)register0x00000008 + -0x50) = param_1[10];
    *param_1 = *param_3;
    uVar12 = *(undefined8 *)(param_3 + 4);
    uVar10 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_3 + 6);
    *(undefined8 *)(param_1 + 4) = uVar12;
    *(undefined8 *)(param_1 + 2) = uVar10;
    *(undefined1 *)((long)param_3 + 0x1f) = 0;
    puVar11 = (undefined8 *)(param_3 + 8);
    uVar10 = *puVar11;
    *(undefined1 *)(param_3 + 2) = 0;
    param_1[10] = param_3[10];
    *(undefined8 *)(param_1 + 8) = uVar10;
    *param_3 = uVar2;
    puVar8 = param_3;
    puVar7 = puVar9;
    if (*(char *)((long)param_3 + 0x1f) < '\0') {
      param_1 = *(undefined4 **)(param_3 + 2);
      __ZdlPv();
      puVar7 = puVar9;
    }
    uVar10 = *(undefined8 *)((long)register0x00000008 + -0x48);
    *(undefined8 *)(param_3 + 2) = uVar1;
    *(undefined8 *)(param_3 + 4) = uVar10;
    *(undefined8 *)((long)param_3 + 0x17) = *(undefined8 *)((long)register0x00000008 + -0x41);
    *(byte *)((long)param_3 + 0x1f) = bVar3;
    *puVar11 = *(undefined8 *)((long)register0x00000008 + -0x58);
    param_3[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x38)) {
      return;
    }
    ___stack_chk_fail();
    *(undefined8 **)((long)register0x00000008 + -0x90) = puVar11;
    *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
    *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
    *(undefined4 **)((long)register0x00000008 + -0x78) = param_3;
    *(undefined1 **)((long)register0x00000008 + -0x70) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10927ac00;
    puVar5 = puVar8 + 2;
    puVar9 = puVar7;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    puVar6 = puVar7 + 2;
    func_0x000107c2abd4(puVar6,puVar8 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      if (-1 < (char)puVar6) {
        return;
      }
      FUN_10927ab0c(puVar8,puVar7);
      puVar7 = puVar8 + 2;
      func_0x000107c2abd4(puVar7,param_1 + 2);
      uVar4 = (uint)puVar7;
      puVar7 = puVar8;
joined_r0x00010927ac88:
      if ((uVar4 >> 7 & 1) == 0) {
        return;
      }
    }
    else if (-1 < (char)puVar6) {
      FUN_10927ab0c(param_1,puVar8);
      puVar5 = puVar7 + 2;
      func_0x000107c2abd4(puVar5,puVar8 + 2);
      uVar4 = (uint)puVar5;
      param_1 = puVar8;
      goto joined_r0x00010927ac88;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
    param_3 = puVar7;
  } while( true );
}



/* Entry: 10927d2c8; end: 10927d3db;  */

void FUN_10927d2c8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,long param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 *puVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  
  puVar10 = param_3;
  FUN_10927d214();
  lVar7 = param_4 + 8;
  func_0x000107c2abd4(lVar7,param_3 + 2);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_10927ab0c(param_3,param_4);
    puVar8 = param_3 + 2;
    func_0x000107c2abd4(puVar8,param_2 + 2);
    if (((uint)puVar8 >> 7 & 1) != 0) {
      FUN_10927ab0c(param_2,param_3);
      puVar8 = param_2 + 2;
      func_0x000107c2abd4(puVar8,param_1 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_10927ab0c(param_1,param_2);
      }
    }
  }
  lVar7 = param_5 + 8;
  func_0x000107c2abd4(lVar7,param_4 + 8);
  if (((uint)lVar7 >> 7 & 1) != 0) {
    FUN_10927ab0c(param_4,param_5);
    lVar7 = param_4 + 8;
    func_0x000107c2abd4(lVar7,param_3 + 2);
    if (((uint)lVar7 >> 7 & 1) != 0) {
      FUN_10927ab0c(param_3,param_4);
      puVar8 = param_3 + 2;
      func_0x000107c2abd4(puVar8,param_2 + 2);
      if (((uint)puVar8 >> 7 & 1) != 0) {
        FUN_10927ab0c(param_2,param_3);
        puVar8 = param_2 + 2;
        func_0x000107c2abd4(puVar8,param_1 + 2);
        if (((uint)puVar8 >> 7 & 1) != 0) {
          do {
            *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
            *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
            *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
            *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
            *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
            *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
            *(undefined8 *)((long)register0x00000008 + -0x38) =
                 *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar2 = *param_1;
            uVar1 = *(undefined8 *)(param_1 + 2);
            *(undefined8 *)((long)register0x00000008 + -0x48) = *(undefined8 *)(param_1 + 4);
            *(undefined8 *)((long)register0x00000008 + -0x41) =
                 *(undefined8 *)((long)param_1 + 0x17);
            bVar3 = *(byte *)((long)param_1 + 0x1f);
            *(undefined8 *)(param_1 + 4) = 0;
            *(undefined8 *)(param_1 + 6) = 0;
            *(undefined8 *)(param_1 + 2) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x58) = *(undefined8 *)(param_1 + 8);
            *(undefined4 *)((long)register0x00000008 + -0x50) = param_1[10];
            *param_1 = *param_2;
            uVar13 = *(undefined8 *)(param_2 + 4);
            uVar11 = *(undefined8 *)(param_2 + 2);
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
            *(undefined8 *)(param_1 + 4) = uVar13;
            *(undefined8 *)(param_1 + 2) = uVar11;
            *(undefined1 *)((long)param_2 + 0x1f) = 0;
            puVar12 = (undefined8 *)(param_2 + 8);
            uVar11 = *puVar12;
            *(undefined1 *)(param_2 + 2) = 0;
            param_1[10] = param_2[10];
            *(undefined8 *)(param_1 + 8) = uVar11;
            *param_2 = uVar2;
            puVar9 = param_2;
            puVar8 = puVar10;
            if (*(char *)((long)param_2 + 0x1f) < '\0') {
              param_1 = *(undefined4 **)(param_2 + 2);
              __ZdlPv();
              puVar8 = puVar10;
            }
            uVar11 = *(undefined8 *)((long)register0x00000008 + -0x48);
            *(undefined8 *)(param_2 + 2) = uVar1;
            *(undefined8 *)(param_2 + 4) = uVar11;
            *(undefined8 *)((long)param_2 + 0x17) =
                 *(undefined8 *)((long)register0x00000008 + -0x41);
            *(byte *)((long)param_2 + 0x1f) = bVar3;
            *puVar12 = *(undefined8 *)((long)register0x00000008 + -0x58);
            param_2[10] = *(undefined4 *)((long)register0x00000008 + -0x50);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x38)) {
              return;
            }
            ___stack_chk_fail();
            *(undefined8 **)((long)register0x00000008 + -0x90) = puVar12;
            *(ulong *)((long)register0x00000008 + -0x88) = (ulong)bVar3;
            *(undefined8 *)((long)register0x00000008 + -0x80) = uVar1;
            *(undefined4 **)((long)register0x00000008 + -0x78) = param_2;
            *(undefined1 **)((long)register0x00000008 + -0x70) =
                 (undefined1 *)((long)register0x00000008 + -0x10);
            *(undefined8 *)((long)register0x00000008 + -0x68) = 0x10927ac00;
            puVar5 = puVar9 + 2;
            puVar10 = puVar8;
            func_0x000107c2abd4(puVar5,param_1 + 2);
            puVar6 = puVar8 + 2;
            func_0x000107c2abd4(puVar6,puVar9 + 2);
            if (((uint)puVar5 >> 7 & 1) == 0) {
              if (-1 < (char)puVar6) {
                return;
              }
              FUN_10927ab0c(puVar9,puVar8);
              puVar8 = puVar9 + 2;
              func_0x000107c2abd4(puVar8,param_1 + 2);
              uVar4 = (uint)puVar8;
              puVar8 = puVar9;
joined_r0x00010927ac88:
              if ((uVar4 >> 7 & 1) == 0) {
                return;
              }
            }
            else if (-1 < (char)puVar6) {
              FUN_10927ab0c(param_1,puVar9);
              puVar5 = puVar8 + 2;
              func_0x000107c2abd4(puVar5,puVar9 + 2);
              uVar4 = (uint)puVar5;
              param_1 = puVar9;
              goto joined_r0x00010927ac88;
            }
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x70);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x68);
            unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0x80);
            unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x78);
            unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0x88);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x60);
            param_2 = puVar8;
          } while( true );
        }
      }
    }
  }
  return;
}



/* Entry: 10927d3dc; end: 10927d64f;  */

bool FUN_10927d3dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  int iVar10;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar6 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 != 2) {
LAB_10927d490:
      FUN_10927d214(param_1,param_1 + 0xc,param_1 + 0x18);
      if (param_1 + 0x24 == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar10 = 0;
      puVar5 = param_1 + 0x18;
      puVar8 = param_1 + 0x24;
      do {
        puVar3 = puVar8 + 2;
        func_0x000107c2abd4(puVar3,puVar5 + 2);
        if (((uint)puVar3 >> 7 & 1) != 0) {
          uVar1 = *puVar8;
          uStack_70 = *(undefined8 *)(puVar8 + 4);
          uStack_78 = *(undefined8 *)(puVar8 + 2);
          *(undefined8 *)(puVar8 + 2) = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          uStack_68 = *(undefined8 *)(puVar8 + 6);
          uStack_60 = *(undefined8 *)(puVar8 + 8);
          *(undefined8 *)(puVar8 + 6) = 0;
          uStack_58 = puVar8[10];
          lVar2 = lVar9;
          do {
            lVar7 = lVar2;
            *(undefined4 *)((long)param_1 + lVar7 + 0x90) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x60);
            if (*(char *)((long)param_1 + lVar7 + 0xaf) < '\0') {
              __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x98));
            }
            *(undefined8 *)((long)param_1 + lVar7 + 0xa0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x70);
            *(undefined8 *)((long)param_1 + lVar7 + 0x98) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x68);
            *(undefined1 *)((long)param_1 + lVar7 + 0x7f) = 0;
            *(undefined1 *)((long)param_1 + lVar7 + 0x68) = 0;
            *(undefined8 *)((long)param_1 + lVar7 + 0xa8) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x78);
            *(undefined8 *)((long)param_1 + lVar7 + 0xb0) =
                 *(undefined8 *)((long)param_1 + lVar7 + 0x80);
            *(undefined4 *)((long)param_1 + lVar7 + 0xb8) =
                 *(undefined4 *)((long)param_1 + lVar7 + 0x88);
            puVar5 = param_1;
            if (lVar7 == -0x60) goto LAB_10927d568;
            puVar4 = &uStack_78;
            func_0x000107c2abd4(puVar4,(long)param_1 + lVar7 + 0x38);
            lVar2 = lVar7 + -0x30;
          } while (((uint)puVar4 >> 7 & 1) != 0);
          puVar5 = (undefined4 *)((long)param_1 + lVar7 + 0x60);
LAB_10927d568:
          *puVar5 = uVar1;
          if (*(char *)((long)puVar5 + 0x1f) < '\0') {
            __ZdlPv(*(undefined8 *)((long)param_1 + lVar7 + 0x68));
          }
          *(undefined8 *)((long)param_1 + lVar7 + 0x70) = uStack_70;
          *(undefined8 *)((long)param_1 + lVar7 + 0x68) = uStack_78;
          *(undefined8 *)((long)param_1 + lVar7 + 0x78) = uStack_68;
          *(undefined8 *)((long)param_1 + lVar7 + 0x80) = uStack_60;
          *(undefined4 *)((long)param_1 + lVar7 + 0x88) = uStack_58;
          iVar10 = iVar10 + 1;
          if (iVar10 == 8) {
            return puVar8 + 0xc == param_2;
          }
        }
        puVar3 = puVar8 + 0xc;
        lVar9 = lVar9 + 0x30;
        puVar5 = puVar8;
        puVar8 = puVar3;
        if (puVar3 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_2 + -0xc;
  }
  else {
    if (uVar6 == 3) {
      FUN_10927d214(param_1,param_1 + 0xc,param_2 + -0xc);
      return true;
    }
    if (uVar6 != 4) {
      if (uVar6 == 5) {
        FUN_10927d2c8(param_1,param_1 + 0xc,param_1 + 0x18,param_1 + 0x24,param_2 + -0xc);
        return true;
      }
      goto LAB_10927d490;
    }
    FUN_10927d214(param_1,param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_2 + -10;
    func_0x000107c2abd4(puVar5,param_1 + 0x1a);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927ab0c(param_1 + 0x18,param_2 + -0xc);
    puVar5 = param_1 + 0x1a;
    func_0x000107c2abd4(puVar5,param_1 + 0xe);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    FUN_10927ab0c(param_1 + 0xc,param_1 + 0x18);
    puVar5 = param_1 + 0xe;
    func_0x000107c2abd4(puVar5,param_1 + 2);
    if (((uint)puVar5 >> 7 & 1) == 0) {
      return true;
    }
    param_2 = param_1 + 0xc;
  }
  FUN_10927ab0c(param_1,param_2);
  return true;
}



/* Entry: 10927d650; end: 10927e563;  */

/* WARNING: Removing unreachable block (ram,0x00010927e444) */
/* WARNING: Removing unreachable block (ram,0x00010927e160) */
/* WARNING: Removing unreachable block (ram,0x00010927dafc) */
/* WARNING: Removing unreachable block (ram,0x00010927d8d8) */
/* WARNING: Removing unreachable block (ram,0x00010927e4bc) */

void FUN_10927d650(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined4 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_b8;
  ulong *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined4 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  do {
    puVar11 = param_2 + -8;
    puVar6 = param_1;
LAB_10927d6a0:
    param_1 = puVar6;
    uVar18 = (long)param_2 - (long)param_1 >> 6;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        puVar6 = puVar11;
        func_0x000107c2abd4(puVar11,param_1);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
LAB_10927dbac:
        FUN_10927761c(param_1,puVar11);
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        FUN_10927e564(param_1,param_1 + 8,puVar11);
        return;
      }
      if (uVar18 == 4) {
        FUN_10927e564(param_1,param_1 + 8,param_1 + 0x10);
        puVar6 = puVar11;
        func_0x000107c2abd4(puVar11,param_1 + 0x10);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        FUN_10927761c(param_1 + 0x10,puVar11);
        puVar6 = param_1 + 0x10;
        func_0x000107c2abd4(puVar6,param_1 + 8);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        FUN_10927761c(param_1 + 8,param_1 + 0x10);
        puVar6 = param_1 + 8;
        func_0x000107c2abd4(puVar6,param_1);
        if (((uint)puVar6 >> 7 & 1) == 0) {
          return;
        }
        puVar11 = param_1 + 8;
        goto LAB_10927dbac;
      }
      if (uVar18 == 5) {
        FUN_10927e618(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,puVar11);
        return;
      }
    }
    if ((long)uVar18 < 0x18) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        if (param_1 + 8 == param_2) {
          return;
        }
        puVar6 = param_1 + 0xf;
        puVar11 = param_1 + 8;
        do {
          puVar7 = puVar11;
          puVar11 = puVar7;
          func_0x000107c2abd4(puVar7,param_1);
          if (((uint)puVar11 >> 7 & 1) != 0) {
            uStack_a8 = puVar7[1];
            puStack_b0 = (ulong *)*puVar7;
            uStack_a0 = puVar7[2];
            puVar7[1] = 0;
            puVar7[2] = 0;
            *puVar7 = 0;
            uStack_98 = param_1[0xb];
            uStack_90 = (undefined4)param_1[0xc];
            uStack_80 = param_1[0xe];
            uStack_88 = param_1[0xd];
            uStack_78 = param_1[0xf];
            param_1[0xd] = 0;
            param_1[0xe] = 0;
            param_1[0xf] = 0;
            puVar11 = puVar6;
            do {
              puVar9 = puVar11;
              puVar9[-6] = puVar9[-0xe];
              puVar9[-7] = puVar9[-0xf];
              puVar9[-5] = puVar9[-0xd];
              *(undefined1 *)((long)puVar9 + -0x61) = 0;
              *(undefined1 *)(puVar9 + -0xf) = 0;
              puVar9[-4] = puVar9[-0xc];
              *(int *)(puVar9 + -3) = (int)puVar9[-0xb];
              FUN_109241da0(puVar9 + -2);
              puVar11 = puVar9 + -8;
              puVar9[-1] = puVar9[-9];
              puVar9[-2] = puVar9[-10];
              *puVar9 = *puVar11;
              *puVar11 = 0;
              puVar9[-10] = 0;
              puVar9[-9] = 0;
              ppuVar12 = &puStack_b0;
              func_0x000107c2abd4(ppuVar12,puVar9 + -0x17);
            } while (((uint)ppuVar12 >> 7 & 1) != 0);
            puVar9[-0xd] = uStack_a0;
            puVar9[-0xe] = uStack_a8;
            puVar9[-0xf] = (ulong)puStack_b0;
            uStack_a0 = uStack_a0 & 0xffffffffffffff;
            puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
            *(undefined4 *)(puVar9 + -0xb) = uStack_90;
            puVar9[-0xc] = uStack_98;
            FUN_109241da0(puVar9 + -10);
            puVar9[-9] = uStack_80;
            puVar9[-10] = uStack_88;
            *puVar11 = uStack_78;
            uStack_88 = 0;
            uStack_80 = 0;
            uStack_78 = 0;
            puStack_100 = &uStack_88;
            func_0x00010922df48(&puStack_100);
            if ((long)uStack_a0 < 0) {
              __ZdlPv(puStack_b0);
            }
          }
          puVar6 = puVar6 + 8;
          puVar11 = puVar7 + 8;
          param_1 = puVar7;
        } while (puVar7 + 8 != param_2);
        return;
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 8 == param_2) {
        return;
      }
      lVar15 = 0;
      puVar6 = param_1 + 8;
      puVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar17 = uVar18 - 2 >> 1;
      uVar14 = uVar17;
      goto LAB_10927dde8;
    }
    puVar6 = param_1 + (uVar18 >> 1) * 8;
    if (uVar18 < 0x81) {
      FUN_10927e564(puVar6,param_1,puVar11);
    }
    else {
      FUN_10927e564(param_1,puVar6,puVar11);
      FUN_10927e564(param_1 + 8,puVar6 + -8,param_2 + -0x10);
      FUN_10927e564(param_1 + 0x10,puVar6 + 8,param_2 + -0x18);
      FUN_10927e564(puVar6 + -8,puVar6,puVar6 + 8);
      FUN_10927761c(param_1,puVar6);
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      puVar6 = param_1 + -8;
      func_0x000107c2abd4(puVar6,param_1);
      if (((uint)puVar6 >> 7 & 1) != 0) goto LAB_10927d778;
      uStack_a8 = param_1[1];
      puStack_b0 = (ulong *)*param_1;
      uStack_a0 = param_1[2];
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
      uStack_98 = param_1[3];
      uStack_90 = (undefined4)param_1[4];
      puVar7 = param_1 + 5;
      uStack_80 = param_1[6];
      uStack_88 = *puVar7;
      uStack_78 = param_1[7];
      *puVar7 = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      ppuVar12 = &puStack_b0;
      func_0x000107c2abd4(ppuVar12,puVar11);
      puVar6 = param_1;
      if (((uint)ppuVar12 >> 7 & 1) == 0) {
        do {
          puVar6 = puVar6 + 8;
          if (param_2 <= puVar6) break;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
      }
      else {
        do {
          puVar6 = puVar6 + 8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
      }
      puVar9 = param_2;
      if (puVar6 < param_2) {
        do {
          puVar9 = puVar9 + -8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar9);
        } while (((uint)ppuVar12 >> 7 & 1) != 0);
      }
      while (puVar6 < puVar9) {
        FUN_10927761c(puVar6,puVar9);
        do {
          puVar6 = puVar6 + 8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar6);
        } while (((uint)ppuVar12 >> 7 & 1) == 0);
        do {
          puVar9 = puVar9 + -8;
          ppuVar12 = &puStack_b0;
          func_0x000107c2abd4(ppuVar12,puVar9);
        } while (((uint)ppuVar12 >> 7 & 1) != 0);
      }
      puVar9 = puVar6 + -8;
      if (puVar9 != param_1) {
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          __ZdlPv(*param_1);
        }
        uVar14 = puVar6[-7];
        uVar18 = *puVar9;
        param_1[2] = puVar6[-6];
        param_1[1] = uVar14;
        *param_1 = uVar18;
        *(undefined1 *)((long)puVar6 + -0x29) = 0;
        *(undefined1 *)(puVar6 + -8) = 0;
        uVar18 = puVar6[-5];
        *(int *)(param_1 + 4) = (int)puVar6[-4];
        param_1[3] = uVar18;
        FUN_109241da0(puVar7);
        uVar18 = puVar6[-3];
        param_1[6] = puVar6[-2];
        param_1[5] = uVar18;
        param_1[7] = puVar6[-1];
        puVar6[-3] = 0;
        puVar6[-2] = 0;
        puVar6[-1] = 0;
      }
      puVar6[-6] = uStack_a0;
      puVar6[-7] = uStack_a8;
      *puVar9 = (ulong)puStack_b0;
      uStack_a0 = uStack_a0 & 0xffffffffffffff;
      puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
      *(undefined4 *)(puVar6 + -4) = uStack_90;
      puVar6[-5] = uStack_98;
      FUN_109241da0(puVar6 + -3);
      puVar6[-2] = uStack_80;
      puVar6[-3] = uStack_88;
      puVar6[-1] = uStack_78;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_100 = &uStack_88;
      func_0x00010922df48(&puStack_100);
      if ((long)uStack_a0 < 0) {
        __ZdlPv(puStack_b0);
      }
      goto LAB_10927d98c;
    }
LAB_10927d778:
    lVar15 = 0;
    uStack_a8 = param_1[1];
    puStack_b0 = (ulong *)*param_1;
    uStack_a0 = param_1[2];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_98 = param_1[3];
    uStack_90 = (undefined4)param_1[4];
    puVar7 = param_1 + 5;
    uStack_80 = param_1[6];
    uStack_88 = *puVar7;
    uStack_78 = param_1[7];
    *puVar7 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    do {
      lVar15 = lVar15 + 0x40;
      puVar4 = (undefined1 *)(lVar15 + (long)param_1);
      func_0x000107c2abd4(puVar4,&puStack_b0);
    } while (((uint)puVar4 >> 7 & 1) != 0);
    puVar9 = (ulong *)((long)param_1 + lVar15);
    puVar8 = param_2;
    if (lVar15 == 0x40) {
      do {
        if (puVar8 <= puVar9) break;
        puVar8 = puVar8 + -8;
        puVar6 = puVar8;
        func_0x000107c2abd4(puVar8,&puStack_b0);
      } while (((uint)puVar6 >> 7 & 1) == 0);
    }
    else {
      do {
        puVar8 = puVar8 + -8;
        puVar6 = puVar8;
        func_0x000107c2abd4(puVar8,&puStack_b0);
      } while (((uint)puVar6 >> 7 & 1) == 0);
    }
    puVar10 = puVar8;
    puVar6 = puVar9;
    if (puVar9 < puVar8) {
      do {
        FUN_10927761c(puVar6,puVar10);
        do {
          puVar6 = puVar6 + 8;
          puVar5 = puVar6;
          func_0x000107c2abd4(puVar6,&puStack_b0);
        } while (((uint)puVar5 >> 7 & 1) != 0);
        do {
          puVar10 = puVar10 + -8;
          puVar5 = puVar10;
          func_0x000107c2abd4(puVar10,&puStack_b0);
        } while (((uint)puVar5 >> 7 & 1) == 0);
      } while (puVar6 < puVar10);
    }
    puVar10 = puVar6 + -8;
    if (puVar10 != param_1) {
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        __ZdlPv(*param_1);
      }
      uVar14 = puVar6[-7];
      uVar18 = *puVar10;
      param_1[2] = puVar6[-6];
      param_1[1] = uVar14;
      *param_1 = uVar18;
      *(undefined1 *)((long)puVar6 + -0x29) = 0;
      *(undefined1 *)(puVar6 + -8) = 0;
      uVar18 = puVar6[-5];
      *(int *)(param_1 + 4) = (int)puVar6[-4];
      param_1[3] = uVar18;
      FUN_109241da0(puVar7);
      uVar18 = puVar6[-3];
      param_1[6] = puVar6[-2];
      param_1[5] = uVar18;
      param_1[7] = puVar6[-1];
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-1] = 0;
    }
    puVar6[-6] = uStack_a0;
    puVar6[-7] = uStack_a8;
    *puVar10 = (ulong)puStack_b0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
    *(undefined4 *)(puVar6 + -4) = uStack_90;
    puVar6[-5] = uStack_98;
    FUN_109241da0(puVar6 + -3);
    puVar6[-2] = uStack_80;
    puVar6[-3] = uStack_88;
    puVar6[-1] = uStack_78;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_100 = &uStack_88;
    func_0x00010922df48(&puStack_100);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(puStack_b0);
    }
    if (puVar9 < puVar8) goto LAB_10927d974;
    puVar7 = param_1;
    FUN_10927e72c(param_1,puVar10);
    puVar9 = puVar6;
    FUN_10927e72c(puVar6,param_2);
    if ((int)puVar9 == 0) goto code_r0x00010927d970;
    param_2 = puVar10;
    if (((ulong)puVar7 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10927dc58:
  puVar7 = puVar6;
  puVar6 = puVar7;
  func_0x000107c2abd4(puVar7,puVar11);
  if (((uint)puVar6 >> 7 & 1) != 0) {
    uStack_a8 = puVar7[1];
    puStack_b0 = (ulong *)*puVar7;
    uStack_a0 = puVar7[2];
    puVar7[1] = 0;
    puVar7[2] = 0;
    *puVar7 = 0;
    uStack_98 = puVar11[0xb];
    uStack_90 = (undefined4)puVar11[0xc];
    uStack_80 = puVar11[0xe];
    uStack_88 = puVar11[0xd];
    uStack_78 = puVar11[0xf];
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
    lVar3 = lVar15;
    do {
      lVar16 = lVar3;
      puVar1 = (undefined8 *)((long)param_1 + lVar16);
      if (*(char *)((long)puVar1 + 0x57) < '\0') {
        __ZdlPv(puVar1[8]);
      }
      puVar1[9] = puVar1[1];
      puVar1[8] = *puVar1;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
      *(undefined1 *)puVar1 = 0;
      puVar1[10] = puVar1[2];
      puVar1[0xb] = puVar1[3];
      *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 4);
      FUN_109241da0(puVar1 + 0xd);
      puVar1[0xe] = puVar1[6];
      puVar1[0xd] = puVar1[5];
      puVar1[0xf] = puVar1[7];
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[5] = 0;
      puVar6 = param_1;
      if (lVar16 == 0) goto LAB_10927dd34;
      ppuVar12 = &puStack_b0;
      func_0x000107c2abd4(ppuVar12,(undefined1 *)(lVar16 + -0x40 + (long)param_1));
      lVar3 = lVar16 + -0x40;
    } while (((uint)ppuVar12 >> 7 & 1) != 0);
    puVar6 = (ulong *)((long)param_1 + lVar16);
LAB_10927dd34:
    if (*(char *)((long)puVar6 + 0x17) < '\0') {
      __ZdlPv(*puVar6);
    }
    puVar6[2] = uStack_a0;
    puVar6[1] = uStack_a8;
    *puVar6 = (ulong)puStack_b0;
    uStack_a0 = uStack_a0 & 0xffffffffffffff;
    puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
    *(undefined4 *)((long)param_1 + lVar16 + 0x20) = uStack_90;
    *(ulong *)((long)param_1 + lVar16 + 0x18) = uStack_98;
    FUN_109241da0((undefined1 *)((long)param_1 + lVar16 + 0x28));
    *(ulong *)((long)param_1 + lVar16 + 0x28) = uStack_88;
    puVar6[7] = uStack_78;
    puVar6[6] = uStack_80;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    puStack_100 = &uStack_88;
    func_0x00010922df48(&puStack_100);
    if ((long)uStack_a0 < 0) {
      __ZdlPv(puStack_b0);
    }
  }
  lVar15 = lVar15 + 0x40;
  puVar6 = puVar7 + 8;
  puVar11 = puVar7;
  if (puVar7 + 8 == param_2) {
    return;
  }
  goto LAB_10927dc58;
LAB_10927dde8:
  do {
    if ((long)uVar14 <= (long)uVar17) {
      uVar20 = uVar14 << 1 | 1;
      puVar6 = param_1 + uVar20 * 8;
      uVar13 = uVar14 * 2 + 2;
      puVar11 = puVar6;
      uVar19 = uVar20;
      if ((long)uVar13 < (long)uVar18) {
        puVar7 = puVar6;
        func_0x000107c2abd4(puVar6,puVar6 + 8);
        puVar11 = puVar6 + 8;
        uVar19 = uVar13;
        if (-1 < (char)puVar7) {
          puVar11 = puVar6;
          uVar19 = uVar20;
        }
      }
      puVar6 = param_1 + uVar14 * 8;
      puVar7 = puVar11;
      func_0x000107c2abd4(puVar11,puVar6);
      if (((uint)puVar7 >> 7 & 1) == 0) {
        uStack_a8 = puVar6[1];
        puStack_b0 = (ulong *)*puVar6;
        uStack_a0 = puVar6[2];
        puVar6[1] = 0;
        puVar6[2] = 0;
        *puVar6 = 0;
        uStack_98 = puVar6[3];
        uStack_90 = (undefined4)puVar6[4];
        uStack_80 = puVar6[6];
        uStack_88 = puVar6[5];
        uStack_78 = puVar6[7];
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        do {
          puVar7 = puVar11;
          if (*(char *)((long)puVar6 + 0x17) < '\0') {
            __ZdlPv(*puVar6);
          }
          uVar20 = puVar7[1];
          uVar13 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar20;
          *puVar6 = uVar13;
          *(undefined1 *)((long)puVar7 + 0x17) = 0;
          *(undefined1 *)puVar7 = 0;
          uVar13 = puVar7[3];
          *(int *)(puVar6 + 4) = (int)puVar7[4];
          puVar6[3] = uVar13;
          FUN_109241da0(puVar6 + 5);
          puVar9 = puVar7 + 5;
          uVar13 = *puVar9;
          puVar6[6] = puVar7[6];
          puVar6[5] = uVar13;
          puVar6[7] = puVar7[7];
          *puVar9 = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          if ((long)uVar17 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar6 = param_1 + uVar20 * 8;
          uVar13 = uVar19 * 2 + 2;
          puVar11 = puVar6;
          uVar19 = uVar20;
          if ((long)uVar13 < (long)uVar18) {
            puVar8 = puVar6;
            func_0x000107c2abd4(puVar6,puVar6 + 8);
            puVar11 = puVar6 + 8;
            uVar19 = uVar13;
            if (-1 < (char)puVar8) {
              puVar11 = puVar6;
              uVar19 = uVar20;
            }
          }
          puVar8 = puVar11;
          func_0x000107c2abd4(puVar11,&puStack_b0);
          puVar6 = puVar7;
        } while (((uint)puVar8 >> 7 & 1) == 0);
        if (*(char *)((long)puVar7 + 0x17) < '\0') {
          __ZdlPv(*puVar7);
        }
        puVar7[2] = uStack_a0;
        puVar7[1] = uStack_a8;
        *puVar7 = (ulong)puStack_b0;
        uStack_a0 = uStack_a0 & 0xffffffffffffff;
        puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
        puVar7[3] = uStack_98;
        *(undefined4 *)(puVar7 + 4) = uStack_90;
        FUN_109241da0(puVar9);
        puVar7[6] = uStack_80;
        puVar7[5] = uStack_88;
        puVar7[7] = uStack_78;
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
        puStack_100 = &uStack_88;
        func_0x00010922df48(&puStack_100);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(puStack_b0);
        }
      }
    }
    bVar2 = uVar14 != 0;
    uVar14 = uVar14 - 1;
  } while (bVar2);
  puStack_108 = param_2;
  do {
    uStack_f8 = param_1[1];
    puStack_100 = (ulong *)*param_1;
    uStack_f0 = param_1[2];
    uStack_e8 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uStack_e0 = (undefined4)param_1[4];
    uStack_d0 = param_1[6];
    uStack_d8 = param_1[5];
    uStack_c8 = param_1[7];
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[5] = 0;
    uVar14 = 0;
    puVar6 = param_1;
    do {
      puVar11 = puVar6 + uVar14 * 8 + 8;
      uVar13 = uVar14 << 1 | 1;
      uVar17 = uVar14 * 2 + 2;
      uVar20 = uVar13;
      puVar7 = puVar11;
      if ((long)uVar17 < (long)uVar18) {
        puVar9 = puVar11;
        func_0x000107c2abd4(puVar11,puVar6 + uVar14 * 8 + 0x10);
        uVar20 = uVar17;
        puVar7 = puVar6 + uVar14 * 8 + 0x10;
        if (-1 < (char)puVar9) {
          uVar20 = uVar13;
          puVar7 = puVar11;
        }
      }
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      uVar17 = puVar7[1];
      uVar14 = *puVar7;
      puVar6[2] = puVar7[2];
      puVar6[1] = uVar17;
      *puVar6 = uVar14;
      *(undefined1 *)((long)puVar7 + 0x17) = 0;
      *(undefined1 *)puVar7 = 0;
      puVar11 = puVar7 + 3;
      uVar14 = *puVar11;
      *(int *)(puVar6 + 4) = (int)puVar7[4];
      puVar6[3] = uVar14;
      FUN_109241da0(puVar6 + 5);
      puVar9 = puVar7 + 5;
      uVar14 = *puVar9;
      puVar6[6] = puVar7[6];
      puVar6[5] = uVar14;
      puVar6[7] = puVar7[7];
      *puVar9 = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      uVar14 = uVar20;
      puVar6 = puVar7;
    } while ((long)uVar20 <= (long)(uVar18 - 2 >> 1));
    puVar6 = puStack_108 + -8;
    if (puVar7 == puVar6) {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      puVar7[2] = uStack_f0;
      puVar7[1] = uStack_f8;
      *puVar7 = (ulong)puStack_100;
      uStack_f0 = uStack_f0 & 0xffffffffffffff;
      puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
      *puVar11 = uStack_e8;
      *(undefined4 *)(puVar7 + 4) = uStack_e0;
      FUN_109241da0(puVar9);
      puVar7[6] = uStack_d0;
      puVar7[5] = uStack_d8;
      puVar7[7] = uStack_c8;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
    }
    else {
      if (*(char *)((long)puVar7 + 0x17) < '\0') {
        __ZdlPv(*puVar7);
      }
      uVar17 = puStack_108[-7];
      uVar14 = *puVar6;
      puVar7[2] = puStack_108[-6];
      puVar7[1] = uVar17;
      *puVar7 = uVar14;
      *(undefined1 *)((long)puStack_108 + -0x29) = 0;
      *(undefined1 *)(puStack_108 + -8) = 0;
      uVar14 = puStack_108[-5];
      *(int *)(puVar7 + 4) = (int)puStack_108[-4];
      *puVar11 = uVar14;
      FUN_109241da0(puVar9);
      puVar8 = puStack_108 + -3;
      uVar14 = *puVar8;
      puVar7[6] = puStack_108[-2];
      puVar7[5] = uVar14;
      puVar7[7] = puStack_108[-1];
      *puVar8 = 0;
      puStack_108[-2] = 0;
      puStack_108[-1] = 0;
      puStack_108[-6] = uStack_f0;
      puStack_108[-7] = uStack_f8;
      *puVar6 = (ulong)puStack_100;
      uStack_f0 = uStack_f0 & 0xffffffffffffff;
      puStack_100 = (ulong *)((ulong)puStack_100 & 0xffffffffffffff00);
      *(undefined4 *)(puStack_108 + -4) = uStack_e0;
      puStack_108[-5] = uStack_e8;
      FUN_109241da0(puVar8);
      puStack_108[-2] = uStack_d0;
      puStack_108[-3] = uStack_d8;
      puStack_108[-1] = uStack_c8;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      lVar15 = (long)((long)puVar7 + (0x40 - (long)param_1)) >> 6;
      if (1 < lVar15) {
        uVar14 = lVar15 - 2U >> 1;
        puVar8 = param_1 + uVar14 * 8;
        puVar10 = puVar8;
        func_0x000107c2abd4(puVar8,puVar7);
        if (((uint)puVar10 >> 7 & 1) != 0) {
          uStack_a8 = puVar7[1];
          puStack_b0 = (ulong *)*puVar7;
          uStack_a0 = puVar7[2];
          puVar7[1] = 0;
          puVar7[2] = 0;
          *puVar7 = 0;
          uStack_90 = (undefined4)puVar7[4];
          uStack_98 = *puVar11;
          uStack_80 = puVar7[6];
          uStack_88 = puVar7[5];
          uStack_78 = puVar7[7];
          puVar7[6] = 0;
          puVar7[7] = 0;
          *puVar9 = 0;
          do {
            puVar11 = puVar8;
            if (*(char *)((long)puVar7 + 0x17) < '\0') {
              __ZdlPv(*puVar7);
            }
            uVar13 = puVar11[1];
            uVar17 = *puVar11;
            puVar7[2] = puVar11[2];
            puVar7[1] = uVar13;
            *puVar7 = uVar17;
            *(undefined1 *)((long)puVar11 + 0x17) = 0;
            *(undefined1 *)puVar11 = 0;
            uVar17 = puVar11[3];
            *(int *)(puVar7 + 4) = (int)puVar11[4];
            puVar7[3] = uVar17;
            FUN_109241da0(puVar7 + 5);
            puVar9 = puVar11 + 5;
            uVar17 = *puVar9;
            puVar7[6] = puVar11[6];
            puVar7[5] = uVar17;
            puVar7[7] = puVar11[7];
            *puVar9 = 0;
            puVar11[6] = 0;
            puVar11[7] = 0;
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1 >> 1;
            puVar8 = param_1 + uVar14 * 8;
            puVar10 = puVar8;
            func_0x000107c2abd4(puVar8,&puStack_b0);
            puVar7 = puVar11;
          } while (((uint)puVar10 >> 7 & 1) != 0);
          if (*(char *)((long)puVar11 + 0x17) < '\0') {
            __ZdlPv(*puVar11);
          }
          puVar11[2] = uStack_a0;
          puVar11[1] = uStack_a8;
          *puVar11 = (ulong)puStack_b0;
          uStack_a0 = uStack_a0 & 0xffffffffffffff;
          puStack_b0 = (ulong *)((ulong)puStack_b0 & 0xffffffffffffff00);
          puVar11[3] = uStack_98;
          *(undefined4 *)(puVar11 + 4) = uStack_90;
          FUN_109241da0(puVar9);
          puVar11[6] = uStack_80;
          puVar11[5] = uStack_88;
          puVar11[7] = uStack_78;
          uStack_88 = 0;
          uStack_80 = 0;
          uStack_78 = 0;
          puStack_b8 = &uStack_88;
          func_0x00010922df48(&puStack_b8);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(puStack_b0);
          }
        }
      }
    }
    puStack_b0 = &uStack_d8;
    func_0x00010922df48(&puStack_b0);
    if ((long)uStack_f0 < 0) {
      __ZdlPv(puStack_100);
    }
    bVar2 = (long)uVar18 < 3;
    uVar18 = uVar18 - 1;
    puStack_108 = puVar6;
    if (bVar2) {
      return;
    }
  } while( true );
code_r0x00010927d970:
  if (((ulong)puVar7 & 1) == 0) {
LAB_10927d974:
    FUN_10927d650(param_1,puVar10,param_3,param_4 & 1);
LAB_10927d98c:
    param_4 = 0;
  }
  goto LAB_10927d6a0;
}



/* Entry: 10927e564; end: 10927e617;  */

/* WARNING: Removing unreachable block (ram,0x00010927773c) */

void FUN_10927e564(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_58;
  
  puVar4 = param_2;
  func_0x000107c2abd4(param_2,param_1);
  puVar5 = param_3;
  func_0x000107c2abd4(param_3,param_2);
  if (((uint)puVar4 >> 7 & 1) != 0) {
    if (-1 < (char)puVar5) {
      FUN_10927761c(param_1,param_2);
      puVar4 = param_3;
      func_0x000107c2abd4(param_3,param_2);
      param_1 = param_2;
      if (((uint)puVar4 >> 7 & 1) == 0) {
        return;
      }
    }
LAB_10927e608:
    uVar12 = param_1[1];
    uVar11 = *param_1;
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    uVar3 = *(undefined4 *)(param_1 + 4);
    puVar5 = param_1 + 5;
    uVar10 = param_1[6];
    uVar8 = *puVar5;
    uStack_68 = 0;
    uVar7 = param_1[7];
    *puVar5 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar6 = param_3[2];
    uVar9 = *param_3;
    param_1[1] = param_3[1];
    *param_1 = uVar9;
    param_1[2] = uVar6;
    *(undefined1 *)((long)param_3 + 0x17) = 0;
    *(undefined1 *)param_3 = 0;
    uVar6 = param_3[3];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
    param_1[3] = uVar6;
    uStack_78 = uVar8;
    FUN_109241da0(puVar5);
    puVar4 = param_3 + 5;
    uVar6 = *puVar4;
    param_1[6] = param_3[6];
    *puVar5 = uVar6;
    param_1[7] = param_3[7];
    *puVar4 = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      __ZdlPv(*param_3);
    }
    param_3[1] = uVar12;
    *param_3 = uVar11;
    param_3[2] = uVar1;
    param_3[3] = uVar2;
    *(undefined4 *)(param_3 + 4) = uVar3;
    FUN_109241da0(puVar4);
    param_3[6] = uVar10;
    param_3[5] = uVar8;
    param_3[7] = uVar7;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 0;
    puStack_58 = &uStack_78;
    func_0x00010922df48(&puStack_58);
    return;
  }
  if ((char)puVar5 < '\0') {
    FUN_10927761c(param_2,param_3);
    puVar4 = param_2;
    func_0x000107c2abd4(param_2,param_1);
    param_3 = param_2;
    if (((uint)puVar4 >> 7 & 1) != 0) goto LAB_10927e608;
  }
  return;
}



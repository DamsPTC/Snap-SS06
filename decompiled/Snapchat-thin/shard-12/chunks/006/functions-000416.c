/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10937a630; end: 10937a7ff;  */

void FUN_10937a630(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x000109379d8c(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10937a800; end: 10937a847;  */

void FUN_10937a800(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109379d8c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10937a848; end: 10937a92b;  */

long FUN_10937a848(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar2 = param_1;
  func_0x000107c31944();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar2);
    }
    else {
      plVar7 = plVar2;
      if (plVar5 <= plVar2) {
        uVar1 = 0;
        if (plVar5 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar2 - uVar1 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar2 == plVar4) {
          plVar4 = param_1;
          func_0x000104c4fbc4(param_1,plVar3 + 2,param_2);
          if (((ulong)plVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar1 = 0;
            if (plVar5 != (long *)0x0) {
              uVar1 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10937a92c; end: 10937aafb;  */

void FUN_10937a92c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x000109379e74(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10937aafc; end: 10937ab43;  */

void FUN_10937aafc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109379e74(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10937ab44; end: 10937ad13;  */

void FUN_10937ab44(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar9 = (long *)param_1[1];
  if (plVar9 > param_2 || param_2 == plVar9) {
    if (plVar9 <= param_2) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar9 < (long *)0x3) || (((ulong)plVar9 & (long)plVar9 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (plVar9 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      lVar2 = *param_1;
      *param_1 = 0;
      if (lVar2 != 0) {
        __ZdlPv();
      }
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm();
    lVar3 = *param_1;
    *param_1 = lVar2;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    plVar4 = (long *)0x0;
    param_1[1] = (long)param_2;
    do {
      *(undefined8 *)(*param_1 + (long)plVar4 * 8) = 0;
      plVar4 = (long *)((long)plVar4 + 1);
    } while (param_2 != plVar4);
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar9 = (long *)plVar4[1];
      uVar5 = (long)param_2 - 1;
      if (((ulong)param_2 & uVar5) == 0) {
        plVar9 = (long *)((ulong)plVar9 & uVar5);
      }
      else if (param_2 <= plVar9) {
        uVar1 = 0;
        if (param_2 != (long *)0x0) {
          uVar1 = (ulong)plVar9 / (ulong)param_2;
        }
        plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
      }
      *(long **)(*param_1 + (long)plVar9 * 8) = param_1 + 2;
      plVar6 = (long *)*plVar4;
      while (plVar6 != (long *)0x0) {
        plVar8 = (long *)plVar6[1];
        if (((ulong)param_2 & uVar5) == 0) {
          plVar8 = (long *)((ulong)plVar8 & uVar5);
        }
        else if (param_2 <= plVar8) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar8 / (ulong)param_2;
          }
          plVar8 = (long *)((long)plVar8 - uVar1 * (long)param_2);
        }
        plVar7 = plVar6;
        if (plVar8 != plVar9) {
          lVar2 = *param_1;
          if (*(long *)(lVar2 + (long)plVar8 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar8 * 8) = plVar4;
            plVar9 = plVar8;
          }
          else {
            *plVar4 = *plVar6;
            *plVar6 = **(undefined8 **)(lVar2 + (long)plVar8 * 8);
            **(long **)(lVar2 + (long)plVar8 * 8) = (long)plVar6;
            plVar7 = plVar4;
          }
        }
        plVar4 = plVar7;
        plVar6 = (long *)*plVar7;
      }
    }
    return;
  }
  func_0x000104c4f740();
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 == 0) {
    return;
  }
  if ((char)plVar4[2] == '\x01') {
    func_0x000109379f5c(lVar2 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 10937ad14; end: 10937ad5b;  */

void FUN_10937ad14(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109379f5c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10937ad5c; end: 10937b173;  */

void FUN_10937ad5c(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined8 ******ppppppuVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long *plVar12;
  int iVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuStack_198;
  ulong uStack_190;
  byte bStack_181;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  undefined1 auStack_170 [56];
  undefined8 uStack_138;
  char cStack_121;
  undefined **appuStack_110 [19];
  undefined4 uStack_78;
  byte bStack_71;
  int iStack_70;
  undefined1 auStack_69 [9];
  
  pcVar2 = (char *)((long)param_1 + *(long *)(*param_1 + -0x18));
  uVar5 = *(undefined8 *)(pcVar2 + 0x10);
  uVar6 = *(undefined8 *)(pcVar2 + 0x18);
  uVar7 = *(undefined4 *)(pcVar2 + 8);
  iVar11 = *(int *)(pcVar2 + 0x90);
  if (iVar11 == -1) {
    __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,pcVar2);
    pppuVar8 = &ppuStack_180;
    __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (*(code *)(*pppuVar8)[7])();
    __ZNSt3__16localeD1Ev(&ppuStack_180);
    iVar11 = (int)pppuVar8;
    *(int *)(pcVar2 + 0x90) = iVar11;
  }
  iStack_70 = 0;
  iVar13 = (int)param_4;
  plVar12 = param_2;
  if (0 < iVar13) {
    ppuVar1 = (undefined **)
              (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
LAB_10937ae2c:
    do {
      if ((char)*plVar12 == '%') {
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                  (param_1,param_2,(long)plVar12 - (long)param_2);
        param_2 = (long *)((long)plVar12 + 1);
        plVar14 = param_2;
        if (*(char *)param_2 == '%') goto LAB_10937ae74;
      }
      else {
        plVar14 = plVar12;
        if ((char)*plVar12 != '\0') {
LAB_10937ae74:
          plVar12 = (long *)((long)plVar14 + 1);
          goto LAB_10937ae2c;
        }
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                  (param_1,param_2,(long)plVar12 - (long)param_2);
      }
      bStack_71 = 0;
      uStack_78 = 0xffffffff;
      param_2 = param_1;
      FUN_10937b174(param_1,&bStack_71,&uStack_78,plVar12,param_3,&iStack_70,param_4);
      if (iVar13 <= iStack_70) {
        return;
      }
      puVar15 = (undefined8 *)(param_3 + (long)iStack_70 * 0x18);
      if ((bStack_71 & 1) == 0) {
        (*(code *)puVar15[1])(param_1,plVar12,param_2,uStack_78,*puVar15);
      }
      else {
        FUN_10926db08(&ppuStack_180);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEE7copyfmtERKS3_
                  ((undefined *)((long)&ppuStack_180 + (long)ppuStack_180[-3]),
                   (char *)((long)param_1 + *(long *)(*param_1 + -0x18)));
        *(uint *)((long)&ppuStack_178 + (long)ppuStack_180[-3]) =
             *(uint *)((long)&ppuStack_178 + (long)ppuStack_180[-3]) | 0x800;
        (*(code *)puVar15[1])(&ppuStack_180,plVar12,param_2,uStack_78,*puVar15);
        FUN_10926dc5c(&pppppuStack_198,&ppuStack_178,auStack_69);
        uVar9 = (ulong)bStack_181;
        uVar4 = uStack_190;
        if (-1 < (char)bStack_181) {
          uVar4 = uVar9;
        }
        if (uVar4 != 0) {
          uVar9 = 0;
          do {
            ppppppuVar3 = (undefined8 ******)pppppuStack_198;
            if (-1 < (char)bStack_181) {
              ppppppuVar3 = &pppppuStack_198;
            }
            if (*(char *)((long)ppppppuVar3 + uVar9) == '+') {
              *(undefined1 *)((long)ppppppuVar3 + uVar9) = 0x20;
            }
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
          uVar9 = (ulong)bStack_181;
        }
        uVar4 = uStack_190;
        ppppppuVar3 = (undefined8 ******)pppppuStack_198;
        if (-1 < (char)bStack_181) {
          uVar4 = uVar9;
          ppppppuVar3 = &pppppuStack_198;
        }
        FUN_1092b4db8(param_1,ppppppuVar3,uVar4);
        if ((char)bStack_181 < '\0') {
          __ZdlPv(pppppuStack_198);
        }
        appuStack_110[0] = &PTR_DAT_11088d708;
        ppuStack_180 = &PTR_SUB_11088d6e0;
        ppuStack_178 = &PTR_DAT_11088d7b0;
        if (cStack_121 < '\0') {
          __ZdlPv(uStack_138);
        }
        ppuStack_178 = ppuVar1;
        __ZNSt3__16localeD1Ev(auStack_170);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_180,&PTR_PTR_11088d720);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_110);
      }
      iStack_70 = iStack_70 + 1;
      plVar12 = param_2;
    } while (iStack_70 < iVar13);
  }
  do {
    if ((char)*param_2 == '%') {
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (param_1,plVar12,(long)param_2 - (long)plVar12);
      param_2 = (long *)((long)param_2 + 1);
      plVar12 = param_2;
      if (*(char *)param_2 != '%') goto LAB_10937b08c;
    }
    else if ((char)*param_2 == '\0') {
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl
                (param_1,plVar12,(long)param_2 - (long)plVar12);
LAB_10937b08c:
      lVar10 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x18) = uVar6;
      *(undefined8 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 0x10) = uVar5;
      *(undefined4 *)((long)param_1 + *(long *)(lVar10 + -0x18) + 8) = uVar7;
      pcVar2 = (char *)((long)param_1 + *(long *)(lVar10 + -0x18));
      if (*(int *)(pcVar2 + 0x90) == -1) {
        __ZNKSt3__18ios_base6getlocEv(&ppuStack_180,pcVar2);
        pppuVar8 = &ppuStack_180;
        __ZNKSt3__16locale9use_facetERNS0_2idE(pppuVar8,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (*(code *)(*pppuVar8)[7])();
        __ZNSt3__16localeD1Ev(&ppuStack_180);
        *(int *)(pcVar2 + 0x90) = (int)pppuVar8;
      }
      *(int *)(pcVar2 + 0x90) = (int)(char)iVar11;
      return;
    }
    param_2 = (long *)((long)param_2 + 1);
  } while( true );
}



/* Entry: 10937b174; end: 10937b8b7;  */

byte * FUN_10937b174(long *param_1,undefined1 *param_2,undefined4 *param_3,byte *param_4,
                    long param_5,int *param_6,int param_7)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  long lStack_68;
  
  if (*param_4 != 0x25) {
    return param_4;
  }
  lVar7 = *param_1;
  *(undefined8 *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x18) = 0;
  *(undefined8 *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x10) = 6;
  lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
  if (*(int *)(lVar5 + 0x90) == -1) {
    __ZNKSt3__18ios_base6getlocEv(&lStack_68,lVar5);
    plVar4 = &lStack_68;
    __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    (**(code **)(*plVar4 + 0x38))();
    __ZNSt3__16localeD1Ev(&lStack_68);
    *(int *)(lVar5 + 0x90) = (int)plVar4;
    lVar7 = *param_1;
  }
  lVar14 = 0;
  *(undefined4 *)(lVar5 + 0x90) = 0x20;
  *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
       *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xffffb000;
  lVar5 = lVar7;
  lVar12 = lVar7;
LAB_10937b270:
  while( true ) {
    while( true ) {
      while( true ) {
        param_4 = param_4 + 1;
        bVar2 = *param_4;
        uVar15 = (uint)bVar2;
        if (bVar2 != 0x20) break;
        if ((*(byte *)((long)param_1 + *(long *)(lVar12 + -0x18) + 9) >> 3 & 1) == 0) {
          *param_2 = 1;
        }
      }
      if (0x2c < bVar2) {
        if (bVar2 == 0x2d) {
          lVar1 = (long)param_1 + *(long *)(lVar12 + -0x18);
          if (*(int *)(lVar1 + 0x90) == -1) {
            __ZNKSt3__18ios_base6getlocEv(&lStack_68,lVar1);
            plVar4 = &lStack_68;
            __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
            (**(code **)(*plVar4 + 0x38))();
            __ZNSt3__16localeD1Ev(&lStack_68);
            *(int *)(lVar1 + 0x90) = (int)plVar4;
            lVar7 = *param_1;
            lVar5 = lVar7;
            lVar12 = lVar7;
          }
          uVar15 = 0x20;
          *(undefined4 *)(lVar1 + 0x90) = 0x20;
          goto LAB_10937b418;
        }
        if (bVar2 == 0x30) goto code_r0x00010937b2d8;
        goto LAB_10937b448;
      }
      if (bVar2 != 0x23) break;
      *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
           *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x600;
      lVar5 = lVar7;
      lVar12 = lVar7;
    }
    if (bVar2 != 0x2b) break;
    *(uint *)((long)param_1 + *(long *)(lVar12 + -0x18) + 8) =
         *(uint *)((long)param_1 + *(long *)(lVar12 + -0x18) + 8) | 0x800;
    *param_2 = 0;
    lVar14 = 1;
  }
LAB_10937b448:
  uVar11 = bVar2 - 0x30;
  bVar3 = uVar11 < 10;
  if (uVar11 < 10) {
    iVar10 = 0;
    do {
      iVar10 = iVar10 * 10 + (uVar15 - 0x30 & 0xff);
      param_4 = param_4 + 1;
      uVar15 = (uint)*param_4;
    } while (uVar15 - 0x30 < 10);
    *(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x18) = (long)iVar10;
    uVar15 = (uint)*param_4;
  }
  if (uVar15 == 0x2a) {
    iVar10 = *param_6;
    if (iVar10 < param_7) {
      *param_6 = iVar10 + 1;
      puVar8 = (ulong *)(param_5 + (long)iVar10 * 0x18);
      uVar6 = *puVar8;
      (*(code *)puVar8[2])();
      lVar7 = *param_1;
      if ((int)uVar6 < 0) {
        lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
        if (*(int *)(lVar5 + 0x90) == -1) {
          __ZNKSt3__18ios_base6getlocEv(&lStack_68,lVar5);
          plVar4 = &lStack_68;
          __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
          (**(code **)(*plVar4 + 0x38))();
          __ZNSt3__16localeD1Ev(&lStack_68);
          *(int *)(lVar5 + 0x90) = (int)plVar4;
          lVar7 = *param_1;
        }
        *(undefined4 *)(lVar5 + 0x90) = 0x20;
        *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
             *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xffffff4f | 0x20;
        uVar6 = (ulong)(uint)-(int)uVar6;
      }
    }
    else {
      uVar6 = 0;
    }
    *(ulong *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x18) = uVar6 & 0xffffffff;
    param_4 = param_4 + 1;
    uVar15 = (uint)*param_4;
    bVar3 = true;
  }
  if (uVar15 != 0x2e) goto LAB_10937b64c;
  pbVar13 = param_4 + 1;
  bVar2 = *pbVar13;
  uVar11 = (uint)bVar2;
  if (bVar2 == 0x2a) {
    pbVar13 = param_4 + 2;
    iVar10 = *param_6;
    if (iVar10 < param_7) {
      *param_6 = iVar10 + 1;
      puVar9 = (undefined8 *)(param_5 + (long)iVar10 * 0x18);
      iVar10 = (int)*puVar9;
      (*(code *)puVar9[2])();
      lVar7 = *param_1;
      param_4 = pbVar13;
    }
    else {
LAB_10937b62c:
      iVar10 = 0;
      param_4 = pbVar13;
    }
  }
  else {
    if (9 < bVar2 - 0x30) {
      if (uVar11 == 0x2d) {
        pbVar13 = param_4 + 2;
        bVar2 = *pbVar13;
        while (bVar2 - 0x30 < 10) {
          pbVar13 = pbVar13 + 1;
          bVar2 = *pbVar13;
        }
      }
      goto LAB_10937b62c;
    }
    iVar10 = 0;
    do {
      iVar10 = iVar10 * 10 + (uVar11 - 0x30 & 0xff);
      pbVar13 = pbVar13 + 1;
      uVar11 = (uint)*pbVar13;
      param_4 = pbVar13;
    } while (uVar11 - 0x30 < 10);
  }
  *(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x10) = (long)iVar10;
LAB_10937b64c:
  bVar2 = *param_4;
  if (bVar2 < 0x58) {
    if (bVar2 < 0x47) {
      if (bVar2 == 0) {
        return param_4;
      }
      if (bVar2 == 0x45) {
        *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
             *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x4000;
code_r0x00010937b738:
        *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
             *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xfffffffb | 0x100;
        lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
        uVar15 = *(uint *)(lVar5 + 8) & 0xffffffb5 | 2;
        goto LAB_10937b794;
      }
      if (bVar2 == 0x46) {
        *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
             *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x4000;
        goto code_r0x00010937b704;
      }
    }
    else {
      if (bVar2 == 0x4c) goto LAB_10937b674;
      if (bVar2 == 0x47) {
        *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
             *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x4000;
        goto code_r0x00010937b6a8;
      }
    }
  }
  else {
    switch(bVar2) {
    case 0x58:
      *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
           *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) | 0x4000;
      goto code_r0x00010937b7b0;
    default:
      goto LAB_10937b86c;
    case 100:
    case 0x69:
    case 0x75:
      uVar11 = 2;
      goto code_r0x00010937b7bc;
    case 0x65:
      goto code_r0x00010937b738;
    case 0x66:
code_r0x00010937b704:
      lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
      uVar15 = *(uint *)(lVar5 + 8) & 0xfffffeff | 4;
      break;
    case 0x67:
code_r0x00010937b6a8:
      *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
           *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xffffffb5 | 2;
      lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
      uVar15 = *(uint *)(lVar5 + 8) & 0xfffffefb;
      break;
    case 0x68:
    case 0x6a:
    case 0x6c:
    case 0x74:
    case 0x7a:
      goto LAB_10937b674;
    case 0x6f:
      uVar11 = 0x40;
      goto code_r0x00010937b7bc;
    case 0x70:
    case 0x78:
      goto code_r0x00010937b7b0;
    case 0x73:
      if (uVar15 == 0x2e) {
        *param_3 = (int)*(undefined8 *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x10);
      }
      lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
      uVar15 = *(uint *)(lVar5 + 8) | 1;
    }
LAB_10937b794:
    *(uint *)(lVar5 + 8) = uVar15;
  }
  goto LAB_10937b86c;
code_r0x00010937b2d8:
  lVar1 = (long)param_1 + *(long *)(lVar12 + -0x18);
  if ((*(byte *)(lVar1 + 8) >> 5 & 1) == 0) {
    if (*(int *)(lVar1 + 0x90) == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_68,lVar1);
      plVar4 = &lStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_68);
      *(int *)(lVar1 + 0x90) = (int)plVar4;
      lVar7 = *param_1;
      lVar5 = lVar7;
    }
    *(undefined4 *)(lVar1 + 0x90) = 0x30;
    uVar15 = 0x10;
    lVar12 = lVar5;
LAB_10937b418:
    *(uint *)((long)param_1 + *(long *)(lVar12 + -0x18) + 8) =
         *(uint *)((long)param_1 + *(long *)(lVar12 + -0x18) + 8) & 0xffffff4f | uVar15;
  }
  goto LAB_10937b270;
LAB_10937b674:
  param_4 = param_4 + 1;
  goto LAB_10937b64c;
code_r0x00010937b7b0:
  uVar11 = 8;
code_r0x00010937b7bc:
  *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
       *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xffffffb5 | uVar11;
  if (uVar15 != 0x2e) {
    bVar3 = true;
  }
  if (!bVar3) {
    *(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x18) =
         *(long *)((long)param_1 + *(long *)(lVar7 + -0x18) + 0x10) + lVar14;
    *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) =
         *(uint *)((long)param_1 + *(long *)(lVar7 + -0x18) + 8) & 0xffffff4f | 0x10;
    lVar5 = (long)param_1 + *(long *)(lVar7 + -0x18);
    if (*(int *)(lVar5 + 0x90) == -1) {
      __ZNKSt3__18ios_base6getlocEv(&lStack_68,lVar5);
      plVar4 = &lStack_68;
      __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
      (**(code **)(*plVar4 + 0x38))();
      __ZNSt3__16localeD1Ev(&lStack_68);
      *(int *)(lVar5 + 0x90) = (int)plVar4;
    }
    *(undefined4 *)(lVar5 + 0x90) = 0x30;
  }
LAB_10937b86c:
  return param_4 + 1;
}



/* Entry: 10937b8b8; end: 10937b947;  */

long * FUN_10937b8b8(long *param_1,undefined8 param_2,long param_3,uint param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  char acStack_68 [16];
  long lStack_58;
  
  if (*(char *)(param_3 + -1) == 'p') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEPKv_1103464a8)
              (param_1,*param_5);
    return param_1;
  }
  lVar8 = *param_5;
  if ((int)param_4 < 0) {
    lVar5 = lVar8;
    _strlen(lVar8);
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
    if (acStack_68[0] == '\x01') {
      lVar1 = (long)param_1 + *(long *)(*param_1 + -0x18);
      lVar9 = *(long *)(lVar1 + 0x28);
      uVar3 = *(uint *)(lVar1 + 8);
      iVar10 = *(int *)(lVar1 + 0x90);
      if (iVar10 == -1) {
        __ZNKSt3__18ios_base6getlocEv(&lStack_58,lVar1);
        plVar4 = &lStack_58;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar4,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar4 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_58);
        iVar10 = (int)plVar4;
        *(int *)(lVar1 + 0x90) = iVar10;
      }
      lVar2 = lVar8 + lVar5;
      if ((uVar3 & 0xb0) != 0x20) {
        lVar2 = lVar8;
      }
      FUN_1092b4f20(lVar9,lVar8,lVar2,lVar8 + lVar5,lVar1,(int)(char)iVar10);
      if (lVar9 == 0) {
        lVar8 = (long)param_1 + *(long *)(*param_1 + -0x18);
        __ZNSt3__18ios_base5clearEj(lVar8,*(uint *)(lVar8 + 0x20) | 5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
    return param_1;
  }
  uVar6 = 0;
  uVar7 = uVar6;
  if (param_4 != 0) {
    do {
      uVar7 = uVar6;
      if (*(char *)(lVar8 + uVar6) == '\0') break;
      uVar6 = uVar6 + 1;
      uVar7 = (ulong)param_4;
    } while (param_4 != uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl_110346480)
            (param_1,lVar8,uVar7);
  return param_1;
}



/* Entry: 10937b948; end: 10937b94f;  */

undefined8 FUN_10937b948(void)

{
  return 0;
}



/* Entry: 10937b950; end: 10937ba87;  */

char * FUN_10937b950(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x01') {
    pcVar4 = (char *)(param_1[1] + 0x38);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\0') {
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        FUN_10937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
      }
      else {
        if (param_1[3] == 0) {
          return (char *)*param_1;
        }
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        FUN_10937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10937ba50);
      (*pcVar2)();
    }
    pcVar4 = (char *)param_1[2];
  }
  return pcVar4;
}



/* Entry: 10937ba88; end: 10937bbbb;  */

void FUN_10937ba88(byte *param_1,uint *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  bVar1 = *param_1;
  if (bVar1 < 6) {
    if (bVar1 == 4) {
      uVar4 = (uint)param_1[8];
      goto LAB_10937bb4c;
    }
    if (bVar1 != 5) {
LAB_10937bad4:
      uVar3 = 0x20;
      ___cxa_allocate_exception(0x20);
      FUN_10937bcec(param_1);
      func_0x000107c31940(auStack_60,param_1);
      FUN_10928a5e0(auStack_48,&UNK_10f567436,auStack_60);
      FUN_10937bbbc(uVar3,0x12e,auStack_48);
      ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10937bb3c);
      (*pcVar2)();
    }
  }
  else {
    if (bVar1 == 7) {
      uVar4 = (uint)*(double *)(param_1 + 8);
      goto LAB_10937bb4c;
    }
    if (bVar1 != 6) goto LAB_10937bad4;
  }
  uVar4 = *(uint *)(param_1 + 8);
LAB_10937bb4c:
  *param_2 = uVar4;
  return;
}



/* Entry: 10937bbbc; end: 10937bceb;  */

void FUN_10937bbbc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  
  func_0x000107c31940(auStack_80,&UNK_10f567453);
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
  *param_1 = &PTR_FUN_110af4538;
  if (lStack_40 < 0) {
    __ZdlPv(ppuStack_50);
  }
  return;
}



/* Entry: 10937bcec; end: 10937bd13;  */

char * FUN_10937bcec(byte *param_1)

{
  if ((ulong)*param_1 < 10) {
    return (&PTR_s_null_110af4590)[*param_1];
  }
  return "number";
}



/* Entry: 10937bd14; end: 10937bd77;  */

void FUN_10937bd14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af44f8;
  __ZNSt13runtime_errorD1Ev(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)(param_1);
  return;
}



/* Entry: 10937bd78; end: 10937c1f3;  */

void FUN_10937bd78(undefined8 *param_1,char *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 ***pppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  undefined8 ****ppppuVar8;
  undefined8 **ppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined8 ****unaff_x25;
  long *plVar14;
  long *plVar15;
  undefined8 **ppuStack_f0;
  undefined8 ***pppuStack_e8;
  undefined8 ****ppppuStack_e0;
  long lStack_d8;
  float fStack_d0;
  undefined8 ***pppuStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 *****pppppuStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  if (*param_2 != '\x01') {
    uVar5 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_2);
    func_0x000107c31940(&ppuStack_f0,param_2);
    FUN_10928a5e0(&pppuStack_c0,&UNK_10f56746f,&ppuStack_f0);
    FUN_10937bbbc(uVar5,0x12e,&pppuStack_c0);
    ___cxa_throw(uVar5,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10937c144);
    (*pcVar1)();
  }
  pppuStack_e8 = (undefined8 ****)0x0;
  ppuStack_f0 = (undefined8 ***)0x0;
  lStack_d8 = 0;
  ppppuStack_e0 = (undefined8 *****)0x0;
  fStack_d0 = 1.0;
  plVar12 = *(undefined8 **)(param_2 + 8) + 1;
  plVar14 = (long *)**(undefined8 **)(param_2 + 8);
  if (plVar14 != plVar12) {
    do {
      FUN_10937c260(&pppppuStack_80,plVar14 + 7);
      if (*(char *)((long)plVar14 + 0x37) < '\0') {
        func_0x000107c3192c(&pppuStack_c0,plVar14[4],plVar14[5]);
      }
      else {
        pppuStack_b8 = (undefined8 ***)plVar14[5];
        pppuStack_c0 = (undefined8 ***)plVar14[4];
        pppuStack_b0 = (undefined8 ***)plVar14[6];
      }
      pppuStack_a0 = pppuStack_78;
      pppppuStack_a8 = pppppuStack_80;
      pppuStack_98 = pppuStack_70;
      pppuStack_78 = (undefined8 ****)0x0;
      pppuStack_70 = (undefined8 ****)0x0;
      pppppuStack_80 = (undefined8 *****)0x0;
      pppppuStack_88 = &pppppuStack_80;
      func_0x000104c607c8(&pppppuStack_88);
      ppppuVar8 = (undefined8 ****)&ppuStack_f0;
      func_0x000107c31944(ppppuVar8,&pppuStack_c0);
      ppppuVar10 = (undefined8 ****)pppuStack_e8;
      if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
        uVar11 = (long)pppuStack_e8 - 1;
        if (((ulong)pppuStack_e8 & uVar11) == 0) {
          unaff_x25 = (undefined8 ****)(uVar11 & (ulong)ppppuVar8);
        }
        else {
          unaff_x25 = ppppuVar8;
          if (pppuStack_e8 <= ppppuVar8) {
            uVar7 = 0;
            if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
              uVar7 = (ulong)ppppuVar8 / (ulong)pppuStack_e8;
            }
            unaff_x25 = (undefined8 ****)((long)ppppuVar8 - uVar7 * (long)pppuStack_e8);
          }
        }
        if ((undefined8 **)ppuStack_f0[(long)unaff_x25] != (undefined8 **)0x0) {
          for (plVar13 = (long *)*ppuStack_f0[(long)unaff_x25]; plVar13 != (long *)0x0;
              plVar13 = (long *)*plVar13) {
            ppppuVar6 = (undefined8 ****)plVar13[1];
            if (ppppuVar6 == ppppuVar8) {
              pppuVar3 = &ppuStack_f0;
              func_0x000104c4fbc4(pppuVar3,plVar13 + 2,&pppuStack_c0);
              if (((ulong)pppuVar3 & 1) != 0) goto LAB_10937c054;
            }
            else {
              if (((ulong)ppppuVar10 & uVar11) == 0) {
                ppppuVar6 = (undefined8 ****)((ulong)ppppuVar6 & uVar11);
              }
              else if (ppppuVar10 <= ppppuVar6) {
                uVar7 = 0;
                if (ppppuVar10 != (undefined8 ****)0x0) {
                  uVar7 = (ulong)ppppuVar6 / (ulong)ppppuVar10;
                }
                ppppuVar6 = (undefined8 ****)((long)ppppuVar6 - uVar7 * (long)ppppuVar10);
              }
              if (ppppuVar6 != unaff_x25) break;
            }
          }
        }
      }
      pppppuVar4 = (undefined8 *****)0x40;
      __Znwm();
      pppuStack_78 = &ppuStack_f0;
      pppuStack_70 = (undefined8 ***)0x0;
      *pppppuVar4 = (undefined8 ****)0x0;
      pppppuVar4[1] = ppppuVar8;
      pppppuStack_80 = pppppuVar4;
      if ((long)pppuStack_b0 < 0) {
        func_0x000107c3192c(pppppuVar4 + 2,pppuStack_c0,pppuStack_b8);
      }
      else {
        pppppuVar4[3] = (undefined8 ****)pppuStack_b8;
        pppppuVar4[2] = (undefined8 ****)pppuStack_c0;
        pppppuVar4[4] = (undefined8 ****)pppuStack_b0;
      }
      pppppuVar4[6] = (undefined8 ****)pppuStack_a0;
      pppppuVar4[5] = pppppuStack_a8;
      pppppuVar4[7] = (undefined8 ****)pppuStack_98;
      pppuStack_a0 = (undefined8 ****)0x0;
      pppuStack_98 = (undefined8 ****)0x0;
      pppppuStack_a8 = (undefined8 ******)0x0;
      pppuStack_70 = (undefined8 ***)CONCAT71(pppuStack_70._1_7_,1);
      if ((ppppuVar10 == (undefined8 ****)0x0) ||
         (fStack_d0 * (float)ppppuVar10 < (float)(lStack_d8 + 1))) {
        uVar11 = 1;
        if ((undefined8 ****)0x2 < ppppuVar10) {
          uVar11 = (ulong)(((ulong)ppppuVar10 & (long)ppppuVar10 - 1U) != 0);
        }
        uVar11 = uVar11 | (long)ppppuVar10 << 1;
        uVar7 = (ulong)((float)(lStack_d8 + 1) / fStack_d0);
        if (uVar11 <= uVar7) {
          uVar11 = uVar7;
        }
        func_0x000107c2ac84(&ppuStack_f0,uVar11);
        ppppuVar10 = (undefined8 ****)pppuStack_e8;
        if (((ulong)pppuStack_e8 & (long)pppuStack_e8 - 1U) == 0) {
          unaff_x25 = (undefined8 ****)((long)pppuStack_e8 - 1U & (ulong)ppppuVar8);
        }
        else {
          unaff_x25 = ppppuVar8;
          if (pppuStack_e8 <= ppppuVar8) {
            uVar11 = 0;
            if ((undefined8 ****)pppuStack_e8 != (undefined8 ****)0x0) {
              uVar11 = (ulong)ppppuVar8 / (ulong)pppuStack_e8;
            }
            unaff_x25 = (undefined8 ****)((long)ppppuVar8 - uVar11 * (long)pppuStack_e8);
          }
        }
      }
      ppuVar9 = (undefined8 **)ppuStack_f0[(long)unaff_x25];
      if (ppuVar9 == (undefined8 **)0x0) {
        *pppppuStack_80 = ppppuStack_e0;
        ppppuStack_e0 = pppppuStack_80;
        ppuStack_f0[(long)unaff_x25] = &ppppuStack_e0;
        if (*pppppuStack_80 != (undefined8 ****)0x0) {
          ppppuVar8 = (undefined8 ****)(*pppppuStack_80)[1];
          if (((ulong)ppppuVar10 & (long)ppppuVar10 - 1U) == 0) {
            ppppuVar8 = (undefined8 ****)((ulong)ppppuVar8 & (long)ppppuVar10 - 1U);
          }
          else if (ppppuVar10 <= ppppuVar8) {
            uVar11 = 0;
            if (ppppuVar10 != (undefined8 ****)0x0) {
              uVar11 = (ulong)ppppuVar8 / (ulong)ppppuVar10;
            }
            ppppuVar8 = (undefined8 ****)((long)ppppuVar8 - uVar11 * (long)ppppuVar10);
          }
          ppuStack_f0[(long)ppppuVar8] = pppppuStack_80;
        }
      }
      else {
        *pppppuStack_80 = (undefined8 ****)*ppuVar9;
        *ppuVar9 = pppppuStack_80;
      }
      lStack_d8 = lStack_d8 + 1;
LAB_10937c054:
      pppppuStack_80 = &pppppuStack_a8;
      func_0x000104c607c8(&pppppuStack_80);
      if ((long)pppuStack_b0 < 0) {
        __ZdlPv(pppuStack_c0);
      }
      plVar13 = (long *)plVar14[1];
      plVar15 = plVar14;
      if ((long *)plVar14[1] == (long *)0x0) {
        do {
          plVar14 = (long *)plVar15[2];
          bVar2 = (long *)*plVar14 != plVar15;
          plVar15 = plVar14;
        } while (bVar2);
      }
      else {
        do {
          plVar14 = plVar13;
          plVar13 = (long *)*plVar14;
        } while ((long *)*plVar14 != (long *)0x0);
      }
    } while (plVar14 != plVar12);
  }
  func_0x00010937cd10(param_1,&ppuStack_f0);
  FUN_109379c18(&ppuStack_f0);
  return;
}



/* Entry: 10937c1f4; end: 10937c25f;  */

void FUN_10937c1f4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar2 = *param_2;
  *param_2 = 0;
  *param_1 = lVar2;
  lVar4 = param_2[2];
  lVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = lVar3;
  param_2[1] = 0;
  lVar3 = param_2[3];
  param_1[3] = lVar3;
  *(int *)(param_1 + 4) = (int)param_2[4];
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar4 + 8);
    uVar6 = param_1[1];
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar5 = uVar6 - 1 & uVar5;
    }
    else if (uVar6 <= uVar5) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar5 / uVar6;
      }
      uVar5 = uVar5 - uVar1 * uVar6;
    }
    *(long **)(lVar2 + uVar5 * 8) = param_1 + 2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  return;
}



/* Entry: 10937c260; end: 10937c2ab;  */

void FUN_10937c260(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10937c2ac(param_2,param_1);
  return;
}



/* Entry: 10937c2ac; end: 10937c3a7;  */

/* WARNING: Removing unreachable block (ram,0x00010937c4d0) */

void FUN_10937c2ac(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte **ppbVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [16];
  
  if (*param_1 != 2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&uStack_60,param_1);
    FUN_10928a5e0(auStack_48,&UNK_10f56748c,&uStack_60);
    FUN_10937bbbc(uVar3,0x12e,auStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10937c350);
    (*pcVar2)();
  }
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  bVar1 = *param_1;
  uVar6 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar6 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar6 = 1;
    }
  }
  func_0x000107c31930(&uStack_60,uVar6);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x8000000000000000;
  bVar1 = *param_1;
  puVar7 = puStack_58;
  pbStack_a0 = param_1;
  pbStack_80 = param_1;
  if (bVar1 == 0) {
    uStack_68 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_70 = **(undefined8 **)(param_1 + 8);
      puStack_98 = (undefined8 *)0x0;
      uStack_88 = 0x8000000000000000;
      uStack_90 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10937c494;
    }
    if (bVar1 == 1) {
      puStack_98 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_78 = **(undefined8 **)(param_1 + 8);
      uStack_88 = 0x8000000000000000;
      uStack_90 = 0;
      goto LAB_10937c494;
    }
    uStack_68 = 0;
  }
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 1;
LAB_10937c494:
  while( true ) {
    ppbVar4 = &pbStack_80;
    FUN_10937c708(ppbVar4,&pbStack_a0);
    if (((ulong)ppbVar4 & 1) != 0) break;
    FUN_10937c560(&pbStack_80);
    FUN_10937c804(auStack_40);
    puVar5 = &uStack_60;
    FUN_10937c950(puVar5,puVar7,auStack_40);
    FUN_10937c698(&pbStack_80);
    puVar7 = puVar5 + 3;
  }
  func_0x000107c3193c(param_2);
  param_2[1] = puStack_58;
  *param_2 = uStack_60;
  param_2[2] = uStack_50;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  uStack_60 = 0;
  pbStack_80 = (byte *)&uStack_60;
  func_0x000104c607c8(&pbStack_80);
  return;
}



/* Entry: 10937c3a8; end: 10937c55f;  */

/* WARNING: Removing unreachable block (ram,0x00010937c4d0) */

void FUN_10937c3a8(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte **ppbVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte *pbStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte *pbStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_40 [32];
  
  uStack_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
  func_0x000107c31930(&uStack_60,uVar4);
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0x8000000000000000;
  bVar1 = *param_1;
  puVar5 = puStack_58;
  pbStack_a0 = param_1;
  pbStack_80 = param_1;
  if (bVar1 == 0) {
    uStack_68 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_70 = **(undefined8 **)(param_1 + 8);
      puStack_98 = (undefined8 *)0x0;
      uStack_88 = 0x8000000000000000;
      uStack_90 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10937c494;
    }
    if (bVar1 == 1) {
      puStack_98 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_78 = **(undefined8 **)(param_1 + 8);
      uStack_88 = 0x8000000000000000;
      uStack_90 = 0;
      goto LAB_10937c494;
    }
    uStack_68 = 0;
  }
  puStack_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  uStack_88 = 1;
LAB_10937c494:
  while( true ) {
    ppbVar2 = &pbStack_80;
    FUN_10937c708(ppbVar2,&pbStack_a0);
    if (((ulong)ppbVar2 & 1) != 0) break;
    FUN_10937c560(&pbStack_80);
    FUN_10937c804(auStack_40);
    puVar3 = &uStack_60;
    FUN_10937c950(puVar3,puVar5,auStack_40);
    FUN_10937c698(&pbStack_80);
    puVar5 = puVar3 + 3;
  }
  func_0x000107c3193c(param_2);
  param_2[1] = puStack_58;
  *param_2 = uStack_60;
  param_2[2] = uStack_50;
  puStack_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  uStack_60 = 0;
  pbStack_80 = (byte *)&uStack_60;
  func_0x000104c607c8(&pbStack_80);
  return;
}



/* Entry: 10937c560; end: 10937c697;  */

char * FUN_10937c560(undefined8 *param_1)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\x01') {
    pcVar4 = (char *)(param_1[1] + 0x38);
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 == '\0') {
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        FUN_10937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
      }
      else {
        if (param_1[3] == 0) {
          return (char *)*param_1;
        }
        uVar3 = 0x20;
        ___cxa_allocate_exception(0x20);
        func_0x000107c31940(auStack_48,&UNK_10f567425);
        FUN_10937951c(uVar3,0xd6,auStack_48);
        ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10937c660);
      (*pcVar2)();
    }
    pcVar4 = (char *)param_1[2];
  }
  return pcVar4;
}



/* Entry: 10937c698; end: 10937c707;  */

void FUN_10937c698(undefined8 *param_1)

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



/* Entry: 10937c708; end: 10937c803;  */

bool FUN_10937c708(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  if ((char *)*param_1 == (char *)*param_2) {
    cVar1 = *(char *)*param_1;
    if (cVar1 == '\x02') {
      lVar4 = param_1[2];
      lVar5 = param_2[2];
    }
    else if (cVar1 == '\x01') {
      lVar4 = param_1[1];
      lVar5 = param_2[1];
    }
    else {
      lVar4 = param_1[3];
      lVar5 = param_2[3];
    }
    return lVar4 == lVar5;
  }
  uVar3 = 0x20;
  ___cxa_allocate_exception(0x20);
  func_0x000107c31940(auStack_48,&UNK_10f5673d2);
  FUN_10937951c(uVar3,0xd4,auStack_48);
  ___cxa_throw(uVar3,&PTR_DAT_110af4550,FUN_10937964c);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10937c7cc);
  (*pcVar2)();
}



/* Entry: 10937c804; end: 10937c84b;  */

void FUN_10937c804(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10937c84c(param_2,param_1);
  return;
}



/* Entry: 10937c84c; end: 10937c94f;  */

void FUN_10937c84c(char *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (*param_1 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5__110346350
    )(param_2,*(undefined8 *)(param_1 + 8));
    return;
  }
  uVar2 = 0x20;
  ___cxa_allocate_exception(0x20);
  FUN_10937bcec(param_1);
  func_0x000107c31940(auStack_60,param_1);
  FUN_10928a5e0(auStack_48,&UNK_10f5674a8,auStack_60);
  FUN_10937bbbc(uVar2,0x12e,auStack_48);
  ___cxa_throw(uVar2,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937c8f8);
  (*pcVar1)();
}



/* Entry: 10937c950; end: 10937cb07;  */

ulong * FUN_10937c950(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uStack_b8;
  undefined8 *puStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar1 = (ulong *)param_1[1];
  if (puVar1 < (ulong *)param_1[2]) {
    puVar10 = param_2;
    if (param_2 == puVar1) {
      uVar8 = param_3[1];
      uVar5 = *param_3;
      puVar1[2] = param_3[2];
      puVar1[1] = uVar8;
      *puVar1 = uVar5;
      param_3[1] = 0;
      param_3[2] = 0;
      *param_3 = 0;
      param_1[1] = (ulong)(puVar1 + 3);
    }
    else {
      func_0x000107c283b8(param_1,param_2,puVar1,param_2 + 3);
      if (*(char *)((long)param_2 + 0x17) < '\0') {
        __ZdlPv(*param_2);
      }
      uVar8 = param_3[1];
      uVar5 = *param_3;
      param_2[2] = param_3[2];
      param_2[1] = uVar8;
      *param_2 = uVar5;
      *(undefined1 *)((long)param_3 + 0x17) = 0;
      *(undefined1 *)param_3 = 0;
    }
  }
  else {
    uVar5 = *param_1;
    uVar8 = ((long)((long)puVar1 - uVar5) >> 3) * -0x5555555555555555 + 1;
    if (0xaaaaaaaaaaaaaaa < uVar8) {
      func_0x000104c60770();
      func_0x000107c31938(&puStack_58);
      __Unwind_Resume();
      puVar10 = (ulong *)param_1[2];
      puVar1 = param_1;
      puVar2 = puVar10;
      if (puVar10 == (ulong *)param_1[3]) {
        puVar1 = (ulong *)*param_1;
        puVar2 = (ulong *)param_1[1];
        if (puVar2 < puVar1 || (long)puVar2 - (long)puVar1 == 0) {
          uVar5 = ((long)puVar10 - (long)puVar1 >> 3) * 0x5555555555555556;
          if ((long)puVar10 - (long)puVar1 == 0) {
            uVar5 = 1;
          }
          uVar6 = uVar5 >> 2;
          uVar8 = param_1[4];
          uStack_98 = uVar8;
          func_0x000104c60784();
          puVar4 = (undefined8 *)(uVar8 + uVar6 * 0x18);
          uStack_a8 = param_1[2];
          puStack_b0 = (undefined8 *)param_1[1];
          lVar3 = uStack_a8 - (long)puStack_b0;
          puVar7 = puVar4;
          if (lVar3 != 0) {
            puVar7 = (undefined8 *)((long)puVar4 + lVar3);
            puVar9 = puVar4;
            do {
              uVar12 = puStack_b0[1];
              uVar11 = *puStack_b0;
              puVar9[2] = puStack_b0[2];
              puVar9[1] = uVar12;
              *puVar9 = uVar11;
              puStack_b0[1] = 0;
              puStack_b0[2] = 0;
              *puStack_b0 = 0;
              lVar3 = lVar3 + -0x18;
              puStack_b0 = puStack_b0 + 3;
              puVar9 = puVar9 + 3;
            } while (lVar3 != 0);
            uStack_a8 = param_1[2];
            puStack_b0 = (undefined8 *)param_1[1];
          }
          uStack_b8 = *param_1;
          *param_1 = uVar8;
          param_1[1] = (ulong)puVar4;
          uStack_a0 = param_1[3];
          param_1[2] = (ulong)puVar7;
          param_1[3] = uVar8 + uVar5 * 0x18;
          puVar1 = &uStack_b8;
          func_0x000107c31938(puVar1);
          puVar2 = (ulong *)param_1[2];
        }
        else {
          lVar3 = ((long)puVar2 - (long)puVar1 >> 3) * -0x5555555555555555 + 1;
          uVar5 = lVar3 - (lVar3 >> 0x3f);
          lVar3 = (uVar5 >> 1) * -2 - (uVar5 >> 1);
          puVar1 = &uStack_b8;
          func_0x00010937cc58(puVar1,puVar2,puVar10,puVar2 + lVar3);
          param_1[1] = param_1[1] + lVar3 * 8;
          param_1[2] = (ulong)puVar2;
        }
      }
      uVar8 = param_2[1];
      uVar5 = *param_2;
      puVar2[2] = param_2[2];
      puVar2[1] = uVar8;
      *puVar2 = uVar5;
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = 0;
      param_1[2] = param_1[2] + 0x18;
      return puVar1;
    }
    lVar3 = (long)((long)param_1[2] - uVar5) >> 3;
    uVar6 = lVar3 * 0x5555555555555556;
    if (uVar6 < uVar8 || uVar6 - uVar8 == 0) {
      uVar6 = uVar8;
    }
    if (0x555555555555554 < (ulong)(lVar3 * -0x5555555555555555)) {
      uVar6 = 0xaaaaaaaaaaaaaaa;
    }
    puStack_38 = param_1;
    if (uVar6 == 0) {
      puVar1 = (ulong *)0x0;
    }
    else {
      puVar1 = param_1;
      func_0x000104c60784();
    }
    puStack_50 = (ulong *)((long)puVar1 + ((long)param_2 - uVar5));
    puStack_40 = puVar1 + uVar6 * 3;
    puStack_58 = puVar1;
    puStack_48 = puStack_50;
    FUN_10937cb08(&puStack_58,param_3);
    puVar10 = puStack_50;
    _memcpy(puStack_48,param_2,param_1[1] - (long)param_2);
    puStack_48 = (ulong *)((long)puStack_48 + (param_1[1] - (long)param_2));
    param_1[1] = (ulong)param_2;
    uVar5 = (long)puStack_50 - ((long)param_2 - *param_1);
    _memcpy(uVar5);
    puStack_58 = (ulong *)*param_1;
    *param_1 = uVar5;
    uVar5 = param_1[2];
    param_1[2] = (ulong)puStack_40;
    param_1[1] = (ulong)puStack_48;
    puStack_50 = puStack_58;
    puStack_48 = puStack_58;
    puStack_40 = (ulong *)uVar5;
    func_0x000107c31938(&puStack_58);
  }
  return puVar10;
}



/* Entry: 10937cb08; end: 10937ccc7;  */

void FUN_10937cb08(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uStack_58;
  undefined8 *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  puVar5 = (undefined8 *)param_1[2];
  puVar4 = puVar5;
  if (puVar5 == (undefined8 *)param_1[3]) {
    puVar6 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)param_1[1];
    if (puVar4 < puVar6 || (long)puVar4 - (long)puVar6 == 0) {
      uVar3 = ((long)puVar5 - (long)puVar6 >> 3) * 0x5555555555555556;
      if ((long)puVar5 - (long)puVar6 == 0) {
        uVar3 = 1;
      }
      uVar7 = uVar3 >> 2;
      uVar1 = param_1[4];
      uStack_38 = uVar1;
      func_0x000104c60784();
      puVar4 = (undefined8 *)(uVar1 + uVar7 * 0x18);
      uStack_48 = param_1[2];
      puStack_50 = (undefined8 *)param_1[1];
      lVar2 = uStack_48 - (long)puStack_50;
      puVar5 = puVar4;
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)((long)puVar4 + lVar2);
        puVar6 = puVar4;
        do {
          uVar9 = puStack_50[1];
          uVar8 = *puStack_50;
          puVar6[2] = puStack_50[2];
          puVar6[1] = uVar9;
          *puVar6 = uVar8;
          puStack_50[1] = 0;
          puStack_50[2] = 0;
          *puStack_50 = 0;
          lVar2 = lVar2 + -0x18;
          puStack_50 = puStack_50 + 3;
          puVar6 = puVar6 + 3;
        } while (lVar2 != 0);
        uStack_48 = param_1[2];
        puStack_50 = (undefined8 *)param_1[1];
      }
      uStack_58 = *param_1;
      *param_1 = uVar1;
      param_1[1] = (ulong)puVar4;
      uStack_40 = param_1[3];
      param_1[2] = (ulong)puVar5;
      param_1[3] = uVar1 + uVar3 * 0x18;
      func_0x000107c31938(&uStack_58);
      puVar4 = (undefined8 *)param_1[2];
    }
    else {
      lVar2 = ((long)puVar4 - (long)puVar6 >> 3) * -0x5555555555555555 + 1;
      uVar3 = lVar2 - (lVar2 >> 0x3f);
      lVar2 = (uVar3 >> 1) * -2 - (uVar3 >> 1);
      func_0x00010937cc58(&uStack_58,puVar4,puVar5,puVar4 + lVar2);
      param_1[1] = param_1[1] + lVar2 * 8;
      param_1[2] = (ulong)puVar4;
    }
  }
  uVar9 = param_2[1];
  uVar8 = *param_2;
  puVar4[2] = param_2[2];
  puVar4[1] = uVar9;
  *puVar4 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[2] = param_1[2] + 0x18;
  return;
}



/* Entry: 10937ccc8; end: 10937cf13;  */

void FUN_10937ccc8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000109379c8c(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10937cf14; end: 10937cf5b;  */

void FUN_10937cf14(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10937cf5c(param_2,param_1);
  return;
}



/* Entry: 10937cf5c; end: 10937d057;  */

void FUN_10937cf5c(byte *param_1,long *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  byte **ppbVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  if (*param_1 != 2) {
    uVar3 = 0x20;
    ___cxa_allocate_exception(0x20);
    FUN_10937bcec(param_1);
    func_0x000107c31940(&pbStack_60,param_1);
    FUN_10928a5e0(&uStack_48,&UNK_10f56748c,&pbStack_60);
    FUN_10937bbbc(uVar3,0x12e,&uStack_48);
    ___cxa_throw(uVar3,&PTR_DAT_110af4510,FUN_10937bd14);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10937d000);
    (*pcVar2)();
  }
  lStack_40 = 0;
  lStack_38 = 0;
  bVar1 = *param_1;
  uVar6 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar6 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar6 = 1;
    }
  }
  func_0x000107c27e9c(&lStack_40,uVar6);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar7 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10937d144;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_10937d144;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_10937d144:
  while( true ) {
    ppbVar4 = &pbStack_60;
    FUN_10937c708(ppbVar4,&pbStack_80);
    if (((ulong)ppbVar4 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10937ba88();
    plVar5 = &lStack_40;
    func_0x0001078db2bc(plVar5,lVar7,&stack0xffffffffffffffdc);
    FUN_10937c698(&pbStack_60);
    lVar7 = (long)plVar5 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = 0;
  return;
}



/* Entry: 10937d058; end: 10937d1e3;  */

void FUN_10937d058(byte *param_1,long *param_2)

{
  byte bVar1;
  byte **ppbVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  byte *pbStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 auStack_24 [4];
  
  lStack_40 = 0;
  lStack_38 = 0;
  lStack_30 = 0;
  bVar1 = *param_1;
  uVar4 = (ulong)bVar1;
  if (bVar1 != 0) {
    if (bVar1 == 1) {
      uVar4 = *(ulong *)(*(long *)(param_1 + 8) + 0x10);
    }
    else if (bVar1 == 2) {
      uVar4 = (*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8) >> 4;
    }
    else {
      uVar4 = 1;
    }
  }
  func_0x000107c27e9c(&lStack_40,uVar4);
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0x8000000000000000;
  bVar1 = *param_1;
  lVar5 = lStack_38;
  pbStack_80 = param_1;
  pbStack_60 = param_1;
  if (bVar1 == 0) {
    uStack_48 = 1;
  }
  else {
    if (bVar1 == 2) {
      uStack_50 = **(undefined8 **)(param_1 + 8);
      puStack_78 = (undefined8 *)0x0;
      uStack_68 = 0x8000000000000000;
      uStack_70 = (*(undefined8 **)(param_1 + 8))[1];
      goto LAB_10937d144;
    }
    if (bVar1 == 1) {
      puStack_78 = *(undefined8 **)(param_1 + 8) + 1;
      uStack_58 = **(undefined8 **)(param_1 + 8);
      uStack_68 = 0x8000000000000000;
      uStack_70 = 0;
      goto LAB_10937d144;
    }
    uStack_48 = 0;
  }
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 1;
LAB_10937d144:
  while( true ) {
    ppbVar2 = &pbStack_60;
    FUN_10937c708(ppbVar2,&pbStack_80);
    if (((ulong)ppbVar2 & 1) != 0) break;
    FUN_10937c560(&pbStack_60);
    FUN_10937ba88();
    plVar3 = &lStack_40;
    func_0x0001078db2bc(plVar3,lVar5,auStack_24);
    FUN_10937c698(&pbStack_60);
    lVar5 = (long)plVar3 + 4;
  }
  if (*param_2 != 0) {
    param_2[1] = *param_2;
    __ZdlPv();
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  param_2[1] = lStack_38;
  *param_2 = lStack_40;
  param_2[2] = lStack_30;
  return;
}



/* Entry: 10937d1e4; end: 10937d343;  */

void FUN_10937d1e4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_1092a9afc();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10937d344; end: 10937d3cf;  */

void FUN_10937d344(undefined8 param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined8 uVar6;
  int iVar10;
  undefined8 uVar11;
  int iStack_20;
  int iStack_1c;
  undefined8 uStack_18;
  
  uVar4 = NEON_rev64(**(undefined8 **)(param_2 + 0x40),4);
  uVar11 = *param_3;
  uVar6 = NEON_smax(uVar11,0,4);
  uVar4 = NEON_smin(CONCAT44((int)((ulong)param_3[1] >> 0x20) + (int)((ulong)uVar11 >> 0x20),
                             (int)param_3[1] + (int)uVar11),uVar4,4);
  iVar3 = (int)uVar4 - (int)uVar6;
  iVar10 = (int)((ulong)uVar6 >> 0x20);
  iVar5 = (int)((ulong)uVar4 >> 0x20) - iVar10;
  bVar1 = iVar3 < 1;
  bVar2 = iVar5 < 1;
  iStack_20 = 0;
  if (!bVar1 && !bVar2) {
    iStack_20 = (int)uVar6;
  }
  iStack_1c = 0;
  if (!bVar1 && !bVar2) {
    iStack_1c = iVar10;
  }
  iVar10 = -(uint)(bVar1 || bVar2);
  bVar7 = (byte)((uint)iVar10 >> 8);
  bVar8 = (byte)((uint)iVar10 >> 0x10);
  bVar9 = (byte)((uint)iVar10 >> 0x18);
  uStack_18 = CONCAT17((byte)((uint)iVar5 >> 0x18) & ~bVar9,
                       CONCAT16((byte)((uint)iVar5 >> 0x10) & ~bVar8,
                                CONCAT15((byte)((uint)iVar5 >> 8) & ~bVar7,
                                         CONCAT14((byte)iVar5 & ~(byte)iVar10,
                                                  CONCAT13((byte)((uint)iVar3 >> 0x18) & ~bVar9,
                                                           CONCAT12((byte)((uint)iVar3 >> 0x10) &
                                                                    ~bVar8,CONCAT11((byte)((uint)
                                                  iVar3 >> 8) & ~bVar7,(byte)iVar3 & ~(byte)iVar10))
                                                  )))));
  FUN_109a852c8(param_1,param_2,&iStack_20);
  return;
}



/* Entry: 10937d3d0; end: 10937d46b;  */

void FUN_10937d3d0(long param_1,int *param_2)

{
  undefined4 uVar1;
  int iStack_58;
  int iStack_54;
  undefined4 auStack_50 [2];
  long lStack_48;
  undefined8 uStack_40;
  undefined4 auStack_38 [2];
  long lStack_30;
  undefined8 uStack_28;
  
  iStack_58 = *param_2;
  iStack_54 = param_2[1];
  uVar1 = 2;
  if (iStack_54 * iStack_58 < **(int **)(param_1 + 0x40) * (*(int **)(param_1 + 0x40))[1]) {
    uVar1 = 3;
  }
  uStack_28 = 0;
  auStack_38[0] = 0x1010000;
  auStack_50[0] = 0x2010000;
  uStack_40 = 0;
  lStack_48 = param_1;
  lStack_30 = param_1;
  FUN_109b0f718(0,0,auStack_38,auStack_50,&iStack_58,uVar1);
  auStack_38[0] = 0x2010000;
  uStack_28 = 0;
  lStack_30 = param_1;
  FUN_109a41858(0x3f70101010101010,0,param_1,auStack_38,5);
  return;
}



/* Entry: 10937d46c; end: 10937d51f;  */

int * FUN_10937d46c(int *param_1,int param_2,int param_3,undefined8 *param_4,double *param_5,
                   double *param_6)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 6) = param_4[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  dVar2 = *param_5;
  *(double *)(param_1 + 10) = param_5[1];
  *(double *)(param_1 + 8) = dVar2;
  dVar2 = ((double)param_2 / 2.0) / *param_5;
  _atan();
  dVar3 = ((double)param_3 / 2.0) / param_5[1];
  _atan();
  *(double *)(param_1 + 0xe) = dVar3 + dVar3;
  *(double *)(param_1 + 0xc) = dVar2 + dVar2;
  dVar2 = *param_6;
  *(double *)(param_1 + 0x12) = param_6[1];
  *(double *)(param_1 + 0x10) = dVar2;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if ((*param_6 != 0.0) || (param_6[1] != 0.0)) {
    param_1[0x14] = 1;
  }
  return param_1;
}



/* Entry: 10937d520; end: 10937d5c3;  */

int * FUN_10937d520(int *param_1,int param_2,int param_3,undefined8 *param_4,double *param_5,
                   int param_6,undefined8 param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  uVar1 = *param_4;
  *(undefined8 *)(param_1 + 6) = param_4[1];
  *(undefined8 *)(param_1 + 4) = uVar1;
  dVar2 = *param_5;
  *(double *)(param_1 + 10) = param_5[1];
  *(double *)(param_1 + 8) = dVar2;
  dVar2 = ((double)param_2 / 2.0) / *param_5;
  _atan();
  dVar3 = ((double)param_3 / 2.0) / param_5[1];
  _atan();
  *(double *)(param_1 + 0xe) = dVar3 + dVar3;
  *(double *)(param_1 + 0xc) = dVar2 + dVar2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_6;
  FUN_10937da58(param_1 + 0x16,param_7);
  return param_1;
}



/* Entry: 10937d5c4; end: 10937d723;  */

bool FUN_10937d5c4(long param_1,double *param_2,double *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar7 = param_3[2];
  dVar8 = *param_3 / dVar7;
  dVar9 = param_3[1] / dVar7;
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 3) {
    dVar10 = dVar8 * dVar8 + dVar9 * dVar9;
    puVar2 = *(undefined8 **)(param_1 + 0x58);
    uStack_78 = puVar2[1];
    uStack_80 = *puVar2;
    uStack_68 = puVar2[3];
    uStack_70 = puVar2[2];
    uStack_58 = puVar2[5];
    uStack_60 = puVar2[4];
    uStack_48 = puVar2[7];
    uStack_50 = puVar2[6];
    dVar3 = SQRT(dVar10);
    FUN_10937d724(&uStack_80);
    dVar5 = (double)puVar2[9];
    dVar4 = (double)puVar2[8];
    dVar6 = (dVar5 + dVar5) * dVar8;
    dVar8 = dVar8 * dVar3 +
            (dVar10 + dVar8 * (dVar8 + dVar8)) * dVar5 + (dVar4 + dVar4) * dVar8 * dVar9;
    dVar9 = dVar9 * dVar3 + dVar6 * dVar9 + (dVar10 + (dVar9 + dVar9) * dVar9) * dVar4;
  }
  else {
    if (iVar1 == 2) {
      puVar2 = *(undefined8 **)(param_1 + 0x58);
      uStack_78 = puVar2[1];
      uStack_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
      uStack_58 = puVar2[5];
      uStack_60 = puVar2[4];
      uStack_48 = puVar2[7];
      uStack_50 = puVar2[6];
      dVar3 = SQRT(dVar8 * dVar8 + dVar9 * dVar9);
      FUN_10937d724(&uStack_80);
    }
    else {
      if ((iVar1 != 1) || (dVar3 = dVar8 * dVar8 + dVar9 * dVar9, 1.2 <= dVar3)) goto LAB_10937d6f4;
      dVar3 = dVar3 * *(double *)(param_1 + 0x40) + 1.0 +
              dVar3 * dVar3 * *(double *)(param_1 + 0x48);
    }
    dVar8 = dVar8 * dVar3;
    dVar9 = dVar9 * dVar3;
  }
LAB_10937d6f4:
  dVar4 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x20);
  param_2[1] = dVar9 * *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x18);
  *param_2 = dVar8 * dVar3 + dVar4;
  return 0.0 < dVar7;
}



/* Entry: 10937d724; end: 10937d7c7;  */

double FUN_10937d724(double param_1,double *param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double adStack_70 [8];
  
  dVar2 = 1.0;
  if (1e-05 < param_1) {
    dVar2 = param_1;
    _atan();
    lVar1 = 8;
    dVar3 = dVar2;
    do {
      dVar3 = dVar2 * dVar2 * dVar3;
      *(double *)((long)adStack_70 + lVar1) = dVar3;
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x40);
    dVar2 = (*param_2 * dVar2 + param_2[2] * adStack_70[2] +
             param_2[4] * adStack_70[4] + param_2[6] * adStack_70[6] +
            param_2[1] * adStack_70[1] + param_2[3] * adStack_70[3] +
            param_2[5] * adStack_70[5] + param_2[7] * adStack_70[7]) / param_1;
  }
  return dVar2;
}



/* Entry: 10937d7c8; end: 10937d99b;  */

void FUN_10937d7c8(double *param_1,long param_2,double *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  dVar3 = (*param_3 - *(double *)(param_2 + 0x10)) / *(double *)(param_2 + 0x20);
  dVar5 = (param_3[1] - *(double *)(param_2 + 0x18)) / *(double *)(param_2 + 0x28);
  param_1[1] = dVar5;
  *param_1 = dVar3;
  iVar1 = *(int *)(param_2 + 0x50);
  dVar9 = dVar3;
  dVar10 = dVar5;
  if (iVar1 == 1) {
    iVar1 = 0xf;
    do {
      dVar4 = dVar9 * dVar9 + dVar10 * dVar10;
      if (ABS(dVar4) < 1e-08) break;
      dVar10 = dVar4 * *(double *)(param_2 + 0x40) + 1.0 +
               dVar4 * dVar4 * *(double *)(param_2 + 0x48);
      dVar9 = dVar3 / dVar10;
      dVar10 = dVar5 / dVar10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  else if (iVar1 == 2) {
    iVar1 = 0xf;
    dVar4 = 0.0;
    do {
      dVar11 = dVar9 * dVar9 + dVar10 * dVar10;
      if (ABS(dVar11 - dVar4) < 1e-08) break;
      puVar2 = *(undefined8 **)(param_2 + 0x58);
      uStack_78 = puVar2[1];
      uStack_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
      uStack_58 = puVar2[5];
      uStack_60 = puVar2[4];
      uStack_48 = puVar2[7];
      uStack_50 = puVar2[6];
      dVar10 = SQRT(dVar11);
      FUN_10937d724(&uStack_80);
      dVar9 = dVar3 / dVar10;
      dVar10 = dVar5 / dVar10;
      iVar1 = iVar1 + -1;
      dVar4 = dVar11;
    } while (iVar1 != 0);
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    iVar1 = 0xf;
    dVar4 = 0.0;
    do {
      dVar11 = dVar9 * dVar9 + dVar10 * dVar10;
      if (ABS(dVar11 - dVar4) < 1e-08) break;
      puVar2 = *(undefined8 **)(param_2 + 0x58);
      uStack_78 = puVar2[1];
      uStack_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
      uStack_58 = puVar2[5];
      uStack_60 = puVar2[4];
      uStack_48 = puVar2[7];
      uStack_50 = puVar2[6];
      dVar4 = SQRT(dVar11);
      FUN_10937d724(&uStack_80);
      dVar7 = (double)puVar2[9];
      dVar6 = (double)puVar2[8];
      dVar8 = (dVar7 + dVar7) * dVar9;
      dVar9 = (dVar3 - ((dVar11 + dVar9 * (dVar9 + dVar9)) * dVar7 +
                       (dVar6 + dVar6) * dVar9 * dVar10)) / dVar4;
      dVar10 = (dVar5 - (dVar8 * dVar10 + (dVar11 + (dVar10 + dVar10) * dVar10) * dVar6)) / dVar4;
      iVar1 = iVar1 + -1;
      dVar4 = dVar11;
    } while (iVar1 != 0);
  }
  param_1[1] = dVar10;
  *param_1 = dVar9;
  return;
}



/* Entry: 10937d99c; end: 10937da57;  */

double FUN_10937d99c(double param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double adStack_70 [8];
  
  if (*(int *)(param_2 + 0x50) == 2) {
    dVar5 = SQRT(*(double *)(param_2 + 0x20) * *(double *)(param_2 + 0x20) +
                 *(double *)(param_2 + 0x28) * *(double *)(param_2 + 0x28));
    dVar3 = param_1;
    _atan2(param_1,dVar5);
    lVar1 = 8;
    dVar4 = dVar3;
    do {
      dVar4 = dVar3 * dVar3 * dVar4;
      *(double *)((long)adStack_70 + lVar1) = dVar4;
      lVar1 = lVar1 + 8;
    } while (lVar1 != 0x40);
    pdVar2 = *(double **)(param_2 + 0x58);
    return (dVar3 * *pdVar2 + adStack_70[2] * pdVar2[2] +
            adStack_70[4] * pdVar2[4] + adStack_70[6] * pdVar2[6] +
           adStack_70[1] * pdVar2[1] + adStack_70[3] * pdVar2[3] +
           adStack_70[5] * pdVar2[5] + adStack_70[7] * pdVar2[7]) * dVar5 - param_1;
  }
  return 0.0;
}



/* Entry: 10937da58; end: 10937dadb;  */

long * FUN_10937da58(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 != 0) {
    if (uVar2 >> 0x3d == 0) {
      lVar1 = uVar2 << 3;
      _malloc();
      if (lVar1 != 0) goto LAB_10937dab0;
    }
    ___cxa_allocate_exception(8);
    __ZNSt9bad_allocC1Ev();
    ___cxa_throw();
  }
  lVar1 = 0;
LAB_10937dab0:
  *param_1 = lVar1;
  param_1[1] = uVar2;
  if (*(long *)(param_2 + 8) != 0) {
    _memcpy();
  }
  return param_1;
}



/* Entry: 10937dadc; end: 10937dadf;  */

long * FUN_10937dadc(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10937dae0; end: 10937dd37;  */

void FUN_10937dae0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined ***pppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puStack_88;
  ulong uStack_80;
  char cStack_71;
  int iStack_6c;
  undefined **ppuStack_68;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10937dd38(param_1,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
  puVar9 = (undefined8 *)*param_2;
  puVar1 = (undefined8 *)param_2[1];
  do {
    if (puVar9 == puVar1) {
      return;
    }
    uStack_80 = puVar9[1];
    puStack_88 = (undefined8 *)*puVar9;
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      uStack_80 = (ulong)*(byte *)((long)puVar9 + 0x17);
      puStack_88 = puVar9;
    }
    ppuStack_68 = &PTR_DAT_110b3c700;
    pppuVar4 = &ppuStack_68;
    func_0x000109cd2dd8(pppuVar4,&puStack_88);
    if (pppuVar4 == (undefined ***)&PTR_DAT_110b3ca00) {
      iStack_6c = 0;
LAB_10937db94:
      lVar11 = (long)*(char *)((long)puVar9 + 0x17);
      puVar12 = puVar9;
      if (lVar11 < 0) {
        lVar11 = puVar9[1];
        puVar12 = (undefined8 *)*puVar9;
      }
      uVar5 = uRam0000000113732cf8;
      func_0x000107c2ac8c(uRam0000000113732cf8,puVar12,lVar11);
      uVar3 = uRam0000000113732d08;
      if (uRam0000000113732d08 != 0) {
        uVar10 = uRam0000000113732d08 - 1;
        if ((uRam0000000113732d08 & uVar10) == 0) {
          uVar13 = uVar10 & uVar5;
        }
        else {
          uVar13 = uVar5;
          if (uRam0000000113732d08 <= uVar5) {
            uVar13 = 0;
            if (uRam0000000113732d08 != 0) {
              uVar13 = uVar5 / uRam0000000113732d08;
            }
            uVar13 = uVar5 - uVar13 * uRam0000000113732d08;
          }
        }
        plVar7 = *(long **)(lRam0000000113732d00 + uVar13 * 8);
        if (plVar7 != (long *)0x0) {
          for (plVar7 = (long *)*plVar7; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
            uVar8 = plVar7[1];
            if (uVar5 == uVar8) {
              if (plVar7[3] == lVar11) {
                uVar6 = plVar7[2];
                _memcmp(uVar6,puVar12,lVar11);
                if ((int)uVar6 == 0) {
                  iStack_6c = *(int *)(plVar7 + 4);
                  break;
                }
              }
            }
            else {
              if ((uVar3 & uVar10) == 0) {
                uVar8 = uVar8 & uVar10;
              }
              else if (uVar3 <= uVar8) {
                uVar2 = 0;
                if (uVar3 != 0) {
                  uVar2 = uVar8 / uVar3;
                }
                uVar8 = uVar8 - uVar2 * uVar3;
              }
              if (uVar8 != uVar13) break;
            }
          }
        }
      }
      if (iStack_6c != 0) goto LAB_10937dc74;
      FUN_10937de88(&puStack_88,&UNK_10f5675b5,puVar9);
      FUN_109388c6c(1,&UNK_10f567521,&UNK_10f5675a3,0x28,&puStack_88);
      if (cStack_71 < '\0') {
        __ZdlPv(puStack_88);
      }
    }
    else {
      iStack_6c = *(int *)(pppuVar4 + 2);
      if (iStack_6c == 0) goto LAB_10937db94;
LAB_10937dc74:
      func_0x00010937ddc4(param_1,&iStack_6c);
    }
    puVar9 = puVar9 + 3;
  } while( true );
}



/* Entry: 10937dd38; end: 10937de87;  */

void FUN_10937dd38(long *param_1,undefined4 *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 extraout_x8;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined1 auStack_1c0 [56];
  undefined8 uStack_188;
  char cStack_171;
  undefined **appuStack_160 [19];
  undefined4 **ppuStack_c8;
  undefined4 uStack_c0;
  undefined4 *puStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  
  lVar4 = *param_1;
  if ((undefined4 *)(param_1[2] - lVar4 >> 2) < param_2) {
    if ((ulong)param_2 >> 0x3e != 0) {
      FUN_10937df9c();
      puVar2 = (undefined4 *)param_1[1];
      if (puVar2 < (undefined4 *)param_1[2]) {
        puVar9 = puVar2 + 1;
        *puVar2 = *param_2;
      }
      else {
        lVar4 = (long)puVar2 - *param_1;
        uVar1 = (lVar4 >> 2) + 1;
        if (uVar1 >> 0x3e != 0) {
          FUN_10937df9c();
          FUN_10926db08(&ppuStack_1d0);
          ppuStack_c8 = &puStack_b8;
          uStack_c0 = 1;
          pcStack_b0 = FUN_10937e02c;
          uStack_a8 = 0x10937e058;
          puStack_b8 = param_2;
          FUN_10937ad5c(&ppuStack_1d0,param_1,ppuStack_c8,1);
          FUN_10926dc5c(extraout_x8,&ppuStack_1c8,&ppuStack_c8);
          appuStack_160[0] = &PTR_DAT_11088d708;
          ppuStack_1d0 = &PTR_SUB_11088d6e0;
          ppuStack_1c8 = &PTR_DAT_11088d7b0;
          if (cStack_171 < '\0') {
            __ZdlPv(uStack_188);
          }
          ppuStack_1c8 = (undefined **)
                         (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10
                         );
          __ZNSt3__16localeD1Ev(auStack_1c0);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_1d0,&PTR_PTR_11088d720);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_160);
          return;
        }
        uVar5 = param_1[2] - *param_1;
        uVar7 = (long)uVar5 >> 1;
        if (uVar7 <= uVar1) {
          uVar7 = uVar1;
        }
        if (0x7ffffffffffffffb < uVar5) {
          uVar7 = 0x3fffffffffffffff;
        }
        plVar3 = param_1;
        FUN_10937dfb0();
        lVar6 = *param_1;
        puVar2 = (undefined4 *)((long)plVar3 + lVar4);
        lVar8 = (long)puVar2 - (param_1[1] - lVar6);
        puVar9 = puVar2 + 1;
        *puVar2 = *param_2;
        _memcpy(lVar8,lVar6);
        lVar4 = *param_1;
        *param_1 = lVar8;
        param_1[1] = (long)puVar9;
        param_1[2] = (long)plVar3 + uVar7 * 4;
        if (lVar4 != 0) {
          __ZdlPv();
        }
      }
      param_1[1] = (long)puVar9;
      return;
    }
    lVar6 = param_1[1];
    plVar3 = param_1;
    FUN_10937dfb0();
    lVar4 = (long)plVar3 + (lVar6 - lVar4);
    lVar8 = lVar4 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    lVar6 = *param_1;
    *param_1 = lVar8;
    param_1[1] = lVar4;
    param_1[2] = (long)plVar3 + (long)param_2 * 4;
    if (lVar6 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return;
    }
  }
  return;
}



/* Entry: 10937de88; end: 10937df9b;  */

void FUN_10937de88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined1 auStack_160 [56];
  undefined8 uStack_128;
  char cStack_111;
  undefined **appuStack_100 [19];
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  FUN_10926db08(&ppuStack_170);
  puStack_68 = &uStack_58;
  uStack_60 = 1;
  pcStack_50 = FUN_10937e02c;
  uStack_48 = 0x10937e058;
  uStack_58 = param_3;
  FUN_10937ad5c(&ppuStack_170,param_2,puStack_68,1);
  FUN_10926dc5c(param_1,&ppuStack_168,&puStack_68);
  appuStack_100[0] = &PTR_DAT_11088d708;
  ppuStack_170 = &PTR_SUB_11088d6e0;
  ppuStack_168 = &PTR_DAT_11088d7b0;
  if (cStack_111 < '\0') {
    __ZdlPv(uStack_128);
  }
  ppuStack_168 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_160);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_170,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_100);
  return;
}



/* Entry: 10937df9c; end: 10937dfaf;  */

undefined1  [16] FUN_10937df9c(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&UNK_10f5675d4;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e != 0) {
    func_0x000104c4f740();
    plVar3 = (long *)plVar1[2];
    while (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      __ZdlPv();
    }
    lVar2 = *plVar1;
    *plVar1 = 0;
    if (lVar2 != 0) {
      __ZdlPv();
    }
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = plVar1;
    return auVar5;
  }
  lVar2 = param_2 << 2;
  __Znwm(lVar2);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 10937dfb0; end: 10937e02b;  */

undefined1  [16] FUN_10937dfb0(long *param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_2 >> 0x3e != 0) {
    func_0x000104c4f740();
    plVar2 = (long *)param_1[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  lVar1 = param_2 << 2;
  __Znwm(lVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 10937e02c; end: 10937e05f;  */

undefined ***
FUN_10937e02c(undefined ***param_1,undefined8 param_2,undefined8 param_3,int param_4,
             undefined8 *param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 ****ppppuVar6;
  long *plVar7;
  undefined ***pppuVar8;
  long lVar9;
  int iVar10;
  undefined8 ***pppuStack_168;
  int iStack_160;
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [15];
  char acStack_68 [16];
  long lStack_58;
  
  if (param_4 < 0) {
    uVar3 = param_5[1];
    puVar5 = (undefined8 *)*param_5;
    if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
      uVar3 = (ulong)*(byte *)((long)param_5 + 0x17);
      puVar5 = param_5;
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryC1ERS3_(acStack_68,param_1);
    if (acStack_68[0] == '\x01') {
      puVar1 = (undefined *)((long)param_1 + (long)(*param_1)[-3]);
      lVar9 = *(long *)(puVar1 + 0x28);
      uVar4 = *(uint *)(puVar1 + 8);
      iVar10 = *(int *)(puVar1 + 0x90);
      if (iVar10 == -1) {
        __ZNKSt3__18ios_base6getlocEv(&lStack_58,puVar1);
        plVar7 = &lStack_58;
        __ZNKSt3__16locale9use_facetERNS0_2idE(plVar7,PTR___ZNSt3__15ctypeIcE2idE_110346770);
        (**(code **)(*plVar7 + 0x38))();
        __ZNSt3__16localeD1Ev(&lStack_58);
        iVar10 = (int)plVar7;
        *(int *)(puVar1 + 0x90) = iVar10;
      }
      puVar2 = (undefined8 *)((long)puVar5 + uVar3);
      if ((uVar4 & 0xb0) != 0x20) {
        puVar2 = puVar5;
      }
      FUN_1092b4f20(lVar9,puVar5,puVar2,(undefined8 *)((long)puVar5 + uVar3),puVar1,
                    (int)(char)iVar10);
      if (lVar9 == 0) {
        __ZNSt3__18ios_base5clearEj
                  ((undefined *)((long)param_1 + (long)(*param_1)[-3]),
                   *(uint *)((undefined *)((long)param_1 + (long)(*param_1)[-3]) + 0x20) | 5);
      }
    }
    __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE6sentryD1Ev(acStack_68);
    return param_1;
  }
  FUN_10926db08(&ppuStack_150);
  uVar3 = param_5[1];
  puVar5 = (undefined8 *)*param_5;
  if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
    uVar3 = (ulong)*(byte *)((long)param_5 + 0x17);
    puVar5 = param_5;
  }
  FUN_1092b4db8(&ppuStack_150,puVar5,uVar3);
  FUN_10926dc5c(&pppuStack_168,&ppuStack_148,&stack0xffffffffffffffbf);
  ppppuVar6 = (undefined8 ****)pppuStack_168;
  if (-1 < cStack_151) {
    iStack_160 = (int)cStack_151;
    ppppuVar6 = &pppuStack_168;
  }
  if (param_4 <= iStack_160) {
    iStack_160 = param_4;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_1,ppppuVar6,(long)iStack_160);
  if (cStack_151 < '\0') {
    __ZdlPv(pppuStack_168);
  }
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_SUB_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  pppuVar8 = appuStack_e0;
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(pppuVar8);
  return pppuVar8;
}



/* Entry: 10937e060; end: 10937e1b3;  */

void FUN_10937e060(undefined8 param_1,undefined8 *param_2,int param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 **ppuStack_168;
  int iStack_160;
  char cStack_151;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined1 auStack_140 [56];
  undefined8 uStack_108;
  char cStack_f1;
  undefined **appuStack_e0 [19];
  undefined1 uStack_41;
  
  FUN_10926db08(&ppuStack_150);
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  FUN_1092b4db8(&ppuStack_150,puVar2,uVar1);
  FUN_10926dc5c(&ppuStack_168,&ppuStack_148,&uStack_41);
  pppuVar3 = (undefined8 ***)ppuStack_168;
  if (-1 < cStack_151) {
    iStack_160 = (int)cStack_151;
    pppuVar3 = &ppuStack_168;
  }
  if (param_3 <= iStack_160) {
    iStack_160 = param_3;
  }
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(param_1,pppuVar3,(long)iStack_160);
  if (cStack_151 < '\0') {
    __ZdlPv(ppuStack_168);
  }
  appuStack_e0[0] = &PTR_DAT_11088d708;
  ppuStack_150 = &PTR_SUB_11088d6e0;
  ppuStack_148 = &PTR_DAT_11088d7b0;
  if (cStack_f1 < '\0') {
    __ZdlPv(uStack_108);
  }
  ppuStack_148 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_140);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_150,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_e0);
  return;
}



/* Entry: 10937e1b4; end: 10937e30f;  */

void FUN_10937e1b4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  (**(code **)(*param_2 + 0x10))(&lStack_48);
  plVar3 = (long *)0x100;
  __Znwm();
  plVar3[0xd] = (long)&PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108ac068;
  plVar3[0x13] = 0;
  *plVar3 = (long)&PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108ac040;
  plVar3[1] = 0;
  __ZNSt3__18ios_base4initEPv(plVar3 + 0xd,0);
  plVar3[0x1e] = 0;
  *(undefined4 *)(plVar3 + 0x1f) = 0xffffffff;
  *plVar3 = (long)&PTR_DAT_1108abfd0;
  plVar3[0xd] = (long)&PTR_DAT_1108abff8;
  plVar4 = plVar3 + 2;
  *plVar4 = (long)(PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeC1Ev(plVar3 + 3);
  lVar2 = lStack_40;
  lVar1 = lStack_48;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *plVar4 = (long)&PTR_DAT_1108ac0a0;
  plVar3[9] = 0;
  plVar3[10] = lStack_48;
  plVar3[0xc] = lStack_38;
  plVar3[0xb] = lStack_40;
  lStack_48 = 0;
  lStack_40 = 0;
  lStack_38 = 0;
  plVar3[4] = lVar1;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
  lVar1 = (long)plVar3 + *(long *)(*plVar3 + -0x18);
  *(long **)(lVar1 + 0x28) = plVar4;
  __ZNSt3__18ios_base5clearEj(lVar1,0);
  *param_1 = plVar3;
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10937e310; end: 10937e393;  */

void FUN_10937e310(undefined8 *param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  lVar2 = (long)*(char *)(param_2 + 0x37);
  if (lVar2 < 0) {
    puVar4 = *(undefined1 **)(param_2 + 0x20);
    lVar2 = *(long *)(param_2 + 0x28);
  }
  else {
    puVar4 = (undefined1 *)(param_2 + 0x20);
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = puVar4 + lVar2;
  param_1[2] = 0;
  if (lVar2 != 0) {
    FUN_109246380(param_1,lVar2);
    puVar3 = (undefined1 *)param_1[1];
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      *puVar3 = *puVar4;
      puVar3 = puVar3 + 1;
    }
    param_1[1] = puVar3;
  }
  return;
}



/* Entry: 10937e394; end: 10937e47b;  */

void FUN_10937e394(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  undefined *puStack_60;
  
  param_2 = param_2 + 0x20;
  func_0x000104c5e210();
  if (param_2 != 0) {
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    *puVar2 = &PTR_FUN_110af4708;
    if (*(char *)((long)param_3 + 0x17) < '\0') {
      func_0x000107c3192c(puVar2 + 1,*param_3,param_3[1]);
    }
    else {
      uVar4 = *param_3;
      puVar2[2] = param_3[1];
      puVar2[1] = uVar4;
      puVar2[3] = param_3[2];
    }
    if (*(char *)(param_2 + 0x3f) < '\0') {
      func_0x000107c3192c(puVar2 + 4,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30)
                         );
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      puVar2[6] = *(undefined8 *)(param_2 + 0x38);
      puVar2[5] = uVar5;
      puVar2[4] = uVar4;
    }
    *param_1 = puVar2;
    return;
  }
  puVar3 = &UNK_10f639994;
  FUN_109262df8();
  if (*(char *)(unaff_x19 + 0x1f) < '\0') {
    __ZdlPv(*unaff_x21);
  }
  __ZdlPv();
  __Unwind_Resume(puVar3);
  puStack_60 = puVar3;
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_78,&UNK_10f5675db);
  func_0x000105687ee0(auStack_78);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937e4a8);
  (*pcVar1)();
}



/* Entry: 10937e47c; end: 10937e4c3;  */

void FUN_10937e47c(void)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_38,&UNK_10f5675db);
  func_0x000105687ee0(auStack_38);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937e4a8);
  (*pcVar1)();
}



/* Entry: 10937e4c4; end: 10937e4eb;  */

/* WARNING: Possible PIC construction at 0x000100033dfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100033e00) */

void FUN_10937e4c4(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (-1 < *(char *)(param_2 + 0x1f)) {
    uVar3 = *(undefined8 *)(param_2 + 8);
    param_1[1] = *(undefined8 *)(param_2 + 0x10);
    *param_1 = uVar3;
    param_1[2] = *(undefined8 *)(param_2 + 0x18);
    return;
  }
  lVar2 = *(long *)(param_2 + 8);
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (0x16 < uVar1) {
    if (uVar1 < 0x7ffffffffffffff7) {
      lVar2 = 0x19;
      if ((uVar1 | 7) != 0x17) {
        lVar2 = (uVar1 | 7) + 1;
      }
    }
    else {
      func_0x000104bd47d4();
    }
    func_0x000107c60e20(lVar2);
    return;
  }
  *(char *)((long)param_1 + 0x17) = (char)uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memmove_11034c660)(param_1,lVar2,uVar1 + 1);
  return;
}



/* Entry: 10937e4ec; end: 10937e583;  */

undefined8 * FUN_10937e4ec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110af4708;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10937e584; end: 10937e587;  */

undefined8 * FUN_10937e584(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 4);
  *param_1 = &PTR_FUN_110af47c8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10937e588; end: 10937e59b;  */

void FUN_10937e588(void)

{
  FUN_10937e5a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10937e59c; end: 10937e5a3;  */

void FUN_10937e59c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10937e5a0);
  (*pcVar1)();
}



/* Entry: 10937e5a4; end: 10937e5e7;  */

undefined8 * FUN_10937e5a4(undefined8 *param_1)

{
  func_0x000104c4f944(param_1 + 4);
  *param_1 = &PTR_FUN_110af47c8;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 10937e5e8; end: 10937e73f;  */

undefined8 FUN_10937e5e8(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  if (cVar1 < '\0') {
    lVar3 = param_1[1];
    if (lVar3 == 3) {
      if (*(short *)*param_1 == 0x5043 && (char)((short *)*param_1)[1] == 'U') {
        return 1;
      }
      goto LAB_10937e6c8;
    }
    if (lVar3 == 4) {
      iVar2 = *(int *)*param_1;
      goto LAB_10937e690;
    }
    if (lVar3 != 8) goto LAB_10937e6c8;
    param_1 = (long *)*param_1;
  }
  else {
    if (cVar1 == '\x03') {
      if ((short)*param_1 == 0x5043 && *(char *)((long)param_1 + 2) == 'U') {
        return 1;
      }
      goto LAB_10937e6c8;
    }
    if (cVar1 == '\x04') {
      iVar2 = (int)*param_1;
LAB_10937e690:
      if (iVar2 == 0x6f747541) {
        return 2;
      }
      goto LAB_10937e6c8;
    }
    if (cVar1 != '\b') goto LAB_10937e6c8;
  }
  if (*param_1 == 0x64656c6261736944) {
    return 0;
  }
LAB_10937e6c8:
  FUN_10937e740(auStack_38,&UNK_10f5676a1);
  FUN_109388c6c(1,&UNK_10f567611,&UNK_10f567687,0x1a,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return 0;
}



/* Entry: 10937e740; end: 10937e81f;  */

void FUN_10937e740(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_10926db08(&ppuStack_140);
  FUN_10937ad5c(&ppuStack_140,param_2,0,0);
  FUN_10926dc5c(param_1,&ppuStack_138,&uStack_31);
  appuStack_d0[0] = &PTR_DAT_11088d708;
  ppuStack_140 = &PTR_SUB_11088d6e0;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_140,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10937e820; end: 10937e963;  */

undefined8 FUN_10937e820(int *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  cVar1 = *(char *)((long)param_1 + 0x17);
  lVar2 = (long)cVar1;
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 2);
    if (lVar2 == 3) {
      if (**(short **)param_1 == 0x6150 && (char)(*(short **)param_1)[1] == 'd') {
        return 0;
      }
      goto LAB_10937e8d0;
    }
    if (lVar2 == 6) {
      if (**(int **)param_1 == 0x646e6152 && (short)(*(int **)param_1)[1] == 0x6d6f) {
        return 1;
      }
      goto LAB_10937e8d0;
    }
  }
  else if (cVar1 == '\x03') {
    if ((short)*param_1 == 0x6150 && *(char *)((long)param_1 + 2) == 'd') {
      return 0;
    }
  }
  else if ((cVar1 == '\x06') && (*param_1 == 0x646e6152 && (short)param_1[1] == 0x6d6f)) {
    return 1;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_10937e8d0:
  FUN_10937e740(auStack_38,&UNK_10f5676cc);
  FUN_109388c6c(1,&UNK_10f567611,&UNK_10f5676b4,0x26,auStack_38);
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
  }
  return 0;
}



/* Entry: 10937e964; end: 10937e9e3;  */

undefined8 FUN_10937e964(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar5 = iVar2;
  if (iVar2 <= iVar3) {
    iVar5 = iVar3;
  }
  iVar4 = (int)(((double)param_2 / (double)iVar5) * (double)iVar2);
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = iVar4 / param_3;
  }
  iVar4 = iVar4 - iVar2 * param_3;
  iVar1 = 0;
  if (param_3 - iVar4 <= iVar4) {
    iVar1 = param_3;
  }
  iVar1 = iVar2 * param_3 + iVar1;
  iVar5 = (int)(((double)param_2 / (double)iVar5) * (double)iVar3);
  if (iVar1 < 1) {
    iVar1 = param_3;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    iVar2 = iVar5 / param_3;
  }
  iVar5 = iVar5 - iVar2 * param_3;
  iVar3 = 0;
  if (param_3 - iVar5 <= iVar5) {
    iVar3 = param_3;
  }
  iVar3 = iVar2 * param_3 + iVar3;
  if (iVar3 < 1) {
    iVar3 = param_3;
  }
  return CONCAT44(iVar3,iVar1);
}



/* Entry: 10937e9e4; end: 10937ea23;  */

long * FUN_10937e9e4(long *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10937ea24; end: 10937eb63;  */

double * FUN_10937ea24(double *param_1,double *param_2,long *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = *param_2;
  dVar3 = param_2[3];
  dVar2 = param_2[2];
  param_1[5] = param_2[1];
  param_1[4] = dVar1;
  param_1[7] = dVar3;
  param_1[6] = dVar2;
  dVar2 = param_2[5];
  dVar1 = param_2[4];
  param_1[10] = param_2[6];
  param_1[9] = dVar2;
  param_1[8] = dVar1;
  dVar5 = param_2[0xd];
  dVar3 = param_2[0xc];
  dVar2 = param_2[0xf];
  dVar1 = param_2[0xe];
  dVar6 = param_2[0xb];
  dVar4 = param_2[10];
  param_1[0x14] = param_2[0x10];
  param_1[0x11] = dVar5;
  param_1[0x10] = dVar3;
  param_1[0x13] = dVar2;
  param_1[0x12] = dVar1;
  param_1[0xf] = dVar6;
  param_1[0xe] = dVar4;
  dVar1 = param_2[8];
  param_1[0xd] = param_2[9];
  param_1[0xc] = dVar1;
  dVar2 = param_2[0x13];
  dVar1 = param_2[0x12];
  param_1[0x18] = param_2[0x14];
  param_1[0x17] = dVar2;
  param_1[0x16] = dVar1;
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_2 + 0x15);
  param_1[0x1a] = 0.0;
  param_1[0x1b] = 0.0;
  param_1[0x1c] = 0.0;
  FUN_10937ec50(param_1 + 0x1a,*param_3,param_3[1],
                (param_3[1] - *param_3 >> 2) * -0x5555555555555555);
  param_1[0x1d] = 0.0;
  param_1[0x1e] = 0.0;
  param_1[0x1f] = 0.0;
  FUN_10937ed6c();
  dVar3 = param_2[0xc];
  dVar2 = param_2[0xb];
  param_1[1] = dVar3;
  *param_1 = dVar2;
  dVar1 = param_2[0xd];
  param_1[2] = dVar1;
  dVar5 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (0.0 < dVar5) {
    dVar5 = SQRT(dVar5);
    dVar2 = dVar2 / dVar5;
    dVar3 = dVar3 / dVar5;
    param_1[1] = dVar3;
    *param_1 = dVar2;
    dVar1 = dVar1 / dVar5;
    param_1[2] = dVar1;
  }
  param_1[3] = dVar1 * param_2[6] + dVar2 * param_2[4] + dVar3 * param_2[5];
  return param_1;
}



/* Entry: 10937eb64; end: 10937ec0f;  */

undefined8 FUN_10937eb64(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((bRam00000001132df9e8 & 1) == 0) {
    uVar2 = 0x1132df9e8;
    ___cxa_guard_acquire();
    if ((int)uVar2 != 0) {
      FUN_10937ede4();
      __ZNSt3__113random_deviceclEv();
      uRam00000001132df020 = (undefined4)uVar2;
      lVar3 = 1;
      do {
        uVar1 = (int)lVar3 + ((uint)uVar2 ^ (uint)uVar2 >> 0x1e) * 0x6c078965;
        uVar2 = (ulong)uVar1;
        *(uint *)(lVar3 * 4 + 0x1132df020) = uVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x270);
      uRam00000001132df9e0 = 0;
      ___cxa_guard_release(0x1132df9e8);
    }
  }
  return 0x1132df020;
}



/* Entry: 10937ec10; end: 10937ec4f;  */

long FUN_10937ec10(long param_1)

{
  if (*(long *)(param_1 + 0xe8) != 0) {
    *(long *)(param_1 + 0xf0) = *(long *)(param_1 + 0xe8);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10937ec50; end: 10937eccb;  */

void FUN_10937ec50(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_10937eccc(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = (undefined8 *)((long)param_2 + 0xc)) {
      uVar2 = *param_2;
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
      *puVar1 = uVar2;
      puVar1 = (undefined8 *)((long)puVar1 + 0xc);
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10937eccc; end: 10937ed13;  */

void FUN_10937eccc(long *param_1,ulong param_2,long param_3,long param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_2 < 0x1555555555555556) {
    plVar1 = param_1;
    FUN_10937ed28();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 0xc;
    return;
  }
  FUN_10937ed14();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109366488();
    lVar3 = *(long *)(puVar2 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar3,param_2,param_3);
    }
    *(long *)(puVar2 + 8) = lVar3 + param_3;
  }
  return;
}



/* Entry: 10937ed14; end: 10937ed27;  */

void FUN_10937ed14(undefined8 param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109366488();
    lVar2 = *(long *)(puVar1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar2,param_2,param_3);
    }
    *(long *)(puVar1 + 8) = lVar2 + param_3;
  }
  return;
}



/* Entry: 10937ed28; end: 10937ed6b;  */

void FUN_10937ed28(long param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_2 < 0x1555555555555556) {
    __Znwm(param_2 * 0xc);
    return;
  }
  func_0x000104c4f740();
  if (param_4 != 0) {
    FUN_109366488();
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10937ed6c; end: 10937ede3;  */

void FUN_10937ed6c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_109366488(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10937ede4; end: 10937ee73;  */

undefined8 FUN_10937ede4(void)

{
  int iVar1;
  
  if ((bRam00000001132df9f8 & 1) == 0) {
    iVar1 = 0x132df9f8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1092b48a0(0x1132df9f0);
      ___cxa_atexit(PTR___ZNSt3__113random_deviceD1Ev_110346518,0x1132df9f0,0x100000000);
      ___cxa_guard_release(0x1132df9f8);
    }
  }
  return 0x1132df9f0;
}



/* Entry: 10937ee74; end: 10937efa7;  */

double * FUN_10937ee74(double *param_1,double *param_2,uint param_3)

{
  uint uVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar1 = param_3 >> 7 & 1;
  *param_1 = *param_2;
  dVar4 = param_2[1];
  param_1[1] = dVar4;
  param_1[2] = param_2[2];
  param_1[3] = 0.0;
  param_1[4] = param_2[4];
  dVar5 = param_2[5];
  param_1[5] = dVar5;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  dVar6 = param_2[8];
  auVar10._0_8_ = ABS(*param_1);
  auVar10._8_8_ = ABS(param_1[1]);
  auVar7._8_8_ = ABS(param_1[3]);
  auVar7._0_8_ = ABS(param_1[2]);
  auVar7 = NEON_fmax(auVar10,auVar7,8);
  auVar9._0_8_ = ABS(param_1[4]);
  auVar9._8_8_ = ABS(param_1[5]);
  auVar10 = NEON_fmax(auVar9,ZEXT216(0),8);
  auVar7 = NEON_fmax(auVar7,auVar10,8);
  dVar2 = auVar7._8_8_;
  if (auVar7._8_8_ <= auVar7._0_8_) {
    dVar2 = auVar7._0_8_;
  }
  dVar8 = ABS(dVar6);
  if (dVar8 <= dVar2) {
    dVar8 = dVar2;
  }
  dVar2 = 1.0;
  if (dVar8 != 0.0) {
    dVar2 = dVar8;
  }
  *param_1 = *param_1 / dVar2;
  param_1[2] = param_1[2] / dVar2;
  param_1[1] = dVar4 / dVar2;
  param_1[4] = param_1[4] / dVar2;
  param_1[5] = dVar5 / dVar2;
  param_1[8] = dVar6 / dVar2;
  FUN_10937f394(param_1,param_1 + 9,param_1 + 0xc,param_1 + 0xe,uVar1);
  pdVar3 = param_1 + 9;
  FUN_10937efa8(pdVar3,param_1 + 0xc,0x1e,uVar1,param_1);
  *(int *)(param_1 + 0x10) = (int)pdVar3;
  param_1[10] = param_1[10] * dVar2;
  param_1[9] = param_1[9] * dVar2;
  param_1[0xb] = dVar2 * param_1[0xb];
  *(undefined1 *)((long)param_1 + 0x84) = 1;
  *(char *)((long)param_1 + 0x85) = (char)uVar1;
  return param_1;
}



/* Entry: 10937efa8; end: 10937f393;  */

undefined8 FUN_10937efa8(long param_1,double *param_2,long param_3,int param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  undefined8 uVar6;
  double *pdVar7;
  long lVar8;
  double *pdVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  uVar13 = 0;
  uVar16 = 0;
  uVar14 = param_3 * 3;
  uVar15 = uVar14 & ((long)uVar14 >> 0x3f ^ 0xffffffffffffffffU);
  uVar17 = 2;
  do {
    do {
      lVar8 = uVar17 - uVar16;
      if (lVar8 != 0 && (long)uVar16 <= (long)uVar17) {
        pdVar7 = (double *)(param_1 + 8 + uVar16 * 8);
        pdVar9 = param_2 + uVar16;
        do {
          if ((ABS(*pdVar9) < 2.2250738585072014e-308) ||
             (dVar18 = *pdVar9 * 4503599627370496.0,
             dVar18 * dVar18 <= ABS(pdVar7[-1]) + ABS(*pdVar7))) {
            *pdVar9 = 0.0;
          }
          pdVar7 = pdVar7 + 1;
          pdVar9 = pdVar9 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      pdVar7 = (double *)(param_1 + 8 + uVar17 * 8);
      uVar3 = uVar17;
      do {
        uVar17 = uVar3;
        pdVar9 = pdVar7;
        uVar3 = uVar17 - 1;
        uVar16 = uVar13;
        if ((long)uVar17 < 1) goto LAB_10937f2cc;
        dVar18 = param_2[uVar17 - 1];
        pdVar7 = pdVar9 + -1;
      } while (dVar18 == 0.0);
      uVar16 = uVar15 + 1;
      if (uVar13 == uVar15) {
LAB_10937f2cc:
        if ((long)uVar14 < (long)uVar16) {
          uVar6 = 2;
        }
        else {
          uVar13 = 0;
          bVar5 = true;
          do {
            bVar12 = bVar5;
            uVar15 = 0;
            pdVar7 = (double *)(param_1 + uVar13 * 8);
            dVar23 = *pdVar7;
            uVar14 = 1;
            dVar18 = dVar23;
            do {
              dVar20 = pdVar7[uVar14];
              uVar16 = uVar14;
              if (dVar18 <= dVar20) {
                dVar20 = dVar18;
                uVar16 = uVar15;
              }
              uVar15 = uVar16;
              uVar14 = uVar14 + 1;
              dVar18 = dVar20;
            } while ((uVar14 ^ uVar13) != 3);
            if (uVar15 != 0) {
              lVar8 = uVar15 + uVar13;
              *(undefined8 *)(param_1 + uVar13 * 8) = *(undefined8 *)(param_1 + lVar8 * 8);
              *(double *)(param_1 + lVar8 * 8) = dVar23;
              if (param_4 != 0) {
                puVar10 = (undefined8 *)(param_5 + uVar13 * 0x18);
                puVar11 = (undefined8 *)(param_5 + lVar8 * 0x18);
                uVar19 = puVar11[1];
                uVar6 = *puVar11;
                uVar21 = *puVar10;
                puVar11[1] = puVar10[1];
                *puVar11 = uVar21;
                puVar10[1] = uVar19;
                *puVar10 = uVar6;
                uVar6 = puVar10[2];
                puVar10[2] = puVar11[2];
                puVar11[2] = uVar6;
              }
            }
            uVar13 = 1;
            bVar5 = false;
          } while (bVar12);
          uVar6 = 0;
        }
        return uVar6;
      }
      uVar13 = uVar13 + 1;
      bVar5 = uVar3 == 0;
      do {
        bVar12 = bVar5;
        if (bVar12) break;
        bVar5 = true;
      } while (*param_2 != 0.0);
      uVar2 = 1;
      if (!bVar12) {
        uVar2 = 2;
      }
      dVar20 = *pdVar7;
      dVar22 = (pdVar9[-2] - dVar20) * 0.5;
      dVar23 = ABS(dVar18);
      if (dVar22 != 0.0) {
        dVar24 = INFINITY;
        if ((ABS(dVar18) != INFINITY) && (ABS(dVar22) != INFINITY)) {
          if (NAN(dVar22) || NAN(dVar18)) {
            dVar24 = NAN;
          }
          else {
            dVar25 = ABS(dVar22);
            dVar24 = dVar25;
            if (dVar23 <= dVar25) {
              dVar24 = dVar23;
              dVar23 = dVar25;
            }
            dVar24 = dVar23 * SQRT((dVar24 / dVar23) * (dVar24 / dVar23) + 1.0);
          }
        }
        if (dVar22 <= 0.0) {
          dVar24 = -dVar24;
        }
        if (dVar18 * dVar18 == 0.0) {
          dVar23 = dVar18 / ((dVar22 + dVar24) / dVar18);
        }
        else {
          dVar23 = (dVar18 * dVar18) / (dVar22 + dVar24);
        }
      }
      uVar16 = (ulong)(byte)~bVar12;
      dStack_78 = *(double *)(param_1 + uVar16 * 8) - (dVar20 - dVar23);
      dStack_80 = param_2[uVar16];
      uVar4 = uVar16;
    } while (uVar17 < uVar2);
    while (dStack_80 != 0.0) {
      func_0x00010937f488(&dStack_90,&dStack_78,&dStack_80,0);
      dVar23 = *(double *)(param_1 + uVar4 * 8);
      pdVar7 = param_2 + uVar4;
      dVar22 = *pdVar7;
      uVar1 = uVar4 + 1;
      dVar24 = *(double *)(param_1 + uVar1 * 8);
      dVar18 = -dStack_88;
      dVar25 = dStack_90 * dVar22 + dStack_88 * dVar23;
      dVar20 = dStack_90 * dVar24 + dStack_88 * dVar22;
      pdVar9 = (double *)(param_1 + uVar4 * 8);
      pdVar9[1] = dVar20 * dStack_90 + dVar25 * dStack_88;
      *pdVar9 = (dVar18 * dVar24 + dStack_90 * dVar22) * dVar18 +
                (dVar18 * dVar22 + dStack_90 * dVar23) * dStack_90;
      dStack_78 = dVar18 * dVar20 + dStack_90 * dVar25;
      *pdVar7 = dStack_78;
      if (uVar2 <= uVar4) {
        pdVar7[-1] = dStack_80 * dVar18 + pdVar7[-1] * dStack_90;
      }
      if ((long)uVar4 < (long)uVar3) {
        dStack_80 = param_2[uVar1] * dVar18;
        param_2[uVar1] = dStack_90 * param_2[uVar1];
      }
      if ((param_4 != 0) && ((dStack_90 != 1.0 || (dStack_88 != 0.0)))) {
        lVar8 = 0;
        do {
          pdVar7 = (double *)(param_5 + uVar4 * 0x18 + lVar8);
          dVar23 = *pdVar7;
          *pdVar7 = pdVar7[3] * dVar18 + dVar23 * dStack_90;
          pdVar7[3] = dStack_90 * pdVar7[3] + dVar23 * dStack_88;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x18);
      }
      if (uVar17 <= uVar1) break;
      uVar4 = 1;
    }
  } while( true );
}



/* Entry: 10937f394; end: 10937f57b;  */

void FUN_10937f394(undefined8 *param_1,undefined8 *param_2,double *param_3,undefined8 param_4,
                  int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  *param_2 = *param_1;
  dVar1 = (double)param_1[2];
  if (dVar1 * dVar1 <= 2.2250738585072014e-308) {
    param_2[1] = param_1[4];
    param_2[2] = param_1[8];
    *param_3 = (double)param_1[1];
    param_3[1] = (double)param_1[5];
    if (param_5 != 0) {
      *param_1 = 0x3ff0000000000000;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0.0;
      param_1[4] = 0x3ff0000000000000;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[5] = 0.0;
      param_1[8] = 0x3ff0000000000000;
    }
  }
  else {
    dVar3 = (double)param_1[1];
    dVar5 = SQRT(dVar1 * dVar1 + dVar3 * dVar3);
    dVar4 = 1.0 / dVar5;
    dVar2 = dVar3 * dVar4;
    dVar1 = dVar1 * dVar4;
    dVar6 = ((double)param_1[8] - (double)param_1[4]) * dVar1 + (double)param_1[5] * (dVar2 + dVar2)
    ;
    param_2[1] = (double)param_1[4] + dVar6 * dVar1;
    param_2[2] = (double)param_1[8] - dVar6 * dVar1;
    *param_3 = dVar5;
    param_3[1] = (double)param_1[5] - dVar6 * dVar2;
    if (param_5 != 0) {
      param_1[6] = 0;
      param_1[1] = 0;
      *param_1 = 0x3ff0000000000000;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = dVar2;
      param_1[5] = dVar1;
      param_1[7] = dVar1;
      param_1[8] = -(dVar3 * dVar4);
      return;
    }
  }
  return;
}



/* Entry: 10937f57c; end: 10937f61f;  */

/* WARNING: Possible PIC construction at 0x00010937f5e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010937f5e8) */
/* WARNING: Removing unreachable block (ram,0x00010937f5f4) */

uint FUN_10937f57c(undefined8 param_1,long param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_3[1] != *param_3) {
    lVar3 = *(long *)(param_2 + 0x9c0);
    uVar4 = (lVar3 + 1U) % 0x270;
    uVar1 = *(uint *)(param_2 + uVar4 * 4);
    uVar2 = 0x9908b0df;
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 ^ *(uint *)(param_2 + ((lVar3 + 0x18dU) % 0x270) * 4) ^
            (uVar1 & 0x7ffffffe | *(uint *)(param_2 + lVar3 * 4) & 0x80000000) >> 1;
    *(uint *)(param_2 + lVar3 * 4) = uVar2;
    uVar2 = uVar2 ^ uVar2 >> 0xb;
    *(ulong *)(param_2 + 0x9c0) = uVar4;
    uVar2 = (uVar2 & 0x13a58ad) << 7 ^ uVar2;
    uVar2 = (uVar2 & 0x1df8c) << 0xf ^ uVar2;
    return uVar2 ^ uVar2 >> 0x12;
  }
  return param_3[1];
}



/* Entry: 10937f620; end: 10937f717;  */

double * FUN_10937f620(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  dVar5 = param_2[1];
  dVar4 = *param_2;
  dVar6 = param_2[2];
  dVar1 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar1 == 0.0) {
    dVar3 = 1.0;
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = SQRT(dVar1);
    dVar2 = dVar1 * 0.5;
    dVar3 = dVar1;
    ___sincos_stret();
    dVar4 = (dVar4 * dVar2) / dVar1;
    dVar5 = (dVar5 * dVar2) / dVar1;
    dVar1 = (dVar6 * dVar2) / dVar1;
  }
  param_1[2] = dVar1;
  param_1[3] = dVar3;
  dVar3 = param_1[3];
  dVar6 = param_1[2];
  dVar1 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar5 * dVar5 + dVar3 * dVar3);
  param_1[1] = dVar5 / dVar1;
  *param_1 = dVar4 / dVar1;
  param_1[3] = dVar3 / dVar1;
  param_1[2] = dVar6 / dVar1;
  dVar4 = param_3[1];
  dVar1 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = dVar4;
  param_1[4] = dVar1;
  func_0x00010937fbc4(&dStack_78,param_1);
  param_1[0xd] = dStack_50;
  param_1[0xc] = dStack_58;
  param_1[0xf] = dStack_40;
  param_1[0xe] = dStack_48;
  param_1[0x10] = dStack_38;
  param_1[9] = dStack_70;
  param_1[8] = dStack_78;
  param_1[0xb] = dStack_60;
  param_1[10] = dStack_68;
  return param_1;
}



/* Entry: 10937f718; end: 10937f7d7;  */

void FUN_10937f718(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar4 = param_2[3];
  dVar1 = -*param_2;
  dVar2 = -param_2[1];
  dVar3 = -param_2[2];
  dVar5 = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2 + dVar4 * dVar4);
  dVar1 = dVar1 / dVar5;
  dVar2 = dVar2 / dVar5;
  dVar3 = dVar3 / dVar5;
  dVar4 = dVar4 / dVar5;
  dVar6 = param_2[5];
  dVar5 = param_2[4];
  dVar7 = -dVar5;
  dVar8 = -dVar6;
  dVar9 = param_2[6];
  dVar10 = -dVar3 * dVar8 - dVar9 * dVar2;
  dVar11 = dVar9 * dVar1 + dVar7 * dVar3;
  dVar7 = -dVar2 * dVar7 + dVar1 * dVar8;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar7 = dVar7 + dVar7;
  param_1[1] = dVar2;
  *param_1 = dVar1;
  param_1[3] = dVar4;
  param_1[2] = dVar3;
  param_1[5] = (dVar11 * dVar4 - dVar6) + -(dVar1 * dVar7) + dVar10 * dVar3;
  param_1[4] = (dVar10 * dVar4 - dVar5) + -dVar3 * dVar11 + dVar7 * dVar2;
  param_1[6] = (dVar7 * dVar4 - dVar9) + -dVar2 * dVar10 + dVar1 * dVar11;
  return;
}



/* Entry: 10937f7d8; end: 10937f873;  */

void FUN_10937f7d8(undefined8 *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  long lVar6;
  double *extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double dStack_2d0;
  double dStack_2c8;
  double dStack_2c0;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double dStack_290;
  double dStack_288;
  double dStack_280;
  double dStack_278;
  double dStack_270;
  long lStack_258;
  undefined8 *puStack_250;
  undefined1 **ppuStack_240;
  code *pcStack_238;
  double adStack_230 [14];
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  double dStack_1a0;
  double dStack_198;
  double dStack_190;
  undefined8 uStack_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 auStack_150 [9];
  long lStack_108;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_b8;
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
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10937f718(&uStack_70);
  param_1[1] = uStack_68;
  *param_1 = uStack_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = uStack_50;
  param_1[6] = uStack_40;
  puVar3 = param_1;
  func_0x00010937fbc4(&uStack_b8);
  param_1[0xd] = uStack_90;
  param_1[0xc] = uStack_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = uStack_88;
  param_1[0x10] = uStack_78;
  param_1[9] = uStack_b0;
  param_1[8] = uStack_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = uStack_a8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  pdVar4 = adStack_230;
  pcStack_c8 = FUN_10937f874;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_230[1] = 0.0;
  adStack_230[0] = 1.0;
  adStack_230[3] = 6.123233995736766e-17;
  adStack_230[2] = 0.0;
  adStack_230[5] = 0.0;
  adStack_230[6] = 0.0;
  adStack_230[4] = 0.0;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010937fbc4(&dStack_1a0,adStack_230);
  adStack_230[0xd] = dStack_178;
  adStack_230[0xc] = dStack_180;
  uStack_1b8 = uStack_168;
  dStack_1c0 = dStack_170;
  uStack_1b0 = uStack_160;
  adStack_230[9] = dStack_198;
  adStack_230[8] = dStack_1a0;
  adStack_230[0xb] = (double)uStack_188;
  adStack_230[10] = dStack_190;
  puVar5 = puVar3;
  FUN_10937f9d4(&dStack_1a0);
  lVar6 = 0;
  puVar7 = auStack_150;
  do {
    uVar1 = puVar7[-2];
    *(undefined8 *)((long)adStack_230 + lVar6 + 8) = puVar7[-1];
    *(undefined8 *)((long)adStack_230 + lVar6) = uVar1;
    *(undefined8 *)((long)adStack_230 + lVar6 + 0x10) = *puVar7;
    lVar6 = lVar6 + 0x20;
    puVar7 = puVar7 + 3;
  } while (lVar6 != 0x60);
  *extraout_x8 = CONCAT44((float)adStack_230[1],(float)adStack_230[0]);
  *(float *)(extraout_x8 + 1) = (float)adStack_230[2];
  *(undefined4 *)((long)extraout_x8 + 0xc) = 0;
  extraout_x8[2] = CONCAT44((float)adStack_230[5],(float)adStack_230[4]);
  *(float *)(extraout_x8 + 3) = (float)adStack_230[6];
  *(undefined4 *)((long)extraout_x8 + 0x1c) = 0;
  extraout_x8[4] = CONCAT44((float)adStack_230[9],(float)adStack_230[8]);
  *(float *)(extraout_x8 + 5) = (float)adStack_230[10];
  *(undefined4 *)((long)extraout_x8 + 0x2c) = 0;
  extraout_x8[6] = CONCAT44((float)dStack_178,(float)dStack_180);
  *(float *)(extraout_x8 + 7) = (float)dStack_170;
  *(undefined4 *)((long)extraout_x8 + 0x3c) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_238 = FUN_10937f9d4;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_298 = pdVar4[1];
  dStack_2a0 = *pdVar4;
  dStack_288 = pdVar4[3];
  dStack_290 = pdVar4[2];
  dVar2 = (double)puVar5[6];
  dVar11 = -(dStack_290 * (double)puVar5[5]) + dVar2 * dStack_298;
  dVar12 = -(dStack_2a0 * dVar2) + (double)puVar5[4] * dStack_290;
  dVar10 = -(dStack_298 * (double)puVar5[4]) + (double)puVar5[5] * dStack_2a0;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dStack_280 = pdVar4[4] +
               (double)puVar5[4] + dVar11 * dStack_288 + -dStack_290 * dVar12 + dVar10 * dStack_298;
  dStack_278 = pdVar4[5] +
               (double)puVar5[5] + dVar12 * dStack_288 +
               -(dStack_2a0 * dVar10) + dVar11 * dStack_290;
  dStack_270 = pdVar4[6] + dVar2 + dStack_288 * dVar10 + -dStack_298 * dVar11 + dStack_2a0 * dVar12;
  puStack_250 = puVar3;
  ppuStack_240 = &puStack_d0;
  func_0x00010937fde4(&dStack_2a0);
  extraout_x8_00[1] = dStack_298;
  *extraout_x8_00 = dStack_2a0;
  extraout_x8_00[3] = dStack_288;
  extraout_x8_00[2] = dStack_290;
  extraout_x8_00[5] = dStack_278;
  extraout_x8_00[4] = dStack_280;
  extraout_x8_00[6] = dStack_270;
  pdVar4 = extraout_x8_00;
  func_0x00010937fbc4(&dStack_2e8);
  extraout_x8_00[0xd] = dStack_2c0;
  extraout_x8_00[0xc] = dStack_2c8;
  extraout_x8_00[0xf] = dStack_2b0;
  extraout_x8_00[0xe] = dStack_2b8;
  extraout_x8_00[0x10] = dStack_2a8;
  extraout_x8_00[9] = dStack_2e0;
  extraout_x8_00[8] = dStack_2e8;
  extraout_x8_00[0xb] = dStack_2d0;
  extraout_x8_00[10] = dStack_2d8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar6 = 3;
  pdVar8 = pdVar4 + 10;
  pdVar9 = (double *)(extraout_x8_01 + 0x10);
  do {
    dVar2 = pdVar8[-2];
    pdVar9[-1] = pdVar8[-1];
    pdVar9[-2] = dVar2;
    *pdVar9 = *pdVar8;
    lVar6 = lVar6 + -1;
    pdVar8 = pdVar8 + 3;
    pdVar9 = pdVar9 + 4;
  } while (lVar6 != 0);
  dVar2 = pdVar4[4];
  *(double *)(extraout_x8_01 + 0x68) = pdVar4[5];
  *(double *)(extraout_x8_01 + 0x60) = dVar2;
  *(double *)(extraout_x8_01 + 0x70) = pdVar4[6];
  *(undefined8 *)(extraout_x8_01 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_01 + 0x78) = 0x3ff0000000000000;
  return;
}



/* Entry: 10937f874; end: 10937f9d3;  */

void FUN_10937f874(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  double dVar2;
  double *pdVar3;
  long lVar4;
  long lVar5;
  double *extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dStack_228;
  double dStack_220;
  double dStack_218;
  double dStack_210;
  double dStack_208;
  double dStack_200;
  double dStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  double dStack_1d8;
  double dStack_1d0;
  double dStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  long lStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  double adStack_170 [14];
  double dStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_90 [9];
  long lStack_48;
  
  pdVar3 = adStack_170;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  adStack_170[1] = 0.0;
  adStack_170[0] = 1.0;
  adStack_170[3] = 6.123233995736766e-17;
  adStack_170[2] = 0.0;
  adStack_170[5] = 0.0;
  adStack_170[6] = 0.0;
  adStack_170[4] = 0.0;
  func_0x00010937fbc4(&dStack_e0,adStack_170);
  adStack_170[0xd] = dStack_b8;
  adStack_170[0xc] = dStack_c0;
  uStack_f8 = uStack_a8;
  dStack_100 = dStack_b0;
  uStack_f0 = uStack_a0;
  adStack_170[9] = dStack_d8;
  adStack_170[8] = dStack_e0;
  adStack_170[0xb] = (double)uStack_c8;
  adStack_170[10] = dStack_d0;
  lVar4 = param_2;
  FUN_10937f9d4(&dStack_e0);
  lVar5 = 0;
  puVar6 = auStack_90;
  do {
    uVar1 = puVar6[-2];
    *(undefined8 *)((long)adStack_170 + lVar5 + 8) = puVar6[-1];
    *(undefined8 *)((long)adStack_170 + lVar5) = uVar1;
    *(undefined8 *)((long)adStack_170 + lVar5 + 0x10) = *puVar6;
    lVar5 = lVar5 + 0x20;
    puVar6 = puVar6 + 3;
  } while (lVar5 != 0x60);
  *param_1 = CONCAT44((float)adStack_170[1],(float)adStack_170[0]);
  *(float *)(param_1 + 1) = (float)adStack_170[2];
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  param_1[2] = CONCAT44((float)adStack_170[5],(float)adStack_170[4]);
  *(float *)(param_1 + 3) = (float)adStack_170[6];
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = CONCAT44((float)adStack_170[9],(float)adStack_170[8]);
  *(float *)(param_1 + 5) = (float)adStack_170[10];
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  param_1[6] = CONCAT44((float)dStack_b8,(float)dStack_c0);
  *(float *)(param_1 + 7) = (float)dStack_b0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x3f800000;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_178 = FUN_10937f9d4;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_1d8 = pdVar3[1];
  dStack_1e0 = *pdVar3;
  dStack_1c8 = pdVar3[3];
  dStack_1d0 = pdVar3[2];
  dVar2 = *(double *)(lVar4 + 0x30);
  dVar10 = -(dStack_1d0 * *(double *)(lVar4 + 0x28)) + dVar2 * dStack_1d8;
  dVar11 = -(dStack_1e0 * dVar2) + *(double *)(lVar4 + 0x20) * dStack_1d0;
  dVar9 = -(dStack_1d8 * *(double *)(lVar4 + 0x20)) + *(double *)(lVar4 + 0x28) * dStack_1e0;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dStack_1c0 = pdVar3[4] +
               *(double *)(lVar4 + 0x20) + dVar10 * dStack_1c8 +
               -dStack_1d0 * dVar11 + dVar9 * dStack_1d8;
  dStack_1b8 = pdVar3[5] +
               *(double *)(lVar4 + 0x28) + dVar11 * dStack_1c8 +
               -(dStack_1e0 * dVar9) + dVar10 * dStack_1d0;
  dStack_1b0 = pdVar3[6] + dVar2 + dStack_1c8 * dVar9 + -dStack_1d8 * dVar10 + dStack_1e0 * dVar11;
  lStack_190 = param_2;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  func_0x00010937fde4(&dStack_1e0);
  extraout_x8[1] = dStack_1d8;
  *extraout_x8 = dStack_1e0;
  extraout_x8[3] = dStack_1c8;
  extraout_x8[2] = dStack_1d0;
  extraout_x8[5] = dStack_1b8;
  extraout_x8[4] = dStack_1c0;
  extraout_x8[6] = dStack_1b0;
  pdVar3 = extraout_x8;
  func_0x00010937fbc4(&dStack_228);
  extraout_x8[0xd] = dStack_200;
  extraout_x8[0xc] = dStack_208;
  extraout_x8[0xf] = dStack_1f0;
  extraout_x8[0xe] = dStack_1f8;
  extraout_x8[0x10] = dStack_1e8;
  extraout_x8[9] = dStack_220;
  extraout_x8[8] = dStack_228;
  extraout_x8[0xb] = dStack_210;
  extraout_x8[10] = dStack_218;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar5 = 3;
  pdVar7 = pdVar3 + 10;
  pdVar8 = (double *)(extraout_x8_00 + 0x10);
  do {
    dVar2 = pdVar7[-2];
    pdVar8[-1] = pdVar7[-1];
    pdVar8[-2] = dVar2;
    *pdVar8 = *pdVar7;
    lVar5 = lVar5 + -1;
    pdVar7 = pdVar7 + 3;
    pdVar8 = pdVar8 + 4;
  } while (lVar5 != 0);
  dVar2 = pdVar3[4];
  *(double *)(extraout_x8_00 + 0x68) = pdVar3[5];
  *(double *)(extraout_x8_00 + 0x60) = dVar2;
  *(double *)(extraout_x8_00 + 0x70) = pdVar3[6];
  *(undefined8 *)(extraout_x8_00 + 0x18) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x38) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x58) = 0;
  *(undefined8 *)(extraout_x8_00 + 0x78) = 0x3ff0000000000000;
  return;
}



/* Entry: 10937f9d4; end: 10937fb1b;  */

void FUN_10937f9d4(double *param_1,double *param_2,long param_3)

{
  double *pdVar1;
  long extraout_x8;
  double *pdVar2;
  double *pdVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dStack_68 = param_2[1];
  dStack_70 = *param_2;
  dStack_58 = param_2[3];
  dStack_60 = param_2[2];
  dVar5 = *(double *)(param_3 + 0x30);
  dVar7 = -(dStack_60 * *(double *)(param_3 + 0x28)) + dVar5 * dStack_68;
  dVar8 = -(dStack_70 * dVar5) + *(double *)(param_3 + 0x20) * dStack_60;
  dVar6 = -(dStack_68 * *(double *)(param_3 + 0x20)) + *(double *)(param_3 + 0x28) * dStack_70;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dStack_50 = param_2[4] +
              *(double *)(param_3 + 0x20) + dVar7 * dStack_58 +
              -dStack_60 * dVar8 + dVar6 * dStack_68;
  dStack_48 = param_2[5] +
              *(double *)(param_3 + 0x28) + dVar8 * dStack_58 +
              -(dStack_70 * dVar6) + dVar7 * dStack_60;
  dStack_40 = param_2[6] + dVar5 + dStack_58 * dVar6 + -dStack_68 * dVar7 + dStack_70 * dVar8;
  func_0x00010937fde4(&dStack_70);
  param_1[1] = dStack_68;
  *param_1 = dStack_70;
  param_1[3] = dStack_58;
  param_1[2] = dStack_60;
  param_1[5] = dStack_48;
  param_1[4] = dStack_50;
  param_1[6] = dStack_40;
  pdVar1 = param_1;
  func_0x00010937fbc4(&dStack_b8);
  param_1[0xd] = dStack_90;
  param_1[0xc] = dStack_98;
  param_1[0xf] = dStack_80;
  param_1[0xe] = dStack_88;
  param_1[0x10] = dStack_78;
  param_1[9] = dStack_b0;
  param_1[8] = dStack_b8;
  param_1[0xb] = dStack_a0;
  param_1[10] = dStack_a8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  lVar4 = 3;
  pdVar2 = pdVar1 + 10;
  pdVar3 = (double *)(extraout_x8 + 0x10);
  do {
    dVar5 = pdVar2[-2];
    pdVar3[-1] = pdVar2[-1];
    pdVar3[-2] = dVar5;
    *pdVar3 = *pdVar2;
    lVar4 = lVar4 + -1;
    pdVar2 = pdVar2 + 3;
    pdVar3 = pdVar3 + 4;
  } while (lVar4 != 0);
  dVar5 = pdVar1[4];
  *(double *)(extraout_x8 + 0x68) = pdVar1[5];
  *(double *)(extraout_x8 + 0x60) = dVar5;
  *(double *)(extraout_x8 + 0x70) = pdVar1[6];
  *(undefined8 *)(extraout_x8 + 0x18) = 0;
  *(undefined8 *)(extraout_x8 + 0x38) = 0;
  *(undefined8 *)(extraout_x8 + 0x58) = 0;
  *(undefined8 *)(extraout_x8 + 0x78) = 0x3ff0000000000000;
  return;
}



/* Entry: 10937fb1c; end: 10937fc47;  */

void FUN_10937fb1c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = 3;
  puVar1 = (undefined8 *)(param_2 + 0x50);
  puVar2 = (undefined8 *)(param_1 + 0x10);
  do {
    uVar4 = puVar1[-2];
    puVar2[-1] = puVar1[-1];
    puVar2[-2] = uVar4;
    *puVar2 = *puVar1;
    lVar3 = lVar3 + -1;
    puVar1 = puVar1 + 3;
    puVar2 = puVar2 + 4;
  } while (lVar3 != 0);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0x3ff0000000000000;
  return;
}



/* Entry: 10937fc48; end: 10937fcaf;  */

void FUN_10937fc48(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 auStack_68 [9];
  
  lVar1 = 0;
  puVar2 = (undefined8 *)(param_2 + 0x10);
  do {
    uVar3 = puVar2[-2];
    *(undefined8 *)((long)auStack_68 + lVar1 + 8) = puVar2[-1];
    *(undefined8 *)((long)auStack_68 + lVar1) = uVar3;
    *(undefined8 *)((long)auStack_68 + lVar1 + 0x10) = *puVar2;
    lVar1 = lVar1 + 0x18;
    puVar2 = puVar2 + 4;
  } while (lVar1 != 0x48);
  FUN_10937fcb0(param_1,auStack_68);
  uVar3 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x70);
  return;
}



/* Entry: 10937fcb0; end: 10937fe83;  */

void FUN_10937fcb0(double *param_1,double *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = *param_2;
  dVar5 = param_2[4];
  dVar6 = dVar4 + dVar5 + param_2[8];
  if (0.0 < dVar6) {
    dVar4 = SQRT(dVar6 + 1.0);
    param_1[3] = dVar4 * 0.5;
    dVar4 = 0.5 / dVar4;
    *param_1 = dVar4 * (param_2[5] - param_2[7]);
    param_1[1] = dVar4 * (param_2[6] - param_2[2]);
    param_1[2] = dVar4 * (param_2[1] - param_2[3]);
    return;
  }
  lVar1 = 0x18;
  if (dVar5 <= dVar4) {
    lVar1 = 0;
  }
  uVar2 = 2;
  if (param_2[8] <= *(double *)((long)param_2 + (ulong)(dVar4 < dVar5) * 8 + lVar1)) {
    uVar2 = (ulong)(dVar4 < dVar5);
  }
  lVar1 = 0;
  if (uVar2 != 2) {
    lVar1 = uVar2 + 1;
  }
  lVar3 = lVar1 + -2;
  if (lVar1 + 1U < 3) {
    lVar3 = lVar1 + 1;
  }
  dVar4 = SQRT(((param_2[uVar2 * 4] - param_2[lVar1 * 4]) - param_2[lVar3 * 4]) + 1.0);
  param_1[uVar2] = dVar4 * 0.5;
  dVar4 = 0.5 / dVar4;
  param_1[3] = (param_2[lVar1 * 3 + lVar3] - param_2[lVar3 * 3 + lVar1]) * dVar4;
  param_1[lVar1] = dVar4 * (param_2[uVar2 * 3 + lVar1] + param_2[lVar1 * 3 + uVar2]);
  param_1[lVar3] = dVar4 * (param_2[uVar2 * 3 + lVar3] + param_2[lVar3 * 3 + uVar2]);
  return;
}



/* Entry: 10937fe84; end: 1093804ef;  */

double * FUN_10937fe84(double *param_1,double *param_2,double ***param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double ***pppdVar8;
  double ***pppdVar9;
  long lVar10;
  ulong uVar11;
  double *pdVar12;
  long lVar13;
  float *pfVar14;
  undefined8 *puVar15;
  double *pdVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  double ***pppdVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  float fVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  float fVar39;
  double dVar40;
  undefined8 uVar41;
  undefined1 uStack_8591;
  double *pdStack_8590;
  ulong uStack_8588;
  undefined8 uStack_570;
  double **ppdStack_558;
  double **ppdStack_550;
  ulong uStack_548;
  double dStack_538;
  double dStack_520;
  double *pdStack_518;
  double *pdStack_510;
  ulong uStack_508;
  ulong uStack_500;
  double dStack_4f8;
  long lStack_4e8;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double dStack_398;
  double dStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  double dStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  double dStack_358;
  undefined8 uStack_350;
  double dStack_348;
  double dStack_340;
  double dStack_338;
  undefined8 uStack_330;
  double dStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  double dStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  double dStack_2f0;
  double dStack_2e8;
  double dStack_2e0;
  double dStack_2d8;
  double adStack_2d0 [18];
  double adStack_240 [9];
  long lStack_1f8;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 uStack_12c;
  float fStack_120;
  float fStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  float fStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  float fStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  float fStack_d0;
  undefined8 uStack_cc;
  float fStack_c4;
  float fStack_c0;
  undefined8 uStack_bc;
  float afStack_b4 [2];
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float afStack_6c [9];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  fVar30 = SUB84(*param_1,0);
  fVar32 = (float)((ulong)*param_1 >> 0x20);
  fVar31 = *(float *)(param_1 + 1);
  fVar21 = fVar30 * fVar30 + fVar32 * fVar32 + fVar31 * fVar31;
  pdVar6 = param_2;
  pppdVar8 = param_3;
  if (fVar21 <= 1.1920929e-07) {
    param_2[1] = 0.0;
    *param_2 = 5.26354424712089e-315;
    param_2[3] = 0.0;
    param_2[2] = 5.26354424712089e-315;
    *(undefined4 *)(param_2 + 4) = 0x3f800000;
    if (param_3 != (double ***)0x0) {
      param_3[5] = (double **)0x0;
      param_3[4] = (double **)0x0;
      param_3[7] = (double **)0x0;
      param_3[6] = (double **)0x0;
      param_3[9] = (double **)0x0;
      param_3[8] = (double **)0x0;
      param_3[0xb] = (double **)0x0;
      param_3[10] = (double **)0x0;
      *(undefined8 *)((long)param_3 + 100) = 0;
      *(undefined8 *)((long)param_3 + 0x5c) = 0;
      param_3[1] = (double **)0x0;
      *param_3 = (double **)0x0;
      param_3[3] = (double **)0x0;
      param_3[2] = (double **)0x0;
      *(undefined4 *)((long)param_3 + 0x14) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0x4c) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0x3c) = 0x3f800000;
      *(undefined4 *)((long)param_3 + 0x2c) = 0xbf800000;
      *(undefined4 *)((long)param_3 + 0x1c) = 0xbf800000;
      *(undefined4 *)((long)param_3 + 0x54) = 0xbf800000;
    }
  }
  else {
    fVar21 = SQRT(fVar21);
    uVar41 = ___sincosf_stret(fVar21);
    fVar26 = (float)((ulong)uVar41 >> 0x20);
    fVar22 = (float)uVar41;
    lVar10 = 0;
    lVar13 = 0;
    fVar34 = 1.0 - fVar26;
    fVar21 = 1.0 / fVar21;
    fStack_98 = fVar21 * fVar30;
    fVar31 = fVar31 * fVar21;
    fVar32 = fVar32 * fVar21;
    afStack_6c[1] = 0.0;
    afStack_6c[2] = 0.0;
    afStack_6c[5] = 0.0;
    afStack_6c[6] = 0.0;
    afStack_6c[7] = 0.0;
    afStack_6c[8] = 1.0;
    afStack_6c[0] = 1.0;
    afStack_6c[3] = 0.0;
    afStack_6c[4] = 1.0;
    auVar36._4_4_ = fVar32;
    auVar36._0_4_ = fVar31;
    auVar36._8_8_ = 0;
    auVar36 = NEON_rev64(auVar36,4);
    auVar37._0_8_ = CONCAT44(auVar36._0_4_ * fStack_98,fVar31 * fStack_98);
    auVar37._8_4_ = fVar32 * fVar32;
    auVar37._12_4_ = auVar36._4_4_ * fVar32;
    uStack_80 = auVar37._8_8_;
    uStack_88 = auVar37._0_8_;
    auVar36 = NEON_ext(auVar37,auVar37,8,1);
    uStack_90 = CONCAT44(fVar32 * fStack_98,fStack_98 * fStack_98);
    uStack_78 = CONCAT44(auVar36._4_4_,fVar31 * fStack_98);
    fStack_70 = fVar31 * fVar31;
    afStack_b4[0] = 0.0;
    afStack_b4[1] = -fVar31;
    uStack_ac = NEON_rev64(CONCAT44(fVar32,fVar31),4);
    uStack_a4 = 0;
    uStack_a0 = CONCAT44(-fVar32,-fStack_98);
    uStack_94 = 0;
    do {
      lVar19 = 0;
      lVar13 = (long)(int)lVar13;
      do {
        *(float *)((long)param_2 + lVar19) =
             fVar34 * *(float *)((long)&uStack_90 + lVar13 * 4) + afStack_6c[lVar13] * fVar26 +
             afStack_b4[lVar13] * fVar22;
        lVar13 = lVar13 + 1;
        lVar19 = lVar19 + 0xc;
      } while (lVar19 != 0x24);
      lVar10 = lVar10 + 1;
      param_2 = (double *)((long)param_2 + 4);
    } while (lVar10 != 3);
    if (param_3 != (double ***)0x0) {
      lVar13 = 0;
      fStack_120 = fStack_98 + fStack_98;
      pfVar14 = &fStack_120;
      fStack_11c = fVar32;
      uStack_118 = CONCAT44(fVar32,fVar31);
      uStack_110 = 0;
      fStack_108 = fVar31;
      uStack_104 = 0;
      uStack_fc = 0;
      fStack_f8 = fStack_98;
      uStack_f4 = 0;
      fStack_f0 = fStack_98;
      fStack_ec = fVar32 + fVar32;
      fStack_e8 = fVar31;
      uStack_e4 = 0;
      fStack_e0 = fVar31;
      uStack_dc = 0;
      uStack_d4 = 0;
      fStack_c4 = fVar32;
      uStack_cc = 0;
      fStack_d0 = fStack_98;
      fStack_c0 = fStack_98;
      uStack_bc = NEON_ext(CONCAT44(fVar32,fVar31),CONCAT44(fVar32 + fVar32,fVar31 + fVar31),4,1);
      uStack_170 = 0;
      uStack_160 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_12c = 0;
      uStack_134 = 0;
      uStack_130 = 0;
      uStack_180 = 0xbf80000000000000;
      uStack_178 = 0x3f80000000000000;
      uStack_168 = 0x3f80000000000000;
      uStack_158 = 0xbf80000000000000;
      puVar15 = &uStack_190;
      uStack_148 = 0xbf80000000000000;
      uStack_140 = 0x3f80000000000000;
      uStack_188 = 0;
      uStack_190 = 0;
      do {
        lVar10 = 0;
        fVar30 = fVar32;
        if (lVar13 != 1) {
          fVar30 = fVar31;
        }
        fVar39 = fStack_98;
        if (lVar13 != 0) {
          fVar39 = fVar30;
        }
        pppdVar9 = param_3;
        do {
          *(float *)pppdVar9 =
               *(float *)((long)&uStack_90 + lVar10) * (fVar22 + fVar21 * fVar34 * -2.0) * fVar39 +
               *(float *)((long)afStack_6c + lVar10) * fVar39 * -fVar22 +
               *(float *)((long)pfVar14 + lVar10) * fVar21 * fVar34 +
               *(float *)((long)afStack_b4 + lVar10) * (fVar26 - fVar21 * fVar22) * fVar39 +
               *(float *)((long)puVar15 + lVar10) * fVar22 * fVar21;
          lVar10 = lVar10 + 4;
          pppdVar9 = (double ***)((long)pppdVar9 + 0xc);
        } while (lVar10 != 0x24);
        lVar13 = lVar13 + 1;
        param_3 = (double ***)((long)param_3 + 4);
        puVar15 = (undefined8 *)((long)puVar15 + 0x24);
        pfVar14 = pfVar14 + 9;
      } while (lVar13 != 3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  lStack_1f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar33 = param_1[1];
  dVar35 = *param_1;
  dVar24 = param_1[2];
  dVar23 = dVar24 * dVar24 + dVar35 * dVar35 + dVar33 * dVar33;
  pdVar7 = pdVar6;
  pppdVar9 = pppdVar8;
  if (dVar23 <= 2.220446049250313e-16) {
    *pdVar6 = 1.0;
    pdVar6[1] = 0.0;
    pdVar6[2] = 0.0;
    pdVar6[3] = 0.0;
    pdVar6[4] = 1.0;
    pdVar6[5] = 0.0;
    pdVar6[6] = 0.0;
    pdVar6[7] = 0.0;
    pdVar6[8] = 1.0;
    if (pppdVar8 != (double ***)0x0) {
      pppdVar8[5] = (double **)0x0;
      pppdVar8[4] = (double **)0x0;
      pppdVar8[7] = (double **)0x0;
      pppdVar8[6] = (double **)0x0;
      pppdVar8[0x1a] = (double **)0x0;
      pppdVar8[0x17] = (double **)0x0;
      pppdVar8[0x16] = (double **)0x0;
      pppdVar8[0x19] = (double **)0x0;
      pppdVar8[0x18] = (double **)0x0;
      pppdVar8[0x13] = (double **)0x0;
      pppdVar8[0x12] = (double **)0x0;
      pppdVar8[0x15] = (double **)0x0;
      pppdVar8[0x14] = (double **)0x0;
      pppdVar8[0xf] = (double **)0x0;
      pppdVar8[0xe] = (double **)0x0;
      pppdVar8[0x11] = (double **)0x0;
      pppdVar8[0x10] = (double **)0x0;
      pppdVar8[0xb] = (double **)0x0;
      pppdVar8[10] = (double **)0x0;
      pppdVar8[0xd] = (double **)0x0;
      pppdVar8[0xc] = (double **)0x0;
      pppdVar8[9] = (double **)0x0;
      pppdVar8[8] = (double **)0x0;
      pppdVar8[1] = (double **)0x0;
      *pppdVar8 = (double **)0x0;
      pppdVar8[3] = (double **)0x0;
      pppdVar8[2] = (double **)0x0;
      pppdVar8[5] = (double **)0x3ff0000000000000;
      pppdVar8[0x13] = (double **)0x3ff0000000000000;
      pppdVar8[0xf] = (double **)0x3ff0000000000000;
      pppdVar8[0xb] = (double **)0xbff0000000000000;
      pppdVar8[7] = (double **)0xbff0000000000000;
      pppdVar8[0x15] = (double **)0xbff0000000000000;
    }
  }
  else {
    dVar23 = SQRT(dVar23);
    auVar36 = ___sincos_stret(dVar23);
    dVar27 = auVar36._8_8_;
    dVar38 = auVar36._0_8_;
    lVar10 = 0;
    lVar13 = 0;
    dVar23 = 1.0 / dVar23;
    adStack_2d0[7] = dVar23 * dVar35;
    dVar24 = dVar24 * dVar23;
    dVar33 = dVar33 * dVar23;
    adStack_240[3] = 0.0;
    adStack_240[6] = 0.0;
    adStack_240[5] = 0.0;
    adStack_240[2] = 0.0;
    adStack_240[1] = 0.0;
    adStack_240[0] = 1.0;
    adStack_240[4] = 1.0;
    adStack_240[7] = 0.0;
    adStack_240[8] = 1.0;
    adStack_2d0[9] = adStack_2d0[7] * adStack_2d0[7];
    adStack_2d0[10] = adStack_2d0[7] * dVar33;
    adStack_2d0[0xd] = dVar33 * dVar33;
    adStack_2d0[0xc] = adStack_2d0[7] * dVar33;
    adStack_2d0[0xb] = adStack_2d0[7] * dVar24;
    adStack_2d0[0xe] = dVar24 * dVar33;
    adStack_2d0[0xf] = adStack_2d0[7] * dVar24;
    adStack_2d0[0x10] = dVar24 * dVar33;
    adStack_2d0[0x11] = dVar24 * dVar24;
    dVar35 = 1.0 - dVar27;
    adStack_2d0[0] = 0.0;
    adStack_2d0[1] = -dVar24;
    auVar3._8_8_ = dVar33;
    auVar3._0_8_ = dVar24;
    auVar4._8_8_ = dVar33;
    auVar4._0_8_ = dVar24;
    auVar36 = NEON_ext(auVar3,auVar4,8,1);
    adStack_2d0[3] = (double)auVar36._8_8_;
    adStack_2d0[2] = (double)auVar36._0_8_;
    adStack_2d0[4] = 0.0;
    adStack_2d0[6] = -dVar33;
    adStack_2d0[5] = -adStack_2d0[7];
    adStack_2d0[8] = 0.0;
    do {
      lVar19 = 0;
      lVar13 = (long)(int)lVar13;
      do {
        *(double *)((long)pdVar6 + lVar19) =
             dVar35 * adStack_2d0[lVar13 + 9] + adStack_240[lVar13] * dVar27 +
             adStack_2d0[lVar13] * dVar38;
        lVar13 = lVar13 + 1;
        lVar19 = lVar19 + 0x18;
      } while (lVar19 != 0x48);
      lVar10 = lVar10 + 1;
      pdVar6 = pdVar6 + 1;
    } while (lVar10 != 3);
    if (pppdVar8 != (double ***)0x0) {
      lVar13 = 0;
      dStack_3a8 = adStack_2d0[7] + adStack_2d0[7];
      dStack_3a0 = dVar33;
      dStack_390 = dVar33;
      dStack_398 = dVar24;
      uStack_388 = 0;
      uStack_380 = 0;
      dStack_378 = dVar24;
      uStack_368 = 0;
      uStack_360 = 0;
      uStack_370 = 0;
      dStack_358 = adStack_2d0[7];
      uStack_350 = 0;
      dStack_348 = adStack_2d0[7];
      dStack_340 = dVar33 + dVar33;
      dStack_338 = dVar24;
      uStack_330 = 0;
      dStack_328 = dVar24;
      uStack_318 = 0;
      uStack_310 = 0;
      uStack_320 = 0;
      dStack_308 = adStack_2d0[7];
      uStack_300 = 0;
      uStack_2f8 = 0;
      dStack_2f0 = dVar33;
      dStack_2e8 = adStack_2d0[7];
      dStack_2e0 = dVar33;
      dStack_2d8 = dVar24 + dVar24;
      uStack_460 = 0;
      uStack_450 = 0;
      uStack_3b0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3b8 = 0;
      uStack_3c0 = 0;
      uStack_3f0 = 0;
      uStack_3e0 = 0;
      uStack_410 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_430 = 0;
      uStack_418 = 0;
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_458 = 0xbff0000000000000;
      uStack_448 = 0x3ff0000000000000;
      uStack_428 = 0x3ff0000000000000;
      uStack_408 = 0xbff0000000000000;
      uStack_3e8 = 0xbff0000000000000;
      uStack_3d8 = 0x3ff0000000000000;
      puVar15 = &uStack_480;
      pdVar6 = &dStack_3a8;
      uStack_478 = 0;
      uStack_480 = 0;
      uStack_468 = 0;
      uStack_470 = 0;
      do {
        lVar10 = 0;
        dVar5 = dVar33;
        if (lVar13 != 1) {
          dVar5 = dVar24;
        }
        dVar40 = adStack_2d0[7];
        if (lVar13 != 0) {
          dVar40 = dVar5;
        }
        pppdVar20 = pppdVar8;
        do {
          *pppdVar20 = (double **)
                       ((dVar38 + dVar23 * dVar35 * -2.0) * dVar40 *
                        *(double *)((long)adStack_2d0 + lVar10 + 0x48) +
                        *(double *)((long)adStack_240 + lVar10) * dVar40 * -dVar38 +
                        *(double *)((long)pdVar6 + lVar10) * dVar23 * dVar35 +
                        *(double *)((long)adStack_2d0 + lVar10) *
                        (dVar27 - dVar23 * dVar38) * dVar40 +
                       *(double *)((long)puVar15 + lVar10) * dVar38 * dVar23);
          lVar10 = lVar10 + 8;
          pppdVar20 = pppdVar20 + 3;
        } while (lVar10 != 0x48);
        lVar13 = lVar13 + 1;
        pppdVar8 = pppdVar8 + 1;
        puVar15 = puVar15 + 9;
        pdVar6 = pdVar6 + 9;
      } while (lVar13 != 3);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f8) {
    return param_1;
  }
  ___stack_chk_fail();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_4e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar35 = *pdVar7;
  dVar24 = pdVar7[1];
  dVar23 = SQRT(pdVar7[2] * pdVar7[2] + dVar35 * dVar35 + dVar24 * dVar24);
  pdVar6 = param_1;
  if (2.220446049250313e-16 <= dVar23) goto LAB_10938075c;
  uVar17 = (ulong)pdVar7 & 7;
  uVar11 = (ulong)pdVar7 >> 3 & 1;
  uVar18 = uVar11;
  if (uVar17 != 0) {
    uVar18 = 3;
  }
  dVar33 = 1.0;
  if (uVar18 == 0) {
    dVar35 = 0.0;
    dVar23 = 0.0;
  }
  else {
    lVar13 = 0;
    if (uVar18 != 1) {
      lVar13 = 2;
    }
    if (uVar17 == 0) {
      dVar38 = ABS(dVar35);
    }
    else {
      dVar23 = ABS(dVar24);
      if (ABS(dVar24) <= ABS(dVar35)) {
        dVar23 = ABS(dVar35);
      }
      lVar10 = lVar13 << 3;
      do {
        dVar38 = ABS(*(double *)((long)pdVar7 + lVar10));
        if (ABS(*(double *)((long)pdVar7 + lVar10)) <= dVar23) {
          dVar38 = dVar23;
        }
        lVar10 = lVar10 + 8;
        dVar23 = dVar38;
      } while (lVar10 != 0x18);
    }
    if (0.0 < dVar38) {
      dVar23 = 0.0 / dVar38;
      dVar33 = 1.0 / dVar38;
      if (dVar33 <= 1.79769313486232e+308) {
        if (1.79769313486232e+308 < dVar38) {
          dVar33 = 1.0;
        }
      }
      else {
        dVar38 = 5.562684646268003e-309;
        dVar33 = 1.79769313486232e+308;
      }
      if (uVar17 == 0) {
        dVar35 = dVar33 * dVar35 * dVar33 * dVar35;
      }
      else {
        dVar35 = dVar35 * dVar33 * dVar35 * dVar33 + dVar24 * dVar33 * dVar24 * dVar33;
        lVar13 = lVar13 << 3;
        do {
          dVar24 = dVar33 * *(double *)((long)pdVar7 + lVar13);
          dVar35 = dVar35 + dVar24 * dVar24;
          lVar13 = lVar13 + 8;
        } while (lVar13 != 0x18);
      }
      dVar35 = dVar23 * dVar23 * 0.0 + dVar35;
      dVar23 = dVar38;
    }
    else {
      dVar35 = 0.0;
      dVar23 = 0.0;
      if (NAN(dVar38)) {
        dVar23 = dVar38;
      }
    }
  }
  if (uVar17 == 0) {
    uStack_8588 = uVar11 ^ 3;
    ppdStack_558 = &pdStack_8590;
    uStack_570 = 0;
    pdStack_8590 = pdVar7 + uVar11;
    pdVar6 = &dStack_520;
    pppdVar9 = &ppdStack_558;
    pdStack_518 = pdStack_8590;
    uStack_508 = uStack_8588;
    dVar24 = (double)FUN_1093807f8(pdVar6,&uStack_8591);
    if (dVar24 <= dVar23) {
      if (NAN(dVar24)) {
        dVar23 = dVar24;
      }
LAB_10938070c:
      if (dVar23 <= 0.0) goto LAB_109380754;
    }
    else {
      dVar35 = dVar35 * (dVar23 / dVar24) * (dVar23 / dVar24);
      dVar33 = 1.79769313486232e+308;
      if (1.0 / dVar24 <= 1.79769313486232e+308) {
        dVar23 = dVar24;
        dVar33 = 1.0;
        if (dVar24 <= 1.79769313486232e+308) {
          dVar33 = 1.0 / dVar24;
        }
        goto LAB_10938070c;
      }
      dVar23 = 5.562684646268003e-309;
    }
    ppdStack_550 = &pdStack_8590;
    uStack_548 = uStack_8588;
    dStack_538 = dVar33;
    if (uStack_8588 == 0) {
      dVar24 = 0.0;
    }
    else {
      pdStack_510 = pdStack_8590;
      uStack_500 = uStack_8588;
      pdVar6 = &dStack_520;
      pppdVar9 = &ppdStack_558;
      dStack_4f8 = dVar33;
      dVar24 = (double)func_0x0001093808d4(pdVar6,&uStack_8591);
    }
    dVar35 = dVar35 + dVar24;
  }
LAB_109380754:
  dVar23 = dVar23 * SQRT(dVar35);
LAB_10938075c:
  if (dVar23 == 0.0) {
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 1.0;
    param_1[1] = 0.0;
  }
  else {
    dVar35 = (double)_atan2(dVar23,ABS(pdVar7[3]));
    param_1[3] = dVar35 + dVar35;
    dVar35 = -dVar23;
    if (0.0 <= pdVar7[3]) {
      dVar35 = dVar23;
    }
    dVar24 = *pdVar7;
    param_1[1] = pdVar7[1] / dVar35;
    *param_1 = dVar24 / dVar35;
    param_1[2] = pdVar7[2] / dVar35;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4e8) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pdVar16 = (*pppdVar9)[1];
  pdVar7 = (double *)((long)pdVar16 + 3);
  if (-1 < (long)pdVar16) {
    pdVar7 = pdVar16;
  }
  pdVar12 = (double *)pdVar6[1];
  if (2 < (long)pdVar16 + 1U) {
    uVar17 = (long)pdVar16 - ((long)pdVar16 >> 0x3f) & 0xfffffffffffffffe;
    auVar25._0_8_ = ABS(*pdVar12);
    auVar25._8_8_ = ABS(pdVar12[1]);
    if (3 < (long)pdVar16) {
      uVar18 = (ulong)pdVar7 & 0xfffffffffffffffc;
      auVar28._0_8_ = ABS(pdVar12[2]);
      auVar28._8_8_ = ABS(pdVar12[3]);
      if ((double *)0x7 < pdVar16) {
        pdVar7 = pdVar12 + 6;
        lVar13 = 4;
        do {
          auVar1._8_8_ = ABS(pdVar7[-1]);
          auVar1._0_8_ = ABS(pdVar7[-2]);
          auVar25 = NEON_fmax(auVar25,auVar1,8);
          auVar2._8_8_ = ABS(pdVar7[1]);
          auVar2._0_8_ = ABS(*pdVar7);
          auVar28 = NEON_fmax(auVar28,auVar2,8);
          lVar13 = lVar13 + 4;
          pdVar7 = pdVar7 + 4;
        } while (lVar13 < (long)uVar18);
      }
      auVar25 = NEON_fmax(auVar25,auVar28,8);
      if ((long)uVar18 < (long)uVar17) {
        auVar29._0_8_ = ABS(pdVar12[uVar18]);
        auVar29._8_8_ = ABS((pdVar12 + uVar18)[1]);
        auVar25 = NEON_fmax(auVar25,auVar29,8);
      }
    }
    dVar35 = auVar25._8_8_;
    if (auVar25._8_8_ <= auVar25._0_8_) {
      dVar35 = auVar25._0_8_;
    }
    lVar13 = (long)pdVar16 % 2;
    if (lVar13 != 0 && lVar13 < 0 == SBORROW8((long)pdVar16,uVar17)) {
      pdVar7 = pdVar12 + ((long)pdVar16 / 2) * 2;
      do {
        dVar24 = ABS(*pdVar7);
        if (ABS(*pdVar7) <= dVar35) {
          dVar24 = dVar35;
        }
        lVar13 = lVar13 + -1;
        pdVar7 = pdVar7 + 1;
        dVar35 = dVar24;
      } while (lVar13 != 0);
    }
    return pdVar6;
  }
  return pdVar6;
}



/* Entry: 1093804f0; end: 1093807f7;  */

double * FUN_1093804f0(double *param_1,double *param_2,double ***param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double *pdVar3;
  ulong uVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 uStack_80f1;
  double *pdStack_80f0;
  ulong uStack_80e8;
  undefined8 uStack_d0;
  double **ppdStack_b8;
  double **ppdStack_b0;
  ulong uStack_a8;
  double dStack_98;
  double dStack_80;
  double *pdStack_78;
  double *pdStack_70;
  ulong uStack_68;
  ulong uStack_60;
  double dStack_58;
  long lStack_48;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = *param_2;
  dVar16 = param_2[1];
  dVar18 = SQRT(param_2[2] * param_2[2] + dVar12 * dVar12 + dVar16 * dVar16);
  pdVar3 = param_1;
  if (2.220446049250313e-16 <= dVar18) goto LAB_10938075c;
  uVar10 = (ulong)param_2 & 7;
  uVar4 = (ulong)param_2 >> 3 & 1;
  uVar11 = uVar4;
  if (uVar10 != 0) {
    uVar11 = 3;
  }
  dVar17 = 1.0;
  if (uVar11 == 0) {
    dVar12 = 0.0;
    dVar18 = 0.0;
  }
  else {
    lVar8 = 0;
    if (uVar11 != 1) {
      lVar8 = 2;
    }
    if (uVar10 == 0) {
      dVar19 = ABS(dVar12);
    }
    else {
      dVar18 = ABS(dVar16);
      if (ABS(dVar16) <= ABS(dVar12)) {
        dVar18 = ABS(dVar12);
      }
      lVar9 = lVar8 << 3;
      do {
        dVar19 = ABS(*(double *)((long)param_2 + lVar9));
        if (ABS(*(double *)((long)param_2 + lVar9)) <= dVar18) {
          dVar19 = dVar18;
        }
        lVar9 = lVar9 + 8;
        dVar18 = dVar19;
      } while (lVar9 != 0x18);
    }
    if (0.0 < dVar19) {
      dVar18 = 0.0 / dVar19;
      dVar17 = 1.0 / dVar19;
      if (dVar17 <= 1.79769313486232e+308) {
        if (1.79769313486232e+308 < dVar19) {
          dVar17 = 1.0;
        }
      }
      else {
        dVar19 = 5.562684646268003e-309;
        dVar17 = 1.79769313486232e+308;
      }
      if (uVar10 == 0) {
        dVar12 = dVar17 * dVar12 * dVar17 * dVar12;
      }
      else {
        dVar12 = dVar12 * dVar17 * dVar12 * dVar17 + dVar16 * dVar17 * dVar16 * dVar17;
        lVar8 = lVar8 << 3;
        do {
          dVar16 = dVar17 * *(double *)((long)param_2 + lVar8);
          dVar12 = dVar12 + dVar16 * dVar16;
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0x18);
      }
      dVar12 = dVar18 * dVar18 * 0.0 + dVar12;
      dVar18 = dVar19;
    }
    else {
      dVar12 = 0.0;
      dVar18 = 0.0;
      if (NAN(dVar19)) {
        dVar18 = dVar19;
      }
    }
  }
  if (uVar10 == 0) {
    uStack_80e8 = uVar4 ^ 3;
    ppdStack_b8 = &pdStack_80f0;
    uStack_d0 = 0;
    pdStack_80f0 = param_2 + uVar4;
    pdVar3 = &dStack_80;
    param_3 = &ppdStack_b8;
    pdStack_78 = pdStack_80f0;
    uStack_68 = uStack_80e8;
    dVar16 = (double)FUN_1093807f8(pdVar3,&uStack_80f1);
    if (dVar16 <= dVar18) {
      if (NAN(dVar16)) {
        dVar18 = dVar16;
      }
LAB_10938070c:
      if (dVar18 <= 0.0) goto LAB_109380754;
    }
    else {
      dVar12 = dVar12 * (dVar18 / dVar16) * (dVar18 / dVar16);
      dVar17 = 1.79769313486232e+308;
      if (1.0 / dVar16 <= 1.79769313486232e+308) {
        dVar17 = 1.0;
        dVar18 = dVar16;
        if (dVar16 <= 1.79769313486232e+308) {
          dVar17 = 1.0 / dVar16;
        }
        goto LAB_10938070c;
      }
      dVar18 = 5.562684646268003e-309;
    }
    ppdStack_b0 = &pdStack_80f0;
    uStack_a8 = uStack_80e8;
    dStack_98 = dVar17;
    if (uStack_80e8 == 0) {
      dVar16 = 0.0;
    }
    else {
      pdStack_70 = pdStack_80f0;
      uStack_60 = uStack_80e8;
      pdVar3 = &dStack_80;
      param_3 = &ppdStack_b8;
      dStack_58 = dVar17;
      dVar16 = (double)func_0x0001093808d4(pdVar3,&uStack_80f1);
    }
    dVar12 = dVar12 + dVar16;
  }
LAB_109380754:
  dVar18 = dVar18 * SQRT(dVar12);
LAB_10938075c:
  if (dVar18 == 0.0) {
    param_1[2] = 0.0;
    param_1[3] = 0.0;
    *param_1 = 1.0;
    param_1[1] = 0.0;
  }
  else {
    dVar12 = (double)_atan2(dVar18,ABS(param_2[3]));
    param_1[3] = dVar12 + dVar12;
    dVar12 = -dVar18;
    if (0.0 <= param_2[3]) {
      dVar12 = dVar18;
    }
    dVar16 = *param_2;
    param_1[1] = param_2[1] / dVar12;
    *param_1 = dVar16 / dVar12;
    param_1[2] = param_2[2] / dVar12;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pdVar7 = (*param_3)[1];
  pdVar6 = (double *)((long)pdVar7 + 3);
  if (-1 < (long)pdVar7) {
    pdVar6 = pdVar7;
  }
  pdVar5 = (double *)pdVar3[1];
  if (2 < (long)pdVar7 + 1U) {
    uVar10 = (long)pdVar7 - ((long)pdVar7 >> 0x3f) & 0xfffffffffffffffe;
    auVar13._0_8_ = ABS(*pdVar5);
    auVar13._8_8_ = ABS(pdVar5[1]);
    if (3 < (long)pdVar7) {
      uVar11 = (ulong)pdVar6 & 0xfffffffffffffffc;
      auVar14._0_8_ = ABS(pdVar5[2]);
      auVar14._8_8_ = ABS(pdVar5[3]);
      if ((double *)0x7 < pdVar7) {
        pdVar6 = pdVar5 + 6;
        lVar8 = 4;
        do {
          auVar1._8_8_ = ABS(pdVar6[-1]);
          auVar1._0_8_ = ABS(pdVar6[-2]);
          auVar13 = NEON_fmax(auVar13,auVar1,8);
          auVar2._8_8_ = ABS(pdVar6[1]);
          auVar2._0_8_ = ABS(*pdVar6);
          auVar14 = NEON_fmax(auVar14,auVar2,8);
          lVar8 = lVar8 + 4;
          pdVar6 = pdVar6 + 4;
        } while (lVar8 < (long)uVar11);
      }
      auVar13 = NEON_fmax(auVar13,auVar14,8);
      if ((long)uVar11 < (long)uVar10) {
        auVar15._0_8_ = ABS(pdVar5[uVar11]);
        auVar15._8_8_ = ABS((pdVar5 + uVar11)[1]);
        auVar13 = NEON_fmax(auVar13,auVar15,8);
      }
    }
    dVar12 = auVar13._8_8_;
    if (auVar13._8_8_ <= auVar13._0_8_) {
      dVar12 = auVar13._0_8_;
    }
    lVar8 = (long)pdVar7 % 2;
    if (lVar8 != 0 && lVar8 < 0 == SBORROW8((long)pdVar7,uVar10)) {
      pdVar6 = pdVar5 + ((long)pdVar7 / 2) * 2;
      do {
        dVar16 = ABS(*pdVar6);
        if (ABS(*pdVar6) <= dVar12) {
          dVar16 = dVar12;
        }
        lVar8 = lVar8 + -1;
        pdVar6 = pdVar6 + 1;
        dVar12 = dVar16;
      } while (lVar8 != 0);
    }
    return pdVar3;
  }
  return pdVar3;
}



/* Entry: 1093807f8; end: 1093809c3;  */

double FUN_1093807f8(long param_1,undefined8 param_2,long *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double *pdVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  double *pdVar8;
  long lVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = *(ulong *)(*param_3 + 8);
  uVar7 = uVar5 + 3;
  if (-1 < (long)uVar5) {
    uVar7 = uVar5;
  }
  pdVar4 = *(double **)(param_1 + 8);
  if (uVar5 + 1 < 3) {
    return ABS(*pdVar4);
  }
  uVar6 = uVar5 - ((long)uVar5 >> 0x3f) & 0xfffffffffffffffe;
  auVar11._0_8_ = ABS(*pdVar4);
  auVar11._8_8_ = ABS(pdVar4[1]);
  if (3 < (long)uVar5) {
    uVar7 = uVar7 & 0xfffffffffffffffc;
    auVar12._0_8_ = ABS(pdVar4[2]);
    auVar12._8_8_ = ABS(pdVar4[3]);
    if (7 < uVar5) {
      pdVar8 = pdVar4 + 6;
      lVar9 = 4;
      do {
        auVar1._8_8_ = ABS(pdVar8[-1]);
        auVar1._0_8_ = ABS(pdVar8[-2]);
        auVar11 = NEON_fmax(auVar11,auVar1,8);
        auVar2._8_8_ = ABS(pdVar8[1]);
        auVar2._0_8_ = ABS(*pdVar8);
        auVar12 = NEON_fmax(auVar12,auVar2,8);
        lVar9 = lVar9 + 4;
        pdVar8 = pdVar8 + 4;
      } while (lVar9 < (long)uVar7);
    }
    auVar11 = NEON_fmax(auVar11,auVar12,8);
    if ((long)uVar7 < (long)uVar6) {
      auVar13._0_8_ = ABS(pdVar4[uVar7]);
      auVar13._8_8_ = ABS((pdVar4 + uVar7)[1]);
      auVar11 = NEON_fmax(auVar11,auVar13,8);
    }
  }
  dVar10 = auVar11._8_8_;
  if (auVar11._8_8_ <= auVar11._0_8_) {
    dVar10 = auVar11._0_8_;
  }
  lVar9 = (long)uVar5 % 2;
  if (lVar9 != 0 && lVar9 < 0 == SBORROW8(uVar5,uVar6)) {
    pdVar4 = pdVar4 + ((long)uVar5 / 2) * 2;
    dVar3 = dVar10;
    do {
      dVar10 = ABS(*pdVar4);
      if (ABS(*pdVar4) <= dVar3) {
        dVar10 = dVar3;
      }
      lVar9 = lVar9 + -1;
      pdVar4 = pdVar4 + 1;
      dVar3 = dVar10;
    } while (lVar9 != 0);
  }
  return dVar10;
}



/* Entry: 1093809c4; end: 109380a6f;  */

undefined8 * FUN_1093809c4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_30;
  long *plStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (long *)0x28;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110af4800;
  plStack_30 = plVar4 + 3;
  *(undefined1 *)plStack_30 = 0;
  plVar4[4] = 0;
  plStack_28 = plVar4;
  FUN_109380a70(param_1,&plStack_30);
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
  return param_1;
}



/* Entry: 109380a70; end: 109380ad3;  */

undefined8 * FUN_109380a70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 109380ad4; end: 109380b9b;  */

undefined8 * FUN_109380ad4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plStack_40;
  long *plStack_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar4 = (long *)0x28;
  __Znwm();
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&PTR_FUN_110af4800;
  plStack_40 = plVar4 + 3;
  *(undefined1 *)plStack_40 = 0;
  plVar4[4] = 0;
  plStack_38 = plVar4;
  FUN_109380a70(param_1,&plStack_40);
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
  FUN_109380b9c(param_1,param_2);
  return param_1;
}



/* Entry: 109380b9c; end: 109380c8b;  */

void FUN_109380b9c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  code *pcVar2;
  undefined8 auStack_40 [2];
  char cStack_29;
  long *plStack_28;
  
  (**(code **)(*param_2 + 0x20))(&plStack_28,param_2);
  if (plStack_28 != (long *)0x0) {
    FUN_109380d1c(param_1);
    plVar1 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    return;
  }
  FUN_10937e740(auStack_40,&UNK_10f567791);
  FUN_109388c6c(1,&UNK_10f567707,&UNK_10f56778c,0x20,auStack_40);
  if (cStack_29 < '\0') {
    __ZdlPv(auStack_40[0]);
  }
  func_0x000105688514(&UNK_10f5677ab);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109380c4c);
  (*pcVar2)();
}



/* Entry: 109380c8c; end: 109380d1b;  */

undefined8 * FUN_109380c8c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  long *plStack_30;
  undefined1 uStack_21;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_109381a80(auStack_38,&uStack_21);
  FUN_109380a70(param_1,auStack_38);
  if (plStack_30 != (long *)0x0) {
    plVar1 = plStack_30 + 1;
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
      (**(code **)(*plStack_30 + 0x10))(plStack_30);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_30);
    }
  }
  return param_1;
}



/* Entry: 109380d1c; end: 109380e33;  */

void FUN_109380d1c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  FUN_109382360(auStack_40,0,0,0,1);
  puVar2 = (undefined1 *)*param_1;
  uVar1 = *puVar2;
  *puVar2 = auStack_40[0];
  uVar3 = *(undefined8 *)(puVar2 + 8);
  *(undefined8 *)(puVar2 + 8) = uStack_38;
  auStack_40[0] = uVar1;
  uStack_38 = uVar3;
  FUN_109380ffc(&uStack_38);
  FUN_109380e34(param_2,*param_1);
  return;
}



/* Entry: 109380e34; end: 109380f8b;  */

/* WARNING: Removing unreachable block (ram,0x000109380fb4) */
/* WARNING: Removing unreachable block (ram,0x000109380fb8) */
/* WARNING: Removing unreachable block (ram,0x000109380fc0) */
/* WARNING: Removing unreachable block (ram,0x000109380fc8) */
/* WARNING: Removing unreachable block (ram,0x000109380fcc) */

long ***** FUN_109380e34(long *****param_1,undefined8 param_2)

{
  long *****ppppplVar1;
  long lVar2;
  long ****pppplStack_128;
  undefined8 uStack_120;
  long alStack_118 [3];
  long *plStack_100;
  long alStack_f8 [3];
  long *plStack_e0;
  undefined1 auStack_d0 [152];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_120 = *(undefined8 *)((long)param_1 + (long)((*param_1)[-3] + 5));
  plStack_100 = (long *)0x0;
  pppplStack_128 = (long ****)param_1;
  FUN_1093829b0(alStack_f8,&pppplStack_128,alStack_118,1,0);
  FUN_109382a9c(alStack_f8,0,param_2);
  FUN_109383fe8(auStack_d0);
  if (plStack_e0 == alStack_f8) {
    lVar2 = 0x20;
LAB_109380ec8:
    (**(code **)(*plStack_e0 + lVar2))();
  }
  else if (plStack_e0 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_109380ec8;
  }
  if (plStack_100 == alStack_118) {
    lVar2 = 0x20;
LAB_109380ef4:
    (**(code **)(*plStack_100 + lVar2))();
  }
  else if (plStack_100 != (long *)0x0) {
    lVar2 = 0x28;
    goto LAB_109380ef4;
  }
  ppppplVar1 = &pppplStack_128;
  FUN_109388a04();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_109382f3c(alStack_f8);
  if (plStack_100 == alStack_118) {
    lVar2 = 0x20;
  }
  else {
    if (plStack_100 == (long *)0x0) goto LAB_109380f7c;
    lVar2 = 0x28;
  }
  (**(code **)(*plStack_100 + lVar2))();
LAB_109380f7c:
  FUN_109388a04(&pppplStack_128);
  __Unwind_Resume(ppppplVar1);
  FUN_109380a70();
  FUN_1093818c0(ppppplVar1);
  return ppppplVar1;
}



/* Entry: 109380f8c; end: 109380ffb;  */

void FUN_109380f8c(undefined8 param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 uStack_30;
  long *plStack_28;
  
  uStack_30 = 0;
  plStack_28 = (long *)0x0;
  FUN_109380a70(param_1,&uStack_30);
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
  FUN_1093818c0(param_1);
  return;
}



/* Entry: 109380ffc; end: 10938133f;  */

void FUN_109380ffc(ulong *param_1,int param_2)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ****ppppuVar4;
  long *plVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined8 ***pppuVar11;
  long *plVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  
  ppppuStack_68 = (undefined8 *****)0x0;
  ppppuStack_60 = (undefined8 *****)0x0;
  ppppuStack_58 = (undefined8 *****)0x0;
  if (param_2 == 1) {
    FUN_109381340(&ppppuStack_68,*(undefined8 *)(*param_1 + 0x10));
    plVar10 = (long *)*param_1;
    plVar8 = (long *)*plVar10;
    while (plVar8 != plVar10 + 1) {
      if (ppppuStack_60 < ppppuStack_58) {
        *(undefined1 *)ppppuStack_60 = *(undefined1 *)(plVar8 + 7);
        ppppuStack_60[1] = (undefined8 ****)plVar8[8];
        *(undefined1 *)(plVar8 + 7) = 0;
        plVar8[8] = 0;
        pppppuVar7 = (undefined8 *****)(ppppuStack_60 + 2);
      }
      else {
        pppppuVar7 = &ppppuStack_68;
        FUN_109381694(pppppuVar7,plVar8 + 7);
      }
      plVar5 = (long *)plVar8[1];
      plVar12 = plVar8;
      ppppuStack_60 = pppppuVar7;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar12[2];
          bVar6 = (long *)*plVar8 != plVar12;
          plVar12 = plVar8;
        } while (bVar6);
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
    }
  }
  else if (param_2 == 2) {
    FUN_109381340(&ppppuStack_68,((long *)*param_1)[1] - *(long *)*param_1 >> 4);
    lVar1 = ((long *)*param_1)[1];
    for (lVar9 = *(long *)*param_1; lVar9 != lVar1; lVar9 = lVar9 + 0x10) {
      FUN_1093813f8(&ppppuStack_68,lVar9);
    }
  }
  if (ppppuStack_68 != ppppuStack_60) {
    do {
      ppppuStack_78 =
           (undefined8 ****)CONCAT71(ppppuStack_78._1_7_,*(undefined1 *)(ppppuStack_60 + -2));
      pppuStack_70 = ppppuStack_60[-1];
      *(undefined1 *)(ppppuStack_60 + -2) = 0;
      ppppuStack_60[-1] = (undefined8 ****)0x0;
      pppppuVar7 = (undefined8 *****)(ppppuStack_60 + -2);
      FUN_109380ffc(ppppuStack_60 + -1,*(undefined1 *)pppppuVar7);
      ppppuStack_60 = pppppuVar7;
      if ((char)ppppuStack_78 == '\x01') {
        ppppuVar14 = (undefined8 ****)(pppuStack_70 + 1);
        ppppuVar16 = (undefined8 ****)*pppuStack_70;
        ppppuVar2 = (undefined8 ****)pppuStack_70;
        while (pppuStack_70 = ppppuVar2, ppppuVar16 != ppppuVar14) {
          if (ppppuStack_60 < ppppuStack_58) {
            *(undefined1 *)ppppuStack_60 = *(undefined1 *)(ppppuVar16 + 7);
            ppppuStack_60[1] = ppppuVar16[8];
            *(undefined1 *)(ppppuVar16 + 7) = 0;
            ppppuVar16[8] = (undefined8 ***)0x0;
            pppppuVar7 = (undefined8 *****)(ppppuStack_60 + 2);
          }
          else {
            pppppuVar7 = &ppppuStack_68;
            FUN_109381694(pppppuVar7,ppppuVar16 + 7);
          }
          ppppuVar4 = (undefined8 ****)ppppuVar16[1];
          ppppuVar17 = ppppuVar16;
          ppppuStack_60 = pppppuVar7;
          ppppuVar2 = (undefined8 ****)pppuStack_70;
          if ((undefined8 ****)ppppuVar16[1] == (undefined8 ****)0x0) {
            do {
              ppppuVar16 = (undefined8 ****)ppppuVar17[2];
              bVar6 = (undefined8 ****)*ppppuVar16 != ppppuVar17;
              ppppuVar17 = ppppuVar16;
            } while (bVar6);
          }
          else {
            do {
              ppppuVar16 = ppppuVar4;
              ppppuVar4 = (undefined8 ****)*ppppuVar16;
            } while ((undefined8 ****)*ppppuVar16 != (undefined8 ****)0x0);
          }
        }
        ppppuVar16 = ppppuVar2 + 1;
        FUN_10938179c(ppppuVar2,*ppppuVar16);
        *ppppuVar2 = ppppuVar16;
        ppppuVar2[2] = (undefined8 ***)0x0;
        *ppppuVar16 = (undefined8 ***)0x0;
      }
      else if ((char)ppppuStack_78 == '\x02') {
        pppuVar11 = (undefined8 ***)*pppuStack_70;
        pppuVar13 = (undefined8 ***)pppuStack_70[1];
        if (pppuVar11 != pppuVar13) {
          do {
            FUN_1093813f8(&ppppuStack_68,pppuVar11);
            pppuVar11 = pppuVar11 + 2;
          } while (pppuVar11 != pppuVar13);
          pppuVar11 = (undefined8 ***)*pppuStack_70;
          pppuVar13 = (undefined8 ***)pppuStack_70[1];
        }
        pppuVar3 = pppuStack_70;
        if (pppuVar13 != pppuVar11) {
          pppuVar13 = pppuVar13 + -1;
          do {
            pppuVar15 = pppuVar13 + -1;
            FUN_109380ffc(pppuVar13,*(undefined1 *)pppuVar15);
            pppuVar13 = pppuVar13 + -2;
          } while (pppuVar15 != pppuVar11);
        }
        pppuVar3[1] = pppuVar11;
      }
      FUN_109380ffc(&pppuStack_70,(ulong)ppppuStack_78 & 0xff);
    } while (ppppuStack_68 != ppppuStack_60);
  }
  if (param_2 < 3) {
    if (param_2 == 1) {
      FUN_10938179c(*param_1,*(undefined8 *)(*param_1 + 8));
    }
    else {
      if (param_2 != 2) goto LAB_109381300;
      ppppuStack_78 = (undefined8 ****)*param_1;
      FUN_109381838(&ppppuStack_78);
    }
LAB_1093812f8:
    plVar8 = (long *)*param_1;
  }
  else if (param_2 == 3) {
    plVar8 = (long *)*param_1;
    if (*(char *)((long)plVar8 + 0x17) < '\0') {
      lVar9 = *plVar8;
LAB_1093812f4:
      __ZdlPv(lVar9);
      goto LAB_1093812f8;
    }
  }
  else {
    if (param_2 != 8) goto LAB_109381300;
    plVar8 = (long *)*param_1;
    lVar9 = *plVar8;
    if (lVar9 != 0) {
      plVar8[1] = lVar9;
      goto LAB_1093812f4;
    }
  }
  __ZdlPv(plVar8);
LAB_109381300:
  ppppuStack_78 = &ppppuStack_68;
  FUN_109381838(&ppppuStack_78);
  return;
}



/* Entry: 109381340; end: 1093813f7;  */

/* WARNING: Possible PIC construction at 0x0001093813a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001093814d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093813ac) */
/* WARNING: Removing unreachable block (ram,0x0001093814d8) */

void FUN_109381340(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined8 ***pppuVar10;
  undefined8 uVar11;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined8 *puStack_e0;
  code *pcStack_d8;
  undefined8 **ppuStack_d0;
  code *pcStack_c8;
  undefined1 auStack_c0 [8];
  long *plStack_b8;
  undefined1 *puStack_b0;
  undefined1 *puStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined1 **)auStack_60;
  lVar5 = *param_1;
  if (param_2 <= (undefined1 *)(param_1[2] - lVar5 >> 4)) {
    return;
  }
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar6 = param_1[1];
    plVar3 = param_1;
    plStack_38 = param_1;
    FUN_10938153c();
    lStack_50 = (long)plVar3 + (lVar6 - lVar5);
    plStack_40 = plVar3 + (long)param_2 * 2;
    puVar4 = (undefined1 *)*param_1;
    param_3 = (undefined1 *)param_1[1];
    param_4 = puVar4 + (lStack_50 - (long)param_3);
    uVar11 = 0x1093813ac;
    param_2 = param_4;
    pppuVar10 = (undefined8 ***)&stack0xfffffffffffffff0;
    plStack_58 = plVar3;
    lStack_48 = lStack_50;
  }
  else {
    FUN_109381528();
    FUN_109381644(&plStack_58);
    __Unwind_Resume();
    ppuVar2 = (undefined1 **)auStack_c0;
    pcStack_68 = FUN_1093813f8;
    pppuVar10 = &ppuStack_70;
    puVar4 = (undefined1 *)param_1[1];
    if (puVar4 < (undefined1 *)param_1[2]) {
      *puVar4 = *param_2;
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      param_1[1] = (long)(puVar4 + 0x10);
      return;
    }
    lVar5 = (long)puVar4 - *param_1;
    uVar1 = (lVar5 >> 4) + 1;
    ppuStack_70 = (undefined8 **)&stack0xfffffffffffffff0;
    if (uVar1 >> 0x3c == 0) {
      uVar7 = param_1[2] - *param_1;
      uVar8 = (long)uVar7 >> 3;
      if (uVar8 <= uVar1) {
        uVar8 = uVar1;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar8 = 0xfffffffffffffff;
      }
      plStack_98 = param_1;
      if (uVar8 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_10938153c();
      }
      puStack_b0 = (undefined1 *)((long)plVar3 + lVar5);
      plStack_a0 = plVar3 + uVar8 * 2;
      *puStack_b0 = *param_2;
      *(undefined8 *)(puStack_b0 + 8) = *(undefined8 *)(param_2 + 8);
      *param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      puStack_a8 = puStack_b0 + 0x10;
      puVar4 = (undefined1 *)*param_1;
      param_3 = (undefined1 *)param_1[1];
      param_4 = puStack_b0 + ((long)puVar4 - (long)param_3);
      uVar11 = 0x1093814d8;
      param_2 = param_4;
      plStack_b8 = plVar3;
    }
    else {
      puVar4 = param_2;
      FUN_109381528();
      FUN_109381644(&plStack_b8);
      __Unwind_Resume(param_1);
      pcStack_c8 = FUN_109381528;
      ppuStack_d0 = pppuVar10;
      func_0x000104c4f6cc(&UNK_10f567814);
      ppuVar2 = &puStack_f0;
      pcStack_d8 = FUN_10938153c;
      pppuVar10 = (undefined8 ***)&puStack_e0;
      puStack_f0 = param_2;
      plStack_e8 = param_1;
      if ((ulong)puVar4 >> 0x3c == 0) {
        puStack_e0 = &ppuStack_d0;
        __Znwm((long)puVar4 << 4);
        return;
      }
      uVar11 = 0x109381570;
      puStack_e0 = &ppuStack_d0;
      func_0x000104c4f740();
    }
  }
  if (puVar4 != param_3) {
    *(undefined1 **)((long)ppuVar2 + -0x20) = param_2;
    *(long **)((long)ppuVar2 + -0x18) = param_1;
    *(undefined8 ****)((long)ppuVar2 + -0x10) = pppuVar10;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar11;
    puVar9 = puVar4;
    do {
      *param_4 = *puVar9;
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar9 + 8);
      *puVar9 = 0;
      *(undefined8 *)(puVar9 + 8) = 0;
      puVar9 = puVar9 + 0x10;
      param_4 = param_4 + 0x10;
    } while (puVar9 != param_3);
    do {
      puVar9 = puVar4 + 0x10;
      FUN_109380ffc(puVar4 + 8,*puVar4);
      puVar4 = puVar9;
    } while (puVar9 != param_3);
  }
  return;
}



/* Entry: 1093813f8; end: 109381527;  */

/* WARNING: Possible PIC construction at 0x0001093814d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001093814d8) */

void FUN_1093813f8(long *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  ulong uVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 **ppuVar9;
  undefined8 uVar10;
  undefined1 *puStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 **ppuStack_70;
  code *pcStack_68;
  undefined1 auStack_60 [8];
  long *plStack_58;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  long *plStack_40;
  long *plStack_38;
  
  ppuVar2 = (undefined1 **)auStack_60;
  ppuVar9 = (undefined1 **)&stack0xfffffffffffffff0;
  puVar4 = (undefined1 *)param_1[1];
  if (puVar4 < (undefined1 *)param_1[2]) {
    *puVar4 = *param_2;
    *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    param_1[1] = (long)(puVar4 + 0x10);
    return;
  }
  lVar8 = (long)puVar4 - *param_1;
  uVar1 = (lVar8 >> 4) + 1;
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
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_10938153c();
    }
    puStack_50 = (undefined1 *)((long)plVar3 + lVar8);
    plStack_40 = plVar3 + uVar6 * 2;
    *puStack_50 = *param_2;
    *(undefined8 *)(puStack_50 + 8) = *(undefined8 *)(param_2 + 8);
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puStack_48 = puStack_50 + 0x10;
    puVar4 = (undefined1 *)*param_1;
    param_3 = (undefined1 *)param_1[1];
    param_4 = puStack_50 + ((long)puVar4 - (long)param_3);
    uVar10 = 0x1093814d8;
    param_2 = param_4;
    plStack_58 = plVar3;
  }
  else {
    puVar4 = param_2;
    FUN_109381528();
    FUN_109381644(&plStack_58);
    __Unwind_Resume(param_1);
    pcStack_68 = FUN_109381528;
    ppuStack_70 = ppuVar9;
    func_0x000104c4f6cc(&UNK_10f567814);
    ppuVar2 = &puStack_90;
    pcStack_78 = FUN_10938153c;
    ppuVar9 = &puStack_80;
    puStack_90 = param_2;
    plStack_88 = param_1;
    if ((ulong)puVar4 >> 0x3c == 0) {
      puStack_80 = (undefined1 *)&ppuStack_70;
      __Znwm((long)puVar4 << 4);
      return;
    }
    uVar10 = 0x109381570;
    puStack_80 = (undefined1 *)&ppuStack_70;
    func_0x000104c4f740();
  }
  if (puVar4 != param_3) {
    *(undefined1 **)((long)ppuVar2 + -0x20) = param_2;
    *(long **)((long)ppuVar2 + -0x18) = param_1;
    *(undefined1 ***)((long)ppuVar2 + -0x10) = ppuVar9;
    *(undefined8 *)((long)ppuVar2 + -8) = uVar10;
    puVar7 = puVar4;
    do {
      *param_4 = *puVar7;
      *(undefined8 *)(param_4 + 8) = *(undefined8 *)(puVar7 + 8);
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      puVar7 = puVar7 + 0x10;
      param_4 = param_4 + 0x10;
    } while (puVar7 != param_3);
    do {
      puVar7 = puVar4 + 0x10;
      FUN_109380ffc(puVar4 + 8,*puVar4);
      puVar4 = puVar7;
    } while (puVar7 != param_3);
  }
  return;
}



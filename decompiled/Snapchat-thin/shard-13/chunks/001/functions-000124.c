/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a197980; end: 10a197bbb;  */

undefined1  [16] FUN_10a197980(long *param_1,ulong *param_2,long *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x24;
  undefined1 auVar12 [16];
  
  uVar3 = *param_2;
  uVar7 = ((ulong)(uint)((int)uVar3 << 3) + 8 ^ uVar3 >> 0x20) * -0x622015f714c7d297;
  uVar7 = (uVar3 >> 0x20 ^ uVar7 >> 0x2f ^ uVar7) * -0x622015f714c7d297;
  uVar11 = (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    uVar5 = uVar7 - 1;
    if ((uVar7 & uVar5) == 0) {
      unaff_x24 = uVar11 & uVar5;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar9 * uVar7;
      }
    }
    puVar8 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar8 != (undefined8 *)0x0) {
      for (plVar10 = (long *)*puVar8; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
        uVar9 = plVar10[1];
        if (uVar9 == uVar11) {
          if (plVar10[2] == uVar3) {
            uVar2 = 0;
            goto LAB_10a197b88;
          }
        }
        else {
          if ((uVar7 & uVar5) == 0) {
            uVar9 = uVar9 & uVar5;
          }
          else if (uVar7 <= uVar9) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar9 / uVar7;
            }
            uVar9 = uVar9 - uVar1 * uVar7;
          }
          if (uVar9 != unaff_x24) break;
        }
      }
    }
  }
  plVar10 = (long *)0x18;
  __Znwm();
  *plVar10 = 0;
  plVar10[1] = uVar11;
  plVar10[2] = *param_3;
  if ((uVar7 == 0) || (*(float *)(param_1 + 4) * (float)uVar7 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar7) {
      uVar3 = (ulong)((uVar7 & uVar7 - 1) != 0);
    }
    uVar3 = uVar3 | uVar7 << 1;
    uVar7 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar7) {
      uVar3 = uVar7;
    }
    FUN_10a197bbc(param_1,uVar3);
    uVar7 = param_1[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x24 = uVar7 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar7 <= uVar11) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar11 / uVar7;
        }
        unaff_x24 = uVar11 - uVar3 * uVar7;
      }
    }
  }
  lVar6 = *param_1;
  plVar4 = *(long **)(lVar6 + unaff_x24 * 8);
  if (plVar4 == (long *)0x0) {
    plVar4 = param_1 + 2;
    *plVar10 = *plVar4;
    *plVar4 = (long)plVar10;
    *(long **)(lVar6 + unaff_x24 * 8) = plVar4;
    if (*plVar10 == 0) goto LAB_10a197b78;
    uVar3 = *(ulong *)(*plVar10 + 8);
    if ((uVar7 & uVar7 - 1) == 0) {
      uVar3 = uVar3 & uVar7 - 1;
    }
    else if (uVar7 <= uVar3) {
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar3 / uVar7;
      }
      uVar3 = uVar3 - uVar11 * uVar7;
    }
    plVar4 = (long *)(*param_1 + uVar3 * 8);
  }
  else {
    *plVar10 = *plVar4;
  }
  *plVar4 = (long)plVar10;
LAB_10a197b78:
  param_1[3] = param_1[3] + 1;
  uVar2 = 1;
LAB_10a197b88:
  auVar12._8_8_ = uVar2;
  auVar12._0_8_ = plVar10;
  return auVar12;
}



/* Entry: 10a197bbc; end: 10a197c8b;  */

long * FUN_10a197bbc(long *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  long *plStack_40;
  long *plStack_38;
  
  plVar4 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < param_2) {
LAB_10a197c04:
    if (param_2 == (long *)0x0) {
      plVar4 = (long *)*param_1;
      *param_1 = 0;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        plVar4 = param_1;
        plVar10 = param_2;
        func_0x000109ffded8();
        plStack_40 = param_2;
        plStack_38 = param_1;
        if ((int)plVar10 != 0) {
          (**(code **)(*(long *)((long)plVar4 + *(long *)(*plVar4 + -0x18)) + 0x28))
                    ((long)plVar4 + *(long *)(*plVar4 + -0x18));
          (**(code **)(*plVar4 + 0x68))(plVar4,2);
        }
        plVar6 = plVar4;
        (**(code **)(*plVar4 + 0x80))();
        if ((int)plVar6 == 2) {
          plVar6 = (long *)plVar4[0x13];
          if (plVar6 == (long *)0x0) {
            plVar10 = plVar4;
            (**(code **)(*plVar4 + 0x88))();
            if (*plVar10 == 0) {
              plStack_90 = plVar4;
              FUN_10a197f34(auStack_88,&plStack_90);
              FUN_109feb280(auStack_70,&UNK_10f633748,auStack_88);
              FUN_10a012db0(auStack_58,auStack_70,&UNK_10f633762);
              if (cStack_59 < '\0') {
                __ZdlPv(auStack_70[0]);
              }
              if (cStack_71 < '\0') {
                __ZdlPv(auStack_88[0]);
              }
              FUN_10a0edf4c(auStack_58);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a197eec);
              (*pcVar2)();
            }
            uVar5 = 0;
            plVar6 = (long *)0x2;
          }
          else {
            FUN_10a197dc8(plVar6,plVar10);
            uVar5 = (ulong)plVar6 & 0xffffffff00000000;
          }
        }
        else {
          uVar5 = 0;
        }
        return (long *)(uVar5 | (ulong)plVar6 & 0xffffffff);
      }
      lVar3 = (long)param_2 << 3;
      __Znwm();
      plVar4 = (long *)*param_1;
      *param_1 = lVar3;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
      plVar10 = (long *)0x0;
      param_1[1] = (long)param_2;
      do {
        *(undefined8 *)(*param_1 + (long)plVar10 * 8) = 0;
        plVar10 = (long *)((long)plVar10 + 1);
      } while (param_2 != plVar10);
      plVar10 = (long *)param_1[2];
      if (plVar10 != (long *)0x0) {
        plVar6 = (long *)plVar10[1];
        uVar5 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar5) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar5);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        *(long **)(*param_1 + (long)plVar6 * 8) = param_1 + 2;
        plVar7 = (long *)*plVar10;
        while (plVar7 != (long *)0x0) {
          plVar9 = (long *)plVar7[1];
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
          plVar8 = plVar7;
          if (plVar9 != plVar6) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar9 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar9 * 8) = plVar10;
              plVar6 = plVar9;
            }
            else {
              *plVar10 = *plVar7;
              *plVar7 = **(undefined8 **)(lVar3 + (long)plVar9 * 8);
              **(long **)(lVar3 + (long)plVar9 * 8) = (long)plVar7;
              plVar8 = plVar10;
            }
          }
          plVar10 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return plVar4;
  }
  if (param_2 < plVar10) {
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar4) {
      plVar4 = (long *)(1L << (-LZCOUNT((long)plVar4 + -1) & 0x3fU));
    }
    if (param_2 <= plVar4) {
      param_2 = plVar4;
    }
    if (param_2 < plVar10) goto LAB_10a197c04;
  }
  return plVar4;
}



/* Entry: 10a197c8c; end: 10a197dc7;  */

ulong FUN_10a197c8c(ulong *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puStack_90;
  undefined8 auStack_88 [2];
  char cStack_71;
  undefined8 auStack_70 [2];
  char cStack_59;
  undefined1 auStack_58 [24];
  ulong uStack_40;
  ulong *puStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 == 0) {
    uVar3 = *param_1;
    *param_1 = 0;
    if (uVar3 != 0) {
      __ZdlPv();
    }
    param_1[1] = 0;
  }
  else {
    if (param_2 >> 0x3d != 0) {
      puVar4 = param_1;
      uVar3 = param_2;
      func_0x000109ffded8();
      pcStack_28 = FUN_10a197dc8;
      uStack_40 = param_2;
      puStack_38 = param_1;
      puStack_30 = &stack0xfffffffffffffff0;
      if ((int)uVar3 != 0) {
        (**(code **)(*(long *)((long)puVar4 + *(long *)(*puVar4 - 0x18)) + 0x28))
                  ((long)puVar4 + *(long *)(*puVar4 - 0x18));
        (**(code **)(*puVar4 + 0x68))(puVar4,2);
      }
      puVar5 = puVar4;
      (**(code **)(*puVar4 + 0x80))();
      if ((int)puVar5 == 2) {
        puVar5 = (ulong *)puVar4[0x13];
        if (puVar5 == (ulong *)0x0) {
          puVar5 = puVar4;
          (**(code **)(*puVar4 + 0x88))();
          if (*puVar5 == 0) {
            puStack_90 = puVar4;
            FUN_10a197f34(auStack_88,&puStack_90);
            FUN_109feb280(auStack_70,&UNK_10f633748,auStack_88);
            FUN_10a012db0(auStack_58,auStack_70,&UNK_10f633762);
            if (cStack_59 < '\0') {
              __ZdlPv(auStack_70[0]);
            }
            if (cStack_71 < '\0') {
              __ZdlPv(auStack_88[0]);
            }
            FUN_10a0edf4c(auStack_58);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10a197eec);
            (*pcVar1)();
          }
          uVar3 = 0;
          puVar5 = (ulong *)0x2;
        }
        else {
          FUN_10a197dc8(puVar5,uVar3);
          uVar3 = (ulong)puVar5 & 0xffffffff00000000;
        }
      }
      else {
        uVar3 = 0;
      }
      return uVar3 | (ulong)puVar5 & 0xffffffff;
    }
    uVar2 = param_2 << 3;
    __Znwm();
    uVar3 = *param_1;
    *param_1 = uVar2;
    if (uVar3 != 0) {
      __ZdlPv();
    }
    uVar2 = 0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)(*param_1 + uVar2 * 8) = 0;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    plVar7 = (long *)param_1[2];
    if (plVar7 != (long *)0x0) {
      uVar2 = plVar7[1];
      uVar6 = param_2 - 1;
      if ((param_2 & uVar6) == 0) {
        uVar2 = uVar2 & uVar6;
      }
      else if (param_2 <= uVar2) {
        uVar10 = 0;
        if (param_2 != 0) {
          uVar10 = uVar2 / param_2;
        }
        uVar2 = uVar2 - uVar10 * param_2;
      }
      *(ulong **)(*param_1 + uVar2 * 8) = param_1 + 2;
      plVar8 = (long *)*plVar7;
      while (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        if ((param_2 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (param_2 <= uVar10) {
          uVar11 = 0;
          if (param_2 != 0) {
            uVar11 = uVar10 / param_2;
          }
          uVar10 = uVar10 - uVar11 * param_2;
        }
        plVar9 = plVar8;
        if (uVar10 != uVar2) {
          uVar11 = *param_1;
          if (*(long *)(uVar11 + uVar10 * 8) == 0) {
            *(long **)(uVar11 + uVar10 * 8) = plVar7;
            uVar2 = uVar10;
          }
          else {
            *plVar7 = *plVar8;
            *plVar8 = **(undefined8 **)(uVar11 + uVar10 * 8);
            **(long **)(uVar11 + uVar10 * 8) = (long)plVar8;
            plVar9 = plVar7;
          }
        }
        plVar7 = plVar9;
        plVar8 = (long *)*plVar9;
      }
    }
  }
  return uVar3;
}



/* Entry: 10a197dc8; end: 10a197f33;  */

ulong FUN_10a197dc8(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_70;
  undefined8 auStack_68 [2];
  char cStack_51;
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined1 auStack_38 [24];
  
  if ((int)param_2 != 0) {
    (**(code **)(*(long *)((long)param_1 + *(long *)(*param_1 + -0x18)) + 0x28))
              ((long)param_1 + *(long *)(*param_1 + -0x18));
    (**(code **)(*param_1 + 0x68))(param_1,2);
  }
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x80))();
  if ((int)plVar2 == 2) {
    plVar2 = (long *)param_1[0x13];
    if (plVar2 == (long *)0x0) {
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x88))();
      if (*plVar2 == 0) {
        plStack_70 = param_1;
        FUN_10a197f34(auStack_68,&plStack_70);
        FUN_109feb280(auStack_50,&UNK_10f633748,auStack_68);
        FUN_10a012db0(auStack_38,auStack_50,&UNK_10f633762);
        if (cStack_39 < '\0') {
          __ZdlPv(auStack_50[0]);
        }
        if (cStack_51 < '\0') {
          __ZdlPv(auStack_68[0]);
        }
        FUN_10a0edf4c(auStack_38);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a197eec);
        (*pcVar1)();
      }
      uVar3 = 0;
      plVar2 = (long *)0x2;
    }
    else {
      FUN_10a197dc8(plVar2,param_2);
      uVar3 = (ulong)plVar2 & 0xffffffff00000000;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 | (ulong)plVar2 & 0xffffffff;
}



/* Entry: 10a197f34; end: 10a197f63;  */

/* WARNING: Possible PIC construction at 0x00010ad044a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a197f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010ad044a4) */
/* WARNING: Removing unreachable block (ram,0x00010a197f8c) */

undefined1  [16] FUN_10a197f34(ulong *param_1,long *param_2,short *param_3)

{
  undefined1 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong *unaff_x19;
  undefined *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_40 [12];
  int iStack_34;
  
  if ((long *)*param_2 == (long *)0x0) {
    puVar4 = (undefined8 *)&UNK_10f6337b7;
    FUN_10a00946c();
    lVar6 = 0;
    func_0x00010ae02f94(0,*puVar4);
    auVar14._8_8_ = (long)*param_3;
    auVar14._0_8_ = (lVar6 + 1U & 0xfffffffffffffffe) + 2;
    return auVar14;
  }
  puVar5 = (undefined *)(*(ulong *)(*(long *)(*(long *)*param_2 + -8) + 8) & 0x7fffffffffffffff);
  puVar1 = &stack0xfffffffffffffff0;
  if (puVar5 == (undefined *)0x0) {
    puVar5 = &UNK_10f6a2cf4;
  }
  else {
    iStack_34 = -1;
    puVar7 = puVar5;
    ___cxa_demangle(puVar5,0,0,&iStack_34);
    if (iStack_34 == 0) {
      puVar5 = puVar7;
      func_0x000107c2b054(param_1,puVar7);
      _free(puVar7);
      auVar13._8_8_ = puVar5;
      auVar13._0_8_ = puVar7;
      return auVar13;
    }
    unaff_x30 = 0x10ad044a4;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x19 = param_1;
    unaff_x20 = puVar5;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(ulong **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  puVar7 = puVar5;
  puVar9 = puVar5;
  func_0x000107c613d0();
  if ((undefined *)0x7ffffffffffffff7 < puVar7) {
    func_0x000107c2b040();
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x20;
    *(ulong **)((long)register0x00000008 + -0x58) = param_1;
    *(undefined1 **)((long)register0x00000008 + -0x50) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x48) = &UNK_100053800;
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar7 = (undefined *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar7 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uVar10 = 0x1132ffc28;
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        uVar8 = 0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        auVar15._8_8_ = uVar10;
        auVar15._0_8_ = uVar8;
        return auVar15;
      }
    }
    auVar12._8_8_ = puVar9;
    auVar12._0_8_ = puVar7;
    return auVar12;
  }
  if (puVar7 < (undefined *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar7;
    puVar3 = param_1;
    if (puVar7 == (undefined *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar2 = (ulong *)0x19;
    if (((ulong)puVar7 | 7) != 0x17) {
      puVar2 = (ulong *)(((ulong)puVar7 | 7) + 1);
    }
    puVar3 = puVar2;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar7;
    param_1[2] = (ulong)puVar2 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,puVar5,puVar7);
  puVar9 = puVar5;
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar7) = 0;
  auVar11._8_8_ = puVar9;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a197f64; end: 10a197f9b;  */

/* WARNING: Possible PIC construction at 0x00010a197f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a197f8c) */

undefined1  [16] FUN_10a197f64(undefined8 *param_1,short *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  func_0x00010ae02f94(0,*param_1);
  auVar2._8_8_ = (long)*param_2;
  auVar2._0_8_ = (lVar1 + 1U & 0xfffffffffffffffe) + 2;
  return auVar2;
}



/* Entry: 10a197f9c; end: 10a19803b;  */

long * FUN_10a197f9c(long *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(param_2 + 0x18);
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar4 & uVar3;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar3 == uVar7) {
          if (plVar6[5] == uVar3) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10a19803c; end: 10a1981af;  */

/* WARNING: Possible PIC construction at 0x00010a198060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a198064) */

undefined1  [16] FUN_10a19803c(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  func_0x00010ae02f70(0,*param_1);
  auVar2._8_4_ = *param_2;
  auVar2._0_8_ = (lVar1 + 3U & 0xfffffffffffffffc) + 4;
  auVar2._12_4_ = 0;
  return auVar2;
}



/* Entry: 10a1981b0; end: 10a19840f;  */

undefined1  [16]
FUN_10a1981b0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             ulong param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long *aplStack_88 [3];
  ulong uStack_70;
  long *plStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  
  puVar5 = param_2;
  puVar11 = param_2;
  if (0 < (long)param_5) {
    puVar1 = (undefined8 *)param_1[1];
    if ((param_1[2] - (long)puVar1 >> 3) * -0x5555555555555555 < (long)param_5) {
      lVar16 = *param_1;
      uVar7 = param_5 + ((long)puVar1 - lVar16 >> 3) * -0x5555555555555555;
      if (0xaaaaaaaaaaaaaaa < uVar7) {
        plVar3 = param_1;
        FUN_10a044e30();
        pcStack_48 = FUN_10a198410;
        uVar14 = puVar11[3];
        uVar18 = plVar3[1];
        uVar7 = param_5;
        if (uVar18 != 0) {
          uVar8 = uVar18 - 1;
          if ((uVar18 & uVar8) == 0) {
            uVar7 = uVar8 & uVar14;
          }
          else {
            uVar7 = uVar14;
            if (uVar18 <= uVar14) {
              uVar7 = 0;
              if (uVar18 != 0) {
                uVar7 = uVar14 / uVar18;
              }
              uVar7 = uVar14 - uVar7 * uVar18;
            }
          }
          puVar11 = *(undefined8 **)(*plVar3 + uVar7 * 8);
          if (puVar11 != (undefined8 *)0x0) {
            for (plVar4 = (long *)*puVar11; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
              uVar12 = plVar4[1];
              if (uVar12 == uVar14) {
                if (plVar4[5] == uVar14) {
                  uVar6 = 0;
                  goto LAB_10a1985e4;
                }
              }
              else {
                if ((uVar18 & uVar8) == 0) {
                  uVar12 = uVar12 & uVar8;
                }
                else if (uVar18 <= uVar12) {
                  uVar2 = 0;
                  if (uVar18 != 0) {
                    uVar2 = uVar12 / uVar18;
                  }
                  uVar12 = uVar12 - uVar2 * uVar18;
                }
                if (uVar12 != uVar7) break;
              }
            }
          }
        }
        uStack_70 = param_5;
        plStack_68 = param_1;
        puStack_60 = param_3;
        puStack_58 = param_2;
        puStack_50 = &stack0xfffffffffffffff0;
        FUN_10a198618(aplStack_88,plVar3,uVar14);
        if ((uVar18 == 0) || (*(float *)(plVar3 + 4) * (float)uVar18 < (float)(plVar3[3] + 1))) {
          uVar7 = 1;
          if (2 < uVar18) {
            uVar7 = (ulong)((uVar18 & uVar18 - 1) != 0);
          }
          uVar7 = uVar7 | uVar18 << 1;
          uVar18 = (ulong)((float)(plVar3[3] + 1) / *(float *)(plVar3 + 4));
          if (uVar7 <= uVar18) {
            uVar7 = uVar18;
          }
          FUN_10a0470a4(plVar3,uVar7);
          uVar18 = plVar3[1];
          if ((uVar18 & uVar18 - 1) == 0) {
            uVar7 = uVar18 - 1 & uVar14;
          }
          else {
            uVar7 = uVar14;
            if (uVar18 <= uVar14) {
              uVar7 = 0;
              if (uVar18 != 0) {
                uVar7 = uVar14 / uVar18;
              }
              uVar7 = uVar14 - uVar7 * uVar18;
            }
          }
        }
        lVar16 = *plVar3;
        plVar4 = *(long **)(lVar16 + uVar7 * 8);
        if (plVar4 == (long *)0x0) {
          plVar4 = plVar3 + 2;
          *aplStack_88[0] = *plVar4;
          *plVar4 = (long)aplStack_88[0];
          *(long **)(lVar16 + uVar7 * 8) = plVar4;
          if (*aplStack_88[0] != 0) {
            uVar7 = *(ulong *)(*aplStack_88[0] + 8);
            if ((uVar18 & uVar18 - 1) == 0) {
              uVar7 = uVar7 & uVar18 - 1;
            }
            else if (uVar18 <= uVar7) {
              uVar14 = 0;
              if (uVar18 != 0) {
                uVar14 = uVar7 / uVar18;
              }
              uVar7 = uVar7 - uVar14 * uVar18;
            }
            *(long **)(*plVar3 + uVar7 * 8) = aplStack_88[0];
          }
        }
        else {
          *aplStack_88[0] = *plVar4;
          *plVar4 = (long)aplStack_88[0];
        }
        plVar3[3] = plVar3[3] + 1;
        uVar6 = 1;
        plVar4 = aplStack_88[0];
LAB_10a1985e4:
        auVar21._8_8_ = uVar6;
        auVar21._0_8_ = plVar4;
        return auVar21;
      }
      lVar9 = param_1[2] - lVar16 >> 3;
      uVar14 = lVar9 * 0x5555555555555556;
      if (uVar14 < uVar7 || uVar14 - uVar7 == 0) {
        uVar14 = uVar7;
      }
      if (0x555555555555554 < (ulong)(lVar9 * -0x5555555555555555)) {
        uVar14 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar14 == 0) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = param_1;
        FUN_10a044e44();
      }
      puVar11 = (undefined8 *)((long)plVar3 + ((long)param_2 - lVar16));
      lVar16 = param_5 * 0x18;
      puVar5 = puVar11;
      do {
        uVar19 = param_3[1];
        uVar6 = *param_3;
        puVar5[2] = param_3[2];
        puVar5[1] = uVar19;
        *puVar5 = uVar6;
        param_3 = param_3 + 3;
        lVar16 = lVar16 + -0x18;
        puVar5 = puVar5 + 3;
      } while (lVar16 != 0);
      _memcpy(puVar11 + param_5 * 3,param_2,param_1[1] - (long)param_2);
      puVar5 = (undefined8 *)*param_1;
      lVar16 = param_1[1];
      param_1[1] = (long)param_2;
      lVar17 = (long)puVar11 - ((long)param_2 - (long)puVar5);
      _memcpy(lVar17);
      lVar9 = *param_1;
      *param_1 = lVar17;
      param_1[1] = (long)(puVar11 + param_5 * 3) + (lVar16 - (long)param_2);
      param_1[2] = (long)(plVar3 + uVar14 * 3);
      if (lVar9 != 0) {
        __ZdlPv();
      }
    }
    else {
      lVar16 = (long)puVar1 - (long)param_2;
      if ((lVar16 >> 3) * -0x5555555555555555 < (long)param_5) {
        puVar10 = puVar1;
        puVar13 = puVar1;
        for (puVar15 = (undefined8 *)(lVar16 + (long)param_3); puVar15 != param_4;
            puVar15 = puVar15 + 3) {
          uVar19 = puVar15[1];
          uVar6 = *puVar15;
          puVar13[2] = puVar15[2];
          puVar13[1] = uVar19;
          *puVar13 = uVar6;
          puVar10 = puVar10 + 3;
          puVar13 = puVar13 + 3;
        }
        param_1[1] = (long)puVar10;
        if (lVar16 < 1) goto LAB_10a1983f4;
        puVar15 = puVar10;
        for (puVar5 = puVar10 + param_5 * -3; puVar5 < puVar1; puVar5 = puVar5 + 3) {
          uVar19 = puVar5[1];
          uVar6 = *puVar5;
          puVar15[2] = puVar5[2];
          puVar15[1] = uVar19;
          *puVar15 = uVar6;
          puVar15 = puVar15 + 3;
        }
        param_1[1] = (long)puVar15;
        if (puVar13 != param_2 + param_5 * 3) {
          lVar9 = (long)puVar10 - (long)(param_2 + param_5 * 3);
          _memmove((long)puVar10 - lVar9,param_2,lVar9 + -4);
        }
      }
      else {
        puVar15 = puVar1;
        for (puVar5 = puVar1 + param_5 * -3; puVar5 < puVar1; puVar5 = puVar5 + 3) {
          uVar19 = puVar5[1];
          uVar6 = *puVar5;
          puVar15[2] = puVar5[2];
          puVar15[1] = uVar19;
          *puVar15 = uVar6;
          puVar15 = puVar15 + 3;
        }
        param_1[1] = (long)puVar15;
        if (puVar1 != param_2 + param_5 * 3) {
          lVar16 = (long)puVar1 - (long)(param_2 + param_5 * 3);
          _memmove((long)puVar1 - lVar16,param_2,lVar16 + -4);
        }
        lVar16 = param_5 * 0x18;
      }
      _memmove(param_2,param_3,lVar16 + -4);
      puVar5 = param_3;
    }
  }
LAB_10a1983f4:
  auVar20._8_8_ = puVar5;
  auVar20._0_8_ = puVar11;
  return auVar20;
}



/* Entry: 10a198410; end: 10a198617;  */

undefined1  [16] FUN_10a198410(long *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong unaff_x22;
  undefined1 auVar10 [16];
  long *aplStack_48 [3];
  
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar9 = param_1[1];
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
    if ((uVar9 & uVar4) == 0) {
      unaff_x22 = uVar4 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar7 = 0;
        if (uVar9 != 0) {
          uVar7 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar7 * uVar9;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x22 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar2 = (long *)*puVar6; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
        uVar7 = plVar2[1];
        if (uVar7 == uVar8) {
          if (plVar2[5] == uVar8) {
            uVar3 = 0;
            goto LAB_10a1985e4;
          }
        }
        else {
          if ((uVar9 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar9 <= uVar7) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = uVar7 / uVar9;
            }
            uVar7 = uVar7 - uVar1 * uVar9;
          }
          if (uVar7 != unaff_x22) break;
        }
      }
    }
  }
  FUN_10a198618(aplStack_48,param_1,uVar8);
  if ((uVar9 == 0) || (*(float *)(param_1 + 4) * (float)uVar9 < (float)(param_1[3] + 1))) {
    uVar4 = 1;
    if (2 < uVar9) {
      uVar4 = (ulong)((uVar9 & uVar9 - 1) != 0);
    }
    uVar4 = uVar4 | uVar9 << 1;
    uVar9 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar4 <= uVar9) {
      uVar4 = uVar9;
    }
    FUN_10a0470a4(param_1,uVar4);
    uVar9 = param_1[1];
    if ((uVar9 & uVar9 - 1) == 0) {
      unaff_x22 = uVar9 - 1 & uVar8;
    }
    else {
      unaff_x22 = uVar8;
      if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        unaff_x22 = uVar8 - uVar4 * uVar9;
      }
    }
  }
  lVar5 = *param_1;
  plVar2 = *(long **)(lVar5 + unaff_x22 * 8);
  if (plVar2 == (long *)0x0) {
    plVar2 = param_1 + 2;
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
    *(long **)(lVar5 + unaff_x22 * 8) = plVar2;
    if (*aplStack_48[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_48[0] + 8);
      if ((uVar9 & uVar9 - 1) == 0) {
        uVar8 = uVar8 & uVar9 - 1;
      }
      else if (uVar9 <= uVar8) {
        uVar4 = 0;
        if (uVar9 != 0) {
          uVar4 = uVar8 / uVar9;
        }
        uVar8 = uVar8 - uVar4 * uVar9;
      }
      *(long **)(*param_1 + uVar8 * 8) = aplStack_48[0];
    }
  }
  else {
    *aplStack_48[0] = *plVar2;
    *plVar2 = (long)aplStack_48[0];
  }
  param_1[3] = param_1[3] + 1;
  uVar3 = 1;
  plVar2 = aplStack_48[0];
LAB_10a1985e4:
  auVar10._8_8_ = uVar3;
  auVar10._0_8_ = plVar2;
  return auVar10;
}



/* Entry: 10a198618; end: 10a198693;  */

void FUN_10a198618(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_10a198694(puVar1 + 2,param_4,param_5);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10a198694; end: 10a198727;  */

undefined8 * FUN_10a198694(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  param_1[3] = param_2[3];
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[6] = param_3[2];
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  param_1[7] = param_3[3];
  uVar1 = param_3[4];
  param_1[9] = param_3[5];
  param_1[8] = uVar1;
  param_3[4] = 0;
  param_3[5] = 0;
  param_1[10] = param_3[6];
  return param_1;
}



/* Entry: 10a198728; end: 10a1987cb;  */

void FUN_10a198728(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_10a045e90(param_1,param_1[2]);
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



/* Entry: 10a1987cc; end: 10a198877;  */

long FUN_10a1987cc(long param_1,float *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  undefined8 uVar6;
  
  lVar2 = 0x48;
  __Znwm();
  fVar5 = *param_2;
  *(float *)(lVar2 + 0x20) = fVar5;
  uVar6 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar2 + 0x28) = uVar6;
  *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(param_2 + 6);
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  *(float *)(lVar2 + 0x40) = param_2[8];
  plVar3 = (long *)(param_1 + 8);
  plVar4 = plVar3;
  plVar1 = (long *)*plVar3;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      while (plVar3 = plVar1, fVar5 < *(float *)(plVar3 + 4)) {
        plVar4 = plVar3;
        plVar1 = (long *)*plVar3;
        if ((long *)*plVar3 == (long *)0x0) goto LAB_10a198858;
      }
      plVar1 = (long *)plVar3[1];
    } while ((long *)plVar3[1] != (long *)0x0);
    plVar4 = plVar3 + 1;
  }
LAB_10a198858:
  FUN_10a198878(param_1,plVar3,plVar4,lVar2);
  return lVar2;
}



/* Entry: 10a198878; end: 10a1988cb;  */

void FUN_10a198878(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c2b058(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10a1988cc; end: 10a198a73;  */

char * FUN_10a1988cc(char *param_1)

{
  undefined4 uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined **ppuVar14;
  undefined1 uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  puVar7 = PTR___tlv_bootstrap_11340d750;
  if (*param_1 == '\x01') {
    ppuVar14 = &PTR___tlv_bootstrap_11340d750;
    ppuVar10 = ppuVar14;
    (*(code *)PTR___tlv_bootstrap_11340d750)();
    ppuVar11 = &PTR___tlv_bootstrap_11340d738;
    if (((ulong)*ppuVar10 & 1) == 0) {
      ppuVar10 = ppuVar11;
      (*(code *)PTR___tlv_bootstrap_11340d738)(&PTR___tlv_bootstrap_11340d738);
      __tlv_atexit(0x10a132a8c,ppuVar10,0x100000000);
      (*(code *)puVar7)();
      *(undefined1 *)ppuVar14 = 1;
    }
    (*(code *)PTR___tlv_bootstrap_11340d738)();
    lVar8 = lRam00000001137ea760;
    puVar17 = (undefined8 *)ppuVar11[2];
    if (puVar17 != (undefined8 *)0x0) {
      lVar16 = puVar17[1];
      bVar6 = *(byte *)(lVar16 + 0x42) | *(byte *)(lVar16 + 0x43);
      if (((bVar6 & 1) != 0) || (*(char *)(lVar16 + 0x3f) == '\x01')) {
        uVar5 = cntfrq_el0;
        InstructionSynchronizationBarrier();
        uVar18 = cntvct_el0;
        if (uVar5 != 1000000000) {
          uVar3 = 0;
          if (uVar5 != 0) {
            uVar3 = uVar18 / uVar5;
          }
          uVar4 = 0;
          if (uVar5 != 0) {
            uVar4 = ((uVar18 - uVar3 * uVar5) * 1000000000) / uVar5;
          }
          uVar18 = uVar4 + uVar3 * 1000000000;
        }
        if ((bVar6 & 1) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x10);
          uVar2 = *(undefined2 *)(param_1 + 2);
          uVar19 = *(undefined8 *)(param_1 + 8);
          puVar12 = puVar17;
          FUN_10a1333cc();
          if (puVar12 != (undefined8 *)0x0) {
            uVar15 = 6;
            if (lRam00000001137ea760 != lVar8) {
              uVar15 = 8;
            }
            lVar16 = 0;
            if (lRam00000001137ea760 != lVar8) {
              lVar16 = lVar8;
            }
            *puVar12 = uVar19;
            puVar12[1] = lVar16;
            puVar12[2] = uVar18;
            *(undefined4 *)(puVar12 + 3) = uVar1;
            *(undefined2 *)((long)puVar12 + 0x1c) = uVar2;
            *(undefined1 *)((long)puVar12 + 0x1e) = uVar15;
            if ((*(byte *)(puVar17 + 0x38) & 1) == 0) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x10a198a70);
              (*pcVar9)();
            }
            puVar17[0x18] = puVar17[0x18] + 1;
          }
        }
      }
      if (((*(char *)(puVar17[1] + 0x41) == '\x01') && (param_1[0x28] == '\x01')) &&
         (plVar13 = (long *)puVar17[0xb], plVar13 != (long *)0x0)) {
        (**(code **)(*plVar13 + 0x18))(plVar13,*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return param_1;
}



/* Entry: 10a198a74; end: 10a198aaf;  */

long * FUN_10a198a74(long *param_1,ulong param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar5 = param_1[1] - *param_1 >> 3;
  bVar1 = param_2 < (ulong)(lVar5 * -0x5555555555555555);
  uVar7 = param_2 + lVar5 * 0x5555555555555555;
  if (bVar1 || uVar7 == 0) {
    if (bVar1) {
      param_1[1] = *param_1 + param_2 * 0x18;
    }
    return param_1;
  }
  plVar2 = (long *)param_1[1];
  if ((ulong)((param_1[2] - (long)plVar2 >> 3) * -0x5555555555555555) < uVar7) {
    lVar5 = (long)plVar2 - *param_1;
    uVar8 = uVar7 + (lVar5 >> 3) * -0x5555555555555555;
    if (uVar8 < 0xaaaaaaaaaaaaaab) {
      lVar6 = param_1[2] - *param_1 >> 3;
      uVar9 = lVar6 * 0x5555555555555556;
      if (uVar9 < uVar8 || uVar9 - uVar8 == 0) {
        uVar9 = uVar8;
      }
      if (0x555555555555554 < (ulong)(lVar6 * -0x5555555555555555)) {
        uVar9 = 0xaaaaaaaaaaaaaaa;
      }
      if (uVar9 == 0) {
        plVar2 = (long *)0x0;
      }
      else {
        plVar2 = param_1;
        FUN_10a18eec4();
      }
      lVar5 = (long)plVar2 + lVar5;
      lVar6 = ((uVar7 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
      _bzero(lVar5,lVar6);
      lVar10 = lVar5 - (param_1[1] - *param_1);
      _memcpy(lVar10);
      plVar3 = (long *)*param_1;
      *param_1 = lVar10;
      param_1[1] = lVar5 + lVar6;
      param_1[2] = (long)(plVar2 + uVar9 * 3);
      if (plVar3 == (long *)0x0) {
        return (long *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar3;
    }
    FUN_10a18eeb0();
    param_1 = param_1 + 1;
    plVar3 = (long *)*param_1;
    plVar2 = param_1;
    if (plVar3 != (long *)0x0) {
      do {
        plVar4 = plVar3 + 4;
        FUN_10a003e3c(plVar4,uVar7);
        if (-1 < (char)plVar4) {
          plVar2 = plVar3;
        }
        plVar3 = *(long **)((long)plVar3 + ((ulong)plVar4 >> 4 & 8));
      } while (plVar3 != (long *)0x0);
      if ((plVar2 != param_1) && (FUN_10a003e3c(uVar7,plVar2 + 4), ((uint)uVar7 >> 7 & 1) == 0)) {
        return plVar2;
      }
    }
    return param_1;
  }
  plVar3 = param_1;
  if (uVar7 != 0) {
    uVar7 = (uVar7 * 0x18 - 0x18) / 0x18;
    plVar3 = plVar2;
    _bzero(plVar2,uVar7 * 0x18 + 0x18);
    plVar2 = plVar2 + uVar7 * 3 + 3;
  }
  param_1[1] = (long)plVar2;
  return plVar3;
}



/* Entry: 10a198ab0; end: 10a198c0b;  */

long * FUN_10a198ab0(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)param_1[1];
  if (param_2 <= (ulong)((param_1[2] - (long)plVar1 >> 3) * -0x5555555555555555)) {
    plVar2 = param_1;
    if (param_2 != 0) {
      uVar5 = (param_2 * 0x18 - 0x18) / 0x18;
      plVar2 = plVar1;
      _bzero(plVar1,uVar5 * 0x18 + 0x18);
      plVar1 = plVar1 + uVar5 * 3 + 3;
    }
    param_1[1] = (long)plVar1;
    return plVar2;
  }
  lVar8 = (long)plVar1 - *param_1;
  uVar5 = param_2 + (lVar8 >> 3) * -0x5555555555555555;
  if (0xaaaaaaaaaaaaaaa < uVar5) {
    FUN_10a18eeb0();
    param_1 = param_1 + 1;
    plVar2 = (long *)*param_1;
    plVar1 = param_1;
    if (plVar2 != (long *)0x0) {
      do {
        plVar3 = plVar2 + 4;
        FUN_10a003e3c(plVar3,param_2);
        if (-1 < (char)plVar3) {
          plVar1 = plVar2;
        }
        plVar2 = *(long **)((long)plVar2 + ((ulong)plVar3 >> 4 & 8));
      } while (plVar2 != (long *)0x0);
      if ((plVar1 != param_1) && (FUN_10a003e3c(param_2,plVar1 + 4), ((uint)param_2 >> 7 & 1) == 0))
      {
        return plVar1;
      }
    }
    return param_1;
  }
  lVar4 = param_1[2] - *param_1 >> 3;
  uVar6 = lVar4 * 0x5555555555555556;
  if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
    uVar6 = uVar5;
  }
  if (0x555555555555554 < (ulong)(lVar4 * -0x5555555555555555)) {
    uVar6 = 0xaaaaaaaaaaaaaaa;
  }
  if (uVar6 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    plVar1 = param_1;
    FUN_10a18eec4();
  }
  lVar8 = (long)plVar1 + lVar8;
  lVar4 = ((param_2 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
  _bzero(lVar8,lVar4);
  lVar7 = lVar8 - (param_1[1] - *param_1);
  _memcpy(lVar7);
  plVar2 = (long *)*param_1;
  *param_1 = lVar7;
  param_1[1] = lVar8 + lVar4;
  param_1[2] = (long)(plVar1 + uVar6 * 3);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return plVar2;
}



/* Entry: 10a198c0c; end: 10a198c87;  */

long * FUN_10a198c0c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar2;
  plVar3 = plVar2;
  if (plVar4 != (long *)0x0) {
    do {
      plVar1 = plVar4 + 4;
      FUN_10a003e3c(plVar1,param_2);
      if (-1 < (char)plVar1) {
        plVar3 = plVar4;
      }
      plVar4 = *(long **)((long)plVar4 + ((ulong)plVar1 >> 4 & 8));
    } while (plVar4 != (long *)0x0);
    if ((plVar3 != plVar2) && (FUN_10a003e3c(param_2,plVar3 + 4), ((uint)param_2 >> 7 & 1) == 0)) {
      return plVar3;
    }
  }
  return plVar2;
}



/* Entry: 10a198c88; end: 10a198ccf;  */

void FUN_10a198c88(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10a198cd0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + 0x368;
    func_0x00010a198d4c(lVar1,param_2 + 0x368);
    if ((int)lVar1 != 0) {
      func_0x00010a198dc8(param_1 + 0x6b0,param_2 + 0x6b0);
    }
  }
  return;
}



/* Entry: 10a198cd0; end: 10a198e43;  */

long FUN_10a198cd0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x360);
  if (lVar2 != *(long *)(param_2 + 0x360)) {
    return 0;
  }
  if (lVar2 != 0) {
    lVar2 = lVar2 * 0x30;
    do {
      lVar2 = lVar2 + -0x30;
      lVar1 = param_1;
      FUN_10a198e44(param_1,param_2);
      if ((int)lVar1 == 0) {
        return lVar1;
      }
      param_1 = param_1 + 0x30;
      param_2 = param_2 + 0x30;
    } while (lVar2 != 0);
    return lVar1;
  }
  return 1;
}



/* Entry: 10a198e44; end: 10a19905b;  */

bool FUN_10a198e44(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
      ((param_1[3] == param_2[3] && (param_1[4] == param_2[4])))) && (param_1[5] == param_2[5])) {
    uVar1 = (uint)*(byte *)(param_1 + 7);
    uVar2 = (uint)*(byte *)(param_2 + 7);
    if ((*(byte *)(param_2 + 7) & *(byte *)(param_1 + 7)) != 0) {
      uVar1 = param_1[6];
      uVar2 = param_2[6];
    }
    if (((uVar1 == uVar2) && (param_1[8] == param_2[8])) &&
       ((param_1[9] == param_2[9] && (param_1[10] == param_2[10])))) {
      return param_1[0xb] == param_2[0xb];
    }
  }
  return false;
}



/* Entry: 10a19905c; end: 10a19907b;  */

void FUN_10a19905c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110baa528;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a19907c; end: 10a19908b;  */

void FUN_10a19907c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a199084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  return;
}



/* Entry: 10a19908c; end: 10a1990e3;  */

long FUN_10a19908c(long param_1)

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



/* Entry: 10a1990e4; end: 10a1991df;  */

bool FUN_10a1990e4(undefined8 param_1,int *param_2,int *param_3)

{
  if (((((param_2[2] == param_3[2]) && (*param_2 == *param_3)) && (param_2[1] == param_3[1])) &&
      (((param_2[9] == param_3[9] && (param_2[7] == param_3[7])) &&
       ((param_2[3] == param_3[3] && ((param_2[4] == param_3[4] && (param_2[5] == param_3[5]))))))))
     && ((ABS((float)param_2[10] - (float)param_3[10]) <= 1e-06 &&
         ((((ABS((float)param_2[0xb] - (float)param_3[0xb]) <= 1e-06 &&
            (param_2[0xc] == param_3[0xc])) && ((char)param_2[0xd] == (char)param_3[0xd])) &&
          ((char)param_2[6] == (char)param_3[6])))))) {
    return (char)param_2[8] == (char)param_3[8];
  }
  return false;
}



/* Entry: 10a1991e0; end: 10a199257;  */

void FUN_10a1991e0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a199258();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a199258; end: 10a19929f;  */

undefined8 * FUN_10a199258(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a1992a0(param_1 + 3);
  return param_1;
}



/* Entry: 10a1992a0; end: 10a19934f;  */

undefined8
FUN_10a1992a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,0,&uStack_30,uVar4,param_2);
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
  return param_1;
}



/* Entry: 10a199350; end: 10a199387;  */

void FUN_10a199350(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a199388; end: 10a1993ef;  */

void FUN_10a199388(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2d0;
  __Znwm();
  FUN_10a1993f0();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a1993f0; end: 10a19943b;  */

undefined8 * FUN_10a1993f0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110b9fcf0;
  FUN_10a1db5e8(param_1 + 3,0);
  return param_1;
}



/* Entry: 10a19943c; end: 10a1994b3;  */

void FUN_10a19943c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x2c0;
  __Znwm();
  FUN_10a1994b4();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x40) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x48), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x48);
    }
    *(long *)(lVar5 + 0x40) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x48) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a1994b4; end: 10a1994fb;  */

undefined8 * FUN_10a1994b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110b9fda0;
  FUN_10a1994fc(param_1 + 3);
  return param_1;
}



/* Entry: 10a1994fc; end: 10a199597;  */

undefined8
FUN_10a1994fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = (long *)param_4[1];
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  *param_4 = 0;
  param_4[1] = 0;
  uVar4 = param_1;
  func_0x00010a0fda30();
  FUN_10ab6a888(param_1,0,&uStack_30,uVar4,param_2);
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
  return param_1;
}



/* Entry: 10a199598; end: 10a1995cf;  */

void FUN_10a199598(long param_1)

{
  ushort uVar1;
  long lVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    uVar1 = *(ushort *)(lVar2 + 0x209);
    if ((uVar1 & 0x7f) != 0) {
      *(ushort *)(lVar2 + 0x209) = uVar1 & 0xff00 | uVar1 - 1 & 0x7f;
      uStack_28 = 0;
      uStack_30 = 0;
      uStack_18 = 0;
      uStack_20 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_38 = 0;
      uStack_40 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      *(undefined8 *)(lVar2 + 0x218) = 0;
      FUN_10a1cc408(lVar2 + 0x220,(ulong)&uStack_60 | 8);
    }
    return;
  }
  return;
}



/* Entry: 10a1995d0; end: 10a199637;  */

void FUN_10a1995d0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x120;
  __Znwm();
  FUN_10a199638();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a199638; end: 10a19968b;  */

undefined8 * FUN_10a199638(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab2f0;
  FUN_10ac6ea60(param_1 + 3,0,1,param_3);
  return param_1;
}



/* Entry: 10a19968c; end: 10a1998ab;  */

undefined1  [16] FUN_10a19968c(long *param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char acStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *param_1;
  puVar13 = (undefined8 *)param_1[1];
  lVar9 = (long)puVar13 - lVar2 >> 4;
  bVar1 = param_3 < (ulong)(lVar9 * -0x5555555555555555);
  uVar7 = param_3 + lVar9 * 0x5555555555555555;
  plVar3 = param_2;
  if (bVar1 || uVar7 == 0) {
    if (bVar1) {
      param_1[1] = lVar2 + param_3 * 0x30;
    }
    if (param_3 == 0) goto LAB_10a199888;
  }
  else if ((ulong)((param_1[2] - (long)puVar13 >> 4) * -0x5555555555555555) < uVar7) {
    if (0x555555555555555 < param_3) {
      FUN_10a1998ac();
      plVar3 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      if (plVar3 < (long *)0x555555555555556) {
        lVar2 = (long)plVar3 * 0x30;
        __Znwm(lVar2);
        auVar17._8_8_ = plVar3;
        auVar17._0_8_ = lVar2;
        return auVar17;
      }
      func_0x000109ffded8();
      puVar13 = (undefined8 *)*plVar3;
      plVar5 = (long *)plVar3[1];
      uVar7 = (long)plVar5 - (long)puVar13 >> 3;
      plVar12 = param_2;
      if (uVar7 < param_3) {
        uVar7 = param_3 - uVar7;
        if ((ulong)(plVar3[2] - (long)plVar5 >> 3) < uVar7) {
          if (param_3 >> 0x3d != 0) {
            FUN_10a199a28();
            plVar3 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((ulong)plVar3 >> 0x3d != 0) {
              func_0x000109ffded8();
              lVar2 = *plVar3;
              *plVar3 = 0;
              if (lVar2 != 0) {
                func_0x00010a193298();
                __ZdlPv();
              }
              auVar20._8_8_ = param_2;
              auVar20._0_8_ = plVar3;
              return auVar20;
            }
            lVar2 = (long)plVar3 << 3;
            __Znwm(lVar2);
            auVar19._8_8_ = plVar3;
            auVar19._0_8_ = lVar2;
            return auVar19;
          }
          uVar8 = plVar3[2] - (long)puVar13;
          uVar10 = (long)uVar8 >> 2;
          if (uVar10 <= param_3) {
            uVar10 = param_3;
          }
          if (0x7ffffffffffffff7 < uVar8) {
            uVar10 = 0x1fffffffffffffff;
          }
          FUN_10a199a3c();
          plVar6 = (long *)*plVar3;
          lVar9 = plVar3[1];
          lVar2 = uVar10 + ((long)plVar5 - (long)puVar13);
          _bzero(lVar2,uVar7 * 8);
          puVar13 = (undefined8 *)(lVar2 - (lVar9 - (long)plVar6));
          _memcpy(puVar13,plVar6,lVar9 - (long)plVar6);
          plVar4 = (long *)*plVar3;
          *plVar3 = (long)puVar13;
          plVar3[1] = lVar2 + uVar7 * 8;
          plVar3[2] = uVar10 + (long)param_2 * 8;
          if (plVar4 != (long *)0x0) {
            __ZdlPv();
            puVar13 = (undefined8 *)*plVar3;
          }
        }
        else {
          plVar6 = (long *)(uVar7 * 8);
          plVar4 = plVar5;
          _bzero(plVar5,plVar6);
          plVar3[1] = (long)(plVar5 + uVar7);
        }
      }
      else {
        if (param_3 < uVar7) {
          plVar3[1] = (long)(puVar13 + param_3);
        }
        plVar4 = plVar3;
        plVar6 = param_2;
        if (param_3 == 0) goto LAB_10a199a0c;
      }
      do {
        *puVar13 = *(undefined8 *)(*plVar12 + 0x4f0);
        param_3 = param_3 - 1;
        plVar3 = plVar4;
        param_2 = plVar6;
        plVar12 = plVar12 + 1;
        puVar13 = puVar13 + 1;
      } while (param_3 != 0);
LAB_10a199a0c:
      auVar18._8_8_ = param_2;
      auVar18._0_8_ = plVar3;
      return auVar18;
    }
    lVar9 = param_1[2] - lVar2 >> 4;
    uVar10 = lVar9 * 0x5555555555555556;
    if (uVar10 < param_3 || uVar10 - param_3 == 0) {
      uVar10 = param_3;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar9 * -0x5555555555555555)) {
      uVar10 = 0x555555555555555;
    }
    plVar5 = param_2;
    FUN_10a1998c0();
    puVar11 = (undefined8 *)(uVar10 + ((long)puVar13 - lVar2));
    puVar13 = puVar11;
    do {
      *puVar13 = &UNK_101020000;
      puVar13[2] = 0;
      puVar13[1] = 0;
      puVar13[4] = 0;
      puVar13[3] = 0;
      puVar13[5] = 0;
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar11 + uVar7 * 6);
    plVar3 = (long *)*param_1;
    lVar9 = (long)puVar11 - (param_1[1] - (long)plVar3);
    _memcpy(lVar9);
    lVar2 = *param_1;
    *param_1 = lVar9;
    param_1[1] = (long)(puVar11 + uVar7 * 6);
    param_1[2] = uVar10 + (long)plVar5 * 0x30;
    if (lVar2 != 0) {
      __ZdlPv();
    }
  }
  else {
    puVar11 = puVar13 + uVar7 * 6;
    do {
      *puVar13 = &UNK_101020000;
      puVar13[2] = 0;
      puVar13[1] = 0;
      puVar13[4] = 0;
      puVar13[3] = 0;
      puVar13[5] = 0;
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar11);
    param_1[1] = (long)puVar11;
  }
  pbVar14 = (byte *)*param_1;
  plVar5 = param_2;
  do {
    param_2 = plVar3;
    param_1 = (long *)*plVar5;
    lVar2 = *(long *)(param_1[0x2d] + 0x140);
    func_0x00010a0d8ae0(lVar2);
    puVar13 = (undefined8 *)((long)param_1 + 0x50c);
    uVar15 = *(undefined8 *)(lVar2 + 0x48);
    func_0x00010a3a4590(acStack_80,param_1);
    *pbVar14 = *(byte *)(param_1 + 0x9e) | *(char *)((long)param_1 + 0x4f1) << 1 |
               acStack_80[0] << 2;
    pbVar14[4] = *(byte *)((undefined2 *)((ulong)acStack_80 | 2) + 1);
    *(undefined2 *)(pbVar14 + 2) = *(undefined2 *)((ulong)acStack_80 | 2);
    pbVar14[1] = *(byte *)((long)param_1 + 0x4f2);
    (**(code **)(*param_1 + 0x220))();
    *(long *)(pbVar14 + 8) = *param_1;
    *(undefined8 *)(pbVar14 + 0x10) = *puVar13;
    *(undefined8 *)(pbVar14 + 0x18) = uVar15;
    *(undefined8 *)(pbVar14 + 0x28) = uStack_68;
    *(undefined8 *)(pbVar14 + 0x20) = uStack_70;
    pbVar14 = pbVar14 + 0x30;
    param_3 = param_3 - 1;
    plVar3 = param_2;
    plVar5 = plVar5 + 1;
  } while (param_3 != 0);
LAB_10a199888:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 10a1998ac; end: 10a1998bf;  */

undefined1  [16] FUN_10a1998ac(undefined8 param_1,long *param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  plVar3 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (plVar3 < (long *)0x555555555555556) {
    lVar4 = (long)plVar3 * 0x30;
    __Znwm(lVar4);
    auVar12._8_8_ = plVar3;
    auVar12._0_8_ = lVar4;
    return auVar12;
  }
  func_0x000109ffded8();
  puVar11 = (undefined8 *)*plVar3;
  plVar1 = (long *)plVar3[1];
  uVar7 = (long)plVar1 - (long)puVar11 >> 3;
  plVar10 = param_2;
  if (uVar7 < param_3) {
    uVar7 = param_3 - uVar7;
    if ((ulong)(plVar3[2] - (long)plVar1 >> 3) < uVar7) {
      if (param_3 >> 0x3d != 0) {
        FUN_10a199a28();
        plVar3 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if ((ulong)plVar3 >> 0x3d != 0) {
          func_0x000109ffded8();
          lVar4 = *plVar3;
          *plVar3 = 0;
          if (lVar4 != 0) {
            func_0x00010a193298();
            __ZdlPv();
          }
          auVar15._8_8_ = param_2;
          auVar15._0_8_ = plVar3;
          return auVar15;
        }
        lVar4 = (long)plVar3 << 3;
        __Znwm(lVar4);
        auVar14._8_8_ = plVar3;
        auVar14._0_8_ = lVar4;
        return auVar14;
      }
      uVar8 = plVar3[2] - (long)puVar11;
      uVar9 = (long)uVar8 >> 2;
      if (uVar9 <= param_3) {
        uVar9 = param_3;
      }
      if (0x7ffffffffffffff7 < uVar8) {
        uVar9 = 0x1fffffffffffffff;
      }
      FUN_10a199a3c();
      plVar6 = (long *)*plVar3;
      lVar2 = plVar3[1];
      lVar4 = uVar9 + ((long)plVar1 - (long)puVar11);
      _bzero(lVar4,uVar7 * 8);
      puVar11 = (undefined8 *)(lVar4 - (lVar2 - (long)plVar6));
      _memcpy(puVar11,plVar6,lVar2 - (long)plVar6);
      plVar5 = (long *)*plVar3;
      *plVar3 = (long)puVar11;
      plVar3[1] = lVar4 + uVar7 * 8;
      plVar3[2] = uVar9 + (long)param_2 * 8;
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
        puVar11 = (undefined8 *)*plVar3;
      }
    }
    else {
      plVar6 = (long *)(uVar7 * 8);
      plVar5 = plVar1;
      _bzero(plVar1,plVar6);
      plVar3[1] = (long)(plVar1 + uVar7);
    }
  }
  else {
    if (param_3 < uVar7) {
      plVar3[1] = (long)(puVar11 + param_3);
    }
    plVar5 = plVar3;
    plVar6 = param_2;
    if (param_3 == 0) goto LAB_10a199a0c;
  }
  do {
    *puVar11 = *(undefined8 *)(*plVar10 + 0x4f0);
    param_3 = param_3 - 1;
    plVar3 = plVar5;
    param_2 = plVar6;
    plVar10 = plVar10 + 1;
    puVar11 = puVar11 + 1;
  } while (param_3 != 0);
LAB_10a199a0c:
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = plVar3;
  return auVar13;
}



/* Entry: 10a1998c0; end: 10a199903;  */

undefined1  [16] FUN_10a1998c0(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_1 < (long *)0x555555555555556) {
    lVar2 = (long)param_1 * 0x30;
    __Znwm(lVar2);
    auVar11._8_8_ = param_1;
    auVar11._0_8_ = lVar2;
    return auVar11;
  }
  func_0x000109ffded8();
  puVar10 = (undefined8 *)*param_1;
  plVar4 = (long *)param_1[1];
  uVar6 = (long)plVar4 - (long)puVar10 >> 3;
  plVar9 = param_2;
  if (uVar6 < param_3) {
    uVar6 = param_3 - uVar6;
    if ((ulong)(param_1[2] - (long)plVar4 >> 3) < uVar6) {
      if (param_3 >> 0x3d != 0) {
        FUN_10a199a28();
        plVar4 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if ((ulong)plVar4 >> 0x3d != 0) {
          func_0x000109ffded8();
          lVar2 = *plVar4;
          *plVar4 = 0;
          if (lVar2 != 0) {
            func_0x00010a193298();
            __ZdlPv();
          }
          auVar14._8_8_ = param_2;
          auVar14._0_8_ = plVar4;
          return auVar14;
        }
        lVar2 = (long)plVar4 << 3;
        __Znwm(lVar2);
        auVar13._8_8_ = plVar4;
        auVar13._0_8_ = lVar2;
        return auVar13;
      }
      uVar7 = param_1[2] - (long)puVar10;
      uVar8 = (long)uVar7 >> 2;
      if (uVar8 <= param_3) {
        uVar8 = param_3;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar8 = 0x1fffffffffffffff;
      }
      FUN_10a199a3c();
      plVar5 = (long *)*param_1;
      lVar1 = param_1[1];
      lVar2 = uVar8 + ((long)plVar4 - (long)puVar10);
      _bzero(lVar2,uVar6 * 8);
      puVar10 = (undefined8 *)(lVar2 - (lVar1 - (long)plVar5));
      _memcpy(puVar10,plVar5,lVar1 - (long)plVar5);
      plVar3 = (long *)*param_1;
      *param_1 = (long)puVar10;
      param_1[1] = lVar2 + uVar6 * 8;
      param_1[2] = uVar8 + (long)param_2 * 8;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
        puVar10 = (undefined8 *)*param_1;
      }
    }
    else {
      plVar5 = (long *)(uVar6 * 8);
      plVar3 = plVar4;
      _bzero(plVar4,plVar5);
      param_1[1] = (long)(plVar4 + uVar6);
    }
  }
  else {
    if (param_3 < uVar6) {
      param_1[1] = (long)(puVar10 + param_3);
    }
    plVar3 = param_1;
    plVar5 = param_2;
    if (param_3 == 0) goto LAB_10a199a0c;
  }
  do {
    *puVar10 = *(undefined8 *)(*plVar9 + 0x4f0);
    param_3 = param_3 - 1;
    param_1 = plVar3;
    param_2 = plVar5;
    plVar9 = plVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (param_3 != 0);
LAB_10a199a0c:
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = param_1;
  return auVar12;
}



/* Entry: 10a199904; end: 10a199a27;  */

undefined1  [16] FUN_10a199904(long *param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar10 = (undefined8 *)*param_1;
  plVar3 = (long *)param_1[1];
  uVar6 = (long)plVar3 - (long)puVar10 >> 3;
  plVar9 = param_2;
  if (uVar6 < param_3) {
    uVar6 = param_3 - uVar6;
    if ((ulong)(param_1[2] - (long)plVar3 >> 3) < uVar6) {
      if (param_3 >> 0x3d != 0) {
        FUN_10a199a28();
        plVar3 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if ((ulong)plVar3 >> 0x3d != 0) {
          func_0x000109ffded8();
          lVar4 = *plVar3;
          *plVar3 = 0;
          if (lVar4 != 0) {
            func_0x00010a193298();
            __ZdlPv();
          }
          auVar13._8_8_ = param_2;
          auVar13._0_8_ = plVar3;
          return auVar13;
        }
        lVar4 = (long)plVar3 << 3;
        __Znwm(lVar4);
        auVar12._8_8_ = plVar3;
        auVar12._0_8_ = lVar4;
        return auVar12;
      }
      uVar7 = param_1[2] - (long)puVar10;
      uVar8 = (long)uVar7 >> 2;
      if (uVar8 <= param_3) {
        uVar8 = param_3;
      }
      if (0x7ffffffffffffff7 < uVar7) {
        uVar8 = 0x1fffffffffffffff;
      }
      FUN_10a199a3c();
      plVar5 = (long *)*param_1;
      lVar1 = param_1[1];
      lVar4 = uVar8 + ((long)plVar3 - (long)puVar10);
      _bzero(lVar4,uVar6 * 8);
      puVar10 = (undefined8 *)(lVar4 - (lVar1 - (long)plVar5));
      _memcpy(puVar10,plVar5,lVar1 - (long)plVar5);
      plVar2 = (long *)*param_1;
      *param_1 = (long)puVar10;
      param_1[1] = lVar4 + uVar6 * 8;
      param_1[2] = uVar8 + (long)param_2 * 8;
      if (plVar2 != (long *)0x0) {
        __ZdlPv();
        puVar10 = (undefined8 *)*param_1;
      }
    }
    else {
      plVar5 = (long *)(uVar6 * 8);
      plVar2 = plVar3;
      _bzero(plVar3,plVar5);
      param_1[1] = (long)(plVar3 + uVar6);
    }
  }
  else {
    if (param_3 < uVar6) {
      param_1[1] = (long)(puVar10 + param_3);
    }
    plVar2 = param_1;
    plVar5 = param_2;
    if (param_3 == 0) goto LAB_10a199a0c;
  }
  do {
    *puVar10 = *(undefined8 *)(*plVar9 + 0x4f0);
    param_3 = param_3 - 1;
    param_1 = plVar2;
    param_2 = plVar5;
    plVar9 = plVar9 + 1;
    puVar10 = puVar10 + 1;
  } while (param_3 != 0);
LAB_10a199a0c:
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = param_1;
  return auVar11;
}



/* Entry: 10a199a28; end: 10a199a3b;  */

undefined1  [16] FUN_10a199a28(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3d == 0) {
    lVar2 = (long)plVar1 << 3;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010a193298();
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a199a3c; end: 10a199aa3;  */

undefined1  [16] FUN_10a199a3c(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a193298();
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a199aa4; end: 10a199aeb;  */

void FUN_10a199aa4(long *param_1)

{
  long lVar1;
  
  lVar1 = 0x238;
  __Znwm();
  FUN_10a199aec();
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  return;
}



/* Entry: 10a199aec; end: 10a199b33;  */

undefined8 * FUN_10a199aec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab218;
  FUN_10a556d00(param_1 + 3);
  return param_1;
}



/* Entry: 10a199b34; end: 10a199b43;  */

void FUN_10a199b34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab218;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a199b44; end: 10a199b63;  */

void FUN_10a199b44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110bab218;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a199b64; end: 10a199b73;  */

void FUN_10a199b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010a199b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10a199b74; end: 10a199bdb;  */

void FUN_10a199b74(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = 0x120;
  __Znwm();
  FUN_10a199bdc();
  *param_1 = lVar5 + 0x18;
  param_1[1] = lVar5;
  if (((long *)(lVar5 + 0x58) != (long *)0x0) &&
     ((lVar4 = *(long *)(lVar5 + 0x60), lVar4 == 0 || (*(long *)(lVar4 + 8) == -1)))) {
    plVar6 = (long *)param_1[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar1 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar4 = *(long *)(lVar5 + 0x60);
    }
    *(long *)(lVar5 + 0x58) = lVar5 + 0x18;
    *(long **)(lVar5 + 0x60) = plVar6;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a199bdc; end: 10a199c23;  */

undefined8 * FUN_10a199bdc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110bab268;
  FUN_10a199c24(param_1 + 3);
  return param_1;
}



/* Entry: 10a199c24; end: 10a199cc7;  */

undefined8 FUN_10a199c24(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar4 = *param_2;
  plVar6 = (long *)param_3[1];
  uStack_28 = param_3[1];
  uStack_30 = *param_3;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10ac75164(param_1,uVar4,&uStack_30);
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
  return param_1;
}



/* Entry: 10a199cc8; end: 10a199deb;  */

undefined1  [16] FUN_10a199cc8(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long *plVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char cStack_1d4;
  char cStack_1d3;
  byte bStack_1d2;
  undefined8 uStack_1cc;
  undefined8 uStack_1c4;
  undefined8 uStack_1bc;
  undefined4 uStack_1b4;
  long lStack_1b0;
  ulong uStack_1a8;
  long lStack_1a0;
  ulong uStack_198;
  long *plStack_190;
  long *plStack_188;
  long *plStack_180;
  long *plStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  long *plStack_160;
  long *plStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined1 **ppuStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 *puStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined1 ***pppuStack_f0;
  code *pcStack_e8;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  
  puVar16 = (undefined8 *)*param_1;
  plVar11 = (long *)param_1[1];
  lVar23 = (long)plVar11 - (long)puVar16;
  plVar9 = (long *)(lVar23 >> 3);
  plVar12 = param_2;
  if (plVar9 < param_3) {
    uVar22 = (long)param_3 - (long)plVar9;
    if ((ulong)(param_1[2] - (long)plVar11 >> 3) < uVar22) {
      if ((ulong)param_3 >> 0x3d != 0) {
        plVar11 = param_3;
        FUN_10a199dec();
        pcStack_58 = FUN_10a199dec;
        puVar16 = (undefined8 *)&UNK_10f6403f7;
        puStack_60 = &stack0xfffffffffffffff0;
        FUN_109ffde64();
        pcStack_68 = FUN_10a199e00;
        plStack_80 = param_2;
        plStack_78 = param_3;
        if ((ulong)puVar16 >> 0x3d == 0) {
          lVar23 = (long)puVar16 << 3;
          puStack_70 = (undefined1 *)&puStack_60;
          __Znwm(lVar23);
          auVar25._8_8_ = puVar16;
          auVar25._0_8_ = lVar23;
          return auVar25;
        }
        puStack_70 = (undefined1 *)&puStack_60;
        func_0x000109ffded8();
        pcStack_88 = FUN_10a199e34;
        plVar6 = (long *)puVar16[1];
        plVar17 = (long *)*puVar16;
        plVar19 = (long *)((long)plVar6 - (long)plVar17);
        plVar9 = (long *)((long)plVar11 - (long)plVar19);
        plVar5 = plVar17;
        plVar8 = plVar12;
        if (plVar11 < plVar19 || plVar9 == (long *)0x0) {
          if (plVar11 < plVar19) {
            puVar16[1] = (long)plVar17 + (long)plVar11;
          }
          plVar9 = plVar12;
          if (plVar11 == (long *)0x0) goto LAB_10a199f30;
        }
        else {
          ppuStack_90 = &puStack_70;
          if ((long *)(puVar16[2] - (long)plVar6) < plVar9) {
            if ((long)plVar11 < 0) {
              plVar7 = plVar12;
              plVar8 = plVar11;
              FUN_10a199f50();
              pcStack_e8 = FUN_10a199f50;
              plVar5 = (long *)&UNK_10f6403f7;
              pppuStack_f0 = &ppuStack_90;
              FUN_109ffde64();
              pcStack_f8 = FUN_10a199f64;
              lVar2 = *plVar5;
              plVar6 = (long *)plVar5[1];
              lVar20 = (long)plVar6 - lVar2;
              plVar13 = (long *)(lVar20 >> 4);
              if (plVar13 < plVar8) {
                uVar10 = (long)plVar8 - (long)plVar13;
                plStack_130 = plVar9;
                plStack_128 = plVar19;
                puStack_120 = puVar16;
                plStack_118 = plVar17;
                plStack_110 = plVar12;
                plStack_108 = plVar11;
                if ((ulong)(plVar5[2] - (long)plVar6 >> 4) < uVar10) {
                  if ((ulong)plVar8 >> 0x3c != 0) {
                    plVar9 = plVar7;
                    plVar12 = plVar8;
                    puStack_100 = (undefined1 *)&pppuStack_f0;
                    FUN_10a19a084();
                    pcStack_138 = FUN_10a19a084;
                    plVar11 = (long *)&UNK_10f6403f7;
                    ppuStack_140 = &puStack_100;
                    FUN_109ffde64();
                    pcStack_148 = FUN_10a19a098;
                    plStack_160 = plVar7;
                    plStack_158 = plVar8;
                    if ((ulong)plVar11 >> 0x3c == 0) {
                      lVar23 = (long)plVar11 << 4;
                      puStack_150 = (undefined1 *)&ppuStack_140;
                      __Znwm(lVar23);
                      auVar28._8_8_ = plVar11;
                      auVar28._0_8_ = lVar23;
                      return auVar28;
                    }
                    puStack_150 = (undefined1 *)&ppuStack_140;
                    func_0x000109ffded8();
                    pcStack_168 = FUN_10a19a0cc;
                    lVar2 = *plVar11;
                    puVar16 = (undefined8 *)plVar11[1];
                    lVar15 = (long)puVar16 - lVar2 >> 2;
                    bVar4 = plVar12 < (long *)(lVar15 * -0x71c71c71c71c71c7);
                    uVar3 = (long)plVar12 + lVar15 * 0x71c71c71c71c71c7;
                    plVar17 = plVar9;
                    lStack_1b0 = lVar23;
                    uStack_1a8 = uVar22;
                    lStack_1a0 = lVar20;
                    uStack_198 = uVar10;
                    plStack_190 = plVar6;
                    plStack_188 = plVar5;
                    plStack_180 = plVar7;
                    plStack_178 = plVar8;
                    ppuStack_170 = &puStack_150;
                    if (bVar4 || uVar3 == 0) {
                      if (bVar4) {
                        plVar11[1] = lVar2 + (long)plVar12 * 0x24;
                      }
                      if (plVar12 == (long *)0x0) goto LAB_10a19a2b4;
                    }
                    else if ((ulong)((plVar11[2] - (long)puVar16 >> 2) * -0x71c71c71c71c71c7) <
                             uVar3) {
                      if ((long *)0x71c71c71c71c71c < plVar12) {
                        FUN_10a19a2d4();
                        plVar11 = (long *)&UNK_10f6403f7;
                        FUN_109ffde64();
                        if ((long *)0x71c71c71c71c71c < plVar11) {
                          func_0x000109ffded8();
                          lVar23 = *plVar11;
                          *plVar11 = 0;
                          if (lVar23 != 0) {
                            func_0x00010a193298();
                            __ZdlPv();
                          }
                          auVar31._8_8_ = plVar9;
                          auVar31._0_8_ = plVar11;
                          return auVar31;
                        }
                        lVar23 = (long)plVar11 * 0x24;
                        __Znwm(lVar23);
                        auVar30._8_8_ = plVar11;
                        auVar30._0_8_ = lVar23;
                        return auVar30;
                      }
                      lVar23 = plVar11[2] - lVar2 >> 2;
                      plVar5 = (long *)(lVar23 * 0x1c71c71c71c71c72);
                      if (plVar5 < plVar12 || (long)plVar5 - (long)plVar12 == 0) {
                        plVar5 = plVar12;
                      }
                      if (0x38e38e38e38e38d < (ulong)(lVar23 * -0x71c71c71c71c71c7)) {
                        plVar5 = (long *)0x71c71c71c71c71c;
                      }
                      plVar6 = plVar9;
                      FUN_10a19a2e8();
                      puVar14 = (undefined8 *)((long)plVar5 + ((long)puVar16 - lVar2));
                      puVar21 = (undefined8 *)((long)puVar14 + uVar3 * 0x24);
                      puVar16 = puVar14;
                      do {
                        *puVar16 = &UNK_101020000;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        puVar16[3] = 0;
                        *(undefined4 *)(puVar16 + 4) = 0;
                        puVar16 = (undefined8 *)((long)puVar16 + 0x24);
                      } while (puVar16 != puVar21);
                      plVar17 = (long *)*plVar11;
                      lVar20 = (long)puVar14 - (plVar11[1] - (long)plVar17);
                      _memcpy(lVar20);
                      lVar23 = *plVar11;
                      *plVar11 = lVar20;
                      plVar11[1] = (long)puVar21;
                      plVar11[2] = (long)plVar5 + (long)plVar6 * 0x24;
                      if (lVar23 != 0) {
                        __ZdlPv();
                      }
                    }
                    else {
                      puVar14 = (undefined8 *)((long)puVar16 + uVar3 * 0x24);
                      do {
                        *puVar16 = &UNK_101020000;
                        puVar16[1] = 0;
                        puVar16[2] = 0;
                        puVar16[3] = 0;
                        *(undefined4 *)(puVar16 + 4) = 0;
                        puVar16 = (undefined8 *)((long)puVar16 + 0x24);
                      } while (puVar16 != puVar14);
                      plVar11[1] = (long)puVar14;
                    }
                    pbVar18 = (byte *)*plVar11;
                    plVar5 = plVar9;
                    do {
                      plVar9 = plVar17;
                      plVar6 = (long *)*plVar5;
                      plVar11 = plVar6;
                      FUN_10a5ff710(&cStack_1d4,plVar6);
                      bVar1 = 0;
                      if (*(short *)((long)plVar6 + 0x502) != 0) {
                        bVar1 = 0x10;
                      }
                      *pbVar18 = bVar1 | cStack_1d4 << 2 | cStack_1d3 << 3 |
                                 *(byte *)(plVar6 + 0xa0) | *(char *)((long)plVar6 + 0x501) << 1;
                      pbVar18[1] = bStack_1d2;
                      *(undefined2 *)(pbVar18 + 2) = *(undefined2 *)((ulong)&cStack_1d4 | 3);
                      pbVar18[4] = *(byte *)((undefined2 *)((ulong)&cStack_1d4 | 3) + 1);
                      *(undefined8 *)(pbVar18 + 0x10) = uStack_1c4;
                      *(undefined8 *)(pbVar18 + 8) = uStack_1cc;
                      *(undefined8 *)(pbVar18 + 0x18) = uStack_1bc;
                      *(undefined4 *)(pbVar18 + 0x20) = uStack_1b4;
                      pbVar18 = pbVar18 + 0x24;
                      plVar12 = (long *)((long)plVar12 + -1);
                      plVar17 = plVar9;
                      plVar5 = plVar5 + 1;
                    } while (plVar12 != (long *)0x0);
LAB_10a19a2b4:
                    auVar29._8_8_ = plVar9;
                    auVar29._0_8_ = plVar11;
                    return auVar29;
                  }
                  uVar22 = plVar5[2] - lVar2;
                  plVar9 = (long *)((long)uVar22 >> 3);
                  if (plVar9 <= plVar8) {
                    plVar9 = plVar8;
                  }
                  if (0x7fffffffffffffef < uVar22) {
                    plVar9 = (long *)0xfffffffffffffff;
                  }
                  plVar6 = plVar7;
                  puStack_100 = (undefined1 *)&pppuStack_f0;
                  FUN_10a19a098();
                  lVar20 = (long)plVar9 + lVar20;
                  _bzero(lVar20,uVar10 * 0x10);
                  plVar11 = (long *)*plVar5;
                  lVar23 = lVar20 - (plVar5[1] - (long)plVar11);
                  _memcpy(lVar23);
                  plVar12 = (long *)*plVar5;
                  *plVar5 = lVar23;
                  plVar5[1] = lVar20 + uVar10 * 0x10;
                  plVar5[2] = (long)(plVar9 + (long)plVar6 * 2);
                  if (plVar12 != (long *)0x0) {
                    __ZdlPv();
                  }
                }
                else {
                  plVar11 = (long *)(uVar10 * 0x10);
                  plVar12 = plVar6;
                  puStack_100 = (undefined1 *)&pppuStack_f0;
                  _bzero(plVar6,plVar11);
                  plVar5[1] = (long)(plVar6 + uVar10 * 2);
                }
              }
              else {
                if (plVar8 < plVar13) {
                  plVar5[1] = lVar2 + (long)plVar8 * 0x10;
                }
                plVar12 = plVar5;
                plVar11 = plVar7;
                if (plVar8 == (long *)0x0) goto LAB_10a19a06c;
              }
              puVar16 = (undefined8 *)(*plVar5 + 8);
              plVar9 = plVar7;
              do {
                lVar23 = *plVar9;
                *(undefined1 *)(puVar16 + -1) = *(undefined1 *)(lVar23 + 0x518);
                *puVar16 = *(undefined8 *)(lVar23 + 0x538);
                plVar8 = (long *)((long)plVar8 + -1);
                plVar5 = plVar12;
                plVar7 = plVar11;
                puVar16 = puVar16 + 2;
                plVar9 = plVar9 + 1;
              } while (plVar8 != (long *)0x0);
LAB_10a19a06c:
              auVar27._8_8_ = plVar7;
              auVar27._0_8_ = plVar5;
              return auVar27;
            }
            uVar22 = puVar16[2] - (long)plVar17;
            plVar12 = (long *)(uVar22 * 2);
            if (plVar12 < plVar11 || (long)plVar12 - (long)plVar11 == 0) {
              plVar12 = plVar11;
            }
            if (0x3ffffffffffffffe < uVar22) {
              plVar12 = (long *)0x7fffffffffffffff;
            }
            plVar5 = plVar12;
            __Znwm();
            _bzero((long)plVar5 + (long)plVar19,plVar9);
            plVar6 = plVar5;
            plVar9 = plVar17;
            _memcpy(plVar5,plVar17,plVar19);
            *puVar16 = plVar5;
            puVar16[1] = (long)plVar5 + (long)plVar11;
            puVar16[2] = (long)plVar5 + (long)plVar12;
            if (plVar17 != (long *)0x0) {
              __ZdlPv(plVar17);
              plVar6 = plVar17;
              plVar5 = (long *)*puVar16;
            }
          }
          else {
            lVar23 = (long)plVar6 + (long)plVar9;
            _bzero(plVar6,plVar9);
            puVar16[1] = lVar23;
          }
        }
        do {
          *(undefined1 *)plVar5 = *(undefined1 *)(*plVar8 + 0x548);
          plVar11 = (long *)((long)plVar11 + -1);
          plVar12 = plVar9;
          plVar8 = plVar8 + 1;
          plVar5 = (long *)((long)plVar5 + 1);
        } while (plVar11 != (long *)0x0);
LAB_10a199f30:
        auVar26._8_8_ = plVar12;
        auVar26._0_8_ = plVar6;
        return auVar26;
      }
      uVar10 = param_1[2] - (long)puVar16;
      plVar11 = (long *)((long)uVar10 >> 2);
      if (plVar11 <= param_3) {
        plVar11 = param_3;
      }
      if (0x7ffffffffffffff7 < uVar10) {
        plVar11 = (long *)0x1fffffffffffffff;
      }
      FUN_10a199e00();
      plVar9 = (long *)*param_1;
      lVar20 = param_1[1];
      lVar23 = (long)plVar11 + lVar23;
      _bzero(lVar23,uVar22 * 8);
      puVar16 = (undefined8 *)(lVar23 - (lVar20 - (long)plVar9));
      _memcpy(puVar16,plVar9,lVar20 - (long)plVar9);
      plVar5 = (long *)*param_1;
      *param_1 = (long)puVar16;
      param_1[1] = lVar23 + uVar22 * 8;
      param_1[2] = (long)(plVar11 + (long)param_2);
      if (plVar5 != (long *)0x0) {
        __ZdlPv();
        puVar16 = (undefined8 *)*param_1;
      }
    }
    else {
      plVar9 = (long *)(uVar22 * 8);
      plVar5 = plVar11;
      _bzero(plVar11,plVar9);
      param_1[1] = (long)(plVar11 + uVar22);
    }
  }
  else {
    if (param_3 < plVar9) {
      param_1[1] = (long)(puVar16 + (long)param_3);
    }
    plVar5 = param_1;
    plVar9 = param_2;
    if (param_3 == (long *)0x0) goto LAB_10a199dd0;
  }
  do {
    *puVar16 = *(undefined8 *)(*plVar12 + 0x528);
    param_3 = (long *)((long)param_3 + -1);
    param_1 = plVar5;
    param_2 = plVar9;
    plVar12 = plVar12 + 1;
    puVar16 = puVar16 + 1;
  } while (param_3 != (long *)0x0);
LAB_10a199dd0:
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = param_1;
  return auVar24;
}



/* Entry: 10a199dec; end: 10a199dff;  */

undefined1  [16] FUN_10a199dec(undefined8 param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cStack_184;
  char cStack_183;
  byte bStack_182;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined4 uStack_164;
  
  puVar3 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)puVar3 >> 0x3d == 0) {
    lVar4 = (long)puVar3 << 3;
    __Znwm(lVar4);
    auVar18._8_8_ = puVar3;
    auVar18._0_8_ = lVar4;
    return auVar18;
  }
  func_0x000109ffded8();
  plVar5 = (long *)puVar3[1];
  plVar12 = (long *)*puVar3;
  plVar16 = (long *)((long)plVar5 - (long)plVar12);
  plVar6 = (long *)((long)param_3 - (long)plVar16);
  plVar13 = plVar12;
  plVar7 = param_2;
  if (param_3 < plVar16 || plVar6 == (long *)0x0) {
    if (param_3 < plVar16) {
      puVar3[1] = (long)plVar12 + (long)param_3;
    }
    plVar6 = param_2;
    if (param_3 == (long *)0x0) goto LAB_10a199f30;
  }
  else if ((long *)(puVar3[2] - (long)plVar5) < plVar6) {
    if ((long)param_3 < 0) {
      FUN_10a199f50();
      plVar6 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      lVar4 = *plVar6;
      plVar13 = (long *)plVar6[1];
      plVar5 = (long *)((long)plVar13 - lVar4 >> 4);
      if (plVar5 < param_3) {
        uVar8 = (long)param_3 - (long)plVar5;
        if ((ulong)(plVar6[2] - (long)plVar13 >> 4) < uVar8) {
          if ((ulong)param_3 >> 0x3c != 0) {
            FUN_10a19a084();
            plVar6 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((ulong)plVar6 >> 0x3c == 0) {
              lVar4 = (long)plVar6 << 4;
              __Znwm(lVar4);
              auVar21._8_8_ = plVar6;
              auVar21._0_8_ = lVar4;
              return auVar21;
            }
            func_0x000109ffded8();
            lVar4 = *plVar6;
            puVar3 = (undefined8 *)plVar6[1];
            lVar14 = (long)puVar3 - lVar4 >> 2;
            bVar2 = param_3 < (long *)(lVar14 * -0x71c71c71c71c71c7);
            uVar8 = (long)param_3 + lVar14 * 0x71c71c71c71c71c7;
            plVar13 = param_2;
            if (bVar2 || uVar8 == 0) {
              if (bVar2) {
                plVar6[1] = lVar4 + (long)param_3 * 0x24;
              }
              if (param_3 == (long *)0x0) goto LAB_10a19a2b4;
            }
            else if ((ulong)((plVar6[2] - (long)puVar3 >> 2) * -0x71c71c71c71c71c7) < uVar8) {
              if ((long *)0x71c71c71c71c71c < param_3) {
                FUN_10a19a2d4();
                plVar6 = (long *)&UNK_10f6403f7;
                FUN_109ffde64();
                if ((long *)0x71c71c71c71c71c < plVar6) {
                  func_0x000109ffded8();
                  lVar4 = *plVar6;
                  *plVar6 = 0;
                  if (lVar4 != 0) {
                    func_0x00010a193298();
                    __ZdlPv();
                  }
                  auVar24._8_8_ = param_2;
                  auVar24._0_8_ = plVar6;
                  return auVar24;
                }
                lVar4 = (long)plVar6 * 0x24;
                __Znwm(lVar4);
                auVar23._8_8_ = plVar6;
                auVar23._0_8_ = lVar4;
                return auVar23;
              }
              lVar14 = plVar6[2] - lVar4 >> 2;
              plVar5 = (long *)(lVar14 * 0x1c71c71c71c71c72);
              if (plVar5 < param_3 || (long)plVar5 - (long)param_3 == 0) {
                plVar5 = param_3;
              }
              if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
                plVar5 = (long *)0x71c71c71c71c71c;
              }
              plVar7 = param_2;
              FUN_10a19a2e8();
              puVar11 = (undefined8 *)((long)plVar5 + ((long)puVar3 - lVar4));
              puVar17 = (undefined8 *)((long)puVar11 + uVar8 * 0x24);
              puVar3 = puVar11;
              do {
                *puVar3 = &UNK_101020000;
                puVar3[1] = 0;
                puVar3[2] = 0;
                puVar3[3] = 0;
                *(undefined4 *)(puVar3 + 4) = 0;
                puVar3 = (undefined8 *)((long)puVar3 + 0x24);
              } while (puVar3 != puVar17);
              plVar13 = (long *)*plVar6;
              lVar14 = (long)puVar11 - (plVar6[1] - (long)plVar13);
              _memcpy(lVar14);
              lVar4 = *plVar6;
              *plVar6 = lVar14;
              plVar6[1] = (long)puVar17;
              plVar6[2] = (long)plVar5 + (long)plVar7 * 0x24;
              if (lVar4 != 0) {
                __ZdlPv();
              }
            }
            else {
              puVar11 = (undefined8 *)((long)puVar3 + uVar8 * 0x24);
              do {
                *puVar3 = &UNK_101020000;
                puVar3[1] = 0;
                puVar3[2] = 0;
                puVar3[3] = 0;
                *(undefined4 *)(puVar3 + 4) = 0;
                puVar3 = (undefined8 *)((long)puVar3 + 0x24);
              } while (puVar3 != puVar11);
              plVar6[1] = (long)puVar11;
            }
            pbVar15 = (byte *)*plVar6;
            plVar5 = param_2;
            do {
              param_2 = plVar13;
              plVar13 = (long *)*plVar5;
              plVar6 = plVar13;
              FUN_10a5ff710(&cStack_184,plVar13);
              bVar1 = 0;
              if (*(short *)((long)plVar13 + 0x502) != 0) {
                bVar1 = 0x10;
              }
              *pbVar15 = bVar1 | cStack_184 << 2 | cStack_183 << 3 |
                         *(byte *)(plVar13 + 0xa0) | *(char *)((long)plVar13 + 0x501) << 1;
              pbVar15[1] = bStack_182;
              *(undefined2 *)(pbVar15 + 2) = *(undefined2 *)((ulong)&cStack_184 | 3);
              pbVar15[4] = *(byte *)((undefined2 *)((ulong)&cStack_184 | 3) + 1);
              *(undefined8 *)(pbVar15 + 0x10) = uStack_174;
              *(undefined8 *)(pbVar15 + 8) = uStack_17c;
              *(undefined8 *)(pbVar15 + 0x18) = uStack_16c;
              *(undefined4 *)(pbVar15 + 0x20) = uStack_164;
              pbVar15 = pbVar15 + 0x24;
              param_3 = (long *)((long)param_3 + -1);
              plVar13 = param_2;
              plVar5 = plVar5 + 1;
            } while (param_3 != (long *)0x0);
LAB_10a19a2b4:
            auVar22._8_8_ = param_2;
            auVar22._0_8_ = plVar6;
            return auVar22;
          }
          uVar9 = plVar6[2] - lVar4;
          plVar12 = (long *)((long)uVar9 >> 3);
          if (plVar12 <= param_3) {
            plVar12 = param_3;
          }
          if (0x7fffffffffffffef < uVar9) {
            plVar12 = (long *)0xfffffffffffffff;
          }
          plVar16 = param_2;
          FUN_10a19a098();
          lVar4 = (long)plVar12 + ((long)plVar13 - lVar4);
          _bzero(lVar4,uVar8 * 0x10);
          plVar5 = (long *)*plVar6;
          lVar14 = lVar4 - (plVar6[1] - (long)plVar5);
          _memcpy(lVar14);
          plVar7 = (long *)*plVar6;
          *plVar6 = lVar14;
          plVar6[1] = lVar4 + uVar8 * 0x10;
          plVar6[2] = (long)(plVar12 + (long)plVar16 * 2);
          if (plVar7 != (long *)0x0) {
            __ZdlPv();
          }
        }
        else {
          plVar5 = (long *)(uVar8 * 0x10);
          plVar7 = plVar13;
          _bzero(plVar13,plVar5);
          plVar6[1] = (long)(plVar13 + uVar8 * 2);
        }
      }
      else {
        if (param_3 < plVar5) {
          plVar6[1] = lVar4 + (long)param_3 * 0x10;
        }
        plVar7 = plVar6;
        plVar5 = param_2;
        if (param_3 == (long *)0x0) goto LAB_10a19a06c;
      }
      puVar3 = (undefined8 *)(*plVar6 + 8);
      plVar13 = param_2;
      do {
        lVar4 = *plVar13;
        *(undefined1 *)(puVar3 + -1) = *(undefined1 *)(lVar4 + 0x518);
        *puVar3 = *(undefined8 *)(lVar4 + 0x538);
        param_3 = (long *)((long)param_3 + -1);
        plVar6 = plVar7;
        param_2 = plVar5;
        puVar3 = puVar3 + 2;
        plVar13 = plVar13 + 1;
      } while (param_3 != (long *)0x0);
LAB_10a19a06c:
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = plVar6;
      return auVar20;
    }
    uVar8 = puVar3[2] - (long)plVar12;
    plVar10 = (long *)(uVar8 * 2);
    if (plVar10 < param_3 || (long)plVar10 - (long)param_3 == 0) {
      plVar10 = param_3;
    }
    if (0x3ffffffffffffffe < uVar8) {
      plVar10 = (long *)0x7fffffffffffffff;
    }
    plVar13 = plVar10;
    __Znwm();
    _bzero((long)plVar13 + (long)plVar16,plVar6);
    plVar5 = plVar13;
    plVar6 = plVar12;
    _memcpy(plVar13,plVar12,plVar16);
    *puVar3 = plVar13;
    puVar3[1] = (long)plVar13 + (long)param_3;
    puVar3[2] = (long)plVar13 + (long)plVar10;
    if (plVar12 != (long *)0x0) {
      __ZdlPv(plVar12);
      plVar5 = plVar12;
      plVar13 = (long *)*puVar3;
    }
  }
  else {
    lVar4 = (long)plVar5 + (long)plVar6;
    _bzero(plVar5,plVar6);
    puVar3[1] = lVar4;
  }
  do {
    *(undefined1 *)plVar13 = *(undefined1 *)(*plVar7 + 0x548);
    param_3 = (long *)((long)param_3 + -1);
    param_2 = plVar6;
    plVar7 = plVar7 + 1;
    plVar13 = (long *)((long)plVar13 + 1);
  } while (param_3 != (long *)0x0);
LAB_10a199f30:
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = plVar5;
  return auVar19;
}



/* Entry: 10a199e00; end: 10a199e33;  */

undefined1  [16] FUN_10a199e00(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  char cStack_174;
  char cStack_173;
  byte bStack_172;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar3 = (long)param_1 << 3;
    __Znwm(lVar3);
    auVar18._8_8_ = param_1;
    auVar18._0_8_ = lVar3;
    return auVar18;
  }
  func_0x000109ffded8();
  plVar4 = (long *)param_1[1];
  plVar12 = (long *)*param_1;
  plVar16 = (long *)((long)plVar4 - (long)plVar12);
  plVar5 = (long *)((long)param_3 - (long)plVar16);
  plVar13 = plVar12;
  plVar6 = param_2;
  if (param_3 < plVar16 || plVar5 == (long *)0x0) {
    if (param_3 < plVar16) {
      param_1[1] = (long)plVar12 + (long)param_3;
    }
    plVar5 = param_2;
    if (param_3 == (long *)0x0) goto LAB_10a199f30;
  }
  else if ((long *)(param_1[2] - (long)plVar4) < plVar5) {
    if ((long)param_3 < 0) {
      FUN_10a199f50();
      plVar5 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      lVar3 = *plVar5;
      plVar13 = (long *)plVar5[1];
      plVar4 = (long *)((long)plVar13 - lVar3 >> 4);
      if (plVar4 < param_3) {
        uVar7 = (long)param_3 - (long)plVar4;
        if ((ulong)(plVar5[2] - (long)plVar13 >> 4) < uVar7) {
          if ((ulong)param_3 >> 0x3c != 0) {
            FUN_10a19a084();
            plVar5 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((ulong)plVar5 >> 0x3c == 0) {
              lVar3 = (long)plVar5 << 4;
              __Znwm(lVar3);
              auVar21._8_8_ = plVar5;
              auVar21._0_8_ = lVar3;
              return auVar21;
            }
            func_0x000109ffded8();
            lVar3 = *plVar5;
            puVar9 = (undefined8 *)plVar5[1];
            lVar14 = (long)puVar9 - lVar3 >> 2;
            bVar2 = param_3 < (long *)(lVar14 * -0x71c71c71c71c71c7);
            uVar7 = (long)param_3 + lVar14 * 0x71c71c71c71c71c7;
            plVar13 = param_2;
            if (bVar2 || uVar7 == 0) {
              if (bVar2) {
                plVar5[1] = lVar3 + (long)param_3 * 0x24;
              }
              if (param_3 == (long *)0x0) goto LAB_10a19a2b4;
            }
            else if ((ulong)((plVar5[2] - (long)puVar9 >> 2) * -0x71c71c71c71c71c7) < uVar7) {
              if ((long *)0x71c71c71c71c71c < param_3) {
                FUN_10a19a2d4();
                plVar5 = (long *)&UNK_10f6403f7;
                FUN_109ffde64();
                if ((long *)0x71c71c71c71c71c < plVar5) {
                  func_0x000109ffded8();
                  lVar3 = *plVar5;
                  *plVar5 = 0;
                  if (lVar3 != 0) {
                    func_0x00010a193298();
                    __ZdlPv();
                  }
                  auVar24._8_8_ = param_2;
                  auVar24._0_8_ = plVar5;
                  return auVar24;
                }
                lVar3 = (long)plVar5 * 0x24;
                __Znwm(lVar3);
                auVar23._8_8_ = plVar5;
                auVar23._0_8_ = lVar3;
                return auVar23;
              }
              lVar14 = plVar5[2] - lVar3 >> 2;
              plVar4 = (long *)(lVar14 * 0x1c71c71c71c71c72);
              if (plVar4 < param_3 || (long)plVar4 - (long)param_3 == 0) {
                plVar4 = param_3;
              }
              if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
                plVar4 = (long *)0x71c71c71c71c71c;
              }
              plVar6 = param_2;
              FUN_10a19a2e8();
              puVar11 = (undefined8 *)((long)plVar4 + ((long)puVar9 - lVar3));
              puVar17 = (undefined8 *)((long)puVar11 + uVar7 * 0x24);
              puVar9 = puVar11;
              do {
                *puVar9 = &UNK_101020000;
                puVar9[1] = 0;
                puVar9[2] = 0;
                puVar9[3] = 0;
                *(undefined4 *)(puVar9 + 4) = 0;
                puVar9 = (undefined8 *)((long)puVar9 + 0x24);
              } while (puVar9 != puVar17);
              plVar13 = (long *)*plVar5;
              lVar14 = (long)puVar11 - (plVar5[1] - (long)plVar13);
              _memcpy(lVar14);
              lVar3 = *plVar5;
              *plVar5 = lVar14;
              plVar5[1] = (long)puVar17;
              plVar5[2] = (long)plVar4 + (long)plVar6 * 0x24;
              if (lVar3 != 0) {
                __ZdlPv();
              }
            }
            else {
              puVar11 = (undefined8 *)((long)puVar9 + uVar7 * 0x24);
              do {
                *puVar9 = &UNK_101020000;
                puVar9[1] = 0;
                puVar9[2] = 0;
                puVar9[3] = 0;
                *(undefined4 *)(puVar9 + 4) = 0;
                puVar9 = (undefined8 *)((long)puVar9 + 0x24);
              } while (puVar9 != puVar11);
              plVar5[1] = (long)puVar11;
            }
            pbVar15 = (byte *)*plVar5;
            plVar4 = param_2;
            do {
              param_2 = plVar13;
              plVar13 = (long *)*plVar4;
              plVar5 = plVar13;
              FUN_10a5ff710(&cStack_174,plVar13);
              bVar1 = 0;
              if (*(short *)((long)plVar13 + 0x502) != 0) {
                bVar1 = 0x10;
              }
              *pbVar15 = bVar1 | cStack_174 << 2 | cStack_173 << 3 |
                         *(byte *)(plVar13 + 0xa0) | *(char *)((long)plVar13 + 0x501) << 1;
              pbVar15[1] = bStack_172;
              *(undefined2 *)(pbVar15 + 2) = *(undefined2 *)((ulong)&cStack_174 | 3);
              pbVar15[4] = *(byte *)((undefined2 *)((ulong)&cStack_174 | 3) + 1);
              *(undefined8 *)(pbVar15 + 0x10) = uStack_164;
              *(undefined8 *)(pbVar15 + 8) = uStack_16c;
              *(undefined8 *)(pbVar15 + 0x18) = uStack_15c;
              *(undefined4 *)(pbVar15 + 0x20) = uStack_154;
              pbVar15 = pbVar15 + 0x24;
              param_3 = (long *)((long)param_3 + -1);
              plVar13 = param_2;
              plVar4 = plVar4 + 1;
            } while (param_3 != (long *)0x0);
LAB_10a19a2b4:
            auVar22._8_8_ = param_2;
            auVar22._0_8_ = plVar5;
            return auVar22;
          }
          uVar8 = plVar5[2] - lVar3;
          plVar12 = (long *)((long)uVar8 >> 3);
          if (plVar12 <= param_3) {
            plVar12 = param_3;
          }
          if (0x7fffffffffffffef < uVar8) {
            plVar12 = (long *)0xfffffffffffffff;
          }
          plVar16 = param_2;
          FUN_10a19a098();
          lVar3 = (long)plVar12 + ((long)plVar13 - lVar3);
          _bzero(lVar3,uVar7 * 0x10);
          plVar4 = (long *)*plVar5;
          lVar14 = lVar3 - (plVar5[1] - (long)plVar4);
          _memcpy(lVar14);
          plVar6 = (long *)*plVar5;
          *plVar5 = lVar14;
          plVar5[1] = lVar3 + uVar7 * 0x10;
          plVar5[2] = (long)(plVar12 + (long)plVar16 * 2);
          if (plVar6 != (long *)0x0) {
            __ZdlPv();
          }
        }
        else {
          plVar4 = (long *)(uVar7 * 0x10);
          plVar6 = plVar13;
          _bzero(plVar13,plVar4);
          plVar5[1] = (long)(plVar13 + uVar7 * 2);
        }
      }
      else {
        if (param_3 < plVar4) {
          plVar5[1] = lVar3 + (long)param_3 * 0x10;
        }
        plVar6 = plVar5;
        plVar4 = param_2;
        if (param_3 == (long *)0x0) goto LAB_10a19a06c;
      }
      puVar9 = (undefined8 *)(*plVar5 + 8);
      plVar13 = param_2;
      do {
        lVar3 = *plVar13;
        *(undefined1 *)(puVar9 + -1) = *(undefined1 *)(lVar3 + 0x518);
        *puVar9 = *(undefined8 *)(lVar3 + 0x538);
        param_3 = (long *)((long)param_3 + -1);
        plVar5 = plVar6;
        param_2 = plVar4;
        puVar9 = puVar9 + 2;
        plVar13 = plVar13 + 1;
      } while (param_3 != (long *)0x0);
LAB_10a19a06c:
      auVar20._8_8_ = param_2;
      auVar20._0_8_ = plVar5;
      return auVar20;
    }
    uVar7 = param_1[2] - (long)plVar12;
    plVar10 = (long *)(uVar7 * 2);
    if (plVar10 < param_3 || (long)plVar10 - (long)param_3 == 0) {
      plVar10 = param_3;
    }
    if (0x3ffffffffffffffe < uVar7) {
      plVar10 = (long *)0x7fffffffffffffff;
    }
    plVar13 = plVar10;
    __Znwm();
    _bzero((long)plVar13 + (long)plVar16,plVar5);
    plVar4 = plVar13;
    plVar5 = plVar12;
    _memcpy(plVar13,plVar12,plVar16);
    *param_1 = plVar13;
    param_1[1] = (long)plVar13 + (long)param_3;
    param_1[2] = (long)plVar13 + (long)plVar10;
    if (plVar12 != (long *)0x0) {
      __ZdlPv(plVar12);
      plVar4 = plVar12;
      plVar13 = (long *)*param_1;
    }
  }
  else {
    lVar3 = (long)plVar4 + (long)plVar5;
    _bzero(plVar4,plVar5);
    param_1[1] = lVar3;
  }
  do {
    *(undefined1 *)plVar13 = *(undefined1 *)(*plVar6 + 0x548);
    param_3 = (long *)((long)param_3 + -1);
    param_2 = plVar5;
    plVar6 = plVar6 + 1;
    plVar13 = (long *)((long)plVar13 + 1);
  } while (param_3 != (long *)0x0);
LAB_10a199f30:
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = plVar4;
  return auVar19;
}



/* Entry: 10a199e34; end: 10a199f4f;  */

undefined1  [16] FUN_10a199e34(undefined8 *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cStack_154;
  char cStack_153;
  byte bStack_152;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  
  plVar3 = (long *)param_1[1];
  plVar12 = (long *)*param_1;
  plVar16 = (long *)((long)plVar3 - (long)plVar12);
  plVar4 = (long *)((long)param_3 - (long)plVar16);
  plVar13 = plVar12;
  plVar5 = param_2;
  if (param_3 < plVar16 || plVar4 == (long *)0x0) {
    if (param_3 < plVar16) {
      param_1[1] = (long)plVar12 + (long)param_3;
    }
    plVar4 = param_2;
    if (param_3 == (long *)0x0) goto LAB_10a199f30;
  }
  else if ((long *)(param_1[2] - (long)plVar3) < plVar4) {
    if ((long)param_3 < 0) {
      FUN_10a199f50();
      plVar4 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      lVar10 = *plVar4;
      plVar13 = (long *)plVar4[1];
      plVar3 = (long *)((long)plVar13 - lVar10 >> 4);
      if (plVar3 < param_3) {
        uVar6 = (long)param_3 - (long)plVar3;
        if ((ulong)(plVar4[2] - (long)plVar13 >> 4) < uVar6) {
          if ((ulong)param_3 >> 0x3c != 0) {
            FUN_10a19a084();
            plVar4 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((ulong)plVar4 >> 0x3c == 0) {
              lVar10 = (long)plVar4 << 4;
              __Znwm(lVar10);
              auVar20._8_8_ = plVar4;
              auVar20._0_8_ = lVar10;
              return auVar20;
            }
            func_0x000109ffded8();
            lVar10 = *plVar4;
            puVar8 = (undefined8 *)plVar4[1];
            lVar14 = (long)puVar8 - lVar10 >> 2;
            bVar2 = param_3 < (long *)(lVar14 * -0x71c71c71c71c71c7);
            uVar6 = (long)param_3 + lVar14 * 0x71c71c71c71c71c7;
            plVar13 = param_2;
            if (bVar2 || uVar6 == 0) {
              if (bVar2) {
                plVar4[1] = lVar10 + (long)param_3 * 0x24;
              }
              if (param_3 == (long *)0x0) goto LAB_10a19a2b4;
            }
            else if ((ulong)((plVar4[2] - (long)puVar8 >> 2) * -0x71c71c71c71c71c7) < uVar6) {
              if ((long *)0x71c71c71c71c71c < param_3) {
                FUN_10a19a2d4();
                plVar4 = (long *)&UNK_10f6403f7;
                FUN_109ffde64();
                if ((long *)0x71c71c71c71c71c < plVar4) {
                  func_0x000109ffded8();
                  lVar10 = *plVar4;
                  *plVar4 = 0;
                  if (lVar10 != 0) {
                    func_0x00010a193298();
                    __ZdlPv();
                  }
                  auVar23._8_8_ = param_2;
                  auVar23._0_8_ = plVar4;
                  return auVar23;
                }
                lVar10 = (long)plVar4 * 0x24;
                __Znwm(lVar10);
                auVar22._8_8_ = plVar4;
                auVar22._0_8_ = lVar10;
                return auVar22;
              }
              lVar14 = plVar4[2] - lVar10 >> 2;
              plVar3 = (long *)(lVar14 * 0x1c71c71c71c71c72);
              if (plVar3 < param_3 || (long)plVar3 - (long)param_3 == 0) {
                plVar3 = param_3;
              }
              if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
                plVar3 = (long *)0x71c71c71c71c71c;
              }
              plVar5 = param_2;
              FUN_10a19a2e8();
              puVar11 = (undefined8 *)((long)plVar3 + ((long)puVar8 - lVar10));
              puVar17 = (undefined8 *)((long)puVar11 + uVar6 * 0x24);
              puVar8 = puVar11;
              do {
                *puVar8 = &UNK_101020000;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[3] = 0;
                *(undefined4 *)(puVar8 + 4) = 0;
                puVar8 = (undefined8 *)((long)puVar8 + 0x24);
              } while (puVar8 != puVar17);
              plVar13 = (long *)*plVar4;
              lVar14 = (long)puVar11 - (plVar4[1] - (long)plVar13);
              _memcpy(lVar14);
              lVar10 = *plVar4;
              *plVar4 = lVar14;
              plVar4[1] = (long)puVar17;
              plVar4[2] = (long)plVar3 + (long)plVar5 * 0x24;
              if (lVar10 != 0) {
                __ZdlPv();
              }
            }
            else {
              puVar11 = (undefined8 *)((long)puVar8 + uVar6 * 0x24);
              do {
                *puVar8 = &UNK_101020000;
                puVar8[1] = 0;
                puVar8[2] = 0;
                puVar8[3] = 0;
                *(undefined4 *)(puVar8 + 4) = 0;
                puVar8 = (undefined8 *)((long)puVar8 + 0x24);
              } while (puVar8 != puVar11);
              plVar4[1] = (long)puVar11;
            }
            pbVar15 = (byte *)*plVar4;
            plVar3 = param_2;
            do {
              param_2 = plVar13;
              plVar13 = (long *)*plVar3;
              plVar4 = plVar13;
              FUN_10a5ff710(&cStack_154,plVar13);
              bVar1 = 0;
              if (*(short *)((long)plVar13 + 0x502) != 0) {
                bVar1 = 0x10;
              }
              *pbVar15 = bVar1 | cStack_154 << 2 | cStack_153 << 3 |
                         *(byte *)(plVar13 + 0xa0) | *(char *)((long)plVar13 + 0x501) << 1;
              pbVar15[1] = bStack_152;
              *(undefined2 *)(pbVar15 + 2) = *(undefined2 *)((ulong)&cStack_154 | 3);
              pbVar15[4] = *(byte *)((undefined2 *)((ulong)&cStack_154 | 3) + 1);
              *(undefined8 *)(pbVar15 + 0x10) = uStack_144;
              *(undefined8 *)(pbVar15 + 8) = uStack_14c;
              *(undefined8 *)(pbVar15 + 0x18) = uStack_13c;
              *(undefined4 *)(pbVar15 + 0x20) = uStack_134;
              pbVar15 = pbVar15 + 0x24;
              param_3 = (long *)((long)param_3 + -1);
              plVar13 = param_2;
              plVar3 = plVar3 + 1;
            } while (param_3 != (long *)0x0);
LAB_10a19a2b4:
            auVar21._8_8_ = param_2;
            auVar21._0_8_ = plVar4;
            return auVar21;
          }
          uVar7 = plVar4[2] - lVar10;
          plVar12 = (long *)((long)uVar7 >> 3);
          if (plVar12 <= param_3) {
            plVar12 = param_3;
          }
          if (0x7fffffffffffffef < uVar7) {
            plVar12 = (long *)0xfffffffffffffff;
          }
          plVar16 = param_2;
          FUN_10a19a098();
          lVar10 = (long)plVar12 + ((long)plVar13 - lVar10);
          _bzero(lVar10,uVar6 * 0x10);
          plVar3 = (long *)*plVar4;
          lVar14 = lVar10 - (plVar4[1] - (long)plVar3);
          _memcpy(lVar14);
          plVar5 = (long *)*plVar4;
          *plVar4 = lVar14;
          plVar4[1] = lVar10 + uVar6 * 0x10;
          plVar4[2] = (long)(plVar12 + (long)plVar16 * 2);
          if (plVar5 != (long *)0x0) {
            __ZdlPv();
          }
        }
        else {
          plVar3 = (long *)(uVar6 * 0x10);
          plVar5 = plVar13;
          _bzero(plVar13,plVar3);
          plVar4[1] = (long)(plVar13 + uVar6 * 2);
        }
      }
      else {
        if (param_3 < plVar3) {
          plVar4[1] = lVar10 + (long)param_3 * 0x10;
        }
        plVar5 = plVar4;
        plVar3 = param_2;
        if (param_3 == (long *)0x0) goto LAB_10a19a06c;
      }
      puVar8 = (undefined8 *)(*plVar4 + 8);
      plVar13 = param_2;
      do {
        lVar10 = *plVar13;
        *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(lVar10 + 0x518);
        *puVar8 = *(undefined8 *)(lVar10 + 0x538);
        param_3 = (long *)((long)param_3 + -1);
        plVar4 = plVar5;
        param_2 = plVar3;
        puVar8 = puVar8 + 2;
        plVar13 = plVar13 + 1;
      } while (param_3 != (long *)0x0);
LAB_10a19a06c:
      auVar19._8_8_ = param_2;
      auVar19._0_8_ = plVar4;
      return auVar19;
    }
    uVar6 = param_1[2] - (long)plVar12;
    plVar9 = (long *)(uVar6 * 2);
    if (plVar9 < param_3 || (long)plVar9 - (long)param_3 == 0) {
      plVar9 = param_3;
    }
    if (0x3ffffffffffffffe < uVar6) {
      plVar9 = (long *)0x7fffffffffffffff;
    }
    plVar13 = plVar9;
    __Znwm();
    _bzero((long)plVar13 + (long)plVar16,plVar4);
    plVar3 = plVar13;
    plVar4 = plVar12;
    _memcpy(plVar13,plVar12,plVar16);
    *param_1 = plVar13;
    param_1[1] = (long)plVar13 + (long)param_3;
    param_1[2] = (long)plVar13 + (long)plVar9;
    if (plVar12 != (long *)0x0) {
      __ZdlPv(plVar12);
      plVar3 = plVar12;
      plVar13 = (long *)*param_1;
    }
  }
  else {
    lVar10 = (long)plVar3 + (long)plVar4;
    _bzero(plVar3,plVar4);
    param_1[1] = lVar10;
  }
  do {
    *(undefined1 *)plVar13 = *(undefined1 *)(*plVar5 + 0x548);
    param_3 = (long *)((long)param_3 + -1);
    param_2 = plVar4;
    plVar5 = plVar5 + 1;
    plVar13 = (long *)((long)plVar13 + 1);
  } while (param_3 != (long *)0x0);
LAB_10a199f30:
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = plVar3;
  return auVar18;
}



/* Entry: 10a199f50; end: 10a199f63;  */

undefined1  [16] FUN_10a199f50(undefined8 param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char cStack_f4;
  char cStack_f3;
  byte bStack_f2;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  
  plVar3 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  lVar11 = *plVar3;
  plVar13 = (long *)plVar3[1];
  uVar9 = (long)plVar13 - lVar11 >> 4;
  if (uVar9 < param_3) {
    uVar9 = param_3 - uVar9;
    if ((ulong)(plVar3[2] - (long)plVar13 >> 4) < uVar9) {
      if (param_3 >> 0x3c != 0) {
        FUN_10a19a084();
        plVar3 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if ((ulong)plVar3 >> 0x3c == 0) {
          lVar11 = (long)plVar3 << 4;
          __Znwm(lVar11);
          auVar18._8_8_ = plVar3;
          auVar18._0_8_ = lVar11;
          return auVar18;
        }
        func_0x000109ffded8();
        lVar11 = *plVar3;
        puVar8 = (undefined8 *)plVar3[1];
        lVar14 = (long)puVar8 - lVar11 >> 2;
        bVar2 = param_3 < (ulong)(lVar14 * -0x71c71c71c71c71c7);
        uVar9 = param_3 + lVar14 * 0x71c71c71c71c71c7;
        plVar13 = param_2;
        if (bVar2 || uVar9 == 0) {
          if (bVar2) {
            plVar3[1] = lVar11 + param_3 * 0x24;
          }
          if (param_3 == 0) goto LAB_10a19a2b4;
        }
        else if ((ulong)((plVar3[2] - (long)puVar8 >> 2) * -0x71c71c71c71c71c7) < uVar9) {
          if (0x71c71c71c71c71c < param_3) {
            FUN_10a19a2d4();
            plVar3 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((long *)0x71c71c71c71c71c < plVar3) {
              func_0x000109ffded8();
              lVar11 = *plVar3;
              *plVar3 = 0;
              if (lVar11 != 0) {
                func_0x00010a193298();
                __ZdlPv();
              }
              auVar21._8_8_ = param_2;
              auVar21._0_8_ = plVar3;
              return auVar21;
            }
            lVar11 = (long)plVar3 * 0x24;
            __Znwm(lVar11);
            auVar20._8_8_ = plVar3;
            auVar20._0_8_ = lVar11;
            return auVar20;
          }
          lVar14 = plVar3[2] - lVar11 >> 2;
          uVar10 = lVar14 * 0x1c71c71c71c71c72;
          if (uVar10 < param_3 || uVar10 - param_3 == 0) {
            uVar10 = param_3;
          }
          if (0x38e38e38e38e38d < (ulong)(lVar14 * -0x71c71c71c71c71c7)) {
            uVar10 = 0x71c71c71c71c71c;
          }
          plVar6 = param_2;
          FUN_10a19a2e8();
          puVar12 = (undefined8 *)(uVar10 + ((long)puVar8 - lVar11));
          puVar16 = (undefined8 *)((long)puVar12 + uVar9 * 0x24);
          puVar8 = puVar12;
          do {
            *puVar8 = &UNK_101020000;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            puVar8 = (undefined8 *)((long)puVar8 + 0x24);
          } while (puVar8 != puVar16);
          plVar13 = (long *)*plVar3;
          lVar14 = (long)puVar12 - (plVar3[1] - (long)plVar13);
          _memcpy(lVar14);
          lVar11 = *plVar3;
          *plVar3 = lVar14;
          plVar3[1] = (long)puVar16;
          plVar3[2] = uVar10 + (long)plVar6 * 0x24;
          if (lVar11 != 0) {
            __ZdlPv();
          }
        }
        else {
          puVar12 = (undefined8 *)((long)puVar8 + uVar9 * 0x24);
          do {
            *puVar8 = &UNK_101020000;
            puVar8[1] = 0;
            puVar8[2] = 0;
            puVar8[3] = 0;
            *(undefined4 *)(puVar8 + 4) = 0;
            puVar8 = (undefined8 *)((long)puVar8 + 0x24);
          } while (puVar8 != puVar12);
          plVar3[1] = (long)puVar12;
        }
        pbVar15 = (byte *)*plVar3;
        plVar6 = param_2;
        do {
          param_2 = plVar13;
          plVar13 = (long *)*plVar6;
          plVar3 = plVar13;
          FUN_10a5ff710(&cStack_f4,plVar13);
          bVar1 = 0;
          if (*(short *)((long)plVar13 + 0x502) != 0) {
            bVar1 = 0x10;
          }
          *pbVar15 = bVar1 | cStack_f4 << 2 | cStack_f3 << 3 |
                     *(byte *)(plVar13 + 0xa0) | *(char *)((long)plVar13 + 0x501) << 1;
          pbVar15[1] = bStack_f2;
          *(undefined2 *)(pbVar15 + 2) = *(undefined2 *)((ulong)&cStack_f4 | 3);
          pbVar15[4] = *(byte *)((undefined2 *)((ulong)&cStack_f4 | 3) + 1);
          *(undefined8 *)(pbVar15 + 0x10) = uStack_e4;
          *(undefined8 *)(pbVar15 + 8) = uStack_ec;
          *(undefined8 *)(pbVar15 + 0x18) = uStack_dc;
          *(undefined4 *)(pbVar15 + 0x20) = uStack_d4;
          pbVar15 = pbVar15 + 0x24;
          param_3 = param_3 - 1;
          plVar13 = param_2;
          plVar6 = plVar6 + 1;
        } while (param_3 != 0);
LAB_10a19a2b4:
        auVar19._8_8_ = param_2;
        auVar19._0_8_ = plVar3;
        return auVar19;
      }
      uVar7 = plVar3[2] - lVar11;
      uVar10 = (long)uVar7 >> 3;
      if (uVar10 <= param_3) {
        uVar10 = param_3;
      }
      if (0x7fffffffffffffef < uVar7) {
        uVar10 = 0xfffffffffffffff;
      }
      plVar5 = param_2;
      FUN_10a19a098();
      lVar11 = uVar10 + ((long)plVar13 - lVar11);
      _bzero(lVar11,uVar9 * 0x10);
      plVar6 = (long *)*plVar3;
      lVar14 = lVar11 - (plVar3[1] - (long)plVar6);
      _memcpy(lVar14);
      plVar4 = (long *)*plVar3;
      *plVar3 = lVar14;
      plVar3[1] = lVar11 + uVar9 * 0x10;
      plVar3[2] = uVar10 + (long)plVar5 * 0x10;
      if (plVar4 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      plVar6 = (long *)(uVar9 * 0x10);
      plVar4 = plVar13;
      _bzero(plVar13,plVar6);
      plVar3[1] = (long)(plVar13 + uVar9 * 2);
    }
  }
  else {
    if (param_3 < uVar9) {
      plVar3[1] = lVar11 + param_3 * 0x10;
    }
    plVar4 = plVar3;
    plVar6 = param_2;
    if (param_3 == 0) goto LAB_10a19a06c;
  }
  puVar8 = (undefined8 *)(*plVar3 + 8);
  plVar13 = param_2;
  do {
    lVar11 = *plVar13;
    *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(lVar11 + 0x518);
    *puVar8 = *(undefined8 *)(lVar11 + 0x538);
    param_3 = param_3 - 1;
    plVar3 = plVar4;
    param_2 = plVar6;
    puVar8 = puVar8 + 2;
    plVar13 = plVar13 + 1;
  } while (param_3 != 0);
LAB_10a19a06c:
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = plVar3;
  return auVar17;
}



/* Entry: 10a199f64; end: 10a19a083;  */

undefined1  [16] FUN_10a199f64(long *param_1,long *param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char cStack_e4;
  char cStack_e3;
  byte bStack_e2;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  
  lVar10 = *param_1;
  plVar4 = (long *)param_1[1];
  uVar8 = (long)plVar4 - lVar10 >> 4;
  if (uVar8 < param_3) {
    uVar8 = param_3 - uVar8;
    if ((ulong)(param_1[2] - (long)plVar4 >> 4) < uVar8) {
      if (param_3 >> 0x3c != 0) {
        FUN_10a19a084();
        plVar4 = (long *)&UNK_10f6403f7;
        FUN_109ffde64();
        if ((ulong)plVar4 >> 0x3c == 0) {
          lVar10 = (long)plVar4 << 4;
          __Znwm(lVar10);
          auVar17._8_8_ = plVar4;
          auVar17._0_8_ = lVar10;
          return auVar17;
        }
        func_0x000109ffded8();
        lVar10 = *plVar4;
        puVar7 = (undefined8 *)plVar4[1];
        lVar13 = (long)puVar7 - lVar10 >> 2;
        bVar2 = param_3 < (ulong)(lVar13 * -0x71c71c71c71c71c7);
        uVar8 = param_3 + lVar13 * 0x71c71c71c71c71c7;
        plVar12 = param_2;
        if (bVar2 || uVar8 == 0) {
          if (bVar2) {
            plVar4[1] = lVar10 + param_3 * 0x24;
          }
          if (param_3 == 0) goto LAB_10a19a2b4;
        }
        else if ((ulong)((plVar4[2] - (long)puVar7 >> 2) * -0x71c71c71c71c71c7) < uVar8) {
          if (0x71c71c71c71c71c < param_3) {
            FUN_10a19a2d4();
            plVar4 = (long *)&UNK_10f6403f7;
            FUN_109ffde64();
            if ((long *)0x71c71c71c71c71c < plVar4) {
              func_0x000109ffded8();
              lVar10 = *plVar4;
              *plVar4 = 0;
              if (lVar10 != 0) {
                func_0x00010a193298();
                __ZdlPv();
              }
              auVar20._8_8_ = param_2;
              auVar20._0_8_ = plVar4;
              return auVar20;
            }
            lVar10 = (long)plVar4 * 0x24;
            __Znwm(lVar10);
            auVar19._8_8_ = plVar4;
            auVar19._0_8_ = lVar10;
            return auVar19;
          }
          lVar13 = plVar4[2] - lVar10 >> 2;
          uVar9 = lVar13 * 0x1c71c71c71c71c72;
          if (uVar9 < param_3 || uVar9 - param_3 == 0) {
            uVar9 = param_3;
          }
          if (0x38e38e38e38e38d < (ulong)(lVar13 * -0x71c71c71c71c71c7)) {
            uVar9 = 0x71c71c71c71c71c;
          }
          plVar3 = param_2;
          FUN_10a19a2e8();
          puVar11 = (undefined8 *)(uVar9 + ((long)puVar7 - lVar10));
          puVar15 = (undefined8 *)((long)puVar11 + uVar8 * 0x24);
          puVar7 = puVar11;
          do {
            *puVar7 = &UNK_101020000;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
            puVar7 = (undefined8 *)((long)puVar7 + 0x24);
          } while (puVar7 != puVar15);
          plVar12 = (long *)*plVar4;
          lVar13 = (long)puVar11 - (plVar4[1] - (long)plVar12);
          _memcpy(lVar13);
          lVar10 = *plVar4;
          *plVar4 = lVar13;
          plVar4[1] = (long)puVar15;
          plVar4[2] = uVar9 + (long)plVar3 * 0x24;
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        else {
          puVar11 = (undefined8 *)((long)puVar7 + uVar8 * 0x24);
          do {
            *puVar7 = &UNK_101020000;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[3] = 0;
            *(undefined4 *)(puVar7 + 4) = 0;
            puVar7 = (undefined8 *)((long)puVar7 + 0x24);
          } while (puVar7 != puVar11);
          plVar4[1] = (long)puVar11;
        }
        pbVar14 = (byte *)*plVar4;
        plVar3 = param_2;
        do {
          param_2 = plVar12;
          plVar12 = (long *)*plVar3;
          plVar4 = plVar12;
          FUN_10a5ff710(&cStack_e4,plVar12);
          bVar1 = 0;
          if (*(short *)((long)plVar12 + 0x502) != 0) {
            bVar1 = 0x10;
          }
          *pbVar14 = bVar1 | cStack_e4 << 2 | cStack_e3 << 3 |
                     *(byte *)(plVar12 + 0xa0) | *(char *)((long)plVar12 + 0x501) << 1;
          pbVar14[1] = bStack_e2;
          *(undefined2 *)(pbVar14 + 2) = *(undefined2 *)((ulong)&cStack_e4 | 3);
          pbVar14[4] = *(byte *)((undefined2 *)((ulong)&cStack_e4 | 3) + 1);
          *(undefined8 *)(pbVar14 + 0x10) = uStack_d4;
          *(undefined8 *)(pbVar14 + 8) = uStack_dc;
          *(undefined8 *)(pbVar14 + 0x18) = uStack_cc;
          *(undefined4 *)(pbVar14 + 0x20) = uStack_c4;
          pbVar14 = pbVar14 + 0x24;
          param_3 = param_3 - 1;
          plVar12 = param_2;
          plVar3 = plVar3 + 1;
        } while (param_3 != 0);
LAB_10a19a2b4:
        auVar18._8_8_ = param_2;
        auVar18._0_8_ = plVar4;
        return auVar18;
      }
      uVar6 = param_1[2] - lVar10;
      uVar9 = (long)uVar6 >> 3;
      if (uVar9 <= param_3) {
        uVar9 = param_3;
      }
      if (0x7fffffffffffffef < uVar6) {
        uVar9 = 0xfffffffffffffff;
      }
      plVar5 = param_2;
      FUN_10a19a098();
      lVar10 = uVar9 + ((long)plVar4 - lVar10);
      _bzero(lVar10,uVar8 * 0x10);
      plVar12 = (long *)*param_1;
      lVar13 = lVar10 - (param_1[1] - (long)plVar12);
      _memcpy(lVar13);
      plVar3 = (long *)*param_1;
      *param_1 = lVar13;
      param_1[1] = lVar10 + uVar8 * 0x10;
      param_1[2] = uVar9 + (long)plVar5 * 0x10;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      plVar12 = (long *)(uVar8 * 0x10);
      plVar3 = plVar4;
      _bzero(plVar4,plVar12);
      param_1[1] = (long)(plVar4 + uVar8 * 2);
    }
  }
  else {
    if (param_3 < uVar8) {
      param_1[1] = lVar10 + param_3 * 0x10;
    }
    plVar3 = param_1;
    plVar12 = param_2;
    if (param_3 == 0) goto LAB_10a19a06c;
  }
  puVar7 = (undefined8 *)(*param_1 + 8);
  plVar4 = param_2;
  do {
    lVar10 = *plVar4;
    *(undefined1 *)(puVar7 + -1) = *(undefined1 *)(lVar10 + 0x518);
    *puVar7 = *(undefined8 *)(lVar10 + 0x538);
    param_3 = param_3 - 1;
    param_1 = plVar3;
    param_2 = plVar12;
    puVar7 = puVar7 + 2;
    plVar4 = plVar4 + 1;
  } while (param_3 != 0);
LAB_10a19a06c:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = param_1;
  return auVar16;
}



/* Entry: 10a19a084; end: 10a19a097;  */

undefined1  [16] FUN_10a19a084(undefined8 param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cStack_a4;
  char cStack_a3;
  byte bStack_a2;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  
  plVar4 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if ((ulong)plVar4 >> 0x3c == 0) {
    lVar5 = (long)plVar4 << 4;
    __Znwm(lVar5);
    auVar15._8_8_ = plVar4;
    auVar15._0_8_ = lVar5;
    return auVar15;
  }
  func_0x000109ffded8();
  lVar5 = *plVar4;
  puVar8 = (undefined8 *)plVar4[1];
  lVar11 = (long)puVar8 - lVar5 >> 2;
  bVar3 = param_3 < (ulong)(lVar11 * -0x71c71c71c71c71c7);
  uVar2 = param_3 + lVar11 * 0x71c71c71c71c71c7;
  puVar7 = param_2;
  if (bVar3 || uVar2 == 0) {
    if (bVar3) {
      plVar4[1] = lVar5 + param_3 * 0x24;
    }
    if (param_3 == 0) goto LAB_10a19a2b4;
  }
  else if ((ulong)((plVar4[2] - (long)puVar8 >> 2) * -0x71c71c71c71c71c7) < uVar2) {
    if (0x71c71c71c71c71c < param_3) {
      FUN_10a19a2d4();
      plVar4 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      if ((long *)0x71c71c71c71c71c < plVar4) {
        func_0x000109ffded8();
        lVar5 = *plVar4;
        *plVar4 = 0;
        if (lVar5 != 0) {
          func_0x00010a193298();
          __ZdlPv();
        }
        auVar18._8_8_ = param_2;
        auVar18._0_8_ = plVar4;
        return auVar18;
      }
      lVar5 = (long)plVar4 * 0x24;
      __Znwm(lVar5);
      auVar17._8_8_ = plVar4;
      auVar17._0_8_ = lVar5;
      return auVar17;
    }
    lVar11 = plVar4[2] - lVar5 >> 2;
    uVar9 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar9 < param_3 || uVar9 - param_3 == 0) {
      uVar9 = param_3;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
      uVar9 = 0x71c71c71c71c71c;
    }
    puVar6 = param_2;
    FUN_10a19a2e8();
    puVar10 = (undefined8 *)(uVar9 + ((long)puVar8 - lVar5));
    puVar14 = (undefined8 *)((long)puVar10 + uVar2 * 0x24);
    puVar8 = puVar10;
    do {
      *puVar8 = &UNK_101020000;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      puVar8 = (undefined8 *)((long)puVar8 + 0x24);
    } while (puVar8 != puVar14);
    puVar7 = (undefined8 *)*plVar4;
    lVar11 = (long)puVar10 - (plVar4[1] - (long)puVar7);
    _memcpy(lVar11);
    lVar5 = *plVar4;
    *plVar4 = lVar11;
    plVar4[1] = (long)puVar14;
    plVar4[2] = uVar9 + (long)puVar6 * 0x24;
    if (lVar5 != 0) {
      __ZdlPv();
    }
  }
  else {
    puVar10 = (undefined8 *)((long)puVar8 + uVar2 * 0x24);
    do {
      *puVar8 = &UNK_101020000;
      puVar8[1] = 0;
      puVar8[2] = 0;
      puVar8[3] = 0;
      *(undefined4 *)(puVar8 + 4) = 0;
      puVar8 = (undefined8 *)((long)puVar8 + 0x24);
    } while (puVar8 != puVar10);
    plVar4[1] = (long)puVar10;
  }
  pbVar13 = (byte *)*plVar4;
  puVar8 = param_2;
  do {
    param_2 = puVar7;
    plVar12 = (long *)*puVar8;
    plVar4 = plVar12;
    FUN_10a5ff710(&cStack_a4,plVar12);
    bVar1 = 0;
    if (*(short *)((long)plVar12 + 0x502) != 0) {
      bVar1 = 0x10;
    }
    *pbVar13 = bVar1 | cStack_a4 << 2 | cStack_a3 << 3 |
               *(byte *)(plVar12 + 0xa0) | *(char *)((long)plVar12 + 0x501) << 1;
    pbVar13[1] = bStack_a2;
    *(undefined2 *)(pbVar13 + 2) = *(undefined2 *)((ulong)&cStack_a4 | 3);
    pbVar13[4] = *(byte *)((undefined2 *)((ulong)&cStack_a4 | 3) + 1);
    *(undefined8 *)(pbVar13 + 0x10) = uStack_94;
    *(undefined8 *)(pbVar13 + 8) = uStack_9c;
    *(undefined8 *)(pbVar13 + 0x18) = uStack_8c;
    *(undefined4 *)(pbVar13 + 0x20) = uStack_84;
    pbVar13 = pbVar13 + 0x24;
    param_3 = param_3 - 1;
    puVar7 = param_2;
    puVar8 = puVar8 + 1;
  } while (param_3 != 0);
LAB_10a19a2b4:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = plVar4;
  return auVar16;
}



/* Entry: 10a19a098; end: 10a19a0cb;  */

undefined1  [16] FUN_10a19a098(long *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cStack_94;
  char cStack_93;
  byte bStack_92;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined4 uStack_74;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar4 = (long)param_1 << 4;
    __Znwm(lVar4);
    auVar14._8_8_ = param_1;
    auVar14._0_8_ = lVar4;
    return auVar14;
  }
  func_0x000109ffded8();
  lVar4 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar7 - lVar4 >> 2;
  bVar3 = param_3 < (ulong)(lVar10 * -0x71c71c71c71c71c7);
  uVar2 = param_3 + lVar10 * 0x71c71c71c71c71c7;
  puVar6 = param_2;
  if (bVar3 || uVar2 == 0) {
    if (bVar3) {
      param_1[1] = lVar4 + param_3 * 0x24;
    }
    if (param_3 == 0) goto LAB_10a19a2b4;
  }
  else if ((ulong)((param_1[2] - (long)puVar7 >> 2) * -0x71c71c71c71c71c7) < uVar2) {
    if (0x71c71c71c71c71c < param_3) {
      FUN_10a19a2d4();
      plVar11 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      if ((long *)0x71c71c71c71c71c < plVar11) {
        func_0x000109ffded8();
        lVar4 = *plVar11;
        *plVar11 = 0;
        if (lVar4 != 0) {
          func_0x00010a193298();
          __ZdlPv();
        }
        auVar17._8_8_ = param_2;
        auVar17._0_8_ = plVar11;
        return auVar17;
      }
      lVar4 = (long)plVar11 * 0x24;
      __Znwm(lVar4);
      auVar16._8_8_ = plVar11;
      auVar16._0_8_ = lVar4;
      return auVar16;
    }
    lVar10 = param_1[2] - lVar4 >> 2;
    uVar8 = lVar10 * 0x1c71c71c71c71c72;
    if (uVar8 < param_3 || uVar8 - param_3 == 0) {
      uVar8 = param_3;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x71c71c71c71c71c;
    }
    puVar5 = param_2;
    FUN_10a19a2e8();
    puVar9 = (undefined8 *)(uVar8 + ((long)puVar7 - lVar4));
    puVar13 = (undefined8 *)((long)puVar9 + uVar2 * 0x24);
    puVar7 = puVar9;
    do {
      *puVar7 = &UNK_101020000;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
    } while (puVar7 != puVar13);
    puVar6 = (undefined8 *)*param_1;
    lVar10 = (long)puVar9 - (param_1[1] - (long)puVar6);
    _memcpy(lVar10);
    lVar4 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar13;
    param_1[2] = uVar8 + (long)puVar5 * 0x24;
    if (lVar4 != 0) {
      __ZdlPv();
    }
  }
  else {
    puVar9 = (undefined8 *)((long)puVar7 + uVar2 * 0x24);
    do {
      *puVar7 = &UNK_101020000;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
    } while (puVar7 != puVar9);
    param_1[1] = (long)puVar9;
  }
  pbVar12 = (byte *)*param_1;
  puVar7 = param_2;
  do {
    param_2 = puVar6;
    plVar11 = (long *)*puVar7;
    param_1 = plVar11;
    FUN_10a5ff710(&cStack_94,plVar11);
    bVar1 = 0;
    if (*(short *)((long)plVar11 + 0x502) != 0) {
      bVar1 = 0x10;
    }
    *pbVar12 = bVar1 | cStack_94 << 2 | cStack_93 << 3 |
               *(byte *)(plVar11 + 0xa0) | *(char *)((long)plVar11 + 0x501) << 1;
    pbVar12[1] = bStack_92;
    *(undefined2 *)(pbVar12 + 2) = *(undefined2 *)((ulong)&cStack_94 | 3);
    pbVar12[4] = *(byte *)((undefined2 *)((ulong)&cStack_94 | 3) + 1);
    *(undefined8 *)(pbVar12 + 0x10) = uStack_84;
    *(undefined8 *)(pbVar12 + 8) = uStack_8c;
    *(undefined8 *)(pbVar12 + 0x18) = uStack_7c;
    *(undefined4 *)(pbVar12 + 0x20) = uStack_74;
    pbVar12 = pbVar12 + 0x24;
    param_3 = param_3 - 1;
    puVar6 = param_2;
    puVar7 = puVar7 + 1;
  } while (param_3 != 0);
LAB_10a19a2b4:
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Entry: 10a19a0cc; end: 10a19a2d3;  */

undefined1  [16] FUN_10a19a0cc(long *param_1,undefined8 *param_2,ulong param_3)

{
  byte bVar1;
  ulong uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char cStack_74;
  char cStack_73;
  byte bStack_72;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  
  lVar4 = *param_1;
  puVar7 = (undefined8 *)param_1[1];
  lVar10 = (long)puVar7 - lVar4 >> 2;
  bVar3 = param_3 < (ulong)(lVar10 * -0x71c71c71c71c71c7);
  uVar2 = param_3 + lVar10 * 0x71c71c71c71c71c7;
  puVar6 = param_2;
  if (bVar3 || uVar2 == 0) {
    if (bVar3) {
      param_1[1] = lVar4 + param_3 * 0x24;
    }
    if (param_3 == 0) goto LAB_10a19a2b4;
  }
  else if ((ulong)((param_1[2] - (long)puVar7 >> 2) * -0x71c71c71c71c71c7) < uVar2) {
    if (0x71c71c71c71c71c < param_3) {
      FUN_10a19a2d4();
      plVar11 = (long *)&UNK_10f6403f7;
      FUN_109ffde64();
      if ((long *)0x71c71c71c71c71c < plVar11) {
        func_0x000109ffded8();
        lVar4 = *plVar11;
        *plVar11 = 0;
        if (lVar4 != 0) {
          func_0x00010a193298();
          __ZdlPv();
        }
        auVar16._8_8_ = param_2;
        auVar16._0_8_ = plVar11;
        return auVar16;
      }
      lVar4 = (long)plVar11 * 0x24;
      __Znwm(lVar4);
      auVar15._8_8_ = plVar11;
      auVar15._0_8_ = lVar4;
      return auVar15;
    }
    lVar10 = param_1[2] - lVar4 >> 2;
    uVar8 = lVar10 * 0x1c71c71c71c71c72;
    if (uVar8 < param_3 || uVar8 - param_3 == 0) {
      uVar8 = param_3;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar10 * -0x71c71c71c71c71c7)) {
      uVar8 = 0x71c71c71c71c71c;
    }
    puVar5 = param_2;
    FUN_10a19a2e8();
    puVar9 = (undefined8 *)(uVar8 + ((long)puVar7 - lVar4));
    puVar13 = (undefined8 *)((long)puVar9 + uVar2 * 0x24);
    puVar7 = puVar9;
    do {
      *puVar7 = &UNK_101020000;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
    } while (puVar7 != puVar13);
    puVar6 = (undefined8 *)*param_1;
    lVar10 = (long)puVar9 - (param_1[1] - (long)puVar6);
    _memcpy(lVar10);
    lVar4 = *param_1;
    *param_1 = lVar10;
    param_1[1] = (long)puVar13;
    param_1[2] = uVar8 + (long)puVar5 * 0x24;
    if (lVar4 != 0) {
      __ZdlPv();
    }
  }
  else {
    puVar9 = (undefined8 *)((long)puVar7 + uVar2 * 0x24);
    do {
      *puVar7 = &UNK_101020000;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7 = (undefined8 *)((long)puVar7 + 0x24);
    } while (puVar7 != puVar9);
    param_1[1] = (long)puVar9;
  }
  pbVar12 = (byte *)*param_1;
  puVar7 = param_2;
  do {
    param_2 = puVar6;
    plVar11 = (long *)*puVar7;
    param_1 = plVar11;
    FUN_10a5ff710(&cStack_74,plVar11);
    bVar1 = 0;
    if (*(short *)((long)plVar11 + 0x502) != 0) {
      bVar1 = 0x10;
    }
    *pbVar12 = bVar1 | cStack_74 << 2 | cStack_73 << 3 |
               *(byte *)(plVar11 + 0xa0) | *(char *)((long)plVar11 + 0x501) << 1;
    pbVar12[1] = bStack_72;
    *(undefined2 *)(pbVar12 + 2) = *(undefined2 *)((ulong)&cStack_74 | 3);
    pbVar12[4] = *(byte *)((undefined2 *)((ulong)&cStack_74 | 3) + 1);
    *(undefined8 *)(pbVar12 + 0x10) = uStack_64;
    *(undefined8 *)(pbVar12 + 8) = uStack_6c;
    *(undefined8 *)(pbVar12 + 0x18) = uStack_5c;
    *(undefined4 *)(pbVar12 + 0x20) = uStack_54;
    pbVar12 = pbVar12 + 0x24;
    param_3 = param_3 - 1;
    puVar6 = param_2;
    puVar7 = puVar7 + 1;
  } while (param_3 != 0);
LAB_10a19a2b4:
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = param_1;
  return auVar14;
}



/* Entry: 10a19a2d4; end: 10a19a2e7;  */

undefined1  [16] FUN_10a19a2d4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  plVar1 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (plVar1 < (long *)0x71c71c71c71c71d) {
    lVar2 = (long)plVar1 * 0x24;
    __Znwm(lVar2);
    auVar3._8_8_ = plVar1;
    auVar3._0_8_ = lVar2;
    return auVar3;
  }
  func_0x000109ffded8();
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    func_0x00010a193298();
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = plVar1;
  return auVar4;
}



/* Entry: 10a19a2e8; end: 10a19a397;  */

undefined1  [16] FUN_10a19a2e8(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 < (long *)0x71c71c71c71c71d) {
    lVar1 = (long)param_1 * 0x24;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  func_0x000109ffded8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    func_0x00010a193298();
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10a19a398; end: 10a19a6f7;  */

/* WARNING: Possible PIC construction at 0x00010a19a500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a19a504) */
/* WARNING: Removing unreachable block (ram,0x00010a19a518) */

void FUN_10a19a398(long *param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char cVar5;
  ulong uVar6;
  long **pplVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 **ppuVar17;
  undefined8 uVar18;
  long lStack_d0;
  long *plStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long *plStack_a0;
  undefined8 **ppuStack_98;
  undefined8 **ppuStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  pplVar7 = &plStack_a0;
  ppuVar17 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar15 = *param_1;
  lVar14 = param_1[1];
  lVar11 = lVar14 - lVar15 >> 4;
  bVar8 = param_3 < (long *)(lVar11 * -0x5555555555555555);
  uVar6 = (long)param_3 + lVar11 * 0x5555555555555555;
  if (bVar8 || uVar6 == 0) {
    if (bVar8) {
      func_0x00010a19a85c(param_1,lVar15 + (long)param_3 * 0x30);
    }
    if (param_3 == (long *)0x0) {
      return;
    }
  }
  else {
    if ((ulong)((param_1[2] - lVar14 >> 4) * -0x5555555555555555) < uVar6) {
      if (param_3 < (long *)0x555555555555556) {
        lVar11 = param_1[2] - lVar15 >> 4;
        plVar12 = (long *)(lVar11 * 0x5555555555555556);
        if (plVar12 < param_3 || (long)plVar12 - (long)param_3 == 0) {
          plVar12 = param_3;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
          plVar12 = (long *)0x555555555555555;
        }
        lVar11 = param_2;
        FUN_10a19a70c();
        lVar15 = (long)plVar12 + (lVar14 - lVar15);
        lVar14 = ((uVar6 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
        _bzero(lVar15,lVar14);
        puVar3 = (undefined8 *)*param_1;
        puVar4 = (undefined8 *)param_1[1];
        puVar2 = (undefined8 *)((long)puVar3 + (lVar15 - (long)puVar4));
        ppuStack_98 = &puStack_80;
        ppuStack_90 = &puStack_78;
        puStack_78 = puVar2;
        puVar10 = puVar3;
        plStack_a0 = param_1;
        puStack_80 = puVar2;
        if (puVar4 == puVar3) {
          uStack_88 = 1;
          func_0x00010a19a7e8(&plStack_a0);
          lVar9 = *param_1;
          *param_1 = (long)puVar2;
          param_1[1] = lVar15 + lVar14;
          param_1[2] = (long)(plVar12 + lVar11 * 6);
          if (lVar9 != 0) {
            __ZdlPv();
          }
          goto LAB_10a19a598;
        }
        do {
          uVar18 = *puVar10;
          puStack_78[1] = puVar10[1];
          *puStack_78 = uVar18;
          *puVar10 = 0;
          puVar10[1] = 0;
          puStack_78[2] = 0;
          puStack_78[3] = 0;
          puStack_78[4] = 0;
          uVar18 = puVar10[2];
          puStack_78[3] = puVar10[3];
          puStack_78[2] = uVar18;
          puStack_78[4] = puVar10[4];
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          *(undefined1 *)(puStack_78 + 5) = *(undefined1 *)(puVar10 + 5);
          puVar10 = puVar10 + 6;
          puStack_78 = puStack_78 + 6;
        } while (puVar10 != puVar4);
        uStack_88 = 1;
        puStack_70 = puVar3 + 2;
        ppuVar13 = &puStack_70;
        uVar18 = 0x10a19a504;
      }
      else {
        FUN_10a19a6f8();
        func_0x00010a19adf8(&plStack_a0);
        __Unwind_Resume(param_1);
        pcStack_a8 = FUN_10a19a6f8;
        ppuVar13 = (undefined8 **)&UNK_10f6403f7;
        ppuStack_b0 = ppuVar17;
        FUN_109ffde64();
        pplVar7 = (long **)&lStack_d0;
        pcStack_b8 = FUN_10a19a70c;
        ppuVar17 = &puStack_c0;
        lStack_d0 = param_2;
        plStack_c8 = param_1;
        if (ppuVar13 < (undefined8 **)0x555555555555556) {
          puStack_c0 = (undefined1 *)&ppuStack_b0;
          __Znwm((long)ppuVar13 * 0x30);
          return;
        }
        uVar18 = 0x10a19a750;
        puStack_c0 = (undefined1 *)&ppuStack_b0;
        func_0x000109ffded8();
        param_3 = param_1;
      }
      *(long *)((long)pplVar7 + -0x20) = param_2;
      *(long **)((long)pplVar7 + -0x18) = param_3;
      *(undefined1 ***)((long)pplVar7 + -0x10) = ppuVar17;
      *(undefined8 *)((long)pplVar7 + -8) = uVar18;
      if (**ppuVar13 != 0) {
        func_0x00010a19a790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(**ppuVar13);
        return;
      }
      return;
    }
    lVar15 = ((uVar6 * 0x30 - 0x30) / 0x30) * 0x30 + 0x30;
    _bzero(lVar14,lVar15);
    param_1[1] = lVar14 + lVar15;
  }
LAB_10a19a598:
  plVar12 = (long *)0x0;
  lVar15 = *param_1;
  do {
    lVar14 = *(long *)(param_2 + (long)plVar12 * 8);
    plVar16 = *(long **)(lVar14 + 0x638);
    ppuVar13 = *(undefined8 ***)(lVar14 + 0x640);
    if (ppuVar13 != (undefined8 **)0x0) {
      plVar1 = (long *)(ppuVar13 + 1);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar8) {
          *plVar1 = *plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar14 = lVar15 + (long)plVar12 * 0x30;
    plStack_a0 = plVar16;
    ppuStack_98 = ppuVar13;
    if (plVar16 == (long *)0x0) {
      *(undefined1 *)(lVar14 + 0x28) = 0;
      puStack_70 = (undefined8 *)0x0;
      plStack_68 = (long *)0x0;
      func_0x00010a19a938(lVar14,&puStack_70);
      plVar16 = plStack_68;
      if (plStack_68 != (long *)0x0) {
        plVar1 = plStack_68 + 1;
        do {
          lVar11 = *plVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plStack_68 + 0x10))(plStack_68);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
        }
      }
      func_0x00010a19a790((undefined8 *)(lVar14 + 0x10),*(undefined8 *)(lVar14 + 0x10));
      ppuVar13 = ppuStack_98;
    }
    else {
      *(undefined1 *)(lVar14 + 0x28) = *(undefined1 *)((long)plVar16 + 0x437);
      FUN_10a19a8c4(lVar14,plVar16[0x77],plVar16[0x78]);
      if ((long *)(lVar14 + 0x10) != plVar16 + 0x72) {
        FUN_10a19a99c();
      }
    }
    if (ppuVar13 != (undefined8 **)0x0) {
      plVar16 = (long *)(ppuVar13 + 1);
      do {
        lVar14 = *plVar16;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar8) {
          *plVar16 = lVar14 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar14 == 0) {
        (**(code **)((long)*ppuVar13 + 0x10))(ppuVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar13);
      }
    }
    plVar12 = (long *)((long)plVar12 + 1);
  } while (plVar12 != param_3);
  return;
}



/* Entry: 10a19a6f8; end: 10a19a70b;  */

void FUN_10a19a6f8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&UNK_10f6403f7;
  FUN_109ffde64();
  if (puVar1 < (undefined8 *)0x555555555555556) {
    __Znwm((long)puVar1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*puVar1 != 0) {
    FUN_10a19a790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*puVar1);
    return;
  }
  return;
}



/* Entry: 10a19a70c; end: 10a19a78f;  */

void FUN_10a19a70c(undefined8 *param_1)

{
  if (param_1 < (undefined8 *)0x555555555555556) {
    __Znwm((long)param_1 * 0x30);
    return;
  }
  func_0x000109ffded8();
  if (*(long *)*param_1 != 0) {
    FUN_10a19a790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10a19a790; end: 10a19a8c3;  */

void FUN_10a19a790(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    FUN_10a0617bc(lVar1 + -0x10);
    FUN_10a0e3194(lVar1 + -0x88);
    lVar1 = lVar1 + -0x88;
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10a19a8c4; end: 10a19a99b;  */

undefined8 * FUN_10a19a8c4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (long *)(param_3 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  *param_1 = param_2;
  param_1[1] = param_3;
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



/* Entry: 10a19a99c; end: 10a19aac7;  */

void FUN_10a19a99c(long *param_1,long param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((ulong)((param_1[2] - *param_1 >> 3) * -0xf0f0f0f0f0f0f0f) < param_4) {
    plVar1 = param_1;
    FUN_10a19aac8();
    if (0x1e1e1e1e1e1e1e1 < param_4) {
      FUN_10a19ada4();
      if (*plVar1 != 0) {
        FUN_10a19a790();
        __ZdlPv(*plVar1);
        *plVar1 = 0;
        plVar1[1] = 0;
        plVar1[2] = 0;
      }
      return;
    }
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar4 = lVar3 * -0x1e1e1e1e1e1e1e1e;
    if (uVar4 < param_4 || uVar4 - param_4 == 0) {
      uVar4 = param_4;
    }
    if (0xf0f0f0f0f0f0ef < (ulong)(lVar3 * -0xf0f0f0f0f0f0f0f)) {
      uVar4 = 0x1e1e1e1e1e1e1e1;
    }
    func_0x00010a19ab00(param_1,uVar4);
    lVar2 = param_1[1];
  }
  else {
    lVar3 = param_1[1] - *param_1;
    if (param_4 <= (ulong)((lVar3 >> 3) * -0xf0f0f0f0f0f0f0f)) {
      FUN_10a19aca0(param_2,param_3);
      lVar3 = param_1[1];
      while (lVar3 != param_2) {
        FUN_10a0617bc(lVar3 + -0x10);
        FUN_10a0e3194(lVar3 + -0x88);
        lVar3 = lVar3 + -0x88;
      }
      param_1[1] = param_2;
      return;
    }
    FUN_10a19aca0(param_2,param_2 + lVar3);
    lVar2 = param_1[1];
    param_2 = param_2 + lVar3;
  }
  plVar1 = param_1;
  func_0x00010a19ab44(param_1,param_2,param_3,lVar2);
  param_1[1] = (long)plVar1;
  return;
}



/* Entry: 10a19aac8; end: 10a19ac1f;  */

void FUN_10a19aac8(long *param_1)

{
  if (*param_1 != 0) {
    FUN_10a19a790();
    __ZdlPv(*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10a19ac20; end: 10a19ac53;  */

long FUN_10a19ac20(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10a19ac54(param_1);
  }
  return param_1;
}



/* Entry: 10a19ac54; end: 10a19ac9f;  */

void FUN_10a19ac54(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  lVar1 = **(long **)(param_1 + 0x10);
  while (lVar1 != lVar2) {
    FUN_10a0617bc(lVar1 + -0x10);
    FUN_10a0e3194(lVar1 + -0x88);
    lVar1 = lVar1 + -0x88;
  }
  return;
}



/* Entry: 10a19aca0; end: 10a19ad27;  */

long FUN_10a19aca0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x88) {
    FUN_10a19ad28(param_3,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = uVar5;
    *(undefined8 *)(param_3 + 0x28) = uVar4;
    *(undefined8 *)(param_3 + 0x20) = uVar3;
    *(undefined8 *)(param_3 + 0x38) = uVar2;
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_3 + 0x70) = *(undefined8 *)(param_1 + 0x70);
    *(undefined8 *)(param_3 + 0x58) = uVar4;
    *(undefined8 *)(param_3 + 0x50) = uVar3;
    *(undefined8 *)(param_3 + 0x68) = uVar2;
    *(undefined8 *)(param_3 + 0x60) = uVar1;
    *(undefined8 *)(param_3 + 0x48) = uVar6;
    *(undefined8 *)(param_3 + 0x40) = uVar5;
    func_0x00010a04a780(param_3 + 0x78,param_1 + 0x78);
    param_3 = param_3 + 0x88;
  }
  return param_3;
}



/* Entry: 10a19ad28; end: 10a19ada3;  */

undefined8 * FUN_10a19ad28(undefined8 *param_1,undefined8 *param_2)

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
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
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



/* Entry: 10a19ada4; end: 10a19adb7;  */

undefined1  [16] FUN_10a19ada4(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    lVar5 = param_2 * 0x88;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a19adb8; end: 10a19ae4f;  */

undefined1  [16] FUN_10a19adb8(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x1e1e1e1e1e1e1e2) {
    lVar4 = param_2 * 0x88;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a19ae50; end: 10a19af83;  */

undefined8 *
FUN_10a19ae50(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 **ppuStack_88;
  undefined8 **ppuStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_58;
  
  ppuStack_88 = &puStack_70;
  ppuStack_80 = &puStack_68;
  uStack_78 = 0;
  puStack_70 = param_4;
  uStack_90 = param_1;
  for (; puStack_68 = param_4, param_2 != param_3; param_2 = param_2 + 6) {
    lVar7 = param_2[1];
    uVar8 = *param_2;
    param_4[1] = param_2[1];
    *param_4 = uVar8;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar6 = param_4 + 2;
    *puVar6 = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    lVar7 = param_2[2];
    lVar2 = param_2[3];
    uStack_58 = 0;
    lVar5 = lVar2 - lVar7;
    puStack_60 = puVar6;
    if (lVar5 != 0) {
      func_0x00010a19ab00(puVar6,(lVar5 >> 3) * -0xf0f0f0f0f0f0f0f);
      func_0x00010a19ab44(puVar6,lVar7,lVar2,param_4[3]);
      param_4[3] = puVar6;
    }
    *(undefined1 *)(param_4 + 5) = *(undefined1 *)(param_2 + 5);
    param_4 = puStack_68 + 6;
  }
  uStack_78 = 1;
  func_0x00010a19a7e8(&uStack_90);
  return param_4;
}



/* Entry: 10a19af84; end: 10a19b017;  */

long * FUN_10a19af84(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != param_2) {
    plVar2 = param_1 + 3;
    do {
      FUN_10a19a8c4(param_3,plVar2[-3],plVar2[-2]);
      if (param_3 != plVar2 + -3) {
        FUN_10a19a99c(param_3 + 2,plVar2[-1],*plVar2,
                      (*plVar2 - plVar2[-1] >> 3) * -0xf0f0f0f0f0f0f0f);
      }
      *(char *)(param_3 + 5) = (char)plVar2[2];
      param_3 = param_3 + 6;
      plVar1 = plVar2 + 3;
      plVar2 = plVar2 + 6;
    } while (plVar1 != param_2);
  }
  return param_3;
}



/* Entry: 10a19b018; end: 10a19b48f;  */

/* WARNING: Possible PIC construction at 0x00010a19b184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010a19b1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a19b188) */
/* WARNING: Removing unreachable block (ram,0x00010a19b194) */
/* WARNING: Removing unreachable block (ram,0x00010a19b1d0) */

undefined1  [16] FUN_10a19b018(long *param_1,undefined1 *param_2,long *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulong uVar5;
  undefined1 **ppuVar6;
  bool bVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  undefined1 **ppuVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  long lStack_70;
  long *plStack_68;
  
  ppuVar6 = (undefined1 **)&uStack_80;
  ppuVar20 = (undefined1 **)&stack0xfffffffffffffff0;
  lVar18 = *param_1;
  lVar12 = param_1[1];
  lVar14 = lVar12 - lVar18 >> 5;
  bVar7 = param_3 < (long *)(lVar14 * -0x5555555555555555);
  uVar5 = (long)param_3 + lVar14 * 0x5555555555555555;
  puVar10 = param_2;
  if (bVar7 || uVar5 == 0) {
    if (bVar7) {
      lVar18 = lVar18 + (long)param_3 * 0x60;
      if (lVar12 != lVar18) {
        puVar9 = (undefined8 *)(lVar12 + -0x60);
        uVar21 = 0x10a19b1d0;
        goto SUB_10a19b4e8;
      }
      param_1[1] = lVar18;
    }
    puVar9 = (undefined8 *)param_2;
    if (param_3 == (long *)0x0) goto LAB_10a19b458;
  }
  else if ((ulong)((param_1[2] - lVar12 >> 5) * -0x5555555555555555) < uVar5) {
    if ((long *)0x2aaaaaaaaaaaaaa < param_3) {
      FUN_10a19b490();
      func_0x00010a19b808(&lStack_70);
      __Unwind_Resume(param_1);
      pcStack_88 = FUN_10a19b490;
      puVar9 = (undefined8 *)&UNK_10f6403f7;
      ppuStack_90 = ppuVar20;
      FUN_109ffde64();
      ppuVar6 = &puStack_b0;
      pcStack_98 = FUN_10a19b4a4;
      ppuVar20 = &puStack_a0;
      puStack_b0 = param_2;
      plStack_a8 = param_1;
      if (puVar9 < (undefined8 *)0x2aaaaaaaaaaaaab) {
        lVar18 = (long)puVar9 * 0x60;
        puStack_a0 = (undefined1 *)&ppuStack_90;
        __Znwm(lVar18);
        auVar24._8_8_ = puVar9;
        auVar24._0_8_ = lVar18;
        return auVar24;
      }
      uVar21 = 0x10a19b4e8;
      puStack_a0 = (undefined1 *)&ppuStack_90;
      func_0x000109ffded8();
      param_3 = param_1;
SUB_10a19b4e8:
      *(undefined1 **)((long)ppuVar6 + -0x20) = param_2;
      *(long **)((long)ppuVar6 + -0x18) = param_3;
      *(undefined1 ***)((long)ppuVar6 + -0x10) = ppuVar20;
      *(undefined8 *)((long)ppuVar6 + -8) = uVar21;
      if (puVar9[8] != 0) {
        puVar9[9] = puVar9[8];
        __ZdlPv();
      }
      func_0x00010a05248c(puVar9 + 6);
      func_0x00010a05248c(puVar9 + 4);
      FUN_10a0cfe2c(puVar9 + 2);
      *(undefined8 *)((long)ppuVar6 + -0x20) = *(undefined8 *)((long)ppuVar6 + -0x20);
      *(undefined8 *)((long)ppuVar6 + -0x18) = *(undefined8 *)((long)ppuVar6 + -0x18);
      *(undefined8 *)((long)ppuVar6 + -0x10) = *(undefined8 *)((long)ppuVar6 + -0x10);
      *(undefined8 *)((long)ppuVar6 + -8) = *(undefined8 *)((long)ppuVar6 + -8);
      plVar15 = (long *)puVar9[1];
      if (plVar15 != (long *)0x0) {
        plVar17 = plVar15 + 1;
        do {
          lVar18 = *plVar17;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar7) {
            *plVar17 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar15);
        }
      }
      auVar22._8_8_ = puVar10;
      auVar22._0_8_ = puVar9;
      return auVar22;
    }
    lVar14 = param_1[2] - lVar18 >> 5;
    plVar15 = (long *)(lVar14 * 0x5555555555555556);
    if (plVar15 < param_3 || (long)plVar15 - (long)param_3 == 0) {
      plVar15 = param_3;
    }
    if (0x155555555555554 < (ulong)(lVar14 * -0x5555555555555555)) {
      plVar15 = (long *)0x2aaaaaaaaaaaaaa;
    }
    puVar8 = param_2;
    FUN_10a19b4a4();
    lVar18 = (long)plVar15 + (lVar12 - lVar18);
    puVar16 = (undefined1 *)(((uVar5 * 0x60 - 0x60) / 0x60) * 0x60 + 0x60);
    puVar10 = puVar16;
    _bzero(lVar18,puVar16);
    puVar9 = (undefined8 *)*param_1;
    puVar2 = (undefined8 *)param_1[1];
    puVar13 = (undefined8 *)((long)puVar9 + (lVar18 - (long)puVar2));
    puVar11 = puVar9;
    if (puVar2 != puVar9) {
      do {
        uVar21 = *puVar11;
        puVar13[1] = puVar11[1];
        *puVar13 = uVar21;
        *puVar11 = 0;
        puVar11[1] = 0;
        uVar21 = puVar11[2];
        puVar13[3] = puVar11[3];
        puVar13[2] = uVar21;
        puVar11[2] = 0;
        puVar11[3] = 0;
        uVar21 = puVar11[4];
        puVar13[5] = puVar11[5];
        puVar13[4] = uVar21;
        puVar11[4] = 0;
        puVar11[5] = 0;
        uVar21 = puVar11[6];
        puVar13[7] = puVar11[7];
        puVar13[6] = uVar21;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[10] = 0;
        uVar21 = puVar11[8];
        puVar13[9] = puVar11[9];
        puVar13[8] = uVar21;
        puVar13[10] = puVar11[10];
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        uVar3 = *(undefined4 *)(puVar11 + 0xb);
        *(undefined4 *)((long)puVar13 + 0x5b) = *(undefined4 *)((long)puVar11 + 0x5b);
        *(undefined4 *)(puVar13 + 0xb) = uVar3;
        puVar11 = puVar11 + 0xc;
        puVar13 = puVar13 + 0xc;
      } while (puVar11 != puVar2);
      uVar21 = 0x10a19b188;
      ppuVar6 = (undefined1 **)&uStack_80;
      goto SUB_10a19b4e8;
    }
    *param_1 = (long)puVar13;
    param_1[1] = (long)(puVar16 + lVar18);
    param_1[2] = (long)(plVar15 + (long)puVar8 * 0xc);
    if (puVar9 != (undefined8 *)0x0) {
      __ZdlPv(puVar9);
    }
  }
  else {
    lVar18 = ((uVar5 * 0x60 - 0x60) / 0x60) * 0x60 + 0x60;
    _bzero(lVar12,lVar18);
    param_1[1] = lVar12 + lVar18;
  }
  plVar15 = (long *)0x0;
  lVar18 = *param_1;
  do {
    lVar14 = lVar18 + (long)plVar15 * 0x60;
    lVar12 = *(long *)(param_2 + (long)plVar15 * 8);
    *(undefined1 *)(lVar14 + 0x5d) = *(undefined1 *)(lVar12 + 0x6e0);
    lVar19 = *(long *)(lVar12 + 0x7a0);
    plVar17 = *(long **)(lVar12 + 0x7a8);
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lStack_70 = lVar19;
    plStack_68 = plVar17;
    if (lVar19 == 0) {
      *(undefined1 *)(lVar14 + 0x5e) = 0;
      *(undefined1 *)(lVar14 + 0x5c) = 0;
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      func_0x00010a19a938(lVar14,&uStack_80);
      plVar17 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      func_0x00010a19b5ac(lVar14 + 0x10,&uStack_80);
      plVar17 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      FUN_10a015bec(lVar14 + 0x20,&uStack_80);
      plVar17 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        }
      }
      uStack_80 = 0;
      plStack_78 = (long *)0x0;
      param_1 = (long *)(lVar14 + 0x30);
      puVar9 = &uStack_80;
      FUN_10a015bec(param_1,&uStack_80);
      plVar17 = plStack_78;
      if (plStack_78 != (long *)0x0) {
        plVar1 = plStack_78 + 1;
        do {
          lVar12 = *plVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *plVar1 = lVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
          param_1 = plVar17;
        }
      }
      *(undefined8 *)(lVar14 + 0x48) = *(undefined8 *)(lVar14 + 0x40);
      *(undefined4 *)(lVar14 + 0x58) = 0;
      plVar17 = plStack_68;
    }
    else {
      *(undefined1 *)(lVar14 + 0x5e) = *(undefined1 *)(lVar19 + 0x678);
      *(undefined1 *)(lVar14 + 0x5c) = *(undefined1 *)(lVar19 + 0x679);
      FUN_10a19a8c4(lVar14,*(undefined8 *)(lVar19 + 0x448),*(undefined8 *)(lVar19 + 0x450));
      func_0x00010a19b530(lVar14 + 0x10,lVar19 + 0x438);
      func_0x00010a04a704(lVar14 + 0x20,lVar19 + 0x470);
      puVar9 = (undefined8 *)(lVar19 + 0x480);
      func_0x00010a04a704(lVar14 + 0x30,puVar9);
      param_1 = (long *)(lVar14 + 0x40);
      if (param_1 != (long *)(lVar19 + 0x630)) {
        puVar9 = *(undefined8 **)(lVar19 + 0x630);
        FUN_10a19b610();
      }
      *(undefined4 *)(lVar14 + 0x58) = *(undefined4 *)(lVar19 + 0x648);
    }
    if (plVar17 != (long *)0x0) {
      plVar1 = plVar17 + 1;
      do {
        lVar12 = *plVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar17);
        param_1 = plVar17;
      }
    }
    plVar15 = (long *)((long)plVar15 + 1);
  } while (plVar15 != param_3);
LAB_10a19b458:
  auVar23._8_8_ = puVar9;
  auVar23._0_8_ = param_1;
  return auVar23;
}



/* Entry: 10a19b490; end: 10a19b4a3;  */

undefined1  [16] FUN_10a19b490(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (puVar4 < (undefined *)0x2aaaaaaaaaaaaab) {
    lVar5 = (long)puVar4 * 0x60;
    __Znwm(lVar5);
    auVar8._8_8_ = puVar4;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  if (*(long *)(puVar4 + 0x40) != 0) {
    *(long *)(puVar4 + 0x48) = *(long *)(puVar4 + 0x40);
    __ZdlPv();
  }
  func_0x00010a05248c(puVar4 + 0x30);
  func_0x00010a05248c(puVar4 + 0x20);
  FUN_10a0cfe2c(puVar4 + 0x10);
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = puVar4;
  return auVar7;
}



/* Entry: 10a19b4a4; end: 10a19b60f;  */

undefined1  [16] FUN_10a19b4a4(ulong param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_1 < 0x2aaaaaaaaaaaaab) {
    lVar4 = param_1 * 0x60;
    __Znwm(lVar4);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = lVar4;
    return auVar7;
  }
  func_0x000109ffded8();
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  func_0x00010a05248c(param_1 + 0x30);
  func_0x00010a05248c(param_1 + 0x20);
  FUN_10a0cfe2c(param_1 + 0x10);
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
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Entry: 10a19b610; end: 10a19b767;  */

undefined1  [16] FUN_10a19b610(undefined8 *param_1,ulong param_2,long param_3,ulong param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  lVar7 = param_1[2];
  puVar10 = (undefined8 *)*param_1;
  puVar4 = param_1;
  if ((ulong)((lVar7 - (long)puVar10 >> 4) * -0x5555555555555555) < param_4) {
    puVar11 = param_1;
    uVar8 = param_2;
    if (puVar10 != (undefined8 *)0x0) {
      param_1[1] = puVar10;
      __ZdlPv();
      lVar7 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      puVar11 = puVar10;
    }
    if (0x555555555555555 < param_4) {
      FUN_10a19b7b0();
      if (uVar8 < 0x555555555555556) {
        puVar4 = puVar11;
        FUN_10a19b7c4();
        *puVar11 = puVar4;
        puVar11[1] = puVar4;
        puVar11[2] = puVar4 + uVar8 * 6;
        auVar13._8_8_ = uVar8;
        auVar13._0_8_ = puVar4;
        return auVar13;
      }
      FUN_10a19b7b0();
      puVar5 = &UNK_10f6403f7;
      FUN_109ffde64();
      if (uVar8 < 0x555555555555556) {
        lVar7 = uVar8 * 0x30;
        __Znwm(lVar7);
        auVar14._8_8_ = uVar8;
        auVar14._0_8_ = lVar7;
        return auVar14;
      }
      func_0x000109ffded8();
      plVar9 = *(long **)(puVar5 + 8);
      if (plVar9 != (long *)0x0) {
        plVar1 = plVar9 + 1;
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      auVar15._8_8_ = uVar8;
      auVar15._0_8_ = puVar5;
      return auVar15;
    }
    uVar8 = (lVar7 >> 4) * 0x5555555555555556;
    if (uVar8 < param_4 || uVar8 - param_4 == 0) {
      uVar8 = param_4;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)((lVar7 >> 4) * -0x5555555555555555)) {
      uVar8 = 0x555555555555555;
    }
    FUN_10a19b768(param_1,uVar8);
    puVar10 = (undefined8 *)param_1[1];
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      puVar4 = puVar10;
      _memmove(puVar10,param_2,param_3);
      uVar8 = param_2;
    }
    param_3 = (long)puVar10 + param_3;
  }
  else {
    puVar11 = (undefined8 *)param_1[1];
    if ((ulong)(((long)puVar11 - (long)puVar10 >> 4) * -0x5555555555555555) < param_4) {
      uVar6 = param_2 + ((long)puVar11 - (long)puVar10);
      if (puVar11 != puVar10) {
        _memmove(puVar10,param_2);
        puVar11 = (undefined8 *)param_1[1];
        puVar4 = puVar10;
      }
      param_3 = param_3 - uVar6;
      uVar8 = param_2;
      if (param_3 != 0) {
        puVar4 = puVar11;
        _memmove(puVar11,uVar6,param_3);
        uVar8 = uVar6;
      }
      param_3 = (long)puVar11 + param_3;
    }
    else {
      param_3 = param_3 - param_2;
      uVar8 = param_2;
      if (param_3 != 0) {
        puVar4 = puVar10;
        _memmove(puVar10,param_2,param_3);
        uVar8 = param_2;
      }
      param_3 = (long)puVar10 + param_3;
    }
  }
  param_1[1] = param_3;
  auVar12._8_8_ = uVar8;
  auVar12._0_8_ = puVar4;
  return auVar12;
}



/* Entry: 10a19b768; end: 10a19b7af;  */

undefined1  [16] FUN_10a19b768(long *param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (param_2 < 0x555555555555556) {
    plVar6 = param_1;
    FUN_10a19b7c4();
    *param_1 = (long)plVar6;
    param_1[1] = (long)plVar6;
    param_1[2] = (long)(plVar6 + param_2 * 6);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = plVar6;
    return auVar7;
  }
  FUN_10a19b7b0();
  puVar4 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x555555555555556) {
    lVar5 = param_2 * 0x30;
    __Znwm(lVar5);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = lVar5;
    return auVar8;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = puVar4;
  return auVar9;
}



/* Entry: 10a19b7b0; end: 10a19b7c3;  */

undefined1  [16] FUN_10a19b7b0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  puVar4 = &UNK_10f6403f7;
  FUN_109ffde64();
  if (param_2 < 0x555555555555556) {
    lVar5 = param_2 * 0x30;
    __Znwm(lVar5);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
  func_0x000109ffded8();
  plVar6 = *(long **)(puVar4 + 8);
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = puVar4;
  return auVar8;
}



/* Entry: 10a19b7c4; end: 10a19b85f;  */

undefined1  [16] FUN_10a19b7c4(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  if (param_2 < 0x555555555555556) {
    lVar4 = param_2 * 0x30;
    __Znwm(lVar4);
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = lVar4;
    return auVar6;
  }
  func_0x000109ffded8();
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
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Entry: 10a19b860; end: 10a19ba1b;  */

undefined8 * FUN_10a19b860(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    lVar6 = param_1[1];
    uVar8 = *param_1;
    param_3[1] = param_1[1];
    *param_3 = uVar8;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = param_1[3];
    uVar8 = param_1[2];
    param_3[3] = param_1[3];
    param_3[2] = uVar8;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = param_1[5];
    uVar8 = param_1[4];
    param_3[5] = param_1[5];
    param_3[4] = uVar8;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar6 = param_1[7];
    uVar8 = param_1[6];
    param_3[7] = param_1[7];
    param_3[6] = uVar8;
    if (lVar6 != 0) {
      plVar1 = (long *)(lVar6 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    lVar6 = param_1[8];
    lVar5 = param_1[9] - lVar6;
    if (lVar5 != 0) {
      FUN_10a19b768(param_3 + 8,(lVar5 >> 4) * -0x5555555555555555);
      lVar7 = param_3[9];
      _memmove(lVar7,lVar6,lVar5);
      param_3[9] = lVar7 + lVar5;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xb);
    *(undefined4 *)((long)param_3 + 0x5b) = *(undefined4 *)((long)param_1 + 0x5b);
    *(undefined4 *)(param_3 + 0xb) = uVar2;
    param_3 = param_3 + 0xc;
  }
  return param_3;
}



/* Entry: 10a19ba1c; end: 10a19be43;  */

long FUN_10a19ba1c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != param_2) {
    lVar4 = 0;
    do {
      plVar1 = (long *)(param_3 + lVar4);
      plVar2 = (long *)((long)param_1 + lVar4 + 0x40);
      FUN_10a19a8c4(plVar1,plVar2[-8],plVar2[-7]);
      func_0x00010a19b530(plVar1 + 2,plVar2 + -6);
      func_0x00010a04a704(plVar1 + 4,plVar2 + -4);
      func_0x00010a04a704(plVar1 + 6,plVar2 + -2);
      if (plVar1 != plVar2 + -8) {
        FUN_10a19b610(plVar1 + 8,*plVar2,plVar2[1],(plVar2[1] - *plVar2 >> 4) * -0x5555555555555555)
        ;
      }
      lVar3 = plVar2[3];
      *(undefined4 *)((long)plVar1 + 0x5b) = *(undefined4 *)((long)plVar2 + 0x1b);
      *(int *)(plVar1 + 0xb) = (int)lVar3;
      lVar4 = lVar4 + 0x60;
    } while (plVar2 + 4 != param_2);
    param_3 = param_3 + lVar4;
  }
  return param_3;
}



/* Entry: 10a19be44; end: 10a19be57;  */

void FUN_10a19be44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_60;
  long *plStack_58;
  
  plVar7 = (long *)&UNK_10f6403f7;
  FUN_109ffde64();
  puVar5 = (undefined8 *)0x120;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bab268;
  puVar2 = puVar5 + 3;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_60 = param_3;
  plStack_58 = param_4;
  FUN_10ac75164(puVar2,param_2,&uStack_60);
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  *plVar7 = (long)puVar2;
  plVar7[1] = (long)puVar5;
  if ((puVar5 + 0xb != (long *)0x0) &&
     ((lVar6 = puVar5[0xc], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)plVar7[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[0xc];
    }
    puVar5[0xb] = puVar2;
    puVar5[0xc] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a19be58; end: 10a19bf47;  */

void FUN_10a19be58(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uStack_50;
  long *plStack_48;
  
  puVar5 = (undefined8 *)0x120;
  __Znwm();
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = &PTR_FUN_110bab268;
  puVar2 = puVar5 + 3;
  if (param_4 != (long *)0x0) {
    plVar7 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uStack_50 = param_3;
  plStack_48 = param_4;
  FUN_10ac75164(puVar2,param_2,&uStack_50);
  if (param_4 != (long *)0x0) {
    plVar7 = param_4 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar5;
  if ((puVar5 + 0xb != (long *)0x0) &&
     ((lVar6 = puVar5[0xc], lVar6 == 0 || (*(long *)(lVar6 + 8) == -1)))) {
    plVar7 = (long *)param_1[1];
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      plVar1 = plVar7 + 2;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar6 = puVar5[0xc];
    }
    puVar5[0xb] = puVar2;
    puVar5[0xc] = plVar7;
    if (lVar6 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar7);
        return;
      }
    }
  }
  return;
}



/* Entry: 10a19bf48; end: 10a19bf8f;  */

void FUN_10a19bf48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_6;
  uStack_30 = param_1;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_5;
  _vImageConvert_Planar8toPlanarF(0x437f0000,0,&uStack_30,&uStack_50,0);
  return;
}



/* Entry: 10a19bf90; end: 10a19bfd7;  */

void FUN_10a19bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_50 = param_2;
  uStack_48 = param_4;
  uStack_40 = param_3;
  uStack_38 = param_6;
  uStack_30 = param_1;
  uStack_28 = param_4;
  uStack_20 = param_3;
  uStack_18 = param_5;
  _vImageConvert_PlanarFtoPlanar8(0x437f0000,0,&uStack_30,&uStack_50,0);
  return;
}



/* Entry: 10a19bfd8; end: 10a19c417;  */

void FUN_10a19bfd8(long param_1,long param_2,long param_3,uint param_4,uint param_5,long param_6,
                  long param_7,long param_8,char param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined1 auVar14 [16];
  short sVar15;
  undefined1 auVar16 [16];
  short sVar17;
  undefined1 auVar18 [16];
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  byte *pbVar28;
  ulong uVar29;
  char cVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  ulong uVar35;
  undefined1 *puVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  byte *pbVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  short sVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  short sVar65;
  short sVar66;
  short sVar67;
  short sVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  short sVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  undefined8 in_d20;
  undefined8 uVar93;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  undefined8 in_d21;
  undefined8 uVar94;
  byte bVar101;
  undefined8 in_d22;
  undefined8 uVar102;
  undefined8 uVar103;
  undefined8 uVar104;
  short sVar105;
  short sVar106;
  short sVar107;
  short sVar108;
  short sVar109;
  short sVar110;
  short sVar111;
  short sVar112;
  
  if (0 < (int)param_5) {
    uVar29 = 0;
    uVar2 = param_4 & 0xf;
    if (-1 < (int)-param_4) {
      uVar2 = -(-param_4 & 0xf);
    }
    lVar31 = param_1 + param_6;
    lVar32 = param_1;
    lVar33 = param_2;
    do {
      uVar35 = 0;
      pbVar28 = (byte *)(param_1 + uVar29 * param_6);
      pbVar40 = (byte *)(param_2 + (uVar29 >> 1) * param_7);
      puVar38 = (undefined1 *)(param_3 + uVar29 * param_8);
      puVar37 = puVar38 + param_8;
      pbVar43 = pbVar28 + param_6;
      if ((uVar29 != param_5 - 1) && (0 < (int)(param_4 - uVar2))) {
        uVar35 = 0;
        puVar36 = puVar37;
        puVar39 = puVar38;
        do {
          puVar38 = (undefined1 *)(lVar33 + uVar35);
          uVar57 = *puVar38;
          uVar69 = puVar38[1];
          uVar58 = puVar38[2];
          uVar70 = puVar38[3];
          uVar59 = puVar38[4];
          uVar71 = puVar38[5];
          uVar60 = puVar38[6];
          uVar72 = puVar38[7];
          uVar61 = puVar38[8];
          uVar73 = puVar38[9];
          uVar62 = puVar38[10];
          uVar74 = puVar38[0xb];
          uVar63 = puVar38[0xc];
          uVar75 = puVar38[0xd];
          uVar64 = puVar38[0xe];
          uVar76 = puVar38[0xf];
          cVar30 = -(param_9 != '\0');
          uVar19 = CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar74,CONCAT14(uVar73,CONCAT13(uVar72,
                                                  CONCAT12(uVar71,CONCAT11(uVar70,uVar69))))))) ^
                   (CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar74,CONCAT14(uVar73,CONCAT13(uVar72,
                                                  CONCAT12(uVar71,CONCAT11(uVar70,uVar69))))))) ^
                   CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar62,CONCAT14(uVar61,CONCAT13(uVar60,
                                                  CONCAT12(uVar59,CONCAT11(uVar58,uVar57)))))))) &
                   CONCAT17(cVar30,CONCAT16(cVar30,CONCAT15(cVar30,CONCAT14(cVar30,CONCAT13(cVar30,
                                                  CONCAT12(cVar30,CONCAT11(cVar30,cVar30)))))));
          uVar13 = CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar62,CONCAT14(uVar61,CONCAT13(uVar60,
                                                  CONCAT12(uVar59,CONCAT11(uVar58,uVar57))))))) ^
                   (CONCAT17(uVar64,CONCAT16(uVar63,CONCAT15(uVar62,CONCAT14(uVar61,CONCAT13(uVar60,
                                                  CONCAT12(uVar59,CONCAT11(uVar58,uVar57))))))) ^
                   CONCAT17(uVar76,CONCAT16(uVar75,CONCAT15(uVar74,CONCAT14(uVar73,CONCAT13(uVar72,
                                                  CONCAT12(uVar71,CONCAT11(uVar70,uVar69)))))))) &
                   CONCAT17(cVar30,CONCAT16(cVar30,CONCAT15(cVar30,CONCAT14(cVar30,CONCAT13(cVar30,
                                                  CONCAT12(cVar30,CONCAT11(cVar30,cVar30)))))));
          sVar15 = (byte)uVar19 - 0x80;
          sVar45 = (byte)(uVar19 >> 8) - 0x80;
          sVar105 = (byte)(uVar19 >> 0x10) - 0x80;
          sVar80 = (byte)(uVar19 >> 0x18) - 0x80;
          sVar77 = (byte)(uVar19 >> 0x20) - 0x80;
          sVar78 = (byte)(uVar19 >> 0x28) - 0x80;
          sVar79 = (byte)(uVar19 >> 0x30) - 0x80;
          sVar81 = (byte)(uVar19 >> 0x38) - 0x80;
          sVar44 = (byte)uVar13 - 0x80;
          sVar48 = (byte)(uVar13 >> 8) - 0x80;
          sVar49 = (byte)(uVar13 >> 0x10) - 0x80;
          sVar106 = (byte)(uVar13 >> 0x18) - 0x80;
          sVar65 = (byte)(uVar13 >> 0x20) - 0x80;
          sVar66 = (byte)(uVar13 >> 0x28) - 0x80;
          sVar67 = (byte)(uVar13 >> 0x30) - 0x80;
          sVar68 = (byte)(uVar13 >> 0x38) - 0x80;
          sVar82 = sVar44 * 0x33;
          sVar17 = sVar48 * 0x33;
          uVar63 = (undefined1)sVar17;
          uVar64 = (undefined1)((ushort)sVar17 >> 8);
          sVar17 = sVar49 * 0x33;
          uVar69 = (undefined1)sVar17;
          uVar70 = (undefined1)((ushort)sVar17 >> 8);
          sVar17 = sVar106 * 0x33;
          uVar71 = (undefined1)sVar17;
          uVar72 = (undefined1)((ushort)sVar17 >> 8);
          sVar83 = sVar65 * 0x33;
          sVar84 = sVar66 * 0x33;
          sVar85 = sVar67 * 0x33;
          sVar86 = sVar68 * 0x33;
          sVar17 = sVar15 * -0xc + sVar44 * -0x1a;
          sVar44 = sVar45 * -0xc + sVar48 * -0x1a;
          uVar73 = (undefined1)sVar44;
          uVar74 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = sVar105 * -0xc + sVar49 * -0x1a;
          uVar75 = (undefined1)sVar44;
          uVar76 = (undefined1)((ushort)sVar44 >> 8);
          sVar44 = sVar80 * -0xc + sVar106 * -0x1a;
          uVar87 = (undefined1)sVar44;
          uVar88 = (undefined1)((ushort)sVar44 >> 8);
          sVar89 = sVar77 * -0xc + sVar65 * -0x1a;
          sVar90 = sVar78 * -0xc + sVar66 * -0x1a;
          sVar91 = sVar79 * -0xc + sVar67 * -0x1a;
          sVar92 = sVar81 * -0xc + sVar68 * -0x1a;
          sVar15 = sVar15 * 0x40;
          sVar45 = sVar45 * 0x40;
          uVar57 = (undefined1)sVar45;
          uVar58 = (undefined1)((ushort)sVar45 >> 8);
          sVar105 = sVar105 * 0x40;
          uVar59 = (undefined1)sVar105;
          uVar60 = (undefined1)((ushort)sVar105 >> 8);
          sVar80 = sVar80 * 0x40;
          uVar61 = (undefined1)sVar80;
          uVar62 = (undefined1)((ushort)sVar80 >> 8);
          sVar77 = sVar77 * 0x40;
          sVar78 = sVar78 * 0x40;
          sVar79 = sVar79 * 0x40;
          sVar81 = sVar81 * 0x40;
          uVar8 = CONCAT13(uVar64,CONCAT12(uVar63,sVar82));
          uVar9 = CONCAT15(uVar70,CONCAT14(uVar69,uVar8));
          uVar10 = CONCAT13(uVar64,CONCAT12(uVar63,sVar82));
          uVar11 = CONCAT15(uVar70,CONCAT14(uVar69,uVar10));
          sVar44 = (short)((uint)uVar10 >> 0x10);
          sVar65 = (short)((uint6)uVar11 >> 0x20);
          sVar68 = (short)(CONCAT17(uVar72,CONCAT16(uVar71,uVar11)) >> 0x30);
          sVar48 = (short)((uint)uVar8 >> 0x10);
          sVar51 = (short)((uint6)uVar9 >> 0x20);
          sVar54 = (short)(CONCAT17(uVar72,CONCAT16(uVar71,uVar9)) >> 0x30);
          uVar8 = CONCAT13(uVar74,CONCAT12(uVar73,sVar17));
          uVar9 = CONCAT15(uVar76,CONCAT14(uVar75,uVar8));
          uVar10 = CONCAT13(uVar74,CONCAT12(uVar73,sVar17));
          uVar11 = CONCAT15(uVar76,CONCAT14(uVar75,uVar10));
          sVar45 = (short)((uint)uVar10 >> 0x10);
          sVar66 = (short)((uint6)uVar11 >> 0x20);
          sVar46 = (short)(CONCAT17(uVar88,CONCAT16(uVar87,uVar11)) >> 0x30);
          sVar49 = (short)((uint)uVar8 >> 0x10);
          sVar52 = (short)((uint6)uVar9 >> 0x20);
          sVar55 = (short)(CONCAT17(uVar88,CONCAT16(uVar87,uVar9)) >> 0x30);
          uVar8 = CONCAT13(uVar58,CONCAT12(uVar57,sVar15));
          uVar9 = CONCAT15(uVar60,CONCAT14(uVar59,uVar8));
          uVar10 = CONCAT13(uVar58,CONCAT12(uVar57,sVar15));
          uVar11 = CONCAT15(uVar60,CONCAT14(uVar59,uVar10));
          sVar80 = (short)((uint)uVar10 >> 0x10);
          sVar67 = (short)((uint6)uVar11 >> 0x20);
          sVar47 = (short)(CONCAT17(uVar62,CONCAT16(uVar61,uVar11)) >> 0x30);
          sVar50 = (short)((uint)uVar8 >> 0x10);
          sVar53 = (short)((uint6)uVar9 >> 0x20);
          sVar56 = (short)(CONCAT17(uVar62,CONCAT16(uVar61,uVar9)) >> 0x30);
          uVar103 = *(undefined8 *)(lVar32 + uVar35);
          bVar95 = (byte)((ulong)uVar103 >> 8);
          bVar96 = (byte)((ulong)uVar103 >> 0x10);
          bVar97 = (byte)((ulong)uVar103 >> 0x18);
          bVar98 = (byte)((ulong)uVar103 >> 0x20);
          bVar99 = (byte)((ulong)uVar103 >> 0x28);
          bVar100 = (byte)((ulong)uVar103 >> 0x30);
          bVar101 = (byte)((ulong)uVar103 >> 0x38);
          sVar105 = (ushort)(byte)uVar103 * 0x25 + -0x250;
          sVar106 = (ushort)bVar95 * 0x25 + -0x250;
          sVar107 = (ushort)bVar96 * 0x25 + -0x250;
          sVar108 = (ushort)bVar97 * 0x25 + -0x250;
          sVar109 = (ushort)bVar98 * 0x25 + -0x250;
          sVar110 = (ushort)bVar99 * 0x25 + -0x250;
          sVar111 = (ushort)bVar100 * 0x25 + -0x250;
          sVar112 = (ushort)bVar101 * 0x25 + -0x250;
          auVar24._2_2_ = sVar82 + sVar106;
          auVar24._0_2_ = sVar82 + sVar105;
          auVar24._4_2_ = sVar44 + sVar107;
          auVar24._6_2_ = sVar48 + sVar108;
          auVar24._8_2_ = sVar65 + sVar109;
          auVar24._10_2_ = sVar51 + sVar110;
          auVar24._12_2_ = sVar68 + sVar111;
          auVar24._14_2_ = sVar54 + sVar112;
          uVar93 = NEON_sqrshrun(in_d20,auVar24,5,2);
          auVar26._2_2_ = sVar17 + sVar106;
          auVar26._0_2_ = sVar17 + sVar105;
          auVar26._4_2_ = sVar45 + sVar107;
          auVar26._6_2_ = sVar49 + sVar108;
          auVar26._8_2_ = sVar66 + sVar109;
          auVar26._10_2_ = sVar52 + sVar110;
          auVar26._12_2_ = sVar46 + sVar111;
          auVar26._14_2_ = sVar55 + sVar112;
          uVar94 = NEON_sqrshrun(in_d21,auVar26,5,2);
          auVar22._2_2_ = sVar15 + sVar106;
          auVar22._0_2_ = sVar15 + sVar105;
          auVar22._4_2_ = sVar80 + sVar107;
          auVar22._6_2_ = sVar50 + sVar108;
          auVar22._8_2_ = sVar67 + sVar109;
          auVar22._10_2_ = sVar53 + sVar110;
          auVar22._12_2_ = sVar47 + sVar111;
          auVar22._14_2_ = sVar56 + sVar112;
          uVar102 = NEON_sqrshrun(in_d22,auVar22,5,2);
          puVar38 = puVar39 + 0x40;
          *puVar39 = (char)uVar93;
          puVar39[1] = (char)uVar94;
          puVar39[2] = (char)uVar102;
          puVar39[3] = (byte)uVar103;
          puVar39[4] = (char)((ulong)uVar93 >> 8);
          puVar39[5] = (char)((ulong)uVar94 >> 8);
          puVar39[6] = (char)((ulong)uVar102 >> 8);
          puVar39[7] = bVar95;
          puVar39[8] = (char)((ulong)uVar93 >> 0x10);
          puVar39[9] = (char)((ulong)uVar94 >> 0x10);
          puVar39[10] = (char)((ulong)uVar102 >> 0x10);
          puVar39[0xb] = bVar96;
          puVar39[0xc] = (char)((ulong)uVar93 >> 0x18);
          puVar39[0xd] = (char)((ulong)uVar94 >> 0x18);
          puVar39[0xe] = (char)((ulong)uVar102 >> 0x18);
          puVar39[0xf] = bVar97;
          puVar39[0x10] = (char)((ulong)uVar93 >> 0x20);
          puVar39[0x11] = (char)((ulong)uVar94 >> 0x20);
          puVar39[0x12] = (char)((ulong)uVar102 >> 0x20);
          puVar39[0x13] = bVar98;
          puVar39[0x14] = (char)((ulong)uVar93 >> 0x28);
          puVar39[0x15] = (char)((ulong)uVar94 >> 0x28);
          puVar39[0x16] = (char)((ulong)uVar102 >> 0x28);
          puVar39[0x17] = bVar99;
          puVar39[0x18] = (char)((ulong)uVar93 >> 0x30);
          puVar39[0x19] = (char)((ulong)uVar94 >> 0x30);
          puVar39[0x1a] = (char)((ulong)uVar102 >> 0x30);
          puVar39[0x1b] = bVar100;
          puVar39[0x1c] = (char)((ulong)uVar93 >> 0x38);
          puVar39[0x1d] = (char)((ulong)uVar94 >> 0x38);
          puVar39[0x1e] = (char)((ulong)uVar102 >> 0x38);
          puVar39[0x1f] = bVar101;
          uVar104 = ((undefined8 *)(lVar32 + uVar35))[1];
          bVar95 = (byte)((ulong)uVar104 >> 8);
          bVar96 = (byte)((ulong)uVar104 >> 0x10);
          bVar97 = (byte)((ulong)uVar104 >> 0x18);
          bVar98 = (byte)((ulong)uVar104 >> 0x20);
          bVar99 = (byte)((ulong)uVar104 >> 0x28);
          bVar100 = (byte)((ulong)uVar104 >> 0x30);
          bVar101 = (byte)((ulong)uVar104 >> 0x38);
          sVar105 = (ushort)(byte)uVar104 * 0x25 + -0x250;
          sVar106 = (ushort)bVar95 * 0x25 + -0x250;
          sVar107 = (ushort)bVar96 * 0x25 + -0x250;
          sVar108 = (ushort)bVar97 * 0x25 + -0x250;
          sVar109 = (ushort)bVar98 * 0x25 + -0x250;
          sVar110 = (ushort)bVar99 * 0x25 + -0x250;
          sVar111 = (ushort)bVar100 * 0x25 + -0x250;
          sVar112 = (ushort)bVar101 * 0x25 + -0x250;
          auVar25._2_2_ = sVar106 + sVar83;
          auVar25._0_2_ = sVar105 + sVar83;
          auVar25._4_2_ = sVar107 + sVar84;
          auVar25._6_2_ = sVar108 + sVar84;
          auVar25._8_2_ = sVar109 + sVar85;
          auVar25._10_2_ = sVar110 + sVar85;
          auVar25._12_2_ = sVar111 + sVar86;
          auVar25._14_2_ = sVar112 + sVar86;
          uVar93 = NEON_sqrshrun(uVar93,auVar25,5,2);
          auVar27._2_2_ = sVar106 + sVar89;
          auVar27._0_2_ = sVar105 + sVar89;
          auVar27._4_2_ = sVar107 + sVar90;
          auVar27._6_2_ = sVar108 + sVar90;
          auVar27._8_2_ = sVar109 + sVar91;
          auVar27._10_2_ = sVar110 + sVar91;
          auVar27._12_2_ = sVar111 + sVar92;
          auVar27._14_2_ = sVar112 + sVar92;
          uVar94 = NEON_sqrshrun(uVar94,auVar27,5,2);
          auVar23._2_2_ = sVar106 + sVar77;
          auVar23._0_2_ = sVar105 + sVar77;
          auVar23._4_2_ = sVar107 + sVar78;
          auVar23._6_2_ = sVar108 + sVar78;
          auVar23._8_2_ = sVar109 + sVar79;
          auVar23._10_2_ = sVar110 + sVar79;
          auVar23._12_2_ = sVar111 + sVar81;
          auVar23._14_2_ = sVar112 + sVar81;
          uVar103 = NEON_sqrshrun(uVar102,auVar23,5,2);
          puVar39[0x20] = (char)uVar93;
          puVar39[0x21] = (char)uVar94;
          puVar39[0x22] = (char)uVar103;
          puVar39[0x23] = (byte)uVar104;
          puVar39[0x24] = (char)((ulong)uVar93 >> 8);
          puVar39[0x25] = (char)((ulong)uVar94 >> 8);
          puVar39[0x26] = (char)((ulong)uVar103 >> 8);
          puVar39[0x27] = bVar95;
          puVar39[0x28] = (char)((ulong)uVar93 >> 0x10);
          puVar39[0x29] = (char)((ulong)uVar94 >> 0x10);
          puVar39[0x2a] = (char)((ulong)uVar103 >> 0x10);
          puVar39[0x2b] = bVar96;
          puVar39[0x2c] = (char)((ulong)uVar93 >> 0x18);
          puVar39[0x2d] = (char)((ulong)uVar94 >> 0x18);
          puVar39[0x2e] = (char)((ulong)uVar103 >> 0x18);
          puVar39[0x2f] = bVar97;
          puVar39[0x30] = (char)((ulong)uVar93 >> 0x20);
          puVar39[0x31] = (char)((ulong)uVar94 >> 0x20);
          puVar39[0x32] = (char)((ulong)uVar103 >> 0x20);
          puVar39[0x33] = bVar98;
          puVar39[0x34] = (char)((ulong)uVar93 >> 0x28);
          puVar39[0x35] = (char)((ulong)uVar94 >> 0x28);
          puVar39[0x36] = (char)((ulong)uVar103 >> 0x28);
          puVar39[0x37] = bVar99;
          puVar39[0x38] = (char)((ulong)uVar93 >> 0x30);
          puVar39[0x39] = (char)((ulong)uVar94 >> 0x30);
          puVar39[0x3a] = (char)((ulong)uVar103 >> 0x30);
          puVar39[0x3b] = bVar100;
          puVar39[0x3c] = (char)((ulong)uVar93 >> 0x38);
          puVar39[0x3d] = (char)((ulong)uVar94 >> 0x38);
          puVar39[0x3e] = (char)((ulong)uVar103 >> 0x38);
          puVar39[0x3f] = bVar101;
          uVar104 = *(undefined8 *)(lVar31 + uVar35);
          bVar95 = (byte)((ulong)uVar104 >> 8);
          bVar96 = (byte)((ulong)uVar104 >> 0x10);
          bVar97 = (byte)((ulong)uVar104 >> 0x18);
          bVar98 = (byte)((ulong)uVar104 >> 0x20);
          bVar99 = (byte)((ulong)uVar104 >> 0x28);
          bVar100 = (byte)((ulong)uVar104 >> 0x30);
          bVar101 = (byte)((ulong)uVar104 >> 0x38);
          sVar107 = (ushort)(byte)uVar104 * 0x25 + -0x250;
          sVar108 = (ushort)bVar95 * 0x25 + -0x250;
          sVar105 = (ushort)bVar96 * 0x25 + -0x250;
          sVar106 = (ushort)bVar97 * 0x25 + -0x250;
          sVar109 = (ushort)bVar98 * 0x25 + -0x250;
          sVar110 = (ushort)bVar99 * 0x25 + -0x250;
          sVar111 = (ushort)bVar100 * 0x25 + -0x250;
          sVar112 = (ushort)bVar101 * 0x25 + -0x250;
          sVar44 = sVar105 + sVar44;
          sVar48 = sVar106 + sVar48;
          uVar57 = (undefined1)(sVar108 + sVar17);
          uVar58 = (undefined1)((ushort)(sVar108 + sVar17) >> 8);
          sVar45 = sVar105 + sVar45;
          uVar59 = (undefined1)sVar45;
          uVar60 = (undefined1)((ushort)sVar45 >> 8);
          sVar49 = sVar106 + sVar49;
          uVar61 = (undefined1)sVar49;
          uVar62 = (undefined1)((ushort)sVar49 >> 8);
          uVar63 = (undefined1)(sVar108 + sVar15);
          uVar64 = (undefined1)((ushort)(sVar108 + sVar15) >> 8);
          sVar105 = sVar105 + sVar80;
          uVar69 = (undefined1)sVar105;
          uVar70 = (undefined1)((ushort)sVar105 >> 8);
          sVar106 = sVar106 + sVar50;
          uVar71 = (undefined1)sVar106;
          uVar72 = (undefined1)((ushort)sVar106 >> 8);
          auVar14[2] = (char)(sVar108 + sVar82);
          auVar14._0_2_ = sVar107 + sVar82;
          auVar14[3] = (char)((ushort)(sVar108 + sVar82) >> 8);
          auVar14[4] = (char)sVar44;
          auVar14[5] = (char)((ushort)sVar44 >> 8);
          auVar14[6] = (char)sVar48;
          auVar14[7] = (char)((ushort)sVar48 >> 8);
          auVar14._8_2_ = sVar109 + sVar65;
          auVar14._10_2_ = sVar110 + sVar51;
          auVar14._12_2_ = sVar111 + sVar68;
          auVar14._14_2_ = sVar112 + sVar54;
          uVar102 = NEON_sqrshrun(uVar93,auVar14,5,2);
          auVar20[2] = uVar57;
          auVar20._0_2_ = sVar107 + sVar17;
          auVar20[3] = uVar58;
          auVar20[4] = uVar59;
          auVar20[5] = uVar60;
          auVar20[6] = uVar61;
          auVar20[7] = uVar62;
          auVar20._8_2_ = sVar109 + sVar66;
          auVar20._10_2_ = sVar110 + sVar52;
          auVar20._12_2_ = sVar111 + sVar46;
          auVar20._14_2_ = sVar112 + sVar55;
          uVar93 = NEON_sqrshrun(uVar94,auVar20,5,2);
          auVar21[2] = uVar63;
          auVar21._0_2_ = sVar107 + sVar15;
          auVar21[3] = uVar64;
          auVar21[4] = uVar69;
          auVar21[5] = uVar70;
          auVar21[6] = uVar71;
          auVar21[7] = uVar72;
          auVar21._8_2_ = sVar109 + sVar67;
          auVar21._10_2_ = sVar110 + sVar53;
          auVar21._12_2_ = sVar111 + sVar47;
          auVar21._14_2_ = sVar112 + sVar56;
          in_d22 = NEON_sqrshrun(uVar103,auVar21,5,2);
          puVar37 = puVar36 + 0x40;
          *puVar36 = (char)uVar102;
          puVar36[1] = (char)uVar93;
          puVar36[2] = (char)in_d22;
          puVar36[3] = (byte)uVar104;
          puVar36[4] = (char)((ulong)uVar102 >> 8);
          puVar36[5] = (char)((ulong)uVar93 >> 8);
          puVar36[6] = (char)((ulong)in_d22 >> 8);
          puVar36[7] = bVar95;
          puVar36[8] = (char)((ulong)uVar102 >> 0x10);
          puVar36[9] = (char)((ulong)uVar93 >> 0x10);
          puVar36[10] = (char)((ulong)in_d22 >> 0x10);
          puVar36[0xb] = bVar96;
          puVar36[0xc] = (char)((ulong)uVar102 >> 0x18);
          puVar36[0xd] = (char)((ulong)uVar93 >> 0x18);
          puVar36[0xe] = (char)((ulong)in_d22 >> 0x18);
          puVar36[0xf] = bVar97;
          puVar36[0x10] = (char)((ulong)uVar102 >> 0x20);
          puVar36[0x11] = (char)((ulong)uVar93 >> 0x20);
          puVar36[0x12] = (char)((ulong)in_d22 >> 0x20);
          puVar36[0x13] = bVar98;
          puVar36[0x14] = (char)((ulong)uVar102 >> 0x28);
          puVar36[0x15] = (char)((ulong)uVar93 >> 0x28);
          puVar36[0x16] = (char)((ulong)in_d22 >> 0x28);
          puVar36[0x17] = bVar99;
          puVar36[0x18] = (char)((ulong)uVar102 >> 0x30);
          puVar36[0x19] = (char)((ulong)uVar93 >> 0x30);
          puVar36[0x1a] = (char)((ulong)in_d22 >> 0x30);
          puVar36[0x1b] = bVar100;
          puVar36[0x1c] = (char)((ulong)uVar102 >> 0x38);
          puVar36[0x1d] = (char)((ulong)uVar93 >> 0x38);
          puVar36[0x1e] = (char)((ulong)in_d22 >> 0x38);
          puVar36[0x1f] = bVar101;
          in_d21 = ((undefined8 *)(lVar31 + uVar35))[1];
          bVar95 = (byte)((ulong)in_d21 >> 8);
          bVar96 = (byte)((ulong)in_d21 >> 0x10);
          bVar97 = (byte)((ulong)in_d21 >> 0x18);
          bVar98 = (byte)((ulong)in_d21 >> 0x20);
          bVar99 = (byte)((ulong)in_d21 >> 0x28);
          bVar100 = (byte)((ulong)in_d21 >> 0x30);
          bVar101 = (byte)((ulong)in_d21 >> 0x38);
          sVar44 = (ushort)(byte)in_d21 * 0x25 + -0x250;
          sVar48 = (ushort)bVar95 * 0x25 + -0x250;
          sVar45 = (ushort)bVar96 * 0x25 + -0x250;
          sVar49 = (ushort)bVar97 * 0x25 + -0x250;
          sVar105 = (ushort)bVar98 * 0x25 + -0x250;
          sVar106 = (ushort)bVar99 * 0x25 + -0x250;
          sVar80 = (ushort)bVar100 * 0x25 + -0x250;
          sVar82 = (ushort)bVar101 * 0x25 + -0x250;
          auVar16[2] = (char)(sVar48 + sVar83);
          auVar16._0_2_ = sVar44 + sVar83;
          auVar16[3] = (char)((ushort)(sVar48 + sVar83) >> 8);
          auVar16[4] = (char)(sVar45 + sVar84);
          auVar16[5] = (char)((ushort)(sVar45 + sVar84) >> 8);
          auVar16[6] = (char)(sVar49 + sVar84);
          auVar16[7] = (char)((ushort)(sVar49 + sVar84) >> 8);
          auVar16._8_2_ = sVar105 + sVar85;
          auVar16._10_2_ = sVar106 + sVar85;
          auVar16._12_2_ = sVar80 + sVar86;
          auVar16._14_2_ = sVar82 + sVar86;
          uVar93 = NEON_sqrshrun(CONCAT17(uVar62,CONCAT16(uVar61,CONCAT15(uVar60,CONCAT14(uVar59,
                                                  CONCAT13(uVar58,CONCAT12(uVar57,sVar107 + sVar17))
                                                  )))),auVar16,5,2);
          auVar18[2] = (char)(sVar48 + sVar89);
          auVar18._0_2_ = sVar44 + sVar89;
          auVar18[3] = (char)((ushort)(sVar48 + sVar89) >> 8);
          auVar18[4] = (char)(sVar45 + sVar90);
          auVar18[5] = (char)((ushort)(sVar45 + sVar90) >> 8);
          auVar18[6] = (char)(sVar49 + sVar90);
          auVar18[7] = (char)((ushort)(sVar49 + sVar90) >> 8);
          auVar18._8_2_ = sVar105 + sVar91;
          auVar18._10_2_ = sVar106 + sVar91;
          auVar18._12_2_ = sVar80 + sVar92;
          auVar18._14_2_ = sVar82 + sVar92;
          uVar94 = NEON_sqrshrun(CONCAT17(uVar72,CONCAT16(uVar71,CONCAT15(uVar70,CONCAT14(uVar69,
                                                  CONCAT13(uVar64,CONCAT12(uVar63,sVar107 + sVar15))
                                                  )))),auVar18,5,2);
          auVar12[2] = (char)(sVar48 + sVar77);
          auVar12._0_2_ = sVar44 + sVar77;
          auVar12[3] = (char)((ushort)(sVar48 + sVar77) >> 8);
          auVar12[4] = (char)(sVar45 + sVar78);
          auVar12[5] = (char)((ushort)(sVar45 + sVar78) >> 8);
          auVar12[6] = (char)(sVar49 + sVar78);
          auVar12[7] = (char)((ushort)(sVar49 + sVar78) >> 8);
          auVar12._8_2_ = sVar105 + sVar79;
          auVar12._10_2_ = sVar106 + sVar79;
          auVar12._12_2_ = sVar80 + sVar81;
          auVar12._14_2_ = sVar82 + sVar81;
          in_d20 = NEON_sqrshrun(uVar102,auVar12,5,2);
          puVar36[0x20] = (char)uVar93;
          puVar36[0x21] = (char)uVar94;
          puVar36[0x22] = (char)in_d20;
          puVar36[0x23] = (byte)in_d21;
          puVar36[0x24] = (char)((ulong)uVar93 >> 8);
          puVar36[0x25] = (char)((ulong)uVar94 >> 8);
          puVar36[0x26] = (char)((ulong)in_d20 >> 8);
          puVar36[0x27] = bVar95;
          puVar36[0x28] = (char)((ulong)uVar93 >> 0x10);
          puVar36[0x29] = (char)((ulong)uVar94 >> 0x10);
          puVar36[0x2a] = (char)((ulong)in_d20 >> 0x10);
          puVar36[0x2b] = bVar96;
          puVar36[0x2c] = (char)((ulong)uVar93 >> 0x18);
          puVar36[0x2d] = (char)((ulong)uVar94 >> 0x18);
          puVar36[0x2e] = (char)((ulong)in_d20 >> 0x18);
          puVar36[0x2f] = bVar97;
          puVar36[0x30] = (char)((ulong)uVar93 >> 0x20);
          puVar36[0x31] = (char)((ulong)uVar94 >> 0x20);
          puVar36[0x32] = (char)((ulong)in_d20 >> 0x20);
          puVar36[0x33] = bVar98;
          puVar36[0x34] = (char)((ulong)uVar93 >> 0x28);
          puVar36[0x35] = (char)((ulong)uVar94 >> 0x28);
          puVar36[0x36] = (char)((ulong)in_d20 >> 0x28);
          puVar36[0x37] = bVar99;
          puVar36[0x38] = (char)((ulong)uVar93 >> 0x30);
          puVar36[0x39] = (char)((ulong)uVar94 >> 0x30);
          puVar36[0x3a] = (char)((ulong)in_d20 >> 0x30);
          puVar36[0x3b] = bVar100;
          puVar36[0x3c] = (char)((ulong)uVar93 >> 0x38);
          puVar36[0x3d] = (char)((ulong)uVar94 >> 0x38);
          puVar36[0x3e] = (char)((ulong)in_d20 >> 0x38);
          puVar36[0x3f] = bVar101;
          uVar35 = uVar35 + 0x10;
          puVar36 = puVar37;
          puVar39 = puVar38;
        } while ((int)uVar35 < (int)(param_4 - uVar2));
        pbVar40 = (byte *)(lVar33 + uVar35);
        pbVar28 = (byte *)(lVar32 + uVar35);
        pbVar43 = (byte *)(lVar31 + uVar35);
      }
      while (iVar34 = (int)uVar35, iVar34 < (int)param_4) {
        uVar6 = (uint)pbVar40[1];
        uVar5 = (uint)*pbVar40;
        if (param_9 == '\0') {
          uVar6 = (uint)*pbVar40;
          uVar5 = (uint)pbVar40[1];
        }
        uVar7 = uVar5 * 0x10000 - 0x800000;
        pbVar41 = pbVar28 + 1;
        bVar95 = *pbVar28;
        iVar3 = (int)((uVar6 - 0x80) * 0x330000 + 0x100000) >> 0x10;
        iVar1 = (int)((uint)bVar95 * 0x250000 + -0x2500000) >> 0x10;
        uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar5) {
          uVar5 = 0xff;
        }
        *puVar38 = (char)uVar5;
        iVar4 = (int)((uVar6 - 0x80) * -0x1a0000 + (uVar7 >> 0x10) * -0xc0000 + 0x100000) >> 0x10;
        uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar38[1] = (char)uVar6;
        uVar5 = (int)uVar7 >> 10 | 0x10;
        uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar38[2] = (char)uVar6;
        puVar38[3] = bVar95;
        if (param_4 - 1 == iVar34) {
          puVar38 = puVar38 + 4;
        }
        else {
          bVar95 = pbVar28[1];
          pbVar41 = pbVar28 + 2;
          iVar1 = (int)((uint)bVar95 * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[4] = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[5] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[6] = (char)uVar6;
          puVar38[7] = bVar95;
          puVar38 = puVar38 + 8;
        }
        pbVar42 = pbVar43;
        if (uVar29 != param_5 - 1) {
          pbVar42 = pbVar43 + 1;
          bVar95 = *pbVar43;
          iVar1 = (int)((uint)bVar95 * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar37 = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar37[1] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar37[2] = (char)uVar6;
          puVar37[3] = bVar95;
          if (param_4 - 1 == iVar34) {
            puVar37 = puVar37 + 4;
          }
          else {
            bVar95 = pbVar43[1];
            pbVar42 = pbVar43 + 2;
            iVar1 = (int)((uint)bVar95 * 0x250000 + -0x2500000) >> 0x10;
            uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar37[4] = (char)uVar6;
            uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar37[5] = (char)uVar6;
            uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar37[6] = (char)uVar6;
            puVar37[7] = bVar95;
            puVar37 = puVar37 + 8;
          }
        }
        pbVar40 = pbVar40 + 2;
        pbVar28 = pbVar41;
        pbVar43 = pbVar42;
        uVar35 = (ulong)(iVar34 + 2);
      }
      uVar29 = uVar29 + 2;
      lVar33 = lVar33 + param_7;
      lVar32 = lVar32 + param_6 * 2;
      lVar31 = lVar31 + param_6 * 2;
    } while (uVar29 < param_5);
  }
  return;
}



/* Entry: 10a19c418; end: 10a19c90f;  */

void FUN_10a19c418(long *param_1,long **param_2,long param_3,uint param_4,uint param_5,long param_6,
                  long param_7,long param_8,byte param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  short sVar14;
  short sVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short sVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 uVar23;
  short sVar24;
  short sVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  short sVar28;
  short sVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  long *plVar33;
  long **pplVar34;
  int iVar35;
  ulong uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  ulong uVar41;
  long lVar42;
  byte *pbVar43;
  long **pplVar44;
  byte *pbVar45;
  byte *pbVar46;
  byte *pbVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  short sVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  short sVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  short sVar78;
  short sVar79;
  short sVar80;
  short sVar81;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 in_d18;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  short sVar88;
  short sVar89;
  short sVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  undefined8 in_d27;
  undefined8 uVar104;
  undefined8 in_d28;
  undefined8 in_d29;
  undefined4 uStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long **pplStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  if ((param_9 & 1) == 0) {
    if (0 < (int)param_5) {
      uVar41 = 0;
      uVar2 = param_4 & 0xf;
      if (-1 < (int)-param_4) {
        uVar2 = -(-param_4 & 0xf);
      }
      lVar42 = (long)param_1 + param_6;
      plVar33 = param_1;
      pplVar34 = param_2;
      do {
        uVar36 = 0;
        pbVar43 = (byte *)((long)param_1 + uVar41 * param_6);
        pplVar44 = (long **)((long)param_2 + (uVar41 >> 1) * param_7);
        puVar39 = (undefined1 *)(param_3 + uVar41 * param_8);
        puVar38 = puVar39 + param_8;
        pbVar47 = pbVar43 + param_6;
        if ((uVar41 != param_5 - 1) && (0 < (int)(param_4 - uVar2))) {
          uVar36 = 0;
          puVar37 = puVar38;
          puVar40 = puVar39;
          uVar104 = in_d27;
          do {
            pbVar43 = (byte *)((long)pplVar34 + uVar36);
            sVar14 = (*pbVar43 - 0x80) * 0x33;
            sVar15 = (pbVar43[2] - 0x80) * 0x33;
            uVar72 = (undefined1)sVar15;
            uVar73 = (undefined1)((ushort)sVar15 >> 8);
            sVar15 = (pbVar43[4] - 0x80) * 0x33;
            uVar74 = (undefined1)sVar15;
            uVar75 = (undefined1)((ushort)sVar15 >> 8);
            sVar15 = (pbVar43[6] - 0x80) * 0x33;
            uVar76 = (undefined1)sVar15;
            uVar77 = (undefined1)((ushort)sVar15 >> 8);
            sVar78 = (pbVar43[8] - 0x80) * 0x33;
            sVar79 = (pbVar43[10] - 0x80) * 0x33;
            sVar80 = (pbVar43[0xc] - 0x80) * 0x33;
            sVar81 = (pbVar43[0xe] - 0x80) * 0x33;
            sVar18 = (pbVar43[1] - 0x80) * -0xc + (*pbVar43 - 0x80) * -0x1a;
            sVar15 = (pbVar43[3] - 0x80) * -0xc + (pbVar43[2] - 0x80) * -0x1a;
            uVar82 = (undefined1)sVar15;
            uVar83 = (undefined1)((ushort)sVar15 >> 8);
            sVar15 = (pbVar43[5] - 0x80) * -0xc + (pbVar43[4] - 0x80) * -0x1a;
            uVar84 = (undefined1)sVar15;
            uVar85 = (undefined1)((ushort)sVar15 >> 8);
            sVar15 = (pbVar43[7] - 0x80) * -0xc + (pbVar43[6] - 0x80) * -0x1a;
            uVar86 = (undefined1)sVar15;
            uVar87 = (undefined1)((ushort)sVar15 >> 8);
            sVar88 = (pbVar43[9] - 0x80) * -0xc + (pbVar43[8] - 0x80) * -0x1a;
            sVar89 = (pbVar43[0xb] - 0x80) * -0xc + (pbVar43[10] - 0x80) * -0x1a;
            sVar90 = (pbVar43[0xd] - 0x80) * -0xc + (pbVar43[0xc] - 0x80) * -0x1a;
            sVar91 = (pbVar43[0xf] - 0x80) * -0xc + (pbVar43[0xe] - 0x80) * -0x1a;
            sVar15 = (pbVar43[1] - 0x80) * 0x40;
            sVar48 = (pbVar43[3] - 0x80) * 0x40;
            uVar62 = (undefined1)sVar48;
            uVar63 = (undefined1)((ushort)sVar48 >> 8);
            sVar48 = (pbVar43[5] - 0x80) * 0x40;
            uVar64 = (undefined1)sVar48;
            uVar65 = (undefined1)((ushort)sVar48 >> 8);
            sVar48 = (pbVar43[7] - 0x80) * 0x40;
            uVar66 = (undefined1)sVar48;
            uVar67 = (undefined1)((ushort)sVar48 >> 8);
            sVar68 = (pbVar43[9] - 0x80) * 0x40;
            sVar69 = (pbVar43[0xb] - 0x80) * 0x40;
            sVar70 = (pbVar43[0xd] - 0x80) * 0x40;
            sVar71 = (pbVar43[0xf] - 0x80) * 0x40;
            uVar8 = CONCAT13(uVar73,CONCAT12(uVar72,sVar14));
            uVar9 = CONCAT15(uVar75,CONCAT14(uVar74,uVar8));
            uVar10 = CONCAT13(uVar73,CONCAT12(uVar72,sVar14));
            uVar11 = CONCAT15(uVar75,CONCAT14(uVar74,uVar10));
            sVar48 = (short)((uint)uVar10 >> 0x10);
            sVar49 = (short)((uint6)uVar11 >> 0x20);
            sVar52 = (short)(CONCAT17(uVar77,CONCAT16(uVar76,uVar11)) >> 0x30);
            sVar55 = (short)((uint)uVar8 >> 0x10);
            sVar56 = (short)((uint6)uVar9 >> 0x20);
            sVar59 = (short)(CONCAT17(uVar77,CONCAT16(uVar76,uVar9)) >> 0x30);
            uVar8 = CONCAT13(uVar83,CONCAT12(uVar82,sVar18));
            uVar9 = CONCAT15(uVar85,CONCAT14(uVar84,uVar8));
            uVar10 = CONCAT13(uVar83,CONCAT12(uVar82,sVar18));
            uVar11 = CONCAT15(uVar85,CONCAT14(uVar84,uVar10));
            sVar92 = (short)((uint)uVar10 >> 0x10);
            sVar50 = (short)((uint6)uVar11 >> 0x20);
            sVar53 = (short)(CONCAT17(uVar87,CONCAT16(uVar86,uVar11)) >> 0x30);
            sVar93 = (short)((uint)uVar8 >> 0x10);
            sVar57 = (short)((uint6)uVar9 >> 0x20);
            sVar60 = (short)(CONCAT17(uVar87,CONCAT16(uVar86,uVar9)) >> 0x30);
            uVar8 = CONCAT13(uVar63,CONCAT12(uVar62,sVar15));
            uVar9 = CONCAT15(uVar65,CONCAT14(uVar64,uVar8));
            uVar10 = CONCAT13(uVar63,CONCAT12(uVar62,sVar15));
            uVar11 = CONCAT15(uVar65,CONCAT14(uVar64,uVar10));
            sVar94 = (short)((uint)uVar10 >> 0x10);
            sVar51 = (short)((uint6)uVar11 >> 0x20);
            sVar54 = (short)(CONCAT17(uVar67,CONCAT16(uVar66,uVar11)) >> 0x30);
            sVar95 = (short)((uint)uVar8 >> 0x10);
            sVar58 = (short)((uint6)uVar9 >> 0x20);
            sVar61 = (short)(CONCAT17(uVar67,CONCAT16(uVar66,uVar9)) >> 0x30);
            uVar23 = *(undefined8 *)((long)plVar33 + uVar36);
            sVar28 = (ushort)(byte)uVar23 * 0x25 + -0x250;
            sVar29 = (ushort)(byte)((ulong)uVar23 >> 8) * 0x25 + -0x250;
            sVar97 = (ushort)(byte)((ulong)uVar23 >> 0x10) * 0x25 + -0x250;
            sVar99 = (ushort)(byte)((ulong)uVar23 >> 0x18) * 0x25 + -0x250;
            sVar96 = (ushort)(byte)((ulong)uVar23 >> 0x20) * 0x25 + -0x250;
            sVar98 = (ushort)(byte)((ulong)uVar23 >> 0x28) * 0x25 + -0x250;
            sVar100 = (ushort)(byte)((ulong)uVar23 >> 0x30) * 0x25 + -0x250;
            sVar102 = (ushort)(byte)((ulong)uVar23 >> 0x38) * 0x25 + -0x250;
            sVar24 = sVar48 + sVar97;
            sVar25 = sVar55 + sVar99;
            sVar101 = sVar92 + sVar97;
            sVar103 = sVar93 + sVar99;
            sVar97 = sVar94 + sVar97;
            sVar99 = sVar95 + sVar99;
            auVar21[2] = (char)(sVar14 + sVar29);
            auVar21._0_2_ = sVar14 + sVar28;
            auVar21[3] = (char)((ushort)(sVar14 + sVar29) >> 8);
            auVar21[4] = (char)sVar24;
            auVar21[5] = (char)((ushort)sVar24 >> 8);
            auVar21[6] = (char)sVar25;
            auVar21[7] = (char)((ushort)sVar25 >> 8);
            auVar21._8_2_ = sVar49 + sVar96;
            auVar21._10_2_ = sVar56 + sVar98;
            auVar21._12_2_ = sVar52 + sVar100;
            auVar21._14_2_ = sVar59 + sVar102;
            in_d16 = NEON_sqrshrun(in_d16,auVar21,5,2);
            auVar30[2] = (char)(sVar18 + sVar29);
            auVar30._0_2_ = sVar18 + sVar28;
            auVar30[3] = (char)((ushort)(sVar18 + sVar29) >> 8);
            auVar30[4] = (char)sVar101;
            auVar30[5] = (char)((ushort)sVar101 >> 8);
            auVar30[6] = (char)sVar103;
            auVar30[7] = (char)((ushort)sVar103 >> 8);
            auVar30._8_2_ = sVar50 + sVar96;
            auVar30._10_2_ = sVar57 + sVar98;
            auVar30._12_2_ = sVar53 + sVar100;
            auVar30._14_2_ = sVar60 + sVar102;
            in_d17 = NEON_sqrshrun(in_d17,auVar30,5,2);
            auVar26[2] = (char)(sVar15 + sVar29);
            auVar26._0_2_ = sVar15 + sVar28;
            auVar26[3] = (char)((ushort)(sVar15 + sVar29) >> 8);
            auVar26[4] = (char)sVar97;
            auVar26[5] = (char)((ushort)sVar97 >> 8);
            auVar26[6] = (char)sVar99;
            auVar26[7] = (char)((ushort)sVar99 >> 8);
            auVar26._8_2_ = sVar51 + sVar96;
            auVar26._10_2_ = sVar58 + sVar98;
            auVar26._12_2_ = sVar54 + sVar100;
            auVar26._14_2_ = sVar61 + sVar102;
            in_d18 = NEON_sqrshrun(in_d18,auVar26,5,2);
            puVar39 = puVar40 + 0x40;
            *puVar40 = (char)in_d16;
            puVar40[1] = (char)in_d17;
            puVar40[2] = (char)in_d18;
            puVar40[3] = 0xff;
            puVar40[4] = (char)((ulong)in_d16 >> 8);
            puVar40[5] = (char)((ulong)in_d17 >> 8);
            puVar40[6] = (char)((ulong)in_d18 >> 8);
            puVar40[7] = 0xff;
            puVar40[8] = (char)((ulong)in_d16 >> 0x10);
            puVar40[9] = (char)((ulong)in_d17 >> 0x10);
            puVar40[10] = (char)((ulong)in_d18 >> 0x10);
            puVar40[0xb] = 0xff;
            puVar40[0xc] = (char)((ulong)in_d16 >> 0x18);
            puVar40[0xd] = (char)((ulong)in_d17 >> 0x18);
            puVar40[0xe] = (char)((ulong)in_d18 >> 0x18);
            puVar40[0xf] = 0xff;
            puVar40[0x10] = (char)((ulong)in_d16 >> 0x20);
            puVar40[0x11] = (char)((ulong)in_d17 >> 0x20);
            puVar40[0x12] = (char)((ulong)in_d18 >> 0x20);
            puVar40[0x13] = 0xff;
            puVar40[0x14] = (char)((ulong)in_d16 >> 0x28);
            puVar40[0x15] = (char)((ulong)in_d17 >> 0x28);
            puVar40[0x16] = (char)((ulong)in_d18 >> 0x28);
            puVar40[0x17] = 0xff;
            puVar40[0x18] = (char)((ulong)in_d16 >> 0x30);
            puVar40[0x19] = (char)((ulong)in_d17 >> 0x30);
            puVar40[0x1a] = (char)((ulong)in_d18 >> 0x30);
            puVar40[0x1b] = 0xff;
            puVar40[0x1c] = (char)((ulong)in_d16 >> 0x38);
            puVar40[0x1d] = (char)((ulong)in_d17 >> 0x38);
            puVar40[0x1e] = (char)((ulong)in_d18 >> 0x38);
            puVar40[0x1f] = 0xff;
            uVar62 = (undefined1)((ushort)sVar89 >> 8);
            uVar23 = ((undefined8 *)((long)plVar33 + uVar36))[1];
            sVar24 = (ushort)(byte)uVar23 * 0x25 + -0x250;
            sVar25 = (ushort)(byte)((ulong)uVar23 >> 8) * 0x25 + -0x250;
            sVar28 = (ushort)(byte)((ulong)uVar23 >> 0x10) * 0x25 + -0x250;
            sVar29 = (ushort)(byte)((ulong)uVar23 >> 0x18) * 0x25 + -0x250;
            sVar97 = (ushort)(byte)((ulong)uVar23 >> 0x20) * 0x25 + -0x250;
            sVar99 = (ushort)(byte)((ulong)uVar23 >> 0x28) * 0x25 + -0x250;
            sVar101 = (ushort)(byte)((ulong)uVar23 >> 0x30) * 0x25 + -0x250;
            sVar103 = (ushort)(byte)((ulong)uVar23 >> 0x38) * 0x25 + -0x250;
            uVar73 = (undefined1)(sVar25 + sVar88);
            uVar74 = (undefined1)((ushort)(sVar25 + sVar88) >> 8);
            uVar75 = (undefined1)(sVar28 + sVar89);
            uVar76 = (undefined1)((ushort)(sVar28 + sVar89) >> 8);
            uVar77 = (undefined1)(sVar29 + sVar89);
            uVar82 = (undefined1)((ushort)(sVar29 + sVar89) >> 8);
            auVar22[2] = (char)(sVar25 + sVar78);
            auVar22._0_2_ = sVar24 + sVar78;
            auVar22[3] = (char)((ushort)(sVar25 + sVar78) >> 8);
            auVar22[4] = (char)(sVar28 + sVar79);
            auVar22[5] = (char)((ushort)(sVar28 + sVar79) >> 8);
            auVar22[6] = (char)(sVar29 + sVar79);
            auVar22[7] = (char)((ushort)(sVar29 + sVar79) >> 8);
            auVar22._8_2_ = sVar97 + sVar80;
            auVar22._10_2_ = sVar99 + sVar80;
            auVar22._12_2_ = sVar101 + sVar81;
            auVar22._14_2_ = sVar103 + sVar81;
            uVar104 = NEON_sqrshrun(uVar104,auVar22,5,2);
            auVar31[2] = uVar73;
            auVar31._0_2_ = sVar24 + sVar88;
            auVar31[3] = uVar74;
            auVar31[4] = uVar75;
            auVar31[5] = uVar76;
            auVar31[6] = uVar77;
            auVar31[7] = uVar82;
            auVar31._8_2_ = sVar97 + sVar90;
            auVar31._10_2_ = sVar99 + sVar90;
            auVar31._12_2_ = sVar101 + sVar91;
            auVar31._14_2_ = sVar103 + sVar91;
            in_d28 = NEON_sqrshrun(in_d28,auVar31,5,2);
            auVar27[2] = (char)(sVar25 + sVar68);
            auVar27._0_2_ = sVar24 + sVar68;
            auVar27[3] = (char)((ushort)(sVar25 + sVar68) >> 8);
            auVar27[4] = (char)(sVar28 + sVar69);
            auVar27[5] = (char)((ushort)(sVar28 + sVar69) >> 8);
            auVar27[6] = (char)(sVar29 + sVar69);
            auVar27[7] = (char)((ushort)(sVar29 + sVar69) >> 8);
            auVar27._8_2_ = sVar97 + sVar70;
            auVar27._10_2_ = sVar99 + sVar70;
            auVar27._12_2_ = sVar101 + sVar71;
            auVar27._14_2_ = sVar103 + sVar71;
            in_d29 = NEON_sqrshrun(in_d29,auVar27,5,2);
            puVar40[0x20] = (char)uVar104;
            puVar40[0x21] = (char)in_d28;
            puVar40[0x22] = (char)in_d29;
            puVar40[0x23] = 0xff;
            puVar40[0x24] = (char)((ulong)uVar104 >> 8);
            puVar40[0x25] = (char)((ulong)in_d28 >> 8);
            puVar40[0x26] = (char)((ulong)in_d29 >> 8);
            puVar40[0x27] = 0xff;
            puVar40[0x28] = (char)((ulong)uVar104 >> 0x10);
            puVar40[0x29] = (char)((ulong)in_d28 >> 0x10);
            puVar40[0x2a] = (char)((ulong)in_d29 >> 0x10);
            puVar40[0x2b] = 0xff;
            puVar40[0x2c] = (char)((ulong)uVar104 >> 0x18);
            puVar40[0x2d] = (char)((ulong)in_d28 >> 0x18);
            puVar40[0x2e] = (char)((ulong)in_d29 >> 0x18);
            puVar40[0x2f] = 0xff;
            puVar40[0x30] = (char)((ulong)uVar104 >> 0x20);
            puVar40[0x31] = (char)((ulong)in_d28 >> 0x20);
            puVar40[0x32] = (char)((ulong)in_d29 >> 0x20);
            puVar40[0x33] = 0xff;
            puVar40[0x34] = (char)((ulong)uVar104 >> 0x28);
            puVar40[0x35] = (char)((ulong)in_d28 >> 0x28);
            puVar40[0x36] = (char)((ulong)in_d29 >> 0x28);
            puVar40[0x37] = 0xff;
            puVar40[0x38] = (char)((ulong)uVar104 >> 0x30);
            puVar40[0x39] = (char)((ulong)in_d28 >> 0x30);
            puVar40[0x3a] = (char)((ulong)in_d29 >> 0x30);
            puVar40[0x3b] = 0xff;
            puVar40[0x3c] = (char)((ulong)uVar104 >> 0x38);
            puVar40[0x3d] = (char)((ulong)in_d28 >> 0x38);
            puVar40[0x3e] = (char)((ulong)in_d29 >> 0x38);
            puVar40[0x3f] = 0xff;
            uVar104 = *(undefined8 *)(lVar42 + uVar36);
            sVar25 = (ushort)(byte)uVar104 * 0x25 + -0x250;
            sVar28 = (ushort)(byte)((ulong)uVar104 >> 8) * 0x25 + -0x250;
            sVar29 = (ushort)(byte)((ulong)uVar104 >> 0x10) * 0x25 + -0x250;
            sVar97 = (ushort)(byte)((ulong)uVar104 >> 0x18) * 0x25 + -0x250;
            sVar99 = (ushort)(byte)((ulong)uVar104 >> 0x20) * 0x25 + -0x250;
            sVar101 = (ushort)(byte)((ulong)uVar104 >> 0x28) * 0x25 + -0x250;
            sVar103 = (ushort)(byte)((ulong)uVar104 >> 0x30) * 0x25 + -0x250;
            sVar96 = (ushort)(byte)((ulong)uVar104 >> 0x38) * 0x25 + -0x250;
            sVar48 = sVar29 + sVar48;
            sVar55 = sVar97 + sVar55;
            sVar92 = sVar29 + sVar92;
            sVar93 = sVar97 + sVar93;
            uVar63 = (undefined1)(sVar28 + sVar15);
            uVar64 = (undefined1)((ushort)(sVar28 + sVar15) >> 8);
            sVar94 = sVar29 + sVar94;
            uVar65 = (undefined1)sVar94;
            uVar66 = (undefined1)((ushort)sVar94 >> 8);
            sVar95 = sVar97 + sVar95;
            uVar67 = (undefined1)sVar95;
            uVar72 = (undefined1)((ushort)sVar95 >> 8);
            auVar16[2] = (char)(sVar28 + sVar14);
            auVar16._0_2_ = sVar25 + sVar14;
            auVar16[3] = (char)((ushort)(sVar28 + sVar14) >> 8);
            auVar16[4] = (char)sVar48;
            auVar16[5] = (char)((ushort)sVar48 >> 8);
            auVar16[6] = (char)sVar55;
            auVar16[7] = (char)((ushort)sVar55 >> 8);
            auVar16._8_2_ = sVar99 + sVar49;
            auVar16._10_2_ = sVar101 + sVar56;
            auVar16._12_2_ = sVar103 + sVar52;
            auVar16._14_2_ = sVar96 + sVar59;
            uVar104 = NEON_sqrshrun(uVar104,auVar16,5,2);
            auVar19[2] = (char)(sVar28 + sVar18);
            auVar19._0_2_ = sVar25 + sVar18;
            auVar19[3] = (char)((ushort)(sVar28 + sVar18) >> 8);
            auVar19[4] = (char)sVar92;
            auVar19[5] = (char)((ushort)sVar92 >> 8);
            auVar19[6] = (char)sVar93;
            auVar19[7] = (char)((ushort)sVar93 >> 8);
            auVar19._8_2_ = sVar99 + sVar50;
            auVar19._10_2_ = sVar101 + sVar57;
            auVar19._12_2_ = sVar103 + sVar53;
            auVar19._14_2_ = sVar96 + sVar60;
            uVar23 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar97 >> 8),
                                            CONCAT16((char)sVar97,
                                                     CONCAT15((char)((ushort)sVar29 >> 8),
                                                              CONCAT14((char)sVar29,
                                                                       CONCAT13((char)((ushort)
                                                  sVar28 >> 8),CONCAT12((char)sVar28,sVar25)))))),
                                   auVar19,5,2);
            auVar20[2] = uVar63;
            auVar20._0_2_ = sVar25 + sVar15;
            auVar20[3] = uVar64;
            auVar20[4] = uVar65;
            auVar20[5] = uVar66;
            auVar20[6] = uVar67;
            auVar20[7] = uVar72;
            auVar20._8_2_ = sVar99 + sVar51;
            auVar20._10_2_ = sVar101 + sVar58;
            auVar20._12_2_ = sVar103 + sVar54;
            auVar20._14_2_ = sVar96 + sVar61;
            uVar32 = NEON_sqrshrun(CONCAT17(uVar82,CONCAT16(uVar77,CONCAT15(uVar76,CONCAT14(uVar75,
                                                  CONCAT13(uVar74,CONCAT12(uVar73,sVar24 + sVar88)))
                                                  ))),auVar20,5,2);
            in_d27 = 0xffffffffffffffff;
            puVar38 = puVar37 + 0x40;
            *puVar37 = (char)uVar104;
            puVar37[1] = (char)uVar23;
            puVar37[2] = (char)uVar32;
            puVar37[3] = 0xff;
            puVar37[4] = (char)((ulong)uVar104 >> 8);
            puVar37[5] = (char)((ulong)uVar23 >> 8);
            puVar37[6] = (char)((ulong)uVar32 >> 8);
            puVar37[7] = 0xff;
            puVar37[8] = (char)((ulong)uVar104 >> 0x10);
            puVar37[9] = (char)((ulong)uVar23 >> 0x10);
            puVar37[10] = (char)((ulong)uVar32 >> 0x10);
            puVar37[0xb] = 0xff;
            puVar37[0xc] = (char)((ulong)uVar104 >> 0x18);
            puVar37[0xd] = (char)((ulong)uVar23 >> 0x18);
            puVar37[0xe] = (char)((ulong)uVar32 >> 0x18);
            puVar37[0xf] = 0xff;
            puVar37[0x10] = (char)((ulong)uVar104 >> 0x20);
            puVar37[0x11] = (char)((ulong)uVar23 >> 0x20);
            puVar37[0x12] = (char)((ulong)uVar32 >> 0x20);
            puVar37[0x13] = 0xff;
            puVar37[0x14] = (char)((ulong)uVar104 >> 0x28);
            puVar37[0x15] = (char)((ulong)uVar23 >> 0x28);
            puVar37[0x16] = (char)((ulong)uVar32 >> 0x28);
            puVar37[0x17] = 0xff;
            puVar37[0x18] = (char)((ulong)uVar104 >> 0x30);
            puVar37[0x19] = (char)((ulong)uVar23 >> 0x30);
            puVar37[0x1a] = (char)((ulong)uVar32 >> 0x30);
            puVar37[0x1b] = 0xff;
            puVar37[0x1c] = (char)((ulong)uVar104 >> 0x38);
            puVar37[0x1d] = (char)((ulong)uVar23 >> 0x38);
            puVar37[0x1e] = (char)((ulong)uVar32 >> 0x38);
            puVar37[0x1f] = 0xff;
            uVar104 = ((undefined8 *)(lVar42 + uVar36))[1];
            sVar48 = (ushort)(byte)uVar104 * 0x25 + -0x250;
            sVar14 = (ushort)(byte)((ulong)uVar104 >> 8) * 0x25 + -0x250;
            sVar55 = (ushort)(byte)((ulong)uVar104 >> 0x10) * 0x25 + -0x250;
            sVar18 = (ushort)(byte)((ulong)uVar104 >> 0x18) * 0x25 + -0x250;
            sVar92 = (ushort)(byte)((ulong)uVar104 >> 0x20) * 0x25 + -0x250;
            sVar93 = (ushort)(byte)((ulong)uVar104 >> 0x28) * 0x25 + -0x250;
            sVar94 = (ushort)(byte)((ulong)uVar104 >> 0x30) * 0x25 + -0x250;
            sVar95 = (ushort)(byte)((ulong)uVar104 >> 0x38) * 0x25 + -0x250;
            auVar13[2] = (char)(sVar14 + sVar78);
            auVar13._0_2_ = sVar48 + sVar78;
            auVar13[3] = (char)((ushort)(sVar14 + sVar78) >> 8);
            auVar13[4] = (char)(sVar55 + sVar79);
            auVar13[5] = (char)((ushort)(sVar55 + sVar79) >> 8);
            auVar13[6] = (char)(sVar18 + sVar79);
            auVar13[7] = (char)((ushort)(sVar18 + sVar79) >> 8);
            auVar13._8_2_ = sVar92 + sVar80;
            auVar13._10_2_ = sVar93 + sVar80;
            auVar13._12_2_ = sVar94 + sVar81;
            auVar13._14_2_ = sVar95 + sVar81;
            uVar104 = NEON_sqrshrun(CONCAT17(uVar62,CONCAT16((char)sVar89,
                                                             CONCAT15(uVar62,CONCAT14((char)sVar89,
                                                                                      CONCAT13((char
                                                  )((ushort)sVar88 >> 8),
                                                  CONCAT12((char)sVar88,sVar88)))))),auVar13,5,2);
            auVar17[2] = (char)(sVar14 + sVar88);
            auVar17._0_2_ = sVar48 + sVar88;
            auVar17[3] = (char)((ushort)(sVar14 + sVar88) >> 8);
            auVar17[4] = (char)(sVar55 + sVar89);
            auVar17[5] = (char)((ushort)(sVar55 + sVar89) >> 8);
            auVar17[6] = (char)(sVar18 + sVar89);
            auVar17[7] = (char)((ushort)(sVar18 + sVar89) >> 8);
            auVar17._8_2_ = sVar92 + sVar90;
            auVar17._10_2_ = sVar93 + sVar90;
            auVar17._12_2_ = sVar94 + sVar91;
            auVar17._14_2_ = sVar95 + sVar91;
            uVar23 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar18 >> 8),
                                            CONCAT16((char)sVar18,
                                                     CONCAT15((char)((ushort)sVar55 >> 8),
                                                              CONCAT14((char)sVar55,
                                                                       CONCAT13((char)((ushort)
                                                  sVar14 >> 8),CONCAT12((char)sVar14,sVar48)))))),
                                   auVar17,5,2);
            auVar12[2] = (char)(sVar14 + sVar68);
            auVar12._0_2_ = sVar48 + sVar68;
            auVar12[3] = (char)((ushort)(sVar14 + sVar68) >> 8);
            auVar12[4] = (char)(sVar55 + sVar69);
            auVar12[5] = (char)((ushort)(sVar55 + sVar69) >> 8);
            auVar12[6] = (char)(sVar18 + sVar69);
            auVar12[7] = (char)((ushort)(sVar18 + sVar69) >> 8);
            auVar12._8_2_ = sVar92 + sVar70;
            auVar12._10_2_ = sVar93 + sVar70;
            auVar12._12_2_ = sVar94 + sVar71;
            auVar12._14_2_ = sVar95 + sVar71;
            uVar32 = NEON_sqrshrun(CONCAT17(uVar72,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,
                                                  CONCAT13(uVar64,CONCAT12(uVar63,sVar25 + sVar15)))
                                                  ))),auVar12,5,2);
            puVar37[0x20] = (char)uVar104;
            puVar37[0x21] = (char)uVar23;
            puVar37[0x22] = (char)uVar32;
            puVar37[0x23] = 0xff;
            puVar37[0x24] = (char)((ulong)uVar104 >> 8);
            puVar37[0x25] = (char)((ulong)uVar23 >> 8);
            puVar37[0x26] = (char)((ulong)uVar32 >> 8);
            puVar37[0x27] = 0xff;
            puVar37[0x28] = (char)((ulong)uVar104 >> 0x10);
            puVar37[0x29] = (char)((ulong)uVar23 >> 0x10);
            puVar37[0x2a] = (char)((ulong)uVar32 >> 0x10);
            puVar37[0x2b] = 0xff;
            puVar37[0x2c] = (char)((ulong)uVar104 >> 0x18);
            puVar37[0x2d] = (char)((ulong)uVar23 >> 0x18);
            puVar37[0x2e] = (char)((ulong)uVar32 >> 0x18);
            puVar37[0x2f] = 0xff;
            puVar37[0x30] = (char)((ulong)uVar104 >> 0x20);
            puVar37[0x31] = (char)((ulong)uVar23 >> 0x20);
            puVar37[0x32] = (char)((ulong)uVar32 >> 0x20);
            puVar37[0x33] = 0xff;
            puVar37[0x34] = (char)((ulong)uVar104 >> 0x28);
            puVar37[0x35] = (char)((ulong)uVar23 >> 0x28);
            puVar37[0x36] = (char)((ulong)uVar32 >> 0x28);
            puVar37[0x37] = 0xff;
            puVar37[0x38] = (char)((ulong)uVar104 >> 0x30);
            puVar37[0x39] = (char)((ulong)uVar23 >> 0x30);
            puVar37[0x3a] = (char)((ulong)uVar32 >> 0x30);
            puVar37[0x3b] = 0xff;
            puVar37[0x3c] = (char)((ulong)uVar104 >> 0x38);
            puVar37[0x3d] = (char)((ulong)uVar23 >> 0x38);
            puVar37[0x3e] = (char)((ulong)uVar32 >> 0x38);
            puVar37[0x3f] = 0xff;
            uVar36 = uVar36 + 0x10;
            puVar37 = puVar38;
            puVar40 = puVar39;
            uVar104 = 0xffffffffffffffff;
          } while ((int)uVar36 < (int)(param_4 - uVar2));
          pplVar44 = (long **)((long)pplVar34 + uVar36);
          pbVar43 = (byte *)((long)plVar33 + uVar36);
          pbVar47 = (byte *)(lVar42 + uVar36);
        }
        while (iVar35 = (int)uVar36, iVar35 < (int)param_4) {
          bVar6 = *(byte *)pplVar44;
          uVar7 = (uint)*(byte *)((long)pplVar44 + 1) * 0x10000 - 0x800000;
          pbVar45 = pbVar43 + 1;
          iVar3 = (int)((bVar6 - 0x80) * 0x330000 + 0x100000) >> 0x10;
          iVar1 = (int)((uint)*pbVar43 * 0x250000 + -0x2500000) >> 0x10;
          uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar5) {
            uVar5 = 0xff;
          }
          *puVar39 = (char)uVar5;
          iVar4 = (int)((uVar7 >> 0x10) * -0xc0000 + (bVar6 - 0x80) * -0x1a0000 + 0x100000) >> 0x10;
          uVar5 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar5) {
            uVar5 = 0xff;
          }
          puVar39[1] = (char)uVar5;
          uVar7 = (int)uVar7 >> 10 | 0x10;
          uVar5 = (int)(uVar7 + iVar1) >> 5 & ((int)(uVar7 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar5) {
            uVar5 = 0xff;
          }
          puVar39[2] = (char)uVar5;
          puVar39[3] = 0xff;
          if (param_4 - 1 == iVar35) {
            puVar39 = puVar39 + 4;
          }
          else {
            pbVar45 = pbVar43 + 2;
            iVar1 = (int)((uint)pbVar43[1] * 0x250000 + -0x2500000) >> 0x10;
            uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            puVar39[4] = (char)uVar5;
            uVar5 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            puVar39[5] = (char)uVar5;
            uVar5 = (int)(uVar7 + iVar1) >> 5 & ((int)(uVar7 + iVar1) >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            puVar39[6] = (char)uVar5;
            puVar39[7] = 0xff;
            puVar39 = puVar39 + 8;
          }
          pbVar46 = pbVar47;
          if (uVar41 != param_5 - 1) {
            pbVar46 = pbVar47 + 1;
            iVar1 = (int)((uint)*pbVar47 * 0x250000 + -0x2500000) >> 0x10;
            uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            *puVar38 = (char)uVar5;
            uVar5 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            puVar38[1] = (char)uVar5;
            uVar5 = (int)(uVar7 + iVar1) >> 5 & ((int)(uVar7 + iVar1) >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar5) {
              uVar5 = 0xff;
            }
            puVar38[2] = (char)uVar5;
            puVar38[3] = 0xff;
            if (param_4 - 1 == iVar35) {
              puVar38 = puVar38 + 4;
            }
            else {
              pbVar46 = pbVar47 + 2;
              iVar1 = (int)((uint)pbVar47[1] * 0x250000 + -0x2500000) >> 0x10;
              uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar5) {
                uVar5 = 0xff;
              }
              puVar38[4] = (char)uVar5;
              uVar5 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar5) {
                uVar5 = 0xff;
              }
              puVar38[5] = (char)uVar5;
              uVar5 = (int)(uVar7 + iVar1) >> 5 & ((int)(uVar7 + iVar1) >> 0x1f ^ 0xffffffffU);
              if (0xfe < (int)uVar5) {
                uVar5 = 0xff;
              }
              puVar38[6] = (char)uVar5;
              puVar38[7] = 0xff;
              puVar38 = puVar38 + 8;
            }
          }
          pplVar44 = (long **)((long)pplVar44 + 2);
          pbVar43 = pbVar45;
          pbVar47 = pbVar46;
          uVar36 = (ulong)(iVar35 + 2);
        }
        uVar41 = uVar41 + 2;
        pplVar34 = (long **)((long)pplVar34 + param_7);
        plVar33 = (long *)((long)plVar33 + param_6 * 2);
        lVar42 = lVar42 + param_6 * 2;
      } while (uVar41 < param_5);
    }
  }
  else {
    if (lRam00000001137ea820 != -1) {
      plStack_88 = &lStack_c8;
      pplStack_a8 = &plStack_88;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x1137ea820,&pplStack_a8,FUN_10a1aee38);
    }
    lStack_b8 = (long)(int)param_4;
    lStack_c0 = (long)(int)param_5;
    lStack_a0 = (long)((int)(param_5 + 1) / 2);
    lStack_98 = (long)((int)(param_4 + 1) / 2);
    uStack_cc = 0x30201;
    lStack_c8 = param_3;
    lStack_b0 = param_8;
    pplStack_a8 = param_2;
    lStack_90 = param_7;
    plStack_88 = param_1;
    lStack_80 = lStack_c0;
    lStack_78 = lStack_b8;
    lStack_70 = param_6;
    _vImageConvert_420Yp8_CbCr8ToARGB8888
              (&plStack_88,&pplStack_a8,&lStack_c8,0x1137ea830,&uStack_cc,0xff,0);
  }
  return;
}



/* Entry: 10a19c910; end: 10a19cd3f;  */

void FUN_10a19c910(long param_1,long param_2,long param_3,uint param_4,uint param_5,long param_6,
                  long param_7,long param_8,char param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  short sVar16;
  undefined1 auVar17 [16];
  short sVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte *pbVar29;
  ulong uVar30;
  char cVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  undefined8 in_d23;
  undefined8 uVar106;
  undefined8 in_d24;
  undefined8 uVar107;
  undefined8 in_d25;
  undefined8 uVar108;
  
  if (0 < (int)param_5) {
    uVar30 = 0;
    uVar2 = param_4 & 0xf;
    if (-1 < (int)-param_4) {
      uVar2 = -(-param_4 & 0xf);
    }
    lVar32 = param_1 + param_6;
    lVar33 = param_1;
    lVar34 = param_2;
    do {
      uVar36 = 0;
      pbVar29 = (byte *)(param_1 + uVar30 * param_6);
      pbVar41 = (byte *)(param_2 + (uVar30 >> 1) * param_7);
      puVar39 = (undefined1 *)(param_3 + uVar30 * param_8);
      puVar38 = puVar39 + param_8;
      pbVar44 = pbVar29 + param_6;
      if ((uVar30 != param_5 - 1) && (0 < (int)(param_4 - uVar2))) {
        uVar36 = 0;
        puVar37 = puVar38;
        puVar40 = puVar39;
        do {
          puVar39 = (undefined1 *)(lVar34 + uVar36);
          uVar61 = *puVar39;
          uVar73 = puVar39[1];
          uVar62 = puVar39[2];
          uVar74 = puVar39[3];
          uVar63 = puVar39[4];
          uVar75 = puVar39[5];
          uVar64 = puVar39[6];
          uVar76 = puVar39[7];
          uVar65 = puVar39[8];
          uVar77 = puVar39[9];
          uVar66 = puVar39[10];
          uVar78 = puVar39[0xb];
          uVar67 = puVar39[0xc];
          uVar79 = puVar39[0xd];
          uVar68 = puVar39[0xe];
          uVar80 = puVar39[0xf];
          cVar31 = -(param_9 != '\0');
          uVar19 = CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73))))))) ^
                   (CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73))))))) ^
                   CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61)))))))) &
                   CONCAT17(cVar31,CONCAT16(cVar31,CONCAT15(cVar31,CONCAT14(cVar31,CONCAT13(cVar31,
                                                  CONCAT12(cVar31,CONCAT11(cVar31,cVar31)))))));
          uVar13 = CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61))))))) ^
                   (CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61))))))) ^
                   CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73)))))))) &
                   CONCAT17(cVar31,CONCAT16(cVar31,CONCAT15(cVar31,CONCAT14(cVar31,CONCAT13(cVar31,
                                                  CONCAT12(cVar31,CONCAT11(cVar31,cVar31)))))));
          sVar16 = (byte)uVar19 - 0x80;
          sVar46 = (byte)(uVar19 >> 8) - 0x80;
          sVar95 = (byte)(uVar19 >> 0x10) - 0x80;
          sVar97 = (byte)(uVar19 >> 0x18) - 0x80;
          sVar81 = (byte)(uVar19 >> 0x20) - 0x80;
          sVar82 = (byte)(uVar19 >> 0x28) - 0x80;
          sVar83 = (byte)(uVar19 >> 0x30) - 0x80;
          sVar84 = (byte)(uVar19 >> 0x38) - 0x80;
          sVar45 = (byte)uVar13 - 0x80;
          sVar53 = (byte)(uVar13 >> 8) - 0x80;
          sVar54 = (byte)(uVar13 >> 0x10) - 0x80;
          sVar96 = (byte)(uVar13 >> 0x18) - 0x80;
          sVar69 = (byte)(uVar13 >> 0x20) - 0x80;
          sVar70 = (byte)(uVar13 >> 0x28) - 0x80;
          sVar71 = (byte)(uVar13 >> 0x30) - 0x80;
          sVar72 = (byte)(uVar13 >> 0x38) - 0x80;
          sVar98 = sVar45 * 0x33;
          sVar18 = sVar53 * 0x33;
          uVar67 = (undefined1)sVar18;
          uVar68 = (undefined1)((ushort)sVar18 >> 8);
          sVar18 = sVar54 * 0x33;
          uVar73 = (undefined1)sVar18;
          uVar74 = (undefined1)((ushort)sVar18 >> 8);
          sVar18 = sVar96 * 0x33;
          uVar75 = (undefined1)sVar18;
          uVar76 = (undefined1)((ushort)sVar18 >> 8);
          sVar85 = sVar69 * 0x33;
          sVar86 = sVar70 * 0x33;
          sVar87 = sVar71 * 0x33;
          sVar88 = sVar72 * 0x33;
          sVar18 = sVar16 * -0xc + sVar45 * -0x1a;
          sVar45 = sVar46 * -0xc + sVar53 * -0x1a;
          uVar77 = (undefined1)sVar45;
          uVar78 = (undefined1)((ushort)sVar45 >> 8);
          sVar45 = sVar95 * -0xc + sVar54 * -0x1a;
          uVar79 = (undefined1)sVar45;
          uVar80 = (undefined1)((ushort)sVar45 >> 8);
          sVar45 = sVar97 * -0xc + sVar96 * -0x1a;
          uVar89 = (undefined1)sVar45;
          uVar90 = (undefined1)((ushort)sVar45 >> 8);
          sVar91 = sVar81 * -0xc + sVar69 * -0x1a;
          sVar92 = sVar82 * -0xc + sVar70 * -0x1a;
          sVar93 = sVar83 * -0xc + sVar71 * -0x1a;
          sVar94 = sVar84 * -0xc + sVar72 * -0x1a;
          sVar16 = sVar16 * 0x40;
          sVar46 = sVar46 * 0x40;
          uVar61 = (undefined1)sVar46;
          uVar62 = (undefined1)((ushort)sVar46 >> 8);
          sVar95 = sVar95 * 0x40;
          uVar63 = (undefined1)sVar95;
          uVar64 = (undefined1)((ushort)sVar95 >> 8);
          sVar97 = sVar97 * 0x40;
          uVar65 = (undefined1)sVar97;
          uVar66 = (undefined1)((ushort)sVar97 >> 8);
          sVar81 = sVar81 * 0x40;
          sVar82 = sVar82 * 0x40;
          sVar83 = sVar83 * 0x40;
          sVar84 = sVar84 * 0x40;
          uVar8 = CONCAT13(uVar68,CONCAT12(uVar67,sVar98));
          uVar9 = CONCAT15(uVar74,CONCAT14(uVar73,uVar8));
          uVar10 = CONCAT13(uVar68,CONCAT12(uVar67,sVar98));
          uVar11 = CONCAT15(uVar74,CONCAT14(uVar73,uVar10));
          sVar45 = (short)((uint)uVar10 >> 0x10);
          sVar47 = (short)((uint6)uVar11 >> 0x20);
          sVar50 = (short)(CONCAT17(uVar76,CONCAT16(uVar75,uVar11)) >> 0x30);
          sVar53 = (short)((uint)uVar8 >> 0x10);
          sVar55 = (short)((uint6)uVar9 >> 0x20);
          sVar58 = (short)(CONCAT17(uVar76,CONCAT16(uVar75,uVar9)) >> 0x30);
          uVar8 = CONCAT13(uVar78,CONCAT12(uVar77,sVar18));
          uVar9 = CONCAT15(uVar80,CONCAT14(uVar79,uVar8));
          uVar10 = CONCAT13(uVar78,CONCAT12(uVar77,sVar18));
          uVar11 = CONCAT15(uVar80,CONCAT14(uVar79,uVar10));
          sVar46 = (short)((uint)uVar10 >> 0x10);
          sVar48 = (short)((uint6)uVar11 >> 0x20);
          sVar51 = (short)(CONCAT17(uVar90,CONCAT16(uVar89,uVar11)) >> 0x30);
          sVar54 = (short)((uint)uVar8 >> 0x10);
          sVar56 = (short)((uint6)uVar9 >> 0x20);
          sVar59 = (short)(CONCAT17(uVar90,CONCAT16(uVar89,uVar9)) >> 0x30);
          uVar67 = (undefined1)((ushort)sVar92 >> 8);
          uVar8 = CONCAT13(uVar62,CONCAT12(uVar61,sVar16));
          uVar9 = CONCAT15(uVar64,CONCAT14(uVar63,uVar8));
          uVar10 = CONCAT13(uVar62,CONCAT12(uVar61,sVar16));
          uVar11 = CONCAT15(uVar64,CONCAT14(uVar63,uVar10));
          sVar95 = (short)((uint)uVar10 >> 0x10);
          sVar49 = (short)((uint6)uVar11 >> 0x20);
          sVar52 = (short)(CONCAT17(uVar66,CONCAT16(uVar65,uVar11)) >> 0x30);
          sVar96 = (short)((uint)uVar8 >> 0x10);
          sVar57 = (short)((uint6)uVar9 >> 0x20);
          sVar60 = (short)(CONCAT17(uVar66,CONCAT16(uVar65,uVar9)) >> 0x30);
          uVar24 = *(undefined8 *)(lVar33 + uVar36);
          sVar70 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar99 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar100 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar102 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar104 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          sVar97 = sVar45 + sVar72;
          sVar69 = sVar53 + sVar101;
          sVar103 = sVar46 + sVar72;
          sVar105 = sVar54 + sVar101;
          sVar72 = sVar95 + sVar72;
          sVar101 = sVar96 + sVar101;
          auVar22[2] = (char)(sVar98 + sVar71);
          auVar22._0_2_ = sVar98 + sVar70;
          auVar22[3] = (char)((ushort)(sVar98 + sVar71) >> 8);
          auVar22[4] = (char)sVar97;
          auVar22[5] = (char)((ushort)sVar97 >> 8);
          auVar22[6] = (char)sVar69;
          auVar22[7] = (char)((ushort)sVar69 >> 8);
          auVar22._8_2_ = sVar47 + sVar99;
          auVar22._10_2_ = sVar55 + sVar100;
          auVar22._12_2_ = sVar50 + sVar102;
          auVar22._14_2_ = sVar58 + sVar104;
          uVar108 = NEON_sqrshrun(in_d25,auVar22,5,2);
          auVar27[2] = (char)(sVar18 + sVar71);
          auVar27._0_2_ = sVar18 + sVar70;
          auVar27[3] = (char)((ushort)(sVar18 + sVar71) >> 8);
          auVar27[4] = (char)sVar103;
          auVar27[5] = (char)((ushort)sVar103 >> 8);
          auVar27[6] = (char)sVar105;
          auVar27[7] = (char)((ushort)sVar105 >> 8);
          auVar27._8_2_ = sVar48 + sVar99;
          auVar27._10_2_ = sVar56 + sVar100;
          auVar27._12_2_ = sVar51 + sVar102;
          auVar27._14_2_ = sVar59 + sVar104;
          uVar107 = NEON_sqrshrun(in_d24,auVar27,5,2);
          auVar25[2] = (char)(sVar16 + sVar71);
          auVar25._0_2_ = sVar16 + sVar70;
          auVar25[3] = (char)((ushort)(sVar16 + sVar71) >> 8);
          auVar25[4] = (char)sVar72;
          auVar25[5] = (char)((ushort)sVar72 >> 8);
          auVar25[6] = (char)sVar101;
          auVar25[7] = (char)((ushort)sVar101 >> 8);
          auVar25._8_2_ = sVar49 + sVar99;
          auVar25._10_2_ = sVar57 + sVar100;
          auVar25._12_2_ = sVar52 + sVar102;
          auVar25._14_2_ = sVar60 + sVar104;
          uVar106 = NEON_sqrshrun(in_d23,auVar25,5,2);
          puVar39 = puVar40 + 0x30;
          *puVar40 = (char)uVar106;
          puVar40[1] = (char)uVar107;
          puVar40[2] = (char)uVar108;
          puVar40[3] = (char)((ulong)uVar106 >> 8);
          puVar40[4] = (char)((ulong)uVar107 >> 8);
          puVar40[5] = (char)((ulong)uVar108 >> 8);
          puVar40[6] = (char)((ulong)uVar106 >> 0x10);
          puVar40[7] = (char)((ulong)uVar107 >> 0x10);
          puVar40[8] = (char)((ulong)uVar108 >> 0x10);
          puVar40[9] = (char)((ulong)uVar106 >> 0x18);
          puVar40[10] = (char)((ulong)uVar107 >> 0x18);
          puVar40[0xb] = (char)((ulong)uVar108 >> 0x18);
          puVar40[0xc] = (char)((ulong)uVar106 >> 0x20);
          puVar40[0xd] = (char)((ulong)uVar107 >> 0x20);
          puVar40[0xe] = (char)((ulong)uVar108 >> 0x20);
          puVar40[0xf] = (char)((ulong)uVar106 >> 0x28);
          puVar40[0x10] = (char)((ulong)uVar107 >> 0x28);
          puVar40[0x11] = (char)((ulong)uVar108 >> 0x28);
          puVar40[0x12] = (char)((ulong)uVar106 >> 0x30);
          puVar40[0x13] = (char)((ulong)uVar107 >> 0x30);
          puVar40[0x14] = (char)((ulong)uVar108 >> 0x30);
          puVar40[0x15] = (char)((ulong)uVar106 >> 0x38);
          puVar40[0x16] = (char)((ulong)uVar107 >> 0x38);
          puVar40[0x17] = (char)((ulong)uVar108 >> 0x38);
          uVar24 = ((undefined8 *)(lVar33 + uVar36))[1];
          sVar97 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar69 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar70 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar103 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar105 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          uVar68 = (undefined1)(sVar69 + sVar91);
          uVar73 = (undefined1)((ushort)(sVar69 + sVar91) >> 8);
          uVar74 = (undefined1)(sVar70 + sVar92);
          uVar75 = (undefined1)((ushort)(sVar70 + sVar92) >> 8);
          uVar76 = (undefined1)(sVar71 + sVar92);
          uVar77 = (undefined1)((ushort)(sVar71 + sVar92) >> 8);
          auVar23[2] = (char)(sVar69 + sVar85);
          auVar23._0_2_ = sVar97 + sVar85;
          auVar23[3] = (char)((ushort)(sVar69 + sVar85) >> 8);
          auVar23[4] = (char)(sVar70 + sVar86);
          auVar23[5] = (char)((ushort)(sVar70 + sVar86) >> 8);
          auVar23[6] = (char)(sVar71 + sVar86);
          auVar23[7] = (char)((ushort)(sVar71 + sVar86) >> 8);
          auVar23._8_2_ = sVar72 + sVar87;
          auVar23._10_2_ = sVar101 + sVar87;
          auVar23._12_2_ = sVar103 + sVar88;
          auVar23._14_2_ = sVar105 + sVar88;
          in_d25 = NEON_sqrshrun(uVar108,auVar23,5,2);
          auVar28[2] = uVar68;
          auVar28._0_2_ = sVar97 + sVar91;
          auVar28[3] = uVar73;
          auVar28[4] = uVar74;
          auVar28[5] = uVar75;
          auVar28[6] = uVar76;
          auVar28[7] = uVar77;
          auVar28._8_2_ = sVar72 + sVar93;
          auVar28._10_2_ = sVar101 + sVar93;
          auVar28._12_2_ = sVar103 + sVar94;
          auVar28._14_2_ = sVar105 + sVar94;
          in_d24 = NEON_sqrshrun(uVar107,auVar28,5,2);
          auVar26[2] = (char)(sVar69 + sVar81);
          auVar26._0_2_ = sVar97 + sVar81;
          auVar26[3] = (char)((ushort)(sVar69 + sVar81) >> 8);
          auVar26[4] = (char)(sVar70 + sVar82);
          auVar26[5] = (char)((ushort)(sVar70 + sVar82) >> 8);
          auVar26[6] = (char)(sVar71 + sVar82);
          auVar26[7] = (char)((ushort)(sVar71 + sVar82) >> 8);
          auVar26._8_2_ = sVar72 + sVar83;
          auVar26._10_2_ = sVar101 + sVar83;
          auVar26._12_2_ = sVar103 + sVar84;
          auVar26._14_2_ = sVar105 + sVar84;
          in_d23 = NEON_sqrshrun(uVar106,auVar26,5,2);
          puVar40[0x18] = (char)in_d23;
          puVar40[0x19] = (char)in_d24;
          puVar40[0x1a] = (char)in_d25;
          puVar40[0x1b] = (char)((ulong)in_d23 >> 8);
          puVar40[0x1c] = (char)((ulong)in_d24 >> 8);
          puVar40[0x1d] = (char)((ulong)in_d25 >> 8);
          puVar40[0x1e] = (char)((ulong)in_d23 >> 0x10);
          puVar40[0x1f] = (char)((ulong)in_d24 >> 0x10);
          puVar40[0x20] = (char)((ulong)in_d25 >> 0x10);
          puVar40[0x21] = (char)((ulong)in_d23 >> 0x18);
          puVar40[0x22] = (char)((ulong)in_d24 >> 0x18);
          puVar40[0x23] = (char)((ulong)in_d25 >> 0x18);
          puVar40[0x24] = (char)((ulong)in_d23 >> 0x20);
          puVar40[0x25] = (char)((ulong)in_d24 >> 0x20);
          puVar40[0x26] = (char)((ulong)in_d25 >> 0x20);
          puVar40[0x27] = (char)((ulong)in_d23 >> 0x28);
          puVar40[0x28] = (char)((ulong)in_d24 >> 0x28);
          puVar40[0x29] = (char)((ulong)in_d25 >> 0x28);
          puVar40[0x2a] = (char)((ulong)in_d23 >> 0x30);
          puVar40[0x2b] = (char)((ulong)in_d24 >> 0x30);
          puVar40[0x2c] = (char)((ulong)in_d25 >> 0x30);
          puVar40[0x2d] = (char)((ulong)in_d23 >> 0x38);
          puVar40[0x2e] = (char)((ulong)in_d24 >> 0x38);
          puVar40[0x2f] = (char)((ulong)in_d25 >> 0x38);
          uVar24 = *(undefined8 *)(lVar32 + uVar36);
          sVar69 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar70 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar103 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar105 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar99 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          sVar45 = sVar71 + sVar45;
          sVar53 = sVar72 + sVar53;
          sVar46 = sVar71 + sVar46;
          sVar54 = sVar72 + sVar54;
          uVar61 = (undefined1)(sVar70 + sVar16);
          uVar62 = (undefined1)((ushort)(sVar70 + sVar16) >> 8);
          sVar95 = sVar71 + sVar95;
          uVar63 = (undefined1)sVar95;
          uVar64 = (undefined1)((ushort)sVar95 >> 8);
          sVar96 = sVar72 + sVar96;
          uVar65 = (undefined1)sVar96;
          uVar66 = (undefined1)((ushort)sVar96 >> 8);
          auVar14[2] = (char)(sVar70 + sVar98);
          auVar14._0_2_ = sVar69 + sVar98;
          auVar14[3] = (char)((ushort)(sVar70 + sVar98) >> 8);
          auVar14[4] = (char)sVar45;
          auVar14[5] = (char)((ushort)sVar45 >> 8);
          auVar14[6] = (char)sVar53;
          auVar14[7] = (char)((ushort)sVar53 >> 8);
          auVar14._8_2_ = sVar101 + sVar47;
          auVar14._10_2_ = sVar103 + sVar55;
          auVar14._12_2_ = sVar105 + sVar50;
          auVar14._14_2_ = sVar99 + sVar58;
          uVar107 = NEON_sqrshrun(CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,
                                                  CONCAT13(uVar73,CONCAT12(uVar68,sVar97 + sVar91)))
                                                  ))),auVar14,5,2);
          auVar20[2] = (char)(sVar70 + sVar18);
          auVar20._0_2_ = sVar69 + sVar18;
          auVar20[3] = (char)((ushort)(sVar70 + sVar18) >> 8);
          auVar20[4] = (char)sVar46;
          auVar20[5] = (char)((ushort)sVar46 >> 8);
          auVar20[6] = (char)sVar54;
          auVar20[7] = (char)((ushort)sVar54 >> 8);
          auVar20._8_2_ = sVar101 + sVar48;
          auVar20._10_2_ = sVar103 + sVar56;
          auVar20._12_2_ = sVar105 + sVar51;
          auVar20._14_2_ = sVar99 + sVar59;
          uVar106 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar72 >> 8),
                                           CONCAT16((char)sVar72,
                                                    CONCAT15((char)((ushort)sVar71 >> 8),
                                                             CONCAT14((char)sVar71,
                                                                      CONCAT13((char)((ushort)sVar70
                                                                                     >> 8),
                                                                               CONCAT12((char)sVar70
                                                                                        ,sVar69)))))
                                          ),auVar20,5,2);
          auVar21[2] = uVar61;
          auVar21._0_2_ = sVar69 + sVar16;
          auVar21[3] = uVar62;
          auVar21[4] = uVar63;
          auVar21[5] = uVar64;
          auVar21[6] = uVar65;
          auVar21[7] = uVar66;
          auVar21._8_2_ = sVar101 + sVar49;
          auVar21._10_2_ = sVar103 + sVar57;
          auVar21._12_2_ = sVar105 + sVar52;
          auVar21._14_2_ = sVar99 + sVar60;
          uVar24 = NEON_sqrshrun(uVar24,auVar21,5,2);
          puVar38 = puVar37 + 0x30;
          *puVar37 = (char)uVar24;
          puVar37[1] = (char)uVar106;
          puVar37[2] = (char)uVar107;
          puVar37[3] = (char)((ulong)uVar24 >> 8);
          puVar37[4] = (char)((ulong)uVar106 >> 8);
          puVar37[5] = (char)((ulong)uVar107 >> 8);
          puVar37[6] = (char)((ulong)uVar24 >> 0x10);
          puVar37[7] = (char)((ulong)uVar106 >> 0x10);
          puVar37[8] = (char)((ulong)uVar107 >> 0x10);
          puVar37[9] = (char)((ulong)uVar24 >> 0x18);
          puVar37[10] = (char)((ulong)uVar106 >> 0x18);
          puVar37[0xb] = (char)((ulong)uVar107 >> 0x18);
          puVar37[0xc] = (char)((ulong)uVar24 >> 0x20);
          puVar37[0xd] = (char)((ulong)uVar106 >> 0x20);
          puVar37[0xe] = (char)((ulong)uVar107 >> 0x20);
          puVar37[0xf] = (char)((ulong)uVar24 >> 0x28);
          puVar37[0x10] = (char)((ulong)uVar106 >> 0x28);
          puVar37[0x11] = (char)((ulong)uVar107 >> 0x28);
          puVar37[0x12] = (char)((ulong)uVar24 >> 0x30);
          puVar37[0x13] = (char)((ulong)uVar106 >> 0x30);
          puVar37[0x14] = (char)((ulong)uVar107 >> 0x30);
          puVar37[0x15] = (char)((ulong)uVar24 >> 0x38);
          puVar37[0x16] = (char)((ulong)uVar106 >> 0x38);
          puVar37[0x17] = (char)((ulong)uVar107 >> 0x38);
          uVar24 = ((undefined8 *)(lVar32 + uVar36))[1];
          sVar45 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar53 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar46 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar54 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar95 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar96 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar97 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar98 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          auVar15[2] = (char)(sVar53 + sVar85);
          auVar15._0_2_ = sVar45 + sVar85;
          auVar15[3] = (char)((ushort)(sVar53 + sVar85) >> 8);
          auVar15[4] = (char)(sVar46 + sVar86);
          auVar15[5] = (char)((ushort)(sVar46 + sVar86) >> 8);
          auVar15[6] = (char)(sVar54 + sVar86);
          auVar15[7] = (char)((ushort)(sVar54 + sVar86) >> 8);
          auVar15._8_2_ = sVar95 + sVar87;
          auVar15._10_2_ = sVar96 + sVar87;
          auVar15._12_2_ = sVar97 + sVar88;
          auVar15._14_2_ = sVar98 + sVar88;
          uVar107 = NEON_sqrshrun(CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,
                                                  CONCAT13(uVar62,CONCAT12(uVar61,sVar69 + sVar16)))
                                                  ))),auVar15,5,2);
          auVar17[2] = (char)(sVar53 + sVar91);
          auVar17._0_2_ = sVar45 + sVar91;
          auVar17[3] = (char)((ushort)(sVar53 + sVar91) >> 8);
          auVar17[4] = (char)(sVar46 + sVar92);
          auVar17[5] = (char)((ushort)(sVar46 + sVar92) >> 8);
          auVar17[6] = (char)(sVar54 + sVar92);
          auVar17[7] = (char)((ushort)(sVar54 + sVar92) >> 8);
          auVar17._8_2_ = sVar95 + sVar93;
          auVar17._10_2_ = sVar96 + sVar93;
          auVar17._12_2_ = sVar97 + sVar94;
          auVar17._14_2_ = sVar98 + sVar94;
          uVar106 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar54 >> 8),
                                           CONCAT16((char)sVar54,
                                                    CONCAT15((char)((ushort)sVar46 >> 8),
                                                             CONCAT14((char)sVar46,
                                                                      CONCAT13((char)((ushort)sVar53
                                                                                     >> 8),
                                                                               CONCAT12((char)sVar53
                                                                                        ,sVar45)))))
                                          ),auVar17,5,2);
          auVar12[2] = (char)(sVar53 + sVar81);
          auVar12._0_2_ = sVar45 + sVar81;
          auVar12[3] = (char)((ushort)(sVar53 + sVar81) >> 8);
          auVar12[4] = (char)(sVar46 + sVar82);
          auVar12[5] = (char)((ushort)(sVar46 + sVar82) >> 8);
          auVar12[6] = (char)(sVar54 + sVar82);
          auVar12[7] = (char)((ushort)(sVar54 + sVar82) >> 8);
          auVar12._8_2_ = sVar95 + sVar83;
          auVar12._10_2_ = sVar96 + sVar83;
          auVar12._12_2_ = sVar97 + sVar84;
          auVar12._14_2_ = sVar98 + sVar84;
          uVar24 = NEON_sqrshrun(CONCAT17(uVar67,CONCAT16((char)sVar92,
                                                          CONCAT15(uVar67,CONCAT14((char)sVar92,
                                                                                   CONCAT13((char)((
                                                  ushort)sVar91 >> 8),CONCAT12((char)sVar91,sVar91))
                                                  )))),auVar12,5,2);
          puVar37[0x18] = (char)uVar24;
          puVar37[0x19] = (char)uVar106;
          puVar37[0x1a] = (char)uVar107;
          puVar37[0x1b] = (char)((ulong)uVar24 >> 8);
          puVar37[0x1c] = (char)((ulong)uVar106 >> 8);
          puVar37[0x1d] = (char)((ulong)uVar107 >> 8);
          puVar37[0x1e] = (char)((ulong)uVar24 >> 0x10);
          puVar37[0x1f] = (char)((ulong)uVar106 >> 0x10);
          puVar37[0x20] = (char)((ulong)uVar107 >> 0x10);
          puVar37[0x21] = (char)((ulong)uVar24 >> 0x18);
          puVar37[0x22] = (char)((ulong)uVar106 >> 0x18);
          puVar37[0x23] = (char)((ulong)uVar107 >> 0x18);
          puVar37[0x24] = (char)((ulong)uVar24 >> 0x20);
          puVar37[0x25] = (char)((ulong)uVar106 >> 0x20);
          puVar37[0x26] = (char)((ulong)uVar107 >> 0x20);
          puVar37[0x27] = (char)((ulong)uVar24 >> 0x28);
          puVar37[0x28] = (char)((ulong)uVar106 >> 0x28);
          puVar37[0x29] = (char)((ulong)uVar107 >> 0x28);
          puVar37[0x2a] = (char)((ulong)uVar24 >> 0x30);
          puVar37[0x2b] = (char)((ulong)uVar106 >> 0x30);
          puVar37[0x2c] = (char)((ulong)uVar107 >> 0x30);
          puVar37[0x2d] = (char)((ulong)uVar24 >> 0x38);
          puVar37[0x2e] = (char)((ulong)uVar106 >> 0x38);
          puVar37[0x2f] = (char)((ulong)uVar107 >> 0x38);
          uVar36 = uVar36 + 0x10;
          puVar37 = puVar38;
          puVar40 = puVar39;
        } while ((int)uVar36 < (int)(param_4 - uVar2));
        pbVar41 = (byte *)(lVar34 + uVar36);
        pbVar29 = (byte *)(lVar33 + uVar36);
        pbVar44 = (byte *)(lVar32 + uVar36);
      }
      while (iVar35 = (int)uVar36, iVar35 < (int)param_4) {
        uVar6 = (uint)pbVar41[1];
        uVar5 = (uint)*pbVar41;
        if (param_9 == '\0') {
          uVar6 = (uint)*pbVar41;
          uVar5 = (uint)pbVar41[1];
        }
        uVar7 = uVar5 * 0x10000 - 0x800000;
        pbVar42 = pbVar29 + 1;
        iVar3 = (int)((uVar6 - 0x80) * 0x330000 + 0x100000) >> 0x10;
        iVar1 = (int)((uint)*pbVar29 * 0x250000 + -0x2500000) >> 0x10;
        uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar5) {
          uVar5 = 0xff;
        }
        puVar39[2] = (char)uVar5;
        iVar4 = (int)((uVar6 - 0x80) * -0x1a0000 + (uVar7 >> 0x10) * -0xc0000 + 0x100000) >> 0x10;
        uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar39[1] = (char)uVar6;
        uVar5 = (int)uVar7 >> 10 | 0x10;
        uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        *puVar39 = (char)uVar6;
        if (param_4 - 1 == iVar35) {
          puVar39 = puVar39 + 3;
        }
        else {
          pbVar42 = pbVar29 + 2;
          iVar1 = (int)((uint)pbVar29[1] * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[5] = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[4] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[3] = (char)uVar6;
          puVar39 = puVar39 + 6;
        }
        pbVar43 = pbVar44;
        if (uVar30 != param_5 - 1) {
          pbVar43 = pbVar44 + 1;
          iVar1 = (int)((uint)*pbVar44 * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[2] = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[1] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar38 = (char)uVar6;
          if (param_4 - 1 == iVar35) {
            puVar38 = puVar38 + 3;
          }
          else {
            pbVar43 = pbVar44 + 2;
            iVar1 = (int)((uint)pbVar44[1] * 0x250000 + -0x2500000) >> 0x10;
            uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[5] = (char)uVar6;
            uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[4] = (char)uVar6;
            uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[3] = (char)uVar6;
            puVar38 = puVar38 + 6;
          }
        }
        pbVar41 = pbVar41 + 2;
        pbVar29 = pbVar42;
        pbVar44 = pbVar43;
        uVar36 = (ulong)(iVar35 + 2);
      }
      uVar30 = uVar30 + 2;
      lVar34 = lVar34 + param_7;
      lVar33 = lVar33 + param_6 * 2;
      lVar32 = lVar32 + param_6 * 2;
    } while (uVar30 < param_5);
  }
  return;
}



/* Entry: 10a19cd40; end: 10a19d16f;  */

void FUN_10a19cd40(long param_1,long param_2,long param_3,uint param_4,uint param_5,long param_6,
                  long param_7,long param_8,char param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined6 uVar9;
  undefined4 uVar10;
  undefined6 uVar11;
  undefined1 auVar12 [16];
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  short sVar16;
  undefined1 auVar17 [16];
  short sVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte *pbVar29;
  ulong uVar30;
  char cVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  undefined1 *puVar37;
  undefined1 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  byte *pbVar41;
  byte *pbVar42;
  byte *pbVar43;
  byte *pbVar44;
  short sVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  short sVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  short sVar57;
  short sVar58;
  short sVar59;
  short sVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  short sVar69;
  short sVar70;
  short sVar71;
  short sVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  short sVar81;
  short sVar82;
  short sVar83;
  short sVar84;
  short sVar85;
  short sVar86;
  short sVar87;
  short sVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  short sVar91;
  short sVar92;
  short sVar93;
  short sVar94;
  short sVar95;
  short sVar96;
  short sVar97;
  short sVar98;
  short sVar99;
  short sVar100;
  short sVar101;
  short sVar102;
  short sVar103;
  short sVar104;
  short sVar105;
  undefined8 in_d23;
  undefined8 uVar106;
  undefined8 in_d24;
  undefined8 uVar107;
  undefined8 in_d25;
  undefined8 uVar108;
  
  if (0 < (int)param_5) {
    uVar30 = 0;
    uVar2 = param_4 & 0xf;
    if (-1 < (int)-param_4) {
      uVar2 = -(-param_4 & 0xf);
    }
    lVar32 = param_1 + param_6;
    lVar33 = param_1;
    lVar34 = param_2;
    do {
      uVar36 = 0;
      pbVar29 = (byte *)(param_1 + uVar30 * param_6);
      pbVar41 = (byte *)(param_2 + (uVar30 >> 1) * param_7);
      puVar39 = (undefined1 *)(param_3 + uVar30 * param_8);
      puVar38 = puVar39 + param_8;
      pbVar44 = pbVar29 + param_6;
      if ((uVar30 != param_5 - 1) && (0 < (int)(param_4 - uVar2))) {
        uVar36 = 0;
        puVar37 = puVar38;
        puVar40 = puVar39;
        do {
          puVar39 = (undefined1 *)(lVar34 + uVar36);
          uVar61 = *puVar39;
          uVar73 = puVar39[1];
          uVar62 = puVar39[2];
          uVar74 = puVar39[3];
          uVar63 = puVar39[4];
          uVar75 = puVar39[5];
          uVar64 = puVar39[6];
          uVar76 = puVar39[7];
          uVar65 = puVar39[8];
          uVar77 = puVar39[9];
          uVar66 = puVar39[10];
          uVar78 = puVar39[0xb];
          uVar67 = puVar39[0xc];
          uVar79 = puVar39[0xd];
          uVar68 = puVar39[0xe];
          uVar80 = puVar39[0xf];
          cVar31 = -(param_9 != '\0');
          uVar19 = CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73))))))) ^
                   (CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73))))))) ^
                   CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61)))))))) &
                   CONCAT17(cVar31,CONCAT16(cVar31,CONCAT15(cVar31,CONCAT14(cVar31,CONCAT13(cVar31,
                                                  CONCAT12(cVar31,CONCAT11(cVar31,cVar31)))))));
          uVar13 = CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61))))))) ^
                   (CONCAT17(uVar68,CONCAT16(uVar67,CONCAT15(uVar66,CONCAT14(uVar65,CONCAT13(uVar64,
                                                  CONCAT12(uVar63,CONCAT11(uVar62,uVar61))))))) ^
                   CONCAT17(uVar80,CONCAT16(uVar79,CONCAT15(uVar78,CONCAT14(uVar77,CONCAT13(uVar76,
                                                  CONCAT12(uVar75,CONCAT11(uVar74,uVar73)))))))) &
                   CONCAT17(cVar31,CONCAT16(cVar31,CONCAT15(cVar31,CONCAT14(cVar31,CONCAT13(cVar31,
                                                  CONCAT12(cVar31,CONCAT11(cVar31,cVar31)))))));
          sVar16 = (byte)uVar19 - 0x80;
          sVar46 = (byte)(uVar19 >> 8) - 0x80;
          sVar95 = (byte)(uVar19 >> 0x10) - 0x80;
          sVar97 = (byte)(uVar19 >> 0x18) - 0x80;
          sVar81 = (byte)(uVar19 >> 0x20) - 0x80;
          sVar82 = (byte)(uVar19 >> 0x28) - 0x80;
          sVar83 = (byte)(uVar19 >> 0x30) - 0x80;
          sVar84 = (byte)(uVar19 >> 0x38) - 0x80;
          sVar45 = (byte)uVar13 - 0x80;
          sVar53 = (byte)(uVar13 >> 8) - 0x80;
          sVar54 = (byte)(uVar13 >> 0x10) - 0x80;
          sVar96 = (byte)(uVar13 >> 0x18) - 0x80;
          sVar69 = (byte)(uVar13 >> 0x20) - 0x80;
          sVar70 = (byte)(uVar13 >> 0x28) - 0x80;
          sVar71 = (byte)(uVar13 >> 0x30) - 0x80;
          sVar72 = (byte)(uVar13 >> 0x38) - 0x80;
          sVar98 = sVar45 * 0x33;
          sVar18 = sVar53 * 0x33;
          uVar67 = (undefined1)sVar18;
          uVar68 = (undefined1)((ushort)sVar18 >> 8);
          sVar18 = sVar54 * 0x33;
          uVar73 = (undefined1)sVar18;
          uVar74 = (undefined1)((ushort)sVar18 >> 8);
          sVar18 = sVar96 * 0x33;
          uVar75 = (undefined1)sVar18;
          uVar76 = (undefined1)((ushort)sVar18 >> 8);
          sVar85 = sVar69 * 0x33;
          sVar86 = sVar70 * 0x33;
          sVar87 = sVar71 * 0x33;
          sVar88 = sVar72 * 0x33;
          sVar18 = sVar16 * -0xc + sVar45 * -0x1a;
          sVar45 = sVar46 * -0xc + sVar53 * -0x1a;
          uVar77 = (undefined1)sVar45;
          uVar78 = (undefined1)((ushort)sVar45 >> 8);
          sVar45 = sVar95 * -0xc + sVar54 * -0x1a;
          uVar79 = (undefined1)sVar45;
          uVar80 = (undefined1)((ushort)sVar45 >> 8);
          sVar45 = sVar97 * -0xc + sVar96 * -0x1a;
          uVar89 = (undefined1)sVar45;
          uVar90 = (undefined1)((ushort)sVar45 >> 8);
          sVar91 = sVar81 * -0xc + sVar69 * -0x1a;
          sVar92 = sVar82 * -0xc + sVar70 * -0x1a;
          sVar93 = sVar83 * -0xc + sVar71 * -0x1a;
          sVar94 = sVar84 * -0xc + sVar72 * -0x1a;
          sVar16 = sVar16 * 0x40;
          sVar46 = sVar46 * 0x40;
          uVar61 = (undefined1)sVar46;
          uVar62 = (undefined1)((ushort)sVar46 >> 8);
          sVar95 = sVar95 * 0x40;
          uVar63 = (undefined1)sVar95;
          uVar64 = (undefined1)((ushort)sVar95 >> 8);
          sVar97 = sVar97 * 0x40;
          uVar65 = (undefined1)sVar97;
          uVar66 = (undefined1)((ushort)sVar97 >> 8);
          sVar81 = sVar81 * 0x40;
          sVar82 = sVar82 * 0x40;
          sVar83 = sVar83 * 0x40;
          sVar84 = sVar84 * 0x40;
          uVar8 = CONCAT13(uVar68,CONCAT12(uVar67,sVar98));
          uVar9 = CONCAT15(uVar74,CONCAT14(uVar73,uVar8));
          uVar10 = CONCAT13(uVar68,CONCAT12(uVar67,sVar98));
          uVar11 = CONCAT15(uVar74,CONCAT14(uVar73,uVar10));
          sVar45 = (short)((uint)uVar10 >> 0x10);
          sVar47 = (short)((uint6)uVar11 >> 0x20);
          sVar50 = (short)(CONCAT17(uVar76,CONCAT16(uVar75,uVar11)) >> 0x30);
          sVar53 = (short)((uint)uVar8 >> 0x10);
          sVar55 = (short)((uint6)uVar9 >> 0x20);
          sVar58 = (short)(CONCAT17(uVar76,CONCAT16(uVar75,uVar9)) >> 0x30);
          uVar8 = CONCAT13(uVar78,CONCAT12(uVar77,sVar18));
          uVar9 = CONCAT15(uVar80,CONCAT14(uVar79,uVar8));
          uVar10 = CONCAT13(uVar78,CONCAT12(uVar77,sVar18));
          uVar11 = CONCAT15(uVar80,CONCAT14(uVar79,uVar10));
          sVar46 = (short)((uint)uVar10 >> 0x10);
          sVar48 = (short)((uint6)uVar11 >> 0x20);
          sVar51 = (short)(CONCAT17(uVar90,CONCAT16(uVar89,uVar11)) >> 0x30);
          sVar54 = (short)((uint)uVar8 >> 0x10);
          sVar56 = (short)((uint6)uVar9 >> 0x20);
          sVar59 = (short)(CONCAT17(uVar90,CONCAT16(uVar89,uVar9)) >> 0x30);
          uVar67 = (undefined1)((ushort)sVar92 >> 8);
          uVar8 = CONCAT13(uVar62,CONCAT12(uVar61,sVar16));
          uVar9 = CONCAT15(uVar64,CONCAT14(uVar63,uVar8));
          uVar10 = CONCAT13(uVar62,CONCAT12(uVar61,sVar16));
          uVar11 = CONCAT15(uVar64,CONCAT14(uVar63,uVar10));
          sVar95 = (short)((uint)uVar10 >> 0x10);
          sVar49 = (short)((uint6)uVar11 >> 0x20);
          sVar52 = (short)(CONCAT17(uVar66,CONCAT16(uVar65,uVar11)) >> 0x30);
          sVar96 = (short)((uint)uVar8 >> 0x10);
          sVar57 = (short)((uint6)uVar9 >> 0x20);
          sVar60 = (short)(CONCAT17(uVar66,CONCAT16(uVar65,uVar9)) >> 0x30);
          uVar24 = *(undefined8 *)(lVar33 + uVar36);
          sVar70 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar99 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar100 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar102 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar104 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          sVar97 = sVar45 + sVar72;
          sVar69 = sVar53 + sVar101;
          sVar103 = sVar46 + sVar72;
          sVar105 = sVar54 + sVar101;
          sVar72 = sVar95 + sVar72;
          sVar101 = sVar96 + sVar101;
          auVar22[2] = (char)(sVar98 + sVar71);
          auVar22._0_2_ = sVar98 + sVar70;
          auVar22[3] = (char)((ushort)(sVar98 + sVar71) >> 8);
          auVar22[4] = (char)sVar97;
          auVar22[5] = (char)((ushort)sVar97 >> 8);
          auVar22[6] = (char)sVar69;
          auVar22[7] = (char)((ushort)sVar69 >> 8);
          auVar22._8_2_ = sVar47 + sVar99;
          auVar22._10_2_ = sVar55 + sVar100;
          auVar22._12_2_ = sVar50 + sVar102;
          auVar22._14_2_ = sVar58 + sVar104;
          uVar106 = NEON_sqrshrun(in_d23,auVar22,5,2);
          auVar27[2] = (char)(sVar18 + sVar71);
          auVar27._0_2_ = sVar18 + sVar70;
          auVar27[3] = (char)((ushort)(sVar18 + sVar71) >> 8);
          auVar27[4] = (char)sVar103;
          auVar27[5] = (char)((ushort)sVar103 >> 8);
          auVar27[6] = (char)sVar105;
          auVar27[7] = (char)((ushort)sVar105 >> 8);
          auVar27._8_2_ = sVar48 + sVar99;
          auVar27._10_2_ = sVar56 + sVar100;
          auVar27._12_2_ = sVar51 + sVar102;
          auVar27._14_2_ = sVar59 + sVar104;
          uVar107 = NEON_sqrshrun(in_d24,auVar27,5,2);
          auVar25[2] = (char)(sVar16 + sVar71);
          auVar25._0_2_ = sVar16 + sVar70;
          auVar25[3] = (char)((ushort)(sVar16 + sVar71) >> 8);
          auVar25[4] = (char)sVar72;
          auVar25[5] = (char)((ushort)sVar72 >> 8);
          auVar25[6] = (char)sVar101;
          auVar25[7] = (char)((ushort)sVar101 >> 8);
          auVar25._8_2_ = sVar49 + sVar99;
          auVar25._10_2_ = sVar57 + sVar100;
          auVar25._12_2_ = sVar52 + sVar102;
          auVar25._14_2_ = sVar60 + sVar104;
          uVar108 = NEON_sqrshrun(in_d25,auVar25,5,2);
          puVar39 = puVar40 + 0x30;
          *puVar40 = (char)uVar106;
          puVar40[1] = (char)uVar107;
          puVar40[2] = (char)uVar108;
          puVar40[3] = (char)((ulong)uVar106 >> 8);
          puVar40[4] = (char)((ulong)uVar107 >> 8);
          puVar40[5] = (char)((ulong)uVar108 >> 8);
          puVar40[6] = (char)((ulong)uVar106 >> 0x10);
          puVar40[7] = (char)((ulong)uVar107 >> 0x10);
          puVar40[8] = (char)((ulong)uVar108 >> 0x10);
          puVar40[9] = (char)((ulong)uVar106 >> 0x18);
          puVar40[10] = (char)((ulong)uVar107 >> 0x18);
          puVar40[0xb] = (char)((ulong)uVar108 >> 0x18);
          puVar40[0xc] = (char)((ulong)uVar106 >> 0x20);
          puVar40[0xd] = (char)((ulong)uVar107 >> 0x20);
          puVar40[0xe] = (char)((ulong)uVar108 >> 0x20);
          puVar40[0xf] = (char)((ulong)uVar106 >> 0x28);
          puVar40[0x10] = (char)((ulong)uVar107 >> 0x28);
          puVar40[0x11] = (char)((ulong)uVar108 >> 0x28);
          puVar40[0x12] = (char)((ulong)uVar106 >> 0x30);
          puVar40[0x13] = (char)((ulong)uVar107 >> 0x30);
          puVar40[0x14] = (char)((ulong)uVar108 >> 0x30);
          puVar40[0x15] = (char)((ulong)uVar106 >> 0x38);
          puVar40[0x16] = (char)((ulong)uVar107 >> 0x38);
          puVar40[0x17] = (char)((ulong)uVar108 >> 0x38);
          uVar24 = ((undefined8 *)(lVar33 + uVar36))[1];
          sVar97 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar69 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar70 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar103 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar105 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          uVar68 = (undefined1)(sVar69 + sVar91);
          uVar73 = (undefined1)((ushort)(sVar69 + sVar91) >> 8);
          uVar74 = (undefined1)(sVar70 + sVar92);
          uVar75 = (undefined1)((ushort)(sVar70 + sVar92) >> 8);
          uVar76 = (undefined1)(sVar71 + sVar92);
          uVar77 = (undefined1)((ushort)(sVar71 + sVar92) >> 8);
          auVar23[2] = (char)(sVar69 + sVar85);
          auVar23._0_2_ = sVar97 + sVar85;
          auVar23[3] = (char)((ushort)(sVar69 + sVar85) >> 8);
          auVar23[4] = (char)(sVar70 + sVar86);
          auVar23[5] = (char)((ushort)(sVar70 + sVar86) >> 8);
          auVar23[6] = (char)(sVar71 + sVar86);
          auVar23[7] = (char)((ushort)(sVar71 + sVar86) >> 8);
          auVar23._8_2_ = sVar72 + sVar87;
          auVar23._10_2_ = sVar101 + sVar87;
          auVar23._12_2_ = sVar103 + sVar88;
          auVar23._14_2_ = sVar105 + sVar88;
          in_d23 = NEON_sqrshrun(uVar106,auVar23,5,2);
          auVar28[2] = uVar68;
          auVar28._0_2_ = sVar97 + sVar91;
          auVar28[3] = uVar73;
          auVar28[4] = uVar74;
          auVar28[5] = uVar75;
          auVar28[6] = uVar76;
          auVar28[7] = uVar77;
          auVar28._8_2_ = sVar72 + sVar93;
          auVar28._10_2_ = sVar101 + sVar93;
          auVar28._12_2_ = sVar103 + sVar94;
          auVar28._14_2_ = sVar105 + sVar94;
          in_d24 = NEON_sqrshrun(uVar107,auVar28,5,2);
          auVar26[2] = (char)(sVar69 + sVar81);
          auVar26._0_2_ = sVar97 + sVar81;
          auVar26[3] = (char)((ushort)(sVar69 + sVar81) >> 8);
          auVar26[4] = (char)(sVar70 + sVar82);
          auVar26[5] = (char)((ushort)(sVar70 + sVar82) >> 8);
          auVar26[6] = (char)(sVar71 + sVar82);
          auVar26[7] = (char)((ushort)(sVar71 + sVar82) >> 8);
          auVar26._8_2_ = sVar72 + sVar83;
          auVar26._10_2_ = sVar101 + sVar83;
          auVar26._12_2_ = sVar103 + sVar84;
          auVar26._14_2_ = sVar105 + sVar84;
          in_d25 = NEON_sqrshrun(uVar108,auVar26,5,2);
          puVar40[0x18] = (char)in_d23;
          puVar40[0x19] = (char)in_d24;
          puVar40[0x1a] = (char)in_d25;
          puVar40[0x1b] = (char)((ulong)in_d23 >> 8);
          puVar40[0x1c] = (char)((ulong)in_d24 >> 8);
          puVar40[0x1d] = (char)((ulong)in_d25 >> 8);
          puVar40[0x1e] = (char)((ulong)in_d23 >> 0x10);
          puVar40[0x1f] = (char)((ulong)in_d24 >> 0x10);
          puVar40[0x20] = (char)((ulong)in_d25 >> 0x10);
          puVar40[0x21] = (char)((ulong)in_d23 >> 0x18);
          puVar40[0x22] = (char)((ulong)in_d24 >> 0x18);
          puVar40[0x23] = (char)((ulong)in_d25 >> 0x18);
          puVar40[0x24] = (char)((ulong)in_d23 >> 0x20);
          puVar40[0x25] = (char)((ulong)in_d24 >> 0x20);
          puVar40[0x26] = (char)((ulong)in_d25 >> 0x20);
          puVar40[0x27] = (char)((ulong)in_d23 >> 0x28);
          puVar40[0x28] = (char)((ulong)in_d24 >> 0x28);
          puVar40[0x29] = (char)((ulong)in_d25 >> 0x28);
          puVar40[0x2a] = (char)((ulong)in_d23 >> 0x30);
          puVar40[0x2b] = (char)((ulong)in_d24 >> 0x30);
          puVar40[0x2c] = (char)((ulong)in_d25 >> 0x30);
          puVar40[0x2d] = (char)((ulong)in_d23 >> 0x38);
          puVar40[0x2e] = (char)((ulong)in_d24 >> 0x38);
          puVar40[0x2f] = (char)((ulong)in_d25 >> 0x38);
          uVar24 = *(undefined8 *)(lVar32 + uVar36);
          sVar69 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar70 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar71 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar72 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar101 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar103 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar105 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar99 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          sVar45 = sVar71 + sVar45;
          sVar53 = sVar72 + sVar53;
          sVar46 = sVar71 + sVar46;
          sVar54 = sVar72 + sVar54;
          uVar61 = (undefined1)(sVar70 + sVar16);
          uVar62 = (undefined1)((ushort)(sVar70 + sVar16) >> 8);
          sVar95 = sVar71 + sVar95;
          uVar63 = (undefined1)sVar95;
          uVar64 = (undefined1)((ushort)sVar95 >> 8);
          sVar96 = sVar72 + sVar96;
          uVar65 = (undefined1)sVar96;
          uVar66 = (undefined1)((ushort)sVar96 >> 8);
          auVar14[2] = (char)(sVar70 + sVar98);
          auVar14._0_2_ = sVar69 + sVar98;
          auVar14[3] = (char)((ushort)(sVar70 + sVar98) >> 8);
          auVar14[4] = (char)sVar45;
          auVar14[5] = (char)((ushort)sVar45 >> 8);
          auVar14[6] = (char)sVar53;
          auVar14[7] = (char)((ushort)sVar53 >> 8);
          auVar14._8_2_ = sVar101 + sVar47;
          auVar14._10_2_ = sVar103 + sVar55;
          auVar14._12_2_ = sVar105 + sVar50;
          auVar14._14_2_ = sVar99 + sVar58;
          uVar24 = NEON_sqrshrun(uVar24,auVar14,5,2);
          auVar20[2] = (char)(sVar70 + sVar18);
          auVar20._0_2_ = sVar69 + sVar18;
          auVar20[3] = (char)((ushort)(sVar70 + sVar18) >> 8);
          auVar20[4] = (char)sVar46;
          auVar20[5] = (char)((ushort)sVar46 >> 8);
          auVar20[6] = (char)sVar54;
          auVar20[7] = (char)((ushort)sVar54 >> 8);
          auVar20._8_2_ = sVar101 + sVar48;
          auVar20._10_2_ = sVar103 + sVar56;
          auVar20._12_2_ = sVar105 + sVar51;
          auVar20._14_2_ = sVar99 + sVar59;
          uVar106 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar72 >> 8),
                                           CONCAT16((char)sVar72,
                                                    CONCAT15((char)((ushort)sVar71 >> 8),
                                                             CONCAT14((char)sVar71,
                                                                      CONCAT13((char)((ushort)sVar70
                                                                                     >> 8),
                                                                               CONCAT12((char)sVar70
                                                                                        ,sVar69)))))
                                          ),auVar20,5,2);
          auVar21[2] = uVar61;
          auVar21._0_2_ = sVar69 + sVar16;
          auVar21[3] = uVar62;
          auVar21[4] = uVar63;
          auVar21[5] = uVar64;
          auVar21[6] = uVar65;
          auVar21[7] = uVar66;
          auVar21._8_2_ = sVar101 + sVar49;
          auVar21._10_2_ = sVar103 + sVar57;
          auVar21._12_2_ = sVar105 + sVar52;
          auVar21._14_2_ = sVar99 + sVar60;
          uVar107 = NEON_sqrshrun(CONCAT17(uVar77,CONCAT16(uVar76,CONCAT15(uVar75,CONCAT14(uVar74,
                                                  CONCAT13(uVar73,CONCAT12(uVar68,sVar97 + sVar91)))
                                                  ))),auVar21,5,2);
          puVar38 = puVar37 + 0x30;
          *puVar37 = (char)uVar24;
          puVar37[1] = (char)uVar106;
          puVar37[2] = (char)uVar107;
          puVar37[3] = (char)((ulong)uVar24 >> 8);
          puVar37[4] = (char)((ulong)uVar106 >> 8);
          puVar37[5] = (char)((ulong)uVar107 >> 8);
          puVar37[6] = (char)((ulong)uVar24 >> 0x10);
          puVar37[7] = (char)((ulong)uVar106 >> 0x10);
          puVar37[8] = (char)((ulong)uVar107 >> 0x10);
          puVar37[9] = (char)((ulong)uVar24 >> 0x18);
          puVar37[10] = (char)((ulong)uVar106 >> 0x18);
          puVar37[0xb] = (char)((ulong)uVar107 >> 0x18);
          puVar37[0xc] = (char)((ulong)uVar24 >> 0x20);
          puVar37[0xd] = (char)((ulong)uVar106 >> 0x20);
          puVar37[0xe] = (char)((ulong)uVar107 >> 0x20);
          puVar37[0xf] = (char)((ulong)uVar24 >> 0x28);
          puVar37[0x10] = (char)((ulong)uVar106 >> 0x28);
          puVar37[0x11] = (char)((ulong)uVar107 >> 0x28);
          puVar37[0x12] = (char)((ulong)uVar24 >> 0x30);
          puVar37[0x13] = (char)((ulong)uVar106 >> 0x30);
          puVar37[0x14] = (char)((ulong)uVar107 >> 0x30);
          puVar37[0x15] = (char)((ulong)uVar24 >> 0x38);
          puVar37[0x16] = (char)((ulong)uVar106 >> 0x38);
          puVar37[0x17] = (char)((ulong)uVar107 >> 0x38);
          uVar24 = ((undefined8 *)(lVar32 + uVar36))[1];
          sVar45 = (ushort)(byte)uVar24 * 0x25 + -0x250;
          sVar53 = (ushort)(byte)((ulong)uVar24 >> 8) * 0x25 + -0x250;
          sVar46 = (ushort)(byte)((ulong)uVar24 >> 0x10) * 0x25 + -0x250;
          sVar54 = (ushort)(byte)((ulong)uVar24 >> 0x18) * 0x25 + -0x250;
          sVar95 = (ushort)(byte)((ulong)uVar24 >> 0x20) * 0x25 + -0x250;
          sVar96 = (ushort)(byte)((ulong)uVar24 >> 0x28) * 0x25 + -0x250;
          sVar97 = (ushort)(byte)((ulong)uVar24 >> 0x30) * 0x25 + -0x250;
          sVar98 = (ushort)(byte)((ulong)uVar24 >> 0x38) * 0x25 + -0x250;
          auVar15[2] = (char)(sVar53 + sVar85);
          auVar15._0_2_ = sVar45 + sVar85;
          auVar15[3] = (char)((ushort)(sVar53 + sVar85) >> 8);
          auVar15[4] = (char)(sVar46 + sVar86);
          auVar15[5] = (char)((ushort)(sVar46 + sVar86) >> 8);
          auVar15[6] = (char)(sVar54 + sVar86);
          auVar15[7] = (char)((ushort)(sVar54 + sVar86) >> 8);
          auVar15._8_2_ = sVar95 + sVar87;
          auVar15._10_2_ = sVar96 + sVar87;
          auVar15._12_2_ = sVar97 + sVar88;
          auVar15._14_2_ = sVar98 + sVar88;
          uVar24 = NEON_sqrshrun(CONCAT17(uVar67,CONCAT16((char)sVar92,
                                                          CONCAT15(uVar67,CONCAT14((char)sVar92,
                                                                                   CONCAT13((char)((
                                                  ushort)sVar91 >> 8),CONCAT12((char)sVar91,sVar91))
                                                  )))),auVar15,5,2);
          auVar17[2] = (char)(sVar53 + sVar91);
          auVar17._0_2_ = sVar45 + sVar91;
          auVar17[3] = (char)((ushort)(sVar53 + sVar91) >> 8);
          auVar17[4] = (char)(sVar46 + sVar92);
          auVar17[5] = (char)((ushort)(sVar46 + sVar92) >> 8);
          auVar17[6] = (char)(sVar54 + sVar92);
          auVar17[7] = (char)((ushort)(sVar54 + sVar92) >> 8);
          auVar17._8_2_ = sVar95 + sVar93;
          auVar17._10_2_ = sVar96 + sVar93;
          auVar17._12_2_ = sVar97 + sVar94;
          auVar17._14_2_ = sVar98 + sVar94;
          uVar106 = NEON_sqrshrun(CONCAT17((char)((ushort)sVar54 >> 8),
                                           CONCAT16((char)sVar54,
                                                    CONCAT15((char)((ushort)sVar46 >> 8),
                                                             CONCAT14((char)sVar46,
                                                                      CONCAT13((char)((ushort)sVar53
                                                                                     >> 8),
                                                                               CONCAT12((char)sVar53
                                                                                        ,sVar45)))))
                                          ),auVar17,5,2);
          auVar12[2] = (char)(sVar53 + sVar81);
          auVar12._0_2_ = sVar45 + sVar81;
          auVar12[3] = (char)((ushort)(sVar53 + sVar81) >> 8);
          auVar12[4] = (char)(sVar46 + sVar82);
          auVar12[5] = (char)((ushort)(sVar46 + sVar82) >> 8);
          auVar12[6] = (char)(sVar54 + sVar82);
          auVar12[7] = (char)((ushort)(sVar54 + sVar82) >> 8);
          auVar12._8_2_ = sVar95 + sVar83;
          auVar12._10_2_ = sVar96 + sVar83;
          auVar12._12_2_ = sVar97 + sVar84;
          auVar12._14_2_ = sVar98 + sVar84;
          uVar107 = NEON_sqrshrun(CONCAT17(uVar66,CONCAT16(uVar65,CONCAT15(uVar64,CONCAT14(uVar63,
                                                  CONCAT13(uVar62,CONCAT12(uVar61,sVar69 + sVar16)))
                                                  ))),auVar12,5,2);
          puVar37[0x18] = (char)uVar24;
          puVar37[0x19] = (char)uVar106;
          puVar37[0x1a] = (char)uVar107;
          puVar37[0x1b] = (char)((ulong)uVar24 >> 8);
          puVar37[0x1c] = (char)((ulong)uVar106 >> 8);
          puVar37[0x1d] = (char)((ulong)uVar107 >> 8);
          puVar37[0x1e] = (char)((ulong)uVar24 >> 0x10);
          puVar37[0x1f] = (char)((ulong)uVar106 >> 0x10);
          puVar37[0x20] = (char)((ulong)uVar107 >> 0x10);
          puVar37[0x21] = (char)((ulong)uVar24 >> 0x18);
          puVar37[0x22] = (char)((ulong)uVar106 >> 0x18);
          puVar37[0x23] = (char)((ulong)uVar107 >> 0x18);
          puVar37[0x24] = (char)((ulong)uVar24 >> 0x20);
          puVar37[0x25] = (char)((ulong)uVar106 >> 0x20);
          puVar37[0x26] = (char)((ulong)uVar107 >> 0x20);
          puVar37[0x27] = (char)((ulong)uVar24 >> 0x28);
          puVar37[0x28] = (char)((ulong)uVar106 >> 0x28);
          puVar37[0x29] = (char)((ulong)uVar107 >> 0x28);
          puVar37[0x2a] = (char)((ulong)uVar24 >> 0x30);
          puVar37[0x2b] = (char)((ulong)uVar106 >> 0x30);
          puVar37[0x2c] = (char)((ulong)uVar107 >> 0x30);
          puVar37[0x2d] = (char)((ulong)uVar24 >> 0x38);
          puVar37[0x2e] = (char)((ulong)uVar106 >> 0x38);
          puVar37[0x2f] = (char)((ulong)uVar107 >> 0x38);
          uVar36 = uVar36 + 0x10;
          puVar37 = puVar38;
          puVar40 = puVar39;
        } while ((int)uVar36 < (int)(param_4 - uVar2));
        pbVar41 = (byte *)(lVar34 + uVar36);
        pbVar29 = (byte *)(lVar33 + uVar36);
        pbVar44 = (byte *)(lVar32 + uVar36);
      }
      while (iVar35 = (int)uVar36, iVar35 < (int)param_4) {
        uVar6 = (uint)pbVar41[1];
        uVar5 = (uint)*pbVar41;
        if (param_9 == '\0') {
          uVar6 = (uint)*pbVar41;
          uVar5 = (uint)pbVar41[1];
        }
        uVar7 = uVar5 * 0x10000 - 0x800000;
        pbVar42 = pbVar29 + 1;
        iVar3 = (int)((uVar6 - 0x80) * 0x330000 + 0x100000) >> 0x10;
        iVar1 = (int)((uint)*pbVar29 * 0x250000 + -0x2500000) >> 0x10;
        uVar5 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar5) {
          uVar5 = 0xff;
        }
        *puVar39 = (char)uVar5;
        iVar4 = (int)((uVar6 - 0x80) * -0x1a0000 + (uVar7 >> 0x10) * -0xc0000 + 0x100000) >> 0x10;
        uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar39[1] = (char)uVar6;
        uVar5 = (int)uVar7 >> 10 | 0x10;
        uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
        if (0xfe < (int)uVar6) {
          uVar6 = 0xff;
        }
        puVar39[2] = (char)uVar6;
        if (param_4 - 1 == iVar35) {
          puVar39 = puVar39 + 3;
        }
        else {
          pbVar42 = pbVar29 + 2;
          iVar1 = (int)((uint)pbVar29[1] * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[3] = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[4] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar39[5] = (char)uVar6;
          puVar39 = puVar39 + 6;
        }
        pbVar43 = pbVar44;
        if (uVar30 != param_5 - 1) {
          pbVar43 = pbVar44 + 1;
          iVar1 = (int)((uint)*pbVar44 * 0x250000 + -0x2500000) >> 0x10;
          uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          *puVar38 = (char)uVar6;
          uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[1] = (char)uVar6;
          uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
          if (0xfe < (int)uVar6) {
            uVar6 = 0xff;
          }
          puVar38[2] = (char)uVar6;
          if (param_4 - 1 == iVar35) {
            puVar38 = puVar38 + 3;
          }
          else {
            pbVar43 = pbVar44 + 2;
            iVar1 = (int)((uint)pbVar44[1] * 0x250000 + -0x2500000) >> 0x10;
            uVar6 = iVar3 + iVar1 >> 5 & (iVar3 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[3] = (char)uVar6;
            uVar6 = iVar4 + iVar1 >> 5 & (iVar4 + iVar1 >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[4] = (char)uVar6;
            uVar6 = (int)(uVar5 + iVar1) >> 5 & ((int)(uVar5 + iVar1) >> 0x1f ^ 0xffffffffU);
            if (0xfe < (int)uVar6) {
              uVar6 = 0xff;
            }
            puVar38[5] = (char)uVar6;
            puVar38 = puVar38 + 6;
          }
        }
        pbVar41 = pbVar41 + 2;
        pbVar29 = pbVar42;
        pbVar44 = pbVar43;
        uVar36 = (ulong)(iVar35 + 2);
      }
      uVar30 = uVar30 + 2;
      lVar34 = lVar34 + param_7;
      lVar33 = lVar33 + param_6 * 2;
      lVar32 = lVar32 + param_6 * 2;
    } while (uVar30 < param_5);
  }
  return;
}



/* Entry: 10a19d170; end: 10a19d1cb;  */

void FUN_10a19d170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_2[2];
  uStack_30 = param_2[3];
  uStack_20 = param_2[1];
  uStack_28 = *param_2;
  uStack_38 = param_1[2];
  uStack_50 = param_1[3];
  uStack_40 = param_1[1];
  uStack_48 = *param_1;
  _vImageConvert_RGB888toRGBA8888(&uStack_30,0,0xff,&uStack_50,0,0);
  return;
}



/* Entry: 10a19d1cc; end: 10a19d287;  */

void FUN_10a19d1cc(undefined8 *param_1,long *param_2)

{
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lStack_58 = CONCAT71(lStack_58._1_7_,0xff);
  FUN_10a0cf3f0(&lStack_38,param_2[1] + (*param_2 + -1) * param_2[2],&lStack_58);
  lStack_b8 = *param_2;
  lStack_b0 = param_2[1];
  lStack_58 = lStack_38;
  lStack_a8 = param_2[2];
  lStack_c0 = param_2[3];
  uStack_c8 = param_1[2];
  uStack_e0 = param_1[3];
  uStack_d0 = param_1[1];
  uStack_d8 = *param_1;
  lStack_a0 = lStack_c0;
  lStack_98 = lStack_b8;
  lStack_90 = lStack_b0;
  lStack_88 = lStack_a8;
  lStack_78 = lStack_c0;
  lStack_70 = lStack_b8;
  lStack_68 = lStack_b0;
  lStack_60 = lStack_a8;
  lStack_50 = lStack_b8;
  lStack_48 = lStack_b0;
  lStack_40 = lStack_a8;
  _vImageConvert_Planar8toARGB8888(&lStack_78,&lStack_c0,&lStack_a0,&lStack_58,&uStack_e0,0);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a19d288; end: 10a19d397;  */

undefined4 * FUN_10a19d288(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  pbVar2 = (byte *)0x113836510;
  FUN_10ad0621c();
  if ((*pbVar2 >> 4 & 1) == 0) {
    uVar3 = 0x5f8;
    __Znwm(0x5f8);
    FUN_10a19d9a0();
    uStack_48 = 0;
    FUN_10a1aef2c(param_1 + 4,uVar3);
    FUN_10a1aef2c(&uStack_48,0);
  }
  else {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    uVar1 = *param_1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    *(undefined4 *)(puVar4 + 4) = 0x3f800000;
    *(undefined4 *)(puVar4 + 5) = uVar1;
    *(undefined8 *)((long)puVar4 + 0x2c) = 0;
    *(undefined4 *)((long)puVar4 + 0x34) = 4;
    *(undefined1 *)(puVar4 + 7) = 0;
    FUN_10a1aef04(param_1 + 2);
  }
  return param_1;
}



/* Entry: 10a19d398; end: 10a19d49f;  */

void FUN_10a19d398(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 auStack_870 [2];
  undefined4 uStack_860;
  undefined4 uStack_85c;
  undefined4 uStack_858;
  undefined8 uStack_854;
  undefined1 auStack_84c [992];
  undefined8 auStack_46c [9];
  undefined8 uStack_420;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined8 uStack_40c;
  
  if (*(int *)(param_1 + 0x194) != (int)param_2 ||
      *(int *)(param_1 + 0x198) != (int)((ulong)param_2 >> 0x20)) {
    func_0x00010a1ad3f0(auStack_870,0);
    uStack_420 = *(undefined8 *)(param_1 + 0x1a8);
    uStack_418 = (undefined4)*(undefined8 *)(param_1 + 0x1b0);
    uStack_40c = *(undefined8 *)(param_1 + 0x1bc);
    uStack_414 = (undefined4)*(undefined8 *)(param_1 + 0x1b4);
    uStack_410 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1b4) >> 0x20);
    *(ulong *)(param_1 + 0x1b0) = CONCAT44(uStack_85c,uStack_860);
    *(undefined8 *)(param_1 + 0x1a8) = auStack_870[1];
    *(undefined8 *)(param_1 + 0x1bc) = uStack_854;
    *(ulong *)(param_1 + 0x1b4) = CONCAT44(uStack_858,uStack_85c);
    uStack_860 = uStack_418;
    auStack_870[1] = uStack_420;
    uStack_85c = uStack_414;
    uStack_858 = uStack_410;
    uStack_854 = uStack_40c;
    _memcpy(&uStack_420,param_1 + 0x1c4,0x3e0);
    _memcpy(param_1 + 0x1c4,auStack_84c,0x3e0);
    _memcpy(auStack_84c,&uStack_420,0x3e0);
    lVar2 = 0x404;
    puVar1 = (undefined8 *)(param_1 + 0x5a4);
    do {
      uVar4 = puVar1[1];
      uVar3 = *puVar1;
      uVar5 = *(undefined8 *)((long)auStack_870 + lVar2);
      puVar1[1] = *(undefined8 *)((long)auStack_870 + lVar2 + 8);
      *puVar1 = uVar5;
      *(undefined8 *)((long)auStack_870 + lVar2 + 8) = uVar4;
      *(undefined8 *)((long)auStack_870 + lVar2) = uVar3;
      lVar2 = lVar2 + 0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0x444);
    *(undefined8 *)(param_1 + 0x1a0) = auStack_870[0];
    auStack_870[0] = 0;
    FUN_10a30206c(auStack_870);
    *(undefined8 *)(param_1 + 0x194) = param_2;
  }
  return;
}



/* Entry: 10a19d4a0; end: 10a19d4b7;  */

void FUN_10a19d4a0(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined8 uStack_890;
  undefined4 uStack_888;
  undefined4 uStack_884;
  undefined4 uStack_880;
  undefined4 uStack_87c;
  undefined4 uStack_878;
  undefined4 uStack_874;
  undefined8 uStack_4b0;
  undefined3 uStack_4a8;
  undefined4 uStack_4a5;
  uint uStack_4a1;
  undefined4 uStack_49d;
  undefined1 uStack_499;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined1 auStack_48c [4];
  uint uStack_488;
  undefined8 auStack_ac [10];
  long lStack_58;
  
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 != 0) {
    FUN_10a30f97c();
    FUN_10a30fb38(param_1);
    plVar6 = (long *)*param_3;
    (**(code **)(*plVar6 + 0x38))();
    plVar7 = (long *)*param_4;
    (**(code **)(*plVar7 + 0x38))();
    plVar8 = (long *)*param_1;
    (**(code **)(*plVar8 + 0x38))();
    FUN_10a19dd8c(lVar5,plVar6,plVar7,plVar8);
    return;
  }
  lVar5 = *(long *)(param_2 + 0x10);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_10a30f97c();
  FUN_10a30fb38(param_1);
  uStack_8b0 = 0;
  uStack_8a8 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  if (*(char *)(lVar5 + 400) == '\x01') {
    ppuVar9 = &PTR___tlv_bootstrap_11340de10;
    (*(code *)PTR___tlv_bootstrap_11340de10)();
    uVar13 = *(undefined8 *)(lVar5 + 0x194);
    lVar14 = *(long *)(*ppuVar9 + 0x10);
    uStack_4b0._0_3_ = 0x635282;
    uStack_4b0._3_5_ = 0x10f;
    uStack_4a8 = 0x2b;
    uStack_4a5 = 0;
    uStack_4a1 = uStack_4a1 & 0xffffff00;
    if (lVar14 == 0) goto LAB_10a19d964;
    func_0x00010ab9ca70(&uStack_4b0,*param_1,0);
    uVar10 = 0x8ca9;
    if (uStack_488 < 2) {
      uVar10 = 0x8d40;
    }
    FUN_10ab9cbe8(&uStack_890,lVar14 + 0x50,uVar10,&uStack_4b0,0,uVar13,0);
    FUN_10ab9b224(&uStack_8b0,&uStack_890);
    FUN_10ab9ce18(&uStack_890);
  }
  else {
    if (*(int *)(lVar5 + 0x1a8) == 0) {
      uVar13 = 1;
      FUN_10a303694(1);
      FUN_10a301f68(&uStack_4b0,uVar13);
      uVar15 = *(undefined8 *)(lVar5 + 0x1b0);
      uStack_890 = *(undefined8 *)(lVar5 + 0x1a8);
      uStack_888 = (undefined4)uVar15;
      uVar13 = *(undefined8 *)(lVar5 + 0x1b4);
      uStack_87c = (undefined4)*(undefined8 *)(lVar5 + 0x1bc);
      uStack_878 = (undefined4)((ulong)*(undefined8 *)(lVar5 + 0x1bc) >> 0x20);
      uStack_884 = (undefined4)uVar13;
      uStack_880 = (undefined4)((ulong)uVar13 >> 0x20);
      *(ulong *)(lVar5 + 0x1b0) = CONCAT17(uStack_499,CONCAT43(uStack_49d,uStack_4a1._1_3_));
      *(undefined8 *)(lVar5 + 0x1a8) =
           CONCAT17((undefined1)uStack_4a1,CONCAT43(uStack_4a5,uStack_4a8));
      *(ulong *)(lVar5 + 0x1bc) = CONCAT44(uStack_490,uStack_494);
      *(ulong *)(lVar5 + 0x1b4) = CONCAT44(uStack_498,CONCAT13(uStack_499,uStack_49d._1_3_));
      uStack_4a1._1_3_ = (undefined3)uVar15;
      uStack_4a8 = (undefined3)uStack_890;
      uStack_4a5 = (undefined4)((ulong)uStack_890 >> 0x18);
      uStack_4a1._0_1_ = (undefined1)((ulong)uStack_890 >> 0x38);
      uStack_49d._0_1_ = (undefined1)((ulong)uVar15 >> 0x18);
      uStack_49d._1_3_ = (undefined3)uVar13;
      uStack_499 = (undefined1)((ulong)uVar13 >> 0x18);
      uStack_498 = uStack_880;
      uStack_494 = uStack_87c;
      uStack_490 = uStack_878;
      _memcpy(&uStack_890,lVar5 + 0x1c4,0x3e0);
      _memcpy(lVar5 + 0x1c4,auStack_48c,0x3e0);
      _memcpy(auStack_48c,&uStack_890,0x3e0);
      lVar14 = 0x404;
      puVar11 = (undefined8 *)(lVar5 + 0x5a4);
      do {
        uVar15 = puVar11[1];
        uVar13 = *puVar11;
        uVar16 = *(undefined8 *)((long)&uStack_4b0 + lVar14);
        puVar11[1] = *(undefined8 *)((long)&uStack_4a8 + lVar14);
        *puVar11 = uVar16;
        *(undefined8 *)((long)&uStack_4a8 + lVar14) = uVar15;
        *(undefined8 *)((long)&uStack_4b0 + lVar14) = uVar13;
        lVar14 = lVar14 + 0x10;
        puVar11 = puVar11 + 2;
      } while (lVar14 != 0x444);
      *(ulong *)(lVar5 + 0x1a0) = CONCAT53(uStack_4b0._3_5_,(undefined3)uStack_4b0);
      uStack_4b0._0_3_ = 0;
      uStack_4b0._3_5_ = 0;
      FUN_10a30206c(&uStack_4b0);
    }
    *(undefined4 *)(lVar5 + 0x1ac) = 0x8d40;
    func_0x00010a3022a4(lVar5 + 0x1a0);
    plVar6 = (long *)*param_1;
    uStack_4a5 = 0;
    uStack_4a1 = 0;
    uStack_4b0._3_5_ = 0;
    uStack_4a8 = 0;
    uStack_49d = 0;
    if (plVar6 == (long *)0x0) {
      uVar4 = 0;
      uVar3 = 0;
      uVar12 = 0;
      lVar14 = 0;
      uVar10 = 1;
    }
    else {
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x50))();
      uVar3 = SUB84(plVar7,0);
      plVar7 = plVar6;
      (**(code **)(*plVar6 + 0x48))();
      uVar4 = SUB84(plVar7,0);
      lVar14 = plVar6[3];
      uVar10 = (undefined4)plVar6[4];
      uVar12 = -(*(byte *)((long)plVar6 + 0x54) >> 2 & 1) & 3;
    }
    uVar1 = *(uint *)(lVar5 + 0x1c4);
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    *(uint *)(lVar5 + 0x1c4) = uVar1;
    *(undefined4 *)(lVar5 + 0x5a4) = 0x8ce0;
    *(undefined4 *)(lVar5 + 0x1f8) = 0x8ce0;
    *(undefined4 *)(lVar5 + 0x1c8) = uVar3;
    *(undefined4 *)(lVar5 + 0x1cc) = uVar4;
    *(long *)(lVar5 + 0x1d0) = lVar14;
    *(bool *)(lVar5 + 0x1d8) = plVar6 != (long *)0x0;
    *(ulong *)(lVar5 + 0x1e8) = CONCAT44(uStack_49d,uStack_4a1);
    *(ulong *)(lVar5 + 0x1e1) = CONCAT17((undefined1)uStack_4a1,CONCAT43(uStack_4a5,uStack_4a8));
    *(ulong *)(lVar5 + 0x1d9) = CONCAT53(uStack_4b0._3_5_,(undefined3)uStack_4b0);
    *(undefined4 *)(lVar5 + 0x1f0) = uVar10;
    *(uint *)(lVar5 + 500) = uVar12;
    FUN_10a3024c0(lVar5 + 0x1a0,lVar5 + 0x1c8);
    _glViewport(0,0,*(undefined4 *)(lVar5 + 0x194),*(undefined4 *)(lVar5 + 0x198));
  }
  FUN_10a3014a0(lVar5);
  plVar6 = (long *)*param_3;
  (**(code **)(*plVar6 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(lVar5 + 0xf0),lVar5 + 0x118,*(undefined4 *)(lVar5 + 0x108),plVar6);
  plVar6 = (long *)*param_4;
  (**(code **)(*plVar6 + 0x48))();
  FUN_10a31a3c8(*(undefined8 *)(lVar5 + 0x120),lVar5 + 0x148,*(undefined4 *)(lVar5 + 0x138),plVar6);
  uStack_4a8 = 0;
  uStack_4a5 = 0;
  uStack_4b0._0_3_ = 0;
  uStack_4b0._3_5_ = 0x3f80000000;
  uStack_498 = 0x3f800000;
  uStack_494 = 0x3f800000;
  uStack_4a1 = 0x80000000;
  uStack_49d = 0x3f;
  uStack_499 = 0;
  uStack_888 = 0;
  uStack_884 = 0x3f800000;
  uStack_890 = 0;
  uStack_878 = 0x3f800000;
  uStack_874 = 0;
  uStack_880 = 0x3f800000;
  uStack_87c = 0x3f800000;
  FUN_10a19dc6c(lVar5 + 0x5f0,&uStack_4b0,8);
  FUN_10a31a478(*(undefined8 *)(lVar5 + 0x170),*(undefined4 *)(lVar5 + 0x188),&uStack_4b0);
  FUN_10a31a478(*(undefined8 *)(lVar5 + 0x150),*(undefined4 *)(lVar5 + 0x168),&uStack_890);
  _glDrawArrays(6,0,4);
  FUN_10a301590();
  if (*(char *)(lVar5 + 400) == '\x01') {
    uStack_8c8 = 0;
    uStack_8d0 = 0;
    uStack_8b8 = 0;
    uStack_8c0 = 0;
    FUN_10ab9b224(&uStack_8b0,&uStack_8d0);
    FUN_10ab9ce18(&uStack_8d0);
  }
  else {
    func_0x00010a3022f0(lVar5 + 0x1a0);
    func_0x00010a302418(lVar5 + 0x1a0);
    func_0x00010a3020b0(lVar5 + 0x1a0);
  }
  FUN_10ab9ce18(&uStack_8b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
LAB_10a19d964:
  FUN_10a0edfc4(&uStack_4b0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a19d970);
  (*pcVar2)();
}



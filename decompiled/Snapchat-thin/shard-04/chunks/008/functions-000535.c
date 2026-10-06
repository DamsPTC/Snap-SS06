/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038eb0e0; end: 1038eb127; +[_TtC16SendDestinations22SendDestinationBuilder containsQuickPostDestination:] */

uint FUN_1038eb0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001038ec18c(0);
  func_0x000107c5fc54(param_3,uVar1);
  uVar1 = param_3;
  FUN_1038ec034();
  func_0x000107c6142c(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1038eb128; end: 1038eb15b;  */

void FUN_1038eb128(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038eb15c; end: 1038eb283;  */

ulong FUN_1038eb15c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eb284);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1038eb284(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eb280);
      (*pcVar1)();
    }
    FUN_1038eb304(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1038eb284; end: 1038eb303;  */

undefined * FUN_1038eb284(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    func_0x00010273c9f8();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1038eb304; end: 1038eb3fb;  */

long FUN_1038eb304(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1038eb3f8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1038eb3fc);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001038ec18c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001038ec18c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038eb3f4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1038eb3fc; end: 1038ec033;  */

undefined *
FUN_1038eb3fc(undefined *param_1,undefined *param_2,uint param_3,ulong param_4,ulong param_5,
             undefined *param_6,uint param_7,uint param_8,byte param_9,undefined4 param_10,
             ulong param_11,ulong param_12,undefined *param_13,undefined *param_14,
             undefined *param_15,undefined *param_16,undefined *param_17,undefined *param_18)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puStack_98;
  undefined *puStack_78;
  
  puVar4 = param_2;
  if (param_16 == (undefined *)0x0) {
LAB_1038eb464:
    puStack_98 = (undefined *)0x0;
    puStack_78 = (undefined *)0x0;
    puVar8 = param_1;
  }
  else {
    uVar6 = (ulong)param_15 & 0xffffffffffff;
    if (((ulong)param_16 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)param_16 >> 0x38 & 0xf;
    }
    if (uVar6 == 0) goto LAB_1038eb464;
    puVar8 = param_16;
    func_0x000107c61434();
    puStack_98 = param_15;
    puStack_78 = param_16;
  }
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((ulong)param_1 & 1) != 0) {
    func_0x000108f57dfc();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec024);
      (*pcVar2)();
    }
    puVar10 = PTR_PTR_1126a6218;
    func_0x000107c610f8();
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c47098();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar8);
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar4 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar4 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar4 = puVar9;
      }
      func_0x000107c60480(puVar4);
    }
    puVar4 = puVar4 + 1;
    puVar5 = (undefined *)0x0;
    FUN_1038eb15c(0,puVar4,1,PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar11 + 0x10);
    puVar7 = (undefined *)(uVar6 + 1);
    puVar8 = puVar5;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      puVar4 = puVar7;
      FUN_1038eb15c(puVar8,puVar7,1,puVar5);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
    }
    *(undefined **)(uVar11 + 0x10) = puVar7;
    *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar10;
    puVar10 = puVar8;
  }
  if (((ulong)param_2 & 1) != 0) {
    func_0x000108f580b4();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec028);
      (*pcVar2)();
    }
    puVar7 = PTR_PTR_1126a6218;
    func_0x000107c610f8();
    uVar3 = 0;
    puVar4 = (undefined *)0xe000000000000000;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c47098();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar8);
    puVar8 = puVar10;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar4 = puVar10;
        }
        func_0x000107c60480(puVar4);
      }
      puVar4 = puVar4 + 1;
      puVar8 = (undefined *)0x0;
      FUN_1038eb15c(0,puVar4,1,puVar10);
      puVar10 = puVar8;
    }
    uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar11 + 0x10);
    puVar5 = (undefined *)(uVar6 + 1);
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      puVar4 = puVar5;
      FUN_1038eb15c(puVar8,puVar5,1,puVar10);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
      puVar10 = puVar8;
    }
    *(undefined **)(uVar11 + 0x10) = puVar5;
    *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar7;
  }
  if ((param_3 & 1) != 0) {
    func_0x000108f5833c();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec02c);
      (*pcVar2)();
    }
    puVar7 = PTR_PTR_1126a6218;
    func_0x000107c610f8();
    uVar3 = 0;
    puVar4 = (undefined *)0xe000000000000000;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c47098();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar8);
    puVar8 = puVar10;
    func_0x000107c61550();
    if ((((int)puVar8 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar4 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar4 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar4 = puVar10;
        }
        func_0x000107c60480(puVar4);
      }
      puVar4 = puVar4 + 1;
      puVar8 = (undefined *)0x0;
      FUN_1038eb15c(0,puVar4,1,puVar10);
      puVar10 = puVar8;
    }
    uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
    uVar6 = *(ulong *)(uVar11 + 0x10);
    puVar5 = (undefined *)(uVar6 + 1);
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
      puVar4 = puVar5;
      FUN_1038eb15c(puVar8,puVar5,1,puVar10);
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
      puVar10 = puVar8;
    }
    *(undefined **)(uVar11 + 0x10) = puVar5;
    *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar7;
  }
  if (param_5 != 0) {
    uVar6 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar6 = param_5 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      if ((param_6 == (undefined *)0x0) ||
         (func_0x000107c49804(), puVar8 = param_6, (int)param_6 != 1)) {
        puVar7 = puStack_98;
        puVar5 = puStack_78;
        puVar14 = puStack_78;
        if (puStack_78 == (undefined *)0x0) {
          func_0x000108f591dc();
          func_0x000107c61180();
          if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec030);
            (*pcVar2)();
          }
          puVar7 = puVar8;
          func_0x000107c5faec();
          func_0x000107c61170(puVar8);
          puVar5 = puVar4;
          puVar14 = (undefined *)0x0;
        }
        puVar4 = PTR_PTR_1126a6218;
        func_0x000107c610f8();
        func_0x000107c61434(puVar14);
        uVar6 = param_4;
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c5fadc(puVar7,puVar5);
        func_0x000107c47098();
        func_0x000107c6142c(puVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar7);
        puVar8 = puVar10;
        func_0x000107c61550();
        if (((int)puVar8 != 0) && (-1 < (long)puVar10)) goto joined_r0x0001038eb7cc;
LAB_1038eb888:
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar7 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar7 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar7 = puVar10;
          }
          func_0x000107c60480(puVar7);
        }
        puVar8 = (undefined *)0x0;
        FUN_1038eb15c(0,puVar7 + 1,1,puVar10);
      }
      else {
        puVar8 = puStack_98;
        puVar7 = puStack_78;
        puVar5 = puStack_78;
        if (puStack_78 == (undefined *)0x0) {
          func_0x000108f58d8c();
          func_0x000107c61180();
          if (param_6 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec034);
            (*pcVar2)();
          }
          puVar8 = param_6;
          func_0x000107c5faec();
          func_0x000107c61170(param_6);
          puVar7 = puVar4;
          puVar5 = (undefined *)0x0;
        }
        puVar4 = PTR_PTR_1126a6218;
        func_0x000107c610f8();
        func_0x000107c61434(puVar5);
        uVar6 = param_4;
        func_0x000107c5fadc(param_4,param_5);
        func_0x000107c5fadc(puVar8,puVar7);
        func_0x000107c47098();
        func_0x000107c6142c(puVar7);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar8);
        puVar8 = puVar10;
        func_0x000107c61550();
        if (((int)puVar8 == 0) || ((long)puVar10 < 0)) goto LAB_1038eb888;
joined_r0x0001038eb7cc:
        puVar8 = puVar10;
        if (((ulong)puVar10 >> 0x3e & 1) != 0) goto LAB_1038eb888;
      }
      uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar8;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_1038eb15c(puVar10,uVar6 + 1,1,puVar8);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar4;
    }
  }
  if (((param_7 & 1) != 0) && (param_12 != 0)) {
    uVar6 = param_11 & 0xffffffffffff;
    if ((param_12 & 0x2000000000000000) != 0) {
      uVar6 = param_12 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      puVar4 = (undefined *)0x0;
      if (param_16 != (undefined *)0x0) {
        puVar4 = param_15;
      }
      puVar8 = (undefined *)0xe000000000000000;
      if (param_16 != (undefined *)0x0) {
        puVar8 = param_16;
      }
      puVar7 = PTR_PTR_1126a6218;
      func_0x000107c610f8();
      func_0x000107c61434(param_16);
      uVar6 = param_11;
      func_0x000107c5fadc(param_11,param_12);
      func_0x000107c5fadc(puVar4,puVar8);
      func_0x000107c47098();
      func_0x000107c6142c(puVar8);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar4);
      puVar4 = puVar10;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar10 < 0)) ||
         (puVar4 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar10) {
            puVar8 = puVar10;
          }
          func_0x000107c60480(puVar8);
        }
        puVar4 = (undefined *)0x0;
        FUN_1038eb15c(0,puVar8 + 1,1,puVar10);
      }
      uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar6 = *(ulong *)(uVar11 + 0x10);
      puVar10 = puVar4;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_1038eb15c(puVar10,uVar6 + 1,1,puVar4);
        uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
      *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar7;
    }
  }
  if (param_17 != (undefined *)0x0) {
    puVar9 = param_17;
  }
  lVar13 = *(long *)(puVar9 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61434(param_17);
  }
  else {
    func_0x000107c61434(param_17);
    puVar12 = (ulong *)(puVar9 + 0x28);
    do {
      uVar11 = puVar12[-1];
      uVar1 = *puVar12;
      uVar6 = uVar11 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar6 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        puVar4 = PTR_PTR_1126a6218;
        func_0x000107c610f8();
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar11,uVar1);
        uVar3 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c47098();
        func_0x000107c6142c(uVar1);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar3);
        puVar8 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puVar10 < 0)) ||
           (puVar8 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar7 = puVar10;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_1038eb15c(0,puVar7 + 1,1,puVar10);
        }
        uVar11 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar11 + 0x10);
        puVar10 = puVar8;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1038eb15c(puVar10,uVar6 + 1,1,puVar8);
          uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
        *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar4;
      }
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(puVar9);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_18 != (undefined *)0x0) {
    puVar4 = param_18;
  }
  lVar13 = *(long *)(puVar4 + 0x10);
  if (lVar13 == 0) {
    func_0x000107c61434(param_18);
  }
  else {
    func_0x000107c61434(param_18);
    puVar12 = (ulong *)(puVar4 + 0x28);
    do {
      uVar11 = puVar12[-1];
      uVar1 = *puVar12;
      uVar6 = uVar11 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar6 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        puVar8 = PTR_PTR_1126a6218;
        func_0x000107c610f8();
        func_0x000107c61434(uVar1);
        func_0x000107c5fadc(uVar11,uVar1);
        uVar3 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c47098();
        func_0x000107c6142c(uVar1);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar3);
        puVar9 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
           (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar7 = puVar10;
            }
            func_0x000107c60480(puVar7);
          }
          puVar9 = (undefined *)0x0;
          FUN_1038eb15c(0,puVar7 + 1,1,puVar10);
        }
        uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar6 = *(ulong *)(uVar11 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          FUN_1038eb15c(puVar10,uVar6 + 1,1,puVar9);
          uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
        *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar8;
      }
      puVar12 = puVar12 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  func_0x000107c6142c(puVar4);
  if ((((((ulong)param_1 & 1) != 0) || (((ulong)param_2 & 1) != 0)) || ((param_3 & 1) != 0)) ||
     ((param_7 & 1) != 0)) {
LAB_1038ebcec:
    func_0x000107c6142c(puStack_78);
    return puVar10;
  }
  if (param_5 != 0) {
    uVar6 = param_4 & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar6 = param_5 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) goto LAB_1038ebcec;
  }
  if ((param_9 & 1) != 0) goto LAB_1038ebcec;
  if ((param_8 & 1) != 0) {
    if (param_14 == (undefined *)0x0) goto LAB_1038ebcec;
    uVar6 = (ulong)param_13 & 0xffffffffffff;
    if (((ulong)param_14 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)param_14 >> 0x38 & 0xf;
    }
    if (uVar6 == 0) goto LAB_1038ebcec;
    puVar4 = (undefined *)0x0;
    if (puStack_78 != (undefined *)0x0) {
      puVar4 = puStack_98;
    }
    puVar9 = (undefined *)0xe000000000000000;
    if (puStack_78 != (undefined *)0x0) {
      puVar9 = puStack_78;
    }
    puVar8 = PTR_PTR_1126a6218;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_13,param_14);
    func_0x000107c5fadc(puVar4,puVar9);
    func_0x000107c47098();
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(param_13);
    goto LAB_1038ebe6c;
  }
  if (param_12 == 0) goto LAB_1038ebcec;
  uVar6 = param_11 & 0xffffffffffff;
  if ((param_12 & 0x2000000000000000) != 0) {
    uVar6 = param_12 >> 0x38 & 0xf;
  }
  if (uVar6 == 0) goto LAB_1038ebcec;
  puVar4 = puStack_98;
  if (puStack_78 == (undefined *)0x0) {
    if (param_14 != (undefined *)0x0) {
      uVar6 = (ulong)param_13 & 0xffffffffffff;
      if (((ulong)param_14 & 0x2000000000000000) != 0) {
        uVar6 = (ulong)param_14 >> 0x38 & 0xf;
      }
      if (uVar6 != 0) {
        func_0x000107c61434(param_14);
        puVar4 = param_13;
        puStack_78 = param_14;
        goto LAB_1038ebe10;
      }
    }
    puVar4 = (undefined *)0x0;
    puStack_78 = (undefined *)0xe000000000000000;
  }
LAB_1038ebe10:
  puVar8 = PTR_PTR_1126a6218;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_11,param_12);
  func_0x000107c5fadc(puVar4,puStack_78);
  func_0x000107c47098();
  func_0x000107c6142c(puStack_78);
  func_0x000107c61170(param_11);
LAB_1038ebe6c:
  func_0x000107c61170(puVar4);
  puVar4 = puVar10;
  func_0x000107c61550();
  if ((((int)puVar4 == 0) || ((long)puVar10 < 0)) ||
     (puVar4 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      puVar9 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        puVar9 = puVar10;
      }
      func_0x000107c60480(puVar9);
    }
    puVar4 = (undefined *)0x0;
    FUN_1038eb15c(0,puVar9 + 1,1,puVar10);
  }
  uVar11 = (ulong)puVar4 & 0xffffffffffffff8;
  uVar6 = *(ulong *)(uVar11 + 0x10);
  puVar9 = puVar4;
  if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar6) {
    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
    FUN_1038eb15c(puVar9,uVar6 + 1,1,puVar4);
    uVar11 = (ulong)puVar9 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
  *(undefined **)(uVar11 + uVar6 * 8 + 0x20) = puVar8;
  return puVar9;
}



/* Entry: 1038ec034; end: 1038ec16b;  */

undefined8 FUN_1038ec034(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar5 != 0) {
    uVar6 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec118);
          (*pcVar2)();
        }
        uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar6;
        func_0x000102f02dd4(uVar6,param_1);
      }
      uVar1 = uVar6 + 1;
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec114);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c4a91c();
      func_0x0001038ec1d0(0);
      uVar7 = (uint)uVar4;
      if (1 < uVar7 - 1) {
        if ((uVar7 < 8) && ((1 << (ulong)(uVar7 & 0x1f) & 0xf9U) != 0)) {
          func_0x000107c61170(uVar3);
          return 1;
        }
        func_0x000107c60614();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ec16c);
        (*pcVar2)();
      }
      func_0x000107c61170(uVar3);
      uVar6 = uVar6 + 1;
    } while (uVar1 != uVar5);
  }
  return 0;
}



/* Entry: 1038ec16c; end: 1038ec21f;  */

void FUN_1038ec16c(void)

{
  func_0x000107c61168(&PTR_PTR_1128febc8);
  return;
}



/* Entry: 1038ec220; end: 1038ec22f; -[_TtC23SnapEditorSendPluginAPI22SCSnapEditorSendConfig sendConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad218));
  return;
}



/* Entry: 1038ec230; end: 1038ec277; -[_TtC23SnapEditorSendPluginAPI22SCSnapEditorSendConfig delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec230(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad220;
  func_0x000107c61428(param_1 + _DAT_112fad220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038ec278; end: 1038ec2cf; -[_TtC23SnapEditorSendPluginAPI22SCSnapEditorSendConfig setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad220;
  func_0x000107c61428(param_1 + _DAT_112fad220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038ec2d0; end: 1038ec44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038ec2d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fad220;
  func_0x000107c61614(unaff_x20 + _DAT_112fad220,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fad218) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1038ec450; end: 1038ec4f3; -[_TtC23SnapEditorSendPluginAPI22SCSnapEditorSendConfig initWithSendConfig:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec450(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fad220;
  func_0x000107c61614(param_1 + _DAT_112fad220,0);
  *(undefined8 *)(param_1 + _DAT_112fad218) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1038ec4f4; end: 1038ec527;  */

void FUN_1038ec4f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ec528; end: 1038ec55f; -[_TtC23SnapEditorSendPluginAPI22SCSnapEditorSendConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038ec528(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad218));
  param_1 = param_1 + _DAT_112fad220;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038ec560; end: 1038ec57f;  */

void FUN_1038ec560(void)

{
  func_0x000107c61168(&PTR_PTR_1128fec78);
  return;
}



/* Entry: 1038ec580; end: 1038ec5a3;  */

undefined8 FUN_1038ec580(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038ec5a4; end: 1038ec5e7; +[_TtC17SCSnapEditorUtils15SnapEditorUtils getSnapEditorPluginTypeFrom:] */

void FUN_1038ec5a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001038ec658(param_3);
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1038ec5e8; end: 1038ec623; -[_TtC17SCSnapEditorUtils15SnapEditorUtils init] */

void FUN_1038ec5e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ec624; end: 1038ec6cb;  */

void FUN_1038ec624(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ec6cc; end: 1038ec6db; -[SCMemoriesSearchInputApplyResult didChangeSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038ec6cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fad278);
}



/* Entry: 1038ec6dc; end: 1038ec6eb; -[SCMemoriesSearchInputApplyResult didConsumeText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038ec6dc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fad280);
}



/* Entry: 1038ec6ec; end: 1038ec713; -[SCMemoriesSearchInputApplyResult didChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1038ec6ec(long param_1)

{
  if ((*(byte *)(param_1 + _DAT_112fad278) & 1) != 0) {
    return 1;
  }
  return *(undefined1 *)(param_1 + _DAT_112fad280);
}



/* Entry: 1038ec714; end: 1038ec777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec714(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112fad278) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112fad280) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ec778; end: 1038ec7db; -[SCMemoriesSearchInputApplyResult initWithDidChangeSelection:didConsumeText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec778(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112fad278) = param_3;
  *(undefined1 *)(param_1 + _DAT_112fad280) = param_4;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ec7dc; end: 1038ec85b; -[SCMemoriesSearchInputApplyResult init] */

void FUN_1038ec7dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSearchInput.ApplyResult",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ec808);
  (*pcVar1)();
}



/* Entry: 1038ec85c; end: 1038ec8a7; -[SCMemoriesSearchInput text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec85c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fad2b0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fad2b0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038ec8a8; end: 1038ec8f7; -[SCMemoriesSearchInput selectedFacets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec8a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fad2b8);
  FUN_1038eef54(0);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038ec8f8; end: 1038ec9fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ec8f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001038ed344();
  lVar3 = lVar2;
  func_0x000107c610f8();
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  lVar4 = lVar3;
  func_0x000107c5eb68(lVar8);
  func_0x000100e8b654();
  lVar5 = lVar8;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar8,PTR___sSSN_11034da80,lVar4);
  (**(code **)(lVar9 + 8))(lVar8,lVar1);
  plVar6 = (long *)(lVar3 + _DAT_112fad2b0);
  *plVar6 = lVar5;
  plVar6[1] = (long)puVar7;
  *(undefined **)(lVar3 + _DAT_112fad2b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar6 = &lStack_70;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  plRam000000011380bc48 = plVar6;
  return;
}



/* Entry: 1038ec9fc; end: 1038eca43;  */

void FUN_1038ec9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1038eca84(param_1,param_2,param_3);
  return;
}



/* Entry: 1038eca44; end: 1038eca83; +[SCMemoriesSearchInput empty] */

void FUN_1038eca44(void)

{
  if (lRam0000000112fad2c0 != -1) {
    func_0x000107c61568(0x112fad2c0,FUN_1038ec8f8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380bc48);
  return;
}



/* Entry: 1038eca84; end: 1038ecb9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eca84(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  
  func_0x000107c614f0();
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = &stack0xffffffffffffff80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  func_0x000107c5eb68(puVar7);
  func_0x000100e8b654();
  puVar5 = puVar7;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c601f0(puVar7,PTR___sSSN_11034da80,lVar4);
  (**(code **)(lVar8 + 8))(puVar7,lVar3);
  func_0x000107c6142c(lVar2);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fad2b0);
  *puVar1 = puVar5;
  puVar1[1] = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112fad2b8) = param_3;
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ecba0; end: 1038ecc0b; -[SCMemoriesSearchInput initWithText:selectedFacets:] */

void FUN_1038ecba0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  uVar1 = 0;
  FUN_1038eef54(0);
  func_0x000107c5fc54(param_4,uVar1);
  FUN_1038eca84(param_3,param_2,param_4);
  return;
}



/* Entry: 1038ecc0c; end: 1038ecc5f; -[SCMemoriesSearchInput facets] */

void FUN_1038ecc0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1038ecc60();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000103a763d0(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1038ecc60; end: 1038ece27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038ecc60(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 auStack_70 [24];
  undefined *puStack_58;
  
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112fad2b8);
  if (uVar7 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar5 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1038ed310(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ece28);
      (*pcVar2)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      puVar6 = puStack_58;
      plVar10 = (long *)(uVar7 + 0x20);
      do {
        lVar1 = _DAT_112fad330;
        lVar8 = *plVar10;
        func_0x000107c61428(lVar8 + _DAT_112fad330,auStack_70,0,0);
        uVar4 = *(undefined8 *)(lVar8 + lVar1);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        uVar9 = *(ulong *)(puVar6 + 0x18);
        puStack_58 = puVar6;
        func_0x000107c61174();
        if (uVar9 >> 1 <= uVar7) {
          FUN_1038ed310(1 < uVar9,uVar7 + 1,1);
          puVar6 = puStack_58;
        }
        *(ulong *)(puVar6 + 0x10) = uVar7 + 1;
        *(undefined8 *)(puVar6 + uVar7 * 8 + 0x20) = uVar4;
        uVar5 = uVar5 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar9 = 0;
      do {
        puVar6 = puStack_58;
        uVar3 = uVar9;
        func_0x0001038ecf60(uVar9,uVar7);
        lVar1 = _DAT_112fad330;
        func_0x000107c61428(uVar3 + _DAT_112fad330,auStack_70,0,0);
        uVar4 = *(undefined8 *)(uVar3 + lVar1);
        func_0x000107c61174();
        func_0x000107c615e8(uVar3);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          FUN_1038ed310(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        uVar9 = uVar9 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        *(undefined8 *)(puStack_58 + uVar3 * 8 + 0x20) = uVar4;
        puVar6 = puStack_58;
      } while (uVar5 != uVar9);
    }
  }
  return puVar6;
}



/* Entry: 1038ece28; end: 1038ece4b; -[SCMemoriesSearchInput hasContent] */

uint FUN_1038ece28(uint param_1)

{
  FUN_1038ece4c();
  return param_1 & 1;
}



/* Entry: 1038ece4c; end: 1038ecec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1038ece4c(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112fad2b0))[1];
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112fad2b0) & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    return true;
  }
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112fad2b8);
  if (uVar2 >> 0x3e == 0) {
    uVar1 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar1 = uVar2;
    }
    func_0x000107c60480(uVar1);
  }
  return uVar1 != 0;
}



/* Entry: 1038ecec4; end: 1038ecf23; -[SCMemoriesSearchInput init] */

void FUN_1038ecec4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSearchInput.SearchInput",0x1f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ecef0);
  (*pcVar1)();
}



/* Entry: 1038ecf24; end: 1038ed2a3; -[SCMemoriesSearchInput .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038ecf44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038ecf48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ecf24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fad2b0 + 8))
  ;
  return;
}



/* Entry: 1038ed2a4; end: 1038ed30f;  */

void FUN_1038ed2a4(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1038ed310; end: 1038ed397;  */

void FUN_1038ed310(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1038ed398();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1038ed398; end: 1038ed4d3;  */

code * FUN_1038ed398(ulong param_1,ulong param_2,ulong param_3,code *param_4,code *param_5,
                    undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1038ed4d4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    pcVar2 = param_5;
    FUN_1038ed2a4(param_5,param_6,param_7);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_5)(0);
    func_0x000107c6140c(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      func_0x000107c610b8(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return pcVar2;
}



/* Entry: 1038ed4d4; end: 1038ed56b;  */

code * FUN_1038ed4d4(long param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    pcVar2 = FUN_1038eef54;
    FUN_1038ed2a4(FUN_1038eef54,0x112fad2f0,&UNK_10dc201b0);
    func_0x000107c613fc();
    pcVar3 = pcVar2;
    func_0x000107c610a4();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(long *)(pcVar2 + 0x10) = param_1;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  return pcVar2;
}



/* Entry: 1038ed56c; end: 1038ed5b3; -[SCMemoriesSearchInputEditor current] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ed56c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad300;
  func_0x000107c61428(param_1 + _DAT_112fad300,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1038ed5b4; end: 1038ed617; -[SCMemoriesSearchInputEditor setCurrent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ed5b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad300;
  func_0x000107c61428(param_1 + _DAT_112fad300,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1038ed618; end: 1038ed6b3; -[SCMemoriesSearchInputEditor init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ed618(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fad300;
  if (lRam0000000112fad2c0 != -1) {
    func_0x000107c61568(0x112fad2c0,FUN_1038ec8f8);
  }
  uVar3 = uRam000000011380bc48;
  *(undefined8 *)(param_1 + lVar2) = uRam000000011380bc48;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar4;
  func_0x000107c61174(uVar3);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 1038ed6b4; end: 1038ed78f; -[SCMemoriesSearchInputEditor setText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ed6b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  lVar1 = _DAT_112fad300;
  func_0x000107c61428(param_1 + _DAT_112fad300,auStack_68,1,0);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + lVar1) + _DAT_112fad2b8);
  func_0x0001038ed344(0);
  func_0x000107c610f8();
  lVar2 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61434(uVar3);
  FUN_1038eca84(param_3,param_2,uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1038ed790; end: 1038ed9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1038ed790(long param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  ulong uVar7;
  
  func_0x000103a75ac4(0);
  func_0x000103a7344c(param_2,param_3,*(undefined8 *)(param_1 + _DAT_112fda0f0));
  FUN_1038eef54(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar6 = param_1;
  FUN_1038eee94();
  func_0x000107c61170(param_1);
  lVar4 = _DAT_112fad300;
  func_0x000107c61428(unaff_x20 + _DAT_112fad300,auStack_78,1,0);
  uVar14 = *(undefined8 *)(*(long *)(unaff_x20 + lVar4) + _DAT_112fad2b8);
  func_0x000107c61434(uVar14);
  lVar12 = lVar6;
  FUN_1038ee328(lVar6,uVar14);
  func_0x000107c6142c(uVar14);
  uVar7 = 0;
  if (param_3 != 0) {
    uVar7 = param_2;
  }
  uVar2 = 0xe000000000000000;
  if (param_3 != 0) {
    uVar2 = param_3;
  }
  uVar3 = uVar7 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  func_0x000107c61434(param_3);
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_1038ee9d0(uVar7,uVar2,param_1);
    uVar5 = (uint)uVar7;
  }
  func_0x000107c6142c(uVar2);
  lVar8 = 0;
  func_0x0001038ec83c();
  lVar9 = lVar8;
  func_0x000107c610f8();
  *(bool *)(lVar9 + _DAT_112fad278) = lVar12 != 0;
  *(byte *)(lVar9 + _DAT_112fad280) = (byte)uVar5 & 1;
  plVar10 = &lStack_88;
  lStack_88 = lVar9;
  lStack_80 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  if (((*(byte *)((long)plVar10 + _DAT_112fad278) & 1) == 0) &&
     (*(char *)((long)plVar10 + _DAT_112fad280) != '\x01')) {
    func_0x000107c61170(lVar6);
    func_0x000107c6142c(lVar12);
  }
  else {
    if ((uVar5 & 1) == 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar4) + _DAT_112fad2b0);
      uVar14 = *puVar1;
      uVar13 = puVar1[1];
      func_0x000107c61434(uVar13);
    }
    else {
      uVar14 = 0;
      uVar13 = 0;
    }
    if (lVar12 == 0) {
      lVar12 = *(long *)(*(long *)(unaff_x20 + lVar4) + _DAT_112fad2b8);
      func_0x000107c61434(lVar12);
    }
    uVar11 = 0;
    func_0x0001038ed344(0);
    func_0x000107c610f8();
    FUN_1038eca84(uVar14,uVar13,lVar12,uVar11);
    func_0x000107c61170(lVar6);
    uVar13 = *(undefined8 *)(unaff_x20 + lVar4);
    *(undefined8 *)(unaff_x20 + lVar4) = uVar14;
    func_0x000107c61170(uVar13);
  }
  return plVar10;
}



/* Entry: 1038ed9f8; end: 1038eda87; -[SCMemoriesSearchInputEditor apply:typedText:] */

void FUN_1038ed9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1038ed790(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1038eda88; end: 1038edb97; -[SCMemoriesSearchInputEditor promoteWholeUniqueAmong:typedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eda88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  undefined1 *puStack_50;
  undefined1 *puStack_48;
  
  ppuVar3 = &puStack_50;
  uVar1 = 0;
  func_0x000103a763d0(0);
  func_0x000107c5fc54(param_3,uVar1);
  if (param_4 == (undefined1 *)0x0) {
    param_4 = (undefined1 *)0x0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_1);
  FUN_1038eea78(param_4,uVar1,param_3);
  if (param_4 == (undefined1 *)0x0) {
    func_0x0001038ec83c();
    puVar2 = param_4;
    func_0x000107c610f8();
    puVar2[_DAT_112fad278] = 0;
    puVar2[_DAT_112fad280] = 0;
    puStack_50 = puVar2;
    puStack_48 = param_4;
    func_0x000107c61154(&puStack_50,PTR_s_init_1125d9248);
  }
  else {
    ppuVar3 = (undefined1 **)param_4;
    FUN_1038ed790();
    func_0x000107c61170(param_4);
  }
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1038edb98; end: 1038ede5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038edb98(ulong param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  long extraout_x8;
  undefined8 uVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lStack_a8 = *(long *)(lVar4 + -8);
  lStack_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lVar4 = _DAT_112fad300;
  puStack_b0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(unaff_x20 + _DAT_112fad300,auStack_78,1,0);
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + lVar4) + _DAT_112fad2b0);
  uStack_c0 = *puVar1;
  uStack_b8 = puVar1[1];
  uVar16 = *(ulong *)(*(long *)(unaff_x20 + lVar4) + _DAT_112fad2b8);
  uVar15 = uVar16 & 0xffffffffffffff8;
  if (uVar16 >> 0x3e == 0) {
    uVar18 = *(ulong *)(uVar15 + 0x10);
  }
  else {
    uVar18 = uVar15;
    if (0x7fffffffffffffff < uVar16) {
      uVar18 = uVar16;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434();
  func_0x000107c61434(uVar16);
  puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar18 != 0) {
    uVar13 = 0;
    do {
      while( true ) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar15 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1038ede40);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(uVar16 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          func_0x0001038ecf60(uVar13,uVar16);
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1038ede3c);
          (*pcVar3)();
        }
        uVar14 = uVar13 + 1;
        if (uVar5 == param_1) break;
        puVar6 = puVar17;
        uStack_c8 = uVar5;
        func_0x000107c61558();
        lStack_d8 = lVar4;
        lStack_d0 = unaff_x20;
        puStack_88 = puVar17;
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001038ed364(0,*(long *)(puVar17 + 0x10) + 1,1);
        }
        uVar13 = *(ulong *)(puStack_88 + 0x10);
        if (*(ulong *)(puStack_88 + 0x18) >> 1 <= uVar13) {
          func_0x0001038ed364(1 < *(ulong *)(puStack_88 + 0x18),uVar13 + 1,1);
        }
        *(ulong *)(puStack_88 + 0x10) = uVar13 + 1;
        *(ulong *)(puStack_88 + uVar13 * 8 + 0x20) = uStack_c8;
        uVar13 = uVar14;
        unaff_x20 = lStack_d0;
        puVar17 = puStack_88;
        lVar4 = lStack_d8;
        if (uVar14 == uVar18) goto LAB_1038edd64;
      }
      func_0x000107c61170();
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar18);
  }
LAB_1038edd64:
  func_0x000107c6142c(uVar16);
  lVar7 = 0;
  func_0x0001038ed344();
  lVar8 = lVar7;
  func_0x000107c610f8();
  puVar2 = puStack_b0;
  uVar12 = uStack_b8;
  puStack_88 = (undefined *)uStack_c0;
  uStack_80 = uStack_b8;
  lVar9 = lVar8;
  func_0x000107c5eb68(puStack_b0);
  func_0x000100e8b654();
  puVar10 = puVar2;
  puVar6 = PTR___sSSN_11034da80;
  func_0x000107c601f0(puVar2,PTR___sSSN_11034da80,lVar9);
  (**(code **)(lStack_a8 + 8))(puVar2,lStack_a0);
  func_0x000107c6142c(uVar12);
  puVar1 = (undefined8 *)(lVar8 + _DAT_112fad2b0);
  *puVar1 = puVar10;
  puVar1[1] = puVar6;
  *(undefined **)(lVar8 + _DAT_112fad2b8) = puVar17;
  plVar11 = &lStack_98;
  lStack_98 = lVar8;
  lStack_90 = lVar7;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  uVar12 = *(undefined8 *)(unaff_x20 + lVar4);
  *(long **)(unaff_x20 + lVar4) = plVar11;
  func_0x000107c61170(uVar12);
  return;
}



/* Entry: 1038ede5c; end: 1038edeab; -[SCMemoriesSearchInputEditor remove:] */

/* WARNING: Possible PIC construction at 0x0001038ede94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038ede98) */

void FUN_1038ede5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1038edb98(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1038edeac; end: 1038ee023; -[SCMemoriesSearchInputEditor clearFacets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038edeac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long extraout_x8;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar3 = _DAT_112fad300;
  lVar11 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_1 + _DAT_112fad300,auStack_78,1,0);
  puVar1 = (undefined8 *)(*(long *)(param_1 + lVar3) + _DAT_112fad2b0);
  uVar10 = *puVar1;
  uVar2 = puVar1[1];
  lVar5 = 0;
  func_0x0001038ed344();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar7 = param_1;
  uStack_88 = uVar10;
  uStack_80 = uVar2;
  func_0x000107c61174();
  uVar10 = uVar2;
  lStack_a0 = lVar7;
  func_0x000107c61434(uVar2);
  func_0x000107c5eb68(lVar11);
  func_0x000100e8b654();
  lVar7 = lVar11;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar11,PTR___sSSN_11034da80,uVar10);
  (**(code **)(lVar12 + 8))(lVar11,lVar4);
  func_0x000107c6142c(uVar2);
  plVar8 = (long *)(lVar6 + _DAT_112fad2b0);
  *plVar8 = lVar7;
  plVar8[1] = (long)puVar9;
  *(undefined **)(lVar6 + _DAT_112fad2b8) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar8 = &lStack_98;
  lStack_98 = lVar6;
  lStack_90 = lVar5;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  uVar10 = *(undefined8 *)(param_1 + lVar3);
  *(long **)(param_1 + lVar3) = plVar8;
  func_0x000107c61170(lStack_a0);
  func_0x000107c61170(uVar10);
  return;
}



/* Entry: 1038ee024; end: 1038ee0c3; -[SCMemoriesSearchInputEditor clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ee024(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = lRam0000000112fad2c0;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112fad2c0,FUN_1038ec8f8);
  }
  uVar2 = uRam000000011380bc48;
  lVar1 = _DAT_112fad300;
  func_0x000107c61428(param_1 + _DAT_112fad300,auStack_48,1,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  func_0x000107c61174(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1038ee0c4; end: 1038ee0f7;  */

void FUN_1038ee0c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ee0f8; end: 1038ee107; -[SCMemoriesSearchInputEditor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ee0f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fad300));
  return;
}



/* Entry: 1038ee108; end: 1038ee327;  */

ulong FUN_1038ee108(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ee230);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1038ed4d4(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ee22c);
      (*pcVar1)();
    }
    func_0x0001038ee230(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1038ee328; end: 1038ee9cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1038ee328(long param_1,ulong param_2)

{
  ulong *puVar1;
  bool bVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar5 = param_1;
  func_0x000103a75c4c();
  if (param_2 >> 0x3e == 0) {
    uVar6 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar6 = param_2;
    }
    func_0x000107c60480();
  }
  if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1038ee96c);
    (*pcVar4)();
  }
  if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e == 0) {
    puVar7 = *(undefined **)
              (((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar7 = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_11034f1c8) {
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    func_0x000107c60480();
  }
  if ((long)puVar7 <= (long)(uVar6 + 1)) {
    puVar7 = (undefined *)(uVar6 + 1);
  }
  uVar6 = 0;
  FUN_1038ee108(0,puVar7,0,PTR___swiftEmptyArrayStorage_11034f1c8);
  if (param_2 >> 0x3e == 0) {
    uVar16 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar16 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar16 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar16 != 0) {
    puVar1 = (ulong *)(param_1 + _DAT_112fad338);
    func_0x0001007bbbf8(0);
    if ((param_2 & 0xc000000000000001) == 0) {
      bVar2 = false;
      uVar11 = 0;
      uVar15 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
LAB_1038ee670:
      uVar10 = uVar11;
      if (uVar11 <= uVar15) {
        uVar11 = uVar15;
      }
      do {
        lVar3 = _DAT_112fad330;
        if (uVar11 == uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038ee954);
          (*pcVar4)();
        }
        uVar9 = *(ulong *)(param_2 + 0x20 + uVar10 * 8);
        uVar12 = uVar9;
        func_0x000107c61174();
        uVar8 = uVar12;
        func_0x000103a75c4c();
        uVar14 = uVar8;
        func_0x000107c60118();
        func_0x000107c61170(uVar8);
        if ((uVar14 & 1) == 0) {
          uVar8 = uVar12;
          func_0x000107c61174();
          uVar14 = uVar6;
          if (uVar6 >> 0x3e != 0) {
            uVar9 = uVar6 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar6) {
              uVar9 = uVar6;
            }
            func_0x000107c60480(uVar9);
            uVar14 = 0;
            FUN_1038ee108(0,uVar9 + 1,1,uVar6);
          }
          uVar13 = uVar14 & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar13 + 0x10);
          uVar6 = uVar14;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
            uVar6 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_1038ee108(uVar6,uVar9 + 1,1,uVar14);
            uVar13 = uVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar9 + 1;
          *(ulong *)(uVar13 + uVar9 * 8 + 0x20) = uVar8;
        }
        else {
          uVar14 = *(ulong *)(*(long *)(uVar9 + lVar3) + _DAT_112fda0f0);
          func_0x000107c61174();
          uVar8 = uVar14;
          func_0x000107c60118();
          func_0x000107c61170(uVar14);
          uVar14 = ((ulong *)(uVar12 + _DAT_112fad338))[1];
          uVar9 = puVar1[1];
          if (uVar14 == 0) {
            if (uVar9 != 0) goto LAB_1038ee684;
LAB_1038ee7a8:
            if ((uVar8 & 1) != 0) goto LAB_1038ee92c;
          }
          else if (uVar9 == 0) {
LAB_1038ee684:
            if ((uVar8 & 1) != 0) goto LAB_1038ee81c;
          }
          else {
            uVar13 = *(ulong *)(uVar12 + _DAT_112fad338);
            if (uVar13 == *puVar1 && uVar14 == uVar9) goto LAB_1038ee7a8;
            func_0x000107c605b8();
            if ((uVar8 & 1) != 0) goto LAB_1038ee818;
          }
        }
        uVar10 = uVar10 + 1;
        func_0x000107c61170(uVar12);
        if (uVar16 == uVar10) goto LAB_1038ee8c4;
      } while( true );
    }
    bVar2 = false;
    uVar11 = 0;
    do {
      while( true ) {
        uVar12 = uVar11;
        func_0x0001038ecf60(uVar11,param_2);
        lVar3 = _DAT_112fad330;
        uVar15 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1038ee950);
          (*pcVar4)();
        }
        uVar10 = uVar12;
        func_0x000103a75c4c();
        uVar8 = uVar10;
        func_0x000107c60118();
        func_0x000107c61170(uVar10);
        if ((uVar8 & 1) != 0) break;
        func_0x000107c615f0(uVar12);
        uVar10 = uVar6;
        if (uVar6 >> 0x3e != 0) {
          uVar8 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar8 = uVar6;
          }
          func_0x000107c60480(uVar8);
          uVar10 = 0;
          FUN_1038ee108(0,uVar8 + 1,1,uVar6);
        }
        uVar14 = uVar10 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar14 + 0x10);
        uVar6 = uVar10;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar8) {
          uVar6 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_1038ee108(uVar6,uVar8 + 1,1,uVar10);
          uVar14 = uVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar14 + 0x10) = uVar8 + 1;
        *(ulong *)(uVar14 + uVar8 * 8 + 0x20) = uVar12;
LAB_1038ee438:
        func_0x000107c615e8(uVar12);
        uVar11 = uVar11 + 1;
        if (uVar15 == uVar16) goto LAB_1038ee8c4;
      }
      uVar8 = *(ulong *)(*(long *)(uVar12 + lVar3) + _DAT_112fda0f0);
      func_0x000107c61174();
      uVar10 = uVar8;
      func_0x000107c60118();
      func_0x000107c61170(uVar8);
      uVar8 = ((ulong *)(uVar12 + _DAT_112fad338))[1];
      uVar14 = puVar1[1];
      if (uVar8 == 0) {
        if (uVar14 != 0) goto LAB_1038ee434;
LAB_1038ee554:
        if ((uVar10 & 1) == 0) goto LAB_1038ee438;
        goto LAB_1038ee92c;
      }
      if (uVar14 == 0) {
LAB_1038ee434:
        if ((uVar10 & 1) == 0) goto LAB_1038ee438;
      }
      else {
        uVar9 = *(ulong *)(uVar12 + _DAT_112fad338);
        if (uVar9 == *puVar1 && uVar8 == uVar14) goto LAB_1038ee554;
        func_0x000107c605b8();
        if ((uVar10 & 1) == 0) goto LAB_1038ee438;
        if ((uVar9 & 1) != 0) {
LAB_1038ee92c:
          func_0x000107c61170(lVar5);
          func_0x000107c6142c(uVar6);
          func_0x000107c61170(uVar12);
          return 0;
        }
      }
      uVar11 = uVar6;
      if (uVar6 >> 0x3e != 0) {
        uVar10 = uVar6 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar6) {
          uVar10 = uVar6;
        }
        func_0x000107c60480(uVar10);
        uVar11 = 0;
        FUN_1038ee108(0,uVar10 + 1,1,uVar6);
      }
      uVar8 = uVar11 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar8 + 0x10);
      uVar6 = uVar11;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar10) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1038ee108(uVar6,uVar10 + 1,1,uVar11);
        uVar8 = uVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
      *(long *)(uVar8 + uVar10 * 8 + 0x20) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c615e8(uVar12);
      bVar2 = true;
      uVar11 = uVar15;
    } while (uVar15 != uVar16);
    goto LAB_1038ee900;
  }
LAB_1038ee8d0:
  uVar16 = uVar6;
  if (uVar6 >> 0x3e != 0) {
    uVar11 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar11 = uVar6;
    }
    func_0x000107c60480(uVar11);
    uVar16 = 0;
    FUN_1038ee108(0,uVar11 + 1,1,uVar6);
  }
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar11 = *(ulong *)(uVar15 + 0x10);
  uVar6 = uVar16;
  if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar11) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
    FUN_1038ee108(uVar6,uVar11 + 1,1,uVar16);
    uVar15 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar15 + 0x10) = uVar11 + 1;
  *(long *)(uVar15 + uVar11 * 8 + 0x20) = param_1;
  func_0x000107c61174(param_1);
LAB_1038ee900:
  func_0x000107c61170(lVar5);
  return uVar6;
LAB_1038ee818:
  if ((uVar13 & 1) != 0) goto LAB_1038ee92c;
LAB_1038ee81c:
  uVar11 = uVar6;
  if (uVar6 >> 0x3e != 0) {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480(uVar8);
    uVar11 = 0;
    FUN_1038ee108(0,uVar8 + 1,1,uVar6);
  }
  uVar14 = uVar11 & 0xffffffffffffff8;
  uVar8 = *(ulong *)(uVar14 + 0x10);
  uVar6 = uVar11;
  if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar8) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
    FUN_1038ee108(uVar6,uVar8 + 1,1,uVar11);
    uVar14 = uVar6 & 0xffffffffffffff8;
  }
  uVar11 = uVar10 + 1;
  *(ulong *)(uVar14 + 0x10) = uVar8 + 1;
  *(long *)(uVar14 + uVar8 * 8 + 0x20) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61170(uVar12);
  bVar2 = true;
  if (uVar16 - 1 == uVar10) goto LAB_1038ee900;
  goto LAB_1038ee670;
LAB_1038ee8c4:
  if (bVar2) goto LAB_1038ee900;
  goto LAB_1038ee8d0;
}



/* Entry: 1038ee9d0; end: 1038eea77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1038ee9d0(ulong param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  func_0x000103a722f4(0);
  func_0x000103a72058(param_1,param_2,uVar3);
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    func_0x000103a75ac4(0);
    func_0x000103a732e8(param_1,param_2,*(undefined8 *)(param_3 + _DAT_112fda0f0),uVar3);
    uVar2 = (uint)param_1;
  }
  func_0x000107c6142c(param_2);
  return uVar2 & 1;
}



/* Entry: 1038eea78; end: 1038eeca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038eea78(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  
  uVar2 = 0;
  func_0x000103a722f4(0);
  func_0x000103a72058(param_1,param_2,uVar2);
  uVar6 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar6 = param_2 >> 0x38 & 0xf;
  }
  if (uVar6 != 0) {
    if (param_3 >> 0x3e == 0) {
      uVar6 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = param_3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_3) {
        uVar6 = param_3;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      func_0x000103a75ac4(0);
      if ((param_3 & 0xc000000000000001) == 0) {
        plVar10 = (long *)(param_3 + 0x20);
        lVar8 = *(long *)((param_3 & 0xffffffffffffff8) + 0x10);
        lVar5 = 0;
        do {
          if (lVar8 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eec5c);
            (*pcVar1)();
          }
          lVar7 = *plVar10;
          uVar9 = *(undefined8 *)(lVar7 + _DAT_112fda0f0);
          func_0x000107c61434(param_2);
          func_0x000107c61174();
          uVar2 = uVar9;
          func_0x000107c61174(uVar9);
          uVar4 = param_1;
          func_0x000103a73300(param_1,param_2,uVar9);
          func_0x000107c6142c(param_2);
          func_0x000107c61170(uVar2);
          if ((uVar4 & 1) == 0) {
            func_0x000107c61170(lVar7);
            lVar7 = lVar5;
          }
          else if (lVar5 != 0) goto LAB_1038eec38;
          lVar8 = lVar8 + -1;
          plVar10 = plVar10 + 1;
          uVar6 = uVar6 - 1;
          lVar5 = lVar7;
        } while (uVar6 != 0);
      }
      else {
        lVar8 = 0;
        lVar5 = 0;
        do {
          lVar7 = lVar8;
          func_0x0001038ed108(lVar8,param_3);
          uVar4 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eec58);
            (*pcVar1)();
          }
          uVar9 = *(undefined8 *)(lVar7 + _DAT_112fda0f0);
          func_0x000107c61434(param_2);
          uVar2 = uVar9;
          func_0x000107c61174(uVar9);
          uVar3 = param_1;
          func_0x000103a73300(param_1,param_2,uVar9);
          func_0x000107c6142c(param_2);
          func_0x000107c61170(uVar2);
          if ((uVar3 & 1) == 0) {
            func_0x000107c615e8(lVar7);
            lVar7 = lVar5;
          }
          else if (lVar5 != 0) {
LAB_1038eec38:
            func_0x000107c6142c(param_2);
            func_0x000107c61170(lVar7);
            func_0x000107c61170(lVar5);
            return 0;
          }
          lVar8 = lVar8 + 1;
          lVar5 = lVar7;
        } while (uVar4 != uVar6);
      }
      func_0x000107c6142c(param_2);
      return lVar7;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1038eeca4; end: 1038eecc3;  */

void FUN_1038eeca4(void)

{
  func_0x000107c61168(&PTR_PTR_1128fef80);
  return;
}



/* Entry: 1038eecc4; end: 1038eed1b;  */

undefined8 FUN_1038eecc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_1038eee94(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1038eed1c; end: 1038eed2b; -[SCMemoriesSelectedFacet facet] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eed1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad330));
  return;
}



/* Entry: 1038eed2c; end: 1038eed87; -[SCMemoriesSelectedFacet displayLanguage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eed2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fad338))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fad338);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038eed88; end: 1038eedf7; -[SCMemoriesSelectedFacet initWithFacet:displayLanguage:] */

undefined8 FUN_1038eed88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_1038eee94();
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 1038eedf8; end: 1038eee57; -[SCMemoriesSelectedFacet init] */

void FUN_1038eedf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSearchInput.SelectedFacet",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eee24);
  (*pcVar1)();
}



/* Entry: 1038eee58; end: 1038eee93; -[SCMemoriesSelectedFacet .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eee58(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad330));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fad338 + 8))
  ;
  return;
}



/* Entry: 1038eee94; end: 1038eef53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eee94(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112fad330) = param_1;
  if (param_3 == 0) {
    func_0x000107c61174(param_1);
    param_2 = 0;
  }
  else {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      func_0x000107c61174(param_1);
      func_0x000107c6142c(param_3);
      param_2 = 0;
      param_3 = 0;
    }
    else {
      func_0x000107c61174(param_1);
    }
  }
  puVar1 = (ulong *)(unaff_x20 + _DAT_112fad338);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038eef54; end: 1038eefb7;  */

void FUN_1038eef54(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff038);
  return;
}



/* Entry: 1038eefb8; end: 1038ef09f;  */

void FUN_1038eefb8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  FUN_1038ef758();
  lVar2 = lVar1;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_4;
  func_0x0001000285a8(0x112fad410,&UNK_10dc20268);
  puVar3 = &UNK_1106a9228;
  func_0x000107c613fc(&UNK_1106a9228,0x20,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  uVar4 = 0x1038ef7a8;
  func_0x0001000823a8(0x1038ef7a8,puVar3);
  *(undefined8 *)(lVar2 + 0x70) = uVar4;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106a91e8;
  *param_1 = lVar2;
  return;
}



/* Entry: 1038ef0a0; end: 1038ef0ab;  */

void FUN_1038ef0a0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar4 = lVar1;
  FUN_1038ef758();
  lVar5 = lVar4;
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(lVar5 + 0x78) = uVar2;
  *(undefined8 *)(lVar5 + 0x80) = uVar7;
  func_0x0001000285a8(0x112fad410,&UNK_10dc20268);
  puVar6 = &UNK_1106a9228;
  func_0x000107c613fc(&UNK_1106a9228,0x20,7);
  *(long *)(puVar6 + 0x10) = lVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  uVar7 = 0x1038ef7a8;
  func_0x0001000823a8(0x1038ef7a8,puVar6);
  *(undefined8 *)(lVar5 + 0x70) = uVar7;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_1106a91e8;
  *param_1 = lVar5;
  return;
}



/* Entry: 1038ef0ac; end: 1038ef147;  */

long FUN_1038ef0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x000107c61474();
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  *(undefined8 *)(unaff_x20 + 0x80) = param_3;
  func_0x0001000285a8(0x112fad410,&UNK_10dc20268);
  puVar1 = &UNK_1106a91d0;
  func_0x000107c613fc(&UNK_1106a91d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  pcVar2 = FUN_1038ef2dc;
  func_0x0001000823a8(FUN_1038ef2dc,puVar1);
  *(code **)(unaff_x20 + 0x70) = pcVar2;
  return unaff_x20;
}



/* Entry: 1038ef148; end: 1038ef2db;  */

void FUN_1038ef148(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000100083b20(&uStack_c8);
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f175460);
  uVar2 = uStack_c8;
  func_0x000107c4e60c(uStack_c8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_c8);
  func_0x000107c61170(uVar1);
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef11a10;
  uStack_b8 = 60000;
  uStack_b0 = 0x200;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 60000;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000100083b20(auStack_118);
  func_0x0001000a8868(auStack_118,uStack_100);
  pcVar4 = *(code **)(lStack_f8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar4)(auStack_f0,0xd00000000000003f,0x800000010f175490,&uStack_c8,uVar2,uStack_100,lStack_f8);
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615ec(uVar2,2);
  func_0x0001000834e4(auStack_118);
  func_0x0001038ffdb8(0);
  func_0x000107c613fc();
  puVar3 = auStack_f0;
  FUN_1038ffb00();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 1038ef2dc; end: 1038ef2fb;  */

void FUN_1038ef2dc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  long lStack_f8;
  undefined1 auStack_f0 [40];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined2 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  func_0x000100083b20(&uStack_c8,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar1 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f175460);
  uVar2 = uStack_c8;
  func_0x000107c4e60c(uStack_c8);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_c8);
  func_0x000107c61170(uVar1);
  uStack_c8 = 0xd000000000000018;
  uStack_c0 = 0x800000010ef11a10;
  uStack_b8 = 60000;
  uStack_b0 = 0x200;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 60000;
  uStack_70 = 0;
  uStack_68 = 1;
  func_0x000100083b20(auStack_118);
  func_0x0001000a8868(auStack_118,uStack_100);
  pcVar4 = *(code **)(lStack_f8 + 8);
  func_0x000107c615f0(uVar2);
  (*pcVar4)(auStack_f0,0xd00000000000003f,0x800000010f175490,&uStack_c8,uVar2,uStack_100,lStack_f8);
  func_0x000100e1b054(&uStack_c8);
  func_0x000107c615ec(uVar2,2);
  func_0x0001000834e4(auStack_118);
  func_0x0001038ffdb8(0);
  func_0x000107c613fc();
  puVar3 = auStack_f0;
  FUN_1038ffb00();
  *param_1 = (long)puVar3;
  return;
}



/* Entry: 1038ef2fc; end: 1038ef38f;  */

void FUN_1038ef2fc(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x70);
  plVar3 = *(long **)(unaff_x22 + 0x70);
  *(long **)(unaff_x22 + 0x88) = plVar3;
  FUN_1038ef41c(unaff_x22 + 0x10);
  piVar2 = *(int **)(*plVar3 + 0x78);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1038ef390;
                    /* WARNING: Could not recover jumptable at 0x0001038ef38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x78),unaff_x22 + 0x10);
  return;
}



/* Entry: 1038ef390; end: 1038ef41b;  */

void FUN_1038ef390(void)

{
  long *unaff_x22;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  func_0x000101327450(lVar3 + 0x10);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001038ef418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038ef41c; end: 1038ef65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ef41c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined *puStack_b0;
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
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  func_0x000100083b20(&puStack_b0);
  puVar3 = puStack_b0;
  uVar2 = *(ulong *)(puStack_b0 + _DAT_1130806d0);
  func_0x000107c61174();
  func_0x000107c61170(puVar3);
  uVar6 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar6 == 0) {
    uVar6 = 0;
    param_3 = 0xe000000000000000;
  }
  else {
    uVar2 = uVar6;
    func_0x000107c51d60();
    func_0x000107c61180();
    func_0x000107c615e8(uVar6);
    uVar6 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
  }
  uVar2 = uVar6 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar2 = param_3 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    func_0x000107c6142c(param_3);
  }
  else {
    puVar3 = puVar1;
    func_0x000107c61558(puVar1);
    puStack_b0 = puVar1;
    func_0x00010018433c(uVar6,param_3,0xd000000000000010,0x800000010ef1c330,puVar3);
    puVar1 = puStack_b0;
  }
  func_0x000100083b20(&puStack_b0);
  puVar3 = puStack_b0;
  puVar4 = puVar1;
  func_0x000107c5f9dc(puVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  puVar5 = puVar3;
  func_0x000107c44d84();
  func_0x000107c61180();
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(puVar4);
  puVar3 = puVar1;
  if (puVar5 != (undefined *)0x0) {
    puVar3 = puVar5;
    func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar1);
    func_0x000107c61170(puVar5);
  }
  if (*(long *)(puVar3 + 0x10) == 0) {
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    puStack_120 = (undefined *)0x0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
  }
  else {
    func_0x00010448a8f4(auStack_110);
    func_0x00010448a92c(&puStack_b0,puVar3);
    uStack_128 = uStack_98;
    uStack_130 = uStack_a0;
    uStack_118 = uStack_a8;
    puStack_120 = puStack_b0;
    uStack_148 = uStack_78;
    uStack_150 = uStack_80;
    uStack_138 = uStack_88;
    uStack_140 = uStack_90;
    uStack_168 = uStack_58;
    uStack_170 = uStack_60;
    uStack_158 = uStack_68;
    uStack_160 = uStack_70;
    func_0x000100e19000(auStack_110);
  }
  func_0x000107c6142c(puVar3);
  param_1[1] = uStack_118;
  *param_1 = puStack_120;
  param_1[3] = uStack_128;
  param_1[2] = uStack_130;
  param_1[5] = uStack_138;
  param_1[4] = uStack_140;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[9] = uStack_158;
  param_1[8] = uStack_160;
  param_1[0xb] = uStack_168;
  param_1[10] = uStack_170;
  return;
}



/* Entry: 1038ef65c; end: 1038ef68f;  */

void FUN_1038ef65c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 1038ef690; end: 1038ef6b3;  */

void FUN_1038ef690(void)

{
  return;
}



/* Entry: 1038ef6b4; end: 1038ef747;  */

void FUN_1038ef6b4(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x70);
  plVar3 = *(long **)(unaff_x22 + 0x70);
  *(long **)(unaff_x22 + 0x88) = plVar3;
  FUN_1038ef41c(unaff_x22 + 0x10);
  piVar2 = *(int **)(*plVar3 + 0x78);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1038ef7a4;
                    /* WARNING: Could not recover jumptable at 0x0001038ef744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x78),unaff_x22 + 0x10);
  return;
}



/* Entry: 1038ef748; end: 1038ef757;  */

undefined1  [16] FUN_1038ef748(void)

{
  return ZEXT816(0x1106a9208);
}



/* Entry: 1038ef758; end: 1038ef7a3;  */

void FUN_1038ef758(void)

{
  func_0x000107c61168(&PTR_PTR_112fad458);
  return;
}



/* Entry: 1038ef7a4; end: 1038ef7ab;  */

void FUN_1038ef7a4(void)

{
  long lVar1;
  long *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
  uVar2 = *(undefined8 *)(lVar3 + 0x88);
  func_0x000101327450(lVar3 + 0x10);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001038ef418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1038ef7ac; end: 1038ef887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ef7ac(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar2 = param_2;
  FUN_1038f0c34();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112fad500;
  uVar4 = 0;
  FUN_1038f159c();
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c453e4();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  *(undefined8 *)(lVar3 + _DAT_112fad508) = 0;
  *(long *)(lVar3 + _DAT_112fad510) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112fad518) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112fad520) = param_4;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 1038ef888; end: 1038ef893;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ef888(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = &lStack_60;
  lVar4 = lVar1;
  FUN_1038f0c34();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112fad500;
  uVar6 = 0;
  FUN_1038f159c();
  func_0x000107c610f8();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c453e4();
  *(undefined8 *)(lVar5 + lVar3) = uVar6;
  *(undefined8 *)(lVar5 + _DAT_112fad508) = 0;
  *(long *)(lVar5 + _DAT_112fad510) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112fad518) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112fad520) = uVar8;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 1038ef894; end: 1038ef93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ef894(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112fad500;
  uVar2 = 0;
  FUN_1038f159c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112fad508) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fad510) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fad518) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fad520) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ef93c; end: 1038efa83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1038ef93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  
  lVar1 = _DAT_112fad508;
  puVar6 = PTR___sSbN_11034dd40;
  lVar7 = *(long *)(unaff_x20 + _DAT_112fad508);
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar7);
  }
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1106a9290;
  func_0x000107c613fc(&UNK_1106a9290,0x38,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_3;
  *(undefined **)(puVar3 + 0x30) = puVar2;
  func_0x000107c61434(param_3);
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar4 = 0x40;
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10dc20350,puVar3,puVar6);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
  func_0x000107c61574(uVar5);
  puVar6 = puVar2;
  func_0x000107c43bf4(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar6;
}



/* Entry: 1038efa84; end: 1038efaef; -[_TtC34MemoriesSemanticSearchServicesImpl29MemoriesSemanticSearchManager fetchEntryIDsWithQueryText:] */

void FUN_1038efa84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1038ef93c(param_3,param_2,0);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1038efaf0; end: 1038efb8b;  */

void FUN_1038efaf0(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x20) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x30) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  plVar3 = (long *)0x2f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1038efb8c;
  plVar3[0x4b] = param_2;
  plVar3[0x4a] = param_5;
  plVar3[0x49] = param_4;
  plVar3[0x48] = param_3;
  lVar1 = 0;
  func_0x000107c5fcbc();
  plVar3[0x4c] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar3[0x4d] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4e] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038efe9c,0,0);
  return;
}



/* Entry: 1038efb8c; end: 1038efbf7;  */

void FUN_1038efb8c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_1038efbf8;
  }
  else {
    pcVar1 = FUN_1038efc74;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1038efbf8; end: 1038efc73;  */

void FUN_1038efbf8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined1 *puVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar4 = *(undefined1 **)(unaff_x22 + 0x18);
  uVar1 = uVar3;
  func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
  func_0x000107c6142c(uVar3);
  func_0x000107c3fefc(uVar2);
  func_0x000107c61170(uVar1);
  *puVar4 = 1;
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001038efc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038efc74; end: 1038efe2f;  */

void FUN_1038efc74(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x50);
  uVar7 = *(ulong *)(unaff_x22 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c614b0();
  uVar10 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar7,(undefined8 *)(unaff_x22 + 0x10),uVar10,uVar9,0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar2 = *(undefined1 **)(unaff_x22 + 0x18);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
    uVar9 = uVar10;
    func_0x000107c5ed2c(uVar10);
    uVar8 = uVar9;
    func_0x000107c5ed2c();
    func_0x000107c61170(uVar9);
    func_0x000107c3fef8(uVar6);
    func_0x000107c614ac(uVar10);
    func_0x000107c61170(uVar8);
    *puVar2 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x38);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar2 = *(undefined1 **)(unaff_x22 + 0x18);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    func_0x000107c614ac(uVar10);
    puVar5 = PTR_PTR_1126d28a0;
    func_0x000107c610f8(PTR_PTR_1126d28a0);
    func_0x000107c453e4();
    bVar4 = lVar3 != 0;
    uVar10 = 0x74786574;
    if (bVar4) {
      uVar10 = 0x65745f7465636166;
    }
    uVar6 = 0xe400000000000000;
    if (bVar4) {
      uVar6 = 0xea00000000007478;
    }
    func_0x000107c5fadc(uVar10,uVar6);
    func_0x000107c6142c(uVar6);
    uVar6 = 0x636e61635f637072;
    func_0x000107c5fadc(0x636e61635f637072,0xed000064656c6c65);
    func_0x000106db3498(puVar5,uVar10,uVar6,1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar5);
    *puVar2 = 0;
    (**(code **)(lVar1 + 8))(uVar9,uVar8);
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x10));
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001038efe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038efe30; end: 1038efe9b;  */

void FUN_1038efe30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 600) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x250) = param_3;
  *(undefined8 *)(unaff_x22 + 0x248) = param_2;
  *(undefined8 *)(unaff_x22 + 0x240) = param_1;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x260) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x268) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x270) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038efe9c,0,0);
  return;
}



/* Entry: 1038efe9c; end: 1038f0103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038efe9c(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar6 = *(long *)(unaff_x22 + 0x250);
  lVar7 = lVar6;
  FUN_1038f0c54();
  if ((lVar6 != 0) && (*(long *)(lVar7 + 0x10) == 0)) {
    lVar6 = *(long *)(unaff_x22 + 600);
    func_0x000107c6142c(lVar7);
    uVar9 = *(undefined8 *)(*(long *)(lVar6 + _DAT_112fad500) + _DAT_112fad558);
    uVar8 = 0xd000000000000014;
    func_0x000107c5fadc(0xd000000000000014,0x800000010f175560);
    func_0x000106db20c8(uVar9,uVar8,1);
    func_0x000107c61170(uVar8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x270));
                    /* WARNING: Could not recover jumptable at 0x0001038f0100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  FUN_1038fddd4(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x1f8) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x120);
  func_0x000107c61434(uVar8);
  func_0x000100bcb1dc((undefined8 *)(unaff_x22 + 0x1f8));
  func_0x0001038f0e6c(unaff_x22 + 0x218,0x112fad550,&UNK_10dc203c0);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x168) = uVar8;
  *(long *)(unaff_x22 + 0x170) = lVar7;
  func_0x000100083b20(unaff_x22 + 0x220);
  lVar7 = *(long *)(unaff_x22 + 0x220);
  uVar2 = *(ulong *)(lVar7 + _DAT_1130806d0);
  func_0x000107c61174();
  func_0x000107c61170(lVar7);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(ulong *)(unaff_x22 + 0x278) = uVar3;
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    *(undefined8 *)(unaff_x22 + 0x178) = 1;
    *(undefined1 *)(unaff_x22 + 0x180) = 1;
    uVar10 = 0;
  }
  else {
    uVar2 = uVar3;
    func_0x000107c51d68();
    *(ulong *)(unaff_x22 + 0x178) = uVar2;
    *(bool *)(unaff_x22 + 0x180) = uVar2 < 3;
    func_0x000107c51d64(uVar3);
  }
  *(int *)(unaff_x22 + 0x184) = (int)uVar10;
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x280) = uVar10;
  func_0x000100083b20(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1c8);
  lVar7 = *(long *)(unaff_x22 + 0x1d0);
  func_0x0001000a8868(unaff_x22 + 0x1b0,uVar8);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x170);
  piVar5 = *(int **)(lVar7 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x288) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1038f0104;
                    /* WARNING: Could not recover jumptable at 0x0001038f0074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar4,unaff_x22 + 0xc0,uVar8,lVar7);
  return;
}



/* Entry: 1038f0104; end: 1038f0173;  */

void FUN_1038f0104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x290) = param_1;
  *(undefined8 *)(lVar2 + 0x298) = param_2;
  *(undefined8 *)(lVar2 + 0x2a0) = param_3;
  *(undefined8 *)(lVar2 + 0x2a8) = param_4;
  *(long *)(lVar2 + 0x2b0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x288));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1038f0174;
  }
  else {
    pcVar1 = FUN_1038f0824;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1038f0174; end: 1038f0717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f0174(double param_1)

{
  undefined8 uVar1;
  char cVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long lVar16;
  double dVar17;
  
  dVar17 = *(double *)(unaff_x22 + 0x280);
  func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x290));
  func_0x0001000834e4(unaff_x22 + 0x1b0);
  func_0x000107c6071c();
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  dVar17 = (param_1 - dVar17) * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f0710);
    (*pcVar3)();
  }
  if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f0714);
    (*pcVar3)();
  }
  if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1038f0718);
    (*pcVar3)();
  }
  lVar11 = *(long *)(unaff_x22 + 0x290);
  lVar10 = *(long *)(lVar11 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c6142c(lVar11);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000100403514(0,lVar10,0);
    puVar15 = (undefined8 *)(lVar11 + 0x40);
    do {
      uVar9 = puVar15[-4];
      uVar14 = puVar15[-3];
      cVar2 = *(char *)(puVar15 + -2);
      uVar12 = puVar15[-1];
      uVar1 = *puVar15;
      func_0x00010006c00c(uVar12,uVar1);
      func_0x000103ee3894();
      uVar7 = uVar14;
      if (cVar2 == '\x01') {
        func_0x00010006c090(uVar12,uVar1);
      }
      else {
        func_0x000107c5fb1c();
        func_0x00010006c090(uVar12,uVar1);
        func_0x000107c6142c(uVar14);
      }
      uVar5 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar5 + 1,1);
      }
      puVar15 = puVar15 + 5;
      *(ulong *)(puVar8 + 0x10) = uVar5 + 1;
      *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x20) = uVar9;
      *(undefined8 *)(puVar8 + uVar5 * 0x10 + 0x28) = uVar7;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x290));
  }
  *(undefined **)(unaff_x22 + 0x2b8) = puVar8;
  lVar10 = _DAT_112fad558;
  lVar11 = *(long *)(*(long *)(unaff_x22 + 600) + _DAT_112fad500);
  lVar16 = *(long *)(puVar8 + 0x10);
  uVar5 = 0x7974706d65;
  if (lVar16 != 0) {
    uVar5 = 0x7974706d656e6f6e;
  }
  uVar9 = 0xe500000000000000;
  if (lVar16 != 0) {
    uVar9 = 0xe800000000000000;
  }
  uVar12 = *(undefined8 *)(lVar11 + _DAT_112fad558);
  uVar4 = uVar5;
  func_0x000107c5fadc(uVar5,uVar9);
  func_0x000106db20c8(uVar12,uVar4,1);
  func_0x000107c61170(uVar4);
  uVar12 = *(undefined8 *)(lVar11 + lVar10);
  func_0x000107c5fadc(uVar5,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000106db25e0(uVar12,uVar5,(long)dVar17);
  func_0x000107c61170();
  func_0x00010b6fb24c();
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x298);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x290));
    func_0x000107c6142c(uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x278);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x2a0),*(undefined8 *)(unaff_x22 + 0x2a8));
    func_0x000107c615e8(uVar9);
    func_0x0001038f0e38(unaff_x22 + 0x160);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x2b8);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x270));
                    /* WARNING: Could not recover jumptable at 0x0001038f0540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar9);
    return;
  }
  puVar15 = (undefined8 *)(unaff_x22 + 0x1d8);
  lVar13 = *(long *)(unaff_x22 + 0x250);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x240);
  func_0x000100083b20(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x208);
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar9;
  lVar11 = *(long *)(unaff_x22 + 0x210);
  *(long *)(unaff_x22 + 0x2c8) = lVar11;
  lVar10 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar10 + 0x18) = 6;
  *(undefined8 *)(lVar10 + 0x10) = 3;
  *(undefined8 *)(lVar10 + 0x20) = 0x7972657571;
  puVar6 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar10 + 0x28) = 0xe500000000000000;
  *(undefined8 *)(lVar10 + 0x30) = uVar12;
  *(undefined8 *)(lVar10 + 0x38) = uVar14;
  *(undefined **)(lVar10 + 0x48) = puVar6;
  *(undefined8 *)(lVar10 + 0x50) = 0x536465776f6c6c61;
  *(undefined8 *)(lVar10 + 0x58) = 0xee0073444970616e;
  if (lVar13 == 0) {
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
    *puVar15 = 0;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
  }
  else {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x250);
    lVar13 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
    *(long *)(unaff_x22 + 0x1f0) = lVar13;
    if (lVar13 != 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
      func_0x000100102924(puVar15,lVar10 + 0x60);
      func_0x000107c61434(uVar12);
      func_0x000107c61434(uVar14);
      goto LAB_1038f05b0;
    }
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
  puVar6 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x000107c610f8();
  func_0x000107c61434(uVar12);
  func_0x000107c61434(uVar14);
  func_0x000107c453e4();
  uVar12 = 0;
  func_0x000100f15acc();
  *(undefined8 *)(lVar10 + 0x78) = uVar12;
  *(undefined **)(lVar10 + 0x60) = puVar6;
  if (*(long *)(unaff_x22 + 0x1f0) != 0) {
    func_0x0001038f0e6c(puVar15,0x112d387f8,&UNK_10d902650);
  }
LAB_1038f05b0:
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x22 + 0x2d0) = uVar9;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(0xe000000000000000);
  *(long *)(unaff_x22 + 0x238) = lVar16;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x29,0xe100000000000000);
  *(undefined8 *)(lVar10 + 0x80) = 0xd000000000000010;
  *(undefined8 *)(lVar10 + 0x88) = 0x800000010f175520;
  uVar9 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  *(undefined8 *)(lVar10 + 0xa8) = uVar9;
  *(undefined **)(lVar10 + 0x90) = puVar8;
  func_0x000107c61434(puVar8);
  lVar16 = lVar10;
  func_0x000100214a84();
  *(long *)(unaff_x22 + 0x2d8) = lVar16;
  func_0x000107c61588(lVar10);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar10 + 0x20),3,uVar9);
  *(undefined8 *)(unaff_x22 + 0x2e0) = *(undefined8 *)(lVar11 + 8);
  uVar12 = 0;
  func_0x000107c5fcec();
  uVar9 = uVar12;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar9;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar12,uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f0718,uVar12,uVar9);
  return;
}



/* Entry: 1038f0718; end: 1038f07b3;  */

void FUN_1038f0718(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(unaff_x22 + 0x2e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2c0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x2e8));
  (*pcVar5)(1,uVar1,0xd000000000000018,0x800000010f175540,uVar3,uVar4);
  func_0x000107c6142c(uVar1);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1038f07b4,0,0);
  return;
}



/* Entry: 1038f07b4; end: 1038f0823;  */

void FUN_1038f07b4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x298);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x290));
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x278);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x2a0),*(undefined8 *)(unaff_x22 + 0x2a8));
  func_0x000107c615e8(uVar1);
  FUN_1038f0e38(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b8);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x270));
                    /* WARNING: Could not recover jumptable at 0x0001038f0820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 1038f0824; end: 1038f0a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038f0824(double param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  double dVar9;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  func_0x0001000834e4(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x228) = uVar6;
  func_0x000107c614b0(uVar6);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,unaff_x22 + 0x228,uVar6,uVar7,6);
  if ((int)uVar5 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x2b0);
    dVar9 = *(double *)(unaff_x22 + 0x280);
    lVar8 = *(long *)(*(long *)(unaff_x22 + 600) + _DAT_112fad500);
    func_0x000107c5ed2c();
    uVar6 = uVar5;
    func_0x000107c3fcb0();
    func_0x000107c61170(uVar5);
    func_0x000107c6071c();
    lVar1 = _DAT_112fad558;
    dVar9 = (param_1 - dVar9) * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f0a08);
      (*pcVar2)();
    }
    if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f0a0c);
      (*pcVar2)();
    }
    if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1038f0a10);
      (*pcVar2)();
    }
    uVar5 = *(undefined8 *)(lVar8 + _DAT_112fad558);
    *(undefined8 *)(unaff_x22 + 0x230) = uVar6;
    puVar3 = PTR___sSiN_11034deb0;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
    func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
    func_0x000106db246c(uVar5,puVar3,1);
    func_0x000107c61170(puVar3);
    uVar5 = *(undefined8 *)(lVar8 + lVar1);
    uVar6 = 0x726f727265;
    func_0x000107c5fadc(0x726f727265,0xe500000000000000);
    func_0x000106db25e0(uVar5,uVar6,(long)dVar9);
    func_0x000107c61170(uVar6);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x268) + 8))
              (*(undefined8 *)(unaff_x22 + 0x270),*(undefined8 *)(unaff_x22 + 0x260));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  func_0x000107c61654();
  func_0x000107c615e8(uVar5);
  FUN_1038f0e38(unaff_x22 + 0x160);
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001038f0a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1038f0a10; end: 1038f0a9f; -[_TtC34MemoriesSemanticSearchServicesImpl29MemoriesSemanticSearchManager fetchEntryIDsWithQueryText:allowedSnapIDs:] */

void FUN_1038f0a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x000107c5faec(param_3);
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  FUN_1038ef93c(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



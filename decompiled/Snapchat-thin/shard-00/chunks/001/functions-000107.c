/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1002a9ed0; end: 1002a9f13;  */

void FUN_1002a9ed0(void)

{
  return;
}



/* Entry: 1002a9f14; end: 1002a9f2f;  */

void FUN_1002a9f14(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 >> 0x3d != 0) {
    func_0x000104bd35f4();
    if (param_2 == 0) {
      FUN_1002aa02c(param_1);
      param_1[1] = 0;
    }
    else {
      plVar3 = param_1 + 1;
      FUN_1002a9f14(plVar3);
      FUN_1002aa02c(param_1,plVar3);
      param_1[1] = param_2;
      lVar1 = *param_1;
      for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
        *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
      }
      plVar3 = (long *)param_1[2];
      if (plVar3 != (long *)0x0) {
        uVar6 = plVar3[1];
        uVar5 = param_2 - 1;
        uVar2 = 0;
        if (param_2 != 0) {
          uVar2 = uVar6 / param_2;
        }
        uVar7 = uVar6;
        if (param_2 <= uVar6) {
          uVar7 = uVar6 - uVar2 * param_2;
        }
        if ((param_2 & uVar5) == 0) {
          uVar7 = uVar6 & uVar5;
        }
        *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
        while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
          uVar2 = plVar3[1];
          if ((param_2 & uVar5) == 0) {
            uVar2 = uVar2 & uVar5;
          }
          else if (param_2 <= uVar2) {
            uVar6 = 0;
            if (param_2 != 0) {
              uVar6 = uVar2 / param_2;
            }
            uVar2 = uVar2 - uVar6 * param_2;
          }
          if (uVar2 != uVar7) {
            if (*(long *)(lVar1 + uVar2 * 8) == 0) {
              *(long **)(lVar1 + uVar2 * 8) = plVar4;
              uVar7 = uVar2;
            }
            else {
              *plVar4 = *plVar3;
              *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
              **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
              plVar3 = plVar4;
            }
          }
        }
      }
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 3);
  return;
}



/* Entry: 1002a9f30; end: 1002aa02b;  */

void FUN_1002a9f30(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_1002aa02c(param_1);
    param_1[1] = 0;
  }
  else {
    plVar3 = param_1 + 1;
    FUN_1002a9f14(plVar3);
    FUN_1002aa02c(param_1,plVar3);
    param_1[1] = param_2;
    lVar1 = *param_1;
    for (uVar2 = 0; param_2 != uVar2; uVar2 = uVar2 + 1) {
      *(undefined8 *)(lVar1 + uVar2 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      uVar6 = plVar3[1];
      uVar5 = param_2 - 1;
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = uVar6 / param_2;
      }
      uVar7 = uVar6;
      if (param_2 <= uVar6) {
        uVar7 = uVar6 - uVar2 * param_2;
      }
      if ((param_2 & uVar5) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      *(long **)(lVar1 + uVar7 * 8) = param_1 + 2;
      while (plVar4 = plVar3, plVar3 = (long *)*plVar4, plVar3 != (long *)0x0) {
        uVar2 = plVar3[1];
        if ((param_2 & uVar5) == 0) {
          uVar2 = uVar2 & uVar5;
        }
        else if (param_2 <= uVar2) {
          uVar6 = 0;
          if (param_2 != 0) {
            uVar6 = uVar2 / param_2;
          }
          uVar2 = uVar2 - uVar6 * param_2;
        }
        if (uVar2 != uVar7) {
          if (*(long *)(lVar1 + uVar2 * 8) == 0) {
            *(long **)(lVar1 + uVar2 * 8) = plVar4;
            uVar7 = uVar2;
          }
          else {
            *plVar4 = *plVar3;
            *plVar3 = **(undefined8 **)(lVar1 + uVar2 * 8);
            **(long **)(lVar1 + uVar2 * 8) = (long)plVar3;
            plVar3 = plVar4;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1002aa02c; end: 1002aa08b;  */

void FUN_1002aa02c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1002aa08c; end: 1002aa0af;  */

undefined8 FUN_1002aa08c(undefined8 param_1)

{
  func_0x0001002aa074(param_1,0);
  return param_1;
}



/* Entry: 1002aa0b0; end: 1002aa0bb;  */

long FUN_1002aa0b0(long param_1)

{
  return param_1 + 0x18;
}



/* Entry: 1002aa0bc; end: 1002aa0df;  */

/* WARNING: Possible PIC construction at 0x0001002aa0cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002aa0d0) */

void FUN_1002aa0bc(void)

{
  FUN_1002aa0b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 1002aa0e0; end: 1002aa2fb;  */

undefined1  [16] FUN_1002aa0e0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x25;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_68 [3];
  
  FUN_1002aa0b0();
  FUN_100102e7c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x25 = uVar8 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar7 <= param_1) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = param_1 / uVar7;
        }
        unaff_x25 = param_1 - uVar3 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x25 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_1002aa1a0;
          uVar3 = plVar6[1];
          if (uVar3 != param_1) break;
          plVar5 = plVar6 + 2;
          FUN_1000e107c(plVar5,param_2);
          if (((ulong)plVar5 & 1) != 0) {
            uVar2 = 0;
            goto LAB_1002aa2cc;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar3 = uVar3 & uVar8;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
      } while (uVar3 == unaff_x25);
    }
  }
LAB_1002aa1a0:
  func_0x0001002a9f08(aplStack_68);
  FUN_1002aa330();
  if ((uVar7 == 0) || (*(float *)(unaff_x19 + 4) * (float)uVar7 < (float)(unaff_x19[3] + 1))) {
    FUN_10028b120();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x25 = uVar7 - 1 & param_1;
    }
    else {
      unaff_x25 = param_1;
      if (uVar7 <= param_1) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_1 / uVar7;
        }
        unaff_x25 = param_1 - uVar8 * uVar7;
      }
    }
  }
  plVar6 = aplStack_68[0];
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x25 * 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = unaff_x19 + 2;
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
    *(long **)(lVar4 + unaff_x25 * 8) = plVar5;
    if (*aplStack_68[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_68[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar3 * uVar7;
      }
      *(long **)(lVar4 + uVar8 * 8) = aplStack_68[0];
    }
  }
  else {
    *aplStack_68[0] = *plVar5;
    *plVar5 = (long)aplStack_68[0];
  }
  aplStack_68[0] = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  FUN_1002aa08c(aplStack_68);
  uVar2 = 1;
LAB_1002aa2cc:
  auVar9._8_8_ = uVar2;
  auVar9._0_8_ = plVar6;
  return auVar9;
}



/* Entry: 1002aa2fc; end: 1002aa32f;  */

void FUN_1002aa2fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1002aa0e0(param_1,param_2,param_2);
  return;
}



/* Entry: 1002aa330; end: 1002aa38b;  */

void FUN_1002aa330(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x40;
  func_0x000107c60e20();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = param_3;
  FUN_1002aa38c(puVar1 + 2,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 1002aa38c; end: 1002aa3c3;  */

long FUN_1002aa38c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  func_0x000107c60c94(lVar1 + 0x18,param_2 + 0x18);
  return param_1;
}



/* Entry: 1002aa3c4; end: 1002aa3f3;  */

long FUN_1002aa3c4(long param_1)

{
  FUN_1002a857c();
  FUN_1002a8d34();
  FUN_100067de0(param_1 + 0x18);
  return param_1;
}



/* Entry: 1002aa3f4; end: 1002aa407;  */

void FUN_1002aa3f4(void)

{
  FUN_1002aa3c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1002aa408; end: 1002aa487;  */

void FUN_1002aa408(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ab40,&UNK_10da25e60);
  puVar1 = &UNK_110498ea8;
  func_0x000107c613fc(&UNK_110498ea8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ed7d44,puVar1);
  return;
}



/* Entry: 1002aa488; end: 1002aa4d3;  */

void FUN_1002aa488(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aa4d4; end: 1002aa56b;  */

void FUN_1002aa4d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ac28,&UNK_10da26050);
  puVar1 = &UNK_110498f70;
  func_0x000107c613fc(&UNK_110498f70,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ed7fc0,puVar1);
  return;
}



/* Entry: 1002aa56c; end: 1002aa5bf;  */

void FUN_1002aa56c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aa5c0; end: 1002aa63f;  */

void FUN_1002aa5c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3ae40,&UNK_10da26410);
  puVar1 = &UNK_110499100;
  func_0x000107c613fc(&UNK_110499100,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ed89c4,puVar1);
  return;
}



/* Entry: 1002aa640; end: 1002aa68b;  */

void FUN_1002aa640(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aa68c; end: 1002aa6a7;  */

void FUN_1002aa68c(undefined8 param_1)

{
  FUN_1000285a8(0x112e3ae48,&UNK_10da26418);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed8b0c,param_1);
  return;
}



/* Entry: 1002aa6a8; end: 1002aa6f7;  */

void FUN_1002aa6a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aa6f8; end: 1002aa717;  */

void FUN_1002aa6f8(void)

{
  func_0x000107c61168(&PTR_PTR_112962650);
  return;
}



/* Entry: 1002aa718; end: 1002aa797;  */

void FUN_1002aa718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3af28,&UNK_10da265f0);
  puVar1 = &UNK_1104991c8;
  func_0x000107c613fc(&UNK_1104991c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ed8c90,puVar1);
  return;
}



/* Entry: 1002aa798; end: 1002aa7e3;  */

void FUN_1002aa798(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aa7e4; end: 1002aa7ff;  */

void FUN_1002aa7e4(undefined8 param_1)

{
  FUN_1000285a8(0x112e3af30,&UNK_10da265f8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ed8dd8,param_1);
  return;
}



/* Entry: 1002aa800; end: 1002aa84f;  */

void FUN_1002aa800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aa850; end: 1002aa86f;  */

void FUN_1002aa850(void)

{
  func_0x000107c61168(&PTR_PTR_112962718);
  return;
}



/* Entry: 1002aa870; end: 1002aa913;  */

void FUN_1002aa870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3b010,&UNK_10da26780);
  puVar1 = &UNK_110499290;
  func_0x000107c613fc(&UNK_110499290,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_101ed8fe0,puVar1);
  return;
}



/* Entry: 1002aa914; end: 1002aa96f;  */

void FUN_1002aa914(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aa970; end: 1002aaa2b;  */

void FUN_1002aa970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e111f8,&UNK_10d9ec300);
  puVar1 = &UNK_110464418;
  func_0x000107c613fc(&UNK_110464418,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  FUN_1000823a8(&UNK_101c9551c,puVar1);
  return;
}



/* Entry: 1002aaa2c; end: 1002aaa8f;  */

void FUN_1002aaa2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aaa90; end: 1002aaaab;  */

void FUN_1002aaa90(undefined8 param_1)

{
  FUN_1000285a8(0x112e11200,&UNK_10d9ec308);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c95718,param_1);
  return;
}



/* Entry: 1002aaaac; end: 1002aaafb;  */

void FUN_1002aaaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aaafc; end: 1002aab1b;  */

void FUN_1002aaafc(void)

{
  func_0x000107c61168(&PTR_PTR_1128fd9b8);
  return;
}



/* Entry: 1002aab1c; end: 1002aabb3;  */

void FUN_1002aab1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e3b108,&UNK_10da26930);
  puVar1 = &UNK_110499358;
  func_0x000107c613fc(&UNK_110499358,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101ed92dc,puVar1);
  return;
}



/* Entry: 1002aabb4; end: 1002aac07;  */

void FUN_1002aabb4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002aac08; end: 1002aac23;  */

void FUN_1002aac08(undefined8 param_1)

{
  FUN_1000285a8(0x112e11520,&UNK_10d9ec790);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c969d8,param_1);
  return;
}



/* Entry: 1002aac24; end: 1002aac73;  */

void FUN_1002aac24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aac74; end: 1002aac93;  */

void FUN_1002aac74(void)

{
  func_0x000107c61168(&PTR_PTR_112e115a8);
  return;
}



/* Entry: 1002aac94; end: 1002aacdf;  */

void FUN_1002aac94(undefined8 param_1)

{
  FUN_1000285a8(0x112fe2440,&UNK_10dc4ad38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1009944a4,param_1);
  return;
}



/* Entry: 1002aace0; end: 1002aacff;  */

void FUN_1002aace0(void)

{
  func_0x000107c61168(&PTR_PTR_11291fba8);
  return;
}



/* Entry: 1002aad00; end: 1002aad97;  */

void FUN_1002aad00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0c9b8,&UNK_10d9e6bb0);
  puVar1 = &UNK_11045e788;
  func_0x000107c613fc(&UNK_11045e788,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1003a6cf8,puVar1);
  return;
}



/* Entry: 1002aad98; end: 1002aadb7;  */

void FUN_1002aad98(void)

{
  func_0x000107c61168(&PTR_PTR_112927700);
  return;
}



/* Entry: 1002aadb8; end: 1002aae03;  */

void FUN_1002aadb8(undefined8 param_1)

{
  FUN_1000285a8(0x112ffbe88,&UNK_10dc69df0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103c5c93c,param_1);
  return;
}



/* Entry: 1002aae04; end: 1002aae23;  */

void FUN_1002aae04(void)

{
  func_0x000107c61168(&PTR_PTR_112949778);
  return;
}



/* Entry: 1002aae24; end: 1002aae63;  */

void FUN_1002aae24(void)

{
  FUN_1000285a8(0x112fec720,&UNK_10dc554e0);
  FUN_1000823a8(&UNK_103b24640,0);
  return;
}



/* Entry: 1002aae64; end: 1002aae6b;  */

void FUN_1002aae64(undefined8 param_1,long param_2)

{
  undefined8 extraout_x8;
  
  if (param_2 == 0) {
    FUN_1002a9450();
  }
  else {
    func_0x000107c39ec0();
  }
  func_0x0001002a7ef0(&PTR_DAT_110d12428);
  *(undefined8 *)(param_2 + 0x10) = extraout_x8;
  *(undefined4 *)(param_2 + 0x18) = 0;
  return;
}



/* Entry: 1002aae6c; end: 1002aaea7;  */

void FUN_1002aae6c(long param_1)

{
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    FUN_1002a9450();
  }
  else {
    func_0x000107c39ec0();
  }
  func_0x0001002a7ef0(&PTR_DAT_110d12428);
  *(undefined8 *)(param_1 + 0x10) = extraout_x8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1002aaea8; end: 1002aaeaf;  */

long FUN_1002aaea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  FUN_10028b544(lVar1 + 0x18,&stack0x00000350);
  return param_1;
}



/* Entry: 1002aaeb0; end: 1002aaeef;  */

long FUN_1002aaeb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  FUN_10028b544(lVar1 + 0x18,param_3);
  return param_1;
}



/* Entry: 1002aaef0; end: 1002aaf17;  */

undefined8 FUN_1002aaef0(undefined8 param_1)

{
  FUN_1002a857c();
  FUN_1002a8d34();
  return param_1;
}



/* Entry: 1002aaf18; end: 1002aaf33;  */

void FUN_1002aaf18(undefined8 param_1)

{
  FUN_1000285a8(0x112e36508,&UNK_10da202c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ea0148,param_1);
  return;
}



/* Entry: 1002aaf34; end: 1002aaf83;  */

void FUN_1002aaf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002aaf84; end: 1002aafcf;  */

void FUN_1002aaf84(void)

{
  func_0x000100086f10(0x11305f410,FUN_1002a741c,&UNK_10dcd45ec);
  return;
}



/* Entry: 1002aafd0; end: 1002aafeb;  */

void FUN_1002aafd0(undefined8 param_1)

{
  FUN_1000285a8(0x112e1bd78,&UNK_10d9fd3d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ce7ac0,param_1);
  return;
}



/* Entry: 1002aafec; end: 1002ab03b;  */

void FUN_1002aafec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002ab03c; end: 1002ab05b;  */

void FUN_1002ab03c(void)

{
  func_0x000107c61168(&PTR_PTR_112e1bdf0);
  return;
}



/* Entry: 1002ab05c; end: 1002ab077;  */

void FUN_1002ab05c(undefined8 param_1)

{
  FUN_1000285a8(0x112e365e8,&UNK_10da20450);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b9a038,param_1);
  return;
}



/* Entry: 1002ab078; end: 1002ab0c7;  */

void FUN_1002ab078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002ab0c8; end: 1002ab0e7;  */

void FUN_1002ab0c8(void)

{
  func_0x000107c61168(&PTR_PTR_112e36660);
  return;
}



/* Entry: 1002ab0e8; end: 1002ab17f;  */

void FUN_1002ab0e8(undefined8 param_1)

{
  FUN_1000285a8(0x112e0cd98,&UNK_10d9e6f30);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101c5feb4,param_1);
  return;
}



/* Entry: 1002ab180; end: 1002ab187;  */

void FUN_1002ab180(void)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0x000000b8;
  func_0x000107c60c94();
  puVar1[0x18] = 1;
  return;
}



/* Entry: 1002ab188; end: 1002ab1d3;  */

void FUN_1002ab188(undefined8 param_1)

{
  FUN_1000285a8(0x11302cf60,&UNK_10dca8b70);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103ee93c8,param_1);
  return;
}



/* Entry: 1002ab1d4; end: 1002ab1f3;  */

void FUN_1002ab1d4(void)

{
  func_0x000107c61168(&PTR_PTR_1129633a0);
  return;
}



/* Entry: 1002ab1f4; end: 1002ab273;  */

void FUN_1002ab1f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0bf18,&UNK_10d9e5690);
  puVar1 = &UNK_11045d5b0;
  func_0x000107c613fc(&UNK_11045d5b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100abecfc,puVar1);
  return;
}



/* Entry: 1002ab274; end: 1002ab2bf;  */

void FUN_1002ab274(undefined8 param_1)

{
  FUN_1000285a8(0x112fdd600,&UNK_10dc479e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100abec88,param_1);
  return;
}



/* Entry: 1002ab2c0; end: 1002ab2df;  */

void FUN_1002ab2c0(void)

{
  func_0x000107c61168(&PTR_PTR_11291c6d0);
  return;
}



/* Entry: 1002ab2e0; end: 1002ab31f;  */

void FUN_1002ab2e0(void)

{
  FUN_1000285a8(0x112dfa3e0,&UNK_10d9cc240);
  FUN_1000823a8(&UNK_100bf4cc8,0);
  return;
}



/* Entry: 1002ab320; end: 1002ab33f;  */

void FUN_1002ab320(void)

{
  func_0x000107c61168(&PTR_PTR_1127f54a0);
  return;
}



/* Entry: 1002ab340; end: 1002ab35b;  */

void FUN_1002ab340(undefined8 param_1)

{
  FUN_1000285a8(0x112fe6750,&UNK_10dc4d508);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103abea10,param_1);
  return;
}



/* Entry: 1002ab35c; end: 1002ab3ab;  */

void FUN_1002ab35c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002ab3ac; end: 1002ab3b3;  */

void FUN_1002ab3ac(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_2;
    func_0x000107c39edc();
  }
  *puVar1 = &PTR_DAT_110d12568;
  puVar1[1] = param_2;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_2;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1002ab3b4; end: 1002ab3f7;  */

void FUN_1002ab3b4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x30;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c39edc();
  }
  *puVar1 = &PTR_DAT_110d12568;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = 0;
  return;
}



/* Entry: 1002ab3f8; end: 1002ab50f;  */

undefined2 *
FUN_1002ab3f8(undefined2 *param_1,byte *param_2,undefined8 param_3,ulong param_4,short *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  long extraout_x8_00;
  undefined2 *extraout_x8_01;
  undefined2 *extraout_x8_02;
  long unaff_x20;
  short *unaff_x21;
  undefined2 *unaff_x23;
  ulong uVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  long in_stack_00000018;
  undefined2 *in_stack_00000060;
  
  func_0x000100063e6c();
  FUN_100068f58();
  uVar4 = (param_4 & 0xff) == 0;
  uVar3 = 0;
  if (!(bool)uVar4) {
    func_0x0001000690cc();
    func_0x000100064c34();
    uVar6 = (ulong)*param_2;
    if ((char)*param_2 < '\0') {
      bVar1 = param_2[1];
      if ((char)bVar1 < '\0') {
        uVar6 = (uVar6 & 0x7f) << 0x32 | (ulong)bVar1 << 0x39;
        bVar1 = param_2[2];
        if ((char)bVar1 < '\0') {
          if ((char)param_2[3] < '\0') {
            if ((char)param_2[4] < '\0') {
              func_0x000100064e38(param_1);
              goto DAT_10b4c5d10;
            }
            func_0x000107c39ba4();
            uVar6 = extraout_x8 >> 0x24 | extraout_x8 << 0x1c;
          }
          else {
            uVar6 = (uVar6 >> 7 | (long)(char)bVar1 << 0x39) >> 0x2b | (ulong)param_2[3] << 0x15;
          }
        }
        else {
          uVar6 = uVar6 >> 0x32 | (ulong)bVar1 << 0xe;
        }
      }
      else {
        uVar6 = uVar6 & 0x7f | (ulong)bVar1 << 7;
      }
    }
    puVar5 = in_stack_00000060;
    FUN_100064d5c(in_stack_00000060,uVar6 >> 3 & 0x1fffffff);
    if (puVar5 == (undefined2 *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(in_stack_00000060 + 0x18);
    }
    else {
      UNRECOVERED_JUMPTABLE = (code *)(&PTR_DAT_110cf0bf0)[(ulong)(ushort)puVar5[5] & 0xf];
    }
    func_0x000100064e2c();
    func_0x000100064e38();
                    /* WARNING: Could not recover jumptable at 0x000100064cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return puVar5;
  }
  if (*(long *)(unaff_x20 + (param_4 >> 0x30) + 0x10) != 0) {
    func_0x000107c39988();
    func_0x000107c39a24();
    if (((bool)uVar4) && (func_0x000107c39a20(), (int)param_1 != 0)) {
      do {
        func_0x0001002a8fdc((long)unaff_x23 + 1);
        if (in_stack_00000018 == 0) goto LAB_1002ab4f8;
        func_0x000107c39b74();
        if (extraout_x8_00 == 0) {
          func_0x000107c39b04();
          uVar2 = uVar4;
        }
        else {
          func_0x000107c399a4();
          uVar2 = uVar4;
        }
        func_0x000107c3997c();
        func_0x000107c399d0();
        if ((param_1 == (undefined2 *)0x0) || (FUN_1002ab510(), ((ulong)param_1 & 1) == 0))
        goto LAB_1002ab4f8;
        func_0x0001002ab58c();
        if ((bool)uVar3) goto LAB_1002ab4e0;
        func_0x0001000690a4();
        uVar4 = 1;
        puVar5 = extraout_x8_01;
      } while ((bool)uVar2);
      goto LAB_1002ab4c4;
    }
  }
  do {
    uVar2 = uVar4;
    func_0x000100068f7c();
    func_0x00010006908c();
    if ((param_1 == (undefined2 *)0x0) || (FUN_1002ab510(), ((ulong)param_1 & 1) == 0))
    goto LAB_1002ab4f8;
    func_0x0001002ab58c();
    if ((bool)uVar3) goto LAB_1002ab4e0;
    func_0x0001000690a4();
    uVar4 = 1;
    puVar5 = extraout_x8_02;
  } while ((bool)uVar2);
LAB_1002ab4c4:
  if (unaff_x23 < puVar5) {
    func_0x0001000690b0(*unaff_x23);
    func_0x0001000690cc();
                    /* WARNING: Could not recover jumptable at 0x0001000647d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return param_1;
  }
LAB_1002ab4e0:
  if (*unaff_x21 != 0) {
    func_0x000107c39a40();
  }
  return unaff_x23;
LAB_1002ab4f8:
  func_0x000107c39a10();
DAT_10b4c5d10:
  if (*param_5 != 0) {
    func_0x000107c39bb4();
  }
  return (undefined2 *)0x0;
}



/* Entry: 1002ab510; end: 1002ab547;  */

undefined8 * FUN_1002ab510(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x19;
  
  func_0x0001002ab51c();
  if (param_2 < 0) {
    register0x00000008 = *(BADSPACEBASE **)register0x00000008;
  }
  func_0x00010029f6ec();
  if (((ulong)register0x00000008 & 1) == 0) {
    func_0x000107c302d4(*unaff_x19,*(undefined8 *)(unaff_x19 + 8));
  }
  return (undefined8 *)register0x00000008;
}



/* Entry: 1002ab548; end: 1002ab583;  */

undefined8 * FUN_1002ab548(undefined8 *param_1,long param_2)

{
  undefined1 *unaff_x19;
  
  func_0x0001002ab51c();
  if (param_2 < 0) {
    param_1 = (undefined8 *)*param_1;
  }
  func_0x00010029f6ec();
  if (((ulong)param_1 & 1) == 0) {
    func_0x000107c302d4(*unaff_x19,*(undefined8 *)(unaff_x19 + 8));
  }
  return param_1;
}



/* Entry: 1002ab584; end: 1002ab597;  */

void FUN_1002ab584(void)

{
  return;
}



/* Entry: 1002ab598; end: 1002ab5c3;  */

long FUN_1002ab598(long param_1)

{
  FUN_1002a857c();
  FUN_1000682a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 1002ab5c4; end: 1002ab607;  */

undefined8 FUN_1002ab5c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  if (3 < (uint)((ulong)uVar1 >> 0x3d) - 2) {
    return *param_1;
  }
  if (((uint)uVar1 & 0xff) == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2,param_1[1],uVar2,uVar1,param_1[4]);
    return uVar2;
  }
  return *param_1;
}



/* Entry: 1002ab608; end: 1002ab7a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ab608(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [48];
  
  FUN_1000298f0();
  func_0x000107c61428();
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  uVar2 = 0xd00000000000002d;
  FUN_1000a9a18(0xd00000000000002d,0x800000010efc23c0);
  func_0x000107c61170(uVar1);
  if (*(char *)(unaff_x20 + _DAT_112dd8728) == '\x01') {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd8790);
    uVar1 = uVar5;
    func_0x000107c52078(uVar5);
    func_0x000107c61180();
    func_0x000107c5051c();
    func_0x000107c615e8(uVar1);
    func_0x000107c52078(uVar5);
    func_0x000107c61180();
    func_0x000107c5051c();
    func_0x000107c615e8(uVar5);
    lVar3 = unaff_x20 + _DAT_112dd8718;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5bcd0();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar4 != 0) {
        func_0x000107c555a0(lVar4);
        func_0x000107c615e8(lVar4);
      }
    }
  }
  lVar3 = unaff_x20 + _DAT_112dd8710;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c40aa0();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61428(param_1,auStack_70,0,0);
  uVar1 = *param_1;
  func_0x000107c61174(uVar1);
  FUN_1000aa0a8(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1002ab7a4; end: 1002ab823;  */

void FUN_1002ab7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e105e8,&UNK_10d9eba30);
  puVar1 = &UNK_110463820;
  func_0x000107c613fc(&UNK_110463820,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_10045a4cc,puVar1);
  return;
}



/* Entry: 1002ab824; end: 1002ab84f;  */

void FUN_1002ab824(void)

{
  return;
}



/* Entry: 1002ab850; end: 1002aba3f; -[SCManagedCaptureSessionImpl createNewAVCaptureSessionWithMultiCam:forLiveStreaming:] */

/* WARNING: Possible PIC construction at 0x0001002ab8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ab8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ab968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ab978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ab994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001002ab9a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001002ab97c) */
/* WARNING: Removing unreachable block (ram,0x0001002ab980) */
/* WARNING: Removing unreachable block (ram,0x0001002ab96c) */
/* WARNING: Removing unreachable block (ram,0x0001002ab8ac) */
/* WARNING: Removing unreachable block (ram,0x0001002ab8f4) */
/* WARNING: Removing unreachable block (ram,0x0001002ab9a8) */
/* WARNING: Removing unreachable block (ram,0x0001002ab9c0) */
/* WARNING: Removing unreachable block (ram,0x0001002ab9cc) */
/* WARNING: Removing unreachable block (ram,0x0001002ab918) */
/* WARNING: Removing unreachable block (ram,0x0001002ab990) */
/* WARNING: Removing unreachable block (ram,0x0001002ab958) */
/* WARNING: Removing unreachable block (ram,0x0001002ab8c0) */
/* WARNING: Removing unreachable block (ram,0x0001002ab998) */

void FUN_1002ab850(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c3c348();
  puVar1 = PTR_PTR_1126b70d8;
  func_0x000107c40964(PTR_PTR_1126b70d8,param_2,param_3,param_4);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c61174(puVar1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1002aba40; end: 1002abdfb; -[SCManagedCaptureSessionImpl _resetAVCaptureSession] */

void FUN_1002aba40(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5be70(*(undefined8 *)(param_1 + 8));
  func_0x000107c3e76c(*(undefined8 *)(param_1 + 8));
  lVar7 = *(long *)(param_1 + 0x10);
  func_0x000107c61174(lVar7);
  lVar5 = lVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar7);
      }
      uVar8 = *(undefined8 *)(lVar9 * 8);
      uVar3 = uVar8;
      func_0x000107c4e6e4(uVar8);
      func_0x000107c61180();
      func_0x000107c3c2e0(param_1);
      func_0x000107c61170(uVar3);
      func_0x000107c5ddd0(uVar8);
      func_0x000107c61180();
      func_0x000107c3c2e0(param_1);
      func_0x000107c61170(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar7);
  iVar2 = 2;
  FUN_100029b9c(2,0x12,0,0);
  if (iVar2 != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
    func_0x000107c61164(uVar4,PTR_s_supportsControls_1126767a0);
    if ((uVar4 & 1) != 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 8);
      func_0x000107c5c458();
      if (iVar2 != 0) {
        uVar4 = *(ulong *)(param_1 + 8);
        func_0x000107c61164(uVar4,PTR_s_controls_1125b1980);
        if ((uVar4 & 1) != 0) {
          uVar4 = *(ulong *)(param_1 + 8);
          func_0x000107c61164(uVar4,PTR_s_removeControl__1126288d0);
          if ((uVar4 & 1) != 0) {
            func_0x000107c53958(*(long *)(param_1 + 8));
            lVar7 = *(long *)(param_1 + 8);
            func_0x000107c40654();
            func_0x000107c61180();
            lVar5 = lVar7;
            func_0x000107c4080c();
            lVar1 = lRam0000000000000000;
            while (lVar5 != 0) {
              lVar9 = 0;
              do {
                if (lRam0000000000000000 != lVar1) {
                  func_0x000107c61128(lVar7);
                }
                func_0x000107c4fed4(*(undefined8 *)(param_1 + 8));
                lVar9 = lVar9 + 1;
              } while (lVar5 != lVar9);
              lVar5 = lVar7;
              func_0x000107c4080c();
            }
            func_0x000107c61170(lVar7);
            func_0x000107c5203c(param_1);
          }
        }
      }
    }
  }
  func_0x000107c3b080(param_1);
  lVar5 = *(long *)(param_1 + 8);
  func_0x000107c49704();
  func_0x000107c61180();
  lVar7 = lVar5;
  func_0x000107c40794();
  func_0x000107c61170(lVar5);
  func_0x000107c61174(lVar7);
  lVar5 = lVar7;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar7);
      }
      func_0x000107c4ff44(*(undefined8 *)(param_1 + 8));
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    lVar5 = lVar7;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar7);
  func_0x000107c3fe5c(*(undefined8 *)(param_1 + 8));
  func_0x000107c61170(lVar7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61170(0);
  func_0x000107c60bd8(lVar7);
  func_0x000107c61168(&PTR_PTR_112e10660);
  return;
}



/* Entry: 1002abdfc; end: 1002abe1b;  */

void FUN_1002abdfc(void)

{
  func_0x000107c61168(&PTR_PTR_112e10660);
  return;
}



/* Entry: 1002abe1c; end: 1002abe37;  */

void FUN_1002abe1c(undefined8 param_1)

{
  FUN_1000285a8(0x112e105f0,&UNK_10d9eba38);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10045a470,param_1);
  return;
}



/* Entry: 1002abe38; end: 1002abe87;  */

void FUN_1002abe38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1002abe88; end: 1002abea7;  */

void FUN_1002abe88(void)

{
  func_0x000107c61168(&PTR_PTR_1129475a8);
  return;
}



/* Entry: 1002abea8; end: 1002abf33;  */

void FUN_1002abea8(void)

{
  FUN_1000285a8(0x112ff8c70,&UNK_10dc676d0);
  FUN_1000823a8(&UNK_103c25d74,0);
  return;
}



/* Entry: 1002abf34; end: 1002abf53;  */

void FUN_1002abf34(void)

{
  func_0x000107c61168(&PTR_PTR_1129ba1f0);
  return;
}



/* Entry: 1002abf54; end: 1002abfeb;  */

void FUN_1002abf54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df8e08,&UNK_10d9c94f0);
  puVar1 = &UNK_11043dc80;
  func_0x000107c613fc(&UNK_11043dc80,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101ac032c,puVar1);
  return;
}



/* Entry: 1002abfec; end: 1002ac03f;  */

void FUN_1002abfec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002ac040; end: 1002ac06b; -[SCManagedCaptureSessionImpl _clearDeviceOutputs] */

void FUN_1002ac040(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c4fe7c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1002ac06c; end: 1002ac0bb; +[SCCaptureSessionFactory createCaptureSessionWithMultiCam:forLiveStreaming:] */

void FUN_1002ac06c(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  if (param_4 == 0) {
    ppuVar2 = &PTR_PTR_1126b7098;
  }
  else {
    if (param_3 != 0) {
      ppuVar2 = &PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
      puVar1 = PTR__OBJC_CLASS___AVCaptureMultiCamSession_1126b70a0;
      func_0x000107c4a0a0();
      if (((ulong)puVar1 & 1) != 0) goto LAB_1002ac0a8;
    }
    ppuVar2 = &PTR__OBJC_CLASS___AVCaptureSession_1126b70a8;
  }
LAB_1002ac0a8:
  func_0x000107c610fc(*ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1002ac0bc; end: 1002ac153;  */

void FUN_1002ac0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e0f310,&UNK_10d9ea510);
  puVar1 = &UNK_110461908;
  func_0x000107c613fc(&UNK_110461908,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_101c74958,puVar1);
  return;
}



/* Entry: 1002ac154; end: 1002ac1a7;  */

void FUN_1002ac154(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002ac1a8; end: 1002ac227;  */

void FUN_1002ac1a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e04ca0,&UNK_10d9d86e0);
  puVar1 = &UNK_11044c600;
  func_0x000107c613fc(&UNK_11044c600,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_101b64cb8,puVar1);
  return;
}



/* Entry: 1002ac228; end: 1002ac253;  */

void FUN_1002ac228(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1002ac254; end: 1002ac26f;  */

void FUN_1002ac254(undefined8 param_1)

{
  FUN_1000285a8(0x112e36808,&UNK_10da207d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101ea0cf4,param_1);
  return;
}



/* Entry: 1002ac270; end: 1002ac2bf;  */

void FUN_1002ac270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1004a5c6c; end: 1004a5c8f;  */

void FUN_1004a5c6c(void)

{
  return;
}



/* Entry: 1004a5c90; end: 1004a5cb3;  */

undefined8 FUN_1004a5c90(undefined8 param_1)

{
  func_0x0001004a5c78(param_1,0);
  return param_1;
}



/* Entry: 1004a5cb4; end: 1004a5ccb;  */

void FUN_1004a5cb4(void)

{
  return;
}



/* Entry: 1004a5ccc; end: 1004a5d4b;  */

undefined8 *** FUN_1004a5ccc(undefined8 param_1)

{
  undefined1 in_ZR;
  undefined8 ***pppuVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 **ppuStack_48;
  undefined1 uStack_39;
  undefined8 **ppuStack_38;
  undefined1 *puStack_30;
  undefined8 uStack_28;
  
  func_0x0001004a5cbc();
  puVar3 = (undefined8 *)&uStack_39;
  uStack_28 = extraout_x8;
  FUN_1004a5d4c(&ppuStack_48);
  pppuVar1 = &ppuStack_48;
  FUN_1004a5da8();
  ppuStack_38 = pppuVar1;
  puStack_30 = (undefined1 *)puVar3;
  if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
    func_0x0001004a5f48();
  }
  pppuVar1 = &ppuStack_38;
  FUN_1002a2640(param_1);
  FUN_1004b5c80(uStack_28);
  if ((bool)in_ZR) {
    return pppuVar1;
  }
  func_0x000107c60e78();
  pppuVar1 = (undefined8 ***)ppuStack_48;
  if ((undefined8 ***)ppuStack_48 != (undefined8 ***)0x0) {
    func_0x0001004a5f48();
    pppuVar1 = (undefined8 ***)ppuStack_48;
  }
  func_0x000107c3528c();
  ppuVar2 = (undefined8 **)0x20;
  func_0x000107c60e20();
  *ppuVar2 = &PTR_DAT_110a80570;
  ppuVar2[1] = puVar3;
  ppuVar2[3] = (undefined8 *)0xffffffffffffffff;
  ppuVar2[2] = (undefined8 *)0x0;
  *pppuVar1 = ppuVar2;
  return pppuVar1;
}



/* Entry: 1004a5d4c; end: 1004a5d97;  */

undefined8 * FUN_1004a5d4c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  func_0x000107c60e20();
  *puVar1 = &PTR_DAT_110a80570;
  puVar1[1] = param_2;
  puVar1[3] = 0xffffffffffffffff;
  puVar1[2] = 0;
  *param_1 = puVar1;
  return param_1;
}



/* Entry: 1004a5d98; end: 1004a5da7;  */

void FUN_1004a5d98(void)

{
  return;
}



/* Entry: 1004a5da8; end: 1004a5e5f;  */

undefined8 * FUN_1004a5da8(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 extraout_x8;
  long lVar9;
  undefined6 uStack_48;
  byte bStack_42;
  undefined1 uStack_41;
  byte bStack_40;
  undefined7 uStack_3f;
  undefined8 uStack_38;
  
  plVar4 = param_1;
  FUN_1004a5d98();
  uVar5 = *plVar4 + 8;
  uStack_38 = extraout_x8;
  FUN_1004a5e60();
  iVar8 = 0;
  for (lVar9 = 0; bVar3 = lVar9 == 0x10, !bVar3; lVar9 = lVar9 + 1) {
    if (iVar8 == 8) {
      uVar5 = *param_1 + 8;
      FUN_1004a5e60();
      iVar8 = 0;
    }
    *(char *)((long)&uStack_48 + lVar9) = (char)(uVar5 >> ((ulong)(uint)(iVar8 << 3) & 0x3f));
    iVar8 = iVar8 + 1;
  }
  puVar6 = (undefined8 *)
           (CONCAT17(uStack_41,CONCAT16(bStack_42,uStack_48)) & 0xff0fffffffffffff |
           0x40000000000000);
  uVar5 = CONCAT71(uStack_3f,bStack_40);
  bStack_42 = bStack_42 & 0xf | 0x40;
  bStack_40 = bStack_40 & 0x3f | 0x80;
  FUN_1004a5f34(uStack_38,puVar6,uVar5 & 0xffffffffffffff3f | 0x80);
  if (!bVar3) {
    func_0x000107c60e78();
    lVar9 = puVar6[1];
    puVar7 = (undefined8 *)puVar6[2];
    uVar5 = (long)puVar7 - lVar9;
    if (uVar5 != 0) {
      if (uVar5 == 0xffffffffffffffff) {
        func_0x0001004a5f0c(*puVar6);
        puVar7 = (undefined8 *)((long)puVar7 + lVar9);
      }
      else {
        uVar1 = uVar5 + 1;
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = 0xffffffffffffffff / uVar1;
        }
        if (~(uVar2 * uVar1) == uVar5) {
          uVar2 = uVar2 + 1;
        }
        do {
          func_0x0001004a5f0c();
          uVar1 = 0;
          if (uVar2 != 0) {
            uVar1 = (ulong)puVar7 / uVar2;
          }
        } while (uVar5 < uVar1);
        puVar7 = (undefined8 *)(uVar1 + lVar9);
      }
    }
    return puVar7;
  }
  return puVar6;
}



/* Entry: 1004a5e60; end: 1004a5e77;  */

ulong FUN_1004a5e60(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = param_1[1];
  uVar5 = param_1[2];
  uVar3 = uVar5 - lVar2;
  if (uVar3 != 0) {
    if (uVar3 == 0xffffffffffffffff) {
      func_0x0001004a5f0c(*param_1);
      uVar5 = uVar5 + lVar2;
    }
    else {
      uVar1 = uVar3 + 1;
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = 0xffffffffffffffff / uVar1;
      }
      if (~(uVar4 * uVar1) == uVar3) {
        uVar4 = uVar4 + 1;
      }
      do {
        func_0x0001004a5f0c();
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = uVar5 / uVar4;
        }
      } while (uVar3 < uVar1);
      uVar5 = uVar1 + lVar2;
    }
  }
  return uVar5;
}



/* Entry: 1004a5e78; end: 1004a5eeb;  */

ulong FUN_1004a5e78(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_3 - param_2;
  if (uVar2 != 0) {
    if (uVar2 == 0xffffffffffffffff) {
      func_0x0001004a5f0c();
      param_3 = param_3 + param_2;
    }
    else {
      uVar1 = uVar2 + 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = 0xffffffffffffffff / uVar1;
      }
      if (~(uVar3 * uVar1) == uVar2) {
        uVar3 = uVar3 + 1;
      }
      do {
        func_0x0001004a5f0c();
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = param_3 / uVar3;
        }
      } while (uVar2 < uVar1);
      param_3 = uVar1 + param_2;
    }
  }
  return param_3;
}



/* Entry: 1004a5eec; end: 1004a5f33;  */

undefined8 FUN_1004a5eec(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e47a4(param_1,param_2,&UNK_10e525a20);
  return 1;
}



/* Entry: 1004a5f34; end: 1004a5f83;  */

void FUN_1004a5f34(void)

{
  return;
}



/* Entry: 1004a5f84; end: 1004a6057;  */

long FUN_1004a5f84(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_100102e7c();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_1000e107c(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 1004a6058; end: 1004a6073;  */

bool FUN_1004a6058(long param_1)

{
  FUN_1004a5f84();
  return param_1 != 0;
}



/* Entry: 1004a6074; end: 1004a607b;  */

void FUN_1004a6074(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x0001004a6078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1004a607c; end: 1004a60ef;  */

void FUN_1004a607c(undefined1 *param_1,long param_2)

{
  undefined1 auStack_90 [96];
  
  if (*(long *)(param_2 + 8) == 0) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x000107c60c94(auStack_90);
    FUN_1004a60f0();
    func_0x0001004a6114();
    FUN_1004a6264();
    func_0x0001004a626c();
    func_0x0001004a6274();
  }
  return;
}



/* Entry: 1004a60f0; end: 1004a611f;  */

void FUN_1004a60f0(void)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000040 = in_stack_00000028;
  uStack0000000000000038 = in_stack_00000020;
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack0000000000000048 = in_stack_00000030;
  uStack0000000000000050 = 0;
  uStack0000000000000058 = 0;
  uStack0000000000000060 = 0xc;
  uStack0000000000000070 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000078 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  FUN_100100fec(&uStack_48);
  func_0x000107c60ca0(&uStack_30);
  return;
}



/* Entry: 1004a6120; end: 1004a6263; -[SCCircumstanceEngineConfigProvider getBinaryValue:] */

void FUN_1004a6120(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_48;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c5c64c();
  if ((lVar1 == 0xc) || (lVar1 = param_3, func_0x000107c5c64c(), lVar1 == 0xd)) {
    lVar1 = param_3;
    func_0x000107c42e90();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c4adac();
    func_0x000107c61170(lVar1);
    puVar4 = PTR_PTR_1126ae780;
    if (lVar2 == 0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      lVar1 = param_3;
      func_0x000107c42e90(param_3);
      func_0x000107c61180();
      uStack_48 = 0;
      func_0x000107c4e380(puVar4,param_2,lVar1,&uStack_48);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
    }
    lVar1 = param_3;
    func_0x000107c4a8c4(param_3);
    func_0x000107c61180();
    func_0x000107c4f558(param_1,param_2,lVar1,0,puVar4);
    func_0x000107c61180();
    uVar3 = param_1;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar4);
  }
  else {
    uVar3 = 0;
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1004a6264; end: 1004a628b;  */

void FUN_1004a6264(void)

{
  FUN_100100fec(&stack0x00000068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000038);
  return;
}



/* Entry: 1004a628c; end: 1004a62f7;  */

void FUN_1004a628c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x000107c30610(*(undefined8 *)(param_1 + 0xc0));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 1004a62f8; end: 1004a6337;  */

undefined ** FUN_1004a62f8(void)

{
  return &PTR_DAT_110d121c0;
}



/* Entry: 1004a6338; end: 1004a6383;  */

void FUN_1004a6338(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_110d120c8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  return;
}



/* Entry: 1004a6384; end: 1004a639b;  */

void FUN_1004a6384(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001004a6390(&stack0x000002c8,&stack0x000004c8);
  FUN_1004a047c();
  if (unaff_x19 != unaff_x20) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c33ba0();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1004a6410();
      FUN_1004a6428();
    }
    else {
      FUN_1004a6410();
      func_0x000107c30620();
    }
  }
  *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  return;
}



/* Entry: 1004a639c; end: 1004a640f;  */

void FUN_1004a639c(void)

{
  ulong uVar1;
  ulong extraout_x8;
  ulong uVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001004a6390();
  FUN_1004a047c();
  if (unaff_x19 != unaff_x20) {
    uVar1 = *(ulong *)(unaff_x19 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x000107c33ba0();
      uVar1 = extraout_x8;
    }
    uVar2 = *(ulong *)(unaff_x20 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_1004a6410();
      FUN_1004a6428();
    }
    else {
      FUN_1004a6410();
      func_0x000107c30620();
    }
  }
  *(undefined1 *)(unaff_x19 + 0xe0) = 1;
  return;
}



/* Entry: 1004a6410; end: 1004a6427;  */

void FUN_1004a6410(void)

{
  return;
}



/* Entry: 1004a6428; end: 1004a64c3;  */

undefined1  [16] FUN_1004a6428(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  uVar5 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar5;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  func_0x0001004a641c(param_1 + 0x18,param_2 + 0x18);
  func_0x0001004a641c(param_1 + 0x30,param_2 + 0x30);
  func_0x0001004a641c(param_1 + 0x48,param_2 + 0x48);
  func_0x0001004a641c(param_1 + 0x60,param_2 + 0x60);
  func_0x0001004a641c(param_1 + 0x78,param_2 + 0x78);
  func_0x0001004a641c(param_1 + 0x90,param_2 + 0x90);
  func_0x0001004a641c(param_1 + 0xa8,param_2 + 0xa8);
  puVar4 = (undefined1 *)(param_2 + 0xc0);
  puVar6 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0xc0); puVar3 != (undefined1 *)(param_1 + 0xde);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar6;
    *puVar6 = uVar2;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0xde);
  return auVar7;
}



/* Entry: 1004a64c4; end: 1004a6507;  */

undefined1  [16] FUN_1004a64c4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = param_3;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar1 = *param_1;
    *param_1 = *puVar2;
    *puVar2 = uVar1;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Entry: 1004a6508; end: 1004a6537;  */

long FUN_1004a6508(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  FUN_1004a6538(param_1);
  return param_1;
}



/* Entry: 1004a6538; end: 1004a6567;  */

long FUN_1004a6538(long param_1)

{
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_1004a695c();
  }
  func_0x000107c60e14();
  FUN_1004a6568(param_1 + 0xa8);
  FUN_1004a6568(param_1 + 0x90);
  FUN_1004a6568(param_1 + 0x78);
  FUN_1004a6568(param_1 + 0x60);
  FUN_1004a6568(param_1 + 0x48);
  FUN_1004a6568(param_1 + 0x30);
  FUN_1004a6568(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 1004a6568; end: 1004a659b;  */

long FUN_1004a6568(long param_1)

{
  if (0 < *(int *)(param_1 + 4)) {
    FUN_1004a6984(param_1);
  }
  return param_1;
}



/* Entry: 1004a659c; end: 1004a65ef;  */

long FUN_1004a659c(long param_1)

{
  FUN_1004a6568(param_1 + 0x98);
  FUN_1004a6568(param_1 + 0x80);
  FUN_1004a6568(param_1 + 0x68);
  FUN_1004a6568(param_1 + 0x50);
  FUN_1004a6568(param_1 + 0x38);
  FUN_1004a6568(param_1 + 0x20);
  FUN_1004a6568(param_1 + 8);
  return param_1;
}



/* Entry: 1004a65f0; end: 1004a65f7;  */

void FUN_1004a65f0(void)

{
  return;
}



/* Entry: 1004a65f8; end: 1004a661f;  */

long FUN_1004a65f8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1004a6620; end: 1004a6633;  */

void FUN_1004a6620(void)

{
  return;
}



/* Entry: 1004a6634; end: 1004a678b;  */

undefined8 * FUN_1004a6634(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110d12118;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  FUN_1004a678c(param_1 + 3);
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1004a678c(param_1 + 6);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1004a678c(param_1 + 9);
  *(undefined4 *)(param_1 + 0xb) = 0;
  FUN_1004a678c(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xe) = 0;
  FUN_1004a678c(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_1004a678c(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1004a678c(param_1 + 0x15);
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_1004a6820(param_2,*(undefined8 *)(param_3 + 0xc0));
  }
  param_1[0x18] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0xd0);
  uVar1 = *(undefined8 *)(param_3 + 200);
  *(undefined8 *)((long)param_1 + 0xd6) = *(undefined8 *)(param_3 + 0xd6);
  param_1[0x1a] = uVar2;
  param_1[0x19] = uVar1;
  return param_1;
}



/* Entry: 1004a678c; end: 1004a6793;  */

int * FUN_1004a678c(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined8 unaff_x21;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = unaff_x21;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_1002a9240(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_1004a67e8(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 1004a6794; end: 1004a67e7;  */

int * FUN_1004a6794(int *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  
  param_1[0] = 0;
  param_1[1] = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  iVar1 = *param_3;
  if (iVar1 != 0) {
    FUN_1002a9240(param_1,0,iVar1);
    *param_1 = iVar1;
    FUN_1004a67e8(*(undefined8 *)(param_3 + 2),iVar1,*(undefined8 *)(param_1 + 2));
  }
  return param_1;
}



/* Entry: 1004a67e8; end: 1004a681f;  */

undefined1  [16] FUN_1004a67e8(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (0 < param_2) {
    *puVar2 = *puVar1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + -1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1004a6820; end: 1004a6863;  */

undefined8 * FUN_1004a6820(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x38;
    func_0x000107c60e20();
  }
  else {
    puVar1 = param_1;
    func_0x000107c303f0(param_1,0x38);
  }
  *puVar1 = &PTR_DAT_110d120c8;
  puVar1[1] = param_1;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  FUN_1004a6864();
  return puVar1;
}



/* Entry: 1004a6864; end: 1004a68df;  */

void FUN_1004a6864(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 0x18) != 0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_2 + 0x18);
  }
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_2 + 0x1c);
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_2 + 0x20);
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_2 + 0x24);
  }
  if (*(int *)(param_2 + 0x28) != 0) {
    *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x28);
  }
  if (*(int *)(param_2 + 0x2c) != 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_2 + 0x2c);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      func_0x00010b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 1004a68e0; end: 1004a692f;  */

undefined8 * FUN_1004a68e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_DAT_110d120c8;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_1004a6864(param_1,param_3);
  return param_1;
}



/* Entry: 1004a6930; end: 1004a693b;  */

void FUN_1004a6930(void)

{
  return;
}



/* Entry: 1004a693c; end: 1004a695b;  */

void FUN_1004a693c(long param_1)

{
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    FUN_1004a6508();
  }
  return;
}



/* Entry: 1004a695c; end: 1004a6983;  */

long FUN_1004a695c(long param_1)

{
  FUN_1001a3db4(param_1 + 8);
  return param_1;
}



/* Entry: 1004a6984; end: 1004a6997;  */

void FUN_1004a6984(long param_1)

{
  if (*(long *)(*(long *)(param_1 + 8) + -8) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1004b4bec; end: 1004b4c07;  */

void FUN_1004b4bec(void)

{
  return;
}



/* Entry: 1004b4c08; end: 1004b4cbb;  */

undefined4 * FUN_1004b4c08(long *param_1,undefined4 param_2)

{
  long *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    *puVar2 = param_2;
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    puVar3 = puVar2 + 8;
    *(undefined1 *)(puVar2 + 6) = 0;
  }
  else {
    plVar1 = param_1;
    FUN_1004b4cbc(param_1,((long)puVar2 - *param_1 >> 5) + 1);
    FUN_1004b4cfc(auStack_58,plVar1,param_1[1] - *param_1 >> 5,param_1 + 2);
    *puStack_48 = param_2;
    *(undefined8 *)(puStack_48 + 2) = 0;
    *(undefined8 *)(puStack_48 + 4) = 0;
    *(undefined1 *)(puStack_48 + 6) = 0;
    puStack_48 = puStack_48 + 8;
    func_0x0001004b4d60();
    FUN_1004b4d78();
    puVar3 = (undefined4 *)param_1[1];
    FUN_1004b4df8(auStack_58);
  }
  param_1[1] = (long)puVar3;
  return puVar3 + -8;
}



/* Entry: 1004b4cbc; end: 1004b4cfb;  */

long * FUN_1004b4cbc(long *param_1,long *param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *unaff_x19;
  ulong unaff_x20;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0x7ffffffffffffff;
    }
    return plVar3;
  }
  func_0x000107c29b4c();
  func_0x0001004a6390();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (long *)0x0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      return param_1;
    }
    lVar2 = unaff_x20 << 5;
    func_0x000107c60e20();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return unaff_x19;
}



/* Entry: 1004b4cfc; end: 1004b4d53;  */

void FUN_1004b4cfc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  
  func_0x0001004a6390();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    if (unaff_x20 >> 0x3b != 0) {
      func_0x000104bd35f4();
      return;
    }
    lVar2 = unaff_x20 << 5;
    func_0x000107c60e20();
  }
  lVar1 = lVar2 + param_3 * 0x20;
  *unaff_x19 = lVar2;
  unaff_x19[1] = lVar1;
  unaff_x19[2] = lVar1;
  unaff_x19[3] = lVar2 + unaff_x20 * 0x20;
  return;
}



/* Entry: 1004b4d54; end: 1004b4d77;  */

void FUN_1004b4d54(void)

{
  return;
}



/* Entry: 1004b4d78; end: 1004b4deb;  */

void FUN_1004b4d78(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x0001004b4d6c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  func_0x000107c610b4(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 1004b4dec; end: 1004b4df7;  */

void FUN_1004b4dec(void)

{
  return;
}



/* Entry: 1004b4df8; end: 1004b4e37;  */

long * FUN_1004b4df8(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x20;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    func_0x000107c60e14();
  }
  return param_1;
}



/* Entry: 1004b4e38; end: 1004b4e4f;  */

void FUN_1004b4e38(void)

{
  return;
}



/* Entry: 1004b4e50; end: 1004b4e97;  */

undefined1  [16] FUN_1004b4e50(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000107c60f08(8,auStack_20);
  return auStack_20;
}



/* Entry: 1004b4e98; end: 1004b4eaf;  */

void FUN_1004b4e98(void)

{
  func_0x0001004b4e78();
  return;
}



/* Entry: 1004b4eb0; end: 1004b4ee3;  */

void FUN_1004b4eb0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1;
    FUN_1004b4e98();
    *(long *)(param_1 + 8) = lVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 1004b4ee4; end: 1004b4f3b;  */

void FUN_1004b4ee4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(0x20);
  return;
}



/* Entry: 1004b4f3c; end: 1004b4f9b;  */

void FUN_1004b4f3c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10049ff5c();
  FUN_10049ffdc();
  FUN_1004b4fbc();
  FUN_1004b5008(uStack_30,param_2);
  func_0x0001004a005c();
  func_0x0001004b5094();
  func_0x0001004a0084(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c339a4();
  func_0x0001004b5094();
  func_0x000107c33930();
  pcStack_48 = FUN_1004b4f9c;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1004b4f3c(&uStack_51,uStack_30);
  return;
}



/* Entry: 1004b4f9c; end: 1004b4fbb;  */

void FUN_1004b4f9c(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1004b4f3c(&uStack_11,param_1);
  return;
}



/* Entry: 1004b4fbc; end: 1004b4fdb;  */

void FUN_1004b4fbc(void)

{
  func_0x00010049ffe8();
  FUN_1004b4fdc();
  FUN_1004a0044();
  return;
}



/* Entry: 1004b4fdc; end: 1004b4ff3;  */

void FUN_1004b4fdc(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3a != 0) {
    func_0x000104bd35f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 6);
  return;
}



/* Entry: 1004b4ff4; end: 1004b5007;  */

void FUN_1004b4ff4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 6);
  return;
}



/* Entry: 1004b5008; end: 1004b503b;  */

void FUN_1004b5008(void)

{
  func_0x0001004b4ffc();
  FUN_1004b503c(&UNK_110a78880);
  FUN_1004b5054();
  return;
}



/* Entry: 1004b503c; end: 1004b5053;  */

long * FUN_1004b503c(long param_1,long *param_2)

{
  *param_2 = param_1 + 0x10;
  param_2[1] = 0;
  return param_2 + 3;
}



/* Entry: 1004b5054; end: 1004b508b;  */

void FUN_1004b5054(void)

{
  undefined1 auStack_48 [40];
  
  func_0x0001004b5048();
  FUN_10049cac0();
  func_0x0001004b4d60();
  func_0x00010049ce50();
  func_0x00010049cddc(auStack_48);
  return;
}



/* Entry: 1004b508c; end: 1004b514b;  */

void FUN_1004b508c(void)

{
  return;
}



/* Entry: 1004b514c; end: 1004b519b;  */

void FUN_1004b514c(long *param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (uStack_24 = param_2, func_0x0001004b50b0(lVar1,&uStack_24), lVar1 != 0)) {
    lVar1 = *param_1;
    func_0x0001004b50b0(lVar1,&uStack_24);
    FUN_100152bb8(lVar1 + 0x18,&DAT_10f2cf72e);
  }
  return;
}



/* Entry: 1004b519c; end: 1004b51db;  */

void FUN_1004b519c(void)

{
  return;
}



/* Entry: 1004b51dc; end: 1004b524f;  */

void FUN_1004b51dc(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001004b51cc();
  uStack_28 = extraout_x8;
  FUN_1004b5280(auStack_40,1);
  func_0x0001004b52fc(uStack_30,param_2);
  func_0x0001004b5344();
  func_0x0001004b535c();
  func_0x0001004b536c(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  func_0x000107c60e78();
  func_0x00010530ea94();
  func_0x0001004b535c();
  func_0x00010530ea74();
  pcStack_48 = FUN_1004b5250;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1004b51dc(&uStack_51,uStack_30);
  return;
}



/* Entry: 1004b5250; end: 1004b5273;  */

void FUN_1004b5250(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_1004b51dc(&uStack_11,param_1);
  return;
}



/* Entry: 1004b5274; end: 1004b527f;  */

void FUN_1004b5274(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1004b5280; end: 1004b529f;  */

void FUN_1004b5280(void)

{
  FUN_1004b5274();
  FUN_1004b52b4();
  func_0x0001004b52e0();
  return;
}



/* Entry: 1004b52a0; end: 1004b52b3;  */

void FUN_1004b52a0(void)

{
  return;
}



/* Entry: 1004b52b4; end: 1004b52d3;  */

void FUN_1004b52b4(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  FUN_1004b52a0();
  if ((bool)in_CY) {
    func_0x000104bd35f4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
  return;
}



/* Entry: 1004b52d4; end: 1004b5427;  */

void FUN_1004b52d4(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * 0x30);
  return;
}



/* Entry: 1004b5428; end: 1004b5527;  */

void FUN_1004b5428(undefined1 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (uStack_24 = param_3, func_0x0001004b538c(lVar1,&uStack_24), lVar1 == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    func_0x0001002a8308(param_1,lVar1 + 0x18);
  }
  return;
}



/* Entry: 1004b5528; end: 1004b5563;  */

void FUN_1004b5528(undefined8 param_1)

{
  undefined1 auStack_40 [24];
  undefined1 uStack_28;
  
  auStack_40[0] = 0;
  uStack_28 = 0;
  func_0x0001004b547c(param_1,0x70,auStack_40);
  func_0x0001004b5574();
  return;
}



/* Entry: 1004b5564; end: 1004b55ab;  */

void FUN_1004b5564(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (&stack0x00000008);
  return;
}



/* Entry: 1004b55ac; end: 1004b55cf;  */

void FUN_1004b55ac(long param_1)

{
  func_0x0001004b55a0();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1004b55d0; end: 1004b55e3;  */

void FUN_1004b55d0(void)

{
  return;
}



/* Entry: 1004b55e4; end: 1004b5603;  */

void FUN_1004b55e4(void)

{
  func_0x00010049ffe8();
  FUN_1004b5604();
  FUN_1004a0044();
  return;
}



/* Entry: 1004b5604; end: 1004b562f;  */

void FUN_1004b5604(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long extraout_x8;
  
  if (param_2 < 0x1af286bca1af287) {
    lVar1 = 0x98;
  }
  else {
    func_0x000104bd35f4();
    lVar1 = extraout_x8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 * lVar1);
  return;
}



/* Entry: 1004b5630; end: 1004b56c7;  */

void FUN_1004b5630(long param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_3 * param_1);
  return;
}



/* Entry: 1004b56c8; end: 1004b56eb;  */

void FUN_1004b56c8(long param_1)

{
  FUN_1000dfb88();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1004b56ec; end: 1004b570b;  */

void FUN_1004b56ec(void)

{
  return;
}



/* Entry: 1004b570c; end: 1004b572b;  */

void FUN_1004b570c(void)

{
  func_0x00010049ffe8();
  FUN_1004b572c();
  FUN_1004a0044();
  return;
}



/* Entry: 1004b572c; end: 1004b5757;  */

void FUN_1004b572c(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x1642c8590b21643) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xb8);
    return;
  }
  func_0x000104bd35f4();
  return;
}



/* Entry: 1004b5758; end: 1004b576f;  */

void FUN_1004b5758(void)

{
  return;
}



/* Entry: 1004b5770; end: 1004b586b;  */

long FUN_1004b5770(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 extraout_x9;
  int extraout_w10;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x000107c60c94();
  FUN_1004b58b4(lVar1 + 0x18,param_3,param_4);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  uVar2 = param_5[1];
  uVar3 = *param_5;
  *(undefined8 *)(param_1 + 0x98) = param_5[1];
  *(undefined8 *)(param_1 + 0x90) = uVar3;
  func_0x0001004b59d8(uVar2);
  *(undefined8 *)(param_1 + 0x40) = extraout_x9;
  if (extraout_x8 != 0) {
    do {
      func_0x0001004a0330();
    } while (extraout_w10 != 0);
  }
  FUN_1004b59e4(param_1);
  return param_1;
}



/* Entry: 1004b586c; end: 1004b58b3;  */

void FUN_1004b586c(undefined4 *param_1)

{
  *param_1 = 0x1010001;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 3) = 2;
  param_1[5] = 0x1010001;
  *(undefined2 *)(param_1 + 6) = 0x100;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0x101;
  *(undefined1 *)((long)param_1 + 0x26) = 1;
  return;
}



/* Entry: 1004b58b4; end: 1004b5913;  */

void FUN_1004b58b4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_1004b586c(param_1);
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 5;
  *(undefined4 *)(param_1 + 0x10) = 100;
  FUN_1004b59a0();
  uVar2 = 0x19;
  if ((param_3 & 0x100000000) != 0) {
    uVar2 = (undefined4)param_3;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(short *)(param_1 + 0x24) = (short)uVar1;
  *(char *)(param_1 + 0x26) = (char)((uint)uVar1 >> 0x10);
  return;
}



/* Entry: 1004b5914; end: 1004b599f;  */

ulong FUN_1004b5914(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uStack_5c;
  undefined1 auStack_58 [24];
  byte bStack_40;
  undefined1 uStack_31;
  
  FUN_1004b5428(auStack_58);
  if ((bStack_40 & 1) == 0) {
    uVar4 = param_3 & 0xffffff0000000000;
    uVar3 = param_3;
    uVar5 = param_3;
  }
  else {
    puVar2 = &uStack_31;
    func_0x000107c296a4(puVar2,auStack_58,&uStack_5c);
    bVar1 = (int)puVar2 == 0;
    uVar4 = 0;
    if (bVar1) {
      uStack_5c = (uint)param_3;
      uVar4 = param_3 & 0xffffff0000000000;
    }
    uVar5 = (ulong)uStack_5c;
    uVar3 = 0x100000000;
    if (bVar1) {
      uVar3 = param_3;
    }
  }
  FUN_1001148fc(auStack_58);
  return uVar3 & 0xff00000000 | uVar4 | uVar5 & 0xffffffff;
}



/* Entry: 1004b59a0; end: 1004b59bf;  */

ulong FUN_1004b59a0(ulong param_1)

{
  FUN_1004b5914(param_1,0x71,0);
  return param_1 & 0xffffffffff;
}



/* Entry: 1004b59c0; end: 1004b59e3;  */

void FUN_1004b59c0(void)

{
  return;
}



/* Entry: 1004b59e4; end: 1004b5bc3;  */

long FUN_1004b59e4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long alStack_68 [7];
  
  func_0x000107c60d88(param_1 + 0x40);
  lVar5 = *(long *)(param_1 + 0x88);
  if (lVar5 == 0) {
    FUN_1004b5bc4(alStack_68,param_1,param_1 + 0x18);
    lVar5 = alStack_68[0];
    alStack_68[0] = 0;
    lVar2 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = lVar5;
    if (lVar2 != 0) {
      func_0x000107c32924();
      lVar5 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar5 != 0) {
        func_0x000107c32924();
      }
    }
    FUN_10054aa68(alStack_68);
    plVar3 = alStack_68;
    func_0x00010054b1c8(plVar3,*(undefined8 *)(param_1 + 0x80));
    func_0x00010054d304(alStack_68);
    if ((int)plVar3 == -1) {
      uVar4 = 0x58;
      func_0x000107c60e30(0x58);
      func_0x000107c31390();
      func_0x000107c60e54(uVar4,&PTR_DAT_110d99b20,&DAT_1055b0158);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5b9c);
      (*pcVar1)();
    }
    FUN_10054d338(alStack_68,*(undefined8 *)(param_1 + 0x80));
    lVar5 = alStack_68[0];
    alStack_68[0] = 0;
    lVar2 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = lVar5;
    if (lVar2 != 0) {
      func_0x000107c32924();
      lVar5 = alStack_68[0];
      alStack_68[0] = 0;
      if (lVar5 != 0) {
        func_0x000107c32924();
      }
    }
    lVar5 = *(long *)(param_1 + 0x88);
  }
  func_0x000107c60d8c(param_1 + 0x40);
  return lVar5;
}



/* Entry: 1004b5bc4; end: 1004b5c17;  */

void FUN_1004b5bc4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1a8;
  func_0x000107c60e20();
  FUN_10045e284();
  *param_1 = uVar1;
  return;
}



/* Entry: 1004b5c18; end: 1004b5c7f; +[RTUSFilteringVariable descriptor] */

void FUN_1004b5c18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001137f0dd8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112c2a640,
                        &PTR____CFConstantStringClassReference_110f3db98,&PTR_DAT_11333e330,
                        &PTR_DAT_11333e368,1,0x10,0x1c);
    puRam00000001137f0dd8 = puVar1;
  }
  return;
}



/* Entry: 1004b5c80; end: 1004b5cb3;  */

void FUN_1004b5c80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1004b5cb4; end: 1004b5d47;  */

undefined8 * FUN_1004b5cb4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    FUN_100033dac(param_1,*param_2,param_2[1]);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
  }
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    FUN_100033dac(param_1 + 3,*param_3,param_3[1]);
  }
  else {
    uVar2 = param_3[1];
    uVar1 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar2;
    param_1[3] = uVar1;
  }
  return param_1;
}



/* Entry: 1004b5d48; end: 1004b5db3;  */

void FUN_1004b5d48(long param_1)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 uStack_38;
  char cStack_21;
  
  FUN_1004b5cb4(auStack_50);
  FUN_1004b5db4(param_1 + 0xb8,auStack_50);
  if (cStack_21 < '\0') {
    func_0x000107c60e14(uStack_38);
  }
  if (cStack_39 < '\0') {
    func_0x000107c60e14(auStack_50[0]);
  }
  return;
}



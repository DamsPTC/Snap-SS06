/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1034d8664; end: 1034d86c3; -[SCAdImpressionDataDiffLogger init] */

void FUN_1034d8664(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.SCAdImpressionDataDiffLogger",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034d8690);
  (*pcVar1)();
}



/* Entry: 1034d86c4; end: 1034d86d3; -[SCAdImpressionDataDiffLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034d86c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f73440));
  return;
}



/* Entry: 1034d86d4; end: 1034d874b;  */

void FUN_1034d86d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1034db418(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1034d874c; end: 1034d8757;  */

undefined * FUN_1034d874c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d96c4);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112f73810;
    func_0x0001000285a8(0x112f73810,&UNK_10dbcf168);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x188) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_110673618);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x188 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x188);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 1034d8758; end: 1034d8deb;  */

undefined * FUN_1034d8758(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d8860);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73830;
    func_0x0001000285a8(0x112f73830,&UNK_10dbcf188);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + 0x5f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 7) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11066d350);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x80 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 7);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1034d8dec; end: 1034d8e33;  */

undefined * FUN_1034d8dec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  puVar4 = (undefined *)0x112f73800;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d9c5c);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x0001000285a8(0x112f73800,&UNK_10dbcf158);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x18) * 2;
    puVar5 = puVar4;
  }
  puVar4 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar7,&UNK_110665b00);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar5;
}



/* Entry: 1034d8e34; end: 1034d8f4f;  */

undefined * FUN_1034d8e34(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d8f50);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f737c8;
    func_0x0001000285a8(0x112f737c8,&UNK_10dbcf110);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11065c8d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1034d8f50; end: 1034d9093;  */

undefined * FUN_1034d8f50(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d9094);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f73438;
    func_0x0001000285a8(0x112f73438,&UNK_10dbcf4c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f737b0;
    func_0x0001000285a8(0x112f737b0,&UNK_10dbcf100);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1034d9094; end: 1034d9343;  */

void FUN_1034d9094(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1034d9344();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1034d9344; end: 1034d9593;  */

undefined * FUN_1034d9344(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d946c);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73850;
    func_0x0001000285a8(0x112f73850,&UNK_10dbcf1b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0xa8) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110674828);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0xa8 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0xa8);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1034d9594; end: 1034d96c3;  */

undefined *
FUN_1034d9594(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d96c4);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73810;
    func_0x0001000285a8(0x112f73810,&UNK_10dbcf168);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x188) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110673618);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x188 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x188);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1034d96c4; end: 1034d9b3b;  */

undefined * FUN_1034d96c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d97e8);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73838;
    func_0x0001000285a8(0x112f73838,&UNK_10dbcf198);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x70) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110673d70);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x70 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x70);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1034d9b3c; end: 1034d9c5b;  */

undefined *
FUN_1034d9b3c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,code *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034d9c5c);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x18 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_8)(param_4);
  return puVar4;
}



/* Entry: 1034d9c5c; end: 1034da1eb;  */

undefined * FUN_1034d9c5c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034d9d80);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112f73860;
    func_0x0001000285a8(0x112f73860,&UNK_10dbcf1c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x130) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110660788);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x130 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x130);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1034da1ec; end: 1034da423;  */

undefined * FUN_1034da1ec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034da31c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112f737f8;
    func_0x0001000285a8(0x112f737f8,&UNK_10dbcf4b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112f73320;
    func_0x0001000285a8(0x112f73320,&UNK_10dbcf150);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1034da424; end: 1034da56f;  */

undefined *
FUN_1034da424(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034da570);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_5;
    FUN_1034d86d4(param_5,param_6,param_7,param_8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1034db418(0,param_5,param_6);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1034da570; end: 1034da61b;  */

undefined8 * FUN_1034da570(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    puVar4 = (undefined8 *)param_1[2];
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar4 = param_1;
    }
    func_0x000107c6042c();
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    FUN_1034deca8(puVar4,0);
    func_0x000107c61434(param_1);
    puVar3 = &uStack_58;
    FUN_1034def50(puVar3,puVar2 + 4,puVar4,param_1);
    FUN_1034db458(uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034da5f4);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Entry: 1034da61c; end: 1034da6ff;  */

undefined * FUN_1034da61c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034da700);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = (undefined *)0x112f737c8;
      func_0x0001000285a8(0x112f737c8,&UNK_10dbcf110);
      func_0x000107c613fc();
      puVar4 = puVar3;
      func_0x000107c610a4();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034da6fc);
      (*pcVar2)();
    }
    func_0x000107c6140c(puVar3 + 0x20,param_2 + param_3 * 0x30,lVar1,&UNK_11065c8d8);
  }
  return puVar3;
}



/* Entry: 1034da700; end: 1034da7db;  */

long FUN_1034da700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  long extraout_x8;
  long lVar1;
  
  lVar1 = *(long *)(param_7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
  func_0x000107c613fc(param_6,0x58,7);
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4,param_7);
  *(long *)(param_6 + 0x40) = param_7;
  *(undefined8 *)(param_6 + 0x48) = param_8;
  func_0x0001000c5db4(param_6 + 0x28);
  (**(code **)(lVar1 + 0x20))();
  *(undefined8 *)(param_6 + 0x10) = param_1;
  *(undefined8 *)(param_6 + 0x18) = param_3;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(undefined8 *)(param_6 + 0x50) = param_5;
  return param_6;
}



/* Entry: 1034da7dc; end: 1034da84b;  */

undefined8 FUN_1034da7dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1034dfec4(param_2,param_1);
  return param_2;
}



/* Entry: 1034da84c; end: 1034db127;  */

void FUN_1034da84c(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  double dVar23;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  lVar22 = *(long *)(unaff_x20 + 0x10);
  if (lVar22 != 0) {
    puVar6 = PTR_PTR_1126ad330;
    func_0x000107c610f8();
    func_0x000107c615f0(lVar22);
    func_0x000107c453e4();
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c522e4(puVar6);
      func_0x000107c61170(param_5);
    }
    if (param_7 == 0) {
      uVar19 = 0xe600000000000000;
      uVar7 = 0x79636167656c;
    }
    else if (param_7 == 2) {
      uVar19 = 0xe200000000000000;
      uVar7 = 0x3276;
    }
    else {
      if (param_7 != 1) {
        lStack_88 = param_7;
        func_0x000107c60614(&UNK_11065c6e0,&lStack_88,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034db128);
        (*pcVar5)();
      }
      uVar19 = 0xe600000000000000;
      uVar7 = 0x776f64616873;
    }
    func_0x000107c5fadc(uVar7,uVar19);
    func_0x000107c6142c(uVar19);
    func_0x000107c52e68(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c540f8(puVar6);
    func_0x000107c540d0(puVar6);
    dVar23 = (double)(long)param_1;
    if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034db0fc);
      (*pcVar5)();
    }
    if (dVar23 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034db100);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar23) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034db104);
      (*pcVar5)();
    }
    func_0x000107c55ad0(puVar6);
    lVar20 = *(long *)(param_4 + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar20 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001034d92cc(0,lVar20,0);
      puVar15 = PTR___sSSN_11034da80;
      plVar21 = (long *)(param_4 + 0x48);
      do {
        puVar18 = puStack_78;
        lVar11 = plVar21[-5];
        lVar2 = plVar21[-4];
        lVar14 = plVar21[-3];
        lVar3 = plVar21[-2];
        lVar12 = plVar21[-1];
        lVar4 = *plVar21;
        puVar8 = PTR_PTR_1126ad338;
        func_0x000107c610f8();
        func_0x000107c61434(lVar2);
        func_0x000107c61434(lVar3);
        func_0x000107c61434(lVar4);
        func_0x000107c453e4();
        lVar9 = lVar11;
        func_0x000107c5fadc(lVar11,lVar2);
        func_0x000107c57274(puVar8);
        func_0x000107c61170(lVar9);
        lVar9 = lVar11;
        lVar16 = lVar2;
        func_0x000107c5fb1c();
        lStack_88 = lVar9;
        lStack_80 = lVar16;
        func_0x000100e8b654();
        uStack_98 = uRam0000000112f739d8;
        uStack_90 = uRam0000000112f739e0;
        puVar10 = &uStack_98;
        func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_98 = uRam0000000112f739e8;
          uStack_90 = uRam0000000112f739f0;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f739f8;
          uStack_90 = uRam0000000112f73a00;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a08;
          uStack_90 = uRam0000000112f73a10;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a18;
          uStack_90 = uRam0000000112f73a20;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a28;
          uStack_90 = uRam0000000112f73a30;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a38;
          uStack_90 = uRam0000000112f73a40;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a48;
          uStack_90 = uRam0000000112f73a50;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          uStack_98 = uRam0000000112f73a58;
          uStack_90 = uRam0000000112f73a60;
          puVar10 = &uStack_98;
          lVar17 = lVar9;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dac3c;
          func_0x000107c6142c(lVar16);
          lVar13 = lVar14;
          func_0x000107c5fb5c(lVar14,lVar3);
          func_0x000107c61434(lVar3);
          lVar16 = lVar3;
          if (200 < lVar13) {
            lVar13 = 200;
            func_0x000101297580(200,lVar14,lVar3);
            func_0x000107c6142c(lVar3);
            func_0x000107c5fb2c(lVar13,lVar14,lVar16,lVar17);
            func_0x000107c6142c(lVar17);
            lStack_88 = lVar13;
            lStack_80 = lVar14;
            func_0x000107c61434(lVar14);
            func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
            func_0x000107c6142c(lVar14);
            lVar16 = lStack_80;
            lVar14 = lStack_88;
          }
        }
        else {
LAB_1034dac3c:
          func_0x000107c6142c(lVar16);
          lVar16 = -0x15ffffffffffa2bc;
          lVar14 = 0x455443414445525b;
        }
        func_0x000107c5fadc(lVar14,lVar16);
        func_0x000107c6142c(lVar16);
        func_0x000107c55bb8(puVar8);
        func_0x000107c61170(lVar14);
        lVar14 = lVar2;
        func_0x000107c5fb1c();
        uStack_98 = uRam0000000112f739d8;
        uStack_90 = uRam0000000112f739e0;
        puVar10 = &uStack_98;
        lStack_88 = lVar11;
        lStack_80 = lVar14;
        func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_98 = uRam0000000112f739e8;
          uStack_90 = uRam0000000112f739f0;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f739f8;
          uStack_90 = uRam0000000112f73a00;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a08;
          uStack_90 = uRam0000000112f73a10;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a18;
          uStack_90 = uRam0000000112f73a20;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a28;
          uStack_90 = uRam0000000112f73a30;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a38;
          uStack_90 = uRam0000000112f73a40;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a48;
          uStack_90 = uRam0000000112f73a50;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          uStack_98 = uRam0000000112f73a58;
          uStack_90 = uRam0000000112f73a60;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034dae54;
          func_0x000107c6142c(lVar14);
          lVar14 = lVar12;
          func_0x000107c5fb5c(lVar12,lVar4);
          func_0x000107c61434(lVar4);
          lVar11 = lVar4;
          if (200 < lVar14) {
            lVar14 = 200;
            func_0x000101297580(200,lVar12,lVar4);
            func_0x000107c6142c(lVar4);
            func_0x000107c5fb2c(lVar14,lVar12,lVar11,lVar9);
            func_0x000107c6142c(lVar9);
            lStack_88 = lVar14;
            lStack_80 = lVar12;
            func_0x000107c61434(lVar12);
            func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
            func_0x000107c6142c(lVar12);
            lVar12 = lStack_88;
            lVar11 = lStack_80;
          }
        }
        else {
LAB_1034dae54:
          func_0x000107c6142c(lVar14);
          lVar12 = 0x455443414445525b;
          lVar11 = -0x15ffffffffffa2bc;
        }
        func_0x000107c5fadc(lVar12,lVar11);
        func_0x000107c6142c(lVar11);
        func_0x000107c59afc(puVar8);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar2);
        func_0x000107c61170(lVar12);
        uVar1 = *(ulong *)(puVar18 + 0x10);
        puStack_78 = puVar18;
        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar1) {
          func_0x0001034d92cc(1 < *(ulong *)(puVar18 + 0x18),uVar1 + 1,1);
        }
        plVar21 = plVar21 + 6;
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar8;
        lVar20 = lVar20 + -1;
        puVar18 = puStack_78;
      } while (lVar20 != 0);
    }
    uVar7 = 0;
    FUN_1034db418(0,0x112f737b8,&PTR_PTR_1126ad338);
    puVar15 = puVar18;
    func_0x000107c5fc48(puVar18,uVar7);
    func_0x000107c6142c(puVar18);
    func_0x000107c540fc(puVar6);
    func_0x000107c61170(puVar15);
    func_0x000107c4bfb0(lVar22);
    func_0x000107c615e8(lVar22);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1034db128; end: 1034db2eb;  */

/* WARNING: Possible PIC construction at 0x0001034db200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034db284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034db204) */
/* WARNING: Removing unreachable block (ram,0x0001034db2b8) */
/* WARNING: Removing unreachable block (ram,0x0001034db224) */
/* WARNING: Removing unreachable block (ram,0x0001034db230) */
/* WARNING: Removing unreachable block (ram,0x0001034db234) */
/* WARNING: Removing unreachable block (ram,0x0001034db2bc) */
/* WARNING: Removing unreachable block (ram,0x0001034db238) */
/* WARNING: Removing unreachable block (ram,0x0001034db240) */
/* WARNING: Removing unreachable block (ram,0x0001034db244) */
/* WARNING: Removing unreachable block (ram,0x0001034db2c0) */
/* WARNING: Removing unreachable block (ram,0x0001034db248) */
/* WARNING: Removing unreachable block (ram,0x0001034db28c) */
/* WARNING: Removing unreachable block (ram,0x0001034db258) */
/* WARNING: Removing unreachable block (ram,0x0001034db288) */
/* WARNING: Removing unreachable block (ram,0x0001034db294) */

void FUN_1034db128(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_68;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_4 == 0) {
    uVar3 = 0xe600000000000000;
    uVar4 = 0x79636167656c;
  }
  else if (param_4 == 2) {
    uVar3 = 0xe200000000000000;
    uVar4 = 0x3276;
  }
  else {
    if (param_4 != 1) {
      lStack_68 = param_4;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11065c6e0,&lStack_68,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034db2ec);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar4 = 0x776f64616873;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar4,uVar3);
  if ((param_1 & 1) == 0) {
    func_0x000106bc7168(lVar2,uVar4,1);
  }
  else {
    func_0x000106bc6ff4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1034db2ec; end: 1034db32f;  */

long FUN_1034db2ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1034db330; end: 1034db347;  */

undefined8 * FUN_1034db330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1034db348; end: 1034db3e7;  */

void FUN_1034db348(void)

{
  func_0x000107c61168(&PTR_PTR_112f73538);
  return;
}



/* Entry: 1034db3e8; end: 1034db3f7;  */

undefined1  [16] FUN_1034db3e8(void)

{
  return ZEXT816(0x11065c7d8);
}



/* Entry: 1034db3f8; end: 1034db417;  */

void FUN_1034db3f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128deb90);
  return;
}



/* Entry: 1034db418; end: 1034db457;  */

void FUN_1034db418(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1034db458; end: 1034db467;  */

void FUN_1034db458(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1034db468; end: 1034dbcbb;  */

/* WARNING: Removing unreachable block (ram,0x0001034dba90) */
/* WARNING: Removing unreachable block (ram,0x0001034dbbc4) */
/* WARNING: Removing unreachable block (ram,0x0001034dba4c) */
/* WARNING: Removing unreachable block (ram,0x0001034dba9c) */
/* WARNING: Removing unreachable block (ram,0x0001034dbaa0) */
/* WARNING: Removing unreachable block (ram,0x0001034dbaa4) */
/* WARNING: Removing unreachable block (ram,0x0001034dbb18) */
/* WARNING: Removing unreachable block (ram,0x0001034dbae4) */
/* WARNING: Removing unreachable block (ram,0x0001034dbb48) */
/* WARNING: Removing unreachable block (ram,0x0001034dbb88) */
/* WARNING: Removing unreachable block (ram,0x0001034db930) */
/* WARNING: Type propagation algorithm not settling */

void FUN_1034db468(long param_1,double param_2,undefined8 param_3,undefined8 ******param_4,
                  ulong param_5,long param_6,ulong param_7,undefined8 param_8,undefined1 param_9,
                  undefined8 param_10)

{
  undefined8 *******pppppppuVar1;
  undefined8 *****pppppuVar2;
  undefined8 *****pppppuVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 ******ppppppuVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  uint uVar23;
  undefined8 *puVar24;
  long unaff_x21;
  long lVar25;
  undefined8 ******ppppppuVar26;
  long lVar27;
  double dVar28;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar7 = param_4;
  uVar17 = param_5;
  lVar22 = param_6;
  dVar28 = param_2;
  func_0x000107c6071c();
  uStack_90 = 0;
  uStack_a8 = 0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x0;
  FUN_1034e5fa0();
  uVar4 = (uint)(param_5 >> 0x20);
  uVar23 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar23 == 0) {
      uStack_d8._0_1_ = SUB81(param_4,0);
      uStack_d8._1_1_ = (undefined1)((ulong)param_4 >> 8);
      uStack_d8._2_1_ = (undefined1)((ulong)param_4 >> 0x10);
      uStack_d8._3_1_ = (undefined1)((ulong)param_4 >> 0x18);
      uStack_d8._4_1_ = (undefined1)((ulong)param_4 >> 0x20);
      uStack_d8._5_1_ = (undefined1)((ulong)param_4 >> 0x28);
      uStack_d8._6_1_ = (undefined1)((ulong)param_4 >> 0x30);
      uStack_d8._7_1_ = (undefined1)((ulong)param_4 >> 0x38);
      uStack_d0 = (undefined1)param_5;
      uStack_cf = (undefined1)(param_5 >> 8);
      uStack_ce = (undefined1)(param_5 >> 0x10);
      uStack_cd = (undefined1)(param_5 >> 0x18);
      uStack_cc = (undefined1)(param_5 >> 0x20);
      uStack_cb = (undefined1)(param_5 >> 0x28);
      ppppppuVar9 = ppppppuVar7;
      func_0x0001018dde30();
      func_0x00010006ae80(&uStack_d8,(long)&uStack_d8 + (param_5 >> 0x30 & 0xff),&pppppppuStack_b0,0
                          ,100,0,&UNK_11065d640,ppppppuVar9);
    }
    else {
      lVar27 = (long)(int)param_4;
      ppppppuVar8 = (undefined8 ******)(((long)param_4 >> 0x20) - lVar27);
      if ((long)param_4 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbca0);
        (*pcVar5)();
      }
      ppppppuVar26 = ppppppuVar7;
      func_0x000107c5ec30();
      if (ppppppuVar26 == (undefined8 ******)0x0) {
        func_0x000107c5ec38();
        lVar27 = 0;
        ppppppuVar9 = ppppppuVar26;
        lVar14 = 0;
      }
      else {
        ppppppuVar9 = ppppppuVar26;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar27,(long)ppppppuVar9)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbca8);
          (*pcVar5)();
        }
        lVar25 = (lVar27 - (long)ppppppuVar9) + (long)ppppppuVar26;
        func_0x000107c5ec38();
        ppppppuVar26 = ppppppuVar9;
        if ((long)ppppppuVar8 <= (long)ppppppuVar9) {
          ppppppuVar26 = ppppppuVar8;
        }
        lVar27 = 0;
        if (lVar25 != 0) {
          lVar27 = lVar25;
        }
        lVar14 = 0;
        if (lVar25 != 0) {
          lVar14 = (long)ppppppuVar26 + lVar25;
        }
      }
      func_0x0001018dde30();
LAB_1034db720:
      func_0x00010006ae80(lVar27,lVar14,&pppppppuStack_b0,0,100,0,&UNK_11065d640,ppppppuVar9);
    }
  }
  else {
    if (uVar23 == 2) {
      pppppuVar2 = param_4[2];
      pppppuVar3 = param_4[3];
      ppppppuVar8 = ppppppuVar7;
      func_0x000107c5ec30();
      ppppppuVar9 = ppppppuVar8;
      if (ppppppuVar8 == (undefined8 ******)0x0) {
        lVar27 = 0;
      }
      else {
        func_0x000107c5ec3c();
        if (SBORROW8((long)pppppuVar2,(long)ppppppuVar9)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbca4);
          (*pcVar5)();
        }
        lVar27 = ((long)pppppuVar2 - (long)ppppppuVar9) + (long)ppppppuVar8;
      }
      if (SBORROW8((long)pppppuVar3,(long)pppppuVar2)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034db6f8);
        (*pcVar5)();
      }
      ppppppuVar26 = (undefined8 ******)((long)pppppuVar3 - (long)pppppuVar2);
      func_0x000107c5ec38();
      ppppppuVar8 = ppppppuVar9;
      if ((long)ppppppuVar26 <= (long)ppppppuVar9) {
        ppppppuVar8 = ppppppuVar26;
      }
      lVar14 = 0;
      if (lVar27 != 0) {
        lVar14 = (long)ppppppuVar8 + lVar27;
      }
      func_0x0001018dde30();
      goto LAB_1034db720;
    }
    ppppppuVar9 = ppppppuVar7;
    func_0x0001018dde30();
    uStack_d8._0_1_ = 0;
    uStack_d8._1_1_ = 0;
    uStack_d8._2_1_ = 0;
    uStack_d8._3_1_ = 0;
    uStack_d8._4_1_ = 0;
    uStack_d8._5_1_ = 0;
    uStack_d8._6_1_ = 0;
    uStack_d8._7_1_ = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_ce = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    func_0x00010006ae80(&uStack_d8,&uStack_d8,&pppppppuStack_b0,0,100,0,&UNK_11065d640,ppppppuVar9);
  }
  if (unaff_x21 != 0) {
    FUN_1034e04a0(&pppppppuStack_b0,0x112d49548,&UNK_10d90fde0);
    func_0x00010006c090(ppppppuVar7,uVar17);
    func_0x000107c61574(lVar22);
    goto LAB_1034db970;
  }
  uVar18 = 0x112d49548;
  puVar16 = &UNK_10d90fde0;
  pppppppuVar10 = &pppppppuStack_b0;
  FUN_1034e04a0();
  uStack_90 = 0;
  uStack_a8 = 0;
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_98 = 0;
  puStack_a0 = (undefined *)0x0;
  FUN_1034e5fa0();
  uVar4 = (uint)(param_7 >> 0x20);
  uVar23 = uVar4 >> 0x1e;
  pppppppuVar13 = pppppppuVar10;
  if (uVar4 >> 0x1e < 2) {
    if (uVar23 == 0) {
      uStack_d8._0_1_ = (undefined1)param_6;
      uStack_d8._1_1_ = (undefined1)((ulong)param_6 >> 8);
      uStack_d8._2_1_ = (undefined1)((ulong)param_6 >> 0x10);
      uStack_d8._3_1_ = (undefined1)((ulong)param_6 >> 0x18);
      uStack_d8._4_1_ = (undefined1)((ulong)param_6 >> 0x20);
      uStack_d8._5_1_ = (undefined1)((ulong)param_6 >> 0x28);
      uStack_d8._6_1_ = (undefined1)((ulong)param_6 >> 0x30);
      uStack_d8._7_1_ = (undefined1)((ulong)param_6 >> 0x38);
      uStack_d0 = (undefined1)param_7;
      uStack_cf = (undefined1)(param_7 >> 8);
      uStack_ce = (undefined1)(param_7 >> 0x10);
      uStack_cd = (undefined1)(param_7 >> 0x18);
      uStack_cc = (undefined1)(param_7 >> 0x20);
      uStack_cb = (undefined1)(param_7 >> 0x28);
      puVar19 = (undefined8 *)((long)&uStack_d8 + (param_7 >> 0x30 & 0xff));
      func_0x0001018dde30();
      pppppppuVar11 = (undefined8 *******)&uStack_d8;
    }
    else {
      lVar27 = (long)(int)param_6;
      pppppppuVar11 = (undefined8 *******)((param_6 >> 0x20) - lVar27);
      if (param_6 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbcac);
        (*pcVar5)();
      }
      pppppppuVar12 = pppppppuVar10;
      func_0x000107c5ec30();
      if (pppppppuVar12 != (undefined8 *******)0x0) {
        pppppppuVar13 = pppppppuVar12;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar27,(long)pppppppuVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbcb8);
          (*pcVar5)();
        }
        pppppppuVar12 = (undefined8 *******)((lVar27 - (long)pppppppuVar13) + (long)pppppppuVar12);
        func_0x000107c5ec38();
        pppppppuVar1 = pppppppuVar13;
        if ((long)pppppppuVar11 <= (long)pppppppuVar13) {
          pppppppuVar1 = pppppppuVar11;
        }
        puVar24 = (undefined8 *)((long)pppppppuVar1 + (long)pppppppuVar12);
        bVar6 = pppppppuVar12 == (undefined8 *******)0x0;
        pppppppuVar11 = (undefined8 *******)0x0;
        if (!bVar6) {
          pppppppuVar11 = pppppppuVar12;
        }
        goto LAB_1034db8c4;
      }
      func_0x000107c5ec38();
      pppppppuVar11 = (undefined8 *******)0x0;
      pppppppuVar13 = pppppppuVar12;
      puVar19 = (undefined8 *)0x0;
LAB_1034db8c8:
      func_0x0001018dde30();
    }
  }
  else {
    if (uVar23 == 2) {
      lVar27 = *(long *)(param_6 + 0x10);
      lVar14 = *(long *)(param_6 + 0x18);
      pppppppuVar11 = pppppppuVar10;
      func_0x000107c5ec30();
      pppppppuVar13 = pppppppuVar11;
      if (pppppppuVar11 != (undefined8 *******)0x0) {
        func_0x000107c5ec3c();
        if (SBORROW8(lVar27,(long)pppppppuVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbcb4);
          (*pcVar5)();
        }
        pppppppuVar11 = (undefined8 *******)((lVar27 - (long)pppppppuVar13) + (long)pppppppuVar11);
      }
      pppppppuVar12 = (undefined8 *******)(lVar14 - lVar27);
      if (SBORROW8(lVar14,lVar27)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dbcb0);
        (*pcVar5)();
      }
      func_0x000107c5ec38();
      pppppppuVar1 = pppppppuVar13;
      if ((long)pppppppuVar12 <= (long)pppppppuVar13) {
        pppppppuVar1 = pppppppuVar12;
      }
      puVar24 = (undefined8 *)((long)pppppppuVar1 + (long)pppppppuVar11);
      bVar6 = pppppppuVar11 == (undefined8 *******)0x0;
LAB_1034db8c4:
      puVar19 = (undefined8 *)0x0;
      if (!bVar6) {
        puVar19 = puVar24;
      }
      goto LAB_1034db8c8;
    }
    func_0x0001018dde30();
    uStack_d8._0_1_ = 0;
    uStack_d8._1_1_ = 0;
    uStack_d8._2_1_ = 0;
    uStack_d8._3_1_ = 0;
    uStack_d8._4_1_ = 0;
    uStack_d8._5_1_ = 0;
    uStack_d8._6_1_ = 0;
    uStack_d8._7_1_ = 0;
    uStack_d0 = 0;
    uStack_cf = 0;
    uStack_ce = 0;
    uStack_cd = 0;
    uStack_cc = 0;
    uStack_cb = 0;
    pppppppuVar11 = (undefined8 *******)&uStack_d8;
    puVar19 = &uStack_d8;
  }
  func_0x00010006ae80(pppppppuVar11,puVar19,&pppppppuStack_b0,0,100,0,&UNK_11065d640,pppppppuVar13);
  pppppppuVar13 = &pppppppuStack_b0;
  FUN_1034e04a0(pppppppuVar13,0x112d49548,&UNK_10d90fde0);
  pppppppuStack_b0 = (undefined8 *******)ppppppuVar7;
  uStack_a8 = uVar17;
  puStack_a0 = (undefined *)lVar22;
  func_0x0001018dde30();
  puVar20 = &UNK_11065d640;
  lVar14 = 0;
  func_0x000104581358(0,&UNK_11065d640,pppppppuVar13);
  puVar21 = &UNK_11065d640;
  uVar15 = 0;
  pppppppuStack_b0 = pppppppuVar10;
  uStack_a8 = uVar18;
  puStack_a0 = puVar16;
  func_0x000104581358(0,&UNK_11065d640,pppppppuVar13);
  FUN_1034dc37c(param_2,param_3,lVar14,puVar20,param_10);
  func_0x000107c6142c(puVar20);
  FUN_1034dc37c(param_2,param_3,uVar15,puVar21,param_10);
  func_0x000107c6142c(puVar21);
  pppppppuStack_b0 = (undefined8 *******)0x0;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  uStack_98 = CONCAT71(uStack_98._1_7_,param_9);
  lVar27 = lVar14;
  puStack_a0 = (undefined *)param_8;
  FUN_1034dc74c(param_2,param_3,lVar14,uVar15,0,0xe000000000000000,&pppppppuStack_b0,param_10);
  func_0x000107c6071c();
  lVar25 = *(long *)(lVar27 + 0x10);
  func_0x00010006c090(ppppppuVar7,uVar17);
  func_0x000107c61574(lVar22);
  func_0x00010006c090(pppppppuVar10,uVar18);
  func_0x000107c6142c(lVar14);
  func_0x000107c6142c(uVar15);
  func_0x000107c61574(puVar16);
  *(bool *)param_1 = lVar25 == 0;
  *(long *)(param_1 + 8) = lVar27;
  *(undefined8 *)(param_1 + 0x10) = param_10;
  *(undefined1 *)(param_1 + 0x18) = (undefined1)uStack_a8;
  *(double *)(param_1 + 0x20) = (param_2 - dVar28) * 1000.0;
LAB_1034db970:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112f73890 != (undefined *)0x0) {
    return;
  }
  puVar16 = &UNK_10dbcf2a0;
  func_0x000107c61520(&UNK_10dbcf2a0,&UNK_11065ca08);
  puRam0000000112f73890 = puVar16;
  return;
}



/* Entry: 1034dbcbc; end: 1034dbcfb;  */

void FUN_1034dbcbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf2a0;
  func_0x000107c61520(&UNK_10dbcf2a0,&UNK_11065ca08);
  puRam0000000112f73890 = puVar1;
  return;
}



/* Entry: 1034dbcfc; end: 1034dbd0f;  */

bool FUN_1034dbcfc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1034dbd10; end: 1034dbdbb;  */

void FUN_1034dbd10(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1034dbdbc; end: 1034dbe1b;  */

undefined1  [16] FUN_1034dbdbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0xeb0000000065756c;
  uVar2 = 0x615679636167656c;
  if (cVar3 != '\x01') {
    uVar4 = 0xea00000000006575;
    uVar2 = 0x6c61567466697773;
  }
  uVar1 = 0x68746170;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 1034dbe1c; end: 1034dbe3f;  */

void FUN_1034dbe1c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1034df958();
  *param_1 = param_2;
  return;
}



/* Entry: 1034dbe40; end: 1034dbe57;  */

undefined1  [16] FUN_1034dbe40(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1034dbe58; end: 1034dbea7;  */

void FUN_1034dbe58(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1034df234();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1034dbea8; end: 1034dbff3;  */

void FUN_1034dbea8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [13];
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112f73898;
  func_0x0001000285a8(0x112f73898,&UNK_10dbcf1f0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_1034df234();
  func_0x000107c606ec(puVar4,&UNK_11065ca98,&UNK_11065ca98,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c6053c(unaff_x20[4],unaff_x20[5],&uStack_53,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 1034dbff4; end: 1034dc033;  */

void FUN_1034dbff4(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1034dfa78(&uStack_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = uStack_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = uStack_30;
  }
  return;
}



/* Entry: 1034dc034; end: 1034dc08b;  */

void FUN_1034dc034(void)

{
  FUN_1034dbea8();
  return;
}



/* Entry: 1034dc08c; end: 1034dc19f;  */

undefined8 FUN_1034dc08c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == *(long *)(param_2 + 0x10)) {
    if ((lVar13 != 0) && (param_1 != param_2)) {
      lVar14 = 0;
      do {
        lVar1 = param_1 + lVar14;
        uVar9 = *(ulong *)(lVar1 + 0x20);
        uVar10 = *(ulong *)(lVar1 + 0x30);
        lVar5 = *(long *)(lVar1 + 0x38);
        uVar11 = *(ulong *)(lVar1 + 0x40);
        lVar6 = *(long *)(lVar1 + 0x48);
        lVar2 = param_2 + lVar14;
        uVar3 = *(ulong *)(lVar2 + 0x30);
        lVar7 = *(long *)(lVar2 + 0x38);
        uVar4 = *(ulong *)(lVar2 + 0x40);
        lVar8 = *(long *)(lVar2 + 0x48);
        if ((((uVar9 != *(ulong *)(lVar2 + 0x20) ||
               *(long *)(lVar1 + 0x28) != *(long *)(lVar2 + 0x28)) &&
             (func_0x000107c605b8(), (uVar9 & 1) == 0)) ||
            ((uVar10 != uVar3 || lVar5 != lVar7 &&
             (func_0x000107c605b8(uVar10,lVar5,uVar3,lVar7,0), (uVar10 & 1) == 0)))) ||
           ((uVar11 != uVar4 || lVar6 != lVar8 &&
            (func_0x000107c605b8(uVar11,lVar6,uVar4,lVar8,0), (uVar11 & 1) == 0))))
        goto LAB_1034dc174;
        lVar14 = lVar14 + 0x30;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
    uVar12 = 1;
  }
  else {
LAB_1034dc174:
    uVar12 = 0;
  }
  return uVar12;
}



/* Entry: 1034dc1a0; end: 1034dc21b;  */

uint FUN_1034dc1a0(char *param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  dVar6 = *(double *)(param_2 + 0x20);
  dVar7 = *(double *)(param_1 + 0x20);
  bVar3 = param_2[0x18];
  lVar1 = *(long *)(param_2 + 0x10);
  bVar4 = param_1[0x18];
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_1034dc08c(uVar5,*(undefined8 *)(param_2 + 8));
  return (uint)(dVar7 == dVar6) &
         (((uint)(lVar2 != lVar1) | (uint)uVar5 ^ 0xffffffff | (uint)(bVar3 ^ bVar4)) ^ 0xffffffff);
}



/* Entry: 1034dc21c; end: 1034dc353;  */

undefined1  [16] FUN_1034dc21c(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  ulong uStack_38;
  
  if (param_3 == '\0') {
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    func_0x000107c602fc(0x25);
    func_0x000107c6142c(uStack_38);
    uStack_40 = 0xd000000000000023;
    uStack_38 = 0x800000010f154ac0;
    func_0x000107c614cc(param_1,auStack_48,auStack_60);
    uVar3 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
  }
  else {
    if (param_3 == '\x01') {
      uStack_40 = 0;
      uStack_38 = 0xe000000000000000;
      func_0x000107c602fc(0x18);
      func_0x000107c6142c(uStack_38);
      pcVar1 = "Failed to parse JSON: ";
      uStack_40 = 0xd000000000000016;
    }
    else {
      uStack_40 = 0;
      uStack_38 = 0xe000000000000000;
      func_0x000107c602fc(0x1c);
      func_0x000107c6142c(uStack_38);
      pcVar1 = "Failed to normalize JSON: ";
      uStack_40 = 0xd00000000000001a;
    }
    uStack_38 = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
    func_0x000107c5fb78(param_1,param_2);
  }
  auVar2._8_8_ = uStack_38;
  auVar2._0_8_ = uStack_40;
  return auVar2;
}



/* Entry: 1034dc354; end: 1034dc37b;  */

void FUN_1034dc354(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1034dc37c; end: 1034dc74b;  */

/* WARNING: Removing unreachable block (ram,0x0001034dd528) */
/* WARNING: Type propagation algorithm not settling */

undefined8 *******
FUN_1034dc37c(undefined8 param_1,undefined8 param_2,undefined8 *******param_3,undefined8 param_4,
             undefined8 *******param_5,undefined8 param_6,undefined8 *******param_7,
             undefined8 param_8)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *******pppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  undefined8 *******pppppppuVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  long lVar15;
  long extraout_x8;
  undefined8 ******ppppppuVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 *******unaff_x21;
  undefined *puVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 ******ppppppuVar25;
  long lVar26;
  ulong uVar27;
  undefined8 unaff_x27;
  ulong uVar28;
  undefined8 unaff_x28;
  ulong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long alStack_258 [11];
  undefined8 auStack_200 [4];
  long alStack_1e0 [4];
  ulong auStack_1c0 [4];
  long alStack_1a0 [4];
  undefined8 auStack_180 [4];
  ulong auStack_160 [22];
  undefined8 *******pppppppuStack_b0;
  undefined1 auStack_a8 [24];
  long lStack_90;
  undefined8 *******pppppppuStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = 0;
  uVar30 = param_1;
  uVar31 = param_2;
  func_0x000107c5fb10();
  lVar26 = *(long *)(lVar3 + -8);
  lVar15 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pppppppuVar7 = (undefined8 *******)((long)&pppppppuStack_b0 + lVar1);
  pppppppuStack_88 = param_3;
  uStack_80 = param_4;
  func_0x000107c5fb04(pppppppuVar7);
  func_0x000100e8b654();
  pppppppuVar12 = (undefined8 *******)0x0;
  pppppppuVar4 = pppppppuVar7;
  func_0x000107c60214(pppppppuVar7,0,PTR___sSSN_11034da80,lVar15);
  pppppppuVar5 = pppppppuVar7;
  (**(code **)(lVar26 + 8))(pppppppuVar7,lVar3);
  if (0xe < (ulong)pppppppuVar12 >> 0x3c) {
    pppppppuVar12 = (undefined8 *******)0x800000010f154af0;
    FUN_1034dbcbc();
    unaff_x21 = (undefined8 *******)&UNK_11065ca08;
    pppppppuVar14 = (undefined8 *******)0x0;
    lVar15 = 0;
    func_0x000107c613f8();
    *pppppppuVar5 = (undefined8 ******)0xd000000000000014;
    pppppppuVar5[1] = (undefined8 ******)0x800000010f154af0;
    *(undefined1 *)(pppppppuVar5 + 2) = 1;
    pppppppuVar9 = unaff_x21;
    func_0x000107c61654();
    goto LAB_1034dc640;
  }
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  pppppppuVar7 = pppppppuVar4;
  func_0x000107c5ee20(pppppppuVar4,pppppppuVar12);
  pppppppuStack_88 = (undefined8 *******)0x0;
  param_7 = &pppppppuStack_88;
  lVar15 = 0;
  pppppppuVar14 = pppppppuVar7;
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(pppppppuVar7);
  pppppppuVar5 = pppppppuStack_88;
  if (puVar6 == (undefined *)0x0) {
    param_5 = pppppppuStack_88;
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(param_5);
    lVar3 = 0;
    unaff_x21 = pppppppuVar5;
  }
  else {
    func_0x000107c61174();
    func_0x000107c60234(&pppppppuStack_88,puVar6);
    func_0x000107c615e8(puVar6);
    lVar3 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    pppppppuVar7 = (undefined8 *******)PTR___sypN_11034f1a8;
    puVar8 = (undefined8 *)auStack_a8;
    param_7 = (undefined8 *******)0x6;
    lVar15 = lVar3;
    func_0x000107c6147c(puVar8,&pppppppuStack_88,PTR___sypN_11034f1a8 + 8);
    if ((int)puVar8 != 0) {
      uVar30 = param_1;
      uVar31 = param_2;
      lStack_90 = lVar3;
      func_0x0001034dd534(&pppppppuStack_88,param_1,param_2,auStack_a8,param_5);
      FUN_1034e0480(auStack_a8);
      if (lStack_70 == 0) {
        param_5 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100214a84();
        func_0x0001000b44c0(pppppppuVar4,pppppppuVar12);
LAB_1034dc69c:
        pppppppuVar5 = (undefined8 *******)0x112d387f8;
        pppppppuVar14 = (undefined8 *******)&UNK_10d902650;
        pppppppuVar9 = &pppppppuStack_88;
        FUN_1034e04a0();
      }
      else {
        func_0x000100672b50(&pppppppuStack_88,auStack_a8);
        if (lStack_90 == 0) {
          pppppppuVar5 = (undefined8 *******)auStack_a8;
          FUN_1034e04a0(pppppppuVar5,0x112d387f8,&UNK_10d902650);
        }
        else {
          pppppppuVar5 = &pppppppuStack_b0;
          param_7 = (undefined8 *******)0x6;
          lVar15 = lVar3;
          func_0x000107c6147c(pppppppuVar5,auStack_a8,(undefined *)((long)pppppppuVar7 + 8));
          if (((ulong)pppppppuVar5 & 1) != 0) {
            func_0x0001000b44c0(pppppppuVar4,pppppppuVar12);
            param_5 = pppppppuStack_b0;
            goto LAB_1034dc69c;
          }
        }
        param_5 = (undefined8 *******)0x800000010f154b30;
        FUN_1034dbcbc();
        unaff_x21 = (undefined8 *******)&UNK_11065ca08;
        lVar15 = 0;
        func_0x000107c613f8(&UNK_11065ca08,pppppppuVar5,0);
        *pppppppuVar5 = (undefined8 ******)0xd00000000000002c;
        pppppppuVar5[1] = (undefined8 ******)0x800000010f154b30;
        *(undefined1 *)(pppppppuVar5 + 2) = 2;
        func_0x000107c61654();
        func_0x0001000b44c0(pppppppuVar4,pppppppuVar12);
        pppppppuVar5 = (undefined8 *******)0x112d387f8;
        pppppppuVar14 = (undefined8 *******)&UNK_10d902650;
        pppppppuVar9 = &pppppppuStack_88;
        FUN_1034e04a0();
      }
      goto LAB_1034dc640;
    }
    param_5 = (undefined8 *******)0x800000010f154b10;
    FUN_1034dbcbc();
    unaff_x21 = (undefined8 *******)&UNK_11065ca08;
    pppppppuVar14 = (undefined8 *******)0x0;
    lVar15 = 0;
    func_0x000107c613f8();
    *puVar8 = 0xd000000000000018;
    puVar8[1] = 0x800000010f154b10;
    *(undefined1 *)(puVar8 + 2) = 1;
  }
  func_0x000107c61654();
  pppppppuVar9 = pppppppuVar4;
  pppppppuVar5 = pppppppuVar12;
  func_0x0001000b44c0();
LAB_1034dc640:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_5;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x40) = param_1;
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x48) = param_2;
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x50) = unaff_x28;
  *(undefined8 *)((long)auStack_160 + lVar1 + 0x58) = unaff_x27;
  *(long *)((long)auStack_160 + lVar1 + 0x60) = lVar26;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x68) = pppppppuVar7;
  *(long *)((long)auStack_160 + lVar1 + 0x70) = lVar3;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x78) = param_5;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x80) = pppppppuVar4;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x88) = unaff_x21;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x90) = pppppppuVar12;
  *(undefined8 ********)((long)auStack_160 + lVar1 + 0x98) = unaff_x21;
  *(undefined1 **)((long)auStack_160 + lVar1 + 0xa0) = &stack0xfffffffffffffff0;
  *(code **)((long)auStack_160 + lVar1 + 0xa8) = FUN_1034dc74c;
  *(long *)((long)alStack_258 + lVar1 + 0x20) = lVar15;
  *(undefined8 *)((long)alStack_258 + lVar1 + 0x28) = param_8;
  *(undefined8 ********)((long)alStack_258 + lVar1 + 0x18) = pppppppuVar14;
  *(undefined **)((long)auStack_160 + lVar1 + 0x30) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(char *)(param_7 + 3) == '\x01') ||
     (pppppppuVar7 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8,
     (long)*param_7 < (long)param_7[2])) {
    func_0x000107c61434();
    *(undefined8 ********)((long)alStack_258 + lVar1 + 0x48) = pppppppuVar9;
    FUN_1034ddce0();
    *(undefined8 ********)((long)auStack_1c0 + lVar1) = pppppppuVar9;
    func_0x000107c61434(pppppppuVar5);
    *(undefined8 ********)((long)alStack_258 + lVar1 + 0x30) = pppppppuVar5;
    FUN_1034ded34();
    lVar3 = *(long *)((long)auStack_1c0 + lVar1);
    puVar22 = *(undefined **)(lVar3 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar22 != (undefined *)0x0) {
      func_0x000107c61434(lVar3);
      puVar6 = puVar22;
      FUN_1034decbc(puVar22,0,0x112d38280,&UNK_10d901fc0);
      puVar10 = (undefined *)((long)auStack_1c0 + lVar1);
      func_0x00010109b930(puVar10,puVar6 + 0x20,puVar22,lVar3);
      func_0x000100d54abc(*(undefined8 *)((long)auStack_1c0 + lVar1),
                          *(undefined8 *)((long)auStack_1c0 + lVar1 + 8),
                          *(undefined8 *)((long)auStack_1c0 + lVar1 + 0x10),
                          *(undefined8 *)((long)auStack_1c0 + lVar1 + 0x18),
                          *(undefined8 *)((long)alStack_1a0 + lVar1));
      if (puVar10 != puVar22) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dc83c);
        (*pcVar2)();
      }
    }
    *(undefined **)((long)auStack_1c0 + lVar1) = puVar6;
    func_0x000101b7c750((long)auStack_1c0 + lVar1);
    func_0x000107c6142c(lVar3);
    lVar3 = *(long *)((long)auStack_1c0 + lVar1);
    *(long *)((long)alStack_258 + lVar1 + 0x50) = lVar3;
    lVar3 = *(long *)(lVar3 + 0x10);
    lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
    *(long *)((long)alStack_258 + lVar1 + 0x40) = lVar3;
    if (lVar3 != 0) {
      uVar27 = 0;
      uVar11 = *(ulong *)((long)alStack_258 + lVar1 + 0x20);
      uVar24 = *(ulong *)((long)alStack_258 + lVar1 + 0x18) & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar24 = uVar11 >> 0x38 & 0xf;
      }
      *(ulong *)((long)alStack_258 + lVar1 + 0x38) = uVar24;
      puVar19 = (ulong *)(*(long *)((long)alStack_258 + lVar1 + 0x50) + 0x28);
      *(undefined8 ********)((long)alStack_258 + lVar1 + 0x10) = param_7;
      do {
        if (*(ulong *)(*(long *)((long)alStack_258 + lVar1 + 0x50) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4dc);
          (*pcVar2)();
        }
        uVar24 = puVar19[-1];
        uVar11 = *puVar19;
        ppppppuVar25 = *param_7;
        if ((*(char *)(param_7 + 3) != '\x01') && ((long)param_7[2] <= (long)ppppppuVar25)) {
          func_0x000107c61574(*(undefined8 *)((long)alStack_258 + lVar1 + 0x50));
          *(undefined1 *)(param_7 + 1) = 1;
          goto LAB_1034dd4b0;
        }
        if (*(long *)((long)alStack_258 + lVar1 + 0x38) == 0) {
          func_0x000107c61438(uVar11,2);
          uVar28 = uVar11;
          uVar29 = uVar24;
        }
        else {
          uVar18 = *(undefined8 *)((long)alStack_258 + lVar1 + 0x20);
          *(undefined8 *)((long)auStack_1c0 + lVar1) =
               *(undefined8 *)((long)alStack_258 + lVar1 + 0x18);
          *(undefined8 *)((long)auStack_1c0 + lVar1 + 8) = uVar18;
          func_0x000107c61434(uVar11);
          func_0x000107c61434(uVar18);
          func_0x000107c5fb78(0x2e,0xe100000000000000);
          func_0x000107c5fb78(uVar24,uVar11);
          uVar28 = *(ulong *)((long)auStack_1c0 + lVar1 + 8);
          uVar29 = *(ulong *)((long)auStack_1c0 + lVar1);
        }
        lVar3 = *(long *)((long)alStack_258 + lVar1 + 0x48);
        if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1034dc9a0:
          *(undefined8 *)((long)auStack_160 + lVar1 + 8) = 0;
          *(undefined8 *)((long)auStack_160 + lVar1) = 0;
          *(undefined8 *)((long)auStack_160 + lVar1 + 0x18) = 0;
          *(undefined8 *)((long)auStack_160 + lVar1 + 0x10) = 0;
          if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1034dc9f8;
LAB_1034dc9b0:
          func_0x000107c61434(lVar15);
          uVar21 = uVar11;
          func_0x000100029284(uVar24);
          if ((uVar21 & 1) == 0) {
            func_0x000107c6142c(lVar15);
            goto LAB_1034dc9f8;
          }
          func_0x0001000bb420(*(long *)(lVar15 + 0x38) + uVar24 * 0x20,(long)auStack_180 + lVar1);
          func_0x000107c6142c(lVar15);
          func_0x000107c6142c(uVar11);
        }
        else {
          func_0x000107c61434(lVar3);
          uVar21 = uVar24;
          uVar13 = uVar11;
          func_0x000100029284(uVar24);
          if ((uVar13 & 1) == 0) {
            func_0x000107c6142c(lVar3);
            goto LAB_1034dc9a0;
          }
          func_0x0001000bb420(*(long *)(lVar3 + 0x38) + uVar21 * 0x20,(long)auStack_160 + lVar1);
          func_0x000107c6142c(lVar3);
          if (*(long *)(lVar15 + 0x10) != 0) goto LAB_1034dc9b0;
LAB_1034dc9f8:
          func_0x000107c6142c(uVar11);
          *(undefined8 *)((long)auStack_180 + lVar1 + 8) = 0;
          *(undefined8 *)((long)auStack_180 + lVar1) = 0;
          *(undefined8 *)((long)auStack_180 + lVar1 + 0x18) = 0;
          *(undefined8 *)((long)auStack_180 + lVar1 + 0x10) = 0;
        }
        func_0x000100672b50((long)auStack_160 + lVar1,(long)auStack_1c0 + lVar1);
        func_0x000100672b50((long)auStack_180 + lVar1,(long)alStack_1a0 + lVar1);
        lVar3 = *(long *)((long)alStack_1a0 + lVar1 + 0x18);
        if (*(long *)((long)auStack_1c0 + lVar1 + 0x18) == 0) {
          if (lVar3 == 0) {
            func_0x000107c6142c(uVar28);
            FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
          }
          else {
            uVar18 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar6 = PTR___sypN_11034f1a8;
            lVar3 = (long)alStack_1e0 + lVar1;
            func_0x000107c6147c(lVar3,(long)alStack_1a0 + lVar1,PTR___sypN_11034f1a8 + 8,uVar18,0);
            if ((int)lVar3 == 0) {
              uVar18 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              lVar3 = (long)alStack_1e0 + lVar1;
              func_0x000107c6147c(lVar3,(long)alStack_1a0 + lVar1,puVar6 + 8,uVar18,0);
              if ((int)lVar3 == 0) {
                lVar3 = (long)alStack_1e0 + lVar1;
                func_0x000100102924((long)alStack_1a0 + lVar1);
                lVar15 = (long)alStack_1e0 + lVar1;
                FUN_1034df55c();
                uVar21 = *(ulong *)((long)auStack_160 + lVar1 + 0x30);
                uVar24 = uVar21;
                func_0x000107c61558();
                uVar11 = uVar21;
                if ((uVar24 & 1) == 0) {
                  uVar11 = 0;
                  FUN_1034d8e34(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
                }
                uVar24 = *(ulong *)(uVar11 + 0x10);
                uVar21 = uVar11;
                if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar24) {
                  uVar21 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
                  FUN_1034d8e34(uVar21,uVar24 + 1,1,uVar11);
                }
                *(ulong *)(uVar21 + 0x10) = uVar24 + 1;
                lVar26 = uVar21 + uVar24 * 0x30;
                *(ulong *)(lVar26 + 0x20) = uVar29;
                *(ulong *)(lVar26 + 0x28) = uVar28;
                *(undefined8 *)(lVar26 + 0x30) = 0x6c6c756e;
                *(undefined8 *)(lVar26 + 0x38) = 0xe400000000000000;
                *(long *)(lVar26 + 0x40) = lVar15;
                *(long *)(lVar26 + 0x48) = lVar3;
                FUN_1034e0480((long)alStack_1e0 + lVar1);
                FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
                *(ulong *)((long)auStack_160 + lVar1 + 0x30) = uVar21;
                ppppppuVar16 = (undefined8 ******)((long)ppppppuVar25 + 1);
                if (SCARRY8((long)ppppppuVar25,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd508);
                  (*pcVar2)();
                }
                goto LAB_1034dc8a4;
              }
              uVar18 = *(undefined8 *)((long)alStack_1e0 + lVar1);
              puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
              FUN_1034dde14(uVar30,uVar31,PTR___swiftEmptyArrayStorage_11034f1c8,uVar18,uVar29,
                            uVar28,param_7,*(undefined8 *)((long)alStack_258 + lVar1 + 0x28));
              func_0x000107c6142c(uVar28);
              func_0x000107c6142c(uVar18);
              uVar24 = *(ulong *)(puVar6 + 0x10);
              lVar3 = *(long *)((long)auStack_160 + lVar1 + 0x30);
              lVar15 = *(long *)(lVar3 + 0x10);
              if (SCARRY8(lVar15,uVar24)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd500);
                (*pcVar2)();
              }
              lVar26 = lVar3;
              func_0x000107c61558();
              if (((int)lVar26 == 0) ||
                 (uVar11 = *(ulong *)(lVar3 + 0x18) >> 1, (long)uVar11 < (long)(lVar15 + uVar24))) {
                FUN_1034d8e34();
                uVar11 = *(ulong *)(lVar26 + 0x18) >> 1;
                lVar3 = lVar26;
              }
              lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
              if (*(long *)(puVar6 + 0x10) == 0) {
                func_0x000107c6142c(puVar6);
                lVar26 = (long)auStack_1c0 + lVar1;
                if (uVar24 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd50c);
                  (*pcVar2)();
                }
              }
              else {
                if (uVar11 - *(long *)(lVar3 + 0x10) < uVar24) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd520);
                  (*pcVar2)();
                }
                func_0x000107c6140c(lVar3 + *(long *)(lVar3 + 0x10) * 0x30 + 0x20,puVar6 + 0x20,
                                    uVar24,&UNK_11065c8d8);
                func_0x000107c6142c(puVar6);
                lVar26 = (long)auStack_1c0 + lVar1;
                if (uVar24 != 0) {
                  lVar17 = *(long *)(lVar3 + 0x10) + uVar24;
                  if (SCARRY8(*(long *)(lVar3 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd528);
                    (*pcVar2)();
                  }
                  goto LAB_1034dce48;
                }
              }
            }
            else {
              uVar18 = *(undefined8 *)((long)alStack_1e0 + lVar1);
              puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
              FUN_1034dc74c(uVar30,uVar31,PTR___swiftEmptyDictionarySingleton_11034f1d0,uVar18,
                            uVar29,uVar28,param_7,*(undefined8 *)((long)alStack_258 + lVar1 + 0x28))
              ;
              func_0x000107c6142c(uVar28);
              func_0x000107c6142c(uVar18);
              uVar24 = *(ulong *)(puVar6 + 0x10);
              lVar3 = *(long *)((long)auStack_160 + lVar1 + 0x30);
              lVar15 = *(long *)(lVar3 + 0x10);
              if (SCARRY8(lVar15,uVar24)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4e0);
                (*pcVar2)();
              }
              lVar26 = lVar3;
              func_0x000107c61558();
              if (((int)lVar26 == 0) ||
                 (uVar11 = *(ulong *)(lVar3 + 0x18) >> 1, (long)uVar11 < (long)(lVar15 + uVar24))) {
                FUN_1034d8e34();
                uVar11 = *(ulong *)(lVar26 + 0x18) >> 1;
                lVar3 = lVar26;
              }
              lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
              if (*(long *)(puVar6 + 0x10) == 0) {
                func_0x000107c6142c(puVar6);
                lVar26 = (long)auStack_1c0 + lVar1;
                if (uVar24 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4e8);
                  (*pcVar2)();
                }
              }
              else {
                if (uVar11 - *(long *)(lVar3 + 0x10) < uVar24) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4f4);
                  (*pcVar2)();
                }
                func_0x000107c6140c(lVar3 + *(long *)(lVar3 + 0x10) * 0x30 + 0x20,puVar6 + 0x20,
                                    uVar24,&UNK_11065c8d8);
                func_0x000107c6142c(puVar6);
                lVar26 = (long)auStack_1c0 + lVar1;
                if (uVar24 != 0) {
                  lVar17 = *(long *)(lVar3 + 0x10) + uVar24;
                  if (SCARRY8(*(long *)(lVar3 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd514);
                    (*pcVar2)();
                  }
LAB_1034dce48:
                  *(long *)(lVar3 + 0x10) = lVar17;
                }
              }
            }
            *(long *)((long)auStack_160 + lVar1 + 0x30) = lVar3;
            FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
            FUN_1034e0480(lVar26 + 0x20);
          }
        }
        else {
          uVar18 = 0x112d472a8;
          if (lVar3 == 0) {
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar6 = PTR___sypN_11034f1a8;
            lVar3 = (long)alStack_1e0 + lVar1;
            func_0x000107c6147c(lVar3,(long)auStack_1c0 + lVar1,PTR___sypN_11034f1a8 + 8,uVar18,0);
            if ((int)lVar3 != 0) {
              lVar15 = *(long *)((long)alStack_1e0 + lVar1);
              lVar3 = lVar15;
              FUN_1034dc74c(uVar30,uVar31,lVar15,PTR___swiftEmptyDictionarySingleton_11034f1d0,
                            uVar29,uVar28,param_7,*(undefined8 *)((long)alStack_258 + lVar1 + 0x28))
              ;
              func_0x000107c6142c(uVar28);
              func_0x000107c6142c(lVar15);
              uVar24 = *(ulong *)(lVar3 + 0x10);
              lVar26 = *(long *)((long)auStack_160 + lVar1 + 0x30);
              lVar15 = *(long *)(lVar26 + 0x10);
              if (SCARRY8(lVar15,uVar24)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4e4);
                (*pcVar2)();
              }
              lVar17 = lVar26;
              func_0x000107c61558();
              if (((int)lVar17 == 0) ||
                 (uVar11 = *(ulong *)(lVar26 + 0x18) >> 1, (long)uVar11 < (long)(lVar15 + uVar24)))
              {
                FUN_1034d8e34();
                uVar11 = *(ulong *)(lVar17 + 0x18) >> 1;
                lVar26 = lVar17;
              }
              lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
              if (*(long *)(lVar3 + 0x10) == 0) {
                func_0x000107c6142c(lVar3);
                if (uVar24 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4ec);
                  (*pcVar2)();
                }
              }
              else {
                if (uVar11 - *(long *)(lVar26 + 0x10) < uVar24) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4f8);
                  (*pcVar2)();
                }
                func_0x000107c6140c(lVar26 + *(long *)(lVar26 + 0x10) * 0x30 + 0x20,lVar3 + 0x20,
                                    uVar24,&UNK_11065c8d8);
                func_0x000107c6142c(lVar3);
                if (uVar24 != 0) {
                  lVar3 = *(long *)(lVar26 + 0x10) + uVar24;
                  if (SCARRY8(*(long *)(lVar26 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd518);
                    (*pcVar2)();
                  }
LAB_1034dcf64:
                  *(long *)(lVar26 + 0x10) = lVar3;
                }
              }
LAB_1034dd388:
              *(long *)((long)auStack_160 + lVar1 + 0x30) = lVar26;
              FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
              FUN_1034e0480((long)auStack_1c0 + lVar1);
              goto LAB_1034dc8b0;
            }
            uVar18 = 0x112daafe8;
            func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
            lVar3 = (long)alStack_1e0 + lVar1;
            func_0x000107c6147c(lVar3,(long)auStack_1c0 + lVar1,puVar6 + 8,uVar18,0);
            if ((int)lVar3 != 0) {
              lVar15 = *(long *)((long)alStack_1e0 + lVar1);
              lVar3 = lVar15;
              FUN_1034dde14(uVar30,uVar31,lVar15,PTR___swiftEmptyArrayStorage_11034f1c8,uVar29,
                            uVar28,param_7,*(undefined8 *)((long)alStack_258 + lVar1 + 0x28));
              func_0x000107c6142c(uVar28);
              func_0x000107c6142c(lVar15);
              uVar24 = *(ulong *)(lVar3 + 0x10);
              lVar26 = *(long *)((long)auStack_160 + lVar1 + 0x30);
              lVar15 = *(long *)(lVar26 + 0x10);
              if (SCARRY8(lVar15,uVar24)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd504);
                (*pcVar2)();
              }
              lVar17 = lVar26;
              func_0x000107c61558();
              if (((int)lVar17 == 0) ||
                 (uVar11 = *(ulong *)(lVar26 + 0x18) >> 1, (long)uVar11 < (long)(lVar15 + uVar24)))
              {
                FUN_1034d8e34();
                uVar11 = *(ulong *)(lVar17 + 0x18) >> 1;
                lVar26 = lVar17;
              }
              lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
              if (*(long *)(lVar3 + 0x10) == 0) {
                func_0x000107c6142c(lVar3);
                if (uVar24 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd510);
                  (*pcVar2)();
                }
              }
              else {
                if (uVar11 - *(long *)(lVar26 + 0x10) < uVar24) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd51c);
                  (*pcVar2)();
                }
                func_0x000107c6140c(lVar26 + *(long *)(lVar26 + 0x10) * 0x30 + 0x20,lVar3 + 0x20,
                                    uVar24,&UNK_11065c8d8);
                func_0x000107c6142c(lVar3);
                if (uVar24 != 0) {
                  lVar3 = *(long *)(lVar26 + 0x10) + uVar24;
                  if (SCARRY8(*(long *)(lVar26 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd524);
                    (*pcVar2)();
                  }
                  goto LAB_1034dcf64;
                }
              }
              goto LAB_1034dd388;
            }
            lVar3 = (long)alStack_1e0 + lVar1;
            func_0x000100102924((long)auStack_1c0 + lVar1);
            lVar15 = (long)alStack_1e0 + lVar1;
            FUN_1034df55c();
            uVar21 = *(ulong *)((long)auStack_160 + lVar1 + 0x30);
            uVar24 = uVar21;
            func_0x000107c61558();
            uVar11 = uVar21;
            if ((uVar24 & 1) == 0) {
              uVar11 = 0;
              FUN_1034d8e34(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
            }
            uVar24 = *(ulong *)(uVar11 + 0x10);
            uVar21 = uVar11;
            if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar24) {
              uVar21 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
              FUN_1034d8e34(uVar21,uVar24 + 1,1,uVar11);
            }
            *(ulong *)(uVar21 + 0x10) = uVar24 + 1;
            lVar26 = uVar21 + uVar24 * 0x30;
            *(ulong *)(lVar26 + 0x20) = uVar29;
            *(ulong *)(lVar26 + 0x28) = uVar28;
            *(long *)(lVar26 + 0x30) = lVar15;
            *(long *)(lVar26 + 0x38) = lVar3;
            *(undefined8 *)(lVar26 + 0x40) = 0x6c6c756e;
            *(undefined8 *)(lVar26 + 0x48) = 0xe400000000000000;
            FUN_1034e0480((long)alStack_1e0 + lVar1);
            FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
            *(ulong *)((long)auStack_160 + lVar1 + 0x30) = uVar21;
            ppppppuVar16 = (undefined8 ******)((long)ppppppuVar25 + 1);
            if (SCARRY8((long)ppppppuVar25,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4fc);
              (*pcVar2)();
            }
LAB_1034dc8a4:
            param_7 = *(undefined8 ********)((long)alStack_258 + lVar1 + 0x10);
            *param_7 = ppppppuVar16;
          }
          else {
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar6 = PTR___sypN_11034f1a8;
            lVar3 = (long)alStack_1e0 + lVar1;
            func_0x000107c6147c(lVar3,(long)auStack_1c0 + lVar1,PTR___sypN_11034f1a8 + 8,uVar18,0);
            if ((int)lVar3 == 0) {
LAB_1034dcf74:
              uVar18 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              lVar3 = (long)alStack_1e0 + lVar1;
              func_0x000107c6147c(lVar3,(long)auStack_1c0 + lVar1,puVar6 + 8,uVar18,0);
              if ((int)lVar3 != 0) {
                uVar20 = *(undefined8 *)((long)alStack_1e0 + lVar1);
                lVar3 = (long)auStack_200 + lVar1;
                func_0x000107c6147c(lVar3,(long)alStack_1a0 + lVar1,PTR___sypN_11034f1a8 + 8,uVar18,
                                    0);
                if ((int)lVar3 != 0) {
                  uVar23 = *(undefined8 *)((long)auStack_200 + lVar1);
                  uVar18 = uVar20;
                  FUN_1034dde14(uVar30,uVar31,uVar20,uVar23,uVar29,uVar28,param_7,
                                *(undefined8 *)((long)alStack_258 + lVar1 + 0x28));
                  goto LAB_1034dcff8;
                }
                func_0x000107c6142c(uVar20);
              }
              func_0x000100102924((long)auStack_1c0 + lVar1,(long)alStack_1e0 + lVar1);
              func_0x000100102924((long)alStack_1a0 + lVar1,(long)auStack_200 + lVar1);
              uVar24 = (long)alStack_1e0 + lVar1;
              lVar3 = (long)auStack_200 + lVar1;
              FUN_1034de7f8(uVar30,uVar31,uVar24,lVar3,
                            *(undefined8 *)((long)alStack_258 + lVar1 + 0x28));
              if ((uVar24 & 1) == 0) {
                *(undefined8 *******)((long)alStack_258 + lVar1 + 8) = ppppppuVar25;
                lVar15 = (long)alStack_1e0 + lVar1;
                FUN_1034df55c();
                lVar26 = (long)auStack_200 + lVar1;
                lVar17 = lVar3;
                FUN_1034df55c();
                uVar21 = *(ulong *)((long)auStack_160 + lVar1 + 0x30);
                uVar24 = uVar21;
                func_0x000107c61558();
                *(long *)((long)alStack_258 + lVar1) = lVar17;
                uVar11 = uVar21;
                if ((uVar24 & 1) == 0) {
                  uVar11 = 0;
                  FUN_1034d8e34(0,*(long *)(uVar21 + 0x10) + 1,1,uVar21);
                }
                uVar24 = *(ulong *)(uVar11 + 0x10);
                uVar21 = uVar11;
                if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar24) {
                  uVar21 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
                  FUN_1034d8e34(uVar21,uVar24 + 1,1,uVar11);
                }
                *(ulong *)(uVar21 + 0x10) = uVar24 + 1;
                lVar17 = uVar21 + uVar24 * 0x30;
                *(ulong *)(lVar17 + 0x20) = uVar29;
                *(ulong *)(lVar17 + 0x28) = uVar28;
                *(long *)(lVar17 + 0x30) = lVar15;
                *(long *)(lVar17 + 0x38) = lVar3;
                uVar18 = *(undefined8 *)((long)alStack_258 + lVar1);
                *(long *)(lVar17 + 0x40) = lVar26;
                *(undefined8 *)(lVar17 + 0x48) = uVar18;
                FUN_1034e0480((long)auStack_200 + lVar1);
                FUN_1034e0480((long)alStack_1e0 + lVar1);
                FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
                *(ulong *)((long)auStack_160 + lVar1 + 0x30) = uVar21;
                lVar3 = *(long *)((long)alStack_258 + lVar1 + 8);
                ppppppuVar16 = (undefined8 ******)(lVar3 + 1);
                if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1034dd4f0);
                  (*pcVar2)();
                }
                goto LAB_1034dc8a4;
              }
              func_0x000107c6142c(uVar28);
              FUN_1034e0480((long)auStack_200 + lVar1);
              FUN_1034e0480((long)alStack_1e0 + lVar1);
              FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
            }
            else {
              uVar20 = *(undefined8 *)((long)alStack_1e0 + lVar1);
              lVar3 = (long)auStack_200 + lVar1;
              func_0x000107c6147c(lVar3,(long)alStack_1a0 + lVar1,puVar6 + 8,uVar18,0);
              if ((int)lVar3 == 0) {
                func_0x000107c6142c(uVar20);
                goto LAB_1034dcf74;
              }
              uVar23 = *(undefined8 *)((long)auStack_200 + lVar1);
              uVar18 = uVar20;
              FUN_1034dc74c(uVar30,uVar31,uVar20,uVar23,uVar29,uVar28,param_7,
                            *(undefined8 *)((long)alStack_258 + lVar1 + 0x28));
LAB_1034dcff8:
              func_0x000107c6142c(uVar28);
              func_0x000107c6142c(uVar20);
              func_0x000107c6142c(uVar23);
              FUN_1034dee40(uVar18);
              FUN_1034e04a0((long)auStack_180 + lVar1,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0((long)auStack_160 + lVar1,0x112d387f8,&UNK_10d902650);
              FUN_1034e0480((long)alStack_1a0 + lVar1);
              FUN_1034e0480((long)auStack_1c0 + lVar1);
            }
          }
          lVar15 = *(long *)((long)alStack_258 + lVar1 + 0x30);
        }
LAB_1034dc8b0:
        uVar27 = uVar27 + 1;
        puVar19 = puVar19 + 2;
      } while (*(ulong *)((long)alStack_258 + lVar1 + 0x40) != uVar27);
    }
    func_0x000107c61574(*(undefined8 *)((long)alStack_258 + lVar1 + 0x50));
LAB_1034dd4b0:
    pppppppuVar7 = *(undefined8 ********)((long)auStack_160 + lVar1 + 0x30);
  }
  return pppppppuVar7;
}



/* Entry: 1034dc74c; end: 1034ddcdf;  */

/* WARNING: Removing unreachable block (ram,0x0001034dd528) */

undefined *
FUN_1034dc74c(undefined8 param_1,undefined8 param_2,undefined8 ******param_3,long param_4,
             undefined8 *******param_5,undefined8 ******param_6,long *param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 ******ppppppuVar2;
  code *pcVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *******pppppppuVar5;
  undefined8 *******pppppppuVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 ******ppppppuVar16;
  undefined8 *puVar17;
  undefined8 ******ppppppuVar18;
  ulong uVar19;
  undefined8 *******pppppppuVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 ******ppppppuVar24;
  undefined8 ******ppppppuVar25;
  undefined8 auStack_150 [4];
  long alStack_130 [4];
  undefined8 ******ppppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [3];
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_80;
  
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((char)param_7[3] == '\x01') || (*param_7 < param_7[2])) {
    func_0x000107c61434();
    ppppppuVar4 = param_3;
    FUN_1034ddce0();
    ppppppuStack_110 = ppppppuVar4;
    func_0x000107c61434(param_4);
    FUN_1034ded34();
    ppppppuVar4 = ppppppuStack_110;
    pppppppuVar20 = (undefined8 *******)ppppppuStack_110[2];
    pppppppuVar5 = (undefined8 *******)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (pppppppuVar20 != (undefined8 *******)0x0) {
      func_0x000107c61434(ppppppuStack_110);
      pppppppuVar5 = pppppppuVar20;
      FUN_1034decbc(pppppppuVar20,0,0x112d38280,&UNK_10d901fc0);
      pppppppuVar6 = &ppppppuStack_110;
      func_0x00010109b930(pppppppuVar6,pppppppuVar5 + 4,pppppppuVar20,ppppppuVar4);
      func_0x000100d54abc(ppppppuStack_110,pppppuStack_108,uStack_100,lStack_f8,auStack_f0[0]);
      if (pppppppuVar6 != pppppppuVar20) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dc83c);
        (*pcVar3)();
      }
    }
    ppppppuStack_110 = pppppppuVar5;
    func_0x000101b7c750(&ppppppuStack_110);
    func_0x000107c6142c(ppppppuVar4);
    ppppppuVar4 = ppppppuStack_110;
    ppppppuVar18 = (undefined8 ******)ppppppuStack_110[2];
    if (ppppppuVar18 != (undefined8 ******)0x0) {
      ppppppuVar24 = (undefined8 ******)0x0;
      uVar1 = (ulong)param_5 & 0xffffffffffff;
      if (((ulong)param_6 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)param_6 >> 0x38 & 0xf;
      }
      pppppppuVar5 = (undefined8 *******)(ppppppuStack_110 + 5);
      do {
        if (ppppppuVar4[2] <= ppppppuVar24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4dc);
          (*pcVar3)();
        }
        pppppppuVar20 = (undefined8 *******)pppppppuVar5[-1];
        ppppppuVar2 = *pppppppuVar5;
        lVar23 = *param_7;
        if (((char)param_7[3] != '\x01') && (param_7[2] <= lVar23)) {
          func_0x000107c61574(ppppppuVar4);
          *(undefined1 *)(param_7 + 1) = 1;
          return puStack_80;
        }
        if (uVar1 == 0) {
          func_0x000107c61438(ppppppuVar2,2);
          ppppppuVar25 = ppppppuVar2;
          pppppppuVar6 = pppppppuVar20;
        }
        else {
          ppppppuStack_110 = param_5;
          pppppuStack_108 = param_6;
          func_0x000107c61434(ppppppuVar2);
          func_0x000107c61434(param_6);
          func_0x000107c5fb78(0x2e,0xe100000000000000);
          func_0x000107c5fb78(pppppppuVar20,ppppppuVar2);
          ppppppuVar25 = (undefined8 ******)pppppuStack_108;
          pppppppuVar6 = (undefined8 *******)ppppppuStack_110;
        }
        if (param_3[2] == (undefined8 *****)0x0) {
LAB_1034dc9a0:
          uStack_a8 = 0;
          uStack_b0 = 0;
          uStack_98 = 0;
          uStack_a0 = 0;
          if (*(long *)(param_4 + 0x10) == 0) goto LAB_1034dc9f8;
LAB_1034dc9b0:
          func_0x000107c61434(param_4);
          ppppppuVar16 = ppppppuVar2;
          func_0x000100029284(pppppppuVar20);
          if (((ulong)ppppppuVar16 & 1) == 0) {
            func_0x000107c6142c(param_4);
            goto LAB_1034dc9f8;
          }
          func_0x0001000bb420(*(long *)(param_4 + 0x38) + (long)pppppppuVar20 * 0x20,&uStack_d0);
          func_0x000107c6142c(param_4);
          func_0x000107c6142c(ppppppuVar2);
        }
        else {
          func_0x000107c61434(param_3);
          pppppppuVar7 = pppppppuVar20;
          ppppppuVar16 = ppppppuVar2;
          func_0x000100029284(pppppppuVar20);
          if (((ulong)ppppppuVar16 & 1) == 0) {
            func_0x000107c6142c(param_3);
            goto LAB_1034dc9a0;
          }
          func_0x0001000bb420(param_3[7] + (long)pppppppuVar7 * 4,&uStack_b0);
          func_0x000107c6142c(param_3);
          if (*(long *)(param_4 + 0x10) != 0) goto LAB_1034dc9b0;
LAB_1034dc9f8:
          func_0x000107c6142c(ppppppuVar2);
          uStack_c8 = 0;
          uStack_d0 = 0;
          uStack_b8 = 0;
          uStack_c0 = 0;
        }
        func_0x000100672b50(&uStack_b0,&ppppppuStack_110);
        func_0x000100672b50(&uStack_d0,auStack_f0);
        if (lStack_f8 == 0) {
          if (lStack_d8 == 0) {
            func_0x000107c6142c(ppppppuVar25);
            FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
          }
          else {
            uVar9 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar15 = PTR___sypN_11034f1a8;
            plVar10 = alStack_130;
            func_0x000107c6147c(plVar10,auStack_f0,PTR___sypN_11034f1a8 + 8,uVar9,0);
            lVar21 = alStack_130[0];
            if ((int)plVar10 == 0) {
              uVar9 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              plVar10 = alStack_130;
              func_0x000107c6147c(plVar10,auStack_f0,puVar15 + 8,uVar9,0);
              lVar21 = alStack_130[0];
              if ((int)plVar10 == 0) {
                plVar10 = alStack_130;
                func_0x000100102924(auStack_f0);
                plVar12 = alStack_130;
                FUN_1034df55c();
                puVar15 = puStack_80;
                puVar13 = puStack_80;
                func_0x000107c61558();
                puVar14 = puVar15;
                if (((ulong)puVar13 & 1) == 0) {
                  puVar14 = (undefined *)0x0;
                  FUN_1034d8e34(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
                }
                uVar22 = *(ulong *)(puVar14 + 0x10);
                puVar15 = puVar14;
                if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar22) {
                  puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                  FUN_1034d8e34(puVar15,uVar22 + 1,1,puVar14);
                }
                *(ulong *)(puVar15 + 0x10) = uVar22 + 1;
                *(undefined8 ********)(puVar15 + uVar22 * 0x30 + 0x20) = pppppppuVar6;
                *(undefined8 *******)(puVar15 + uVar22 * 0x30 + 0x28) = ppppppuVar25;
                *(undefined8 *)(puVar15 + uVar22 * 0x30 + 0x30) = 0x6c6c756e;
                *(undefined8 *)(puVar15 + uVar22 * 0x30 + 0x38) = 0xe400000000000000;
                *(long **)(puVar15 + uVar22 * 0x30 + 0x40) = plVar12;
                *(long **)(puVar15 + uVar22 * 0x30 + 0x48) = plVar10;
                FUN_1034e0480(alStack_130);
                FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
                puStack_80 = puVar15;
                if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd508);
                  (*pcVar3)();
                }
                goto LAB_1034dc8a4;
              }
              puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
              FUN_1034dde14(param_1,param_2,PTR___swiftEmptyArrayStorage_11034f1c8,alStack_130[0],
                            pppppppuVar6,ppppppuVar25,param_7,param_8);
              func_0x000107c6142c(ppppppuVar25);
              func_0x000107c6142c(lVar21);
              puVar15 = puStack_80;
              uVar22 = *(ulong *)(puVar13 + 0x10);
              lVar23 = *(long *)(puStack_80 + 0x10);
              if (SCARRY8(lVar23,uVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd500);
                (*pcVar3)();
              }
              puVar14 = puStack_80;
              func_0x000107c61558();
              if (((int)puVar14 == 0) ||
                 (uVar19 = *(ulong *)(puVar15 + 0x18) >> 1, (long)uVar19 < (long)(lVar23 + uVar22)))
              {
                FUN_1034d8e34();
                uVar19 = *(ulong *)(puVar14 + 0x18) >> 1;
                puVar15 = puVar14;
              }
              if (*(long *)(puVar13 + 0x10) == 0) {
                func_0x000107c6142c(puVar13);
                if (uVar22 != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd50c);
                  (*pcVar3)();
                }
              }
              else {
                if (uVar19 - *(long *)(puVar15 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd520);
                  (*pcVar3)();
                }
                func_0x000107c6140c(puVar15 + *(long *)(puVar15 + 0x10) * 0x30 + 0x20,puVar13 + 0x20
                                    ,uVar22,&UNK_11065c8d8);
                func_0x000107c6142c(puVar13);
                if (uVar22 != 0) {
                  lVar23 = *(long *)(puVar15 + 0x10) + uVar22;
                  if (SCARRY8(*(long *)(puVar15 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd528);
                    (*pcVar3)();
                  }
                  goto LAB_1034dce48;
                }
              }
            }
            else {
              puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
              FUN_1034dc74c(param_1,param_2,PTR___swiftEmptyDictionarySingleton_11034f1d0,
                            alStack_130[0],pppppppuVar6,ppppppuVar25,param_7,param_8);
              func_0x000107c6142c(ppppppuVar25);
              func_0x000107c6142c(lVar21);
              puVar15 = puStack_80;
              uVar22 = *(ulong *)(puVar13 + 0x10);
              lVar23 = *(long *)(puStack_80 + 0x10);
              if (SCARRY8(lVar23,uVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4e0);
                (*pcVar3)();
              }
              puVar14 = puStack_80;
              func_0x000107c61558();
              if (((int)puVar14 == 0) ||
                 (uVar19 = *(ulong *)(puVar15 + 0x18) >> 1, (long)uVar19 < (long)(lVar23 + uVar22)))
              {
                FUN_1034d8e34();
                uVar19 = *(ulong *)(puVar14 + 0x18) >> 1;
                puVar15 = puVar14;
              }
              if (*(long *)(puVar13 + 0x10) == 0) {
                func_0x000107c6142c(puVar13);
                if (uVar22 != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4e8);
                  (*pcVar3)();
                }
              }
              else {
                if (uVar19 - *(long *)(puVar15 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4f4);
                  (*pcVar3)();
                }
                func_0x000107c6140c(puVar15 + *(long *)(puVar15 + 0x10) * 0x30 + 0x20,puVar13 + 0x20
                                    ,uVar22,&UNK_11065c8d8);
                func_0x000107c6142c(puVar13);
                if (uVar22 != 0) {
                  lVar23 = *(long *)(puVar15 + 0x10) + uVar22;
                  if (SCARRY8(*(long *)(puVar15 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd514);
                    (*pcVar3)();
                  }
LAB_1034dce48:
                  *(long *)(puVar15 + 0x10) = lVar23;
                }
              }
            }
            puStack_80 = puVar15;
            FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
            FUN_1034e0480(auStack_f0);
          }
        }
        else {
          uVar9 = 0x112d472a8;
          if (lStack_d8 == 0) {
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar15 = PTR___sypN_11034f1a8;
            plVar10 = alStack_130;
            func_0x000107c6147c(plVar10,&ppppppuStack_110,PTR___sypN_11034f1a8 + 8,uVar9,0);
            lVar21 = alStack_130[0];
            if ((int)plVar10 != 0) {
              lVar23 = alStack_130[0];
              FUN_1034dc74c(param_1,param_2,alStack_130[0],
                            PTR___swiftEmptyDictionarySingleton_11034f1d0,pppppppuVar6,ppppppuVar25,
                            param_7,param_8);
              func_0x000107c6142c(ppppppuVar25);
              func_0x000107c6142c(lVar21);
              puVar15 = puStack_80;
              uVar22 = *(ulong *)(lVar23 + 0x10);
              lVar21 = *(long *)(puStack_80 + 0x10);
              if (SCARRY8(lVar21,uVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4e4);
                (*pcVar3)();
              }
              puVar13 = puStack_80;
              func_0x000107c61558();
              if (((int)puVar13 == 0) ||
                 (uVar19 = *(ulong *)(puVar15 + 0x18) >> 1, (long)uVar19 < (long)(lVar21 + uVar22)))
              {
                FUN_1034d8e34();
                uVar19 = *(ulong *)(puVar13 + 0x18) >> 1;
                puVar15 = puVar13;
              }
              if (*(long *)(lVar23 + 0x10) == 0) {
                func_0x000107c6142c(lVar23);
                if (uVar22 != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4ec);
                  (*pcVar3)();
                }
              }
              else {
                if (uVar19 - *(long *)(puVar15 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4f8);
                  (*pcVar3)();
                }
                func_0x000107c6140c(puVar15 + *(long *)(puVar15 + 0x10) * 0x30 + 0x20,lVar23 + 0x20,
                                    uVar22,&UNK_11065c8d8);
                func_0x000107c6142c(lVar23);
                if (uVar22 != 0) {
                  lVar23 = *(long *)(puVar15 + 0x10) + uVar22;
                  if (SCARRY8(*(long *)(puVar15 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd518);
                    (*pcVar3)();
                  }
LAB_1034dcf64:
                  *(long *)(puVar15 + 0x10) = lVar23;
                }
              }
LAB_1034dd388:
              puStack_80 = puVar15;
              FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
              FUN_1034e0480(&ppppppuStack_110);
              goto LAB_1034dc8b0;
            }
            uVar9 = 0x112daafe8;
            func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
            plVar10 = alStack_130;
            func_0x000107c6147c(plVar10,&ppppppuStack_110,puVar15 + 8,uVar9,0);
            lVar21 = alStack_130[0];
            if ((int)plVar10 != 0) {
              lVar23 = alStack_130[0];
              FUN_1034dde14(param_1,param_2,alStack_130[0],PTR___swiftEmptyArrayStorage_11034f1c8,
                            pppppppuVar6,ppppppuVar25,param_7,param_8);
              func_0x000107c6142c(ppppppuVar25);
              func_0x000107c6142c(lVar21);
              puVar15 = puStack_80;
              uVar22 = *(ulong *)(lVar23 + 0x10);
              lVar21 = *(long *)(puStack_80 + 0x10);
              if (SCARRY8(lVar21,uVar22)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd504);
                (*pcVar3)();
              }
              puVar13 = puStack_80;
              func_0x000107c61558();
              if (((int)puVar13 == 0) ||
                 (uVar19 = *(ulong *)(puVar15 + 0x18) >> 1, (long)uVar19 < (long)(lVar21 + uVar22)))
              {
                FUN_1034d8e34();
                uVar19 = *(ulong *)(puVar13 + 0x18) >> 1;
                puVar15 = puVar13;
              }
              if (*(long *)(lVar23 + 0x10) == 0) {
                func_0x000107c6142c(lVar23);
                if (uVar22 != 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd510);
                  (*pcVar3)();
                }
              }
              else {
                if (uVar19 - *(long *)(puVar15 + 0x10) < uVar22) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd51c);
                  (*pcVar3)();
                }
                func_0x000107c6140c(puVar15 + *(long *)(puVar15 + 0x10) * 0x30 + 0x20,lVar23 + 0x20,
                                    uVar22,&UNK_11065c8d8);
                func_0x000107c6142c(lVar23);
                if (uVar22 != 0) {
                  lVar23 = *(long *)(puVar15 + 0x10) + uVar22;
                  if (SCARRY8(*(long *)(puVar15 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd524);
                    (*pcVar3)();
                  }
                  goto LAB_1034dcf64;
                }
              }
              goto LAB_1034dd388;
            }
            plVar10 = alStack_130;
            func_0x000100102924(&ppppppuStack_110);
            plVar12 = alStack_130;
            FUN_1034df55c();
            puVar15 = puStack_80;
            puVar13 = puStack_80;
            func_0x000107c61558();
            puVar14 = puVar15;
            if (((ulong)puVar13 & 1) == 0) {
              puVar14 = (undefined *)0x0;
              FUN_1034d8e34(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
            }
            uVar22 = *(ulong *)(puVar14 + 0x10);
            puVar15 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar22) {
              puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
              FUN_1034d8e34(puVar15,uVar22 + 1,1,puVar14);
            }
            *(ulong *)(puVar15 + 0x10) = uVar22 + 1;
            *(undefined8 ********)(puVar15 + uVar22 * 0x30 + 0x20) = pppppppuVar6;
            *(undefined8 *******)(puVar15 + uVar22 * 0x30 + 0x28) = ppppppuVar25;
            *(long **)(puVar15 + uVar22 * 0x30 + 0x30) = plVar12;
            *(long **)(puVar15 + uVar22 * 0x30 + 0x38) = plVar10;
            *(undefined8 *)(puVar15 + uVar22 * 0x30 + 0x40) = 0x6c6c756e;
            *(undefined8 *)(puVar15 + uVar22 * 0x30 + 0x48) = 0xe400000000000000;
            FUN_1034e0480(alStack_130);
            FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
            puStack_80 = puVar15;
            if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4fc);
              (*pcVar3)();
            }
LAB_1034dc8a4:
            *param_7 = lVar23 + 1;
          }
          else {
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar15 = PTR___sypN_11034f1a8;
            plVar10 = alStack_130;
            func_0x000107c6147c(plVar10,&ppppppuStack_110,PTR___sypN_11034f1a8 + 8,uVar9,0);
            lVar21 = alStack_130[0];
            if ((int)plVar10 == 0) {
LAB_1034dcf74:
              uVar9 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              plVar10 = alStack_130;
              func_0x000107c6147c(plVar10,&ppppppuStack_110,puVar15 + 8,uVar9,0);
              lVar21 = alStack_130[0];
              if ((int)plVar10 != 0) {
                puVar8 = auStack_150;
                func_0x000107c6147c(puVar8,auStack_f0,PTR___sypN_11034f1a8 + 8,uVar9,0);
                uVar9 = auStack_150[0];
                if ((int)puVar8 != 0) {
                  lVar23 = lVar21;
                  FUN_1034dde14(param_1,param_2,lVar21,auStack_150[0],pppppppuVar6,ppppppuVar25,
                                param_7,param_8);
                  goto LAB_1034dcff8;
                }
                func_0x000107c6142c(lVar21);
              }
              func_0x000100102924(&ppppppuStack_110,alStack_130);
              func_0x000100102924(auStack_f0,auStack_150);
              plVar10 = alStack_130;
              puVar8 = auStack_150;
              FUN_1034de7f8(param_1,param_2,plVar10,puVar8,param_8);
              if (((ulong)plVar10 & 1) == 0) {
                plVar10 = alStack_130;
                FUN_1034df55c();
                puVar11 = auStack_150;
                puVar17 = puVar8;
                FUN_1034df55c();
                puVar15 = puStack_80;
                puVar13 = puStack_80;
                func_0x000107c61558();
                puVar14 = puVar15;
                if (((ulong)puVar13 & 1) == 0) {
                  puVar14 = (undefined *)0x0;
                  FUN_1034d8e34(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
                }
                uVar22 = *(ulong *)(puVar14 + 0x10);
                puVar15 = puVar14;
                if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar22) {
                  puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
                  FUN_1034d8e34(puVar15,uVar22 + 1,1,puVar14);
                }
                *(ulong *)(puVar15 + 0x10) = uVar22 + 1;
                *(undefined8 ********)(puVar15 + uVar22 * 0x30 + 0x20) = pppppppuVar6;
                *(undefined8 *******)(puVar15 + uVar22 * 0x30 + 0x28) = ppppppuVar25;
                *(long **)(puVar15 + uVar22 * 0x30 + 0x30) = plVar10;
                *(undefined8 **)(puVar15 + uVar22 * 0x30 + 0x38) = puVar8;
                *(undefined8 **)(puVar15 + uVar22 * 0x30 + 0x40) = puVar11;
                *(undefined8 **)(puVar15 + uVar22 * 0x30 + 0x48) = puVar17;
                FUN_1034e0480(auStack_150);
                FUN_1034e0480(alStack_130);
                FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
                puStack_80 = puVar15;
                if (SCARRY8(lVar23,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1034dd4f0);
                  (*pcVar3)();
                }
                goto LAB_1034dc8a4;
              }
              func_0x000107c6142c(ppppppuVar25);
              FUN_1034e0480(auStack_150);
              FUN_1034e0480(alStack_130);
              FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
            }
            else {
              puVar8 = auStack_150;
              func_0x000107c6147c(puVar8,auStack_f0,puVar15 + 8,uVar9,0);
              uVar9 = auStack_150[0];
              if ((int)puVar8 == 0) {
                func_0x000107c6142c(lVar21);
                goto LAB_1034dcf74;
              }
              lVar23 = lVar21;
              FUN_1034dc74c(param_1,param_2,lVar21,auStack_150[0],pppppppuVar6,ppppppuVar25,param_7,
                            param_8);
LAB_1034dcff8:
              func_0x000107c6142c(ppppppuVar25);
              func_0x000107c6142c(lVar21);
              func_0x000107c6142c(uVar9);
              FUN_1034dee40(lVar23);
              FUN_1034e04a0(&uStack_d0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(&uStack_b0,0x112d387f8,&UNK_10d902650);
              FUN_1034e0480(auStack_f0);
              FUN_1034e0480(&ppppppuStack_110);
            }
          }
        }
LAB_1034dc8b0:
        ppppppuVar24 = (undefined8 ******)((long)ppppppuVar24 + 1);
        pppppppuVar5 = pppppppuVar5 + 2;
      } while (ppppppuVar18 != ppppppuVar24);
    }
    func_0x000107c61574(ppppppuVar4);
  }
  return puStack_80;
}



/* Entry: 1034ddce0; end: 1034dde13;  */

undefined8 FUN_1034ddce0(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5fe14(uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  uStack_68 = uVar7;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar4 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      func_0x000107c61434(uVar3);
      func_0x000100403b00(auStack_78,uVar7,uVar3);
      func_0x000107c6142c(uStack_70);
      lVar9 = lVar1;
    }
    bVar6 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar6) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      func_0x000100d54abc(param_1,puVar8,~uVar10,lVar9,0);
      return uStack_68;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1034dde14);
  (*pcVar5)();
}



/* Entry: 1034dde14; end: 1034de7f7;  */

undefined *
FUN_1034dde14(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,long *param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 auStack_160 [4];
  undefined8 auStack_140 [4];
  undefined8 auStack_120 [4];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong auStack_a0 [4];
  undefined *puStack_80;
  
  puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((char)param_7[3] == '\x01') || (*param_7 < param_7[2])) {
    uVar16 = *(ulong *)(param_3 + 0x10);
    uVar17 = *(ulong *)(param_4 + 0x10);
    uVar1 = uVar17;
    if (uVar17 <= uVar16) {
      uVar1 = uVar16;
    }
    if (uVar1 != 0) {
      uVar19 = 0;
      do {
        param_4 = param_4 + 0x20;
        param_3 = param_3 + 0x20;
        lVar18 = *param_7;
        if (((char)param_7[3] != '\x01') && (param_7[2] <= lVar18)) {
          if (uVar1 <= uVar19) {
            return puStack_80;
          }
          *(undefined1 *)(param_7 + 1) = 1;
          return puStack_80;
        }
        uStack_100 = param_5;
        uStack_f8 = param_6;
        func_0x000107c61434();
        func_0x000107c5fb78(0x5b,0xe100000000000000);
        puVar13 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        auStack_a0[0] = uVar19;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar13);
        func_0x000107c5fb78(0x5d,0xe100000000000000);
        uVar3 = uStack_f8;
        uVar14 = uStack_100;
        if (uVar19 < uVar16) {
          func_0x0001000bb420(param_3,auStack_a0);
        }
        else {
          auStack_a0[1] = 0;
          auStack_a0[0] = 0;
          auStack_a0[3] = 0;
          auStack_a0[2] = 0;
        }
        if (uVar19 < uVar17) {
          func_0x0001000bb420(param_4,&uStack_c0);
        }
        else {
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
        }
        func_0x000100672b50(auStack_a0,&uStack_100);
        func_0x000100672b50(&uStack_c0,auStack_e0);
        if (lStack_e8 == 0) {
          if (lStack_c8 != 0) {
            uVar5 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar13 = PTR___sypN_11034f1a8;
            puVar6 = auStack_120;
            func_0x000107c6147c(puVar6,auStack_e0,PTR___sypN_11034f1a8 + 8,uVar5,0);
            uVar5 = auStack_120[0];
            if ((int)puVar6 == 0) {
              uVar5 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              puVar6 = auStack_120;
              func_0x000107c6147c(puVar6,auStack_e0,puVar13 + 8,uVar5,0);
              uVar5 = auStack_120[0];
              if ((int)puVar6 == 0) {
                puVar6 = auStack_120;
                func_0x000100102924(auStack_e0);
                puVar10 = auStack_120;
                FUN_1034df55c();
                puVar13 = puStack_80;
                puVar11 = puStack_80;
                func_0x000107c61558();
                puVar12 = puVar13;
                if (((ulong)puVar11 & 1) == 0) {
                  puVar12 = (undefined *)0x0;
                  FUN_1034d8e34(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
                }
                uVar2 = *(ulong *)(puVar12 + 0x10);
                puVar13 = puVar12;
                if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
                  puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
                  FUN_1034d8e34(puVar13,uVar2 + 1,1,puVar12);
                }
                *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
                *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x20) = uVar14;
                *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x28) = uVar3;
                *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x30) = 0x6c6c756e;
                *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x38) = 0xe400000000000000;
                *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x40) = puVar10;
                *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x48) = puVar6;
                FUN_1034e0480(auStack_120);
                FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
                puStack_80 = puVar13;
                if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1034de7f4);
                  (*pcVar4)();
                }
                goto LAB_1034de6d8;
              }
              puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
              FUN_1034dde14(param_1,param_2,PTR___swiftEmptyArrayStorage_11034f1c8,auStack_120[0],
                            uVar14,uVar3,param_7,param_8);
            }
            else {
              puVar13 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
              FUN_1034dc74c(param_1,param_2,PTR___swiftEmptyDictionarySingleton_11034f1d0,
                            auStack_120[0],uVar14,uVar3,param_7,param_8);
            }
            func_0x000107c6142c(uVar3);
            func_0x000107c6142c(uVar5);
            FUN_1034dee40(puVar13);
            FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
            FUN_1034e0480(auStack_e0);
            goto LAB_1034ddefc;
          }
          func_0x000107c6142c(uVar3);
          FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
          FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
          uVar14 = 0x112f738c8;
          puVar13 = &UNK_10dbcf498;
        }
        else {
          func_0x000100672b50(&uStack_100,auStack_120);
          if (lStack_c8 == 0) {
            uVar5 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar13 = PTR___sypN_11034f1a8;
            puVar6 = auStack_140;
            func_0x000107c6147c(puVar6,auStack_120,PTR___sypN_11034f1a8 + 8,uVar5,0);
            uVar5 = auStack_140[0];
            if ((int)puVar6 == 0) {
              uVar5 = 0x112daafe8;
              func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
              puVar6 = auStack_140;
              func_0x000107c6147c(puVar6,auStack_120,puVar13 + 8,uVar5,0);
              uVar5 = auStack_140[0];
              if ((int)puVar6 != 0) {
                uVar7 = auStack_140[0];
                FUN_1034dde14(param_1,param_2,auStack_140[0],PTR___swiftEmptyArrayStorage_11034f1c8,
                              uVar14,uVar3,param_7,param_8);
                goto LAB_1034de344;
              }
              puVar6 = auStack_140;
              func_0x000100102924(auStack_120);
              puVar10 = auStack_140;
              FUN_1034df55c();
              puVar13 = puStack_80;
              puVar11 = puStack_80;
              func_0x000107c61558();
              puVar12 = puVar13;
              if (((ulong)puVar11 & 1) == 0) {
                puVar12 = (undefined *)0x0;
                FUN_1034d8e34(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
              }
              uVar2 = *(ulong *)(puVar12 + 0x10);
              puVar13 = puVar12;
              if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
                FUN_1034d8e34(puVar13,uVar2 + 1,1,puVar12);
              }
              *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x20) = uVar14;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x28) = uVar3;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x30) = puVar10;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x38) = puVar6;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x40) = 0x6c6c756e;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x48) = 0xe400000000000000;
              FUN_1034e0480(auStack_140);
              FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
              puStack_80 = puVar13;
              if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1034de7f8);
                (*pcVar4)();
              }
              goto LAB_1034de6d8;
            }
            uVar7 = auStack_140[0];
            FUN_1034dc74c(param_1,param_2,auStack_140[0],
                          PTR___swiftEmptyDictionarySingleton_11034f1d0,uVar14,uVar3,param_7,param_8
                         );
LAB_1034de344:
            func_0x000107c6142c(uVar3);
            func_0x000107c6142c(uVar5);
            FUN_1034dee40(uVar7);
            FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
            FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
LAB_1034de488:
            FUN_1034e0480(auStack_120);
          }
          else {
            uVar5 = 0x112d472a8;
            func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
            puVar13 = PTR___sypN_11034f1a8;
            puVar6 = auStack_140;
            func_0x000107c6147c(puVar6,auStack_120,PTR___sypN_11034f1a8 + 8,uVar5,0);
            uVar7 = auStack_140[0];
            if ((int)puVar6 != 0) {
              puVar6 = auStack_160;
              func_0x000107c6147c(puVar6,auStack_e0,puVar13 + 8,uVar5,0);
              uVar5 = auStack_160[0];
              if ((int)puVar6 != 0) {
                uVar8 = uVar7;
                FUN_1034dc74c(param_1,param_2,uVar7,auStack_160[0],uVar14,uVar3,param_7,param_8);
                func_0x000107c6142c(uVar3);
                func_0x000107c6142c(uVar7);
                func_0x000107c6142c(uVar5);
                FUN_1034dee40(uVar8);
                FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
                FUN_1034e0480(auStack_e0);
                FUN_1034e0480(auStack_120);
                goto LAB_1034ddefc;
              }
              func_0x000107c6142c(uVar7);
            }
            uVar5 = 0x112daafe8;
            func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
            puVar6 = auStack_140;
            func_0x000107c6147c(puVar6,auStack_120,puVar13 + 8,uVar5,0);
            uVar7 = auStack_140[0];
            if ((int)puVar6 != 0) {
              puVar6 = auStack_160;
              func_0x000107c6147c(puVar6,auStack_e0,PTR___sypN_11034f1a8 + 8,uVar5,0);
              uVar5 = auStack_160[0];
              if ((int)puVar6 != 0) {
                uVar8 = uVar7;
                FUN_1034dde14(param_1,param_2,uVar7,auStack_160[0],uVar14,uVar3,param_7,param_8);
                func_0x000107c6142c(uVar3);
                func_0x000107c6142c(uVar7);
                func_0x000107c6142c(uVar5);
                FUN_1034dee40(uVar8);
                FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
                FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
                FUN_1034e0480(auStack_e0);
                goto LAB_1034de488;
              }
              func_0x000107c6142c(uVar7);
            }
            func_0x000100102924(auStack_120,auStack_140);
            func_0x000100102924(auStack_e0,auStack_160);
            puVar6 = auStack_140;
            puVar10 = auStack_160;
            FUN_1034de7f8(param_1,param_2,puVar6,puVar10,param_8);
            if (((ulong)puVar6 & 1) == 0) {
              puVar6 = auStack_140;
              FUN_1034df55c();
              puVar9 = auStack_160;
              puVar15 = puVar10;
              FUN_1034df55c();
              puVar13 = puStack_80;
              puVar11 = puStack_80;
              func_0x000107c61558();
              puVar12 = puVar13;
              if (((ulong)puVar11 & 1) == 0) {
                puVar12 = (undefined *)0x0;
                FUN_1034d8e34(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
              }
              uVar2 = *(ulong *)(puVar12 + 0x10);
              puVar13 = puVar12;
              if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
                puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
                FUN_1034d8e34(puVar13,uVar2 + 1,1,puVar12);
              }
              *(ulong *)(puVar13 + 0x10) = uVar2 + 1;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x20) = uVar14;
              *(undefined8 *)(puVar13 + uVar2 * 0x30 + 0x28) = uVar3;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x30) = puVar6;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x38) = puVar10;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x40) = puVar9;
              *(undefined8 **)(puVar13 + uVar2 * 0x30 + 0x48) = puVar15;
              FUN_1034e0480(auStack_160);
              FUN_1034e0480(auStack_140);
              FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
              puStack_80 = puVar13;
              if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1034de7f0);
                (*pcVar4)();
              }
LAB_1034de6d8:
              *param_7 = lVar18 + 1;
            }
            else {
              func_0x000107c6142c(uVar3);
              FUN_1034e0480(auStack_160);
              FUN_1034e0480(auStack_140);
              FUN_1034e04a0(&uStack_c0,0x112d387f8,&UNK_10d902650);
              FUN_1034e04a0(auStack_a0,0x112d387f8,&UNK_10d902650);
            }
          }
LAB_1034ddefc:
          uVar14 = 0x112d387f8;
          puVar13 = &UNK_10d902650;
        }
        FUN_1034e04a0(&uStack_100,uVar14,puVar13);
        uVar19 = uVar19 + 1;
      } while (uVar1 != uVar19);
    }
  }
  return puStack_80;
}



/* Entry: 1034de7f8; end: 1034deca7;  */

uint FUN_1034de7f8(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar15;
  double *pdVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  uint uVar20;
  byte bStack_d0;
  undefined7 uStack_cf;
  long lStack_c8;
  double dStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  iVar8 = (int)&bStack_d0;
  iVar9 = (int)&bStack_d0;
  iVar10 = (int)&bStack_d0;
  iVar11 = (int)&bStack_d0;
  iVar12 = (int)&bStack_d0;
  iVar13 = (int)&bStack_d0;
  iVar14 = (int)&bStack_d0;
  dVar19 = param_1;
  func_0x0001000bb420(param_2,auStack_b0);
  func_0x0001000bb420(param_3,auStack_90);
  uVar15 = 0;
  func_0x0001034e04e0(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
  puVar3 = PTR___sypN_11034f1a8;
  pdVar16 = &dStack_c0;
  func_0x000107c6147c(pdVar16,auStack_b0,PTR___sypN_11034f1a8 + 8,uVar15,0);
  if ((int)pdVar16 == 0) {
    pdVar16 = &dStack_c0;
    func_0x000107c6147c(pdVar16,auStack_90,puVar3 + 8,uVar15,0);
    if ((int)pdVar16 == 0) {
      pdVar16 = &dStack_c0;
      func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,PTR___sSbN_11034dd40,0);
      if ((int)pdVar16 != 0) {
        bVar4 = dStack_c0._0_1_;
        func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,PTR___sSbN_11034dd40,0);
        if (iVar9 == 0) goto LAB_1034de954;
        uVar20 = (bVar4 ^ bStack_d0) ^ 1;
        goto LAB_1034dec30;
      }
LAB_1034de954:
      pdVar16 = &dStack_c0;
      func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,PTR___sSiN_11034deb0,0);
      dVar17 = dStack_c0;
      if (((int)pdVar16 == 0) ||
         (func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,PTR___sSiN_11034deb0,0), iVar10 == 0)
         ) {
        pdVar16 = &dStack_c0;
        func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,PTR___ss5Int64VN_11034ee50,0);
        dVar17 = dStack_c0;
        if (((int)pdVar16 != 0) &&
           (func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,PTR___ss5Int64VN_11034ee50,0),
           iVar11 != 0)) goto LAB_1034de9dc;
        pdVar16 = &dStack_c0;
        func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,PTR___sSdN_11034dd90,0);
        dVar17 = dStack_c0;
        if (((int)pdVar16 == 0) ||
           (func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,PTR___sSdN_11034dd90,0),
           iVar12 == 0)) {
          uVar15 = 0;
          func_0x0001034e04e0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          pdVar16 = &dStack_c0;
          func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,uVar15,0);
          dVar5 = dStack_c0;
          if ((int)pdVar16 != 0) {
            func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,uVar15,0);
            if (iVar13 != 0) {
              uVar15 = CONCAT71(uStack_cf,bStack_d0);
              dVar17 = dVar5;
              func_0x000107c607d4();
              if ((SUB84(dVar17,0) == 0) &&
                 (uVar18 = uVar15, func_0x000107c607d4(), (int)uVar18 == 0)) {
                func_0x0001034e04e0(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                dVar19 = dVar5;
                func_0x000107c60118(dVar5,uVar15);
                uVar20 = SUB84(dVar19,0);
                func_0x000107c61170(dVar5);
                func_0x000107c61170(uVar15);
                goto LAB_1034dec30;
              }
              func_0x000107c4223c(dVar5);
              dVar17 = dVar19;
              func_0x000107c4223c(uVar15);
              func_0x000107c61170(dVar5);
              func_0x000107c61170(uVar15);
              dVar17 = dVar19 - dVar17;
              goto LAB_1034deadc;
            }
            func_0x000107c61170(dVar5);
          }
          pdVar16 = &dStack_c0;
          func_0x000107c6147c(pdVar16,auStack_b0,puVar3 + 8,PTR___sSSN_11034da80,0);
          if ((int)pdVar16 != 0) {
            func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,PTR___sSSN_11034da80,0);
            if (iVar14 != 0) {
              if ((dStack_c0 == (double)CONCAT71(uStack_cf,bStack_d0)) && (lStack_b8 == lStack_c8))
              {
                uVar20 = 1;
              }
              else {
                func_0x000107c605b8(dStack_c0,lStack_b8,CONCAT71(uStack_cf,bStack_d0),lStack_c8,0);
                uVar20 = SUB84(dStack_c0,0);
              }
              func_0x000107c6142c(lStack_b8);
              func_0x000107c6142c(lStack_c8);
              goto LAB_1034dec30;
            }
            func_0x000107c6142c(lStack_b8);
          }
          puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
          puVar1 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
          dStack_c0 = 0.0;
          lStack_b8 = -0x2000000000000000;
          func_0x000107c603d0(param_2,&dStack_c0,puVar3 + 8,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          lVar6 = lStack_b8;
          dVar19 = dStack_c0;
          dStack_c0 = 0.0;
          lStack_b8 = -0x2000000000000000;
          func_0x000107c603d0(param_3,&dStack_c0,puVar3 + 8,puVar1,puVar2);
          lVar7 = lStack_b8;
          if ((dVar19 == dStack_c0) && (lVar6 == lStack_b8)) {
            uVar20 = 1;
          }
          else {
            func_0x000107c605b8(dVar19,lVar6,dStack_c0,lStack_b8,0);
            uVar20 = SUB84(dVar19,0);
          }
          func_0x000107c6142c(lVar6);
          func_0x000107c6142c(lVar7);
          func_0x0001034e04a0(auStack_b0,0x112f738d0,&UNK_10dbcf4a8);
          goto LAB_1034dec40;
        }
        dVar17 = dVar17 - (double)CONCAT71(uStack_cf,bStack_d0);
LAB_1034deadc:
        uVar20 = (uint)(ABS(dVar17) < param_1);
      }
      else {
LAB_1034de9dc:
        uVar20 = (uint)(dVar17 == (double)CONCAT71(uStack_cf,bStack_d0));
      }
LAB_1034dec30:
      FUN_1034e0480(auStack_90);
      FUN_1034e0480(auStack_b0);
      goto LAB_1034dec40;
    }
    func_0x000107c61170(dStack_c0);
  }
  else {
    func_0x000107c61170(dStack_c0);
    func_0x000107c6147c(&bStack_d0,auStack_90,puVar3 + 8,uVar15,0);
    if (iVar8 != 0) {
      func_0x000107c61170(CONCAT71(uStack_cf,bStack_d0));
      FUN_1034e0480(auStack_90);
      FUN_1034e0480(auStack_b0);
      uVar20 = 1;
      goto LAB_1034dec40;
    }
  }
  FUN_1034e0480(auStack_90);
  FUN_1034e0480(auStack_b0);
  uVar20 = 0;
LAB_1034dec40:
  return uVar20 & 1;
}



/* Entry: 1034deca8; end: 1034decbb;  */

undefined * FUN_1034deca8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0x112f737f8;
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x0001000285a8(0x112f737f8,&UNK_10dbcf4b0);
    func_0x000107c613fc();
    puVar2 = puVar1;
    func_0x000107c610a4();
    puVar3 = puVar2 + -0x11;
    if (0x1f < (long)puVar2) {
      puVar3 = puVar2 + -0x20;
    }
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)puVar3 >> 4) << 1;
    puVar3 = puVar1;
  }
  return puVar3;
}



/* Entry: 1034decbc; end: 1034ded33;  */

undefined * FUN_1034decbc(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x0001000285a8(param_3,param_4);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x11;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = ((long)puVar2 >> 4) << 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1034ded34; end: 1034dee3f;  */

void FUN_1034ded34(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x40);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c61434(uVar4);
      func_0x000100403b00(auStack_70,uVar3,uVar4);
      func_0x000107c6142c(uStack_68);
      lVar9 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff,puVar8,~uVar10,lVar9,0);
      return;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1034dee40);
  (*pcVar6)();
}



/* Entry: 1034dee40; end: 1034def3b;  */

void FUN_1034dee40(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1034def30);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1034d8e34();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034def34);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034def38);
      (*pcVar1)();
    }
    func_0x000107c6140c(lVar4 + *(long *)(lVar4 + 0x10) * 0x30 + 0x20,param_1 + 0x20,uVar5,
                        &UNK_11065c8d8);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034def3c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 1034def3c; end: 1034def4f;  */

/* WARNING: Removing unreachable block (ram,0x0001034da20c) */
/* WARNING: Removing unreachable block (ram,0x0001034da21c) */
/* WARNING: Removing unreachable block (ram,0x0001034da318) */
/* WARNING: Removing unreachable block (ram,0x0001034da228) */
/* WARNING: Removing unreachable block (ram,0x0001034da230) */
/* WARNING: Removing unreachable block (ram,0x0001034da2a8) */
/* WARNING: Removing unreachable block (ram,0x0001034da2b0) */
/* WARNING: Removing unreachable block (ram,0x0001034da2b4) */
/* WARNING: Removing unreachable block (ram,0x0001034da2b8) */
/* WARNING: Removing unreachable block (ram,0x0001034da2c8) */

undefined * FUN_1034def3c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112f737f8;
    func_0x0001000285a8(0x112f737f8,&UNK_10dbcf4b0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  uVar5 = 0x112f73320;
  func_0x0001000285a8(0x112f73320,&UNK_10dbcf150);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1034def50; end: 1034df19b;  */

long FUN_1034def50(long *****param_1,long *****param_2,long param_3,long *****param_4)

{
  long ****pppplVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long *****ppppplVar5;
  ulong uVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *****ppppplVar13;
  long *****ppppplVar14;
  long ****pppplVar15;
  long ****pppplStack_78;
  long ***ppplStack_70;
  long ****pppplStack_68;
  
  ppppplVar5 = param_2;
  if (((ulong)param_4 & 0xc000000000000001) == 0) {
    uVar6 = -1L << ((ulong)*(byte *)(param_4 + 4) & 0x3f);
    ppppplVar14 = param_4 + 8;
    pppplVar7 = (long ****)~uVar6;
    uVar6 = -uVar6;
    uVar10 = 0xffffffffffffffff;
    if (uVar6 < 0x40) {
      uVar10 = ~(-1L << (uVar6 & 0x3f));
    }
    pppplVar15 = (long ****)(uVar10 & (ulong)*ppppplVar14);
    ppppplVar13 = param_1;
  }
  else {
    ppppplVar13 = (long *****)((ulong)param_4 & 0xffffffffffffff8);
    if ((long *****)0x7fffffffffffffff < param_4) {
      ppppplVar13 = param_4;
    }
    func_0x000107c60418();
    ppppplVar14 = (long *****)0x0;
    pppplVar7 = (long ****)0x0;
    pppplVar15 = (long ****)0x0;
    param_4 = (long *****)((ulong)ppppplVar13 | 0x8000000000000000);
  }
  if (param_2 == (long *****)0x0) {
    pppplVar8 = (long ****)0x0;
    lVar12 = 0;
  }
  else if (param_3 == 0) {
    pppplVar8 = (long ****)0x0;
    lVar12 = param_3;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1034df19c);
      (*pcVar3)();
    }
    pppplVar8 = (long ****)0x0;
    lVar11 = 0;
    uVar10 = (ulong)(pppplVar7 + 8) >> 6;
    do {
      pppplVar1 = pppplVar8;
      lVar12 = lVar11;
      if ((long)param_4 < 0) {
        func_0x000107c60444();
        if (ppppplVar13 == (long *****)0x0) break;
        uVar4 = 0;
        pppplStack_78 = (long ****)ppppplVar13;
        func_0x0001034e04e0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        puVar2 = PTR___syXlN_11034f1a0;
        func_0x000107c6147c(&ppplStack_70,&pppplStack_78,PTR___syXlN_11034f1a0 + 8,uVar4,7);
        uVar4 = 0;
        pppplStack_78 = (long ****)ppppplVar5;
        func_0x0001034e04e0(0,0x112f73308,&PTR_PTR_1126d0f30);
        ppppplVar13 = &pppplStack_68;
        ppppplVar5 = &pppplStack_78;
        func_0x000107c6147c(ppppplVar13,ppppplVar5,puVar2 + 8,uVar4,7);
        pppplVar9 = (long ****)ppplStack_70;
      }
      else {
        while (pppplVar15 == (long ****)0x0) {
          pppplVar9 = (long ****)((long)pppplVar1 + 1);
          if (SCARRY8((long)pppplVar1,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1034df198);
            (*pcVar3)();
          }
          if ((long)uVar10 <= (long)pppplVar9) {
            pppplVar15 = (long ****)0x0;
            if ((long)uVar10 <= (long)pppplVar8 + 1) {
              uVar10 = (long)pppplVar8 + 1;
            }
            pppplVar8 = (long ****)(uVar10 - 1);
            goto LAB_1034df154;
          }
          pppplVar1 = pppplVar9;
          pppplVar15 = ppppplVar14[(long)pppplVar9];
        }
        uVar6 = ((ulong)pppplVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                ((ulong)pppplVar15 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        pppplVar15 = (long ****)((long)pppplVar15 - 1U & (ulong)pppplVar15);
        uVar6 = (long)pppplVar1 << 9 | LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) << 3;
        pppplVar9 = *(long *****)((long)param_4[6] + uVar6);
        ppppplVar13 = *(long ******)((long)param_4[7] + uVar6);
        ppplStack_70 = (long ***)pppplVar9;
        pppplStack_68 = (long ****)ppppplVar13;
        func_0x000107c61174(pppplVar9);
        func_0x000107c61174();
        pppplVar8 = pppplVar1;
      }
      if (pppplVar9 == (long ****)0x0) break;
      lVar11 = lVar11 + 1;
      *param_2 = pppplVar9;
      param_2[1] = pppplStack_68;
      param_2 = param_2 + 2;
      lVar12 = param_3;
    } while (lVar11 != param_3);
  }
LAB_1034df154:
  *param_1 = (long ****)param_4;
  param_1[1] = (long ****)ppppplVar14;
  param_1[2] = pppplVar7;
  param_1[3] = pppplVar8;
  param_1[4] = pppplVar15;
  return lVar12;
}



/* Entry: 1034df19c; end: 1034df233;  */

/* WARNING: Possible PIC construction at 0x0001034df1cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034df1d0) */

long FUN_1034df19c(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != *param_2 || param_1[1] != param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )();
    return lVar1;
  }
  uVar2 = param_1[2];
  if ((uVar2 == param_2[2] && param_1[3] == param_2[3]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
     ) {
    lVar1 = param_1[4];
    if ((lVar1 != param_2[4]) || (param_1[5] != param_2[5])) goto code_r0x000107c605b8;
    lVar1 = 1;
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}



/* Entry: 1034df234; end: 1034df273;  */

void FUN_1034df234(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf434;
  func_0x000107c61520(&UNK_10dbcf434,&UNK_11065ca98);
  puRam0000000112f738a0 = puVar1;
  return;
}



/* Entry: 1034df274; end: 1034df55b;  */

undefined1  [16] FUN_1034df274(undefined *param_1,undefined *param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  uint uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  ulong auStack_120 [4];
  undefined1 auStack_100 [16];
  ulong uStack_f0;
  ulong auStack_e8 [2];
  undefined1 auStack_d8 [32];
  long alStack_b8 [7];
  long alStack_80 [2];
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)((long)&puStack_70 + lVar1);
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(undefined **)(lVar4 + 0x20) = param_1;
  *(undefined **)(lVar4 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  lVar5 = lVar4;
  ppuVar9 = (undefined **)PTR___sSSN_11034da80;
  func_0x000107c5fc48(lVar4);
  func_0x000107c61574(lVar4);
  puStack_70 = (undefined *)0x0;
  uVar14 = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  puVar16 = puStack_70;
  func_0x000107c61174();
  if (puVar12 == (undefined *)0x0) {
    puVar19 = puVar16;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar16);
    func_0x000107c61654();
    func_0x000107c614ac(puVar19);
    puVar6 = puVar19;
LAB_1034df4f0:
    puStack_70 = (undefined *)0x22;
    puStack_68 = (undefined *)0xe100000000000000;
    ppuVar9 = &puStack_70;
    func_0x000107c5fb78(param_1,param_2);
    func_0x000107c5fb78(0x22,0xe100000000000000);
    puVar16 = puStack_70;
    puVar18 = puStack_68;
  }
  else {
    puVar19 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
    func_0x000107c5fb04(puVar6);
    puVar16 = puVar19;
    ppuVar10 = ppuVar9;
    func_0x000107c5faf0(puVar19,ppuVar9,puVar6);
    if (ppuVar10 == (undefined **)0x0) {
LAB_1034df4e4:
      func_0x00010006c090(puVar19,ppuVar9);
      goto LAB_1034df4f0;
    }
    puVar6 = puVar16;
    func_0x000107c5fb5c();
    if ((long)puVar6 < 3) {
      func_0x000107c6142c(ppuVar10);
      puVar6 = puVar16;
      goto LAB_1034df4e4;
    }
    param_2 = (undefined *)0x1;
    ppuVar13 = ppuVar10;
    func_0x0001011a7878(1,puVar16,ppuVar10);
    func_0x000107c6142c(ppuVar10);
    puVar6 = param_2;
    func_0x000107c601b0(param_2,puVar16,param_2,puVar16,ppuVar13,uVar14);
    if (SBORROW8((long)puVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034df554);
      (*pcVar2)();
    }
    uVar11 = (ulong)(puVar6 + -1) & ((long)(puVar6 + -1) >> 0x3f ^ 0xffffffffffffffffU);
    puVar12 = param_2;
    func_0x000107c601a8(param_2,uVar11,puVar16,param_2,puVar16,ppuVar13,uVar14);
    puVar6 = puVar16;
    if (((uint)uVar11 & 0xff) != 1) {
      puVar6 = puVar12;
    }
    if ((ulong)puVar6 >> 0xe < (ulong)param_2 >> 0xe) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1034df558);
      (*pcVar2)();
    }
    puVar12 = param_2;
    func_0x000107c601b8();
    func_0x000107c6142c(uVar14);
    param_1 = puVar6;
    func_0x000107c5fb2c(param_2,puVar6,puVar12,puVar16);
    func_0x00010006c090(puVar19,ppuVar9);
    func_0x000107c6142c(puVar16);
    puVar16 = param_2;
    puVar18 = param_1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar21._8_8_ = puVar18;
    auVar21._0_8_ = puVar16;
    return auVar21;
  }
  func_0x000107c60e78(puVar16,puVar18);
  *(undefined **)((long)alStack_b8 + lVar1 + 8) = puVar12;
  *(undefined **)((long)alStack_b8 + lVar1 + 0x10) = puVar6;
  *(undefined **)((long)alStack_b8 + lVar1 + 0x18) = param_1;
  *(undefined **)((long)alStack_b8 + lVar1 + 0x20) = puVar19;
  *(undefined ***)((long)alStack_b8 + lVar1 + 0x28) = ppuVar9;
  *(undefined **)((long)alStack_b8 + lVar1 + 0x30) = param_2;
  *(undefined1 **)((long)alStack_80 + lVar1) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_80 + lVar1 + 8) = FUN_1034df55c;
  *(undefined8 *)((long)alStack_b8 + lVar1) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = auStack_100 + (lVar1 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x0001000bb420(puVar16,auStack_d8 + lVar1);
  uVar14 = 0;
  func_0x0001034e04e0(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
  puVar12 = PTR___sypN_11034f1a8;
  lVar4 = (long)auStack_e8 + lVar1;
  puVar6 = auStack_d8 + lVar1;
  func_0x000107c6147c(lVar4,puVar6,PTR___sypN_11034f1a8 + 8,uVar14,0);
  if ((int)lVar4 == 0) {
    lVar4 = (long)auStack_e8 + lVar1;
    func_0x000107c6147c(lVar4,auStack_d8 + lVar1,puVar12 + 8,PTR___sSSN_11034da80,0);
    if ((int)lVar4 == 0) {
      lVar4 = (long)auStack_e8 + lVar1;
      puVar6 = auStack_d8 + lVar1;
      func_0x000107c6147c(lVar4,puVar6,puVar12 + 8,PTR___sSbN_11034dd40,0);
      if ((int)lVar4 == 0) {
        uVar14 = 0;
        func_0x0001034e04e0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar4 = (long)&uStack_f0 + lVar1;
        puVar19 = auStack_d8 + lVar1;
        func_0x000107c6147c(lVar4,puVar19,puVar12 + 8,uVar14,0);
        if ((int)lVar4 == 0) {
          uVar14 = 0x112d472a8;
          func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
          lVar4 = (long)&uStack_f0 + lVar1;
          func_0x000107c6147c(lVar4,auStack_d8 + lVar1,puVar12 + 8,uVar14,0);
          if ((int)lVar4 == 0) {
            uVar14 = 0x112daafe8;
            func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
            lVar4 = (long)&uStack_f0 + lVar1;
            func_0x000107c6147c(lVar4,auStack_d8 + lVar1,puVar12 + 8,uVar14,0);
            if ((int)lVar4 != 0) {
              uVar20 = *(undefined8 *)((long)&uStack_f0 + lVar1);
              puVar19 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x000107c61168();
              puVar6 = puVar12 + 8;
              uVar14 = uVar20;
              func_0x000107c5fc48(uVar20);
              func_0x000107c6142c(uVar20);
              *(undefined8 *)((long)auStack_e8 + lVar1) = 0;
              func_0x000107c41300();
              goto LAB_1034df828;
            }
          }
          else {
            uVar20 = *(undefined8 *)((long)&uStack_f0 + lVar1);
            puVar19 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x000107c61168();
            uVar14 = uVar20;
            puVar6 = PTR___sSSN_11034da80;
            func_0x000107c5f9dc(uVar20,PTR___sSSN_11034da80,puVar12 + 8,PTR___sSSSHsWP_11034da90);
            func_0x000107c6142c(uVar20);
            *(undefined8 *)((long)auStack_e8 + lVar1) = 0;
            func_0x000107c41300();
LAB_1034df828:
            func_0x000107c61180();
            func_0x000107c61170(uVar14);
            uVar14 = *(undefined8 *)((long)auStack_e8 + lVar1);
            func_0x000107c61174(uVar14);
            if (puVar19 == (undefined *)0x0) {
              uVar20 = uVar14;
              func_0x000107c5ed30();
              func_0x000107c61170(uVar14);
              func_0x000107c61654();
              func_0x000107c614ac(uVar20);
            }
            else {
              puVar7 = puVar19;
              func_0x000107c5ee30();
              func_0x000107c61170(puVar19);
              func_0x000107c5fb04(puVar17);
              puVar18 = puVar7;
              puVar19 = puVar6;
              func_0x000107c5faf0(puVar7,puVar6,puVar17);
              func_0x00010006c090(puVar7);
              if (puVar19 != (undefined *)0x0) goto LAB_1034df914;
            }
          }
          *(undefined8 *)((long)auStack_e8 + lVar1) = 0;
          *(undefined8 *)((long)auStack_e8 + lVar1 + 8) = 0xe000000000000000;
          puVar6 = (undefined *)((long)auStack_e8 + lVar1);
          func_0x000107c603d0(puVar16,puVar6,puVar12 + 8,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
        }
        else {
          puVar16 = *(undefined **)((long)&uStack_f0 + lVar1);
          puVar6 = puVar16;
          func_0x000107c607d4();
          if ((int)puVar6 == 0) {
            puVar12 = puVar16;
            func_0x000107c417f0();
            func_0x000107c61180();
            puVar18 = puVar12;
            func_0x000107c5faec();
            puVar6 = puVar19;
            func_0x000107c61170(puVar16);
            func_0x000107c61170(puVar12);
            goto LAB_1034df914;
          }
          *(undefined8 *)((long)auStack_e8 + lVar1) = 0;
          *(undefined8 *)((long)auStack_e8 + lVar1 + 8) = 0xe000000000000000;
          func_0x000107c4223c(puVar16);
          puVar6 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
          func_0x000107c5fddc((long)auStack_e8 + lVar1,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c61170(puVar16);
        }
        puVar18 = *(undefined **)((long)auStack_e8 + lVar1);
        puVar19 = *(undefined **)((long)auStack_e8 + lVar1 + 8);
      }
      else {
        bVar3 = *(char *)((long)auStack_e8 + lVar1) == '\0';
        puVar18 = (undefined *)0x65757274;
        if (bVar3) {
          puVar18 = (undefined *)0x65736c6166;
        }
        puVar19 = (undefined *)0xe400000000000000;
        if (bVar3) {
          puVar19 = (undefined *)0xe500000000000000;
        }
      }
    }
    else {
      puVar18 = *(undefined **)((long)auStack_e8 + lVar1);
      puVar16 = *(undefined **)((long)auStack_e8 + lVar1 + 8);
      puVar19 = puVar16;
      FUN_1034df274();
      puVar6 = puVar19;
      func_0x000107c6142c(puVar16);
    }
  }
  else {
    func_0x000107c61170(*(undefined8 *)((long)auStack_e8 + lVar1));
    puVar19 = (undefined *)0xe400000000000000;
    puVar18 = (undefined *)0x6c6c756e;
  }
LAB_1034df914:
  puVar8 = auStack_d8 + lVar1;
  FUN_1034e0480();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)alStack_b8 + lVar1)) {
    auVar22._8_8_ = puVar19;
    auVar22._0_8_ = puVar18;
    return auVar22;
  }
  func_0x000107c60e78();
  *(undefined **)(puVar17 + -0x20) = puVar18;
  *(undefined **)(puVar17 + -0x18) = puVar16;
  *(long *)(puVar17 + -0x10) = (long)alStack_80 + lVar1;
  *(code **)(puVar17 + -8) = FUN_1034df958;
  puVar12 = puVar6;
  if (puVar8 != (undefined1 *)0x68746170 || puVar6 != (undefined *)0xe400000000000000) {
    uVar11 = 0;
    puVar12 = (undefined *)0xe400000000000000;
    func_0x000107c605b8(0x68746170,0xe400000000000000,puVar8,puVar6,0);
    if ((uVar11 & 1) == 0) {
      puVar12 = (undefined *)0xeb0000000065756c;
      uVar11 = 0;
      if (((puVar8 == (undefined1 *)0x615679636167656c) &&
          (puVar6 == (undefined *)0xeb0000000065756c)) ||
         (func_0x000107c605b8(0x615679636167656c,0xeb0000000065756c,puVar8,puVar6,0),
         (uVar11 & 1) != 0)) {
        func_0x000107c6142c(puVar6);
        uVar11 = 1;
      }
      else {
        uVar11 = 0x6c61567466697773;
        if ((puVar8 == (undefined1 *)0x6c61567466697773) &&
           (puVar6 == (undefined *)0xea00000000006575)) {
          func_0x000107c6142c(0xea00000000006575);
          uVar11 = 2;
        }
        else {
          puVar12 = (undefined *)0xea00000000006575;
          func_0x000107c605b8(0x6c61567466697773,0xea00000000006575,puVar8,puVar6,0);
          func_0x000107c6142c(puVar6);
          uVar15 = 2;
          if ((uVar11 & 1) == 0) {
            uVar15 = 3;
          }
          uVar11 = (ulong)uVar15;
        }
      }
      goto LAB_1034df9b0;
    }
  }
  func_0x000107c6142c(puVar6);
  uVar11 = 0;
LAB_1034df9b0:
  auVar23._8_8_ = puVar12;
  auVar23._0_8_ = uVar11;
  return auVar23;
}



/* Entry: 1034df55c; end: 1034df957;  */

undefined1  [16] FUN_1034df55c(undefined8 *****param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  ulong uVar8;
  undefined8 *****pppppuVar9;
  uint uVar10;
  long extraout_x8;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long alStack_b0 [4];
  undefined1 auStack_90 [16];
  undefined8 ****ppppuStack_80;
  undefined8 ****ppppuStack_78;
  undefined8 ****ppppuStack_70;
  undefined8 ***apppuStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000bb420(param_1,apppuStack_68);
  uVar3 = 0;
  func_0x0001034e04e0(0,0x112d4b600,&PTR__OBJC_CLASS___NSNull_1126aef28);
  puVar1 = PTR___sypN_11034f1a8;
  pppppuVar9 = &ppppuStack_78;
  pppppuVar4 = (undefined8 *****)apppuStack_68;
  func_0x000107c6147c(pppppuVar9,pppppuVar4,PTR___sypN_11034f1a8 + 8,uVar3,0);
  if ((int)pppppuVar9 == 0) {
    pppppuVar4 = &ppppuStack_78;
    func_0x000107c6147c(pppppuVar4,apppuStack_68,puVar1 + 8,PTR___sSSN_11034da80,0);
    ppppuVar7 = ppppuStack_70;
    if ((int)pppppuVar4 == 0) {
      pppppuVar9 = &ppppuStack_78;
      pppppuVar4 = (undefined8 *****)apppuStack_68;
      func_0x000107c6147c(pppppuVar9,pppppuVar4,puVar1 + 8,PTR___sSbN_11034dd40,0);
      if ((int)pppppuVar9 == 0) {
        uVar3 = 0;
        func_0x0001034e04e0(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        pppppuVar4 = &ppppuStack_80;
        pppppuVar9 = (undefined8 *****)apppuStack_68;
        func_0x000107c6147c(pppppuVar4,pppppuVar9,puVar1 + 8,uVar3,0);
        if ((int)pppppuVar4 == 0) {
          uVar3 = 0x112d472a8;
          func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
          pppppuVar4 = &ppppuStack_80;
          func_0x000107c6147c(pppppuVar4,apppuStack_68,puVar1 + 8,uVar3,0);
          if ((int)pppppuVar4 == 0) {
            uVar3 = 0x112daafe8;
            func_0x0001000285a8(0x112daafe8,&UNK_10d953970);
            pppppuVar4 = &ppppuStack_80;
            func_0x000107c6147c(pppppuVar4,apppuStack_68,puVar1 + 8,uVar3,0);
            if ((int)pppppuVar4 != 0) {
              pppppuVar9 = (undefined8 *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
              func_0x000107c61168();
              pppppuVar4 = (undefined8 *****)(puVar1 + 8);
              pppppuVar5 = (undefined8 *****)ppppuStack_80;
              func_0x000107c5fc48(ppppuStack_80);
              func_0x000107c6142c(ppppuStack_80);
              ppppuStack_78 = (undefined8 *****)0x0;
              func_0x000107c41300();
              goto LAB_1034df828;
            }
          }
          else {
            pppppuVar9 = (undefined8 *****)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
            func_0x000107c61168();
            pppppuVar5 = (undefined8 *****)ppppuStack_80;
            pppppuVar4 = (undefined8 *****)PTR___sSSN_11034da80;
            func_0x000107c5f9dc(ppppuStack_80,PTR___sSSN_11034da80,puVar1 + 8,
                                PTR___sSSSHsWP_11034da90);
            func_0x000107c6142c(ppppuStack_80);
            ppppuStack_78 = (undefined8 *****)0x0;
            func_0x000107c41300();
LAB_1034df828:
            func_0x000107c61180();
            func_0x000107c61170(pppppuVar5);
            pppppuVar5 = (undefined8 *****)ppppuStack_78;
            func_0x000107c61174(ppppuStack_78);
            if (pppppuVar9 == (undefined8 *****)0x0) {
              pppppuVar4 = pppppuVar5;
              func_0x000107c5ed30();
              func_0x000107c61170(pppppuVar5);
              func_0x000107c61654();
              func_0x000107c614ac(pppppuVar4);
            }
            else {
              pppppuVar6 = pppppuVar9;
              func_0x000107c5ee30();
              func_0x000107c61170(pppppuVar9);
              func_0x000107c5fb04(auStack_90 + lVar2);
              pppppuVar5 = pppppuVar6;
              pppppuVar9 = pppppuVar4;
              func_0x000107c5faf0(pppppuVar6,pppppuVar4,auStack_90 + lVar2);
              func_0x00010006c090(pppppuVar6);
              if (pppppuVar9 != (undefined8 *****)0x0) goto LAB_1034df914;
            }
          }
          ppppuStack_78 = (undefined8 *****)0x0;
          ppppuStack_70 = (undefined8 *****)0xe000000000000000;
          pppppuVar4 = &ppppuStack_78;
          func_0x000107c603d0(param_1,pppppuVar4,puVar1 + 8,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          pppppuVar5 = (undefined8 *****)ppppuStack_78;
          pppppuVar9 = (undefined8 *****)ppppuStack_70;
        }
        else {
          pppppuVar4 = (undefined8 *****)ppppuStack_80;
          func_0x000107c607d4();
          param_1 = (undefined8 *****)ppppuStack_80;
          if ((int)pppppuVar4 == 0) {
            pppppuVar6 = (undefined8 *****)ppppuStack_80;
            func_0x000107c417f0();
            func_0x000107c61180();
            pppppuVar5 = pppppuVar6;
            func_0x000107c5faec();
            pppppuVar4 = pppppuVar9;
            func_0x000107c61170(ppppuStack_80);
            func_0x000107c61170(pppppuVar6);
          }
          else {
            ppppuStack_78 = (undefined8 *****)0x0;
            ppppuStack_70 = (undefined8 *****)0xe000000000000000;
            func_0x000107c4223c(ppppuStack_80);
            pppppuVar4 = (undefined8 *****)PTR___ss26DefaultStringInterpolationVN_11034ec00;
            func_0x000107c5fddc(&ppppuStack_78,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                                PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08
                               );
            func_0x000107c61170(ppppuStack_80);
            pppppuVar5 = (undefined8 *****)ppppuStack_78;
            pppppuVar9 = (undefined8 *****)ppppuStack_70;
          }
        }
      }
      else {
        pppppuVar5 = (undefined8 *****)0x65757274;
        if ((char)ppppuStack_78 == '\0') {
          pppppuVar5 = (undefined8 *****)0x65736c6166;
        }
        pppppuVar9 = (undefined8 *****)0xe400000000000000;
        if ((char)ppppuStack_78 == '\0') {
          pppppuVar9 = (undefined8 *****)0xe500000000000000;
        }
      }
    }
    else {
      pppppuVar5 = (undefined8 *****)ppppuStack_78;
      pppppuVar9 = (undefined8 *****)ppppuStack_70;
      FUN_1034df274();
      pppppuVar4 = pppppuVar9;
      func_0x000107c6142c(ppppuVar7);
      param_1 = (undefined8 *****)ppppuVar7;
    }
  }
  else {
    func_0x000107c61170(ppppuStack_78);
    pppppuVar5 = (undefined8 *****)0x6c6c756e;
    pppppuVar9 = (undefined8 *****)0xe400000000000000;
  }
LAB_1034df914:
  ppppuVar7 = apppuStack_68;
  FUN_1034e0480();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar11._8_8_ = pppppuVar9;
    auVar11._0_8_ = pppppuVar5;
    return auVar11;
  }
  func_0x000107c60e78();
  *(undefined8 ******)((long)alStack_b0 + lVar2) = pppppuVar5;
  *(undefined8 ******)((long)alStack_b0 + lVar2 + 8) = param_1;
  *(undefined1 **)((long)alStack_b0 + lVar2 + 0x10) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_b0 + lVar2 + 0x18) = FUN_1034df958;
  pppppuVar9 = pppppuVar4;
  if (ppppuVar7 != (undefined8 ****)0x68746170 || pppppuVar4 != (undefined8 *****)0xe400000000000000
     ) {
    uVar8 = 0;
    pppppuVar9 = (undefined8 *****)0xe400000000000000;
    func_0x000107c605b8(0x68746170,0xe400000000000000,ppppuVar7,pppppuVar4,0);
    if ((uVar8 & 1) == 0) {
      pppppuVar9 = (undefined8 *****)0xeb0000000065756c;
      uVar8 = 0;
      if (((ppppuVar7 == (undefined8 ****)0x615679636167656c) &&
          (pppppuVar4 == (undefined8 *****)0xeb0000000065756c)) ||
         (func_0x000107c605b8(0x615679636167656c,0xeb0000000065756c,ppppuVar7,pppppuVar4,0),
         (uVar8 & 1) != 0)) {
        func_0x000107c6142c(pppppuVar4);
        uVar8 = 1;
      }
      else {
        uVar8 = 0x6c61567466697773;
        if ((ppppuVar7 == (undefined8 ****)0x6c61567466697773) &&
           (pppppuVar4 == (undefined8 *****)0xea00000000006575)) {
          func_0x000107c6142c(0xea00000000006575);
          uVar8 = 2;
        }
        else {
          pppppuVar9 = (undefined8 *****)0xea00000000006575;
          func_0x000107c605b8(0x6c61567466697773,0xea00000000006575,ppppuVar7,pppppuVar4,0);
          func_0x000107c6142c(pppppuVar4);
          uVar10 = 2;
          if ((uVar8 & 1) == 0) {
            uVar10 = 3;
          }
          uVar8 = (ulong)uVar10;
        }
      }
      goto LAB_1034df9b0;
    }
  }
  func_0x000107c6142c(pppppuVar4);
  uVar8 = 0;
LAB_1034df9b0:
  auVar12._8_8_ = pppppuVar9;
  auVar12._0_8_ = uVar8;
  return auVar12;
}



/* Entry: 1034df958; end: 1034dfa77;  */

undefined4 FUN_1034df958(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x68746170 || param_2 != -0x1c00000000000000) {
    uVar1 = 0;
    func_0x000107c605b8(0x68746170,0xe400000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if (((param_1 != 0x615679636167656c) || (param_2 != -0x14ffffffff9a8a94)) &&
         (func_0x000107c605b8(0x615679636167656c,0xeb0000000065756c,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0x6c61567466697773;
        if ((param_1 == 0x6c61567466697773) && (param_2 == -0x15ffffffffff9a8b)) {
          func_0x000107c6142c(0xea00000000006575);
          return 2;
        }
        func_0x000107c605b8(0x6c61567466697773,0xea00000000006575,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1034dfa78; end: 1034dfc53;  */

/* WARNING: Removing unreachable block (ram,0x0001034dfbec) */
/* WARNING: Removing unreachable block (ram,0x0001034dfbac) */
/* WARNING: Removing unreachable block (ram,0x0001034dfbfc) */
/* WARNING: Removing unreachable block (ram,0x0001034dfc10) */
/* WARNING: Removing unreachable block (ram,0x0001034dfb44) */

void FUN_1034dfa78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112f738c0;
  func_0x0001000285a8(0x112f738c0,&UNK_10dbcf488);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1034df234();
  func_0x000107c606e0(auStack_80 + -extraout_x8,&UNK_11065ca98,&UNK_11065ca98,lVar4,uVar1,uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar7 = lVar3;
    puStack_68 = puVar5;
    func_0x000107c604f4();
    uStack_53 = 2;
    puVar5 = &uStack_53;
    lVar8 = lVar3;
    puStack_78 = puVar6;
    lStack_70 = lVar7;
    func_0x000107c604f4();
    (**(code **)(lVar9 + 8))(auStack_80 + -extraout_x8,lVar3);
    FUN_1034e0480(param_2);
    *param_1 = puStack_68;
    param_1[1] = lVar4;
    param_1[2] = puStack_78;
    param_1[3] = lStack_70;
    param_1[4] = puVar5;
    param_1[5] = lVar8;
  }
  else {
    FUN_1034e0480(param_2);
  }
  return;
}



/* Entry: 1034dfc54; end: 1034dfcb3;  */

void FUN_1034dfc54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f73890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf2a0;
  func_0x000107c61520(&UNK_10dbcf2a0,&UNK_11065ca08);
  puRam0000000112f73890 = puVar1;
  return;
}



/* Entry: 1034dfcb4; end: 1034dfce3;  */

/* WARNING: Possible PIC construction at 0x0001034dfcc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034dfccc) */

void FUN_1034dfcb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1034dfce4; end: 1034dfdc3;  */

undefined8 * FUN_1034dfce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1034dfdc4; end: 1034dfe17;  */

undefined8 * FUN_1034dfdc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1034dfe18; end: 1034dfec3;  */

int FUN_1034dfe18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1034dfec4; end: 1034dff07;  */

undefined1 * FUN_1034dfec4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1034dff08; end: 1034dff6b;  */

undefined1 * FUN_1034dff08(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 1034dff6c; end: 1034dffbf;  */

undefined1 * FUN_1034dff6c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



/* Entry: 1034dffc0; end: 1034e00bf;  */

int FUN_1034dffc0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1034e00c0; end: 1034e015b;  */

undefined8 * FUN_1034e00c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x0001034e0060(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1034e015c; end: 1034e019f;  */

undefined8 * FUN_1034e015c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001034e0098(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1034e01a0; end: 1034e03b7;  */

int FUN_1034e01a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1034e03b8; end: 1034e03f7;  */

void FUN_1034e03b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf40c;
  func_0x000107c61520(&UNK_10dbcf40c,&UNK_11065ca98);
  puRam0000000112f738a8 = puVar1;
  return;
}



/* Entry: 1034e03f8; end: 1034e03fb;  */

void FUN_1034e03f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf3a4;
  func_0x000107c61520(&UNK_10dbcf3a4,&UNK_11065ca98);
  puRam0000000112f738b0 = puVar1;
  return;
}



/* Entry: 1034e03fc; end: 1034e043b;  */

void FUN_1034e03fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf3a4;
  func_0x000107c61520(&UNK_10dbcf3a4,&UNK_11065ca98);
  puRam0000000112f738b0 = puVar1;
  return;
}



/* Entry: 1034e043c; end: 1034e043f;  */

void FUN_1034e043c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf37c;
  func_0x000107c61520(&UNK_10dbcf37c,&UNK_11065ca98);
  puRam0000000112f738b8 = puVar1;
  return;
}



/* Entry: 1034e0440; end: 1034e047f;  */

void FUN_1034e0440(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f738b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbcf37c;
  func_0x000107c61520(&UNK_10dbcf37c,&UNK_11065ca98);
  puRam0000000112f738b8 = puVar1;
  return;
}



/* Entry: 1034e0480; end: 1034e049f;  */

void FUN_1034e0480(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001034e0494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1034e04a0; end: 1034e051f;  */

undefined8 FUN_1034e04a0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1034e0520; end: 1034e052f;  */

long FUN_1034e0520(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1034e0530; end: 1034e05db;  */

undefined1  [16] FUN_1034e0530(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c5ed2c();
  uVar2 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c3fcb0();
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = uVar3;
  return auVar1;
}



/* Entry: 1034e05dc; end: 1034e062b;  */

void FUN_1034e05dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  FUN_1034e062c(param_1,param_2,param_3);
  return;
}



/* Entry: 1034e062c; end: 1034e0853;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1034e062c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  long alStack_e8 [3];
  long lStack_d0;
  undefined **ppuStack_c8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126ad340;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = 0;
  FUN_1034e1e7c();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined **)(lVar3 + 0x10) = puVar1;
  lVar4 = 0x112f73438;
  func_0x0001000285a8(0x112f73438,&UNK_10dbcf4c0);
  func_0x000107c61534();
  uVar9 = 1;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  *(long *)(lVar4 + 0x38) = lVar2;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_11065cbf8;
  *(long *)(lVar4 + 0x20) = lVar3;
  lVar5 = 0;
  FUN_1034e19b8();
  lVar2 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  func_0x000107c6157c(lVar3);
  func_0x000107c6157c(param_3);
  lVar6 = 1;
  FUN_1034d8f50(1,2,1,lVar4);
  ppuStack_c8 = &PTR_DAT_11065cbd8;
  *(undefined8 *)(lVar6 + 0x10) = 2;
  alStack_e8[0] = lVar2;
  lStack_d0 = lVar5;
  FUN_1034db330(alStack_e8,lVar6 + 0x48);
  lVar2 = 0;
  func_0x0001034db388();
  lVar4 = lVar2;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar6;
  *(long *)(unaff_x20 + _DAT_112f738d8) = lVar3;
  lVar5 = 0;
  func_0x0001034db3a8();
  uVar8 = 7;
  func_0x000107c613fc();
  *(long *)(lVar5 + 0x40) = lVar2;
  *(undefined ***)(lVar5 + 0x48) = &PTR_DAT_11065c7b0;
  *(undefined8 *)(lVar5 + 0x10) = param_1;
  *(undefined8 *)(lVar5 + 0x18) = 200;
  *(undefined8 *)(lVar5 + 0x20) = 0x412e848000000000;
  *(long *)(lVar5 + 0x28) = lVar4;
  *(undefined8 *)(lVar5 + 0x50) = 10;
  *(long *)(unaff_x20 + _DAT_112f738e0) = lVar5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(lVar3);
  func_0x000107c61434(lVar6);
  puVar7 = &stack0xffffffffffffff08;
  func_0x000107c61154(puVar7,puVar1);
  func_0x000107c6142c(lVar6);
  func_0x000107c61574(lVar3);
  func_0x000107c61574(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return puVar7;
  }
  func_0x000107c60e78();
  func_0x000107c60bc4();
  puVar1 = &UNK_11065cbc0;
  func_0x000107c613fc(&UNK_11065cbc0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar8;
  puVar7 = (undefined1 *)0x1034e0e98;
  FUN_1034e062c(uVar9,0x1034e0e98,puVar1);
  return puVar7;
}



/* Entry: 1034e0854; end: 1034e08b3; -[SCUnlockableImpressionDataDiffLogger initWithUserBlizzardProvider:floatTolerance:] */

void FUN_1034e0854(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11065cbc0;
  func_0x000107c613fc(&UNK_11065cbc0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  FUN_1034e062c(param_1,0x1034e0e98,puVar1);
  return;
}



/* Entry: 1034e08b4; end: 1034e0b6f;  */

/* WARNING: Removing unreachable block (ram,0x0001034e09c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1034e08b4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = 0x776f64616873;
  if ((param_7 == 0x776f64616873) && (param_8 == -0x1a00000000000000)) {
    uVar9 = 1;
  }
  else {
    func_0x000107c605b8(0x776f64616873,0xe600000000000000,param_7,param_8,0);
    if ((uVar7 & 1) == 0) {
      if ((param_7 == 0x3276) && (param_8 == -0x1e00000000000000)) {
        uVar9 = 2;
      }
      else {
        uVar7 = 0;
        func_0x000107c605b8(0x3276,0xe200000000000000,param_7,param_8,0);
        uVar9 = 2;
        if ((uVar7 & 1) == 0) {
          uVar9 = 0;
        }
      }
    }
    else {
      uVar9 = 1;
    }
  }
  lVar10 = *(long *)(unaff_x20 + _DAT_112f738e0);
  FUN_1034db468(auStack_88,*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(lVar10 + 0x20),param_1,
                param_2,param_3,param_4,100,0,*(undefined8 *)(lVar10 + 0x18));
  puVar2 = *(undefined **)(lVar10 + 0x50);
  lVar6 = lStack_80;
  FUN_1034d7524();
  if ((param_4 & 1) == 0) {
    FUN_1034da7dc(auStack_88,auStack_b8);
LAB_1034e0a3c:
    puVar3 = puVar2;
    FUN_1034da61c(puVar2,lVar6,param_3,param_4);
  }
  else {
    func_0x000107c615f4(puVar2,2);
    FUN_1034da7dc(auStack_88,auStack_b8);
    uVar4 = 0;
    func_0x000107c605fc(0);
    puVar5 = puVar2;
    func_0x000107c61480(puVar2,uVar4);
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(puVar2);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar8 = *(long *)(puVar5 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(param_4 >> 1,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e0b64);
      (*pcVar1)();
    }
    if (lVar8 != (param_4 >> 1) - param_3) {
      func_0x000107c615e8();
      goto LAB_1034e0a3c;
    }
    puVar5 = puVar2;
    func_0x000107c61480(puVar2,uVar4);
    func_0x000107c615e8(puVar2);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) goto LAB_1034e0ae4;
  }
  func_0x000107c615e8(puVar2);
  puVar5 = puVar3;
LAB_1034e0ae4:
  uVar4 = *(undefined8 *)(lVar10 + 0x40);
  lVar6 = *(long *)(lVar10 + 0x48);
  func_0x0001000a8868(lVar10 + 0x28,uVar4);
  (**(code **)(lVar6 + 8))
            (uStack_68,auStack_88[0],*(undefined8 *)(lStack_80 + 0x10),uStack_70,puVar5,param_5,
             param_6,uVar9,uVar4,lVar6);
  func_0x000107c61574(puVar5);
  func_0x0001034da818(auStack_88);
  return auStack_88[0];
}



/* Entry: 1034e0b70; end: 1034e0cc3; -[SCUnlockableImpressionDataDiffLogger compareAndLogWithLegacyData:swiftData:adIdentifier:builderMode:] */

uint FUN_1034e0b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c5ee30(param_3);
  uVar4 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_4;
  func_0x000107c5ee30(param_4);
  uVar2 = uVar4;
  func_0x000107c61170(param_4);
  if (param_5 == 0) {
    lVar7 = 0;
    uVar6 = 0;
    uVar5 = uVar2;
  }
  else {
    lVar7 = param_5;
    func_0x000107c5faec(param_5);
    uVar5 = uVar2;
    func_0x000107c61170(param_5);
    uVar6 = uVar2;
  }
  uVar2 = param_6;
  func_0x000107c5faec(param_6);
  func_0x000107c61170(param_6);
  uVar3 = param_3;
  FUN_1034e08b4(param_3,param_2,uVar1,uVar4,lVar7,uVar6,uVar2,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
  func_0x00010006c090(uVar1,uVar4);
  func_0x00010006c090(param_3,param_2);
  func_0x000107c61170(param_1);
  return (uint)uVar3 & 1;
}



/* Entry: 1034e0cc4; end: 1034e0ddf; -[SCUnlockableImpressionDataDiffLogger logBuilderError:adIdentifier:builderMode:] */

/* WARNING: Possible PIC construction at 0x0001034e0d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e0d7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e0cc4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar3 = 0x776f64616873;
  func_0x000107c5faec(param_3);
  lVar1 = param_2;
  func_0x000107c5faec();
  if (((param_5 == 0x776f64616873) && (lVar1 == -0x1a00000000000000)) ||
     (func_0x000107c605b8(0x776f64616873,0xe600000000000000,param_5,lVar1,0), (uVar3 & 1) != 0)) {
    uVar2 = 1;
  }
  else if ((param_5 == 0x3276) && (lVar1 == -0x1e00000000000000)) {
    uVar2 = 2;
  }
  else {
    uVar3 = 0;
    func_0x000107c605b8(0x3276,0xe200000000000000,param_5,lVar1,0);
    uVar2 = 2;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
    }
  }
  func_0x000107c61174(param_1);
  FUN_1034e1a1c(param_3,param_2,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1034e0de0; end: 1034e0e3f; -[SCUnlockableImpressionDataDiffLogger init] */

void FUN_1034e0de0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdProtoImpressionDataImplementation.SCUnlockableImpressionDataDiffLogger",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e0e0c);
  (*pcVar1)();
}



/* Entry: 1034e0e40; end: 1034e0e77; -[SCUnlockableImpressionDataDiffLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001034e0e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e0e60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034e0e40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f738e0));
  return;
}



/* Entry: 1034e0e78; end: 1034e0eb7;  */

void FUN_1034e0e78(void)

{
  func_0x000107c61168(&PTR_PTR_1128dec50);
  return;
}



/* Entry: 1034e0eb8; end: 1034e0ef3;  */

void FUN_1034e0eb8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1034e0ef4; end: 1034e106f;  */

/* WARNING: Possible PIC construction at 0x0001034e0f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034e0fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034e1018: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e0fec) */
/* WARNING: Removing unreachable block (ram,0x0001034e101c) */

void FUN_1034e0ef4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (param_1 == 0) {
    return;
  }
  puVar2 = PTR_PTR_1126ad348;
  func_0x000107c610f8(PTR_PTR_1126ad348);
  func_0x000107c453e4();
  if (param_3 == 0) {
    if (param_4 == 0) {
      uVar3 = 0xe600000000000000;
      param_2 = 0x79636167656c;
    }
    else if (param_4 == 2) {
      uVar3 = 0xe200000000000000;
      param_2 = 0x3276;
    }
    else {
      if (param_4 != 1) {
        lStack_48 = param_4;
        func_0x000107c60614(&UNK_11065c6e0,&lStack_48,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e1070);
        (*pcVar1)();
      }
      uVar3 = 0xe600000000000000;
      param_2 = 0x776f64616873;
    }
    func_0x000107c5fadc(param_2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c52e68(puVar2);
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c522e4(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1034e1070; end: 1034e1093;  */

void FUN_1034e1070(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034e1094; end: 1034e10eb;  */

void FUN_1034e1094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1034e10ec(param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1034e10ec; end: 1034e19b7;  */

void FUN_1034e10ec(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  long lVar19;
  undefined *puVar20;
  long *plVar21;
  double dVar22;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined *puStack_78;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (param_2 != 0) {
    puVar6 = PTR_PTR_1126ad350;
    func_0x000107c610f8();
    func_0x000107c453e4();
    if (param_6 != 0) {
      func_0x000107c5fadc(param_5,param_6);
      func_0x000107c522e4(puVar6);
      func_0x000107c61170(param_5);
    }
    if (param_7 == 0) {
      uVar18 = 0xe600000000000000;
      uVar7 = 0x79636167656c;
    }
    else if (param_7 == 2) {
      uVar18 = 0xe200000000000000;
      uVar7 = 0x3276;
    }
    else {
      if (param_7 != 1) {
        lStack_88 = param_7;
        func_0x000107c60614(&UNK_11065c6e0,&lStack_88,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1034e19b8);
        (*pcVar5)();
      }
      uVar18 = 0xe600000000000000;
      uVar7 = 0x776f64616873;
    }
    func_0x000107c5fadc(uVar7,uVar18);
    func_0x000107c6142c(uVar18);
    func_0x000107c52e68(puVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c540f8(puVar6);
    func_0x000107c540d0(puVar6);
    dVar22 = (double)(long)param_1;
    if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034e198c);
      (*pcVar5)();
    }
    if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034e1990);
      (*pcVar5)();
    }
    if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1034e1994);
      (*pcVar5)();
    }
    func_0x000107c55ad0(puVar6);
    lVar19 = *(long *)(param_4 + 0x10);
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001034d9308(0,lVar19,0);
      puVar15 = PTR___sSSN_11034da80;
      plVar21 = (long *)(param_4 + 0x48);
      do {
        puVar20 = puStack_78;
        lVar11 = plVar21[-5];
        lVar2 = plVar21[-4];
        lVar14 = plVar21[-3];
        lVar3 = plVar21[-2];
        lVar12 = plVar21[-1];
        lVar4 = *plVar21;
        puVar8 = PTR_PTR_1126ad328;
        func_0x000107c610f8();
        func_0x000107c61434(lVar2);
        func_0x000107c61434(lVar3);
        func_0x000107c61434(lVar4);
        func_0x000107c453e4();
        lVar9 = lVar11;
        func_0x000107c5fadc(lVar11,lVar2);
        func_0x000107c57274(puVar8);
        func_0x000107c61170(lVar9);
        lVar9 = lVar11;
        lVar16 = lVar2;
        func_0x000107c5fb1c();
        lStack_88 = lVar9;
        lStack_80 = lVar16;
        func_0x000100e8b654();
        uStack_98 = uRam0000000112f739d8;
        uStack_90 = uRam0000000112f739e0;
        puVar10 = &uStack_98;
        func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_98 = uRam0000000112f739e8;
          uStack_90 = uRam0000000112f739f0;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f739f8;
          uStack_90 = uRam0000000112f73a00;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a08;
          uStack_90 = uRam0000000112f73a10;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a18;
          uStack_90 = uRam0000000112f73a20;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a28;
          uStack_90 = uRam0000000112f73a30;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a38;
          uStack_90 = uRam0000000112f73a40;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a48;
          uStack_90 = uRam0000000112f73a50;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          uStack_98 = uRam0000000112f73a58;
          uStack_90 = uRam0000000112f73a60;
          puVar10 = &uStack_98;
          lVar17 = lVar9;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e14d0;
          func_0x000107c6142c(lVar16);
          lVar13 = lVar14;
          func_0x000107c5fb5c(lVar14,lVar3);
          func_0x000107c61434(lVar3);
          lVar16 = lVar3;
          if (200 < lVar13) {
            lVar13 = 200;
            func_0x000101297580(200,lVar14,lVar3);
            func_0x000107c6142c(lVar3);
            func_0x000107c5fb2c(lVar13,lVar14,lVar16,lVar17);
            func_0x000107c6142c(lVar17);
            lStack_88 = lVar13;
            lStack_80 = lVar14;
            func_0x000107c61434(lVar14);
            func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
            func_0x000107c6142c(lVar14);
            lVar16 = lStack_80;
            lVar14 = lStack_88;
          }
        }
        else {
LAB_1034e14d0:
          func_0x000107c6142c(lVar16);
          lVar16 = -0x15ffffffffffa2bc;
          lVar14 = 0x455443414445525b;
        }
        func_0x000107c5fadc(lVar14,lVar16);
        func_0x000107c6142c(lVar16);
        func_0x000107c55bb8(puVar8);
        func_0x000107c61170(lVar14);
        lVar14 = lVar2;
        func_0x000107c5fb1c();
        uStack_98 = uRam0000000112f739d8;
        uStack_90 = uRam0000000112f739e0;
        puVar10 = &uStack_98;
        lStack_88 = lVar11;
        lStack_80 = lVar14;
        func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
        if (((ulong)puVar10 & 1) == 0) {
          uStack_98 = uRam0000000112f739e8;
          uStack_90 = uRam0000000112f739f0;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f739f8;
          uStack_90 = uRam0000000112f73a00;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a08;
          uStack_90 = uRam0000000112f73a10;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a18;
          uStack_90 = uRam0000000112f73a20;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a28;
          uStack_90 = uRam0000000112f73a30;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a38;
          uStack_90 = uRam0000000112f73a40;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a48;
          uStack_90 = uRam0000000112f73a50;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          uStack_98 = uRam0000000112f73a58;
          uStack_90 = uRam0000000112f73a60;
          puVar10 = &uStack_98;
          func_0x000107c6022c(puVar10,puVar15,puVar15,lVar9,lVar9);
          if (((ulong)puVar10 & 1) != 0) goto LAB_1034e16e4;
          func_0x000107c6142c(lVar14);
          lVar14 = lVar12;
          func_0x000107c5fb5c(lVar12,lVar4);
          func_0x000107c61434(lVar4);
          lVar11 = lVar4;
          if (200 < lVar14) {
            lVar14 = 200;
            func_0x000101297580(200,lVar12,lVar4);
            func_0x000107c6142c(lVar4);
            func_0x000107c5fb2c(lVar14,lVar12,lVar11,lVar9);
            func_0x000107c6142c(lVar9);
            lStack_88 = lVar14;
            lStack_80 = lVar12;
            func_0x000107c61434(lVar12);
            func_0x000107c5fb78(0x2e2e2e,0xe300000000000000);
            func_0x000107c6142c(lVar12);
            lVar12 = lStack_88;
            lVar11 = lStack_80;
          }
        }
        else {
LAB_1034e16e4:
          func_0x000107c6142c(lVar14);
          lVar12 = 0x455443414445525b;
          lVar11 = -0x15ffffffffffa2bc;
        }
        func_0x000107c5fadc(lVar12,lVar11);
        func_0x000107c6142c(lVar11);
        func_0x000107c59afc(puVar8);
        func_0x000107c6142c(lVar4);
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar2);
        func_0x000107c61170(lVar12);
        uVar1 = *(ulong *)(puVar20 + 0x10);
        puStack_78 = puVar20;
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar1) {
          func_0x0001034d9308(1 < *(ulong *)(puVar20 + 0x18),uVar1 + 1,1);
        }
        plVar21 = plVar21 + 6;
        *(ulong *)(puStack_78 + 0x10) = uVar1 + 1;
        *(undefined **)(puStack_78 + uVar1 * 8 + 0x20) = puVar8;
        lVar19 = lVar19 + -1;
        puVar20 = puStack_78;
      } while (lVar19 != 0);
    }
    uVar7 = 0;
    func_0x0001034e19d8(0);
    puVar15 = puVar20;
    func_0x000107c5fc48(puVar20,uVar7);
    func_0x000107c6142c(puVar20);
    func_0x000107c540fc(puVar6);
    func_0x000107c61170(puVar15);
    func_0x000107c4bfb0(param_2);
    func_0x000107c615e8(param_2);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1034e19b8; end: 1034e1a1b;  */

void FUN_1034e19b8(void)

{
  func_0x000107c61168(&PTR_PTR_112f73950);
  return;
}



/* Entry: 1034e1a1c; end: 1034e1b37;  */

/* WARNING: Possible PIC construction at 0x0001034e1ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034e1aec) */

void FUN_1034e1a1c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_48;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 == 0) {
    return;
  }
  if (param_3 == 0) {
    uVar3 = 0xe600000000000000;
    uVar4 = 0x79636167656c;
  }
  else if (param_3 == 2) {
    uVar3 = 0xe200000000000000;
    uVar4 = 0x3276;
  }
  else {
    if (param_3 != 1) {
      lStack_48 = param_3;
      func_0x000107c61174();
      func_0x000107c60614(&UNK_11065c6e0,&lStack_48,&UNK_11065c6e0,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034e1b38);
      (*pcVar1)();
    }
    uVar3 = 0xe600000000000000;
    uVar4 = 0x776f64616873;
  }
  func_0x000107c61174();
  func_0x000107c5fadc(uVar4,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000106bc7d30(lVar2,uVar4,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1034e1b38; end: 1034e1b5b;  */

void FUN_1034e1b38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1034e1b5c; end: 1034e1ba3;  */

void FUN_1034e1b5c(void)

{
  FUN_1034e1ba4();
  return;
}



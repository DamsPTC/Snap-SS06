/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102770328; end: 102770403;  */

void FUN_102770328(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar2 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x0001000834e4(unaff_x22 + 0x10);
  puVar3 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  func_0x000107c43d80();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5ed70();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59a00(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  FUN_1027704fc();
  (**(code **)(lVar2 + 8))(uVar5,uVar1);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102770400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102770404; end: 1027704fb;  */

void FUN_102770404(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000107c614b0(uVar2);
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar1,(undefined8 *)(unaff_x22 + 0x38),uVar2,uVar3,6);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  if ((int)uVar1 == 0) {
    func_0x000102770608();
    func_0x000107c614ac(uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0x50));
    func_0x000107c61654();
    func_0x000107c615c0(uVar1);
    func_0x000107c615c0(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027704f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1027704fc; end: 102770713;  */

void FUN_1027704fc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  lVar1 = -0x2fffffffffffffd9;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f0baaa0);
  uVar2 = 0;
  func_0x000107c5fe40(0);
  lVar3 = lVar1;
  func_0x000107c312f4(lVar1,uVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(uVar2);
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    uVar2 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0baad0);
    func_0x000107c40930(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&uStack_38);
    func_0x000107c5c2e0(uStack_38);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(uStack_38);
  }
  return;
}



/* Entry: 102770714; end: 1027707df;  */

void FUN_102770714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  func_0x000103bb4614();
  puVar4 = (undefined8 *)puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = puVar4;
  func_0x000107c61434();
  func_0x000103bb5934();
  uVar1 = puVar4[1];
  puVar2[6] = *puVar4;
  puVar2[7] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000107c61408(puVar2 + 4,2,PTR___sSSN_11034da80);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Entry: 1027707e0; end: 10277081b;  */

void FUN_1027707e0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10277081c; end: 102770827;  */

void FUN_10277081c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102770828; end: 10277084b;  */

void FUN_102770828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_102770904(param_1,param_2,param_4);
  return;
}



/* Entry: 10277084c; end: 102770853;  */

undefined8 FUN_10277084c(void)

{
  return 1;
}



/* Entry: 102770854; end: 1027708f3;  */

void FUN_102770854(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1027708f4; end: 102770903;  */

void FUN_1027708f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102770904; end: 102770b17;  */

void FUN_102770904(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long alStack_90 [6];
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar7 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_90[1] = 0;
      alStack_90[0] = 0;
      alStack_90[3] = 0;
      alStack_90[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_90);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_90[3] != 0) {
        plVar6 = &lStack_60;
        func_0x000107c6147c(plVar6,alStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar6 & 1) != 0) {
          func_0x000100083b20(alStack_90);
          lVar2 = alStack_90[3];
          func_0x0001000a8868(alStack_90,alStack_90[3]);
          lVar3 = lStack_60;
          (**(code **)(alStack_90[4] + 0x20))(lStack_60,uStack_58,lVar2,alStack_90[4]);
          func_0x000107c6142c(uStack_58);
          plVar6 = alStack_90;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            puVar4 = &UNK_110545e80;
            func_0x000107c613fc(&UNK_110545e80,0x20,7);
            *(long *)(puVar4 + 0x10) = unaff_x20;
            *(long *)(puVar4 + 0x18) = lVar3;
            func_0x000107c6157c();
            func_0x000107c61174(lVar3);
            uVar5 = 0xc1;
            func_0x000100859150(0xc1,0,0x48,3,0,0,&UNK_10dad6958,puVar4,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61170(lVar3);
            func_0x000107c61574(puVar4);
            func_0x000107c61574(uVar5);
            return;
          }
          func_0x0001000834e4(plVar6);
        }
        goto LAB_102770ac8;
      }
    }
  }
  plVar6 = alStack_90;
  func_0x00010006e7f4(plVar6);
LAB_102770ac8:
  func_0x000102770b48();
  func_0x000107c613f8(&UNK_110545f18,plVar6,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 102770b18; end: 102770b27;  */

undefined1  [16] FUN_102770b18(void)

{
  return ZEXT816(0x110545e60);
}



/* Entry: 102770b28; end: 102770b87;  */

void FUN_102770b28(void)

{
  func_0x000107c61168(&PTR_PTR_112ebc9f8);
  return;
}



/* Entry: 102770b88; end: 102770beb;  */

void FUN_102770b88(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102770bec;
  plVar4[8] = lVar1;
  plVar4[9] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcbc();
  plVar4[10] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xb] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xc] = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar4[0xd] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0xe] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xf] = uVar2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar3;
  func_0x000107c5fce8();
  plVar4[0x10] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar4[0x11] = lVar3;
  plVar4[0x12] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102770210,lVar3,lVar1);
  return;
}



/* Entry: 102770bec; end: 102770c27;  */

void FUN_102770bec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102770c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102770c28; end: 102770d17;  */

uint FUN_102770c28(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102770d18; end: 102770d57;  */

void FUN_102770d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebca78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad69c8;
  func_0x000107c61520(&UNK_10dad69c8,&UNK_110545f18);
  puRam0000000112ebca78 = puVar1;
  return;
}



/* Entry: 102770d58; end: 102770dd7;  */

void FUN_102770d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  puVar1 = &UNK_110545fa0;
  func_0x000107c613fc(&UNK_110545fa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102770ebc,puVar1);
  return;
}



/* Entry: 102770dd8; end: 102770ebb;  */

void FUN_102770dd8(long *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  
  lVar2 = param_2;
  FUN_1027714a8();
  lVar3 = lVar2;
  func_0x000107c613fc();
  lVar4 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  func_0x000107c6157c(param_2);
  puVar5 = param_3;
  func_0x000107c6157c();
  func_0x000103bb42e4();
  uVar1 = puVar5[1];
  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  func_0x000107c61434();
  lVar6 = lVar4;
  func_0x000100111634();
  func_0x000107c61588(lVar4);
  func_0x000100bcb1dc((undefined8 *)(lVar4 + 0x20));
  *(long *)(lVar3 + 0x10) = lVar6;
  *(long *)(lVar3 + 0x18) = param_2;
  *(undefined8 **)(lVar3 + 0x20) = param_3;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110545fb8;
  *param_1 = lVar3;
  return;
}



/* Entry: 102770ebc; end: 102770ec3;  */

void FUN_102770ebc(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar3 = *(undefined8 **)(unaff_x20 + 0x18);
  lVar4 = lVar1;
  FUN_1027714a8();
  lVar5 = lVar4;
  func_0x000107c613fc();
  lVar6 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  func_0x000107c6157c(lVar1);
  puVar7 = puVar3;
  func_0x000107c6157c();
  func_0x000103bb42e4();
  uVar2 = puVar7[1];
  *(undefined8 *)(lVar6 + 0x20) = *puVar7;
  *(undefined8 *)(lVar6 + 0x28) = uVar2;
  func_0x000107c61434();
  lVar8 = lVar6;
  func_0x000100111634();
  func_0x000107c61588(lVar6);
  func_0x000100bcb1dc((undefined8 *)(lVar6 + 0x20));
  *(long *)(lVar5 + 0x10) = lVar8;
  *(long *)(lVar5 + 0x18) = lVar1;
  *(undefined8 **)(lVar5 + 0x20) = puVar3;
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110545fb8;
  *param_1 = lVar5;
  return;
}



/* Entry: 102770ec4; end: 102770f7b;  */

long FUN_102770ec4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb42e4();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000100bcb1dc(puVar2 + 4);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return unaff_x20;
}



/* Entry: 102770f7c; end: 102770fe7;  */

void FUN_102770f7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102770fe8;
  plVar2[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102788140,0,0);
  return;
}



/* Entry: 102770fe8; end: 102771097;  */

void FUN_102770fe8(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  *(long *)(lVar4 + 0x58) = unaff_x20;
  func_0x000107c615c0(uVar1);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  if (unaff_x20 == 0) {
    *(byte *)(lVar4 + 0x60) = param_1 & 1;
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_102771098;
  }
  else {
    func_0x000100eea164();
    func_0x000107c5fca8(uVar2,uVar1);
    pcVar3 = FUN_10277112c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2,uVar1);
  return;
}



/* Entry: 102771098; end: 10277112b;  */

void FUN_102771098(void)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long unaff_x22;
  
  cVar2 = *(char *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  if (cVar2 == '\x01') {
    func_0x000100083b20(unaff_x22 + 0x10);
    lVar3 = *(long *)(unaff_x22 + 0x28);
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,lVar3);
    (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
    if (lVar3 != 0) {
      func_0x000107c42008();
      func_0x000107c615e8(lVar3);
    }
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000102771128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277112c; end: 10277119b;  */

void FUN_10277112c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x48));
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102771164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277119c; end: 1027711a7;  */

void FUN_10277119c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 1027711a8; end: 1027711cb;  */

void FUN_1027711a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_102771284(param_1,param_2,param_4);
  return;
}



/* Entry: 1027711cc; end: 1027711d3;  */

undefined8 FUN_1027711cc(void)

{
  return 1;
}



/* Entry: 1027711d4; end: 102771273;  */

void FUN_1027711d4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102771274; end: 102771283;  */

void FUN_102771274(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102771284; end: 102771497;  */

void FUN_102771284(long *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  long alStack_90 [6];
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_3 == 0) || (FUN_10278552c(), *(long *)(param_3 + 0x10) == 0)) {
    alStack_90[1] = 0;
    alStack_90[0] = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
  }
  else {
    lVar2 = *param_1;
    uVar1 = param_1[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(param_3);
    uVar7 = uVar1;
    func_0x000100029284(lVar2);
    if ((uVar7 & 1) == 0) {
      func_0x000107c6142c(param_3);
      alStack_90[1] = 0;
      alStack_90[0] = 0;
      alStack_90[3] = 0;
      alStack_90[2] = 0;
      func_0x000107c6142c(uVar1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_3 + 0x38) + lVar2 * 0x20,alStack_90);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(param_3);
      if (alStack_90[3] != 0) {
        plVar6 = &lStack_60;
        func_0x000107c6147c(plVar6,alStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)plVar6 & 1) != 0) {
          func_0x000100083b20(alStack_90);
          lVar2 = alStack_90[3];
          func_0x0001000a8868(alStack_90,alStack_90[3]);
          lVar3 = lStack_60;
          (**(code **)(alStack_90[4] + 0x20))(lStack_60,uStack_58,lVar2,alStack_90[4]);
          func_0x000107c6142c(uStack_58);
          plVar6 = alStack_90;
          if (lVar3 != 0) {
            func_0x0001000834e4();
            puVar4 = &UNK_110546000;
            func_0x000107c613fc(&UNK_110546000,0x20,7);
            *(long *)(puVar4 + 0x10) = lVar3;
            *(long *)(puVar4 + 0x18) = unaff_x20;
            func_0x000107c61174(lVar3);
            func_0x000107c6157c();
            uVar5 = 0xc1;
            func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad6ac8,puVar4,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61170(lVar3);
            func_0x000107c61574(puVar4);
            func_0x000107c61574(uVar5);
            return;
          }
          func_0x0001000834e4(plVar6);
        }
        goto LAB_102771448;
      }
    }
  }
  plVar6 = alStack_90;
  func_0x00010006e7f4(plVar6);
LAB_102771448:
  func_0x0001027714c8();
  func_0x000107c613f8(&UNK_110546098,plVar6,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 102771498; end: 1027714a7;  */

undefined1  [16] FUN_102771498(void)

{
  return ZEXT816(0x110545fe0);
}



/* Entry: 1027714a8; end: 102771507;  */

void FUN_1027714a8(void)

{
  func_0x000107c61168(&PTR_PTR_112ebcac0);
  return;
}



/* Entry: 102771508; end: 10277156b;  */

void FUN_102771508(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10277156c;
  plVar4[7] = lVar2;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[8] = lVar2;
  func_0x000107c5fce8();
  plVar4[9] = lVar2;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  plVar4[10] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102770fe8;
  plVar3[2] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102788140,0,0);
  return;
}



/* Entry: 10277156c; end: 1027715a7;  */

void FUN_10277156c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027715a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1027715a8; end: 102771697;  */

uint FUN_1027715a8(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102771698; end: 1027716d7;  */

void FUN_102771698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcb38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad6b34;
  func_0x000107c61520(&UNK_10dad6b34,&UNK_110546098);
  puRam0000000112ebcb38 = puVar1;
  return;
}



/* Entry: 1027716d8; end: 102771723;  */

void FUN_1027716d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027717f8,param_1);
  return;
}



/* Entry: 102771724; end: 1027717f7;  */

void FUN_102771724(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = param_2;
  FUN_102771ef4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar4[3] = 2;
  puVar4[2] = 1;
  puVar5 = puVar4;
  func_0x000103bb4674();
  uVar1 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = uVar1;
  func_0x000107c61434();
  puVar5 = puVar4;
  func_0x000100111634();
  func_0x000107c61588(puVar4);
  func_0x000100bcb1dc(puVar4 + 4);
  *(undefined8 **)(lVar3 + 0x10) = puVar5;
  *(long *)(lVar3 + 0x18) = param_2;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110546138;
  *param_1 = lVar3;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 1027717f8; end: 1027717ff;  */

void FUN_1027717f8(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  FUN_102771ef4();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar4[3] = 2;
  puVar4[2] = 1;
  puVar5 = puVar4;
  func_0x000103bb4674();
  uVar1 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = uVar1;
  func_0x000107c61434();
  puVar5 = puVar4;
  func_0x000100111634();
  func_0x000107c61588(puVar4);
  func_0x000100bcb1dc(puVar4 + 4);
  *(undefined8 **)(lVar3 + 0x10) = puVar5;
  *(long *)(lVar3 + 0x18) = unaff_x20;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_110546138;
  *param_1 = lVar3;
  func_0x000107c6157c();
  return;
}



/* Entry: 102771800; end: 1027718af;  */

long FUN_102771800(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb4674();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000100bcb1dc(puVar2 + 4);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 1027718b0; end: 102771b83;  */

void FUN_1027718b0(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  ulong uStack_58;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (((ulong)param_1 & 1) == 0) {
    return;
  }
  if ((param_4 == 0) || (FUN_10278552c(), *(long *)(param_4 + 0x10) == 0)) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    lVar2 = *param_1;
    uVar9 = param_1[1];
    func_0x000107c61434(uVar9);
    func_0x000107c61434(param_4);
    uVar8 = uVar9;
    func_0x000100029284(lVar2);
    if ((uVar8 & 1) == 0) {
      func_0x000107c6142c(param_4);
      uStack_88 = 0;
      uStack_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
      func_0x000107c6142c(uVar9);
    }
    else {
      func_0x0001000bb420(*(long *)(param_4 + 0x38) + lVar2 * 0x20,&uStack_90);
      func_0x000107c6142c(uVar9);
      func_0x000107c6142c(param_4);
      puVar6 = PTR___sypN_11034f1a8;
      if (lStack_78 != 0) {
        puVar4 = (undefined8 *)&uStack_60;
        func_0x000107c6147c(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar4 & 1) == 0) goto LAB_102771a50;
        lVar2 = CONCAT71(uStack_5f,uStack_60);
        func_0x000100083b20(&uStack_90);
        lVar1 = lStack_78;
        func_0x0001000a8868(&uStack_90,lStack_78);
        uVar9 = uStack_58;
        (**(code **)(lStack_70 + 0x20))(lVar2,uStack_58,lVar1,lStack_70);
        func_0x000107c6142c(uStack_58);
        puVar4 = &uStack_90;
        if (lVar2 == 0) {
          func_0x0001000834e4(puVar4);
          goto LAB_102771a50;
        }
        func_0x0001000834e4();
        if (param_3 == 0) {
          uStack_88 = 0;
          uStack_90 = 0;
          lStack_78 = 0;
          uStack_80 = 0;
LAB_102771af4:
          func_0x00010006e7f4(&uStack_90);
        }
        else {
          ppuVar3 = &PTR____CFConstantStringClassReference_110f0e518;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0e518);
          if (*(long *)(param_3 + 0x10) == 0) {
LAB_102771ab4:
            uStack_88 = 0;
            uStack_90 = 0;
            lStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            func_0x000107c61434(param_3);
            uVar8 = uVar9;
            func_0x000100029284(ppuVar3);
            if ((uVar8 & 1) == 0) {
              func_0x000107c6142c(param_3);
              goto LAB_102771ab4;
            }
            func_0x0001000bb420(*(long *)(param_3 + 0x38) + (long)ppuVar3 * 0x20,&uStack_90);
            func_0x000107c6142c(uVar9);
            uVar9 = param_3;
          }
          func_0x000107c6142c(uVar9);
          if (lStack_78 == 0) goto LAB_102771af4;
          puVar5 = &uStack_60;
          func_0x000107c6147c(puVar5,&uStack_90,puVar6 + 8,PTR___sSbN_11034dd40,6);
          if ((int)puVar5 != 0) goto LAB_102771b00;
        }
        uStack_60 = 0;
LAB_102771b00:
        puVar6 = &UNK_110546120;
        func_0x000107c613fc(&UNK_110546120,0x19,7);
        *(long *)(puVar6 + 0x10) = lVar2;
        puVar6[0x18] = uStack_60;
        func_0x000107c61174(lVar2);
        uVar7 = 0xc1;
        func_0x0001001ca524(0xc1,0,0x48,3,0,0,&UNK_10dad6bb0,puVar6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61170(lVar2);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(uVar7);
        return;
      }
    }
  }
  puVar4 = &uStack_90;
  func_0x00010006e7f4(puVar4);
LAB_102771a50:
  FUN_102771e00();
  func_0x000107c613f8(&UNK_1105461f0,puVar4,0,0);
  func_0x000107c61654();
  return;
}



/* Entry: 102771b84; end: 102771c03;  */

void FUN_102771b84(undefined8 param_1,long param_2,byte param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102771c04;
  plVar2[2] = param_2;
  *(byte *)(plVar2 + 7) = (param_3 ^ 0xff) & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787a9c,0,0);
  return;
}



/* Entry: 102771c04; end: 102771c83;  */

void FUN_102771c04(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  *(long *)(lVar3 + 0x28) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102771c84;
  }
  else {
    pcVar2 = (code *)0x102771cb4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102771c84; end: 102771d1b;  */

void FUN_102771c84(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102771cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102771d1c; end: 102771d27;  */

void FUN_102771d1c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102771d28; end: 102771d47;  */

void FUN_102771d28(void)

{
  FUN_1027718b0();
  return;
}



/* Entry: 102771d48; end: 102771d4f;  */

undefined8 FUN_102771d48(void)

{
  return 1;
}



/* Entry: 102771d50; end: 102771def;  */

void FUN_102771d50(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102771df0; end: 102771dff;  */

void FUN_102771df0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102771e00; end: 102771e3f;  */

void FUN_102771e00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcb40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad6ce0;
  func_0x000107c61520(&UNK_10dad6ce0,&UNK_1105461f0);
  puRam0000000112ebcb40 = puVar1;
  return;
}



/* Entry: 102771e40; end: 102771ea7;  */

void FUN_102771e40(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102771ea8;
  lVar2 = 0;
  func_0x000107c5fcec();
  plVar4[2] = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar2;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  plVar4[4] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102771c04;
  plVar3[2] = lVar5;
  *(byte *)(plVar3 + 7) = (bVar1 ^ 0xff) & 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102787a9c,0,0);
  return;
}



/* Entry: 102771ea8; end: 102771ee3;  */

void FUN_102771ea8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102771ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102771ee4; end: 102771ef3;  */

undefined1  [16] FUN_102771ee4(void)

{
  return ZEXT816(0x110546160);
}



/* Entry: 102771ef4; end: 102771f13;  */

void FUN_102771ef4(void)

{
  func_0x000107c61168(&PTR_PTR_112ebcb88);
  return;
}



/* Entry: 102771f14; end: 102772003;  */

uint FUN_102771f14(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 102772004; end: 102772043;  */

void FUN_102772004(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad6cb8;
  func_0x000107c61520(&UNK_10dad6cb8,&UNK_1105461f0);
  puRam0000000112ebcbf0 = puVar1;
  return;
}



/* Entry: 102772044; end: 10277208f;  */

void FUN_102772044(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebcbf8,&UNK_10dad6d20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027720e8,param_1);
  return;
}



/* Entry: 102772090; end: 1027720e7;  */

void FUN_102772090(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001038d9cac(0);
  func_0x000107c613fc();
  pcVar1 = FUN_102772170;
  func_0x0001038d8abc(FUN_102772170,param_2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1027720e8; end: 1027720ff;  */

void FUN_1027720e8(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001038d9cac(0);
  func_0x000107c613fc();
  pcVar1 = FUN_102772170;
  func_0x0001038d8abc();
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102772100; end: 10277216f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102772100(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112fac928);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102772170; end: 102772177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102772170(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112fac928);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102772178; end: 1027721b7;  */

void FUN_102772178(void)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x0001000823a8(FUN_1027721b8,0);
  return;
}



/* Entry: 1027721b8; end: 102772277;  */

void FUN_1027721b8(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1027724c0();
  lVar2 = param_2;
  func_0x000107c613fc();
  puVar3 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar3[3] = 2;
  puVar3[2] = 1;
  puVar4 = puVar3;
  func_0x000103bb48cc();
  uVar1 = puVar4[1];
  puVar3[4] = *puVar4;
  puVar3[5] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar3;
  func_0x000100111634();
  func_0x000107c61588(puVar3);
  func_0x000100bcb1dc(puVar3 + 4);
  *(undefined8 **)(lVar2 + 0x10) = puVar4;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110546288;
  *param_1 = lVar2;
  return;
}



/* Entry: 102772278; end: 10277231b;  */

long FUN_102772278(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb48cc();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000100bcb1dc(puVar2 + 4);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar3;
  return unaff_x20;
}



/* Entry: 10277231c; end: 10277233f;  */

void FUN_10277231c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102772340; end: 10277234b;  */

void FUN_102772340(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 10277234c; end: 1027723b7;  */

void FUN_10277234c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  long *unaff_x20;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(*unaff_x20 + 0x10));
  if ((param_1 & 1) != 0) {
    uVar1 = 0;
    func_0x0001038d68fc();
    func_0x0001038d661c();
    if ((uVar1 & 1) == 0) {
      FUN_102772470();
      func_0x000107c613f8(&UNK_110546340,uVar1,0,0);
      func_0x000107c61654();
    }
  }
  return;
}



/* Entry: 1027723b8; end: 1027723bf;  */

undefined8 FUN_1027723b8(void)

{
  return 1;
}



/* Entry: 1027723c0; end: 10277245f;  */

void FUN_1027723c0(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102772460; end: 10277246f;  */

void FUN_102772460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102772470; end: 1027724af;  */

void FUN_102772470(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad6e8c;
  func_0x000107c61520(&UNK_10dad6e8c,&UNK_110546340);
  puRam0000000112ebcc00 = puVar1;
  return;
}



/* Entry: 1027724b0; end: 1027724bf;  */

undefined1  [16] FUN_1027724b0(void)

{
  return ZEXT816(0x1105462b0);
}



/* Entry: 1027724c0; end: 1027724df;  */

void FUN_1027724c0(void)

{
  func_0x000107c61168(&PTR_PTR_112ebcc48);
  return;
}



/* Entry: 1027724e0; end: 1027725cf;  */

uint FUN_1027724e0(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1027725d0; end: 10277260f;  */

void FUN_1027725d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebcca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad6e64;
  func_0x000107c61520(&UNK_10dad6e64,&UNK_110546340);
  puRam0000000112ebcca8 = puVar1;
  return;
}



/* Entry: 102772610; end: 10277265b;  */

void FUN_102772610(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102772730,param_1);
  return;
}



/* Entry: 10277265c; end: 10277272f;  */

void FUN_10277265c(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = param_2;
  FUN_102772914();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar4[3] = 2;
  puVar4[2] = 1;
  puVar5 = puVar4;
  func_0x000103bb49f8();
  uVar1 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = uVar1;
  func_0x000107c61434();
  puVar5 = puVar4;
  func_0x000100111634();
  func_0x000107c61588(puVar4);
  func_0x000100bcb1dc(puVar4 + 4);
  *(undefined8 **)(lVar3 + 0x10) = puVar5;
  *(long *)(lVar3 + 0x18) = param_2;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105463b8;
  *param_1 = lVar3;
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 102772730; end: 102772737;  */

void FUN_102772730(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  FUN_102772914();
  lVar3 = lVar2;
  func_0x000107c613fc();
  puVar4 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar4[3] = 2;
  puVar4[2] = 1;
  puVar5 = puVar4;
  func_0x000103bb49f8();
  uVar1 = puVar5[1];
  puVar4[4] = *puVar5;
  puVar4[5] = uVar1;
  func_0x000107c61434();
  puVar5 = puVar4;
  func_0x000100111634();
  func_0x000107c61588(puVar4);
  func_0x000100bcb1dc(puVar4 + 4);
  *(undefined8 **)(lVar3 + 0x10) = puVar5;
  *(long *)(lVar3 + 0x18) = unaff_x20;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_1105463b8;
  *param_1 = lVar3;
  func_0x000107c6157c();
  return;
}



/* Entry: 102772738; end: 1027727e7;  */

long FUN_102772738(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar2[3] = 2;
  puVar2[2] = 1;
  puVar3 = puVar2;
  func_0x000103bb49f8();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar2[5] = uVar1;
  func_0x000107c61434();
  puVar3 = puVar2;
  func_0x000100111634();
  func_0x000107c61588(puVar2);
  func_0x000100bcb1dc(puVar2 + 4);
  *(undefined8 **)(unaff_x20 + 0x10) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Entry: 1027727e8; end: 102772813;  */

void FUN_1027727e8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102772814; end: 10277281f;  */

void FUN_102772814(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Entry: 102772820; end: 10277283f;  */

void FUN_102772820(void)

{
  FUN_102772840();
  return;
}



/* Entry: 102772840; end: 102772903;  */

void FUN_102772840(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x0001000f66f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if ((param_1 & 1) != 0) {
    puVar1 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    uVar2 = 0x6c706d6920746f4e;
    func_0x000107c5fadc(0x6c706d6920746f4e,0xef6465746e656d65);
    func_0x000107c40b14(puVar1);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&uStack_38);
    func_0x000107c5c2e0(uStack_38);
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(uStack_38);
  }
  return;
}



/* Entry: 102772904; end: 102772913;  */

undefined1  [16] FUN_102772904(void)

{
  return ZEXT816(0x1105463e0);
}



/* Entry: 102772914; end: 102772933;  */

void FUN_102772914(void)

{
  func_0x000107c61168(&PTR_PTR_112ebccf0);
  return;
}



/* Entry: 102772934; end: 1027729ef;  */

void FUN_102772934(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc9b0,&UNK_10dad68a0);
  puVar1 = &UNK_110546408;
  func_0x000107c613fc(&UNK_110546408,0x38,7);
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
  func_0x0001000823a8(FUN_102772b5c,puVar1);
  return;
}



/* Entry: 1027729f0; end: 102772b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027729f0(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lStack_a0;
  long lStack_98;
  
  lVar4 = param_2;
  FUN_102774bb8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ebcd58;
  puVar6 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar6[3] = 2;
  puVar6[2] = 1;
  puVar7 = puVar6;
  func_0x000103bb57f0();
  uVar1 = puVar7[1];
  puVar6[4] = *puVar7;
  puVar6[5] = uVar1;
  func_0x000107c61434();
  puVar7 = puVar6;
  func_0x000100111634();
  func_0x000107c61588(puVar6);
  func_0x000100bcb1dc(puVar6 + 4);
  *(undefined8 **)(lVar5 + lVar3) = puVar7;
  *(undefined1 *)(lVar5 + _DAT_112ebcd60) = 0;
  *(long *)(lVar5 + _DAT_112ebcd68) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112ebcd70) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112ebcd78) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112ebcd80) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112ebcd88) = param_6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar5;
  lStack_98 = lVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  plVar8 = &lStack_a0;
  func_0x000107c61154(plVar8,puVar2);
  param_1[3] = lVar4;
  param_1[4] = (long)&PTR_DAT_110546420;
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 102772b5c; end: 102772b6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102772b5c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar8 = lVar1;
  FUN_102774bb8();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar7 = _DAT_112ebcd58;
  puVar10 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar10[3] = 2;
  puVar10[2] = 1;
  puVar11 = puVar10;
  func_0x000103bb57f0();
  uVar3 = puVar11[1];
  puVar10[4] = *puVar11;
  puVar10[5] = uVar3;
  func_0x000107c61434();
  puVar11 = puVar10;
  func_0x000100111634();
  func_0x000107c61588(puVar10);
  func_0x000100bcb1dc(puVar10 + 4);
  *(undefined8 **)(lVar9 + lVar7) = puVar11;
  *(undefined1 *)(lVar9 + _DAT_112ebcd60) = 0;
  *(long *)(lVar9 + _DAT_112ebcd68) = lVar1;
  *(undefined8 *)(lVar9 + _DAT_112ebcd70) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112ebcd78) = uVar2;
  *(undefined8 *)(lVar9 + _DAT_112ebcd80) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112ebcd88) = uVar13;
  puVar6 = PTR_s_init_1125d9248;
  lStack_a0 = lVar9;
  lStack_98 = lVar8;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar13);
  plVar12 = &lStack_a0;
  func_0x000107c61154(plVar12,puVar6);
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_110546420;
  *param_1 = (long)plVar12;
  return;
}



/* Entry: 102772b6c; end: 102772c97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102772b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined1 auStack_a0 [8];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ebcd58;
  puVar3 = (undefined8 *)0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  puVar3[3] = 2;
  puVar3[2] = 1;
  puVar4 = puVar3;
  func_0x000103bb57f0();
  uVar1 = puVar4[1];
  puVar3[4] = *puVar4;
  puVar3[5] = uVar1;
  func_0x000107c61434();
  puVar4 = puVar3;
  func_0x000100111634();
  func_0x000107c61588(puVar3);
  func_0x000100bcb1dc(puVar3 + 4);
  *(undefined8 **)(unaff_x20 + lVar2) = puVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ebcd60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebcd68) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebcd70) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebcd78) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebcd80) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebcd88) = param_5;
  func_0x000107c61154(auStack_a0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102772c98; end: 102772d0f;  */

void FUN_102772c98(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  plVar2 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102772d10;
  plVar2[0x21] = param_3;
  plVar2[0x22] = param_2;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar2[0x23] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[0x24] = lVar3;
  plVar2[0x25] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102772e88,lVar3,lVar4);
  return;
}



/* Entry: 102772d10; end: 102772d8f;  */

void FUN_102772d10(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x18);
  *(long *)(lVar3 + 0x30) = unaff_x20;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_102772d90;
  }
  else {
    pcVar2 = (code *)0x102772dd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar1);
  return;
}



/* Entry: 102772d90; end: 102772e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102772d90(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ebcd60) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102772dcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102772e1c; end: 102772e87;  */

void FUN_102772e1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x118) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102772e88,uVar1,uVar2);
  return;
}



/* Entry: 102772e88; end: 10277303f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102772e88(void)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,lVar5);
  (**(code **)(lVar4 + 8))(lVar5,lVar4);
  *(long *)(unaff_x22 + 0x130) = lVar5;
  if (lVar5 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
    puVar3 = (undefined1 *)(unaff_x22 + 0x10);
    func_0x0001000834e4();
    func_0x000102774c38();
    func_0x000107c613f8(&UNK_110546500,puVar3,0,0);
    *puVar3 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x0001000834e4(unaff_x22 + 0x10);
    func_0x000100083b20(unaff_x22 + 0xf8);
    lVar4 = *(long *)(unaff_x22 + 0xf8);
    lVar1 = *(long *)(lVar4 + _DAT_112ff76b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    lVar4 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x138) = lVar4;
    func_0x000107c61170();
    if (lVar4 != 0) {
      FUN_102787314();
      *(long *)(unaff_x22 + 0x140) = lVar1;
      plVar2 = (long *)0x130;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x148) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102773040;
      lVar5 = *(long *)(unaff_x22 + 0x110);
      plVar2[0x19] = lVar1;
      plVar2[0x1a] = lVar5;
      plVar2[0x18] = unaff_x22 + 0x60;
      lVar4 = 0;
      func_0x000107c5fcec();
      lVar5 = lVar4;
      func_0x000107c5fce8();
      plVar2[0x1b] = lVar5;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar2[0x1c] = lVar4;
      plVar2[0x1d] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102773ba4,lVar4,lVar5);
      return;
    }
    puVar3 = *(undefined1 **)(unaff_x22 + 0x118);
    func_0x000107c61574();
    func_0x000102774c38();
    func_0x000107c613f8(&UNK_110546500,puVar3,0,0);
    *puVar3 = 3;
    func_0x000107c61654();
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010277303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102773040; end: 1027730a7;  */

void FUN_102773040(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x150) = param_1;
  *(undefined8 *)(lVar2 + 0x158) = param_2;
  *(long *)(lVar2 + 0x160) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  func_0x000107c61170(*(undefined8 *)(lVar2 + 0x140));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1027730a8;
  }
  else {
    pcVar1 = FUN_10277391c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x120),*(undefined8 *)(lVar2 + 0x128));
  return;
}



/* Entry: 1027730a8; end: 102773503;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027730a8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar12;
  long lVar13;
  undefined1 *puVar14;
  long unaff_x22;
  long *plVar15;
  long *plVar16;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  puVar9 = *(undefined1 **)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x80);
  lVar4 = 0;
  func_0x000102774bd8();
  lVar13 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar13 + _DAT_112ebcdb8) = uVar6;
  plVar16 = (long *)(unaff_x22 + 0xd8);
  *plVar16 = lVar13;
  *(long *)(unaff_x22 + 0xe0) = lVar4;
  puVar5 = PTR_s_init_1125d9248;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(plVar16,puVar5);
  *(long **)(unaff_x22 + 0x168) = plVar16;
  func_0x000107c53fcc(puVar9);
  puVar5 = PTR_PTR_1126bcf68;
  func_0x000107c610f8();
  func_0x00010006c00c(uVar8,uVar2);
  uVar6 = uVar8;
  func_0x000107c5ee20(uVar8,uVar2);
  func_0x000107c45ae0();
  func_0x000107c61170(uVar6);
  func_0x00010006c090(uVar8,uVar2);
  lVar7 = 0;
  func_0x000102774bf8();
  lVar4 = lVar7;
  func_0x000107c610f8();
  lVar13 = _DAT_112ebcdf0;
  *(undefined8 *)(lVar4 + _DAT_112ebcdf0) = 0;
  *(undefined **)(lVar4 + _DAT_112ebcde8) = puVar5;
  *(undefined8 *)(lVar4 + lVar13) = 0;
  plVar15 = (long *)(unaff_x22 + 0xe8);
  *plVar15 = lVar4;
  *(long *)(unaff_x22 + 0xf0) = lVar7;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *(long **)(unaff_x22 + 0x170) = plVar15;
  lVar13 = 0x112ebb480;
  FUN_102774884(0x112ebb480,&PTR_PTR_1126c4258,0x112ebb618,&UNK_10dad4130);
  func_0x000107c613fc();
  *(undefined8 *)(lVar13 + 0x18) = 3;
  *(undefined8 *)(lVar13 + 0x10) = 1;
  puVar5 = PTR_PTR_1126c4258;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar13 + 0x20) = puVar5;
  FUN_102774d18();
  uVar8 = 0;
  func_0x000102774c18(0);
  func_0x000107c610f8();
  FUN_102774610(lVar13,puVar5,uVar8);
  *(long *)(unaff_x22 + 0x178) = lVar13;
  func_0x000107c61150(puVar9,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_sendWithSnapDocBundles_sendParam_1126350b8);
  puVar14 = puVar9;
  if (((ulong)puVar9 & 1) != 0) {
    puVar14 = *(undefined1 **)(unaff_x22 + 0x138);
    func_0x00010273ca1c();
    func_0x000107c613fc();
    *(undefined8 *)(puVar9 + 0x18) = 3;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(long **)(puVar9 + 0x20) = plVar15;
    func_0x000107c61174(plVar15);
    lVar4 = lVar13;
    func_0x000107c61174(lVar13);
    func_0x000107c615f0(puVar14);
    uVar8 = 0x112ebb4f0;
    func_0x0001000285a8(0x112ebb4f0,&UNK_10db63a20);
    puVar10 = puVar9;
    func_0x000107c5fc48(puVar9,uVar8);
    puVar11 = puVar14;
    func_0x000107c51ef4();
    func_0x000107c61180();
    *(undefined1 **)(unaff_x22 + 0x180) = puVar11;
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar9);
    func_0x000107c615e8();
    if (puVar11 != (undefined1 *)0x0) {
      func_0x0001000285a8(0x112ebb4f8,&UNK_10dad3f50);
      func_0x000103edf20c();
      *(undefined1 **)(unaff_x22 + 0x188) = puVar11;
      plVar16 = (long *)0x80;
      UNRECOVERED_JUMPTABLE = FUN_10274d348;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 400) = plVar16;
      *plVar16 = unaff_x22;
      plVar16[1] = (long)FUN_102773504;
      goto LAB_1027734e4;
    }
  }
  lVar4 = unaff_x22 + 0x88;
  func_0x000102774c38();
  puVar5 = &UNK_110546500;
  func_0x000107c613f8(&UNK_110546500,puVar14,0,0);
  *puVar14 = 3;
  func_0x000107c61654();
  func_0x000107c61170(lVar13);
  func_0x000107c61170(plVar15);
  func_0x000107c61170(plVar16);
  *(undefined **)(unaff_x22 + 0x1a8) = puVar5;
  FUN_102774e10(unaff_x22 + 0x38,lVar4);
  lVar13 = *(long *)(unaff_x22 + 0xa0);
  if (lVar13 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(lVar4,lVar13);
    piVar12 = *(int **)(lVar7 + 0x18);
    iVar1 = *piVar12;
    plVar16 = (long *)(ulong)(uint)piVar12[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1b0) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = (long)FUN_102773964;
                    /* WARNING: Could not recover jumptable at 0x000102773474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(lVar13,lVar7);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000102774e60(lVar4,0x112d53858,&UNK_10d91a180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x00010006c090(uVar8,uVar2);
  func_0x000107c61170(uVar6);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1027734e4:
                    /* WARNING: Could not recover jumptable at 0x000102773500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102773504; end: 1027735fb;  */

void FUN_102773504(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x198) = param_1;
  *(undefined1 *)(lVar1 + 0x1b8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 400));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102773558,0,0);
  return;
}



/* Entry: 1027735fc; end: 10277376b;  */

void FUN_1027735fc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  
  FUN_102774e10(unaff_x22 + 0x38,unaff_x22 + 0xb0);
  lVar13 = *(long *)(unaff_x22 + 200);
  if (lVar13 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0xd0);
    func_0x0001000a8868(unaff_x22 + 0xb0,lVar13);
    piVar12 = *(int **)(lVar14 + 0x18);
    iVar1 = *piVar12;
    plVar11 = (long *)(ulong)(uint)piVar12[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1a0) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_1027738bc;
                    /* WARNING: Could not recover jumptable at 0x00010277369c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))(lVar13,lVar14);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000102774e60(unaff_x22 + 0xb0,0x112d53858,&UNK_10d91a180);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar10 = *(undefined1 *)(unaff_x22 + 0x1b8);
  func_0x000107c5d0f0(uVar15);
  func_0x000107c61170(uVar6);
  FUN_102774ea0(uVar15,uVar10);
  func_0x000107c615e8(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x00010006c090(uVar4,uVar8);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
                    /* WARNING: Could not recover jumptable at 0x000102773768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10277376c; end: 1027738bb;  */

void FUN_10277376c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x168));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x198);
  FUN_102774e10(unaff_x22 + 0x38,unaff_x22 + 0x88);
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  if (lVar8 != 0) {
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    func_0x0001000a8868(unaff_x22 + 0x88,lVar8);
    piVar7 = *(int **)(lVar9 + 0x18);
    iVar1 = *piVar7;
    plVar6 = (long *)(ulong)(uint)piVar7[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x1b0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102773964;
                    /* WARNING: Could not recover jumptable at 0x000102773830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar7))(lVar8,lVar9);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x118));
  func_0x000102774e60(unaff_x22 + 0x88,0x112d53858,&UNK_10d91a180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  func_0x000107c61654();
  func_0x000107c615e8(uVar5);
  func_0x00010006c090(uVar2,uVar4);
  func_0x000107c61170(uVar3);
  func_0x000102774e60(unaff_x22 + 0x38,0x112d53858,&UNK_10d91a180);
                    /* WARNING: Could not recover jumptable at 0x0001027738b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



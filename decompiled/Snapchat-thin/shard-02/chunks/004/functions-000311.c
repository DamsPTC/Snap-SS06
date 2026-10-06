/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d5693c; end: 101d56aab;  */

long FUN_101d5693c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  func_0x0001000d224c(auStack_68);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar2 = (undefined1 *)0x112e28f20;
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    func_0x000101d58e80();
    plVar3 = (long *)&UNK_11047d048;
    func_0x000107c613f8(&UNK_11047d048,puVar2,0,0);
    *puVar2 = 0;
    plVar4 = plVar3;
    func_0x00010488904c();
    func_0x000107c614ac(plVar3);
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    plVar4 = &lStack_78;
    lStack_78 = lVar1;
    uStack_70 = param_2;
    func_0x000104888f7c(plVar4);
    func_0x000107c6142c(param_2);
  }
  func_0x0001000d224c(&lStack_78);
  lVar1 = lStack_78;
  puVar5 = &UNK_11047c788;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  lVar6 = lVar1;
  func_0x0001048898b8(lVar1,1,0x101d58ec0,puVar5,&UNK_11047c608);
  func_0x000107c61574(plVar4);
  func_0x000107c61170(lVar1);
  func_0x000107c61574(puVar5);
  func_0x0001000834e4(auStack_68);
  return lVar6;
}



/* Entry: 101d56aac; end: 101d56b3b;  */

undefined8 FUN_101d56aac(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101d56b50(param_3,&UNK_11047c9e0,0x101d58e58);
    func_0x000107c61574(param_2);
  }
  return param_3;
}



/* Entry: 101d56b3c; end: 101d56b4f;  */

undefined8 FUN_101d56b3c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  puVar3 = &UNK_11047c940;
  func_0x0001000285a8(0x112e28f00,&UNK_10da11310);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_11047c788;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_11047c940,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  uVar4 = 0;
  FUN_101d58f8c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_1);
  func_0x00010090569c(FUN_101d58d58,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d56b50; end: 101d56c8b;  */

undefined8 FUN_101d56b50(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e28f00,&UNK_10da11310);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  puVar2 = &UNK_11047c788;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  func_0x000107c613fc(param_2,0x28,7);
  *(undefined **)(param_2 + 0x10) = puVar2;
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = param_1;
  uVar3 = 0;
  FUN_101d58f8c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_1);
  func_0x00010090569c(param_3,param_2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(param_2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 101d56c8c; end: 101d56cbb;  */

void FUN_101d56c8c(void)

{
  FUN_101d56cbc();
  return;
}



/* Entry: 101d56cbc; end: 101d56e0b;  */

undefined8
FUN_101d56cbc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 *param_4,long param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = *(undefined1 *)(param_1 + 3);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_a0);
    func_0x000107c61574(uVar4);
    func_0x0001000a8868(auStack_a0,uStack_88);
    pcVar6 = (code *)*param_4;
    uVar4 = 0;
    func_0x000101d5bb68(0);
    (*pcVar6)(param_3,uVar4,&PTR_DAT_11047d0c0);
    func_0x000107c613fc(param_5,0x29,7);
    *(undefined8 *)(param_5 + 0x10) = uVar3;
    *(undefined8 *)(param_5 + 0x18) = uVar1;
    *(undefined8 *)(param_5 + 0x20) = uVar5;
    *(undefined1 *)(param_5 + 0x28) = uVar2;
    func_0x000107c61434(uVar5);
    uVar3 = 0;
    func_0x000100775264(0,1,param_6,param_5,&UNK_11047cbf8);
    func_0x000107c61574(param_3);
    func_0x000107c61574(param_5);
    func_0x0001000834e4(auStack_a0);
  }
  return uVar3;
}



/* Entry: 101d56e0c; end: 101d56f43;  */

void FUN_101d56e0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_1;
  func_0x000107c44a00();
  if ((int)uVar1 == 0) {
    func_0x0001000285a8(0x112e28f10,&UNK_10da11320);
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x000104888f7c(&uStack_70);
  }
  else {
    uVar2 = param_1;
    FUN_101d56b50(param_1,&UNK_11047c8f0,FUN_101d58d18);
    func_0x0001000d224c(&uStack_70);
    puVar3 = &UNK_11047c788;
    func_0x000107c613fc(&UNK_11047c788,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = &UNK_11047c8a0;
    func_0x000107c613fc(&UNK_11047c8a0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    func_0x000107c61174(param_1);
    uVar1 = 0x112e28f18;
    func_0x0001000285a8(0x112e28f18,&UNK_10da11328);
    func_0x0001048898b8(uStack_70,1,0x101d58cbc,puVar4,uVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(uStack_70);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 101d56f44; end: 101d570a7;  */

undefined8 FUN_101d56f44(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  uVar4 = *param_1;
  uVar3 = param_1[1];
  uVar6 = param_1[2];
  uVar1 = *(undefined1 *)(param_1 + 3);
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_a0);
    func_0x000107c61574(uVar5);
    func_0x0001000a8868(auStack_a0,uStack_88);
    uVar5 = 0;
    func_0x000101d5bb68(0);
    (*(code *)(undefined *)0x101d5bbc0)(param_3,uVar5,&PTR_DAT_11047d0c0);
    puVar2 = &UNK_11047c8c8;
    func_0x000107c613fc(&UNK_11047c8c8,0x29,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = uVar3;
    *(undefined8 *)(puVar2 + 0x20) = uVar6;
    puVar2[0x28] = uVar1;
    func_0x000107c61434(uVar6);
    uVar3 = 0x112e28f18;
    func_0x0001000285a8(0x112e28f18,&UNK_10da11328);
    uVar4 = 0;
    func_0x000100775264(0,1,FUN_101d58cd4,puVar2,uVar3);
    func_0x000107c61574(param_3);
    func_0x000107c61574(puVar2);
    func_0x0001000834e4(auStack_a0);
  }
  return uVar4;
}



/* Entry: 101d570a8; end: 101d57353;  */

undefined8 FUN_101d570a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  uVar5 = param_1;
  func_0x000101d5720c();
  func_0x0001000d224c(&uStack_58);
  puVar1 = &UNK_11047c760;
  func_0x000107c613fc(&UNK_11047c760,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  uVar2 = 0;
  FUN_101d58f8c(0,0x112e28ef0,&PTR_PTR_1126d81e0);
  func_0x000107c61174();
  uVar3 = uStack_58;
  func_0x000100775264(uStack_58,1,FUN_101d5745c,puVar1,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uStack_58);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047c788;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar4 = &UNK_11047c7b0;
  func_0x000107c613fc(&UNK_11047c7b0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar1;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x0001048898b8(0,1,FUN_101d57660,puVar4,uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar4);
  return uVar5;
}



/* Entry: 101d57354; end: 101d5745b;  */

void FUN_101d57354(undefined8 *param_1,long *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[2];
  puVar3 = PTR_PTR_1126d81e0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126d8408;
  func_0x000107c610f8(PTR_PTR_1126d8408);
  func_0x000107c453e4();
  lVar5 = param_3;
  func_0x000107c3e234();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c55218(puVar4);
    func_0x000107c61170(lVar5);
  }
  func_0x000107c3e240(param_3);
  func_0x000107c31100(puVar4,param_3);
  func_0x000107c5292c(puVar3);
  if (-1 < lVar1) {
    func_0x000107c592e4(puVar3);
    func_0x000107c5fadc(lVar6,lVar7);
    func_0x000107c563b8(puVar3);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(puVar4);
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d5745c);
  (*pcVar2)();
}



/* Entry: 101d5745c; end: 101d57473;  */

void FUN_101d5745c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d57354(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d57474; end: 101d5765f;  */

undefined8 FUN_101d57474(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  undefined4 uStack_44;
  
  puVar1 = auStack_90;
  uVar7 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x10);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(param_2);
    func_0x0001000d224c(auStack_90);
    func_0x000107c61574(uVar6);
    func_0x0001000a8868(auStack_90,uStack_78);
    uVar8 = *puVar1;
    uVar5 = param_4;
    func_0x000107c3e240();
    uVar6 = 0x112e28ef8;
    func_0x0001000285a8(0x112e28ef8,&UNK_10da11308);
    uStack_44 = (undefined4)uVar5;
    puVar2 = &uStack_44;
    func_0x000104888f7c(puVar2,uVar6);
    puVar3 = &UNK_11047c7d8;
    func_0x000107c613fc(&UNK_11047c7d8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,uVar8);
    puVar4 = &UNK_11047c800;
    func_0x000107c613fc(&UNK_11047c800,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    func_0x000107c61174(param_3);
    uVar6 = 0;
    func_0x0001048898b8(0,1,FUN_101d58bec,puVar4,PTR___sSSN_11034da80);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar4);
    puVar3 = &UNK_11047c828;
    func_0x000107c613fc(&UNK_11047c828,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    uVar5 = 0;
    FUN_101d58f8c(0,0x112e28ef0,&PTR_PTR_1126d81e0);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(param_4);
    uVar7 = 0;
    func_0x000100775264(0,1,0x101d58c04,puVar3,uVar5);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar3);
    func_0x0001000834e4(auStack_90);
  }
  return uVar7;
}



/* Entry: 101d57660; end: 101d5767b;  */

void FUN_101d57660(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d57474(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d5767c; end: 101d576db;  */

void FUN_101d5767c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5fadc(uVar1,param_2[1]);
  func_0x000107c5a120(param_3);
  func_0x000107c61170(uVar1);
  *param_1 = param_3;
  func_0x000107c61174(param_3);
  return;
}



/* Entry: 101d576dc; end: 101d57c47;  */

/* WARNING: Possible PIC construction at 0x000101d578e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d57854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d578ec) */
/* WARNING: Removing unreachable block (ram,0x000101d57858) */

void FUN_101d576dc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  puVar1 = param_1;
  puVar5 = param_2;
  func_0x000107c3e240();
  func_0x000107c308e0();
  func_0x000107c61180();
  if (puVar1 == (undefined1 *)0x0) {
    FUN_101d58c28();
    puVar6 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar1,0,0);
    *puVar1 = 0xd;
    func_0x00010488ade0();
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
    func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
    lVar3 = param_3 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)(lVar3 + 0x20);
      func_0x000107c6157c(uVar7);
      func_0x000107c61574(lVar3);
      func_0x0001000d224c(alStack_80);
      func_0x000107c61574(uVar7);
      if (alStack_80[0] != 0) {
        func_0x000107c3e240(param_1);
        func_0x000107c308d8();
        lVar3 = alStack_80[0];
        func_0x000107c505c4();
        func_0x000107c61180();
        if (lVar3 != 0) {
          func_0x000107c61428(param_3 + 0x10,alStack_80,0,0);
          param_3 = param_3 + 0x10;
          func_0x000107c61648();
          if (param_3 == 0) {
            func_0x000107c6142c(puVar5);
          }
          else {
            lVar4 = lVar3;
            func_0x000101d57928(lVar3,puVar2,puVar5);
            func_0x000107c6142c(puVar5);
            func_0x000107c61574(param_3);
            func_0x000104889c84(0,1,param_2);
            func_0x000107c61574(lVar4);
          }
          func_0x000107c615e8(alStack_80[0]);
          func_0x000107c615e8(lVar3);
          return;
        }
        func_0x000107c6142c();
        FUN_101d58c28();
        puVar6 = &UNK_11047c6a8;
        func_0x000107c613f8(&UNK_11047c6a8,puVar5,0,0);
        *puVar5 = 7;
        func_0x00010488ade0();
        goto code_r0x000107c614ac;
      }
    }
    func_0x000107c6142c();
    FUN_101d58c28();
    puVar6 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar5,0,0);
    *puVar5 = 1;
    func_0x00010488ade0();
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar6);
  return;
}



/* Entry: 101d57c48; end: 101d57ccb;  */

undefined8 FUN_101d57c48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101d57ccc(uVar2,uVar1);
    func_0x000107c61574(param_2);
  }
  return uVar2;
}



/* Entry: 101d57ccc; end: 101d57e03;  */

undefined8 FUN_101d57ccc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e28f00,&UNK_10da11310);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11047c788;
  func_0x000107c613fc(&UNK_11047c788,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_11047ca08;
  func_0x000107c613fc(&UNK_11047ca08,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = 0;
  FUN_101d58f8c(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61434(param_2);
  func_0x00010090569c(FUN_101d58ed8,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d57e04; end: 101d5803b;  */

void FUN_101d57e04(long param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  puVar2 = (undefined1 *)(param_1 + 0x10);
  func_0x000107c61648();
  if (puVar2 != (undefined1 *)0x0) {
    uVar8 = *(undefined8 *)(puVar2 + 0x18);
    func_0x000107c6157c(uVar8);
    func_0x0001000d224c(&puStack_98);
    func_0x000107c61574(uVar8);
    puVar5 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      bVar1 = puVar2[0x51];
      func_0x000107c5fadc(param_3,param_4);
      if ((bVar1 & 1) == 0) {
        func_0x000107c5079c(puStack_98);
        puVar6 = puStack_98;
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        uStack_78 = 0x101d58ee4;
        pcStack_88 = (code *)&UNK_1010ffbc4;
        puStack_80 = &UNK_11047ca20;
        puStack_70 = param_2;
      }
      else {
        func_0x000107c507a4();
        puVar6 = puStack_98;
        func_0x000107c61180();
        func_0x000107c61170(param_3);
        puVar3 = &UNK_11047c788;
        func_0x000107c613fc(&UNK_11047c788,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,puVar2);
        puVar4 = &UNK_11047ca58;
        func_0x000107c613fc(&UNK_11047ca58,0x20,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar4 + 0x18) = param_2;
        uStack_78 = 0x101d58f08;
        pcStack_88 = FUN_101d58ff0;
        puStack_80 = &UNK_11047ca70;
        puStack_70 = puVar4;
      }
      uStack_90 = 0x42000000;
      ppuVar7 = &puStack_98;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      func_0x000107c60bc4(ppuVar7);
      puVar3 = puStack_70;
      func_0x000107c6157c(param_2);
      func_0x000107c61574(puVar3);
      func_0x0001000d224c(&puStack_98);
      puVar3 = puStack_98;
      func_0x000107c5dc68(puVar6);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(puVar5);
      func_0x000107c61574(puVar2);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar6);
      return;
    }
    func_0x000107c61574();
  }
  FUN_101d58c28();
  puVar5 = &UNK_11047c6a8;
  func_0x000107c613f8(&UNK_11047c6a8,puVar2,0,0);
  *puVar2 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101d5803c; end: 101d5846f;  */

/* WARNING: Possible PIC construction at 0x000101d58114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d58310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5833c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d583d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d58204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d581ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d581bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d583dc) */
/* WARNING: Removing unreachable block (ram,0x000101d58340) */
/* WARNING: Removing unreachable block (ram,0x000101d58314) */
/* WARNING: Removing unreachable block (ram,0x000101d58118) */
/* WARNING: Removing unreachable block (ram,0x000101d58160) */
/* WARNING: Removing unreachable block (ram,0x000101d58238) */
/* WARNING: Removing unreachable block (ram,0x000101d58240) */
/* WARNING: Removing unreachable block (ram,0x000101d58174) */
/* WARNING: Removing unreachable block (ram,0x000101d58248) */
/* WARNING: Removing unreachable block (ram,0x000101d58260) */
/* WARNING: Removing unreachable block (ram,0x000101d58280) */
/* WARNING: Removing unreachable block (ram,0x000101d5828c) */
/* WARNING: Removing unreachable block (ram,0x000101d58208) */
/* WARNING: Removing unreachable block (ram,0x000101d582ac) */
/* WARNING: Removing unreachable block (ram,0x000101d582d0) */
/* WARNING: Removing unreachable block (ram,0x000101d582d4) */
/* WARNING: Removing unreachable block (ram,0x000101d58358) */
/* WARNING: Removing unreachable block (ram,0x000101d58360) */
/* WARNING: Removing unreachable block (ram,0x000101d582e8) */
/* WARNING: Removing unreachable block (ram,0x000101d583a8) */
/* WARNING: Removing unreachable block (ram,0x000101d582fc) */
/* WARNING: Removing unreachable block (ram,0x000101d58220) */
/* WARNING: Removing unreachable block (ram,0x000101d581b0) */

void FUN_101d5803c(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((param_2 == 0) && (param_1 != (undefined8 *)0x0)) {
    func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      lVar3 = *(long *)(param_3 + 0x38);
      func_0x000107c615f0(lVar3);
      func_0x000107c61574(param_3);
      lVar1 = lVar3;
      func_0x000107c3e388();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = 0;
      if (lVar1 == 0) {
        func_0x000107c61174(0);
        func_0x000107c5ed30(0);
      }
      else {
        func_0x000107c5f9e8(lVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                            PTR___ss11AnyHashableVSHsWP_11034e450);
        func_0x000107c61174(0);
        lVar3 = lVar1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    param_1 = &uStack_70;
    func_0x00010006e7f4();
  }
  FUN_101d58c28();
  puVar2 = &UNK_11047c6a8;
  func_0x000107c613f8(&UNK_11047c6a8,param_1,0,0);
  *(undefined1 *)param_1 = 3;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101d58470; end: 101d5863b;  */

void FUN_101d58470(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *apuStack_80 [3];
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar5,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  puVar6 = (undefined1 *)0x0;
  if (lVar1 != 0) {
    puVar6 = *(undefined1 **)(lVar1 + 0x20);
    func_0x000107c6157c(puVar6);
    func_0x000107c61574(lVar1);
    func_0x0001000d224c(apuStack_80);
    func_0x000107c61574();
    if (apuStack_80[0] != (undefined1 *)0x0) {
      puVar6 = apuStack_80[0];
      func_0x000107c505c0();
      func_0x000107c61180();
      if (puVar6 == (undefined1 *)0x0) {
        FUN_101d58c28();
        puVar4 = &UNK_11047c6a8;
        func_0x000107c613f8(&UNK_11047c6a8,puVar6,0,0);
        *puVar6 = param_5;
        func_0x00010488ade0();
        func_0x000107c614ac(puVar4);
      }
      else {
        uVar7 = *param_4;
        uVar2 = uVar7;
        func_0x000107c5faec(uVar7);
        func_0x000107c61170(uVar7);
        func_0x000107c61428(param_1 + 0x10,apuStack_80,0,0);
        param_1 = param_1 + 0x10;
        func_0x000107c61648();
        if (param_1 == 0) {
          func_0x000107c6142c(puVar5);
        }
        else {
          puVar3 = puVar6;
          func_0x000101d57928(puVar6,uVar2,puVar5);
          func_0x000107c6142c(puVar5);
          func_0x000107c61574(param_1);
          func_0x000104889c84(0,1,param_2);
          func_0x000107c61574(puVar3);
        }
        func_0x000107c615e8(apuStack_80[0]);
        apuStack_80[0] = puVar6;
      }
      func_0x000107c615e8(apuStack_80[0]);
      return;
    }
  }
  FUN_101d58c28();
  puVar4 = &UNK_11047c6a8;
  func_0x000107c613f8(&UNK_11047c6a8,puVar6,0,0);
  *puVar6 = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar4);
  return;
}



/* Entry: 101d5863c; end: 101d58beb;  */

/* WARNING: Possible PIC construction at 0x000101d58b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d58ad4: Changing call to branch */

void FUN_101d5863c(undefined1 *param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  long param_5)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 **ppuVar11;
  undefined1 uVar12;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_100 [2];
  undefined8 auStack_f0 [2];
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar4 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar4 - extraout_x12;
  puVar3 = param_1;
  func_0x000107c49a80();
  if ((int)puVar3 == 0) {
    FUN_101d58c28();
    puVar7 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar3,0,0);
    uVar12 = 9;
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c4346c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (param_1 != (undefined1 *)0x0) {
      func_0x000107c5edb4(lVar4,param_1);
      func_0x000107c61170(param_1);
      (**(code **)(lVar17 + 0x20))(lVar15,lVar4,lVar2);
      func_0x000107c61428(param_5 + 0x10,auStack_80,0,0);
      lVar4 = param_5 + 0x10;
      func_0x000107c61648();
      if ((lVar4 == 0) || (cVar1 = *(char *)(lVar4 + 0x51), func_0x000107c61574(), cVar1 != '\x01'))
      {
        ppuVar11 = &puStack_a0;
        func_0x000107c61428(param_5 + 0x10,ppuVar11,0,0);
        ppuVar8 = (undefined1 **)(param_5 + 0x10);
        func_0x000107c61648();
        if (ppuVar8 != (undefined1 **)0x0) {
          puVar14 = ppuVar8[7];
          func_0x000107c615f0(puVar14);
          func_0x000107c61574();
          func_0x000107c5ed90();
          puVar7 = puVar14;
          func_0x000107c412f8();
          func_0x000107c61180();
          func_0x000107c615e8(puVar14);
          func_0x000107c61170();
          if (puVar7 != (undefined *)0x0) {
            puVar14 = puVar7;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar7);
            puVar9 = puVar14;
            func_0x000107c5ee20(puVar14,ppuVar11);
            func_0x00010006c090(puVar14);
            puVar7 = puVar9;
            func_0x000107c4adac();
            puVar14 = puVar9;
            func_0x000107c3aba8();
            func_0x000107c61180();
            if (puVar14 == (undefined *)0x0) {
              FUN_101d58c28();
              puVar7 = &UNK_11047c6a8;
              func_0x000107c613f8(&UNK_11047c6a8,puVar14,0,0);
              *puVar14 = 0xc;
              func_0x00010488ade0();
              func_0x000107c61170(puVar9);
              (**(code **)(lVar17 + 8))(lVar15,lVar2);
              goto code_r0x000107c614ac;
            }
            puVar10 = puVar14;
            func_0x000107c5faec();
            func_0x000107c61170(puVar14);
            uStack_c8 = 1;
            puStack_e0 = puVar7;
            puStack_d8 = puVar10;
            ppuStack_d0 = ppuVar11;
            func_0x000100b60084(&puStack_e0);
            func_0x000107c61170(puVar9);
            (**(code **)(lVar17 + 8))(lVar15,lVar2);
            func_0x000107c6142c(ppuVar11);
LAB_101d58b30:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
              return;
            }
            goto LAB_101d58be8;
          }
        }
      }
      else {
        puVar3 = auStack_b8;
        func_0x000107c61428(param_5 + 0x10,puVar3,0,0);
        param_5 = param_5 + 0x10;
        func_0x000107c61648();
        if (param_5 == 0) {
          uStack_98 = 0;
          puStack_a0 = (undefined1 *)0x0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          lVar16 = *(long *)(param_5 + 0x38);
          func_0x000107c615f0(lVar16);
          func_0x000107c61574(param_5);
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar3);
          puStack_e0 = (undefined *)0x0;
          lVar4 = lVar16;
          func_0x000107c3e388();
          func_0x000107c61180();
          func_0x000107c615e8(lVar16);
          func_0x000107c61170(param_5);
          puVar7 = puStack_e0;
          puVar14 = PTR___sypN_11034f1a8;
          if (lVar4 == 0) {
            puVar3 = puStack_e0;
            func_0x000107c61174(puStack_e0);
            func_0x000107c5ed30(puVar7);
            func_0x000107c61170(puVar3);
            func_0x000107c61654();
            goto code_r0x000107c614ac;
          }
          lVar16 = lVar4;
          func_0x000107c5f9e8(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                              PTR___ss11AnyHashableVSHsWP_11034e450);
          func_0x000107c61174(puVar7);
          func_0x000107c61170(lVar4);
          uVar13 = *(undefined8 *)PTR__NSFileSize_110345448;
          uVar5 = 0;
          auStack_f0[0] = uVar13;
          FUN_101a64068();
          uVar6 = uVar5;
          FUN_101d58c78();
          func_0x000107c61174(uVar13);
          func_0x000107c602d4(&puStack_e0,auStack_f0,uVar5,uVar6);
          if (*(long *)(lVar16 + 0x10) == 0) {
LAB_101d58b70:
            uStack_98 = 0;
            puStack_a0 = (undefined1 *)0x0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x000107c61434(lVar16);
            ppuVar8 = &puStack_e0;
            func_0x000100df95d0(ppuVar8);
            if ((uVar5 & 1) == 0) {
              func_0x000107c6142c(lVar16);
              goto LAB_101d58b70;
            }
            func_0x0001000bb420(*(long *)(lVar16 + 0x38) + (long)ppuVar8 * 0x20,&puStack_a0);
            func_0x000107c6142c(lVar16);
          }
          func_0x000107c6142c(lVar16);
          func_0x0001007bbff0(&puStack_e0);
          if (lStack_88 != 0) {
            ppuVar8 = &puStack_e0;
            func_0x000107c6147c(ppuVar8,&puStack_a0,puVar14 + 8,PTR___ss5Int64VN_11034ee50,6);
            if (((ulong)ppuVar8 & 1) != 0) {
              puStack_d8 = (undefined *)0x0;
              ppuStack_d0 = (undefined1 **)0xe000000000000000;
              uStack_c8 = 1;
              func_0x000100b60084(&puStack_e0);
              (**(code **)(lVar17 + 8))(lVar15,lVar2);
              goto LAB_101d58b30;
            }
            goto LAB_101d58ae8;
          }
        }
        ppuVar8 = &puStack_a0;
        func_0x00010006e7f4();
      }
LAB_101d58ae8:
      FUN_101d58c28();
      puVar7 = &UNK_11047c6a8;
      func_0x000107c613f8(&UNK_11047c6a8,ppuVar8,0,0);
      *(undefined1 *)ppuVar8 = 0xb;
      func_0x00010488ade0();
      (**(code **)(lVar17 + 8))(lVar15,lVar2);
      goto code_r0x000107c614ac;
    }
    FUN_101d58c28();
    puVar7 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,param_3,0,0);
    uVar12 = 10;
    puVar3 = param_3;
  }
  *puVar3 = uVar12;
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
LAB_101d58be8:
    func_0x000107c60e78();
    *(undefined1 **)(lVar15 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar15 + -8) = FUN_101d58bec;
    FUN_101d5b91c();
    return;
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar7);
  return;
}



/* Entry: 101d58bec; end: 101d58c1b;  */

void FUN_101d58bec(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d5b91c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d58c1c; end: 101d58c27;  */

/* WARNING: Possible PIC construction at 0x000101d578e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d57854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d578ec) */
/* WARNING: Removing unreachable block (ram,0x000101d57858) */

void FUN_101d58c1c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  long alStack_80 [3];
  undefined1 auStack_68 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  puVar3 = puVar1;
  puVar8 = puVar2;
  func_0x000107c3e240();
  func_0x000107c308e0();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
    FUN_101d58c28();
    puVar9 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar3,0,0);
    *puVar3 = 0xd;
    func_0x00010488ade0();
  }
  else {
    puVar4 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
    lVar5 = lVar6 + 0x10;
    func_0x000107c61648();
    if (lVar5 != 0) {
      uVar10 = *(undefined8 *)(lVar5 + 0x20);
      func_0x000107c6157c(uVar10);
      func_0x000107c61574(lVar5);
      func_0x0001000d224c(alStack_80);
      func_0x000107c61574(uVar10);
      if (alStack_80[0] != 0) {
        func_0x000107c3e240(puVar1);
        func_0x000107c308d8();
        lVar5 = alStack_80[0];
        func_0x000107c505c4();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c61428(lVar6 + 0x10,alStack_80,0,0);
          lVar6 = lVar6 + 0x10;
          func_0x000107c61648();
          if (lVar6 == 0) {
            func_0x000107c6142c(puVar8);
          }
          else {
            lVar7 = lVar5;
            func_0x000101d57928(lVar5,puVar4,puVar8);
            func_0x000107c6142c(puVar8);
            func_0x000107c61574(lVar6);
            func_0x000104889c84(0,1,puVar2);
            func_0x000107c61574(lVar7);
          }
          func_0x000107c615e8(alStack_80[0]);
          func_0x000107c615e8(lVar5);
          return;
        }
        func_0x000107c6142c();
        FUN_101d58c28();
        puVar9 = &UNK_11047c6a8;
        func_0x000107c613f8(&UNK_11047c6a8,puVar8,0,0);
        *puVar8 = 7;
        func_0x00010488ade0();
        goto code_r0x000107c614ac;
      }
    }
    func_0x000107c6142c();
    FUN_101d58c28();
    puVar9 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar8,0,0);
    *puVar8 = 1;
    func_0x00010488ade0();
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar9);
  return;
}



/* Entry: 101d58c28; end: 101d58c67;  */

void FUN_101d58c28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da11244;
  func_0x000107c61520(&UNK_10da11244,&UNK_11047c6a8);
  puRam0000000112e28f08 = puVar1;
  return;
}



/* Entry: 101d58c68; end: 101d58c77;  */

/* WARNING: Possible PIC construction at 0x000101d58b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d58ad4: Changing call to branch */

void FUN_101d58c68(void)

{
  char cVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 **ppuVar13;
  long lVar14;
  undefined1 uVar15;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_100 [2];
  undefined8 auStack_f0 [2];
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined1 **ppuStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  puVar5 = *(undefined1 **)(unaff_x20 + 0x10);
  puVar4 = *(undefined1 **)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar14 = *(long *)(unaff_x20 + 0x30);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar20 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar6 = (long)auStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar6 - extraout_x12;
  puVar3 = puVar5;
  func_0x000107c49a80();
  if ((int)puVar3 == 0) {
    FUN_101d58c28();
    puVar9 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar3,0,0);
    uVar15 = 9;
  }
  else {
    func_0x000107c5fadc(puVar4,uVar16);
    func_0x000107c4346c();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar5 != (undefined1 *)0x0) {
      func_0x000107c5edb4(lVar6,puVar5);
      func_0x000107c61170(puVar5);
      (**(code **)(lVar20 + 0x20))(lVar18,lVar6,lVar2);
      func_0x000107c61428(lVar14 + 0x10,auStack_80,0,0);
      lVar6 = lVar14 + 0x10;
      func_0x000107c61648();
      if ((lVar6 == 0) || (cVar1 = *(char *)(lVar6 + 0x51), func_0x000107c61574(), cVar1 != '\x01'))
      {
        ppuVar13 = &puStack_a0;
        func_0x000107c61428(lVar14 + 0x10,ppuVar13,0,0);
        ppuVar10 = (undefined1 **)(lVar14 + 0x10);
        func_0x000107c61648();
        if (ppuVar10 != (undefined1 **)0x0) {
          puVar17 = ppuVar10[7];
          func_0x000107c615f0(puVar17);
          func_0x000107c61574();
          func_0x000107c5ed90();
          puVar9 = puVar17;
          func_0x000107c412f8();
          func_0x000107c61180();
          func_0x000107c615e8(puVar17);
          func_0x000107c61170();
          if (puVar9 != (undefined *)0x0) {
            puVar17 = puVar9;
            func_0x000107c5ee30();
            func_0x000107c61170(puVar9);
            puVar11 = puVar17;
            func_0x000107c5ee20(puVar17,ppuVar13);
            func_0x00010006c090(puVar17);
            puVar9 = puVar11;
            func_0x000107c4adac();
            puVar17 = puVar11;
            func_0x000107c3aba8();
            func_0x000107c61180();
            if (puVar17 == (undefined *)0x0) {
              FUN_101d58c28();
              puVar9 = &UNK_11047c6a8;
              func_0x000107c613f8(&UNK_11047c6a8,puVar17,0,0);
              *puVar17 = 0xc;
              func_0x00010488ade0();
              func_0x000107c61170(puVar11);
              (**(code **)(lVar20 + 8))(lVar18,lVar2);
              goto code_r0x000107c614ac;
            }
            puVar12 = puVar17;
            func_0x000107c5faec();
            func_0x000107c61170(puVar17);
            uStack_c8 = 1;
            puStack_e0 = puVar9;
            puStack_d8 = puVar12;
            ppuStack_d0 = ppuVar13;
            func_0x000100b60084(&puStack_e0);
            func_0x000107c61170(puVar11);
            (**(code **)(lVar20 + 8))(lVar18,lVar2);
            func_0x000107c6142c(ppuVar13);
LAB_101d58b30:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
              return;
            }
            goto LAB_101d58be8;
          }
        }
      }
      else {
        puVar5 = auStack_b8;
        func_0x000107c61428(lVar14 + 0x10,puVar5,0,0);
        lVar14 = lVar14 + 0x10;
        func_0x000107c61648();
        if (lVar14 == 0) {
          uStack_98 = 0;
          puStack_a0 = (undefined1 *)0x0;
          lStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          lVar19 = *(long *)(lVar14 + 0x38);
          func_0x000107c615f0(lVar19);
          func_0x000107c61574(lVar14);
          func_0x000107c5edc4();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar5);
          puStack_e0 = (undefined *)0x0;
          lVar6 = lVar19;
          func_0x000107c3e388();
          func_0x000107c61180();
          func_0x000107c615e8(lVar19);
          func_0x000107c61170(lVar14);
          puVar9 = puStack_e0;
          puVar17 = PTR___sypN_11034f1a8;
          if (lVar6 == 0) {
            puVar5 = puStack_e0;
            func_0x000107c61174(puStack_e0);
            func_0x000107c5ed30(puVar9);
            func_0x000107c61170(puVar5);
            func_0x000107c61654();
            goto code_r0x000107c614ac;
          }
          lVar14 = lVar6;
          func_0x000107c5f9e8(lVar6,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                              PTR___ss11AnyHashableVSHsWP_11034e450);
          func_0x000107c61174(puVar9);
          func_0x000107c61170(lVar6);
          uVar16 = *(undefined8 *)PTR__NSFileSize_110345448;
          uVar7 = 0;
          auStack_f0[0] = uVar16;
          FUN_101a64068();
          uVar8 = uVar7;
          FUN_101d58c78();
          func_0x000107c61174(uVar16);
          func_0x000107c602d4(&puStack_e0,auStack_f0,uVar7,uVar8);
          if (*(long *)(lVar14 + 0x10) == 0) {
LAB_101d58b70:
            uStack_98 = 0;
            puStack_a0 = (undefined1 *)0x0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            func_0x000107c61434(lVar14);
            ppuVar10 = &puStack_e0;
            func_0x000100df95d0(ppuVar10);
            if ((uVar7 & 1) == 0) {
              func_0x000107c6142c(lVar14);
              goto LAB_101d58b70;
            }
            func_0x0001000bb420(*(long *)(lVar14 + 0x38) + (long)ppuVar10 * 0x20,&puStack_a0);
            func_0x000107c6142c(lVar14);
          }
          func_0x000107c6142c(lVar14);
          func_0x0001007bbff0(&puStack_e0);
          if (lStack_88 != 0) {
            ppuVar10 = &puStack_e0;
            func_0x000107c6147c(ppuVar10,&puStack_a0,puVar17 + 8,PTR___ss5Int64VN_11034ee50,6);
            if (((ulong)ppuVar10 & 1) != 0) {
              puStack_d8 = (undefined *)0x0;
              ppuStack_d0 = (undefined1 **)0xe000000000000000;
              uStack_c8 = 1;
              func_0x000100b60084(&puStack_e0);
              (**(code **)(lVar20 + 8))(lVar18,lVar2);
              goto LAB_101d58b30;
            }
            goto LAB_101d58ae8;
          }
        }
        ppuVar10 = &puStack_a0;
        func_0x00010006e7f4();
      }
LAB_101d58ae8:
      FUN_101d58c28();
      puVar9 = &UNK_11047c6a8;
      func_0x000107c613f8(&UNK_11047c6a8,ppuVar10,0,0);
      *(undefined1 *)ppuVar10 = 0xb;
      func_0x00010488ade0();
      (**(code **)(lVar20 + 8))(lVar18,lVar2);
      goto code_r0x000107c614ac;
    }
    FUN_101d58c28();
    puVar9 = &UNK_11047c6a8;
    func_0x000107c613f8(&UNK_11047c6a8,puVar4,0,0);
    uVar15 = 10;
    puVar3 = puVar4;
  }
  *puVar3 = uVar15;
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
LAB_101d58be8:
    func_0x000107c60e78();
    *(undefined1 **)(lVar18 + -0x10) = &stack0xfffffffffffffff0;
    *(code **)(lVar18 + -8) = FUN_101d58bec;
    FUN_101d5b91c();
    return;
  }
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar9);
  return;
}



/* Entry: 101d58c78; end: 101d58cd3;  */

void FUN_101d58c78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112defdc0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_101a64068(0xff);
  puVar2 = &UNK_10d9c6700;
  func_0x000107c61520(&UNK_10d9c6700,uVar1);
  puRam0000000112defdc0 = puVar2;
  return;
}



/* Entry: 101d58cd4; end: 101d58d17;  */

void FUN_101d58cd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar3 = *(byte *)(unaff_x20 + 0x28);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = uVar5;
  param_1[2] = uVar4;
  param_1[3] = (ulong)bVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 101d58d18; end: 101d58d57;  */

void FUN_101d58d18(void)

{
  long unaff_x20;
  
  FUN_101d58470(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&PTR_PTR_110d59b20,6);
  return;
}



/* Entry: 101d58d58; end: 101d58d63;  */

void FUN_101d58d58(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined **ppuVar8;
  undefined1 *apuStack_80 [3];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar6 = auStack_68;
  func_0x000107c61428(lVar3 + 0x10,puVar6,0,0);
  lVar2 = lVar3 + 0x10;
  func_0x000107c61648();
  puVar7 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    puVar7 = *(undefined1 **)(lVar2 + 0x20);
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(lVar2);
    func_0x0001000d224c(apuStack_80);
    func_0x000107c61574();
    if (apuStack_80[0] != (undefined1 *)0x0) {
      puVar7 = apuStack_80[0];
      func_0x000107c505f4();
      func_0x000107c61180();
      if (puVar7 == (undefined1 *)0x0) {
        FUN_101d58c28();
        puVar5 = &UNK_11047c6a8;
        func_0x000107c613f8(&UNK_11047c6a8,puVar7,0,0);
        *puVar7 = 5;
        func_0x00010488ade0();
        func_0x000107c614ac(puVar5);
      }
      else {
        ppuVar8 = &PTR____CFConstantStringClassReference_110f72738;
        func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f72738);
        func_0x000107c61170(&PTR____CFConstantStringClassReference_110f72738);
        func_0x000107c61428(lVar3 + 0x10,apuStack_80,0,0);
        lVar3 = lVar3 + 0x10;
        func_0x000107c61648();
        if (lVar3 == 0) {
          func_0x000107c6142c(puVar6);
        }
        else {
          puVar4 = puVar7;
          func_0x000101d57928(puVar7,ppuVar8,puVar6);
          func_0x000107c6142c(puVar6);
          func_0x000107c61574(lVar3);
          func_0x000104889c84(0,1,uVar1);
          func_0x000107c61574(puVar4);
        }
        func_0x000107c615e8(apuStack_80[0]);
        apuStack_80[0] = puVar7;
      }
      func_0x000107c615e8(apuStack_80[0]);
      return;
    }
  }
  FUN_101d58c28();
  puVar5 = &UNK_11047c6a8;
  func_0x000107c613f8(&UNK_11047c6a8,puVar7,0,0);
  *puVar7 = 1;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar5);
  return;
}



/* Entry: 101d58d64; end: 101d58ddb;  */

void FUN_101d58d64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d56aac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d58ddc; end: 101d58e23;  */

void FUN_101d58ddc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = uVar5;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 101d58e24; end: 101d58ed7;  */

void FUN_101d58e24(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d58ed8; end: 101d58f0f;  */

void FUN_101d58ed8(void)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar9 = *(undefined **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  puVar5 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61648();
  if (puVar5 != (undefined1 *)0x0) {
    uVar12 = *(undefined8 *)(puVar5 + 0x18);
    func_0x000107c6157c(uVar12);
    func_0x0001000d224c(&puStack_98);
    func_0x000107c61574(uVar12);
    puVar4 = puStack_98;
    if (puStack_98 != (undefined *)0x0) {
      bVar3 = puVar5[0x51];
      func_0x000107c5fadc(uVar6,uVar2);
      if ((bVar3 & 1) == 0) {
        func_0x000107c5079c(puStack_98);
        puVar10 = puStack_98;
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        uStack_78 = 0x101d58ee4;
        pcStack_88 = (code *)&UNK_1010ffbc4;
        puStack_80 = &UNK_11047ca20;
        puStack_70 = puVar9;
      }
      else {
        func_0x000107c507a4();
        puVar10 = puStack_98;
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        puVar7 = &UNK_11047c788;
        func_0x000107c613fc(&UNK_11047c788,0x18,7);
        func_0x000107c61644(puVar7 + 0x10,puVar5);
        puVar8 = &UNK_11047ca58;
        func_0x000107c613fc(&UNK_11047ca58,0x20,7);
        *(undefined **)(puVar8 + 0x10) = puVar7;
        *(undefined **)(puVar8 + 0x18) = puVar9;
        uStack_78 = 0x101d58f08;
        pcStack_88 = FUN_101d58ff0;
        puStack_80 = &UNK_11047ca70;
        puStack_70 = puVar8;
      }
      uStack_90 = 0x42000000;
      ppuVar11 = &puStack_98;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      func_0x000107c60bc4(ppuVar11);
      puVar7 = puStack_70;
      func_0x000107c6157c(puVar9);
      func_0x000107c61574(puVar7);
      func_0x0001000d224c(&puStack_98);
      puVar9 = puStack_98;
      func_0x000107c5dc68(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(puVar4);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      return;
    }
    func_0x000107c61574();
  }
  FUN_101d58c28();
  puVar9 = &UNK_11047c6a8;
  func_0x000107c613f8(&UNK_11047c6a8,puVar5,0,0);
  *puVar5 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar9);
  return;
}



/* Entry: 101d58f10; end: 101d58f6b;  */

void FUN_101d58f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28f38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcb7d58;
  func_0x000107c61520(&UNK_10dcb7d58,&UNK_11072c980);
  puRam0000000112e28f38 = puVar1;
  return;
}



/* Entry: 101d58f6c; end: 101d58f8b;  */

void FUN_101d58f6c(undefined8 param_1,char param_2)

{
  if (param_2 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d58f8c; end: 101d58fcb;  */

void FUN_101d58f8c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d58fcc; end: 101d58fdb;  */

void FUN_101d58fcc(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 101d58fdc; end: 101d58fef;  */

void FUN_101d58fdc(void)

{
  func_0x000101d58d44();
  return;
}



/* Entry: 101d58ff0; end: 101d5915b;  */

/* WARNING: Possible PIC construction at 0x000101d58454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d58458) */

void FUN_101d58ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101d5915c; end: 101d5919b;  */

void FUN_101d5915c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28f80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da113b4;
  func_0x000107c61520(&UNK_10da113b4,&UNK_11047cb48);
  puRam0000000112e28f80 = puVar1;
  return;
}



/* Entry: 101d5919c; end: 101d591af;  */

bool FUN_101d5919c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d591b0; end: 101d5925b;  */

void FUN_101d591b0(void)

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



/* Entry: 101d5925c; end: 101d595db;  */

long FUN_101d5925c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101d595dc; end: 101d5a57b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d595dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,long param_11,long param_12,undefined8 param_13)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  code *pcVar17;
  code *pcVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x20;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  func_0x0001000d224c(auStack_90);
  puVar1 = auStack_90;
  func_0x0001000a8868(puVar1,uStack_78);
  uVar2 = 2;
  func_0x00010043c5e4(2,0xd,0,0xd000000000000031,0x800000010f00ec30,uStack_78,uStack_70,puVar1);
  func_0x0001000834e4(auStack_90);
  func_0x0001000285a8(0x112e28f88,&UNK_10da11420);
  func_0x000107c613fc();
  pcVar3 = FUN_101d5a57c;
  func_0x0001000bdd8c(FUN_101d5a57c,0);
  func_0x0001000285a8(0x112e28f90,&UNK_10da11428);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101d5a5c0;
  func_0x0001000bdd8c(FUN_101d5a5c0,uVar2);
  func_0x0001000285a8(0x112e28f98,&UNK_10da11430);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  uVar5 = 0x101d5a5e8;
  func_0x0001000bdd8c(0x101d5a5e8,pcVar3);
  puVar6 = &UNK_11047cca0;
  func_0x000107c613fc(&UNK_11047cca0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_6;
  func_0x0001000285a8(0x112e28fa0,&UNK_10da11438);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar7 = FUN_101d5a660;
  func_0x0001000bdd8c(FUN_101d5a660,puVar6);
  puVar6 = &UNK_11047ccc8;
  func_0x000107c613fc(&UNK_11047ccc8,0x20,7);
  *(code **)(puVar6 + 0x10) = pcVar7;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  func_0x0001000285a8(0x112e28fa8,&UNK_10da11440);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(pcVar7);
  pcVar8 = FUN_101d5a6cc;
  func_0x0001000bdd8c(FUN_101d5a6cc,puVar6);
  uVar20 = *(undefined8 *)(param_11 + _DAT_112e2b508);
  func_0x0001000285a8(0x112e28fb0,&UNK_10da11448);
  func_0x000107c613fc();
  func_0x000107c61580(uVar20,2);
  pcVar9 = FUN_101d5a728;
  func_0x0001000bdd8c(FUN_101d5a728,uVar20);
  func_0x0001000285a8(0x112e28fb8,&UNK_10da11450);
  uVar10 = param_3;
  func_0x000107c4cb54();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  uVar10 = param_5;
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x0001000285a8(0x112e28fc0,&UNK_10da11cf0);
  uVar12 = param_7;
  func_0x000107c5cf08();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  func_0x0001000285a8(0x112d51870,&UNK_10d9bd0b0);
  uVar12 = param_10;
  func_0x000107c5b1d4();
  func_0x000107c61180();
  uVar14 = uVar12;
  func_0x0001000bda74();
  func_0x000107c61170(uVar12);
  uVar23 = *(undefined8 *)(param_8 + _DAT_11303ea70);
  uVar22 = *(undefined8 *)(param_12 + _DAT_112ff49a0);
  uVar21 = *(undefined8 *)(param_9 + _DAT_112ff4be0);
  func_0x0001000285a8(0x112e28960,&UNK_10da10ca0);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar21);
  uVar15 = param_4;
  func_0x000107c41258();
  func_0x000107c61180();
  uVar12 = uVar15;
  func_0x0001000bda74();
  func_0x000107c61170(uVar15);
  puVar6 = &UNK_11047ccf0;
  func_0x000107c613fc(&UNK_11047ccf0,0x58,7);
  *(code **)(puVar6 + 0x10) = pcVar9;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar11;
  *(undefined8 *)(puVar6 + 0x28) = uVar14;
  *(undefined8 *)(puVar6 + 0x30) = uVar23;
  *(undefined8 *)(puVar6 + 0x38) = uVar10;
  *(undefined8 *)(puVar6 + 0x40) = uVar12;
  *(undefined8 *)(puVar6 + 0x48) = uVar2;
  *(undefined8 *)(puVar6 + 0x50) = param_13;
  func_0x0001000285a8(0x112e28fc8,&UNK_10da11460);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(uVar13);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar14);
  func_0x000107c615f0(uVar10);
  func_0x000107c6157c(uVar12);
  func_0x000107c61174();
  pcVar16 = FUN_101d5a988;
  func_0x0001000bdd8c(FUN_101d5a988,puVar6);
  puVar6 = &UNK_11047cd18;
  func_0x000107c613fc(&UNK_11047cd18,0x48,7);
  *(code **)(puVar6 + 0x10) = pcVar8;
  *(code **)(puVar6 + 0x18) = pcVar16;
  *(undefined8 *)(puVar6 + 0x20) = uVar22;
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x30) = uVar21;
  *(undefined8 *)(puVar6 + 0x38) = param_13;
  *(undefined8 *)(puVar6 + 0x40) = uVar2;
  func_0x0001000285a8(0x112e28fd0,&UNK_10da11468);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar23);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar21);
  func_0x000107c61174();
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar16);
  pcVar17 = FUN_101d5aa60;
  func_0x0001000bdd8c(FUN_101d5aa60,puVar6);
  puVar6 = &UNK_11047cd40;
  func_0x000107c613fc(&UNK_11047cd40,0x40,7);
  *(code **)(puVar6 + 0x10) = pcVar17;
  *(undefined8 *)(puVar6 + 0x18) = uVar12;
  *(code **)(puVar6 + 0x20) = pcVar3;
  *(code **)(puVar6 + 0x28) = pcVar16;
  *(code **)(puVar6 + 0x30) = pcVar9;
  *(undefined8 *)(puVar6 + 0x38) = uVar2;
  func_0x0001000285a8(0x112e28fd8,&UNK_10da11470);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(pcVar16);
  func_0x000107c6157c(pcVar17);
  pcVar18 = FUN_101d5ab10;
  func_0x0001000bdd8c(FUN_101d5ab10,puVar6);
  puVar6 = &UNK_11047cd68;
  func_0x000107c613fc(&UNK_11047cd68,0x38,7);
  *(code **)(puVar6 + 0x10) = pcVar4;
  *(undefined8 *)(puVar6 + 0x18) = uVar5;
  *(code **)(puVar6 + 0x20) = pcVar18;
  *(code **)(puVar6 + 0x28) = pcVar9;
  *(undefined8 *)(puVar6 + 0x30) = uVar2;
  func_0x0001000285a8(0x112e28fe0,&UNK_10da11478);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(pcVar18);
  pcVar19 = FUN_101d5abb4;
  func_0x0001000bdd8c(FUN_101d5abb4,puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_13);
  func_0x000107c61574(pcVar18);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar17);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar16);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c615e8(uVar10);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar14);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(uVar13);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar3);
  *(code **)(unaff_x20 + 0x10) = pcVar19;
  return;
}



/* Entry: 101d5a57c; end: 101d5a5bf;  */

void FUN_101d5a57c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_101d53f24();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11047c178;
  *param_1 = uVar2;
  return;
}



/* Entry: 101d5a5c0; end: 101d5a60f;  */

void FUN_101d5a5c0(void)

{
  FUN_101d5a6d4();
  return;
}



/* Entry: 101d5a610; end: 101d5a65f;  */

void FUN_101d5a610(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c4cb80();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d5a660; end: 101d5a667;  */

void FUN_101d5a660(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4cb80();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101d5a668; end: 101d5a6cb;  */

/* WARNING: Possible PIC construction at 0x000101d5a6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5a6b8) */

void FUN_101d5a668(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d54004();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047c228;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d5a6cc; end: 101d5a6d3;  */

/* WARNING: Possible PIC construction at 0x000101d5a6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5a6b8) */

void FUN_101d5a6cc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101d54004();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11047c228;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5a6d4; end: 101d5a727;  */

void FUN_101d5a6d4(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  (*param_3)();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = param_4;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d5a728; end: 101d5a74f;  */

void FUN_101d5a728(void)

{
  FUN_101d5a6d4();
  return;
}



/* Entry: 101d5a750; end: 101d5a987;  */

void FUN_101d5a750(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar1 = 0;
  func_0x000101d55e6c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  *(undefined8 *)(lVar2 + 0x40) = param_8;
  *(undefined8 *)(lVar2 + 0x48) = param_9;
  if (param_10 == 0) {
    *(undefined1 *)(lVar2 + 0x50) = 0;
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(param_7);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_8);
    func_0x000107c6157c(param_9);
    uVar6 = 0;
  }
  else {
    func_0x000107c6157c(param_2);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_4);
    func_0x000107c615f0(param_7);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(param_8);
    func_0x000107c6157c(param_9);
    func_0x000107c615f0(param_10);
    uVar5 = 0xd00000000000002c;
    func_0x000107c5fadc(0xd00000000000002c,0x800000010f00ed10);
    lVar3 = param_10;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c615e8(param_10);
    func_0x000107c61170(uVar5);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5dc0c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      lVar3 = lVar4;
      func_0x000107c3ebcc();
      func_0x000107c61170(lVar4);
    }
    *(char *)(lVar2 + 0x50) = (char)lVar3;
    func_0x000107c615f0(param_10);
    uVar5 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010f00ece0);
    lVar3 = param_10;
    func_0x000107c3ebd4();
    uVar6 = (undefined1)lVar3;
    func_0x000107c61170(uVar5);
    func_0x000107c615ec(param_10,2);
  }
  *(undefined1 *)(lVar2 + 0x51) = uVar6;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047c720;
  *param_1 = lVar2;
  return;
}



/* Entry: 101d5a988; end: 101d5a98b;  */

void FUN_101d5a988(void)

{
  long unaff_x20;
  
  FUN_101d5a750(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101d5a98c; end: 101d5aa5f;  */

/* WARNING: Possible PIC construction at 0x000101d5aa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aa2c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa1c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa3c) */

void FUN_101d5a98c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (param_7 != 0) {
    lVar2 = 0;
    FUN_101d5d04c();
    lVar3 = lVar2;
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x10) = param_2;
    *(undefined8 *)(lVar3 + 0x18) = param_3;
    *(undefined8 *)(lVar3 + 0x20) = param_4;
    *(undefined8 *)(lVar3 + 0x28) = param_5;
    *(undefined8 *)(lVar3 + 0x30) = param_6;
    *(long *)(lVar3 + 0x38) = param_7;
    *(undefined8 *)(lVar3 + 0x40) = param_8;
    param_1[3] = lVar2;
    param_1[4] = (long)&PTR_DAT_11047d1a0;
    *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5aa60);
  (*pcVar1)();
}



/* Entry: 101d5aa60; end: 101d5aa63;  */

/* WARNING: Possible PIC construction at 0x000101d5aa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aa2c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa1c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa3c) */

void FUN_101d5aa60(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = 0;
    FUN_101d5d04c();
    lVar9 = lVar8;
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x10) = uVar1;
    *(undefined8 *)(lVar9 + 0x18) = uVar4;
    *(undefined8 *)(lVar9 + 0x20) = uVar2;
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar3;
    *(long *)(lVar9 + 0x38) = lVar7;
    *(undefined8 *)(lVar9 + 0x40) = uVar10;
    param_1[3] = lVar8;
    param_1[4] = (long)&PTR_DAT_11047d1a0;
    *param_1 = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101d5aa60);
  (*pcVar6)();
}



/* Entry: 101d5aa64; end: 101d5ab0f;  */

/* WARNING: Possible PIC construction at 0x000101d5aad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aaf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aae4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aad4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aaf4) */

void FUN_101d5aa64(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d5e480();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  *(undefined8 *)(lVar2 + 0x38) = param_7;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047d3c8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d5ab10; end: 101d5ab13;  */

/* WARNING: Possible PIC construction at 0x000101d5aad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aaf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aae4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aad4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aaf4) */

void FUN_101d5ab10(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  func_0x000101d5e480();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11047d3c8;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5ab14; end: 101d5abb3;  */

/* WARNING: Possible PIC construction at 0x000101d5ab7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5ab8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5ab80) */
/* WARNING: Removing unreachable block (ram,0x000101d5ab90) */

void FUN_101d5ab14(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x000101d63308();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  *(undefined8 *)(lVar2 + 0x28) = param_5;
  *(undefined8 *)(lVar2 + 0x30) = param_6;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047dbd8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101d5abb4; end: 101d5abb7;  */

/* WARNING: Possible PIC construction at 0x000101d5ab7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5ab8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5ab80) */
/* WARNING: Removing unreachable block (ram,0x000101d5ab90) */

void FUN_101d5abb4(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101d63308();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047dbd8;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5abb8; end: 101d5accf;  */

void FUN_101d5abb8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d5acd0; end: 101d5ace3;  */

/* WARNING: Possible PIC construction at 0x000101d5aa18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aa38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aa2c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa1c) */
/* WARNING: Removing unreachable block (ram,0x000101d5aa3c) */

void FUN_101d5acd0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = 0;
    FUN_101d5d04c();
    lVar9 = lVar8;
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x10) = uVar1;
    *(undefined8 *)(lVar9 + 0x18) = uVar4;
    *(undefined8 *)(lVar9 + 0x20) = uVar2;
    *(undefined8 *)(lVar9 + 0x28) = uVar5;
    *(undefined8 *)(lVar9 + 0x30) = uVar3;
    *(long *)(lVar9 + 0x38) = lVar7;
    *(undefined8 *)(lVar9 + 0x40) = uVar10;
    param_1[3] = lVar8;
    param_1[4] = (long)&PTR_DAT_11047d1a0;
    *param_1 = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x101d5aa60);
  (*pcVar6)();
}



/* Entry: 101d5ace4; end: 101d5ad2f;  */

void FUN_101d5ace4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d5ad30; end: 101d5ad3f;  */

/* WARNING: Possible PIC construction at 0x000101d5aad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5aaf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5aae4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aad4) */
/* WARNING: Removing unreachable block (ram,0x000101d5aaf4) */

void FUN_101d5ad30(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar7 = 0;
  func_0x000101d5e480();
  lVar8 = lVar7;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x10) = uVar1;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar5;
  *(undefined8 *)(lVar8 + 0x30) = uVar3;
  *(undefined8 *)(lVar8 + 0x38) = uVar6;
  param_1[3] = lVar7;
  param_1[4] = (long)&PTR_DAT_11047d3c8;
  *param_1 = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5ad40; end: 101d5ad83;  */

void FUN_101d5ad40(void)

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



/* Entry: 101d5ad84; end: 101d5ad93;  */

/* WARNING: Possible PIC construction at 0x000101d5ab7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5ab8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5ab80) */
/* WARNING: Removing unreachable block (ram,0x000101d5ab90) */

void FUN_101d5ad84(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = 0;
  func_0x000101d63308();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x10) = uVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar3;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  *(undefined8 *)(lVar6 + 0x30) = uVar7;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_11047dbd8;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5ad94; end: 101d5adcb;  */

void FUN_101d5ad94(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c3ce4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar1);
  func_0x000103a6add0();
  return;
}



/* Entry: 101d5adcc; end: 101d5add3;  */

void FUN_101d5adcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d5add4; end: 101d5ae73;  */

void FUN_101d5add4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d5ae74; end: 101d5aebf;  */

void FUN_101d5ae74(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001002c3ce4(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103a6add0();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d5aec0; end: 101d5aee3;  */

/* WARNING: Possible PIC construction at 0x000101d5a6b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5a6b8) */

void FUN_101d5aec0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x000101d54004();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11047c228;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101d5aee4; end: 101d5af27;  */

void FUN_101d5aee4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d5af28; end: 101d5b23f;  */

/* WARNING: Possible PIC construction at 0x000101d5afe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5b020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5afec) */
/* WARNING: Removing unreachable block (ram,0x000101d5aff0) */
/* WARNING: Removing unreachable block (ram,0x000101d5b044) */
/* WARNING: Removing unreachable block (ram,0x000101d5b00c) */
/* WARNING: Removing unreachable block (ram,0x000101d5b024) */

void FUN_101d5af28(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126d8288;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_101d617d0();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  uVar3 = 0;
  FUN_101d5b364(0,0x112e29160,&PTR_PTR_1126e0da8);
  func_0x000107c61174(param_1);
  puVar4 = puVar2;
  func_0x000107c5fc48(puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000107c545dc(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 101d5b240; end: 101d5b247;  */

/* WARNING: Possible PIC construction at 0x000101d5afe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5b020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5afec) */
/* WARNING: Removing unreachable block (ram,0x000101d5aff0) */
/* WARNING: Removing unreachable block (ram,0x000101d5b044) */
/* WARNING: Removing unreachable block (ram,0x000101d5b00c) */
/* WARNING: Removing unreachable block (ram,0x000101d5b024) */

void FUN_101d5b240(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126d8288;
  func_0x000107c610f8(PTR_PTR_1126d8288,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c453e4();
  puVar3 = puVar2;
  FUN_101d617d0();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  uVar4 = 0;
  FUN_101d5b364(0,0x112e29160,&PTR_PTR_1126e0da8);
  func_0x000107c61174(uVar1);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,uVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c545dc(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 101d5b248; end: 101d5b2b7;  */

void FUN_101d5b248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  func_0x000107c5caf8();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5f9e8();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101d5b2b8; end: 101d5b363;  */

void FUN_101d5b2b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  func_0x00010018cc3c();
  uVar2 = uVar1;
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar1);
  uVar1 = uVar2;
  func_0x000108016950();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar1;
  func_0x000107c5f9e8(uVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101d5b364; end: 101d5b3a3;  */

void FUN_101d5b364(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d5b3a4; end: 101d5b3e3;  */

void FUN_101d5b3a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da115f4;
  func_0x000107c61520(&UNK_10da115f4,&UNK_11047cf50);
  puRam0000000112e29168 = puVar1;
  return;
}



/* Entry: 101d5b3e4; end: 101d5b3f7;  */

bool FUN_101d5b3e4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d5b3f8; end: 101d5b4a3;  */

void FUN_101d5b3f8(void)

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



/* Entry: 101d5b4a4; end: 101d5b63b;  */

void FUN_101d5b4a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d5b63c; end: 101d5b67b;  */

void FUN_101d5b63c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e29198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da115cc;
  func_0x000107c61520(&UNK_10da115cc,&UNK_11047cf50);
  puRam0000000112e29198 = puVar1;
  return;
}



/* Entry: 101d5b67c; end: 101d5b68f;  */

bool FUN_101d5b67c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d5b690; end: 101d5b73b;  */

void FUN_101d5b690(void)

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



/* Entry: 101d5b73c; end: 101d5b8db;  */

void FUN_101d5b73c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d5b8dc; end: 101d5b91b;  */

void FUN_101d5b8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e291c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da116b4;
  func_0x000107c61520(&UNK_10da116b4,&UNK_11047d048);
  puRam0000000112e291c8 = puVar1;
  return;
}



/* Entry: 101d5b91c; end: 101d5babf;  */

undefined8 FUN_101d5b91c(undefined4 *param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *param_1;
  puVar4 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (lVar2 == 0) {
      puVar4 = (undefined1 *)0x112e28f20;
      func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
      func_0x000101d58e80();
      plVar5 = (long *)&UNK_11047d048;
      func_0x000107c613f8(&UNK_11047d048,puVar4,0,0);
      *puVar4 = 0;
      plVar6 = plVar5;
      func_0x00010488904c();
      func_0x000107c614ac(plVar5);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
      plVar6 = &lStack_78;
      lStack_78 = lVar3;
      puStack_70 = puVar4;
      func_0x000104888f7c(plVar6);
      func_0x000107c6142c(puVar4);
    }
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    puVar7 = &UNK_11047d180;
    func_0x000107c613fc(&UNK_11047d180,0x29,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar8;
    *(undefined4 *)(puVar7 + 0x18) = uVar1;
    *(long *)(puVar7 + 0x20) = param_3;
    puVar7[0x28] = 4;
    func_0x000107c6157c(uVar8);
    func_0x000107c61174(param_3);
    uVar8 = 0;
    func_0x0001048898b8(0,1,0x101d5bf94,puVar7,PTR___sSSN_11034da80);
    func_0x000107c61574(param_2);
    func_0x000107c61574(plVar6);
    func_0x000107c61574(puVar7);
  }
  return uVar8;
}



/* Entry: 101d5bac0; end: 101d5bb43;  */

void FUN_101d5bac0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lStack_48 + 0x20))(uVar2,uVar3,uVar1,lStack_48);
  func_0x000107c615e8(uStack_50);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 101d5bb44; end: 101d5bb87;  */

void FUN_101d5bb44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d5bb88; end: 101d5bbdb;  */

undefined8 FUN_101d5bb88(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = &UNK_11047d158;
  lVar3 = *unaff_x20;
  uVar1 = param_1;
  FUN_101d5be28();
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c613fc(&UNK_11047d158,0x29,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar4;
  *(undefined4 *)(puVar2 + 0x18) = 5;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar2[0x28] = 1;
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(param_1);
  uVar4 = 0;
  func_0x0001048898b8(0,1,0x101d5bf80,puVar2,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  return uVar4;
}



/* Entry: 101d5bbdc; end: 101d5bc97;  */

undefined8
FUN_101d5bbdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  FUN_101d5be28();
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c613fc(param_4,0x29,7);
  *(undefined8 *)(param_4 + 0x10) = uVar3;
  *(undefined4 *)(param_4 + 0x18) = param_5;
  *(undefined8 *)(param_4 + 0x20) = param_1;
  *(undefined1 *)(param_4 + 0x28) = param_6;
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(param_1);
  uVar3 = 0;
  func_0x0001048898b8(0,1,param_7,param_4,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(param_4);
  return uVar3;
}



/* Entry: 101d5bc98; end: 101d5bd17;  */

undefined8 FUN_101d5bc98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  FUN_101d5be28();
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  func_0x000107c6157c(uVar4);
  uVar1 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  uVar2 = 0;
  func_0x000100775264(0,1,FUN_101d5bf04,uVar4,uVar1);
  func_0x000107c61574(param_1);
  func_0x000107c61574(uVar4);
  return uVar2;
}



/* Entry: 101d5bd18; end: 101d5be27;  */

undefined *
FUN_101d5bd18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar5 = &uStack_60;
  uVar2 = *param_1;
  lVar6 = param_1[1];
  func_0x0001000d224c(&uStack_60);
  uVar1 = uStack_60;
  func_0x000107c614f0(uStack_60);
  (**(code **)(lStack_58 + 0x10))(uVar2,lVar6,param_3,uVar1,lStack_58);
  func_0x000107c615e8(uStack_60);
  puVar3 = (undefined1 *)0x112e28f20;
  if (lVar6 == 0) {
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    func_0x000101d58e80();
    puVar4 = &UNK_11047d048;
    func_0x000107c613f8(&UNK_11047d048,puVar3,0,0);
    *puVar3 = param_5;
    puVar5 = (undefined8 *)puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    uStack_60 = uVar2;
    lStack_58 = lVar6;
    func_0x000104888f7c(&uStack_60,puVar3);
    func_0x000107c6142c(lVar6);
  }
  return (undefined *)puVar5;
}



/* Entry: 101d5be28; end: 101d5bf03;  */

long * FUN_101d5be28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar5 = &lStack_40;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar3 = (undefined1 *)0x112e28f20;
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    func_0x000101d58e80();
    puVar4 = &UNK_11047d048;
    func_0x000107c613f8(&UNK_11047d048,puVar3,0,0);
    *puVar3 = 0;
    plVar5 = (long *)puVar4;
    func_0x00010488904c();
    func_0x000107c614ac(puVar4);
  }
  else {
    lVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    uVar2 = 0x112e28f20;
    func_0x0001000285a8(0x112e28f20,&UNK_10da11330);
    lStack_40 = lVar1;
    uStack_38 = param_2;
    func_0x000104888f7c(&lStack_40,uVar2);
    func_0x000107c6142c(param_2);
  }
  return plVar5;
}



/* Entry: 101d5bf04; end: 101d5c013;  */

void FUN_101d5bf04(void)

{
  FUN_101d5bac0();
  return;
}



/* Entry: 101d5c014; end: 101d5c1c3;  */

void FUN_101d5c014(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  if (uVar5 >> 0x3c < 0xf && uVar6 >> 0x3c < 0xf) {
    uVar7 = *param_2;
    uVar8 = param_2[2];
    puVar9 = PTR_PTR_1126d83e8;
    func_0x000107c610f8();
    func_0x000100de78a0(uVar7,uVar5);
    func_0x000100de78a0(uVar8,uVar6);
    func_0x000107c453e4();
    uVar2 = 0;
    uVar4 = uVar7;
    func_0x000107c5ee24(0,uVar7,uVar5);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    puVar3 = puVar9;
    func_0x000107c54580();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar2);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5c1bc);
      (*pcVar1)();
    }
    uVar2 = 0;
    uVar4 = uVar8;
    func_0x000107c5ee24(0,uVar8,uVar6);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    puVar9 = puVar3;
    func_0x000107c5457c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar2);
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5c1c0);
      (*pcVar1)();
    }
    puVar3 = puVar9;
    func_0x000107c54568();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d5c1c4);
      (*pcVar1)();
    }
    puVar9 = puVar3;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x0001000b44c0(uVar8,uVar6);
    func_0x0001000b44c0(uVar7,uVar5);
  }
  else {
    puVar9 = (undefined *)0x0;
  }
  *param_1 = puVar9;
  return;
}



/* Entry: 101d5c1c4; end: 101d5c3d3;  */

void FUN_101d5c1c4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *apuStack_90 [3];
  long lStack_78;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(apuStack_90);
  if (lStack_78 == 0) {
    FUN_101d5e10c(apuStack_90,0x112e293b0,&UNK_10da11800);
    func_0x0001000285a8(0x112e293b8,&UNK_10da11808);
    auStack_68[0] = 0;
    func_0x000104888f7c(auStack_68);
  }
  else {
    FUN_101d5e0f4(apuStack_90,auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lStack_48 + 8))(param_1,param_2,uStack_50);
    lVar3 = lStack_48;
    if ((param_2 == 0) || (lVar3 = param_2, lStack_48 == 0)) {
      func_0x000107c6142c(lVar3);
      func_0x0001000285a8(0x112e293b8,&UNK_10da11808);
      apuStack_90[0] = (undefined *)0x0;
      func_0x000104888f7c(apuStack_90);
      func_0x0001000834e4(auStack_68);
    }
    else {
      puVar1 = PTR_PTR_1126d83f0;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c6142c(param_2);
      puVar2 = puVar1;
      func_0x000107c53ee4(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c5fadc(uStack_50,lStack_48);
      func_0x000107c6142c(lStack_48);
      puVar2 = puVar1;
      func_0x000107c53ee0(puVar1);
      func_0x000107c61180();
      func_0x000107c61170(uStack_50);
      func_0x000107c61170(puVar2);
      func_0x0001000285a8(0x112e293b8,&UNK_10da11808);
      puVar2 = puVar1;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      apuStack_90[0] = puVar2;
      func_0x000104888f7c(apuStack_90);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x0001000834e4(auStack_68);
    }
  }
  return;
}



/* Entry: 101d5c3d4; end: 101d5c753;  */

/* WARNING: Possible PIC construction at 0x000101d5c494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c6bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c6cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d5c634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d5c6d0) */
/* WARNING: Removing unreachable block (ram,0x000101d5c71c) */
/* WARNING: Removing unreachable block (ram,0x000101d5c734) */
/* WARNING: Removing unreachable block (ram,0x000101d5c6c0) */
/* WARNING: Removing unreachable block (ram,0x000101d5c684) */
/* WARNING: Removing unreachable block (ram,0x000101d5c708) */
/* WARNING: Removing unreachable block (ram,0x000101d5c554) */
/* WARNING: Removing unreachable block (ram,0x000101d5c6d4) */
/* WARNING: Removing unreachable block (ram,0x000101d5c570) */
/* WARNING: Removing unreachable block (ram,0x000101d5c714) */
/* WARNING: Removing unreachable block (ram,0x000101d5c530) */
/* WARNING: Removing unreachable block (ram,0x000101d5c670) */
/* WARNING: Removing unreachable block (ram,0x000101d5c53c) */
/* WARNING: Removing unreachable block (ram,0x000101d5c4d8) */
/* WARNING: Removing unreachable block (ram,0x000101d5c5fc) */
/* WARNING: Removing unreachable block (ram,0x000101d5c4dc) */
/* WARNING: Removing unreachable block (ram,0x000101d5c498) */
/* WARNING: Removing unreachable block (ram,0x000101d5c638) */
/* WARNING: Removing unreachable block (ram,0x000101d5c650) */

void FUN_101d5c3d4(undefined1 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  long alStack_d8 [13];
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4e150();
  func_0x000107c61180();
  if (param_1 != (undefined1 *)0x0) {
    func_0x000107c5caf8();
    func_0x000107c61180();
    func_0x000107c5f9e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  FUN_101d5d56c();
  puVar2 = &UNK_11047d350;
  uVar5 = 0;
  func_0x000107c613f8(&UNK_11047d350,param_1,0,0);
  *param_1 = 1;
  puVar3 = puVar2;
  func_0x00010488ade0();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
    return;
  }
  func_0x000107c60e78();
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x28) = unaff_x24;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x30) = unaff_x23;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x38) = unaff_x22;
  *(undefined1 **)((long)alStack_d8 + lVar1 + 0x40) = auStack_70 + lVar1;
  *(undefined8 *)((long)alStack_d8 + lVar1 + 0x48) = param_2;
  *(undefined **)((long)alStack_d8 + lVar1 + 0x50) = puVar2;
  *(undefined1 **)((long)alStack_d8 + lVar1 + 0x58) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_d8 + lVar1 + 0x60) = FUN_101d5c754;
  func_0x000107c43c78();
  func_0x000107c61180();
  puVar2 = puVar3;
  func_0x000107c44950();
  func_0x000107c615e8(puVar3);
  if ((int)puVar2 == 0) {
    func_0x0001000285a8(0x112e29390,&UNK_10da117f0);
    *(undefined8 *)((long)alStack_d8 + lVar1) = 0;
    func_0x000104888f7c((long)alStack_d8 + lVar1);
  }
  else {
    func_0x0001000d224c((long)alStack_d8 + lVar1);
    func_0x0001000a8868((long)alStack_d8 + lVar1,*(undefined8 *)((long)alStack_d8 + lVar1 + 0x18));
    uVar4 = 0;
    func_0x000101d54004(0);
    (*(code *)(undefined *)0x101d54684)(param_1,uVar5,uVar4,&PTR_DAT_11047c228);
    uVar5 = 0x112e29398;
    func_0x0001000285a8(0x112e29398,&UNK_10da11a10);
    func_0x000100775264(0,1,FUN_101d5c868,0,uVar5);
    func_0x000107c61574(param_1);
    func_0x0001000834e4((long)alStack_d8 + lVar1);
  }
  return;
}



/* Entry: 101d5c754; end: 101d5c867;  */

void FUN_101d5c754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  
  func_0x000107c43c78();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c44950();
  func_0x000107c615e8(param_1);
  if ((int)uVar1 == 0) {
    func_0x0001000285a8(0x112e29390,&UNK_10da117f0);
    auStack_68[0] = 0;
    func_0x000104888f7c(auStack_68);
  }
  else {
    func_0x0001000d224c(auStack_68);
    func_0x0001000a8868(auStack_68,uStack_50);
    uVar1 = 0;
    func_0x000101d54004(0);
    (*(code *)(undefined *)0x101d54684)(param_2,param_3,uVar1,&PTR_DAT_11047c228);
    uVar1 = 0x112e29398;
    func_0x0001000285a8(0x112e29398,&UNK_10da11a10);
    func_0x000100775264(0,1,FUN_101d5c868,0,uVar1);
    func_0x000107c61574(param_2);
    func_0x0001000834e4(auStack_68);
  }
  return;
}



/* Entry: 101d5c868; end: 101d5c933;  */

void FUN_101d5c868(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = *param_4;
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c4077c();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_2);
    func_0x000107c4077c(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_3);
    puVar4 = PTR_PTR_1126d8400;
    func_0x000107c610f8();
    func_0x000107c470ec();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
  }
  *param_1 = puVar4;
  return;
}



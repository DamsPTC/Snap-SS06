/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013b2d14; end: 1013b2d3f;  */

void FUN_1013b2d14(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013b2d40; end: 1013b2d4b;  */

void FUN_1013b2d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e6328d4);
  return;
}



/* Entry: 1013b2d4c; end: 1013b2d6b;  */

void FUN_1013b2d4c(void)

{
  FUN_1013b2b4c();
  return;
}



/* Entry: 1013b2d6c; end: 1013b2d73;  */

undefined8 FUN_1013b2d6c(void)

{
  return 1;
}



/* Entry: 1013b2d74; end: 1013b2e13;  */

void FUN_1013b2d74(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1013b2e14; end: 1013b2e23;  */

void FUN_1013b2e14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013b2e24; end: 1013b2f47;  */

undefined * FUN_1013b2e24(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = *(undefined **)(unaff_x20 + 0x68);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (**(code **)(lVar5 + 0x68))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar1);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar4 = 0xd00000000000001e;
    func_0x000107c5fadc(0xd00000000000001e,0x800000010ef3b420);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar4);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined **)(unaff_x20 + 0x68) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c615e8(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar2);
  return puVar3;
}



/* Entry: 1013b2f48; end: 1013b3097;  */

long FUN_1013b2f48(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x70);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112d79ad0,&UNK_10d9392c0);
    func_0x000107c613fc();
    lVar2 = 1;
    func_0x00010008747c();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x70);
    *(long *)(unaff_x20 + 0x70) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar1 = 0;
  }
  func_0x000107c6157c(lVar1);
  return lVar2;
}



/* Entry: 1013b3098; end: 1013b327b;  */

undefined8 FUN_1013b3098(code *param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_b0 [24];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_1013b2a30(auStack_b0);
  if (lStack_98 == 0) {
    func_0x0001013b4560(auStack_b0,0x112d79ae8,&UNK_10d9392d0);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x0001013b44f8(auStack_b0,&uStack_80);
  }
  func_0x000107c61428(unaff_x20 + 0x28,auStack_b0,0x21,0);
  FUN_1013b449c(&uStack_80,unaff_x20 + 0x28);
  func_0x000107c614a8(auStack_b0);
  func_0x0001000d224c(auStack_b0);
  lVar1 = lStack_90;
  lVar2 = lStack_98;
  func_0x0001000a8868(auStack_b0,lStack_98);
  (**(code **)(lVar1 + 0x18))(lVar2,lVar1);
  if (lVar2 == 0) {
    func_0x0001000834e4(auStack_b0);
  }
  else {
    func_0x0001000834e4(auStack_b0);
    (*param_1)(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(auStack_b0);
  func_0x0001000a8868(auStack_b0,lStack_98);
  pcVar3 = FUN_1013b327c;
  (**(code **)(lStack_90 + 8))(FUN_1013b327c,0,lStack_98,lStack_90);
  pcVar4 = pcVar3;
  FUN_1013b2e24();
  pcVar5 = pcVar4;
  func_0x000104880bc0(0x3fb999999999999a);
  func_0x000107c61574(pcVar3);
  func_0x000107c615e8(pcVar4);
  func_0x0001000834e4(auStack_b0);
  puVar6 = &UNK_1103acc50;
  func_0x000107c613fc(&UNK_1103acc50,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  uVar7 = 0x1013b4510;
  func_0x00010068b194(0x1013b4510,puVar6,&UNK_110723a90);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  return uVar7;
}



/* Entry: 1013b327c; end: 1013b327f;  */

void FUN_1013b327c(void)

{
  return;
}



/* Entry: 1013b3280; end: 1013b348b;  */

void FUN_1013b3280(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_1;
  if (lVar5 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      uStack_80 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      lStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      func_0x000107c61428(lVar1 + 0x28,auStack_d0,0,0);
      FUN_1013b4518(lVar1 + 0x28,&uStack_a0,0x112d79af0,&UNK_10d9392d8);
      func_0x000107c61174(lVar5);
      func_0x000107c61574(lVar1);
      if (lStack_88 != 0) {
        func_0x0001013b44f8(&uStack_a0,&uStack_70);
        puVar2 = &UNK_1103acc50;
        func_0x000107c613fc(&UNK_1103acc50,0x18,7);
        func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
        param_2 = param_2 + 0x10;
        func_0x000107c61648(param_2);
        func_0x000107c61644(puVar2 + 0x10,param_2);
        func_0x000107c61574(param_2);
        puVar3 = &UNK_1103accc8;
        func_0x000107c613fc(&UNK_1103accc8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,lVar5);
        func_0x0001013b45a0(&uStack_70,&uStack_a0);
        puVar4 = &UNK_1103accf0;
        func_0x000107c613fc(&UNK_1103accf0,0x48,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar4 + 0x18) = puVar2;
        func_0x0001013b44f8(&uStack_a0,puVar4 + 0x20);
        func_0x0001000285a8(0x112d79b08,&UNK_10d9392f8);
        func_0x000107c613fc();
        func_0x0001000b64ac(FUN_1013b45e4,puVar4);
        func_0x000107c61170(lVar5);
        func_0x0001000834e4(&uStack_70);
        return;
      }
      func_0x000107c61170(lVar5);
    }
    func_0x0001013b4560(&uStack_a0,0x112d79af0,&UNK_10d9392d8);
  }
  func_0x0001000285a8(0x112d79b00,&UNK_10d9392f0);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0;
  uStack_38 = 0x8000000000000000;
  func_0x000100854cb0(&uStack_70);
  return;
}



/* Entry: 1013b348c; end: 1013b3633;  */

void FUN_1013b348c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    pcVar4 = (code *)0x0;
    if (param_3 != 0) {
      pcVar4 = FUN_1013b4764;
    }
    uVar3 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(pcVar4,param_3,uVar3);
  }
  else {
    uVar3 = *(undefined8 *)(param_4 + 0x18);
    lVar1 = *(long *)(param_4 + 0x20);
    func_0x0001000a8868(param_4,uVar3);
    puVar2 = &UNK_1103acd18;
    func_0x000107c613fc(&UNK_1103acd18,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_1);
    pcVar4 = *(code **)(lVar1 + 8);
    func_0x000107c6157c(puVar2);
    (*pcVar4)(param_2,0x1013b45f0,puVar2,uVar3,lVar1);
    func_0x000107c61578(puVar2,2);
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    pcVar4 = (code *)0x0;
    if (param_3 != 0) {
      pcVar4 = FUN_1013b45f8;
    }
    uVar3 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(pcVar4,param_3,uVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013b3634; end: 1013b369f;  */

void FUN_1013b3634(undefined8 *param_1,long param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uStack_78 = param_1[1];
    uStack_80 = *param_1;
    uStack_68 = param_1[3];
    uStack_70 = param_1[2];
    uStack_58 = param_1[5];
    uStack_60 = param_1[4];
    uStack_48 = param_1[7];
    uStack_50 = param_1[6];
    func_0x000100087f6c(&uStack_80);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1013b36a0; end: 1013b36ff;  */

void FUN_1013b36a0(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1013b3700; end: 1013b380f;  */

void FUN_1013b3700(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(auStack_88);
  puVar1 = auStack_88;
  func_0x0001000a8868(puVar1,uStack_70);
  FUN_1013b2e24();
  puVar2 = &UNK_1103acc50;
  func_0x000107c613fc(&UNK_1103acc50,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_1103acc78;
  func_0x000107c613fc(&UNK_1103acc78,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcVar4 = *(code **)(lStack_68 + 0x20);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_2);
  (*pcVar4)(puVar1,FUN_1013b4120,puVar3,uStack_70,lStack_68);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(puVar1);
  func_0x000107c61574(puVar3);
  func_0x0001000834e4(auStack_88);
  return;
}



/* Entry: 1013b3810; end: 1013b3af7;  */

void FUN_1013b3810(undefined8 *param_1,long param_2,code *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [3];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (*(char *)(param_1 + 6) == '\x01') {
      (*param_3)(*param_1,1);
    }
    else {
      uStack_70 = param_1[2];
      uStack_78 = param_1[1];
      uStack_60 = param_1[4];
      uStack_68 = param_1[3];
      uStack_58 = param_1[5];
      puVar2 = &uStack_80;
      uStack_80 = *param_1;
      FUN_1013b42a4();
      if (puVar2 != (undefined8 *)0x0) {
        puVar3 = puVar2;
        func_0x000107c61174();
        (*param_3)(puVar2,0);
        func_0x000107c61170(puVar3);
        uVar6 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x20);
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1013b3af4);
          (*pcVar9)();
        }
        lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
        if (uVar6 < *(ulong *)(lVar7 + 0x10)) {
          FUN_1013b4518(lVar7 + uVar6 * 0x30 + 0x20,auStack_c8,0x112d79ae0,&UNK_10d9392c8);
          func_0x0001000834e4(auStack_c8);
          uVar8 = *(undefined8 *)(param_2 + 0x20);
          func_0x000107c6157c(uVar8);
          FUN_1013b2a30(auStack_c8);
          func_0x000107c61574(uVar8);
          if (lStack_b0 == 0) {
            func_0x0001013b4560(auStack_c8,0x112d79ae8,&UNK_10d9392d0);
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_d0 = 0;
          }
          else {
            func_0x0001013b44f8(auStack_c8,&uStack_f0);
          }
          func_0x000107c61428(param_2 + 0x28,auStack_c8,0x21,0);
          FUN_1013b449c(&uStack_f0,param_2 + 0x28);
          puVar2 = auStack_c8;
          func_0x000107c614a8(puVar2);
          cVar1 = *(char *)(*(long *)(param_2 + 0x20) + 0x28);
          FUN_1013b2f48();
          if (cVar1 == '\x01') {
            func_0x0001048872ac();
          }
          else {
            auStack_c8[0] = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20);
            func_0x000100087c34(auStack_c8);
          }
          func_0x000107c61574(puVar2);
          func_0x0001000d224c(auStack_c8);
          func_0x0001000a8868(auStack_c8,lStack_b0);
          puVar4 = &UNK_1103acc50;
          func_0x000107c613fc(&UNK_1103acc50,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,param_2);
          puVar5 = &UNK_1103acca0;
          func_0x000107c613fc(&UNK_1103acca0,0x28,7);
          *(undefined **)(puVar5 + 0x10) = puVar4;
          *(undefined8 **)(puVar5 + 0x18) = puVar3;
          *(undefined8 *)(puVar5 + 0x20) = uStack_a0;
          pcVar9 = *(code **)(lStack_a8 + 0x10);
          func_0x000107c61174(puVar3);
          func_0x000107c6157c(puVar4);
          (*pcVar9)(puVar3,0,0,0x1013b44ec,puVar5,lStack_b0,lStack_a8);
          func_0x000107c61574(puVar4);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(param_2);
          func_0x000107c61170(puVar3);
          func_0x0001000834e4(auStack_c8);
          return;
        }
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1013b3af8);
        (*pcVar9)();
      }
      FUN_1013b445c();
      puVar4 = &UNK_1103acdb0;
      func_0x000107c613f8(&UNK_1103acdb0,puVar2,0,0);
      (*param_3)();
      func_0x000107c614ac(puVar4);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1013b3af8; end: 1013b3e17;  */

void FUN_1013b3af8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar5;
  long extraout_x12;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar6 - extraout_x8_00;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1013b4518(param_1,lVar9,0x112d5d568,&UNK_10d9392e0);
    lVar7 = lVar9;
    func_0x000107c614c4(lVar9,lVar3);
    if ((int)lVar7 == 1) {
      func_0x000107c61574(param_2);
      func_0x0001013b4560(lVar9,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar6,lVar9,lVar2);
      (**(code **)(lVar11 + 0x10))
                (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar6,lVar2);
      func_0x000103f2feb8(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000103f2f838();
      func_0x000107c61428(param_2 + 0x50,auStack_90,0,0);
      lVar3 = param_2 + 0x50;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar7 = *(long *)(param_2 + 0x58);
        lVar9 = lVar3;
        func_0x000107c614f0();
        (**(code **)(lVar7 + 8))(param_3,lVar9,lVar7);
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61428(param_2 + 0x60,auStack_a8,0x21,0);
      func_0x000107c61174();
      FUN_1013b2358();
      uVar8 = *(ulong *)(param_2 + 0x60);
      uVar5 = uVar8 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar5 + 0x10);
      uVar4 = uVar8;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_1013b240c(uVar4,uVar1 + 1,1,uVar8);
        uVar5 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar5 + uVar1 * 8 + 0x20) = param_3;
      *(ulong *)(param_2 + 0x60) = uVar4;
      func_0x000107c614a8(auStack_a8);
      if (*(char *)(*(long *)(param_2 + 0x20) + 0x28) == '\x01') {
        lVar3 = param_2 + 0x50;
        func_0x000107c61618();
        if (lVar3 == 0) {
          func_0x000107c61170(param_3);
          func_0x000107c61574(param_2);
        }
        else {
          lVar9 = *(long *)(param_2 + 0x58);
          func_0x000107c614f0();
          pcVar10 = *(code **)(lVar9 + 0x10);
          func_0x000107c61434(uVar4);
          (*pcVar10)();
          func_0x000107c61170(param_3);
          func_0x000107c61574(param_2);
          func_0x000107c615e8(lVar3);
          func_0x000107c6142c(uVar4);
        }
        (**(code **)(lVar11 + 8))(lVar6,lVar2);
      }
      else {
        (**(code **)(lVar11 + 8))(lVar6,lVar2);
        func_0x000107c61574(param_2);
        func_0x000107c61170(param_3);
      }
    }
  }
  return;
}



/* Entry: 1013b3e18; end: 1013b3ec3;  */

void FUN_1013b3e18(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001013b4560(unaff_x20 + 0x28,0x112d79af0,&UNK_10d9392d8);
  FUN_1013b4610(unaff_x20 + 0x50);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 1013b3ec4; end: 1013b3f03;  */

void FUN_1013b3ec4(void)

{
  FUN_1013b3098();
  return;
}



/* Entry: 1013b3f04; end: 1013b3f67;  */

void FUN_1013b3f04(void)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return;
}



/* Entry: 1013b3f68; end: 1013b3fcb;  */

void FUN_1013b3f68(void)

{
  FUN_1013b2f48();
  return;
}



/* Entry: 1013b3fcc; end: 1013b411f;  */

void FUN_1013b3fcc(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x50,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x58) = param_2;
  func_0x000107c61604(lVar1 + 0x50,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1013b4120; end: 1013b412b;  */

void FUN_1013b4120(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 auStack_c8 [3];
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar10 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_98,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    if (*(char *)(param_1 + 6) == '\x01') {
      (*pcVar10)(*param_1,1);
    }
    else {
      uStack_70 = param_1[2];
      uStack_78 = param_1[1];
      uStack_60 = param_1[4];
      uStack_68 = param_1[3];
      uStack_58 = param_1[5];
      puVar3 = &uStack_80;
      uStack_80 = *param_1;
      FUN_1013b42a4();
      if (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar3;
        func_0x000107c61174();
        (*pcVar10)(puVar3,0);
        func_0x000107c61170(puVar4);
        uVar7 = *(ulong *)(*(long *)(lVar2 + 0x20) + 0x20);
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1013b3af4);
          (*pcVar10)();
        }
        lVar8 = *(long *)(*(long *)(lVar2 + 0x20) + 0x10);
        if (uVar7 < *(ulong *)(lVar8 + 0x10)) {
          FUN_1013b4518(lVar8 + uVar7 * 0x30 + 0x20,auStack_c8,0x112d79ae0,&UNK_10d9392c8);
          func_0x0001000834e4(auStack_c8);
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          func_0x000107c6157c(uVar9);
          FUN_1013b2a30(auStack_c8);
          func_0x000107c61574(uVar9);
          if (lStack_b0 == 0) {
            func_0x0001013b4560(auStack_c8,0x112d79ae8,&UNK_10d9392d0);
            uStack_e8 = 0;
            uStack_f0 = 0;
            uStack_d8 = 0;
            uStack_e0 = 0;
            uStack_d0 = 0;
          }
          else {
            func_0x0001013b44f8(auStack_c8,&uStack_f0);
          }
          func_0x000107c61428(lVar2 + 0x28,auStack_c8,0x21,0);
          FUN_1013b449c(&uStack_f0,lVar2 + 0x28);
          puVar3 = auStack_c8;
          func_0x000107c614a8(puVar3);
          cVar1 = *(char *)(*(long *)(lVar2 + 0x20) + 0x28);
          FUN_1013b2f48();
          if (cVar1 == '\x01') {
            func_0x0001048872ac();
          }
          else {
            auStack_c8[0] = *(undefined8 *)(*(long *)(lVar2 + 0x20) + 0x20);
            func_0x000100087c34(auStack_c8);
          }
          func_0x000107c61574(puVar3);
          func_0x0001000d224c(auStack_c8);
          func_0x0001000a8868(auStack_c8,lStack_b0);
          puVar5 = &UNK_1103acc50;
          func_0x000107c613fc(&UNK_1103acc50,0x18,7);
          func_0x000107c61644(puVar5 + 0x10,lVar2);
          puVar6 = &UNK_1103acca0;
          func_0x000107c613fc(&UNK_1103acca0,0x28,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(undefined8 **)(puVar6 + 0x18) = puVar4;
          *(undefined8 *)(puVar6 + 0x20) = uStack_a0;
          pcVar10 = *(code **)(lStack_a8 + 0x10);
          func_0x000107c61174(puVar4);
          func_0x000107c6157c(puVar5);
          (*pcVar10)(puVar4,0,0,0x1013b44ec,puVar6,lStack_b0,lStack_a8);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(puVar6);
          func_0x000107c61574(lVar2);
          func_0x000107c61170(puVar4);
          func_0x0001000834e4(auStack_c8);
          return;
        }
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1013b3af8);
        (*pcVar10)();
      }
      FUN_1013b445c();
      puVar5 = &UNK_1103acdb0;
      func_0x000107c613f8(&UNK_1103acdb0,puVar3,0,0);
      (*pcVar10)();
      func_0x000107c614ac(puVar5);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1013b412c; end: 1013b41ab;  */

undefined1  [16] FUN_1013b412c(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_1013b4284;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_1013b4284:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 1013b41ac; end: 1013b42a3;  */

undefined1  [16] FUN_1013b41ac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_1013b4284;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_1013b4284:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1013b42a4; end: 1013b445b;  */

undefined * FUN_1013b42a4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_58;
  
  uVar2 = *param_2;
  uVar7 = param_2[1];
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8();
  func_0x000107c5ee20(uVar2);
  func_0x000107c4635c();
  func_0x000107c61170(uVar2);
  if (puVar1 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  lVar9 = param_2[5];
  lVar3 = *(long *)PTR__kCGImagePropertyOrientation_110349d48;
  lStack_58 = lVar9;
  func_0x000107c5faec(lVar3);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    uVar8 = uVar7;
    func_0x000100029284(lVar3);
    if ((uVar8 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar9 + 0x38) + lVar3 * 0x20,&uStack_80);
      func_0x0001013b4560(&lStack_58,0x112d472a8,&UNK_10d90e490);
      goto LAB_1013b4390;
    }
    func_0x0001013b4560(&lStack_58,0x112d472a8,&UNK_10d90e490);
  }
  param_1 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
LAB_1013b4390:
  func_0x000107c6142c(uVar7);
  if (lStack_68 == 0) {
    func_0x0001013b4560(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    puVar4 = auStack_88;
    func_0x000107c6147c(puVar4,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSiN_11034deb0,6);
    if (((ulong)puVar4 & 1) != 0) {
      puVar5 = puVar1;
      func_0x000107c3ab2c();
      func_0x000107c61180();
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c51820(puVar1);
        puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c45afc(param_1);
        func_0x000107c61170(puVar1);
        func_0x000107c61170(puVar5);
        puVar1 = puVar6;
      }
    }
  }
  return puVar1;
}



/* Entry: 1013b445c; end: 1013b449b;  */

void FUN_1013b445c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939380;
  func_0x000107c61520(&UNK_10d939380,&UNK_1103acdb0);
  puRam0000000112d79ad8 = puVar1;
  return;
}



/* Entry: 1013b449c; end: 1013b44eb;  */

undefined8 FUN_1013b449c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d79af0;
  func_0x0001000285a8(0x112d79af0,&UNK_10d9392d8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1013b44ec; end: 1013b4517;  */

void FUN_1013b44ec(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_00;
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    FUN_1013b4518(param_1,lVar11,0x112d5d568,&UNK_10d9392e0);
    lVar9 = lVar11;
    func_0x000107c614c4(lVar11,lVar3);
    if ((int)lVar9 == 1) {
      func_0x000107c61574(lVar4);
      func_0x0001013b4560(lVar11,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      (**(code **)(lVar13 + 0x20))(lVar8,lVar11,lVar2);
      (**(code **)(lVar13 + 0x10))
                (auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar8,lVar2);
      func_0x000103f2feb8(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000103f2f838();
      func_0x000107c61428(lVar4 + 0x50,auStack_90,0,0);
      lVar3 = lVar4 + 0x50;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar9 = *(long *)(lVar4 + 0x58);
        lVar11 = lVar3;
        func_0x000107c614f0();
        (**(code **)(lVar9 + 8))(uVar5,lVar11,lVar9);
        func_0x000107c615e8(lVar3);
      }
      func_0x000107c61428(lVar4 + 0x60,auStack_a8,0x21,0);
      func_0x000107c61174();
      FUN_1013b2358();
      uVar10 = *(ulong *)(lVar4 + 0x60);
      uVar7 = uVar10 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar7 + 0x10);
      uVar6 = uVar10;
      if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
        FUN_1013b240c(uVar6,uVar1 + 1,1,uVar10);
        uVar7 = uVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
      *(undefined8 *)(uVar7 + uVar1 * 8 + 0x20) = uVar5;
      *(ulong *)(lVar4 + 0x60) = uVar6;
      func_0x000107c614a8(auStack_a8);
      if (*(char *)(*(long *)(lVar4 + 0x20) + 0x28) == '\x01') {
        lVar3 = lVar4 + 0x50;
        func_0x000107c61618();
        if (lVar3 == 0) {
          func_0x000107c61170(uVar5);
          func_0x000107c61574(lVar4);
        }
        else {
          lVar11 = *(long *)(lVar4 + 0x58);
          func_0x000107c614f0();
          pcVar12 = *(code **)(lVar11 + 0x10);
          func_0x000107c61434(uVar6);
          (*pcVar12)();
          func_0x000107c61170(uVar5);
          func_0x000107c61574(lVar4);
          func_0x000107c615e8(lVar3);
          func_0x000107c6142c(uVar6);
        }
        (**(code **)(lVar13 + 8))(lVar8,lVar2);
      }
      else {
        (**(code **)(lVar13 + 8))(lVar8,lVar2);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(uVar5);
      }
    }
  }
  return;
}



/* Entry: 1013b4518; end: 1013b45e3;  */

undefined8 FUN_1013b4518(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1013b45e4; end: 1013b45f7;  */

void FUN_1013b45e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_80,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648();
    pcVar6 = (code *)0x0;
    if (lVar5 != 0) {
      pcVar6 = FUN_1013b4764;
    }
    uVar4 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(pcVar6,lVar5,uVar4);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar1 = *(long *)(unaff_x20 + 0x40);
    func_0x0001000a8868(unaff_x20 + 0x20,uVar4);
    puVar3 = &UNK_1103acd18;
    func_0x000107c613fc(&UNK_1103acd18,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_1);
    pcVar6 = *(code **)(lVar1 + 8);
    func_0x000107c6157c(puVar3);
    (*pcVar6)(lVar2,0x1013b45f0,puVar3,uVar4,lVar1);
    func_0x000107c61578(puVar3,2);
    func_0x000107c61428(lVar5 + 0x10,auStack_80,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61648();
    pcVar6 = (code *)0x0;
    if (lVar5 != 0) {
      pcVar6 = FUN_1013b45f8;
    }
    uVar4 = 0;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x0001000b6d50(pcVar6,lVar5,uVar4);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1013b45f8; end: 1013b460f;  */

void FUN_1013b45f8(void)

{
  FUN_1013b36a0();
  return;
}



/* Entry: 1013b4610; end: 1013b4633;  */

undefined8 FUN_1013b4610(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1013b4634; end: 1013b4723;  */

uint FUN_1013b4634(uint *param_1,int param_2)

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



/* Entry: 1013b4724; end: 1013b4763;  */

void FUN_1013b4724(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939358;
  func_0x000107c61520(&UNK_10d939358,&UNK_1103acdb0);
  puRam0000000112d79b20 = puVar1;
  return;
}



/* Entry: 1013b4764; end: 1013b477b;  */

void FUN_1013b4764(void)

{
  FUN_1013b36a0();
  return;
}



/* Entry: 1013b477c; end: 1013b4827;  */

void FUN_1013b477c(void)

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



/* Entry: 1013b4828; end: 1013b4837;  */

void FUN_1013b4828(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013b4838; end: 1013b4a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b4838(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = 0x112d71bc8;
  func_0x0001000285a8(0x112d71bc8,&UNK_10d932780);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d79b28;
  func_0x000107c61428(unaff_x20 + _DAT_112d79b28,auStack_78,0,0);
  func_0x0001013b5864(unaff_x20 + lVar1,lVar7,0x112d71bc8,&UNK_10d932780);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar5 == 1) {
    func_0x0001013b5824(lVar7,0x112d71bc8,&UNK_10d932780);
    puVar3 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168(PTR__OBJC_CLASS___NSFileManager_1126aff20);
    func_0x000107c415e0();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5c7fc();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c5edb4(param_1,puVar4);
    func_0x000107c61170(puVar4);
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    func_0x0001013b5864(param_1,puVar6,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,lVar2);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    func_0x00010130f508(puVar6,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_90);
  }
  else {
    func_0x0001001021cc(lVar7,lVar7 - extraout_x8_00);
    func_0x0001001021cc(lVar7 - extraout_x8_00,param_1);
  }
  return;
}



/* Entry: 1013b4a68; end: 1013b4b9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013b4a68(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112d79b30;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112d79b30);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010ef3b470);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar3);
  return puVar4;
}



/* Entry: 1013b4b9c; end: 1013b5327;  */

void FUN_1013b4b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 *puVar16;
  code *pcVar17;
  undefined8 *puVar18;
  long lVar19;
  long alStack_c0 [3];
  code *pcStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  
  lVar3 = 0x112d5d568;
  pcStack_a8 = (code *)param_3;
  uStack_98 = param_1;
  uStack_90 = param_2;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  pcStack_88 = (code *)lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = (undefined8 *)((long)alStack_c0 - extraout_x8);
  lVar3 = 0x112d36580;
  puVar7 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined1 *)((long)puVar18 - extraout_x8_00);
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = (long)puVar16 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_c0[1] = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (lVar19 - extraout_x12) - extraout_x12_00;
  lVar5 = 0;
  lStack_a0 = lVar9;
  func_0x000107c5eec8();
  lVar12 = *(long *)(lVar5 + -8);
  lVar3 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5eec4(lVar9);
  func_0x000107c5eeac();
  alStack_c0[2] = lVar3;
  (**(code **)(lVar12 + 8))(lVar9,lVar5);
  lVar3 = -0x7ffffffef10c4bc0;
  if (param_4 != 0) {
    lVar3 = param_4;
  }
  func_0x000107c61434(param_4);
  FUN_1013b4838(puVar16);
  puVar6 = puVar16;
  (**(code **)(lVar14 + 0x30))(puVar16,1,lVar4);
  if ((int)puVar6 == 0) {
    pcVar17 = (code *)0xd000000000000020;
    if (param_4 != 0) {
      pcVar17 = pcStack_a8;
    }
    pcStack_a8 = *(code **)(lVar14 + 0x10);
    (*pcStack_a8)(lVar19,puVar16,lVar4);
    FUN_1013b5824(puVar16,0x112d36580,&UNK_10d9016d0);
    lVar5 = alStack_c0[1];
    func_0x000107c5ed9c(alStack_c0[1],pcVar17,lVar3);
    func_0x000107c6142c(lVar3);
    pcStack_88 = *(code **)(lVar14 + 8);
    (*pcStack_88)(lVar19,lVar4);
    lVar3 = lStack_a0;
    pcVar17 = *(code **)(lVar14 + 0x20);
    lVar9 = lStack_a0;
    (*pcVar17)(lStack_a0,lVar5,lVar4);
    FUN_1013b4a68();
    lVar5 = lVar9;
    func_0x000107c614f0();
    (*pcStack_a8)(lVar19,lVar3,lVar4);
    uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
    uVar13 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    uVar15 = lVar11 + uVar13 + 7 & 0xfffffffffffffff8;
    puVar8 = &UNK_1103aceb8;
    func_0x000107c613fc(&UNK_1103aceb8,uVar15 + 0x30,uVar10 | 7);
    (*pcVar17)(puVar8 + uVar13,lVar19,lVar4);
    uVar2 = uStack_90;
    uVar1 = uStack_98;
    *(code **)(puVar8 + uVar15) = param_5;
    *(undefined8 *)((long)(puVar8 + uVar15) + 8) = param_6;
    *(long *)(puVar8 + uVar15 + 0x10) = alStack_c0[2];
    *(undefined **)((long)(puVar8 + uVar15 + 0x10) + 8) = puVar7;
    *(undefined8 *)(puVar8 + uVar15 + 0x20) = uStack_98;
    *(undefined8 *)((long)(puVar8 + uVar15 + 0x20) + 8) = uStack_90;
    func_0x000107c6157c();
    func_0x00010006c00c(uVar1,uVar2);
    func_0x00010090569c(0x1013b57c0,puVar8,lVar5);
    func_0x000107c615e8(lVar9);
    func_0x000107c61574(puVar8);
    (*pcStack_88)(lVar3,lVar4);
  }
  else {
    func_0x000107c6142c(lVar3);
    func_0x000107c6142c(puVar7);
    FUN_1013b5824(puVar16,0x112d36580,&UNK_10d9016d0);
    FUN_1013b5780();
    puVar7 = &UNK_1103acf50;
    func_0x000107c613f8(&UNK_1103acf50,puVar16,0,0);
    *puVar16 = 2;
    *puVar18 = puVar7;
    func_0x000107c6159c(puVar18,pcStack_88,1);
    (*param_5)(puVar18);
    FUN_1013b5824(puVar18,0x112d5d568,&UNK_10d9392e0);
  }
  return;
}



/* Entry: 1013b5328; end: 1013b549f;  */

void FUN_1013b5328(long param_1,undefined1 *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)&uStack_70 - extraout_x8);
  puVar4 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c60bb4(0x3ff0000000000000);
    func_0x000107c61180();
    if (param_2 == (undefined1 *)0x0) {
      FUN_1013b5780();
      puVar3 = &UNK_1103acf50;
      func_0x000107c613f8(&UNK_1103acf50,param_2,0,0);
      *param_2 = 0;
      *puVar5 = puVar3;
      func_0x000107c6159c(puVar5,lVar1,1);
      (*param_3)(puVar5);
      func_0x000107c61170(param_1);
      FUN_1013b5824(puVar5,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      puVar2 = param_2;
      func_0x000107c5ee30();
      func_0x000107c61170(param_2);
      FUN_1013b4b9c(puVar2,puVar4,param_5,param_6,param_3,param_4);
      func_0x00010006c090(puVar2,puVar4);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1013b54a0; end: 1013b552b; -[_TtC20SelfieOnboardingImpl29SelfieCaptureFileManagerSaver init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b54a0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112d79b28;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1 + lVar1,1,1,lVar3);
  *(undefined8 *)(param_1 + _DAT_112d79b30) = 0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013b552c; end: 1013b555f;  */

void FUN_1013b552c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013b5560; end: 1013b55a7; -[_TtC20SelfieOnboardingImpl29SelfieCaptureFileManagerSaver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b5560(long param_1)

{
  FUN_1013b5824(param_1 + _DAT_112d79b28,0x112d71bc8,&UNK_10d932780);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d79b30));
  return;
}



/* Entry: 1013b55a8; end: 1013b55af;  */

void FUN_1013b55a8(void)

{
  if (lRam0000000112d79b60 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e63297c);
  return;
}



/* Entry: 1013b55b0; end: 1013b55e7;  */

void FUN_1013b55b0(undefined8 param_1)

{
  if (lRam0000000112d79b60 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63297c);
  return;
}



/* Entry: 1013b55e8; end: 1013b567b;  */

void FUN_1013b55e8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x00010006a248();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10d9393e8;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 1013b567c; end: 1013b576f;  */

/* WARNING: Possible PIC construction at 0x0001013b5744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b5748) */

void FUN_1013b567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = param_1;
  FUN_1013b4a68();
  func_0x000107c614f0();
  puVar2 = &UNK_1103ace68;
  func_0x000107c613fc(&UNK_1103ace68,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar4);
  puVar3 = &UNK_1103ace90;
  func_0x000107c613fc(&UNK_1103ace90,0x40,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  func_0x000107c61434(param_3);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_5);
  func_0x00010090569c(FUN_1013b5770,puVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1013b5770; end: 1013b577f;  */

void FUN_1013b5770(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar11;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar7 = *(undefined1 **)(unaff_x20 + 0x18);
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar5 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)&uStack_70 - extraout_x8);
  puVar10 = auStack_68;
  func_0x000107c61428(lVar6 + 0x10,puVar10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar6 != 0) {
    func_0x000107c60bb4(0x3ff0000000000000);
    func_0x000107c61180();
    if (puVar7 == (undefined1 *)0x0) {
      FUN_1013b5780();
      puVar9 = &UNK_1103acf50;
      func_0x000107c613f8(&UNK_1103acf50,puVar7,0,0);
      *puVar7 = 0;
      *puVar11 = puVar9;
      func_0x000107c6159c(puVar11,lVar5,1);
      (*pcVar1)(puVar11);
      func_0x000107c61170(lVar6);
      FUN_1013b5824(puVar11,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      puVar8 = puVar7;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar7);
      FUN_1013b4b9c(puVar8,puVar10,uVar2,uVar4,pcVar1,uVar3);
      func_0x00010006c090(puVar8,puVar10);
      func_0x000107c61170(lVar6);
    }
  }
  return;
}



/* Entry: 1013b5780; end: 1013b5823;  */

void FUN_1013b5780(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939480;
  func_0x000107c61520(&UNK_10d939480,&UNK_1103acf50);
  puRam0000000112d79b70 = puVar1;
  return;
}



/* Entry: 1013b5824; end: 1013b58ab;  */

undefined8 FUN_1013b5824(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1013b58ac; end: 1013b5a13;  */

int FUN_1013b58ac(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013b5928;
        goto LAB_1013b590c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013b590c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1013b5928:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013b5a14; end: 1013b5a53;  */

void FUN_1013b5a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939458;
  func_0x000107c61520(&UNK_10d939458,&UNK_1103acf50);
  puRam0000000112d79b78 = puVar1;
  return;
}



/* Entry: 1013b5a54; end: 1013b5a63;  */

void FUN_1013b5a54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013b5a64; end: 1013b5a83;  */

void FUN_1013b5a64(void)

{
  func_0x000107c61168(&PTR_PTR_112d79bc0);
  return;
}



/* Entry: 1013b5a84; end: 1013b5a87;  */

void FUN_1013b5a84(undefined8 param_1,undefined8 param_2,code *param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c551b8(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3b4a0);
  func_0x000107c58c44(puVar3);
  func_0x000107c61170(uVar4);
  lVar2 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar5 = 0;
  func_0x000107c5ebbc();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar10 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar2,uVar10 + *(long *)(*(long *)(lVar5 + -8) + 0x48),uVar8 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c5ebb0(lVar2 + uVar10,0x64497465737361,0xe700000000000000,param_1,param_2);
  lVar6 = lVar2;
  func_0x000107c5fc48(lVar2,lVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c57a88(puVar3);
  func_0x000107c61170(lVar6);
  puVar7 = puVar3;
  func_0x000107c3abfc();
  func_0x000107c61180();
  bVar1 = puVar7 == (undefined *)0x0;
  if (bVar1) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar9);
    func_0x000107c61170(puVar7);
    puVar7 = (undefined *)0x0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(puVar9,bVar1,1);
  (*param_3)(puVar9);
  func_0x000107c61170(puVar3);
  func_0x0001000293e4(puVar9);
  return;
}



/* Entry: 1013b5a88; end: 1013b5eab;  */

void FUN_1013b5a88(undefined8 param_1,undefined8 param_2,code *param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar3 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c551b8(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3b4a0);
  func_0x000107c58c44(puVar3);
  func_0x000107c61170(uVar4);
  lVar2 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar5 = 0;
  func_0x000107c5ebbc();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar10 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  func_0x000107c613fc(lVar2,uVar10 + *(long *)(*(long *)(lVar5 + -8) + 0x48),uVar8 | 7);
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  func_0x000107c5ebb0(lVar2 + uVar10,0x64497465737361,0xe700000000000000,param_1,param_2);
  lVar6 = lVar2;
  func_0x000107c5fc48(lVar2,lVar5);
  func_0x000107c61574(lVar2);
  func_0x000107c57a88(puVar3);
  func_0x000107c61170(lVar6);
  puVar7 = puVar3;
  func_0x000107c3abfc();
  func_0x000107c61180();
  bVar1 = puVar7 == (undefined *)0x0;
  if (bVar1) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(puVar9);
    func_0x000107c61170(puVar7);
    puVar7 = (undefined *)0x0;
    func_0x000107c5ede0();
  }
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(puVar9,bVar1,1);
  (*param_3)(puVar9);
  func_0x000107c61170(puVar3);
  func_0x0001000293e4(puVar9);
  return;
}



/* Entry: 1013b5eac; end: 1013b5f3b;  */

void FUN_1013b5eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1013b5f3c; end: 1013b5f4b;  */

void FUN_1013b5f3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013b5f4c; end: 1013b5f6b;  */

void FUN_1013b5f4c(void)

{
  func_0x000107c61168(&PTR_PTR_112d79c58);
  return;
}



/* Entry: 1013b5f6c; end: 1013b5f6f;  */

void FUN_1013b5f6c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&puStack_80 - extraout_x8;
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  lVar2 = lVar5;
  func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar5);
  func_0x000107c42fcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar3 = puVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar3 == (undefined *)0x0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar6,1,1,lVar5);
    (*param_3)(lVar6);
    func_0x0001000293e4(lVar6);
  }
  else {
    puVar1 = &UNK_1103ad000;
    func_0x000107c613fc(&UNK_1103ad000,0x20,7);
    *(code **)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    pcStack_60 = FUN_1013b6168;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1013b5eac;
    puStack_68 = &UNK_1103ad018;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar1;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c50354(puVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1013b5f70; end: 1013b6167;  */

void FUN_1013b5f70(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&puStack_80 - extraout_x8;
  puVar1 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  lVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = param_1;
  *(undefined8 *)(lVar5 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  lVar2 = lVar5;
  func_0x000107c5fc48(lVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(lVar5);
  func_0x000107c42fcc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar3 = puVar1;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  if (puVar3 == (undefined *)0x0) {
    lVar5 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(lVar6,1,1,lVar5);
    (*param_3)(lVar6);
    func_0x0001000293e4(lVar6);
  }
  else {
    puVar1 = &UNK_1103ad000;
    func_0x000107c613fc(&UNK_1103ad000,0x20,7);
    *(code **)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    pcStack_60 = FUN_1013b6168;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1013b5eac;
    puStack_68 = &UNK_1103ad018;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar1;
    func_0x000107c60bc4(ppuVar4);
    puVar1 = puStack_58;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar1);
    func_0x000107c50354(puVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1013b6168; end: 1013b618b;  */

void FUN_1013b6168(long param_1)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar6 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar5 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_1 == 0) {
    pcVar7 = *(code **)(lVar8 + 0x38);
    (*pcVar7)(lVar4,1,1,lVar2);
  }
  else {
    func_0x000107c43bb8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5edb4(lVar6);
      func_0x000107c61170(param_1);
    }
    pcVar7 = *(code **)(lVar8 + 0x38);
    (*pcVar7)(lVar6,param_1 == 0,1,lVar2);
    func_0x0001001021cc(lVar6,lVar4);
    lVar6 = lVar4;
    (**(code **)(lVar8 + 0x30))(lVar4,1,lVar2);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar8 + 0x20))(lVar5,lVar4,lVar2);
      (**(code **)(lVar8 + 0x10))(puVar3,lVar5,lVar2);
      (*pcVar7)(puVar3,0,1,lVar2);
      (*pcVar1)(puVar3);
      func_0x0001000293e4(puVar3);
      (**(code **)(lVar8 + 8))(lVar5,lVar2);
      return;
    }
  }
  func_0x0001000293e4(lVar4);
  (*pcVar7)(puVar3,1,1,lVar2);
  (*pcVar1)(puVar3);
  func_0x0001000293e4(puVar3);
  return;
}



/* Entry: 1013b618c; end: 1013b620f;  */

void FUN_1013b618c(void)

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



/* Entry: 1013b6210; end: 1013b621f;  */

void FUN_1013b6210(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1013b6220; end: 1013b6353;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013b6220(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar1 = _DAT_112d79cc0;
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112d79cc0);
  puVar4 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (**(code **)(lVar6 + 0x68))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar2);
    puVar4 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar5 = 0xd00000000000002e;
    func_0x000107c5fadc(0xd00000000000002e,0x800000010ef3b4c0);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar5);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar5);
    puVar3 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar3);
  return puVar4;
}



/* Entry: 1013b6354; end: 1013b6cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b6354(long param_1,code *param_2,undefined8 param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  code cVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long extraout_x8;
  undefined8 *puVar16;
  code *apcStack_f0 [4];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)((long)apcStack_f0 - extraout_x8);
  func_0x000107c61428(param_1 + 0x10,auStack_88,0,0);
  pcVar4 = (code *)(param_1 + 0x10);
  func_0x000107c61618();
  if (pcVar4 == (code *)0x0) {
    return;
  }
  puVar5 = &UNK_1103ad100;
  func_0x000107c613fc(&UNK_1103ad100,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,pcVar4);
  puVar6 = &UNK_1103ad150;
  func_0x000107c613fc(&UNK_1103ad150,0x40,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(code **)(puVar6 + 0x18) = param_2;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  *(code **)(puVar6 + 0x28) = param_4;
  *(long *)(puVar6 + 0x30) = param_5;
  *(undefined8 *)(puVar6 + 0x38) = param_6;
  cVar1 = pcVar4[_DAT_112d79cb8];
  pcVar7 = (code *)PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  apcStack_f0[2] = param_4;
  apcStack_f0[3] = param_2;
  func_0x000107c61168();
  if (cVar1 == (code)0x1) {
    func_0x000107c61434(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(puVar5);
    func_0x000107c61174();
    pcVar8 = pcVar7;
    func_0x000107c3e488();
    func_0x000107c61428(puVar5 + 0x10,auStack_a0,0,0);
    pcVar9 = (code *)(puVar5 + 0x10);
    func_0x000107c61618();
    apcStack_f0[1] = pcVar9;
    if (pcVar9 == (code *)0x0) {
      func_0x000107c61574(puVar5);
LAB_1013b6708:
      func_0x000107c61574(puVar6);
    }
    else {
      if (pcVar8 != (code *)0x3) {
        FUN_1013b7db0();
        puVar12 = &UNK_1103ad4e0;
        func_0x000107c613f8(&UNK_1103ad4e0,pcVar9,0,0);
        *pcVar9 = (code)0x1;
        *puVar16 = puVar12;
        func_0x000107c6159c(puVar16,lVar3,1);
        (*apcStack_f0[3])(puVar16);
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(pcVar4);
        FUN_1013b7fb0(puVar16,0x112d5d568,&UNK_10d9392e0);
        goto LAB_1013b66d4;
      }
      if (param_5 == 0) {
        FUN_1013b6e0c(param_6,0,apcStack_f0[3],param_3);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(pcVar9);
        goto LAB_1013b6708;
      }
      pcVar9 = (code *)&UNK_1103ad100;
      func_0x000107c613fc(&UNK_1103ad100,0x18,7);
      func_0x000107c61614(pcVar9 + 0x10,apcStack_f0[1]);
      puVar12 = &UNK_1103ad178;
      func_0x000107c613fc(&UNK_1103ad178,0x30,7);
      *(code **)(puVar12 + 0x10) = pcVar9;
      *(code **)(puVar12 + 0x18) = apcStack_f0[3];
      *(undefined8 *)(puVar12 + 0x20) = param_3;
      *(undefined8 *)(puVar12 + 0x28) = param_6;
      func_0x000107c61174(param_6);
      func_0x000107c6157c(param_3);
      func_0x000107c6157c(pcVar9);
      pcVar8 = apcStack_f0[2];
      FUN_1013b7dfc(apcStack_f0[2],param_5);
      if (pcVar8 == (code *)0x0) {
        func_0x000107c5aa1c();
        func_0x000107c61180();
        puVar13 = &UNK_1103ad1a0;
        apcStack_f0[0] = pcVar7;
        func_0x000107c613fc(&UNK_1103ad1a0,0x20,7);
        pcVar7 = apcStack_f0[2];
        pcVar8 = apcStack_f0[1];
        *(code **)(puVar13 + 0x10) = apcStack_f0[2];
        *(long *)(puVar13 + 0x18) = param_5;
        puVar2 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b0 = FUN_1013b7f24;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)&UNK_1000f6b44;
        puStack_b8 = &UNK_1103ad1b8;
        ppuVar11 = &puStack_d0;
        puStack_a8 = puVar13;
        func_0x000107c60bc4(ppuVar11);
        puVar13 = puStack_a8;
        apcStack_f0[3] = pcVar9;
        func_0x000107c61434(param_5);
        func_0x000107c61574(puVar13);
        puVar13 = &UNK_1103ad100;
        func_0x000107c613fc(&UNK_1103ad100,0x18,7);
        func_0x000107c61614(puVar13 + 0x10,pcVar8);
        puVar14 = &UNK_1103ad1f0;
        func_0x000107c613fc(&UNK_1103ad1f0,0x38,7);
        *(undefined **)(puVar14 + 0x10) = puVar13;
        *(code **)(puVar14 + 0x18) = FUN_1013b7df0;
        *(undefined **)(puVar14 + 0x20) = puVar12;
        *(code **)(puVar14 + 0x28) = pcVar7;
        *(long *)(puVar14 + 0x30) = param_5;
        pcStack_b0 = (code *)0x1013b7f48;
        puStack_d0 = puVar2;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)0x1013b7310;
        puStack_b8 = &UNK_1103ad208;
        ppuVar15 = &puStack_d0;
        puStack_a8 = puVar14;
        func_0x000107c60bc4(ppuVar15);
        puVar13 = puStack_a8;
        func_0x000107c61434(param_5);
        func_0x000107c6157c(puVar12);
        func_0x000107c61574(puVar13);
        pcVar7 = apcStack_f0[0];
        func_0x000107c4e558(apcStack_f0[0]);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(pcVar4);
        func_0x000107c61574(puVar12);
        func_0x000107c61170(pcVar8);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c60bd0(ppuVar11);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(apcStack_f0[3]);
        pcVar4 = pcVar7;
      }
      else {
        func_0x000107c61428(pcVar9 + 0x10,&puStack_d0,0,0);
        pcVar7 = pcVar9 + 0x10;
        func_0x000107c61618();
        if (pcVar7 == (code *)0x0) {
          func_0x000107c61574(puVar6);
          func_0x000107c61170(pcVar4);
          func_0x000107c61574(puVar12);
        }
        else {
          pcVar10 = pcVar8;
          func_0x000107c61174(pcVar8);
          FUN_1013b6e0c(param_6,pcVar8,apcStack_f0[3],param_3);
          func_0x000107c61170(pcVar10);
          func_0x000107c61574(puVar6);
          func_0x000107c61170(pcVar4);
          func_0x000107c61574(puVar12);
          func_0x000107c61170(apcStack_f0[1]);
          apcStack_f0[1] = pcVar7;
        }
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(pcVar9);
        pcVar4 = pcVar8;
      }
    }
    func_0x000107c61170(pcVar4);
  }
  else {
    pcStack_b0 = (code *)0x1013b7da0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    pcStack_c0 = FUN_1013b791c;
    puStack_b8 = &UNK_1103ad230;
    ppuVar11 = &puStack_d0;
    puStack_a8 = puVar6;
    func_0x000107c60bc4(ppuVar11);
    puVar12 = puStack_a8;
    func_0x000107c61434(param_5);
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(puVar6);
    func_0x000107c61174(param_6);
    func_0x000107c61574(puVar12);
    func_0x000107c50324(pcVar7);
    func_0x000107c61574(puVar6);
    func_0x000107c61170(pcVar4);
    func_0x000107c60bd0(ppuVar11);
LAB_1013b66d4:
    func_0x000107c61574(puVar5);
  }
  return;
}



/* Entry: 1013b6cc0; end: 1013b6e0b;  */

void FUN_1013b6cc0(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined8 *puVar5;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = (undefined8 *)((long)&uStack_70 - extraout_x8);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  puVar2 = (undefined1 *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (undefined1 *)0x0) {
    if (param_1 == 0) {
      puVar3 = puVar2;
      FUN_1013b7db0();
      puVar4 = &UNK_1103ad4e0;
      func_0x000107c613f8(&UNK_1103ad4e0,puVar3,0,0);
      *puVar3 = 2;
      *puVar5 = puVar4;
      func_0x000107c6159c(puVar5,lVar1,1);
      (*param_3)(puVar5);
      func_0x000107c61170(puVar2);
      FUN_1013b7fb0(puVar5,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      lVar1 = param_1;
      func_0x000107c61174(param_1);
      FUN_1013b6e0c(param_5,param_1,param_3,param_4);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1013b6e0c; end: 1013b6fe3;  */

void FUN_1013b6e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar2 = &UNK_1103ad268;
  func_0x000107c613fc(&UNK_1103ad268,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x000107c61168(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  func_0x000107c5aa1c();
  func_0x000107c61180();
  puVar4 = &UNK_1103ad290;
  func_0x000107c613fc(&UNK_1103ad290,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1013b7f90;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103ad2a8;
  puStack_78 = puVar4;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1103ad100;
  func_0x000107c613fc(&UNK_1103ad100,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar6 = &UNK_1103ad2e0;
  func_0x000107c613fc(&UNK_1103ad2e0,0x30,7);
  *(undefined **)(puVar6 + 0x10) = puVar4;
  *(undefined **)(puVar6 + 0x18) = puVar2;
  *(undefined8 *)(puVar6 + 0x20) = param_3;
  *(undefined8 *)(puVar6 + 0x28) = param_4;
  pcStack_80 = (code *)0x1013b7f9c;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x1013b7310;
  puStack_88 = &UNK_1103ad2f8;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar4);
  func_0x000107c4e558(puVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1013b6fe4; end: 1013b71ff;  */

void FUN_1013b6fe4(long param_1,undefined1 *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *puVar6;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)((long)&uStack_80 - extraout_x8);
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c5ee20(param_2,param_3);
    func_0x000107c4635c();
    func_0x000107c61170();
    if (puVar2 == (undefined *)0x0) {
      FUN_1013b7db0();
      puVar2 = &UNK_1103ad4e0;
      func_0x000107c613f8(&UNK_1103ad4e0,param_2,0,0);
      *param_2 = 0;
      *puVar6 = puVar2;
      func_0x000107c6159c(puVar6,lVar1,1);
      (*param_4)(puVar6);
      func_0x000107c61170(param_1);
      FUN_1013b7fb0(puVar6,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      FUN_1013b6220();
      puVar3 = param_2;
      func_0x000107c614f0();
      puVar4 = &UNK_1103ad100;
      func_0x000107c613fc(&UNK_1103ad100,0x18,7);
      func_0x000107c61614(puVar4 + 0x10,param_1);
      puVar5 = &UNK_1103ad448;
      func_0x000107c613fc(&UNK_1103ad448,0x40,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = param_4;
      *(undefined8 *)(puVar5 + 0x20) = param_5;
      *(undefined8 *)(puVar5 + 0x28) = param_6;
      *(undefined8 *)(puVar5 + 0x30) = param_7;
      *(undefined **)(puVar5 + 0x38) = puVar2;
      func_0x000107c61434(param_7);
      func_0x000107c61174(puVar2);
      func_0x000107c6157c(puVar4);
      func_0x000107c6157c(param_5);
      func_0x00010090569c(0x1013b82cc,puVar5,puVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61170(puVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c615e8(param_2);
      func_0x000107c61574(puVar5);
    }
  }
  return;
}



/* Entry: 1013b7200; end: 1013b726b;  */

/* WARNING: Possible PIC construction at 0x0001013b7254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b7258) */

void FUN_1013b7200(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c40c5c(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013b726c; end: 1013b7373;  */

void FUN_1013b726c(ulong param_1,undefined8 param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if ((param_1 & 1) != 0) {
      FUN_1013b7dfc(param_6,param_7);
      (*param_4)();
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_6);
      return;
    }
    func_0x000107c61170();
  }
  (*param_4)(0);
  return;
}



/* Entry: 1013b7374; end: 1013b753b;  */

void FUN_1013b7374(undefined8 param_1,long param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  lVar7 = param_2;
  func_0x000107c61168();
  func_0x000107c40c60();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e814();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c4b800();
    func_0x000107c61180();
    puVar6 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(param_2 + 0x10,auStack_68,1,0);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined **)(param_2 + 0x10) = puVar6;
  *(long *)(param_2 + 0x18) = lVar7;
  func_0x000107c6142c(uVar4);
  if (param_3 != (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8;
    func_0x000107c61168();
    func_0x000107c61174(param_3);
    func_0x000107c3f7a0();
    func_0x000107c61180();
    if (puVar6 != (undefined *)0x0) {
      lVar7 = 0x112d79d00;
      func_0x0001000285a8(0x112d79d00,&UNK_10d939600);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x20) = puVar2;
      func_0x000107c61174(puVar6);
      func_0x000107c61174(puVar2);
      uVar4 = 0x112d79d08;
      func_0x0001000285a8(0x112d79d08,&UNK_10d939608);
      lVar5 = lVar7;
      func_0x000107c5fc48(lVar7,uVar4);
      func_0x000107c61574(lVar7);
      func_0x000107c3d5b8(puVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar6);
      puVar1 = puVar6;
    }
    func_0x000107c61170(puVar1);
    puVar1 = param_3;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1013b753c; end: 1013b791b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b753c(ulong param_1,long param_2,long param_3,long param_4,code *param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long extraout_x8;
  code *pcVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  puVar3 = (undefined1 *)0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar8 = (long *)((long)alStack_90 - extraout_x8);
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    puVar4 = (undefined1 *)(param_3 + 0x10);
    func_0x000107c61618();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x000107c61428(param_4 + 0x10,alStack_90,0,0);
      lVar9 = *(long *)(param_4 + 0x18);
      if (lVar9 != 0) {
        uVar7 = *(undefined8 *)(param_4 + 0x10);
        puVar3 = puVar4 + _DAT_112d79cb0;
        uVar1 = *(undefined8 *)(puVar3 + 0x18);
        lVar2 = *(long *)(puVar3 + 0x20);
        func_0x0001000a8868(puVar3,uVar1);
        puVar5 = &UNK_1103ad330;
        func_0x000107c613fc(&UNK_1103ad330,0x20,7);
        *(code **)(puVar5 + 0x10) = param_5;
        *(undefined8 *)(puVar5 + 0x18) = param_6;
        pcVar6 = *(code **)(lVar2 + 8);
        func_0x000107c61434(lVar9);
        func_0x000107c6157c(param_6);
        (*pcVar6)(uVar7,lVar9,0x1013b7fa8,puVar5,uVar1,lVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c6142c(lVar9);
        func_0x000107c61574(puVar5);
        return;
      }
      func_0x000107c61170();
    }
  }
  if (param_2 == 0) {
    FUN_1013b7db0();
    puVar5 = &UNK_1103ad4e0;
    func_0x000107c613f8(&UNK_1103ad4e0,puVar4,0,0);
    *plVar8 = (long)puVar5;
    *puVar4 = 3;
  }
  else {
    *plVar8 = param_2;
  }
  func_0x000107c6159c(plVar8,puVar3,1);
  func_0x000107c614b0(param_2);
  (*param_5)(plVar8);
  FUN_1013b7fb0(plVar8,0x112d5d568,&UNK_10d9392e0);
  return;
}



/* Entry: 1013b791c; end: 1013b7957;  */

void FUN_1013b791c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1013b7958; end: 1013b79b7; -[_TtC20SelfieOnboardingImpl29SelfieCapturePhotosAlbumSaver init] */

void FUN_1013b7958(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieCapturePhotosAlbumSaver",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b7984);
  (*pcVar1)();
}



/* Entry: 1013b79b8; end: 1013b79ef; -[_TtC20SelfieOnboardingImpl29SelfieCapturePhotosAlbumSaver .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b79b8(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d79cb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d79cc0));
  return;
}



/* Entry: 1013b79f0; end: 1013b7a0f;  */

void FUN_1013b79f0(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce178);
  return;
}



/* Entry: 1013b7a10; end: 1013b7b67;  */

int FUN_1013b7a10(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013b7a8c;
        goto LAB_1013b7a70;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013b7a70:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013b7a8c:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013b7b68; end: 1013b7ba7;  */

void FUN_1013b7b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9395bc;
  func_0x000107c61520(&UNK_10d9395bc,&UNK_1103ad0c8);
  puRam0000000112d79cf0 = puVar1;
  return;
}



/* Entry: 1013b7ba8; end: 1013b7d9b;  */

/* WARNING: Possible PIC construction at 0x0001013b7c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b7c80) */

void FUN_1013b7ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  uVar1 = param_1;
  FUN_1013b6220();
  func_0x000107c614f0();
  puVar2 = &UNK_1103ad100;
  func_0x000107c613fc(&UNK_1103ad100,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar4);
  puVar3 = &UNK_1103ad420;
  func_0x000107c613fc(&UNK_1103ad420,0x48,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  *(undefined8 *)(puVar3 + 0x40) = param_4;
  func_0x000107c6157c(puVar2);
  func_0x00010006c00c(param_1,param_2);
  func_0x000107c61434(param_4);
  func_0x000107c6157c(param_6);
  func_0x00010090569c(0x1013b8068,puVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 1013b7d9c; end: 1013b7daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b7d9c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code cVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar20;
  code *apcStack_f0 [4];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar13 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar12 = *(code **)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)((long)apcStack_f0 - extraout_x8);
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0);
  pcVar7 = (code *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (pcVar7 == (code *)0x0) {
    return;
  }
  puVar8 = &UNK_1103ad100;
  func_0x000107c613fc(&UNK_1103ad100,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,pcVar7);
  puVar9 = &UNK_1103ad150;
  func_0x000107c613fc(&UNK_1103ad150,0x40,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(code **)(puVar9 + 0x18) = pcVar13;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(code **)(puVar9 + 0x28) = pcVar12;
  *(long *)(puVar9 + 0x30) = lVar3;
  *(undefined8 *)(puVar9 + 0x38) = uVar11;
  cVar4 = pcVar7[_DAT_112d79cb8];
  pcVar10 = (code *)PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  apcStack_f0[2] = pcVar12;
  apcStack_f0[3] = pcVar13;
  func_0x000107c61168();
  if (cVar4 == (code)0x1) {
    func_0x000107c61434(lVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(puVar8);
    func_0x000107c61174();
    pcVar12 = pcVar10;
    func_0x000107c3e488();
    func_0x000107c61428(puVar8 + 0x10,auStack_a0,0,0);
    pcVar13 = (code *)(puVar8 + 0x10);
    func_0x000107c61618();
    apcStack_f0[1] = pcVar13;
    if (pcVar13 == (code *)0x0) {
      func_0x000107c61574(puVar8);
LAB_1013b6708:
      func_0x000107c61574(puVar9);
    }
    else {
      if (pcVar12 != (code *)0x3) {
        FUN_1013b7db0();
        puVar16 = &UNK_1103ad4e0;
        func_0x000107c613f8(&UNK_1103ad4e0,pcVar13,0,0);
        *pcVar13 = (code)0x1;
        *puVar20 = puVar16;
        func_0x000107c6159c(puVar20,lVar6,1);
        (*apcStack_f0[3])(puVar20);
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(pcVar7);
        FUN_1013b7fb0(puVar20,0x112d5d568,&UNK_10d9392e0);
        goto LAB_1013b66d4;
      }
      if (lVar3 == 0) {
        FUN_1013b6e0c(uVar11,0,apcStack_f0[3],uVar2);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(pcVar13);
        goto LAB_1013b6708;
      }
      pcVar13 = (code *)&UNK_1103ad100;
      func_0x000107c613fc(&UNK_1103ad100,0x18,7);
      func_0x000107c61614(pcVar13 + 0x10,apcStack_f0[1]);
      puVar16 = &UNK_1103ad178;
      func_0x000107c613fc(&UNK_1103ad178,0x30,7);
      *(code **)(puVar16 + 0x10) = pcVar13;
      *(code **)(puVar16 + 0x18) = apcStack_f0[3];
      *(undefined8 *)(puVar16 + 0x20) = uVar2;
      *(undefined8 *)(puVar16 + 0x28) = uVar11;
      func_0x000107c61174(uVar11);
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(pcVar13);
      pcVar12 = apcStack_f0[2];
      FUN_1013b7dfc(apcStack_f0[2],lVar3);
      if (pcVar12 == (code *)0x0) {
        func_0x000107c5aa1c();
        func_0x000107c61180();
        puVar17 = &UNK_1103ad1a0;
        apcStack_f0[0] = pcVar10;
        func_0x000107c613fc(&UNK_1103ad1a0,0x20,7);
        pcVar10 = apcStack_f0[2];
        pcVar12 = apcStack_f0[1];
        *(code **)(puVar17 + 0x10) = apcStack_f0[2];
        *(long *)(puVar17 + 0x18) = lVar3;
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b0 = FUN_1013b7f24;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)&UNK_1000f6b44;
        puStack_b8 = &UNK_1103ad1b8;
        ppuVar15 = &puStack_d0;
        puStack_a8 = puVar17;
        func_0x000107c60bc4(ppuVar15);
        puVar17 = puStack_a8;
        apcStack_f0[3] = pcVar13;
        func_0x000107c61434(lVar3);
        func_0x000107c61574(puVar17);
        puVar17 = &UNK_1103ad100;
        func_0x000107c613fc(&UNK_1103ad100,0x18,7);
        func_0x000107c61614(puVar17 + 0x10,pcVar12);
        puVar18 = &UNK_1103ad1f0;
        func_0x000107c613fc(&UNK_1103ad1f0,0x38,7);
        *(undefined **)(puVar18 + 0x10) = puVar17;
        *(code **)(puVar18 + 0x18) = FUN_1013b7df0;
        *(undefined **)(puVar18 + 0x20) = puVar16;
        *(code **)(puVar18 + 0x28) = pcVar10;
        *(long *)(puVar18 + 0x30) = lVar3;
        pcStack_b0 = (code *)0x1013b7f48;
        puStack_d0 = puVar5;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)0x1013b7310;
        puStack_b8 = &UNK_1103ad208;
        ppuVar19 = &puStack_d0;
        puStack_a8 = puVar18;
        func_0x000107c60bc4(ppuVar19);
        puVar17 = puStack_a8;
        func_0x000107c61434(lVar3);
        func_0x000107c6157c(puVar16);
        func_0x000107c61574(puVar17);
        pcVar13 = apcStack_f0[0];
        func_0x000107c4e558(apcStack_f0[0]);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(pcVar7);
        func_0x000107c61574(puVar16);
        func_0x000107c61170(pcVar12);
        func_0x000107c60bd0(ppuVar19);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(apcStack_f0[3]);
        pcVar7 = pcVar13;
      }
      else {
        func_0x000107c61428(pcVar13 + 0x10,&puStack_d0,0,0);
        pcVar10 = pcVar13 + 0x10;
        func_0x000107c61618();
        if (pcVar10 == (code *)0x0) {
          func_0x000107c61574(puVar9);
          func_0x000107c61170(pcVar7);
          func_0x000107c61574(puVar16);
        }
        else {
          pcVar14 = pcVar12;
          func_0x000107c61174(pcVar12);
          FUN_1013b6e0c(uVar11,pcVar12,apcStack_f0[3],uVar2);
          func_0x000107c61170(pcVar14);
          func_0x000107c61574(puVar9);
          func_0x000107c61170(pcVar7);
          func_0x000107c61574(puVar16);
          func_0x000107c61170(apcStack_f0[1]);
          apcStack_f0[1] = pcVar10;
        }
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(pcVar13);
        pcVar7 = pcVar12;
      }
    }
    func_0x000107c61170(pcVar7);
  }
  else {
    pcStack_b0 = FUN_1013b7d9c;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    pcStack_c0 = FUN_1013b791c;
    puStack_b8 = &UNK_1103ad230;
    ppuVar15 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar15);
    puVar16 = puStack_a8;
    func_0x000107c61434(lVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar9);
    func_0x000107c61174(uVar11);
    func_0x000107c61574(puVar16);
    func_0x000107c50324(pcVar10);
    func_0x000107c61574(puVar9);
    func_0x000107c61170(pcVar7);
    func_0x000107c60bd0(ppuVar15);
LAB_1013b66d4:
    func_0x000107c61574(puVar8);
  }
  return;
}



/* Entry: 1013b7db0; end: 1013b7def;  */

void FUN_1013b7db0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939680;
  func_0x000107c61520(&UNK_10d939680,&UNK_1103ad4e0);
  puRam0000000112d79cf8 = puVar1;
  return;
}



/* Entry: 1013b7df0; end: 1013b7dfb;  */

void FUN_1013b7df0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&uStack_70 - extraout_x8);
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  puVar6 = (undefined1 *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar6 != (undefined1 *)0x0) {
    if (param_1 == 0) {
      puVar7 = puVar6;
      FUN_1013b7db0();
      puVar8 = &UNK_1103ad4e0;
      func_0x000107c613f8(&UNK_1103ad4e0,puVar7,0,0);
      *puVar7 = 2;
      *puVar9 = puVar8;
      func_0x000107c6159c(puVar9,lVar5,1);
      (*pcVar3)(puVar9);
      func_0x000107c61170(puVar6);
      FUN_1013b7fb0(puVar9,0x112d5d568,&UNK_10d9392e0);
    }
    else {
      lVar5 = param_1;
      func_0x000107c61174(param_1);
      FUN_1013b6e0c(uVar4,param_1,pcVar3,uVar2);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(lVar5);
    }
  }
  return;
}



/* Entry: 1013b7dfc; end: 1013b7f23;  */

undefined * FUN_1013b7dfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  func_0x000107c610f8(PTR__OBJC_CLASS___PHFetchOptions_1126cb260);
  func_0x000107c453e4();
  FUN_1013b7f4c(0);
  lVar2 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined **)(lVar2 + 0x38) = PTR___sSSN_11034da80;
  lVar3 = lVar2;
  func_0x00010075bbf0();
  *(long *)(lVar2 + 0x40) = lVar3;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  func_0x000107c61434(param_2);
  uVar4 = 0x203d20656c746974;
  func_0x000107c5ff38(0x203d20656c746974,0xea00000000004025,lVar2);
  func_0x000107c57664(puVar1);
  func_0x000107c61170(uVar4);
  puVar5 = PTR__OBJC_CLASS___PHAssetCollection_1126bf858;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollection_1126bf858);
  func_0x000107c42fc4();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c43638();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 1013b7f24; end: 1013b7f4b;  */

/* WARNING: Possible PIC construction at 0x0001013b7254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b7258) */

void FUN_1013b7f24(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar2 = PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8;
  func_0x000107c61168(PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c40c5c(puVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1013b7f4c; end: 1013b7f8f;  */

void FUN_1013b7f4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d60c90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d60c90 = puVar1;
  return;
}



/* Entry: 1013b7f90; end: 1013b7faf;  */

void FUN_1013b7f90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  puVar6 = *(undefined **)(unaff_x20 + 0x20);
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_1126c3948;
  lVar8 = lVar5;
  func_0x000107c61168();
  func_0x000107c40c60();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c4e814();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    lVar8 = 0;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c4b800();
    func_0x000107c61180();
    puVar7 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_68,1,0);
  uVar4 = *(undefined8 *)(lVar5 + 0x18);
  *(undefined **)(lVar5 + 0x10) = puVar7;
  *(long *)(lVar5 + 0x18) = lVar8;
  func_0x000107c6142c(uVar4);
  if (puVar6 != (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___PHAssetCollectionChangeRequest_1126d7fe8;
    func_0x000107c61168();
    func_0x000107c61174(puVar6);
    func_0x000107c3f7a0();
    func_0x000107c61180();
    if (puVar7 != (undefined *)0x0) {
      lVar5 = 0x112d79d00;
      func_0x0001000285a8(0x112d79d00,&UNK_10d939600);
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x18) = 2;
      *(undefined8 *)(lVar5 + 0x10) = 1;
      *(undefined **)(lVar5 + 0x20) = puVar2;
      func_0x000107c61174(puVar7);
      func_0x000107c61174(puVar2);
      uVar4 = 0x112d79d08;
      func_0x0001000285a8(0x112d79d08,&UNK_10d939608);
      lVar8 = lVar5;
      func_0x000107c5fc48(lVar5,uVar4);
      func_0x000107c61574(lVar5);
      func_0x000107c3d5b8(puVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar7);
      puVar1 = puVar7;
    }
    func_0x000107c61170(puVar1);
    puVar1 = puVar6;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1013b7fb0; end: 1013b7fef;  */

undefined8 FUN_1013b7fb0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1013b7ff0; end: 1013b8057;  */

void FUN_1013b7ff0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013b8058; end: 1013b807b;  */

void FUN_1013b8058(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x20));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if ((param_1 & 1) != 0) {
      FUN_1013b7dfc(uVar3,uVar4);
      (*pcVar1)();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
      return;
    }
    func_0x000107c61170();
  }
  (*pcVar1)(0);
  return;
}



/* Entry: 1013b807c; end: 1013b80b7;  */

void FUN_1013b807c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1013b80b8; end: 1013b821f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b80b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code cVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  long extraout_x8;
  long unaff_x20;
  undefined8 *puVar20;
  code *apcStack_f0 [4];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar13 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar12 = *(code **)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar6 = 0x112d5d568;
  func_0x0001000285a8(0x112d5d568,&UNK_10d9392e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)((long)apcStack_f0 - extraout_x8);
  func_0x000107c61428(lVar1 + 0x10,auStack_88,0,0);
  pcVar7 = (code *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (pcVar7 == (code *)0x0) {
    return;
  }
  puVar8 = &UNK_1103ad100;
  func_0x000107c613fc(&UNK_1103ad100,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,pcVar7);
  puVar9 = &UNK_1103ad150;
  func_0x000107c613fc(&UNK_1103ad150,0x40,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(code **)(puVar9 + 0x18) = pcVar13;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(code **)(puVar9 + 0x28) = pcVar12;
  *(long *)(puVar9 + 0x30) = lVar3;
  *(undefined8 *)(puVar9 + 0x38) = uVar11;
  cVar4 = pcVar7[_DAT_112d79cb8];
  pcVar10 = (code *)PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  apcStack_f0[2] = pcVar12;
  apcStack_f0[3] = pcVar13;
  func_0x000107c61168();
  if (cVar4 == (code)0x1) {
    func_0x000107c61434(lVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(puVar8);
    func_0x000107c61174();
    pcVar12 = pcVar10;
    func_0x000107c3e488();
    func_0x000107c61428(puVar8 + 0x10,auStack_a0,0,0);
    pcVar13 = (code *)(puVar8 + 0x10);
    func_0x000107c61618();
    apcStack_f0[1] = pcVar13;
    if (pcVar13 == (code *)0x0) {
      func_0x000107c61574(puVar8);
LAB_1013b6708:
      func_0x000107c61574(puVar9);
    }
    else {
      if (pcVar12 != (code *)0x3) {
        FUN_1013b7db0();
        puVar16 = &UNK_1103ad4e0;
        func_0x000107c613f8(&UNK_1103ad4e0,pcVar13,0,0);
        *pcVar13 = (code)0x1;
        *puVar20 = puVar16;
        func_0x000107c6159c(puVar20,lVar6,1);
        (*apcStack_f0[3])(puVar20);
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(pcVar7);
        FUN_1013b7fb0(puVar20,0x112d5d568,&UNK_10d9392e0);
        goto LAB_1013b66d4;
      }
      if (lVar3 == 0) {
        FUN_1013b6e0c(uVar11,0,apcStack_f0[3],uVar2);
        func_0x000107c61574(puVar8);
        func_0x000107c61170(pcVar13);
        goto LAB_1013b6708;
      }
      pcVar13 = (code *)&UNK_1103ad100;
      func_0x000107c613fc(&UNK_1103ad100,0x18,7);
      func_0x000107c61614(pcVar13 + 0x10,apcStack_f0[1]);
      puVar16 = &UNK_1103ad178;
      func_0x000107c613fc(&UNK_1103ad178,0x30,7);
      *(code **)(puVar16 + 0x10) = pcVar13;
      *(code **)(puVar16 + 0x18) = apcStack_f0[3];
      *(undefined8 *)(puVar16 + 0x20) = uVar2;
      *(undefined8 *)(puVar16 + 0x28) = uVar11;
      func_0x000107c61174(uVar11);
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(pcVar13);
      pcVar12 = apcStack_f0[2];
      FUN_1013b7dfc(apcStack_f0[2],lVar3);
      if (pcVar12 == (code *)0x0) {
        func_0x000107c5aa1c();
        func_0x000107c61180();
        puVar17 = &UNK_1103ad1a0;
        apcStack_f0[0] = pcVar10;
        func_0x000107c613fc(&UNK_1103ad1a0,0x20,7);
        pcVar10 = apcStack_f0[2];
        pcVar12 = apcStack_f0[1];
        *(code **)(puVar17 + 0x10) = apcStack_f0[2];
        *(long *)(puVar17 + 0x18) = lVar3;
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_b0 = FUN_1013b7f24;
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)&UNK_1000f6b44;
        puStack_b8 = &UNK_1103ad1b8;
        ppuVar15 = &puStack_d0;
        puStack_a8 = puVar17;
        func_0x000107c60bc4(ppuVar15);
        puVar17 = puStack_a8;
        apcStack_f0[3] = pcVar13;
        func_0x000107c61434(lVar3);
        func_0x000107c61574(puVar17);
        puVar17 = &UNK_1103ad100;
        func_0x000107c613fc(&UNK_1103ad100,0x18,7);
        func_0x000107c61614(puVar17 + 0x10,pcVar12);
        puVar18 = &UNK_1103ad1f0;
        func_0x000107c613fc(&UNK_1103ad1f0,0x38,7);
        *(undefined **)(puVar18 + 0x10) = puVar17;
        *(code **)(puVar18 + 0x18) = FUN_1013b7df0;
        *(undefined **)(puVar18 + 0x20) = puVar16;
        *(code **)(puVar18 + 0x28) = pcVar10;
        *(long *)(puVar18 + 0x30) = lVar3;
        pcStack_b0 = (code *)0x1013b7f48;
        puStack_d0 = puVar5;
        uStack_c8 = 0x42000000;
        pcStack_c0 = (code *)0x1013b7310;
        puStack_b8 = &UNK_1103ad208;
        ppuVar19 = &puStack_d0;
        puStack_a8 = puVar18;
        func_0x000107c60bc4(ppuVar19);
        puVar17 = puStack_a8;
        func_0x000107c61434(lVar3);
        func_0x000107c6157c(puVar16);
        func_0x000107c61574(puVar17);
        pcVar13 = apcStack_f0[0];
        func_0x000107c4e558(apcStack_f0[0]);
        func_0x000107c61574(puVar9);
        func_0x000107c61170(pcVar7);
        func_0x000107c61574(puVar16);
        func_0x000107c61170(pcVar12);
        func_0x000107c60bd0(ppuVar19);
        func_0x000107c60bd0(ppuVar15);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(apcStack_f0[3]);
        pcVar7 = pcVar13;
      }
      else {
        func_0x000107c61428(pcVar13 + 0x10,&puStack_d0,0,0);
        pcVar10 = pcVar13 + 0x10;
        func_0x000107c61618();
        if (pcVar10 == (code *)0x0) {
          func_0x000107c61574(puVar9);
          func_0x000107c61170(pcVar7);
          func_0x000107c61574(puVar16);
        }
        else {
          pcVar14 = pcVar12;
          func_0x000107c61174(pcVar12);
          FUN_1013b6e0c(uVar11,pcVar12,apcStack_f0[3],uVar2);
          func_0x000107c61170(pcVar14);
          func_0x000107c61574(puVar9);
          func_0x000107c61170(pcVar7);
          func_0x000107c61574(puVar16);
          func_0x000107c61170(apcStack_f0[1]);
          apcStack_f0[1] = pcVar10;
        }
        func_0x000107c61170(apcStack_f0[1]);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(pcVar13);
        pcVar7 = pcVar12;
      }
    }
    func_0x000107c61170(pcVar7);
  }
  else {
    pcStack_b0 = (code *)0x1013b7da0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    pcStack_c0 = FUN_1013b791c;
    puStack_b8 = &UNK_1103ad230;
    ppuVar15 = &puStack_d0;
    puStack_a8 = puVar9;
    func_0x000107c60bc4(ppuVar15);
    puVar16 = puStack_a8;
    func_0x000107c61434(lVar3);
    func_0x000107c6157c(uVar2);
    func_0x000107c6157c(puVar8);
    func_0x000107c6157c(puVar9);
    func_0x000107c61174(uVar11);
    func_0x000107c61574(puVar16);
    func_0x000107c50324(pcVar10);
    func_0x000107c61574(puVar9);
    func_0x000107c61170(pcVar7);
    func_0x000107c60bd0(ppuVar15);
LAB_1013b66d4:
    func_0x000107c61574(puVar8);
  }
  return;
}



/* Entry: 1013b8220; end: 1013b825f;  */

void FUN_1013b8220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d79d10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d939658;
  func_0x000107c61520(&UNK_10d939658,&UNK_1103ad4e0);
  puRam0000000112d79d10 = puVar1;
  return;
}



/* Entry: 1013b8260; end: 1013b82d7;  */

undefined1 FUN_1013b8260(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1013b82d8; end: 1013b8337; -[_TtC20SelfieOnboardingImpl23SelfieCaptureProxySaver init] */

void FUN_1013b82d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SelfieOnboardingImpl.SelfieCaptureProxySaver",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013b8304);
  (*pcVar1)();
}



/* Entry: 1013b8338; end: 1013b836f; -[_TtC20SelfieOnboardingImpl23SelfieCaptureProxySaver .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013b8354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013b8358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b8338(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d79d18))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d79d18));
  return;
}



/* Entry: 1013b8370; end: 1013b838f;  */

void FUN_1013b8370(void)

{
  func_0x000107c61168(&PTR_PTR_1127ce248);
  return;
}



/* Entry: 1013b8390; end: 1013b8543;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013b8390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  lVar1 = lVar4 + _DAT_112d79d18;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(param_1,param_2,param_3,param_4,param_5,param_6,uVar2,lVar3);
  lVar4 = lVar4 + _DAT_112d79d20;
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar1 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3,param_4,0x1013b82d0,0,uVar2,lVar1);
  return;
}



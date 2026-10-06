/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035ff428; end: 1035ff513;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035ff4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x0001035ff4c0) */
/* WARNING: Removing unreachable block (ram,0x0001027fe54c) */
/* WARNING: Removing unreachable block (ram,0x0001027fe574) */
/* WARNING: Removing unreachable block (ram,0x0001027fe550) */

code * FUN_1035ff428(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4,code *param_5
                    ,code *UNRECOVERED_JUMPTABLE_01,code *UNRECOVERED_JUMPTABLE_00,code *param_8,
                    code *param_9,code *param_10,byte param_11)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long *plVar20;
  long *plVar21;
  undefined1 *puVar22;
  code *pcVar23;
  long lVar24;
  code *pcVar25;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar26;
  uint uVar27;
  undefined *puVar28;
  undefined *puVar29;
  ulong uVar30;
  long in_x12;
  long in_x13;
  long in_x14;
  long in_x15;
  long in_x16;
  long in_x17;
  code *unaff_x19;
  code *pcVar31;
  code *unaff_x20;
  code *pcVar32;
  undefined8 uVar33;
  code *unaff_x21;
  code *unaff_x22;
  code *unaff_x23;
  code *unaff_x24;
  code *unaff_x25;
  code *unaff_x26;
  code *unaff_x27;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar34;
  code *unaff_x30;
  undefined8 in_register_00005008;
  undefined8 uVar35;
  undefined8 in_register_00005028;
  undefined8 uVar36;
  undefined8 *in_stack_00000050;
  undefined1 auStack_140 [176];
  
  puVar4 = &stack0xffffffffffffffd0;
  puVar2 = &stack0xffffffffffffffd0;
  puVar34 = (undefined8 *)&stack0xfffffffffffffff0;
  uVar27 = (uint)((ulong)param_10 >> 0x3c) & 3;
  if (0xc < (uVar27 | (uint)param_11 << 2 & 0xff)) {
LAB_1035ff4dc:
code_r0x0001035ff4e0:
code_r0x0001035ff4e4:
    return param_3;
  }
  puVar28 = (undefined *)((ulong)(uVar27 | (uint)param_11 << 2) & 0xff);
  puVar29 = &UNK_10dbe671c;
  uVar30 = (ulong)(byte)(&UNK_10dbe671c)[(long)puVar28];
  lVar24 = uVar30 * 4 + 0x1035ff46c;
  puVar5 = &stack0xffffffffffffffd0;
  puVar6 = &stack0xffffffffffffffd0;
  puVar7 = &stack0xffffffffffffffd0;
  puVar8 = &stack0xffffffffffffffd0;
  puVar9 = &stack0xffffffffffffffd0;
  puVar10 = &stack0xffffffffffffffd0;
  puVar11 = &stack0xffffffffffffffd0;
  puVar12 = &stack0xffffffffffffffd0;
  puVar13 = &stack0xffffffffffffffd0;
  puVar14 = &stack0xffffffffffffffd0;
  puVar15 = &stack0xffffffffffffffd0;
  puVar16 = &stack0xffffffffffffffd0;
  puVar17 = &stack0xffffffffffffffd0;
  puVar18 = &stack0xffffffffffffffd0;
  puVar19 = &stack0xffffffffffffffd0;
  plVar20 = (long *)&stack0xffffffffffffffd0;
  plVar21 = (long *)&stack0xffffffffffffffd0;
  puVar22 = &stack0xffffffffffffffd0;
  puVar1 = &stack0xffffffffffffffd0;
  puVar3 = &stack0xffffffffffffffd0;
  pcVar23 = param_3;
  pcVar25 = param_4;
  UNRECOVERED_JUMPTABLE = param_5;
  pcVar26 = UNRECOVERED_JUMPTABLE_01;
  pcVar31 = unaff_x19;
  pcVar32 = unaff_x20;
  switch(puVar28) {
  default:
    break;
  case (undefined *)0x4:
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(UNRECOVERED_JUMPTABLE_01);
    param_3 = UNRECOVERED_JUMPTABLE_00;
    param_4 = param_8;
  case (undefined *)0x24:
    break;
  case (undefined *)0x9:
  case (undefined *)0xa0:
  case (undefined *)0xf4:
    param_3 = param_4;
  case (undefined *)0x4b:
  case (undefined *)0x73:
  case (undefined *)0x8f:
  case (undefined *)0xab:
  case (undefined *)0xe3:
    pcVar31 = param_8;
    pcVar32 = UNRECOVERED_JUMPTABLE_01;
    goto code_r0x0001035ff488;
  case (undefined *)0xc:
    unaff_x30 = (code *)0x1035ff4c0;
    goto code_r0x00010006c090;
  case (undefined *)0x14:
    goto code_r0x0001035ff4e4;
  case (undefined *)0x15:
    goto code_r0x0001035ff72c;
  case (undefined *)0x16:
  case (undefined *)0xfe:
    goto code_r0x0001035ff7d4;
  case (undefined *)0x18:
    goto code_r0x0001035ff488;
  case (undefined *)0x25:
  case (undefined *)0x39:
  case (undefined *)0x4d:
    goto code_r0x0001035ff600;
  case (undefined *)0x26:
  case (undefined *)0x3a:
  case (undefined *)0x4e:
  case (undefined *)0x62:
  case (undefined *)0x76:
  case (undefined *)0x7e:
  case (undefined *)0x92:
  case (undefined *)0x9a:
  case (undefined *)0xae:
  case (undefined *)0xb6:
  case (undefined *)0xbe:
  case (undefined *)0xd2:
  case (undefined *)0xe6:
  case (undefined *)0xfa:
    goto code_r0x0001035ff70c;
  case (undefined *)0x27:
  case (undefined *)0x3b:
  case (undefined *)0x4f:
  case (undefined *)0x63:
  case (undefined *)0x77:
  case (undefined *)0x7f:
  case (undefined *)0x82:
  case (undefined *)0x93:
  case (undefined *)0x9b:
  case (undefined *)0x9e:
  case (undefined *)0xaf:
  case (undefined *)0xb7:
  case (undefined *)0xbf:
  case (undefined *)0xd3:
  case (undefined *)0xe7:
  case (undefined *)0xfb:
code_r0x0001035ff474:
    puVar3 = (undefined1 *)register0x00000008;
  case (undefined *)0x32:
  case (undefined *)0x5a:
  case (undefined *)0xca:
  case (undefined *)0xf2:
    puVar2 = puVar3;
    UNRECOVERED_JUMPTABLE_01 = unaff_x19;
    UNRECOVERED_JUMPTABLE_00 = unaff_x20;
code_r0x00010006c090:
    uVar27 = (uint)((ulong)param_4 >> 0x3e);
    if (uVar27 == 1) {
      param_3 = (code *)((ulong)param_4 & 0x3fffffffffffffff);
    }
    else {
      if (uVar27 != 2) {
        return param_3;
      }
      *(code **)(puVar2 + -0x20) = UNRECOVERED_JUMPTABLE_00;
      *(code **)(puVar2 + -0x18) = UNRECOVERED_JUMPTABLE_01;
      *(undefined8 **)(puVar2 + -0x10) = puVar34;
      *(code **)(puVar2 + -8) = unaff_x30;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_3);
    return param_3;
  case (undefined *)0x28:
  case (undefined *)0xd4:
    goto code_r0x0001035ff76c;
  case (undefined *)0x29:
  case (undefined *)0x51:
  case (undefined *)0x79:
  case (undefined *)0x95:
  case (undefined *)0xb1:
  case (undefined *)0xc1:
    goto code_r0x0001035ff6a0;
  case (undefined *)0x2a:
  case (undefined *)0x52:
  case (undefined *)0x7a:
  case (undefined *)0x96:
  case (undefined *)0xb2:
  case (undefined *)0xc2:
  case (undefined *)0xea:
    goto code_r0x0001035ff74c;
  case (undefined *)0x34:
  case (undefined *)0x42:
  case (undefined *)0x4c:
  case (undefined *)0x5c:
  case (undefined *)0x6a:
  case (undefined *)0x86:
  case (undefined *)0xa2:
  case (undefined *)0xcc:
  case (undefined *)0xda:
    goto code_r0x0001035ff470;
  case (undefined *)0x38:
    goto code_r0x0001035ff4e0;
  case (undefined *)0x3c:
    goto code_r0x0001035ff63c;
  case (undefined *)0x3d:
  case (undefined *)0x65:
    goto code_r0x0001035ff544;
  case (undefined *)0x3e:
  case (undefined *)0x66:
  case (undefined *)0x8a:
  case (undefined *)0xa6:
  case (undefined *)0xd6:
  case (undefined *)0xe4:
    goto code_r0x0001035ff6f0;
  case (undefined *)0x3f:
  case (undefined *)0x60:
  case (undefined *)0x67:
  case (undefined *)0x8b:
  case (undefined *)0xa7:
  case (undefined *)0xd7:
    goto code_r0x0001035ff840;
  case (undefined *)0x48:
    goto code_r0x0001035ff7dc;
  case (undefined *)0x49:
    goto code_r0x0001035ff644;
  case (undefined *)0x4a:
  case (undefined *)0x72:
  case (undefined *)0x8e:
  case (undefined *)0xaa:
  case (undefined *)0xe2:
  case (undefined *)0xf8:
    goto code_r0x0001035ff6c0;
  case (undefined *)0x50:
    goto code_r0x0001035ff73c;
  case (undefined *)0x61:
  case (undefined *)0x75:
  case (undefined *)0x91:
  case (undefined *)0xad:
  case (undefined *)0xbd:
  case (undefined *)0xd1:
  case (undefined *)0xe5:
  case (undefined *)0xf9:
    goto code_r0x0001035ff5fc;
  case (undefined *)0x64:
    goto code_r0x0001035ff6fc;
  case (undefined *)0x71:
  case (undefined *)0x8d:
  case (undefined *)0xa9:
    goto code_r0x0001035ff648;
  case (undefined *)0x74:
    goto code_r0x0001035ff810;
  case (undefined *)0x78:
    goto code_r0x0001035ff5bc;
  case (undefined *)0x7c:
    goto code_r0x0001035ff68c;
  case (undefined *)0x7d:
  case (undefined *)0x99:
  case (undefined *)0xb5:
    goto code_r0x0001035ff5f4;
  case (undefined *)0x84:
  case (undefined *)0xc0:
    goto code_r0x0001035ff49c;
  case (undefined *)0x88:
    goto code_r0x0001035ff67c;
  case (undefined *)0x89:
  case (undefined *)0xa5:
    puVar4 = auStack_140;
  case (undefined *)0xe9:
    *(code **)(puVar4 + 0xc0) = unaff_x26;
    *(code **)(puVar4 + 200) = unaff_x25;
    puVar5 = puVar4;
code_r0x0001035ff6a0:
    *(code **)(puVar5 + 0xd0) = unaff_x24;
    *(code **)(puVar5 + 0xd8) = unaff_x23;
    *(code **)(puVar5 + 0xe0) = unaff_x22;
    *(code **)(puVar5 + 0xe8) = unaff_x21;
    *(code **)(puVar5 + 0xf0) = unaff_x20;
    *(code **)(puVar5 + 0xf8) = unaff_x19;
    *(undefined8 **)(puVar5 + 0x100) = puVar34;
    *(code **)(puVar5 + 0x108) = unaff_x30;
    puVar34 = (undefined8 *)(puVar5 + 0x100);
    puVar28 = *(undefined **)param_4;
    puVar6 = puVar5;
    unaff_x19 = param_3;
    unaff_x20 = param_4;
code_r0x0001035ff6c0:
    *(undefined **)param_3 = puVar28;
    param_3[8] = param_4[8];
    puVar7 = puVar6;
code_r0x0001035ff6cc:
    unaff_x21 = *(code **)(param_4 + 0x48);
    unaff_x22 = (code *)(ulong)(byte)param_4[0x50];
    if (((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
       (param_4[0x50] == (code)0xff)) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar36 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar35 = *(undefined8 *)(unaff_x20 + 0x40);
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x20 + 0x38);
      *(undefined8 *)(unaff_x19 + 0x30) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x48) = uVar36;
      *(undefined8 *)(unaff_x19 + 0x40) = uVar35;
      puVar8 = puVar7;
code_r0x0001035ff6f0:
      unaff_x19[0x50] = unaff_x20[0x50];
      in_register_00005028 = *(undefined8 *)(unaff_x20 + 0x18);
      param_2 = *(undefined8 *)(unaff_x20 + 0x10);
      in_register_00005008 = *(undefined8 *)(unaff_x20 + 0x28);
      param_1 = *(undefined8 *)(unaff_x20 + 0x20);
      puVar1 = puVar8;
code_r0x0001035ff6fc:
      puVar14 = puVar1;
      *(undefined8 *)(unaff_x19 + 0x18) = in_register_00005028;
      *(undefined8 *)(unaff_x19 + 0x10) = param_2;
      *(undefined8 *)(unaff_x19 + 0x28) = in_register_00005008;
      *(undefined8 *)(unaff_x19 + 0x20) = param_1;
    }
    else {
      param_3 = *(code **)(unaff_x20 + 0x10);
      unaff_x23 = *(code **)(unaff_x20 + 0x18);
      puVar34[-0xc] = param_3;
      puVar9 = puVar7;
code_r0x0001035ff70c:
      param_4 = unaff_x23;
      unaff_x24 = *(code **)(unaff_x20 + 0x20);
      unaff_x25 = *(code **)(unaff_x20 + 0x28);
      unaff_x26 = *(code **)(unaff_x20 + 0x30);
      unaff_x27 = *(code **)(unaff_x20 + 0x38);
      unaff_x28 = *(undefined8 *)(unaff_x20 + 0x40);
      *puVar9 = (char)unaff_x22;
      puVar10 = puVar9;
      unaff_x23 = param_4;
code_r0x0001035ff720:
      UNRECOVERED_JUMPTABLE_00 = unaff_x26;
      UNRECOVERED_JUMPTABLE_01 = unaff_x25;
      param_5 = unaff_x24;
      puVar11 = puVar10;
      unaff_x24 = param_5;
      unaff_x25 = UNRECOVERED_JUMPTABLE_01;
      unaff_x26 = UNRECOVERED_JUMPTABLE_00;
code_r0x0001035ff72c:
      FUN_1035fdc4c(param_3,param_4,param_5,UNRECOVERED_JUMPTABLE_01,UNRECOVERED_JUMPTABLE_00,
                    unaff_x27,unaff_x28,unaff_x21);
      puVar12 = puVar11;
code_r0x0001035ff73c:
      *(undefined8 *)(unaff_x19 + 0x10) = puVar34[-0xc];
      *(code **)(unaff_x19 + 0x18) = unaff_x23;
      *(code **)(unaff_x19 + 0x20) = unaff_x24;
      *(code **)(unaff_x19 + 0x28) = unaff_x25;
      *(code **)(unaff_x19 + 0x30) = unaff_x26;
      *(code **)(unaff_x19 + 0x38) = unaff_x27;
      puVar13 = puVar12;
code_r0x0001035ff74c:
      *(undefined8 *)(unaff_x19 + 0x40) = unaff_x28;
      *(code **)(unaff_x19 + 0x48) = unaff_x21;
      puVar14 = puVar13;
code_r0x0001035ff750:
      unaff_x19[0x50] = SUB81(unaff_x22,0);
    }
    unaff_x21 = *(code **)(unaff_x20 + 0x60);
    if ((((ulong)unaff_x21 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x98);
      *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x20 + 0xa0);
      *(undefined8 *)(unaff_x19 + 0x98) = uVar33;
code_r0x0001035ff76c:
      in_register_00005008 = *(undefined8 *)(unaff_x20 + 0xb0);
      param_1 = *(undefined8 *)(unaff_x20 + 0xa8);
code_r0x0001035ff770:
      *(undefined8 *)(unaff_x19 + 0xb0) = in_register_00005008;
      *(undefined8 *)(unaff_x19 + 0xa8) = param_1;
      uVar33 = *(undefined8 *)(unaff_x20 + 0xb8);
      *(undefined8 *)(unaff_x19 + 0xc0) = *(undefined8 *)(unaff_x20 + 0xc0);
      *(undefined8 *)(unaff_x19 + 0xb8) = uVar33;
      uVar33 = *(undefined8 *)(unaff_x20 + 200);
      *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x20 + 0xd0);
      *(undefined8 *)(unaff_x19 + 200) = uVar33;
      uVar33 = *(undefined8 *)(unaff_x20 + 0x58);
      *(undefined8 *)(unaff_x19 + 0x60) = *(undefined8 *)(unaff_x20 + 0x60);
      *(undefined8 *)(unaff_x19 + 0x58) = uVar33;
      uVar33 = *(undefined8 *)(unaff_x20 + 0x68);
      *(undefined8 *)(unaff_x19 + 0x70) = *(undefined8 *)(unaff_x20 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x68) = uVar33;
      uVar33 = *(undefined8 *)(unaff_x20 + 0x78);
      *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x20 + 0x80);
      *(undefined8 *)(unaff_x19 + 0x78) = uVar33;
code_r0x0001035ff79c:
      uVar33 = *(undefined8 *)(unaff_x20 + 0x88);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x90);
      *(undefined8 *)(unaff_x19 + 0x88) = uVar33;
    }
    else {
      unaff_x23 = *(code **)(unaff_x20 + 0x58);
      puVar15 = puVar14;
code_r0x0001035ff7ac:
      unaff_x24 = *(code **)(unaff_x20 + 0x68);
      unaff_x25 = *(code **)(unaff_x20 + 0x70);
      unaff_x26 = *(code **)(unaff_x20 + 0x78);
      unaff_x27 = *(code **)(unaff_x20 + 0x80);
      puVar16 = puVar15;
code_r0x0001035ff7b4:
      unaff_x28 = *(undefined8 *)(unaff_x20 + 0x88);
      unaff_x22 = *(code **)(unaff_x20 + 0x90);
      lVar24 = *(long *)(unaff_x20 + 0x98);
      uVar30 = *(ulong *)(unaff_x20 + 0xa0);
      *(long *)(puVar16 + 0x68) = lVar24;
      *(ulong *)(puVar16 + 0x70) = uVar30;
      puVar17 = puVar16;
code_r0x0001035ff7c0:
      in_x12 = *(long *)(unaff_x20 + 0xa8);
      in_x13 = *(long *)(unaff_x20 + 0xb0);
      *(long *)(puVar17 + 0x78) = in_x12;
      *(long *)(puVar17 + 0x80) = in_x13;
      in_x14 = *(long *)(unaff_x20 + 0xb8);
      in_x15 = *(long *)(unaff_x20 + 0xc0);
      puVar34[-0xf] = in_x14;
      puVar34[-0xe] = in_x15;
      in_x16 = *(long *)(unaff_x20 + 200);
      in_x17 = *(long *)(unaff_x20 + 0xd0);
      puVar18 = puVar17;
code_r0x0001035ff7d4:
      puVar34[-0xd] = in_x16;
      puVar34[-0xc] = in_x17;
      puVar28 = &UNK_101570000;
      puVar19 = puVar18;
code_r0x0001035ff7dc:
      *(undefined **)(puVar19 + 0x50) = &SUB_101541428;
      *(undefined **)(puVar19 + 0x58) = puVar28 + 0xe04;
      puVar28 = &SUB_101597350;
      puVar29 = &SUB_10006c00c;
      plVar20 = (long *)puVar19;
code_r0x0001035ff7fc:
      plVar20[8] = (long)puVar29;
      plVar20[9] = (long)puVar28;
      plVar20[6] = in_x16;
      plVar20[7] = in_x17;
      plVar20[4] = in_x14;
      plVar20[5] = in_x15;
      plVar20[2] = in_x12;
      plVar20[3] = in_x13;
      *plVar20 = lVar24;
      plVar20[1] = uVar30;
      plVar21 = plVar20;
code_r0x0001035ff810:
      FUN_1035ff514(unaff_x23,unaff_x21,unaff_x24,unaff_x25,unaff_x26,unaff_x27,unaff_x28,unaff_x22)
      ;
      *(code **)(unaff_x19 + 0x58) = unaff_x23;
      *(code **)(unaff_x19 + 0x60) = unaff_x21;
      *(code **)(unaff_x19 + 0x68) = unaff_x24;
      *(code **)(unaff_x19 + 0x70) = unaff_x25;
      *(code **)(unaff_x19 + 0x78) = unaff_x26;
      *(code **)(unaff_x19 + 0x80) = unaff_x27;
      puVar22 = (undefined1 *)plVar21;
code_r0x0001035ff840:
      *(undefined8 *)(unaff_x19 + 0x88) = unaff_x28;
      *(code **)(unaff_x19 + 0x90) = unaff_x22;
      uVar33 = *(undefined8 *)(puVar22 + 0x70);
      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(puVar22 + 0x68);
      *(undefined8 *)(unaff_x19 + 0xa0) = uVar33;
      uVar33 = *(undefined8 *)(puVar22 + 0x80);
      *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(puVar22 + 0x78);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar33;
      uVar33 = puVar34[-0xe];
      *(undefined8 *)(unaff_x19 + 0xb8) = puVar34[-0xf];
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar33;
code_r0x0001035ff85c:
      uVar33 = puVar34[-0xc];
      *(undefined8 *)(unaff_x19 + 200) = puVar34[-0xd];
      *(undefined8 *)(unaff_x19 + 0xd0) = uVar33;
    }
    uVar33 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar35 = *(undefined8 *)(unaff_x20 + 0xe0);
    func_0x00010006c00c(uVar33,uVar35);
    *(undefined8 *)(unaff_x19 + 0xd8) = uVar33;
    *(undefined8 *)(unaff_x19 + 0xe0) = uVar35;
    lVar24 = *(long *)(unaff_x20 + 0xf0);
    if (lVar24 == 0) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x20 + 0xf0);
      *(undefined8 *)(unaff_x19 + 0xe8) = uVar33;
      uVar33 = *(undefined8 *)(unaff_x20 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0x100) = *(undefined8 *)(unaff_x20 + 0x100);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar33;
    }
    else {
      *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x20 + 0xe8);
      *(long *)(unaff_x19 + 0xf0) = lVar24;
      uVar33 = *(undefined8 *)(unaff_x20 + 0xf8);
      uVar35 = *(undefined8 *)(unaff_x20 + 0x100);
      func_0x000107c61434();
      func_0x00010006c00c(uVar33,uVar35);
      *(undefined8 *)(unaff_x19 + 0xf8) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x100) = uVar35;
    }
    uVar30 = *(ulong *)(unaff_x20 + 0x118);
    if (uVar30 >> 0x3c < 0xf) {
      *(undefined4 *)(unaff_x19 + 0x108) = *(undefined4 *)(unaff_x20 + 0x108);
      uVar33 = *(undefined8 *)(unaff_x20 + 0x110);
      func_0x00010006c00c(uVar33,uVar30);
      *(undefined8 *)(unaff_x19 + 0x110) = uVar33;
      *(ulong *)(unaff_x19 + 0x118) = uVar30;
    }
    else {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x108);
      *(undefined8 *)(unaff_x19 + 0x110) = *(undefined8 *)(unaff_x20 + 0x110);
      *(undefined8 *)(unaff_x19 + 0x108) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
    }
    if (unaff_x20[0x120] == (code)0x2) {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x120);
      *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x20 + 0x128);
      *(undefined8 *)(unaff_x19 + 0x120) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x130) = *(undefined8 *)(unaff_x20 + 0x130);
    }
    else {
      unaff_x19[0x120] = unaff_x20[0x120];
      uVar33 = *(undefined8 *)(unaff_x20 + 0x128);
      uVar35 = *(undefined8 *)(unaff_x20 + 0x130);
      func_0x00010006c00c(uVar33,uVar35);
      *(undefined8 *)(unaff_x19 + 0x128) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x130) = uVar35;
    }
    uVar30 = *(ulong *)(unaff_x20 + 0x148);
    if (uVar30 >> 0x3c < 0xf) {
      *(undefined4 *)(unaff_x19 + 0x138) = *(undefined4 *)(unaff_x20 + 0x138);
      uVar33 = *(undefined8 *)(unaff_x20 + 0x140);
      func_0x00010006c00c(uVar33,uVar30);
      *(undefined8 *)(unaff_x19 + 0x140) = uVar33;
      *(ulong *)(unaff_x19 + 0x148) = uVar30;
    }
    else {
      uVar33 = *(undefined8 *)(unaff_x20 + 0x138);
      *(undefined8 *)(unaff_x19 + 0x140) = *(undefined8 *)(unaff_x20 + 0x140);
      *(undefined8 *)(unaff_x19 + 0x138) = uVar33;
      *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x20 + 0x148);
    }
    return unaff_x19;
  case (undefined *)0x8c:
    goto code_r0x0001035ff6cc;
  case (undefined *)0x90:
    goto code_r0x0001035ff7c0;
  case (undefined *)0x94:
    goto code_r0x0001035ff54c;
  case (undefined *)0x98:
  case (undefined *)0xa4:
    goto code_r0x0001035ff79c;
  case (undefined *)0xa8:
    goto code_r0x0001035ff85c;
  case (undefined *)0xac:
    goto code_r0x0001035ff770;
  case (undefined *)0xb0:
    goto LAB_1035ff4dc;
  case (undefined *)0xb4:
    goto code_r0x0001035ff7ac;
  case (undefined *)0xbc:
    goto code_r0x0001035ff750;
  case (undefined *)0xd0:
    goto code_r0x0001035ff720;
  case (undefined *)0xd5:
    goto code_r0x0001035ff634;
  case (undefined *)0xe0:
    goto code_r0x0001035ff57c;
  case (undefined *)0xe1:
    goto code_r0x0001035ff64c;
  case (undefined *)0xe8:
    goto code_r0x0001035ff7fc;
  case (undefined *)0xfc:
    in_stack_00000050 = puVar34;
    puVar34 = &stack0x00000050;
    unaff_x19 = param_8;
    unaff_x20 = UNRECOVERED_JUMPTABLE_00;
  case (undefined *)0x70:
    unaff_x21 = UNRECOVERED_JUMPTABLE_01;
    unaff_x22 = param_5;
code_r0x0001035ff544:
    UNRECOVERED_JUMPTABLE = (code *)puVar34[10];
    puVar28 = (undefined *)((ulong)param_4 >> 0x3c & 3);
code_r0x0001035ff54c:
    pcVar23 = unaff_x22;
    pcVar25 = unaff_x21;
    param_5 = unaff_x20;
    UNRECOVERED_JUMPTABLE_01 = unaff_x19;
    uVar27 = (uint)puVar28;
    if (uVar27 < 2) {
      if (uVar27 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001035ff670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_3,(ulong)param_4 & 0xcfffffffffffffff);
        return param_3;
      }
      UNRECOVERED_JUMPTABLE_00 = (code *)puVar34[0xb];
      (*UNRECOVERED_JUMPTABLE)();
code_r0x0001035ff57c:
                    /* WARNING: Could not recover jumptable at 0x0001035ff594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(pcVar23,pcVar25,param_5,UNRECOVERED_JUMPTABLE_01);
      return pcVar23;
    }
    if (uVar27 != 2) {
code_r0x0001035ff67c:
code_r0x0001035ff68c:
      return param_3;
    }
    unaff_x30 = (code *)puVar34[0xd];
    unaff_x27 = (code *)puVar34[0xc];
    unaff_x19 = UNRECOVERED_JUMPTABLE_01;
    pcVar32 = param_5;
    unaff_x21 = pcVar25;
    unaff_x22 = pcVar23;
code_r0x0001035ff5bc:
    pcVar23 = unaff_x22;
    pcVar25 = unaff_x21;
    unaff_x20 = (code *)puVar34[7];
    unaff_x21 = (code *)puVar34[6];
    unaff_x22 = (code *)puVar34[5];
    unaff_x23 = (code *)puVar34[3];
    unaff_x28 = puVar34[4];
    unaff_x24 = (code *)puVar34[2];
    (*UNRECOVERED_JUMPTABLE)(param_3,(ulong)param_4 & 0xcfffffffffffffff);
    unaff_x25 = param_10;
    unaff_x26 = param_9;
code_r0x0001035ff5f4:
    param_5 = pcVar32;
    UNRECOVERED_JUMPTABLE_01 = unaff_x19;
code_r0x0001035ff5fc:
    UNRECOVERED_JUMPTABLE_00 = unaff_x26;
    pcVar26 = UNRECOVERED_JUMPTABLE_01;
code_r0x0001035ff600:
    UNRECOVERED_JUMPTABLE_01 = unaff_x30;
    param_3 = unaff_x20;
    (*unaff_x27)(pcVar23,pcVar25,param_5,pcVar26,UNRECOVERED_JUMPTABLE_00);
    (*UNRECOVERED_JUMPTABLE_01)(unaff_x25,unaff_x24,unaff_x23);
    (*UNRECOVERED_JUMPTABLE_01)(unaff_x28,unaff_x22,unaff_x21);
code_r0x0001035ff634:
code_r0x0001035ff63c:
code_r0x0001035ff644:
code_r0x0001035ff648:
code_r0x0001035ff64c:
                    /* WARNING: Could not recover jumptable at 0x0001035ff64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)();
    return param_3;
  case (undefined *)0xfd:
    goto code_r0x0001035ff7b4;
  }
code_r0x0001035ff46c:
  puVar34 = unaff_x29;
code_r0x0001035ff470:
  goto code_r0x0001035ff474;
code_r0x0001035ff488:
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(pcVar32);
  unaff_x21 = param_9;
  unaff_x22 = param_10;
code_r0x0001035ff49c:
  param_3 = unaff_x21;
  func_0x000107c6142c(pcVar31);
  param_4 = (code *)((ulong)unaff_x22 & 0xcfffffffffffffff);
  goto code_r0x0001035ff46c;
}



/* Entry: 1035ff514; end: 10360006f;  */

void FUN_1035ff514(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  code *UNRECOVERED_JUMPTABLE_00,code *UNRECOVERED_JUMPTABLE_01,code *param_19,
                  code *UNRECOVERED_JUMPTABLE)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3c) & 3;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
      (*param_19)(param_3,param_4,param_5,param_6,param_7);
      (*UNRECOVERED_JUMPTABLE)(param_8,param_9,param_10);
      (*UNRECOVERED_JUMPTABLE)(param_11,param_12,param_13);
                    /* WARNING: Could not recover jumptable at 0x0001035ff64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_14,param_15,param_16);
      return;
    }
    return;
  }
  if (uVar1 == 0) {
    (*UNRECOVERED_JUMPTABLE_00)();
                    /* WARNING: Could not recover jumptable at 0x0001035ff594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_01)(param_3,param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001035ff670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Entry: 103600070; end: 1036000c7;  */

undefined8 FUN_103600070(undefined8 param_1)

{
  FUN_103600514(param_1,&UNK_11066cbc8);
  return param_1;
}



/* Entry: 1036000c8; end: 1036003fb;  */

undefined8 * FUN_1036000c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar9 = param_1[9];
  cVar4 = *(char *)(param_1 + 10);
  if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar4 == -1)) {
LAB_103600130:
    uVar7 = param_2[6];
    uVar14 = param_2[9];
    uVar15 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar7;
    param_1[9] = uVar14;
    param_1[8] = uVar15;
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
    uVar14 = param_2[2];
    uVar15 = param_2[5];
    uVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar14;
    param_1[5] = uVar15;
    param_1[4] = uVar7;
  }
  else {
    uVar11 = param_2[9];
    cVar5 = *(char *)(param_2 + 10);
    if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar5 == -1)) {
      FUN_103600070(param_1 + 2);
      goto LAB_103600130;
    }
    uVar12 = param_2[8];
    uVar7 = param_1[2];
    uVar1 = param_1[3];
    uVar15 = param_1[4];
    uVar2 = param_1[5];
    uVar14 = param_1[6];
    uVar3 = param_1[7];
    uVar8 = param_1[8];
    uVar6 = param_2[2];
    uVar16 = param_2[5];
    uVar13 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar16;
    param_1[4] = uVar13;
    uVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    param_1[8] = uVar12;
    param_1[9] = uVar11;
    *(char *)(param_1 + 10) = cVar5;
    FUN_1035ff428(uVar7,uVar1,uVar15,uVar2,uVar14,uVar3,uVar8,uVar9,cVar4);
  }
  uVar9 = param_1[0xc];
  if (((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
LAB_1036001a4:
    uVar7 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar7;
    uVar7 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar7;
    uVar7 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar7;
    uVar7 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar7;
    uVar7 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar7;
    uVar7 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar7;
    uVar7 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar7;
    uVar7 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar7;
  }
  else {
    uVar11 = param_2[0xc];
    if (((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      func_0x00010360009c(param_1 + 0xb);
      goto LAB_1036001a4;
    }
    uVar6 = param_1[0xb];
    uVar7 = param_1[0xd];
    uVar2 = param_1[0xe];
    uVar15 = param_1[0xf];
    uVar3 = param_1[0x10];
    uVar14 = param_1[0x11];
    uVar8 = param_1[0x12];
    uVar16 = param_1[0x14];
    uVar13 = param_1[0x13];
    uVar18 = param_1[0x16];
    uVar17 = param_1[0x15];
    uVar20 = param_1[0x18];
    uVar19 = param_1[0x17];
    uVar1 = param_1[0x19];
    uVar12 = param_1[0x1a];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = uVar11;
    uVar21 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar21;
    uVar21 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar21;
    uVar21 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar21;
    uVar21 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar21;
    uVar21 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar21;
    uVar21 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar21;
    uVar21 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar21;
    FUN_1035ff514(uVar6,uVar9,uVar7,uVar2,uVar15,uVar3,uVar14,uVar8,uVar13,uVar16,uVar17,uVar18,
                  uVar19,uVar20,uVar1,uVar12,&SUB_10006c090,&SUB_101597ae4,&SUB_101553bdc,
                  &SUB_101553ccc);
  }
  uVar7 = param_1[0x1b];
  uVar15 = param_1[0x1c];
  uVar14 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar14;
  func_0x00010006c090(uVar7,uVar15);
  if (param_1[0x1e] == 0) {
LAB_1036002c8:
    uVar7 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar7;
    uVar7 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar7;
  }
  else {
    lVar10 = param_2[0x1e];
    if (lVar10 == 0) {
      func_0x00010159d63c(param_1 + 0x1d);
      goto LAB_1036002c8;
    }
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = lVar10;
    func_0x000107c6142c();
    uVar7 = param_1[0x1f];
    uVar15 = param_1[0x20];
    uVar14 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar14;
    func_0x00010006c090(uVar7,uVar15);
  }
  if ((ulong)param_1[0x23] >> 0x3c < 0xf) {
    uVar9 = param_2[0x23];
    if (0xe < uVar9 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0x21);
      goto LAB_103600308;
    }
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
    uVar7 = param_1[0x22];
    param_1[0x22] = param_2[0x22];
    param_1[0x23] = uVar9;
    func_0x00010006c090(uVar7);
  }
  else {
LAB_103600308:
    uVar7 = param_2[0x21];
    param_1[0x22] = param_2[0x22];
    param_1[0x21] = uVar7;
    param_1[0x23] = param_2[0x23];
  }
  if (*(char *)(param_1 + 0x24) != '\x02') {
    if (*(byte *)(param_2 + 0x24) != 2) {
      *(byte *)(param_1 + 0x24) = *(byte *)(param_2 + 0x24) & 1;
      uVar7 = param_1[0x25];
      uVar15 = param_1[0x26];
      uVar14 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar14;
      func_0x00010006c090(uVar7,uVar15);
      goto LAB_103600388;
    }
    func_0x0001015fd618(param_1 + 0x24);
  }
  uVar7 = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar7;
  param_1[0x26] = param_2[0x26];
LAB_103600388:
  if ((ulong)param_1[0x29] >> 0x3c < 0xf) {
    uVar9 = param_2[0x29];
    if (uVar9 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
      uVar7 = param_1[0x28];
      param_1[0x28] = param_2[0x28];
      param_1[0x29] = uVar9;
      func_0x00010006c090(uVar7);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x27);
  }
  uVar7 = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x27] = uVar7;
  param_1[0x29] = param_2[0x29];
  return param_1;
}



/* Entry: 1036003fc; end: 103600513;  */

int FUN_1036003fc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x54] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x3c);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103600514; end: 10360054b;  */

void FUN_103600514(undefined8 *param_1)

{
  FUN_1035ff428(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],*(undefined1 *)(param_1 + 8));
  return;
}



/* Entry: 10360054c; end: 103600697;  */

undefined8 * FUN_10360054c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar3 = param_2[4];
  uVar7 = param_2[5];
  uVar4 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = *(undefined1 *)(param_2 + 8);
  FUN_1035fdc4c(uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar4,uVar8,uVar9);
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar3;
  param_1[5] = uVar7;
  param_1[6] = uVar4;
  param_1[7] = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar9;
  return param_1;
}



/* Entry: 103600698; end: 1036006fb;  */

undefined8 * FUN_103600698(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar4 = param_1[2];
  uVar2 = param_1[3];
  uVar5 = param_1[4];
  uVar3 = param_1[5];
  uVar6 = param_1[6];
  uVar10 = param_1[7];
  uVar8 = *(undefined1 *)(param_1 + 8);
  uVar11 = *param_2;
  uVar13 = param_2[3];
  uVar12 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[3] = uVar13;
  param_1[2] = uVar12;
  uVar11 = param_2[4];
  uVar13 = param_2[7];
  uVar12 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar11;
  param_1[7] = uVar13;
  param_1[6] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar7;
  FUN_1035ff428(uVar9,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar10,uVar8);
  return param_1;
}



/* Entry: 1036006fc; end: 103600813;  */

int FUN_1036006fc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f3 < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0x3f4;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0x10) << 2) ^ 0x3ff;
  if (0x3f2 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103600814; end: 103600883;  */

void FUN_103600814(undefined8 *param_1)

{
  FUN_1035ff514(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],&SUB_10006c090,&SUB_101597ae4,&SUB_101553bdc,
                &SUB_101553ccc);
  return;
}



/* Entry: 103600884; end: 103600ae3;  */

undefined8 * FUN_103600884(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar1 = *param_2;
  uVar9 = param_2[1];
  uVar2 = param_2[2];
  uVar10 = param_2[3];
  uVar3 = param_2[4];
  uVar11 = param_2[5];
  uVar4 = param_2[6];
  uVar12 = param_2[7];
  uVar5 = param_2[8];
  uVar13 = param_2[9];
  uVar6 = param_2[10];
  uVar14 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar15 = param_2[0xd];
  uVar8 = param_2[0xe];
  uVar16 = param_2[0xf];
  FUN_1035ff514(uVar1,uVar9,uVar2,uVar10,uVar3,uVar11,uVar4,uVar12,uVar5,uVar13,uVar6,uVar14,uVar7,
                uVar15,uVar8,uVar16,&SUB_10006c00c,&SUB_101597350,&SUB_101541428,&LAB_101570e04);
  *param_1 = uVar1;
  param_1[1] = uVar9;
  param_1[2] = uVar2;
  param_1[3] = uVar10;
  param_1[4] = uVar3;
  param_1[5] = uVar11;
  param_1[6] = uVar4;
  param_1[7] = uVar12;
  param_1[8] = uVar5;
  param_1[9] = uVar13;
  param_1[10] = uVar6;
  param_1[0xb] = uVar14;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar15;
  param_1[0xe] = uVar8;
  param_1[0xf] = uVar16;
  return param_1;
}



/* Entry: 103600ae4; end: 103600b87;  */

undefined8 * FUN_103600ae4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar4 = param_1[0xe];
  uVar8 = param_1[0xf];
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = param_2[0xc];
  uVar19 = param_2[0xf];
  uVar18 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  param_1[0xf] = uVar19;
  param_1[0xe] = uVar18;
  FUN_1035ff514(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar4,uVar8,&SUB_10006c090,&SUB_101597ae4,&SUB_101553bdc,&SUB_101553ccc);
  return param_1;
}



/* Entry: 103600b88; end: 103600c87;  */

uint FUN_103600b88(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + 2;
  }
  return (uint)(((*(ulong *)(param_1 + 2) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0);
}



/* Entry: 103600c88; end: 103600cc7;  */

void FUN_103600c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe67ac;
  func_0x000107c61520(&DAT_10dbe67ac,&UNK_11066cb18);
  puRam0000000112f7d9c0 = puVar1;
  return;
}



/* Entry: 103600cc8; end: 103600d07;  */

undefined8 FUN_103600cc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103600d08; end: 103600d23;  */

long FUN_103600d08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103600d24; end: 103600d53;  */

void FUN_103600d24(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103600f84();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103600d54; end: 103600d5b;  */

undefined8 FUN_103600d54(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103600d5c; end: 103600dcf;  */

void FUN_103600d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7da90;
  func_0x0001000285a8(0x112f7da90,&UNK_10dbe6a20);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103600dd0; end: 103600ddb;  */

void FUN_103600dd0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103600ddc; end: 103600e87;  */

void FUN_103600ddc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103600e88; end: 103600e9b;  */

bool FUN_103600e88(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103600e9c; end: 103600ee3;  */

void FUN_103600e9c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe6b90,99,2);
  uRam0000000113809768 = uStack_38;
  uRam0000000113809760 = uStack_40;
  uRam0000000113809778 = uStack_28;
  uRam0000000113809770 = uStack_30;
  uRam0000000113809788 = uStack_18;
  uRam0000000113809780 = uStack_20;
  return;
}



/* Entry: 103600ee4; end: 103600f83;  */

/* WARNING: Possible PIC construction at 0x000103600f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103600f40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103600f34) */
/* WARNING: Removing unreachable block (ram,0x000103600f44) */

void FUN_103600ee4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7da98 != -1) {
    func_0x000107c61568(0x112f7da98,FUN_103600e9c);
  }
  uVar5 = uRam0000000113809788;
  uVar4 = uRam0000000113809780;
  uVar3 = uRam0000000113809778;
  uVar2 = uRam0000000113809770;
  uVar1 = uRam0000000113809768;
  *param_1 = uRam0000000113809760;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103600f84; end: 103600f8f;  */

void FUN_103600f84(void)

{
  return;
}



/* Entry: 103600f90; end: 103600fbb;  */

void FUN_103600f90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103600fbc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103600ffc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103600fbc; end: 10360103b;  */

void FUN_103600fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7daa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6ac0;
  func_0x000107c61520(&UNK_10dbe6ac0,&UNK_11066cdc0);
  puRam0000000112f7daa0 = puVar1;
  return;
}



/* Entry: 10360103c; end: 10360103f;  */

void FUN_10360103c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7dab0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7dab8;
  func_0x00010002969c(0x112f7dab8,&UNK_10dbe6a48);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7dab0 = puVar2;
  return;
}



/* Entry: 103601040; end: 10360108f;  */

void FUN_103601040(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7dab0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7dab8;
  func_0x00010002969c(0x112f7dab8,&UNK_10dbe6a48);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7dab0 = puVar2;
  return;
}



/* Entry: 103601090; end: 103601093;  */

void FUN_103601090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6b00;
  func_0x000107c61520(&UNK_10dbe6b00,&UNK_11066cdc0);
  puRam0000000112f7dac0 = puVar1;
  return;
}



/* Entry: 103601094; end: 1036010d3;  */

void FUN_103601094(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6b00;
  func_0x000107c61520(&UNK_10dbe6b00,&UNK_11066cdc0);
  puRam0000000112f7dac0 = puVar1;
  return;
}



/* Entry: 1036010d4; end: 103601173;  */

int FUN_1036010d4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103601174; end: 103601277;  */

void FUN_103601174(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7db20;
  func_0x0001000285a8(0x112f7db20,&UNK_10dbe6c00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103601278; end: 103601317;  */

uint FUN_103601278(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1036032d0(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103601318; end: 1036013cb;  */

/* WARNING: Removing unreachable block (ram,0x0001036013c8) */

void FUN_103601318(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_10360341c();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1036013cc; end: 10360146f;  */

void FUN_1036013cc(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_60;
  undefined1 uStack_58;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(param_7 + 0x80);
    uVar1 = param_1;
    lStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10360341c();
    (*pcVar2)(&lStack_60,1,&UNK_11066d1c0,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 103601470; end: 1036014af;  */

void FUN_103601470(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 1036014b0; end: 1036014df;  */

undefined1  [16] FUN_1036014b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1036014e0; end: 103601513;  */

void FUN_1036014e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103601514; end: 103601527;  */

undefined1  [16] FUN_103601514(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103601524;
  return auVar1;
}



/* Entry: 103601528; end: 103601563;  */

void FUN_103601528(void)

{
  FUN_103601318();
  return;
}



/* Entry: 103601564; end: 103601567;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103601564(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103601568; end: 10360159f;  */

uint FUN_103601568(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010360525c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1036015a0; end: 1036015bf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1036015a0(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar18 = *param_1;
  lVar15 = param_1[2];
  uVar13 = param_1[3];
  lVar20 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
SUB_100e25fcc:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar5 = (uint)((ulong)pbVar27 >> 0x20);
        uVar19 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar6 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar29 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar22 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
              if (uVar19 < 2) {
                if (uVar19 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                  pbVar29 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar29 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar18 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar29 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                }
                unaff_x23 = unaff_x24 + -lVar18;
                if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar29) {
                    pbVar29 = unaff_x23;
                  }
                  pbVar29 = pbVar29 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          auVar46._8_8_ = pbVar29;
          auVar46._0_8_ = plVar9;
          return auVar46;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
        pbVar12 = (byte *)*plVar9;
        pbVar10 = (byte *)plVar9[1];
        pbVar25 = (byte *)plVar9[3];
        bVar30 = *(byte *)(plVar9 + 5);
        pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                          (ulong)*(byte *)(plVar9 + 2));
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar29[0x28] == 0) {
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
          }
          if (bVar30 != 1) {
            if (pbVar29[0x28] == 2) {
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              pbVar26 = *(byte **)(pbVar29 + 0x18);
              if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
              if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (pbVar26 != (byte *)0x0) {
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(pbVar26);
                  func_0x000107c61174();
                  pbVar10 = pbVar25;
                  pbVar29 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(pbVar26);
                  pbVar25 = pbVar10;
                  goto joined_r0x000100e266a4;
                }
              }
            }
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
          pbVar12 = pbVar10;
          pbVar14 = pbVar27;
          if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar16,pbVar17,0);
            auVar48._8_8_ = pbVar14;
            auVar48._0_8_ = pbVar12;
            return auVar48;
          }
        }
        else {
          pbVar28 = (byte *)plVar9[4];
          if (4 < bVar30) {
            if (bVar30 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                if (pbVar29[0x28] == 6) {
                  lVar18 = *(long *)(pbVar29 + 0x20);
                  lVar15 = *(long *)(pbVar29 + 0x18);
                  bVar30 = pbVar29[8] | (byte)lVar15;
                  bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                  bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                  bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                  bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                  bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                  bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                  bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                  bVar38 = pbVar29[0x10] | (byte)lVar18;
                  bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                  bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                  bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                  bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                  bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                  bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                  bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                  auVar3[1] = bVar31;
                  auVar3[0] = bVar30;
                  auVar3[2] = bVar32;
                  auVar3[3] = bVar33;
                  auVar3[4] = bVar34;
                  auVar3[5] = bVar35;
                  auVar3[6] = bVar36;
                  auVar3[7] = bVar37;
                  auVar3[8] = bVar38;
                  auVar3[9] = bVar39;
                  auVar3[10] = bVar40;
                  auVar3[0xb] = bVar41;
                  auVar3[0xc] = bVar42;
                  auVar3[0xd] = bVar43;
                  auVar3[0xe] = bVar44;
                  auVar3[0xf] = bVar45;
                  auVar4[1] = bVar31;
                  auVar4[0] = bVar30;
                  auVar4[2] = bVar32;
                  auVar4[3] = bVar33;
                  auVar4[4] = bVar34;
                  auVar4[5] = bVar35;
                  auVar4[6] = bVar36;
                  auVar4[7] = bVar37;
                  auVar4[8] = bVar38;
                  auVar4[9] = bVar39;
                  auVar4[10] = bVar40;
                  auVar4[0xb] = bVar41;
                  auVar4[0xc] = bVar42;
                  auVar4[0xd] = bVar43;
                  auVar4[0xe] = bVar44;
                  auVar4[0xf] = bVar45;
                  auVar46 = NEON_ext(auVar3,auVar4,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
              lVar18 = *(long *)(pbVar29 + 0x20);
              lVar15 = *(long *)(pbVar29 + 0x18);
              bVar30 = pbVar29[8] | (byte)lVar15;
              bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
              bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
              bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
              bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
              bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
              bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
              bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
              bVar38 = pbVar29[0x10] | (byte)lVar18;
              bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
              bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
              bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
              bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
              bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
              bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
              bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
              auVar1[1] = bVar31;
              auVar1[0] = bVar30;
              auVar1[2] = bVar32;
              auVar1[3] = bVar33;
              auVar1[4] = bVar34;
              auVar1[5] = bVar35;
              auVar1[6] = bVar36;
              auVar1[7] = bVar37;
              auVar1[8] = bVar38;
              auVar1[9] = bVar39;
              auVar1[10] = bVar40;
              auVar1[0xb] = bVar41;
              auVar1[0xc] = bVar42;
              auVar1[0xd] = bVar43;
              auVar1[0xe] = bVar44;
              auVar1[0xf] = bVar45;
              auVar2[1] = bVar31;
              auVar2[0] = bVar30;
              auVar2[2] = bVar32;
              auVar2[3] = bVar33;
              auVar2[4] = bVar34;
              auVar2[5] = bVar35;
              auVar2[6] = bVar36;
              auVar2[7] = bVar37;
              auVar2[8] = bVar38;
              auVar2[9] = bVar39;
              auVar2[10] = bVar40;
              auVar2[0xb] = bVar41;
              auVar2[0xc] = bVar42;
              auVar2[0xd] = bVar43;
              auVar2[0xe] = bVar44;
              auVar2[0xf] = bVar45;
              auVar46 = NEON_ext(auVar1,auVar2,8,1);
              pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                         CONCAT16(bVar36 | auVar46[6],
                                                  CONCAT15(bVar35 | auVar46[5],
                                                           CONCAT14(bVar34 | auVar46[4],
                                                                    CONCAT13(bVar33 | auVar46[3],
                                                                             CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
              goto joined_r0x000100e26620;
            }
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 1036015c0; end: 10360165f;  */

/* WARNING: Possible PIC construction at 0x00010360160c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010360161c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103601610) */
/* WARNING: Removing unreachable block (ram,0x000103601620) */

void FUN_1036015c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7db90 != -1) {
    func_0x000107c61568(0x112f7db90,0x1036012d0);
  }
  uVar5 = uRam00000001138097b8;
  uVar4 = uRam00000001138097b0;
  uVar3 = uRam00000001138097a8;
  uVar2 = uRam00000001138097a0;
  uVar1 = uRam0000000113809798;
  *param_1 = uRam0000000113809790;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103601660; end: 10360169b;  */

void FUN_103601660(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7dc90;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7dc90,&UNK_10dbe7220);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10360169c; end: 1036017af;  */

void FUN_10360169c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036017b0; end: 1036017cf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1036017b0(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar20 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 == 0) {
      if (lVar20 == 0) goto SUB_100e25fcc;
    }
    else if (lVar18 == 1) {
      if (lVar20 == 1) {
SUB_100e25fcc:
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar5 = (uint)((ulong)pbVar27 >> 0x20);
        uVar19 = uVar5 >> 0x1e;
        uVar6 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar6 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar29 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar22 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar22 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          plVar9 = (long *)0x1;
        }
        else if (uVar5 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar21 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar21,iVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar7)();
            }
            uVar22 = (ulong)(iVar21 - iVar8);
          }
joined_r0x000100e26170:
          if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
            if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar7)();
            }
            goto code_r0x000100e2608c;
          }
          plVar9 = (long *)(ulong)(uVar22 == 0);
        }
        else {
          if (uVar19 == 2) {
            uVar22 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar7)();
            }
            goto joined_r0x000100e26170;
          }
          uVar22 = 0;
          if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
            if (uVar22 == uVar24) goto code_r0x000100e26094;
          }
          else {
            iVar21 = (int)((ulong)lVar15 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar15)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar15)) {
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
              if (uVar19 < 2) {
                if (uVar19 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                  pbVar29 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar29 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar29 = (byte *)0x0;
              }
              else {
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar18 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar29 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                }
                unaff_x23 = unaff_x24 + -lVar18;
                if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar27;
                if (pbVar10 == (byte *)0x0) {
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar29) {
                    pbVar29 = unaff_x23;
                  }
                  pbVar29 = pbVar29 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29,
                                  lVar15,uVar13);
              plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar13;
              goto code_r0x000100e262b0;
            }
          }
          plVar9 = (long *)0x0;
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          auVar46._8_8_ = pbVar29;
          auVar46._0_8_ = plVar9;
          return auVar46;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
        pbVar12 = (byte *)*plVar9;
        pbVar10 = (byte *)plVar9[1];
        pbVar25 = (byte *)plVar9[3];
        bVar30 = *(byte *)(plVar9 + 5);
        pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                          (ulong)*(byte *)(plVar9 + 2));
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar29[0x28] == 0) {
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              uVar13 = (ulong)((uint)pbVar12 & 1);
              goto code_r0x000100e266f0;
            }
            goto code_r0x000100e266ec;
          }
          if (bVar30 != 1) {
            if (pbVar29[0x28] == 2) {
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              pbVar26 = *(byte **)(pbVar29 + 0x18);
              if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
              if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (pbVar26 != (byte *)0x0) {
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(pbVar26);
                  func_0x000107c61174();
                  pbVar10 = pbVar25;
                  pbVar29 = pbVar26;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(pbVar26);
                  pbVar25 = pbVar10;
                  goto joined_r0x000100e266a4;
                }
              }
            }
            goto code_r0x000100e266ec;
          }
          if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
          pbVar16 = *(byte **)(pbVar29 + 8);
          pbVar17 = *(byte **)(pbVar29 + 0x10);
          pbVar29 = *(byte **)pbVar29;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,pbVar29,uVar11);
          if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
          pbVar12 = pbVar10;
          pbVar14 = pbVar27;
          if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar16,pbVar17,0);
            auVar48._8_8_ = pbVar14;
            auVar48._0_8_ = pbVar12;
            return auVar48;
          }
        }
        else {
          pbVar28 = (byte *)plVar9[4];
          if (4 < bVar30) {
            if (bVar30 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                if (pbVar29[0x28] == 6) {
                  lVar18 = *(long *)(pbVar29 + 0x20);
                  lVar15 = *(long *)(pbVar29 + 0x18);
                  bVar30 = pbVar29[8] | (byte)lVar15;
                  bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                  bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                  bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                  bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                  bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                  bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                  bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                  bVar38 = pbVar29[0x10] | (byte)lVar18;
                  bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                  bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                  bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                  bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                  bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                  bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                  bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
                  auVar3[1] = bVar31;
                  auVar3[0] = bVar30;
                  auVar3[2] = bVar32;
                  auVar3[3] = bVar33;
                  auVar3[4] = bVar34;
                  auVar3[5] = bVar35;
                  auVar3[6] = bVar36;
                  auVar3[7] = bVar37;
                  auVar3[8] = bVar38;
                  auVar3[9] = bVar39;
                  auVar3[10] = bVar40;
                  auVar3[0xb] = bVar41;
                  auVar3[0xc] = bVar42;
                  auVar3[0xd] = bVar43;
                  auVar3[0xe] = bVar44;
                  auVar3[0xf] = bVar45;
                  auVar4[1] = bVar31;
                  auVar4[0] = bVar30;
                  auVar4[2] = bVar32;
                  auVar4[3] = bVar33;
                  auVar4[4] = bVar34;
                  auVar4[5] = bVar35;
                  auVar4[6] = bVar36;
                  auVar4[7] = bVar37;
                  auVar4[8] = bVar38;
                  auVar4[9] = bVar39;
                  auVar4[10] = bVar40;
                  auVar4[0xb] = bVar41;
                  auVar4[0xc] = bVar42;
                  auVar4[0xd] = bVar43;
                  auVar4[0xe] = bVar44;
                  auVar4[0xf] = bVar45;
                  auVar46 = NEON_ext(auVar3,auVar4,8,1);
                  if (CONCAT17(bVar37 | auVar46[7],
                               CONCAT16(bVar36 | auVar46[6],
                                        CONCAT15(bVar35 | auVar46[5],
                                                 CONCAT14(bVar34 | auVar46[4],
                                                          CONCAT13(bVar33 | auVar46[3],
                                                                   CONCAT12(bVar32 | auVar46[2],
                                                                            CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                      *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                }
                goto code_r0x000100e266ec;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                  pbVar28 == (byte *)0x0)) {
                if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
              }
              else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
              lVar18 = *(long *)(pbVar29 + 0x20);
              lVar15 = *(long *)(pbVar29 + 0x18);
              bVar30 = pbVar29[8] | (byte)lVar15;
              bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
              bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
              bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
              bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
              bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
              bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
              bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
              bVar38 = pbVar29[0x10] | (byte)lVar18;
              bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
              bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
              bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
              bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
              bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
              bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
              bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
              auVar1[1] = bVar31;
              auVar1[0] = bVar30;
              auVar1[2] = bVar32;
              auVar1[3] = bVar33;
              auVar1[4] = bVar34;
              auVar1[5] = bVar35;
              auVar1[6] = bVar36;
              auVar1[7] = bVar37;
              auVar1[8] = bVar38;
              auVar1[9] = bVar39;
              auVar1[10] = bVar40;
              auVar1[0xb] = bVar41;
              auVar1[0xc] = bVar42;
              auVar1[0xd] = bVar43;
              auVar1[0xe] = bVar44;
              auVar1[0xf] = bVar45;
              auVar2[1] = bVar31;
              auVar2[0] = bVar30;
              auVar2[2] = bVar32;
              auVar2[3] = bVar33;
              auVar2[4] = bVar34;
              auVar2[5] = bVar35;
              auVar2[6] = bVar36;
              auVar2[7] = bVar37;
              auVar2[8] = bVar38;
              auVar2[9] = bVar39;
              auVar2[10] = bVar40;
              auVar2[0xb] = bVar41;
              auVar2[0xc] = bVar42;
              auVar2[0xd] = bVar43;
              auVar2[0xe] = bVar44;
              auVar2[0xf] = bVar45;
              auVar46 = NEON_ext(auVar1,auVar2,8,1);
              pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                         CONCAT16(bVar36 | auVar46[6],
                                                  CONCAT15(bVar35 | auVar46[5],
                                                           CONCAT14(bVar34 | auVar46[4],
                                                                    CONCAT13(bVar33 | auVar46[3],
                                                                             CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
              goto joined_r0x000100e26620;
            }
            if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
            lVar15 = *(long *)(pbVar29 + 8);
            uVar13 = *(ulong *)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
            unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
            unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
            unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
            unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
            unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
            unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
            unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
            register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
            goto SUB_100e25fcc;
          }
          if (bVar30 == 3) {
            if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
            goto code_r0x000100e266ec;
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar26 = *(byte **)(pbVar29 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)(pbVar29 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar27;
              if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
              if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
            }
            else {
              if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
              if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
              goto code_r0x000100e26708;
              func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
              pbVar29 = pbVar28;
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                uVar13 = 0;
code_r0x000100e266f0:
                auVar47._8_8_ = pbVar29;
                auVar47._0_8_ = uVar13;
                return auVar47;
              }
            }
          }
          else {
            if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)pbVar29;
            pbVar17 = *(byte **)(pbVar29 + 8);
            if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
               pbVar17 = *(byte **)(pbVar29 + 0x18),
               pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
            goto code_r0x000107c605b8;
          }
        }
code_r0x000100e26708:
        uVar13 = 1;
        goto code_r0x000100e266f0;
      }
    }
    else if (lVar20 == 2) goto SUB_100e25fcc;
  }
  else if (lVar20 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 1036017d0; end: 103601817;  */

void FUN_1036017d0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe72f0,0x1e,2);
  uRam00000001138097c8 = uStack_38;
  uRam00000001138097c0 = uStack_40;
  uRam00000001138097d8 = uStack_28;
  uRam00000001138097d0 = uStack_30;
  uRam00000001138097e8 = uStack_18;
  uRam00000001138097e0 = uStack_20;
  return;
}



/* Entry: 103601818; end: 1036018b7;  */

/* WARNING: Possible PIC construction at 0x000103601864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103601874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103601868) */
/* WARNING: Removing unreachable block (ram,0x000103601878) */

void FUN_103601818(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7dba8 != -1) {
    func_0x000107c61568(0x112f7dba8,FUN_1036017d0);
  }
  uVar5 = uRam00000001138097e8;
  uVar4 = uRam00000001138097e0;
  uVar3 = uRam00000001138097d8;
  uVar2 = uRam00000001138097d0;
  uVar1 = uRam00000001138097c8;
  *param_1 = uRam00000001138097c0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1036018b8; end: 1036018ff;  */

void FUN_1036018b8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe72c0,0x2a,2);
  uRam00000001138097f8 = uStack_38;
  uRam00000001138097f0 = uStack_40;
  uRam0000000113809808 = uStack_28;
  uRam0000000113809800 = uStack_30;
  uRam0000000113809818 = uStack_18;
  uRam0000000113809810 = uStack_20;
  return;
}



/* Entry: 103601900; end: 103601a03;  */

void FUN_103601900(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000103524e74();
LAB_103601988:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000103524e74();
          goto LAB_103601988;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010360349c();
          goto LAB_103601988;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103601a04; end: 103601acf;  */

void FUN_103601a04(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010360349c();
    (*pcVar2)(&lStack_50,1,&UNK_11066d2d8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103601ad0();
  if (unaff_x21 == 0) {
    FUN_103601b58();
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 103601ad0; end: 103601b57;  */

void FUN_103601ad0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x30);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,2,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103601b58; end: 103601bdf;  */

void FUN_103601b58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x48);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103524e74();
    (*pcVar1)(&uStack_60,3,&UNK_110790b80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103601be0; end: 103601c2f;  */

void FUN_103601be0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xf000000000000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  return;
}



/* Entry: 103601c30; end: 103601c5f;  */

undefined1  [16] FUN_103601c30(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103601c60; end: 103601c93;  */

void FUN_103601c60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103601c94; end: 103601ca7;  */

undefined1  [16] FUN_103601c94(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103601ca4;
  return auVar1;
}



/* Entry: 103601ca8; end: 103601cbb;  */

void FUN_103601ca8(void)

{
  FUN_103601900();
  return;
}



/* Entry: 103601cbc; end: 103601cfb;  */

void FUN_103601cbc(void)

{
  FUN_103601a04();
  return;
}



/* Entry: 103601cfc; end: 103601cff;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103601cfc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103601d00; end: 103601d37;  */

uint FUN_103601d00(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010360521c();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103601d38; end: 103601d8f;  */

uint FUN_103601d38(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103602f24(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103601d90; end: 103601e2f;  */

/* WARNING: Possible PIC construction at 0x000103601ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103601dec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103601de0) */
/* WARNING: Removing unreachable block (ram,0x000103601df0) */

void FUN_103601d90(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7dbb0 != -1) {
    func_0x000107c61568(0x112f7dbb0,FUN_1036018b8);
  }
  uVar5 = uRam0000000113809818;
  uVar4 = uRam0000000113809810;
  uVar3 = uRam0000000113809808;
  uVar2 = uRam0000000113809800;
  uVar1 = uRam00000001138097f8;
  *param_1 = uRam00000001138097f0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103601e30; end: 103601e6b;  */

void FUN_103601e30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7dc80;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7dc80,&UNK_10dbe7218);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103601e6c; end: 103601f7f;  */

void FUN_103601e6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103601f80; end: 10360201f;  */

uint FUN_103601f80(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103602f24(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103602020; end: 1036020bf;  */

/* WARNING: Possible PIC construction at 0x00010360206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010360207c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103602070) */
/* WARNING: Removing unreachable block (ram,0x000103602080) */

void FUN_103602020(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7dbc8 != -1) {
    func_0x000107c61568(0x112f7dbc8,0x103601fd8);
  }
  uVar5 = uRam0000000113809848;
  uVar4 = uRam0000000113809840;
  uVar3 = uRam0000000113809838;
  uVar2 = uRam0000000113809830;
  uVar1 = uRam0000000113809828;
  *param_1 = uRam0000000113809820;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 1036020c0; end: 103602107;  */

void FUN_1036020c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe7240,0x55,2);
  uRam0000000113809858 = uStack_38;
  uRam0000000113809850 = uStack_40;
  uRam0000000113809868 = uStack_28;
  uRam0000000113809860 = uStack_30;
  uRam0000000113809878 = uStack_18;
  uRam0000000113809870 = uStack_20;
  return;
}



/* Entry: 103602108; end: 10360222b;  */

/* WARNING: Removing unreachable block (ram,0x0001036021cc) */
/* WARNING: Removing unreachable block (ram,0x000103602228) */
/* WARNING: Removing unreachable block (ram,0x0001036021f8) */

void FUN_103602108(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          (*pcVar4)(unaff_x20 + 0x68,&UNK_110790a00,lVar1,param_2,param_3);
        }
        else if (lVar1 == 2) {
          (**(code **)(param_3 + 0x48))();
        }
      }
      else if (lVar1 == 3) {
        FUN_10360222c();
      }
      else if (lVar1 == 4) {
        FUN_103602424();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10360222c; end: 103602423;  */

/* WARNING: Removing unreachable block (ram,0x000103602370) */

void FUN_10360222c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_130 [80];
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0xf000000000000000;
  uVar7 = *(ulong *)(param_1 + 0x10);
  uVar6 = *(ulong *)(param_1 + 0x20);
  bVar1 = (uVar6 & 0x3000000000000000) == 0;
  bVar2 = uVar7 >> 1 == 0xffffffff;
  lVar3 = param_1;
  if (((uVar6 >> 0x3d & 1) == 0) && (!bVar1 || !bVar2)) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 8);
    uStack_b8 = *(undefined8 *)(param_1 + 0x30);
    uStack_c0 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_b0 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_e0 = uVar4;
    uStack_d8 = uVar7;
    uStack_d0 = uVar8;
    uStack_c8 = uVar6;
    func_0x000103602ebc(&uStack_e0,auStack_130);
    lVar3 = 0;
    FUN_10360529c(0,0,0,0xf000000000000000);
    uStack_80 = uVar7 & 0xff;
    uStack_88 = uVar4;
    uStack_78 = uVar8;
    uStack_70 = uVar6;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  FUN_103603dfc();
  (*pcVar5)(&uStack_88,&UNK_11066d128,lVar3,param_3,param_4);
  uVar7 = uStack_70;
  uVar8 = uStack_78;
  uVar6 = uStack_80;
  uVar4 = uStack_88;
  if ((unaff_x21 == 0) && (uStack_70 >> 0x3c < 0xf)) {
    if (bVar1 && bVar2) {
      func_0x00010006c00c(uStack_78,uStack_70);
    }
    else {
      pcVar5 = *(code **)(param_4 + 8);
      func_0x00010006c00c(uStack_78,uStack_70);
      (*pcVar5)(param_3,param_4);
    }
    FUN_10360529c(uStack_88,uStack_80,uStack_78,uStack_70);
    uStack_c8 = *(undefined8 *)(param_1 + 0x20);
    uStack_d0 = *(undefined8 *)(param_1 + 0x18);
    uStack_b8 = *(undefined8 *)(param_1 + 0x30);
    uStack_c0 = *(undefined8 *)(param_1 + 0x28);
    uStack_a8 = *(undefined8 *)(param_1 + 0x40);
    uStack_b0 = *(undefined8 *)(param_1 + 0x38);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_d8 = *(undefined8 *)(param_1 + 0x10);
    uStack_e0 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *(ulong *)(param_1 + 0x10) = uVar6 & 1;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    *(ulong *)(param_1 + 0x20) = uVar7 & 0xcfffffffffffffff;
    FUN_1036052b8(&uStack_e0,0x112f7db88,&UNK_10dbe6c20);
  }
  else {
    FUN_10360529c(uStack_88,uStack_80,uStack_78,uStack_70);
  }
  return;
}



/* Entry: 103602424; end: 10360276f;  */

/* WARNING: Removing unreachable block (ram,0x00010360268c) */

void FUN_103602424(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x21;
  code *pcVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1b0 [80];
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0xf000000000000000;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uVar14 = param_1[2];
  uVar11 = param_1[4];
  bVar6 = (uVar11 & 0x3000000000000000) != 0;
  bVar7 = uVar14 >> 1 != 0xffffffff;
  puVar8 = param_1;
  if (((uVar11 >> 0x3d & 1) != 0) && (bVar6 || bVar7)) {
    uVar9 = param_1[9];
    uVar3 = param_1[10];
    uVar1 = param_1[7];
    uVar4 = param_1[8];
    uVar2 = param_1[5];
    uVar5 = param_1[6];
    uVar15 = param_1[3];
    uVar12 = param_1[1];
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0xf000000000000000;
    uStack_150 = 0;
    uStack_110 = uVar12;
    uStack_108 = uVar14;
    uStack_100 = uVar15;
    uStack_f8 = uVar11;
    uStack_f0 = uVar2;
    uStack_e8 = uVar5;
    uStack_e0 = uVar1;
    uStack_d8 = uVar4;
    uStack_d0 = uVar9;
    uStack_c8 = uVar3;
    func_0x000103602ebc(&uStack_110,auStack_1b0);
    puVar8 = &uStack_160;
    FUN_1036052b8(puVar8,0x112f7dca8,&UNK_10dbe7230);
    uStack_b8 = uVar12;
    uStack_b0 = uVar14;
    uStack_a8 = uVar15;
    uStack_a0 = uVar11 & 0xdfffffffffffffff;
    uStack_98 = uVar2;
    uStack_90 = uVar5;
    uStack_88 = uVar1;
    uStack_80 = uVar4;
    uStack_78 = uVar9;
    uStack_70 = uVar3;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  FUN_103603ef8();
  (*pcVar13)(&uStack_b8,&UNK_11066d238,puVar8,param_3,param_4);
  uVar15 = uStack_70;
  uVar12 = uStack_78;
  uVar5 = uStack_80;
  uVar4 = uStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar14 = uStack_a0;
  uVar1 = uStack_a8;
  uVar11 = uStack_b0;
  uVar9 = uStack_b8;
  if (unaff_x21 == 0) {
    uStack_108 = uStack_b0;
    uStack_110 = uStack_b8;
    uStack_f8 = uStack_a0;
    uStack_100 = uStack_a8;
    uStack_d8 = uStack_80;
    uStack_e0 = uStack_88;
    uStack_c8 = uStack_70;
    uStack_d0 = uStack_78;
    uStack_e8 = uStack_90;
    uStack_f0 = uStack_98;
    if (uStack_a0 >> 0x3c < 0xf) {
      if (bVar6 || bVar7) {
        pcVar13 = *(code **)(param_4 + 8);
        uStack_138 = uStack_90;
        uStack_140 = uStack_98;
        uStack_128 = uStack_80;
        uStack_130 = uStack_88;
        uStack_118 = uStack_70;
        uStack_120 = uStack_78;
        uStack_158 = uStack_b0;
        uStack_160 = uStack_b8;
        uStack_148 = uStack_a0;
        uStack_150 = uStack_a8;
        func_0x000103602ef0(&uStack_160,auStack_1b0);
        (*pcVar13)(param_3,param_4);
      }
      else {
        uStack_138 = uStack_90;
        uStack_140 = uStack_98;
        uStack_128 = uStack_80;
        uStack_130 = uStack_88;
        uStack_118 = uStack_70;
        uStack_120 = uStack_78;
        uStack_158 = uStack_b0;
        uStack_160 = uStack_b8;
        uStack_148 = uStack_a0;
        uStack_150 = uStack_a8;
        func_0x000103602ef0(&uStack_160,auStack_1b0);
      }
      auVar18._8_8_ = uVar15;
      auVar18._0_8_ = uVar12;
      auVar18 = NEON_ext(auVar18,auVar18,8,1);
      auVar16._8_8_ = uVar5;
      auVar16._0_8_ = uVar4;
      auVar16 = NEON_ext(auVar16,auVar16,8,1);
      auVar17._8_8_ = uVar3;
      auVar17._0_8_ = uVar2;
      auVar17 = NEON_ext(auVar17,auVar17,8,1);
      FUN_1036052b8(&uStack_b8,0x112f7dca8,&UNK_10dbe7230);
      uStack_150 = param_1[3];
      uStack_148 = param_1[4];
      uStack_140 = param_1[5];
      uStack_138 = param_1[6];
      uStack_128 = param_1[8];
      uStack_130 = param_1[7];
      uStack_120 = param_1[9];
      uStack_118 = param_1[10];
      uStack_160 = param_1[1];
      uStack_158 = param_1[2];
      param_1[1] = uVar9;
      param_1[2] = uVar11 & 1;
      param_1[3] = uVar1;
      param_1[4] = uVar14 & 0xcfffffffffffffff | 0x2000000000000000;
      param_1[6] = auVar17._0_8_;
      param_1[5] = uVar2;
      param_1[8] = auVar16._0_8_;
      param_1[7] = uVar4;
      param_1[10] = auVar18._0_8_;
      param_1[9] = uVar12;
      uVar9 = 0x112f7db88;
      puVar10 = &UNK_10dbe6c20;
      puVar8 = &uStack_160;
      goto LAB_1036025cc;
    }
  }
  uVar9 = 0x112f7dca8;
  puVar10 = &UNK_10dbe7230;
  puVar8 = &uStack_b8;
LAB_1036025cc:
  FUN_1036052b8(puVar8,uVar9,puVar10);
  return;
}



/* Entry: 103602770; end: 10360282f;  */

void FUN_103602770(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  FUN_103602830();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x18))(*unaff_x20,2,param_2,param_3);
    }
    if (*(ulong *)(unaff_x20 + 4) >> 1 != 0xffffffff ||
        (*(ulong *)(unaff_x20 + 8) & 0x3000000000000000) != 0) {
      if ((*(ulong *)(unaff_x20 + 8) >> 0x3d & 1) == 0) {
        FUN_1036028b8();
      }
      else {
        FUN_10360295c();
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x16),*(undefined8 *)(unaff_x20 + 0x18),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103602830; end: 1036028b7;  */

void FUN_103602830(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x78);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,1,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036028b8; end: 10360295b;  */

void FUN_1036028b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x10);
  uStack_48 = *(ulong *)(param_1 + 0x20);
  if (((uStack_48 >> 0x3d & 1) == 0) &&
     ((uStack_48 & 0x3000000000000000) != 0 || uStack_58 >> 1 != 0xffffffff)) {
    uStack_50 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103603dfc();
    (*pcVar1)(&uStack_60,3,&UNK_11066d128,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10360295c);
  (*pcVar1)();
}



/* Entry: 10360295c; end: 103602a17;  */

void FUN_10360295c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_88 = *(ulong *)(param_1 + 0x10);
  uStack_78 = *(ulong *)(param_1 + 0x20);
  if (((uStack_78 >> 0x3d & 1) != 0) &&
     ((uStack_78 & 0x3000000000000000) != 0 || uStack_88 >> 1 != 0xffffffff)) {
    uStack_80 = *(undefined8 *)(param_1 + 0x18);
    uStack_90 = *(undefined8 *)(param_1 + 8);
    uStack_78 = uStack_78 & 0xdfffffffffffffff;
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103603ef8();
    (*pcVar1)(&uStack_90,4,&UNK_11066d238,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103602a18);
  (*pcVar1)();
}



/* Entry: 103602a18; end: 103602a7b;  */

uint FUN_103602a18(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_370 [80];
  long lStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uVar2;
  
  uVar10 = *(ulong *)(param_1 + 0x1c);
  lVar8 = *(long *)(param_1 + 0x1a);
  uVar6 = *(ulong *)(param_1 + 0x1e);
  uVar11 = *(ulong *)(param_2 + 0x1c);
  lVar9 = *(long *)(param_2 + 0x1a);
  uVar7 = *(ulong *)(param_2 + 0x1e);
  lStack_f0 = lVar9;
  uStack_e8 = uVar11;
  uStack_e0 = uVar7;
  lStack_d0 = lVar8;
  uStack_c8 = uVar10;
  uStack_c0 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_103603710;
    if (lVar8 == lVar9) {
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      uVar3 = uVar10;
      func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar7);
      func_0x000100d56568(lVar8,uVar11,uVar7);
      if ((uVar3 & 1) != 0) goto LAB_1036035bc;
    }
    else {
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      func_0x000100d56568(lVar9,uVar11,uVar7);
    }
LAB_10360382c:
    func_0x000100d56568(lVar8,uVar10,uVar6);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_103603710:
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      func_0x000100d56568(lVar8,uVar10,uVar6);
      lVar8 = lVar9;
      uVar10 = uVar11;
      uVar6 = uVar7;
      goto LAB_10360382c;
    }
    FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
    FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
LAB_1036035bc:
    func_0x000100d56568(lVar8,uVar10,uVar6);
    if (*param_1 == *param_2) {
      uStack_128 = *(undefined8 *)(param_1 + 8);
      uStack_130 = *(undefined8 *)(param_1 + 6);
      uStack_118 = *(undefined8 *)(param_1 + 0xc);
      uStack_120 = *(undefined8 *)(param_1 + 10);
      uStack_108 = *(undefined8 *)(param_1 + 0x10);
      uStack_110 = *(undefined8 *)(param_1 + 0xe);
      uStack_f8 = *(undefined8 *)(param_1 + 0x14);
      uStack_100 = *(undefined8 *)(param_1 + 0x12);
      uStack_138 = *(undefined8 *)(param_1 + 4);
      uStack_140 = *(undefined8 *)(param_1 + 2);
      uStack_178 = *(undefined8 *)(param_2 + 8);
      uStack_180 = *(undefined8 *)(param_2 + 6);
      uStack_168 = *(undefined8 *)(param_2 + 0xc);
      uStack_170 = *(undefined8 *)(param_2 + 10);
      uStack_158 = *(undefined8 *)(param_2 + 0x10);
      uStack_160 = *(undefined8 *)(param_2 + 0xe);
      uStack_148 = *(undefined8 *)(param_2 + 0x14);
      uStack_150 = *(undefined8 *)(param_2 + 0x12);
      uStack_188 = *(undefined8 *)(param_2 + 4);
      uStack_190 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(ulong *)(param_1 + 8);
      uVar10 = *(ulong *)(param_1 + 6);
      uStack_208 = *(undefined8 *)(param_1 + 0xc);
      uStack_210 = *(undefined8 *)(param_1 + 10);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x10);
      uStack_200 = *(undefined8 *)(param_1 + 0xe);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x14);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x12);
      uStack_228 = *(ulong *)(param_1 + 4);
      lStack_230 = *(long *)(param_1 + 2);
      uStack_1c8 = *(ulong *)(param_2 + 8);
      uStack_1d0 = *(undefined8 *)(param_2 + 6);
      uStack_1b8 = *(undefined8 *)(param_2 + 0xc);
      uStack_1c0 = *(undefined8 *)(param_2 + 10);
      uStack_1a8 = *(undefined8 *)(param_2 + 0x10);
      uStack_1b0 = *(undefined8 *)(param_2 + 0xe);
      uStack_198 = *(undefined8 *)(param_2 + 0x14);
      uStack_1a0 = *(undefined8 *)(param_2 + 0x12);
      uStack_1d8 = *(ulong *)(param_2 + 4);
      uStack_1e0 = *(undefined8 *)(param_2 + 2);
      uStack_220 = uVar10;
      uStack_218 = uVar6;
      if ((uStack_228 >> 1 == 0xffffffff) && ((uVar6 & 0x3000000000000000) == 0)) {
        if ((uStack_1d8 >> 1 == 0xffffffff) && ((uStack_1c8 & 0x3000000000000000) == 0)) {
          uStack_2b8 = *(ulong *)(param_1 + 8);
          uStack_2c0 = *(ulong *)(param_1 + 6);
          uStack_2a8 = *(undefined8 *)(param_1 + 0xc);
          uStack_2b0 = *(undefined8 *)(param_1 + 10);
          uStack_298 = *(undefined8 *)(param_1 + 0x10);
          uStack_2a0 = *(undefined8 *)(param_1 + 0xe);
          uStack_288 = *(undefined8 *)(param_1 + 0x14);
          uStack_290 = *(undefined8 *)(param_1 + 0x12);
          uStack_2c8 = *(ulong *)(param_1 + 4);
          lStack_2d0 = *(long *)(param_1 + 2);
          FUN_103602e74(&uStack_140,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
          plVar4 = &lStack_2d0;
LAB_1036036f4:
          FUN_1036052b8(plVar4,0x112f7db88,&UNK_10dbe6c20);
LAB_1036036f8:
          uVar2 = *(undefined8 *)(param_1 + 0x16);
          func_0x000100e25fcc(uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x16),
                              *(undefined8 *)(param_2 + 0x18));
          uVar1 = (uint)uVar2;
          goto LAB_103603834;
        }
LAB_103603884:
        lStack_2d0 = lStack_230;
        uStack_2c8 = uStack_228;
        uStack_2c0 = uVar10;
        uStack_2b8 = uVar6;
        uStack_2b0 = uStack_210;
        uStack_2a8 = uStack_208;
        uStack_2a0 = uStack_200;
        uStack_298 = uStack_1f8;
        uStack_290 = uStack_1f0;
        uStack_288 = uStack_1e8;
        uStack_280 = uStack_1e0;
        uStack_278 = uStack_1d8;
        uStack_270 = uStack_1d0;
        uStack_268 = uStack_1c8;
        uStack_260 = uStack_1c0;
        uStack_258 = uStack_1b8;
        uStack_250 = uStack_1b0;
        uStack_248 = uStack_1a8;
        uStack_240 = uStack_1a0;
        uStack_238 = uStack_198;
        FUN_103602e74(&uStack_140,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
        FUN_103602e74(&uStack_190,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
        uVar2 = 0x112f7dca0;
        puVar5 = &UNK_10dbe7228;
        plVar4 = &lStack_2d0;
      }
      else {
        if ((uStack_1d8 >> 1 == 0xffffffff) && ((uStack_1c8 & 0x3000000000000000) == 0))
        goto LAB_103603884;
        uStack_318 = *(ulong *)(param_2 + 4);
        lStack_320 = *(long *)(param_2 + 2);
        uVar11 = *(ulong *)(param_2 + 8);
        uVar7 = *(ulong *)(param_2 + 6);
        uStack_2f8 = *(undefined8 *)(param_2 + 0xc);
        uStack_300 = *(undefined8 *)(param_2 + 10);
        uStack_2e8 = *(undefined8 *)(param_2 + 0x10);
        uStack_2f0 = *(undefined8 *)(param_2 + 0xe);
        uStack_2d8 = *(undefined8 *)(param_2 + 0x14);
        uStack_2e0 = *(undefined8 *)(param_2 + 0x12);
        uStack_310 = uVar7;
        uStack_308 = uVar11;
        if ((uVar6 >> 0x3d & 1) == 0) {
          if ((uVar11 >> 0x3d & 1) != 0) goto LAB_103603970;
          if ((uStack_318 & 0xff) == 1) {
            if (lStack_320 == 0) {
              if (lStack_230 != 0) goto LAB_103603970;
            }
            else if (lStack_320 == 1) {
              if (lStack_230 != 1) goto LAB_103603970;
            }
            else if (lStack_230 != 2) goto LAB_103603970;
          }
          else if (lStack_230 != lStack_320) goto LAB_103603970;
          FUN_103602e74(&uStack_140,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          func_0x000100e25fcc(uVar10,uVar6,uVar7,uVar11);
          FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
          if ((uVar10 & 1) != 0) {
            plVar4 = &lStack_230;
            goto LAB_1036036f4;
          }
        }
        else {
          uStack_98 = uVar6 & 0xdfffffffffffffff;
          lStack_b0 = lStack_230;
          uStack_a8 = uStack_228;
          uStack_a0 = uVar10;
          uStack_90 = uStack_210;
          uStack_88 = uStack_208;
          uStack_80 = uStack_200;
          uStack_78 = uStack_1f8;
          uStack_70 = uStack_1f0;
          uStack_68 = uStack_1e8;
          if ((uVar11 >> 0x3d & 1) != 0) {
            uStack_2b8 = uVar11 & 0xdfffffffffffffff;
            lStack_2d0 = lStack_320;
            uStack_2c8 = uStack_318;
            uStack_2c0 = uVar7;
            uStack_2b0 = uStack_300;
            uStack_2a8 = uStack_2f8;
            uStack_2a0 = uStack_2f0;
            uStack_298 = uStack_2e8;
            uStack_290 = uStack_2e0;
            uStack_288 = uStack_2d8;
            FUN_103602e74(&uStack_140,auStack_370,0x112f7db88,&UNK_10dbe6c20);
            FUN_103602e74(&uStack_190,auStack_370,0x112f7db88,&UNK_10dbe6c20);
            plVar4 = &lStack_b0;
            FUN_103602f24(plVar4,&lStack_2d0);
            FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
            FUN_1036052b8(&lStack_230,0x112f7db88,&UNK_10dbe6c20);
            if (((ulong)plVar4 & 1) == 0) goto LAB_103603830;
            goto LAB_1036036f8;
          }
LAB_103603970:
          FUN_103602e74(&uStack_140,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
        }
        uVar2 = 0x112f7db88;
        puVar5 = &UNK_10dbe6c20;
        plVar4 = &lStack_230;
      }
      FUN_1036052b8(plVar4,uVar2,puVar5);
    }
  }
LAB_103603830:
  uVar1 = 0;
LAB_103603834:
  return uVar1 & 1;
}



/* Entry: 103602a7c; end: 103602aab;  */

undefined1  [16] FUN_103602a7c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 103602aac; end: 103602adf;  */

void FUN_103602aac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 103602ae0; end: 103602af3;  */

undefined1  [16] FUN_103602ae0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x103602af0;
  return auVar1;
}



/* Entry: 103602af4; end: 103602b07;  */

void FUN_103602af4(void)

{
  FUN_103602108();
  return;
}



/* Entry: 103602b08; end: 103602b4f;  */

void FUN_103602b08(void)

{
  FUN_103602770();
  return;
}



/* Entry: 103602b50; end: 103602b53;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103602b50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 103602b54; end: 103602b8b;  */

uint FUN_103602b54(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_1036051dc();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 103602b8c; end: 103602bfb;  */

uint FUN_103602b8c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_28 = param_1[0xf];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  FUN_10360351c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103602bfc; end: 103602c9b;  */

/* WARNING: Possible PIC construction at 0x000103602c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103602c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103602c4c) */
/* WARNING: Removing unreachable block (ram,0x000103602c5c) */

void FUN_103602bfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7dbd0 != -1) {
    func_0x000107c61568(0x112f7dbd0,FUN_1036020c0);
  }
  uVar5 = uRam0000000113809878;
  uVar4 = uRam0000000113809870;
  uVar3 = uRam0000000113809868;
  uVar2 = uRam0000000113809860;
  uVar1 = uRam0000000113809858;
  *param_1 = uRam0000000113809850;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 103602c9c; end: 103602cd7;  */

void FUN_103602c9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7dc70;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7dc70,&UNK_10dbe7210);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103602cd8; end: 103602e03;  */

void FUN_103602cd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103602e04; end: 103602e73;  */

uint FUN_103602e04(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  FUN_10360351c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103602e74; end: 103602f23;  */

undefined8 FUN_103602e74(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103602f24; end: 1036032cf;  */

uint FUN_103602f24(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long alStack_f8 [3];
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else if (lVar6 == 1) {
      if (lVar5 != 1) {
        return 0;
      }
    }
    else if (lVar5 != 2) {
      return 0;
    }
  }
  else if (lVar5 != lVar6) {
    return 0;
  }
  uVar11 = param_1[5];
  lVar5 = param_1[4];
  uVar7 = param_1[6];
  uVar12 = param_2[5];
  lVar6 = param_2[4];
  uVar10 = param_2[6];
  lStack_a0 = lVar6;
  uStack_98 = uVar12;
  uStack_90 = uVar10;
  lStack_80 = lVar5;
  uStack_78 = uVar11;
  uStack_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1036030ac;
    if ((int)lVar5 == (int)lVar6) {
      FUN_103602e74(&lStack_80,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
      FUN_103602e74(&lStack_a0,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar7,uVar12,uVar10);
      func_0x000100d56568(lVar6,uVar12,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_103602ff8;
    }
    else {
      FUN_103602e74(&lStack_80,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
      plVar3 = &lStack_a0;
      plVar4 = &lStack_c0;
LAB_10360327c:
      FUN_103602e74(plVar3,plVar4,0x112f75e88,&UNK_10dbe41c0);
      func_0x000100d56568(lVar6,uVar12,uVar10);
    }
  }
  else {
    if (0xe < uVar10 >> 0x3c) {
      FUN_103602e74(&lStack_80,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
      FUN_103602e74(&lStack_a0,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
LAB_103602ff8:
      func_0x000100d56568(lVar5,uVar11,uVar7);
      uVar11 = param_1[8];
      lVar5 = param_1[7];
      uVar7 = param_1[9];
      uVar12 = param_2[8];
      lVar6 = param_2[7];
      uVar10 = param_2[9];
      lStack_e0 = lVar6;
      uStack_d8 = uVar12;
      uStack_d0 = uVar10;
      lStack_c0 = lVar5;
      uStack_b8 = uVar11;
      uStack_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_103603178;
        if ((int)lVar5 != (int)lVar6) {
          FUN_103602e74(&lStack_c0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_e0;
          plVar4 = alStack_f8;
          goto LAB_10360327c;
        }
        FUN_103602e74(&lStack_c0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
        FUN_103602e74(&lStack_e0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar7,uVar12,uVar10);
        func_0x000100d56568(lVar6,uVar12,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1036032a4;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_103603178:
          FUN_103602e74(&lStack_c0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
          plVar3 = &lStack_e0;
          plVar4 = alStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar11;
          lVar9 = lVar5;
          uVar7 = uVar10;
          uVar11 = uVar12;
          lVar5 = lVar6;
          goto LAB_1036031a4;
        }
        FUN_103602e74(&lStack_c0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
        FUN_103602e74(&lStack_e0,alStack_f8,0x112f75e88,&UNK_10dbe41c0);
      }
      func_0x000100d56568(lVar5,uVar11,uVar7);
      lVar5 = param_1[2];
      func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar5;
      goto LAB_1036032ac;
    }
LAB_1036030ac:
    FUN_103602e74(&lStack_80,&lStack_c0,0x112f75e88,&UNK_10dbe41c0);
    plVar3 = &lStack_a0;
    plVar4 = &lStack_c0;
    uVar2 = uVar7;
    uVar8 = uVar11;
    lVar9 = lVar5;
    uVar7 = uVar10;
    uVar11 = uVar12;
    lVar5 = lVar6;
LAB_1036031a4:
    FUN_103602e74(plVar3,plVar4,0x112f75e88,&UNK_10dbe41c0);
    func_0x000100d56568(lVar9,uVar8,uVar2);
  }
LAB_1036032a4:
  func_0x000100d56568(lVar5,uVar11,uVar7);
  uVar1 = 0;
LAB_1036032ac:
  return uVar1 & 1;
}



/* Entry: 1036032d0; end: 1036033c3;  */

uint FUN_1036032d0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  ulong uStack_50;
  ulong uStack_48;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  long lStack_20;
  long lStack_18;
  
  lStack_60 = *param_1;
  uStack_50 = param_1[2];
  uStack_48 = param_1[3];
  if ((uStack_48 >> 0x3d & 1) == 0) {
    if (((ulong)param_2[3] >> 0x3d & 1) == 0) {
      lVar3 = *param_2;
      if ((char)param_2[1] == '\x01') {
        if (lVar3 == 0) {
          if (lStack_60 == 0) goto LAB_1036033b4;
        }
        else if (lVar3 == 1) {
          if (lStack_60 == 1) {
LAB_1036033b4:
            func_0x000100e25fcc(uStack_50,uStack_48,param_2[2]);
            if ((uStack_50 & 1) != 0) {
              uVar1 = 1;
              goto LAB_103603388;
            }
          }
        }
        else if (lStack_60 == 2) goto LAB_1036033b4;
      }
      else if (lStack_60 == lVar3) goto LAB_1036033b4;
    }
  }
  else {
    lStack_58 = param_1[1];
    uStack_48 = uStack_48 & 0xdfffffffffffffff;
    lStack_38 = param_1[5];
    lStack_40 = param_1[4];
    lStack_28 = param_1[7];
    lStack_30 = param_1[6];
    lStack_18 = param_1[9];
    lStack_20 = param_1[8];
    if (((ulong)param_2[3] >> 0x3d & 1) != 0) {
      lStack_a0 = param_2[2];
      uStack_98 = param_2[3] & 0xdfffffffffffffff;
      lStack_a8 = param_2[1];
      lStack_b0 = *param_2;
      lStack_88 = param_2[5];
      lStack_90 = param_2[4];
      lStack_78 = param_2[7];
      lStack_80 = param_2[6];
      lStack_68 = param_2[9];
      lStack_70 = param_2[8];
      plVar2 = &lStack_60;
      FUN_103602f24(plVar2,&lStack_b0);
      uVar1 = (uint)plVar2;
      goto LAB_103603388;
    }
  }
  uVar1 = 0;
LAB_103603388:
  return uVar1 & 1;
}



/* Entry: 1036033c4; end: 10360341b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1036033c4(long param_1,undefined8 param_2,byte *param_3,byte *param_4,long param_5,
                    char param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if (param_6 == '\x01') {
    if (param_5 == 0) {
      if (param_1 == 0) goto SUB_100e25fcc;
    }
    else if (param_5 == 1) {
      if (param_1 == 1) {
SUB_100e25fcc:
        do {
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)param_4 >> 0x20);
          uVar15 = uVar4 >> 0x1e;
          uVar5 = (uint)(param_8 >> 0x20);
          uVar18 = uVar5 >> 0x1e;
          iVar7 = (int)param_3;
          pbVar11 = param_4;
          if ((ulong)param_4 >> 0x3e == 3) {
            uVar17 = 0;
            if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                (param_8 >> 0x3e < 3)) ||
               ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar8 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = (ulong)param_4 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)((ulong)param_3 >> 0x20);
              if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar17 = (ulong)(iVar16 - iVar7);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar18 == 0) {
              uVar19 = param_8 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar16 = (int)((ulong)param_7 >> 0x20);
            if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar8 = (byte *)0x0;
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
              if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar17 = 0;
            if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar18 == 2) {
              uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
              if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar17 < 1) goto code_r0x000100e26128;
              if (uVar15 < 2) {
                if (uVar15 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                  pbVar11 = (byte *)((long)register0x00000008 +
                                    (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar7;
                unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = param_4;
                if (param_3 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  param_3 = (byte *)0x0;
                }
                else {
                  pbVar11 = param_3;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  if (param_3 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar11 = (byte *)0x0;
              }
              else {
                if (uVar15 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar21 = *(long *)(param_3 + 0x10);
                unaff_x24 = *(byte **)(param_3 + 0x18);
                func_0x000107c5ec30();
                pbVar11 = param_3;
                if (param_3 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  param_3 = param_3 + (lVar21 - (long)pbVar11);
                }
                unaff_x23 = unaff_x24 + -lVar21;
                if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = param_3;
                unaff_x25 = param_4;
                if (param_3 == (byte *)0x0) {
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar11) {
                    pbVar11 = unaff_x23;
                  }
                  pbVar11 = pbVar11 + (long)param_3;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,
                                  param_7,param_8);
              pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = param_8;
            }
            else {
              pbVar8 = (byte *)(ulong)(uVar17 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar8;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar10 = *(byte **)pbVar8;
          param_3 = *(byte **)(pbVar8 + 8);
          pbVar20 = *(byte **)(pbVar8 + 0x18);
          bVar23 = pbVar8[0x28];
          param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
          pbVar12 = param_3;
          if (bVar23 < 3) {
            if (bVar23 == 0) {
              if (pbVar11[0x28] == 0) {
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                return (byte *)(ulong)((uint)pbVar10 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar23 == 1) {
              if (pbVar11[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)pbVar11;
              uVar9 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar21,uVar9);
              if (((ulong)pbVar10 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar11[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              lVar21 = *(long *)(pbVar11 + 0x18);
              if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar21);
                func_0x000107c61174();
                pbVar11 = pbVar20;
                func_0x000107c60118();
                func_0x000107c61170(pbVar20);
                func_0x000107c61170(lVar21);
                pbVar20 = pbVar11;
joined_r0x000100e266a4:
                if (((ulong)pbVar20 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar10,pbVar12,pbVar13,pbVar14,0);
            return pbVar10;
          }
          lVar22 = *(long *)(pbVar8 + 0x20);
          if (bVar23 < 5) {
            if (bVar23 != 3) {
              if (pbVar11[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)pbVar11;
              pbVar14 = *(byte **)(pbVar11 + 8);
              if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                 (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                 pbVar14 = *(byte **)(pbVar11 + 0x18),
                 param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar11[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar11 + 0x10);
            lVar21 = *(long *)(pbVar11 + 0x20);
            if (param_4 == (byte *)0x0) {
              if (pbVar14 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar14 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar11 + 8);
              pbVar10 = param_3;
              pbVar12 = param_4;
              if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar21 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar21 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar23 != 5) {
            if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                lVar22 == 0) && param_4 == (byte *)0x0) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar39[1] = bVar24;
              auVar39[0] = bVar23;
              auVar39[2] = bVar25;
              auVar39[3] = bVar26;
              auVar39[4] = bVar27;
              auVar39[5] = bVar28;
              auVar39[6] = bVar29;
              auVar39[7] = bVar30;
              auVar39[8] = bVar31;
              auVar39[9] = bVar32;
              auVar39[10] = bVar33;
              auVar39[0xb] = bVar34;
              auVar39[0xc] = bVar35;
              auVar39[0xd] = bVar36;
              auVar39[0xe] = bVar37;
              auVar39[0xf] = bVar38;
              auVar3[1] = bVar24;
              auVar3[0] = bVar23;
              auVar3[2] = bVar25;
              auVar3[3] = bVar26;
              auVar3[4] = bVar27;
              auVar3[5] = bVar28;
              auVar3[6] = bVar29;
              auVar3[7] = bVar30;
              auVar3[8] = bVar31;
              auVar3[9] = bVar32;
              auVar3[10] = bVar33;
              auVar3[0xb] = bVar34;
              auVar3[0xc] = bVar35;
              auVar3[0xd] = bVar36;
              auVar3[0xe] = bVar37;
              auVar3[0xf] = bVar38;
              auVar39 = NEON_ext(auVar39,auVar3,8,1);
              if (CONCAT17(bVar30 | auVar39[7],
                           CONCAT16(bVar29 | auVar39[6],
                                    CONCAT15(bVar28 | auVar39[5],
                                             CONCAT14(bVar27 | auVar39[4],
                                                      CONCAT13(bVar26 | auVar39[3],
                                                               CONCAT12(bVar25 | auVar39[2],
                                                                        CONCAT11(bVar24 | auVar39[1]
                                                                                 ,bVar23 | auVar39[0
                                                  ]))))))) == 0 && *(long *)pbVar11 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar10 == (byte *)0x1) &&
               (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar11[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar11 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar11 + 0x20);
            lVar21 = *(long *)(pbVar11 + 0x18);
            bVar23 = pbVar11[8] | (byte)lVar21;
            bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
            bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
            bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
            bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
            bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
            bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
            bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
            bVar31 = pbVar11[0x10] | (byte)lVar22;
            bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar24;
            auVar1[0] = bVar23;
            auVar1[2] = bVar25;
            auVar1[3] = bVar26;
            auVar1[4] = bVar27;
            auVar1[5] = bVar28;
            auVar1[6] = bVar29;
            auVar1[7] = bVar30;
            auVar1[8] = bVar31;
            auVar1[9] = bVar32;
            auVar1[10] = bVar33;
            auVar1[0xb] = bVar34;
            auVar1[0xc] = bVar35;
            auVar1[0xd] = bVar36;
            auVar1[0xe] = bVar37;
            auVar1[0xf] = bVar38;
            auVar2[1] = bVar24;
            auVar2[0] = bVar23;
            auVar2[2] = bVar25;
            auVar2[3] = bVar26;
            auVar2[4] = bVar27;
            auVar2[5] = bVar28;
            auVar2[6] = bVar29;
            auVar2[7] = bVar30;
            auVar2[8] = bVar31;
            auVar2[9] = bVar32;
            auVar2[10] = bVar33;
            auVar2[0xb] = bVar34;
            auVar2[0xc] = bVar35;
            auVar2[0xd] = bVar36;
            auVar2[0xe] = bVar37;
            auVar2[0xf] = bVar38;
            auVar39 = NEON_ext(auVar1,auVar2,8,1);
            lVar21 = CONCAT17(bVar30 | auVar39[7],
                              CONCAT16(bVar29 | auVar39[6],
                                       CONCAT15(bVar28 | auVar39[5],
                                                CONCAT14(bVar27 | auVar39[4],
                                                         CONCAT13(bVar26 | auVar39[3],
                                                                  CONCAT12(bVar25 | auVar39[2],
                                                                           CONCAT11(bVar24 | auVar39
                                                  [1],bVar23 | auVar39[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar11[0x28] != 5) {
            return (byte *)0x0;
          }
          param_7 = *(long *)(pbVar11 + 8);
          param_8 = *(ulong *)(pbVar11 + 0x10);
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          if (((ulong)pbVar10 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
          unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
          unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
          unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
          unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
          unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
        } while( true );
      }
    }
    else if (param_1 == 2) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10360341c; end: 10360351b;  */

void FUN_10360341c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7db98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe6c28;
  func_0x000107c61520(&DAT_10dbe6c28,&UNK_11066d1c0);
  puRam0000000112f7db98 = puVar1;
  return;
}



/* Entry: 10360351c; end: 103603af7;  */

uint FUN_10360351c(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_370 [80];
  long lStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uVar2;
  
  uVar10 = *(ulong *)(param_1 + 0x1c);
  lVar8 = *(long *)(param_1 + 0x1a);
  uVar6 = *(ulong *)(param_1 + 0x1e);
  uVar11 = *(ulong *)(param_2 + 0x1c);
  lVar9 = *(long *)(param_2 + 0x1a);
  uVar7 = *(ulong *)(param_2 + 0x1e);
  lStack_f0 = lVar9;
  uStack_e8 = uVar11;
  uStack_e0 = uVar7;
  lStack_d0 = lVar8;
  uStack_c8 = uVar10;
  uStack_c0 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar7 >> 0x3c) goto LAB_103603710;
    if (lVar8 == lVar9) {
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      uVar3 = uVar10;
      func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar7);
      func_0x000100d56568(lVar8,uVar11,uVar7);
      if ((uVar3 & 1) != 0) goto LAB_1036035bc;
    }
    else {
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      func_0x000100d56568(lVar9,uVar11,uVar7);
    }
LAB_10360382c:
    func_0x000100d56568(lVar8,uVar10,uVar6);
  }
  else {
    if (uVar7 >> 0x3c < 0xf) {
LAB_103603710:
      FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
      func_0x000100d56568(lVar8,uVar10,uVar6);
      lVar8 = lVar9;
      uVar10 = uVar11;
      uVar6 = uVar7;
      goto LAB_10360382c;
    }
    FUN_103602e74(&lStack_d0,&lStack_230,0x112db6f48,&UNK_10d969b40);
    FUN_103602e74(&lStack_f0,&lStack_230,0x112db6f48,&UNK_10d969b40);
LAB_1036035bc:
    func_0x000100d56568(lVar8,uVar10,uVar6);
    if (*param_1 == *param_2) {
      uStack_128 = *(undefined8 *)(param_1 + 8);
      uStack_130 = *(undefined8 *)(param_1 + 6);
      uStack_118 = *(undefined8 *)(param_1 + 0xc);
      uStack_120 = *(undefined8 *)(param_1 + 10);
      uStack_108 = *(undefined8 *)(param_1 + 0x10);
      uStack_110 = *(undefined8 *)(param_1 + 0xe);
      uStack_f8 = *(undefined8 *)(param_1 + 0x14);
      uStack_100 = *(undefined8 *)(param_1 + 0x12);
      uStack_138 = *(undefined8 *)(param_1 + 4);
      uStack_140 = *(undefined8 *)(param_1 + 2);
      uStack_178 = *(undefined8 *)(param_2 + 8);
      uStack_180 = *(undefined8 *)(param_2 + 6);
      uStack_168 = *(undefined8 *)(param_2 + 0xc);
      uStack_170 = *(undefined8 *)(param_2 + 10);
      uStack_158 = *(undefined8 *)(param_2 + 0x10);
      uStack_160 = *(undefined8 *)(param_2 + 0xe);
      uStack_148 = *(undefined8 *)(param_2 + 0x14);
      uStack_150 = *(undefined8 *)(param_2 + 0x12);
      uStack_188 = *(undefined8 *)(param_2 + 4);
      uStack_190 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(ulong *)(param_1 + 8);
      uVar10 = *(ulong *)(param_1 + 6);
      uStack_208 = *(undefined8 *)(param_1 + 0xc);
      uStack_210 = *(undefined8 *)(param_1 + 10);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x10);
      uStack_200 = *(undefined8 *)(param_1 + 0xe);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x14);
      uStack_1f0 = *(undefined8 *)(param_1 + 0x12);
      uStack_228 = *(ulong *)(param_1 + 4);
      lStack_230 = *(long *)(param_1 + 2);
      uStack_1c8 = *(ulong *)(param_2 + 8);
      uStack_1d0 = *(undefined8 *)(param_2 + 6);
      uStack_1b8 = *(undefined8 *)(param_2 + 0xc);
      uStack_1c0 = *(undefined8 *)(param_2 + 10);
      uStack_1a8 = *(undefined8 *)(param_2 + 0x10);
      uStack_1b0 = *(undefined8 *)(param_2 + 0xe);
      uStack_198 = *(undefined8 *)(param_2 + 0x14);
      uStack_1a0 = *(undefined8 *)(param_2 + 0x12);
      uStack_1d8 = *(ulong *)(param_2 + 4);
      uStack_1e0 = *(undefined8 *)(param_2 + 2);
      uStack_220 = uVar10;
      uStack_218 = uVar6;
      if ((uStack_228 >> 1 == 0xffffffff) && ((uVar6 & 0x3000000000000000) == 0)) {
        if ((uStack_1d8 >> 1 == 0xffffffff) && ((uStack_1c8 & 0x3000000000000000) == 0)) {
          uStack_2b8 = *(ulong *)(param_1 + 8);
          uStack_2c0 = *(ulong *)(param_1 + 6);
          uStack_2a8 = *(undefined8 *)(param_1 + 0xc);
          uStack_2b0 = *(undefined8 *)(param_1 + 10);
          uStack_298 = *(undefined8 *)(param_1 + 0x10);
          uStack_2a0 = *(undefined8 *)(param_1 + 0xe);
          uStack_288 = *(undefined8 *)(param_1 + 0x14);
          uStack_290 = *(undefined8 *)(param_1 + 0x12);
          uStack_2c8 = *(ulong *)(param_1 + 4);
          lStack_2d0 = *(long *)(param_1 + 2);
          FUN_103602e74(&uStack_140,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
          plVar4 = &lStack_2d0;
LAB_1036036f4:
          FUN_1036052b8(plVar4,0x112f7db88,&UNK_10dbe6c20);
LAB_1036036f8:
          uVar2 = *(undefined8 *)(param_1 + 0x16);
          func_0x000100e25fcc(uVar2,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x16),
                              *(undefined8 *)(param_2 + 0x18));
          uVar1 = (uint)uVar2;
          goto LAB_103603834;
        }
LAB_103603884:
        lStack_2d0 = lStack_230;
        uStack_2c8 = uStack_228;
        uStack_2c0 = uVar10;
        uStack_2b8 = uVar6;
        uStack_2b0 = uStack_210;
        uStack_2a8 = uStack_208;
        uStack_2a0 = uStack_200;
        uStack_298 = uStack_1f8;
        uStack_290 = uStack_1f0;
        uStack_288 = uStack_1e8;
        uStack_280 = uStack_1e0;
        uStack_278 = uStack_1d8;
        uStack_270 = uStack_1d0;
        uStack_268 = uStack_1c8;
        uStack_260 = uStack_1c0;
        uStack_258 = uStack_1b8;
        uStack_250 = uStack_1b0;
        uStack_248 = uStack_1a8;
        uStack_240 = uStack_1a0;
        uStack_238 = uStack_198;
        FUN_103602e74(&uStack_140,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
        FUN_103602e74(&uStack_190,&lStack_b0,0x112f7db88,&UNK_10dbe6c20);
        uVar2 = 0x112f7dca0;
        puVar5 = &UNK_10dbe7228;
        plVar4 = &lStack_2d0;
      }
      else {
        if ((uStack_1d8 >> 1 == 0xffffffff) && ((uStack_1c8 & 0x3000000000000000) == 0))
        goto LAB_103603884;
        uStack_318 = *(ulong *)(param_2 + 4);
        lStack_320 = *(long *)(param_2 + 2);
        uVar11 = *(ulong *)(param_2 + 8);
        uVar7 = *(ulong *)(param_2 + 6);
        uStack_2f8 = *(undefined8 *)(param_2 + 0xc);
        uStack_300 = *(undefined8 *)(param_2 + 10);
        uStack_2e8 = *(undefined8 *)(param_2 + 0x10);
        uStack_2f0 = *(undefined8 *)(param_2 + 0xe);
        uStack_2d8 = *(undefined8 *)(param_2 + 0x14);
        uStack_2e0 = *(undefined8 *)(param_2 + 0x12);
        uStack_310 = uVar7;
        uStack_308 = uVar11;
        if ((uVar6 >> 0x3d & 1) == 0) {
          if ((uVar11 >> 0x3d & 1) != 0) goto LAB_103603970;
          if ((uStack_318 & 0xff) == 1) {
            if (lStack_320 == 0) {
              if (lStack_230 != 0) goto LAB_103603970;
            }
            else if (lStack_320 == 1) {
              if (lStack_230 != 1) goto LAB_103603970;
            }
            else if (lStack_230 != 2) goto LAB_103603970;
          }
          else if (lStack_230 != lStack_320) goto LAB_103603970;
          FUN_103602e74(&uStack_140,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          func_0x000100e25fcc(uVar10,uVar6,uVar7,uVar11);
          FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
          if ((uVar10 & 1) != 0) {
            plVar4 = &lStack_230;
            goto LAB_1036036f4;
          }
        }
        else {
          uStack_98 = uVar6 & 0xdfffffffffffffff;
          lStack_b0 = lStack_230;
          uStack_a8 = uStack_228;
          uStack_a0 = uVar10;
          uStack_90 = uStack_210;
          uStack_88 = uStack_208;
          uStack_80 = uStack_200;
          uStack_78 = uStack_1f8;
          uStack_70 = uStack_1f0;
          uStack_68 = uStack_1e8;
          if ((uVar11 >> 0x3d & 1) != 0) {
            uStack_2b8 = uVar11 & 0xdfffffffffffffff;
            lStack_2d0 = lStack_320;
            uStack_2c8 = uStack_318;
            uStack_2c0 = uVar7;
            uStack_2b0 = uStack_300;
            uStack_2a8 = uStack_2f8;
            uStack_2a0 = uStack_2f0;
            uStack_298 = uStack_2e8;
            uStack_290 = uStack_2e0;
            uStack_288 = uStack_2d8;
            FUN_103602e74(&uStack_140,auStack_370,0x112f7db88,&UNK_10dbe6c20);
            FUN_103602e74(&uStack_190,auStack_370,0x112f7db88,&UNK_10dbe6c20);
            plVar4 = &lStack_b0;
            FUN_103602f24(plVar4,&lStack_2d0);
            FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
            FUN_1036052b8(&lStack_230,0x112f7db88,&UNK_10dbe6c20);
            if (((ulong)plVar4 & 1) == 0) goto LAB_103603830;
            goto LAB_1036036f8;
          }
LAB_103603970:
          FUN_103602e74(&uStack_140,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_103602e74(&uStack_190,&lStack_2d0,0x112f7db88,&UNK_10dbe6c20);
          FUN_1036052b8(&lStack_320,0x112f7db88,&UNK_10dbe6c20);
        }
        uVar2 = 0x112f7db88;
        puVar5 = &UNK_10dbe6c20;
        plVar4 = &lStack_230;
      }
      FUN_1036052b8(plVar4,uVar2,puVar5);
    }
  }
LAB_103603830:
  uVar1 = 0;
LAB_103603834:
  return uVar1 & 1;
}



/* Entry: 103603af8; end: 103603b37;  */

void FUN_103603af8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7090;
  func_0x000107c61520(&UNK_10dbe7090,&UNK_11066d350);
  puRam0000000112f7dbd8 = puVar1;
  return;
}



/* Entry: 103603b38; end: 103603b4b;  */

void FUN_103603b38(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103603b4c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103603b8c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103603b4c; end: 103603bf7;  */

void FUN_103603b4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6cc0;
  func_0x000107c61520(&UNK_10dbe6cc0,&UNK_11066d1c0);
  puRam0000000112f7dbe0 = puVar1;
  return;
}



/* Entry: 103603bf8; end: 103603bfb;  */

void FUN_103603bf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6d00;
  func_0x000107c61520(&UNK_10dbe6d00,&UNK_11066d1c0);
  puRam0000000112f7dc00 = puVar1;
  return;
}



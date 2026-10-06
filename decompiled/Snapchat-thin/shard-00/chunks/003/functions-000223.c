/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10050f190; end: 10050f26b;  */

void FUN_10050f190(void)

{
  long unaff_x20;
  
  FUN_10050f2e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10050f26c; end: 10050f2e7;  */

undefined * FUN_10050f26c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3f10 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f593f8,
                        &UNK_10e5540a0,&UNK_10e5540e0,6,0x100513634,0);
    do {
      if (puRam00000001137f3f10 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f3f10;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3f10,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3f10 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3f10;
}



/* Entry: 10050f2e8; end: 100512c67;  */

void FUN_10050f2e8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
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
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_100083b20(&uStack_140);
  FUN_100083b20(&uStack_148);
  FUN_100083b20(&uStack_150);
  FUN_100083b20(&uStack_158);
  FUN_100083b20(&uStack_160);
  FUN_100083b20(&uStack_168);
  FUN_100083b20(&uStack_170);
  FUN_100083b20(&uStack_178);
  FUN_100083b20(&uStack_180);
  FUN_100083b20(&uStack_188);
  FUN_100083b20(&uStack_190);
  FUN_100083b20(&uStack_198);
  FUN_100083b20(&uStack_1a0);
  FUN_100083b20(&uStack_1a8);
  FUN_100083b20(&uStack_1b0);
  FUN_100083b20(&uStack_1b8);
  FUN_100083b20(&uStack_1c0);
  FUN_100083b20(&uStack_1c8);
  FUN_100083b20(&uStack_1d0);
  FUN_100083b20(&uStack_1d8);
  FUN_100083b20(&uStack_1e0);
  FUN_100083b20(&uStack_1e8);
  FUN_100083b20(&uStack_1f0);
  FUN_100083b20(&uStack_1f8);
  FUN_100083b20(&uStack_200);
  FUN_100083b20(&uStack_208);
  FUN_100083b20(&uStack_210);
  FUN_100083b20(&uStack_218);
  FUN_100083b20(&uStack_220);
  FUN_100083b20(&uStack_228);
  FUN_100083b20(&uStack_230);
  FUN_100083b20(&uStack_238);
  FUN_100083b20(&uStack_240);
  FUN_100083b20(&uStack_248);
  FUN_100083b20(&uStack_250);
  FUN_100083b20(&uStack_258);
  FUN_100083b20(&uStack_260);
  FUN_100083b20(&uStack_268);
  FUN_100083b20(&uStack_270);
  FUN_100083b20(&uStack_278);
  FUN_100083b20(&uStack_280);
  FUN_100083b20(&uStack_288);
  FUN_100083b20(&uStack_290);
  FUN_100083b20(&uStack_298);
  FUN_100083b20(&uStack_2a0);
  FUN_10037358c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x228) = uStack_78;
  *(undefined8 *)(param_2 + 0x230) = uStack_80;
  *(undefined8 *)(param_2 + 0x238) = uStack_88;
  *(undefined8 *)(param_2 + 0x240) = uStack_90;
  *(undefined8 *)(param_2 + 0x248) = uStack_98;
  FUN_1000285a8(0x112e51dd8,&UNK_10da52048);
  func_0x000107c610f8();
  uVar5 = uStack_78;
  func_0x000107c61174();
  uVar7 = uStack_80;
  func_0x000107c61174();
  uVar8 = uStack_88;
  func_0x000107c61174();
  uVar9 = uStack_90;
  func_0x000107c61174();
  uVar10 = uStack_98;
  func_0x000107c61174();
  uVar4 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar2;
  FUN_1000285a8(0x112ec3f30,&UNK_10db59500);
  func_0x000107c610f8();
  uVar4 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x20) = puVar2;
  FUN_1000285a8(0x112e4de18,&UNK_10db46090);
  func_0x000107c610f8();
  uVar4 = uStack_b0;
  func_0x000107c6157c(uStack_b0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x28) = puVar2;
  FUN_1000285a8(0x112e4cce8,&UNK_10daf7050);
  func_0x000107c610f8();
  uVar4 = uStack_b8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar2;
  FUN_1000285a8(0x112f20818,&UNK_10db59508);
  func_0x000107c610f8();
  uVar4 = uStack_c0;
  func_0x000107c6157c(uStack_c0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x38) = puVar2;
  FUN_1000285a8(0x112e51d98,&UNK_10da52000);
  func_0x000107c610f8();
  uVar4 = uStack_c8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x40) = puVar2;
  FUN_1000285a8(0x112e51dc0,&UNK_10db60af0);
  func_0x000107c610f8();
  uVar4 = uStack_d0;
  func_0x000107c6157c(uStack_d0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x48) = puVar2;
  FUN_1000285a8(0x112f20820,&UNK_10db59510);
  func_0x000107c610f8();
  uVar4 = uStack_d8;
  func_0x000107c6157c(uStack_d8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x50) = puVar2;
  FUN_1000285a8(0x112e4f090,&UNK_10dbc4da0);
  func_0x000107c610f8();
  uVar4 = uStack_e0;
  func_0x000107c6157c(uStack_e0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x58) = puVar2;
  FUN_1000285a8(0x112e4ccd0,&UNK_10daaf8b0);
  func_0x000107c610f8();
  uVar4 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x60) = puVar2;
  FUN_1000285a8(0x112e3e750,&UNK_10da2bb78);
  func_0x000107c610f8();
  uVar4 = uStack_f0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x68) = puVar2;
  FUN_1000285a8(0x112e9edf8,&UNK_10dabb450);
  func_0x000107c610f8();
  uVar4 = uStack_f8;
  func_0x000107c6157c(uStack_f8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x70) = puVar2;
  FUN_1000285a8(0x112f20658,&UNK_10db59208);
  func_0x000107c610f8();
  uVar4 = uStack_100;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x78) = puVar2;
  FUN_1000285a8(0x112e49ff0,&UNK_10da41b70);
  func_0x000107c610f8();
  uVar4 = uStack_108;
  func_0x000107c6157c(uStack_108);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x80) = puVar2;
  FUN_1000285a8(0x112f20828,&UNK_10db59518);
  func_0x000107c610f8();
  uVar4 = uStack_110;
  func_0x000107c6157c(uStack_110);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x88) = puVar2;
  FUN_1000285a8(0x112f20830,&UNK_10db59520);
  func_0x000107c610f8();
  uVar4 = uStack_118;
  func_0x000107c6157c(uStack_118);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x90) = puVar2;
  FUN_1000285a8(0x112e49ff8,&UNK_10db4d4b0);
  func_0x000107c610f8();
  uVar4 = uStack_120;
  func_0x000107c6157c(uStack_120);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x98) = puVar2;
  FUN_1000285a8(0x112ea9508,&UNK_10dabe670);
  func_0x000107c610f8();
  uVar4 = uStack_128;
  func_0x000107c6157c(uStack_128);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xa0) = puVar2;
  FUN_1000285a8(0x112e84da0,&UNK_10dabb480);
  func_0x000107c610f8();
  uVar4 = uStack_130;
  func_0x000107c6157c(uStack_130);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xa8) = puVar2;
  FUN_1000285a8(0x112f20650,&UNK_10db59530);
  func_0x000107c610f8();
  uVar4 = uStack_138;
  func_0x000107c6157c(uStack_138);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xb0) = puVar2;
  FUN_1000285a8(0x112f20838,&UNK_10db59538);
  func_0x000107c610f8();
  uVar4 = uStack_140;
  func_0x000107c6157c(uStack_140);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xb8) = puVar2;
  FUN_1000285a8(0x112f20840,&UNK_10db59540);
  func_0x000107c610f8();
  uVar4 = uStack_148;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xc0) = puVar2;
  FUN_1000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar4 = uStack_150;
  func_0x000107c6157c(uStack_150);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 200) = puVar2;
  FUN_1000285a8(0x112e5eda8,&UNK_10daab350);
  func_0x000107c610f8();
  uVar4 = uStack_158;
  func_0x000107c6157c(uStack_158);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xd0) = puVar2;
  FUN_1000285a8(0x112f20848,&UNK_10db59548);
  func_0x000107c610f8();
  uVar4 = uStack_160;
  func_0x000107c6157c(uStack_160);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xd8) = puVar2;
  FUN_1000285a8(0x112ea5300,&UNK_10dacd1a0);
  func_0x000107c610f8();
  uVar4 = uStack_168;
  func_0x000107c6157c(uStack_168);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xe0) = puVar2;
  FUN_1000285a8(0x112e84d88,&UNK_10dab88e0);
  func_0x000107c610f8();
  uVar4 = uStack_170;
  func_0x000107c6157c(uStack_170);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xe8) = puVar2;
  FUN_1000285a8(0x112f20850,&UNK_10db59550);
  func_0x000107c610f8();
  uVar4 = uStack_178;
  func_0x000107c6157c(uStack_178);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xf0) = puVar2;
  FUN_1000285a8(0x112f20858,&UNK_10db59558);
  func_0x000107c610f8();
  uVar4 = uStack_180;
  func_0x000107c6157c(uStack_180);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0xf8) = puVar2;
  FUN_1000285a8(0x112f20860,&UNK_10db59560);
  func_0x000107c610f8();
  uVar4 = uStack_188;
  func_0x000107c6157c(uStack_188);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x100) = puVar2;
  FUN_1000285a8(0x112f20868,&UNK_10db59568);
  func_0x000107c610f8();
  uVar4 = uStack_190;
  func_0x000107c6157c(uStack_190);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x108) = puVar2;
  FUN_1000285a8(0x112ebd0a0,&UNK_10dad75e0);
  func_0x000107c610f8();
  uVar4 = uStack_198;
  func_0x000107c6157c(uStack_198);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x110) = puVar2;
  FUN_1000285a8(0x112e0bda8,&UNK_10d9e5488);
  func_0x000107c610f8();
  uVar4 = uStack_1a0;
  func_0x000107c6157c(uStack_1a0);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x118) = puVar2;
  FUN_1000285a8(0x112f20870,&UNK_10db59570);
  func_0x000107c610f8();
  uVar4 = uStack_1a8;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x120) = puVar2;
  FUN_1000285a8(0x112f20878,&UNK_10db59578);
  func_0x000107c610f8();
  uVar4 = uStack_1b0;
  func_0x000107c6157c(uStack_1b0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x128) = puVar2;
  FUN_1000285a8(0x112e028a8,&UNK_10db59580);
  func_0x000107c610f8();
  uVar4 = uStack_1b8;
  func_0x000107c6157c(uStack_1b8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x130) = puVar2;
  FUN_1000285a8(0x112e11a60,&UNK_10d9ece28);
  func_0x000107c610f8();
  uVar4 = uStack_1c0;
  func_0x000107c6157c(uStack_1c0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x138) = puVar2;
  FUN_1000285a8(0x112dafb90,&UNK_10d958cf0);
  func_0x000107c610f8();
  uVar4 = uStack_1c8;
  func_0x000107c6157c(uStack_1c8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x140) = puVar2;
  FUN_1000285a8(0x112f20880,&UNK_10db59588);
  func_0x000107c610f8();
  uVar4 = uStack_1d0;
  func_0x000107c6157c(uStack_1d0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x148) = puVar2;
  FUN_1000285a8(0x112e51088,&UNK_10db59590);
  func_0x000107c610f8();
  uVar4 = uStack_1d8;
  func_0x000107c6157c(uStack_1d8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x150) = puVar2;
  FUN_1000285a8(0x112f20888,&UNK_10db95370);
  func_0x000107c610f8();
  uVar4 = uStack_1e0;
  func_0x000107c6157c(uStack_1e0);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x158) = puVar2;
  FUN_1000285a8(0x112f20890,&UNK_10db595a0);
  func_0x000107c610f8();
  uVar4 = uStack_1e8;
  func_0x000107c6157c(uStack_1e8);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x160) = puVar2;
  FUN_1000285a8(0x112e4cd30,&UNK_10da47080);
  func_0x000107c610f8();
  uVar4 = uStack_1f0;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x168) = puVar2;
  FUN_1000285a8(0x112f20898,&UNK_10db595b0);
  func_0x000107c610f8();
  uVar4 = uStack_1f8;
  func_0x000107c6157c(uStack_1f8);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x170) = puVar2;
  FUN_1000285a8(0x112e783c0,&UNK_10da81b68);
  func_0x000107c610f8();
  uVar4 = uStack_200;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x178) = puVar2;
  FUN_1000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar4 = uStack_208;
  func_0x000107c6157c(uStack_208);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x180) = puVar2;
  FUN_1000285a8(0x112f15e88,&UNK_10db4bd68);
  func_0x000107c610f8();
  uVar4 = uStack_210;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x188) = puVar2;
  FUN_1000285a8(0x112f208a0,&UNK_10db595c0);
  func_0x000107c610f8();
  uVar4 = uStack_218;
  func_0x000107c6157c(uStack_218);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 400) = puVar2;
  FUN_1000285a8(0x112efa838,&UNK_10db2f7b0);
  func_0x000107c610f8();
  uVar4 = uStack_220;
  func_0x000107c6157c(uStack_220);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x198) = puVar2;
  FUN_1000285a8(0x112e51dd0,&UNK_10da52040);
  func_0x000107c610f8();
  uVar4 = uStack_228;
  func_0x000107c6157c(uStack_228);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1a0) = puVar2;
  FUN_1000285a8(0x112e5cf78,&UNK_10da63610);
  func_0x000107c610f8();
  uVar4 = uStack_230;
  func_0x000107c6157c(uStack_230);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1a8) = puVar2;
  FUN_1000285a8(0x112f20638,&UNK_10db595d0);
  func_0x000107c610f8();
  uVar4 = uStack_238;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1b0) = puVar2;
  FUN_1000285a8(0x112f208a8,&UNK_10db595d8);
  func_0x000107c610f8();
  uVar4 = uStack_240;
  func_0x000107c6157c(uStack_240);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1b8) = puVar2;
  FUN_1000285a8(0x112f208b0,&UNK_10db595e0);
  func_0x000107c610f8();
  uVar4 = uStack_248;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1c0) = puVar2;
  FUN_1000285a8(0x112f208b8,&UNK_10db595e8);
  func_0x000107c610f8();
  uVar4 = uStack_250;
  func_0x000107c6157c(uStack_250);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1c8) = puVar2;
  FUN_1000285a8(0x112f20660,&UNK_10db595f0);
  func_0x000107c610f8();
  uVar4 = uStack_258;
  func_0x000107c6157c(uStack_258);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1d0) = puVar2;
  FUN_1000285a8(0x112e4cd00,&UNK_10da47050);
  func_0x000107c610f8();
  uVar4 = uStack_260;
  func_0x000107c6157c(uStack_260);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1d8) = puVar2;
  FUN_1000285a8(0x112e4cd08,&UNK_10da47800);
  func_0x000107c610f8();
  uVar4 = uStack_268;
  func_0x000107c6157c(uStack_268);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1e0) = puVar2;
  FUN_1000285a8(0x112e4cd10,&UNK_10da47060);
  func_0x000107c610f8();
  uVar4 = uStack_270;
  func_0x000107c6157c(uStack_270);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1e8) = puVar2;
  FUN_1000285a8(0x112e9ebb8,&UNK_10daafe70);
  func_0x000107c610f8();
  uVar4 = uStack_278;
  func_0x000107c6157c(uStack_278);
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1f0) = puVar2;
  FUN_1000285a8(0x112e4cd28,&UNK_10daaf350);
  func_0x000107c610f8();
  uVar4 = uStack_280;
  func_0x000107c6157c();
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x1f8) = puVar2;
  FUN_1000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar4 = uStack_288;
  func_0x000107c6157c(uStack_288);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x200) = puVar2;
  FUN_1000285a8(0x112f208c0,&UNK_10db595f8);
  func_0x000107c610f8();
  uVar4 = uStack_290;
  func_0x000107c6157c();
  FUN_1003b3b80();
  puVar2 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x208) = puVar2;
  FUN_1000285a8(0x112e9a918,&UNK_10dabac60);
  func_0x000107c610f8();
  uVar4 = uStack_298;
  func_0x000107c6157c(uStack_298);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x210) = puVar2;
  FUN_1000285a8(0x112e9f4b0,&UNK_10dab0378);
  func_0x000107c610f8();
  uVar4 = uStack_2a0;
  func_0x000107c6157c(uStack_2a0);
  FUN_10017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x218) = puVar2;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x220) = puVar2;
  puVar2 = PTR_PTR_1126ac670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar3 = auStack_70[0];
  func_0x000107c61174();
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1114c0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef32700);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  uVar6 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1114e0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0ad750);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f03ecc0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x220);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1113b0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar11 = 0xd000000000000014;
  uVar13 = uVar11;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f05c870);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar16 = 0xd000000000000019;
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f03ecf0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f052f80);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef21f80);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar14 = 0xd000000000000017;
  uVar4 = uVar14;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f111420);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar14;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef35a00);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  uVar4 = uVar17;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f05c830);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x50);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef35950);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f055830);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111500);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x68);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f01a9e0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f0ad7f0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x78);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar11;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f111460);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111520);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x88);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f111540);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x90);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111570);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x98);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f03f120);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0xa0);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111590);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xa8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f089400);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xb0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f111440);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xb8);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1115b0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xc0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar14;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1115d0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 200);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xd0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar15 = 0xd000000000000016;
  uVar4 = uVar15;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef1e140);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xd8);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef2d4d0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0xe0);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f1115f0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xe8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar4 = uVar14;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef25330);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xf0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111610);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0xf8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f111630);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x100);
  func_0x000107c61174();
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f111660);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x108);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar17;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f111690);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x110);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef2b4d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x118);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1116b0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x120);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f1116d0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x128);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f111700);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x130);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010effe360);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x138);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f008830);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x140);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef2ada0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x148);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f075930);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x150);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f059550);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x158);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar13 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f111730);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x160);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar15;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f111750);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x168);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef13560);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x170);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f111770);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x178);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar18 = 0xd00000000000001a;
  uVar4 = uVar18;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1e120);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x180);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0790);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x188);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1117a0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 400);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000019,0x800000010f1117d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x198);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0fcc00);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar14);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x1a0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010f05c850);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1a8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1117f0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x1b0);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1113e0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1b8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar16 = 0xd000000000000018;
  uVar4 = uVar16;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f05c810);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1c0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef35990);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1c8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef359b0);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1d0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f111810);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x1d8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f09c900);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1e0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar11 = 0xd000000000000012;
  uVar4 = uVar11;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f09c920);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x1e8);
  func_0x000107c61174();
  func_0x000107c61174(uVar6);
  func_0x000107c5fadc(0xd000000000000012,0x800000010f0b3130);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1f0);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f01b670);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x1f8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = uVar18;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f0a4110);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x200);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  uVar13 = *(undefined8 *)(param_2 + 0x208);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar13);
  uVar4 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f111830);
  func_0x000107c5a49c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x210);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1ae20);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar18);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x218);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar6);
  uVar13 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010ef328d0);
  func_0x000107c5a49c(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar13);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar12 = *(long *)(param_2 + 0x220);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar12 != 0) {
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar10);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(uStack_a8);
    func_0x000107c61574(uStack_b0);
    func_0x000107c61574(uStack_b8);
    func_0x000107c61574(uStack_c0);
    func_0x000107c61574(uStack_c8);
    func_0x000107c61574(uStack_d0);
    func_0x000107c61574(uStack_d8);
    func_0x000107c61574(uStack_e0);
    func_0x000107c61574(uStack_e8);
    func_0x000107c61574(uStack_f0);
    func_0x000107c61574(uStack_f8);
    func_0x000107c61574(uStack_100);
    func_0x000107c61574(uStack_108);
    func_0x000107c61574(uStack_110);
    func_0x000107c61574(uStack_118);
    func_0x000107c61574(uStack_120);
    func_0x000107c61574(uStack_128);
    func_0x000107c61574(uStack_130);
    func_0x000107c61574(uStack_138);
    func_0x000107c61574(uStack_140);
    func_0x000107c61574(uStack_148);
    func_0x000107c61574(uStack_150);
    func_0x000107c61574(uStack_158);
    func_0x000107c61574(uStack_160);
    func_0x000107c61574(uStack_168);
    func_0x000107c61574(uStack_170);
    func_0x000107c61574(uStack_178);
    func_0x000107c61574(uStack_180);
    func_0x000107c61574(uStack_188);
    func_0x000107c61574(uStack_190);
    func_0x000107c61574(uStack_198);
    func_0x000107c61574(uStack_1a0);
    func_0x000107c61574(uStack_1a8);
    func_0x000107c61574(uStack_1b0);
    func_0x000107c61574(uStack_1b8);
    func_0x000107c61574(uStack_1c0);
    func_0x000107c61574(uStack_1c8);
    func_0x000107c61574(uStack_1d0);
    func_0x000107c61574(uStack_1d8);
    func_0x000107c61574(uStack_1e0);
    func_0x000107c61574(uStack_1e8);
    func_0x000107c61574(uStack_1f0);
    func_0x000107c61574(uStack_1f8);
    func_0x000107c61574(uStack_200);
    func_0x000107c61574(uStack_208);
    func_0x000107c61574(uStack_210);
    func_0x000107c61574(uStack_218);
    func_0x000107c61574(uStack_220);
    func_0x000107c61574(uStack_228);
    func_0x000107c61574(uStack_230);
    func_0x000107c61574(uStack_238);
    func_0x000107c61574(uStack_240);
    func_0x000107c61574(uStack_248);
    func_0x000107c61574(uStack_250);
    func_0x000107c61574(uStack_258);
    func_0x000107c61574(uStack_260);
    func_0x000107c61574(uStack_268);
    func_0x000107c61574(uStack_270);
    func_0x000107c61574(uStack_278);
    func_0x000107c61574(uStack_280);
    func_0x000107c61574(uStack_288);
    func_0x000107c61574(uStack_290);
    func_0x000107c61574(uStack_298);
    func_0x000107c61574(uStack_2a0);
    *(long *)(param_2 + 0x250) = lVar12;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100512c68);
  (*pcVar1)();
}



/* Entry: 100512c68; end: 100512ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100512c68(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033ca94();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f20bf8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100512cd0; end: 100512d4b;  */

undefined * FUN_100512cd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001137f3f18 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x000107c3dbd4(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110f59418,
                        &UNK_10e5540f8,&UNK_10e55414c,6,FUN_1005afff8,0);
    do {
      if (puRam00000001137f3f18 != (undefined *)0x0) {
        ClearExclusiveLocal();
        func_0x000107c61170();
        return puRam00000001137f3f18;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1137f3f18,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001137f3f18 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001137f3f18;
}



/* Entry: 100512d4c; end: 100512d57;  */

/* WARNING: Possible PIC construction at 0x000100512df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100512e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100512dfc) */
/* WARNING: Removing unreachable block (ram,0x000100512e0c) */

void FUN_100512d4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar4 = &UNK_110506778;
  func_0x000107c613fc(&UNK_110506778,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  uVar5 = 0x112e98ee8;
  FUN_1000285a8(0x112e98ee8,&UNK_10daa4c30);
  func_0x000107c613fc();
  puVar6 = &UNK_10242bd6c;
  FUN_1000841f8(&UNK_10242bd6c,puVar4,uVar5);
  FUN_100084214(&UNK_10daa4c00,0x29,2);
  *param_1 = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100512d58; end: 100512e23;  */

/* WARNING: Possible PIC construction at 0x000100512df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100512e08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100512dfc) */
/* WARNING: Removing unreachable block (ram,0x000100512e0c) */

void FUN_100512d58(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110506778;
  func_0x000107c613fc(&UNK_110506778,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  uVar2 = 0x112e98ee8;
  FUN_1000285a8(0x112e98ee8,&UNK_10daa4c30);
  func_0x000107c613fc();
  puVar3 = &UNK_10242bd6c;
  FUN_1000841f8(&UNK_10242bd6c,puVar1,uVar2);
  FUN_100084214(&UNK_10daa4c00,0x29,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100512e24; end: 100512e2b;  */

void FUN_100512e24(void)

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



/* Entry: 100512e2c; end: 100512e67;  */

void FUN_100512e2c(void)

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



/* Entry: 100512e68; end: 100512e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100512e68(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100372678();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11306df28) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100512e70; end: 100512edb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100512e70(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100372678();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11306df28) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100512edc; end: 10051306b;  */

/* WARNING: Possible PIC construction at 0x000100512fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100512fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100512ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051300c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051301c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051302c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051303c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100513030) */
/* WARNING: Removing unreachable block (ram,0x000100513020) */
/* WARNING: Removing unreachable block (ram,0x000100513010) */
/* WARNING: Removing unreachable block (ram,0x000100513000) */
/* WARNING: Removing unreachable block (ram,0x000100512ff0) */
/* WARNING: Removing unreachable block (ram,0x000100512fe0) */
/* WARNING: Removing unreachable block (ram,0x000100513040) */

void FUN_100512edc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11050dfb8;
  func_0x000107c613fc(&UNK_11050dfb8,0x88,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  uVar2 = 0x112e9cc48;
  FUN_1000285a8(0x112e9cc48,&UNK_10daab320);
  func_0x000107c613fc();
  puVar3 = &UNK_102475aec;
  FUN_1000841f8(&UNK_102475aec,puVar1,uVar2);
  FUN_100084214(&UNK_10daab2e0,0x39,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10051306c; end: 10051306f;  */

void FUN_10051306c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100513070; end: 1005130b3;  */

void FUN_100513070(void)

{
  long unaff_x20;
  
  FUN_100512edc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1005130b4; end: 1005130b7;  */

void FUN_1005130b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005130b8; end: 10051314b;  */

void FUN_1005130b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051314c; end: 1005131b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051314c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_1003408b4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11307b090) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1005131b4; end: 1005131bb;  */

void FUN_1005131b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f52780,&UNK_10dba8e18);
  func_0x000107c613fc();
  puVar1 = &UNK_1032b1450;
  FUN_1000841f8();
  FUN_100084214(&UNK_10dba8de0,0x30,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1005131bc; end: 100513237;  */

void FUN_1005131bc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f52780,&UNK_10dba8e18);
  func_0x000107c613fc();
  puVar1 = &UNK_1032b1450;
  FUN_1000841f8(&UNK_1032b1450,param_2);
  FUN_100084214(&UNK_10dba8de0,0x30,2);
  *param_1 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100513238; end: 10051323f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100513238(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100340088();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1920) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100513240; end: 1005132ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100513240(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100340088();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff1920) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1005132ac; end: 1005132b7;  */

/* WARNING: Possible PIC construction at 0x000100513354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100513358) */

void FUN_1005132ac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_1104bbab0;
  func_0x000107c613fc(&UNK_1104bbab0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e4f928;
  FUN_1000285a8(0x112e4f928,&UNK_10da4cd10);
  func_0x000107c613fc();
  puVar4 = &UNK_10200c2c8;
  FUN_1000841f8(&UNK_10200c2c8,puVar2,uVar3);
  FUN_100084214(&UNK_10da4cce0,0x2d,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1005132b8; end: 100513377;  */

/* WARNING: Possible PIC construction at 0x000100513354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100513358) */

void FUN_1005132b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_1104bbab0;
  func_0x000107c613fc(&UNK_1104bbab0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e4f928;
  FUN_1000285a8(0x112e4f928,&UNK_10da4cd10);
  func_0x000107c613fc();
  puVar3 = &UNK_10200c2c8;
  FUN_1000841f8(&UNK_10200c2c8,puVar1,uVar2);
  FUN_100084214(&UNK_10da4cce0,0x2d,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100513378; end: 10051337f;  */

void FUN_100513378(void)

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



/* Entry: 100513380; end: 1005133b3;  */

void FUN_100513380(void)

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



/* Entry: 1005133b4; end: 10051341b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005133b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100371a18();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113071ff0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10051341c; end: 10051356b;  */

/* WARNING: Possible PIC construction at 0x0001005134f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100513504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100513514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100513524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100513534: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100513544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100513538) */
/* WARNING: Removing unreachable block (ram,0x000100513528) */
/* WARNING: Removing unreachable block (ram,0x000100513518) */
/* WARNING: Removing unreachable block (ram,0x000100513508) */
/* WARNING: Removing unreachable block (ram,0x0001005134f8) */
/* WARNING: Removing unreachable block (ram,0x000100513548) */

void FUN_10051341c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110643ef0;
  func_0x000107c613fc(&UNK_110643ef0,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  uVar2 = 0x112f5c460;
  FUN_1000285a8(0x112f5c460,&UNK_10dbb53f8);
  func_0x000107c613fc();
  puVar3 = &UNK_103365c98;
  FUN_1000841f8(&UNK_103365c98,puVar1,uVar2);
  FUN_100084214(&UNK_10dbb53c0,0x31,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10051356c; end: 10051356f;  */

void FUN_10051356c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100513570; end: 1005135ab;  */

void FUN_100513570(void)

{
  long unaff_x20;
  
  FUN_10051341c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1005135ac; end: 1005135af;  */

void FUN_1005135ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005135b0; end: 10051362b;  */

void FUN_1005135b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051362c; end: 1005137df;  */

void FUN_10051362c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1005137e0; end: 100513817;  */

void FUN_1005137e0(undefined8 param_1)

{
  if (lRam00000001134ee920 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e735530);
  return;
}



/* Entry: 100513818; end: 1005138b3;  */

void FUN_100513818(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10db59fd8;
  lVar1 = 0x13f;
  FUN_1000ee934();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_38 = &UNK_10db59ff0;
    puStack_28 = &UNK_10db5a008;
    lStack_40 = lStack_48;
    func_0x000107c61630(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1005138b4; end: 100513933;  */

void FUN_1005138b4(void)

{
  func_0x000107c61168(&PTR_PTR_112969e20);
  return;
}



/* Entry: 100513934; end: 100514417; -[SCUserFeatureLaunchServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100513934(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  undefined *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  undefined *puVar46;
  undefined *puVar47;
  undefined *puVar48;
  undefined *puVar49;
  undefined *puVar50;
  undefined *puVar51;
  undefined *puVar52;
  undefined *puVar53;
  undefined *puVar54;
  undefined *puVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  undefined *puVar67;
  undefined8 uVar68;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  puVar1 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar2 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar3 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar4 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar5 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar6 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar7 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar8 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar9 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar10 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar11 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar12 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar13 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar14 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar15 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar16 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar17 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar18 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar19 = PTR_PTR_1126caad0;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar20 = PTR_PTR_1126caad0;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar21 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar22 = PTR_PTR_1126cdbc8;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar23 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar24 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar25 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar26 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar27 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar28 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar29 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar30 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar31 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar32 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar33 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar34 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar35 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar36 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar37 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar38 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar39 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar40 = PTR_PTR_1126caad0;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar41 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar42 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar43 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar44 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar45 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar46 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar47 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar48 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar49 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar50 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar51 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar52 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar53 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar54 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar55 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar56 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  func_0x000107c61144(auStack_70,param_1);
  puVar57 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar58 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar59 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar60 = PTR_PTR_1126c2610;
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar61 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar62 = PTR_PTR_1126b5350;
  func_0x000107c610f4();
  func_0x000107c484e0();
  puVar67 = PTR_PTR_1126afea0;
  func_0x000107c610f4();
  lVar63 = param_1 + _DAT_11274fa74;
  func_0x000107c61148();
  lVar64 = param_1 + _DAT_11274fa80;
  func_0x000107c61148();
  lVar65 = param_1 + _DAT_11274fa7c;
  func_0x000107c61148();
  lVar66 = param_1 + _DAT_11274fa84;
  func_0x000107c61148();
  func_0x000107c4717c();
  func_0x000107c61170(lVar66);
  func_0x000107c61170(lVar65);
  func_0x000107c61170(lVar64);
  func_0x000107c61170(lVar63);
  uVar68 = *(undefined8 *)(param_1 + _DAT_11274fa9c);
  func_0x000107c61174(uVar68);
  func_0x000107c42c20(uVar68);
  func_0x000107c61170(uVar68);
  func_0x000107c61170(puVar67);
  func_0x000107c61170(puVar62);
  func_0x000107c61170(puVar61);
  func_0x000107c61170(puVar60);
  func_0x000107c61170(puVar59);
  func_0x000107c61170(puVar58);
  func_0x000107c61170(puVar57);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61170(puVar56);
  func_0x000107c61170(puVar55);
  func_0x000107c61170(puVar54);
  func_0x000107c61170(puVar53);
  func_0x000107c61170(puVar52);
  func_0x000107c61170(puVar51);
  func_0x000107c61170(puVar50);
  func_0x000107c61170(puVar49);
  func_0x000107c61170(puVar48);
  func_0x000107c61170(puVar47);
  func_0x000107c61170(puVar46);
  func_0x000107c61170(puVar45);
  func_0x000107c61170(puVar44);
  func_0x000107c61170(puVar43);
  func_0x000107c61170(puVar42);
  func_0x000107c61170(puVar41);
  func_0x000107c61170(puVar40);
  func_0x000107c61170(puVar39);
  func_0x000107c61170(puVar38);
  func_0x000107c61170(puVar37);
  func_0x000107c61170(puVar36);
  func_0x000107c61170(puVar35);
  func_0x000107c61170(puVar34);
  func_0x000107c61170(puVar33);
  func_0x000107c61170(puVar32);
  func_0x000107c61170(puVar31);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puVar28);
  func_0x000107c61170(puVar27);
  func_0x000107c61170(puVar26);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar24);
  func_0x000107c61170(puVar23);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100514418; end: 100515097; -[SCUserFeatureLaunchServices initWithLegacySettingsLauncher:recipientPickerScopeLauncher:addFriendsScopeLauncher:allContactsScopeLauncher:myFriendsScopeLauncher:findFriendsScopeLauncher:customStoryCreationScopeLauncher:customStoryMembersScopeLauncher:customStoryMenuScopeLauncher:leaveCustomStoryScopeLauncher:deleteStorySnapScopeLauncher:mapScopeMultiLauncher:commerceBrowserScopeLauncher:commerceReviewOrderHalfScopeLauncher:commerceCheckoutScopeLauncher:commerceShoppingScopeLauncher:mapPlaceSharingScopeLauncher:standardExternalContentShareScopeLauncher:auraMyProfileScopeLauncher:auraFriendProfileScopeLauncher:previewScopeLauncher:publicGroupsChatScopeLauncher:mapFriendPickerScopeLauncher:venueEditorScopeLauncher:topicScopeMultiLauncher:topicMusicScopeMultiLauncher:topicLensScopeMultiLauncher:chatScopeLauncher:addToGroupScopeLauncher:remixScopeLauncher:bitmojiFriendmojiHintScopeLauncher:bitmojiFriendmojiPickerScopeLauncher:bitmojiSelfiePickerScopeLauncher:bitmojiSettingsScopeLauncher:bitmojiAvatarBuilderScopeLauncher:adApplePromptScopeLauncher:userPhoneVerificationScopeLauncher:mentionBarScopeLauncher:adReportScopeLauncher:memoriesSnapshotSnapPickerScopeLauncher:memoriesPickerScopeLauncher:shakeToReportScopeLauncher:oauth2PermissionPresenterScopeLauncher:modularCameraPresenter:bitmojiAvatarScopeLauncher:groupAvatarScopeLauncher:uberAvatarScopeLauncher:spectaclesBoomboxScopeLauncher:myProfileScopeLauncher:groupProfileScopeLauncher:friendActionSheetScopeLauncher:groupActionSheetScopeLauncher:lensVideoEditingLauncher:reportAdScopeLauncher:adInfoScopeLauncher:hideAdScopeLauncher:businessProfilesScopeLauncher:deeplinkSendToScopeLauncher:operaSessionScopeLauncher:imageToVideoWriterScopeLauncher:imageToVideoWriterScopeServices:adOperaSessionScopeLauncher:spotlightSubmissionScopeLauncher:spotlightSubmissionScopeServices:adApplePromptScopeServices:deleteStorySnapScopeServices:] */

undefined8 *
FUN_100514418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  func_0x000107c61174(param_21);
  func_0x000107c61174(param_22);
  func_0x000107c61174(param_23);
  func_0x000107c61174(param_24);
  func_0x000107c61174(param_25);
  func_0x000107c61174(param_26);
  func_0x000107c61174(param_27);
  func_0x000107c61174(param_28);
  func_0x000107c61174(param_29);
  func_0x000107c61174(param_30);
  func_0x000107c61174(param_31);
  func_0x000107c61174(param_32);
  func_0x000107c61174(param_33);
  func_0x000107c61174(param_34);
  func_0x000107c61174(param_35);
  func_0x000107c61174(param_36);
  func_0x000107c61174(param_37);
  func_0x000107c61174(param_38);
  func_0x000107c61174(param_39);
  func_0x000107c61174(param_40);
  func_0x000107c61174(param_41);
  func_0x000107c61174(param_42);
  func_0x000107c61174(param_43);
  func_0x000107c61174(param_44);
  func_0x000107c61174(param_45);
  func_0x000107c61174(param_46);
  func_0x000107c61174(param_47);
  func_0x000107c61174(param_48);
  func_0x000107c61174(param_49);
  func_0x000107c61174(param_50);
  func_0x000107c61174(param_51);
  func_0x000107c61174(param_52);
  func_0x000107c61174(param_53);
  func_0x000107c61174(param_54);
  func_0x000107c61174(param_55);
  func_0x000107c61174(param_56);
  func_0x000107c61174(param_57);
  func_0x000107c61174(param_58);
  func_0x000107c61174(param_59);
  func_0x000107c61174(param_60);
  func_0x000107c61174(param_61);
  func_0x000107c61174(param_62);
  func_0x000107c61174(param_63);
  func_0x000107c61174(param_64);
  func_0x000107c61174(param_65);
  func_0x000107c61174(param_66);
  func_0x000107c61174(param_67);
  func_0x000107c61174(param_68);
  puStack_70 = PTR_PTR_112700ed0;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_21);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_21;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_22);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_22;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_23);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_23;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_24);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_24;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_25);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_25;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_26);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_26;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_27);
    uVar2 = puVar1[0x19];
    puVar1[0x19] = param_27;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_28);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_28;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_29);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_29;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_30);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_31);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_31;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_32);
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = param_32;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_33);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_33;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_34);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_34;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_35);
    uVar2 = puVar1[0x21];
    puVar1[0x21] = param_35;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_36);
    uVar2 = puVar1[0x22];
    puVar1[0x22] = param_36;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_37);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = param_37;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_38);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = param_38;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_39);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = param_39;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_40);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = param_40;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_41);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = param_41;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_42);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = param_42;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_43);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = param_43;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_44);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = param_44;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_45);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = param_45;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_46);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = param_46;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_47);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = param_47;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_48);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = param_48;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_49);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = param_49;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_50);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = param_50;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_51);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = param_51;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_52);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = param_52;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_53);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = param_53;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_54);
    uVar2 = puVar1[0x34];
    puVar1[0x34] = param_54;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_55);
    uVar2 = puVar1[0x35];
    puVar1[0x35] = param_55;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_56);
    uVar2 = puVar1[0x36];
    puVar1[0x36] = param_56;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_57);
    uVar2 = puVar1[0x37];
    puVar1[0x37] = param_57;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_58);
    uVar2 = puVar1[0x38];
    puVar1[0x38] = param_58;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_59);
    uVar2 = puVar1[0x39];
    puVar1[0x39] = param_59;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_60);
    uVar2 = puVar1[0x3a];
    puVar1[0x3a] = param_60;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_61);
    uVar2 = puVar1[0x3b];
    puVar1[0x3b] = param_61;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_62);
    uVar2 = puVar1[0x3c];
    puVar1[0x3c] = param_62;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_63);
    uVar2 = puVar1[0x3d];
    puVar1[0x3d] = param_63;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_68);
    uVar2 = puVar1[0x3e];
    puVar1[0x3e] = param_68;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_64);
    uVar2 = puVar1[0x3f];
    puVar1[0x3f] = param_64;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_65);
    uVar2 = puVar1[0x40];
    puVar1[0x40] = param_65;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_66);
    uVar2 = puVar1[0x41];
    puVar1[0x41] = param_66;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_67);
    uVar2 = puVar1[0x43];
    puVar1[0x43] = param_67;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_68);
  func_0x000107c61170(param_67);
  func_0x000107c61170(param_66);
  func_0x000107c61170(param_65);
  func_0x000107c61170(param_64);
  func_0x000107c61170(param_63);
  func_0x000107c61170(param_62);
  func_0x000107c61170(param_61);
  func_0x000107c61170(param_60);
  func_0x000107c61170(param_59);
  func_0x000107c61170(param_58);
  func_0x000107c61170(param_57);
  func_0x000107c61170(param_56);
  func_0x000107c61170(param_55);
  func_0x000107c61170(param_54);
  func_0x000107c61170(param_53);
  func_0x000107c61170(param_52);
  func_0x000107c61170(param_51);
  func_0x000107c61170(param_50);
  func_0x000107c61170(param_49);
  func_0x000107c61170(param_48);
  func_0x000107c61170(param_47);
  func_0x000107c61170(param_46);
  func_0x000107c61170(param_45);
  func_0x000107c61170(param_44);
  func_0x000107c61170(param_43);
  func_0x000107c61170(param_42);
  func_0x000107c61170(param_41);
  func_0x000107c61170(param_40);
  func_0x000107c61170(param_39);
  func_0x000107c61170(param_38);
  func_0x000107c61170(param_37);
  func_0x000107c61170(param_36);
  func_0x000107c61170(param_35);
  func_0x000107c61170(param_34);
  func_0x000107c61170(param_33);
  func_0x000107c61170(param_32);
  func_0x000107c61170(param_31);
  func_0x000107c61170(param_30);
  func_0x000107c61170(param_29);
  func_0x000107c61170(param_28);
  func_0x000107c61170(param_27);
  func_0x000107c61170(param_26);
  func_0x000107c61170(param_25);
  func_0x000107c61170(param_24);
  func_0x000107c61170(param_23);
  func_0x000107c61170(param_22);
  func_0x000107c61170(param_21);
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100515098; end: 1005152eb;  */

void FUN_100515098(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005152ec; end: 1005152f3;  */

void FUN_1005152ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c41418(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar2 = PTR_PTR_1126adcc0;
  func_0x000107c610f8();
  func_0x000107c46430();
  func_0x000107c615e8(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 1005152f4; end: 10051536f;  */

void FUN_1005152f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c41418(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  puVar2 = PTR_PTR_1126adcc0;
  func_0x000107c610f8();
  func_0x000107c46430();
  func_0x000107c615e8(uVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 100515370; end: 100515387; -[_TtC27SCDeckServiceImplementation25DeckServiceImplementation deckRootContainerProvider] */

void FUN_100515370(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100515388; end: 10051542f;  */

undefined * FUN_100515388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c4f248(param_2);
  func_0x000107c4f248(param_3);
  func_0x000107c61170(param_3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d95c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c3fec0(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return puVar3;
}



/* Entry: 100515430; end: 1005154a3; -[SCDeckRootContainerServices initWithDeckRootContainerProvider:] */

undefined1 * FUN_100515430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705698;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1005154a4; end: 1005154ab;  */

void FUN_1005154a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1005154ac; end: 1005154ff;  */

void FUN_1005154ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100515500; end: 10051550b;  */

void FUN_100515500(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10037ba30();
  func_0x000107c613fc();
  FUN_100516698(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10051550c; end: 1005155b7;  */

void FUN_10051550c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_10037ba30();
  func_0x000107c613fc();
  FUN_100516698(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = param_2;
  return;
}



/* Entry: 1005155b8; end: 1005155bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005155b8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10037998c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11306ef50) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1005155c0; end: 10051562b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005155c0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10037998c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11306ef50) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10051562c; end: 1005160b3;  */

/* WARNING: Possible PIC construction at 0x000100515ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515dec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515dfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100515ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051600c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051601c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051602c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051603c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051604c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051605c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051606c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051607c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051608c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100516080) */
/* WARNING: Removing unreachable block (ram,0x000100516070) */
/* WARNING: Removing unreachable block (ram,0x000100516060) */
/* WARNING: Removing unreachable block (ram,0x000100516050) */
/* WARNING: Removing unreachable block (ram,0x000100516040) */
/* WARNING: Removing unreachable block (ram,0x000100516030) */
/* WARNING: Removing unreachable block (ram,0x000100516020) */
/* WARNING: Removing unreachable block (ram,0x000100516010) */
/* WARNING: Removing unreachable block (ram,0x000100516000) */
/* WARNING: Removing unreachable block (ram,0x000100515ff0) */
/* WARNING: Removing unreachable block (ram,0x000100515fe0) */
/* WARNING: Removing unreachable block (ram,0x000100515fd0) */
/* WARNING: Removing unreachable block (ram,0x000100515fc0) */
/* WARNING: Removing unreachable block (ram,0x000100515fb0) */
/* WARNING: Removing unreachable block (ram,0x000100515fa0) */
/* WARNING: Removing unreachable block (ram,0x000100515f90) */
/* WARNING: Removing unreachable block (ram,0x000100515f80) */
/* WARNING: Removing unreachable block (ram,0x000100515f70) */
/* WARNING: Removing unreachable block (ram,0x000100515f60) */
/* WARNING: Removing unreachable block (ram,0x000100515f50) */
/* WARNING: Removing unreachable block (ram,0x000100515f40) */
/* WARNING: Removing unreachable block (ram,0x000100515f30) */
/* WARNING: Removing unreachable block (ram,0x000100515f20) */
/* WARNING: Removing unreachable block (ram,0x000100515f10) */
/* WARNING: Removing unreachable block (ram,0x000100515f00) */
/* WARNING: Removing unreachable block (ram,0x000100515ef0) */
/* WARNING: Removing unreachable block (ram,0x000100515ee0) */
/* WARNING: Removing unreachable block (ram,0x000100515ed0) */
/* WARNING: Removing unreachable block (ram,0x000100515ec0) */
/* WARNING: Removing unreachable block (ram,0x000100515eb0) */
/* WARNING: Removing unreachable block (ram,0x000100515ea0) */
/* WARNING: Removing unreachable block (ram,0x000100515e90) */
/* WARNING: Removing unreachable block (ram,0x000100515e80) */
/* WARNING: Removing unreachable block (ram,0x000100515e70) */
/* WARNING: Removing unreachable block (ram,0x000100515e60) */
/* WARNING: Removing unreachable block (ram,0x000100515e50) */
/* WARNING: Removing unreachable block (ram,0x000100515e40) */
/* WARNING: Removing unreachable block (ram,0x000100515e30) */
/* WARNING: Removing unreachable block (ram,0x000100515e20) */
/* WARNING: Removing unreachable block (ram,0x000100515e10) */
/* WARNING: Removing unreachable block (ram,0x000100515e00) */
/* WARNING: Removing unreachable block (ram,0x000100515df0) */
/* WARNING: Removing unreachable block (ram,0x000100515de0) */
/* WARNING: Removing unreachable block (ram,0x000100515dd0) */
/* WARNING: Removing unreachable block (ram,0x000100515dc0) */
/* WARNING: Removing unreachable block (ram,0x000100515db0) */
/* WARNING: Removing unreachable block (ram,0x000100515da0) */
/* WARNING: Removing unreachable block (ram,0x000100515d90) */
/* WARNING: Removing unreachable block (ram,0x000100515d80) */
/* WARNING: Removing unreachable block (ram,0x000100515d70) */
/* WARNING: Removing unreachable block (ram,0x000100515d60) */
/* WARNING: Removing unreachable block (ram,0x000100515d50) */
/* WARNING: Removing unreachable block (ram,0x000100515d40) */
/* WARNING: Removing unreachable block (ram,0x000100515d30) */
/* WARNING: Removing unreachable block (ram,0x000100515d20) */
/* WARNING: Removing unreachable block (ram,0x000100515d10) */
/* WARNING: Removing unreachable block (ram,0x000100515d00) */
/* WARNING: Removing unreachable block (ram,0x000100515cf0) */
/* WARNING: Removing unreachable block (ram,0x000100515ce0) */
/* WARNING: Removing unreachable block (ram,0x000100515cd0) */
/* WARNING: Removing unreachable block (ram,0x000100516090) */

void FUN_10051562c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  
  puVar1 = &UNK_110513d68;
  func_0x000107c613fc(&UNK_110513d68,0x3e0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  uVar2 = 0x112e9ef28;
  FUN_1000285a8(0x112e9ef28,&UNK_10daafc88);
  func_0x000107c613fc();
  puVar3 = &UNK_1024b4320;
  FUN_1000841f8(&UNK_1024b4320,puVar1,uVar2);
  FUN_100084214(&UNK_10daafc60,0x27,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1005160b4; end: 1005160b7;  */

void FUN_1005160b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005160b8; end: 10051629f;  */

void FUN_1005160b8(void)

{
  long unaff_x20;
  
  FUN_10051562c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1005162a0; end: 1005162a3;  */

void FUN_1005162a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005162a4; end: 10051668f;  */

void FUN_1005162a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100516690; end: 100516697;  */

void FUN_100516690(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100516698; end: 100516937;  */

void FUN_100516698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  FUN_1000285a8(0x112f31a08,&UNK_10db77ef8);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  uVar2 = param_4;
  func_0x000107c6157c(param_4);
  FUN_1003b3b80();
  puVar1 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ac990;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0516f0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar3);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f118a80);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 100516938; end: 100516a8f; -[SCSpotlightLaunchServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516938(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ce9b0;
  func_0x000107c610f4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127526f0);
  func_0x000107c51968(uVar2);
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_1127526f4;
  func_0x000107c61148(lVar3);
  param_1 = param_1 + _DAT_1127526f8;
  func_0x000107c61148(param_1);
  lVar4 = param_1;
  func_0x000107c5bf3c();
  func_0x000107c61180();
  func_0x000107c48954(puVar1,param_2,uVar2,lVar3,lVar4);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_106898eb8;
  puStack_50 = &UNK_110946318;
  puStack_48 = puVar1;
  func_0x000107c61174(puVar1);
  func_0x000107c3e4fc(puVar5,param_2,&puStack_68);
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126ce9b8;
  func_0x000107c610f4(PTR_PTR_1126ce9b8);
  func_0x000107c4784c();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puStack_48);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 100516a90; end: 100516a9f; -[SCMultiScopeExposerProxy scopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516a90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c150770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112787cdc),PTR_s_scopeExposer_112631bf8);
  return;
}



/* Entry: 100516aa0; end: 100516b57;  */

void FUN_100516aa0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100516ad4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100516b58; end: 100516c23; -[SCModularSpotlightLauncherImpl initWithSpotlightScopeExposer:spotlightScopeServices:storiesConfigProvider:] */

undefined1 *
FUN_100516b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126f3a40;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100516c24; end: 100516c7b; -[_TtC25SCSpotlightLaunchServices25SCSpotlightLaunchServices initWithModularSpotlightLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516c24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112feb6a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100516c7c; end: 100516cb7;  */

void FUN_100516c7c(void)

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



/* Entry: 100516cb8; end: 100516cbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516cb8(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100382f24();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130766f0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100516cc0; end: 100516d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100516cc0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100382f24();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130766f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100516d2c; end: 100516f47;  */

void FUN_100516d2c(void)

{
  long unaff_x20;
  
  FUN_100516f48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 100516f48; end: 100517a5f;  */

/* WARNING: Possible PIC construction at 0x000100517648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517658: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005176f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517728: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517748: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517758: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517778: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517798: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005177f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517888: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005178f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005179f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517a08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517a28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100517a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100517a2c) */
/* WARNING: Removing unreachable block (ram,0x000100517a1c) */
/* WARNING: Removing unreachable block (ram,0x000100517a0c) */
/* WARNING: Removing unreachable block (ram,0x0001005179fc) */
/* WARNING: Removing unreachable block (ram,0x0001005179ec) */
/* WARNING: Removing unreachable block (ram,0x0001005179dc) */
/* WARNING: Removing unreachable block (ram,0x0001005179cc) */
/* WARNING: Removing unreachable block (ram,0x0001005179bc) */
/* WARNING: Removing unreachable block (ram,0x0001005179ac) */
/* WARNING: Removing unreachable block (ram,0x00010051799c) */
/* WARNING: Removing unreachable block (ram,0x00010051798c) */
/* WARNING: Removing unreachable block (ram,0x00010051797c) */
/* WARNING: Removing unreachable block (ram,0x00010051796c) */
/* WARNING: Removing unreachable block (ram,0x00010051795c) */
/* WARNING: Removing unreachable block (ram,0x00010051794c) */
/* WARNING: Removing unreachable block (ram,0x00010051793c) */
/* WARNING: Removing unreachable block (ram,0x00010051792c) */
/* WARNING: Removing unreachable block (ram,0x00010051791c) */
/* WARNING: Removing unreachable block (ram,0x00010051790c) */
/* WARNING: Removing unreachable block (ram,0x0001005178fc) */
/* WARNING: Removing unreachable block (ram,0x0001005178ec) */
/* WARNING: Removing unreachable block (ram,0x0001005178dc) */
/* WARNING: Removing unreachable block (ram,0x0001005178cc) */
/* WARNING: Removing unreachable block (ram,0x0001005178bc) */
/* WARNING: Removing unreachable block (ram,0x0001005178ac) */
/* WARNING: Removing unreachable block (ram,0x00010051789c) */
/* WARNING: Removing unreachable block (ram,0x00010051788c) */
/* WARNING: Removing unreachable block (ram,0x00010051787c) */
/* WARNING: Removing unreachable block (ram,0x00010051786c) */
/* WARNING: Removing unreachable block (ram,0x00010051785c) */
/* WARNING: Removing unreachable block (ram,0x00010051784c) */
/* WARNING: Removing unreachable block (ram,0x00010051783c) */
/* WARNING: Removing unreachable block (ram,0x00010051782c) */
/* WARNING: Removing unreachable block (ram,0x00010051781c) */
/* WARNING: Removing unreachable block (ram,0x00010051780c) */
/* WARNING: Removing unreachable block (ram,0x0001005177fc) */
/* WARNING: Removing unreachable block (ram,0x0001005177ec) */
/* WARNING: Removing unreachable block (ram,0x0001005177dc) */
/* WARNING: Removing unreachable block (ram,0x0001005177cc) */
/* WARNING: Removing unreachable block (ram,0x0001005177bc) */
/* WARNING: Removing unreachable block (ram,0x0001005177ac) */
/* WARNING: Removing unreachable block (ram,0x00010051779c) */
/* WARNING: Removing unreachable block (ram,0x00010051778c) */
/* WARNING: Removing unreachable block (ram,0x00010051777c) */
/* WARNING: Removing unreachable block (ram,0x00010051776c) */
/* WARNING: Removing unreachable block (ram,0x00010051775c) */
/* WARNING: Removing unreachable block (ram,0x00010051774c) */
/* WARNING: Removing unreachable block (ram,0x00010051773c) */
/* WARNING: Removing unreachable block (ram,0x00010051772c) */
/* WARNING: Removing unreachable block (ram,0x00010051771c) */
/* WARNING: Removing unreachable block (ram,0x00010051770c) */
/* WARNING: Removing unreachable block (ram,0x0001005176fc) */
/* WARNING: Removing unreachable block (ram,0x0001005176ec) */
/* WARNING: Removing unreachable block (ram,0x0001005176dc) */
/* WARNING: Removing unreachable block (ram,0x0001005176cc) */
/* WARNING: Removing unreachable block (ram,0x0001005176bc) */
/* WARNING: Removing unreachable block (ram,0x0001005176ac) */
/* WARNING: Removing unreachable block (ram,0x00010051769c) */
/* WARNING: Removing unreachable block (ram,0x00010051768c) */
/* WARNING: Removing unreachable block (ram,0x00010051767c) */
/* WARNING: Removing unreachable block (ram,0x00010051766c) */
/* WARNING: Removing unreachable block (ram,0x00010051765c) */
/* WARNING: Removing unreachable block (ram,0x00010051764c) */
/* WARNING: Removing unreachable block (ram,0x000100517a3c) */

void FUN_100516f48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  
  puVar1 = &UNK_11059a428;
  func_0x000107c613fc(&UNK_11059a428,0x410,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  uVar2 = 0x112eee618;
  FUN_1000285a8(0x112eee618,&UNK_10db1d5b0);
  func_0x000107c613fc();
  pcVar3 = FUN_1005b5ba8;
  FUN_1000841f8(FUN_1005b5ba8,puVar1,uVar2);
  FUN_100084214(&UNK_10db1d580,0x28,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100517a60; end: 100517a67;  */

void FUN_100517a60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100517a68; end: 100517e83;  */

void FUN_100517a68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100517e84; end: 100517e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100517e84(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038b3fc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11307b538) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 100517e8c; end: 100517ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100517e8c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10038b3fc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11307b538) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100517ef8; end: 100518fbf;  */

/* WARNING: Possible PIC construction at 0x0001005189c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005189d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005189e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001005189f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518b90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518cf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518da0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518de0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518df0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518e90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518ef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100518f90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100518f84) */
/* WARNING: Removing unreachable block (ram,0x000100518f74) */
/* WARNING: Removing unreachable block (ram,0x000100518f64) */
/* WARNING: Removing unreachable block (ram,0x000100518f54) */
/* WARNING: Removing unreachable block (ram,0x000100518f44) */
/* WARNING: Removing unreachable block (ram,0x000100518f34) */
/* WARNING: Removing unreachable block (ram,0x000100518f24) */
/* WARNING: Removing unreachable block (ram,0x000100518f14) */
/* WARNING: Removing unreachable block (ram,0x000100518f04) */
/* WARNING: Removing unreachable block (ram,0x000100518ef4) */
/* WARNING: Removing unreachable block (ram,0x000100518ee4) */
/* WARNING: Removing unreachable block (ram,0x000100518ed4) */
/* WARNING: Removing unreachable block (ram,0x000100518ec4) */
/* WARNING: Removing unreachable block (ram,0x000100518eb4) */
/* WARNING: Removing unreachable block (ram,0x000100518ea4) */
/* WARNING: Removing unreachable block (ram,0x000100518e94) */
/* WARNING: Removing unreachable block (ram,0x000100518e84) */
/* WARNING: Removing unreachable block (ram,0x000100518e74) */
/* WARNING: Removing unreachable block (ram,0x000100518e64) */
/* WARNING: Removing unreachable block (ram,0x000100518e54) */
/* WARNING: Removing unreachable block (ram,0x000100518e44) */
/* WARNING: Removing unreachable block (ram,0x000100518e34) */
/* WARNING: Removing unreachable block (ram,0x000100518e24) */
/* WARNING: Removing unreachable block (ram,0x000100518e14) */
/* WARNING: Removing unreachable block (ram,0x000100518e04) */
/* WARNING: Removing unreachable block (ram,0x000100518df4) */
/* WARNING: Removing unreachable block (ram,0x000100518de4) */
/* WARNING: Removing unreachable block (ram,0x000100518dd4) */
/* WARNING: Removing unreachable block (ram,0x000100518dc4) */
/* WARNING: Removing unreachable block (ram,0x000100518db4) */
/* WARNING: Removing unreachable block (ram,0x000100518da4) */
/* WARNING: Removing unreachable block (ram,0x000100518d94) */
/* WARNING: Removing unreachable block (ram,0x000100518d84) */
/* WARNING: Removing unreachable block (ram,0x000100518d74) */
/* WARNING: Removing unreachable block (ram,0x000100518d64) */
/* WARNING: Removing unreachable block (ram,0x000100518d54) */
/* WARNING: Removing unreachable block (ram,0x000100518d44) */
/* WARNING: Removing unreachable block (ram,0x000100518d34) */
/* WARNING: Removing unreachable block (ram,0x000100518d24) */
/* WARNING: Removing unreachable block (ram,0x000100518d14) */
/* WARNING: Removing unreachable block (ram,0x000100518d04) */
/* WARNING: Removing unreachable block (ram,0x000100518cf4) */
/* WARNING: Removing unreachable block (ram,0x000100518ce4) */
/* WARNING: Removing unreachable block (ram,0x000100518cd4) */
/* WARNING: Removing unreachable block (ram,0x000100518cc4) */
/* WARNING: Removing unreachable block (ram,0x000100518cb4) */
/* WARNING: Removing unreachable block (ram,0x000100518ca4) */
/* WARNING: Removing unreachable block (ram,0x000100518c94) */
/* WARNING: Removing unreachable block (ram,0x000100518c84) */
/* WARNING: Removing unreachable block (ram,0x000100518c74) */
/* WARNING: Removing unreachable block (ram,0x000100518c64) */
/* WARNING: Removing unreachable block (ram,0x000100518c54) */
/* WARNING: Removing unreachable block (ram,0x000100518c44) */
/* WARNING: Removing unreachable block (ram,0x000100518c34) */
/* WARNING: Removing unreachable block (ram,0x000100518c24) */
/* WARNING: Removing unreachable block (ram,0x000100518c14) */
/* WARNING: Removing unreachable block (ram,0x000100518c04) */
/* WARNING: Removing unreachable block (ram,0x000100518bf4) */
/* WARNING: Removing unreachable block (ram,0x000100518be4) */
/* WARNING: Removing unreachable block (ram,0x000100518bd4) */
/* WARNING: Removing unreachable block (ram,0x000100518bc4) */
/* WARNING: Removing unreachable block (ram,0x000100518bb4) */
/* WARNING: Removing unreachable block (ram,0x000100518ba4) */
/* WARNING: Removing unreachable block (ram,0x000100518b94) */
/* WARNING: Removing unreachable block (ram,0x000100518b84) */
/* WARNING: Removing unreachable block (ram,0x000100518b74) */
/* WARNING: Removing unreachable block (ram,0x000100518b64) */
/* WARNING: Removing unreachable block (ram,0x000100518b54) */
/* WARNING: Removing unreachable block (ram,0x000100518b44) */
/* WARNING: Removing unreachable block (ram,0x000100518b34) */
/* WARNING: Removing unreachable block (ram,0x000100518b24) */
/* WARNING: Removing unreachable block (ram,0x000100518b14) */
/* WARNING: Removing unreachable block (ram,0x000100518b04) */
/* WARNING: Removing unreachable block (ram,0x000100518af4) */
/* WARNING: Removing unreachable block (ram,0x000100518ae4) */
/* WARNING: Removing unreachable block (ram,0x000100518ad4) */
/* WARNING: Removing unreachable block (ram,0x000100518ac4) */
/* WARNING: Removing unreachable block (ram,0x000100518ab4) */
/* WARNING: Removing unreachable block (ram,0x000100518aa4) */
/* WARNING: Removing unreachable block (ram,0x000100518a94) */
/* WARNING: Removing unreachable block (ram,0x000100518a84) */
/* WARNING: Removing unreachable block (ram,0x000100518a74) */
/* WARNING: Removing unreachable block (ram,0x000100518a64) */
/* WARNING: Removing unreachable block (ram,0x000100518a54) */
/* WARNING: Removing unreachable block (ram,0x000100518a44) */
/* WARNING: Removing unreachable block (ram,0x000100518a34) */
/* WARNING: Removing unreachable block (ram,0x000100518a24) */
/* WARNING: Removing unreachable block (ram,0x000100518a14) */
/* WARNING: Removing unreachable block (ram,0x000100518a04) */
/* WARNING: Removing unreachable block (ram,0x0001005189f4) */
/* WARNING: Removing unreachable block (ram,0x0001005189e4) */
/* WARNING: Removing unreachable block (ram,0x0001005189d4) */
/* WARNING: Removing unreachable block (ram,0x0001005189c4) */
/* WARNING: Removing unreachable block (ram,0x000100518f94) */

void FUN_100517ef8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  
  puVar1 = &UNK_1104c01e0;
  func_0x000107c613fc(&UNK_1104c01e0,0x5f8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_000005a0;
  uVar2 = 0x112e519d8;
  FUN_1000285a8(0x112e519d8,&UNK_10da51a20);
  func_0x000107c613fc();
  puVar3 = &UNK_1020316d0;
  FUN_1000841f8(&UNK_1020316d0,puVar1,uVar2);
  FUN_100084214(&UNK_10da519f0,0x29,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100518fc0; end: 100518fc3;  */

void FUN_100518fc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100518fc4; end: 1005193c7;  */

void FUN_100518fc4(void)

{
  long unaff_x20;
  
  FUN_100517ef8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 1005193c8; end: 1005193cb;  */

void FUN_1005193c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005193cc; end: 1005199cf;  */

void FUN_1005193cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1005199d0; end: 1005199d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005199d0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100387cb8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_11306e188) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 1005199d8; end: 100519a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005199d8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100387cb8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_11306e188) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100519a44; end: 10051a0a3;  */

/* WARNING: Possible PIC construction at 0x000100519e1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519eac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519ebc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519ecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519eec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519efc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519f9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519fac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519fbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519fcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519fdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100519ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a01c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a03c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051a07c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010051a070) */
/* WARNING: Removing unreachable block (ram,0x00010051a060) */
/* WARNING: Removing unreachable block (ram,0x00010051a050) */
/* WARNING: Removing unreachable block (ram,0x00010051a040) */
/* WARNING: Removing unreachable block (ram,0x00010051a030) */
/* WARNING: Removing unreachable block (ram,0x00010051a020) */
/* WARNING: Removing unreachable block (ram,0x00010051a010) */
/* WARNING: Removing unreachable block (ram,0x00010051a000) */
/* WARNING: Removing unreachable block (ram,0x000100519ff0) */
/* WARNING: Removing unreachable block (ram,0x000100519fe0) */
/* WARNING: Removing unreachable block (ram,0x000100519fd0) */
/* WARNING: Removing unreachable block (ram,0x000100519fc0) */
/* WARNING: Removing unreachable block (ram,0x000100519fb0) */
/* WARNING: Removing unreachable block (ram,0x000100519fa0) */
/* WARNING: Removing unreachable block (ram,0x000100519f90) */
/* WARNING: Removing unreachable block (ram,0x000100519f80) */
/* WARNING: Removing unreachable block (ram,0x000100519f70) */
/* WARNING: Removing unreachable block (ram,0x000100519f60) */
/* WARNING: Removing unreachable block (ram,0x000100519f50) */
/* WARNING: Removing unreachable block (ram,0x000100519f40) */
/* WARNING: Removing unreachable block (ram,0x000100519f30) */
/* WARNING: Removing unreachable block (ram,0x000100519f20) */
/* WARNING: Removing unreachable block (ram,0x000100519f10) */
/* WARNING: Removing unreachable block (ram,0x000100519f00) */
/* WARNING: Removing unreachable block (ram,0x000100519ef0) */
/* WARNING: Removing unreachable block (ram,0x000100519ee0) */
/* WARNING: Removing unreachable block (ram,0x000100519ed0) */
/* WARNING: Removing unreachable block (ram,0x000100519ec0) */
/* WARNING: Removing unreachable block (ram,0x000100519eb0) */
/* WARNING: Removing unreachable block (ram,0x000100519ea0) */
/* WARNING: Removing unreachable block (ram,0x000100519e90) */
/* WARNING: Removing unreachable block (ram,0x000100519e80) */
/* WARNING: Removing unreachable block (ram,0x000100519e70) */
/* WARNING: Removing unreachable block (ram,0x000100519e60) */
/* WARNING: Removing unreachable block (ram,0x000100519e50) */
/* WARNING: Removing unreachable block (ram,0x000100519e40) */
/* WARNING: Removing unreachable block (ram,0x000100519e30) */
/* WARNING: Removing unreachable block (ram,0x000100519e20) */
/* WARNING: Removing unreachable block (ram,0x00010051a080) */

void FUN_100519a44(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  
  puVar1 = &UNK_1104b6760;
  func_0x000107c613fc(&UNK_1104b6760,0x280,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  uVar2 = 0x112e4cf60;
  FUN_1000285a8(0x112e4cf60,&UNK_10da47450);
  func_0x000107c613fc();
  puVar3 = &UNK_101fdb6dc;
  FUN_1000841f8(&UNK_101fdb6dc,puVar1,uVar2);
  FUN_100084214(&UNK_10da47420,0x2a,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10051a0a4; end: 10051a0a7;  */

void FUN_10051a0a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051a0a8; end: 10051a1a3;  */

void FUN_10051a0a8(void)

{
  long unaff_x20;
  
  FUN_100519a44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10051a1a4; end: 10051a1a7;  */

void FUN_10051a1a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051a1a8; end: 10051a433;  */

void FUN_10051a1a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051a434; end: 10051a43b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051a434(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100385fb8();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130835d0) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10051a43c; end: 10051a4a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051a43c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100385fb8();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130835d0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10051a4a8; end: 10051ab13;  */

void FUN_10051a4a8(void)

{
  long unaff_x20;
  
  FUN_10051ab14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0),*(undefined8 *)(unaff_x20 + 0x1e8),
                *(undefined8 *)(unaff_x20 + 0x1f0),*(undefined8 *)(unaff_x20 + 0x1f8),
                *(undefined8 *)(unaff_x20 + 0x200),*(undefined8 *)(unaff_x20 + 0x208),
                *(undefined8 *)(unaff_x20 + 0x210),*(undefined8 *)(unaff_x20 + 0x218),
                *(undefined8 *)(unaff_x20 + 0x220),*(undefined8 *)(unaff_x20 + 0x228),
                *(undefined8 *)(unaff_x20 + 0x230),*(undefined8 *)(unaff_x20 + 0x238));
  return;
}



/* Entry: 10051ab14; end: 10051c317;  */

/* WARNING: Possible PIC construction at 0x00010051bab0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051baf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bb90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bbb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bbd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bbf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bc90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bcb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bcc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bcf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bdb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bdd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bdf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051be90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051beb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bef0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bf90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bfb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bfd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bfe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051bff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c050: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c0f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c260: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010051c2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010051c2e4) */
/* WARNING: Removing unreachable block (ram,0x00010051c2d4) */
/* WARNING: Removing unreachable block (ram,0x00010051c2c4) */
/* WARNING: Removing unreachable block (ram,0x00010051c2b4) */
/* WARNING: Removing unreachable block (ram,0x00010051c2a4) */
/* WARNING: Removing unreachable block (ram,0x00010051c294) */
/* WARNING: Removing unreachable block (ram,0x00010051c284) */
/* WARNING: Removing unreachable block (ram,0x00010051c274) */
/* WARNING: Removing unreachable block (ram,0x00010051c264) */
/* WARNING: Removing unreachable block (ram,0x00010051c254) */
/* WARNING: Removing unreachable block (ram,0x00010051c244) */
/* WARNING: Removing unreachable block (ram,0x00010051c234) */
/* WARNING: Removing unreachable block (ram,0x00010051c224) */
/* WARNING: Removing unreachable block (ram,0x00010051c214) */
/* WARNING: Removing unreachable block (ram,0x00010051c204) */
/* WARNING: Removing unreachable block (ram,0x00010051c1f4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1e4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1d4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1c4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1b4) */
/* WARNING: Removing unreachable block (ram,0x00010051c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010051c194) */
/* WARNING: Removing unreachable block (ram,0x00010051c184) */
/* WARNING: Removing unreachable block (ram,0x00010051c174) */
/* WARNING: Removing unreachable block (ram,0x00010051c164) */
/* WARNING: Removing unreachable block (ram,0x00010051c154) */
/* WARNING: Removing unreachable block (ram,0x00010051c144) */
/* WARNING: Removing unreachable block (ram,0x00010051c134) */
/* WARNING: Removing unreachable block (ram,0x00010051c124) */
/* WARNING: Removing unreachable block (ram,0x00010051c114) */
/* WARNING: Removing unreachable block (ram,0x00010051c104) */
/* WARNING: Removing unreachable block (ram,0x00010051c0f4) */
/* WARNING: Removing unreachable block (ram,0x00010051c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010051c0d4) */
/* WARNING: Removing unreachable block (ram,0x00010051c0c4) */
/* WARNING: Removing unreachable block (ram,0x00010051c0b4) */
/* WARNING: Removing unreachable block (ram,0x00010051c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010051c094) */
/* WARNING: Removing unreachable block (ram,0x00010051c084) */
/* WARNING: Removing unreachable block (ram,0x00010051c074) */
/* WARNING: Removing unreachable block (ram,0x00010051c064) */
/* WARNING: Removing unreachable block (ram,0x00010051c054) */
/* WARNING: Removing unreachable block (ram,0x00010051c044) */
/* WARNING: Removing unreachable block (ram,0x00010051c034) */
/* WARNING: Removing unreachable block (ram,0x00010051c024) */
/* WARNING: Removing unreachable block (ram,0x00010051c014) */
/* WARNING: Removing unreachable block (ram,0x00010051c004) */
/* WARNING: Removing unreachable block (ram,0x00010051bff4) */
/* WARNING: Removing unreachable block (ram,0x00010051bfe4) */
/* WARNING: Removing unreachable block (ram,0x00010051bfd4) */
/* WARNING: Removing unreachable block (ram,0x00010051bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010051bfb4) */
/* WARNING: Removing unreachable block (ram,0x00010051bfa4) */
/* WARNING: Removing unreachable block (ram,0x00010051bf94) */
/* WARNING: Removing unreachable block (ram,0x00010051bf84) */
/* WARNING: Removing unreachable block (ram,0x00010051bf74) */
/* WARNING: Removing unreachable block (ram,0x00010051bf64) */
/* WARNING: Removing unreachable block (ram,0x00010051bf54) */
/* WARNING: Removing unreachable block (ram,0x00010051bf44) */
/* WARNING: Removing unreachable block (ram,0x00010051bf34) */
/* WARNING: Removing unreachable block (ram,0x00010051bf24) */
/* WARNING: Removing unreachable block (ram,0x00010051bf14) */
/* WARNING: Removing unreachable block (ram,0x00010051bf04) */
/* WARNING: Removing unreachable block (ram,0x00010051bef4) */
/* WARNING: Removing unreachable block (ram,0x00010051bee4) */
/* WARNING: Removing unreachable block (ram,0x00010051bed4) */
/* WARNING: Removing unreachable block (ram,0x00010051bec4) */
/* WARNING: Removing unreachable block (ram,0x00010051beb4) */
/* WARNING: Removing unreachable block (ram,0x00010051bea4) */
/* WARNING: Removing unreachable block (ram,0x00010051be94) */
/* WARNING: Removing unreachable block (ram,0x00010051be84) */
/* WARNING: Removing unreachable block (ram,0x00010051be74) */
/* WARNING: Removing unreachable block (ram,0x00010051be64) */
/* WARNING: Removing unreachable block (ram,0x00010051be54) */
/* WARNING: Removing unreachable block (ram,0x00010051be44) */
/* WARNING: Removing unreachable block (ram,0x00010051be34) */
/* WARNING: Removing unreachable block (ram,0x00010051be24) */
/* WARNING: Removing unreachable block (ram,0x00010051be14) */
/* WARNING: Removing unreachable block (ram,0x00010051be04) */
/* WARNING: Removing unreachable block (ram,0x00010051bdf4) */
/* WARNING: Removing unreachable block (ram,0x00010051bde4) */
/* WARNING: Removing unreachable block (ram,0x00010051bdd4) */
/* WARNING: Removing unreachable block (ram,0x00010051bdc4) */
/* WARNING: Removing unreachable block (ram,0x00010051bdb4) */
/* WARNING: Removing unreachable block (ram,0x00010051bda4) */
/* WARNING: Removing unreachable block (ram,0x00010051bd94) */
/* WARNING: Removing unreachable block (ram,0x00010051bd84) */
/* WARNING: Removing unreachable block (ram,0x00010051bd74) */
/* WARNING: Removing unreachable block (ram,0x00010051bd64) */
/* WARNING: Removing unreachable block (ram,0x00010051bd54) */
/* WARNING: Removing unreachable block (ram,0x00010051bd44) */
/* WARNING: Removing unreachable block (ram,0x00010051bd34) */
/* WARNING: Removing unreachable block (ram,0x00010051bd24) */
/* WARNING: Removing unreachable block (ram,0x00010051bd14) */
/* WARNING: Removing unreachable block (ram,0x00010051bd04) */
/* WARNING: Removing unreachable block (ram,0x00010051bcf4) */
/* WARNING: Removing unreachable block (ram,0x00010051bce4) */
/* WARNING: Removing unreachable block (ram,0x00010051bcd4) */
/* WARNING: Removing unreachable block (ram,0x00010051bcc4) */
/* WARNING: Removing unreachable block (ram,0x00010051bcb4) */
/* WARNING: Removing unreachable block (ram,0x00010051bca4) */
/* WARNING: Removing unreachable block (ram,0x00010051bc94) */
/* WARNING: Removing unreachable block (ram,0x00010051bc84) */
/* WARNING: Removing unreachable block (ram,0x00010051bc74) */
/* WARNING: Removing unreachable block (ram,0x00010051bc64) */
/* WARNING: Removing unreachable block (ram,0x00010051bc54) */
/* WARNING: Removing unreachable block (ram,0x00010051bc44) */
/* WARNING: Removing unreachable block (ram,0x00010051bc34) */
/* WARNING: Removing unreachable block (ram,0x00010051bc24) */
/* WARNING: Removing unreachable block (ram,0x00010051bc14) */
/* WARNING: Removing unreachable block (ram,0x00010051bc04) */
/* WARNING: Removing unreachable block (ram,0x00010051bbf4) */
/* WARNING: Removing unreachable block (ram,0x00010051bbe4) */
/* WARNING: Removing unreachable block (ram,0x00010051bbd4) */
/* WARNING: Removing unreachable block (ram,0x00010051bbc4) */
/* WARNING: Removing unreachable block (ram,0x00010051bbb4) */
/* WARNING: Removing unreachable block (ram,0x00010051bba4) */
/* WARNING: Removing unreachable block (ram,0x00010051bb94) */
/* WARNING: Removing unreachable block (ram,0x00010051bb84) */
/* WARNING: Removing unreachable block (ram,0x00010051bb74) */
/* WARNING: Removing unreachable block (ram,0x00010051bb64) */
/* WARNING: Removing unreachable block (ram,0x00010051bb54) */
/* WARNING: Removing unreachable block (ram,0x00010051bb44) */
/* WARNING: Removing unreachable block (ram,0x00010051bb34) */
/* WARNING: Removing unreachable block (ram,0x00010051bb24) */
/* WARNING: Removing unreachable block (ram,0x00010051bb14) */
/* WARNING: Removing unreachable block (ram,0x00010051bb04) */
/* WARNING: Removing unreachable block (ram,0x00010051baf4) */
/* WARNING: Removing unreachable block (ram,0x00010051bae4) */
/* WARNING: Removing unreachable block (ram,0x00010051bad4) */
/* WARNING: Removing unreachable block (ram,0x00010051bac4) */
/* WARNING: Removing unreachable block (ram,0x00010051bab4) */
/* WARNING: Removing unreachable block (ram,0x00010051c2f4) */

void FUN_10051ab14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70,undefined8 param_71)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  undefined8 in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined8 in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined8 in_stack_00000318;
  undefined8 in_stack_00000320;
  undefined8 in_stack_00000328;
  undefined8 in_stack_00000330;
  undefined8 in_stack_00000338;
  undefined8 in_stack_00000340;
  undefined8 in_stack_00000348;
  undefined8 in_stack_00000350;
  undefined8 in_stack_00000358;
  undefined8 in_stack_00000360;
  undefined8 in_stack_00000368;
  undefined8 in_stack_00000370;
  undefined8 in_stack_00000378;
  undefined8 in_stack_00000380;
  undefined8 in_stack_00000388;
  undefined8 in_stack_00000390;
  undefined8 in_stack_00000398;
  undefined8 in_stack_000003a0;
  undefined8 in_stack_000003a8;
  undefined8 in_stack_000003b0;
  undefined8 in_stack_000003b8;
  undefined8 in_stack_000003c0;
  undefined8 in_stack_000003c8;
  undefined8 in_stack_000003d0;
  undefined8 in_stack_000003d8;
  undefined8 in_stack_000003e0;
  undefined8 in_stack_000003e8;
  undefined8 in_stack_000003f0;
  undefined8 in_stack_000003f8;
  undefined8 in_stack_00000400;
  undefined8 in_stack_00000408;
  undefined8 in_stack_00000410;
  undefined8 in_stack_00000418;
  undefined8 in_stack_00000420;
  undefined8 in_stack_00000428;
  undefined8 in_stack_00000430;
  undefined8 in_stack_00000438;
  undefined8 in_stack_00000440;
  undefined8 in_stack_00000448;
  undefined8 in_stack_00000450;
  undefined8 in_stack_00000458;
  undefined8 in_stack_00000460;
  undefined8 in_stack_00000468;
  undefined8 in_stack_00000470;
  undefined8 in_stack_00000478;
  undefined8 in_stack_00000480;
  undefined8 in_stack_00000488;
  undefined8 in_stack_00000490;
  undefined8 in_stack_00000498;
  undefined8 in_stack_000004a0;
  undefined8 in_stack_000004a8;
  undefined8 in_stack_000004b0;
  undefined8 in_stack_000004b8;
  undefined8 in_stack_000004c0;
  undefined8 in_stack_000004c8;
  undefined8 in_stack_000004d0;
  undefined8 in_stack_000004d8;
  undefined8 in_stack_000004e0;
  undefined8 in_stack_000004e8;
  undefined8 in_stack_000004f0;
  undefined8 in_stack_000004f8;
  undefined8 in_stack_00000500;
  undefined8 in_stack_00000508;
  undefined8 in_stack_00000510;
  undefined8 in_stack_00000518;
  undefined8 in_stack_00000520;
  undefined8 in_stack_00000528;
  undefined8 in_stack_00000530;
  undefined8 in_stack_00000538;
  undefined8 in_stack_00000540;
  undefined8 in_stack_00000548;
  undefined8 in_stack_00000550;
  undefined8 in_stack_00000558;
  undefined8 in_stack_00000560;
  undefined8 in_stack_00000568;
  undefined8 in_stack_00000570;
  undefined8 in_stack_00000578;
  undefined8 in_stack_00000580;
  undefined8 in_stack_00000588;
  undefined8 in_stack_00000590;
  undefined8 in_stack_00000598;
  undefined8 in_stack_000005a0;
  undefined8 in_stack_000005a8;
  undefined8 in_stack_000005b0;
  undefined8 in_stack_000005b8;
  undefined8 in_stack_000005c0;
  undefined8 in_stack_000005c8;
  undefined8 in_stack_000005d0;
  undefined8 in_stack_000005d8;
  undefined8 in_stack_000005e0;
  undefined8 in_stack_000005e8;
  undefined8 in_stack_000005f0;
  undefined8 in_stack_000005f8;
  undefined8 in_stack_00000600;
  undefined8 in_stack_00000608;
  undefined8 in_stack_00000610;
  undefined8 in_stack_00000618;
  undefined8 in_stack_00000620;
  undefined8 in_stack_00000628;
  undefined8 in_stack_00000630;
  undefined8 in_stack_00000638;
  undefined8 in_stack_00000640;
  undefined8 in_stack_00000648;
  undefined8 in_stack_00000650;
  undefined8 in_stack_00000658;
  undefined8 in_stack_00000660;
  undefined8 in_stack_00000668;
  undefined8 in_stack_00000670;
  undefined8 in_stack_00000678;
  undefined8 in_stack_00000680;
  undefined8 in_stack_00000688;
  undefined8 in_stack_00000690;
  undefined8 in_stack_00000698;
  undefined8 in_stack_000006a0;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  undefined8 in_stack_000006b8;
  undefined8 in_stack_000006c0;
  undefined8 in_stack_000006c8;
  undefined8 in_stack_000006d0;
  undefined8 in_stack_000006d8;
  undefined8 in_stack_000006e0;
  undefined8 in_stack_000006e8;
  undefined8 in_stack_000006f0;
  undefined8 in_stack_000006f8;
  undefined8 in_stack_00000700;
  undefined8 in_stack_00000708;
  undefined8 in_stack_00000710;
  undefined8 in_stack_00000718;
  undefined8 in_stack_00000720;
  undefined8 in_stack_00000728;
  undefined8 in_stack_00000730;
  undefined8 in_stack_00000738;
  undefined8 in_stack_00000740;
  undefined8 in_stack_00000748;
  undefined8 in_stack_00000750;
  undefined8 in_stack_00000758;
  undefined8 in_stack_00000760;
  undefined8 in_stack_00000768;
  undefined8 in_stack_00000770;
  undefined8 in_stack_00000778;
  undefined8 in_stack_00000780;
  undefined8 in_stack_00000788;
  undefined8 in_stack_00000790;
  undefined8 in_stack_00000798;
  undefined8 in_stack_000007a0;
  undefined8 in_stack_000007a8;
  undefined8 in_stack_000007b0;
  undefined8 in_stack_000007b8;
  undefined8 in_stack_000007c0;
  undefined8 in_stack_000007c8;
  undefined8 in_stack_000007d0;
  undefined8 in_stack_000007d8;
  undefined8 in_stack_000007e0;
  undefined8 in_stack_000007e8;
  undefined8 in_stack_000007f0;
  undefined8 in_stack_000007f8;
  undefined8 in_stack_00000800;
  undefined8 in_stack_00000808;
  
  puVar1 = &UNK_11054f0b8;
  func_0x000107c613fc(&UNK_11054f0b8,0x860,7);
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  *(undefined8 *)(puVar1 + 0x1c0) = param_56;
  *(undefined8 *)(puVar1 + 0x1c8) = param_57;
  *(undefined8 *)(puVar1 + 0x1d0) = param_58;
  *(undefined8 *)(puVar1 + 0x1d8) = param_59;
  *(undefined8 *)(puVar1 + 0x1e0) = param_60;
  *(undefined8 *)(puVar1 + 0x1e8) = param_61;
  *(undefined8 *)(puVar1 + 0x1f0) = param_62;
  *(undefined8 *)(puVar1 + 0x1f8) = param_63;
  *(undefined8 *)(puVar1 + 0x200) = param_64;
  *(undefined8 *)(puVar1 + 0x208) = param_65;
  *(undefined8 *)(puVar1 + 0x210) = param_66;
  *(undefined8 *)(puVar1 + 0x218) = param_67;
  *(undefined8 *)(puVar1 + 0x220) = param_68;
  *(undefined8 *)(puVar1 + 0x228) = param_69;
  *(undefined8 *)(puVar1 + 0x230) = param_70;
  *(undefined8 *)(puVar1 + 0x238) = param_71;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  *(undefined8 *)(puVar1 + 0x2b8) = in_stack_00000268;
  *(undefined8 *)(puVar1 + 0x2c0) = in_stack_00000270;
  *(undefined8 *)(puVar1 + 0x2c8) = in_stack_00000278;
  *(undefined8 *)(puVar1 + 0x2d0) = in_stack_00000280;
  *(undefined8 *)(puVar1 + 0x2d8) = in_stack_00000288;
  *(undefined8 *)(puVar1 + 0x2e0) = in_stack_00000290;
  *(undefined8 *)(puVar1 + 0x2e8) = in_stack_00000298;
  *(undefined8 *)(puVar1 + 0x2f0) = in_stack_000002a0;
  *(undefined8 *)(puVar1 + 0x2f8) = in_stack_000002a8;
  *(undefined8 *)(puVar1 + 0x300) = in_stack_000002b0;
  *(undefined8 *)(puVar1 + 0x308) = in_stack_000002b8;
  *(undefined8 *)(puVar1 + 0x310) = in_stack_000002c0;
  *(undefined8 *)(puVar1 + 0x318) = in_stack_000002c8;
  *(undefined8 *)(puVar1 + 800) = in_stack_000002d0;
  *(undefined8 *)(puVar1 + 0x328) = in_stack_000002d8;
  *(undefined8 *)(puVar1 + 0x330) = in_stack_000002e0;
  *(undefined8 *)(puVar1 + 0x338) = in_stack_000002e8;
  *(undefined8 *)(puVar1 + 0x340) = in_stack_000002f0;
  *(undefined8 *)(puVar1 + 0x348) = in_stack_000002f8;
  *(undefined8 *)(puVar1 + 0x350) = in_stack_00000300;
  *(undefined8 *)(puVar1 + 0x358) = in_stack_00000308;
  *(undefined8 *)(puVar1 + 0x360) = in_stack_00000310;
  *(undefined8 *)(puVar1 + 0x368) = in_stack_00000318;
  *(undefined8 *)(puVar1 + 0x370) = in_stack_00000320;
  *(undefined8 *)(puVar1 + 0x378) = in_stack_00000328;
  *(undefined8 *)(puVar1 + 0x380) = in_stack_00000330;
  *(undefined8 *)(puVar1 + 0x388) = in_stack_00000338;
  *(undefined8 *)(puVar1 + 0x390) = in_stack_00000340;
  *(undefined8 *)(puVar1 + 0x398) = in_stack_00000348;
  *(undefined8 *)(puVar1 + 0x3a0) = in_stack_00000350;
  *(undefined8 *)(puVar1 + 0x3a8) = in_stack_00000358;
  *(undefined8 *)(puVar1 + 0x3b0) = in_stack_00000360;
  *(undefined8 *)(puVar1 + 0x3b8) = in_stack_00000368;
  *(undefined8 *)(puVar1 + 0x3c0) = in_stack_00000370;
  *(undefined8 *)(puVar1 + 0x3c8) = in_stack_00000378;
  *(undefined8 *)(puVar1 + 0x3d0) = in_stack_00000380;
  *(undefined8 *)(puVar1 + 0x3d8) = in_stack_00000388;
  *(undefined8 *)(puVar1 + 0x3e0) = in_stack_00000390;
  *(undefined8 *)(puVar1 + 1000) = in_stack_00000398;
  *(undefined8 *)(puVar1 + 0x3f0) = in_stack_000003a0;
  *(undefined8 *)(puVar1 + 0x3f8) = in_stack_000003a8;
  *(undefined8 *)(puVar1 + 0x400) = in_stack_000003b0;
  *(undefined8 *)(puVar1 + 0x408) = in_stack_000003b8;
  *(undefined8 *)(puVar1 + 0x410) = in_stack_000003c0;
  *(undefined8 *)(puVar1 + 0x418) = in_stack_000003c8;
  *(undefined8 *)(puVar1 + 0x420) = in_stack_000003d0;
  *(undefined8 *)(puVar1 + 0x428) = in_stack_000003d8;
  *(undefined8 *)(puVar1 + 0x430) = in_stack_000003e0;
  *(undefined8 *)(puVar1 + 0x438) = in_stack_000003e8;
  *(undefined8 *)(puVar1 + 0x440) = in_stack_000003f0;
  *(undefined8 *)(puVar1 + 0x448) = in_stack_000003f8;
  *(undefined8 *)(puVar1 + 0x450) = in_stack_00000400;
  *(undefined8 *)(puVar1 + 0x458) = in_stack_00000408;
  *(undefined8 *)(puVar1 + 0x460) = in_stack_00000410;
  *(undefined8 *)(puVar1 + 0x468) = in_stack_00000418;
  *(undefined8 *)(puVar1 + 0x470) = in_stack_00000420;
  *(undefined8 *)(puVar1 + 0x478) = in_stack_00000428;
  *(undefined8 *)(puVar1 + 0x480) = in_stack_00000430;
  *(undefined8 *)(puVar1 + 0x488) = in_stack_00000438;
  *(undefined8 *)(puVar1 + 0x490) = in_stack_00000440;
  *(undefined8 *)(puVar1 + 0x498) = in_stack_00000448;
  *(undefined8 *)(puVar1 + 0x4a0) = in_stack_00000450;
  *(undefined8 *)(puVar1 + 0x4a8) = in_stack_00000458;
  *(undefined8 *)(puVar1 + 0x4b0) = in_stack_00000460;
  *(undefined8 *)(puVar1 + 0x4b8) = in_stack_00000468;
  *(undefined8 *)(puVar1 + 0x4c0) = in_stack_00000470;
  *(undefined8 *)(puVar1 + 0x4c8) = in_stack_00000478;
  *(undefined8 *)(puVar1 + 0x4d0) = in_stack_00000480;
  *(undefined8 *)(puVar1 + 0x4d8) = in_stack_00000488;
  *(undefined8 *)(puVar1 + 0x4e0) = in_stack_00000490;
  *(undefined8 *)(puVar1 + 0x4e8) = in_stack_00000498;
  *(undefined8 *)(puVar1 + 0x4f0) = in_stack_000004a0;
  *(undefined8 *)(puVar1 + 0x4f8) = in_stack_000004a8;
  *(undefined8 *)(puVar1 + 0x500) = in_stack_000004b0;
  *(undefined8 *)(puVar1 + 0x508) = in_stack_000004b8;
  *(undefined8 *)(puVar1 + 0x510) = in_stack_000004c0;
  *(undefined8 *)(puVar1 + 0x518) = in_stack_000004c8;
  *(undefined8 *)(puVar1 + 0x520) = in_stack_000004d0;
  *(undefined8 *)(puVar1 + 0x528) = in_stack_000004d8;
  *(undefined8 *)(puVar1 + 0x530) = in_stack_000004e0;
  *(undefined8 *)(puVar1 + 0x538) = in_stack_000004e8;
  *(undefined8 *)(puVar1 + 0x540) = in_stack_000004f0;
  *(undefined8 *)(puVar1 + 0x548) = in_stack_000004f8;
  *(undefined8 *)(puVar1 + 0x550) = in_stack_00000500;
  *(undefined8 *)(puVar1 + 0x558) = in_stack_00000508;
  *(undefined8 *)(puVar1 + 0x560) = in_stack_00000510;
  *(undefined8 *)(puVar1 + 0x568) = in_stack_00000518;
  *(undefined8 *)(puVar1 + 0x570) = in_stack_00000520;
  *(undefined8 *)(puVar1 + 0x578) = in_stack_00000528;
  *(undefined8 *)(puVar1 + 0x580) = in_stack_00000530;
  *(undefined8 *)(puVar1 + 0x588) = in_stack_00000538;
  *(undefined8 *)(puVar1 + 0x590) = in_stack_00000540;
  *(undefined8 *)(puVar1 + 0x598) = in_stack_00000548;
  *(undefined8 *)(puVar1 + 0x5a0) = in_stack_00000550;
  *(undefined8 *)(puVar1 + 0x5a8) = in_stack_00000558;
  *(undefined8 *)(puVar1 + 0x5b0) = in_stack_00000560;
  *(undefined8 *)(puVar1 + 0x5b8) = in_stack_00000568;
  *(undefined8 *)(puVar1 + 0x5c0) = in_stack_00000570;
  *(undefined8 *)(puVar1 + 0x5c8) = in_stack_00000578;
  *(undefined8 *)(puVar1 + 0x5d0) = in_stack_00000580;
  *(undefined8 *)(puVar1 + 0x5d8) = in_stack_00000588;
  *(undefined8 *)(puVar1 + 0x5e0) = in_stack_00000590;
  *(undefined8 *)(puVar1 + 0x5e8) = in_stack_00000598;
  *(undefined8 *)(puVar1 + 0x5f0) = in_stack_000005a0;
  *(undefined8 *)(puVar1 + 0x5f8) = in_stack_000005a8;
  *(undefined8 *)(puVar1 + 0x600) = in_stack_000005b0;
  *(undefined8 *)(puVar1 + 0x608) = in_stack_000005b8;
  *(undefined8 *)(puVar1 + 0x610) = in_stack_000005c0;
  *(undefined8 *)(puVar1 + 0x618) = in_stack_000005c8;
  *(undefined8 *)(puVar1 + 0x620) = in_stack_000005d0;
  *(undefined8 *)(puVar1 + 0x628) = in_stack_000005d8;
  *(undefined8 *)(puVar1 + 0x630) = in_stack_000005e0;
  *(undefined8 *)(puVar1 + 0x638) = in_stack_000005e8;
  *(undefined8 *)(puVar1 + 0x640) = in_stack_000005f0;
  *(undefined8 *)(puVar1 + 0x648) = in_stack_000005f8;
  *(undefined8 *)(puVar1 + 0x650) = in_stack_00000600;
  *(undefined8 *)(puVar1 + 0x658) = in_stack_00000608;
  *(undefined8 *)(puVar1 + 0x660) = in_stack_00000610;
  *(undefined8 *)(puVar1 + 0x668) = in_stack_00000618;
  *(undefined8 *)(puVar1 + 0x670) = in_stack_00000620;
  *(undefined8 *)(puVar1 + 0x678) = in_stack_00000628;
  *(undefined8 *)(puVar1 + 0x680) = in_stack_00000630;
  *(undefined8 *)(puVar1 + 0x688) = in_stack_00000638;
  *(undefined8 *)(puVar1 + 0x690) = in_stack_00000640;
  *(undefined8 *)(puVar1 + 0x698) = in_stack_00000648;
  *(undefined8 *)(puVar1 + 0x6a0) = in_stack_00000650;
  *(undefined8 *)(puVar1 + 0x6a8) = in_stack_00000658;
  *(undefined8 *)(puVar1 + 0x6b0) = in_stack_00000660;
  *(undefined8 *)(puVar1 + 0x6b8) = in_stack_00000668;
  *(undefined8 *)(puVar1 + 0x6c0) = in_stack_00000670;
  *(undefined8 *)(puVar1 + 0x6c8) = in_stack_00000678;
  *(undefined8 *)(puVar1 + 0x6d0) = in_stack_00000680;
  *(undefined8 *)(puVar1 + 0x6d8) = in_stack_00000688;
  *(undefined8 *)(puVar1 + 0x6e0) = in_stack_00000690;
  *(undefined8 *)(puVar1 + 0x6e8) = in_stack_00000698;
  *(undefined8 *)(puVar1 + 0x6f0) = in_stack_000006a0;
  *(undefined8 *)(puVar1 + 0x6f8) = in_stack_000006a8;
  *(undefined8 *)(puVar1 + 0x700) = in_stack_000006b0;
  *(undefined8 *)(puVar1 + 0x708) = in_stack_000006b8;
  *(undefined8 *)(puVar1 + 0x710) = in_stack_000006c0;
  *(undefined8 *)(puVar1 + 0x718) = in_stack_000006c8;
  *(undefined8 *)(puVar1 + 0x720) = in_stack_000006d0;
  *(undefined8 *)(puVar1 + 0x728) = in_stack_000006d8;
  *(undefined8 *)(puVar1 + 0x730) = in_stack_000006e0;
  *(undefined8 *)(puVar1 + 0x738) = in_stack_000006e8;
  *(undefined8 *)(puVar1 + 0x740) = in_stack_000006f0;
  *(undefined8 *)(puVar1 + 0x748) = in_stack_000006f8;
  *(undefined8 *)(puVar1 + 0x750) = in_stack_00000700;
  *(undefined8 *)(puVar1 + 0x758) = in_stack_00000708;
  *(undefined8 *)(puVar1 + 0x760) = in_stack_00000710;
  *(undefined8 *)(puVar1 + 0x768) = in_stack_00000718;
  *(undefined8 *)(puVar1 + 0x770) = in_stack_00000720;
  *(undefined8 *)(puVar1 + 0x778) = in_stack_00000728;
  *(undefined8 *)(puVar1 + 0x780) = in_stack_00000730;
  *(undefined8 *)(puVar1 + 0x788) = in_stack_00000738;
  *(undefined8 *)(puVar1 + 0x790) = in_stack_00000740;
  *(undefined8 *)(puVar1 + 0x798) = in_stack_00000748;
  *(undefined8 *)(puVar1 + 0x7a0) = in_stack_00000750;
  *(undefined8 *)(puVar1 + 0x7a8) = in_stack_00000758;
  *(undefined8 *)(puVar1 + 0x7b0) = in_stack_00000760;
  *(undefined8 *)(puVar1 + 0x7b8) = in_stack_00000768;
  *(undefined8 *)(puVar1 + 0x7c0) = in_stack_00000770;
  *(undefined8 *)(puVar1 + 0x7c8) = in_stack_00000778;
  *(undefined8 *)(puVar1 + 2000) = in_stack_00000780;
  *(undefined8 *)(puVar1 + 0x7d8) = in_stack_00000788;
  *(undefined8 *)(puVar1 + 0x7e0) = in_stack_00000790;
  *(undefined8 *)(puVar1 + 0x7e8) = in_stack_00000798;
  *(undefined8 *)(puVar1 + 0x7f0) = in_stack_000007a0;
  *(undefined8 *)(puVar1 + 0x7f8) = in_stack_000007a8;
  *(undefined8 *)(puVar1 + 0x800) = in_stack_000007b0;
  *(undefined8 *)(puVar1 + 0x808) = in_stack_000007b8;
  *(undefined8 *)(puVar1 + 0x810) = in_stack_000007c0;
  *(undefined8 *)(puVar1 + 0x818) = in_stack_000007c8;
  *(undefined8 *)(puVar1 + 0x820) = in_stack_000007d0;
  *(undefined8 *)(puVar1 + 0x828) = in_stack_000007d8;
  *(undefined8 *)(puVar1 + 0x830) = in_stack_000007e0;
  *(undefined8 *)(puVar1 + 0x838) = in_stack_000007e8;
  *(undefined8 *)(puVar1 + 0x840) = in_stack_000007f0;
  *(undefined8 *)(puVar1 + 0x848) = in_stack_000007f8;
  *(undefined8 *)(puVar1 + 0x850) = in_stack_00000800;
  *(undefined8 *)(puVar1 + 0x858) = in_stack_00000808;
  uVar2 = 0x112ec03c0;
  FUN_1000285a8(0x112ec03c0,&UNK_10dadde58);
  func_0x000107c613fc();
  puVar3 = &UNK_1027ccc0c;
  FUN_1000841f8(&UNK_1027ccc0c,puVar1,uVar2);
  FUN_100084214(&UNK_10dadde30,0x22,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10051c318; end: 10051c31f;  */

void FUN_10051c318(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051c320; end: 10051cb8b;  */

void FUN_10051c320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x300));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x308));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x310));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x318));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x328));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x330));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x338));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x340));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x348));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x350));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x358));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x360));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x368));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x370));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x378));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x380));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x388));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x390));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x398));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 1000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x3f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x408));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x410));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x418));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x420));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x428));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x430));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x438));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x440));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x448));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x450));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x458));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x460));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x468));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x470));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x478));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x480));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x488));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x490));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x498));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x4f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x500));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x508));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x510));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x518));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x520));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x528));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x530));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x538));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x540));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x548));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x550));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x558));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x560));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x568));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x570));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x578));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x580));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x588));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x590));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x598));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x5f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x608));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x610));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x618));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x620));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x628));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x630));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x638));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x640));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x648));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x650));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x658));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x660));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x668));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x670));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x678));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x680));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x688));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x690));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x698));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x6f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x700));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x708));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x710));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x718));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x720));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x728));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x730));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x738));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x740));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x748));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x750));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x758));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x760));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x768));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x770));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x778));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x780));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x788));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x790));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x798));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 2000));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x7f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x800));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x808));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x810));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x818));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x820));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x828));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x830));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x838));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x840));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x848));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x850));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x858));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10051cb8c; end: 10051cb93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051cb8c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033f6e4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113073f18) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10051cb94; end: 10051cbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051cb94(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_10033f6e4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113073f18) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10051cc00; end: 10051cc0b;  */

/* WARNING: Possible PIC construction at 0x00010051cca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010051ccac) */

void FUN_10051cc00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11061e0d8;
  func_0x000107c613fc(&UNK_11061e0d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112f49e58;
  FUN_1000285a8(0x112f49e58,&UNK_10db98060);
  func_0x000107c613fc();
  puVar4 = &UNK_1031c7314;
  FUN_1000841f8(&UNK_1031c7314,puVar2,uVar3);
  FUN_100084214(&UNK_10db98030,0x2c,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10051cc0c; end: 10051cccb;  */

/* WARNING: Possible PIC construction at 0x00010051cca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010051ccac) */

void FUN_10051cc0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_11061e0d8;
  func_0x000107c613fc(&UNK_11061e0d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f49e58;
  FUN_1000285a8(0x112f49e58,&UNK_10db98060);
  func_0x000107c613fc();
  puVar3 = &UNK_1031c7314;
  FUN_1000841f8(&UNK_1031c7314,puVar1,uVar2);
  FUN_100084214(&UNK_10db98030,0x2c,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10051cccc; end: 10051ccd3;  */

void FUN_10051cccc(void)

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



/* Entry: 10051ccd4; end: 10051cd07;  */

void FUN_10051ccd4(void)

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



/* Entry: 10051cd08; end: 10051cd0f;  */

void FUN_10051cd08(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_100591e8c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100591e54;
  puStack_58 = &UNK_110402790;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_1002164f4(0);
  func_0x000107c610f8();
  FUN_10051ce04(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10051cd10; end: 10051cdef;  */

void FUN_10051cd10(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_100591e8c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100591e54;
  puStack_58 = &UNK_110402790;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar3 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_1002164f4(0);
  func_0x000107c610f8();
  FUN_10051ce04(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 10051cdf0; end: 10051ce03;  */

void FUN_10051cdf0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10051ce04; end: 10051ce4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051ce04(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113046c80) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10051ce50; end: 10051ce57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051ce50(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  FUN_1002d0e24();
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fcd380) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar2;
  return;
}



/* Entry: 10051ce58; end: 10051cebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10051ce58(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1002d0e24();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112fcd380) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}


